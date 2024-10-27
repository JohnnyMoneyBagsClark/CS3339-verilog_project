// division_tb.cpp

#include "Vdivision.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vdivision* dut = new Vdivision;
    Verilated::traceEverOn(true);

    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("waveforms/division_waveform.vcd");

    dut->dividend = 0b1100; dut->divisor = 0b0011;
    dut->eval();
    tfp->dump(0);

    dut->dividend = 0b1001; dut->divisor = 0b0010;
    dut->eval();
    tfp->dump(10);

    dut->final();
    tfp->close();
    delete dut;
    delete tfp;
    return 0;
}
