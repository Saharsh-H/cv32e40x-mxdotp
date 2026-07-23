//==============================================================================
// File    : mx_acc_slide.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   BACK1(b) of the fused sliding-accumulator engines: decode the FP32
//   accumulator, slide it against the scale-free frame, combine it with the
//   already-frame-resident SoP, and emit the extended word {frame, remaining}
//   plus the sticky / sticky-negation / bypass flags BACK2 and BACK3 consume.
//
//   Despite the name (kept from the project's own "sliding-accumulator" term),
//   this block does BOTH halves of the hand-off: the accumulator slide AND the
//   frame combine. The SoP itself is placed by each engine's FRONT, which stays
//   per-format and is not touched here.
//
//   Single implementation formerly duplicated across
//   mxdotp_fp4_fused_engine.sv, mxdotp_m2xfp4_fused_engine.sv and
//   mxdotp_fp8_fused_engine.sv. Measured before extraction: FP4 vs M2 were 97%
//   identical (the only difference was an $error string) and FP4 vs FP8 82%
//   (two signal names, the $error string, one unused-bit tie-off). Everything
//   that actually differed between them is now a parameter.
//
//   NOT used by mxdotp_final_engine.sv. MXFINAL carries two independent scales,
//   so its BACK1 needs a runtime anchor select and three-term clamped placement
//   that these three do not have. Forcing it in here would widen this module
//   for the three engines that do not need it - exactly the trade this project
//   ruled out. Revisit only if the A' numbers say otherwise.
//
//   Parameters, per engine:
//                     MXFP4   M2XFP4   MXFP8
//     FRAME_W            38       43      95
//     REMAIN             25       25      25
//     MAX_ACC_SHIFT      13       18      70
//     ACC_SHIFT_CONST   148      144     118
//     SOP_W              13       18      70
//
// A.1 SCOPE NOTE: verbatim port. The frame add stays a single wide '+' here;
//   turning the product-placement sum into a balanced tree is Phase B1 and
//   lives in each engine's FRONT, not in this module.
//==============================================================================

module mx_acc_slide #(
  parameter int FRAME_W         = 38,   // <FMT>_FRAME_WIDTH
  parameter int REMAIN          = 25,   // <FMT>_REMAIN_BITS
  parameter int MAX_ACC_SHIFT   = 13,   // <FMT>_MAX_ACC_SHIFT
  parameter int ACC_SHIFT_CONST = 148,  // <FMT>_ACC_SHIFT_CONST
  parameter int SOP_W           = 13    // width of the engine's frame-resident SoP
) (
  input  logic [31:0]                old_acc_i,
  input  mxdotp_pkg::mx_exp_t        scale_exp_i,
  input  logic signed [SOP_W-1:0]    sop_i,
  input  logic                       valid_i,      // simulation assertions only
  output logic signed [FRAME_W+REMAIN-1:0] word_o,
  output logic                       acc_sticky_o,
  output logic                       neg_adj_o,
  output logic                       is_acc_o
);

  import mxdotp_pkg::mx_exp_t;

  // FP32 signed mantissa width: 1 sign + 1 implicit + 23 stored. Not a frame
  // property - it is a property of the accumulator format, identical for every
  // engine - so it is a localparam, not a port parameter.
  localparam int SMANT_W = 25;

  logic        acc_sign;
  logic [7:0]  acc_exp_f;
  logic [22:0] acc_mant_f;
  logic        acc_is_normal;
  logic signed [SMANT_W-1:0] smant;   // |{implicit, mant23}| <= 2^24-1, so
                                      // negation never wraps
  mx_exp_t     acc_shift;             // = (E + is_subnormal) - ACC_SHIFT_CONST - scale

  int          lsh;                   // left-shift amount,  0..MAX_ACC_SHIFT
  int          rsh;                   // right-shift amount (clamped), 1..SMANT_W
  int          dropped;               // shift below 'remaining' (clamped), 1..SMANT_W
  logic signed [FRAME_W-1:0]          acc_inframe;
  logic signed [FRAME_W-1:0]          frame;
  logic signed [SMANT_W+REMAIN-1:0]   rem_wide;   // smant << (0..REMAIN)
  logic [REMAIN-1:0]                  remaining;
  logic [SMANT_W:0]                   drop_mask;

  always_comb begin
    acc_sign      = old_acc_i[31];
    acc_exp_f     = old_acc_i[30:23];
    acc_mant_f    = old_acc_i[22:0];
    acc_is_normal = (acc_exp_f != 8'd0);

    // Subnormal accumulators are HONORED (paper-faithfully): no implicit
    // bit, effective exponent = E + 1. The old fp32_to_acc flushed them.
    smant = acc_sign ? -$signed({1'b0, acc_is_normal, acc_mant_f})
                     :  $signed({1'b0, acc_is_normal, acc_mant_f});

    acc_shift = mx_exp_t'({8'd0, acc_exp_f}) + mx_exp_t'(!acc_is_normal)
              - mx_exp_t'(ACC_SHIFT_CONST) - scale_exp_i;

    acc_sticky_o = 1'b0;
    is_acc_o     = 1'b0;
    acc_inframe  = '0;
    remaining    = '0;
    rem_wide     = '0;
    drop_mask    = '0;
    lsh = 0; rsh = 0; dropped = 0;

    if (acc_shift > mx_exp_t'(MAX_ACC_SHIFT)) begin
      // SoP too small to change the accumulator: |SoP| < ulp(acc)/2 at this
      // shift, strictly - the margin survives even binade boundaries - so RNE
      // returns the accumulator exactly. Frame contents are don't-cares.
      // Each format's own margin is proven in its mxdotp_pkg.sv frame header.
      is_acc_o = 1'b1;
    end else if (acc_shift >= mx_exp_t'(0)) begin
      // In-frame left shift. The knife-edge no-overflow proof for the FRAME_W
      // add is per-format and lives in mxdotp_pkg.sv; the assertion below is
      // the runtime safety net for it.
      lsh         = int'(acc_shift);
      acc_inframe = FRAME_W'(smant) <<< lsh;
    end else begin
      // Right shift: floor-truncation at REMAIN-fractional-bit resolution.
      // Shift amounts are clamped at SMANT_W: smant is SMANT_W bits, so any
      // arithmetic right shift >= SMANT_W already yields pure sign bits (and
      // any drop mask that wide already covers the whole mantissa) - the
      // clamps keep both shifters narrow without changing any result
      // (verified by each golden model's floor/sticky identity asserts).
      rsh         = (-int'(acc_shift) > SMANT_W) ? SMANT_W : -int'(acc_shift);
      acc_inframe = FRAME_W'(smant) >>> rsh;   // sign-extend then shift - identical for arithmetic shift, width-clean
      if (-int'(acc_shift) > REMAIN) begin
        dropped   = (-int'(acc_shift) - REMAIN > SMANT_W)
                  ? SMANT_W : (-int'(acc_shift) - REMAIN);
        remaining = REMAIN'(smant >>> dropped);
        drop_mask = ((SMANT_W+1)'(1) << dropped) - (SMANT_W+1)'(1);
        acc_sticky_o = |(smant & drop_mask[SMANT_W-1:0]);
        // The reference design's SoP==0 bypass: with accumulator bits already
        // dropped, round-tripping would lose acc precision through the sticky
        // path - return it verbatim instead (exact).
        if (sop_i == '0) is_acc_o = 1'b1;
      end else begin
        rem_wide  = (SMANT_W+REMAIN)'(smant) <<< (REMAIN + int'(acc_shift));
        remaining = rem_wide[REMAIN-1:0];
      end
    end

    frame = FRAME_W'(sop_i) + acc_inframe;

    // mx_find_lead's sticky-negation condition (see mxdotp_pkg.sv): a nonzero
    // positive residue was floor-truncated below this word.
    neg_adj_o = (dropped != 0) && (smant != '0) && acc_sticky_o;

    word_o = {frame, remaining};
  end

  // synthesis translate_off
  // Safety net for the knife-edge no-overflow proof: recompute the frame sum
  // 2 bits wider and confirm the FRAME_W result is identical.
  logic signed [FRAME_W+1:0] frame_chk;
  always_comb begin
    frame_chk = (FRAME_W+2)'(sop_i) + (FRAME_W+2)'(acc_inframe);
    if (valid_i && !is_acc_o)
      assert (frame_chk == (FRAME_W+2)'(frame)) else
        $error("mx_acc_slide: %0d-bit frame overflow - violates the sizing proof", FRAME_W);
  end
  // synthesis translate_on

endmodule
