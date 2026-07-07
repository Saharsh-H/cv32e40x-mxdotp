//==============================================================================
// File    : instr_rom.sv
// Project : MXDOTP XIF Coprocessor - Verification
//------------------------------------------------------------------------------
// Description:
//   Instruction memory for tb_mxdotp_core.sv. Everything you need to touch to
//   change the test program lives in the "Program" section below.
//
//   The MXDOTP_* / MXFINAL_* localparams below are read hierarchically by
//   the testbench scoreboard (tb_mxdotp_core.sv), so changing the operands
//   used by the MXDOTP/MXFINAL pair under test only requires editing this
//   file - the scoreboard picks up new expected values automatically.
//
//   Memory interface: same reset-gated, 1-cycle-latency OBI-style model as
//   before - see the original file header (git history) for the full
//   rationale (XSim time-0 crash avoidance).
//
//------------------------------------------------------------------------------
// Test vector for this milestone (simple, hand-verifiable sanity check - NOT
// yet the rigorous golden-model-derived vectors; those come once the Python
// reference model exists):
//
//   A = B = {1.0, 1.0, 1.0, 1.0} in MXFP8 E4M3 (0x38 each: sign=0, exp=0111,
//       mantissa=000 -> value = 2^(7-7) * 1.000 = 1.0)
//   X^A = X^B = 1.0 (E8M0 raw = 127, i.e. 2^(127-127) = 2^0 = 1)
//   old accumulator (MXFINAL's rs1) = 0.0
//
//   Expected: sum-of-products = 1*1 + 1*1 + 1*1 + 1*1 = 4.0 (scale factor is
//   1*1 = 1, so no additional scaling). MXFINAL result = 0.0 + 4.0 = 4.0,
//   which as FP32 is 0x40800000 (sign=0, exp=129=10000001, mantissa=0).
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

  // Register assignment for this test.
  localparam logic [4:0] REG_A       = 5'd1;  // x1: MXDOTP operand A (4x MXFP8)
  localparam logic [4:0] REG_B       = 5'd2;  // x2: MXDOTP operand B (4x MXFP8)
  localparam logic [4:0] REG_SCALES  = 5'd3;  // x3: MXDOTP operand C (scales)
  localparam logic [4:0] REG_OLD_ACC = 5'd4;  // x4: MXFINAL rs1 (old FP32 acc)
  localparam logic [4:0] REG_RESULT  = 5'd5;  // x5: MXFINAL rd (new FP32 acc)

  // Operand values (see header comment for the hand-computed expected result).
  localparam logic [7:0]  MXFP8_ONE       = 8'h38; // E4M3 encoding of 1.0
  localparam logic [31:0] MXDOTP_A_VAL    = {4{MXFP8_ONE}};              // 0x38383838
  localparam logic [31:0] MXDOTP_B_VAL    = {4{MXFP8_ONE}};              // 0x38383838
  localparam logic [7:0]  E8M0_SCALE_ONE  = 8'd127;                      // 2^0 = 1.0
  localparam logic [31:0] MXDOTP_SCALES   = {E8M0_SCALE_ONE, E8M0_SCALE_ONE, 16'd0};
  localparam logic [31:0] MXFINAL_OLD_ACC = 32'h0000_0000;               // 0.0f

  // Expected value the scoreboard checks MXFINAL's result/writeback against.
  // Hand-computed (see header), not yet golden-model-derived.
  localparam logic [31:0] MXFINAL_EXPECTED = 32'h4080_0000;              // 4.0f

  localparam logic [31:0] INSTR_MXDOTP = encode_r4(
    MX_OPCODE, MX_FUNCT3_DOTP, MX_FMT_MXFP8,
    5'd0 /*rd unused - no writeback*/, REG_A, REG_B, REG_SCALES
  );

  localparam logic [31:0] INSTR_MXFINAL = encode_r4(
    MX_OPCODE, MX_FUNCT3_FINAL, MX_FMT_MXFP8,
    REG_RESULT, REG_OLD_ACC, 5'd0 /*rs2 unused*/, 5'd0 /*rs3 unused*/
  );

  localparam logic [31:0] INSTR_JAL_SELF = encode_j(OPCODE_JAL, 5'd0, 21'd0); // infinite self-loop
  localparam logic [31:0] INSTR_NOP      = encode_i(OPCODE_OPIMM, 3'b000, 5'd0, 5'd0, 12'd0);

  logic [31:0] rom [0:NUM_WORDS-1];

  initial begin
    int i;
    logic [31:0] lui_a, addi_a, lui_b, addi_b, lui_s, addi_s, lui_acc, addi_acc;

    for (i = 0; i < NUM_WORDS; i++) rom[i] = INSTR_NOP;

    encode_li32(REG_A,       MXDOTP_A_VAL,    lui_a,   addi_a);
    encode_li32(REG_B,       MXDOTP_B_VAL,    lui_b,   addi_b);
    encode_li32(REG_SCALES,  MXDOTP_SCALES,   lui_s,   addi_s);
    encode_li32(REG_OLD_ACC, MXFINAL_OLD_ACC, lui_acc, addi_acc);

    rom[0] = lui_a;
    rom[1] = addi_a;
    rom[2] = lui_b;
    rom[3] = addi_b;
    rom[4] = lui_s;
    rom[5] = addi_s;

    // --- DO NOT REMOVE: rs3-forwarding hazard workaround (still applies) ---
    // cv32e40x_id_stage.sv only forwards rs1/rs2 (operand_a_fw/operand_b_fw).
    // rs3 (issue_req.rs[2]) is read straight from the register file with no
    // forwarding path and no hazard stall to cover it. MXDOTP's rs3=scales
    // is what this now protects (the old accumulator no longer travels
    // through rs3 at all - it comes in via MXFINAL's rs1, which IS
    // forwarded, so no NOP is needed there; see mxdotp_pkg.sv header for
    // why that's a real, not just cosmetic, benefit of the two-instruction
    // split). 3 NOPs is more margin than the 2-cycle minimum; rom[6] here
    // (addi x4,x0,0) already contributes one cycle of that gap.
    rom[6] = addi_acc;   // x4 <- old accumulator (0.0); harmless to place here,
                          // also helps cover the rs3 gap below
    rom[7] = INSTR_NOP;
    rom[8] = INSTR_NOP;

    rom[9]  = INSTR_MXDOTP;
    // No NOP needed here: MXDOTP's single-in-flight FSM (issue_ready only
    // asserted in MX_IDLE) already stalls the core until MXDOTP fully
    // retires, and MXFINAL's rs1 (the old accumulator) is forwarded, so
    // there is nothing left to wait out even if there were slack.
    rom[10] = INSTR_MXFINAL;

    rom[11] = INSTR_JAL_SELF;

    // Add further instructions here, e.g.:
    //   rom[12] = encode_i(OPCODE_OPIMM, 3'b000, 5'd6, 5'd0, 12'd1);
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
