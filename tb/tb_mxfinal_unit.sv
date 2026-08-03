// Unit-level RTL-vs-golden-model equivalence testbench for
// mxdotp_final_engine (MXFINAL sliding-accumulator milestone). NOT part of
// the project's system testbench - this feeds the engine directly, with
// free p1_i/p2_i inputs standing in for what mxdotp_xif.sv's mailbox would
// otherwise supply (this engine has no visibility into "is the mailbox
// valid" - see the engine's own file header - so a unit test can simply
// hand it any p1/p2 pair directly).
//
// Rewritten for the "pipelined coprocessor" milestone: this engine no
// longer exposes a single-shot start_i/busy_o/done_o handshake - it now
// exposes the same streaming ready_o/result_valid_o/result_ready_i/id/rd
// interface mxdotp_fused_engine.sv already used (see tb_fp4_unit.sv, whose
// structure this file follows directly), and genuinely supports MULTIPLE
// overlapping in-flight instructions across its now-5-stage pipeline, not
// just one at a time (see the engine's own file header for the stage
// breakdown). Two real consequences of that, both exercised here rather
// than merely tolerated:
//   - Back-to-back issuance now issues the instant ready_o allows, which can
//     be BEFORE a previous vector's result has appeared at all (true
//     overlap), not merely "the instant busy_o deasserts".
//   - result_ready_i is randomly deasserted (matching tb_fp4_unit.sv's own
//     approach) to exercise the pipeline's stall path together with
//     overlap, not just overlap alone with a permanently-ready consumer.
// Because the pipeline is a plain shift register (in_valid_q -> back1a_q ->
// back1b_q -> back2_q -> result_valid_q, id/rd riding alongside data at
// every stage - no reordering is structurally possible), results are
// guaranteed to emerge in the exact order instructions were started. That
// is what makes checking against a simple FIFO (expq below) correct rather
// than requiring an id-indexed lookup - same reasoning tb_fp4_unit.sv
// already relies on.
//
// rd_i is varied per vector (rather than held at one constant, as the old
// single-shot version of this test could get away with) specifically so
// result_rd_o - and result_id_o - are checked to actually match what was
// fed in for that specific vector. With multiple instructions simultaneously
// mid-pipeline, an id/rd/data cross-contamination bug between overlapping
// instructions is now a real, checkable failure mode, not merely a
// hypothetical one - this is the one thing that genuinely matters more now
// than it did under the old single-shot handshake.
//
// The vector count is NOT hardcoded: it's derived from the vector file
// itself (a dynamic array sized by a line count taken before parsing), so
// mxfinal_golden.py's --emit-vectors can freely change how many vectors it
// emits without this file needing to track that number in lockstep.
//
// Vector format: each line is 32 flat hex digits (128 bits), no separators,
// packing {p1[16], p2[16], rs1[32], rs2[32], expected[32]} - see
// mxfinal_golden.py's _pack_vector_line for the authoritative packing.
// Unchanged from before - the golden model's own output format has nothing
// to do with the RTL's handshake protocol.
module tb_mxfinal_unit;
  import mxdotp_pkg::*;

  logic [127:0] vec [];
  int N;

  logic clk = 0, rst_n = 0;
  always #5 clk = ~clk;

  logic                          start;
  logic                          ready;
  logic [3:0]                    id_in;
  logic [4:0]                    rd_in;
  logic [63:0]                   rs1, rs2;
  logic signed [PSUM_WIDTH-1:0]  p1, p2;
  logic                          rvalid, rready;
  logic [3:0]                    rid;
  logic [4:0]                    rrd;
  logic [31:0]                   result;

  mxdotp_final_engine #(.X_RFR_WIDTH(64), .X_RFW_WIDTH(32), .X_ID_WIDTH(4)) dut (
    .clk_i(clk), .rst_ni(rst_n),
    .start_i(start), .ready_o(ready),
    .result_valid_o(rvalid), .result_ready_i(rready),
    .id_i(id_in), .rd_i(rd_in), .result_id_o(rid), .result_rd_o(rrd),
    .rs1_i(rs1), .rs2_i(rs2), .p1_i(p1), .p2_i(p2),
    .result_data(result)
  );

  int issue_idx = 0, check_idx = 0, errors = 0;

  // Expected-result FIFO: {id, rd, expected_data} per issued vector, pushed
  // at issue time and popped in the same (guaranteed-FIFO) order results
  // actually arrive - see file header for why FIFO order is sound here
  // rather than an id-indexed structure.
  typedef struct packed {
    logic [3:0]  id;
    logic [4:0]  rd;
    logic [31:0] data;
  } exp_entry_t;
  exp_entry_t expq [$];

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

    rst_n = 0; start = 0; rready = 0;
    repeat (4) @(posedge clk);
    rst_n = 1;
    @(posedge clk);

    // Back-to-back issuance the instant ready_o allows, with randomized
    // result_ready_i backpressure - see file header. ready_o is
    // combinational in result_ready_i (same stall = result_valid_q &&
    // !result_ready_i shape as mxdotp_fused_engine.sv), so backpressure
    // MUST be decided and settled before ready is sampled - same ordering
    // tb_fp4_unit.sv itself depends on.
    //
    // Field layout per 128-bit line (see mxfinal_golden.py's
    // _pack_vector_line - the authoritative packing, unchanged):
    //   [127:112] p1 field (16b, top 3 bits always 0, low 13 = p1's pattern)
    //   [111:96]  p2 field (16b, top 3 bits always 0, low 13 = p2's pattern)
    //   [95:64]   rs1 (packed scales)
    //   [63:32]   rs2 (old_acc, raw FP32 bits)
    //   [31:0]    expected result
    forever begin
      #1;
      rready = ($urandom_range(0, 9) < 7);
      #1;
      if (issue_idx < N && ready) begin
        automatic exp_entry_t e;
        p1  = signed'(vec[issue_idx][124:112]);
        p2  = signed'(vec[issue_idx][108:96]);
        rs1 = {32'h0, vec[issue_idx][95:64]};
        rs2 = {32'h0, vec[issue_idx][63:32]};
        id_in = issue_idx[3:0];
        rd_in = issue_idx[4:0];
        e.id   = id_in;
        e.rd   = rd_in;
        e.data = vec[issue_idx][31:0];
        expq.push_back(e);
        start = 1;
        issue_idx++;
      end else begin
        start = 0;
      end

      @(posedge clk);
      #2;

      if (rvalid && rready) begin
        automatic exp_entry_t exp = expq[0];
        if (result !== exp.data || rid !== exp.id || rrd !== exp.rd) begin
          errors++;
          $display("MISMATCH vec %0d: got data=%08x id=%0d rd=%0d, exp data=%08x id=%0d rd=%0d",
                    check_idx, result, rid, rrd, exp.data, exp.id, exp.rd);
          if (errors > 10) $fatal(1, "too many mismatches");
        end
        void'(expq.pop_front());
        check_idx++;
        if (check_idx == N) begin
          if (errors == 0) $display("PASS: %0d/%0d vectors bit-exact vs golden model", N, N);
          else             $display("FAIL: %0d mismatches", errors);
          $finish;
        end
      end
    end
  end

  initial begin
    #20ms;
    $fatal(1, "timeout");
  end
endmodule
