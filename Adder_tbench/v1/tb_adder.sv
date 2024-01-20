`include "interface.sv"
`include "adder_test.sv"

// Top-level module
module tb;

    intf i_intf();

    AdderTest test;

    adder uut (
        .a(i_intf.a),
        .b(i_intf.b),
        .sum(i_intf.sum)
    );

    initial begin
        test = new(i_intf);
        test.run_test();
        $dumpfile("dump.vcd"); $dumpvars;
    end

endmodule;