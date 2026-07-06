// ==============================================================================
// File    : xsim_bind_workaround.sv
//------------------------------------------------------------------------------
// Description:
//   Self-contained, automatic alternative to xsim_workaround.tcl.
//
//   Uses a `bind` statement to place a tiny simulation-only module inside
//   cv32e40x_alignment_buffer's own scope, WITHOUT editing that file on
//   disk. From inside that scope, rptr/wptr are visible by their plain
//   names (no hierarchical path needed), and a procedural force/release
//   (SystemVerilog language constructs, IEEE 1800 SS10.6 - distinct from
//   both $deposit and the Tcl `force` command used in xsim_workaround.tcl)
//   pins them to 0 for the first simulated time unit, then releases them
//   so the module's own asynchronous reset takes over normally from that
//   point on.
//
//   `bind` is a standard, non-invasive SystemVerilog verification
//   construct built exactly for this kind of situation: instrumenting or
//   patching a module's simulation behavior from testbench code, without
//   modifying its source file. It has no effect on synthesis of the
//   original module.
//
//   Trade-off vs xsim_workaround.tcl: this applies automatically on every
//   run - no need to remember to load a separate Tcl script - but relies
//   on your XSim version supporting the procedural force/release statement
//   on an internal register. If this file does not resolve the crash,
//   fall back to xsim_workaround.tcl, which uses XSim's Tcl-level `force`
//   command instead and has fewer dependencies on SV language-feature
//   support.
//
//   Usage: add this file to the simulation compile order alongside the
//   testbench sources. Do not instantiate it directly anywhere - the
//   `bind` statement below applies it implicitly, once, wherever
//   cv32e40x_alignment_buffer is elaborated.
//==============================================================================

module xsim_alignment_buffer_ptr_fix;

  initial begin
    force rptr = '0;
    force wptr = '0;
    #1;
    release rptr;
    release wptr;
  end

endmodule

bind cv32e40x_alignment_buffer xsim_alignment_buffer_ptr_fix u_xsim_alignment_buffer_ptr_fix ();
