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
//   Applies scale_exp(a_scale,b_scale) to the captured p1 via place_in_acc
//   (with the -2 exponent correction fp4_to_code's fixed-point convention
//   needs - see mxdotp_pkg.sv) - always. Applies scale_exp(ar_scale,b_scale)
//   to the captured p2 the same way and always adds it to the final sum -
//   no mask, since p2/AR is meaningful for every format that ever reaches
//   this engine now. Brings in the old accumulator via fp32_to_acc, sums at
//   full ACC_FULL_WIDTH precision (no intermediate narrowing), and performs
//   the single final round-to-nearest-even across the BACK2/BACK3 split
//   above.
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

  logic signed [ACC_FULL_WIDTH-1:0] sum_q;   // BACK1 -> BACK2 hand-off (NEW - the X|Y cut)
  mx_lead_result_t                  lead_q;  // BACK2 -> BACK3 hand-off (NEW - the Y|Z cut)

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      busy_q  <= 1'b0;
      phase_q <= FINAL_BACK1;
      rs1_q   <= '0;
      rs2_q   <= '0;
      p1_q    <= '0;
      p2_q    <= '0;
      sum_q   <= '0;
      lead_q  <= '0;
    end else if (start_i && !busy_q) begin
      busy_q  <= 1'b1;
      phase_q <= FINAL_BACK1;
      rs1_q   <= rs1_i;
      rs2_q   <= rs2_i;
      p1_q    <= p1_i;
      p2_q    <= p2_i;
    end else if (busy_q && (phase_q == FINAL_BACK1)) begin
      // X|Y cut: register the raw fixed-point sum before the leading-one
      // scan runs on it.
      sum_q   <= back1_sum_comb;
      phase_q <= FINAL_BACK2;
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

  mx_exp_t exp1, exp2;  // scale_exp(...) - 2, see mxdotp_pkg.sv derivation

  logic        p1_sign, p2_sign;
  logic [PSUM_WIDTH-1:0] p1_mag, p2_mag;  // same-width unsigned magnitude -
                                            // same reinterpret-via-assignment
                                            // pattern acc_finalize uses for `mag`

  logic signed [ACC_WIDTH-1:0]      contrib1, contrib2, acc_contrib;
  logic signed [ACC_FULL_WIDTH-1:0] contrib1_wide, contrib2_wide, acc_contrib_wide;
  logic signed [ACC_FULL_WIDTH-1:0] back1_sum_comb;

  always_comb begin
    a_scale  = rs1_q[31:24];
    ar_scale = rs1_q[23:16];
    b_scale  = rs1_q[15:8];
    // rs1_q[7:0] is reserved for now.
    old_acc  = rs2_q[31:0];

    // The "-2" here corrects for fp4_to_code's implicit *4 per raw product
    // (code = 2*value, so code_a*code_b = 4*(value_a*value_b)) - see
    // mxdotp_pkg.sv's derivation comment for the full explanation.
    exp1 = scale_exp(a_scale, b_scale)  - mx_exp_t'(2);
    exp2 = scale_exp(ar_scale, b_scale) - mx_exp_t'(2);

    p1_sign = p1_q[PSUM_WIDTH-1];
    p1_mag  = p1_sign ? (-p1_q) : p1_q;  // same-width reinterpret
    p2_sign = p2_q[PSUM_WIDTH-1];
    p2_mag  = p2_sign ? (-p2_q) : p2_q;

    contrib1    = place_in_acc(p1_sign, exp1, {{(32-PSUM_WIDTH){1'b0}}, p1_mag});
    contrib2    = place_in_acc(p2_sign, exp2, {{(32-PSUM_WIDTH){1'b0}}, p2_mag});
    acc_contrib = fp32_to_acc(old_acc);

    contrib1_wide    = contrib1;     // sign-extends ACC_WIDTH -> ACC_FULL_WIDTH
    contrib2_wide    = contrib2;
    acc_contrib_wide = acc_contrib;

    // p2/residue's contribution is always included now - see header.
    back1_sum_comb = contrib1_wide + contrib2_wide + acc_contrib_wide;
  end

  //----------------------------------------------------------------------------
  // BACK2: leading-one scan (mxdotp_pkg.sv's acc_find_lead) on the
  // registered sum. Feeds lead_q (the Y|Z cut) rather than continuing
  // straight into mantissa extraction.
  //----------------------------------------------------------------------------

  mx_lead_result_t back2_lead_comb;

  always_comb begin
    back2_lead_comb = acc_find_lead(sum_q);
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
    back3_result_comb = acc_finalize(lead_q);
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
