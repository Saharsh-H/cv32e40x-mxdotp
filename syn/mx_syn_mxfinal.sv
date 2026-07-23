//==============================================================================
// File    : mx_syn_mxfinal.sv
// Project : MXDOTP XIF Coprocessor - Phase A' standalone synthesis harness
//------------------------------------------------------------------------------
// SYNTHESIS SCAFFOLDING - NOT DESIGN RTL. See mx_syn_fp4.sv's header for the
// full rationale; the short version is that this pins parameters explicitly and
// gives every engine a predictable top-level name for the flow scripts.
//
// MXFINAL does NOT share the fused engines' interface: it exposes a plain
// busy_o/done_o handshake with no id/rd/valid/ready plumbing, and takes its two
// product terms (p1_i/p2_i) as pre-computed PSUM_WIDTH-wide signed values from
// the XIF's mailbox rather than decoding operands itself. Its result port is
// also named `result_data`, not `result_data_o`. All of that is reproduced
// verbatim here - the wrapper adds no logic of its own.
//
// PSUM_WIDTH comes from mxdotp_pkg, so this wrapper imports the package. That
// is the only reason for the import; nothing else here needs it.
//==============================================================================

module mx_syn_mxfinal
  import mxdotp_pkg::*;
#(
  parameter int X_RFR_WIDTH = 64,    // pinned: mxdotp_core_top.sv
  parameter int X_RFW_WIDTH = 32
) (
  input  logic                         clk_i,
  input  logic                         rst_ni,

  input  logic                         start_i,
  output logic                         busy_o,
  output logic                         done_o,

  input  logic [X_RFR_WIDTH-1:0]       rs1_i,
  input  logic [X_RFR_WIDTH-1:0]       rs2_i,
  input  logic signed [PSUM_WIDTH-1:0] p1_i,
  input  logic signed [PSUM_WIDTH-1:0] p2_i,

  output logic [X_RFW_WIDTH-1:0]       result_data
);

  mxdotp_final_engine #(
    .X_RFR_WIDTH (X_RFR_WIDTH),
    .X_RFW_WIDTH (X_RFW_WIDTH)
  ) dut (
    .clk_i       (clk_i),
    .rst_ni      (rst_ni),
    .start_i     (start_i),
    .busy_o      (busy_o),
    .done_o      (done_o),
    .rs1_i       (rs1_i),
    .rs2_i       (rs2_i),
    .p1_i        (p1_i),
    .p2_i        (p2_i),
    .result_data (result_data)
  );

endmodule
