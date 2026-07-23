//==============================================================================
// File    : mx_syn_dotp.sv
// Project : MXDOTP XIF Coprocessor - Phase A' standalone synthesis harness
//------------------------------------------------------------------------------
// SYNTHESIS SCAFFOLDING - NOT DESIGN RTL. See mx_syn_fp4.sv for full rationale.
//
// Included for completeness of the per-engine ladder, with one caveat worth
// stating up front so its numbers are not over-read: this engine is a LATENCY
// PLACEHOLDER, not a finished arithmetic datapath. Its LATENCY_CYCLES=2 default
// carries an RTL comment noting it has not been re-tuned, and the whole-
// subsystem timing runs showed it as by far the fastest block (~507 MHz in the
// 10 ns run) precisely because it is not doing the work the other four do.
//
// Its area/timing therefore belong in the ladder as a FLOOR / control-overhead
// reference point, not as a fifth arithmetic format. Reading it as a peer of
// MXFP4/M2XFP4/MXFINAL/MXFP8 would overstate how cheap the cheapest "real"
// engine is.
//==============================================================================

module mx_syn_dotp
  import mxdotp_pkg::*;
#(
  parameter int X_RFR_WIDTH    = 64,   // pinned: mxdotp_core_top.sv
  parameter int LATENCY_CYCLES = 2     // pinned: current RTL default (untuned)
) (
  input  logic                         clk_i,
  input  logic                         rst_ni,

  input  logic                         start_i,
  output logic                         busy_o,
  output logic                         done_o,

  input  logic [X_RFR_WIDTH-1:0]       rs1_i,
  input  logic [X_RFR_WIDTH-1:0]       rs2_i,
  input  logic [X_RFR_WIDTH-1:0]       rs3_i,

  output logic signed [PSUM_WIDTH-1:0] p1_o,
  output logic signed [PSUM_WIDTH-1:0] p2_o
);

  mxdotp_dotp_engine #(
    .X_RFR_WIDTH    (X_RFR_WIDTH),
    .LATENCY_CYCLES (LATENCY_CYCLES)
  ) dut (
    .clk_i  (clk_i),
    .rst_ni (rst_ni),
    .start_i(start_i),
    .busy_o (busy_o),
    .done_o (done_o),
    .rs1_i  (rs1_i),
    .rs2_i  (rs2_i),
    .rs3_i  (rs3_i),
    .p1_o   (p1_o),
    .p2_o   (p2_o)
  );

endmodule
