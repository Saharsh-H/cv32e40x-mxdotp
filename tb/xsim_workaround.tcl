# xsim_workaround.tcl
#
# Fix for the time-0 XSim crash inside cv32e40x_alignment_buffer.sv (see the
# root-cause writeup accompanying tb_mxdotp_core.sv for the full analysis).
#
# rptr/wptr are plain registers with no declared initial value; several
# continuous assigns and an always_comb block index resp_q[]/valid_q[] with
# them (in some cases unconditionally, in some cases via a `?:` operator
# that evaluates both branches even under an ambiguous condition) during
# SystemVerilog's implicit time-0 network settle - before the module's own
# always_ff reset branch can possibly have run. XSim faults on the
# resulting X-indexed array-of-struct read.
#
# COMMANDS VERIFIED against UG835 (Vivado Design Suite Tcl Command
# Reference Guide): XSim's actual simulator-control commands for this are
# `add_force` and `remove_forces` (plural) - NOT `force`/`unforce`, which
# are ModelSim/Questa commands that do not exist in XSim and will fail with
# "invalid command name". `restart` and `run` are standard XSim commands.
#
# Because these are Tcl commands issued before `run` is called, they take
# effect strictly before any SystemVerilog code - including every initial
# block - is evaluated, so there's no race to lose. No RTL source is
# modified and this has no bearing on synthesis.
#
# Usage (XSim Tcl console or batch mode), instead of `run -all`:
#   xsim tb_mxdotp_core_behav -tclbatch xsim_workaround.tcl
# or interactively, after opening the simulation:
#   source xsim_workaround.tcl
# or in the GUI: Tools -> Run Tcl Script -> select this file.
#
# If the hierarchical path below doesn't resolve verbatim in your build
# (e.g. differs by instance name), open the Scopes window in the XSim GUI,
# navigate to the alignment_buffer_i instance, and copy the exact path from
# there - or right-click rptr/wptr in the Objects window and use
# "Force Constant" once interactively to confirm the path/syntax, then
# transcribe it into this script for repeatable batch use.

restart

add_force {/tb_mxdotp_core/dut/core_i/if_stage_i/prefetch_unit_i/alignment_buffer_i/rptr} 0
add_force {/tb_mxdotp_core/dut/core_i/if_stage_i/prefetch_unit_i/alignment_buffer_i/wptr} 0

run 1 ns

remove_forces {/tb_mxdotp_core/dut/core_i/if_stage_i/prefetch_unit_i/alignment_buffer_i/rptr}
remove_forces {/tb_mxdotp_core/dut/core_i/if_stage_i/prefetch_unit_i/alignment_buffer_i/wptr}

run -all

restart

force -deposit /tb_mxdotp_core/dut/core_i/if_stage_i/prefetch_unit_i/alignment_buffer_i/rptr 0
force -deposit /tb_mxdotp_core/dut/core_i/if_stage_i/prefetch_unit_i/alignment_buffer_i/wptr 0

run 1 ns

unforce /tb_mxdotp_core/dut/core_i/if_stage_i/prefetch_unit_i/alignment_buffer_i/rptr
unforce /tb_mxdotp_core/dut/core_i/if_stage_i/prefetch_unit_i/alignment_buffer_i/wptr

run -all