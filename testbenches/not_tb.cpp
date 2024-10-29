// not_tb.cpp

#include "Vnot_gate.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vnot_gate* dut = new Vnot_gate;
    Verilated::traceEverOn(true);

    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("waveforms/waveform_not_gate.vcd");

    dut->a = 4;  // 0100 -> NOT
    dut->eval();
    tfp->dump(0);

    dut->a = 2;  // 0010 -> NOT
    dut->eval();
    tfp->dump(10);

    dut->a = 15;  // 1111 -> NOT
    dut->eval();
    tfp->dump(20);

    dut->final();
    tfp->close();

    delete dut;
    delete tfp;
    return 0;
}
