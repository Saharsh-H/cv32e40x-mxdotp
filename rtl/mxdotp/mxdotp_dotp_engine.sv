//==============================================================================
// File    : mxdotp_dotp_engine.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Standalone MXDOTP arithmetic engine - the DOTP half of what used to be
//   one shared mxdotp_execute module. See mxdotp_xif.sv's "pipelined
//   coprocessor" milestone header (mxdotp_pkg.sv) for why this was split out:
//   giving MXDOTP its own independent start_i/busy_o/done_o (instead of
//   sharing one with MXFINAL) is what actually lets a new MXDOTP begin while
//   a previous MXFINAL is still computing - splitting the RTL into separate
//   files alone would not have achieved that; independent *control* is the
//   part that matters.
//
//   rs1=A, rs2=B, rs3=AR - ALL 64-bit dual-read, MX_K=16 MXFP4 elements each,
//   regardless of format (unified ISA - see mxdotp_pkg.sv). Converts every
//   element via fp4_to_code (exact fixed-point "2*value" integer, no
//   floating intermediate needed), computes p1 = sum(A_i*B_i) and
//   p2 = sum(AR_i*B_i) as raw, UNSCALED fixed-point sums - no scale
//   knowledge exists in this engine at all; that's entirely MXFINAL's
//   concern. AR/p2 are computed unconditionally even when the format doesn't
//   use residue - this engine doesn't know or care about format; only
//   MXFINAL's dispatch does.
//==============================================================================

module mxdotp_dotp_engine
    import mxdotp_pkg::*;
#(
    // Real system value is always 64 (mxdotp_core_top.sv -> mxdotp_xif.sv ->
    // here) - this module's own unpacking is hard-fixed to MX_K=16 nibbles
    // per operand (16*4=64 bits), so 64 is the only value that actually
    // works, not an independent tunable. The default matches that rather
    // than an arbitrary smaller placeholder (32 doesn't work at all - see
    // the elaboration-time assert below, added after standalone Vivado
    // synthesis of just this module - no mxdotp_xif.sv around to supply
    // the real override - silently fell back to an old, invalid default
    // and Vivado correctly flagged the resulting out-of-range part-select).
    parameter int X_RFR_WIDTH    = 64,
    parameter int LATENCY_CYCLES = 2   // must be >= 1; not yet re-tuned for the
                                        // real datapath's actual critical path -
                                        // correctness-first, timing later.
)
(
    input  logic                   clk_i,
    input  logic                   rst_ni,

    input  logic                   start_i,
    output logic                   busy_o,
    output logic                   done_o,

    input  logic [X_RFR_WIDTH-1:0] rs1_i,  // A
    input  logic [X_RFR_WIDTH-1:0] rs2_i,  // B
    input  logic [X_RFR_WIDTH-1:0] rs3_i,  // AR

    // Held stable from the done_o edge onward until the next start_i -
    // same "latch on the done_o edge" discipline mxdotp_execute.sv's
    // result_data_q used to follow, for the same reason: a live
    // combinational function of internal state would be exactly the kind of
    // thing that could race against whatever consumes p1_o/p2_o afterward.
    //
    // IMPORTANT: this is NOT an internally-latched register (see below for
    // why) - p1_o/p2_o are the live combinational p1_sum/p2_sum, valid the
    // instant done_o first asserts and for as long as needed afterward
    // (rs1_q/rs2_q/rs3_q cannot change until the next start_i, which cannot
    // happen until mxdotp_xif.sv's mailbox has already captured this
    // result - see that file's dotp_mailbox_write). An internal one-cycle-
    // delayed output latch (driven by "if (done_o) p1_q <= p1_sum") was
    // tried here first and was wrong: mxdotp_xif.sv's mailbox capture reacts
    // to done_o in the SAME cycle in the common (mailbox-already-empty)
    // case, whereas a registered p1_q/p2_q would not show the new value
    // until the cycle AFTER done_o - a real, caught-in-simulation race
    // (mailbox captured stale zero values). The mailbox itself is the
    // register that needs to hold this value stable now; this engine
    // doesn't need to duplicate that.
    output logic signed [PSUM_WIDTH-1:0] p1_o,
    output logic signed [PSUM_WIDTH-1:0] p2_o
);

  // Elaboration-time guard: this module's unpacking is hard-fixed to
  // MX_K=16 nibbles per operand (16*4=64 bits) - X_RFR_WIDTH is not an
  // independently free parameter, it must be >= 64. Catches exactly the
  // failure mode a standalone Vivado synthesis run just hit (module's own
  // default silently too small, no mxdotp_xif.sv around to supply the real
  // override) with a clear message instead of a bare out-of-range
  // part-select error deep in the unpacking loop.
  // synthesis translate_off
  initial begin
    assert (X_RFR_WIDTH >= 64) else
      $error("mxdotp_dotp_engine: X_RFR_WIDTH (%0d) must be >= 64 - MX_K=16 nibbles per operand need the full 64 bits, this is not a free parameter.",
              X_RFR_WIDTH);
  end
  // synthesis translate_on

  //----------------------------------------------------------------------------
  // Input capture (on start_i)
  //----------------------------------------------------------------------------

  logic [X_RFR_WIDTH-1:0] rs1_q, rs2_q, rs3_q;

  //----------------------------------------------------------------------------
  // Latency counter / busy tracking
  //----------------------------------------------------------------------------

  localparam int CNT_WIDTH = (LATENCY_CYCLES <= 1) ? 1 : $clog2(LATENCY_CYCLES + 1);

  logic [CNT_WIDTH-1:0] cycle_cnt_q;
  logic                 busy_q;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      busy_q      <= 1'b0;
      cycle_cnt_q <= '0;
      rs1_q       <= '0;
      rs2_q       <= '0;
      rs3_q       <= '0;
    end else if (start_i && !busy_q) begin
      busy_q      <= 1'b1;
      cycle_cnt_q <= CNT_WIDTH'(LATENCY_CYCLES - 1);
      rs1_q       <= rs1_i;
      rs2_q       <= rs2_i;
      rs3_q       <= rs3_i;
    end else if (busy_q) begin
      if (cycle_cnt_q == '0)
        busy_q <= 1'b0;
      else
        cycle_cnt_q <= cycle_cnt_q - 1'b1;
    end
  end

  assign busy_o = busy_q;
  assign done_o = busy_q && (cycle_cnt_q == '0);

  //----------------------------------------------------------------------------
  // Datapath: unpack A/B/AR, MX_K=16 nibbles each spanning the full 64-bit
  // dual-read operand (element i at bit 4*i for i=0..15 - this falls out of
  // dual-read's {reg+1,reg} concatenation lining up exactly with a
  // contiguous 16-nibble pack across the register pair).
  //----------------------------------------------------------------------------

  logic [3:0] a_nib  [0:MX_K-1];
  logic [3:0] b_nib  [0:MX_K-1];
  logic [3:0] ar_nib [0:MX_K-1];

  logic signed [CODE_WIDTH-1:0] a_code  [0:MX_K-1];
  logic signed [CODE_WIDTH-1:0] b_code  [0:MX_K-1];
  logic signed [CODE_WIDTH-1:0] ar_code [0:MX_K-1];

  logic signed [PROD_WIDTH-1:0] p1_term [0:MX_K-1];  // A_i * B_i
  logic signed [PROD_WIDTH-1:0] p2_term [0:MX_K-1];  // AR_i * B_i

  logic signed [PSUM_WIDTH-1:0] p1_sum;  // sum(A.B), raw/unscaled
  logic signed [PSUM_WIDTH-1:0] p2_sum;  // sum(AR.B), raw/unscaled

  int i;

  always_comb begin
    for (i = 0; i < MX_K; i++) begin
      a_nib[i]  = rs1_q[4*i +: 4];
      b_nib[i]  = rs2_q[4*i +: 4];
      ar_nib[i] = rs3_q[4*i +: 4];
    end

    for (i = 0; i < MX_K; i++) begin
      a_code[i]  = fp4_to_code(a_nib[i]);
      b_code[i]  = fp4_to_code(b_nib[i]);
      ar_code[i] = fp4_to_code(ar_nib[i]);
      // Signed*signed multiply, both operands sign-extended to PROD_WIDTH by
      // the assignment - exact, no rounding (see mxdotp_pkg.sv for the
      // 9-bit single-product derivation).
      p1_term[i] = PROD_WIDTH'(a_code[i]  * b_code[i]);
      p2_term[i] = PROD_WIDTH'(ar_code[i] * b_code[i]);
    end

    // Summed via a loop, not a hardcoded expression, so this stays correct
    // for whatever MX_K mxdotp_pkg.sv defines. No clamp: p1_sum/p2_sum carry
    // full PSUM_WIDTH precision, which was derived specifically to make this
    // summation lossless (see mxdotp_pkg.sv).
    p1_sum = '0;
    p2_sum = '0;
    for (i = 0; i < MX_K; i++) begin
      p1_sum = p1_sum + PSUM_WIDTH'(p1_term[i]);
      p2_sum = p2_sum + PSUM_WIDTH'(p2_term[i]);
    end
  end

  //----------------------------------------------------------------------------
  // p1_o/p2_o are the live combinational p1_sum/p2_sum, not a registered
  // latch - see the port declaration comment above for exactly why. Valid
  // from the moment done_o first asserts (busy_q is still 1 that cycle, so
  // rs1_q/rs2_q/rs3_q are already the correct, captured operands) and stays
  // valid afterward for as long as this slot holds them, since a new
  // start_i cannot occur before the consumer has captured this result.
  //----------------------------------------------------------------------------

  assign p1_o = p1_sum;
  assign p2_o = p2_sum;

endmodule
