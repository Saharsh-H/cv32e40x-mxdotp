# Source list: standalone synthesis of the mxfinal engine (Phase A').
# Paths are relative to the repo root. MX_RTL = rtl/mxdotp.
# mx_find_lead / mx_finalize only - this engine has no mx_acc_slide (its BACK1
# does anchor-select + three-term placement, which mx_acc_slide deliberately
# does not cover; see mx_acc_slide.sv header).
#
# Order matters: the package must be read before anything that imports it,
# and the shared blocks before the engine that instantiates them.
# (mx_acc_slide is NOT used by this engine - see its header for why)
rtl/mxdotp/mxdotp_pkg.sv
rtl/mxdotp/mx_find_lead.sv
rtl/mxdotp/mx_finalize.sv
rtl/mxdotp/mxdotp_final_engine.sv
syn/wrappers/mx_syn_mxfinal.sv
