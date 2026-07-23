// Unit-level RTL-vs-golden-model equivalence testbench for
// mxdotp_fp8_fused_engine (FP8 sliding-accumulator milestone). NOT part of
// the project's system testbench - this feeds the engine directly,
// back-to-back (exercising overlap) with randomized result_ready_i
// backpressure (exercising the global stall), and compares every result
// against the Python golden model's own output (fp8_golden.py), which was
// itself verified against an exact-rational reference.
//
// Vector line format (fp8_golden.py --emit-vectors):
//   {rs1[63:0], rs2[63:0], rs3[63:0], expected[31:0]} - rs3 packs
//   {15'b0, e5m2, b_scale[7:0], a_scale[7:0], old_acc[31:0]}.
module tb_fp8_unit;
  import mxdotp_pkg::*;

  localparam int N = 20872;
  logic [223:0] vec [0:N-1];

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

  mxdotp_fp8_fused_engine #(.X_ID_WIDTH(4), .X_RFR_WIDTH(64), .X_RFW_WIDTH(32)) dut (
    .clk_i(clk), .rst_ni(rst_n),
    .start_i(start), .ready_o(ready),
    .id_i(id_in), .rd_i(5'd10),
    .rs1_i(rs1), .rs2_i(rs2), .rs3_i(rs3),
    .mx_format_i(2'b11),
    .result_valid_o(rvalid), .result_ready_i(rready),
    .result_id_o(rid), .result_rd_o(rrd), .result_data_o(rdata)
  );

  int issue_idx = 0, check_idx = 0, errors = 0;
  logic [31:0] expq [$];

  initial begin
    $readmemh("hex_vectors/fp8_unit_vectors.hex", vec);
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
    #10ms;
    $fatal(1, "timeout");
  end
endmodule
