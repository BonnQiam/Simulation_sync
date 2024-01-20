// Testbench using 'class' feature
class AdderTest;
    // Inputs
    rand logic [3:0] A, B;
    // Expected output
    logic [4:0] expected_sum;

    //virtual interface
    virtual intf vif;

    // Constructor
    function new(virtual intf i_intf);
        this.vif = i_intf;
    endfunction

    // Randomize method to generate random inputs
    virtual task random_stimulus();
        A = $urandom_range(0, 15);
        B = $urandom_range(0, 15);
        expected_sum = A + B;
    endtask

    task run_test();
        repeat(10) begin
            // Randomize test inputs
            random_stimulus();
            // Assign inputs to DUT signals
            vif.a = A;
            vif.b = B;
            #5;
            // Apply inputs and check the result
            if (vif.sum != expected_sum)
                $display("Test failed! Expected sum=%0d, Actual sum=%0d", expected_sum, vif.sum);
            else
                $display("Test passed! Expected sum=%0d, Actual sum=%0d", expected_sum, vif.sum);
        end
    endtask

endclass