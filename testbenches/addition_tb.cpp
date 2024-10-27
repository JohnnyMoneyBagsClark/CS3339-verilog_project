// addition_tb.cpp

#include "Vaddition.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vaddition* dut = new Vaddition;
    Verilated::traceEverOn(true);

    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("waveforms/addition_waveform.vcd");

    dut->a = 0b1101; dut->b = 0b0011; dut->carry_in = 0;
    dut->eval();
    tfp->dump(0);

    dut->a = 0b1110; dut->b = 0b0001; dut->carry_in = 1;
    dut->eval();
    tfp->dump(10);

    dut->final();
    tfp->close();
    delete dut;
    delete tfp;
    return 0;
}
