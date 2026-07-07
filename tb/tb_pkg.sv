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
  localparam logic [6:0] OPCODE_LUI   = 7'h37; // lui (needed for full 32-bit test patterns)

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

  // U-type encoder, e.g. lui rd, imm20 -> rd = {imm20, 12'b0}
  function automatic logic [31:0] encode_u(
    input logic [6:0]  opcode,
    input logic [4:0]  rd,
    input logic [19:0] imm
  );
    encode_u = {imm, rd, opcode};
  endfunction

  // Helper: encode a "load 32-bit constant into rd" LUI+ADDI pair (standard
  // RISC-V `li` idiom - ADDI's 12-bit immediate is sign-extended, so the
  // upper 20 bits loaded by LUI must be bumped by 1 whenever the lower 12
  // bits' own MSB is set, to compensate for that sign extension on add).
  function automatic void encode_li32(
    input  logic [4:0]  rd,
    input  logic [31:0] val,
    output logic [31:0] instr_lui,
    output logic [31:0] instr_addi
  );
    logic [19:0] upper20;
    logic [11:0] lower12;
    begin
      lower12 = val[11:0];
      upper20 = val[31:12] + (lower12[11] ? 20'd1 : 20'd0);
      instr_lui  = encode_u(OPCODE_LUI, rd, upper20);
      instr_addi = encode_i(OPCODE_OPIMM, 3'b000, rd, rd, lower12);
    end
  endfunction

endpackage
