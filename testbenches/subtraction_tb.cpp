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

    // Test case 1: 10 - 3 (no carry in)
    dut->a = 0xA;  // 10 in hexadecimal
    dut->b = 0x3;  // 3 in hexadecimal
    dut->carry_in = 0;
    dut->eval();
    tfp->dump(0);

    // Test case 2: 15 - 7 with carry in
    dut->a = 0xF;  // 15 in hexadecimal
    dut->b = 0x7;  // 7 in hexadecimal
    dut->carry_in = 1;
    dut->eval();
    tfp->dump(10);

    // Test case 3: 0 - 1 (underflow, should set carry out)
    dut->a = 0x0;
    dut->b = 0x1;
    dut->carry_in = 0;
    dut->eval();
    tfp->dump(20);

    // Test case 4: 8 - 8 (result zero, no carry out)
    dut->a = 0x8;
    dut->b = 0x8;
    dut->carry_in = 0;
    dut->eval();
    tfp->dump(30);

    dut->final();
    tfp->close();
    delete dut;
    delete tfp;
    return 0;
}
