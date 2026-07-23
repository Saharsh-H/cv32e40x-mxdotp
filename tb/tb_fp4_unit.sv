// Unit-level RTL-vs-golden-model equivalence testbench for
// mxdotp_fused_engine (FP4 sliding-accumulator milestone). NOT part of the
// project's system testbench - this feeds the engine directly, back-to-back
// (exercising overlap) with randomized result_ready_i backpressure
// (exercising the global stall), and compares every result against the
// Python golden model's own output (fp4_golden.py), which was itself
// verified against an exact-rational reference.
//
// The vector count is NOT hardcoded: it's derived from the vector file
// itself (a dynamic array sized by a line count taken before $readmemh), so
// fp4_golden.py's --emit-vectors can freely change how many vectors it
// emits (directed + random count) without this file needing to track that
// number in lockstep.
module tb_fp4_unit;
  import mxdotp_pkg::*;

  logic [223:0] vec [];   // {rs1[64], rs2[64], rs3[64], expected[32]} packed as hex;
                          // dynamically sized in the initial block below.
  int N;

  logic clk = 0, rst_n = 0;
  always #5 clk = ~clk;

  logic        start;
  logic        ready;
  logic [3:0]  id_in;
  logic [63:0] rs1, rs2, rs3;
  logic        rvalid, rready;
  logic [3:0]  rid;
  logic [4:0]  rrd;
  logic [31:0] rdata;

  mxdotp_fused_engine #(.X_ID_WIDTH(4), .X_RFR_WIDTH(64), .X_RFW_WIDTH(32)) dut (
    .clk_i(clk), .rst_ni(rst_n),
    .start_i(start), .ready_o(ready),
    .id_i(id_in), .rd_i(5'd10),
    .rs1_i(rs1), .rs2_i(rs2), .rs3_i(rs3),
    .mx_format_i(MX_FMT_MXFP4),
    .result_valid_o(rvalid), .result_ready_i(rready),
    .result_id_o(rid), .result_rd_o(rrd), .result_data_o(rdata)
  );

  int issue_idx = 0, check_idx = 0, errors = 0;
  logic [31:0] expq [$];

  initial begin
    int fd, c;
    string line;
    // Pass 1: count lines (= vector count) so the array can be sized
    // exactly, rather than assuming a fixed N that would silently go stale
    // whenever the golden script's emitted vector count changes.
    fd = $fopen("hex_vectors/fp4_unit_vectors.hex", "r");
    if (fd == 0) $fatal(1, "tb_fp4_unit: cannot open fp4_unit_vectors.hex - run `make fp4` from tb/, or regenerate it via verification/fp4_golden.py --emit-vectors");
    N = 0;
    while ($fgets(line, fd) != 0) begin
      if (line.len() > 0) N++;
    end
    $fclose(fd);
    if (N == 0) $fatal(1, "tb_fp4_unit: fp4_unit_vectors.hex is empty");

    // Pass 2: parse each line as a 56-hex-digit (224-bit) value. $readmemh
    // itself can't target a dynamic array in Verilator, so do it by hand;
    // $fgets keeps the trailing newline in `line`, which %h simply stops at.
    vec = new[N];
    fd = $fopen("hex_vectors/fp4_unit_vectors.hex", "r");
    for (int i = 0; i < N; i++) begin
      c = $fgets(line, fd);
      if (c == 0) $fatal(1, "tb_fp4_unit: fp4_unit_vectors.hex ended early at line %0d/%0d", i, N);
      if ($sscanf(line, "%h", vec[i]) != 1)
        $fatal(1, "tb_fp4_unit: malformed hex line %0d: %s", i, line);
    end
    $fclose(fd);

    rst_n = 0; start = 0; rready = 0;
    repeat (4) @(posedge clk);
    rst_n = 1;
    @(posedge clk);
    forever begin
      // decide backpressure FIRST - ready_o is combinational in
      // result_ready_i, so it must be stable before we sample it
      #1;
      rready = ($urandom_range(0, 9) < 7);
      #1;
      if (issue_idx < N && ready) begin
        {rs1, rs2, rs3} = vec[issue_idx][223:32];
        id_in = issue_idx[3:0];
        start = 1;
        expq.push_back(vec[issue_idx][31:0]);
        issue_idx++;
      end else begin
        start = 0;
      end
      @(posedge clk);
      #2;
      if (rvalid && rready) begin
        if (rdata !== expq[0]) begin
          errors++;
          $display("MISMATCH vec %0d: got %08x exp %08x (id %0d)", check_idx, rdata, expq[0], rid);
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
