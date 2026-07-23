//==============================================================================
// File    : mxdotp_fp4_fused_engine.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Standalone MXFUSED arithmetic engine - the single-instruction fast path
//   for PLAIN (non-residue) MXFP4. See mxdotp_pkg.sv's "fused fast-path
//   engine" milestone header for the rationale: MXDOTP/MXFINAL are
//   RESIDUE-STYLE FORMATS ONLY; plain MXFP4 comes here, plain MXFP8 goes to
//   its sibling mxdotp_fp8_fused_engine.sv.
//
//   MILESTONE (current): dedicated FP4 sliding-accumulator frame. The
//   previous BACK1 shifted the sum-of-products by the block scales into the
//   shared 95-bit/anchor-34 ABSOLUTE window (place_in_acc) and brought the
//   FP32 accumulator in at its absolute position (fp32_to_acc) - two barrel
//   shifters into 95 bits, a 98-bit add, and exactness only inside a fixed
//   absolute scale/magnitude window. This milestone inverts that, mirroring
//   the reference implementation's own datapath (see mxdotp_pkg.sv's
//   FP4_FRAME_WIDTH milestone header for the full scheme and its exactness
//   statement):
//
//     result = s1*s2 * ( A.B + acc/(s1*s2) )
//
//   - the SoP never moves: it IS the frame (13-bit signed integer straight
//     from the front-end, zero shifters on the wide path for it);
//   - only the ACCUMULATOR slides, by (acc_exp - combined_scale), with a
//     25-bit 'remaining' capture + sticky below the 38-bit frame;
//   - BACK2/BACK3 run on the 63-bit extended word (was 98 bits);
//   - the scale re-enters on the final EXPONENT only (BACK3), never on the
//     wide datapath;
//   - the scale adder itself (scale_exp) is HOISTED into the front-end
//     stage, the same move Phase 18 made in the FP8 engine's FRONT.
//
//   The shared place_in_acc/fp32_to_acc/acc_find_lead/acc_finalize and the
//   ACC_WIDTH/ACC_ANCHOR buffer are no longer used by this engine at all
//   (mxdotp_final_engine.sv and the FP8 engine still use them);
//   mx_raw_contrib_t is likewise retired here - it existed as a
//   format-agnostic front/back contract, but this engine has been
//   single-format since the FP8 engine became its own module, so the raw
//   signed SoP is registered directly.
//
//   Behavioral deltas vs the absolute-window version (all intended):
//   results are exact-to-RNE for ANY E8M0 scale pair and ANY
//   normal/subnormal FP32 accumulator (subnormal accumulators were
//   previously flushed; scale_exp < 0 previously truncated SoP bits;
//   |acc| outside ~[2^-11, 2^60] previously flushed/saturated). When the
//   SoP cannot affect the accumulator (acc_shift > FP4_MAX_ACC_SHIFT, or
//   SoP == 0 with accumulator bits already dropped below the remaining
//   field), the result is old_acc VERBATIM - proven exact, |SoP
//   contribution| < ulp(acc)/2 strictly. Golden model: fp4_golden.py (227k+
//   vectors vs an exact-rational reference, 0 failures, 0 corner-case
//   deviations).
//
//   FP4_REMAIN_BITS 24->25 (this milestone): the previous 24-bit remaining
//   field had a bounded 1-ulp deviation under catastrophic cancellation -
//   with acc_sticky asserted (right-shift > REMAIN) and SoP != 0, the
//   extended word's leading one could land as low as bit 23, putting the
//   round bit inside the already-crushed sticky region. Widening REMAIN to
//   25 pushes the minimum leading-one position to bit 24, so the round bit
//   is always inside the kept word. See mxdotp_pkg.sv's FP4_FRAME_WIDTH
//   header for the closed-form bound.
//
//   OVERLAP MILESTONE (unchanged): genuine 5-register-point pipeline
//   (input capture, sop_q/BACK1 inputs, sum_q, lead_q, result_data_q) with
//   a single global stall - `stall = result_valid_q && !result_ready_i`
//   freezes every register in the same cycle; ready_o is exactly !stall.
//   Every stage is fixed-1-cycle; the only backpressure source is the tail
//   waiting on the caller. Each stage carries its own valid/id/rd sideband.
//
//   The rs3-alignment subtlety from the overlap milestone still applies in
//   spirit: operands consumed one stage after input capture must be
//   threaded forward by their own register so they stay aligned with the
//   instruction that owns them (the input stage is overwritten every cycle
//   under overlap). What gets threaded has shrunk: only old_acc (32b) and
//   the precomputed scale_exp (hoisted into the front-end stage) survive
//   to BACK1; the raw 64-bit rs3_q1 copy is gone.
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
  // Naming pairs each sideband with the datapath registers it travels
  // alongside: in_* (input capture), sop_* (post front-end), sum_*
  // (post BACK1), lead_* (post BACK2), result_* (post BACK3 / output).
  //----------------------------------------------------------------------------

  logic                   in_valid_q;
  logic [X_ID_WIDTH-1:0]  in_id_q;
  logic [4:0]             in_rd_q;
  logic [X_RFR_WIDTH-1:0] rs1_q, rs2_q, rs3_q;
  logic [1:0]             mx_format_q;

  // Stage 1 (post front-end): the raw signed SoP plus everything BACK1
  // needs, all belonging to the SAME instruction (see file header).
  logic                          sop_valid_q;
  logic [X_ID_WIDTH-1:0]         sop_id_q;
  logic [4:0]                    sop_rd_q;
  logic signed [PSUM_WIDTH-1:0]  sop_q;        // frame-resident SoP, never shifted
  mx_exp_t                       sexp_q1;      // hoisted scale_exp(a,b)
  logic [31:0]                   old_acc_q1;   // FP32 accumulator operand

  // Stage 2 (post BACK1): the 63-bit extended word {frame38, remaining25}
  // plus the flags/values BACK2/BACK3 need.
  logic                              sum_valid_q;
  logic [X_ID_WIDTH-1:0]             sum_id_q;
  logic [4:0]                        sum_rd_q;
  logic signed [FP4_LZC_WIDTH-1:0]   sum_q;
  logic                              acc_sticky_q2;  // acc bits dropped below 'remaining'
  logic                              neg_adj_q2;     // fp4_find_lead's sticky-negation adjust
  logic                              is_acc_q2;      // result-is-accumulator bypass
  mx_exp_t                           sexp_q2;
  logic [31:0]                       old_acc_q2;

  // Stage 3 (post BACK2).
  logic                   lead_valid_q;
  logic [X_ID_WIDTH-1:0]  lead_id_q;
  logic [4:0]             lead_rd_q;
  fp4_lead_result_t       lead_q;
  logic                   acc_sticky_q3;
  logic                   is_acc_q3;
  mx_exp_t                sexp_q3;
  logic [31:0]            old_acc_q3;

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

  // Combinational stage outputs (defined below, next to their stages).
  logic signed [PSUM_WIDTH-1:0]    sop_comb;
  mx_exp_t                         sexp_comb;
  logic signed [FP4_LZC_WIDTH-1:0] back1_word_comb;
  logic                            back1_acc_sticky_comb;
  logic                            back1_neg_adj_comb;
  logic                            back1_is_acc_comb;
  fp4_lead_result_t                back2_lead_comb;
  logic [31:0]                     back3_result_comb;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      in_valid_q      <= 1'b0;
      sop_valid_q     <= 1'b0;
      sum_valid_q     <= 1'b0;
      lead_valid_q    <= 1'b0;
      result_valid_q  <= 1'b0;
    end else if (!stall) begin
      // Whole pipe advances together. A stage whose upstream holds a bubble
      // simply latches don't-care data alongside a 0 valid bit (its own
      // valid bit, shifted alongside it, correctly reads 0 next cycle), so
      // writes are never gated on the source valid bit - simpler, and just
      // as correct.
      result_valid_q <= lead_valid_q;
      result_id_q    <= lead_id_q;
      result_rd_q    <= lead_rd_q;
      result_data_q  <= back3_result_comb;

      lead_valid_q  <= sum_valid_q;
      lead_id_q     <= sum_id_q;
      lead_rd_q     <= sum_rd_q;
      lead_q        <= back2_lead_comb;
      acc_sticky_q3 <= acc_sticky_q2;
      is_acc_q3     <= is_acc_q2;
      sexp_q3       <= sexp_q2;
      old_acc_q3    <= old_acc_q2;

      sum_valid_q   <= sop_valid_q;
      sum_id_q      <= sop_id_q;
      sum_rd_q      <= sop_rd_q;
      sum_q         <= back1_word_comb;
      acc_sticky_q2 <= back1_acc_sticky_comb;
      neg_adj_q2    <= back1_neg_adj_comb;
      is_acc_q2     <= back1_is_acc_comb;
      sexp_q2       <= sexp_q1;
      old_acc_q2    <= old_acc_q1;

      sop_valid_q <= in_valid_q;
      sop_id_q    <= in_id_q;
      sop_rd_q    <= in_rd_q;
      sop_q       <= sop_comb;
      sexp_q1     <= sexp_comb;
      old_acc_q1  <= rs3_q[31:0];   // threaded forward to stay aligned - see header

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
  // FRONT-END: unpack + multiply + sum -> raw signed SoP, plus the HOISTED
  // scale-exponent adder (Phase-18-style: computed here where the slack is,
  // consumed twice downstream - BACK1's accumulator shift amount and
  // BACK3's final exponent - never on the wide datapath).
  //
  // The SoP is the format mux's only client: MX_FMT_MXFP4 passes the real
  // sum; every other value (MXFP8 never routes here - it has its own
  // engine - plus the not-meaningful-here MXFP4_RESIDUAL/M2XFP4) falls to
  // a safe SoP = 0, which makes the whole instruction an exact accumulator
  // pass-through (strictly better than the old stub behavior, which
  // round-tripped old_acc through the wide buffer).
  //----------------------------------------------------------------------------

  logic [3:0] a_nib [0:MX_K-1];
  logic [3:0] b_nib [0:MX_K-1];

  logic signed [CODE_WIDTH-1:0] a_code [0:MX_K-1];
  logic signed [CODE_WIDTH-1:0] b_code [0:MX_K-1];

  logic signed [PROD_WIDTH-1:0] p1_term [0:MX_K-1];
  logic signed [PSUM_WIDTH-1:0] p1_sum_mxfp4;

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

    sop_comb = (mx_format_q == MX_FMT_MXFP4) ? p1_sum_mxfp4 : '0;

    // Hoisted scale adder. rs3_q packing: {reserved[15:0], b_scale[7:0],
    // a_scale[7:0]} in the upper 32 bits, old_acc in the lower 32 - see
    // mxdotp_pkg.sv's MXFUSED funct3 comment for the full layout. Note the
    // old "-2" fp4_to_code exponent correction is NOT applied here any
    // more: in the sliding-accumulator scheme it is a structural constant
    // of the frame itself (folded into FP4_ACC_SHIFT_CONST and
    // fp4_finalize's exponent), not a property of this operand.
    sexp_comb = scale_exp(rs3_q[39:32], rs3_q[47:40]);
  end

  //----------------------------------------------------------------------------
  // BACK1: the accumulator slide. The SoP (sop_q) is already frame-resident
  // and untouched; this stage only decodes the FP32 accumulator, computes
  // its shift against the scale-free frame, and produces the 63-bit
  // extended word {frame38, remaining25} plus sticky/bypass flags. See
  // mxdotp_pkg.sv's FP4_FRAME_WIDTH milestone header for the scheme,
  // layouts, and the exactness proofs referenced below.
  //----------------------------------------------------------------------------

    mx_acc_slide #(
    .FRAME_W         (FP4_FRAME_WIDTH),
    .REMAIN          (FP4_REMAIN_BITS),
    .MAX_ACC_SHIFT   (FP4_MAX_ACC_SHIFT),
    .ACC_SHIFT_CONST (FP4_ACC_SHIFT_CONST),
    .SOP_W           (PSUM_WIDTH)
  ) fp4_acc_slide_i (
    .old_acc_i    (old_acc_q1),
    .scale_exp_i  (sexp_q1),
    .sop_i        (sop_q),
    .valid_i      (sop_valid_q),
    .word_o       (back1_word_comb),
    .acc_sticky_o (back1_acc_sticky_comb),
    .neg_adj_o    (back1_neg_adj_comb),
    .is_acc_o     (back1_is_acc_comb)
  );

  //----------------------------------------------------------------------------
  // BACK2: sign/magnitude (with the sticky-negation adjust) + leading-one
  // scan on the 63-bit extended word (mxdotp_pkg.sv's fp4_find_lead).
  //----------------------------------------------------------------------------

  mx_find_lead #(.W(FP4_LZC_WIDTH)) fp4_find_lead_i (
    .word_i       (sum_q),
    .neg_adjust_i (neg_adj_q2),
    .sign_o       (back2_lead_comb.sign),
    .lead_pos_o   (back2_lead_comb.lead_pos),
    .mag_o        (back2_lead_comb.mag)
  );

  //----------------------------------------------------------------------------
  // BACK3: mantissa extraction + sticky + round + exponent clamp
  // (mxdotp_pkg.sv's fp4_finalize - the scale re-enters here, on the
  // exponent only), or the verbatim accumulator bypass.
  //----------------------------------------------------------------------------

  logic [31:0] back3_finalized;

  mx_finalize #(
    .W      (FP4_LZC_WIDTH),
    .REMAIN (FP4_REMAIN_BITS),
    .ANCHOR (FP4_FRAME_ANCHOR)
  ) fp4_finalize_i (
    .sign_i       (lead_q.sign),
    .lead_pos_i   (lead_q.lead_pos),
    .mag_i        (lead_q.mag),
    .acc_sticky_i (acc_sticky_q3),
    .scale_exp_i  (sexp_q3),
    .result_o     (back3_finalized)
  );

  assign back3_result_comb = is_acc_q3 ? old_acc_q3 : back3_finalized;


  // synthesis translate_off
  //----------------------------------------------------------------------------
  // Reset-discipline check. The datapath in this engine carries no reset, which
  // is only sound if data is never observed on a beat that claims to be
  // meaningful before that data has been written. This assertion is what turns
  // that from an assumption into a checked property: it fires the moment an X
  // escapes on such a beat.
  //
  // Under Verilator (2-state) this is vacuous, so `make` will not exercise it;
  // it earns its keep in a 4-state simulator (Questa/VCS/Xcelium) and in
  // gate-level sim - exactly where an unreset-register bug would otherwise hide.
  //----------------------------------------------------------------------------
  always_ff @(posedge clk_i) begin
    if (rst_ni && result_valid_q) begin
      assert (!$isunknown({result_data_q, result_id_q, result_rd_q})) else
        $error("%m: X on a valid result beat - an unreset datapath register was read before it was written");
    end
  end
  // synthesis translate_on

endmodule
