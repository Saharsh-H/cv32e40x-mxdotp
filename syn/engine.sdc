#==============================================================================
# File    : engine.sdc
# Project : MXDOTP XIF Coprocessor - Phase A' standalone per-engine synthesis
#------------------------------------------------------------------------------
# One SDC for all five engine wrappers. The engines differ in frame width, not
# in interface shape, so a single parameterized constraint file keeps the
# comparison honest - every engine is measured under identical conditions, and
# nothing about the ladder can be an artifact of per-engine constraint drift.
#
# Usage: the caller sets MX_CLK_PERIOD_NS before sourcing (syn_engine.sh does
# this). Default below is deliberately a PLACEHOLDER, not a target - see the
# sweep note.
#
#------------------------------------------------------------------------------
# WHY THE PERIOD MUST BE SWEPT, NOT GUESSED
#------------------------------------------------------------------------------
# The two whole-subsystem runs already on record bracket the problem:
#
#   10 ns constraint  -> worst slack +6.07 ns. Nothing was violating, so the
#                        tool did no timing optimization at all (>99% of cells
#                        mapped X1). The "Fmax" read off that run is a FLOOR,
#                        not Fmax - the same path came out 16% faster once the
#                        constraint actually bound.
#    1 ns constraint  -> WNS -2.40 ns, i.e. 3.4x away from feasible. Every path
#                        violates, so the optimizer has no gradient telling it
#                        which paths matter, and spends effort (area, power)
#                        uniformly. Visible in the data: one path had 97 logic
#                        levels but finished FASTER than a 73-level path,
#                        because drive strength went to the wrong cone.
#
# Neither extreme yields a usable number. Sweep instead: start near the
# expected value and tighten until WNS just goes negative; the tightest period
# that still closes is Fmax. Per-engine starting points, from the 1 ns run's
# post-place arrivals (add ~10% headroom for CTS + routing, which this
# pre-route flow does not yet model):
#
#   MXFP4    ~2.4 ns      M2XFP4  ~2.9 ns      MXFINAL ~3.0 ns
#   MXFP8    ~3.4 ns      MXDOTP  (placeholder engine - not a real data point)
#
# Suggested sweep per engine: start 20% loose, step down 5% until WNS < 0.
#==============================================================================

if { ![info exists ::env(MX_CLK_PERIOD_NS)] } {
    set period_ns 3.5
    puts "engine.sdc: MX_CLK_PERIOD_NS unset, defaulting to $period_ns ns"
    puts "engine.sdc: NOTE this is a placeholder, not a target - sweep it (see header)."
} else {
    set period_ns $::env(MX_CLK_PERIOD_NS)
}

create_clock -name clk -period $period_ns [get_ports clk_i]

#------------------------------------------------------------------------------
# Clock uncertainty. Explicitly present because BOTH recorded whole-subsystem
# runs omitted it, which makes every slack number on record optimistic. This
# flow reports clock network delay as "ideal" (pre-CTS), so uncertainty is the
# only thing standing in for skew + jitter. 5% of period is a conventional
# pre-CTS placeholder; replace with the real CTS number once available.
#------------------------------------------------------------------------------
set_clock_uncertainty [expr {$period_ns * 0.05}] [get_clocks clk]

#------------------------------------------------------------------------------
# I/O timing. The wrappers are pure passthroughs that add no boundary
# registers - deliberately, so the area number is the engine's own gates and
# nothing else. The engines already register their own inputs (rs1_q/rs2_q/
# rs3_q at capture) and outputs (result_data_q), so the paths that actually
# matter are internal register-to-register and are measured correctly. These
# I/O delays exist so the boundary paths are constrained rather than
# unconstrained (an unconstrained input port would otherwise be reported as a
# false critical path, or silently ignored).
#
# 30% of period each side is a neutral, conventional budget. It is applied
# IDENTICALLY to every engine, which is what matters for a fair ladder - the
# absolute value only shifts all five equally.
#------------------------------------------------------------------------------
set io_budget [expr {$period_ns * 0.30}]

set all_in  [remove_from_collection [all_inputs] [get_ports clk_i]]
set all_out [all_outputs]

set_input_delay  -clock clk $io_budget $all_in
set_output_delay -clock clk $io_budget $all_out

#------------------------------------------------------------------------------
# Drive and load. Without these, inputs are driven by an ideal zero-resistance
# source and outputs see zero capacitance, which flatters the boundary paths.
# Cell names below are nangate45 (the platform both recorded runs used); adjust
# if the platform changes.
#------------------------------------------------------------------------------
if { [llength [get_lib_cells -quiet */BUF_X1]] > 0 } {
    set_driving_cell -lib_cell BUF_X1 -pin Z $all_in
    set_load [expr {4 * [load_of [get_lib_pin */BUF_X1/A]]}] $all_out
} else {
    puts "engine.sdc: WARNING - BUF_X1 not found in the loaded library."
    puts "engine.sdc: skipping set_driving_cell/set_load (platform is not nangate45?)."
}

#------------------------------------------------------------------------------
# rst_ni is asynchronous and is not a timed path in this flow.
#------------------------------------------------------------------------------
set_false_path -from [get_ports rst_ni]
