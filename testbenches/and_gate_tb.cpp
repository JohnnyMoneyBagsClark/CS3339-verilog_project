// and_tb.cpp

#include "Vand_gate.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vand_gate* dut = new Vand_gate;
    Verilated::traceEverOn(true);

    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("waveforms/and_waveform.vcd");

    dut->a = 0b1100; dut->b = 0b1010;
    dut->eval();
    tfp->dump(0);

    dut->a = 0b1111; dut->b = 0b0101;
    dut->eval();
    tfp->dump(10);

    dut->final();
    tfp->close();
    delete dut;
    delete tfp;
    return 0;
}
