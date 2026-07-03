//==============================================================================
// File    : mxdotp_xif.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Top-level MXDOTP coprocessor implementing the CORE-V XIF interface.
//
//==============================================================================

module mxdotp_xif
    import cv32e40x_pkg::*;
    import mxdotp_pkg::*;
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

    //--------------------------------------------------------------------------
    // Internal Decode Signals
    //--------------------------------------------------------------------------

    logic       is_mx;
    logic [2:0] mx_operation;
    logic [6:0] mx_format;

    logic [4:0] rd;
    logic [4:0] rs1;
    logic [4:0] rs2;

    //--------------------------------------------------------------------------
    // Saved Instruction Information
    //--------------------------------------------------------------------------

    // Metadata
    logic [X_ID_WIDTH-1:0] saved_id;
    logic [4:0]            saved_rd;

    // Source operands
    logic [X_RFR_WIDTH-1:0] saved_rs [0:MX_NUM_RS-1];

    //------------------------------------------------------------------------------
    // Controller State Machine
    //------------------------------------------------------------------------------

    typedef enum logic [1:0] {
        MX_IDLE,
        MX_WAIT_COMMIT,
        MX_RESULT
    } mxdotp_state_t;

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
        .rs2          (rs2)
    );

    //--------------------------------------------------------------------------
    // Issue Interface
    //--------------------------------------------------------------------------

    // Always ready to accept an instruction in the initial implementation.
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
            if (commit_if.commit.commit_kill)
            state_d = MX_IDLE;
            else
            state_d = MX_RESULT;
        end
        end

        //--------------------------------------------------------------
        // Wait until CPU accepts our result
        //--------------------------------------------------------------
        MX_RESULT: begin
        if (result_if.result_ready)
            state_d = MX_IDLE;
        end

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

            saved_id <= '0;
            saved_rd <= '0;

            for (i = 0; i < MX_NUM_RS; i++)
            saved_rs[i] <= '0;

        end

        else begin
            if (state_q == MX_IDLE &&
                issue_if.issue_valid &&
                issue_if.issue_resp.accept) begin

            saved_id <= issue_if.issue_req.id;
            saved_rd <= rd;

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

        result_if.result_valid    = 1'b1;

        result_if.result.id       = saved_id;
        result_if.result.rd       = saved_rd;
        result_if.result.we       = 1'b1;

        // Dummy computation
        result_if.result.data     = '0;

        end

    end

    //--------------------------------------------------------------------------
    // Memory Interface (Unused)
    //--------------------------------------------------------------------------

    assign mem_if.mem_valid = 1'b0;
    assign mem_if.mem_req   = '0;

endmodule