//==============================================================================
// File    : mx_acc_slide_hier.sv  (candidate - not yet the deployed module)
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Phase B1 hierarchical replacement for mx_acc_slide.sv's two variable-
//   amount shifts (`smant <<< lsh` and `smant >>> rsh`). Drop-in: identical
//   port list, identical acc_shift/lsh/rsh/dropped/remaining/sticky decode
//   logic (copied verbatim - only the two shift APPLICATIONS change), and the
//   same single '+' for the final frame combine (that add is a plain 2-term
//   add; synthesis tools handle those well already, and restructuring it is
//   not this fix's target - see the file header's own Phase B1 note, which
//   is about each engine's FRONT sum-of-many-products tree, not this add).
//
//   The bottleneck this targets: a shift amount that is only known at runtime
//   (computed from the accumulator's exponent minus a scale) cannot begin
//   shifting until that arithmetic resolves, and a naive `<<< lsh` /`>>> rsh`
//   gives the synthesis tool no structural hint about how to build the
//   shifter - it may not always pick the shallowest option for a wide,
//   wide-range variable shift (FRAME_W up to 95 for MXFP8, shift range up to
//   70). Explicit staging removes that ambiguity: each stage is a FIXED
//   power-of-two shift, conditionally applied based on one bit of the shift
//   amount, so total depth is ceil(log2(range)) fixed-shift muxes instead of
//   depending on the tool's inference for one big variable shift.
//
//   Two independent staged shifters:
//     - LSH: left shift by 0..MAX_ACC_SHIFT (format-dependent: 13/18/70),
//       zero-filling from below. LSH_STAGES = clog2(MAX_ACC_SHIFT+1).
//     - RSH: arithmetic right shift by 0..SMANT_W (=25, format-independent -
//       it's the FP32 mantissa+implicit+sign width, not a frame property),
//       sign-filling from above. RSH_STAGES = clog2(SMANT_W+1) = 5, same for
//       every engine.
//   Both operate on the SAME sign-extended-to-FRAME_W starting value smant
//   already produces today; only which one is used, and how the shift is
//   applied, is unchanged in effect.
//
//   Correctness is established by mx_acc_slide_equiv_tb.sv, a randomized
//   equivalence check against the original (mx_acc_slide_serial_ref.sv) at
//   all three real parameter sets (FP4/M2XFP4/FP8), before this ever
//   replaces the deployed mx_acc_slide.sv.
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

  localparam int SMANT_W = 25;

  // --- staged-shifter stage counts -------------------------------------
  localparam int LSH_STAGES = (MAX_ACC_SHIFT <= 0) ? 1 : $clog2(MAX_ACC_SHIFT+1);
  localparam int RSH_STAGES = $clog2(SMANT_W+1);   // = 5, same for every engine

  logic        acc_sign;
  logic [7:0]  acc_exp_f;
  logic [22:0] acc_mant_f;
  logic        acc_is_normal;
  logic signed [SMANT_W-1:0] smant;
  mx_exp_t     acc_shift;

  int          lsh;
  int          rsh;
  int          dropped;
  logic signed [FRAME_W-1:0]          acc_inframe;
  logic signed [FRAME_W-1:0]          frame;
  logic signed [SMANT_W+REMAIN-1:0]   rem_wide;
  logic [REMAIN-1:0]                  remaining;
  logic [SMANT_W:0]                   drop_mask;

  // staged left-shift working array: stage 0 = sign-extended smant, each
  // subsequent stage conditionally shifts left by 2^s based on lsh's bit s.
  logic signed [FRAME_W-1:0] lsh_stage [0:LSH_STAGES];
  // staged right-shift working array: same idea, arithmetic shift right.
  logic signed [FRAME_W-1:0] rsh_stage [0:RSH_STAGES];

  int s;

  always_comb begin
    acc_sign      = old_acc_i[31];
    acc_exp_f     = old_acc_i[30:23];
    acc_mant_f    = old_acc_i[22:0];
    acc_is_normal = (acc_exp_f != 8'd0);

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

    // Compute lsh/rsh FIRST (cheap - direct extracts/negation of acc_shift,
    // same clamping as the original), so the staged shifters below always
    // see the correct amount for THIS evaluation. Values computed for the
    // branch that isn't taken are simply unused - no correctness impact,
    // just wasted (but cheap) work, same principle as always_comb
    // evaluating both mux inputs.
    if (acc_shift >= mx_exp_t'(0)) begin
      lsh = int'(acc_shift);
    end else begin
      rsh = (-int'(acc_shift) > SMANT_W) ? SMANT_W : -int'(acc_shift);
    end

    // staged shifters run unconditionally (cheap, combinational, no side
    // effects) - only their RESULT is selected below based on which branch
    // is actually active, exactly like the original's lsh/rsh computation.
    lsh_stage[0] = FRAME_W'(smant);
    for (s = 0; s < LSH_STAGES; s++) begin
      lsh_stage[s+1] = lsh[s] ? (lsh_stage[s] <<< (1 << s)) : lsh_stage[s];
    end

    rsh_stage[0] = FRAME_W'(smant);
    for (s = 0; s < RSH_STAGES; s++) begin
      rsh_stage[s+1] = rsh[s] ? (rsh_stage[s] >>> (1 << s)) : rsh_stage[s];
    end

    if (acc_shift > mx_exp_t'(MAX_ACC_SHIFT)) begin
      is_acc_o = 1'b1;
    end else if (acc_shift >= mx_exp_t'(0)) begin
      acc_inframe = lsh_stage[LSH_STAGES];
    end else begin
      acc_inframe = rsh_stage[RSH_STAGES];
      if (-int'(acc_shift) > REMAIN) begin
        dropped   = (-int'(acc_shift) - REMAIN > SMANT_W)
                  ? SMANT_W : (-int'(acc_shift) - REMAIN);
        remaining = REMAIN'(smant >>> dropped);
        drop_mask = ((SMANT_W+1)'(1) << dropped) - (SMANT_W+1)'(1);
        acc_sticky_o = |(smant & drop_mask[SMANT_W-1:0]);
        if (sop_i == '0) is_acc_o = 1'b1;
      end else begin
        rem_wide  = (SMANT_W+REMAIN)'(smant) <<< (REMAIN + int'(acc_shift));
        remaining = rem_wide[REMAIN-1:0];
      end
    end

    frame = FRAME_W'(sop_i) + acc_inframe;

    neg_adj_o = (dropped != 0) && (smant != '0) && acc_sticky_o;

    word_o = {frame, remaining};
  end

  // synthesis translate_off
  logic signed [FRAME_W+1:0] frame_chk;
  always_comb begin
    frame_chk = (FRAME_W+2)'(sop_i) + (FRAME_W+2)'(acc_inframe);
    if (valid_i && !is_acc_o)
      assert (frame_chk == (FRAME_W+2)'(frame)) else
        $error("mx_acc_slide: %0d-bit frame overflow - violates the sizing proof", FRAME_W);
  end
  // synthesis translate_on

endmodule
