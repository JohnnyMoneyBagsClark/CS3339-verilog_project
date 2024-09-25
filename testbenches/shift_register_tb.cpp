// shift_register.cpp

#include "Vshift_register.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);  // Initialize Verilator with arguments

    Vshift_register* dut = new Vshift_register;  // Create an instance of the shift register module
    Verilated::traceEverOn(true);                // Enable waveform tracing

    VerilatedVcdC* tfp = new VerilatedVcdC;      // Create VCD trace file
    dut->trace(tfp, 99);                         // Trace the DUT (Device Under Test)

    // Open the VCD file for writing
    tfp->open("waveforms/shift_waveform.vcd");
    std::cout << "VCD file opened successfully!" << std::endl;

    // Use C++ binary literals or hexadecimal instead of Verilog-style literals
    dut->data_in = 0b1010;  // Or use 0xA (hexadecimal) for 1010 in binary
    dut->eval();
    tfp->dump(0);  // Dump waveform for time 0

    dut->data_in = 0b1100;  // Or use 0xC (hexadecimal) for 1100 in binary
    dut->eval();
    tfp->dump(10);  // Dump waveform for time 10

    // Add a message to indicate simulation completion
    std::cout << "Simulation finished, closing VCD file." << std::endl;
    dut->final();
    tfp->close();  // Close the waveform file

    delete dut;
    delete tfp;
    return 0;
}
