//==============================================================================
// File    : tb_mxdotp_core.sv
// Project : MXDOTP XIF Coprocessor - Verification Environment
//------------------------------------------------------------------------------
// Description:
//   Top-level self-checking testbench for mxdotp_core_top.sv.
//
//   Structure:
//     u_instr_rom  - instruction memory (instr_rom.sv), program lives there
//     u_data_mem   - data memory stub (data_mem_stub.sv), unused by the
//                    current program but protocol-correct if that changes
//     dut          - mxdotp_core_top.sv (cv32e40x_core + if_xif + mxdotp_xif)
//
//   Scoreboard tracks exactly one MXDOTP instruction through:
//     Issue -> Commit -> Result -> Register file writeback
//   reading expected id/operand/destination values hierarchically from
//   u_instr_rom, so editing the program in instr_rom.sv keeps the checks in
//   sync automatically.
//
//   Note: XSim currently crashes at time 0 inside cv32e40x_alignment_buffer.sv
//   for reasons unrelated to this testbench (XSim-specific; $deposit/force
//   workarounds attempted earlier did not resolve it). This environment is
//   verified under Verilator, which does not hit the issue.
//
//==============================================================================

`timescale 1ns/1ps

module tb_mxdotp_core;

  //----------------------------------------------------------------------------
  // Clock / Reset
  //----------------------------------------------------------------------------

  localparam time         CLK_PERIOD      = 10ns;
  localparam int unsigned TIMEOUT_CYCLES  = 500;

  logic clk_i;
  logic rst_ni;

  initial clk_i = 1'b0;
  always #(CLK_PERIOD/2) clk_i = ~clk_i;

  initial begin
    rst_ni = 1'b0;
    repeat (10) @(posedge clk_i);
    rst_ni = 1'b1;
  end

  //----------------------------------------------------------------------------
  // fetch_enable_i - deliberately NOT tied directly to rst_ni. It is
  // registered so it asserts exactly one cycle after reset release, which
  // is closer to the OpenHW bring-up convention and avoids fetch_enable_i
  // being combinationally equal (bit-for-bit) to the reset net itself.
  //----------------------------------------------------------------------------

  logic fetch_enable_q;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) fetch_enable_q <= 1'b0;
    else         fetch_enable_q <= 1'b1;
  end

  //----------------------------------------------------------------------------
  // XSim time-0 crash workaround
  //----------------------------------------------------------------------------
  //
  // See the root-cause writeup accompanying this file for the full
  // explanation. Short version: cv32e40x_alignment_buffer.sv's rptr/wptr
  // pointer registers are X until their own always_ff reset branch runs,
  // but several continuous assigns and an always_comb block index
  // resp_q[]/valid_q[] with those pointers unconditionally (or in a `?:`
  // that evaluates both branches even under an ambiguous condition) during
  // SystemVerilog's implicit time-0 settle - before that reset branch can
  // possibly have executed. XSim faults on the resulting X-indexed array
  // read; this is not fixable by retiming clock/reset in this file, since
  // the fault occurs before any of this file's procedural code runs.
  //
  // $deposit is NOT supported by XSim (confirmed) and is not used here.
  //
  // Required run method: use xsim_workaround.tcl instead of `run -all` /
  // the "Run All" button. It forces rptr and wptr to 0 via XSim's Tcl
  // `add_force`/`remove_forces` commands (verified against UG835; XSim
  // does not have ModelSim/Questa-style `force`/`unforce`) before any
  // SystemVerilog code executes, then releases the force once the
  // design's own reset has taken over.
  //
  //   xsim tb_mxdotp_core_behav -tclbatch xsim_workaround.tcl
  //   (or, in the GUI: Tools -> Run Tcl Script -> xsim_workaround.tcl,
  //    instead of clicking "Run All")
  //
  // If you'd rather not remember to load a separate script every run, see
  // xsim_bind_workaround.sv for a self-contained alternative that applies
  // automatically whenever this testbench is elaborated.

  //----------------------------------------------------------------------------
  // Instruction memory / data memory / DUT interconnect
  //----------------------------------------------------------------------------

  logic        instr_req;
  logic        instr_gnt;
  logic        instr_rvalid;
  logic [31:0] instr_addr;
  logic [1:0]  instr_memtype;
  logic [2:0]  instr_prot;
  logic        instr_dbg;
  logic [31:0] instr_rdata;
  logic        instr_err;

  logic        data_req;
  logic        data_gnt;
  logic        data_rvalid;
  logic        data_we;
  logic [3:0]  data_be;
  logic [31:0] data_addr;
  logic [1:0]  data_memtype;
  logic [2:0]  data_prot;
  logic        data_dbg;
  logic [31:0] data_wdata;
  logic [31:0] data_rdata;
  logic        data_err;
  logic [5:0]  data_atop;
  logic        data_exokay;

  logic [63:0] mcycle;

  logic [11:0] clic_irq_id_o;
  logic        clic_irq_mode_o;
  logic        clic_irq_exit_o;

  logic        fencei_flush_req;
  logic        fencei_flush_ack;

  logic        debug_havereset;
  logic        debug_running;
  logic        debug_halted;

  logic        core_sleep;

  assign fencei_flush_ack = fencei_flush_req; // auto-ack, not exercised by this program

  instr_rom u_instr_rom (
    .clk_i          ( clk_i        ),
    .rst_ni         ( rst_ni       ),
    .instr_req_i    ( instr_req    ),
    .instr_gnt_o    ( instr_gnt    ),
    .instr_rvalid_o ( instr_rvalid ),
    .instr_addr_i   ( instr_addr   ),
    .instr_rdata_o  ( instr_rdata  ),
    .instr_err_o    ( instr_err    )
  );

  data_mem_stub u_data_mem (
    .clk_i         ( clk_i       ),
    .rst_ni        ( rst_ni      ),
    .data_req_i    ( data_req    ),
    .data_gnt_o    ( data_gnt    ),
    .data_rvalid_o ( data_rvalid ),
    .data_we_i     ( data_we     ),
    .data_be_i     ( data_be     ),
    .data_addr_i   ( data_addr   ),
    .data_wdata_i  ( data_wdata  ),
    .data_rdata_o  ( data_rdata  ),
    .data_err_o    ( data_err    ),
    .data_exokay_o ( data_exokay )
  );

  mxdotp_core_top dut (
    .clk_i                 ( clk_i               ),
    .rst_ni                ( rst_ni              ),
    .scan_cg_en_i           ( 1'b0                ),

    .boot_addr_i            ( 32'h0000_0000       ),
    .mtvec_addr_i           ( 32'h0000_0000       ),
    .dm_halt_addr_i         ( 32'h0000_0000       ),
    .mhartid_i              ( 32'h0000_0000       ),
    .mimpid_i               ( 32'h0000_0000       ),
    .dm_exception_addr_i    ( 32'h0000_0000       ),
    .nmi_addr_i             ( 32'h0000_0000       ),

    .instr_req_o            ( instr_req           ),
    .instr_gnt_i            ( instr_gnt           ),
    .instr_rvalid_i         ( instr_rvalid        ),
    .instr_addr_o           ( instr_addr          ),
    .instr_memtype_o        ( instr_memtype       ),
    .instr_prot_o           ( instr_prot          ),
    .instr_dbg_o            ( instr_dbg           ),
    .instr_rdata_i          ( instr_rdata         ),
    .instr_err_i            ( instr_err           ),

    .data_req_o             ( data_req            ),
    .data_gnt_i             ( data_gnt            ),
    .data_rvalid_i          ( data_rvalid         ),
    .data_we_o              ( data_we             ),
    .data_be_o              ( data_be             ),
    .data_addr_o            ( data_addr           ),
    .data_memtype_o         ( data_memtype        ),
    .data_prot_o            ( data_prot           ),
    .data_dbg_o             ( data_dbg            ),
    .data_wdata_o           ( data_wdata          ),
    .data_rdata_i           ( data_rdata          ),
    .data_err_i             ( data_err            ),
    .data_atop_o            ( data_atop           ),
    .data_exokay_i          ( data_exokay         ),

    .mcycle_o               ( mcycle              ),

    .irq_i                  ( 32'h0               ),
    .clic_irq_i             ( 1'b0                ),
    .clic_irq_id_i          ( 12'h0               ),
    .clic_irq_il_i          ( 8'h0                ),
    .clic_irq_priv_i        ( 2'h0                ),
    .clic_irq_hv_i          ( 1'b0                ),
    .clic_irq_id_o          ( clic_irq_id_o       ),
    .clic_irq_mode_o        ( clic_irq_mode_o     ),
    .clic_irq_exit_o        ( clic_irq_exit_o     ),

    .fencei_flush_req_o     ( fencei_flush_req    ),
    .fencei_flush_ack_i     ( fencei_flush_ack    ),

    .debug_req_i            ( 1'b0                ),
    .debug_havereset_o      ( debug_havereset     ),
    .debug_running_o        ( debug_running       ),
    .debug_halted_o         ( debug_halted        ),

    .fetch_enable_i         ( fetch_enable_q      ),
    .core_sleep_o           ( core_sleep          )
  );

  //----------------------------------------------------------------------------
  // XIF observation - hierarchical taps onto the interface instance and the
  // core's internal writeback signals inside mxdotp_core_top.sv
  //----------------------------------------------------------------------------

  wire        xif_issue_valid  = dut.xif.issue_valid;
  wire        xif_issue_ready  = dut.xif.issue_ready;
  wire        xif_issue_accept = dut.xif.issue_resp.accept;
  wire        xif_issue_wb     = dut.xif.issue_resp.writeback;
  wire [31:0] xif_issue_instr  = dut.xif.issue_req.instr;
  wire [3:0]  xif_issue_id     = dut.xif.issue_req.id;
  wire [31:0] xif_issue_rs0    = dut.xif.issue_req.rs[0];
  wire [31:0] xif_issue_rs1    = dut.xif.issue_req.rs[1];
  wire [31:0] xif_issue_rs2    = dut.xif.issue_req.rs[2];

  wire        xif_commit_valid = dut.xif.commit_valid;
  wire [3:0]  xif_commit_id    = dut.xif.commit.id;
  wire        xif_commit_kill  = dut.xif.commit.commit_kill;

  wire        xif_result_valid = dut.xif.result_valid;
  wire        xif_result_ready = dut.xif.result_ready;
  wire [3:0]  xif_result_id    = dut.xif.result.id;
  wire [4:0]  xif_result_rd    = dut.xif.result.rd;
  wire [31:0] xif_result_data  = dut.xif.result.data;
  wire        xif_result_we    = dut.xif.result.we;

  wire        rf_we_wb_o    = dut.core_i.rf_we_wb;
  wire [4:0]  rf_waddr_wb_o = dut.core_i.rf_waddr_wb;
  wire [31:0] rf_wdata_wb_o = dut.core_i.rf_wdata_wb;

  // Expected values for the MXDOTP / MXFINAL pair under test, read
  // hierarchically from instr_rom.sv - edit the program there, not here.
  wire [31:0] exp_dotp_instr  = u_instr_rom.INSTR_MXDOTP;
  wire [31:0] exp_a_val       = u_instr_rom.MXDOTP_A_VAL;
  wire [31:0] exp_b_val       = u_instr_rom.MXDOTP_B_VAL;
  wire [31:0] exp_scales      = u_instr_rom.MXDOTP_SCALES;

  wire [31:0] exp_final_instr = u_instr_rom.INSTR_MXFINAL;
  wire [4:0]  exp_final_rd    = u_instr_rom.REG_RESULT;
  wire [31:0] exp_old_acc     = u_instr_rom.MXFINAL_OLD_ACC;

  // Hand-computed expected MXFINAL result (see instr_rom.sv header) - not
  // yet golden-model-derived; this is a sanity vector (all-1.0 elements,
  // unit scale, zero old accumulator -> 4.0), not the rigorous test suite.
  wire [31:0] exp_final_data  = u_instr_rom.MXFINAL_EXPECTED;

  //----------------------------------------------------------------------------
  // Protocol assertion: once result_valid is asserted without being accepted
  // the same cycle, it must remain asserted until result_ready arrives.
  //----------------------------------------------------------------------------

  property p_result_valid_stable;
    @(posedge clk_i) disable iff (!rst_ni)
    (xif_result_valid && !xif_result_ready) |=> xif_result_valid;
  endproperty

  assert property (p_result_valid_stable)
    else $error("[%0t] PROTOCOL VIOLATION: result_valid dropped before result_ready", $time);

  //----------------------------------------------------------------------------
  // Scoreboard: tracks one MXDOTP instruction through
  // Issue -> Commit -> Result -> Register file writeback
  //----------------------------------------------------------------------------

  typedef enum logic [3:0] {
    SB_WAIT_DOTP_ISSUE,
    SB_WAIT_DOTP_COMMIT,
    SB_WAIT_DOTP_RESULT,
    SB_WAIT_FINAL_ISSUE,
    SB_WAIT_FINAL_COMMIT,
    SB_WAIT_FINAL_RESULT,
    SB_WAIT_FINAL_WB,
    SB_DONE,
    SB_FAIL
  } sb_state_e;

  sb_state_e   sb_state;
  logic [3:0]  expected_id;
  int unsigned pass_count;
  int unsigned fail_count;

  // Failure flag for this cycle (set combinationally, consumed by always_ff)
  logic        sb_fail_this_cycle;
  string       sb_fail_msg;

  initial begin
    sb_state            = SB_WAIT_DOTP_ISSUE;
    pass_count          = 0;
    fail_count          = 0;
    sb_fail_this_cycle  = 1'b0;
    sb_fail_msg         = "";
  end

  //----------------------------------------------------------------------------
  // RF writeback capture - independent of sb_state.
  //
  // CV32E40X retires an accepted XIF result into the register file
  // *combinationally in the same cycle* result_valid && result_ready fires
  // (rf_we_wb/rf_waddr_wb/rf_wdata_wb are driven straight from the accepted
  // result in the WB stage, not registered a cycle later). The main
  // scoreboard below is a single always_ff/case block that only evaluates
  // one state's body per clock edge, so the SB_WAIT_RESULT -> SB_WAIT_WB
  // transition (triggered this same cycle) can't also check the WB
  // condition on that same cycle - by the time sb_state actually becomes
  // SB_WAIT_WB (the following cycle), the one-shot rf_we_wb_o pulse for x5
  // has already come and gone (the next instruction to retire, e.g. the
  // JAL_SELF's x0 write, has taken its place). That race - not a bug in
  // mxdotp_xif.sv/mxdotp_execute.sv - is what was causing the SB_WAIT_WB
  // timeout: this test's own scoreboard was arriving one cycle too late to
  // see an event it should have caught the very cycle RESULT fired.
  //
  // Fix: capture the write the instant it happens, in its own always_ff,
  // independent of sb_state. SB_WAIT_WB then reads this latch instead of
  // sampling the live (possibly already-passed) pulse directly.
  //----------------------------------------------------------------------------

  logic        wb_seen_q;
  logic [31:0] wb_data_q;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      wb_seen_q <= 1'b0;
      wb_data_q <= '0;
    end else if (!wb_seen_q && rf_we_wb_o && (rf_waddr_wb_o == exp_final_rd)) begin
      wb_seen_q <= 1'b1;
      wb_data_q <= rf_wdata_wb_o;
    end
  end

  task automatic sb_fail(string msg);
    $display("[%0t] FAIL: %s", $time, msg);
    fail_count++;
    sb_fail_this_cycle = 1'b1;
    sb_fail_msg        = msg;
  endtask

  always_ff @(posedge clk_i) begin
    if (!rst_ni) begin
      sb_state <= SB_WAIT_DOTP_ISSUE;
    end else begin
      // If a failure was flagged this cycle, transition to SB_FAIL and hold.
      if (sb_fail_this_cycle) begin
        sb_state <= SB_FAIL;
      end else begin
        unique case (sb_state)

        //----------------------------------------------------------------
        // MXDOTP: rs1=A, rs2=B, rs3=scales. No writeback expected - only
        // the issue/commit/result handshake is checked here; the actual
        // arithmetic result is verified indirectly via MXFINAL's output.
        //----------------------------------------------------------------

        SB_WAIT_DOTP_ISSUE: begin
          if (xif_issue_valid && xif_issue_ready && (xif_issue_instr == exp_dotp_instr)) begin
            if (!xif_issue_accept) begin
              sb_fail("MXDOTP instruction was not accepted at issue");
            end else if (xif_issue_wb) begin
              sb_fail("MXDOTP issue_resp.writeback was asserted (expected 0 - MXDOTP has no architectural result)");
            end else if ((xif_issue_rs0 !== exp_a_val) || (xif_issue_rs1 !== exp_b_val) || (xif_issue_rs2 !== exp_scales)) begin
              sb_fail($sformatf("MXDOTP operand mismatch at issue: A=0x%0h B=0x%0h scales=0x%0h (expected 0x%0h,0x%0h,0x%0h)",
                                 xif_issue_rs0, xif_issue_rs1, xif_issue_rs2, exp_a_val, exp_b_val, exp_scales));
            end else begin
              expected_id <= xif_issue_id;
              $display("[%0t] DOTP  ISSUE  ok: id=%0d A=0x%0h B=0x%0h scales=0x%0h",
                        $time, xif_issue_id, xif_issue_rs0, xif_issue_rs1, xif_issue_rs2);
              sb_state <= SB_WAIT_DOTP_COMMIT;
            end
          end
        end

        SB_WAIT_DOTP_COMMIT: begin
          if (xif_commit_valid) begin
            if (xif_commit_id !== expected_id) begin
              sb_fail($sformatf("MXDOTP commit id mismatch: got %0d expected %0d", xif_commit_id, expected_id));
            end else if (xif_commit_kill) begin
              sb_fail("MXDOTP instruction was killed at commit (unexpected for this program)");
            end else begin
              $display("[%0t] DOTP  COMMIT ok: id=%0d, commit_kill=0", $time, xif_commit_id);
              sb_state <= SB_WAIT_DOTP_RESULT;
            end
          end
        end

        SB_WAIT_DOTP_RESULT: begin
          if (xif_result_valid && xif_result_ready) begin
            if (xif_result_id !== expected_id) begin
              sb_fail($sformatf("MXDOTP result id mismatch: got %0d expected %0d", xif_result_id, expected_id));
            end else if (xif_result_we) begin
              sb_fail("MXDOTP result.we was asserted (expected 0 - no architectural result)");
            end else begin
              $display("[%0t] DOTP  RESULT ok: id=%0d we=%0d (no writeback, as expected)",
                        $time, xif_result_id, xif_result_we);
              sb_state <= SB_WAIT_FINAL_ISSUE;
            end
          end
        end

        //----------------------------------------------------------------
        // MXFINAL: rs1=old FP32 accumulator. Combines with MXDOTP's staged
        // sum-of-products, rounds once, writes the result to rd.
        //----------------------------------------------------------------

        SB_WAIT_FINAL_ISSUE: begin
          if (xif_issue_valid && xif_issue_ready && (xif_issue_instr == exp_final_instr)) begin
            if (!xif_issue_accept) begin
              sb_fail("MXFINAL instruction was not accepted at issue");
            end else if (!xif_issue_wb) begin
              sb_fail("MXFINAL issue_resp.writeback was not asserted");
            end else if (xif_issue_rs0 !== exp_old_acc) begin
              sb_fail($sformatf("MXFINAL operand mismatch at issue: rs1=0x%0h (expected 0x%0h)",
                                 xif_issue_rs0, exp_old_acc));
            end else begin
              expected_id <= xif_issue_id;
              $display("[%0t] FINAL ISSUE  ok: id=%0d old_acc=0x%0h", $time, xif_issue_id, xif_issue_rs0);
              sb_state <= SB_WAIT_FINAL_COMMIT;
            end
          end
        end

        SB_WAIT_FINAL_COMMIT: begin
          if (xif_commit_valid) begin
            if (xif_commit_id !== expected_id) begin
              sb_fail($sformatf("MXFINAL commit id mismatch: got %0d expected %0d", xif_commit_id, expected_id));
            end else if (xif_commit_kill) begin
              sb_fail("MXFINAL instruction was killed at commit (unexpected for this program)");
            end else begin
              $display("[%0t] FINAL COMMIT ok: id=%0d, commit_kill=0", $time, xif_commit_id);
              sb_state <= SB_WAIT_FINAL_RESULT;
            end
          end
        end

        SB_WAIT_FINAL_RESULT: begin
          if (xif_result_valid && xif_result_ready) begin
            if (xif_result_id !== expected_id) begin
              sb_fail($sformatf("MXFINAL result id mismatch: got %0d expected %0d", xif_result_id, expected_id));
            end else if (xif_result_rd !== exp_final_rd) begin
              sb_fail($sformatf("MXFINAL result rd mismatch: got %0d expected %0d", xif_result_rd, exp_final_rd));
            end else if (!xif_result_we) begin
              sb_fail("MXFINAL result.we was not asserted");
            end else if (xif_result_data !== exp_final_data) begin
              sb_fail($sformatf("MXFINAL result.data unexpected: got 0x%0h, expected 0x%0h", xif_result_data, exp_final_data));
            end else begin
              $display("[%0t] FINAL RESULT ok: id=%0d rd=%0d data=0x%0h we=%0d",
                        $time, xif_result_id, xif_result_rd, xif_result_data, xif_result_we);
              sb_state <= SB_WAIT_FINAL_WB;
            end
          end
        end

        SB_WAIT_FINAL_WB: begin
          if (wb_seen_q) begin
            if (wb_data_q !== exp_final_data) begin
              sb_fail($sformatf("Register file write mismatch: x%0d = 0x%0h, expected 0x%0h", exp_final_rd, wb_data_q, exp_final_data));
            end else begin
              $display("[%0t] FINAL WB     ok: x%0d <= 0x%0h", $time, exp_final_rd, wb_data_q);
              $display("=====================================================");
              $display(" PASS: MXDOTP -> MXFINAL traversed Issue -> Commit -> Result -> WB");
              $display("=====================================================");
              pass_count++;
              sb_state <= SB_DONE;
            end
          end
        end

        SB_DONE:  ; // latched, nothing further to do
        SB_FAIL:  ; // latched, nothing further to do

        default: sb_fail("Scoreboard reached an unknown state");

        endcase
      end
    end
  end

  //----------------------------------------------------------------------------
  // Watchdog: bounds simulation time and reports final PASS/FAIL
  //----------------------------------------------------------------------------

  initial begin
    repeat (TIMEOUT_CYCLES) @(posedge clk_i);
    if (sb_state != SB_DONE) begin
      $display("=====================================================");
      $display(" FAIL: TIMEOUT after %0d cycles - scoreboard stuck in %s",
                TIMEOUT_CYCLES, sb_state.name());
      $display("=====================================================");
      fail_count++;
    end
    $display("Summary: pass=%0d fail=%0d", pass_count, fail_count);

    // $fatal (unlike $display+$finish) makes Verilator - and most other
    // simulators - exit with a non-zero process status. That's what lets
    // `make`/CI actually see a scoreboard failure: verilator_tb.cpp does not
    // (and should not need to) reach into this module's internal signals to
    // find out whether the test passed.
    if (fail_count != 0)
      $fatal(1, "Test FAILED (%0d failure(s))", fail_count);
    else
      $finish;
  end

  //----------------------------------------------------------------------------
  // Waveform dump (VCD - portable across simulators; use a simulator-native
  // wave config for the grouped Issue/Commit/Result/FSM/WB view during
  // interactive runs)
  //----------------------------------------------------------------------------

  initial begin
    $dumpfile("tb_mxdotp_core.vcd");
    $dumpvars(0, tb_mxdotp_core);
  end

endmodule
