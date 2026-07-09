# synth_engines.tcl
#
# Stage 1: out-of-context synthesis of the three MXDOTP arithmetic engines,
# standalone - no interfaces, no CV32E40X. This is the cheapest way to get
# REAL area (LUT/FF/DSP) and timing (WNS) numbers for the fused-engine
# trade-off discussion, instead of the qualitative reasoning it started as.
#
# Run:  vivado -mode batch -source synth_engines.tcl
#
# Assumes mxdotp_pkg.sv / mxdotp_dotp_engine.sv / mxdotp_final_engine.sv /
# mxdotp_fused_engine.sv are all in the SAME DIRECTORY as this script. If
# not, edit the `read_verilog -sv` paths below.
#
# CHANGE THIS to whatever part you actually have / are targeting. If you
# don't have a specific board, xc7a100tcsg324-1 (a common low-cost Artix-7)
# or a UltraScale+ part like xczu7ev-ffvc1156-2-e both work fine for a pure
# resource/timing check - the part mostly affects which primitives (DSPs
# etc.) get inferred, not whether this RTL elaborates.
set PART "xc7k160tfbg676-1"

proc synth_one_engine {top_module extra_files} {
    global PART
    create_project -force -in_memory
    set_property part $PART [current_project]

    read_verilog -sv mxdotp_pkg.sv
    foreach f $extra_files {
        read_verilog -sv $f
    }

    # Constrain the clock so report_timing_summary actually has a target to
    # measure slack against - without this, OOC synthesis will still run,
    # but the timing report is close to meaningless (no period to compare
    # against). 5.0 ns = 200 MHz is a reasonable starting guess for a small
    # arithmetic block on a mid-range part; see the binary-search note in
    # the chat for how to find the real max Fmax once this run completes.
    create_clock -name clk -period 5.000 [get_ports clk_i]

    synth_design -top $top_module -mode out_of_context

    report_utilization    -file ${top_module}_util.rpt
    report_timing_summary -file ${top_module}_timing.rpt
    report_timing -delay_type max -max_paths 5 -file ${top_module}_top5paths.rpt

    write_checkpoint -force ${top_module}_post_synth.dcp
    close_project
}

# --- DOTP engine (residue-format A/B/AR path - unchanged this milestone) ---
synth_one_engine "mxdotp_dotp_engine" {mxdotp_dotp_engine.sv}

# --- FINAL engine (residue-format back-end - simplified this milestone:
#     format mask removed, always includes p2/residue now) ---
synth_one_engine "mxdotp_final_engine" {mxdotp_final_engine.sv}

# --- FUSED engine (new - the one whose area/timing claims are unverified) ---
synth_one_engine "mxdotp_fused_engine" {mxdotp_fused_engine.sv}

puts "\n=== DONE ==="
puts "Compare: mxdotp_dotp_engine_util.rpt + mxdotp_final_engine_util.rpt"
puts "     vs: mxdotp_fused_engine_util.rpt"
puts "(the area trade-off question from the design discussion - is FUSED"
puts " really smaller than DOTP+FINAL combined, given it drops the AR/p2 tree)"
puts ""
puts "Check *_timing.rpt's WNS (Worst Negative Slack) line for each. If any"
puts "WNS is negative at 5.000ns, that engine doesn't close at 200MHz yet -"
puts "loosen create_clock's -period above and re-run to find where it does."