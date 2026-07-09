//==============================================================================
// File    : mxdotp_execute.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Execute unit for MXDOTP - unified MXFP4 (E2M1) datapath. See
//   mxdotp_pkg.sv's "unified MXDOTP/MXFINAL operand convention" milestone
//   header for the full rationale; summary below.
//
//   Dispatch is on mx_operation (funct3): DOTP vs. FINAL vs. the
//   validation-only dual-read test. mx_format (funct2) only affects
//   MXFINAL's behavior now (whether it includes the residue contribution) -
//   MXDOTP's own arithmetic is completely format-independent.
//
//   MX_FUNCT3_DOTP (rs1=A, rs2=B, rs3=AR, ALL 64-bit dual-read, MX_K=16
//   MXFP4 elements each, regardless of format):
//     Converts every element of A, B, and AR via fp4_to_code (exact fixed-
//     point "2*value" integer, no floating intermediate needed - see
//     mxdotp_pkg.sv), computes p1 = sum(A_i*B_i) and p2 = sum(AR_i*B_i) as
//     raw, UNSCALED fixed-point sums - no scale knowledge exists at this
//     instruction at all, in any format. Stages p1/p2 in private registers
//     pending_p1_q/pending_p2_q. No register writeback (mxdotp_xif.sv drives
//     issue_resp.writeback=0 for this op - see that file for why that's
//     actually sufficient to suppress the RF write, confirmed against
//     cv32e40x_id_stage.sv's rf_we = rf_we_dec || xif_we chain). AR/p2 are
//     computed unconditionally even for MX_FMT_MXFP4 (no residue) - the
//     arithmetic doesn't know or care about format; only MXFINAL's dispatch
//     does, below.
//
//   MX_FUNCT3_FINAL (rs1=scales={a_scale[31:24],ar_scale[23:16],
//   b_scale[15:8],reserved[7:0]}, rs2=old FP32 accumulator - BOTH plain
//   32-bit reads, no dual-read for either):
//     Applies scale_exp(a_scale,b_scale) to pending_p1_q via place_in_acc
//     (with the -2 exponent correction fp4_to_code's fixed-point convention
//     needs - see mxdotp_pkg.sv) - always. Applies scale_exp(ar_scale,
//     b_scale) to pending_p2_q the same way, but that contribution is only
//     added to the final sum when mx_format == MX_FMT_MXFP4_RESIDUAL -
//     masked out (contributes exactly zero) for every other format, since
//     AR/p2 are meaningless without a residue operand. Brings in the old
//     accumulator via fp32_to_acc (unchanged), sums at full ACC_FULL_WIDTH
//     precision (no intermediate narrowing - same philosophy throughout this
//     datapath), and performs the single final round-to-nearest-even via
//     acc_to_fp32. Writes result to rd.
//
//   pending_p1_q/pending_p2_q are genuinely private coprocessor state - never
//   exposed on the XIF interface, per the architectural direction that the
//   coprocessor's internal organization is not constrained by the CPU's
//   32-bit register file. Both are cleared after MXFINAL consumes them; if
//   MXFINAL is ever issued without a preceding MXDOTP, it degrades to
//   "re-round the accumulator alone" (both reset-initialized to zero) - a
//   defined, if unlikely-to-be-exercised, fallback rather than an error.
//
//   A third op, MX_FUNCT3_DUALREAD_TEST, also exists but is NOT part of the
//   real MXDOTP ISA above - it's a minimal, deliberately-separate validation
//   instruction added specifically to exercise the core's dual-read
//   mechanism (cv32e40x_core.sv's X_DUALREAD / REGFILE_NUM_READ_PORTS==6)
//   end-to-end, independent of format. It writes rs1's paired "+1" register
//   value straight to rd; see mxdotp_pkg.sv for the exact semantics.
//
//==============================================================================

module mxdotp_execute
    import mxdotp_pkg::*;
#(
    parameter int X_RFR_WIDTH    = 32,
    parameter int X_RFW_WIDTH    = 32,
    parameter int LATENCY_CYCLES = 2   // must be >= 1; not yet re-tuned for the
                                        // real datapath's actual critical path -
                                        // correctness-first, timing later.
)
(
    input  logic                   clk_i,
    input  logic                   rst_ni,

    input  logic                   start_i,
    output logic                   done_o,

    input  logic [X_RFR_WIDTH-1:0] rs1,
    input  logic [X_RFR_WIDTH-1:0] rs2,
    input  logic [X_RFR_WIDTH-1:0] rs3,

    input  logic [2:0]             mx_operation,
    input  logic [1:0]             mx_format,

    output logic [X_RFW_WIDTH-1:0] result_data
);

  //----------------------------------------------------------------------------
  // Input capture (on start_i) - unchanged shape from the placeholder version
  //----------------------------------------------------------------------------

  logic [X_RFR_WIDTH-1:0] rs1_q, rs2_q, rs3_q;
  logic [2:0]             mx_operation_q;
  logic [1:0]             mx_format_q;

  //----------------------------------------------------------------------------
  // Latency counter / busy tracking - unchanged from the placeholder version
  //----------------------------------------------------------------------------

  localparam int CNT_WIDTH = (LATENCY_CYCLES <= 1) ? 1 : $clog2(LATENCY_CYCLES + 1);

  logic [CNT_WIDTH-1:0] cycle_cnt_q;
  logic                 busy_q;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      busy_q         <= 1'b0;
      cycle_cnt_q    <= '0;
      rs1_q          <= '0;
      rs2_q          <= '0;
      rs3_q          <= '0;
      mx_operation_q <= '0;
      mx_format_q    <= '0;
    end else if (start_i && !busy_q) begin
      busy_q         <= 1'b1;
      cycle_cnt_q    <= CNT_WIDTH'(LATENCY_CYCLES - 1);
      rs1_q          <= rs1;
      rs2_q          <= rs2;
      rs3_q          <= rs3;
      mx_operation_q <= mx_operation;
      mx_format_q    <= mx_format;
    end else if (busy_q) begin
      if (cycle_cnt_q == '0)
        busy_q <= 1'b0;
      else
        cycle_cnt_q <= cycle_cnt_q - 1'b1;
    end
  end

  assign done_o = busy_q && (cycle_cnt_q == '0);

  //----------------------------------------------------------------------------
  // Private state: two raw/unscaled dot-product sums, staged by MXDOTP and
  // consumed by MXFINAL. Width is PSUM_WIDTH (13 bits, derived in
  // mxdotp_pkg.sv - NOT the 9 bits a single product would need; see that
  // derivation for why the difference matters). This REPLACES the earlier
  // per-format pending_sop_q (98-bit ACC_FULL_WIDTH register, computed with
  // the scale already baked in) - now that MXDOTP never sees the scale at
  // all, in any format, there is nothing to bake in and no reason for this
  // state to be anywhere near ACC_FULL_WIDTH.
  //----------------------------------------------------------------------------

  logic signed [PSUM_WIDTH-1:0] pending_p1_q;  // raw sum(A.B)
  logic signed [PSUM_WIDTH-1:0] pending_p2_q;  // raw sum(AR.B)

  //----------------------------------------------------------------------------
  // MXDOTP datapath: unpack A/B/AR, MX_K=16 nibbles each spanning the full
  // 64-bit dual-read operand (element i at bit 4*i for i=0..15 - this falls
  // out of dual-read's {reg+1,reg} concatenation lining up exactly with a
  // contiguous 16-nibble pack across the register pair). Computed
  // unconditionally, every cycle, regardless of mx_operation/mx_format -
  // cheap combinational logic, dispatch into registers happens below.
  //----------------------------------------------------------------------------

  logic [3:0] a_nib  [0:MX_K-1];
  logic [3:0] b_nib  [0:MX_K-1];
  logic [3:0] ar_nib [0:MX_K-1];

  logic signed [CODE_WIDTH-1:0] a_code  [0:MX_K-1];
  logic signed [CODE_WIDTH-1:0] b_code  [0:MX_K-1];
  logic signed [CODE_WIDTH-1:0] ar_code [0:MX_K-1];

  logic signed [PROD_WIDTH-1:0] p1_term [0:MX_K-1];  // A_i * B_i
  logic signed [PROD_WIDTH-1:0] p2_term [0:MX_K-1];  // AR_i * B_i

  logic signed [PSUM_WIDTH-1:0] p1_sum;  // sum(A.B), raw/unscaled
  logic signed [PSUM_WIDTH-1:0] p2_sum;  // sum(AR.B), raw/unscaled

  int i;

  always_comb begin
    for (i = 0; i < MX_K; i++) begin
      a_nib[i]  = rs1_q[4*i +: 4];
      b_nib[i]  = rs2_q[4*i +: 4];
      ar_nib[i] = rs3_q[4*i +: 4];
    end

    for (i = 0; i < MX_K; i++) begin
      a_code[i]  = fp4_to_code(a_nib[i]);
      b_code[i]  = fp4_to_code(b_nib[i]);
      ar_code[i] = fp4_to_code(ar_nib[i]);
      // Signed*signed multiply, both operands sign-extended to PROD_WIDTH by
      // the assignment - exact, no rounding (see mxdotp_pkg.sv for the
      // 9-bit single-product derivation).
      p1_term[i] = PROD_WIDTH'(a_code[i]  * b_code[i]);
      p2_term[i] = PROD_WIDTH'(ar_code[i] * b_code[i]);
    end

    // Summed via a loop, not a hardcoded expression, so this stays correct
    // for whatever MX_K mxdotp_pkg.sv defines. No clamp: p1_sum/p2_sum are
    // stored into pending_p1_q/pending_p2_q (see always_ff below) at full
    // PSUM_WIDTH precision, which was derived specifically to make this
    // summation lossless (see mxdotp_pkg.sv).
    p1_sum = '0;
    p2_sum = '0;
    for (i = 0; i < MX_K; i++) begin
      p1_sum = p1_sum + PSUM_WIDTH'(p1_term[i]);
      p2_sum = p2_sum + PSUM_WIDTH'(p2_term[i]);
    end
  end

  //----------------------------------------------------------------------------
  // MXFINAL datapath: decode rs1_q=scales / rs2_q=old_acc (both plain 32-bit
  // values - rs1/rs2 are never dual-read for this op, in any format, so only
  // their low 32 bits are meaningful regardless of X_RFR_WIDTH). Applies
  // each scale pair to pending_p1_q/pending_p2_q via place_in_acc, brings in
  // the old accumulator via fp32_to_acc, and sums at full ACC_FULL_WIDTH
  // precision (no clamp - straight into acc_to_fp32 in the result_data_q
  // update below). p2's contribution is masked to zero unless mx_format_q ==
  // MX_FMT_MXFP4_RESIDUAL - this is the ONLY format-dependent step in the
  // entire datapath now.
  //----------------------------------------------------------------------------

  logic [7:0]  a_scale, ar_scale, b_scale;
  logic [31:0] old_acc;

  mx_exp_t exp1, exp2;  // scale_exp(...) - 2, see mxdotp_pkg.sv derivation

  logic        p1_sign, p2_sign;
  logic [PSUM_WIDTH-1:0] p1_mag, p2_mag;  // same-width unsigned magnitude -
                                            // same reinterpret-via-assignment
                                            // pattern acc_to_fp32 uses for `mag`

  logic signed [ACC_WIDTH-1:0]      contrib1, contrib2, acc_contrib;
  logic signed [ACC_FULL_WIDTH-1:0] contrib1_wide, contrib2_wide, acc_contrib_wide;
  logic signed [ACC_FULL_WIDTH-1:0] contrib2_masked_wide;
  logic signed [ACC_FULL_WIDTH-1:0] final_sum_wide;

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

    p1_sign = pending_p1_q[PSUM_WIDTH-1];
    p1_mag  = p1_sign ? (-pending_p1_q) : pending_p1_q;  // same-width reinterpret
    p2_sign = pending_p2_q[PSUM_WIDTH-1];
    p2_mag  = p2_sign ? (-pending_p2_q) : pending_p2_q;

    contrib1    = place_in_acc(p1_sign, exp1, {{(32-PSUM_WIDTH){1'b0}}, p1_mag});
    contrib2    = place_in_acc(p2_sign, exp2, {{(32-PSUM_WIDTH){1'b0}}, p2_mag});
    acc_contrib = fp32_to_acc(old_acc);

    contrib1_wide    = contrib1;     // sign-extends ACC_WIDTH -> ACC_FULL_WIDTH
    contrib2_wide    = contrib2;
    acc_contrib_wide = acc_contrib;

    // The one and only format-dependent step in this whole datapath: p2's
    // (residue's) contribution is included only for MX_FMT_MXFP4_RESIDUAL.
    // Every other format (MX_FMT_MXFP4, and the two reserved-but-not-yet-
    // implemented codes) gets exactly zero from it, which is the same as
    // MX_FMT_MXFP4's own defined behavior - a safe, deliberate default for
    // "not implemented yet", not an arbitrary one.
    contrib2_masked_wide = (mx_format_q == MX_FMT_MXFP4_RESIDUAL) ? contrib2_wide : '0;

    final_sum_wide = contrib1_wide + contrib2_masked_wide + acc_contrib_wide;
  end

  //----------------------------------------------------------------------------
  // pending_p1_q/pending_p2_q update: only on the cycle done_o pulses.
  // Dispatch is on mx_operation_q ALONE now (not format) - the arithmetic
  // that produces p1_sum/p2_sum never depended on format to begin with, so
  // every MXDOTP (any format, including the two reserved ones) stages the
  // same way, and every MXFINAL (any format) clears the same way.
  //----------------------------------------------------------------------------

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      pending_p1_q <= '0;
      pending_p2_q <= '0;
    end else if (done_o) begin
      unique case (mx_operation_q)
        MX_FUNCT3_DOTP: begin
          pending_p1_q <= p1_sum;
          pending_p2_q <= p2_sum;
        end
        MX_FUNCT3_FINAL: begin
          pending_p1_q <= '0;  // consumed - reset for a clean next chain
          pending_p2_q <= '0;
        end
        default: begin
          pending_p1_q <= pending_p1_q;
          pending_p2_q <= pending_p2_q;
        end
      endcase
    end
  end

  //----------------------------------------------------------------------------
  // Result data: latched into a register on the done_o edge, not exposed as
  // a live combinational function of pending state.
  //
  // Bug this fixes (carried over from the original k=8 datapath, still
  // applicable): the always_ff above clears pending_p1_q/pending_p2_q on the
  // very same done_o edge that MXFINAL's result becomes valid. mxdotp_xif.sv
  // only actually reads result_data starting the *following* cycle (state_q
  // transitions MX_COMPUTE -> MX_RESULT one cycle after done_o, standard
  // register delay), by which point a purely-combinational result_data would
  // have already recomputed from the now-cleared pending state, reading back
  // 0 instead of the real result.
  //
  // Fix: capture the result the instant it's valid (done_o, using the
  // pre-edge pending values - same NBA semantics that make the clear above
  // correct), then hold it stable in a register regardless of what pending
  // state does on later cycles.
  //----------------------------------------------------------------------------

  logic [X_RFW_WIDTH-1:0] result_data_q;

  // Upper 32 bits of the (possibly dual-read) rs1_q container - only meaningful when
  // X_RFR_WIDTH >= 64 (this project always instantiates with 64 - see mxdotp_core_top.sv -
  // but this module's own X_RFR_WIDTH parameter still defaults to 32, so guard the slice
  // rather than assuming). Used solely by MX_FUNCT3_DUALREAD_TEST below: this is the one
  // and only place this coprocessor looks at the upper half of a dual-read operand at all.
  logic [31:0] rs1_hi;
  generate
    if (X_RFR_WIDTH >= 64) begin : gen_rs1_hi
      assign rs1_hi = rs1_q[63:32];
    end else begin : gen_no_rs1_hi
      assign rs1_hi = '0;
    end
  endgenerate

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      result_data_q <= '0;
    end else if (done_o) begin
      unique case (mx_operation_q)
        MX_FUNCT3_DOTP:  result_data_q <= '0;
        MX_FUNCT3_FINAL: result_data_q <= acc_to_fp32(final_sum_wide);
        // Validation-only: proves the core's dual-read mechanism actually assembled
        // {rs1+1, rs1} correctly (see mxdotp_pkg.sv's MX_FUNCT3_DUALREAD_TEST comment and
        // cv32e40x_id_stage.sv's gen_dualread_raddr/operand_a_hi_fw_mux). Not part of the
        // real MXDOTP ISA, and independent of format.
        MX_FUNCT3_DUALREAD_TEST: result_data_q <= X_RFW_WIDTH'(rs1_hi);
        default:                 result_data_q <= '0;
      endcase
    end
  end

  assign result_data = result_data_q;

endmodule
