//==============================================================================
// File    : mxdotp_fused_engine.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Standalone MXFUSED arithmetic engine - the single-instruction fast path
//   for PLAIN (non-residue) MX formats. See mxdotp_pkg.sv's "fused fast-path
//   engine" milestone header for the full rationale: MXDOTP/MXFINAL are
//   RESIDUE-STYLE FORMATS ONLY as of that milestone; plain MXFP4/MXFP8 never
//   reach mxdotp_dotp_engine.sv or mxdotp_final_engine.sv at all - they come
//   here instead.
//
//   MILESTONE (current): true overlap. Every prior milestone on this engine
//   (the fused fast path itself, then the BACK1/BACK2/BACK3 pipeline cuts
//   for timing closure) still only ever had ONE instruction in the engine
//   at a time - a single busy_q blocked a new one from entering until the
//   old one fully drained through all stages AND was consumed by the core.
//   Real ASIC synthesis (see mxdotp_pkg.sv's own milestone header) showed
//   Fmax was already healthy; the actual throughput loss was serialization
//   - up to 5 cycles per operation with nothing overlapping. This rewrite
//   turns the engine into a genuine 5-register-point pipeline (input
//   capture, contrib_q, sum_q, lead_q, result_data_q) where a NEW
//   instruction can enter the moment there's room, while up to four OLDER
//   ones are simultaneously at different stages of computing.
//
//   FRONT_LATENCY_CYCLES (a correctness-first placeholder wait, unrelated
//   to the front-end's own real timing, which was never the bottleneck) is
//   RETIRED by this milestone, not just left at its minimum: a uniform
//   overlapping pipeline requires every stage to take the same fixed one
//   cycle, so an artificial multi-cycle wait on any one stage isn't just
//   unnecessary any more, it would break the whole design's timing model.
//
//   Every stage now carries its own valid bit plus the {id, rd} of whichever
//   instruction (if any) currently occupies it - the same discipline the
//   XIF's own commit/result interface already uses (id-tagged, in-order),
//   just carried one level deeper, alongside the arithmetic data instead of
//   externally in mxdotp_xif.sv's per-slot registers. This is what makes
//   overlap possible without mxdotp_xif.sv having to track which physical
//   stage each in-flight instruction is in - it only ever sees this
//   engine's OWN oldest result, tagged with its own id/rd, the moment it's
//   ready.
//
//   Backpressure is a single global stall, not per-stage decoupled skid
//   buffers: `stall = result_valid_q && !result_ready_i` (the output stage
//   holds a completed, not-yet-consumed result) freezes every register in
//   the whole engine on that same cycle - nothing advances, nothing new is
//   accepted (ready_o is exactly !stall). Every stage being fixed-1-cycle
//   with no internal data-dependent stalls means the ONLY source of
//   backpressure is the tail end waiting on the caller, so one shared
//   freeze signal gets the full overlap benefit (multiple instructions
//   genuinely computing at once) without the substantially larger
//   verification surface of independent per-stage ready/valid handshakes.
//   The cost: a stall freezes the whole pipe together rather than draining
//   what it still could - a deliberate simplicity/throughput trade, not an
//   oversight.
//
//   A subtlety worth recording because it's easy to get wrong under
//   overlap and would have been invisible with only one instruction ever
//   in flight: rs3 (scales + old accumulator) is captured at the INPUT
//   stage alongside rs1/rs2, but BACK1 doesn't consume it until one stage
//   later, paired with contrib_q. With only one instruction ever in the
//   engine, that was harmless - rs3_q just sat unchanged for the whole
//   journey. Under overlap, the input stage is overwritten by whatever's
//   newly accepted every single cycle, so by the time BACK1 runs, a stale
//   read of rs3_q could belong to a DIFFERENT, newer instruction than the
//   one in contrib_q. rs3 is therefore threaded forward by exactly one
//   register stage of its own (rs3_q1 below), staying aligned with
//   contrib_q instead of being left behind in the input stage.
//
//   Everything else - the MXFP4/MXFP8 front-end, the BACK1/BACK2/BACK3
//   arithmetic itself, the mx_raw_contrib_t/mx_lead_result_t contracts - is
//   UNCHANGED from the previous milestone. This is a control/pipelining
//   change, not an arithmetic one.
//==============================================================================

module mxdotp_fused_engine
    import mxdotp_pkg::*;
#(
    parameter int X_ID_WIDTH  = 4,
    // Real system value is always 64 (mxdotp_core_top.sv -> mxdotp_xif.sv ->
    // here) - this module's MXFP4 front-end is hard-fixed to MX_K=16
    // nibbles per operand (16*4=64 bits) AND rs3's {scales,old_acc} packing
    // needs the full 64 bits too, so 64 is the only value that actually
    // works, not an independent tunable.
    parameter int X_RFR_WIDTH = 64,
    parameter int X_RFW_WIDTH = 32
)
(
    input  logic                    clk_i,
    input  logic                    rst_ni,

    // Accept a new instruction into the pipe THIS cycle. The caller
    // (mxdotp_xif.sv's fused pending-commit queue) is responsible for only
    // asserting this once its own entry has committed (not killed) AND
    // ready_o is high - but this engine also gates internally on !stall
    // (see always_ff below), so a stray start_i during a stall cycle is
    // safely ignored rather than corrupting a stage in flight.
    input  logic                    start_i,
    output logic                    ready_o,      // can accept a new instruction this cycle
    input  logic [X_ID_WIDTH-1:0]   id_i,
    input  logic [4:0]              rd_i,
    input  logic [X_RFR_WIDTH-1:0]  rs1_i,        // A   (dual-read, MX_K elements)
    input  logic [X_RFR_WIDTH-1:0]  rs2_i,        // B   (dual-read, MX_K elements)
    input  logic [X_RFR_WIDTH-1:0]  rs3_i,        // {reserved,b_scale,a_scale} hi / old_acc lo
    input  logic [1:0]              mx_format_i,  // element format (MX_FMT_MXFP4/MXFP8)

    // The engine's oldest in-flight instruction's result, once ready.
    // Standard valid/ready: result_valid_o stays high (holding its data)
    // until result_ready_i is also high on the same cycle - that's the one
    // and only condition under which this engine's output register may be
    // overwritten by whatever's behind it.
    output logic                    result_valid_o,
    input  logic                    result_ready_i,
    output logic [X_ID_WIDTH-1:0]   result_id_o,
    output logic [4:0]              result_rd_o,
    output logic [X_RFW_WIDTH-1:0]  result_data_o
);

  // Elaboration-time guard: MX_K=16 nibbles per operand (front-end) and the
  // {scales,old_acc} packing (back-end) both need the full 64 bits - see
  // mxdotp_dotp_engine.sv's matching guard for why this exists (a standalone
  // Vivado synthesis run of just this module, with no mxdotp_xif.sv around
  // to supply the real override, is exactly the case this catches).
  // synthesis translate_off
  initial begin
    assert (X_RFR_WIDTH >= 64) else
      $error("mxdotp_fused_engine: X_RFR_WIDTH (%0d) must be >= 64 - MX_K=16 nibbles per operand (A/B) and the rs3 {scales,old_acc} packing both need the full 64 bits, this is not a free parameter.",
              X_RFR_WIDTH);
  end
  // synthesis translate_on

  //----------------------------------------------------------------------------
  // Five pipeline register points, each with its own valid/id/rd sideband.
  // Naming pairs each sideband with the datapath register it travels
  // alongside: in_* (input capture), contrib_* (post front-end), sum_*
  // (post BACK1), lead_* (post BACK2), result_* (post BACK3 / output).
  //----------------------------------------------------------------------------

  logic                   in_valid_q;
  logic [X_ID_WIDTH-1:0]  in_id_q;
  logic [4:0]             in_rd_q;
  logic [X_RFR_WIDTH-1:0] rs1_q, rs2_q, rs3_q;
  logic [1:0]             mx_format_q;

  logic                   contrib_valid_q;
  logic [X_ID_WIDTH-1:0]  contrib_id_q;
  logic [4:0]             contrib_rd_q;
  mx_raw_contrib_t        contrib_q;
  logic [X_RFR_WIDTH-1:0] rs3_q1;   // rs3 carried forward one stage to stay
                                     // aligned with contrib_q - see file header.

  logic                   sum_valid_q;
  logic [X_ID_WIDTH-1:0]  sum_id_q;
  logic [4:0]             sum_rd_q;
  logic signed [ACC_FULL_WIDTH-1:0] sum_q;

  logic                   lead_valid_q;
  logic [X_ID_WIDTH-1:0]  lead_id_q;
  logic [4:0]             lead_rd_q;
  mx_lead_result_t        lead_q;

  logic                   result_valid_q;
  logic [X_ID_WIDTH-1:0]  result_id_q;
  logic [4:0]             result_rd_q;
  logic [X_RFW_WIDTH-1:0] result_data_q;

  //----------------------------------------------------------------------------
  // Global stall / ready. The only source of backpressure is the tail:
  // a completed result sitting in the output stage that the caller hasn't
  // consumed yet. See file header for why one shared freeze signal (rather
  // than per-stage decoupled skid buffers) is the deliberate choice here.
  //----------------------------------------------------------------------------

  wire stall = result_valid_q && !result_ready_i;
  assign ready_o = !stall;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      in_valid_q  <= 1'b0; in_id_q  <= '0; in_rd_q  <= '0;
      rs1_q <= '0; rs2_q <= '0; rs3_q <= '0; mx_format_q <= '0;

      contrib_valid_q <= 1'b0; contrib_id_q <= '0; contrib_rd_q <= '0;
      contrib_q <= '0; rs3_q1 <= '0;

      sum_valid_q <= 1'b0; sum_id_q <= '0; sum_rd_q <= '0;
      sum_q <= '0;

      lead_valid_q <= 1'b0; lead_id_q <= '0; lead_rd_q <= '0;
      lead_q <= '0;

      result_valid_q <= 1'b0; result_id_q <= '0; result_rd_q <= '0;
      result_data_q <= '0;
    end else if (!stall) begin
      // Every stage shifts forward by exactly one register per cycle - the
      // whole point of a uniform, fixed-1-cycle-per-stage pipeline. An
      // invalid slot's data is never looked at by anything downstream
      // (its own valid bit, shifted alongside it, correctly reads 0 next
      // cycle), so writes are never gated on the source valid bit -
      // simpler, and just as correct.
      result_valid_q <= lead_valid_q;
      result_id_q    <= lead_id_q;
      result_rd_q    <= lead_rd_q;
      result_data_q  <= back3_result_comb;

      lead_valid_q <= sum_valid_q;
      lead_id_q    <= sum_id_q;
      lead_rd_q    <= sum_rd_q;
      lead_q       <= back2_lead_comb;

      sum_valid_q <= contrib_valid_q;
      sum_id_q    <= contrib_id_q;
      sum_rd_q    <= contrib_rd_q;
      sum_q       <= back1_sum_comb;

      contrib_valid_q <= in_valid_q;
      contrib_id_q    <= in_id_q;
      contrib_rd_q    <= in_rd_q;
      contrib_q       <= contrib_comb;
      rs3_q1          <= rs3_q;   // carry rs3 forward alongside contrib_q - see file header

      in_valid_q  <= start_i;
      in_id_q     <= id_i;
      in_rd_q     <= rd_i;
      rs1_q       <= rs1_i;
      rs2_q       <= rs2_i;
      rs3_q       <= rs3_i;
      mx_format_q <= mx_format_i;
    end
    // stall: every register above holds (no assignment reached this cycle) -
    // the tail has something waiting that the caller isn't ready for, so
    // nothing downstream is safe to overwrite, which means nothing upstream
    // can safely advance into it either.
  end

  assign result_valid_o = result_valid_q;
  assign result_id_o    = result_id_q;
  assign result_rd_o    = result_rd_q;
  assign result_data_o  = result_data_q;

  //----------------------------------------------------------------------------
  // FRONT-END: format-selected unpack + multiply + sum -> mx_raw_contrib_t.
  // Unchanged by this milestone. Only MX_FMT_MXFP4 is real; every other
  // value (including MX_FMT_MXFP8's stub, and MX_FMT_MXFP4_RESIDUAL/
  // MX_FMT_M2XFP4, neither of which is meaningful for an instruction with
  // no AR operand) falls through to a safe, defined "contributes nothing"
  // default.
  //----------------------------------------------------------------------------

  // --- MX_FMT_MXFP4 sub-datapath: k=MX_K nibbles from rs1_q/rs2_q, exact
  //     fixed-point fp4_to_code multiply-sum - identical to
  //     mxdotp_dotp_engine.sv's A/B path, but with no AR/p2 tree at all. ---
  logic [3:0] a_nib [0:MX_K-1];
  logic [3:0] b_nib [0:MX_K-1];

  logic signed [CODE_WIDTH-1:0] a_code [0:MX_K-1];
  logic signed [CODE_WIDTH-1:0] b_code [0:MX_K-1];

  logic signed [PROD_WIDTH-1:0] p1_term [0:MX_K-1];
  logic signed [PSUM_WIDTH-1:0] p1_sum_mxfp4;

  logic                  p1_sign_mxfp4;
  logic [PSUM_WIDTH-1:0] p1_mag_mxfp4;

  int fi;

  always_comb begin
    for (fi = 0; fi < MX_K; fi++) begin
      a_nib[fi] = rs1_q[4*fi +: 4];
      b_nib[fi] = rs2_q[4*fi +: 4];
    end

    for (fi = 0; fi < MX_K; fi++) begin
      a_code[fi]  = fp4_to_code(a_nib[fi]);
      b_code[fi]  = fp4_to_code(b_nib[fi]);
      p1_term[fi] = PROD_WIDTH'(a_code[fi] * b_code[fi]);
    end

    p1_sum_mxfp4 = '0;
    for (fi = 0; fi < MX_K; fi++) begin
      p1_sum_mxfp4 = p1_sum_mxfp4 + PSUM_WIDTH'(p1_term[fi]);
    end

    p1_sign_mxfp4 = p1_sum_mxfp4[PSUM_WIDTH-1];
    p1_mag_mxfp4  = p1_sign_mxfp4 ? (-p1_sum_mxfp4) : p1_sum_mxfp4;  // same-width reinterpret
  end

  // --- Format mux -> mx_raw_contrib_t. This is the ONLY per-format branch
  //     in this engine; the back-end below never looks at mx_format_q. ---
  mx_raw_contrib_t contrib_comb;

  always_comb begin
    unique case (mx_format_q)
      MX_FMT_MXFP4: begin
        contrib_comb.sign     = p1_sign_mxfp4;
        contrib_comb.mag      = {{(32-PSUM_WIDTH){1'b0}}, p1_mag_mxfp4};
        // Same "-2" correction as mxdotp_final_engine.sv/mxdotp_pkg.sv's
        // derivation: fp4_to_code's code=2*value convention makes every raw
        // product carry an implicit *4 relative to the true unscaled value.
        contrib_comb.exp_corr = -mx_exp_t'(2);
      end
      default: begin
        // MX_FMT_MXFP8 stub (real arithmetic deferred - see file header)
        // and any other reserved/not-meaningful-here format value: safe,
        // defined "contributes nothing" default.
        contrib_comb.sign     = 1'b0;
        contrib_comb.mag      = 32'd0;
        contrib_comb.exp_corr = '0;
      end
    endcase
  end

  //----------------------------------------------------------------------------
  // BACK1: scale + accumulate (place_in_acc/fp32_to_acc + the wide sum).
  // Operates on contrib_q AND rs3_q1 - both stage-1 registers, both
  // belonging to the SAME instruction (see file header for why rs3 needs
  // its own forwarded copy here rather than reading rs3_q directly).
  //----------------------------------------------------------------------------

  logic [7:0]  a_scale, b_scale;
  logic [31:0] old_acc;

  mx_exp_t exp1;

  logic signed [ACC_WIDTH-1:0]      contrib1, acc_contrib;
  logic signed [ACC_FULL_WIDTH-1:0] contrib1_wide, acc_contrib_wide;
  logic signed [ACC_FULL_WIDTH-1:0] back1_sum_comb;

  always_comb begin
    // rs3_q1 packing: {reserved[15:0],b_scale[7:0],a_scale[7:0]} in the
    // upper 32 bits, old_acc in the lower 32 bits - see mxdotp_pkg.sv's
    // MXFUSED funct3 comment for the full layout.
    a_scale = rs3_q1[39:32];
    b_scale = rs3_q1[47:40];
    // rs3_q1[63:48] is reserved for now.
    old_acc = rs3_q1[31:0];

    exp1 = scale_exp(a_scale, b_scale) + contrib_q.exp_corr;

    contrib1    = place_in_acc(contrib_q.sign, exp1, contrib_q.mag);
    acc_contrib = fp32_to_acc(old_acc);

    contrib1_wide    = contrib1;     // sign-extends ACC_WIDTH -> ACC_FULL_WIDTH
    acc_contrib_wide = acc_contrib;

    back1_sum_comb = contrib1_wide + acc_contrib_wide;
  end

  //----------------------------------------------------------------------------
  // BACK2: leading-one scan (mxdotp_pkg.sv's acc_find_lead) on sum_q.
  //----------------------------------------------------------------------------

  mx_lead_result_t back2_lead_comb;

  always_comb begin
    back2_lead_comb = acc_find_lead(sum_q);
  end

  //----------------------------------------------------------------------------
  // BACK3: mantissa extraction + sticky + round + exponent clamp
  // (mxdotp_pkg.sv's acc_finalize) on lead_q.
  //----------------------------------------------------------------------------

  logic [31:0] back3_result_comb;

  always_comb begin
    back3_result_comb = acc_finalize(lead_q);
  end

endmodule
