// xnor_tb.cpp

#include "Vxnor_gate.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vxnor_gate* dut = new Vxnor_gate;
    Verilated::traceEverOn(true);

    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("waveforms/xnor_waveform.vcd");

    // Test case 1: 1100 XNOR 1010
    dut->a = 0b1100;
    dut->b = 0b1010;
    dut->eval();
    tfp->dump(0);

    // Test case 2: 1111 XNOR 0101
    dut->a = 0b1111;
    dut->b = 0b0101;
    dut->eval();
    tfp->dump(10);

    // Test case 3: 0000 XNOR 0000 (expect all 1s)
    dut->a = 0b0000;
    dut->b = 0b0000;
    dut->eval();
    tfp->dump(20);

    // Test case 4: 1010 XNOR 1010 (expect all 1s)
    dut->a = 0b1010;
    dut->b = 0b1010;
    dut->eval();
    tfp->dump(30);

    dut->final();
    tfp->close();
    delete dut;
    delete tfp;
    return 0;
}
