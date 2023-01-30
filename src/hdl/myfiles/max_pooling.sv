module max_pooling #(
    parameter pooling_size=2, parameter n_in=8, parameter n_out=5
    ) (
        data, res
    );
    input logic [n_in:0] data;
    output logic [n_out:0] res;

    
endmodule

module max_pooling_testbench ();
    logic [7:0] data;
    logic [4:0] res;

    max_pooling dut (.*);

    initial begin 
        data = '1; #10;
    end
    
endmodule