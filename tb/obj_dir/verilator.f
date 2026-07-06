///////////////////////////////////////////////////////////////////////////////
//
// Copyright 2020 OpenHW Group
//
// Licensed under the Solderpad Hardware Licence, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://solderpad.org/licenses/
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
///////////////////////////////////////////////////////////////////////////////
//
// Manifest for the CV32E40P RTL model.
//   - Intended to be used by both synthesis and simulation.
//   - Relevent synthesis and simulation scripts/Makefiles must set the shell
//     ENV variable DESIGN_RTL_DIR as required.
//
///////////////////////////////////////////////////////////////////////////////

+incdir+/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/include
+incdir+/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/../bhv
+incdir+/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/../bhv/include
+incdir+/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/../sva

/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/include/cv32e40x_pkg.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/if_c_obi.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/if_xif.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_if_stage.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_csr.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_cs_registers.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_register_file.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_register_file_wrapper.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_write_buffer.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_lsu_response_filter.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_load_store_unit.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_id_stage.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_i_decoder.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_m_decoder.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_a_decoder.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_b_decoder.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_decoder.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_compressed_decoder.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_alignment_buffer.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_prefetch_unit.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_mult.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_int_controller.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_ex_stage.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_wb_stage.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_div.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_alu.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_ff_one.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_popcnt.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_alu_b_cpop.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_controller_fsm.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_controller_bypass.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_controller.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_instr_obi_interface.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_data_obi_interface.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_prefetcher.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_sleep_unit.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_core.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_mpu.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_pma.sv
/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/cv32e40x_pc_target.sv

/home/saharsh/projects/cores/cv32e40x-mxdotp/rtl/../bhv/cv32e40x_sim_clock_gate.sv
