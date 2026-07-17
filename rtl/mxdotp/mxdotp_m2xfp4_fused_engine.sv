//==============================================================================
// File    : mxdotp_m2xfp4_fused_engine.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Standalone MXFUSED arithmetic engine for M2XFP4 - metadata-augmented
//   MXFP4 (M2XFP, ASPLOS'26, arXiv:2601.19213). Third sibling of
//   mxdotp_fused_engine.sv (plain MXFP4) and mxdotp_fp8_fused_engine.sv
//   (plain MXFP8): same five-register-point pipeline, same global-stall
//   discipline, same sliding-accumulator BACK1, same package-function
//   contract - only the FRONT and the frame constants differ.
//
//   WHAT IS NEW VS THE MXFP4 ENGINE (everything else is a constant swap):
//
//   1. FRONT is no longer a flat 16-term reduction. The 16-element operand
//      pair is 2 subgroups of 8, and each subgroup's partial sum is scaled
//      by its own weight-side Sg-EM factor (1 + k/4) BEFORE the two are
//      combined. (1 + k/4) is not a power of two, so it cannot be folded
//      into the frame position the way the block scale is - it has to land
//      on the subgroup partial sum. It is still shift-and-add, not a
//      multiply: P*(1 + k/4) == P*(4+k) in units of 1/64.
//
//   2. The activation side carries Elem-EM: 2 bits per subgroup extend the
//      mantissa of that subgroup's single largest-magnitude element to
//      E2M3. The top-1 is RE-DERIVED here, not transmitted - that is what
//      keeps the metadata budget at 8 bits with no index bits. See
//      mxdotp_pkg.sv's M2XFP4 frame header for the decode (a DECREMENT of
//      {fp4_mag,meta}, not a concatenation) and for why the paper's own
//      Alg. 1 and Fig. 10 disagree on the tie-break rule.
//
//      No 8:1 datapath mux and no auxiliary correction MAC exist here,
//      unlike the paper's Fig. 10/11. Those are artifacts of a Top-1 Decode
//      Unit that is physically separate from a systolic PE array and must
//      forward (val, idx) to it. This engine decodes all 16 lanes in
//      parallel, so nothing needs selecting: the top-1's lane simply carries
//      a wider code (M2_XCODE_WIDTH=7 vs the plain lanes' 4*CODE_WIDTH), and
//      the product array is 7x5 rather than 5x5. Same signed-integer
//      multiply of scaled codes, one wider operand.
//
//   3. rs1/rs2 ARE NOT INTERCHANGEABLE. rs1 is always the activations
//      (Elem-EM), rs2 always the weights (Sg-EM). This is the first engine
//      in the project where operand order carries meaning; see the ISA NOTE
//      in mxdotp_pkg.sv's funct2 section.
//
//   FRAME (see mxdotp_pkg.sv's M2XFP4 section for the full derivation):
//     | sign : 1 | acc @ max left shift : 24 | R guard : 1 | SoP : 17 | = 43
//   anchor 6 (frame LSB = 2^-6, because W in (1/2)Z and X' in (1/8)Z give
//   products in (1/16)Z, and Sg-EM lands them in (1/64)Z). Everything is
//   exactly representable: there is NO truncation below the frame and no
//   sticky semantics to define for the SoP side. M2_REMAIN_BITS = 25 is
//   identical to MXFP4's, and for the same closed-form reason (the bound
//   depends only on the accumulator's 24-bit mantissa), so v8's corner-class
//   closure transfers unchanged.
//
//   Exactness: bit-exact RNE vs an exact-rational reference on 259,781
//   vectors at each of two independent seeds (verification/m2_golden.py;
//   0 failures, 0 corner-class deviations), plus an encoder-conformance
//   sweep asserting |X'| <= 7, X' in (1/8)Z, and round-trip against the
//   paper's own Fig. 8 worked example.
//
//   OVERLAP / PIPELINE: identical discipline to mxdotp_fused_engine.sv -
//   five register points (input capture, sop_q/BACK1 inputs, sum_q, lead_q,
//   result_data_q), one global stall `result_valid_q && !result_ready_i`
//   freezing every register in the same cycle, ready_o == !stall. Only
//   old_acc (32b) and the hoisted scale_exp are threaded forward to BACK1;
//   the metadata is consumed entirely inside FRONT and never threaded.
//==============================================================================

module mxdotp_m2xfp4_fused_engine
    import mxdotp_pkg::*;
#(
    parameter int X_ID_WIDTH  = 4,
    // Real system value is always 64. Not an independent tunable: MX_K=16
    // nibbles per operand (A/B) need 64 bits, and rs3's
    // {meta,scales,old_acc} packing needs the full 64 too - the metadata
    // field sits at rs3[56:49], so anything narrower silently loses it.
    // Same rationale as mxdotp_fused_engine.sv's matching guard.
    parameter int X_RFR_WIDTH = 64,
    parameter int X_RFW_WIDTH = 32
)
(
    input  logic                    clk_i,
    input  logic                    rst_ni,

    input  logic                    start_i,
    output logic                    ready_o,      // can accept a new instruction this cycle
    input  logic [X_ID_WIDTH-1:0]   id_i,
    input  logic [4:0]              rd_i,
    input  logic [X_RFR_WIDTH-1:0]  rs1_i,        // ACTIVATIONS (Elem-EM) - NOT interchangeable
    input  logic [X_RFR_WIDTH-1:0]  rs2_i,        // WEIGHTS     (Sg-EM)   - with rs2
    input  logic [X_RFR_WIDTH-1:0]  rs3_i,        // {rsvd,meta,rsvd,b_scale,a_scale} hi / old_acc lo
    input  logic [1:0]              mx_format_i,  // element format (MX_FMT_M2XFP4)

    output logic                    result_valid_o,
    input  logic                    result_ready_i,
    output logic [X_ID_WIDTH-1:0]   result_id_o,
    output logic [4:0]              result_rd_o,
    output logic [X_RFW_WIDTH-1:0]  result_data_o
);

  // synthesis translate_off
  initial begin
    assert (X_RFR_WIDTH >= 64) else
      $error("mxdotp_m2xfp4_fused_engine: X_RFR_WIDTH (%0d) must be >= 64 - MX_K=16 nibbles per operand (A/B) and the rs3 {metadata,scales,old_acc} packing (metadata at [56:49]) both need the full 64 bits, this is not a free parameter.",
              X_RFR_WIDTH);
  end
  // synthesis translate_on

  //----------------------------------------------------------------------------
  // Five pipeline register points, each with its own valid/id/rd sideband.
  // Naming matches mxdotp_fused_engine.sv exactly.
  //----------------------------------------------------------------------------

  logic                   in_valid_q;
  logic [X_ID_WIDTH-1:0]  in_id_q;
  logic [4:0]             in_rd_q;
  logic [X_RFR_WIDTH-1:0] rs1_q, rs2_q, rs3_q;
  logic [1:0]             mx_format_q;

  // Stage 1 (post front-end).
  logic                                   sop_valid_q;
  logic [X_ID_WIDTH-1:0]                  sop_id_q;
  logic [4:0]                             sop_rd_q;
  logic signed [M2_SOP_SIGNED_WIDTH-1:0]  sop_q;      // frame-resident SoP, never shifted
  mx_exp_t                                sexp_q1;    // hoisted scale_exp(a,b)
  logic [31:0]                            old_acc_q1;

  // Stage 2 (post BACK1): the 68-bit extended word {frame43, remaining25}.
  logic                              sum_valid_q;
  logic [X_ID_WIDTH-1:0]             sum_id_q;
  logic [4:0]                        sum_rd_q;
  logic signed [M2_LZC_WIDTH-1:0]    sum_q;
  logic                              acc_sticky_q2;
  logic                              neg_adj_q2;
  logic                              is_acc_q2;
  mx_exp_t                           sexp_q2;
  logic [31:0]                       old_acc_q2;

  // Stage 3 (post BACK2).
  logic                   lead_valid_q;
  logic [X_ID_WIDTH-1:0]  lead_id_q;
  logic [4:0]             lead_rd_q;
  m2_lead_result_t        lead_q;
  logic                   acc_sticky_q3;
  logic                   is_acc_q3;
  mx_exp_t                sexp_q3;
  logic [31:0]            old_acc_q3;

  logic                   result_valid_q;
  logic [X_ID_WIDTH-1:0]  result_id_q;
  logic [4:0]             result_rd_q;
  logic [X_RFW_WIDTH-1:0] result_data_q;

  //----------------------------------------------------------------------------
  // Global stall / ready - identical to mxdotp_fused_engine.sv.
  //----------------------------------------------------------------------------

  wire stall = result_valid_q && !result_ready_i;

  assign ready_o = !stall;

  logic signed [M2_SOP_SIGNED_WIDTH-1:0] sop_comb;
  mx_exp_t                               sexp_comb;
  logic signed [M2_LZC_WIDTH-1:0]        back1_word_comb;
  logic                                  back1_acc_sticky_comb;
  logic                                  back1_neg_adj_comb;
  logic                                  back1_is_acc_comb;
  m2_lead_result_t                       back2_lead_comb;
  logic [31:0]                           back3_result_comb;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      in_valid_q      <= 1'b0;
      sop_valid_q     <= 1'b0;
      sum_valid_q     <= 1'b0;
      lead_valid_q    <= 1'b0;
      result_valid_q  <= 1'b0;
    end else if (!stall) begin
      result_valid_q <= lead_valid_q;
      result_id_q    <= lead_id_q;
      result_rd_q    <= lead_rd_q;
      result_data_q  <= back3_result_comb;

      lead_valid_q  <= sum_valid_q;
      lead_id_q     <= sum_id_q;
      lead_rd_q     <= sum_rd_q;
      lead_q        <= back2_lead_comb;
      acc_sticky_q3 <= acc_sticky_q2;
      is_acc_q3     <= is_acc_q2;
      sexp_q3       <= sexp_q2;
      old_acc_q3    <= old_acc_q2;

      sum_valid_q   <= sop_valid_q;
      sum_id_q      <= sop_id_q;
      sum_rd_q      <= sop_rd_q;
      sum_q         <= back1_word_comb;
      acc_sticky_q2 <= back1_acc_sticky_comb;
      neg_adj_q2    <= back1_neg_adj_comb;
      is_acc_q2     <= back1_is_acc_comb;
      sexp_q2       <= sexp_q1;
      old_acc_q2    <= old_acc_q1;

      sop_valid_q <= in_valid_q;
      sop_id_q    <= in_id_q;
      sop_rd_q    <= in_rd_q;
      sop_q       <= sop_comb;
      sexp_q1     <= sexp_comb;
      old_acc_q1  <= rs3_q[31:0];   // threaded forward to stay aligned

      in_valid_q  <= start_i;
      in_id_q     <= id_i;
      in_rd_q     <= rd_i;
      rs1_q       <= rs1_i;
      rs2_q       <= rs2_i;
      rs3_q       <= rs3_i;
      mx_format_q <= mx_format_i;
    end
  end

  assign result_valid_o = result_valid_q;
  assign result_id_o    = result_id_q;
  assign result_rd_o    = result_rd_q;
  assign result_data_o  = result_data_q;

  //----------------------------------------------------------------------------
  // FRONT-END. Four steps, all combinational, all inside one stage:
  //   (a) unpack nibbles + metadata
  //   (b) per subgroup: re-derive the top-1 activation (max |FP4 code|, ties
  //       -> lowest index) as a one-hot
  //   (c) per lane: pick the wide Elem-EM code (top-1) or the plain code,
  //       multiply by the weight code, sum within the subgroup
  //   (d) per subgroup: apply Sg-EM (1 + k/4) as shift-and-add, then combine
  // plus the HOISTED scale-exponent adder, exactly as the MXFP4 engine does.
  //
  // The SoP is the format mux's only client: MX_FMT_M2XFP4 passes the real
  // sum; any other value falls to SoP = 0, making the instruction an exact
  // accumulator pass-through. (M2XFP4 never shares this engine, so this is
  // pure defence-in-depth against a mis-routed head, mirroring the MXFP4
  // engine's identical guard.)
  //----------------------------------------------------------------------------

  logic [3:0] a_nib [0:MX_K-1];
  logic [3:0] b_nib [0:MX_K-1];
  logic [1:0] elem_em [0:M2_SUBGROUPS-1];
  logic [1:0] sg_em   [0:M2_SUBGROUPS-1];

  // (b) top-1 re-derivation. E2M1 magnitude codes are monotonic in value, so
  // |fp4_to_code| is a plain 4-bit unsigned compare - the paper's 16-entry
  // FP4->UINT LUT (Fig. 10) exists only to make its sign-inclusive ordering
  // monotonic, and is unnecessary under the Alg. 1 tie-break we follow.
  logic signed [CODE_WIDTH-1:0]        a_code_raw [0:MX_K-1];
  logic [3:0]                          a_mag      [0:MX_K-1];   // |code| <= 12
  logic [3:0]                          sub_vmax   [0:M2_SUBGROUPS-1];
  logic [M2_SUBGROUP_LEN-1:0]          top1_oh    [0:M2_SUBGROUPS-1];
  logic                                top1_found;

  logic signed [M2_XCODE_WIDTH-1:0]    a_xcode [0:MX_K-1];      // 8*X'
  logic signed [CODE_WIDTH-1:0]        b_code  [0:MX_K-1];      // 2*W
  logic signed [M2_PROD_WIDTH-1:0]     prod    [0:MX_K-1];      // 16*W*X'
  logic signed [M2_PSUM_WIDTH-1:0]     psum    [0:M2_SUBGROUPS-1];
  logic signed [M2_SOP_SIGNED_WIDTH-1:0] psum_w    [0:M2_SUBGROUPS-1];
  logic signed [M2_SOP_SIGNED_WIDTH-1:0] sg_scaled [0:M2_SUBGROUPS-1];
  logic signed [M2_SOP_SIGNED_WIDTH-1:0] sop_sum;

  int fi, sj, si;

  always_comb begin
    // (a) unpack
    for (fi = 0; fi < MX_K; fi++) begin
      a_nib[fi] = rs1_q[4*fi +: 4];
      b_nib[fi] = rs2_q[4*fi +: 4];
    end
    for (sj = 0; sj < M2_SUBGROUPS; sj++) begin
      elem_em[sj] = rs3_q[M2_ELEM_EM_LSB + 2*sj +: 2];
      sg_em[sj]   = rs3_q[M2_SG_EM_LSB   + 2*sj +: 2];
    end

    for (fi = 0; fi < MX_K; fi++) begin
      a_code_raw[fi] = fp4_to_code(a_nib[fi]);
      a_mag[fi]      = 4'(a_code_raw[fi][CODE_WIDTH-1] ? -a_code_raw[fi]
                                                       :  a_code_raw[fi]);
    end

    // (b) per-subgroup max, then lowest-index one-hot (the priority encoder
    // IS paper Alg. 1's min(C_idx) tie-break - no index bits are stored or
    // compared, unlike Fig. 10's comparator tree which carries idx around).
    for (sj = 0; sj < M2_SUBGROUPS; sj++) begin
      sub_vmax[sj] = 4'd0;
      for (si = 0; si < M2_SUBGROUP_LEN; si++) begin
        if (a_mag[sj*M2_SUBGROUP_LEN + si] > sub_vmax[sj])
          sub_vmax[sj] = a_mag[sj*M2_SUBGROUP_LEN + si];
      end
      top1_oh[sj] = '0;
      top1_found  = 1'b0;
      for (si = 0; si < M2_SUBGROUP_LEN; si++) begin
        if (!top1_found && (a_mag[sj*M2_SUBGROUP_LEN + si] == sub_vmax[sj])) begin
          top1_oh[sj][si] = 1'b1;
          top1_found      = 1'b1;
        end
      end
    end

    // (c) lane codes + products + intra-subgroup sum
    for (sj = 0; sj < M2_SUBGROUPS; sj++) begin
      psum[sj] = '0;
      for (si = 0; si < M2_SUBGROUP_LEN; si++) begin
        fi = sj*M2_SUBGROUP_LEN + si;
        // Elem-EM lane vs plain lane. Both are 8*value, so they add directly
        // with no alignment: the whole rs1 side lives in units of 1/8.
        a_xcode[fi] = top1_oh[sj][si] ? m2_x_to_code(a_nib[fi], elem_em[sj])
                                      : m2_plain_to_code(a_nib[fi]);
        b_code[fi]  = fp4_to_code(b_nib[fi]);
        prod[fi]    = M2_PROD_WIDTH'(a_xcode[fi] * b_code[fi]);
        psum[sj]    = psum[sj] + M2_PSUM_WIDTH'(prod[fi]);
      end
    end

    // (d) Sg-EM: P*(1 + k/4) == P*(4+k) in 1/64 units == (P<<2) + k1*(P<<1)
    // + k0*P. Three shifted addends, no multiplier, exact - this is the step
    // that moves the frame anchor from MXFP4's 2 to 6.
    sop_sum = '0;
    for (sj = 0; sj < M2_SUBGROUPS; sj++) begin
      psum_w[sj]    = M2_SOP_SIGNED_WIDTH'(psum[sj]);
      sg_scaled[sj] = (psum_w[sj] <<< 2)
                    + (sg_em[sj][1] ? (psum_w[sj] <<< 1) : M2_SOP_SIGNED_WIDTH'(0))
                    + (sg_em[sj][0] ?  psum_w[sj]        : M2_SOP_SIGNED_WIDTH'(0));
      sop_sum       = sop_sum + sg_scaled[sj];
    end

    sop_comb = (mx_format_q == MX_FMT_M2XFP4) ? sop_sum : '0;

    // Hoisted scale adder. rs3_q packing: {rsvd[6:0], sg_em[3:0],
    // elem_em[3:0], rsvd, b_scale[7:0], a_scale[7:0]} in the upper 32 bits,
    // old_acc in the lower 32 - see mxdotp_pkg.sv's M2XFP4 frame header.
    // Sg-EM is deliberately NOT folded in here: it is not a power of two, so
    // it cannot ride the exponent path the block scale does.
    sexp_comb = scale_exp(rs3_q[39:32], rs3_q[47:40]);
  end

  // synthesis translate_off
  // FRONT sizing proofs. The per-subgroup bound is the tight one (the top-1
  // caps the other 7 lanes at 6.0, so 7*(12*48) + 12*56 = 4704, not 8*672);
  // the SoP bound is the loose one used in the frame's knife-edge proof.
  always_comb begin
    if (in_valid_q && (mx_format_q == MX_FMT_M2XFP4)) begin
      for (int cj = 0; cj < M2_SUBGROUPS; cj++) begin
        assert (psum[cj] <= M2_PSUM_WIDTH'(4704) && psum[cj] >= -M2_PSUM_WIDTH'(4704))
          else $error("mxdotp_m2xfp4_fused_engine: subgroup %0d partial sum %0d exceeds the +/-4704 bound - violates the sizing proof",
                      cj, psum[cj]);
        assert ($onehot(top1_oh[cj]))
          else $error("mxdotp_m2xfp4_fused_engine: subgroup %0d top-1 is not one-hot", cj);
      end
      assert (sop_sum <= M2_SOP_SIGNED_WIDTH'(75264) && sop_sum >= -M2_SOP_SIGNED_WIDTH'(75264))
        else $error("mxdotp_m2xfp4_fused_engine: SoP %0d exceeds the +/-75264 sizing-proof bound",
                    sop_sum);
    end
  end
  // synthesis translate_on

  //----------------------------------------------------------------------------
  // BACK1: the accumulator slide. Structurally IDENTICAL to
  // mxdotp_fused_engine.sv's BACK1 - only the frame constants differ. The
  // SoP is already frame-resident and untouched; this stage only decodes the
  // FP32 accumulator, computes its shift against the scale-free frame, and
  // produces the 68-bit extended word {frame43, remaining25} plus
  // sticky/bypass flags.
  //----------------------------------------------------------------------------

  logic        acc_sign;
  logic [7:0]  acc_exp_f;
  logic [22:0] acc_mant_f;
  logic        acc_is_normal;
  logic signed [24:0] smant;      // 25-bit signed: |{implicit, mant23}| <= 2^24-1
  mx_exp_t     acc_shift;         // = (E + is_subnormal) - 144 - scale_exp

  int          lsh;               // left-shift amount, 0..18
  int          rsh;               // right-shift amount (clamped), 1..25
  int          dropped;           // shift below 'remaining' (clamped), 1..25
  logic signed [M2_FRAME_WIDTH-1:0] acc_inframe;
  logic signed [M2_FRAME_WIDTH-1:0] frame43;
  logic signed [49:0]               rem_wide;   // smant << (0..25) fits in 50b
  logic [M2_REMAIN_BITS-1:0]        remaining;
  logic [25:0]                      drop_mask;

  always_comb begin
    acc_sign      = old_acc_q1[31];
    acc_exp_f     = old_acc_q1[30:23];
    acc_mant_f    = old_acc_q1[22:0];
    acc_is_normal = (acc_exp_f != 8'd0);

    // Subnormal accumulators are HONORED: no implicit bit, effective
    // exponent = E + 1.
    smant = acc_sign ? -$signed({1'b0, acc_is_normal, acc_mant_f})
                     :  $signed({1'b0, acc_is_normal, acc_mant_f});

    acc_shift = mx_exp_t'({8'd0, acc_exp_f}) + mx_exp_t'(!acc_is_normal)
              - mx_exp_t'(M2_ACC_SHIFT_CONST) - sexp_q1;

    back1_acc_sticky_comb = 1'b0;
    back1_is_acc_comb     = 1'b0;
    acc_inframe           = '0;
    remaining             = '0;
    rem_wide              = '0;
    drop_mask             = '0;
    lsh = 0; rsh = 0; dropped = 0;

    if (acc_shift > mx_exp_t'(M2_MAX_ACC_SHIFT)) begin
      // SoP too small to change the accumulator: |SoP| <= 75264 < 2^17 =
      // half-ulp across a binade boundary at this shift, strictly (a factor
      // of 1.74 of margin) - so RNE returns the accumulator exactly.
      back1_is_acc_comb = 1'b1;
    end else if (acc_shift >= mx_exp_t'(0)) begin
      // In-frame left shift: mant top bit lands at <= bit 41, one below the
      // sign bit; (2^24-1)*2^18 + 75264 = 2^42 - 186880 < 2^42, so the
      // 43-bit add can never wrap - no saturation logic exists or is needed.
      lsh         = int'(acc_shift);
      acc_inframe = M2_FRAME_WIDTH'(smant) <<< lsh;
    end else begin
      // Right shift: floor-truncation at 25-fractional-bit resolution.
      // Clamps at 25 for the same reason as the MXFP4 engine: smant is 25
      // bits, so any arithmetic right shift >= 25 already yields pure sign
      // bits and any drop mask >= 25 bits already covers the whole mantissa.
      rsh         = (-int'(acc_shift) > 25) ? 25 : -int'(acc_shift);
      acc_inframe = M2_FRAME_WIDTH'(smant) >>> rsh;
      if (-int'(acc_shift) > M2_REMAIN_BITS) begin
        dropped   = (-int'(acc_shift) - M2_REMAIN_BITS > 25)
                  ? 25 : (-int'(acc_shift) - M2_REMAIN_BITS);
        remaining = M2_REMAIN_BITS'(smant >>> dropped);
        drop_mask = (26'd1 << dropped) - 26'd1;
        back1_acc_sticky_comb = |(smant & drop_mask[24:0]);
        // SoP==0 bypass: with accumulator bits already dropped, round-
        // tripping would lose acc precision through the sticky path -
        // return it verbatim instead (exact).
        if (sop_q == '0) back1_is_acc_comb = 1'b1;
      end else begin
        rem_wide  = 50'(smant) <<< (M2_REMAIN_BITS + int'(acc_shift));
        remaining = rem_wide[M2_REMAIN_BITS-1:0];
      end
    end

    frame43 = M2_FRAME_WIDTH'(sop_q) + acc_inframe;

    // m2_find_lead's sticky-negation condition: a nonzero positive residue
    // was floor-truncated below this word.
    back1_neg_adj_comb = (dropped != 0) && (smant != '0) && back1_acc_sticky_comb;

    back1_word_comb = {frame43, remaining};
  end

  // synthesis translate_off
  // Safety net for the knife-edge no-overflow proof: recompute the frame sum
  // 2 bits wider and confirm the 43-bit result is identical.
  logic signed [M2_FRAME_WIDTH+1:0] frame_chk;
  always_comb begin
    frame_chk = (M2_FRAME_WIDTH+2)'(sop_q) + (M2_FRAME_WIDTH+2)'(acc_inframe);
    if (sop_valid_q && !back1_is_acc_comb)
      assert (frame_chk == (M2_FRAME_WIDTH+2)'(frame43)) else
        $error("mxdotp_m2xfp4_fused_engine: 43-bit frame overflow - violates the sizing proof");
  end
  // synthesis translate_on

  //----------------------------------------------------------------------------
  // BACK2: sign/magnitude (with the sticky-negation adjust) + leading-one
  // scan on the 68-bit extended word (mxdotp_pkg.sv's m2_find_lead).
  //----------------------------------------------------------------------------

  always_comb begin
    back2_lead_comb = m2_find_lead(sum_q, neg_adj_q2);
  end

  //----------------------------------------------------------------------------
  // BACK3: mantissa extraction + sticky + round + exponent clamp
  // (mxdotp_pkg.sv's m2_finalize - the scale re-enters here, on the exponent
  // only), or the verbatim accumulator bypass.
  //----------------------------------------------------------------------------

  always_comb begin
    back3_result_comb = is_acc_q3 ? old_acc_q3
                                  : m2_finalize(lead_q, acc_sticky_q3, sexp_q3);
  end

endmodule
