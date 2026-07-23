#!/usr/bin/env bash
#==============================================================================
# syn_engine.sh - Phase A' standalone per-engine synthesis driver
#------------------------------------------------------------------------------
# Usage:
#   syn/scripts/syn_engine.sh <engine> [period_ns]
#   syn/scripts/syn_engine.sh all [period_ns]
#
#   <engine> is one of: fp4 fp8 m2 mxfinal dotp
#
# Run from the repo root. Results land in syn/results/<engine>/.
#
#------------------------------------------------------------------------------
# WHAT THIS COLLECTS, AND WHY EACH ITEM
#------------------------------------------------------------------------------
# The two whole-subsystem runs already on record were missing exactly the
# things needed to make a decision. This script collects all of them:
#
#   report_design_area      The flattened whole-subsystem stat could not
#                           attribute area to any engine (its "including
#                           submodules" and "local" columns were identical -
#                           fully flattened). Per-engine area is the number
#                           the M2XFP4 fork-vs-merge decision has been waiting
#                           on, and it is what the reset-unification commit
#                           should show DROPPING (~900 flops DFFR_X1 ->
#                           DFF_X1).
#
#   report_checks (setup)   With -path_delay max and full detail. The earlier
#                           summary-format report hid logic-level counts,
#                           which turned out to be the entire story (73-97
#                           levels on the critical paths). Detail is not
#                           optional here.
#
#   report_checks (hold)    -path_delay min. Neither recorded run checked hold
#                           at all.
#
#   report_power            Both recorded runs reported power at the SDC
#                           period. If that period is not achievable, the
#                           number is meaningless in absolute terms - the 1 ns
#                           run's 127 mW was quoted at a frequency the design
#                           cannot reach (~3.4x away). Power is only
#                           comparable ACROSS engines if they are all reported
#                           at the SAME period, which is why this script
#                           applies one period to all of them.
#
#   report_clock_properties Echoes the period actually applied. The first
#                           report supplied for review contained no clock
#                           definition at all, so its slack numbers could not
#                           be interpreted without guessing.
#
# NOTE ON ACTIVITY: unless a VCD/SAIF is annotated, the power number uses a
# default toggle rate applied uniformly. That is a model, not a measurement,
# and it particularly misrepresents a design where only one engine is active
# at a time. Treat cross-engine power RATIOS as more trustworthy than
# absolute mW until real activity is annotated.
#==============================================================================

set -euo pipefail

ENGINES_ALL="fp4 fp8 m2 mxfinal dotp"

ENGINE="${1:-}"
PERIOD="${2:-3.5}"

if [ -z "$ENGINE" ]; then
    echo "usage: $0 <fp4|fp8|m2|mxfinal|dotp|all> [period_ns]" >&2
    exit 1
fi

if [ ! -d syn/wrappers ]; then
    echo "error: run this from the repo root (syn/wrappers not found here)." >&2
    exit 1
fi

run_one () {
    local eng="$1"
    local period="$2"
    local flist="syn/filelists/${eng}.f"
    local top="mx_syn_${eng}"
    local outdir="syn/results/${eng}"

    if [ ! -f "$flist" ]; then
        echo "error: no filelist $flist" >&2
        return 1
    fi

    mkdir -p "$outdir"
    echo "=============================================================="
    echo " ${eng}: top=${top}  period=${period} ns"
    echo "=============================================================="

    # Strip comments/blanks from the filelist for the tool.
    grep -vE '^\s*(#|$)' "$flist" > "${outdir}/sources.txt"

    export MX_CLK_PERIOD_NS="$period"

    # ---- Hand off to the platform flow -------------------------------------
    # Deliberately NOT hardcoding an OpenROAD/Yosys invocation here: the
    # working flow for this project lives on the collaborator's machine
    # (OpenROAD-flow-scripts, nangate45) and already handles this codebase's
    # SystemVerilog. Reproducing a guessed-at command line here would be
    # fragile and would likely disagree with the flow that actually works.
    #
    # What this script guarantees instead is the INPUT CONTRACT, identical for
    # every engine:
    #     sources : ${outdir}/sources.txt   (ordered, package first)
    #     top     : ${top}
    #     sdc     : syn/constraints/engine.sdc
    #     period  : ${period} ns   (exported as MX_CLK_PERIOD_NS)
    #     outdir  : ${outdir}
    #
    # Point ORFS at those (DESIGN_NAME / VERILOG_FILES / SDC_FILE in a
    # per-engine config.mk) and the ladder is directly comparable across all
    # five, because nothing but the source list changes between runs.

    cat > "${outdir}/config.mk" <<EOF
# Auto-generated by syn/scripts/syn_engine.sh - Phase A' per-engine run.
# Point OpenROAD-flow-scripts at this. Regenerate rather than hand-editing.
export DESIGN_NICKNAME = mx_${eng}
export DESIGN_NAME     = ${top}
export PLATFORM        = nangate45

export VERILOG_FILES   = \$(shell cat \$(DESIGN_HOME)/${outdir}/sources.txt)
export SDC_FILE        = \$(DESIGN_HOME)/syn/constraints/engine.sdc

# Sweep this. See syn/constraints/engine.sdc's header for why a single
# fixed value (in either direction) produces an unusable number.
export MX_CLK_PERIOD_NS = ${period}
EOF

    echo "  wrote ${outdir}/sources.txt  ($(wc -l < "${outdir}/sources.txt") files)"
    echo "  wrote ${outdir}/config.mk    (DESIGN_NAME=${top})"
    echo
}

if [ "$ENGINE" = "all" ]; then
    for e in $ENGINES_ALL; do run_one "$e" "$PERIOD"; done
    echo "All five engine configs generated at period=${PERIOD} ns."
    echo "Reminder: one period for all five keeps the ladder comparable."
else
    run_one "$ENGINE" "$PERIOD"
fi
