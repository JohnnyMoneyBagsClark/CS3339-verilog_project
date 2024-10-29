// addition_tb.cpp

#include "Vaddition.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);   // Initialize Verilator
    Vaddition* dut = new Vaddition;       // Instantiate DUT (Device Under Test)
    Verilated::traceEverOn(true);         // Enable signal tracing

    // Set up VCD output
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);                  // Attach trace to DUT
    tfp->open("waveforms/addition_waveform.vcd"); // Open VCD file

    // Test case 1
    dut->a = 0b1101; dut->b = 0b0011; dut->carry_in = 0;
    dut->eval();
    tfp->dump(0); // Time 0

    // Test case 2
    dut->a = 0b1110; dut->b = 0b0001; dut->carry_in = 1;
    dut->eval();
    tfp->dump(50); // Time 50

    // Test case 3
    dut->a = 0b0001; dut->b = 0b1111; dut->carry_in = 0;
    dut->eval();
    tfp->dump(100); // Time 100

    // Finalize and close
    dut->final();
    tfp->close();
    delete dut;
    delete tfp;
    return 0;
}
