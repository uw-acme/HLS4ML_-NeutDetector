module global_max_pooling (
	input logic clk, reset,
    input logic [15:0] input_data,
    output logic [15:0] output_data
);
    logic [15:0] global_max_val;

    always_ff @(posedge clk) begin
        if(reset) begin
            global_max_val <= 0;
        end else if (input_data > global_max_val) begin
            global_max_val <= input_data;
        end
    end
endmodule