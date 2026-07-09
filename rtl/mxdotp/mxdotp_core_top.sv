//==============================================================================
// File    : mxdotp_core_top.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Top-level integration wrapper. Instantiates a single if_xif interface
//   instance and connects it to cv32e40x_core (CPU side, via the cpu_*
//   modports) and to mxdotp_xif (coprocessor side, via the coproc_*
//   modports).
//
//   This is the missing piece of glue: cv32e40x_core's XIF ports are plain
//   interface ports, so something above it must own the interface instance.
//   Neither cv32e40x_core.sv nor the mxdotp_* files should be modified to
//   add this - it belongs here.
//
//   X_NUM_RS/X_ID_WIDTH/etc. are declared once, as local parameters, and fed
//   to both the if_xif instance and cv32e40x_core so they can never disagree.
//
//==============================================================================

module mxdotp_core_top
    import cv32e40x_pkg::*;
#(
  parameter int          PMA_NUM_REGIONS                     = 0,
  parameter pma_region_t PMA_CFG[PMA_NUM_REGIONS-1:0]        = '{default: PMA_R_DEFAULT}
)
(
  // Clock and Reset
  input  logic        clk_i,
  input  logic        rst_ni,

  input  logic        scan_cg_en_i,

  // Static core config
  input  logic [31:0] boot_addr_i,
  input  logic [31:0] mtvec_addr_i,
  input  logic [31:0] dm_halt_addr_i,
  input  logic [31:0] mhartid_i,
  input  logic [31:0] mimpid_i,
  input  logic [31:0] dm_exception_addr_i,
  input  logic [31:0] nmi_addr_i,

  // Instruction memory interface
  output logic        instr_req_o,
  input  logic        instr_gnt_i,
  input  logic        instr_rvalid_i,
  output logic [31:0] instr_addr_o,
  output logic [1:0]  instr_memtype_o,
  output logic [2:0]  instr_prot_o,
  output logic        instr_dbg_o,
  input  logic [31:0] instr_rdata_i,
  input  logic        instr_err_i,

  // Data memory interface
  output logic        data_req_o,
  input  logic        data_gnt_i,
  input  logic        data_rvalid_i,
  output logic        data_we_o,
  output logic [3:0]  data_be_o,
  output logic [31:0] data_addr_o,
  output logic [1:0]  data_memtype_o,
  output logic [2:0]  data_prot_o,
  output logic        data_dbg_o,
  output logic [31:0] data_wdata_o,
  input  logic [31:0] data_rdata_i,
  input  logic        data_err_i,
  output logic [5:0]  data_atop_o,
  input  logic        data_exokay_i,

  output logic [63:0] mcycle_o,

  // Interrupts
  input  logic [31:0] irq_i,

  input  logic        clic_irq_i,
  input  logic [11:0] clic_irq_id_i,
  input  logic [ 7:0] clic_irq_il_i,
  input  logic [ 1:0] clic_irq_priv_i,
  input  logic        clic_irq_hv_i,
  output logic [11:0] clic_irq_id_o,
  output logic        clic_irq_mode_o,
  output logic        clic_irq_exit_o,

  // Fencei flush handshake
  output logic        fencei_flush_req_o,
  input  logic        fencei_flush_ack_i,

  // Debug
  input  logic        debug_req_i,
  output logic        debug_havereset_o,
  output logic        debug_running_o,
  output logic        debug_halted_o,

  // CPU control
  input  logic        fetch_enable_i,
  output logic        core_sleep_o
);

  //----------------------------------------------------------------------------
  // XIF configuration - single source of truth, shared by if_xif and the core
  //----------------------------------------------------------------------------
  localparam int          X_NUM_RS    = 3;   // rs1, rs2, rs3 (R4-type)
  localparam int          X_ID_WIDTH  = 4;
  localparam int          X_MEM_WIDTH = 32;
  // X_RFR_WIDTH = 64 (2*XLEN), not 32: this is what actually lets a coprocessor request a
  // genuine paired 64-bit read of {rs_i+1, rs_i} via issue_resp.dualread - see
  // cv32e40x_core.sv's X_DUALREAD below. MXDOTP (any format - see mxdotp_pkg.sv's unified
  // ISA milestone header) always sets dualread, using the full 64 bits for A/B/AR;
  // MXFINAL never does (scales/old_acc are both plain 32-bit operands, so their upper 32
  // bits are simply zero-extended padding within the wider container). MX_FUNCT3_DUALREAD_TEST
  // is a separate, validation-only instruction added to exercise the mechanism directly.
  localparam int          X_RFR_WIDTH = 64;
  localparam int          X_RFW_WIDTH = 32;  // dual-WRITE (rd/rd+1) is a separate, still-
                                              // unimplemented mechanism - out of scope here;
                                              // MXFINAL only ever writes a single FP32 word.
  localparam logic [31:0] X_MISA      = 32'h0000_0000;
  localparam logic [1:0]  X_ECS_XS    = 2'b00;

  //----------------------------------------------------------------------------
  // Single XIF interface instance shared by core and coprocessor
  //----------------------------------------------------------------------------
  if_xif #(
    .X_NUM_RS    ( X_NUM_RS    ),
    .X_ID_WIDTH  ( X_ID_WIDTH  ),
    .X_MEM_WIDTH ( X_MEM_WIDTH ),
    .X_RFR_WIDTH ( X_RFR_WIDTH ),
    .X_RFW_WIDTH ( X_RFW_WIDTH ),
    .X_MISA      ( X_MISA      ),
    .X_ECS_XS    ( X_ECS_XS    )
  ) xif ();

  //----------------------------------------------------------------------------
  // CV32E40X core
  //----------------------------------------------------------------------------
  cv32e40x_core #(
    .X_EXT           ( 1'b1             ),
    .X_NUM_RS        ( X_NUM_RS         ),
    .X_ID_WIDTH      ( X_ID_WIDTH       ),
    .X_MEM_WIDTH     ( X_MEM_WIDTH      ),
    .X_RFR_WIDTH     ( X_RFR_WIDTH      ),
    .X_RFW_WIDTH     ( X_RFW_WIDTH      ),
    .X_DUALREAD      ( 1'b1             ), // Physically provision the rs1+1/rs2+1/rs3+1
                                            // companion read ports (REGFILE_NUM_READ_PORTS
                                            // becomes 6, not 3 - see cv32e40x_core.sv).
    .X_MISA          ( X_MISA           ),
    .X_ECS_XS        ( X_ECS_XS         ),
    .PMA_NUM_REGIONS ( PMA_NUM_REGIONS  ),
    .PMA_CFG         ( PMA_CFG          )
  ) core_i (
    .clk_i                 ( clk_i               ),
    .rst_ni                ( rst_ni              ),
    .scan_cg_en_i          ( scan_cg_en_i        ),

    .boot_addr_i           ( boot_addr_i         ),
    .mtvec_addr_i          ( mtvec_addr_i        ),
    .dm_halt_addr_i        ( dm_halt_addr_i      ),
    .mhartid_i             ( mhartid_i           ),
    .mimpid_i              ( mimpid_i            ),
    .dm_exception_addr_i   ( dm_exception_addr_i ),
    .nmi_addr_i            ( nmi_addr_i          ),

    .instr_req_o           ( instr_req_o         ),
    .instr_gnt_i           ( instr_gnt_i         ),
    .instr_rvalid_i        ( instr_rvalid_i      ),
    .instr_addr_o          ( instr_addr_o        ),
    .instr_memtype_o       ( instr_memtype_o     ),
    .instr_prot_o          ( instr_prot_o        ),
    .instr_dbg_o           ( instr_dbg_o         ),
    .instr_rdata_i         ( instr_rdata_i       ),
    .instr_err_i           ( instr_err_i         ),

    .data_req_o            ( data_req_o          ),
    .data_gnt_i            ( data_gnt_i          ),
    .data_rvalid_i         ( data_rvalid_i       ),
    .data_we_o             ( data_we_o           ),
    .data_be_o             ( data_be_o           ),
    .data_addr_o           ( data_addr_o         ),
    .data_memtype_o        ( data_memtype_o      ),
    .data_prot_o           ( data_prot_o         ),
    .data_dbg_o            ( data_dbg_o          ),
    .data_wdata_o          ( data_wdata_o        ),
    .data_rdata_i          ( data_rdata_i        ),
    .data_err_i            ( data_err_i          ),
    .data_atop_o           ( data_atop_o         ),
    .data_exokay_i         ( data_exokay_i       ),

    .mcycle_o              ( mcycle_o            ),

    // eXtension interface - CPU side modports
    .xif_compressed_if     ( xif.cpu_compressed  ),
    .xif_issue_if          ( xif.cpu_issue       ),
    .xif_commit_if         ( xif.cpu_commit      ),
    .xif_mem_if            ( xif.cpu_mem         ),
    .xif_mem_result_if     ( xif.cpu_mem_result  ),
    .xif_result_if         ( xif.cpu_result      ),

    .irq_i                 ( irq_i               ),

    .clic_irq_i            ( clic_irq_i          ),
    .clic_irq_id_i         ( clic_irq_id_i       ),
    .clic_irq_il_i         ( clic_irq_il_i       ),
    .clic_irq_priv_i       ( clic_irq_priv_i     ),
    .clic_irq_hv_i         ( clic_irq_hv_i       ),
    .clic_irq_id_o         ( clic_irq_id_o       ),
    .clic_irq_mode_o       ( clic_irq_mode_o     ),
    .clic_irq_exit_o       ( clic_irq_exit_o     ),

    .fencei_flush_req_o    ( fencei_flush_req_o  ),
    .fencei_flush_ack_i    ( fencei_flush_ack_i  ),

    .debug_req_i           ( debug_req_i         ),
    .debug_havereset_o     ( debug_havereset_o   ),
    .debug_running_o       ( debug_running_o     ),
    .debug_halted_o        ( debug_halted_o      ),

    .fetch_enable_i        ( fetch_enable_i      ),
    .core_sleep_o          ( core_sleep_o        )
  );

  //----------------------------------------------------------------------------
  // MXDOTP coprocessor - coproc side modports
  //----------------------------------------------------------------------------
  mxdotp_xif #(
    .X_ID_WIDTH  ( X_ID_WIDTH  ),
    .X_RFR_WIDTH ( X_RFR_WIDTH ),
    .X_RFW_WIDTH ( X_RFW_WIDTH )
  ) mxdotp_i (
    .clk_i         ( clk_i                  ),
    .rst_ni        ( rst_ni                 ),

    .issue_if      ( xif.coproc_issue       ),
    .commit_if     ( xif.coproc_commit      ),
    .result_if     ( xif.coproc_result      ),
    .mem_if        ( xif.coproc_mem         ),
    .mem_result_if ( xif.coproc_mem_result  )
  );

endmodule
