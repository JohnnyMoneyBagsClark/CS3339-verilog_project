//not_gate.v

module not_gate (
    input wire a,
    output wire y
);
    assign y = ~a; // NOT operation
endmodule

