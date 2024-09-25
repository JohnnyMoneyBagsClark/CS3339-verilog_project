//nor_gate.v

module nor_gate (
    input wire a,
    input wire b,
    output wire y
);
    assign y = ~(a | b); // NOR operation
endmodule
