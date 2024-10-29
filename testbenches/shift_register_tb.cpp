// shift_register.cpp

#include "Vshift_register.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vshift_register* dut = new Vshift_register;
    Verilated::traceEverOn(true);

    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("waveforms/waveform_shift_register.vcd");

    dut->data_in = 8;  // 1000 -> Left Shift
    dut->eval();
    tfp->dump(0);

    dut->data_in = 4;  // 0100 -> Left Shift
    dut->eval();
    tfp->dump(10);

    dut->data_in = 15;  // 1111 -> Left Shift
    dut->eval();
    tfp->dump(20);

    dut->final();
    tfp->close();

    delete dut;
    delete tfp;
    return 0;
}
