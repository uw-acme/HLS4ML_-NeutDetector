/*
    This module is doing the max pooling layer. 
    It has a pool size of 2x2 and a stride of 2.
    There will be 4 inputs, each denoting a single 
    pixel on the image, and a single pixel output
*/
module max_pooling_Disgard #(
    //    parameter pooling_size=2, // pool size == stride_width
       parameter n_in=16,         // input bit width
       parameter n_out=16         // output bit width
    ) (
        clk, enable,
        input1,input2,input3,input4, 
        done,
        output_data                             // inputs/output declarations
    );
    input logic clk, enable;
    input logic [n_in-1:0] input1, input2, input3, input4;   // declaring input data
    output logic done;
    output logic [n_out-1:0] output_data;  // declaring output results

    logic [n_out-1:0] max1, max2;

    always_ff @(posedge clk) begin
        if (enable) begin
            if (input1 > input2) begin // compare first 2 inputs
                max1 <= input1;
                done <= 0;
            end else if (input1 < input2) begin
                max1 <= input2;
                done <= 0;
            end else if (input1 == input2) begin  
                max1 <= input1;
                done <= 0;
            end else begin
                max1 <= max1; // if none apply don't change.
                done <= 0;
            end

            if (input3 > input4) begin // compare second 2 inputs
                max2 <= input3;
                done <= 0;
            end else if (input3 < input4) begin
                max2 <= input4;
                done <= 0;
            end else if (input3 == input4) begin  
                max2 <= input3;
                done <= 0;
            end else begin
                max2 <= max2; // if none apply don't change.
                done <= 0;
            end

            if (max1 > max2) begin // compare second 2 inputs
                output_data <= max1;
                done <= 1;
            end else if (max1 < max2) begin
                output_data <= max2;
                done <= 1;
            end else if (max1 == max2) begin  
                output_data <= max1;
                done <= 1;
            end else begin
                output_data <= output_data; // if none apply don't change.
                // done <= 1;
            end
        end
    end
endmodule

module max_pooling_Disgard_testbench ();
    logic clk, enable;
    logic [15:0] input1,input2,input3,input4;
    logic [15:0] output_data;
    logic done;

    max_pooling_Disgard dut (.*);

    parameter CLOCK_PERIOD=100;  
	initial begin  
		clk <= 0;  
		forever #(CLOCK_PERIOD/2) clk <= ~clk; // Forever toggle the clock 
	end 
	
	initial begin
		enable <= 0; input1 <= 16'b100000;  input2 <= 16'b010000;
                    input3 <= 16'b001000;  input4 <= 16'b000100;   @(posedge clk);
		
	    enable <= 1;              	            @(posedge clk);
                                      repeat(3) @(posedge clk);

        enable <= 0; input1 <= 16'b1000000;  input2 <= 16'b0010000;
                    input3 <= 16'b0010000;  input4 <= 16'b0000100;   @(posedge clk);
		
	    enable <= 1;              	            @(posedge clk);
                                      repeat(3) @(posedge clk);
		$stop;
	 end
endmodule

module maxPoolLayer #(parameter n_in = 32, parameter m_in = 32,
                      parameter n_out = 16, m_out=16)
                     (in, out, clk);
    input logic clk;
    input logic [0:n_in-1] in [0:m_in-1];
    output logic [0:n_out-1] out [0:m_out-1];

    genvar i, j;
    generate
        for(i = 0; i < n_in; i+=2) begin
            for(j=0; j < m_in; j += 2) begin
                // max_pooling max 
            end
        end
    endgenerate
endmodule