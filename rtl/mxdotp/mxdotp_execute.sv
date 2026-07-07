//==============================================================================
// File    : mxdotp_execute.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Execute unit for MXDOTP - first real (non-placeholder) MXFP8 datapath.
//
//   Two operations, dispatched on mx_operation (funct3), sharing the same
//   start_i/done_o handshake and the same private wide accumulator register:
//
//     MX_FUNCT3_DOTP  (rs1=A, rs2=B, rs3=scales):
//       Unpacks 4 MXFP8 elements from each of rs1/rs2 (k=4 - see
//       mxdotp_pkg.sv header for why this is 4, not the paper's 8), converts
//       both to the common FP9 (E5M3) format, multiplies each pair (raw,
//       unrounded), folds the two E8M0 block scales in as a pure exponent
//       offset, and places each of the 4 scaled products into the shared
//       95-bit/anchor-34 fixed-point buffer (pending_sop_q). No rounding
//       happens here, and no register writeback occurs (mxdotp_xif.sv drives
//       issue_resp.writeback=0 for this op - see that file for why that's
//       actually sufficient to suppress the RF write, confirmed against
//       cv32e40x_id_stage.sv's rf_we = rf_we_dec || xif_we chain).
//
//     MX_FUNCT3_FINAL (rs1=old FP32 accumulator):
//       Decodes rs1 and places it into the SAME wide buffer alongside
//       whatever mxdotp_execute currently holds in pending_sop_q, then
//       performs the single normalize+round (RNE) back to FP32, written to
//       rd. This is the only rounding step in the whole datapath, matching
//       the "single rounding" property both reference papers rely on.
//
//   pending_sop_q is genuinely private coprocessor state - it is never
//   exposed on the XIF interface, per the architectural direction that the
//   coprocessor's internal organization is not constrained by the CPU's
//   32-bit register file. It is cleared after MXFINAL consumes it; if
//   MXFINAL is ever issued without a preceding MXDOTP, it degrades to
//   "re-round rs1 alone" (pending_sop_q reset-initialized to zero) - a
//   defined, if unlikely-to-be-exercised, fallback rather than an error.
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
  // Private wide accumulator (coprocessor-internal state, see file header).
  //
  // This is ACC_FULL_WIDTH (ACC_WIDTH+GUARD_BITS), not ACC_WIDTH: an earlier
  // version of this file narrowed the guard-bit-inclusive sum back down to
  // ACC_WIDTH via an intermediate clamp before storing it here and again
  // before the final MXFINAL addition. That was an unnecessary early
  // narrowing step sitting in front of the datapath's one real rounding
  // point - removed. Nothing narrower than ACC_FULL_WIDTH exists anywhere
  // in this file now; acc_to_fp32 (mxdotp_pkg.sv) takes ACC_FULL_WIDTH
  // directly and performs the single normalize+round itself.
  //----------------------------------------------------------------------------

  logic signed [ACC_FULL_WIDTH-1:0] pending_sop_q;

  //----------------------------------------------------------------------------
  // MXDOTP datapath: unpack -> FP9 -> multiply -> scale -> place in buffer
  //----------------------------------------------------------------------------

  logic [7:0] a_byte [0:MX_K-1];
  logic [7:0] b_byte [0:MX_K-1];
  fp9_t       fp9_a  [0:MX_K-1];
  fp9_t       fp9_b  [0:MX_K-1];
  fp9_prod_t  prod   [0:MX_K-1];

  logic [7:0] xa_raw, xb_raw;
  mx_exp_t    scl_exp;

  logic signed [ACC_WIDTH-1:0]      contrib      [0:MX_K-1];
  logic signed [ACC_FULL_WIDTH-1:0] contrib_wide [0:MX_K-1];
  logic signed [ACC_FULL_WIDTH-1:0] dotp_sum_wide;

  logic signed [ACC_WIDTH-1:0]      acc_contrib;
  logic signed [ACC_FULL_WIDTH-1:0] final_sum_wide;

  int i;

  always_comb begin
    // Unpack A/B: element i in byte i (element 0 = least-significant byte).
    for (i = 0; i < MX_K; i++) begin
      a_byte[i] = rs1_q[8*i +: 8];
      b_byte[i] = rs2_q[8*i +: 8];
    end

    xa_raw = rs3_q[31:24];
    xb_raw = rs3_q[23:16];
    // rs3_q[15:0] is reserved for now (future residue/wider-block use).

    scl_exp = scale_exp(xa_raw, xb_raw);

    for (i = 0; i < MX_K; i++) begin
      fp9_a[i]        = fp8_to_fp9(a_byte[i], MXFP8_SUBFMT);
      fp9_b[i]        = fp8_to_fp9(b_byte[i], MXFP8_SUBFMT);
      prod[i]         = fp9_multiply(fp9_a[i], fp9_b[i]);
      contrib[i]      = place_in_acc(prod[i].sign, prod[i].exp + scl_exp, {24'd0, prod[i].mag});
      contrib_wide[i] = contrib[i]; // sign-extends ACC_WIDTH -> ACC_FULL_WIDTH
    end

    // No clamp here - dotp_sum_wide is stored into pending_sop_q at full
    // ACC_FULL_WIDTH precision (see always_ff below). GUARD_BITS=3 gives
    // headroom for summing up to 8 already-anchored terms without overflow;
    // we only sum 4, so there's margin to spare.
    dotp_sum_wide = contrib_wide[0] + contrib_wide[1] + contrib_wide[2] + contrib_wide[3];

    // MXFINAL datapath: bring in rs1_q (old FP32 accumulator) alongside
    // whatever is currently staged in pending_sop_q - again, no clamp;
    // final_sum_wide goes straight into acc_to_fp32 below.
    acc_contrib    = fp32_to_acc(rs1_q);
    final_sum_wide = pending_sop_q + acc_contrib;  // acc_contrib (ACC_WIDTH) sign-extends
                                                     // to the ACC_FULL_WIDTH LHS context
  end

  //----------------------------------------------------------------------------
  // pending_sop_q update: only on the cycle done_o pulses, only for the two
  // ops that touch it.
  //----------------------------------------------------------------------------

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      pending_sop_q <= '0;
    end else if (done_o) begin
      unique case (mx_operation_q)
        MX_FUNCT3_DOTP:  pending_sop_q <= dotp_sum_wide;
        MX_FUNCT3_FINAL: pending_sop_q <= '0; // consumed - reset for a clean next chain
        default:         pending_sop_q <= pending_sop_q;
      endcase
    end
  end

  //----------------------------------------------------------------------------
  // Result data: latched into a register on the done_o edge, not exposed as
  // a live combinational function of pending_sop_q.
  //
  // Bug this fixes: the always_ff above clears pending_sop_q on the very
  // same done_o edge that MXFINAL's result becomes valid. mxdotp_xif.sv only
  // actually reads result_data starting the *following* cycle (state_q
  // transitions MX_COMPUTE -> MX_RESULT one cycle after done_o, standard
  // register delay), by which point a purely-combinational result_data
  // would have already recomputed from the now-cleared pending_sop_q,
  // reading back 0 instead of the real result. Confirmed via a debug trace
  // of the actual RTL: result_data read 0x40800000 (correct) during the
  // done_o cycle itself, then 0x0 the very next cycle - the exact window
  // mxdotp_xif.sv's MX_RESULT phase is looking at.
  //
  // Fix: capture the result the instant it's valid (done_o, using
  // pending_sop_q's pre-edge value - same NBA semantics that make the clear
  // above correct), then hold it stable in a register regardless of what
  // pending_sop_q does on later cycles.
  //----------------------------------------------------------------------------

  logic [X_RFW_WIDTH-1:0] result_data_q;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      result_data_q <= '0;
    end else if (done_o) begin
      unique case (mx_operation_q)
        MX_FUNCT3_DOTP:  result_data_q <= '0;
        MX_FUNCT3_FINAL: result_data_q <= acc_to_fp32(final_sum_wide);
        default:         result_data_q <= '0;
      endcase
    end
  end

  assign result_data = result_data_q;

endmodule
