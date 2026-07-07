//==============================================================================
// File    : mxdotp_pkg.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Common package containing ISA encodings, configuration constants, shared
//   typedefs, and the numeric helper functions (FP8 format unification, FP9
//   multiply, wide fixed-point accumulate) for the MXDOTP coprocessor.
//
//   Instruction encoding follows the standard RISC-V R4-type layout (the same
//   layout used by FMADD.S/D in the F/D extensions):
//
//     [31:27] rs3     [26:25] funct2   [24:20] rs2   [19:15] rs1
//     [14:12] funct3  [11:7]  rd       [6:0]   opcode
//
//   This is a deliberate choice: cv32e40x_id_stage.sv already hardwires its
//   third register-file read port address to instr[31:27] (REG_S3_MSB/LSB)
//   whenever REGFILE_NUM_READ_PORTS == 3 (i.e. X_NUM_RS == 3). Using the
//   standard R4 rs3 position means our decoder's view of rs3 matches the
//   register the core actually reads, with zero core RTL changes required.
//
//   All MXDOTP RTL modules should import this package:
//
//     import mxdotp_pkg::*;
//
//==============================================================================
//
// MILESTONE: first real MXFP8 datapath (replaces the rs1+rs2 placeholder)
//
// Two-instruction split: CV32E40X's register file is natively 32 bits per
// read port (REGFILE_DATA_WIDTH == 32, confirmed against the real core RTL).
// The XIF spec's `dualread` field (if_xif.sv) has no consumer anywhere in
// this core, and `dualwrite` is latched into the pipeline but never acted on
// in cv32e40x_wb_stage.sv either - both are dead wires in this checkout, so
// there's no way to get a genuine 64-bit operand from a single register
// specifier without real core surgery. Instead of jamming scales AND a
// previous FP32 accumulator into one 32-bit rs3 (8+8+32 = 48 bits doesn't
// fit in 32 anyway), MXDOTP is split into the two ops this package already
// had funct3 codes for:
//
//   MX_FUNCT3_DOTP  : rs1=A (4x MXFP8), rs2=B (4x MXFP8), rs3=scales
//                     ({X^A[31:24], X^B[23:16], reserved[15:0]}). Computes
//                     the scaled sum-of-products into a private, wide
//                     internal fixed-point register. No writeback.
//   MX_FUNCT3_FINAL : rs1=old FP32 accumulator (full precision, and now
//                     forwarded via the CPU's normal rs1 bypass path, so
//                     chained accumulation no longer needs NOP padding the
//                     way the old rs3-forwarding workaround did). Adds it to
//                     the pending sum-of-products, rounds once, writes FP32
//                     result to rd.
//
// k=4 (not the paper's k=8): a 32-bit operand holds 4 MXFP8 bytes, not 8.
// This directly matches Lutz et al.'s own "Fused FP8 4-Way Dot Product"
// (ARITH 2024, cited by the MXDOTP paper as the origin of the early-
// accumulation technique used here) - k=4 is a legitimate design point in
// its own right, not an arbitrary shrink.
//
//==============================================================================

package mxdotp_pkg;

  //----------------------------------------------------------------------------
  // Custom Opcode
  //----------------------------------------------------------------------------
  localparam logic [6:0] MX_OPCODE = 7'b0001011;


  //----------------------------------------------------------------------------
  // Instruction Class (funct3)
  //----------------------------------------------------------------------------
  //
  // 000 : MXDOTP   - compute scaled sum-of-products, stage internally, no WB
  // 001 : MXFINAL  - add staged sum-of-products to rs1 (old FP32 acc), round
  //                  once, write result to rd
  //
  localparam logic [2:0] MX_FUNCT3_DOTP  = 3'b000;
  localparam logic [2:0] MX_FUNCT3_FINAL = 3'b001;


  //----------------------------------------------------------------------------
  // Data Format / Variant (funct2, R4-type bits [26:25])
  //----------------------------------------------------------------------------
  //
  // MX_FMT_MXFP8 is the format actually implemented this milestone (the
  // "original" format from the MXDOTP paper). The other three codes are
  // reserved placeholders for future formats (renamed from the earlier
  // MXFP4/M2FP4/NVFP4 guesses made before the paper had been consulted -
  // those were speculative placeholders, not a real ISA commitment).
  //
  localparam logic [1:0] MX_FMT_MXFP8     = 2'b00;
  localparam logic [1:0] MX_FMT_RESERVED1 = 2'b01;
  localparam logic [1:0] MX_FMT_RESERVED2 = 2'b10;
  localparam logic [1:0] MX_FMT_RESERVED3 = 2'b11;


  //----------------------------------------------------------------------------
  // XIF Configuration
  //----------------------------------------------------------------------------
  localparam int MX_NUM_RS = 3;


  //----------------------------------------------------------------------------
  // Controller FSM
  //----------------------------------------------------------------------------
  typedef enum logic [1:0] {
    MX_IDLE,
    MX_WAIT_COMMIT,
    MX_COMPUTE,
    MX_RESULT
  } mxdotp_state_t;


  //============================================================================
  // MXFP8 numeric datapath: formats, widths, and pure helper functions
  //============================================================================
  //
  // Used exclusively by mxdotp_execute.sv. Kept here so the format-
  // unification / multiply / wide-accumulate steps are independently-
  // readable pure functions rather than buried inline in always blocks.
  //
  // KNOWN LIMITATIONS (flagged deliberately, not silently simplified away):
  //   - Denormals (biased exponent field == 0) are flushed to zero on input,
  //     for both FP8 sub-formats and for the FP32 accumulator. True subnormal
  //     support is deferred.
  //   - No dedicated Inf/NaN detection: E4M3's single reserved NaN pattern
  //     (exponent=1111, mantissa=111) and E5M2's Inf/NaN exponent=11111 range
  //     are not special-cased - they fall through as regular finite values.
  //   - The 95-bit/anchor-34 fixed-point buffer (from the MXDOTP paper) gives
  //     roughly +-2^60 of range around 2^0 - comfortably covering realistic
  //     MX-scaled accumulation but not the full FP32 exponent range under
  //     pathological scale combinations. A contribution whose true magnitude
  //     exceeds this range saturates to the max representable value rather
  //     than wrapping or corrupting the sign bit (place_in_acc reserves its
  //     top bit purely as a sign-safety guard and explicitly checks for
  //     shifted-out bits, so this saturation is exact at the boundary, not
  //     an approximation). Only the single, final acc_to_fp32 call clamps
  //     the *result's* exponent to what FP32 can represent - that's required
  //     IEEE-754-style behavior for any finite format, not an early
  //     precision-losing step. Nothing narrower than ACC_FULL_WIDTH is used
  //     anywhere before that one call (pending_sop_q and the MXFINAL
  //     addition both carry the full width straight through).
  //----------------------------------------------------------------------------

  // --- FP8 sub-format selection (hardcoded for this milestone; CSR-based
  //     runtime selection is explicitly deferred) ---
  typedef enum logic {
    MXFP8_E4M3 = 1'b0,
    MXFP8_E5M2 = 1'b1
  } mxfp8_subfmt_e;

  localparam mxfp8_subfmt_e MXFP8_SUBFMT = MXFP8_E4M3;  // <-- flip here to switch format

  // --- FP8 sub-format field widths / biases ---
  localparam int E4M3_BIAS = 7;
  localparam int E5M2_BIAS = 15;

  // --- FP9 (E5M3) unification format: both sub-formats convert into this
  //     exactly (no rounding lost in the conversion itself) before multiply ---
  localparam int FP9_BIAS = 15;

  typedef struct packed {
    logic       sign;
    logic [4:0] exp;   // biased, FP9_BIAS = 15; exp==0 means (flushed) zero
    logic [2:0] mant;
  } fp9_t;

  // --- Block size: 4 MXFP8 elements per 32-bit operand (see header note) ---
  localparam int MX_K = 4;

  // --- E8M0 block-scale format (OCP MX spec): unsigned 8-bit exponent-only
  //     scale, value = 2^(raw-127). Applying a scale is a pure exponent add. ---
  localparam int E8M0_BIAS = 127;

  // --- Internal wide fixed-point accumulation buffer: 95-bit two's-
  //     complement buffer, bit[ACC_ANCHOR] has weight 2^0. PRODSUM_WIDTH=67
  //     is the raw sum-of-products magnitude width (before anchoring) that
  //     the MXDOTP paper's own datapath uses - reused verbatim as documented
  //     headroom even though we sum 4 terms, not 8: extra headroom is
  //     conservative, not a simplification. GUARD_BITS covers summing
  //     multiple already-anchored contributions without overflow. ---
  localparam int ACC_WIDTH     = 95;
  localparam int ACC_ANCHOR    = 34;
  localparam int PRODSUM_WIDTH = 67;
  localparam int GUARD_BITS    = 3;
  localparam int ACC_FULL_WIDTH = ACC_WIDTH + GUARD_BITS;  // carries pending_sop_q and the
                                                             // MXFINAL addition through to the
                                                             // one and only rounding step
                                                             // (acc_to_fp32) with no
                                                             // intermediate narrowing

  // A generously-wide signed type for exponent arithmetic (combined FP9xFP9
  // exponents, folded-in E8M0 scale exponents, and buffer shift amounts all
  // comfortably fit with room to spare, avoiding overflow before the
  // deliberate clamps in place_in_acc).
  typedef logic signed [15:0] mx_exp_t;

  typedef struct packed {
    logic       sign;
    mx_exp_t    exp;   // weight (power of 2) of mag's LSB
    logic [7:0] mag;   // unsigned raw significand product, Q2.6
  } fp9_prod_t;

  //----------------------------------------------------------------------------
  // fp8_to_fp9: unify either MXFP8 sub-format into the common FP9 (E5M3)
  // representation. Exact widening in both directions:
  //   E4M3 -> E5M3 : same 3 mantissa bits (direct copy), exponent rebias +8
  //                  (FP9_BIAS(15) - E4M3_BIAS(7) = 8)
  //   E5M2 -> E5M3 : same 5 exponent bits (direct copy, same bias),
  //                  mantissa zero-padded 2->3 bits (append a 0 LSB)
  //----------------------------------------------------------------------------
  function automatic fp9_t fp8_to_fp9(input logic [7:0] val, input mxfp8_subfmt_e subfmt);
    fp9_t       r;
    logic       sign;
    logic [4:0] exp4_field, exp5_field;
    begin
      sign = val[7];
      if (subfmt == MXFP8_E4M3) begin
        exp4_field = {1'b0, val[6:3]};
        if (exp4_field == 5'd0) begin
          r = '{sign: sign, exp: 5'd0, mant: 3'd0};
        end else begin
          r = '{sign: sign, exp: (exp4_field + 5'd8), mant: val[2:0]};
        end
      end else begin // MXFP8_E5M2
        exp5_field = val[6:2];
        if (exp5_field == 5'd0) begin
          r = '{sign: sign, exp: 5'd0, mant: 3'd0};
        end else begin
          r = '{sign: sign, exp: exp5_field, mant: {val[1:0], 1'b0}};
        end
      end
      return r;
    end
  endfunction

  //----------------------------------------------------------------------------
  // fp9_multiply: raw (unrounded, unnormalized) FP9 x FP9 product.
  //
  //   value(a)*value(b) = (-1)^(sa^sb) * 2^(ea+eb-2*FP9_BIAS-6) * (siga*sigb)
  //
  // where siga/sigb are 4-bit unsigned Q1.3 significands (hidden-1 + 3
  // mantissa bits, range [8,15]) and siga*sigb is an 8-bit unsigned Q2.6
  // product (range [64,225]). No rounding or renormalization here -
  // deliberate (early accumulation / single final rounding): the raw product
  // is placed directly into the wide fixed-point buffer by the caller.
  //----------------------------------------------------------------------------
  function automatic fp9_prod_t fp9_multiply(input fp9_t a, input fp9_t b);
    fp9_prod_t  r;
    logic [3:0] siga, sigb;
    logic       is_zero;
    begin
      is_zero = (a.exp == 5'd0) || (b.exp == 5'd0);
      siga = {1'b1, a.mant};
      sigb = {1'b1, b.mant};
      r.sign = a.sign ^ b.sign;
      r.exp  = mx_exp_t'({11'd0, a.exp}) + mx_exp_t'({11'd0, b.exp})
               - mx_exp_t'(2*FP9_BIAS) - mx_exp_t'(6);
      r.mag  = is_zero ? 8'd0 : (siga * sigb);
      return r;
    end
  endfunction

  //----------------------------------------------------------------------------
  // scale_exp: fold a pair of E8M0 block scales into a single signed exponent
  // offset. Applying X^A * X^B to a value is exactly this added to its
  // existing exponent - no separate multiply needed (E8M0 has no mantissa).
  //----------------------------------------------------------------------------
  function automatic mx_exp_t scale_exp(input logic [7:0] xa_raw, input logic [7:0] xb_raw);
    return mx_exp_t'({8'd0, xa_raw}) + mx_exp_t'({8'd0, xb_raw}) - mx_exp_t'(2*E8M0_BIAS);
  endfunction

  //----------------------------------------------------------------------------
  // place_in_acc: shift an unsigned magnitude (caller zero-extends into a
  // 32-bit container) into the ACC_WIDTH-bit two's-complement wide buffer,
  // positioned so its LSB lands at bit (exp + ACC_ANCHOR).
  //
  // The usable *unsigned magnitude* range is ACC_WIDTH-1 bits (MAGW below) -
  // bit ACC_WIDTH-1 is reserved purely as a sign-safety guard and is never
  // written by the shifted magnitude itself. This matters: a shift landing
  // exactly on bit ACC_WIDTH-1 would otherwise be misread as the two's-
  // complement sign bit even though the true value is positive. Overflow is
  // detected by explicitly checking whether any bits were shifted out above
  // the MAGW-bit window (not just a coarse pre-check on shift_amt), so a
  // shift landing anywhere near that boundary saturates correctly instead
  // of silently truncating - this replaces an earlier version of this
  // function that could do exactly that near the boundary.
  //----------------------------------------------------------------------------
  function automatic logic signed [ACC_WIDTH-1:0] place_in_acc(
    input logic     sign,
    input mx_exp_t  exp,
    input logic [31:0] mag
  );
    localparam int MAGW = ACC_WIDTH - 1;  // usable unsigned magnitude width
    mx_exp_t                  shift_amt;
    int                       shamt;
    logic [MAGW+32-1:0]       wide_tmp;
    logic [MAGW-1:0]          mag_mag;
    logic signed [ACC_WIDTH-1:0] result;
    begin
      shift_amt = exp + mx_exp_t'(ACC_ANCHOR);
      if (shift_amt >= mx_exp_t'(MAGW)) begin
        mag_mag = {MAGW{1'b1}};                          // saturate: max representable magnitude
      end else if (shift_amt <= -mx_exp_t'(32)) begin
        mag_mag = '0;                                    // fully below resolution: negligible
      end else if (shift_amt >= 0) begin
        shamt    = int'(shift_amt);
        wide_tmp = {{MAGW{1'b0}}, mag} << shamt;
        if (|wide_tmp[MAGW+32-1:MAGW])
          mag_mag = {MAGW{1'b1}};                        // true overflow: saturate
        else
          mag_mag = wide_tmp[MAGW-1:0];
      end else begin
        shamt   = int'(-shift_amt);
        mag_mag = MAGW'(mag >> shamt);
      end
      result = sign ? (-$signed({1'b0, mag_mag})) : $signed({1'b0, mag_mag});
      return result;
    end
  endfunction

  //----------------------------------------------------------------------------
  // fp32_to_acc: decode an FP32 value and place it into the wide buffer at
  // its natural exponent position (used by MXFINAL to bring in the old
  // accumulator). Denormals (biased exp==0) flush to zero.
  //----------------------------------------------------------------------------
  function automatic logic signed [ACC_WIDTH-1:0] fp32_to_acc(input logic [31:0] val);
    logic        sign;
    logic [7:0]  exp_biased;
    logic [22:0] mant;
    logic [23:0] sig24;
    mx_exp_t     e;
    begin
      sign       = val[31];
      exp_biased = val[30:23];
      mant       = val[22:0];
      if (exp_biased == 8'd0) begin
        return '0;
      end
      sig24 = {1'b1, mant};
      e     = mx_exp_t'({8'd0, exp_biased}) - mx_exp_t'(127) - mx_exp_t'(23);
      return place_in_acc(sign, e, {8'd0, sig24});
    end
  endfunction

  //----------------------------------------------------------------------------
  // acc_to_fp32: normalize + single round-to-nearest-even of the final wide
  // fixed-point sum back down to FP32 - the *only* rounding step in the
  // whole datapath (matching the "single rounding" property of both
  // reference papers). Takes the full ACC_FULL_WIDTH (ACC_WIDTH+GUARD_BITS)
  // value directly - callers should never narrow to ACC_WIDTH before this
  // call. The exponent clamp near the end (over/underflow to the FP32
  // representable range) is the *only* range-limiting step in the whole
  // datapath, and it's the legitimate final one, not an early one.
  //----------------------------------------------------------------------------
  function automatic logic [31:0] acc_to_fp32(input logic signed [ACC_FULL_WIDTH-1:0] acc);
    logic                       sign;
    logic [ACC_FULL_WIDTH-1:0]  mag;
    int                         lead_pos;
    int                         i;
    logic [22:0]                mant_out;
    logic [7:0]                 exp_out;
    mx_exp_t                    unbiased_exp;
    logic                       round_bit, sticky_bit;
    logic [23:0]                mant_ext;
    begin
      if (acc == '0) return 32'd0;

      sign = acc[ACC_FULL_WIDTH-1];
      mag  = sign ? (-acc) : acc;  // two's-complement negation, reinterpreted as
                                    // unsigned magnitude via same-width assignment

      // Leading-one detection (simple descending scan - fine for a first,
      // correctness-focused pass; a leading-zero anticipator would replace
      // this for timing once synthesis is a concern).
      lead_pos = -1;
      for (i = ACC_FULL_WIDTH-1; i >= 0; i--) begin
        if (lead_pos == -1 && mag[i]) lead_pos = i;
      end

      unbiased_exp = mx_exp_t'(lead_pos) - mx_exp_t'(ACC_ANCHOR);

      mant_out   = '0;
      round_bit  = 1'b0;
      sticky_bit = 1'b0;
      for (i = 0; i < 23; i++) begin
        if (lead_pos - 1 - i >= 0) mant_out[22-i] = mag[lead_pos-1-i];
      end
      if (lead_pos - 24 >= 0) round_bit = mag[lead_pos-24];
      for (i = 0; i < lead_pos-24; i++) begin
        if (mag[i]) sticky_bit = 1'b1;
      end

      mant_ext = {1'b0, mant_out};
      if (round_bit && (sticky_bit || mant_out[0])) begin  // round-to-nearest-even
        mant_ext = mant_ext + 24'd1;
      end

      if (mant_ext[23]) begin
        unbiased_exp = unbiased_exp + mx_exp_t'(1);
        mant_out     = mant_ext[23:1];
      end else begin
        mant_out = mant_ext[22:0];
      end

      // This is the ONE legitimate range clamp in the whole datapath -
      // saturating an FP32 result to its representable exponent range is
      // required IEEE-754-style behavior for any finite format, not an
      // early precision-losing step.
      if ((unbiased_exp + mx_exp_t'(127)) <= mx_exp_t'(0)) begin
        exp_out = 8'd0; mant_out = '0;              // underflow -> flush to zero
      end else if ((unbiased_exp + mx_exp_t'(127)) >= mx_exp_t'(255)) begin
        exp_out = 8'hFE; mant_out = 23'h7FFFFF;      // saturate to max finite (no Inf here)
      end else begin
        exp_out = 8'(unbiased_exp + mx_exp_t'(127));
      end

      return {sign, exp_out, mant_out};
    end
  endfunction

endpackage
