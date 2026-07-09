//==============================================================================
// File    : mxdotp_decoder.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Decodes MX custom instructions using the standard RISC-V R4-type layout
//   (same layout as FMADD.S/D in the F/D extensions):
//
//     [31:27] rs3     [26:25] funct2   [24:20] rs2   [19:15] rs1
//     [14:12] funct3  [11:7]  rd       [6:0]   opcode
//
//   rs3 is placed at instr[31:27] to match cv32e40x_id_stage.sv, which
//   hardwires its third register-file read port address to that exact bit
//   range (REG_S3_MSB/LSB) whenever REGFILE_NUM_READ_PORTS >= 3 (3 without
//   dual-read, 6 with it - see cv32e40x_core.sv's X_DUALREAD). No core RTL
//   changes are required as a result.
//
//   Input:
//     - 32-bit RISC-V instruction
//
//   Outputs:
//     - is_mx        : Instruction belongs to the MX extension
//     - mx_operation : High-level operation (funct3)
//     - mx_format    : Arithmetic format / variant (funct2)
//     - rd, rs1, rs2, rs3 : Register fields
//
//==============================================================================

module mxdotp_decoder
    import mxdotp_pkg::*;
(
    input  logic [31:0] instr,

    output logic        is_mx,
    output logic [2:0]  mx_operation,
    output logic [1:0]  mx_format,

    output logic [4:0]  rd,
    output logic [4:0]  rs1,
    output logic [4:0]  rs2,
    output logic [4:0]  rs3
);

    //--------------------------------------------------------------------------
    // Instruction Fields
    //--------------------------------------------------------------------------

    logic [6:0] opcode;

    assign opcode = instr[6:0];

    assign rd  = instr[11:7];
    assign rs1 = instr[19:15];
    assign rs2 = instr[24:20];
    assign rs3 = instr[31:27];   // R4-type rs3 field (matches core's REG_S3 position)

    assign mx_operation = instr[14:12];  // funct3
    assign mx_format    = instr[26:25];  // funct2 (R4-type format select)

    //--------------------------------------------------------------------------
    // MX Instruction Detection
    //--------------------------------------------------------------------------
    //
    // Requires both the opcode match AND a recognized funct3. Without the
    // funct3 check, an instruction with MX_OPCODE but an unassigned funct3
    // (e.g. 111) would still be accepted into the coprocessor - harmless
    // today since mxdotp_execute.sv's dispatch has a default case, but not
    // clean ISA behavior (such an instruction should probably be illegal,
    // not silently accepted and silently doing nothing).
    //
    assign is_mx = (opcode == MX_OPCODE) &&
                   ((mx_operation == MX_FUNCT3_DOTP) || (mx_operation == MX_FUNCT3_FINAL) ||
                    (mx_operation == MX_FUNCT3_DUALREAD_TEST) || (mx_operation == MX_FUNCT3_FUSED));

endmodule
