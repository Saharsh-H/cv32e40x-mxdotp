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
    // Must match the X_ID_WIDTH / X_RFR_WIDTH used to instantiate the if_xif
    // interface this module is connected to. Passed explicitly from the top
    // level (mxdotp_core_top.sv) rather than pulled off the interface
    // instance, so a parameter mismatch shows up as a port-width mismatch
    // at elaboration instead of silently compiling with the interface's
    // values.
    parameter int X_ID_WIDTH  = 4,
    parameter int X_RFR_WIDTH = 32
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
            issue_if.issue_resp.writeback = 1'b1;
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
                    state_d = commit_if.commit.commit_kill ? MX_IDLE : MX_RESULT;
                end
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
    // Result Interface
    //--------------------------------------------------------------------------

    always_comb begin

        // Default response
        result_if.result_valid = 1'b0;
        result_if.result       = '0;

        // Return a dummy result after commit
        if (state_q == MX_RESULT) begin

            result_if.result_valid = 1'b1;

            result_if.result.id = saved_id;
            result_if.result.rd = saved_rd;
            result_if.result.we = 1'b1;

            // Dummy computation
            result_if.result.data = '0;

        end

    end

    //--------------------------------------------------------------------------
    // Memory Interface (Unused)
    //--------------------------------------------------------------------------

    assign mem_if.mem_valid = 1'b0;
    assign mem_if.mem_req   = '0;

endmodule