// nand.tp.cpp

#include "Vnand_gate.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vnand_gate* dut = new Vnand_gate;
    Verilated::traceEverOn(true);

    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("waveforms/waveform_nand_gate.vcd");

    dut->a = 0; dut->b = 0;
    dut->eval();
    tfp->dump(0);

    dut->a = 1; dut->b = 0;
    dut->eval();
    tfp->dump(10);

    dut->a = 1; dut->b = 1;
    dut->eval();
    tfp->dump(20);

    dut->final();
    tfp->close();

    delete dut;
    delete tfp;
    return 0;
}
