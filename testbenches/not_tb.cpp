// not_tb.cpp

#include "Vnot_gate.h"        // Verilator generated header for the NOT gate module
#include "verilated.h"        // Verilator header for simulation control
#include "verilated_vcd_c.h"  // Header for VCD waveform generation
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);  // Initialize Verilator with arguments

    Vnot_gate* dut = new Vnot_gate;      // Create an instance of the NOT gate module
    Verilated::traceEverOn(true);        // Enable waveform tracing

    VerilatedVcdC* tfp = new VerilatedVcdC;  // Create VCD trace file
    dut->trace(tfp, 99);                    // Trace the DUT (Device Under Test)

    // Open the VCD file for writing
    tfp->open("waveforms/not_waveform.vcd");
    std::cout << "VCD file opened successfully!" << std::endl;

    // Simulate input and record output
    dut->a = 0;
    dut->eval();
    tfp->dump(0); // Dump waveform for time 0

    dut->a = 1;
    dut->eval();
    tfp->dump(10); // Dump waveform for time 10

    // Add a message to indicate simulation completion
    std::cout << "Simulation finished, closing VCD file." << std::endl;
    dut->final();
    tfp->close(); // Close the waveform file

    delete dut;
    delete tfp;
    return 0;
}
