# Source list: standalone synthesis of the dotp engine (Phase A').
# Paths are relative to the repo root.
#
# NOTE: this engine instantiates NONE of the shared mx_* blocks (verified
# against the RTL, not assumed) - it is a latency placeholder with no
# sliding-frame datapath. Listing them here would be harmless (hierarchy -top
# prunes unreferenced modules) but misleading about what this engine contains.
rtl/mxdotp/mxdotp_pkg.sv
rtl/mxdotp/mxdotp_dotp_engine.sv
syn/wrappers/mx_syn_dotp.sv
