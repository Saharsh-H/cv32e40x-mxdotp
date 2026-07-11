//==============================================================================
// File    : mxdotp_fp8_fused_engine.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Standalone MXFUSED arithmetic engine for the MXFP8 element formats
//   (OCP MX: E4M3 and E5M2) - the sibling of mxdotp_fused_engine.sv, which
//   handles MXFP4. This is DELIBERATELY a separate engine for now:
//
//     MXFP8 is NOT a reparameterization of MXFP4's exact "code = 2*value"
//     fixed-point trick. E2M1 elements are all exact multiples of 0.5, so a
//     whole block of MXFP4 products can be summed as plain integers FIRST and
//     placed into the wide accumulator ONCE (one exponent for the lot). E4M3
//     and E5M2 have real biased exponents and real mantissas, so every element
//     pair's product lands at its OWN exponent position - each product must be
//     shifted into the wide fixed-point accumulator individually and summed
//     THERE (the paper's "early accumulation"). That makes the front-end +
//     BACK1 a structurally different shape from MXFP4's, which is exactly why
//     this is its own module rather than another branch in the format mux.
//
//   Sharing the back-end is a later refactor (BACK2/BACK3 here are literally
//   the same acc_find_lead / acc_finalize this project already uses). For now
//   this file duplicates the overlap pipeline SKELETON on purpose, so MXFP8
//   can be brought up and validated without touching the working MXFP4 path.
//
//   OVERLAP / PIPELINE (identical discipline to mxdotp_fused_engine.sv):
//   five register points (input capture, prod_q [post front-end decode+mult],
//   sum_q [post BACK1], lead_q [post BACK2], result_data_q [post BACK3 /
//   output]), each carrying its own valid bit + {id, rd} sideband, shifting
//   forward one stage per cycle. A single global stall
//   (stall = result_valid_q && !result_ready_i) freezes every register in the
//   same cycle; ready_o is exactly !stall. Up to 5 instructions genuinely
//   in flight at once.
//
//   rs3 alignment under overlap (same subtlety mxdotp_fused_engine.sv records):
//   rs3 (scales + old_acc) is captured at the INPUT stage alongside rs1/rs2,
//   but BACK1 doesn't consume it until one stage later, paired with prod_q.
//   Under overlap the input stage is overwritten every cycle, so rs3 is carried
//   forward one register of its own (rs3_q1) to stay aligned with prod_q. The
//   E4M3/E5M2 sub-format select is read from rs3 in the FRONT stage (all three
//   input-stage regs belong to the same instruction that cycle), so its result
//   is baked into prod_q and does not need forwarding.
//
//   k = 8 elements per 64-bit dual-read operand (8*8 = 64), NOT 16: this is
//   the paper's own MXFP8/k=8 datapath, exactly what ACC_WIDTH=95 /
//   ACC_ANCHOR=34 / ACC_FULL_WIDTH=98 were originally sized to hold (the sum
//   of eight products plus the shifted old accumulator). See mxdotp_pkg.sv.
//
//   Element-format sub-select (E4M3 vs E5M2): funct2 only carries a single
//   MX_FMT_MXFP8 code, so the E4M3/E5M2 choice is taken from rs3 bit 48 - the
//   lowest previously-reserved bit of the {reserved[15:0], b_scale, a_scale}
//   upper word: 0 = E4M3, 1 = E5M2. This is the one genuinely new ISA bit;
//   it is trivially re-locatable, or tie-able to 0 for E4M3-only. See the
//   wiring in mxdotp_xif.sv and the handoff's DECISION note.
//
//   NOT handled (deliberate, consistent with Known Limitation #3 - no Inf/NaN
//   handling anywhere in this datapath): max-exponent E4M3 NaN (S.1111.111)
//   and E5M2 Inf/NaN (S.11111.xx) decode to their plain finite numeric
//   interpretation rather than propagating NaN/Inf. Subnormals (biased
//   exp field == 0) ARE handled correctly (implicit leading bit = 0, exponent
//   = 1 - bias - mant_bits), since place_in_acc takes an arbitrary exponent.
//==============================================================================

module mxdotp_fp8_fused_engine
    import mxdotp_pkg::*;
#(
    parameter int X_ID_WIDTH  = 4,
    // Real system value is always 64 (mxdotp_core_top.sv -> mxdotp_xif.sv ->
    // here). MX_K8 = 8 bytes per operand needs the full 64 bits, and rs3's
    // {scales,old_acc} packing does too, so 64 is the only value that works -
    // not an independent tunable. Same rationale as mxdotp_fused_engine.sv.
    parameter int X_RFR_WIDTH = 64,
    parameter int X_RFW_WIDTH = 32
)
(
    input  logic                    clk_i,
    input  logic                    rst_ni,

    input  logic                    start_i,
    output logic                    ready_o,
    input  logic [X_ID_WIDTH-1:0]   id_i,
    input  logic [4:0]              rd_i,
    input  logic [X_RFR_WIDTH-1:0]  rs1_i,        // A   (8x MXFP8 bytes)
    input  logic [X_RFR_WIDTH-1:0]  rs2_i,        // B   (8x MXFP8 bytes)
    input  logic [X_RFR_WIDTH-1:0]  rs3_i,        // {reserved[15:0],b_scale,a_scale} hi / old_acc lo
                                                  //   rs3_i[48] selects E4M3(0)/E5M2(1)
    input  logic [1:0]              mx_format_i,  // MX_FMT_MXFP8 (present for interface
                                                  //   symmetry with the MXFP4 engine; the
                                                  //   E4M3/E5M2 sub-select is rs3_i[48])

    output logic                    result_valid_o,
    input  logic                    result_ready_i,
    output logic [X_ID_WIDTH-1:0]   result_id_o,
    output logic [4:0]              result_rd_o,
    output logic [X_RFW_WIDTH-1:0]  result_data_o
);

  // MXFP8 block size for a 64-bit operand. Hard-fixed (see header / guard).
  localparam int MX_K8 = 8;

  // Elaboration-time guard - same rationale as mxdotp_fused_engine.sv's:
  // catches a standalone synthesis run with no override supplying the real 64.
  // synthesis translate_off
  initial begin
    assert (X_RFR_WIDTH >= 64) else
      $error("mxdotp_fp8_fused_engine: X_RFR_WIDTH (%0d) must be >= 64 - MX_K8=8 bytes per operand (A/B) and the rs3 {scales,old_acc} packing both need the full 64 bits.",
              X_RFR_WIDTH);
  end
  // synthesis translate_on

  // Unused-signal lint suppression: mx_format_i is part of the shared engine
  // interface but the MXFP8 sub-select comes from rs3 (see header); rs3's
  // reserved[15:1] bits (rs3_q1[63:49]) are, as their name says, reserved.
  wire _unused = &{1'b0, mx_format_i};

  //----------------------------------------------------------------------------
  // One decoded product: sign, its own signed exponent (already carrying the
  // per-element bias/mantissa-scale correction), and the integer mantissa
  // product magnitude (zero-extended to 32 bits, ready for place_in_acc).
  //----------------------------------------------------------------------------
  typedef struct packed {
    logic        sign;
    mx_exp_t     exp;
    logic [31:0] mag;
  } fp8_prod_t;

  //----------------------------------------------------------------------------
  // Five pipeline register points, each with its own valid/id/rd sideband -
  // same naming discipline as mxdotp_fused_engine.sv.
  //----------------------------------------------------------------------------

  logic                   in_valid_q;
  logic [X_ID_WIDTH-1:0]  in_id_q;
  logic [4:0]             in_rd_q;
  logic [X_RFR_WIDTH-1:0] rs1_q, rs2_q, rs3_q;

  logic                   prod_valid_q;
  logic [X_ID_WIDTH-1:0]  prod_id_q;
  logic [4:0]             prod_rd_q;
  fp8_prod_t              prod_q [0:MX_K8-1];
  logic [X_RFR_WIDTH-1:0] rs3_q1;   // rs3 carried forward one stage to stay
                                     // aligned with prod_q - see file header.

  logic                   sum_valid_q;
  logic [X_ID_WIDTH-1:0]  sum_id_q;
  logic [4:0]             sum_rd_q;
  logic signed [ACC_FULL_WIDTH-1:0] sum_q;

  logic                   lead_valid_q;
  logic [X_ID_WIDTH-1:0]  lead_id_q;
  logic [4:0]             lead_rd_q;
  mx_lead_result_t        lead_q;

  logic                   result_valid_q;
  logic [X_ID_WIDTH-1:0]  result_id_q;
  logic [4:0]             result_rd_q;
  logic [X_RFW_WIDTH-1:0] result_data_q;

  //----------------------------------------------------------------------------
  // Global stall / ready. Only source of backpressure is the tail (a completed
  // result the caller hasn't consumed). Identical to mxdotp_fused_engine.sv.
  //----------------------------------------------------------------------------

  wire stall = result_valid_q && !result_ready_i;
  assign ready_o = !stall;

  // Forward decls of the combinational stage outputs (defined below).
  fp8_prod_t                        prod_comb [0:MX_K8-1];
  logic signed [ACC_FULL_WIDTH-1:0] back1_sum_comb;
  mx_lead_result_t                  back2_lead_comb;
  logic [31:0]                      back3_result_comb;

  integer k;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      in_valid_q  <= 1'b0; in_id_q  <= '0; in_rd_q  <= '0;
      rs1_q <= '0; rs2_q <= '0; rs3_q <= '0;

      prod_valid_q <= 1'b0; prod_id_q <= '0; prod_rd_q <= '0;
      for (k = 0; k < MX_K8; k++) prod_q[k] <= '0;
      rs3_q1 <= '0;

      sum_valid_q <= 1'b0; sum_id_q <= '0; sum_rd_q <= '0;
      sum_q <= '0;

      lead_valid_q <= 1'b0; lead_id_q <= '0; lead_rd_q <= '0;
      lead_q <= '0;

      result_valid_q <= 1'b0; result_id_q <= '0; result_rd_q <= '0;
      result_data_q <= '0;
    end else if (!stall) begin
      // Every stage shifts forward exactly one register per cycle. An invalid
      // slot's data is never looked at downstream (its own valid bit, shifted
      // alongside, reads 0 next cycle), so writes are never gated on the
      // source valid bit - same discipline as the MXFP4 engine.
      result_valid_q <= lead_valid_q;
      result_id_q    <= lead_id_q;
      result_rd_q    <= lead_rd_q;
      result_data_q  <= back3_result_comb;

      lead_valid_q <= sum_valid_q;
      lead_id_q    <= sum_id_q;
      lead_rd_q    <= sum_rd_q;
      lead_q       <= back2_lead_comb;

      sum_valid_q <= prod_valid_q;
      sum_id_q    <= prod_id_q;
      sum_rd_q    <= prod_rd_q;
      sum_q       <= back1_sum_comb;

      prod_valid_q <= in_valid_q;
      prod_id_q    <= in_id_q;
      prod_rd_q    <= in_rd_q;
      for (k = 0; k < MX_K8; k++) prod_q[k] <= prod_comb[k];
      rs3_q1       <= rs3_q;   // carry rs3 forward alongside prod_q - see header

      in_valid_q  <= start_i;
      in_id_q     <= id_i;
      in_rd_q     <= rd_i;
      rs1_q       <= rs1_i;
      rs2_q       <= rs2_i;
      rs3_q       <= rs3_i;
    end
    // stall: every register holds (no assignment reached this cycle).
  end

  assign result_valid_o = result_valid_q;
  assign result_id_o    = result_id_q;
  assign result_rd_o    = result_rd_q;
  assign result_data_o  = result_data_q;

  //----------------------------------------------------------------------------
  // MXFP8 element decode. Returns (sign, exp, mag) such that the element's
  // value is (-1)^sign * 2^exp * mag, with mag an integer mantissa (implicit
  // leading bit included for normals, omitted for subnormals) - i.e. already
  // shaped for place_in_acc, which takes an arbitrary signed exponent.
  //
  //   E4M3: bias 7, 3 mantissa bits. normal value = 2^(e-7) * (1.mmm)
  //         = 2^(e-7-3) * {1,mmm};  subnormal (e==0) = 2^(1-7-3) * {0,mmm}.
  //   E5M2: bias 15, 2 mantissa bits. normal value = 2^(e-15) * (1.mm)
  //         = 2^(e-15-2) * {1,mm};   subnormal (e==0) = 2^(1-15-2) * {0,mm}.
  //----------------------------------------------------------------------------
  function automatic void fp8_decode(
      input  logic [7:0] b,
      input  logic       e5m2,
      output logic       sgn,
      output mx_exp_t    ex,
      output logic [31:0] mg
  );
    logic [3:0] e4;
    logic [2:0] m4;
    logic [4:0] e5;
    logic [1:0] m5;
    begin
      sgn = b[7];
      e4  = b[6:3];  m4 = b[2:0];
      e5  = b[6:2];  m5 = b[1:0];
      if (e5m2) begin
        if (e5 == 5'd0) begin
          ex = mx_exp_t'(1) - mx_exp_t'(15) - mx_exp_t'(2);   // subnormal exponent
          mg = {30'd0, m5};                                    // sig = {0, mm}
        end else begin
          ex = mx_exp_t'({11'd0, e5}) - mx_exp_t'(15) - mx_exp_t'(2);
          mg = {29'd0, 1'b1, m5};                              // sig = {1, mm}
        end
      end else begin
        if (e4 == 4'd0) begin
          ex = mx_exp_t'(1) - mx_exp_t'(7) - mx_exp_t'(3);     // subnormal exponent
          mg = {29'd0, m4};                                    // sig = {0, mmm}
        end else begin
          ex = mx_exp_t'({12'd0, e4}) - mx_exp_t'(7) - mx_exp_t'(3);
          mg = {28'd0, 1'b1, m4};                              // sig = {1, mmm}
        end
      end
    end
  endfunction

  //----------------------------------------------------------------------------
  // FRONT-END: decode k=8 A/B element pairs, form one product each. This is
  // the ONLY per-format branch in the engine; the back-end never looks at the
  // element format. sub_fmt_e5m2 is read from rs3_q[48] - an input-stage
  // register, same instruction as rs1_q/rs2_q this cycle (see header).
  //----------------------------------------------------------------------------
  logic sub_fmt_e5m2;
  assign sub_fmt_e5m2 = rs3_q[48];

  logic       fe_a_sign [0:MX_K8-1];
  logic       fe_b_sign [0:MX_K8-1];
  mx_exp_t    fe_a_exp  [0:MX_K8-1];
  mx_exp_t    fe_b_exp  [0:MX_K8-1];
  logic [31:0] fe_a_mag [0:MX_K8-1];
  logic [31:0] fe_b_mag [0:MX_K8-1];
  logic [15:0] fe_prod_mag [0:MX_K8-1];

  integer fi;
  always_comb begin
    for (fi = 0; fi < MX_K8; fi++) begin
      fp8_decode(rs1_q[8*fi +: 8], sub_fmt_e5m2, fe_a_sign[fi], fe_a_exp[fi], fe_a_mag[fi]);
      fp8_decode(rs2_q[8*fi +: 8], sub_fmt_e5m2, fe_b_sign[fi], fe_b_exp[fi], fe_b_mag[fi]);

      // Integer mantissa product: max 15*15 = 225 (E4M3) fits in 16 bits.
      fe_prod_mag[fi] = fe_a_mag[fi][7:0] * fe_b_mag[fi][7:0];

      prod_comb[fi].sign = fe_a_sign[fi] ^ fe_b_sign[fi];
      prod_comb[fi].exp  = fe_a_exp[fi] + fe_b_exp[fi];   // block scale added in BACK1
      prod_comb[fi].mag  = {16'd0, fe_prod_mag[fi]};
    end
  end

  //----------------------------------------------------------------------------
  // BACK1: apply the block scale, place EACH product into the wide accumulator
  // at its own exponent, and sum all k=8 placements plus the old FP32
  // accumulator. Operates on prod_q AND rs3_q1 (both stage-1 registers, same
  // instruction - see header for why rs3 needs its own forwarded copy).
  //
  // ACC_FULL_WIDTH (98) is the paper's own sizing for exactly this: 8 products
  // plus the shifted accumulator. Realistic MXFP8 magnitudes land far below
  // the MAGW=94 saturation boundary, so the 9-term sum stays well within range
  // (same over-provisioned, not-re-derived stance as Known Limitation #1).
  //----------------------------------------------------------------------------
  logic [7:0]  a_scale, b_scale;
  logic [31:0] old_acc;
  mx_exp_t     se;

  logic signed [ACC_WIDTH-1:0]      placed [0:MX_K8-1];
  logic signed [ACC_FULL_WIDTH-1:0] acc_sum;

  integer bi;
  always_comb begin
    // rs3_q1 packing (see mxdotp_pkg.sv's MXFUSED funct3 comment):
    // {reserved[15:0], b_scale[7:0], a_scale[7:0]} in the upper 32 bits,
    // old_acc in the lower 32. rs3_q1[48] (the E4M3/E5M2 select) already
    // consumed in FRONT; the rest of reserved[15:1] stays reserved.
    a_scale = rs3_q1[39:32];
    b_scale = rs3_q1[47:40];
    old_acc = rs3_q1[31:0];

    se = scale_exp(a_scale, b_scale);

    acc_sum = ACC_FULL_WIDTH'(fp32_to_acc(old_acc));   // sign-extends ACC_WIDTH -> ACC_FULL_WIDTH
    for (bi = 0; bi < MX_K8; bi++) begin
      placed[bi] = place_in_acc(prod_q[bi].sign, se + prod_q[bi].exp, prod_q[bi].mag);
      acc_sum    = acc_sum + ACC_FULL_WIDTH'(placed[bi]);
    end
    back1_sum_comb = acc_sum;
  end

  // rs3_q1[63:48] unused in BACK1: bit 48 (E4M3/E5M2 select) was consumed a
  // stage earlier from rs3_q in FRONT; bits [63:49] are reserved (see header).
  wire _unused_rsvd = &{1'b0, rs3_q1[63:48]};

  //----------------------------------------------------------------------------
  // BACK2: leading-one scan (mxdotp_pkg.sv's acc_find_lead) on sum_q.
  // Shared, unchanged - same call the MXFP4 engine and MXFINAL make.
  //----------------------------------------------------------------------------
  always_comb begin
    back2_lead_comb = acc_find_lead(sum_q);
  end

  //----------------------------------------------------------------------------
  // BACK3: mantissa extract + sticky + round + exponent clamp
  // (mxdotp_pkg.sv's acc_finalize) on lead_q. Shared, unchanged.
  //----------------------------------------------------------------------------
  always_comb begin
    back3_result_comb = acc_finalize(lead_q);
  end

endmodule
