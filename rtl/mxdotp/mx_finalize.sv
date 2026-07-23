//==============================================================================
// File    : mx_finalize.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   BACK3 of every sliding-accumulator frame: mantissa extraction from the
//   located leading one, round/sticky, RNE, the all-ones-fraction carry fix,
//   and the FP32 exponent clamp. The scale re-enters HERE, on the exponent
//   only, never on the wide datapath.
//
//   Single implementation formerly duplicated as mxdotp_pkg.sv's fp4_finalize /
//   fp8_finalize / m2_finalize / mxf_finalize. Those four were semantically
//   identical; the only textual difference was that FP4 and MXFINAL spelled
//   their anchor as a bare literal 2 where FP8 and M2XFP4 used their named
//   <FMT>_FRAME_ANCHOR constant. Phase A.2 named the two missing anchors, which
//   is what made this collapse a pure rename rather than a judgement call.
//
//   Parameters, per format:
//     W       = <FMT>_LZC_WIDTH     (63 / 120 / 68 / 74)
//     REMAIN  = <FMT>_REMAIN_BITS   (25 / 25  / 25 / 36)
//     ANCHOR  = <FMT>_FRAME_ANCHOR  ( 2 / 32  /  6 /  2)
//
//   Output convention (project-wide, matches all four golden models): subnormal
//   RESULTS flush to +0; overflow clamps to signed max finite (0x7F7FFFFF); no
//   Inf/NaN is ever emitted. That is Known Limitation #3, unchanged here.
//
// A.1 SCOPE NOTE: verbatim port of the package function body. No arithmetic,
//   rounding, or clamping behaviour is altered.
//==============================================================================

module mx_finalize #(
  parameter int W      = 63,    // extended-word width = <FMT>_LZC_WIDTH
  parameter int REMAIN = 25,    // <FMT>_REMAIN_BITS
  parameter int ANCHOR = 2      // <FMT>_FRAME_ANCHOR
) (
  input  logic                sign_i,
  input  logic signed [7:0]   lead_pos_i,
  input  logic [W-1:0]        mag_i,
  input  logic                acc_sticky_i,
  input  mxdotp_pkg::mx_exp_t scale_exp_i,
  output logic [31:0]         result_o
);

  import mxdotp_pkg::mx_exp_t;

  int          lead_pos;
  mx_exp_t     unbiased_exp;
  logic [22:0] mant_out;
  logic        round_bit, sticky_bit;
  logic [23:0] mant_ext;
  logic [7:0]  exp_out;
  int          i;

  always_comb begin
    // Defaults: every intermediate is assigned on every path, so the
    // lead_pos == -1 early-out below cannot infer a latch.
    unbiased_exp = '0;
    mant_out     = '0;
    round_bit    = 1'b0;
    sticky_bit   = acc_sticky_i;
    mant_ext     = '0;
    exp_out      = 8'd0;

    lead_pos = int'(lead_pos_i);
    if (lead_pos == -1) begin
      result_o = 32'd0;
    end else begin
      unbiased_exp = mx_exp_t'(lead_pos) - mx_exp_t'(REMAIN + ANCHOR)
                   + scale_exp_i;

      for (i = 0; i < 23; i++) begin
        if (lead_pos - 1 - i >= 0) mant_out[22-i] = mag_i[lead_pos-1-i];
      end
      if (lead_pos - 24 >= 0) round_bit = mag_i[lead_pos-24];
      // Fixed-bound loop, data-dependent guard inside - same synthesizable
      // pattern the package functions used (see their comment for the Vivado
      // history behind that shape).
      for (i = 0; i < W; i++) begin
        if (i < lead_pos-24 && mag_i[i]) sticky_bit = 1'b1;
      end

      mant_ext = {1'b0, mant_out};
      if (round_bit && (sticky_bit || mant_out[0])) begin  // round-to-nearest-even
        mant_ext = mant_ext + 24'd1;
      end

      if (mant_ext[23]) begin
        // Carry out of the 23-bit fraction: only reachable from an
        // all-ones fraction, so the renormalized fraction is exactly 0.
        unbiased_exp = unbiased_exp + mx_exp_t'(1);
        mant_out     = '0;
      end else begin
        mant_out = mant_ext[22:0];
      end

      if ((unbiased_exp + mx_exp_t'(127)) <= mx_exp_t'(0)) begin
        exp_out = 8'd0; mant_out = '0;
      end else if ((unbiased_exp + mx_exp_t'(127)) >= mx_exp_t'(255)) begin
        exp_out = 8'hFE; mant_out = 23'h7FFFFF;
      end else begin
        exp_out = 8'(unbiased_exp + mx_exp_t'(127));
      end

      result_o = {sign_i, exp_out, mant_out};
    end
  end

endmodule
