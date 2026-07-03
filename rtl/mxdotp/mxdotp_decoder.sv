//==============================================================================
// File    : mxdotp_decoder.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Decodes MX custom instructions.
//
//   Input:
//     - 32-bit RISC-V instruction
//
//   Outputs:
//     - is_mx        : Instruction belongs to the MX extension
//     - mx_operation : High-level operation (funct3)
//     - mx_format    : Arithmetic format / variant (funct7)
//
//==============================================================================

module mxdotp_decoder
    import mxdotp_pkg::*;
(
    input  logic [31:0] instr,

    output logic        is_mx,
    output logic [2:0]  mx_operation,
    output logic [6:0]  mx_format

    output logic [4:0]  rd,
    output logic [4:0]  rs1,
    output logic [4:0]  rs2
);

    //--------------------------------------------------------------------------
    // Instruction Fields
    //--------------------------------------------------------------------------

    logic [6:0] opcode;

    assign opcode       = instr[6:0];

    assign rd           = instr[11:7];
    assign rs1          = instr[19:15];
    assign rs2          = instr[24:20];

    assign mx_operation = instr[14:12];
    assign mx_format    = instr[31:25];

    //--------------------------------------------------------------------------
    // MX Instruction Detection
    //--------------------------------------------------------------------------

    assign is_mx = (opcode == MX_OPCODE);

endmodule