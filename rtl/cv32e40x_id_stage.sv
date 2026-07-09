// Copyright 2018 ETH Zurich and University of Bologna.
// Copyright and related rights are licensed under the Solderpad Hardware
// License, Version 0.51 (the "License"); you may not use this file except in
// compliance with the License.  You may obtain a copy of the License at
// http://solderpad.org/licenses/SHL-0.51. Unless required by applicable law
// or agreed to in writing, software, hardware and materials distributed under
// this License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

////////////////////////////////////////////////////////////////////////////////
// Engineer:       Renzo Andri - andrire@student.ethz.ch                      //
//                                                                            //
// Additional contributions by:                                               //
//                 Igor Loi - igor.loi@unibo.it                               //
//                 Andreas Traber - atraber@student.ethz.ch                   //
//                 Sven Stucki - svstucki@student.ethz.ch                     //
//                 Michael Gautschi - gautschi@iis.ee.ethz.ch                 //
//                 Davide Schiavone - pschiavo@iis.ee.ethz.ch                 //
//                 Halfdan Bechmann - halfdan.bechmann@silabs.com             //
//                 Øystein Knauserud - oystein.knauserud@silabs.com           //
//                 Michael Platzer - michael.platzer@tuwien.ac.at             //
//                                                                            //
// Design Name:    Instruction Decode Stage                                   //
// Project Name:   RI5CY                                                      //
// Language:       SystemVerilog                                              //
//                                                                            //
// Description:    Decode stage of the core. It decodes the instructions      //
//                 and hosts the register file.                               //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

module cv32e40x_id_stage import cv32e40x_pkg::*;
#(
  parameter bit          A_EXT                  = 0,
  parameter b_ext_e      B_EXT                  = B_NONE,
  parameter m_ext_e      M_EXT                  = M,
  parameter bit          X_EXT                  = 0,
  parameter              DEBUG_TRIGGER_EN       = 1,
  parameter int unsigned REGFILE_NUM_READ_PORTS = 2
)
(
  input  logic        clk,                    // Gated clock
  input  logic        clk_ungated_i,          // Ungated clock
  input  logic        rst_n,

  // Jumps and branches
  output logic [31:0] jmp_target_o,

  // IF/ID pipeline
  input  if_id_pipe_t if_id_pipe_i,

  // ID/EX pipeline 
  output id_ex_pipe_t id_ex_pipe_o,

  // EX/WB pipeline
  input  ex_wb_pipe_t ex_wb_pipe_i,

  // Controller
  input  ctrl_byp_t   ctrl_byp_i,
  input  ctrl_fsm_t   ctrl_fsm_i,

  // Register file write data from WB stage
  input  logic [31:0] rf_wdata_wb_i,

  // Register file write data from EX stage
  input  logic [31:0] rf_wdata_ex_i,

  output logic        alu_en_raw_o,
  output logic        alu_jmp_o,        // Jump (JAL, JALR)
  output logic        alu_jmpr_o,       // Jump register (JALR)

  output logic        sys_en_o,
  output logic        sys_mret_insn_o,

  output logic        csr_en_o,
  output csr_opcode_e csr_op_o,

  // RF interface -> controller
  output logic [REGFILE_NUM_READ_PORTS-1:0] rf_re_o,
  output rf_addr_t    rf_raddr_o[REGFILE_NUM_READ_PORTS],

  // Register file
  input  rf_data_t    rf_rdata_i[REGFILE_NUM_READ_PORTS],

  // Stage ready/valid
  output logic        id_ready_o,     // ID stage is ready for new data
  output logic        id_valid_o,     // ID stage has valid (non-bubble) data for next stage
  input  logic        ex_ready_i,     // EX stage is ready for new data

  // eXtension interface
  if_xif.cpu_issue    xif_issue_if,
  output logic        xif_offloading_o
);

  // Source/Destination register instruction index
  localparam REG_S1_MSB = 19;
  localparam REG_S1_LSB = 15;

  localparam REG_S2_MSB = 24;
  localparam REG_S2_LSB = 20;

  localparam REG_S3_MSB = 31;
  localparam REG_S3_LSB = 27;

  localparam REG_D_MSB  = 11;
  localparam REG_D_LSB  = 7;

  logic [31:0] instr;

  // Register Read/Write Control
  logic [1:0]           rf_re;                  // Decoder only supports rs1, rs2
  logic                 rf_we;
  logic                 rf_we_dec;
  rf_addr_t             rf_waddr;
  
  // ALU Control
  logic                 alu_en;
  logic                 alu_en_raw;
  logic                 alu_bch;
  logic                 alu_jmp;
  logic                 alu_jmpr;
  alu_opcode_e          alu_operator;

  // Multiplier Control
  logic                 mul_en;                 // Multiplication is used instead of ALU
  mul_opcode_e          mul_operator;           // Multiplication operation selection
  logic [1:0]           mul_signed_mode;        // Signed mode multiplication at the output of the controller, and before the pipe registers

  // Divider control
  logic                 div_en;
  div_opcode_e          div_operator;
  
  // LSU
  logic                 lsu_en;
  logic                 lsu_we;
  logic [1:0]           lsu_size;
  logic                 lsu_sext;
  logic [5:0]           lsu_atop;               // Atomic memory instruction

  // CSR
  logic                 csr_en;
  csr_opcode_e          csr_op;

  // SYS
  logic                 sys_en;
  logic                 sys_fencei_insn;
  logic                 sys_ecall_insn;
  logic                 sys_ebrk_insn;
  logic                 sys_mret_insn;
  logic                 sys_dret_insn;
  logic                 sys_wfi_insn;

  // Operands and forwarding
  logic [31:0]          operand_a;
  logic [31:0]          operand_b;
  logic [31:0]          operand_c;
  logic [31:0]          operand_a_fw;
  logic [31:0]          operand_b_fw;
  logic [31:0]          operand_rs3_fw;  // Forwarded value of the XIF 3rd read port (rs3),
                                          // only driven/used when REGFILE_NUM_READ_PORTS >= 3
  logic [31:0]          operand_a_hi_fw;    // Forwarded value of rs1+1 (dual-read companion)
  logic [31:0]          operand_b_hi_fw;    // Forwarded value of rs2+1 (dual-read companion)
  logic [31:0]          operand_rs3_hi_fw;  // Forwarded value of rs3+1 (dual-read companion)
                                             // operand_*_hi_fw only driven/used when
                                             // REGFILE_NUM_READ_PORTS == 6 (dual-read)
  logic [31:0]          jalr_fw;
  alu_op_a_mux_e        alu_op_a_mux_sel;
  alu_op_b_mux_e        alu_op_b_mux_sel;
  op_c_mux_e            op_c_mux_sel;
  imm_a_mux_e           imm_a_mux_sel;
  imm_b_mux_e           imm_b_mux_sel;
  bch_jmp_mux_e         bch_jmp_mux_sel;

  // Immediates
  logic [31:0]          imm_a;                  // Immediate for operand A
  logic [31:0]          imm_b;                  // Immediate for operand B
  logic [31:0]          imm_i_type;
  logic [31:0]          imm_s_type;
  logic [31:0]          imm_sb_type;
  logic [31:0]          imm_u_type;
  logic [31:0]          imm_uj_type;
  logic [31:0]          imm_z_type;

  // Branch target address
  logic [31:0]          bch_target;

  // Stall for multicycle ID instructions
  logic                 multi_cycle_id_stall;

  logic                 illegal_insn;

  // Local instruction valid qualifier
  logic                 instr_valid;

  // eXtension interface signals
  logic                 xif_en;
  logic                 xif_waiting;
  logic                 xif_insn_accept;
  logic                 xif_insn_reject;
  logic                 xif_we;
  logic                 xif_exception;
  logic                 xif_dualwrite;
  logic                 xif_loadstore;

  assign instr_valid = if_id_pipe_i.instr_valid && !ctrl_fsm_i.kill_id && !ctrl_fsm_i.halt_id;

  assign sys_en_o = sys_en;
  assign sys_mret_insn_o = sys_mret_insn;

  assign instr = if_id_pipe_i.instr.bus_resp.rdata;

  // Immediate extraction and sign extension
  assign imm_i_type  = { {20 {instr[31]}}, instr[31:20] };
  assign imm_s_type  = { {20 {instr[31]}}, instr[31:25], instr[11:7] };
  assign imm_sb_type = { {19 {instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0 };
  assign imm_u_type  = { instr[31:12], 12'b0 };
  assign imm_uj_type = { {12 {instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0 };

  // Immediate for CSR manipulation (zero extended)
  assign imm_z_type  = { 27'b0, instr[REG_S1_MSB:REG_S1_LSB] };

  //---------------------------------------------------------------------------
  // Source register selection
  //---------------------------------------------------------------------------
  assign rf_raddr_o[0] = instr[REG_S1_MSB:REG_S1_LSB];
  assign rf_raddr_o[1] = instr[REG_S2_MSB:REG_S2_LSB];

  // Assign rs3 address if Xif mandates three read ports
  generate
    if (REGFILE_NUM_READ_PORTS >= 3) begin : gen_rs3_raddr
      assign rf_raddr_o[2] = instr[REG_S3_MSB:REG_S3_LSB];
    end
  endgenerate

  // Dual-read companion ports: rs1+1/rs2+1/rs3+1, one register above each base operand.
  // Only exist when REGFILE_NUM_READ_PORTS == 6 (X_DUALREAD == 1 at the core level - see
  // cv32e40x_core.sv). Convention: companion port i+3 pairs with base port i (ports 0/1/2
  // keep their existing meaning completely unchanged in either configuration). Address
  // computation is a plain +1 on the already-decoded base address - wraparound at 5 bits
  // (e.g. x31's companion is x0) is intentionally unguarded here, same as RV32's existing
  // register-pair conventions (e.g. atomic dword ops): it's a software contract, not
  // something this core needs to special-case.
  generate
    if (REGFILE_NUM_READ_PORTS == 6) begin : gen_dualread_raddr
      assign rf_raddr_o[3] = rf_addr_t'(rf_raddr_o[0] + 1'b1);
      assign rf_raddr_o[4] = rf_addr_t'(rf_raddr_o[1] + 1'b1);
      assign rf_raddr_o[5] = rf_addr_t'(rf_raddr_o[2] + 1'b1);
    end
  endgenerate

  //---------------------------------------------------------------------------
  // Destination register seclection
  //---------------------------------------------------------------------------
  assign rf_waddr = instr[REG_D_MSB:REG_D_LSB];

  //////////////////////////////////////////////////////////////////
  //      _                         _____                    _    //
  //     | |_   _ _ __ ___  _ __   |_   _|_ _ _ __ __ _  ___| |_  //
  //  _  | | | | | '_ ` _ \| '_ \    | |/ _` | '__/ _` |/ _ \ __| //
  // | |_| | |_| | | | | | | |_) |   | | (_| | | | (_| |  __/ |_  //
  //  \___/ \__,_|_| |_| |_| .__/    |_|\__,_|_|  \__, |\___|\__| //
  //                       |_|                    |___/           //
  //////////////////////////////////////////////////////////////////

  cv32e40x_pc_target cv32e40x_pc_target_i
  (
    .bch_jmp_mux_sel_i ( bch_jmp_mux_sel ),
    .pc_id_i           ( if_id_pipe_i.pc ),
    .imm_uj_type_i     ( imm_uj_type     ),
    .imm_sb_type_i     ( imm_sb_type     ),
    .imm_i_type_i      ( imm_i_type      ),
    .jalr_fw_i         ( jalr_fw         ),
    .bch_target_o      ( bch_target      ),
    .jmp_target_o      ( jmp_target_o    )
  );

  ////////////////////////////////////////////////////////
  //   ___                                 _      _     //
  //  / _ \ _ __   ___ _ __ __ _ _ __   __| |    / \    //
  // | | | | '_ \ / _ \ '__/ _` | '_ \ / _` |   / _ \   //
  // | |_| | |_) |  __/ | | (_| | | | | (_| |  / ___ \  //
  //  \___/| .__/ \___|_|  \__,_|_| |_|\__,_| /_/   \_\ //
  //       |_|                                          //
  ////////////////////////////////////////////////////////

  // Operand A Mux
  always_comb begin : operand_a_mux
    case (alu_op_a_mux_sel)
      OP_A_REGA_OR_FWD:  operand_a = operand_a_fw;
      OP_A_CURRPC:       operand_a = if_id_pipe_i.pc;
      OP_A_IMM:          operand_a = imm_a;
      default:           operand_a = operand_a_fw;
    endcase; // case (alu_op_a_mux_sel)
  end

  always_comb begin : immediate_a_mux
    unique case (imm_a_mux_sel)
      IMMA_Z:      imm_a = imm_z_type;
      IMMA_ZERO:   imm_a = '0;
    endcase
  end

  // Operand A forwarding mux
  always_comb begin : operand_a_fw_mux
    case (ctrl_byp_i.operand_a_fw_mux_sel)
      SEL_FW_EX:    operand_a_fw = rf_wdata_ex_i;
      SEL_FW_WB:    operand_a_fw = rf_wdata_wb_i;
      SEL_REGFILE:  operand_a_fw = rf_rdata_i[0];
      default:      operand_a_fw = rf_rdata_i[0];
    endcase;
  end

  always_comb begin: jalr_fw_mux
    case (ctrl_byp_i.jalr_fw_mux_sel)
      SELJ_FW_WB:   jalr_fw = ex_wb_pipe_i.rf_wdata;
      SELJ_REGFILE: jalr_fw = rf_rdata_i[0];
      default:      jalr_fw = rf_rdata_i[0];
    endcase
  end

  //////////////////////////////////////////////////////
  //   ___                                 _   ____   //
  //  / _ \ _ __   ___ _ __ __ _ _ __   __| | | __ )  //
  // | | | | '_ \ / _ \ '__/ _` | '_ \ / _` | |  _ \  //
  // | |_| | |_) |  __/ | | (_| | | | | (_| | | |_) | //
  //  \___/| .__/ \___|_|  \__,_|_| |_|\__,_| |____/  //
  //       |_|                                        //
  //////////////////////////////////////////////////////

  // Immediate Mux for operand B
  always_comb begin : immediate_b_mux
    unique case (imm_b_mux_sel)
      IMMB_I:      imm_b = imm_i_type;
      IMMB_S:      imm_b = imm_s_type;
      IMMB_U:      imm_b = imm_u_type;
      IMMB_PCINCR: imm_b = if_id_pipe_i.instr_meta.compressed ? 32'h2 : 32'h4;
      default:     imm_b = imm_i_type;
    endcase
  end

  // Operand B Mux
  always_comb begin : operand_b_mux
    case (alu_op_b_mux_sel)
      OP_B_REGB_OR_FWD:  operand_b = operand_b_fw;
      OP_B_IMM:          operand_b = imm_b;
      default:           operand_b = operand_b_fw;
    endcase // case (alu_op_b_mux_sel)
  end

  // Operand B forwarding mux
  always_comb begin : operand_b_fw_mux
    case (ctrl_byp_i.operand_b_fw_mux_sel)
      SEL_FW_EX:    operand_b_fw = rf_wdata_ex_i;
      SEL_FW_WB:    operand_b_fw = rf_wdata_wb_i;
      SEL_REGFILE:  operand_b_fw = rf_rdata_i[1];
      default:      operand_b_fw = rf_rdata_i[1];
    endcase;
  end

  // Operand rs3 forwarding mux (XIF's 3rd read port, e.g. R4-type instructions such as
  // MXDOTP). Mirrors operand_a_fw_mux/operand_b_fw_mux exactly - same forwarding sources
  // (rf_wdata_ex_i/rf_wdata_wb_i), same mux-select type (op_fw_mux_e via ctrl_byp_i), just
  // gated on REGFILE_NUM_READ_PORTS >= 3 since rf_rdata_i[2]/rf_raddr_o[2] (see gen_rs3_raddr
  // above) only exist in that configuration. Previously rs3 had no forwarding path at all -
  // xif_issue_if.issue_req.rs[2] read straight from the register file with no bypass and no
  // hazard stall to cover it, requiring a software NOP-padding workaround. The stall case
  // (rs3's producer not yet forwardable, e.g. a load or another XIF op still in EX) was
  // already handled generically by cv32e40x_controller_bypass.sv's existing load_stall logic
  // - only this mux and its ctrl_byp_i.operand_rs3_fw_mux_sel select were missing.
  generate
    if (REGFILE_NUM_READ_PORTS >= 3) begin : gen_rs3_fw_mux
      always_comb begin : operand_rs3_fw_mux
        case (ctrl_byp_i.operand_rs3_fw_mux_sel)
          SEL_FW_EX:    operand_rs3_fw = rf_wdata_ex_i;
          SEL_FW_WB:    operand_rs3_fw = rf_wdata_wb_i;
          SEL_REGFILE:  operand_rs3_fw = rf_rdata_i[2];
          default:      operand_rs3_fw = rf_rdata_i[2];
        endcase;
      end
    end else begin : gen_no_rs3_fw_mux
      assign operand_rs3_fw = '0;  // unused in this configuration
    end
  endgenerate

  // Dual-read companion forwarding muxes (rs1+1/rs2+1/rs3+1, ports 3/4/5 - see
  // gen_dualread_raddr above). Exactly the same shape as operand_a_fw_mux/
  // operand_b_fw_mux/operand_rs3_fw_mux - each companion register is forwarded
  // completely independently of its own base register (they're two different physical
  // registers that could have been written by two different in-flight instructions), so
  // this is 3 more standalone muxes rather than any widening of the existing ones.
  generate
    if (REGFILE_NUM_READ_PORTS == 6) begin : gen_dualread_fw_mux
      always_comb begin : operand_a_hi_fw_mux
        case (ctrl_byp_i.operand_a_hi_fw_mux_sel)
          SEL_FW_EX:    operand_a_hi_fw = rf_wdata_ex_i;
          SEL_FW_WB:    operand_a_hi_fw = rf_wdata_wb_i;
          SEL_REGFILE:  operand_a_hi_fw = rf_rdata_i[3];
          default:      operand_a_hi_fw = rf_rdata_i[3];
        endcase;
      end
      always_comb begin : operand_b_hi_fw_mux
        case (ctrl_byp_i.operand_b_hi_fw_mux_sel)
          SEL_FW_EX:    operand_b_hi_fw = rf_wdata_ex_i;
          SEL_FW_WB:    operand_b_hi_fw = rf_wdata_wb_i;
          SEL_REGFILE:  operand_b_hi_fw = rf_rdata_i[4];
          default:      operand_b_hi_fw = rf_rdata_i[4];
        endcase;
      end
      always_comb begin : operand_rs3_hi_fw_mux
        case (ctrl_byp_i.operand_rs3_hi_fw_mux_sel)
          SEL_FW_EX:    operand_rs3_hi_fw = rf_wdata_ex_i;
          SEL_FW_WB:    operand_rs3_hi_fw = rf_wdata_wb_i;
          SEL_REGFILE:  operand_rs3_hi_fw = rf_rdata_i[5];
          default:      operand_rs3_hi_fw = rf_rdata_i[5];
        endcase;
      end
    end else begin : gen_no_dualread_fw_mux
      assign operand_a_hi_fw   = '0;  // unused in this configuration
      assign operand_b_hi_fw   = '0;
      assign operand_rs3_hi_fw = '0;
    end
  endgenerate

  //////////////////////////////////////////////////////
  //   ___                                 _    ____  //
  //  / _ \ _ __   ___ _ __ __ _ _ __   __| |  / ___| //
  // | | | | '_ \ / _ \ '__/ _` | '_ \ / _` | | |     //
  // | |_| | |_) |  __/ | | (_| | | | | (_| | | |___  //
  //  \___/| .__/ \___|_|  \__,_|_| |_|\__,_|  \____| //
  //       |_|                                        //
  //////////////////////////////////////////////////////

  // ALU OP C Mux
  always_comb begin : operand_c_mux
    case (op_c_mux_sel)
      OP_C_REGB_OR_FWD:  operand_c = operand_b_fw;
      OP_C_BCH:          operand_c = bch_target;
      default:           operand_c = operand_b_fw;
    endcase // case (op_c_mux_sel)
  end


  ///////////////////////////////////////////////
  //  ____  _____ ____ ___  ____  _____ ____   //
  // |  _ \| ____/ ___/ _ \|  _ \| ____|  _ \  //
  // | | | |  _|| |  | | | | | | |  _| | |_) | //
  // | |_| | |__| |__| |_| | |_| | |___|  _ <  //
  // |____/|_____\____\___/|____/|_____|_| \_\ //
  //                                           //
  ///////////////////////////////////////////////

  cv32e40x_decoder
  #(
    .A_EXT                           ( A_EXT                     ),
    .B_EXT                           ( B_EXT                     ),
    .M_EXT                           ( M_EXT                     ),
    .DEBUG_TRIGGER_EN                ( DEBUG_TRIGGER_EN          )
  )
  decoder_i
  (
    // controller related signals
    .deassert_we_i                   ( ctrl_byp_i.deassert_we    ),

    // SYS signals
    .sys_en_o                        ( sys_en                    ),
    .illegal_insn_o                  ( illegal_insn              ),
    .sys_ebrk_insn_o                 ( sys_ebrk_insn             ),
    .sys_mret_insn_o                 ( sys_mret_insn             ),
    .sys_dret_insn_o                 ( sys_dret_insn             ),
    .sys_ecall_insn_o                ( sys_ecall_insn            ),
    .sys_wfi_insn_o                  ( sys_wfi_insn              ),
    .sys_fencei_insn_o               ( sys_fencei_insn           ),
    
    // from IF/ID pipeline
    .instr_rdata_i                   ( instr                     ),
    .illegal_c_insn_i                ( if_id_pipe_i.illegal_c_insn ),

    // ALU
    .alu_en_o                        ( alu_en                    ),
    .alu_en_raw_o                    ( alu_en_raw                ),
    .alu_bch_o                       ( alu_bch                   ),
    .alu_jmp_o                       ( alu_jmp                   ),
    .alu_jmpr_o                      ( alu_jmpr                  ),
    .alu_operator_o                  ( alu_operator              ),
    .alu_op_a_mux_sel_o              ( alu_op_a_mux_sel          ),
    .alu_op_b_mux_sel_o              ( alu_op_b_mux_sel          ),

    // MUL
    .mul_en_o                        ( mul_en                    ),
    .mul_operator_o                  ( mul_operator              ),
    .mul_signed_mode_o               ( mul_signed_mode           ),

    // DIV
    .div_en_o                        ( div_en                    ),
    .div_operator_o                  ( div_operator              ),

    // CSR
    .csr_en_o                        ( csr_en                    ),
    .csr_op_o                        ( csr_op                    ),

    // LSU
    .lsu_en_o                        ( lsu_en                    ),
    .lsu_we_o                        ( lsu_we                    ),
    .lsu_size_o                      ( lsu_size                  ),
    .lsu_sext_o                      ( lsu_sext                  ),
    .lsu_atop_o                      ( lsu_atop                  ),

    // Register file control signals
    .rf_re_o                         ( rf_re                     ),
    .rf_we_o                         ( rf_we_dec                 ),

    // Mux selects
    .imm_a_mux_sel_o                 ( imm_a_mux_sel             ),
    .imm_b_mux_sel_o                 ( imm_b_mux_sel             ),
    .op_c_mux_sel_o                  ( op_c_mux_sel              ),
    .bch_jmp_mux_sel_o               ( bch_jmp_mux_sel           ),

    // From controller fsm
    .ctrl_fsm_i                      ( ctrl_fsm_i                )
  );

  // Speculatively read all source registers for illegal instr, might be required by coprocessor
  // Non-offloaded instructions will use maximum two read ports (rf_re from decoder is two bits, rf_re_o may be two or three bits wide)
  // Todo: Too conservative, causes load_use stalls on offloaded instruction when the operands may not be needed at all.
  //       issue_valid depends on halt_id (and data_rvalid) via the local instr_valid.
  //       Can issue_valid be made fast by using the registered instr_valid and only factor in kill_id and not halt_id?
  //       Maybe it is ok to have a late issue_valid, as accept signal will depend on late rs_valid anyway?
  //
  // Dual-read companion ports [5:3] (rs1+1/rs2+1/rs3+1 - see gen_dualread_raddr above) are
  // deliberately NOT included in the same blanket "illegal_insn ? '1" speculation as ports
  // [2:0]. Unlike the base 3 ports (whose speculative read is harmless even when unused -
  // it was already the existing, working behavior for every XIF instruction, dualread or
  // not), blindly enabling the companion ports for every XIF-candidate instruction would
  // make cv32e40x_controller_bypass.sv's load_stall (which ORs across all rf_rd_ex_hz/
  // rf_rd_wb_hz bits) trigger on whatever rs1+1/rs2+1/rs3+1 happen to alias, even for
  // ordinary non-dualread ops like this project's own MXDOTP/MXFINAL - a real, if
  // conservative-not-corrupting, stall regression. So the companion ports are qualified by
  // the coprocessor's own same-cycle issue_resp.dualread instead (same pattern already used
  // for issue_resp.writeback/dualwrite/accept elsewhere in this file).
  generate
    if (REGFILE_NUM_READ_PORTS == 6) begin : gen_rf_re_dualread
      assign rf_re_o[2:0] = illegal_insn ? 3'b111 : {1'b0, rf_re};
      assign rf_re_o[5:3] = {3{illegal_insn && xif_issue_if.issue_resp.dualread}};
    end else begin : gen_rf_re_no_dualread
      assign rf_re_o = illegal_insn ? '1 : REGFILE_NUM_READ_PORTS'(rf_re);
    end
  endgenerate

  // Register writeback is enabled either by the decoder or by the XIF
  assign rf_we          = rf_we_dec || xif_we;

  
  /////////////////////////////////////////////////////////////////////////////////
  //   ___ ____        _______  __  ____ ___ ____  _____ _     ___ _   _ _____   //
  //  |_ _|  _ \      | ____\ \/ / |  _ \_ _|  _ \| ____| |   |_ _| \ | | ____|  //
  //   | || | | |_____|  _|  \  /  | |_) | || |_) |  _| | |    | ||  \| |  _|    //
  //   | || |_| |_____| |___ /  \  |  __/| ||  __/| |___| |___ | || |\  | |___   //
  //  |___|____/      |_____/_/\_\ |_|  |___|_|   |_____|_____|___|_| \_|_____|  //
  //                                                                             //
  /////////////////////////////////////////////////////////////////////////////////

  always_ff @(posedge clk, negedge rst_n)
  begin : ID_EX_PIPE_REGISTERS
    if (rst_n == 1'b0)
    begin
      id_ex_pipe_o.instr_valid            <= 1'b0;
      id_ex_pipe_o.alu_en                 <= 1'b0;
      id_ex_pipe_o.alu_bch                <= 1'b0;
      id_ex_pipe_o.alu_jmp                <= 1'b0;
      id_ex_pipe_o.alu_operator           <= ALU_SLTU;
      id_ex_pipe_o.alu_operand_a          <= 32'b0; // todo: path from data_rdata_i through WB to id_ex_pipe_o_reg_alu_operand_a seems longer than needed (too many gates in ID)
      id_ex_pipe_o.alu_operand_b          <= 32'b0;

      id_ex_pipe_o.operand_c              <= 32'b0;

      id_ex_pipe_o.mul_en                 <= 1'b0;
      id_ex_pipe_o.mul_operator           <= MUL_M32;
      id_ex_pipe_o.mul_signed_mode        <= 2'b0;

      id_ex_pipe_o.div_en                 <= 1'b0;
      id_ex_pipe_o.div_operator           <= DIV_DIVU;

      id_ex_pipe_o.muldiv_operand_a       <= 32'b0;
      id_ex_pipe_o.muldiv_operand_b       <= 32'b0;

      id_ex_pipe_o.csr_en                 <= 1'b0;
      id_ex_pipe_o.csr_op                 <= CSR_OP_READ;

      id_ex_pipe_o.lsu_en                 <= 1'b0;
      id_ex_pipe_o.lsu_we                 <= 1'b0;
      id_ex_pipe_o.lsu_size               <= 2'b0;
      id_ex_pipe_o.lsu_sext               <= 1'b0;
      id_ex_pipe_o.lsu_atop               <= 6'b0;

      id_ex_pipe_o.sys_en                <= 1'b0;
      id_ex_pipe_o.sys_dret_insn         <= 1'b0;
      id_ex_pipe_o.sys_ebrk_insn         <= 1'b0;
      id_ex_pipe_o.sys_ecall_insn        <= 1'b0;
      id_ex_pipe_o.sys_fencei_insn       <= 1'b0;
      id_ex_pipe_o.sys_mret_insn         <= 1'b0;
      id_ex_pipe_o.sys_wfi_insn          <= 1'b0;

      id_ex_pipe_o.xif_en                 <= 1'b0;
      id_ex_pipe_o.xif_meta               <= '0;

      id_ex_pipe_o.illegal_insn           <= 1'b0;

      id_ex_pipe_o.rf_we                  <= 1'b0;
      id_ex_pipe_o.rf_waddr               <= '0;

        // Exceptions and debug
      id_ex_pipe_o.pc                     <= 32'b0;
      id_ex_pipe_o.instr                  <= INST_RESP_RESET_VAL;
      id_ex_pipe_o.instr_meta             <= '0;
      id_ex_pipe_o.trigger_match          <= 1'b0;
    end else begin
      // normal pipeline unstall case
      if (id_valid_o && ex_ready_i) begin
        id_ex_pipe_o.instr_valid  <= 1'b1;
        
        // Operands
        if (alu_op_a_mux_sel != OP_A_NONE) begin
          id_ex_pipe_o.alu_operand_a        <= operand_a;               // Used by most ALU, CSR and LSU instructions
        end
        if (alu_op_b_mux_sel != OP_B_NONE) begin
          id_ex_pipe_o.alu_operand_b        <= operand_b;               // Used by most ALU, CSR and LSU instructions
        end
        
        if (op_c_mux_sel != OP_C_NONE)
        begin
          id_ex_pipe_o.operand_c            <= operand_c;               // Used by LSU stores and some ALU instructions
        end

        id_ex_pipe_o.alu_en                 <= alu_en;
        if (alu_en) begin                                               // Branch comparison and jump link computation are done in ALU
          id_ex_pipe_o.alu_bch              <= alu_bch;
          id_ex_pipe_o.alu_jmp              <= alu_jmp;
        end
        if (alu_en || div_en) begin                                     // ALU and DIV use alu_operator (DIV uses the shifter in the ALU)
          id_ex_pipe_o.alu_operator         <= alu_operator;
        end

        id_ex_pipe_o.div_en                 <= div_en;
        if (div_en) begin
          id_ex_pipe_o.div_operator         <= div_operator;
        end
        
        id_ex_pipe_o.mul_en                 <= mul_en;
        if (mul_en) begin
          id_ex_pipe_o.mul_operator         <= mul_operator;
          id_ex_pipe_o.mul_signed_mode      <= mul_signed_mode;
        end

        if (mul_en || div_en) begin
          id_ex_pipe_o.muldiv_operand_a     <= operand_a_fw;            // Only register file operand (or forward) is required
          id_ex_pipe_o.muldiv_operand_b     <= operand_b_fw;            // Only register file operand (or forward) is required
        end

        id_ex_pipe_o.csr_en                 <= csr_en;
        if (csr_en) begin
          id_ex_pipe_o.csr_op               <= csr_op;
        end

        id_ex_pipe_o.lsu_en                 <= lsu_en;
        if (lsu_en) begin
          id_ex_pipe_o.lsu_we               <= lsu_we;
          id_ex_pipe_o.lsu_size             <= lsu_size;
          id_ex_pipe_o.lsu_sext             <= lsu_sext;
          id_ex_pipe_o.lsu_atop             <= lsu_atop;
        end

        // Special instructions
        id_ex_pipe_o.sys_en                 <= sys_en;
        if (sys_en) begin
          id_ex_pipe_o.sys_dret_insn        <= sys_dret_insn;
          id_ex_pipe_o.sys_ebrk_insn        <= sys_ebrk_insn;
          id_ex_pipe_o.sys_ecall_insn       <= sys_ecall_insn;
          id_ex_pipe_o.sys_fencei_insn      <= sys_fencei_insn;
          id_ex_pipe_o.sys_mret_insn        <= sys_mret_insn;
          id_ex_pipe_o.sys_wfi_insn         <= sys_wfi_insn;
        end

        id_ex_pipe_o.illegal_insn           <= illegal_insn && !xif_insn_accept;

        id_ex_pipe_o.rf_we                  <= rf_we;
        if (rf_we) begin
          id_ex_pipe_o.rf_waddr             <= rf_waddr;
        end

        // Exceptions and debug
        id_ex_pipe_o.pc                     <= if_id_pipe_i.pc;
        id_ex_pipe_o.instr_meta             <= if_id_pipe_i.instr_meta;

        if (if_id_pipe_i.instr_meta.compressed) begin
          // Overwrite instruction word in case of compressed instruction
          id_ex_pipe_o.instr.bus_resp.rdata <= {16'h0, if_id_pipe_i.compressed_instr};
          id_ex_pipe_o.instr.bus_resp.err   <= if_id_pipe_i.instr.bus_resp.err;
          id_ex_pipe_o.instr.mpu_status     <= if_id_pipe_i.instr.mpu_status;
        end else begin
          id_ex_pipe_o.instr                <= if_id_pipe_i.instr;
        end

        id_ex_pipe_o.trigger_match          <= if_id_pipe_i.trigger_match;

        // eXtension interface
        id_ex_pipe_o.xif_en                 <= xif_en;
        id_ex_pipe_o.xif_meta.id            <= if_id_pipe_i.xif_id;
        id_ex_pipe_o.xif_meta.exception     <= xif_exception;
        id_ex_pipe_o.xif_meta.loadstore     <= xif_loadstore;
        id_ex_pipe_o.xif_meta.dualwrite     <= xif_dualwrite;
        id_ex_pipe_o.xif_meta.accepted      <= xif_insn_accept;

      end else if (ex_ready_i) begin
        id_ex_pipe_o.instr_valid            <= 1'b0;
      end
    end
  end

  assign alu_en_raw_o = alu_en_raw;
  assign alu_jmp_o    = alu_jmp;
  assign alu_jmpr_o   = alu_jmpr;

  assign csr_en_o = csr_en;
  assign csr_op_o = csr_op;

  // stall control for multicyle ID instructions (currently only misaligned LSU)
  assign multi_cycle_id_stall = 1'b0; //todo:ok Zce push/pop will use this

  // Stage ready/valid
  //
  // Most stall conditions are factored into halt_id (and will force both ready and valid to 0).
  //
  // Multi-cycle instruction related stalls are different; in that case ready will be 0 (as ID already
  // contains the instruction following the multicycle instruction.
  // todo: update when Zce is included. Currently, no multi cycle ID stalls are possible.

  assign id_ready_o = ctrl_fsm_i.kill_id || (!multi_cycle_id_stall && ex_ready_i && !ctrl_fsm_i.halt_id && !xif_waiting);

  // multi_cycle_id_stall is currently tied to 1'b0. Will be used for Zce push/pop instructions.
  assign id_valid_o = (instr_valid && !xif_waiting) || (multi_cycle_id_stall && !ctrl_fsm_i.kill_id && !ctrl_fsm_i.halt_id);


  //---------------------------------------------------------------------------
  // eXtension interface
  //---------------------------------------------------------------------------

  generate
    if (X_EXT) begin : x_ext

      // Sanity check: REGFILE_NUM_READ_PORTS == 6 (dual-read companion ports compiled in,
      // see cv32e40x_core.sv's X_DUALREAD) is only meaningful if the XIF interface itself
      // is actually wide enough to carry a paired 64-bit read. If X_RFR_WIDTH is left at
      // 32 while X_DUALREAD=1, the {hi,lo} concatenation below would silently truncate
      // instead of failing loudly, so catch the mismatch here instead.
      // synthesis translate_off
      initial begin
        if (REGFILE_NUM_READ_PORTS == 6) begin
          assert (xif_issue_if.X_RFR_WIDTH >= 64) else
            $error("cv32e40x_id_stage: REGFILE_NUM_READ_PORTS == 6 (dual-read) but X_RFR_WIDTH (%0d) < 64",
                    xif_issue_if.X_RFR_WIDTH);
        end
      end
      // synthesis translate_on

      // remember whether an instruction was accepted or rejected (required if EX stage is not ready)
      // TODO: check whether this state machine should be put back in its initial state when the instruction in ID gets killed
      logic xif_accepted_q, xif_rejected_q;

      assign xif_en = xif_insn_accept || xif_insn_reject;

      always_ff @(posedge clk, negedge rst_n) begin : ID_XIF_STATE_REGISTERS
        if (rst_n == 1'b0) begin
          xif_accepted_q <= 1'b0;
          xif_rejected_q <= 1'b0;
        end else begin
          if ( (id_valid_o && ex_ready_i) || ctrl_fsm_i.kill_id ) begin
            xif_accepted_q <= 1'b0;
            xif_rejected_q <= 1'b0;
          end else begin
            xif_accepted_q <= xif_insn_accept;
            xif_rejected_q <= xif_insn_reject;
          end
        end
      end

      // attempt to offload every valid instruction that is considered illegal by the decoder
      // Also attempt to offload any CSR instruction. The validity of such instructions are only
      // checked in the EX stage.
      // Instructions with deassert_we set to 1 from the controller bypass logic will not be attempted offloaded.
      assign xif_issue_if.issue_valid     = instr_valid && (illegal_insn || csr_en) &&
                                            !(xif_accepted_q || xif_rejected_q || ctrl_byp_i.deassert_we);

      // Keep xif_offloading_o high after an offloaded instruction was accepted or rejected to get
      // a new instruction ID from the IF stage
      assign xif_offloading_o             = xif_issue_if.issue_valid || xif_accepted_q || xif_rejected_q;

      assign xif_issue_if.issue_req.instr = instr;
      assign xif_issue_if.issue_req.mode  = PRIV_LVL_M;
      assign xif_issue_if.issue_req.id    = if_id_pipe_i.xif_id;

      always_comb begin
        xif_issue_if.issue_req.rs       = '0;
        xif_issue_if.issue_req.rs_valid = '0;

        // rs1 (operand index 0). Base 32 bits: forwarded rf/EX/WB value (operand_a_fw),
        // unchanged from before this dual-read work. When this configuration actually has
        // the companion port compiled in (REGFILE_NUM_READ_PORTS == 6) AND the
        // coprocessor's same-cycle issue_resp asserts dualread, the upper half of the
        // X_RFR_WIDTH-bit slot carries the forwarded rs1+1 value (operand_a_hi_fw) instead
        // of zero - together giving the coprocessor a genuine paired read of {rs1+1, rs1}.
        // Non-dualread instructions (e.g. this project's own MXDOTP/MXFINAL) always take
        // the zero-extended branch, so widening X_RFR_WIDTH to support dual-read elsewhere
        // does not change their operand values at all.
        if (xif_issue_if.X_NUM_RS > 0) begin
          if ((REGFILE_NUM_READ_PORTS == 6) && xif_issue_if.issue_resp.dualread) begin
            xif_issue_if.issue_req.rs[0] = {operand_a_hi_fw, operand_a_fw};
          end else begin
            xif_issue_if.issue_req.rs[0] = {{(xif_issue_if.X_RFR_WIDTH-32){1'b0}}, operand_a_fw};
          end
          xif_issue_if.issue_req.rs_valid[0] = 1'b1;
        end

        // rs2 (operand index 1) - identical shape to rs1 above.
        if (xif_issue_if.X_NUM_RS > 1) begin
          if ((REGFILE_NUM_READ_PORTS == 6) && xif_issue_if.issue_resp.dualread) begin
            xif_issue_if.issue_req.rs[1] = {operand_b_hi_fw, operand_b_fw};
          end else begin
            xif_issue_if.issue_req.rs[1] = {{(xif_issue_if.X_RFR_WIDTH-32){1'b0}}, operand_b_fw};
          end
          xif_issue_if.issue_req.rs_valid[1] = 1'b1;
        end

        // rs3 (index 2) is forwarded the same way rs1/rs2 are - see operand_rs3_fw_mux /
        // operand_rs3_hi_fw_mux above. Any further logical operand beyond index 2
        // (X_NUM_RS > 3, not used by this core today) still falls back to an unforwarded,
        // single-width regfile read, same as before this dual-read work.
        for (integer i = 2; i < xif_issue_if.X_NUM_RS; i++) begin
          if (i == 2 && REGFILE_NUM_READ_PORTS >= 3) begin
            if ((REGFILE_NUM_READ_PORTS == 6) && xif_issue_if.issue_resp.dualread) begin
              xif_issue_if.issue_req.rs[2] = {operand_rs3_hi_fw, operand_rs3_fw};
            end else begin
              xif_issue_if.issue_req.rs[2] = {{(xif_issue_if.X_RFR_WIDTH-32){1'b0}}, operand_rs3_fw};
            end
          end else if (i < REGFILE_NUM_READ_PORTS) begin
            xif_issue_if.issue_req.rs[i] = {{(xif_issue_if.X_RFR_WIDTH-32){1'b0}}, rf_rdata_i[i]};
          end
          xif_issue_if.issue_req.rs_valid[i] = 1'b1;
        end
      end

      assign xif_issue_if.issue_req.ecs       = 6'b111111; // todo: hookup to related mstatus bits (for now just reporting all state as dirty) 
                                                           // and make sure that instruction after ecs update sees correct bits
      assign xif_issue_if.issue_req.ecs_valid = 1'b1; // todo: needs to take into account if mstatus extension context writes are in flight
                                                      // todo: use xif_issue_if.issue_resp.ecswrite

      // need to wait if the coprocessor is not ready and has not already accepted or rejected the instruction
      assign xif_waiting = xif_issue_if.issue_valid && !xif_issue_if.issue_ready && !xif_accepted_q && !xif_rejected_q;

      // an instruction was offloaded successfully if the coprocessor accepts it (or has accepted it)
      assign xif_insn_accept = (xif_issue_if.issue_valid && xif_issue_if.issue_ready &&  xif_issue_if.issue_resp.accept) || xif_accepted_q;
      assign xif_insn_reject = (xif_issue_if.issue_valid && xif_issue_if.issue_ready && !xif_issue_if.issue_resp.accept) || xif_rejected_q;

      // TODO: These may be missed if issue_valid retracts before ID goes to EX. Need to check for sticky accept as well
      assign xif_we        = xif_issue_if.issue_valid && xif_issue_if.issue_resp.writeback;
      assign xif_exception = xif_issue_if.issue_valid && xif_issue_if.issue_resp.exc;
      assign xif_dualwrite = xif_issue_if.issue_valid && xif_issue_if.issue_resp.dualwrite;
      assign xif_loadstore = xif_issue_if.issue_valid && xif_issue_if.issue_resp.loadstore;

    end else begin : no_x_ext

      // Drive all eXtension interface signals and outputs low if X_EXT == 0
      assign xif_en                           = 1'b0;
      assign xif_waiting                      = 1'b0;
      assign xif_insn_accept                  = 1'b0;
      assign xif_insn_reject                  = 1'b0;
      assign xif_we                           = 1'b0;
      assign xif_exception                    = 1'b0;
      assign xif_dualwrite                    = 1'b0;
      assign xif_loadstore                    = 1'b0;

      assign xif_issue_if.issue_valid         = 1'b0;
      assign xif_issue_if.issue_req.instr     = '0;
      assign xif_issue_if.issue_req.mode      = '0;
      assign xif_issue_if.issue_req.id        = '0;
      assign xif_issue_if.issue_req.rs        = '0;
      assign xif_issue_if.issue_req.rs_valid  = '0;
      assign xif_issue_if.issue_req.ecs       = '0;
      assign xif_issue_if.issue_req.ecs_valid = '0;

    end
  endgenerate

endmodule // cv32e40x_id_stage
