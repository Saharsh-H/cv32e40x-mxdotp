//==============================================================================
// File    : mxdotp_xif.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Top-level MXDOTP coprocessor implementing the CORE-V XIF interface.
//
//   Pipelined (see mxdotp_pkg.sv's "pipelined coprocessor" milestone header
//   for the full rationale): MXDOTP, MXFINAL, MX_FUNCT3_DUALREAD_TEST, and
//   MXFUSED each have their own independent slot - own mxdotp_state_t
//   register, own saved-operand/id/rd registers, own execute engine with its
//   own busy/start/done - instead of one shared FSM/engine for all of them.
//   This replaces the earlier single-in-flight design (issue_ready asserted
//   only in one shared MX_IDLE), which was a real, measured throughput cost,
//   not a theoretical one, and was never required by the XIF protocol itself
//   - every channel (issue_req/commit/result) in if_xif.sv already carries an
//   id field specifically to let multiple offloaded instructions be
//   outstanding at once.
//
//   MXDOTP/MXFINAL are RESIDUE-STYLE FORMATS ONLY as of the fused-fast-path
//   milestone (see mxdotp_pkg.sv's MX_SLOT_FUSED milestone header): plain
//   (non-residue) MXFP4/MXFP8 never reach those two slots any more - they go
//   exclusively through the new FUSED slot below, which is self-contained
//   (one instruction, one engine, no mailbox - mxdotp_fused_engine.sv does
//   its own internal front-end/back-end hand-off privately).
//
//   A single-entry mailbox (mailbox_valid_q/mailbox_p1_q/mailbox_p2_q)
//   carries MXDOTP's raw p1/p2 to MXFINAL: MXDOTP's engine posts into it once
//   free, MXFINAL's engine snapshots (consumes) it the instant its own
//   engine starts, immediately freeing it for the next MXDOTP. MXDOTP's own
//   COMPUTE->RESULT transition is gated on the mailbox actually being free
//   (not just on its own engine being done) - if two MXDOTPs are ever issued
//   back-to-back with no intervening MXFINAL (not the expected software
//   pattern, but not something the hardware should silently corrupt on
//   either), the second one simply stalls in COMPUTE until the mailbox is
//   freed, rather than overwriting an unconsumed result.
//
//   Because up to four instructions (one per slot) can be outstanding at
//   once, but CV32E40X retires strictly in program order, results are
//   delivered through a small in-order queue (see mx_slot_e/MX_ORDER_DEPTH
//   in mxdotp_pkg.sv): only the oldest still-outstanding instruction's slot
//   may present result_valid, even if a more-recently-issued slot's engine
//   finished computing first.
//
//==============================================================================

module mxdotp_xif
    import cv32e40x_pkg::*;
    import mxdotp_pkg::*;
#(
    // Must match the X_ID_WIDTH / X_RFR_WIDTH / X_RFW_WIDTH used to
    // instantiate the if_xif interface this module is connected to. Passed
    // explicitly from the top level (mxdotp_core_top.sv) rather than pulled
    // off the interface instance, so a parameter mismatch shows up as a
    // port-width mismatch at elaboration instead of silently compiling with
    // the interface's values.
    parameter int X_ID_WIDTH  = 4,
    parameter int X_RFR_WIDTH = 32,
    parameter int X_RFW_WIDTH = 32
)
(
    input  logic clk_i,
    input  logic rst_ni,

    //--------------------------------------------------------------------------
    // XIF Interfaces
    //--------------------------------------------------------------------------

    if_xif.coproc_issue      issue_if,
    if_xif.coproc_commit     commit_if,
    if_xif.coproc_result     result_if,
    if_xif.coproc_mem        mem_if,
    if_xif.coproc_mem_result mem_result_if
);

    // Elaboration-time sanity check that the parameters above actually match
    // the interface instance wired in. Simulation-only; synthesis tools that
    // don't like $error in an initial block can strip this between the
    // translate_off/on pragmas.
    // synthesis translate_off
    initial begin
        assert (X_ID_WIDTH == issue_if.X_ID_WIDTH) else
            $error("mxdotp_xif: X_ID_WIDTH (%0d) does not match issue_if.X_ID_WIDTH (%0d)",
                    X_ID_WIDTH, issue_if.X_ID_WIDTH);
        assert (X_RFR_WIDTH == issue_if.X_RFR_WIDTH) else
            $error("mxdotp_xif: X_RFR_WIDTH (%0d) does not match issue_if.X_RFR_WIDTH (%0d)",
                    X_RFR_WIDTH, issue_if.X_RFR_WIDTH);
        assert (X_RFW_WIDTH == result_if.X_RFW_WIDTH) else
            $error("mxdotp_xif: X_RFW_WIDTH (%0d) does not match result_if.X_RFW_WIDTH (%0d)",
                    X_RFW_WIDTH, result_if.X_RFW_WIDTH);
    end
    // synthesis translate_on

    //--------------------------------------------------------------------------
    // Decoder (combinational - decodes whatever instruction is CURRENTLY
    // presented on the issue port, regardless of which slots are busy)
    //--------------------------------------------------------------------------

    logic       is_mx;
    logic [2:0] mx_operation;
    logic [1:0] mx_format;

    logic [4:0] rd;
    logic [4:0] rs1;
    logic [4:0] rs2;
    logic [4:0] rs3;

    mxdotp_decoder decoder_i (
        .instr        (issue_if.issue_req.instr),
        .is_mx        (is_mx),
        .mx_operation (mx_operation),
        .mx_format    (mx_format),
        .rd           (rd),
        .rs1          (rs1),
        .rs2          (rs2),
        .rs3          (rs3)
    );

    //--------------------------------------------------------------------------
    // Per-slot state registers
    //--------------------------------------------------------------------------

    mxdotp_state_t dotp_state_q,  dotp_state_d;
    mxdotp_state_t final_state_q, final_state_d;
    mxdotp_state_t dr_state_q,    dr_state_d;
    mxdotp_state_t fused_state_q, fused_state_d;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            dotp_state_q  <= MX_IDLE;
            final_state_q <= MX_IDLE;
            dr_state_q    <= MX_IDLE;
            fused_state_q <= MX_IDLE;
        end else begin
            dotp_state_q  <= dotp_state_d;
            final_state_q <= final_state_d;
            dr_state_q    <= dr_state_d;
            fused_state_q <= fused_state_d;
        end
    end

    //--------------------------------------------------------------------------
    // Issue Interface
    //--------------------------------------------------------------------------
    //
    // issue_ready is no longer one shared bit - it reflects whichever slot
    // the CURRENTLY PRESENTED instruction's own mx_operation maps to, so
    // e.g. MXFINAL can be issued (and committed) while a preceding MXDOTP is
    // still computing. Non-MX instructions (is_mx == 0) always see ready=1:
    // they have nothing to do with any of our slots, and must never be
    // stalled by our own busyness.
    //--------------------------------------------------------------------------

    assign issue_if.issue_ready =
        !is_mx                                    ? 1'b1 :
        (mx_operation == MX_FUNCT3_DOTP)           ? (dotp_state_q  == MX_IDLE) :
        (mx_operation == MX_FUNCT3_FINAL)          ? (final_state_q == MX_IDLE) :
        (mx_operation == MX_FUNCT3_DUALREAD_TEST)  ? (dr_state_q    == MX_IDLE) :
        (mx_operation == MX_FUNCT3_FUSED)          ? (fused_state_q == MX_IDLE) :
        1'b1;

    always_comb begin
        issue_if.issue_resp = '0;

        if (issue_if.issue_valid && is_mx && issue_if.issue_ready) begin
            issue_if.issue_resp.accept = 1'b1;
            // MXDOTP stages its raw dot-product sums in the mailbox and does
            // not touch rd; MXFINAL and MXFUSED (which each apply the MX
            // scale(s) and combine with an old FP32 accumulator) produce an
            // architectural result. This is checked against
            // cv32e40x_id_stage.sv: issue_resp.writeback drives xif_we,
            // which feeds rf_we = rf_we_dec || xif_we and flows straight
            // through to rf_we_wb_o in the WB stage - so setting it to 0
            // here genuinely suppresses the register write. (dualwrite is
            // still a dead field in this checkout - only dualread now has a
            // real consumer, see below - so dualwrite is left at its
            // default 0 for every MX op; MXFINAL/MXFUSED only ever write a
            // single FP32 word, never a register pair.)
            issue_if.issue_resp.writeback = (mx_operation == MX_FUNCT3_FINAL) ||
                                             (mx_operation == MX_FUNCT3_DUALREAD_TEST) ||
                                             (mx_operation == MX_FUNCT3_FUSED);
            // MXDOTP's rs1/rs2/rs3 (A/B/AR) are ALWAYS 64-bit dual-read (now
            // exclusively for residue-style formats - see mxdotp_pkg.sv's
            // MX_SLOT_FUSED milestone header). MXFINAL's rs1/rs2
            // (scales/old_acc) are conversely NEVER dual-read. MXFUSED also
            // dual-reads all three of its operands: rs1=A, rs2=B (same
            // shape as MXDOTP's) and rs3={scales,old_acc} (packed like
            // MXFINAL's rs1 is today, just relocated and dual-read since it
            // now needs the full 64 bits). MX_FUNCT3_DUALREAD_TEST also
            // requests it, independent of format, for its own validation
            // purpose (see mxdotp_pkg.sv).
            issue_if.issue_resp.dualread  = (mx_operation == MX_FUNCT3_DOTP) ||
                                             (mx_operation == MX_FUNCT3_DUALREAD_TEST) ||
                                             (mx_operation == MX_FUNCT3_FUSED);
        end
    end

    // Acceptance pulses - each is high for exactly the one cycle a given
    // slot's instruction is accepted at issue. Mutually exclusive by
    // construction (mx_operation is a single decoded value).
    logic accept_dotp, accept_final, accept_dr, accept_fused;
    assign accept_dotp  = issue_if.issue_valid && issue_if.issue_ready && is_mx && (mx_operation == MX_FUNCT3_DOTP);
    assign accept_final = issue_if.issue_valid && issue_if.issue_ready && is_mx && (mx_operation == MX_FUNCT3_FINAL);
    assign accept_dr    = issue_if.issue_valid && issue_if.issue_ready && is_mx && (mx_operation == MX_FUNCT3_DUALREAD_TEST);
    assign accept_fused = issue_if.issue_valid && issue_if.issue_ready && is_mx && (mx_operation == MX_FUNCT3_FUSED);

    //--------------------------------------------------------------------------
    // Saved instruction registers - one independent set per slot
    //--------------------------------------------------------------------------

    // DOTP: rs1=A, rs2=B, rs3=AR. No saved_rd/saved_format - DOTP never
    // writes and its own arithmetic never depends on format (see
    // mxdotp_pkg.sv). Residue-style formats only, post-split.
    logic [X_ID_WIDTH-1:0]  dotp_saved_id;
    logic [X_RFR_WIDTH-1:0] dotp_saved_rs1, dotp_saved_rs2, dotp_saved_rs3;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            dotp_saved_id  <= '0;
            dotp_saved_rs1 <= '0;
            dotp_saved_rs2 <= '0;
            dotp_saved_rs3 <= '0;
        end else if (accept_dotp) begin
            dotp_saved_id  <= issue_if.issue_req.id;
            dotp_saved_rs1 <= issue_if.issue_req.rs[0];
            dotp_saved_rs2 <= issue_if.issue_req.rs[1];
            dotp_saved_rs3 <= issue_if.issue_req.rs[2];
        end
    end

    // FINAL: rs1=scales, rs2=old_acc. Residue-style formats only, post-
    // split - always includes the residue/p2 contribution unconditionally
    // now (see mxdotp_final_engine.sv), so no saved_format register is
    // needed any more; only saved_rd (architectural destination) remains.
    logic [X_ID_WIDTH-1:0]  final_saved_id;
    logic [4:0]             final_saved_rd;
    logic [X_RFR_WIDTH-1:0] final_saved_rs1, final_saved_rs2;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            final_saved_id  <= '0;
            final_saved_rd  <= '0;
            final_saved_rs1 <= '0;
            final_saved_rs2 <= '0;
        end else if (accept_final) begin
            final_saved_id  <= issue_if.issue_req.id;
            final_saved_rd  <= rd;
            final_saved_rs1 <= issue_if.issue_req.rs[0];
            final_saved_rs2 <= issue_if.issue_req.rs[1];
        end
    end

    // MX_FUNCT3_DUALREAD_TEST: rs1=base register only (rs2/rs3 are read per
    // the interface's global dualread bit but never looked at - see
    // mxdotp_pkg.sv).
    logic [X_ID_WIDTH-1:0]  dr_saved_id;
    logic [4:0]             dr_saved_rd;
    logic [X_RFR_WIDTH-1:0] dr_saved_rs1;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            dr_saved_id  <= '0;
            dr_saved_rd  <= '0;
            dr_saved_rs1 <= '0;
        end else if (accept_dr) begin
            dr_saved_id  <= issue_if.issue_req.id;
            dr_saved_rd  <= rd;
            dr_saved_rs1 <= issue_if.issue_req.rs[0];
        end
    end

    // MXFUSED: rs1=A, rs2=B, rs3={scales,old_acc} (all three dual-read - see
    // issue_resp.dualread above). Needs saved_rd (architectural destination)
    // and saved_format (element format - MX_FMT_MXFP4 implemented,
    // MX_FMT_MXFP8 stubbed - see mxdotp_fused_engine.sv).
    logic [X_ID_WIDTH-1:0]  fused_saved_id;
    logic [4:0]             fused_saved_rd;
    logic [1:0]             fused_saved_format;
    logic [X_RFR_WIDTH-1:0] fused_saved_rs1, fused_saved_rs2, fused_saved_rs3;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            fused_saved_id     <= '0;
            fused_saved_rd     <= '0;
            fused_saved_format <= '0;
            fused_saved_rs1    <= '0;
            fused_saved_rs2    <= '0;
            fused_saved_rs3    <= '0;
        end else if (accept_fused) begin
            fused_saved_id     <= issue_if.issue_req.id;
            fused_saved_rd     <= rd;
            fused_saved_format <= mx_format;
            fused_saved_rs1    <= issue_if.issue_req.rs[0];
            fused_saved_rs2    <= issue_if.issue_req.rs[1];
            fused_saved_rs3    <= issue_if.issue_req.rs[2];
        end
    end

    //--------------------------------------------------------------------------
    // Mailbox: single-entry producer/consumer buffer carrying MXDOTP's raw
    // p1/p2 to MXFINAL. See file header for the full protocol. RESIDUE-STYLE
    // FORMATS ONLY now - MXFUSED never touches this; it has no cross-
    // instruction hand-off at all (see mxdotp_fused_engine.sv's own internal
    // front-end/back-end register instead).
    //--------------------------------------------------------------------------

    logic                          mailbox_valid_q;
    logic signed [PSUM_WIDTH-1:0]  mailbox_p1_q, mailbox_p2_q;

    //--------------------------------------------------------------------------
    // DOTP slot: engine, mailbox-write handshake, FSM
    //--------------------------------------------------------------------------

    logic dotp_engine_start, dotp_engine_busy, dotp_engine_done;
    logic signed [PSUM_WIDTH-1:0] dotp_engine_p1, dotp_engine_p2;

    mxdotp_dotp_engine #(
        .X_RFR_WIDTH (X_RFR_WIDTH)
    ) dotp_engine_i (
        .clk_i   (clk_i),
        .rst_ni  (rst_ni),
        .start_i (dotp_engine_start),
        .busy_o  (dotp_engine_busy),
        .done_o  (dotp_engine_done),
        .rs1_i   (dotp_saved_rs1),
        .rs2_i   (dotp_saved_rs2),
        .rs3_i   (dotp_saved_rs3),
        .p1_o    (dotp_engine_p1),
        .p2_o    (dotp_engine_p2)
    );

    assign dotp_engine_start = (dotp_state_q == MX_WAIT_COMMIT) &&
                                commit_if.commit_valid &&
                                (commit_if.commit.id == dotp_saved_id) &&
                                !commit_if.commit.commit_kill;

    // Result-pending latch: survives the one-cycle dotp_engine_done pulse
    // until the mailbox is actually free to receive it. dotp_mailbox_write
    // covers both the common "mailbox already free the instant done_o
    // fires" fast path and the "mailbox was still occupied, wait" delayed
    // path with the same combinational expression - see mxdotp_pkg.sv's
    // milestone header for why the delayed path exists at all (protects
    // against two MXDOTPs issued back-to-back with no intervening MXFINAL).
    logic dotp_result_pending_q;
    logic dotp_mailbox_write;

    assign dotp_mailbox_write = (dotp_engine_done || dotp_result_pending_q) && !mailbox_valid_q;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            dotp_result_pending_q <= 1'b0;
        end else if (dotp_mailbox_write) begin
            dotp_result_pending_q <= 1'b0;  // just consumed into the mailbox this cycle
        end else if (dotp_engine_done) begin
            dotp_result_pending_q <= 1'b1;  // mailbox was occupied - remember and retry
        end
    end

    always_comb begin
        dotp_state_d = dotp_state_q;
        unique case (dotp_state_q)
            MX_IDLE: begin
                if (accept_dotp) dotp_state_d = MX_WAIT_COMMIT;
            end
            MX_WAIT_COMMIT: begin
                if (commit_if.commit_valid && (commit_if.commit.id == dotp_saved_id)) begin
                    dotp_state_d = commit_if.commit.commit_kill ? MX_IDLE : MX_COMPUTE;
                end
            end
            MX_COMPUTE: begin
                if (dotp_mailbox_write) dotp_state_d = MX_RESULT;
            end
            MX_RESULT: begin
                if ((order_head_tag == MX_SLOT_DOTP) && result_if.result_valid && result_if.result_ready)
                    dotp_state_d = MX_IDLE;
            end
            default: dotp_state_d = MX_IDLE;
        endcase
    end

    //--------------------------------------------------------------------------
    // FINAL slot: engine, mailbox-read handshake, FSM
    //--------------------------------------------------------------------------

    logic final_engine_start, final_engine_busy, final_engine_done;
    logic [X_RFW_WIDTH-1:0] final_result_data;

    mxdotp_final_engine #(
        .X_RFR_WIDTH (X_RFR_WIDTH),
        .X_RFW_WIDTH (X_RFW_WIDTH)
    ) final_engine_i (
        .clk_i       (clk_i),
        .rst_ni      (rst_ni),
        .start_i     (final_engine_start),
        .busy_o      (final_engine_busy),
        .done_o      (final_engine_done),
        .rs1_i       (final_saved_rs1),
        .rs2_i       (final_saved_rs2),
        .p1_i        (mailbox_p1_q),
        .p2_i        (mailbox_p2_q),
        .result_data (final_result_data)
    );

    // The genuine data dependency: FINAL's engine cannot start until the
    // mailbox actually holds valid data. Two disjuncts, not one - this
    // matters for timing, not just correctness:
    //   1) (WAIT_COMMIT && commit_valid && ... && mailbox_valid_q): the
    //      common case - mailbox is ALREADY valid the same cycle commit
    //      arrives, so start immediately, same cycle, exactly like DOTP's
    //      own engine start below. An earlier version of this only had
    //      disjunct 2 (gated on final_state_q==MX_COMPUTE, which is itself
    //      one cycle after commit_valid, a registered transition) - that
    //      cost a real, unnecessary extra cycle in this common case,
    //      caught by comparing before/after cycle counts on the same test:
    //      FINAL's commit->result went from 3 cycles to 4, a regression,
    //      not an improvement, for exactly the pair this milestone was
    //      supposed to speed up.
    //   2) (MX_COMPUTE && mailbox_valid_q): the genuine-wait case - commit
    //      already happened (state is already MX_COMPUTE) but the mailbox
    //      wasn't ready yet at that moment; fire the instant it becomes
    //      ready on a later cycle. This is the only case that should ever
    //      cost an extra cycle, because it reflects an actual, unavoidable
    //      data dependency, not an artifact of how the condition was written.
    // The two disjuncts don't double-fire: disjunct 1 firing clears
    // mailbox_valid_q the same edge, so by the time final_state_q has
    // registered into MX_COMPUTE (next cycle), disjunct 2's mailbox_valid_q
    // term is already false.
    assign final_engine_start =
        ((final_state_q == MX_WAIT_COMMIT) && commit_if.commit_valid &&
         (commit_if.commit.id == final_saved_id) && !commit_if.commit.commit_kill &&
         mailbox_valid_q && !final_engine_busy) ||
        ((final_state_q == MX_COMPUTE) && mailbox_valid_q && !final_engine_busy);

    always_comb begin
        final_state_d = final_state_q;
        unique case (final_state_q)
            MX_IDLE: begin
                if (accept_final) final_state_d = MX_WAIT_COMMIT;
            end
            MX_WAIT_COMMIT: begin
                if (commit_if.commit_valid && (commit_if.commit.id == final_saved_id)) begin
                    final_state_d = commit_if.commit.commit_kill ? MX_IDLE : MX_COMPUTE;
                end
            end
            MX_COMPUTE: begin
                if (final_engine_done) final_state_d = MX_RESULT;
            end
            MX_RESULT: begin
                if ((order_head_tag == MX_SLOT_FINAL) && result_if.result_valid && result_if.result_ready)
                    final_state_d = MX_IDLE;
            end
            default: final_state_d = MX_IDLE;
        endcase
    end

    // Mailbox update: dotp_mailbox_write (mailbox empty -> full) and
    // final_engine_start (mailbox full -> empty) are mutually exclusive by
    // construction - the former requires !mailbox_valid_q, the latter
    // requires mailbox_valid_q - so there is no priority-ordering question
    // between these two branches; at most one can be true in any cycle.
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            mailbox_valid_q <= 1'b0;
            mailbox_p1_q    <= '0;
            mailbox_p2_q    <= '0;
        end else begin
            if (dotp_mailbox_write) begin
                mailbox_valid_q <= 1'b1;
                mailbox_p1_q    <= dotp_engine_p1;
                mailbox_p2_q    <= dotp_engine_p2;
            end else if (final_engine_start) begin
                mailbox_valid_q <= 1'b0;
            end
        end
    end

    //--------------------------------------------------------------------------
    // MX_FUNCT3_DUALREAD_TEST slot: validation-only, not part of the real
    // MXDOTP ISA (see mxdotp_pkg.sv). Kept at its own pre-existing timing
    // (LATENCY_CYCLES-shaped, same as this project's original single-engine
    // design) - this milestone is about DOTP/FINAL/FUSED throughput, not
    // about this instruction's own speed, so its internal timing is
    // deliberately left unchanged. Small enough (pure bit-selection, no real
    // arithmetic) that it's kept inline here rather than as a separate
    // engine module.
    //--------------------------------------------------------------------------

    localparam int DR_LATENCY_CYCLES = 2;  // matches this project's original LATENCY_CYCLES
    localparam int DR_CNT_WIDTH = $clog2(DR_LATENCY_CYCLES + 1);

    logic [DR_CNT_WIDTH-1:0] dr_cycle_cnt_q;
    logic                    dr_busy_q;
    logic                    dr_engine_start, dr_engine_done;
    logic [31:0]             dr_rs1_hi;
    logic [X_RFW_WIDTH-1:0]  dr_result_data_q;

    // Upper 32 bits of the (possibly dual-read) dr_saved_rs1 container -
    // only meaningful when X_RFR_WIDTH >= 64 (this project always
    // instantiates with 64 - see mxdotp_core_top.sv - but guard rather than
    // assume, same as the original mxdotp_execute.sv did).
    generate
        if (X_RFR_WIDTH >= 64) begin : gen_dr_rs1_hi
            assign dr_rs1_hi = dr_saved_rs1[63:32];
        end else begin : gen_no_dr_rs1_hi
            assign dr_rs1_hi = '0;
        end
    endgenerate

    assign dr_engine_start = (dr_state_q == MX_WAIT_COMMIT) &&
                              commit_if.commit_valid &&
                              (commit_if.commit.id == dr_saved_id) &&
                              !commit_if.commit.commit_kill;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            dr_busy_q      <= 1'b0;
            dr_cycle_cnt_q <= '0;
        end else if (dr_engine_start && !dr_busy_q) begin
            dr_busy_q      <= 1'b1;
            dr_cycle_cnt_q <= DR_CNT_WIDTH'(DR_LATENCY_CYCLES - 1);
        end else if (dr_busy_q) begin
            if (dr_cycle_cnt_q == '0)
                dr_busy_q <= 1'b0;
            else
                dr_cycle_cnt_q <= dr_cycle_cnt_q - 1'b1;
        end
    end

    assign dr_engine_done = dr_busy_q && (dr_cycle_cnt_q == '0);

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            dr_result_data_q <= '0;
        end else if (dr_engine_done) begin
            dr_result_data_q <= X_RFW_WIDTH'(dr_rs1_hi);
        end
    end

    always_comb begin
        dr_state_d = dr_state_q;
        unique case (dr_state_q)
            MX_IDLE: begin
                if (accept_dr) dr_state_d = MX_WAIT_COMMIT;
            end
            MX_WAIT_COMMIT: begin
                if (commit_if.commit_valid && (commit_if.commit.id == dr_saved_id)) begin
                    dr_state_d = commit_if.commit.commit_kill ? MX_IDLE : MX_COMPUTE;
                end
            end
            MX_COMPUTE: begin
                if (dr_engine_done) dr_state_d = MX_RESULT;
            end
            MX_RESULT: begin
                if ((order_head_tag == MX_SLOT_DUALREAD) && result_if.result_valid && result_if.result_ready)
                    dr_state_d = MX_IDLE;
            end
            default: dr_state_d = MX_IDLE;
        endcase
    end

    //--------------------------------------------------------------------------
    // FUSED slot: engine, FSM. Self-contained - no mailbox, no cross-
    // instruction data dependency (unlike FINAL, which must wait on DOTP's
    // mailbox). Its start condition is therefore a single-disjunct
    // expression, structurally identical to DOTP's own engine_start above,
    // not FINAL's two-disjunct one.
    //--------------------------------------------------------------------------

    logic fused_engine_start, fused_engine_busy, fused_engine_done;
    logic [X_RFW_WIDTH-1:0] fused_result_data;

    mxdotp_fused_engine #(
        .X_RFR_WIDTH (X_RFR_WIDTH),
        .X_RFW_WIDTH (X_RFW_WIDTH)
    ) fused_engine_i (
        .clk_i       (clk_i),
        .rst_ni      (rst_ni),
        .start_i     (fused_engine_start),
        .busy_o      (fused_engine_busy),
        .done_o      (fused_engine_done),
        .rs1_i       (fused_saved_rs1),
        .rs2_i       (fused_saved_rs2),
        .rs3_i       (fused_saved_rs3),
        .mx_format_i (fused_saved_format),
        .result_data (fused_result_data)
    );

    assign fused_engine_start = (fused_state_q == MX_WAIT_COMMIT) &&
                                 commit_if.commit_valid &&
                                 (commit_if.commit.id == fused_saved_id) &&
                                 !commit_if.commit.commit_kill;

    always_comb begin
        fused_state_d = fused_state_q;
        unique case (fused_state_q)
            MX_IDLE: begin
                if (accept_fused) fused_state_d = MX_WAIT_COMMIT;
            end
            MX_WAIT_COMMIT: begin
                if (commit_if.commit_valid && (commit_if.commit.id == fused_saved_id)) begin
                    fused_state_d = commit_if.commit.commit_kill ? MX_IDLE : MX_COMPUTE;
                end
            end
            MX_COMPUTE: begin
                if (fused_engine_done) fused_state_d = MX_RESULT;
            end
            MX_RESULT: begin
                if ((order_head_tag == MX_SLOT_FUSED) && result_if.result_valid && result_if.result_ready)
                    fused_state_d = MX_IDLE;
            end
            default: fused_state_d = MX_IDLE;
        endcase
    end

    //--------------------------------------------------------------------------
    // In-order result delivery queue
    //--------------------------------------------------------------------------
    //
    // Tags which slot produced each outstanding instruction, in the order
    // they were accepted. Depth exactly matches the number of independent
    // slots (MX_NUM_SLOTS == MX_ORDER_DEPTH == 4) since each slot can have
    // at most one instruction outstanding at a time by construction - four
    // is a real bound, not a heuristic. Only the head entry's slot may
    // present result_valid, so results reach the core in acceptance order
    // even though the four slots can finish computing in any order.
    //--------------------------------------------------------------------------

    mx_slot_e order_q [0:MX_ORDER_DEPTH-1];
    logic [1:0] order_head_ptr, order_tail_ptr;
    logic [2:0] order_count;  // must represent 0..MX_NUM_SLOTS (4) inclusive - [1:0]
                              // (0..3) was one bit short once a fourth slot could be
                              // simultaneously outstanding.

    wire mx_slot_e order_head_tag = order_q[order_head_ptr];
    wire           order_empty    = (order_count == 3'd0);

    logic push_any;
    assign push_any = accept_dotp || accept_final || accept_dr || accept_fused;  // mutually exclusive

    logic pop_any;
    assign pop_any = result_if.result_valid && result_if.result_ready;

    integer oq_i;
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            order_head_ptr <= '0;
            order_tail_ptr <= '0;
            order_count    <= '0;
            for (oq_i = 0; oq_i < MX_ORDER_DEPTH; oq_i++) order_q[oq_i] <= MX_SLOT_DOTP;
        end else begin
            if (push_any) begin
                order_q[order_tail_ptr] <= accept_dotp  ? MX_SLOT_DOTP  :
                                            accept_final ? MX_SLOT_FINAL :
                                            accept_dr    ? MX_SLOT_DUALREAD :
                                                            MX_SLOT_FUSED;
                order_tail_ptr <= (order_tail_ptr == MX_ORDER_DEPTH-1) ? 2'd0 : order_tail_ptr + 2'd1;
            end
            if (pop_any) begin
                order_head_ptr <= (order_head_ptr == MX_ORDER_DEPTH-1) ? 2'd0 : order_head_ptr + 2'd1;
            end
            unique case ({push_any, pop_any})
                2'b10:   order_count <= order_count + 3'd1;
                2'b01:   order_count <= order_count - 3'd1;
                default: order_count <= order_count;  // 00 (no change) or 11 (push and pop net to no change)
            endcase
        end
    end

    //--------------------------------------------------------------------------
    // Result Interface: driven by whichever slot is at the head of the
    // order queue, and only once that specific slot has actually reached
    // its own MX_RESULT state.
    //--------------------------------------------------------------------------

    always_comb begin
        result_if.result_valid = 1'b0;
        result_if.result       = '0;

        if (!order_empty) begin
            unique case (order_head_tag)
                MX_SLOT_DOTP: begin
                    if (dotp_state_q == MX_RESULT) begin
                        result_if.result_valid = 1'b1;
                        result_if.result.id    = dotp_saved_id;
                        result_if.result.rd    = 5'd0;
                        result_if.result.we    = 1'b0;
                        result_if.result.data  = '0;
                    end
                end
                MX_SLOT_FINAL: begin
                    if (final_state_q == MX_RESULT) begin
                        result_if.result_valid = 1'b1;
                        result_if.result.id    = final_saved_id;
                        result_if.result.rd    = final_saved_rd;
                        result_if.result.we    = 1'b1;
                        result_if.result.data  = final_result_data;
                    end
                end
                MX_SLOT_DUALREAD: begin
                    if (dr_state_q == MX_RESULT) begin
                        result_if.result_valid = 1'b1;
                        result_if.result.id    = dr_saved_id;
                        result_if.result.rd    = dr_saved_rd;
                        result_if.result.we    = 1'b1;
                        result_if.result.data  = dr_result_data_q;
                    end
                end
                MX_SLOT_FUSED: begin
                    if (fused_state_q == MX_RESULT) begin
                        result_if.result_valid = 1'b1;
                        result_if.result.id    = fused_saved_id;
                        result_if.result.rd    = fused_saved_rd;
                        result_if.result.we    = 1'b1;
                        result_if.result.data  = fused_result_data;
                    end
                end
                default: ;  // result_valid stays 0
            endcase
        end
    end

    //--------------------------------------------------------------------------
    // Memory Interface (Unused)
    //--------------------------------------------------------------------------

    assign mem_if.mem_valid = 1'b0;
    assign mem_if.mem_req   = '0;

endmodule
