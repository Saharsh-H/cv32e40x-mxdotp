//==============================================================================
// File    : mx_find_lead.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   BACK2 of every sliding-accumulator frame: two's-complement -> sign/magnitude
//   with the reference design's sticky-negation adjust, then the leading-one
//   scan on the extended word.
//
//   This is the single implementation formerly duplicated verbatim as
//   mxdotp_pkg.sv's fp4_find_lead / fp8_find_lead / m2_find_lead /
//   mxf_find_lead. Those four were byte-identical after normalizing the format
//   prefix; only W differed. Each engine instantiates this with its own W, so
//   no engine acquires a datapath bit it did not have before (MXFP4 elaborates
//   at 63, M2XFP4 at 68, MXFINAL at 74, MXFP8 at 120).
//
//   Per-format identity is carried by the INSTANCE NAME (fp8_find_lead_i,
//   m2_find_lead_i, ...), which - unlike an inlined function name - survives
//   into the synthesized netlist and therefore into timing and area reports.
//
//   neg_adjust_i must be BACK1's registered sticky-negation flag. See
//   mxdotp_pkg.sv's frame headers for the derivation of that condition.
//
// A.1 SCOPE NOTE: this is a verbatim port of the package function body. The
//   serial priority chain below is deliberately NOT restructured here - a
//   hierarchical LZC and moving the full-width negate off the critical path
//   are Phase B, gated on the A' synthesis data. A.1 must be a behavioural
//   no-op, so the loop is preserved exactly as it was.
//==============================================================================

module mx_find_lead #(
  parameter int W = 63          // extended-word width = <FMT>_LZC_WIDTH
) (
  input  logic signed [W-1:0] word_i,
  input  logic                neg_adjust_i,
  output logic                sign_o,
  output logic signed [7:0]   lead_pos_o,   // -1 sentinel .. W-1
  output logic [W-1:0]        mag_o
);

  logic         sign;
  logic [W-1:0] mag;
  int           lead_pos;
  int           i;

  always_comb begin
    sign = word_i[W-1];
    if (sign && neg_adjust_i)
      mag = ~word_i;        // |word| - 1, with the implied (1-eps) tail below
    else
      mag = sign ? (-word_i) : word_i;

    lead_pos = -1;
    for (i = W-1; i >= 0; i--) begin
      if (lead_pos == -1 && mag[i]) lead_pos = i;
    end

    sign_o     = sign;
    lead_pos_o = 8'(lead_pos);
    mag_o      = mag;
  end

endmodule
