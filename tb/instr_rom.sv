//==============================================================================
// File    : instr_rom.sv
// Project : MXDOTP XIF Coprocessor - Verification
//------------------------------------------------------------------------------
// Description:
//   Instruction memory for tb_mxdotp_core.sv. Everything you need to touch to
//   change the test program lives in the "Program" section below.
//
//   The *_VAL / *_EXPECTED localparams below are read hierarchically by the
//   testbench scoreboard (tb_mxdotp_core.sv), so changing the operands used
//   by the MXDOTP/MXFINAL instructions under test only requires editing this
//   file - the scoreboard picks up new expected values automatically.
//
//   Memory interface: same reset-gated, 1-cycle-latency OBI-style model as
//   before - see the original file header (git history) for the full
//   rationale (XSim time-0 crash avoidance).
//
//------------------------------------------------------------------------------
// Test vectors for this milestone: the unified MXDOTP/MXFINAL ISA (see
// mxdotp_pkg.sv's milestone header for the full rationale). Every format now
// shares one operand convention:
//   MXDOTP  (any format): rs1=A, rs2=B, rs3=AR - ALL 64-bit dual-read,
//            MX_K=16 MXFP4 elements each. No register writeback.
//   MXFINAL (any format): rs1=scales ({a_scale[31:24],ar_scale[23:16],
//            b_scale[15:8],reserved[7:0]}), rs2=old FP32 accumulator - BOTH
//            plain 32-bit reads, no dual-read for either. Writes rd.
// mx_format (funct2) only changes whether MXFINAL includes AR/p2's
// contribution (MX_FMT_MXFP4_RESIDUAL) or excludes it (MX_FMT_MXFP4).
//
// Three tests run in sequence:
//
//   1) MX_FMT_MXFP4 (regular, no residue):
//        A = B = {1.0 x16} (nibble 0x2 each)
//        AR = {6.0 x16} (nibble 0x7 each) - present (MXDOTP always reads it,
//             any format) but MUST be excluded from MXFINAL's sum. Chosen
//             deliberately large, not zero, so this test actually catches a
//             broken format mask rather than just confirming "scale math
//             works when residue happens to be zero": if MX_FMT_MXFP4's
//             masking were broken and AR.B leaked into the sum, the result
//             would be 0x42e00000 (112.0) instead of the expected
//             0x41800000 (16.0).
//        a_scale = ar_scale(unused) = b_scale = 1.0 (E8M0 raw 127)
//        old accumulator = 0.0
//        p1 = sum(code(A_i)*code(B_i), i=0..15) = 16*(2*2) = 64
//        contrib1 = p1/4 = 16.0 (the /4 is fp4_to_code's baked-in *4 per
//        raw product - see mxdotp_pkg.sv). p2 is computed (=384) but
//        excluded by the format mask.
//        Result = 0.0 + 16.0 = 16.0 -> FP32 0x41800000.
//
//   2) MX_FMT_MXFP4_RESIDUAL (k=16, with residue):
//        A = B = {1.0 x16}, AR = {0.5 x16} (nibble 0x1 each) - the residue,
//             now actually included.
//        a_scale = ar_scale = b_scale = 1.0 (E8M0 raw 127)
//        old accumulator = 0.0
//        p1 = 64 (as above), p2 = sum(code(AR_i)*code(B_i)) = 16*(1*2) = 32
//        contrib1 = 16.0, contrib2 = p2/4 = 8.0
//        Result = 0.0 + 16.0 + 8.0 = 24.0 -> FP32 0x41C00000.
//        Both expected values cross-checked against a Python port of the
//        exact bit-level algorithm (place_in_acc/fp32_to_acc/acc_to_fp32),
//        not just hand-derived.
//
//   3) MX_FUNCT3_DUALREAD_TEST (validation-only, not part of the real
//      MXDOTP ISA - see mxdotp_execute.sv/mxdotp_pkg.sv): proves the core's
//      dual-read mechanism (cv32e40x_core.sv's X_DUALREAD) works in
//      isolation from the MXDOTP algorithm itself. x10/x11 (an adjacent
//      register pair) are loaded with distinct, easily-told-apart values;
//      the test instruction with rs1=x10 requests a paired read of
//      {x11,x10} and writes x11's value (the "+1"/upper half) to x12. The
//      write to x11 is placed with zero NOPs before the test instruction on
//      purpose, forcing the EX->ID forwarding path for the companion port.
//      Runs between the two MXDOTP/MXFINAL tests above (order doesn't
//      matter functionally).
//==============================================================================

module instr_rom
    import tb_pkg::*;
    import mxdotp_pkg::*;
#(
  parameter int unsigned NUM_WORDS = 64  // power of 2 - instr_rdata_o's address decode
                                          // (addr_q[$clog2(NUM_WORDS)+1:2]) assumes that;
                                          // a non-power-of-2 NUM_WORDS would let that index
                                          // run past rom[]'s actual bound
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

  //----------------------------------------------------------------------------
  // Test 1: MX_FMT_MXFP4 (regular, no residue) register assignment
  //----------------------------------------------------------------------------
  localparam logic [4:0] REG_A_BASE  = 5'd1;  // x1 (lo) / x2 (hi): A
  localparam logic [4:0] REG_B_BASE  = 5'd3;  // x3 (lo) / x4 (hi): B
  localparam logic [4:0] REG_AR_BASE = 5'd5;  // x5 (lo) / x6 (hi): AR (present, must be masked)
  localparam logic [4:0] REG_SCALES  = 5'd7;  // x7: {a_scale,ar_scale,b_scale,reserved}
  localparam logic [4:0] REG_OLD_ACC = 5'd8;  // x8: old FP32 accumulator
  localparam logic [4:0] REG_RESULT  = 5'd9;  // x9: MXFINAL rd

  localparam logic [3:0]  MXFP4_ONE  = 4'h2; // E2M1 encoding of 1.0 (sign=0,exp=01,mant=0)
  localparam logic [3:0]  MXFP4_SIX  = 4'h7; // E2M1 encoding of 6.0 (sign=0,exp=11,mant=1)
  localparam logic [63:0] A_VAL      = {16{MXFP4_ONE}};  // 16x 1.0 -> 0x2222222222222222
  localparam logic [63:0] B_VAL      = {16{MXFP4_ONE}};  // 16x 1.0 -> 0x2222222222222222
  localparam logic [63:0] AR_VAL     = {16{MXFP4_SIX}};  // 16x 6.0 -> 0x7777777777777777 -
                                                          // deliberately large & present so
                                                          // this test catches a broken format
                                                          // mask, not just "scale math works
                                                          // when residue happens to be zero"
  localparam logic [7:0]  E8M0_SCALE_ONE = 8'd127;       // 2^0 = 1.0
  // {a_scale, ar_scale(unused by this format), b_scale, reserved}
  localparam logic [31:0] SCALES_VAL  = {E8M0_SCALE_ONE, E8M0_SCALE_ONE, E8M0_SCALE_ONE, 8'd0};
  localparam logic [31:0] OLD_ACC_VAL = 32'h0000_0000;   // 0.0f

  // Hand-computed, Python-cross-checked (see header) - not yet a full golden-model suite.
  localparam logic [31:0] MXFP4_EXPECTED = 32'h4180_0000;  // 16.0f

  localparam logic [31:0] INSTR_MXDOTP = encode_r4(
    MX_OPCODE, MX_FUNCT3_DOTP, MX_FMT_MXFP4,
    5'd0 /*rd unused - no writeback*/, REG_A_BASE, REG_B_BASE, REG_AR_BASE
  );

  localparam logic [31:0] INSTR_MXFINAL = encode_r4(
    MX_OPCODE, MX_FUNCT3_FINAL, MX_FMT_MXFP4,
    REG_RESULT, REG_SCALES, REG_OLD_ACC, 5'd0 /*rs3 unused*/
  );

  //----------------------------------------------------------------------------
  // Dual-read validation test (MX_FUNCT3_DUALREAD_TEST - not part of the real MXDOTP ISA,
  // see mxdotp_execute.sv/mxdotp_pkg.sv). REG_DR_BASE and REG_DR_BASE+1 are the adjacent
  // register pair the core reads as {hi,lo}; REG_DR_RESULT gets the "+1"/hi half.
  //----------------------------------------------------------------------------
  localparam logic [4:0] REG_DR_BASE   = 5'd10; // x10 (lo); x11 (=x10+1) is the implied hi half
  localparam logic [4:0] REG_DR_RESULT = 5'd12; // x12: MXDUALREAD_TEST rd

  localparam logic [31:0] DUALREAD_LO_VAL   = 32'hAAAA_AAAA; // x10 (rs1, the "lo" half)
  localparam logic [31:0] DUALREAD_HI_VAL   = 32'hBBBB_BBBB; // x11 (rs1+1, the "hi" half)
  localparam logic [31:0] DUALREAD_EXPECTED = DUALREAD_HI_VAL; // rd should end up == x11

  // rs2/rs3 are unused by MX_FUNCT3_DUALREAD_TEST's arithmetic - the interface's dualread
  // bit is global (dual-reads rs2/rs3 too, per its own semantics), but their values are
  // simply never looked at, so x0 is fine here.
  localparam logic [31:0] INSTR_MXDUALREAD_TEST = encode_r4(
    MX_OPCODE, MX_FUNCT3_DUALREAD_TEST, MX_FMT_MXFP4,
    REG_DR_RESULT, REG_DR_BASE, 5'd0 /*rs2 unused*/, 5'd0 /*rs3 unused*/
  );

  //----------------------------------------------------------------------------
  // Test 2: MX_FMT_MXFP4_RESIDUAL (k=16, with residue) register assignment
  //----------------------------------------------------------------------------
  localparam logic [4:0] REG_RA_BASE  = 5'd13; // x13 (lo) / x14 (hi): A
  localparam logic [4:0] REG_RB_BASE  = 5'd15; // x15 (lo) / x16 (hi): B
  localparam logic [4:0] REG_RAR_BASE = 5'd17; // x17 (lo) / x18 (hi): AR (residue, used)
  localparam logic [4:0] REG_RSCALES  = 5'd19; // x19: {a_scale,ar_scale,b_scale,reserved}
  localparam logic [4:0] REG_ROLD_ACC = 5'd20; // x20: old FP32 accumulator
  localparam logic [4:0] REG_RRESULT  = 5'd21; // x21: MXFINAL rd

  localparam logic [3:0]  MXFP4_HALF   = 4'h1; // E2M1 encoding of 0.5 (sign=0,exp=00,mant=1)
  localparam logic [63:0] RA_VAL       = {16{MXFP4_ONE}};   // 16x 1.0 -> 0x2222222222222222
  localparam logic [63:0] RB_VAL       = {16{MXFP4_ONE}};   // 16x 1.0 -> 0x2222222222222222
  localparam logic [63:0] RAR_VAL      = {16{MXFP4_HALF}};  // 16x 0.5 -> 0x1111111111111111
  localparam logic [31:0] RSCALES_VAL  = {E8M0_SCALE_ONE, E8M0_SCALE_ONE, E8M0_SCALE_ONE, 8'd0};
  localparam logic [31:0] ROLD_ACC_VAL = 32'h0000_0000;    // 0.0f

  // Hand-computed, Python-cross-checked (see header) - not yet a full golden-model suite.
  localparam logic [31:0] MXFP4_RESIDUAL_EXPECTED = 32'h41C0_0000;  // 24.0f

  localparam logic [31:0] INSTR_MXDOTP_RESIDUAL = encode_r4(
    MX_OPCODE, MX_FUNCT3_DOTP, MX_FMT_MXFP4_RESIDUAL,
    5'd0 /*rd unused - no writeback*/, REG_RA_BASE, REG_RB_BASE, REG_RAR_BASE
  );

  localparam logic [31:0] INSTR_MXFINAL_RESIDUAL = encode_r4(
    MX_OPCODE, MX_FUNCT3_FINAL, MX_FMT_MXFP4_RESIDUAL,
    REG_RRESULT, REG_RSCALES, REG_ROLD_ACC, 5'd0 /*rs3 unused*/
  );

  localparam logic [31:0] INSTR_JAL_SELF = encode_j(OPCODE_JAL, 5'd0, 21'd0); // infinite self-loop
  localparam logic [31:0] INSTR_NOP      = encode_i(OPCODE_OPIMM, 3'b000, 5'd0, 5'd0, 12'd0);

  logic [31:0] rom [0:NUM_WORDS-1];

  initial begin
    int i;
    logic [31:0] lui_a_lo, addi_a_lo, lui_a_hi, addi_a_hi;
    logic [31:0] lui_b_lo, addi_b_lo, lui_b_hi, addi_b_hi;
    logic [31:0] lui_ar_lo, addi_ar_lo, lui_ar_hi, addi_ar_hi;
    logic [31:0] lui_scales, addi_scales, lui_acc, addi_acc;
    logic [31:0] lui_dr_lo, addi_dr_lo, lui_dr_hi, addi_dr_hi;
    logic [31:0] lui_ra_lo, addi_ra_lo, lui_ra_hi, addi_ra_hi;
    logic [31:0] lui_rb_lo, addi_rb_lo, lui_rb_hi, addi_rb_hi;
    logic [31:0] lui_rar_lo, addi_rar_lo, lui_rar_hi, addi_rar_hi;
    logic [31:0] lui_rscales, addi_rscales, lui_racc, addi_racc;

    for (i = 0; i < NUM_WORDS; i++) rom[i] = INSTR_NOP;

    encode_li32(REG_A_BASE,        A_VAL[31:0],  lui_a_lo,  addi_a_lo);
    encode_li32(REG_A_BASE + 5'd1, A_VAL[63:32], lui_a_hi,  addi_a_hi);
    encode_li32(REG_B_BASE,        B_VAL[31:0],  lui_b_lo,  addi_b_lo);
    encode_li32(REG_B_BASE + 5'd1, B_VAL[63:32], lui_b_hi,  addi_b_hi);
    encode_li32(REG_AR_BASE,        AR_VAL[31:0],  lui_ar_lo, addi_ar_lo);
    encode_li32(REG_AR_BASE + 5'd1, AR_VAL[63:32], lui_ar_hi, addi_ar_hi);
    encode_li32(REG_SCALES,  SCALES_VAL,  lui_scales, addi_scales);
    encode_li32(REG_OLD_ACC, OLD_ACC_VAL, lui_acc,    addi_acc);

    encode_li32(REG_DR_BASE,        DUALREAD_LO_VAL, lui_dr_lo, addi_dr_lo);
    encode_li32(REG_DR_BASE + 5'd1, DUALREAD_HI_VAL, lui_dr_hi, addi_dr_hi);

    encode_li32(REG_RA_BASE,         RA_VAL[31:0],   lui_ra_lo,  addi_ra_lo);
    encode_li32(REG_RA_BASE + 5'd1,  RA_VAL[63:32],  lui_ra_hi,  addi_ra_hi);
    encode_li32(REG_RB_BASE,         RB_VAL[31:0],   lui_rb_lo,  addi_rb_lo);
    encode_li32(REG_RB_BASE + 5'd1,  RB_VAL[63:32],  lui_rb_hi,  addi_rb_hi);
    encode_li32(REG_RAR_BASE,        RAR_VAL[31:0],  lui_rar_lo, addi_rar_lo);
    encode_li32(REG_RAR_BASE + 5'd1, RAR_VAL[63:32], lui_rar_hi, addi_rar_hi);
    encode_li32(REG_RSCALES,  RSCALES_VAL,  lui_rscales, addi_rscales);
    encode_li32(REG_ROLD_ACC, ROLD_ACC_VAL, lui_racc,    addi_racc);

    // --- Test 1: MX_FMT_MXFP4 (regular, no residue) ---
    // Not deliberately hazard-tight (rs3/dual-read EX-forwarding was already proven by the
    // dedicated dualread test and the earlier rs3-forwarding test) - this test is purely
    // about algorithmic correctness, including the format-mask on AR/p2 (see header).
    rom[0]  = lui_a_lo;
    rom[1]  = addi_a_lo;   // x1 <- A[31:0]
    rom[2]  = lui_a_hi;
    rom[3]  = addi_a_hi;   // x2 <- A[63:32]
    rom[4]  = lui_b_lo;
    rom[5]  = addi_b_lo;   // x3 <- B[31:0]
    rom[6]  = lui_b_hi;
    rom[7]  = addi_b_hi;   // x4 <- B[63:32]
    rom[8]  = lui_ar_lo;
    rom[9]  = addi_ar_lo;  // x5 <- AR[31:0] (present, must be masked out by MXFINAL)
    rom[10] = lui_ar_hi;
    rom[11] = addi_ar_hi;  // x6 <- AR[63:32]
    rom[12] = INSTR_MXDOTP;
    rom[13] = lui_scales;
    rom[14] = addi_scales; // x7 <- scales
    rom[15] = lui_acc;
    rom[16] = addi_acc;    // x8 <- old accumulator (0.0)
    rom[17] = INSTR_MXFINAL;

    // --- Dual-read validation: MX_FUNCT3_DUALREAD_TEST ---
    // x10 (lo) is written well before the test instruction - port 0 just reads the regfile
    // normally here, nothing new to prove. x11 (hi, = x10+1) is written with ZERO NOPs
    // before MXDUALREAD_TEST on purpose: this forces x11's producer (addi_dr_hi) to still
    // be in EX exactly when MXDUALREAD_TEST is in ID, exercising the EX->ID forwarding path
    // for the rs1+1 companion port (operand_a_hi_fw_mux_sel == SEL_FW_EX). If the companion-
    // port address generation, read-enable gating, or forwarding is wrong, x12 will end up
    // with something other than DUALREAD_HI_VAL instead.
    rom[18] = lui_dr_lo;
    rom[19] = addi_dr_lo;  // x10 <- 0xAAAAAAAA (lo half; not the value under test)
    rom[20] = lui_dr_hi;
    rom[21] = addi_dr_hi;  // x11 <- 0xBBBBBBBB; MXDUALREAD_TEST immediately follows, no NOP
    rom[22] = INSTR_MXDUALREAD_TEST;

    // --- Test 2: MX_FMT_MXFP4_RESIDUAL (k=16, with residue) ---
    rom[23] = lui_ra_lo;
    rom[24] = addi_ra_lo;   // x13 <- A[31:0]
    rom[25] = lui_ra_hi;
    rom[26] = addi_ra_hi;   // x14 <- A[63:32]
    rom[27] = lui_rb_lo;
    rom[28] = addi_rb_lo;   // x15 <- B[31:0]
    rom[29] = lui_rb_hi;
    rom[30] = addi_rb_hi;   // x16 <- B[63:32]
    rom[31] = lui_rar_lo;
    rom[32] = addi_rar_lo;  // x17 <- AR[31:0]
    rom[33] = lui_rar_hi;
    rom[34] = addi_rar_hi;  // x18 <- AR[63:32]
    rom[35] = INSTR_MXDOTP_RESIDUAL;
    rom[36] = lui_rscales;
    rom[37] = addi_rscales; // x19 <- scales
    rom[38] = lui_racc;
    rom[39] = addi_racc;    // x20 <- old accumulator (0.0)
    rom[40] = INSTR_MXFINAL_RESIDUAL;

    rom[41] = INSTR_JAL_SELF;

    // Add further instructions here, e.g.:
    //   rom[42] = encode_i(OPCODE_OPIMM, 3'b000, 5'd6, 5'd0, 12'd1);
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
