// nand.tp.cpp

#include "Vnand_gate.h"  // Include Verilator-generated NAND gate header
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);  // Initialize Verilator with arguments

    Vnand_gate* dut = new Vnand_gate;    // Create an instance of the NAND gate
    Verilated::traceEverOn(true);        // Enable waveform tracing

    VerilatedVcdC* tfp = new VerilatedVcdC;  // Create VCD trace file
    dut->trace(tfp, 99);                    // Trace the DUT (Device Under Test)
    
    // Open the VCD file for writing
    tfp->open("waveforms/waveform_nand_gate.vcd");
    std::cout << "VCD file opened successfully!" << std::endl;

    // Simulate inputs and record output
    dut->a = 0; dut->b = 0;
    dut->eval();
    tfp->dump(0);  // Dump waveform for time 0

    dut->a = 1; dut->b = 0;
    dut->eval();
    tfp->dump(10);  // Dump waveform for time 10

    dut->a = 1; dut->b = 1;
    dut->eval();
    tfp->dump(20);  // Dump waveform for time 20

    // Add a message to indicate simulation completion
    std::cout << "Simulation finished, closing VCD file." << std::endl;
    dut->final();
    tfp->close();  // Close the waveform file

    delete dut;
    delete tfp;
    return 0;
}
