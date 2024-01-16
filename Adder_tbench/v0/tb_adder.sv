`include "adder_test.sv"

// Top-level module
module tb;

    // Signals for connecting the testbench to the DUT (Design Under Test)
    logic [3:0] tb_A;
    logic [3:0] tb_B;
    logic [4:0] tb_sum;

    // Instantiate Adder module
    adder uut (
        .a(tb_A),
        .b(tb_B),
        .sum(tb_sum)
    );

    // Instantiate AdderTest class
    AdderTest test;

    // Initial block to start the test
    initial begin
        test = new();
        // Run 10 random tests
        repeat (10) begin
            // Randomize test inputs
            test.random_stimulus();
            // Assign inputs to DUT signals
            tb_A = test.A;
            tb_B = test.B;
            #5;
            // Apply inputs and check the result
            test.run_test(tb_sum);
        end

        // End simulation
        $finish;
    end
endmodule