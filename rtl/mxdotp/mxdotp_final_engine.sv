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
//   Applies scale_exp(a_scale,b_scale) to the captured p1 via place_in_acc
//   (with the -2 exponent correction fp4_to_code's fixed-point convention
//   needs - see mxdotp_pkg.sv) - always. Applies scale_exp(ar_scale,b_scale)
//   to the captured p2 the same way, but that contribution is only added to
//   the final sum when mx_format == MX_FMT_MXFP4_RESIDUAL - masked out
//   (contributes exactly zero) for every other format. Brings in the old
//   accumulator via fp32_to_acc, sums at full ACC_FULL_WIDTH precision (no
//   intermediate narrowing), and performs the single final round-to-
//   nearest-even via acc_to_fp32.
//==============================================================================

module mxdotp_final_engine
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
    output logic                   busy_o,
    output logic                   done_o,

    input  logic [X_RFR_WIDTH-1:0]    rs1_i,  // scales
    input  logic [X_RFR_WIDTH-1:0]    rs2_i,  // old FP32 accumulator
    input  logic [1:0]                mx_format_i,
    input  logic signed [PSUM_WIDTH-1:0] p1_i,  // mailbox snapshot: raw sum(A.B)
    input  logic signed [PSUM_WIDTH-1:0] p2_i,  // mailbox snapshot: raw sum(AR.B)

    output logic [X_RFW_WIDTH-1:0] result_data
);

  //----------------------------------------------------------------------------
  // Input capture (on start_i) - p1_i/p2_i captured exactly like rs1_i/rs2_i;
  // see file header for why that's the entire "snapshot" mechanism.
  //----------------------------------------------------------------------------

  logic [X_RFR_WIDTH-1:0] rs1_q, rs2_q;
  logic [1:0]             mx_format_q;
  logic signed [PSUM_WIDTH-1:0] p1_q, p2_q;

  //----------------------------------------------------------------------------
  // Latency counter / busy tracking
  //----------------------------------------------------------------------------

  localparam int CNT_WIDTH = (LATENCY_CYCLES <= 1) ? 1 : $clog2(LATENCY_CYCLES + 1);

  logic [CNT_WIDTH-1:0] cycle_cnt_q;
  logic                 busy_q;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      busy_q      <= 1'b0;
      cycle_cnt_q <= '0;
      rs1_q       <= '0;
      rs2_q       <= '0;
      mx_format_q <= '0;
      p1_q        <= '0;
      p2_q        <= '0;
    end else if (start_i && !busy_q) begin
      busy_q      <= 1'b1;
      cycle_cnt_q <= CNT_WIDTH'(LATENCY_CYCLES - 1);
      rs1_q       <= rs1_i;
      rs2_q       <= rs2_i;
      mx_format_q <= mx_format_i;
      p1_q        <= p1_i;
      p2_q        <= p2_i;
    end else if (busy_q) begin
      if (cycle_cnt_q == '0)
        busy_q <= 1'b0;
      else
        cycle_cnt_q <= cycle_cnt_q - 1'b1;
    end
  end

  assign busy_o = busy_q;
  assign done_o = busy_q && (cycle_cnt_q == '0);

  //----------------------------------------------------------------------------
  // Datapath: decode rs1_q=scales / rs2_q=old_acc, apply each scale pair to
  // the captured p1_q/p2_q via place_in_acc, bring in the old accumulator
  // via fp32_to_acc, and sum at full ACC_FULL_WIDTH precision. p2's
  // contribution is masked to zero unless mx_format_q == MX_FMT_MXFP4_RESIDUAL
  // - this is the only format-dependent step in this engine.
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

    // The one and only format-dependent step in this engine: p2's (residue's)
    // contribution is included only for MX_FMT_MXFP4_RESIDUAL. Every other
    // format (MX_FMT_MXFP4, and the two reserved-but-not-yet-implemented
    // codes) gets exactly zero from it.
    contrib2_masked_wide = (mx_format_q == MX_FMT_MXFP4_RESIDUAL) ? contrib2_wide : '0;

    final_sum_wide = contrib1_wide + contrib2_masked_wide + acc_contrib_wide;
  end

  //----------------------------------------------------------------------------
  // Result data: latched into a register on the done_o edge, not exposed as
  // a live combinational function of captured state - same discipline (and
  // same original bug it avoids) as mxdotp_execute.sv's result_data_q used
  // to follow.
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
