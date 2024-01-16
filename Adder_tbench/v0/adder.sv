module adder (
    input logic [3:0] a,
    input logic [3:0] b,
    output logic [4:0] sum
);
    always_comb sum = a + b;
endmodule