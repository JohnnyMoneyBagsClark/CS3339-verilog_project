//nand_gate.v

module nand_gate (
    input wire a,
    input wire b,
    output wire y
);
    assign y = ~(a & b); // NAND operation
endmodule
