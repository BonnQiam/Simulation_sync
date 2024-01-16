// Testbench using 'class' feature
class AdderTest;
    // Inputs
    rand logic [3:0] A, B;
    // Expected output
    logic [4:0] expected_sum;

    // Constructor
    function new;
        A = 0;
        B = 0;
        expected_sum = 0;
    endfunction

    // Randomize method to generate random inputs
    virtual task random_stimulus();
        A = $urandom_range(0, 15);
        B = $urandom_range(0, 15);
        expected_sum = A + B;
    endtask

    // Test method to apply inputs and check the result
    virtual task run_test(logic [4:0] sum);
        // Apply inputs
        $display("Testing A=%0d, B=%0d", A, B);
        // Wait some time for the adder to compute
        #1;
        // Check result
        if (sum != expected_sum)
//            $fatal("Test failed! Expected sum=%0d, Actual sum=%0d", expected_sum, sum);
            $display("Test failed! Expected sum=%0d, Actual sum=%0d", expected_sum, sum);
        else
            $display("Test passed! Expected sum=%0d, Actual sum=%0d", expected_sum, sum);
    endtask
endclass