// Standalone Verilator TB: drive the REAL mxdotp_final_engine with the golden
// model's vectors and confirm bit-exact results against the golden expected.
module tb_mxf_verify;
  import mxdotp_pkg::*;

  logic clk = 0, rst_n = 0;
  always #5 clk = ~clk;

  logic                   start;
  logic                   busy, done;
  logic [63:0]            rs1, rs2;
  logic signed [PSUM_WIDTH-1:0] p1, p2;
  logic [31:0]            result;

  mxdotp_final_engine dut (
    .clk_i(clk), .rst_ni(rst_n),
    .start_i(start), .busy_o(busy), .done_o(done),
    .rs1_i(rs1), .rs2_i(rs2), .p1_i(p1), .p2_i(p2),
    .result_data(result)
  );

  // vector storage
  integer fd, code, n, fails, i;
  logic [12:0] vp1, vp2;
  logic [31:0] vrs1, vacc, vexp;

  initial begin
    rst_n = 0;
    start = 0; rs1 = 0; rs2 = 0; p1 = 0; p2 = 0;
    repeat (4) @(posedge clk);
    rst_n = 1;
    @(posedge clk);

    fd = $fopen("/tmp/vecs.txt", "r");
    if (fd == 0) begin $display("FATAL: cannot open vectors"); $finish; end

    n = 0; fails = 0;
    while (!$feof(fd)) begin
      code = $fscanf(fd, "%h %h %h %h %h\n", vp1, vp2, vrs1, vacc, vexp);
      if (code != 5) continue;

      // present operands, pulse start for one cycle
      p1  = signed'(vp1);
      p2  = signed'(vp2);
      rs1 = {32'h0, vrs1};
      rs2 = {32'h0, vacc};
      start = 1;
      @(posedge clk);
      start = 0;

      // wait for done
      i = 0;
      while (!done && i < 20) begin @(posedge clk); i = i + 1; end
      @(posedge clk);   // result_data_q latches on done edge

      if (result !== vexp) begin
        fails = fails + 1;
        if (fails <= 12)
          $display("MISMATCH #%0d: p1=%0d p2=%0d rs1=%08h acc=%08h  got=%08h exp=%08h",
                   n, signed'(vp1), signed'(vp2), vrs1, vacc, result, vexp);
      end
      n = n + 1;
      // let the engine return to idle
      @(posedge clk);
    end
    $fclose(fd);
    $display("CHECKED=%0d FAILS=%0d", n, fails);
    if (fails == 0) $display("RESULT: PASS - RTL bit-exact to golden model");
    else            $display("RESULT: FAIL");
    $finish;
  end

  initial begin
    #20000000;
    $display("TIMEOUT"); $finish;
  end
endmodule