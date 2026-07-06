//==============================================================================
// File    : mxdotp_execute.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Minimal placeholder execute unit for MXDOTP.
//
//   This is NOT the real MXFP4/M2FP4/NVFP4 block-scaled dot product. It's a
//   deliberately trivial stand-in so the issue -> commit -> result pipeline
//   in mxdotp_xif.sv can be exercised end-to-end (in RTL sim and on the
//   real core) before the actual arithmetic is designed:
//
//     MX_FUNCT3_DOTP  : result = rs1 + rs2          (rs3, mx_format ignored)
//     MX_FUNCT3_FINAL : result = rs1                (passthrough)
//     otherwise       : result = '0
//
//   Purely combinational, single cycle. Inputs are expected to already be
//   registered (mxdotp_xif.sv holds them in saved_rs/saved_operation/
//   saved_format), so no internal registers are needed here yet. When the
//   real dot-product datapath replaces this, it will likely need to become
//   multi-cycle, which means mxdotp_pkg::mxdotp_state_t will need an added
//   MX_COMPUTE state between MX_WAIT_COMMIT and MX_RESULT, and this module
//   will need a valid/ready or done signal instead of being purely comb.
//
//==============================================================================

module mxdotp_execute
    import mxdotp_pkg::*;
#(
    parameter int X_RFR_WIDTH = 32,
    parameter int X_RFW_WIDTH = 32
)
(
    input  logic [X_RFR_WIDTH-1:0] rs1,
    input  logic [X_RFR_WIDTH-1:0] rs2,
    input  logic [X_RFR_WIDTH-1:0] rs3,   // unused by this placeholder

    input  logic [2:0]             mx_operation,
    input  logic [1:0]             mx_format,  // unused by this placeholder

    output logic [X_RFW_WIDTH-1:0] result_data
);

    // rs3 and mx_format are intentionally unused until the real MX formats
    // (MXFP4 / M2FP4 / NVFP4 / MXFP4_RESIDUE) are implemented.
    logic [X_RFR_WIDTH-1:0] unused_rs3;
    logic [1:0]             unused_mx_format;
    assign unused_rs3       = rs3;
    assign unused_mx_format = mx_format;

    always_comb begin
        unique case (mx_operation)

            MX_FUNCT3_DOTP:  result_data = rs1 + rs2;

            MX_FUNCT3_FINAL: result_data = rs1;

            default:         result_data = '0;

        endcase
    end

endmodule