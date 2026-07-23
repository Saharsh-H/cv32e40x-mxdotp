// Unit-level RTL-vs-golden-model equivalence testbench for
// mxdotp_final_engine (MXFINAL sliding-accumulator milestone). NOT part of
// the project's system testbench - this feeds the engine directly, back to
// back (respecting only its own busy_o, which is all this engine exposes -
// unlike mxdotp_fused_engine it has no ready_o/id/valid handshake to
// backpressure-test), and compares every result against the Python golden
// model's own output (mxfinal_golden.py), which was itself verified against
// an exact-rational reference and, separately, against this compiled RTL.
//
// The vector count is NOT hardcoded: it's derived from the vector file
// itself (a dynamic array sized by a line count taken before parsing), so
// mxfinal_golden.py's --emit-vectors can freely change how many vectors it
// emits without this file needing to track that number in lockstep.
//
// Vector format: each line is 32 flat hex digits (128 bits), no separators,
// packing {p1[16], p2[16], rs1[32], rs2[32], expected[32]} - see
// mxfinal_golden.py's _pack_vector_line for the authoritative packing.
module tb_mxfinal_unit;
  import mxdotp_pkg::*;

  logic [127:0] vec [];
  int N;

  logic clk = 0, rst_n = 0;
  always #5 clk = ~clk;

  logic                          start;
  logic                          busy, done;
  logic [63:0]                   rs1, rs2;
  logic signed [PSUM_WIDTH-1:0]  p1, p2;
  logic [31:0]                   result;

  mxdotp_final_engine #(.X_RFR_WIDTH(64), .X_RFW_WIDTH(32)) dut (
    .clk_i(clk), .rst_ni(rst_n),
    .start_i(start), .busy_o(busy), .done_o(done),
    .rs1_i(rs1), .rs2_i(rs2), .p1_i(p1), .p2_i(p2),
    .result_data(result)
  );

  int issue_idx = 0, check_idx = 0, errors = 0;

  initial begin
    int fd, c;
    string line;
    // Pass 1: count lines (= vector count) so the array can be sized
    // exactly, rather than assuming a fixed N that would silently go stale
    // whenever the golden script's emitted vector count changes.
    fd = $fopen("hex_vectors/mxfinal_unit_vectors.hex", "r");
    if (fd == 0) $fatal(1, "tb_mxfinal_unit: cannot open mxfinal_unit_vectors.hex - run `make mxfinal` from tb/, or regenerate it via verification/mxfinal_golden.py --emit-vectors");
    N = 0;
    while ($fgets(line, fd) != 0) begin
      if (line.len() > 0) N++;
    end
    $fclose(fd);
    if (N == 0) $fatal(1, "tb_mxfinal_unit: mxfinal_unit_vectors.hex is empty");

    // Pass 2: parse each line as a 32-hex-digit (128-bit) value.
    vec = new[N];
    fd = $fopen("hex_vectors/mxfinal_unit_vectors.hex", "r");
    for (int i = 0; i < N; i++) begin
      c = $fgets(line, fd);
      if (c == 0) $fatal(1, "tb_mxfinal_unit: mxfinal_unit_vectors.hex ended early at line %0d/%0d", i, N);
      if ($sscanf(line, "%h", vec[i]) != 1)
        $fatal(1, "tb_mxfinal_unit: malformed hex line %0d: %s", i, line);
    end
    $fclose(fd);

    rst_n = 0; start = 0;
    repeat (4) @(posedge clk);
    rst_n = 1;
    @(posedge clk);
    #1;

    // Back-to-back issuance: start the next vector the instant busy_o
    // deasserts, exactly like the real pipeline overlap this engine's
    // 3-stage BACK1/BACK2/BACK3 split exists to support (see the engine's
    // own file header) - no artificial idle cycles between vectors.
    //
    // TIMING NOTE: done_o is COMBINATIONAL, high during the entire cycle
    // where phase_q==FINAL_BACK3 (see the engine: `assign done_o = busy_q &&
    // (phase_q == FINAL_BACK3)`). result_data_q, however, only captures
    // back3_result_comb on the CLOCK EDGE at the end of that cycle (`else if
    // (done_o) result_data_q <= back3_result_comb`) - so the correct result
    // is only visible in the CYCLE AFTER done was observed high, not the
    // same cycle. The check below is therefore deferred by exactly one loop
    // iteration via done_prev, to line up with when result_data_q actually
    // holds the value done flagged.
    //
    // Field layout per 128-bit line (see mxfinal_golden.py's
    // _pack_vector_line - the authoritative packing):
    //   [127:112] p1 field (16b, top 3 bits always 0, low 13 = p1's pattern)
    //   [111:96]  p2 field (16b, top 3 bits always 0, low 13 = p2's pattern)
    //   [95:64]   rs1 (packed scales)
    //   [63:32]   rs2 (old_acc, raw FP32 bits)
    //   [31:0]    expected result
    begin
      automatic logic done_prev = 1'b0;
      while (check_idx < N) begin
        if (!busy && issue_idx < N) begin
          p1  = signed'(vec[issue_idx][124:112]);
          p2  = signed'(vec[issue_idx][108:96]);
          rs1 = {32'h0, vec[issue_idx][95:64]};
          rs2 = {32'h0, vec[issue_idx][63:32]};
          start = 1;
          issue_idx++;
        end else begin
          start = 0;
        end

        @(posedge clk);
        #1;

        // result_data_q was just updated by the edge we crossed, based on
        // 'done' as it stood last cycle (done_prev) - check NOW.
        if (done_prev) begin
          automatic logic [31:0] expected = vec[check_idx][31:0];
          if (result !== expected) begin
            errors++;
            $display("MISMATCH vec %0d: got %08x exp %08x", check_idx, result, expected);
            if (errors > 10) $fatal(1, "too many mismatches");
          end
          check_idx++;
        end
        done_prev = done;   // sample THIS cycle's done for next iteration's check
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
