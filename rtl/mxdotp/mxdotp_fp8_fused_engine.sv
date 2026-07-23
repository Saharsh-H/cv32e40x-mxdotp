//==============================================================================
// File    : mxdotp_fp8_fused_engine.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Standalone MXFUSED arithmetic engine for the MXFP8 element formats
//   (OCP MX: E4M3 and E5M2) - the sibling of mxdotp_fused_engine.sv, which
//   handles MXFP4. This is DELIBERATELY a separate engine: E4M3/E5M2 have
//   real biased exponents and real mantissas, so every element pair's
//   product lands at its OWN exponent position - each product must be
//   shifted into the frame individually and summed there (the paper's
//   "early accumulation"), unlike MXFP4's plain-integer SoP.
//
//   MILESTONE (current): dedicated FP8 sliding-accumulator frame. The
//   previous version placed each product AND the FP32 accumulator into the
//   shared 95-bit/anchor-34 ABSOLUTE window (place_in_acc / fp32_to_acc)
//   and finalized through the shared acc_find_lead / acc_finalize. That
//   mis-read the reference's sizing: its ANCHOR=34 is the fractional point
//   of a scale-FREE product frame in the factored form
//
//     result = s1*s2 * ( A.B + acc/(s1*s2) )
//
//   (fpnew_mxdotp_accumulator_shift slides the ACCUMULATOR by the scale;
//   the products never see the scale) - NOT an absolute fixed-point
//   anchor. Used absolutely, the window imposed a hard |value| range of
//   ~[2^-11, 2^60]: accumulators/products below it lost round/sticky
//   information (place_in_acc's right-shift dropped bits with no sticky
//   capture, and acc_finalize has no sticky input), and values above it
//   saturated. This milestone replaces that with the reference's own
//   scheme, mirroring the FP4 engine's BACK1 structure exactly:
//
//   - each product is shifted into a 95-bit SCALE-FREE frame (anchor 32:
//     frame bit b = value weight 2^(b-32); the smallest possible product,
//     E5M2 subnormal^2 = 2^-32, lands exactly on bit 0 - every product is
//     exact in-frame, zero truncation) and the 8 are summed into a 70-bit
//     signed SoP; the SoP never moves after that;
//   - only the ACCUMULATOR slides, by (acc_exp - combined_scale), with a
//     25-bit 'remaining' capture + sticky below the frame;
//   - BACK2/BACK3 run on the 120-bit extended word (fp8_find_lead /
//     fp8_finalize, siblings of the FP4 pair in mxdotp_pkg.sv);
//   - the scale re-enters on the final EXPONENT only (BACK3), never on the
//     wide datapath; the scale adder stays HOISTED in FRONT (Phase 18),
//     but now feeds a forwarded sexp_q1 register instead of being folded
//     into each product's exponent.
//
//   Behavioral deltas vs the absolute-window version (all intended):
//   results are exact-to-RNE for ANY E8M0 scale pair and ANY
//   normal/subnormal FP32 accumulator (subnormal accumulators were
//   previously flushed by fp32_to_acc; contributions below the old window
//   floor previously lost round/sticky; |value| above ~2^60 previously
//   saturated to a mid-range ceiling rather than FP32 max). When the SoP
//   cannot affect the accumulator (acc_shift > FP8_MAX_ACC_SHIFT, or
//   SoP == 0 with accumulator bits already dropped below the remaining
//   field), the result is old_acc VERBATIM - proven exact per-vector,
//   |SoP contribution| < ulp(acc)/2 strictly (margin ~1.3x at the shift-71
//   boundary; see mxdotp_pkg.sv's FP8 frame header). Golden model:
//   fp8_golden.py (325k+ vectors across two seeds vs an exact-rational
//   reference, 0 failures, 0 corner-case deviations). FP8_REMAIN_BITS=25
//   (not the reference's 24) closes the same 1-ulp cancellation corner the
//   FP4 engine's REMAIN bump closed - same closed-form bound.
//
//   OVERLAP / PIPELINE (identical discipline to mxdotp_fused_engine.sv):
//   five register points (input capture, prod_q [post front-end
//   decode+mult], sum_q [post BACK1], lead_q [post BACK2], result_data_q
//   [post BACK3/output]), each carrying its own valid bit + {id, rd}
//   sideband, shifting forward one stage per cycle. A single global stall
//   (stall = result_valid_q && !result_ready_i) freezes every register in
//   the same cycle; ready_o is exactly !stall. Up to 5 instructions
//   genuinely in flight at once.
//
//   rs3 handling under overlap: rs3 packs {reserved[15:0], b_scale, a_scale}
//   in its upper 32 bits (from rs3+1) and old_acc in its lower 32, all
//   captured at the INPUT stage alongside rs1/rs2. The scales AND the
//   E4M3/E5M2 sub-format bit are consumed in the FRONT stage; FRONT
//   computes scale_exp(a_scale,b_scale) and registers it as sexp_q1
//   (forwarded to BACK1 for the accumulator slide and onward to BACK3 for
//   the final exponent - the FP4 engine's exact pattern). Only old_acc and
//   sexp travel forward; the sub-format/reserved bits are consumed in FRONT.
//
//   k = 8 elements per 64-bit dual-read operand (8*8 = 64), NOT 16: this is
//   the paper's own MXFP8/k=8 datapath. Frame sizing in mxdotp_pkg.sv's
//   FP8_FRAME_WIDTH section.
//
//   Element-format sub-select (E4M3 vs E5M2): funct2 only carries a single
//   MX_FMT_MXFP8 code, so the E4M3/E5M2 choice is taken from rs3 bit 48 - the
//   lowest previously-reserved bit of the {reserved[15:0], b_scale, a_scale}
//   upper word: 0 = E4M3, 1 = E5M2. This is the one genuinely new ISA bit;
//   it is trivially re-locatable, or tie-able to 0 for E4M3-only. See the
//   wiring in mxdotp_xif.sv and the handoff's DECISION note.
//
//   NOT handled (deliberate, consistent with Known Limitation #3 - no Inf/NaN
//   handling anywhere in this datapath): max-exponent E4M3 NaN (S.1111.111)
//   and E5M2 Inf/NaN (S.11111.xx) decode to their plain finite numeric
//   interpretation rather than propagating NaN/Inf. Subnormals (biased
//   exp field == 0) ARE handled correctly (implicit leading bit = 0,
//   exponent = 1 - bias - mant_bits); the frame's anchor covers them exactly.
//==============================================================================

module mxdotp_fp8_fused_engine
    import mxdotp_pkg::*;
#(
    parameter int X_ID_WIDTH  = 4,
    // Real system value is always 64 (mxdotp_core_top.sv -> mxdotp_xif.sv ->
    // here). MX_K8 = 8 bytes per operand needs the full 64 bits, and rs3's
    // {scales,old_acc} packing does too, so 64 is the only value that works -
    // not an independent tunable. Same rationale as mxdotp_fused_engine.sv.
    parameter int X_RFR_WIDTH = 64,
    parameter int X_RFW_WIDTH = 32
)
(
    input  logic                    clk_i,
    input  logic                    rst_ni,

    input  logic                    start_i,
    output logic                    ready_o,
    input  logic [X_ID_WIDTH-1:0]   id_i,
    input  logic [4:0]              rd_i,
    input  logic [X_RFR_WIDTH-1:0]  rs1_i,        // A   (8x MXFP8 bytes)
    input  logic [X_RFR_WIDTH-1:0]  rs2_i,        // B   (8x MXFP8 bytes)
    input  logic [X_RFR_WIDTH-1:0]  rs3_i,        // {reserved[15:0],b_scale,a_scale} hi / old_acc lo
                                                  //   rs3_i[48] selects E4M3(0)/E5M2(1)
    input  logic [1:0]              mx_format_i,  // MX_FMT_MXFP8 (present for interface
                                                  //   symmetry with the MXFP4 engine; the
                                                  //   E4M3/E5M2 sub-select is rs3_i[48])

    output logic                    result_valid_o,
    input  logic                    result_ready_i,
    output logic [X_ID_WIDTH-1:0]   result_id_o,
    output logic [4:0]              result_rd_o,
    output logic [X_RFW_WIDTH-1:0]  result_data_o
);

  // MXFP8 block size for a 64-bit operand. Hard-fixed (see header / guard).
  localparam int MX_K8 = 8;

  // Elaboration-time guard - same rationale as mxdotp_fused_engine.sv's:
  // catches a standalone synthesis run with no override supplying the real 64.
  // synthesis translate_off
  initial begin
    assert (X_RFR_WIDTH >= 64) else
      $error("mxdotp_fp8_fused_engine: X_RFR_WIDTH (%0d) must be >= 64 - MX_K8=8 bytes per operand (A/B) and the rs3 {scales,old_acc} packing both need the full 64 bits.",
              X_RFR_WIDTH);
  end
  // synthesis translate_on

  // Unused-signal lint suppression: mx_format_i is part of the shared engine
  // interface but the MXFP8 sub-select comes from rs3 (see header); rs3's
  // reserved[15:1] bits (rs3_q[63:49]) are, as their name says, reserved.
  wire _unused = &{1'b0, mx_format_i};

  //----------------------------------------------------------------------------
  // One decoded product: sign, its own signed exponent (element exponents
  // ONLY - the block scale is NOT folded in; it drives the accumulator
  // slide and the final exponent instead, exactly like the FP4 engine),
  // and the integer mantissa product magnitude (max 15*15 = 225, 8 bits;
  // held in 16 for the multiplier's natural width).
  //----------------------------------------------------------------------------
  typedef struct packed {
    logic        sign;
    mx_exp_t     exp;
    logic [15:0] mag;
  } fp8_prod_t;

  //----------------------------------------------------------------------------
  // Five pipeline register points, each with its own valid/id/rd sideband -
  // same naming discipline as mxdotp_fused_engine.sv.
  //----------------------------------------------------------------------------

  logic                   in_valid_q;
  logic [X_ID_WIDTH-1:0]  in_id_q;
  logic [4:0]             in_rd_q;
  logic [X_RFR_WIDTH-1:0] rs1_q, rs2_q, rs3_q;

  logic                   prod_valid_q;
  logic [X_ID_WIDTH-1:0]  prod_id_q;
  logic [4:0]             prod_rd_q;
  fp8_prod_t              prod_q [0:MX_K8-1];
  mx_exp_t                sexp_q1;      // hoisted scale_exp(a,b) - forwarded,
                                         // no longer folded into prod exps
  logic [31:0]            old_acc_q1;   // FP32 accumulator operand

  // Stage 2 (post BACK1): the 120-bit extended word {frame95, remaining25}
  // plus the flags/values BACK2/BACK3 need. Same register set as the FP4
  // engine's stage 2.
  logic                              sum_valid_q;
  logic [X_ID_WIDTH-1:0]             sum_id_q;
  logic [4:0]                        sum_rd_q;
  logic signed [FP8_LZC_WIDTH-1:0]   sum_q;
  logic                              acc_sticky_q2;  // acc bits dropped below 'remaining'
  logic                              neg_adj_q2;     // fp8_find_lead's sticky-negation adjust
  logic                              is_acc_q2;      // result-is-accumulator bypass
  mx_exp_t                           sexp_q2;
  logic [31:0]                       old_acc_q2;

  // Stage 3 (post BACK2).
  logic                   lead_valid_q;
  logic [X_ID_WIDTH-1:0]  lead_id_q;
  logic [4:0]             lead_rd_q;
  fp8_lead_result_t       lead_q;
  logic                   acc_sticky_q3;
  logic                   is_acc_q3;
  mx_exp_t                sexp_q3;
  logic [31:0]            old_acc_q3;

  logic                   result_valid_q;
  logic [X_ID_WIDTH-1:0]  result_id_q;
  logic [4:0]             result_rd_q;
  logic [X_RFW_WIDTH-1:0] result_data_q;

  //----------------------------------------------------------------------------
  // Global stall / ready. Only source of backpressure is the tail (a completed
  // result the caller hasn't consumed). Identical to mxdotp_fused_engine.sv.
  //----------------------------------------------------------------------------

  wire stall = result_valid_q && !result_ready_i;
  assign ready_o = !stall;

  // Forward decls of the combinational stage outputs (defined below).
  fp8_prod_t                        prod_comb [0:MX_K8-1];
  mx_exp_t                          sexp_comb;
  logic signed [FP8_LZC_WIDTH-1:0]  back1_word_comb;
  logic                             back1_acc_sticky_comb;
  logic                             back1_neg_adj_comb;
  logic                             back1_is_acc_comb;
  fp8_lead_result_t                 back2_lead_comb;
  logic [31:0]                      back3_result_comb;

  integer k;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      // Reset: CONTROL state only. Datapath registers are deliberately not
      // reset - a stage's data is never looked at unless its own control bit
      // says it is meaningful, so an unreset datapath register cannot be
      // observed before it is written. This is the discipline MXFP4 and
      // M2XFP4 already used; MXFP8 and MXFINAL are brought onto it here so
      // all four engines are consistent. Costs ~900 DFFR_X1 -> DFF_X1 and
      // takes those flops off the reset tree. The translate_off assertion at
      // the bottom of this file is what actively checks the discipline:
      // it fails in a 4-state simulator if any X ever escapes on a beat that
      // claims to be valid.
      in_valid_q     <= 1'b0;
      prod_valid_q   <= 1'b0;
      sum_valid_q    <= 1'b0;
      lead_valid_q   <= 1'b0;
      result_valid_q <= 1'b0;
    end else if (!stall) begin
      // Every stage shifts forward exactly one register per cycle. An invalid
      // slot's data is never looked at downstream (its own valid bit, shifted
      // alongside, reads 0 next cycle), so writes are never gated on the
      // source valid bit - same discipline as the MXFP4 engine.
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

      sum_valid_q   <= prod_valid_q;
      sum_id_q      <= prod_id_q;
      sum_rd_q      <= prod_rd_q;
      sum_q         <= back1_word_comb;
      acc_sticky_q2 <= back1_acc_sticky_comb;
      neg_adj_q2    <= back1_neg_adj_comb;
      is_acc_q2     <= back1_is_acc_comb;
      sexp_q2       <= sexp_q1;
      old_acc_q2    <= old_acc_q1;

      prod_valid_q <= in_valid_q;
      prod_id_q    <= in_id_q;
      prod_rd_q    <= in_rd_q;
      for (k = 0; k < MX_K8; k++) prod_q[k] <= prod_comb[k];
      sexp_q1      <= sexp_comb;
      old_acc_q1   <= rs3_q[31:0];  // forward old_acc alongside prod_q - see header

      in_valid_q  <= start_i;
      in_id_q     <= id_i;
      in_rd_q     <= rd_i;
      rs1_q       <= rs1_i;
      rs2_q       <= rs2_i;
      rs3_q       <= rs3_i;
    end
    // stall: every register holds (no assignment reached this cycle).
  end

  assign result_valid_o = result_valid_q;
  assign result_id_o    = result_id_q;
  assign result_rd_o    = result_rd_q;
  assign result_data_o  = result_data_q;

  //----------------------------------------------------------------------------
  // MXFP8 element decode. Returns (sign, exp, mag) such that the element's
  // value is (-1)^sign * 2^exp * mag, with mag an integer mantissa (implicit
  // leading bit included for normals, omitted for subnormals).
  //
  //   E4M3: bias 7, 3 mantissa bits. normal value = 2^(e-7) * (1.mmm)
  //         = 2^(e-7-3) * {1,mmm};  subnormal (e==0) = 2^(1-7-3) * {0,mmm}.
  //   E5M2: bias 15, 2 mantissa bits. normal value = 2^(e-15) * (1.mm)
  //         = 2^(e-15-2) * {1,mm};   subnormal (e==0) = 2^(1-15-2) * {0,mm}.
  //
  //   Exponent ranges: E4M3 in [-9, 5]; E5M2 in [-16, 14] (max-exponent
  //   encodings decoded as finite per Known Limitation #3). The frame's
  //   anchor (32) equals -2*min(exp), so every product shift is >= 0.
  //----------------------------------------------------------------------------
  function automatic void fp8_decode(
      input  logic [7:0] b,
      input  logic       e5m2,
      output logic       sgn,
      output mx_exp_t    ex,
      output logic [7:0] mg
  );
    logic [3:0] e4;
    logic [2:0] m4;
    logic [4:0] e5;
    logic [1:0] m5;
    begin
      sgn = b[7];
      e4  = b[6:3];  m4 = b[2:0];
      e5  = b[6:2];  m5 = b[1:0];
      if (e5m2) begin
        if (e5 == 5'd0) begin
          ex = mx_exp_t'(1) - mx_exp_t'(15) - mx_exp_t'(2);   // subnormal exponent
          mg = {6'd0, m5};                                     // sig = {0, mm}
        end else begin
          ex = mx_exp_t'({11'd0, e5}) - mx_exp_t'(15) - mx_exp_t'(2);
          mg = {5'd0, 1'b1, m5};                               // sig = {1, mm}
        end
      end else begin
        if (e4 == 4'd0) begin
          ex = mx_exp_t'(1) - mx_exp_t'(7) - mx_exp_t'(3);     // subnormal exponent
          mg = {5'd0, m4};                                     // sig = {0, mmm}
        end else begin
          ex = mx_exp_t'({12'd0, e4}) - mx_exp_t'(7) - mx_exp_t'(3);
          mg = {4'd0, 1'b1, m4};                               // sig = {1, mmm}
        end
      end
    end
  endfunction

  //----------------------------------------------------------------------------
  // FRONT-END: decode k=8 A/B element pairs, form one product each. This is
  // the ONLY per-format branch in the engine; the back-end never looks at the
  // element format. sub_fmt_e5m2 is read from rs3_q[48] - an input-stage
  // register, same instruction as rs1_q/rs2_q this cycle (see header).
  //----------------------------------------------------------------------------
  logic sub_fmt_e5m2;
  assign sub_fmt_e5m2 = rs3_q[48];

  // Block scale exponent, computed HERE (FRONT) and REGISTERED as sexp_q1
  // (Phase 18's hoist, retargeted): it feeds the accumulator slide in BACK1
  // and the final exponent in BACK3 - it is NOT folded into the product
  // exponents any more, because the products live in the SCALE-FREE frame.
  assign sexp_comb = scale_exp(rs3_q[39:32], rs3_q[47:40]);

  logic       fe_a_sign [0:MX_K8-1];
  logic       fe_b_sign [0:MX_K8-1];
  mx_exp_t    fe_a_exp  [0:MX_K8-1];
  mx_exp_t    fe_b_exp  [0:MX_K8-1];
  logic [7:0] fe_a_mag  [0:MX_K8-1];
  logic [7:0] fe_b_mag  [0:MX_K8-1];

  integer fi;
  always_comb begin
    for (fi = 0; fi < MX_K8; fi++) begin
      fp8_decode(rs1_q[8*fi +: 8], sub_fmt_e5m2, fe_a_sign[fi], fe_a_exp[fi], fe_a_mag[fi]);
      fp8_decode(rs2_q[8*fi +: 8], sub_fmt_e5m2, fe_b_sign[fi], fe_b_exp[fi], fe_b_mag[fi]);

      prod_comb[fi].sign = fe_a_sign[fi] ^ fe_b_sign[fi];
      // Element exponents ONLY (see header): range [-32, 28].
      prod_comb[fi].exp  = fe_a_exp[fi] + fe_b_exp[fi];
      // Integer mantissa product: max 15*15 = 225 fits in 8 bits; the
      // struct's 16-bit field is the multiplier's natural output width.
      prod_comb[fi].mag  = {8'd0, fe_a_mag[fi]} * {8'd0, fe_b_mag[fi]};
    end
  end

  //----------------------------------------------------------------------------
  // BACK1: the scale-free frame. Two independent halves meeting at one add:
  //
  //   (a) SoP: shift each product into the frame at (exp + FP8_FRAME_ANCHOR)
  //       - a shift in [0, 60], exact by construction (the anchor covers the
  //       smallest product exactly; see mxdotp_pkg.sv's FP8 frame header) -
  //       and sum the 8 into a 70-bit signed SoP.
  //   (b) accumulator slide: decode the FP32 accumulator, compute its shift
  //       against the frame, and produce the 120-bit extended word
  //       {frame95, remaining25} plus sticky/bypass flags. Identical
  //       structure to the FP4 engine's BACK1; only the constants differ.
  //----------------------------------------------------------------------------

  // (a) product placement + SoP
  logic signed [FP8_SOP_WIDTH-1:0] sp_placed [0:MX_K8-1];
  logic signed [FP8_SOP_WIDTH-1:0] sop;

  integer bi;
  always_comb begin
    sop = '0;
    for (bi = 0; bi < MX_K8; bi++) begin
      // Sign-apply then shift: |mag| <= 225 (8 bits) at shift <= 60 tops out
      // at bit 67 < 69, so a single placed product never overflows 70 signed;
      // the 8-term sum is bounded by the package's |SoP| < 2^69 proof.
      sp_placed[bi] = (prod_q[bi].sign
                        ? -$signed({{(FP8_SOP_WIDTH-16){1'b0}}, prod_q[bi].mag})
                        :  $signed({{(FP8_SOP_WIDTH-16){1'b0}}, prod_q[bi].mag}))
                      <<< (int'(prod_q[bi].exp) + FP8_FRAME_ANCHOR);
      sop = sop + sp_placed[bi];
    end
  end

  // synthesis translate_off
  // Sizing-proof assert: every product shift is in [0, 60] and the SoP obeys
  // the package bound. Mirrors fp8_golden.py's in-model asserts.
  always_comb begin
    for (int ci = 0; ci < MX_K8; ci++) begin
      if (prod_valid_q) begin
        assert (int'(prod_q[ci].exp) + FP8_FRAME_ANCHOR >= 0 &&
                int'(prod_q[ci].exp) + FP8_FRAME_ANCHOR <= 60) else
          $error("mxdotp_fp8_fused_engine: product frame shift out of [0,60]");
      end
    end
  end
  // synthesis translate_on

  // (b) accumulator slide - the FP4 engine's BACK1, FP8 constants.
    mx_acc_slide #(
    .FRAME_W         (FP8_FRAME_WIDTH),
    .REMAIN          (FP8_REMAIN_BITS),
    .MAX_ACC_SHIFT   (FP8_MAX_ACC_SHIFT),
    .ACC_SHIFT_CONST (FP8_ACC_SHIFT_CONST),
    .SOP_W           (FP8_SOP_WIDTH)
  ) fp8_acc_slide_i (
    .old_acc_i    (old_acc_q1),
    .scale_exp_i  (sexp_q1),
    .sop_i        (sop),
    .valid_i      (prod_valid_q),
    .word_o       (back1_word_comb),
    .acc_sticky_o (back1_acc_sticky_comb),
    .neg_adj_o    (back1_neg_adj_comb),
    .is_acc_o     (back1_is_acc_comb)
  );

  // rs3_q[63:49] unused: bits [47:32] (scales) and [48] (E4M3/E5M2 select) are
  // consumed in FRONT, [31:0] (old_acc) is forwarded as old_acc_q1; [63:49] are
  // reserved[15:1] (see header).
  wire _unused_rsvd = &{1'b0, rs3_q[63:49]};

  //----------------------------------------------------------------------------
  // BACK2: sign/magnitude (with the sticky-negation adjust) + leading-one
  // scan on the 120-bit extended word (mxdotp_pkg.sv's fp8_find_lead).
  //----------------------------------------------------------------------------

  mx_find_lead #(.W(FP8_LZC_WIDTH)) fp8_find_lead_i (
    .word_i       (sum_q),
    .neg_adjust_i (neg_adj_q2),
    .sign_o       (back2_lead_comb.sign),
    .lead_pos_o   (back2_lead_comb.lead_pos),
    .mag_o        (back2_lead_comb.mag)
  );

  //----------------------------------------------------------------------------
  // BACK3: mantissa extraction + sticky + round + exponent clamp
  // (mxdotp_pkg.sv's fp8_finalize - the scale re-enters here, on the
  // exponent only), or the verbatim accumulator bypass.
  //----------------------------------------------------------------------------

  logic [31:0] back3_finalized;

  mx_finalize #(
    .W      (FP8_LZC_WIDTH),
    .REMAIN (FP8_REMAIN_BITS),
    .ANCHOR (FP8_FRAME_ANCHOR)
  ) fp8_finalize_i (
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
