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
  // FRONT-END. Narrow-multiplier decomposition (see mxdotp_pkg.sv's
  // "NARROW-MULTIPLIER DECOMPOSITION" header for the derivation and the
  // synthesis timing data that motivated it - v1 of this engine typed every
  // lane's code at 7 bits uniformly; this version types all 16 lanes at
  // CODE_WIDTH=5 (identical to mxdotp_fused_engine.sv's own per-lane width)
  // and adds back ONE small, tree-gated correction term per subgroup:
  //
  //   psum[sj] = baseline_psum[sj] (8 lanes x 5x5 multiply, tree-INDEPENDENT,
  //              same structure/speed as the plain MXFP4 engine's own FRONT)
  //            + correction[sj]    (ONE 5x5 multiply, gated behind the top-1
  //              tree via an 8:1 select on b_code and delta_code)
  //
  // Phase B1: baseline and correction are no longer merged into an explicit
  // psum signal on the real datapath - they're kept separate through the
  // Sg-EM scaling and only merged in one final add, since baseline is
  // tree-independent (early) and correction is tree-dependent (late); see
  // the (e) step below for the reorder and its timing rationale.
  //
  // Six steps, all combinational, all inside one stage:
  //   (a) unpack nibbles + metadata
  //   (b) per subgroup: re-derive the top-1 activation (max |FP4 code|, ties
  //       -> lowest index) as a one-hot - tournament tree, unchanged from the
  //       tree-balanced rewrite (see module header)
  //   (c) baseline per-lane products (ALL 16 lanes, tree-independent) +
  //       balanced 8-term reduction, per subgroup
  //   (d) delta-code lookup for all 8 lanes per subgroup (tree-independent -
  //       only depends on that lane's nibble and the subgroup's Elem-EM,
  //       both already registered), then ONE 8:1 select (gated by the tree's
  //       one-hot) and ONE small multiply for the correction term
  //   (e) per subgroup: baseline + correction, then apply Sg-EM (1 + k/4) as
  //       shift-and-add
  //   (f) combine the two subgroups
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
  // Balanced tournament tree (depth 3): pairwise compare-and-select carries
  // BOTH the running max magnitude and its one-hot location together, so the
  // priority-encode falls out of the same tree as the max-finding instead of
  // being a second, serially-dependent 8-deep ripple chain stacked after it -
  // using >= at every level means ties resolve toward the LOWER original
  // index, matching Alg. 1's tie-break exactly (verified: see
  // verification/m2_golden.py's directed tournament-tie-break vectors).
  logic signed [CODE_WIDTH-1:0]        a_code_raw [0:MX_K-1];
  logic [3:0]                          a_mag      [0:MX_K-1];   // |code| <= 12
  logic [M2_SUBGROUP_LEN-1:0]          top1_oh    [0:M2_SUBGROUPS-1];

  logic [3:0]                          tree_m1 [0:M2_SUBGROUPS-1][0:3];
  logic [M2_SUBGROUP_LEN-1:0]          tree_h1 [0:M2_SUBGROUPS-1][0:3];
  logic [3:0]                          tree_m2 [0:M2_SUBGROUPS-1][0:1];
  logic [M2_SUBGROUP_LEN-1:0]          tree_h2 [0:M2_SUBGROUPS-1][0:1];

  // (c) baseline: ALL 16 lanes, tree-independent, identical width/structure
  // to mxdotp_fused_engine.sv's own per-lane product (CODE_WIDTH=5 x
  // CODE_WIDTH=5 -> PROD_WIDTH=9), promoted to this engine's 1/16-unit
  // convention by a FREE (wiring-only) left-shift by 2 - not a wider
  // multiply. 4*fp4_to_code(nib) (a plain lane's code in the OLD 7-bit
  // convention) is PROVABLY always a multiple of 4 (its low 2 bits are
  // always zero - the whole reason this decomposition is exact), so
  // shifting the NARROW product left by 2 is bit-identical to widening the
  // operand first and multiplying wide.
  logic signed [CODE_WIDTH-1:0]        b_code            [0:MX_K-1];   // 2*W
  logic signed [PROD_WIDTH-1:0]        baseline_prod_1_4 [0:MX_K-1];   // 4*W*X, 1/4 units
  logic signed [M2_PROD_WIDTH-1:0]     baseline_prod_1_16[0:MX_K-1];   // <<<2, 1/16 units

  logic signed [M2_PSUM_WIDTH-1:0]     base_tree_l1 [0:M2_SUBGROUPS-1][0:3];
  logic signed [M2_PSUM_WIDTH-1:0]     base_tree_l2 [0:M2_SUBGROUPS-1][0:1];
  logic signed [M2_PSUM_WIDTH-1:0]     baseline_psum[0:M2_SUBGROUPS-1];

  // (d) correction: delta-code lookup for all 8 lanes (tree-independent -
  // only needs that lane's nibble + the subgroup's Elem-EM, both already
  // registered), then ONE 8:1 select per subgroup (gated by the tree) and
  // ONE small 5x5 multiply - replacing what was, in the previous version, a
  // full 7-bit decode+multiply on EVERY lane gated behind the tree.
  logic signed [M2_DELTA_WIDTH-1:0]    delta_code   [0:MX_K-1];
  logic signed [M2_DELTA_WIDTH-1:0]    delta_sel    [0:M2_SUBGROUPS-1];
  logic signed [CODE_WIDTH-1:0]        bcode_sel    [0:M2_SUBGROUPS-1];
  logic signed [M2_CORR_PROD_WIDTH-1:0] correction  [0:M2_SUBGROUPS-1];

  logic signed [M2_SOP_SIGNED_WIDTH-1:0] base_scaled [0:M2_SUBGROUPS-1];
  logic signed [M2_SOP_SIGNED_WIDTH-1:0] corr_scaled [0:M2_SUBGROUPS-1];
  logic signed [M2_SOP_SIGNED_WIDTH-1:0] base_total;
  logic signed [M2_SOP_SIGNED_WIDTH-1:0] corr_total;
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
      // Magnitude for the tree comes DIRECTLY from fp4_mag - not by negating
      // a_code_raw a second time. fp4_to_code already computes this exact
      // value internally (a plain case-statement LUT) before ever applying
      // the sign; undoing that sign afterward would be a real, avoidable
      // negate sitting on the tree's own input path - see mxdotp_pkg.sv's
      // fp4_mag for why this is a genuine redundancy, not a style choice.
      a_mag[fi]      = fp4_mag(a_nib[fi][2:0]);
    end

    // (b) per-subgroup balanced tournament: max-finding and lowest-index
    // tie-break resolved together in the same 3 levels.
    for (sj = 0; sj < M2_SUBGROUPS; sj++) begin
      for (si = 0; si < 4; si++) begin
        if (a_mag[sj*M2_SUBGROUP_LEN + 2*si] >= a_mag[sj*M2_SUBGROUP_LEN + 2*si + 1]) begin
          tree_m1[sj][si] = a_mag[sj*M2_SUBGROUP_LEN + 2*si];
          tree_h1[sj][si] = M2_SUBGROUP_LEN'(1) << (2*si);
        end else begin
          tree_m1[sj][si] = a_mag[sj*M2_SUBGROUP_LEN + 2*si + 1];
          tree_h1[sj][si] = M2_SUBGROUP_LEN'(1) << (2*si + 1);
        end
      end
      for (si = 0; si < 2; si++) begin
        if (tree_m1[sj][2*si] >= tree_m1[sj][2*si + 1]) begin
          tree_m2[sj][si] = tree_m1[sj][2*si];
          tree_h2[sj][si] = tree_h1[sj][2*si];
        end else begin
          tree_m2[sj][si] = tree_m1[sj][2*si + 1];
          tree_h2[sj][si] = tree_h1[sj][2*si + 1];
        end
      end
      if (tree_m2[sj][0] >= tree_m2[sj][1]) top1_oh[sj] = tree_h2[sj][0];
      else                                  top1_oh[sj] = tree_h2[sj][1];
    end

    // (c) baseline: every lane, tree-independent - runs in parallel with (b).
    for (fi = 0; fi < MX_K; fi++) begin
      b_code[fi]             = fp4_to_code(b_nib[fi]);
      baseline_prod_1_4[fi]  = PROD_WIDTH'(a_code_raw[fi]) * PROD_WIDTH'(b_code[fi]);
      baseline_prod_1_16[fi] = M2_PROD_WIDTH'(baseline_prod_1_4[fi]) <<< 2;
    end
    for (sj = 0; sj < M2_SUBGROUPS; sj++) begin
      for (si = 0; si < 4; si++) begin
        fi = sj*M2_SUBGROUP_LEN + 2*si;
        base_tree_l1[sj][si] = M2_PSUM_WIDTH'(baseline_prod_1_16[fi])
                             + M2_PSUM_WIDTH'(baseline_prod_1_16[fi + 1]);
      end
      base_tree_l2[sj][0] = base_tree_l1[sj][0] + base_tree_l1[sj][1];
      base_tree_l2[sj][1] = base_tree_l1[sj][2] + base_tree_l1[sj][3];
      baseline_psum[sj]   = base_tree_l2[sj][0] + base_tree_l2[sj][1];
    end

    // (d) correction: delta lookup for all 8 lanes (tree-independent), then
    // ONE select + ONE small multiply per subgroup, gated by the tree.
    //
    // Phase B1: the multiply below is replaced by a shift-select. delta_sel
    // is exhaustively proven (see mxdotp_pkg.sv's m2_delta_mag derivation:
    // checked over all 8 FP4 magnitudes x 4 meta values) to only ever be one
    // of {-8,-4,-2,-1,0,1,2,4,8} - i.e. always a signed power of two (or
    // zero) - so "bcode_sel * delta_sel" is always exactly "shift bcode_sel
    // left by log2(|delta_sel|), then apply delta_sel's sign," never a
    // generic multiply. Verified bit-exact against the original multiply
    // exhaustively over the full operand space (32 bcode values x all 9
    // delta values, 288/288 match) before this replaced the multiply - see
    // tb_m2_correction_equiv.sv.
    for (fi = 0; fi < MX_K; fi++) begin
      delta_code[fi] = m2_delta_code(a_nib[fi], elem_em[fi / M2_SUBGROUP_LEN]);
    end
    for (sj = 0; sj < M2_SUBGROUPS; sj++) begin
      delta_sel[sj] = '0;
      bcode_sel[sj] = '0;
      for (si = 0; si < M2_SUBGROUP_LEN; si++) begin
        if (top1_oh[sj][si]) begin
          delta_sel[sj] = delta_code[sj*M2_SUBGROUP_LEN + si];
          bcode_sel[sj] = b_code[sj*M2_SUBGROUP_LEN + si];
        end
      end
      unique case (delta_sel[sj])
        5'sd0:   correction[sj] = M2_CORR_PROD_WIDTH'(0);
        5'sd1:   correction[sj] =   M2_CORR_PROD_WIDTH'(bcode_sel[sj]);
        -5'sd1:  correction[sj] = -(M2_CORR_PROD_WIDTH'(bcode_sel[sj]));
        5'sd2:   correction[sj] =   M2_CORR_PROD_WIDTH'(bcode_sel[sj]) <<< 1;
        -5'sd2:  correction[sj] = -(M2_CORR_PROD_WIDTH'(bcode_sel[sj]) <<< 1);
        5'sd4:   correction[sj] =   M2_CORR_PROD_WIDTH'(bcode_sel[sj]) <<< 2;
        -5'sd4:  correction[sj] = -(M2_CORR_PROD_WIDTH'(bcode_sel[sj]) <<< 2);
        5'sd8:   correction[sj] =   M2_CORR_PROD_WIDTH'(bcode_sel[sj]) <<< 3;
        -5'sd8:  correction[sj] = -(M2_CORR_PROD_WIDTH'(bcode_sel[sj]) <<< 3);
        default: correction[sj] = M2_CORR_PROD_WIDTH'(0);  // unreachable - delta_sel is exhaustively one of the 9 values above
      endcase
    end

    // (e) baseline + correction, then Sg-EM: P*(1 + k/4) == P*(4+k) in 1/64
    // units == (P<<2) + k1*(P<<1) + k0*P. Three shifted addends, no
    // multiplier, exact - this is the step that moves the frame anchor from
    // MXFP4's 2 to 6.
    //
    // Phase B1: reordered for timing. baseline_psum is tree-INDEPENDENT
    // (ready well before the tournament tree resolves top1_oh -> correction
    // - see (c) above), while correction is the late, tree-dependent
    // signal. The original formulation merged them into one 14-bit value
    // FIRST (psum = baseline+correction), then ran the full 3-term Sg-EM
    // shift-add on that ALREADY-MERGED 18-bit value, then summed across
    // subgroups - meaning the early-arriving baseline contribution's width
    // dragged through every subsequent add on the critical path from
    // a_mag. Real OpenROAD data (report_checks on the deployed netlist)
    // showed this ripple-add chain costing ~0.89ns of a 2.71ns critical
    // path (a_mag[36] -> sop_q[6]).
    //
    // Reorder (distributivity: (A+B)<<n == (A<<n)+(B<<n), pure algebraic
    // regrouping of the SAME terms - not new logic): keep baseline's and
    // correction's contributions separate all the way through, merging
    // them in ONE final add at the very end instead of at the start.
    // baseline's side (base_scaled, base_total) depends only on
    // tree-independent signals and is off the critical path from a_mag;
    // correction's side (corr_scaled, corr_total) is what's actually late,
    // and stays a narrower, more direct chain until the single final merge.
    //
    // Verified bit-exact against the original (psum/sg_scaled/sop_sum)
    // formulation across 300k+ directed-corner + full-range-random +
    // proven-bound-random vectors, 0 mismatches - see
    // tb_m2_adder_equiv.sv - before this replaced it. The FRONT sizing
    // proofs below are unaffected: this computes the exact same
    // mathematical quantity, just grouped differently.
    for (sj = 0; sj < M2_SUBGROUPS; sj++) begin
      base_scaled[sj] = (M2_SOP_SIGNED_WIDTH'(baseline_psum[sj]) <<< 2)
                      + (sg_em[sj][1] ? (M2_SOP_SIGNED_WIDTH'(baseline_psum[sj]) <<< 1) : M2_SOP_SIGNED_WIDTH'(0))
                      + (sg_em[sj][0] ?  M2_SOP_SIGNED_WIDTH'(baseline_psum[sj])        : M2_SOP_SIGNED_WIDTH'(0));
      corr_scaled[sj] = (M2_SOP_SIGNED_WIDTH'(correction[sj]) <<< 2)
                      + (sg_em[sj][1] ? (M2_SOP_SIGNED_WIDTH'(correction[sj]) <<< 1) : M2_SOP_SIGNED_WIDTH'(0))
                      + (sg_em[sj][0] ?  M2_SOP_SIGNED_WIDTH'(correction[sj])        : M2_SOP_SIGNED_WIDTH'(0));
    end
    base_total = base_scaled[0] + base_scaled[1];
    corr_total = corr_scaled[0] + corr_scaled[1];
    sop_sum    = base_total + corr_total;

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
  // Both bounds are on the FINAL psum VALUE, which is unchanged by this
  // decomposition (baseline+correction computes the exact same mathematical
  // quantity the old wide-multiplier design did) - so the bounds themselves
  // don't change, only how psum is built.
  //
  // psum itself is no longer a synthesized signal (Phase B1 reorder above
  // keeps baseline/correction separate on the real datapath) - recomputed
  // HERE, simulation-only, purely so this check keeps testing the exact
  // same property it always did. Zero synthesis impact: this whole block
  // is stripped for the real hardware.
  logic signed [M2_PSUM_WIDTH-1:0] psum_chk [0:M2_SUBGROUPS-1];
  always_comb begin
    for (int cj = 0; cj < M2_SUBGROUPS; cj++) psum_chk[cj] = '0;
    if (in_valid_q && (mx_format_q == MX_FMT_M2XFP4)) begin
      for (int cj = 0; cj < M2_SUBGROUPS; cj++) begin
        psum_chk[cj] = baseline_psum[cj] + M2_PSUM_WIDTH'(correction[cj]);
        assert (psum_chk[cj] <= M2_PSUM_WIDTH'(4704) && psum_chk[cj] >= -M2_PSUM_WIDTH'(4704))
          else $error("mxdotp_m2xfp4_fused_engine: subgroup %0d partial sum %0d exceeds the +/-4704 bound - violates the sizing proof",
                      cj, psum_chk[cj]);
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

    mx_acc_slide #(
    .FRAME_W         (M2_FRAME_WIDTH),
    .REMAIN          (M2_REMAIN_BITS),
    .MAX_ACC_SHIFT   (M2_MAX_ACC_SHIFT),
    .ACC_SHIFT_CONST (M2_ACC_SHIFT_CONST),
    .SOP_W           (M2_SOP_SIGNED_WIDTH)
  ) m2_acc_slide_i (
    .old_acc_i    (old_acc_q1),
    .scale_exp_i  (sexp_q1),
    .sop_i        (sop_q),
    .valid_i      (sop_valid_q),
    .word_o       (back1_word_comb),
    .acc_sticky_o (back1_acc_sticky_comb),
    .neg_adj_o    (back1_neg_adj_comb),
    .is_acc_o     (back1_is_acc_comb)
  );

  //----------------------------------------------------------------------------
  // BACK2: sign/magnitude (with the sticky-negation adjust) + leading-one
  // scan on the 68-bit extended word (mxdotp_pkg.sv's m2_find_lead).
  //----------------------------------------------------------------------------

  mx_find_lead #(.W(M2_LZC_WIDTH)) m2_find_lead_i (
    .word_i       (sum_q),
    .neg_adjust_i (neg_adj_q2),
    .sign_o       (back2_lead_comb.sign),
    .lead_pos_o   (back2_lead_comb.lead_pos),
    .mag_o        (back2_lead_comb.mag)
  );

  //----------------------------------------------------------------------------
  // BACK3: mantissa extraction + sticky + round + exponent clamp
  // (mxdotp_pkg.sv's m2_finalize - the scale re-enters here, on the exponent
  // only), or the verbatim accumulator bypass.
  //----------------------------------------------------------------------------

  logic [31:0] back3_finalized;

  mx_finalize #(
    .W      (M2_LZC_WIDTH),
    .REMAIN (M2_REMAIN_BITS),
    .ANCHOR (M2_FRAME_ANCHOR)
  ) m2_finalize_i (
    .sign_i       (lead_q.sign),
    .lead_pos_i   (lead_q.lead_pos),
    .mag_i        (lead_q.mag),
    .acc_sticky_i (acc_sticky_q3),
    .scale_exp_i  (sexp_q3),
    .result_o     (back3_finalized)
  );

  assign back3_result_comb = is_acc_q3 ? old_acc_q3 : back3_finalized;


  // synthesis translate_off
  //----------------------------------------------------------------------------
  // Reset-discipline check. The datapath in this engine carries no reset, which
  // is only sound if data is never observed on a beat that claims to be
  // meaningful before that data has been written. This assertion is what turns
  // that from an assumption into a checked property: it fires the moment an X
  // escapes on such a beat.
  //
  // Under Verilator (2-state) this is vacuous, so `make` will not exercise it;
  // it earns its keep in a 4-state simulator (Questa/VCS/Xcelium) and in
  // gate-level sim - exactly where an unreset-register bug would otherwise hide.
  //----------------------------------------------------------------------------
  always_ff @(posedge clk_i) begin
    if (rst_ni && result_valid_q) begin
      assert (!$isunknown({result_data_q, result_id_q, result_rd_q})) else
        $error("%m: X on a valid result beat - an unreset datapath register was read before it was written");
    end
  end
  // synthesis translate_on

endmodule
