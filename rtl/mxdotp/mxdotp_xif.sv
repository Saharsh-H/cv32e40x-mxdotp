//==============================================================================
// File    : mxdotp_xif.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Top-level MXDOTP coprocessor implementing the CORE-V XIF interface.
//
//   Assumes at most one MX instruction in flight at a time (issue_ready is
//   only asserted in MX_IDLE), so the commit.id vs. saved_id check is not
//   required. If overlapping issue is added later, that check must be added.
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
    parameter int X_RFW_WIDTH = 32   // genuinely separate from X_RFR_WIDTH now -
                                      // previously mxdotp_execute was instantiated
                                      // with X_RFW_WIDTH(X_RFR_WIDTH), harmless only
                                      // because both happened to be 32 today
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
    // Internal Decode Signals
    //--------------------------------------------------------------------------

    logic       is_mx;
    logic [2:0] mx_operation;
    logic [1:0] mx_format;

    logic [4:0] rd;
    logic [4:0] rs1;
    logic [4:0] rs2;
    logic [4:0] rs3;

    //--------------------------------------------------------------------------
    // Saved Instruction Information
    //--------------------------------------------------------------------------

    // Metadata
    logic [X_ID_WIDTH-1:0] saved_id;
    logic [4:0]             saved_rd;
    logic [1:0]             saved_format;
    logic [2:0]             saved_operation;

    // Source operands (rs1, rs2, rs3 arrive pre-forwarded via issue_req.rs[])
    logic [X_RFR_WIDTH-1:0] saved_rs [0:MX_NUM_RS-1];

    //------------------------------------------------------------------------------
    // Controller State Machine
    //------------------------------------------------------------------------------
    //
    // mxdotp_state_t is defined once, in mxdotp_pkg, and used here via the
    // package import above (no local redeclaration).

    mxdotp_state_t state_q, state_d;

    //--------------------------------------------------------------------------
    // Decoder
    //--------------------------------------------------------------------------

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
    // Issue Interface
    //--------------------------------------------------------------------------

    // Only ready to accept a new instruction when idle.
    assign issue_if.issue_ready = (state_q == MX_IDLE);

    always_comb begin

        // Default response
        issue_if.issue_resp = '0;

        // Accept one MX instruction when idle.
        if (issue_if.issue_valid && state_q == MX_IDLE && is_mx)
        begin
            issue_if.issue_resp.accept    = 1'b1;
            // MXDOTP stages its scaled sum-of-products in mxdotp_execute's
            // private pending_sop_q register and does not touch rd; only
            // MXFINAL (which combines that pending value with rs1's old FP32
            // accumulator) produces an architectural result. This is checked
            // against cv32e40x_id_stage.sv: issue_resp.writeback drives
            // xif_we, which feeds rf_we = rf_we_dec || xif_we and flows
            // straight through to rf_we_wb_o in the WB stage - so setting it
            // to 0 here genuinely suppresses the register write, unlike
            // dualread/dualwrite which have no consumer in this core at all.
            issue_if.issue_resp.writeback = (mx_operation == MX_FUNCT3_FINAL);
        end

    end

    //--------------------------------------------------------------------------
    // FSM Next-State Logic
    //--------------------------------------------------------------------------

    always_comb begin

        state_d = state_q;

        unique case (state_q)

            //--------------------------------------------------------------
            // Wait for an MX instruction
            //--------------------------------------------------------------
            MX_IDLE: begin
                if (issue_if.issue_valid && is_mx)
                    state_d = MX_WAIT_COMMIT;
            end

            //--------------------------------------------------------------
            // Wait until CPU commits the instruction
            //--------------------------------------------------------------
            MX_WAIT_COMMIT: begin
                if (commit_if.commit_valid) begin
                    state_d = commit_if.commit.commit_kill ? MX_IDLE : MX_COMPUTE;
                end
            end

            //--------------------------------------------------------------
            // Wait for mxdotp_execute's start_i/done_o handshake
            //--------------------------------------------------------------
            MX_COMPUTE: begin
                if (exec_done)
                    state_d = MX_RESULT;
            end

            //--------------------------------------------------------------
            // Wait until CPU accepts our result
            //--------------------------------------------------------------
            MX_RESULT: begin
                if (result_if.result_ready)
                    state_d = MX_IDLE;
            end

            default: state_d = MX_IDLE;

        endcase

    end

    //--------------------------------------------------------------------------
    // State Register
    //--------------------------------------------------------------------------

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni)
            state_q <= MX_IDLE;
        else
            state_q <= state_d;
    end

    //--------------------------------------------------------------------------
    // Instruction Register
    //--------------------------------------------------------------------------

    integer i;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin

            saved_id        <= '0;
            saved_rd        <= '0;
            saved_format    <= '0;
            saved_operation <= '0;

            for (i = 0; i < MX_NUM_RS; i++)
                saved_rs[i] <= '0;

        end else begin
            if (state_q == MX_IDLE &&
                issue_if.issue_valid &&
                issue_if.issue_resp.accept) begin

                saved_id        <= issue_if.issue_req.id;
                saved_rd        <= rd;
                saved_format    <= mx_format;
                saved_operation <= mx_operation;

                for (i = 0; i < MX_NUM_RS; i++)
                    saved_rs[i] <= issue_if.issue_req.rs[i];
            end
        end
    end

    //--------------------------------------------------------------------------
    // Execute (real MXFP8 k=4 datapath - see mxdotp_execute.sv. This
    // handshake shape is unchanged from the earlier placeholder version)
    //--------------------------------------------------------------------------

    logic [X_RFW_WIDTH-1:0] exec_result;
    logic                   exec_start;
    logic                   exec_done;

    // Pulse start_i for exactly one cycle: the same cycle commit_valid
    // fires with commit_kill=0, which is also the cycle state_q is about
    // to transition MX_WAIT_COMMIT -> MX_COMPUTE. saved_rs/saved_operation/
    // saved_format are already valid and stable by this point (captured
    // back at issue), so mxdotp_execute's own start_i-triggered capture
    // sees correct values.
    assign exec_start = (state_q == MX_WAIT_COMMIT) &&
                         commit_if.commit_valid &&
                         !commit_if.commit.commit_kill;

    mxdotp_execute #(
        .X_RFR_WIDTH (X_RFR_WIDTH),
        .X_RFW_WIDTH (X_RFW_WIDTH)
    ) execute_i (
        .clk_i        (clk_i),
        .rst_ni       (rst_ni),
        .start_i      (exec_start),
        .done_o       (exec_done),
        .rs1          (saved_rs[0]),
        .rs2          (saved_rs[1]),
        .rs3          (saved_rs[2]),
        .mx_operation (saved_operation),
        .mx_format    (saved_format),
        .result_data  (exec_result)
    );

    //--------------------------------------------------------------------------
    // Result Interface
    //--------------------------------------------------------------------------

    always_comb begin

        // Default response
        result_if.result_valid = 1'b0;
        result_if.result       = '0;

        if (state_q == MX_RESULT) begin

            result_if.result_valid = 1'b1;

            result_if.result.id   = saved_id;
            result_if.result.rd   = saved_rd;
            // Consistent with issue_resp.writeback above: MXDOTP has no
            // architectural result. The core already ignores this write for
            // MXDOTP via issue_resp.writeback, but drive it accurately here
            // too rather than relying solely on that - our own testbench's
            // xif_result_we monitor reads this field directly.
            result_if.result.we   = (saved_operation == MX_FUNCT3_FINAL);
            result_if.result.data = exec_result;

        end

    end

    //--------------------------------------------------------------------------
    // Memory Interface (Unused)
    //--------------------------------------------------------------------------

    assign mem_if.mem_valid = 1'b0;
    assign mem_if.mem_req   = '0;

endmodule
