//==============================================================================
// File    : instr_rom.sv
// Project : MXDOTP XIF Coprocessor - Verification
//------------------------------------------------------------------------------
// Description:
//   Instruction memory for tb_mxdotp_core.sv. Everything you need to touch to
//   change the test program lives in the "Program" section below - add or
//   edit entries in the `rom` initial block, using the named encoder
//   functions from tb_pkg rather than raw hex.
//
//   The MXDOTP_* localparams below are read hierarchically by the testbench
//   scoreboard (tb_mxdotp_core.sv), so changing which registers/values the
//   MXDOTP instruction under test uses only requires editing this file - the
//   scoreboard will pick up the new expected values automatically.
//
//   To switch to assembler-generated contents later, replace the `rom[i]=...`
//   assignments with a single $readmemh("program.mem", rom) call - the
//   memory interface below does not need to change.
//
//   Memory interface:
//     - Grants any request unconditionally, but ONLY once out of reset.
//       Never responds while rst_ni is low, which matters: the alignment
//       buffer and prefetcher inside the core index internal FIFOs with
//       registers that only become defined once their own reset has been
//       applied. Granting (or asserting rvalid on) a transaction before
//       that has happened is exactly the kind of testbench-side race that
//       can crash some simulators (seen as a time-0 fatal deep inside
//       cv32e40x_alignment_buffer.sv) instead of just producing wrong data.
//     - Fixed 1-cycle read latency, at most one transaction outstanding at
//       a time (sufficient since gnt is never withheld once out of reset).
//==============================================================================

module instr_rom
    import tb_pkg::*;
    import mxdotp_pkg::*;
#(
  parameter int unsigned NUM_WORDS = 32
)
(
  input  logic        clk_i,
  input  logic        rst_ni,

  input  logic        instr_req_i,
  output logic        instr_gnt_o,
  output logic        instr_rvalid_o,
  input  logic [31:0] instr_addr_i,
  output logic [31:0] instr_rdata_o,
  output logic        instr_err_o
);

  //----------------------------------------------------------------------------
  // Program - edit only below this line to change the test.
  //----------------------------------------------------------------------------

  // MXDOTP operand/destination choice for this test - the scoreboard reads
  // these hierarchically, so this is the single place that needs editing.
  localparam logic [4:0]  MXDOTP_RD      = 5'd5;
  localparam logic [4:0]  MXDOTP_RS1     = 5'd1;
  localparam logic [4:0]  MXDOTP_RS2     = 5'd2;
  localparam logic [4:0]  MXDOTP_RS3     = 5'd3;
  localparam logic [31:0] MXDOTP_RS1_VAL = 32'd5;  // value seeded into x1 below
  localparam logic [31:0] MXDOTP_RS2_VAL = 32'd7;  // value seeded into x2 below
  localparam logic [31:0] MXDOTP_RS3_VAL = 32'd9;  // value seeded into x3 below

  localparam logic [31:0] INSTR_ADDI_X1 = encode_i(OPCODE_OPIMM, 3'b000, MXDOTP_RS1, 5'd0, MXDOTP_RS1_VAL[11:0]);
  localparam logic [31:0] INSTR_ADDI_X2 = encode_i(OPCODE_OPIMM, 3'b000, MXDOTP_RS2, 5'd0, MXDOTP_RS2_VAL[11:0]);
  localparam logic [31:0] INSTR_ADDI_X3 = encode_i(OPCODE_OPIMM, 3'b000, MXDOTP_RS3, 5'd0, MXDOTP_RS3_VAL[11:0]);

  
  localparam logic [31:0] INSTR_MXDOTP = encode_r4(
    MX_OPCODE, MX_FUNCT3_DOTP, MX_FMT_MXFP4,
    MXDOTP_RD, MXDOTP_RS1, MXDOTP_RS2, MXDOTP_RS3
  );

  localparam logic [31:0] INSTR_JAL_SELF = encode_j(OPCODE_JAL, 5'd0, 21'd0); // infinite self-loop
  localparam logic [31:0] INSTR_NOP      = encode_i(OPCODE_OPIMM, 3'b000, 5'd0, 5'd0, 12'd0);

  logic [31:0] rom [0:NUM_WORDS-1];

  initial begin
    int i;
    for (i = 0; i < NUM_WORDS; i++) rom[i] = INSTR_NOP;

    rom[0] = INSTR_ADDI_X1;
    rom[1] = INSTR_ADDI_X2;
    rom[2] = INSTR_ADDI_X3;
    rom[3] = INSTR_MXDOTP;
    rom[4] = INSTR_JAL_SELF;

    // Add further instructions here, e.g.:
    //   rom[5] = encode_i(OPCODE_OPIMM, 3'b000, 5'd6, 5'd0, 12'd1);
    //
    // Or, once an assembler/linker flow exists, replace the block above with:
    //   $readmemh("program.mem", rom);
  end

  //----------------------------------------------------------------------------
  // Minimal, reset-gated OBI-style fetch interface
  //----------------------------------------------------------------------------

  logic        req_q;
  logic [31:0] addr_q;

  // Never grant while in reset - see file header for why this matters.
  assign instr_gnt_o = rst_ni & instr_req_i;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      req_q  <= 1'b0;
      addr_q <= '0;
    end else begin
      req_q  <= instr_req_i & instr_gnt_o;
      addr_q <= instr_addr_i;
    end
  end

  assign instr_rvalid_o = req_q;
  assign instr_rdata_o  = rom[addr_q[$clog2(NUM_WORDS)+1:2]];
  assign instr_err_o    = 1'b0;

endmodule
