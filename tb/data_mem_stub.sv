//==============================================================================
// File    : data_mem_stub.sv
// Project : MXDOTP XIF Coprocessor - Verification
//------------------------------------------------------------------------------
// Description:
//   Minimal data memory model for tb_mxdotp_core.sv. The current test
//   program performs no loads or stores, so data_req_i should never actually
//   assert - but a testbench memory model should still behave as a
//   protocol-correct *idle* memory rather than a permanent black hole.
//
//   Previously this was modeled by tying gnt=0 and rvalid=0 forever. That is
//   not a valid idle model: it's silence, not idleness. It happens to be
//   harmless for a program with zero data-side traffic, but the moment a
//   future test adds a single store (e.g. to check a real MXFP4 result via
//   memory instead of the register file), that store would never be granted
//   and the core would hang with the data OBI request stuck high forever -
//   silently, with no error, just a timeout with no useful diagnostic.
//
//   This model instead grants any request immediately (once out of reset)
//   and returns zero read data one cycle later, matching the same timing
//   discipline as instr_rom.sv.
//==============================================================================

module data_mem_stub (
  input  logic        clk_i,
  input  logic        rst_ni,

  input  logic        data_req_i,
  output logic        data_gnt_o,
  output logic        data_rvalid_o,
  input  logic        data_we_i,
  input  logic [3:0]  data_be_i,
  input  logic [31:0] data_addr_i,
  input  logic [31:0] data_wdata_i,
  output logic [31:0] data_rdata_o,
  output logic        data_err_o,
  output logic        data_exokay_o
);

  // Unused inputs (no backing storage) - named to document intent, silence
  // "unused port" lint without affecting behavior.
  logic unused_we;
  logic [3:0] unused_be;
  logic [31:0] unused_addr;
  logic [31:0] unused_wdata;
  assign unused_we    = data_we_i;
  assign unused_be    = data_be_i;
  assign unused_addr  = data_addr_i;
  assign unused_wdata = data_wdata_i;

  logic req_q;

  // Never grant while in reset - mirrors instr_rom.sv's reasoning: a grant
  // issued before the LSU's own internal counters have been reset could
  // hand a still-X/stale transaction to logic that isn't ready for it.
  assign data_gnt_o = rst_ni & data_req_i;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      req_q <= 1'b0;
    end else begin
      req_q <= data_req_i & data_gnt_o;
    end
  end

  assign data_rvalid_o = req_q;
  assign data_rdata_o  = 32'h0; // no backing storage - reads always return 0
  assign data_err_o    = 1'b0;
  assign data_exokay_o = 1'b1;

endmodule
