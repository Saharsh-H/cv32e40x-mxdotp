//==============================================================================
// File    : tb_pkg.sv
// Project : MXDOTP XIF Coprocessor - Verification
//------------------------------------------------------------------------------
// Description:
//   Shared testbench constants and instruction-encoding helper functions.
//   These let instr_rom.sv build the test program from named
//   opcode/rd/rs1/rs2/imm fields instead of hand-computed hex words, and
//   are reusable if/when the ROM contents move to an assembler-generated
//   .mem file plus a handful of hand-encoded custom instructions.
//==============================================================================

package tb_pkg;

  // Base RISC-V opcodes used by the hand-assembled test program
  localparam logic [6:0] OPCODE_OPIMM = 7'h13; // addi and other reg-imm ALU ops
  localparam logic [6:0] OPCODE_JAL   = 7'h6F; // jal

  // R4-type encoder (FMADD-style layout), reused for MXDOTP:
  //   rs3[31:27] funct2[26:25] rs2[24:20] rs1[19:15] funct3[14:12] rd[11:7] opcode[6:0]
  function automatic logic [31:0] encode_r4(
    input logic [6:0] opcode,
    input logic [2:0] funct3,
    input logic [1:0] funct2,
    input logic [4:0] rd,
    input logic [4:0] rs1,
    input logic [4:0] rs2,
    input logic [4:0] rs3
  );
    encode_r4 = {rs3, funct2, rs2, rs1, funct3, rd, opcode};
  endfunction

  // I-type encoder, e.g. addi rd, rs1, imm
  function automatic logic [31:0] encode_i(
    input logic [6:0]  opcode,
    input logic [2:0]  funct3,
    input logic [4:0]  rd,
    input logic [4:0]  rs1,
    input logic [11:0] imm
  );
    encode_i = {imm, rs1, funct3, rd, opcode};
  endfunction

  // J-type encoder, e.g. jal rd, imm (imm is a signed byte offset; bit 0 must be 0)
  function automatic logic [31:0] encode_j(
    input logic [6:0]  opcode,
    input logic [4:0]  rd,
    input logic [20:0] imm
  );
    encode_j = {imm[20], imm[10:1], imm[11], imm[19:12], rd, opcode};
  endfunction

endpackage
