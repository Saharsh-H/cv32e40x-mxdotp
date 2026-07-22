//==============================================================================
// File    : mxdotp_final_engine.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Standalone MXFINAL arithmetic engine - the FINAL half of what used to be
//   one shared mxdotp_execute module. See mxdotp_xif.sv's "pipelined
//   coprocessor" milestone header (mxdotp_pkg.sv) for the full rationale.
//
//   rs1=scales ({a_scale[31:24],ar_scale[23:16],b_scale[15:8],reserved[7:0]}),
//   rs2=old FP32 accumulator - BOTH plain 32-bit reads, no dual-read for
//   either, in any format.
//
//   RESIDUE-STYLE FORMATS ONLY as of the fused-fast-path milestone (see
//   mxdotp_pkg.sv's MX_SLOT_FUSED milestone header): plain (non-residue)
//   MXFP4/MXFP8 now go exclusively through mxdotp_fused_engine.sv and never
//   reach this engine at all. Because every instruction reaching this
//   engine is therefore guaranteed - by ISA convention, not a runtime check
//   - to be a residue-style format, the format mask this engine used to
//   apply is gone: p2/residue's contribution is now included
//   UNCONDITIONALLY, always. There is no mx_format input any more; nothing
//   left in this engine's own logic is format-dependent.
//
//   p1_i/p2_i are the "mailbox" snapshot - MXDOTP's raw, unscaled dot-product
//   sums. This engine captures them into its own private registers at
//   start_i, on the exact same cycle (and via the exact same mechanism) it
//   captures rs1_i/rs2_i - there is nothing special-cased about the
//   snapshot; it is an ordinary input capture like any other operand. The
//   caller (mxdotp_xif.sv) is responsible for only asserting start_i once
//   the mailbox actually holds valid data, and for freeing the mailbox the
//   same cycle - this engine has no visibility into "is the mailbox valid",
//   it just captures whatever is on p1_i/p2_i the cycle it is told to start.
//
//   MILESTONE (current): back-end pipelining for timing closure - see
//   mxdotp_fused_engine.sv's matching milestone header for the full
//   rationale (Vivado OOC synthesis measured this engine's own critical
//   path at ~28.55ns against a 10ns target, the identical root cause: one
//   unbroken combinational cloud from p1_q/p2_q/rs1_q/rs2_q all the way to
//   result_data_q, because acc_to_fp32 was a single monolithic function
//   with nowhere for a caller to put a register). This is "Option 2"
//   (balanced) applied here exactly as in mxdotp_fused_engine.sv: what used
//   to be one combinational stage (LATENCY_CYCLES-gated, but really just
//   one cycle's worth of logic regardless of the counter value) is now
//   THREE real stages:
//     - BACK1: decode scales, place_in_acc x2 (contrib1, contrib2) +
//       fp32_to_acc (acc_contrib), sum all three -> registers sum_q (the
//       X|Y cut).
//     - BACK2: mxdotp_pkg.sv's acc_find_lead (leading-one scan) on sum_q ->
//       registers lead_q (the Y|Z cut - the single highest-leverage cut
//       identified from Vivado's timing report).
//     - BACK3: mxdotp_pkg.sv's acc_finalize (mantissa extract + sticky +
//       round + clamp) on lead_q -> result_data_q.
//   Each stage is a REAL single cycle now, not an artificial wait - the old
//   LATENCY_CYCLES parameter is gone, replaced by the genuine 3-stage
//   depth. Net latency: was LATENCY_CYCLES(2, placeholder wait around one
//   real combinational cycle) -> now 3 (three REAL 1-cycle stages) - a net
//   +1 cycle, not +3, since the old parameter was already "spending" one
//   cycle on a wait that didn't correspond to real pipeline depth.
//
//   ARITHMETIC (current milestone): the old absolute-window accumulate
//   (place_in_acc x2 + fp32_to_acc into the ACC_WIDTH=95 / ACC_ANCHOR=34
//   buffer) is REPLACED by a scale-free SLIDING-ACCUMULATOR frame, closing
//   the same truncation-at-extreme-scales class of bug that the plain-MXFP4
//   rewrite closed (the absolute window silently dropped whole scale/
//   magnitude ranges). This is the fourth sibling of the MXFP4/MXFP8/M2XFP4
//   sliding frames - see mxdotp_pkg.sv's "MXFINAL SLIDING-ACCUMULATOR FRAME"
//   section for the full derivation (anchor selection on p1==0; per-term
//   clamped placement; the three bypasses; and the from-first-principles
//   sizing MXF_FRAME_WIDTH=38, MXF_REMAIN_BITS=36, MXF_LZC_WIDTH=74).
//   Validated bit-exact RNE against an exact-rational reference
//   (mxfinal_golden.py) across 745k+ vectors, and the RTL itself confirmed
//   bit-identical to that golden model on 100k+ vectors via a Verilator TB.
//
//   BACK1 now: select the anchor (scale_exp(a,b) if p1!=0, else
//   scale_exp(ar,b) - one mux on p1==0, NOT a runtime leading-bit compare),
//   place the frame-resident product (p1, or p2 when p1==0) exactly, slide
//   the other product and the old accumulator in via the per-term clamped
//   shift, and OR their stickies. The -2 that fp4_to_code's *4 convention
//   needs is carried once by mxf_finalize's exponent term (NOT applied to
//   the anchor here - doing both would double-count it). p2/residue's
//   contribution is unconditional (no format mask; only residue-style
//   formats reach this engine post-split). BACK2/BACK3 are structurally
//   unchanged: mxf_find_lead (leading-one scan) then mxf_finalize (mantissa/
//   round/clamp), with the acc-verbatim bypass applied at BACK3.
//==============================================================================

module mxdotp_final_engine
    import mxdotp_pkg::*;
#(
    // Real system value is always 64 (mxdotp_core_top.sv -> mxdotp_xif.sv ->
    // here), same as the other two engines - matched here for consistency
    // even though, unlike mxdotp_dotp_engine.sv/mxdotp_fused_engine.sv, this
    // module never actually needs more than the low 32 bits of rs1_i/rs2_i
    // (scales/old_acc are plain 32-bit reads, never dual-read - see file
    // header) and would work correctly at 32 too. No elaboration-time
    // guard needed here for that reason.
    parameter int X_RFR_WIDTH    = 64,
    parameter int X_RFW_WIDTH    = 32
)
(
    input  logic                   clk_i,
    input  logic                   rst_ni,

    input  logic                   start_i,
    output logic                   busy_o,
    output logic                   done_o,

    input  logic [X_RFR_WIDTH-1:0]    rs1_i,  // scales
    input  logic [X_RFR_WIDTH-1:0]    rs2_i,  // old FP32 accumulator
    input  logic signed [PSUM_WIDTH-1:0] p1_i,  // mailbox snapshot: raw sum(A.B)
    input  logic signed [PSUM_WIDTH-1:0] p2_i,  // mailbox snapshot: raw sum(AR.B)

    output logic [X_RFW_WIDTH-1:0] result_data
);

  //----------------------------------------------------------------------------
  // Input capture (on start_i) - p1_i/p2_i captured exactly like rs1_i/rs2_i;
  // see file header for why that's the entire "snapshot" mechanism.
  //----------------------------------------------------------------------------

  logic [X_RFR_WIDTH-1:0] rs1_q, rs2_q;
  logic signed [PSUM_WIDTH-1:0] p1_q, p2_q;

  //----------------------------------------------------------------------------
  // Three-phase busy tracking: BACK1 (scale+accumulate) -> BACK2 (leading-
  // one scan) -> BACK3 (mantissa/round/clamp) - see file header. Each is a
  // REAL single cycle by construction; no counter needed (unlike this
  // engine's previous single-phase LATENCY_CYCLES placeholder, now removed
  // entirely since it no longer means anything true).
  //----------------------------------------------------------------------------

  typedef enum logic [1:0] { FINAL_BACK1, FINAL_BACK2, FINAL_BACK3 } final_phase_e;
  final_phase_e phase_q;

  logic busy_q;

  // BACK1 -> BACK2 hand-off (the X|Y cut). The old ACC_FULL_WIDTH sum_q of the
  // absolute-window path is REPLACED by the sliding-frame's MXF_LZC_WIDTH word
  // (option (a): a new register of the correct width, sum_q left removed
  // rather than resized, to keep the diff minimal and the intent clear). The
  // per-instruction anchor (scale_exp) and the aggregate sticky / neg_adjust /
  // acc-bypass flags are registered alongside it, since BACK2/BACK3 need them.
  logic signed [MXF_LZC_WIDTH-1:0] mxf_word_q;   // NEW - the X|Y cut
  mx_exp_t                         anchor_q;     // selected scale_exp for finalize
  logic                            mxf_sticky_q; // aggregate tail sticky
  logic                            mxf_is_acc_q; // bypass: return old_acc verbatim
  logic [31:0]                     bypass_acc_q; // the old_acc to return on bypass
  mxf_lead_result_t                lead_q;       // BACK2 -> BACK3 hand-off (Y|Z cut)

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      busy_q       <= 1'b0;
      phase_q      <= FINAL_BACK1;
      rs1_q        <= '0;
      rs2_q        <= '0;
      p1_q         <= '0;
      p2_q         <= '0;
      mxf_word_q   <= '0;
      anchor_q     <= '0;
      mxf_sticky_q <= 1'b0;
      mxf_is_acc_q <= 1'b0;
      bypass_acc_q <= '0;
      lead_q       <= '0;
    end else if (start_i && !busy_q) begin
      busy_q  <= 1'b1;
      phase_q <= FINAL_BACK1;
      rs1_q   <= rs1_i;
      rs2_q   <= rs2_i;
      p1_q    <= p1_i;
      p2_q    <= p2_i;
    end else if (busy_q && (phase_q == FINAL_BACK1)) begin
      // X|Y cut: register the sliding-frame word (plus the scalars BACK2/BACK3
      // consume) before the leading-one scan runs on it.
      mxf_word_q   <= back1_word_comb;
      anchor_q     <= back1_anchor_comb;
      mxf_sticky_q <= back1_sticky_comb;
      mxf_is_acc_q <= back1_is_acc_comb;
      bypass_acc_q <= old_acc;
      phase_q      <= FINAL_BACK2;
    end else if (busy_q && (phase_q == FINAL_BACK2)) begin
      // Y|Z cut: register the leading-one scan's result before mantissa
      // extraction/round/clamp run on it - the single highest-leverage cut
      // identified from Vivado's timing report (see file header).
      lead_q  <= back2_lead_comb;
      phase_q <= FINAL_BACK3;
    end else if (busy_q && (phase_q == FINAL_BACK3)) begin
      busy_q <= 1'b0;
    end
  end

  assign busy_o = busy_q;
  assign done_o = busy_q && (phase_q == FINAL_BACK3);

  //----------------------------------------------------------------------------
  // BACK1: decode rs1_q=scales / rs2_q=old_acc, apply each scale pair to
  // the captured p1_q/p2_q via place_in_acc, bring in the old accumulator
  // via fp32_to_acc, and sum at full ACC_FULL_WIDTH precision. p2/residue's
  // contribution is UNCONDITIONAL - no format check anywhere in this
  // engine - since only residue-style formats ever reach it post-split (see
  // file header / mxdotp_pkg.sv's MX_SLOT_FUSED milestone header). Feeds
  // sum_q (the X|Y cut) rather than continuing straight into the leading-
  // one scan.
  //----------------------------------------------------------------------------

  logic [7:0]  a_scale, ar_scale, b_scale;
  logic [31:0] old_acc;

  // Two E8M0 combined scales. NOTE: the "-2" that corrects for fp4_to_code's
  // implicit *4 per raw product (code = 2*value, so code_a*code_b =
  // 4*value_a*value_b) is NOT applied here - it is carried by mxf_finalize's
  // exponent term (lead_pos - (MXF_REMAIN_BITS + 2) + anchor), whose "+2"
  // subtracted IS exactly this code anchor. Both p1 and p2 share the *4
  // convention, so a single shared -2 in finalize covers both. (Applying -2
  // here as well would double-count it - a factor-of-4 / 2-binade error.)
  mx_exp_t sexp1, sexp2;              // scale_exp(...), the raw combined scale
  mx_exp_t back1_anchor_comb;         // the SELECTED anchor (sexp1 or sexp2)
  int      delta;                     // Sa - Sar >= 0 (Sar <= Sa proven)

  // acc decode (subnormals honored, exactly as the plain-MXFP4 frame does)
  logic        acc_sign;
  logic [7:0]  acc_exp_f;
  logic [22:0] acc_mant_f;
  logic        acc_is_normal;
  logic signed [24:0] smant;          // 25-bit signed: |{implicit,mant23}| <= 2^24-1
  mx_exp_t     acc_shift;

  // The three contributors' word-bit shift positions and the frame-resident
  // term / second term selected by p1==0.
  logic signed [24:0] F_val, SECOND_val;   // 25b container (products are 13b)
  int                 F_sh, SECOND_sh, acc_sh;
  logic               p1_is_zero, products_cancel;

  mxf_place_result_t  place_F, place_SECOND, place_acc;

  logic signed [MXF_LZC_WIDTH-1:0] back1_word_comb;
  logic                            back1_sticky_comb;
  logic                            back1_is_acc_comb;

  always_comb begin
    a_scale  = rs1_q[31:24];
    ar_scale = rs1_q[23:16];
    b_scale  = rs1_q[15:8];
    // rs1_q[7:0] is reserved for now.
    old_acc  = rs2_q[31:0];

    sexp1 = scale_exp(a_scale,  b_scale);   // -2 code anchor is in mxf_finalize
    sexp2 = scale_exp(ar_scale, b_scale);
    delta = int'(a_scale) - int'(ar_scale);   // = Sa_raw - Sar_raw >= 0

    p1_is_zero = (p1_q == '0);

    // Anchor select (one mux, NOT a runtime leading-bit comparison): when p1
    // is present it is the frame-resident reference at sexp1 and p2 slides
    // down by delta; when p1 is exactly zero the residue term p2 is the only
    // product, so anchor at sexp2 with p2 frame-resident.
    if (!p1_is_zero) begin
      back1_anchor_comb = sexp1;
      F_val      = 25'(signed'(p1_q));
      F_sh       = MXF_REMAIN_BITS;
      SECOND_val = 25'(signed'(p2_q));
      SECOND_sh  = MXF_REMAIN_BITS - delta;    // slides DOWN (delta >= 0)
    end else begin
      back1_anchor_comb = sexp2;
      F_val      = 25'(signed'(p2_q));
      F_sh       = MXF_REMAIN_BITS;
      SECOND_val = '0;                          // p1 == 0, no second term
      SECOND_sh  = MXF_REMAIN_BITS;
    end

    // acc decode + slide, identical formula/handling to the plain-MXFP4 frame.
    acc_sign      = old_acc[31];
    acc_exp_f     = old_acc[30:23];
    acc_mant_f    = old_acc[22:0];
    acc_is_normal = (acc_exp_f != 8'd0);
    smant = acc_sign ? -$signed({1'b0, acc_is_normal, acc_mant_f})
                     :  $signed({1'b0, acc_is_normal, acc_mant_f});
    acc_shift = mx_exp_t'({8'd0, acc_exp_f}) + mx_exp_t'(!acc_is_normal)
              - mx_exp_t'(MXF_ACC_SHIFT_CONST) - back1_anchor_comb;
    acc_sh    = int'(acc_shift) + MXF_REMAIN_BITS;

    // Place all three into the extended word (F exact; SECOND and acc via the
    // per-term clamped shift + own-width sticky).
    place_F      = mxf_place(F_val,      F_sh,      13);
    place_SECOND = mxf_place(SECOND_val, SECOND_sh, 13);
    place_acc    = mxf_place(smant,      acc_sh,    25);

    back1_word_comb   = place_F.contrib + place_SECOND.contrib + place_acc.contrib;
    back1_sticky_comb = place_F.sticky | place_SECOND.sticky | place_acc.sticky;

    // Bypasses (return old_acc verbatim) - see mxdotp_pkg.sv MXFINAL header:
    //   (1) acc dominates; (2) both products zero; (3) products cancel exactly.
    products_cancel = (!p1_is_zero) && (delta < 12) &&
                      (p2_q == -(PSUM_WIDTH'(p1_q <<< delta)));
    back1_is_acc_comb = (acc_shift > mx_exp_t'(MXF_MAX_ACC_SHIFT))
                      || (p1_is_zero && (p2_q == '0))
                      || products_cancel;
  end

  //----------------------------------------------------------------------------
  // BACK2: leading-one scan (mxdotp_pkg.sv's acc_find_lead) on the
  // registered sum. Feeds lead_q (the Y|Z cut) rather than continuing
  // straight into mantissa extraction.
  //----------------------------------------------------------------------------

  mxf_lead_result_t back2_lead_comb;

  always_comb begin
    // neg_adjust: a nonzero positive residue was floor-truncated below the
    // word (the sticky-direction fix). For MXFINAL that is simply the
    // aggregate tail sticky registered from BACK1 (any right-shifted term
    // dropped a positive residue) - see mxf_find_lead / the frame header.
    back2_lead_comb = mxf_find_lead(mxf_word_q, mxf_sticky_q);
  end

  //----------------------------------------------------------------------------
  // BACK3: mantissa extraction + sticky + round + exponent clamp
  // (mxdotp_pkg.sv's acc_finalize) on the registered leading-one-scan
  // result. Result latched into result_data_q on the done_o edge, same
  // discipline as before - never a live combinational function of captured
  // state exposed on the output port.
  //----------------------------------------------------------------------------

  logic [31:0] back3_result_comb;

  always_comb begin
    // Bypass wins over the frame result: when BACK1 flagged acc-dominates /
    // products-zero / products-cancel-exact, the correct result is the old
    // accumulator verbatim (registered in bypass_acc_q). Otherwise finalize
    // the frame word, with the scale (anchor) re-entering here on the
    // exponent only and the aggregate sticky ORed into the round decision.
    if (mxf_is_acc_q)
      back3_result_comb = bypass_acc_q;
    else
      back3_result_comb = mxf_finalize(lead_q, mxf_sticky_q, anchor_q);
  end

  logic [X_RFW_WIDTH-1:0] result_data_q;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      result_data_q <= '0;
    end else if (done_o) begin
      result_data_q <= back3_result_comb;
    end
  end

  assign result_data = result_data_q;

endmodule
