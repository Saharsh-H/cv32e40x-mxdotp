// Unit-level RTL-vs-golden-model equivalence testbench for
// mxdotp_dotp_engine (the FRONT half of the two-instruction MXFP4R residue
// path). NOT part of the project's system testbench - this feeds the engine
// directly.
//
// Rewritten for the "pipelined coprocessor" milestone: this engine no
// longer exposes a single-shot start_i/busy_o/done_o handshake - it now
// exposes the same streaming ready_o/result_valid_o/result_ready_i/id
// interface mxdotp_fused_engine.sv already used (see tb_fp4_unit.sv, whose
// structure this file follows directly), and genuinely supports MULTIPLE
// overlapping in-flight instructions across its pipeline stages, not just
// one at a time. Two real consequences of that, both exercised here rather
// than merely tolerated:
//   - Back-to-back issuance now issues the instant ready_o allows, which can
//     be BEFORE a previous vector's result has appeared at all (true
//     overlap), not merely "the instant busy_o deasserts" (which used to be
//     the same moment as the previous vector's own completion).
//   - result_ready_i is randomly deasserted (matching tb_fp4_unit.sv's own
//     approach) to exercise the pipeline's stall path together with
//     overlap, not just overlap alone with a permanently-ready consumer.
// Because the pipeline is a plain shift register (see mxdotp_dotp_engine.sv
// - no reordering is structurally possible: id_q1->id_q2->...->id_qN
// alongside the data at every stage), results are guaranteed to emerge in
// the exact order instructions were started. That is what makes checking
// against a simple FIFO (expq below) correct rather than requiring an
// id-indexed lookup - same reasoning tb_fp4_unit.sv already relies on.
//
// The expected-result queue additionally carries id, so result_id_o is
// checked to actually match the id that was fed in for that specific
// vector - this is the one thing that genuinely matters more now than it
// did under the old single-shot handshake: with multiple instructions
// simultaneously mid-pipeline, an id/data cross-contamination bug between
// overlapping instructions is now a real, checkable failure mode, not merely
// a hypothetical one.
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
// each 16-bit field always zero) - the testbench extracts only the low 13
// bits of each and interprets THAT as signed. Unchanged from before - the
// golden model's own output format has nothing to do with the RTL's
// handshake protocol.
module tb_mxdotp_unit;
  import mxdotp_pkg::*;

  logic [223:0] vec [];   // {rs1[64], rs2[64], rs3[64], p1[16], p2[16]} packed as hex;
                          // dynamically sized in the initial block below.
  int N;

  logic clk = 0, rst_n = 0;
  always #5 clk = ~clk;

  logic                          start;
  logic                          ready;
  logic [3:0]                    id_in;
  logic [63:0]                   rs1, rs2, rs3;
  logic                          rvalid, rready;
  logic [3:0]                    rid;
  logic signed [PSUM_WIDTH-1:0]  p1, p2;

  mxdotp_dotp_engine #(.X_RFR_WIDTH(64), .X_ID_WIDTH(4)) dut (
    .clk_i(clk), .rst_ni(rst_n),
    .start_i(start), .ready_o(ready),
    .result_valid_o(rvalid), .result_ready_i(rready),
    .id_i(id_in), .result_id_o(rid),
    .rs1_i(rs1), .rs2_i(rs2), .rs3_i(rs3),
    .p1_o(p1), .p2_o(p2)
  );

  int issue_idx = 0, check_idx = 0, errors = 0;

  // Expected-result FIFO: {id, p1_expected, p2_expected} per issued vector,
  // pushed at issue time and popped in the same (guaranteed-FIFO) order
  // results actually arrive - see file header for why FIFO order is sound
  // here rather than an id-indexed structure.
  typedef struct packed {
    logic [3:0]                   id;
    logic signed [PSUM_WIDTH-1:0]  p1;
    logic signed [PSUM_WIDTH-1:0]  p2;
  } exp_entry_t;
  exp_entry_t expq [$];

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
    // Field layout per 224-bit line (see mxdotp_golden.py's
    // _pack_vector_line - the authoritative packing, unchanged):
    //   [223:160] rs1 (A nibbles, packed nibble i at bit 4*i)
    //   [159:96]  rs2 (B nibbles)
    //   [95:32]   rs3 (AR nibbles)
    //   [31:16]   p1 expected field (16b, top 3 bits always 0, low 13 = p1)
    //   [15:0]    p2 expected field (16b, top 3 bits always 0, low 13 = p2)
    forever begin
      #1;
      rready = ($urandom_range(0, 9) < 7);
      #1;
      if (issue_idx < N && ready) begin
        automatic exp_entry_t e;
        rs1 = vec[issue_idx][223:160];
        rs2 = vec[issue_idx][159:96];
        rs3 = vec[issue_idx][95:32];
        id_in = issue_idx[3:0];
        e.id = id_in;
        e.p1 = signed'(vec[issue_idx][28:16]);
        e.p2 = signed'(vec[issue_idx][12:0]);
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
        if (p1 !== exp.p1 || p2 !== exp.p2 || rid !== exp.id) begin
          errors++;
          $display("MISMATCH vec %0d: got p1=%0d p2=%0d id=%0d, exp p1=%0d p2=%0d id=%0d",
                    check_idx, p1, p2, rid, exp.p1, exp.p2, exp.id);
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
