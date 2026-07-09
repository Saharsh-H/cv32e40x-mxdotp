//==============================================================================
// File    : mxdotp_fused_engine.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Standalone MXFUSED arithmetic engine - the single-instruction fast path
//   for PLAIN (non-residue) MX formats. See mxdotp_pkg.sv's "fused fast-path
//   engine" milestone header for the full rationale: MXDOTP/MXFINAL are
//   RESIDUE-STYLE FORMATS ONLY as of this milestone; plain MXFP4/MXFP8 never
//   reach mxdotp_dotp_engine.sv or mxdotp_final_engine.sv at all any more -
//   they come here instead.
//
//   rs1=A, rs2=B - 64-bit dual-read, same shape as MXDOTP's A/B. rs3 is also
//   64-bit dual-read, packed as {reserved[15:0],b_scale[7:0],a_scale[7:0]}
//   (upper 32, from rs3+1) / old FP32 accumulator (lower 32, from rs3) - the
//   same information MXFINAL's rs1/rs2 carry today, just combined into one
//   operand and relocated to rs3 so A/B can keep rs1/rs2. No AR operand
//   exists in this instruction's encoding at all - there is nothing to
//   discard, unlike the old two-instruction path's unconditional-but-masked
//   p2.
//
//   Internally structured as a format-selected FRONT-END (unpack + multiply
//   + sum - one branch per element format) feeding a single shared BACK-END
//   (scale + accumulate + round - the exact same place_in_acc/fp32_to_acc/
//   acc_to_fp32 machinery mxdotp_final_engine.sv uses). The contract between
//   them is mx_raw_contrib_t (mxdotp_pkg.sv): the front-end reduces whatever
//   its element format is down to one signed magnitude plus an exponent
//   correction, ready for place_in_acc as-is. This mirrors the DOTP->FINAL
//   handoff the two-instruction path uses (mailbox_p1_q/mailbox_p2_q), just
//   private to one engine/one instruction instead of crossing an XIF
//   Issue/Commit/Result boundary - there's a real internal register between
//   the two phases (contrib_q below), not one giant combinational cloud, for
//   the same reason mxdotp_dotp_engine.sv/mxdotp_final_engine.sv stay
//   separate latched stages rather than one fused always_comb block: a
//   longer, unverified combinational path is a timing-closure risk neither
//   engine's own critical path has even been profiled for yet
//   (LATENCY_CYCLES on every engine in this project, including this one, is
//   still a correctness-first placeholder - see Next Steps).
//
//   MX_FMT_MXFP4 front-end: implemented. Reuses fp4_to_code/MX_K/PROD_WIDTH/
//   PSUM_WIDTH exactly as mxdotp_dotp_engine.sv does, but only ever computes
//   p1=sum(A_i*B_i) - there is no AR operand to also multiply, so this
//   engine's multiply-accumulate tree is roughly half of dotp_engine's
//   (which still carries the AR/p2 tree unconditionally, now exclusively for
//   residue formats where it's actually used).
//
//   MX_FMT_MXFP8 front-end: a deliberate STUB for now (contributes nothing -
//   same "reserved format falls through safely" convention used elsewhere in
//   this project), not yet real arithmetic. MXFP8's real datapath is NOT a
//   simple reparameterization of MXFP4's exact "code=2*value" fixed-point
//   trick - E4M3/E5M2 have real mantissas and a dynamic range far wider than
//   E2M1's 8 magnitudes. The MXDOTP paper (arXiv:2505.13159) handles this by
//   widening both MXFP8 sub-formats into a common FP9 (E5M3) intermediate
//   and using an "early accumulation" datapath: rather than rounding each
//   dot product to FP32 and adding it to the accumulator with a dedicated
//   FP32 adder, the sum of products is shifted and added directly into the
//   same wide fixed-point accumulator (95-bit, anchor 34 - see below) in one
//   step, with a single final round (RNE) back to FP32. That's the shape
//   MX_FMT_MXFP8's real front-end will very likely need to take when it's
//   designed - deliberately deferred, not attempted here.
//
//   ACC_WIDTH=95/ACC_ANCHOR=34 (mxdotp_pkg.sv) are shared, UNCHANGED, with
//   mxdotp_final_engine.sv's back-end for BOTH formats right now - these
//   aren't arbitrary: they're the MXDOTP paper's own sizing for its real
//   MXFP8/k=8 datapath (wide enough for the sum of eight products plus the
//   shifted accumulator, sign and rounding bits included), i.e. already the
//   *intended* width for MXFP8's eventual front-end, and over-provisioned
//   headroom (not lossy) for MXFP4's smaller range in the meantime. Optimize
//   MXFP4's own bit widths down later (Known Limitation #1) - not now.
//==============================================================================

module mxdotp_fused_engine
    import mxdotp_pkg::*;
#(
    // Real system value is always 64 (mxdotp_core_top.sv -> mxdotp_xif.sv ->
    // here) - like mxdotp_dotp_engine.sv, this module's MXFP4 front-end is
    // hard-fixed to MX_K=16 nibbles per operand (16*4=64 bits) AND rs3's
    // {scales,old_acc} packing needs the full 64 bits too, so 64 is the
    // only value that actually works, not an independent tunable.
    parameter int X_RFR_WIDTH          = 64,
    parameter int X_RFW_WIDTH          = 32,
    parameter int FRONT_LATENCY_CYCLES = 2,  // front-end (unpack/multiply/sum) -
                                              // must be >= 1; correctness-first
                                              // placeholder, same as every other
                                              // engine's LATENCY_CYCLES.
    parameter int BACK_LATENCY_CYCLES  = 2   // back-end (scale/accumulate/round) -
                                              // must be >= 1; same placeholder
                                              // status as FRONT_LATENCY_CYCLES.
)
(
    input  logic                   clk_i,
    input  logic                   rst_ni,

    input  logic                   start_i,
    output logic                   busy_o,
    output logic                   done_o,

    input  logic [X_RFR_WIDTH-1:0] rs1_i,       // A   (dual-read, MX_K elements)
    input  logic [X_RFR_WIDTH-1:0] rs2_i,       // B   (dual-read, MX_K elements)
    input  logic [X_RFR_WIDTH-1:0] rs3_i,       // {reserved,b_scale,a_scale} hi / old_acc lo
    input  logic [1:0]             mx_format_i, // element format (MX_FMT_MXFP4/MXFP8)

    output logic [X_RFW_WIDTH-1:0] result_data
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
  // Input capture (on start_i) - same discipline as dotp/final engines.
  //----------------------------------------------------------------------------

  logic [X_RFR_WIDTH-1:0] rs1_q, rs2_q, rs3_q;
  logic [1:0]             mx_format_q;

  //----------------------------------------------------------------------------
  // Two-phase latency/busy tracking: FRONT (unpack/multiply/sum) then BACK
  // (scale/accumulate/round), one shared counter reused across both phases
  // (only one phase is ever active at a time) - the same busy_q/cycle_cnt_q
  // idiom mxdotp_dotp_engine.sv/mxdotp_final_engine.sv use, just run twice
  // in sequence with a real register (contrib_q) latching the hand-off
  // between them, instead of one instruction's worth of engine handing off
  // to a second instruction's worth of engine via the XIF-level mailbox.
  //----------------------------------------------------------------------------

  typedef enum logic { FUSED_FRONT, FUSED_BACK } fused_phase_e;
  fused_phase_e phase_q;

  localparam int MAX_LATENCY = (FRONT_LATENCY_CYCLES > BACK_LATENCY_CYCLES) ?
                                FRONT_LATENCY_CYCLES : BACK_LATENCY_CYCLES;
  localparam int CNT_WIDTH   = (MAX_LATENCY <= 1) ? 1 : $clog2(MAX_LATENCY + 1);

  logic [CNT_WIDTH-1:0] cycle_cnt_q;
  logic                 busy_q;

  mx_raw_contrib_t contrib_q;  // front-end -> back-end hand-off register

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      busy_q      <= 1'b0;
      phase_q     <= FUSED_FRONT;
      cycle_cnt_q <= '0;
      rs1_q       <= '0;
      rs2_q       <= '0;
      rs3_q       <= '0;
      mx_format_q <= '0;
      contrib_q   <= '0;
    end else if (start_i && !busy_q) begin
      busy_q      <= 1'b1;
      phase_q     <= FUSED_FRONT;
      cycle_cnt_q <= CNT_WIDTH'(FRONT_LATENCY_CYCLES - 1);
      rs1_q       <= rs1_i;
      rs2_q       <= rs2_i;
      rs3_q       <= rs3_i;
      mx_format_q <= mx_format_i;
    end else if (busy_q && (phase_q == FUSED_FRONT)) begin
      if (cycle_cnt_q == '0) begin
        // Front-end done this cycle: latch its combinational result and
        // move into the back-end phase - mirrors dotp_mailbox_write's
        // "capture the live combinational result into a register" pattern
        // in mxdotp_xif.sv, just internal to this one engine.
        contrib_q   <= contrib_comb;
        phase_q     <= FUSED_BACK;
        cycle_cnt_q <= CNT_WIDTH'(BACK_LATENCY_CYCLES - 1);
      end else begin
        cycle_cnt_q <= cycle_cnt_q - 1'b1;
      end
    end else if (busy_q && (phase_q == FUSED_BACK)) begin
      if (cycle_cnt_q == '0)
        busy_q <= 1'b0;
      else
        cycle_cnt_q <= cycle_cnt_q - 1'b1;
    end
  end

  assign busy_o = busy_q;
  assign done_o = busy_q && (phase_q == FUSED_BACK) && (cycle_cnt_q == '0);

  //----------------------------------------------------------------------------
  // FRONT-END: format-selected unpack + multiply + sum -> mx_raw_contrib_t.
  // Only MX_FMT_MXFP4 is real; every other value (including MX_FMT_MXFP8's
  // stub, and MX_FMT_MXFP4_RESIDUAL/MX_FMT_M2XFP4, neither of which is
  // meaningful for an instruction with no AR operand) falls through to a
  // safe, defined "contributes nothing" default.
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
  // BACK-END: format-independent scale + accumulate + round, identical in
  // spirit to mxdotp_final_engine.sv's, minus the p2/residue contribution
  // (this instruction has no AR operand at all). Operates on contrib_q (the
  // latched front-end result) and rs3_q (scales/old_acc), not on live
  // front-end signals - the same "consumer reacts to a registered snapshot,
  // not a live combinational front-end" discipline the mailbox uses at the
  // XIF level.
  //----------------------------------------------------------------------------

  logic [7:0]  a_scale, b_scale;
  logic [31:0] old_acc;

  mx_exp_t exp1;

  logic signed [ACC_WIDTH-1:0]      contrib1, acc_contrib;
  logic signed [ACC_FULL_WIDTH-1:0] contrib1_wide, acc_contrib_wide;
  logic signed [ACC_FULL_WIDTH-1:0] final_sum_wide;

  always_comb begin
    // rs3_q packing: {reserved[15:0],b_scale[7:0],a_scale[7:0]} in the upper
    // 32 bits (the dual-read "+1" register), old_acc in the lower 32 bits
    // (the base register) - see file header / mxdotp_pkg.sv's MXFUSED
    // funct3 comment for the full layout.
    a_scale = rs3_q[39:32];
    b_scale = rs3_q[47:40];
    // rs3_q[63:48] is reserved for now.
    old_acc = rs3_q[31:0];

    exp1 = scale_exp(a_scale, b_scale) + contrib_q.exp_corr;

    contrib1    = place_in_acc(contrib_q.sign, exp1, contrib_q.mag);
    acc_contrib = fp32_to_acc(old_acc);

    contrib1_wide    = contrib1;     // sign-extends ACC_WIDTH -> ACC_FULL_WIDTH
    acc_contrib_wide = acc_contrib;

    final_sum_wide = contrib1_wide + acc_contrib_wide;
  end

  //----------------------------------------------------------------------------
  // Result data: latched on the done_o edge, same discipline as
  // mxdotp_final_engine.sv's result_data_q (never a live combinational
  // function of captured state exposed on the output port).
  //----------------------------------------------------------------------------

  logic [X_RFW_WIDTH-1:0] result_data_q;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      result_data_q <= '0;
    end else if (done_o) begin
      result_data_q <= acc_to_fp32(final_sum_wide);
    end
  end

  assign result_data = result_data_q;

endmodule
