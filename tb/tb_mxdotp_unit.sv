// Unit-level RTL-vs-golden-model equivalence testbench for
// mxdotp_dotp_engine (the FRONT half of the two-instruction MXFP4R residue
// path - see mxdotp_golden.py's module docstring for why this engine had NO
// unit coverage before now: every other tb_<name>_unit.sv drives a fused
// engine's full FRONT+BACK pipeline, or (tb_mxfinal_unit) the BACK-only
// frame given free p1/p2 inputs; nothing previously drove THIS engine's own
// nibble-unpack -> fp4_to_code -> product -> sum datapath directly). NOT
// part of the project's system testbench - this feeds the engine directly,
// back to back, respecting only its own busy_o (like mxdotp_final_engine,
// this engine exposes a plain start_i/busy_o/done_o handshake, no
// ready/id/valid, so there is no backpressure to randomize here either -
// same rationale as tb_mxfinal_unit.sv's own header).
//
// TIMING NOTE - the inverse of tb_mxfinal_unit.sv's, and just as important
// to get right: p1_o/p2_o here are LIVE COMBINATIONAL outputs of this
// engine's captured rs1_q/rs2_q/rs3_q (see mxdotp_dotp_engine.sv's own
// port-declaration comment for exactly why - an internally-registered
// one-cycle-delayed p1_q/p2_q was tried first and found to race
// mxdotp_xif.sv's mailbox capture). So, UNLIKE tb_mxfinal_unit.sv's
// done_prev-delayed check, p1_o/p2_o are checked in the SAME cycle done_o
// first reads high - no one-cycle deferral here would be WRONG (it would
// mean sampling a cycle after rs1_q/rs2_q/rs3_q may already have been
// overwritten by a newly-accepted instruction).
//
// The vector count is NOT hardcoded: it's derived from the vector file
// itself (a dynamic array sized by a line count taken before parsing), so
// mxdotp_golden.py's --emit-vectors can freely change how many vectors it
// emits without this file needing to track that number in lockstep.
//
// Vector format: each line is 56 flat hex digits (224 bits), no separators,
// packing {rs1[64], rs2[64], rs3[64], p1_expected[16], p2_expected[16]} -
// see mxdotp_golden.py's _pack_vector_line for the authoritative packing.
// p1/p2 fields are masked to 0x1FFF (13 significant bits, top 3 bits of
// each 16-bit field always zero, matching mxfinal_unit_vectors.hex's own
// p1/p2 field convention) - the testbench extracts only the low 13 bits of
// each and interprets THAT as signed.
module tb_mxdotp_unit;
  import mxdotp_pkg::*;

  logic [223:0] vec [];   // {rs1[64], rs2[64], rs3[64], p1[16], p2[16]} packed as hex;
                          // dynamically sized in the initial block below.
  int N;

  logic clk = 0, rst_n = 0;
  always #5 clk = ~clk;

  logic                          start;
  logic                          busy, done;
  logic [63:0]                   rs1, rs2, rs3;
  logic signed [PSUM_WIDTH-1:0]  p1, p2;

  mxdotp_dotp_engine #(.X_RFR_WIDTH(64)) dut (
    .clk_i(clk), .rst_ni(rst_n),
    .start_i(start), .busy_o(busy), .done_o(done),
    .rs1_i(rs1), .rs2_i(rs2), .rs3_i(rs3),
    .p1_o(p1), .p2_o(p2)
  );

  int issue_idx = 0, check_idx = 0, errors = 0;

  initial begin
    int fd, c;
    string line;
    // Pass 1: count lines (= vector count) so the array can be sized
    // exactly, rather than assuming a fixed N that would silently go stale
    // whenever the golden script's emitted vector count changes.
    fd = $fopen("hex_vectors/mxdotp_unit_vectors.hex", "r");
    if (fd == 0) $fatal(1, "tb_mxdotp_unit: cannot open mxdotp_unit_vectors.hex - run `make mxdotp` from tb/, or regenerate it via verification/mxdotp_golden.py --emit-vectors");
    N = 0;
    while ($fgets(line, fd) != 0) begin
      if (line.len() > 0) N++;
    end
    $fclose(fd);
    if (N == 0) $fatal(1, "tb_mxdotp_unit: mxdotp_unit_vectors.hex is empty");

    // Pass 2: parse each line as a 56-hex-digit (224-bit) value.
    vec = new[N];
    fd = $fopen("hex_vectors/mxdotp_unit_vectors.hex", "r");
    for (int i = 0; i < N; i++) begin
      c = $fgets(line, fd);
      if (c == 0) $fatal(1, "tb_mxdotp_unit: mxdotp_unit_vectors.hex ended early at line %0d/%0d", i, N);
      if ($sscanf(line, "%h", vec[i]) != 1)
        $fatal(1, "tb_mxdotp_unit: malformed hex line %0d: %s", i, line);
    end
    $fclose(fd);

    rst_n = 0; start = 0;
    repeat (4) @(posedge clk);
    rst_n = 1;
    @(posedge clk);
    #1;

    // Back-to-back issuance: start the next vector the instant busy_o
    // deasserts - no artificial idle cycles beyond what the engine's own
    // LATENCY_CYCLES-driven busy_q FSM requires (this engine's FSM cannot
    // accept a new start_i on the same edge busy_q itself drops, so the
    // observed rhythm is naturally 3 cycles/vector at the default
    // LATENCY_CYCLES=2 - a real, expected property of the RTL, not a TB
    // artifact; see mxdotp_dotp_engine.sv's busy_q always_ff block).
    //
    // Field layout per 224-bit line (see mxdotp_golden.py's
    // _pack_vector_line - the authoritative packing):
    //   [223:160] rs1 (A nibbles, packed nibble i at bit 4*i)
    //   [159:96]  rs2 (B nibbles)
    //   [95:32]   rs3 (AR nibbles)
    //   [31:16]   p1 expected field (16b, top 3 bits always 0, low 13 = p1)
    //   [15:0]    p2 expected field (16b, top 3 bits always 0, low 13 = p2)
    while (check_idx < N) begin
      if (!busy && issue_idx < N) begin
        rs1 = vec[issue_idx][223:160];
        rs2 = vec[issue_idx][159:96];
        rs3 = vec[issue_idx][95:32];
        start = 1;
        issue_idx++;
      end else begin
        start = 0;
      end

      @(posedge clk);
      #1;

      // done_o is COMBINATIONAL and p1_o/p2_o are the engine's own live
      // combinational p1_sum/p2_sum (NOT registered - see file header and
      // mxdotp_dotp_engine.sv's port comment) - both are already valid the
      // instant done_o reads high this same cycle, so the check happens
      // here directly, with NO one-cycle defer (unlike tb_mxfinal_unit.sv's
      // done_prev pattern, which exists ONLY because mxdotp_final_engine's
      // result_data_q is a registered output one cycle behind its own
      // done_o - that reasoning does not apply to this engine at all).
      if (done) begin
        automatic logic signed [12:0] exp_p1 = vec[check_idx][28:16];
        automatic logic signed [12:0] exp_p2 = vec[check_idx][12:0];
        if (p1 !== exp_p1 || p2 !== exp_p2) begin
          errors++;
          $display("MISMATCH vec %0d: got p1=%0d p2=%0d exp p1=%0d p2=%0d",
                    check_idx, p1, p2, exp_p1, exp_p2);
          if (errors > 10) $fatal(1, "too many mismatches");
        end
        check_idx++;
      end
    end

    if (errors == 0) $display("PASS: %0d/%0d vectors bit-exact vs golden model", N, N);
    else             $display("FAIL: %0d mismatches", errors);
    $finish;
  end

  initial begin
    #20ms;
    $fatal(1, "timeout");
  end
endmodule