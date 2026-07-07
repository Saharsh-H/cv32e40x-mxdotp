//==============================================================================
// File    : mxdotp_execute.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Execute unit for MXDOTP, with a start_i/done_o handshake and a
//   per-mx_format dispatch structure.
//
//   Still a placeholder, NOT the real MXFP4/M2FP4/NVFP4 block-scaled dot
//   product - every format branch below currently computes the same trivial
//   result (rs1+rs2, or +rs3 for the residue format). What this version adds
//   is the *shape* real arithmetic will need:
//
//     - A start_i/done_o handshake with a parameterized latency
//       (LATENCY_CYCLES, default 2), so mxdotp_xif.sv's FSM already knows
//       how to wait for a multi-cycle result instead of assuming
//       everything completes combinationally in one cycle. Real MXFP4
//       arithmetic will not fit in a single cycle - building the handshake
//       now means the FSM plumbing doesn't need touching again later, only
//       LATENCY_CYCLES (or a variable-latency done_o, see note below) and
//       the case branches themselves.
//
//     - A case on mx_format inside the DOTP operation, so MXFP4 / M2FP4 /
//       NVFP4 / MXFP4_RESIDUE can each be implemented independently without
//       restructuring this module again. rs3 is now genuinely used by the
//       residue branch (previously tied off as entirely unused).
//
//   Inputs are captured internally on start_i rather than assumed to stay
//   stable for the whole latency - this unit doesn't rely on its caller
//   (mxdotp_xif.sv) holding rs1/rs2/rs3/mx_operation/mx_format steady
//   beyond the cycle start_i is asserted, even though mxdotp_xif.sv's
//   saved_rs/saved_operation/saved_format currently do stay stable across
//   that window anyway.
//
//   Note on latency: LATENCY_CYCLES is a fixed, compile-time constant here.
//   If the real datapath ends up variable-latency (e.g. early-exit for
//   certain formats), replace the internal down-counter with the unit's
//   own completion condition and keep done_o/busy semantics the same -
//   mxdotp_xif.sv only depends on "done_o pulses exactly once, some number
//   of cycles after start_i", not on any particular fixed latency.
//
//==============================================================================

module mxdotp_execute
    import mxdotp_pkg::*;
#(
    parameter int X_RFR_WIDTH    = 32,
    parameter int X_RFW_WIDTH    = 32,
    parameter int LATENCY_CYCLES = 2   // must be >= 1; placeholder value
)
(
    input  logic                   clk_i,
    input  logic                   rst_ni,

    // Handshake: pulse start_i for one cycle to begin a computation on the
    // current rs1/rs2/rs3/mx_operation/mx_format inputs. done_o pulses for
    // one cycle, LATENCY_CYCLES cycles later, when result_data is valid.
    // Only one computation may be in flight at a time - mxdotp_xif.sv's
    // single-in-flight FSM already guarantees start_i is never asserted
    // while busy, but the internal capture logic ignores a spurious
    // start_i while busy regardless, as a defensive measure.
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
  // Input capture (on start_i, so this unit doesn't depend on the caller
  // holding its inputs stable for the whole latency)
  //----------------------------------------------------------------------------

  logic [X_RFR_WIDTH-1:0] rs1_q, rs2_q, rs3_q;
  logic [2:0]             mx_operation_q;
  logic [1:0]             mx_format_q;

  //----------------------------------------------------------------------------
  // Latency counter / busy tracking
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
  // Per-format dispatch (placeholder arithmetic)
  //----------------------------------------------------------------------------
  //
  // Computed combinationally off the *captured* (_q) inputs, so the result
  // is correct and stable from the moment done_o pulses regardless of what
  // the live rs1/rs2/rs3/mx_operation/mx_format ports do afterward.

  always_comb begin

    unique case (mx_operation_q)

      MX_FUNCT3_DOTP: begin
        unique case (mx_format_q)
          MX_FMT_MXFP4:         result_data = rs1_q + rs2_q;               // TODO: real MXFP4 block-scaled dot product
          MX_FMT_M2FP4:         result_data = rs1_q + rs2_q;               // TODO: real M2FP4 datapath
          MX_FMT_NVFP4:         result_data = rs1_q + rs2_q;               // TODO: real NVFP4 datapath
          MX_FMT_MXFP4_RESIDUE: result_data = rs1_q + rs2_q + rs3_q;       // TODO: real residue accumulation (uses rs3)
          default:               result_data = '0;
        endcase
      end

      MX_FUNCT3_FINAL: result_data = rs1_q; // passthrough placeholder

      default: result_data = '0;

    endcase

  end

endmodule