//==============================================================================
// File    : mxdotp_pkg.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Common package containing ISA encodings, configuration constants, and
//   shared typedefs for the MXDOTP coprocessor.
//
//   Instruction encoding follows the standard RISC-V R4-type layout (the same
//   layout used by FMADD.S/D in the F/D extensions):
//
//     [31:27] rs3     [26:25] funct2   [24:20] rs2   [19:15] rs1
//     [14:12] funct3  [11:7]  rd       [6:0]   opcode
//
//   This is a deliberate choice: cv32e40x_id_stage.sv already hardwires its
//   third register-file read port address to instr[31:27] (REG_S3_MSB/LSB)
//   whenever REGFILE_NUM_READ_PORTS == 3 (i.e. X_NUM_RS == 3). Using the
//   standard R4 rs3 position means our decoder's view of rs3 matches the
//   register the core actually reads, with zero core RTL changes required.
//
//   All MXDOTP RTL modules should import this package:
//
//     import mxdotp_pkg::*;
//
//==============================================================================

package mxdotp_pkg;

  //----------------------------------------------------------------------------
  // Custom Opcode
  //----------------------------------------------------------------------------
  // RISC-V reserves four opcodes for custom extensions.
  // We use CUSTOM-0 for the entire MX instruction set.
  //
  //   opcode = 0001011
  //
  localparam logic [6:0] MX_OPCODE = 7'b0001011;


  //----------------------------------------------------------------------------
  // Instruction Class (funct3)
  //----------------------------------------------------------------------------
  //
  // funct3 selects the high-level MX operation.
  //
  // 000 : MXDOTP   (Dot-product accumulate)
  // 001 : MXFINAL  (Finalize / writeback)
  //
  // Remaining encodings reserved for future expansion.
  //
  localparam logic [2:0] MX_FUNCT3_DOTP  = 3'b000;
  localparam logic [2:0] MX_FUNCT3_FINAL = 3'b001;


  //----------------------------------------------------------------------------
  // Data Format / Variant (funct2, R4-type bits [26:25])
  //----------------------------------------------------------------------------
  //
  // funct2 selects the arithmetic format. Only 2 bits are available in the
  // R4-type encoding (the remaining bits of the old funct7 field are now
  // consumed by rs3).
  //
  localparam logic [1:0] MX_FMT_MXFP4         = 2'b00;
  localparam logic [1:0] MX_FMT_M2FP4         = 2'b01;
  localparam logic [1:0] MX_FMT_NVFP4         = 2'b10;
  localparam logic [1:0] MX_FMT_MXFP4_RESIDUE = 2'b11;


  //----------------------------------------------------------------------------
  // XIF Configuration
  //----------------------------------------------------------------------------
  //
  // These reflect the chosen XIF configuration. MX_NUM_RS = 3 to support the
  // R4-type rs3 operand (matches X_NUM_RS passed to cv32e40x_core / if_xif).
  //
  localparam int MX_NUM_RS = 3;


  //----------------------------------------------------------------------------
  // Controller FSM
  //----------------------------------------------------------------------------
  //
  // MX_COMPUTE: waits for mxdotp_execute's start_i/done_o handshake. Entered
  // once the instruction has committed (i.e. is guaranteed not to be killed),
  // left once done_o pulses. Sized at 2 bits (4 states fit); if a 5th state
  // is ever needed this typedef's width must grow accordingly.
  //
  typedef enum logic [1:0] {
    MX_IDLE,
    MX_WAIT_COMMIT,
    MX_COMPUTE,
    MX_RESULT
  } mxdotp_state_t;

endpackage