// xor_tb.cpp

#include "Vxor_gate.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vxor_gate* dut = new Vxor_gate;
    Verilated::traceEverOn(true);

    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("waveforms/waveform_xor_gate.vcd");

    dut->a = 4; dut->b = 2;  // 0100 XOR 0010
    dut->eval();
    tfp->dump(0);

    dut->a = 8; dut->b = 7;  // 1000 XOR 0111
    dut->eval();
    tfp->dump(10);

    dut->a = 15; dut->b = 15;  // 1111 XOR 1111
    dut->eval();
    tfp->dump(20);

    dut->final();
    tfp->close();

    delete dut;
    delete tfp;
    return 0;
}
