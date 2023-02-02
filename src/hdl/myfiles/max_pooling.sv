module max_pooling #(
       parameter pooling_size=2, // pool size == stride_width
       parameter n_in=16,         // input bit width
       parameter n_out=16         // output bit width
    ) (
        data, res                // inputs/output declarations
    );
    input logic [n_in:0] data;   // declaring input data
    output logic [n_out:0] res;  // declaring output results

    
endmodule

module max_pooling_testbench ();
    logic [7:0] data;
    logic [4:0] res;

    max_pooling dut (.*);

    initial begin 
        data = '1; #10;
    end
    
endmodule