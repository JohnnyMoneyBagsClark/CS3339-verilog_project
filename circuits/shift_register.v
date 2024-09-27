//shift_register.v

module shift_register (
    input wire [3:0] data_in,
    output wire [3:0] data_out
);
    // Shift the input data to the left by one bit
    assign data_out[0] = data_in[1];  // O0 = A1
    assign data_out[1] = data_in[2];  // O1 = A2
    assign data_out[2] = data_in[3];  // O2 = A3
    assign data_out[3] = 1'b0;        // O3 = 0 (zero-fill the last bit)
endmodule
