//==============================================================================
// File    : mxdotp_pkg.sv
// Project : MXDOTP XIF Coprocessor
// Author  :
//------------------------------------------------------------------------------
// Description:
//   Common package containing ISA encodings, configuration constants, and
//   shared typedefs for the MXDOTP coprocessor.
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
  // Data Format / Variant (funct7)
  //----------------------------------------------------------------------------
  //
  // funct7 selects the arithmetic format.
  //
  // These values apply to every MX instruction.
  //
  localparam logic [6:0] MX_FMT_MXFP4          = 7'b0000000;
  localparam logic [6:0] MX_FMT_M2FP4          = 7'b0000001;
  localparam logic [6:0] MX_FMT_NVFP4          = 7'b0000010;
  localparam logic [6:0] MX_FMT_MXFP4_RESIDUE  = 7'b0000011;


  //----------------------------------------------------------------------------
  // XIF Configuration
  //----------------------------------------------------------------------------
  //
  // These reflect the chosen XIF configuration.
  //
  localparam int MX_NUM_RS = 3;


  //----------------------------------------------------------------------------
  // Controller FSM
  //----------------------------------------------------------------------------
  typedef enum logic [1:0] {
    MX_IDLE,
    MX_WAIT_COMMIT,
    MX_EXECUTE,
    MX_RESULT
  } mxdotp_state_t;

endpackage