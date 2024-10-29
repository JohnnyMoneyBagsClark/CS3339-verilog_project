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

    // Test case 1: 13 / 3
    dut->numerator = 0xD;   // 13 in hexadecimal
    dut->denominator = 0x3; // 3 in hexadecimal
    dut->eval();
    tfp->dump(0);

    // Test case 2: 15 / 2
    dut->numerator = 0xF;   // 15 in hexadecimal
    dut->denominator = 0x2; // 2 in hexadecimal
    dut->eval();
    tfp->dump(10);

    // Test case 3: 7 / 4
    dut->numerator = 0x7;   // 7 in hexadecimal
    dut->denominator = 0x4; // 4 in hexadecimal
    dut->eval();
    tfp->dump(20);

    // Test case 4: Division by zero
    dut->numerator = 0x5;   // 5 in hexadecimal
    dut->denominator = 0x0; // 0 in hexadecimal
    dut->eval();
    tfp->dump(30);

    dut->final();
    tfp->close();
    delete dut;
    delete tfp;
    return 0;
}
