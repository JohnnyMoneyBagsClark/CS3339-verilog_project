// shifter_tc.cpp

#include "Vshifter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vshifter* dut = new Vshifter;
    Verilated::traceEverOn(true);

    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("waveforms/waveform_shifter.vcd");

    dut->a = 4; dut->shift = 1;  // 0100 << 1
    dut->eval();
    tfp->dump(0);

    dut->a = 2; dut->shift = 2;  // 0010 << 2
    dut->eval();
    tfp->dump(10);

    dut->a = 15; dut->shift = 1;  // 1111 >> 1
    dut->eval();
    tfp->dump(20);

    dut->a = 7; dut->shift = 3;  // 0111 >> 3
    dut->eval();
    tfp->dump(30);

    dut->final();
    tfp->close();

    delete dut;
    delete tfp;
    return 0;
}
