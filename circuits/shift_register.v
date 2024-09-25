//shift_register.v

module shift_register (
    input wire clk,
    input wire rst,
    input wire [3:0] data_in,
    output reg [3:0] data_out
);
    always @(posedge clk or posedge rst) begin
        if (rst)
            data_out <= 4'b0000; // Reset output
        else
            data_out <= {data_out[2:0], data_in[0]}; // Shift left
    end
endmodule
