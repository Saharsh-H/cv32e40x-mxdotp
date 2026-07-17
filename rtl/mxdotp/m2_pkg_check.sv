//==============================================================================
// _m2_pkg_check.sv  -- VERIFICATION AID, NOT SHIPPED RTL.
//
// Purpose: prove mxdotp_pkg.sv's new M2XFP4 frame section (constants +
// m2_x_mag_bits / m2_x_to_code / m2_plain_to_code / m2_find_lead / m2_finalize)
// reproduces m2_golden.py bit-for-bit, BEFORE mxdotp_m2xfp4_fused_engine.sv
// exists. It is the golden model's datapath written combinationally against
// the package, with no pipeline registers and no handshake - i.e. exactly the
// part the real engine will later wrap in its five-stage discipline.
//
// If this passes, step 3 (the engine) is a pipelining exercise on a datapath
// whose arithmetic is already proven, rather than new arithmetic.
//==============================================================================
module _m2_pkg_check import mxdotp_pkg::*; ();

  // ---- combinational model ---------------------------------------------------
  function automatic logic [31:0] m2_datapath(
    input logic [63:0] rs1,      // activations, 16 nibbles
    input logic [63:0] rs2,      // weights, 16 nibbles
    input logic [63:0] rs3       // {meta, scales} upper 32 / old_acc lower 32
  );
    logic [3:0]  a_nib [MX_K];
    logic [3:0]  b_nib [MX_K];
    logic [1:0]  elem_em [M2_SUBGROUPS];
    logic [1:0]  sg_em   [M2_SUBGROUPS];
    logic [7:0]  a_raw, b_raw;
    logic [31:0] old_acc;
    mx_exp_t     sexp;

    logic signed [M2_PSUM_WIDTH-1:0]      psum [M2_SUBGROUPS];
    logic signed [M2_SOP_SIGNED_WIDTH-1:0] sop;

    logic [3:0]  mag [M2_SUBGROUP_LEN];
    logic [3:0]  vmax;
    int          t;
    logic signed [M2_XCODE_WIDTH-1:0] cx;
    logic signed [CODE_WIDTH-1:0]     cw;

    // acc / frame
    logic        sd;
    logic [7:0]  E;
    logic [22:0] Mant;
    logic        is_normal;
    logic signed [24:0] smant;
    int          e_eff, acc_shift, rshift;
    logic signed [M2_FRAME_WIDTH-1:0] frame;
    logic signed [M2_LZC_WIDTH-1:0]   word;
    logic signed [24:0]               acc_top;
    logic [M2_REMAIN_BITS-1:0]        remaining;
    logic        acc_sticky, neg_adjust, bypass;
    m2_lead_result_t lr;
    int i, j;

    begin
      for (i = 0; i < MX_K; i++) begin
        a_nib[i] = rs1[4*i +: 4];
        b_nib[i] = rs2[4*i +: 4];
      end
      old_acc = rs3[31:0];
      a_raw   = rs3[39:32];
      b_raw   = rs3[47:40];
      for (j = 0; j < M2_SUBGROUPS; j++) begin
        elem_em[j] = rs3[M2_ELEM_EM_LSB + 2*j +: 2];
        sg_em[j]   = rs3[M2_SG_EM_LSB   + 2*j +: 2];
      end
      sexp = scale_exp(a_raw, b_raw);

      // ---- FRONT: two 8-term subtrees, each scaled by its own (1 + k/4) ----
      sop = '0;
      for (j = 0; j < M2_SUBGROUPS; j++) begin
        // top-1: |FP4 code|, ties -> lowest index (paper Alg.1 lines 7-10).
        // E2M1 magnitude codes are monotonic, so this is a plain compare.
        for (i = 0; i < M2_SUBGROUP_LEN; i++) begin
          cw  = fp4_to_code(a_nib[j*M2_SUBGROUP_LEN + i]);
          mag[i] = 4'(cw[CODE_WIDTH-1] ? -cw : cw);
        end
        vmax = 4'd0;
        for (i = 0; i < M2_SUBGROUP_LEN; i++)
          if (mag[i] > vmax) vmax = mag[i];
        t = -1;
        for (i = M2_SUBGROUP_LEN-1; i >= 0; i--)
          if (mag[i] == vmax) t = i;      // last write wins -> lowest index

        psum[j] = '0;
        for (i = 0; i < M2_SUBGROUP_LEN; i++) begin
          cw = fp4_to_code(b_nib[j*M2_SUBGROUP_LEN + i]);
          cx = (i == t) ? m2_x_to_code  (a_nib[j*M2_SUBGROUP_LEN + i], elem_em[j])
                        : m2_plain_to_code(a_nib[j*M2_SUBGROUP_LEN + i]);
          psum[j] = psum[j] + M2_PSUM_WIDTH'(cw * cx);
        end
        // Sg-EM: (1 + k/4)*P == P*(4+k) in 1/64 units == shift-and-add, no mult
        sop = sop + M2_SOP_SIGNED_WIDTH'(psum[j]) * M2_SOP_SIGNED_WIDTH'(4 + sg_em[j]);
      end
      assert (sop <= 75264 && sop >= -75264)
        else $error("_m2_pkg_check: SoP sizing proof violated: %0d", sop);

      // ---- BACK1: the accumulator slide ----
      sd        = old_acc[31];
      E         = old_acc[30:23];
      Mant      = old_acc[22:0];
      is_normal = (E != 8'd0);
      smant     = sd ? -signed'({1'b0, is_normal, Mant}) : signed'({1'b0, is_normal, Mant});
      e_eff     = int'(E) + (is_normal ? 0 : 1);
      acc_shift = e_eff - M2_ACC_SHIFT_CONST - int'(sexp);

      bypass     = 1'b0;
      acc_sticky = 1'b0;
      rshift     = 0;
      word       = '0;

      if (acc_shift > M2_MAX_ACC_SHIFT) begin
        bypass = 1'b1;
      end else if (acc_shift >= 0) begin
        frame = M2_FRAME_WIDTH'(sop) + M2_FRAME_WIDTH'(smant <<< acc_shift);
        word  = M2_LZC_WIDTH'(frame) <<< M2_REMAIN_BITS;
      end else begin
        rshift  = -acc_shift;
        acc_top = smant >>> rshift;
        if (rshift > M2_REMAIN_BITS) begin
          remaining  = M2_REMAIN_BITS'(smant >>> (rshift - M2_REMAIN_BITS));
          acc_sticky = ((smant & ((25'sd1 <<< (rshift - M2_REMAIN_BITS)) - 25'sd1)) != 0);
          if (sop == 0) bypass = 1'b1;
        end else begin
          remaining = M2_REMAIN_BITS'(smant <<< (M2_REMAIN_BITS - rshift));
        end
        frame = M2_FRAME_WIDTH'(sop) + M2_FRAME_WIDTH'(acc_top);
        word  = signed'({frame, remaining});
      end

      if (bypass) return old_acc;

      neg_adjust = (rshift > M2_REMAIN_BITS) && acc_sticky && (smant != 0);
      lr = m2_find_lead(word, neg_adjust);
      return m2_finalize(lr, acc_sticky, sexp);
    end
  endfunction

  // ---- vector-driven check ---------------------------------------------------
  localparam int MAXV = 40000;
  logic [223:0] vec [MAXV];      // {rs1[64], rs2[64], rs3[64], expected[32]} = 56 hex
  int n, pass, fails;
  logic [63:0] rs1, rs2, rs3;
  logic [31:0] expd, got;

  initial begin
    string path;
    if (!$value$plusargs("VEC=%s", path)) path = "m2_unit_vectors.hex";
    for (int i = 0; i < MAXV; i++) vec[i] = '0;
    $readmemh(path, vec);

    n = 0; pass = 0; fails = 0;
    for (int i = 0; i < MAXV; i++) begin
      if (vec[i] === '0) continue;
      rs1  = vec[i][223:160];
      rs2  = vec[i][159:96];
      rs3  = vec[i][95:32];
      expd = vec[i][31:0];
      n++;
      got = m2_datapath(rs1, rs2, rs3);
      if (got === expd) pass++;
      else begin
        fails++;
        if (fails <= 10)
          $display("FAIL[%0d]: rs1=%016h rs2=%016h rs3=%016h got=%08h exp=%08h",
                   i, rs1, rs2, rs3, got, expd);
      end
    end
    $display("===============================");
    if (fails == 0 && n > 0)
      $display("PASS: %0d/%0d vectors bit-exact vs golden model", pass, n);
    else
      $display("FAIL: %0d/%0d (%0d mismatches)", pass, n, fails);
    $display("===============================");
    if (fails != 0 || n == 0) $fatal(1, "m2 pkg check failed");
    $finish;
  end
endmodule
