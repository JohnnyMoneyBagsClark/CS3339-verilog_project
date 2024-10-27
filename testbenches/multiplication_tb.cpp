// multiplication_tb.cpp

#include "Vmultiplication.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vmultiplication* dut = new Vmultiplication;
    Verilated::traceEverOn(true);

    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("waveforms/multiplication_waveform.vcd");

    dut->a = 0b1010; dut->b = 0b0011;
    dut->eval();
    tfp->dump(0);

    dut->a = 0b1110; dut->b = 0b0010;
    dut->eval();
    tfp->dump(10);

    dut->final();
    tfp->close();
    delete dut;
    delete tfp;
    return 0;
}
