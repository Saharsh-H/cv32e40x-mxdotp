//==============================================================================
// File    : verilator_tb.cpp
// Project : MXDOTP XIF Coprocessor - Verilator Testbench
//------------------------------------------------------------------------------
// Description:
//   Minimal C++ driver for Verilator.
//
//   tb_mxdotp_core.sv is declared as `module tb_mxdotp_core;` - it has NO
//   ports. It generates its own clk_i/rst_ni internally, runs its own
//   scoreboard, and its own watchdog calls $finish (pass) or $fatal
//   (fail) when done. This harness therefore does not drive any signal -
//   there is nothing to drive. Its only job is to keep simulation time
//   advancing (required for --timing designs, which rely on Verilator's
//   event scheduler to run the SV always/initial blocks with delays) and
//   stop when the design itself is finished.
//
//   Pass/fail is intentionally NOT inspected here via hierarchical signal
//   access. tb_mxdotp_core.sv's watchdog calls $fatal on failure, which
//   Verilator converts into a non-zero process exit code automatically -
//   so `make`/CI sees failures for free, and this file never goes stale
//   relative to the scoreboard's internal state names.
//==============================================================================

#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtb_mxdotp_core.h"

#include <cstdio>

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    contextp->traceEverOn(true);

    Vtb_mxdotp_core* top = new Vtb_mxdotp_core{contextp};

    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("tb_mxdotp_core.vcd");

    printf("Verilator testbench starting...\n");
    printf("(tb_mxdotp_core.sv drives its own clock/reset and watchdog;\n"
           " this harness just pumps simulation time.)\n");

    while (!contextp->gotFinish()) {
        top->eval();
        tfp->dump(contextp->time());
        contextp->timeInc(1);
    }

    printf("\nSimulation finished at time %llu\n",
           static_cast<unsigned long long>(contextp->time()));

    tfp->close();
    delete tfp;

    top->final();
    delete top;
    delete contextp;

    printf("Waveform written to tb_mxdotp_core.vcd\n");
    return 0;
}