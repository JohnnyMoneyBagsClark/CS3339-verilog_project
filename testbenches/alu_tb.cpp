// alu_tb.cpp
#include "Valu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Valu* dut = new Valu; // Instantiate the ALU Device Under Test (DUT)
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("../waveforms/alu_waveform.vcd");


    // Test sequence for each op_code to cover all logical operations
    dut->a = 0b0101;
    dut->b = 0b0011;
    dut->carry_in = 0;
    for (int op = 0; op <= 15; op++) {  // Assuming op_code can go from 0 to 15
        dut->op_code = op;
        dut->eval();
        tfp->dump(10 * op);
    }

    // End the simulation
    tfp->close();
    delete dut;
    delete tfp;
    return 0;
}
