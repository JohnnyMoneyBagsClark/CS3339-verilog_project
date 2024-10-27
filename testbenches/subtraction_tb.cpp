// subtraction_tb.cpp

#include "Vsubtraction.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vsubtraction* dut = new Vsubtraction;
    Verilated::traceEverOn(true);

    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("waveforms/subtraction_waveform.vcd");

    dut->a = 0b1101; dut->b = 0b0011;
    dut->eval();
    tfp->dump(0);

    dut->a = 0b1110; dut->b = 0b0001;
    dut->eval();
    tfp->dump(10);

    dut->final();
    tfp->close();
    delete dut;
    delete tfp;
    return 0;
}
