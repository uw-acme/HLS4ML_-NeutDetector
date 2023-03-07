module max_pooling #(parameter LENGTH = 8)(
	input logic clk, reset,
    input logic [15:0] input_data,
    output logic [15:0] output_data
);
	logic enable;
	logic read, write;
    logic [15:0] input_from_fifo, output_to_fifo;
	maxPooling_Streamed calc (.clk, .reset, .enable, .write, .read, .input_data, .input_from_fifo,
							  .output_data, .output_to_fifo );
	fifo pooledValues (.clk, .reset, .write, .read, .output_to_fifo, .input_from_fifo);
endmodule

module maxPooling_Streamed (
    input logic clk, reset, enable,
    input logic [15:0] input_data, input_from_fifo,

	output logic write, read,
    output logic [15:0] output_data, output_to_fifo
);
    localparam STAGE1 = 1'b0; // making comparisons between values 1&2 of the pool filter
    localparam STAGE2 = 1'b1; // making comparisons between values 3&4 of the pool filter
    logic CURRENT_STAGE;   // denoting wnat the current stage is
    logic [15:0] temp1, temp2, maxVal; // temporary values
    logic [15:0] stage2_temp_maxVal, comp_result;
    logic [15:0] pooled;
    logic [1:0]  counter;   // counter to tell when it is appropriate to update values
    logic [3:0]  overallCounter;
    logic update, getPooled;

    assign comp_result = temp1 - temp2; // for testing

    // change the current stage
    always_comb begin
        if (reset) 
            CURRENT_STAGE = STAGE1;
        if (overallCounter < 4'b0100)
            CURRENT_STAGE = STAGE1;
        else
            CURRENT_STAGE = STAGE2;
    end

    // updating overall counter and when to get the max value
    always_ff @(posedge clk) begin
        if (reset) begin
            overallCounter <= 0;
        end else if (overallCounter == 4'b1000) begin
            overallCounter <= 0;
        end else if (update) begin
            overallCounter <= overallCounter + 1;
        end else begin
            overallCounter <= overallCounter;
        end

        if (CURRENT_STAGE == STAGE2 && counter == 1'b1) begin
            getPooled <= 1;
        end else begin
            getPooled <= 0;
        end
    end

	// hold the first input value in stage one and two and update local counter
    always_ff @(posedge clk) begin
            if ((CURRENT_STAGE == STAGE1)) begin
                temp1 <= input_data;
                temp2 <= temp1;
            end else if (CURRENT_STAGE == STAGE2) begin
                temp1 <= input_data;
                temp2 <= input_from_fifo;
            end 

            if (reset) begin
                counter <= '0;
            end else if(temp1 !== {16{1'bx}}) begin
                counter <= counter + 1;
            end
    end

    // update the temp2 variable correctly when in stage 2
    always_ff @(posedge clk) begin
        if ((CURRENT_STAGE == STAGE2) && (counter == 2'b01)) begin
            if (temp1 > temp2) begin
                temp2 <= temp1;
            end else begin
                temp2 <= temp2;
            end
        end 

        if (counter == 2'b01) begin
            counter <= 0;
        end
    end

	// reset local counter and get the output of the local data to the output data
	always_ff @(posedge clk) begin
        if (counter == 2'b01)
            counter <= 0;

        // if ((CURRENT_STAGE == STAGE2) && (maxVal !== {16{1'bx}})) begin
            output_data <= stage2_temp_maxVal;
        // end
        
	end

    // update the max values in stage 1 and 2 && the temp variable that will be sent to the output
    always_comb begin
        if ((CURRENT_STAGE == STAGE1) && (counter == 2'd00) && (temp1 !== {16{1'bx}}) && ((temp2 !== {16{1'bx}}))) begin
            if (temp1 > temp2) 
                maxVal = temp1;
                
            else 
                maxVal <= temp2;
        end else if ((CURRENT_STAGE == STAGE2) && (counter == 2'b00)) begin
            if (temp1 > temp2) begin
                maxVal = temp1;
                if(getPooled) begin
                    stage2_temp_maxVal <= temp1;
                end
                
            end else begin
                maxVal = temp2;
                if(getPooled) begin
                    stage2_temp_maxVal = temp2;
                end
            end
        end else begin
            maxVal = 0;
            stage2_temp_maxVal = 'x;
        end

    end
    always_comb begin
        if((CURRENT_STAGE == STAGE1) && (maxVal !== {16{1'bx}})) begin
            output_to_fifo = maxVal;
            
            if(counter == 2'b00 && (maxVal == temp1 || maxVal == temp2)) begin
                write = 1;
            end else begin
                write = 0;
            end
        end
        else if ((CURRENT_STAGE == STAGE2) && (maxVal == temp1 || maxVal == temp2)) begin
            output_to_fifo = maxVal;

            if(counter == 2'b00)
                read = 1;
            else 
                read = 0;
        end
        else begin
            output_to_fifo = output_to_fifo;
            read = 0;
            write = 0;
        end

        if((counter == 2'b01) && (maxVal !== {16{1'bx}})) begin
            update = 1;
        end else begin
            update = 0;
        end
    end
endmodule



module max_pooling_top_testbench();
    logic clk, reset;
    logic [15:0] input_data, input_from_fifo;
    logic [15:0] output_data, output_to_fifo;

    max_pooling dut (.*);

    parameter CLK_Period = 100;
	
	initial begin
		clk <= 1'b0;
		forever #(CLK_Period/2) clk <= ~clk;
	end
	
	initial begin
		reset <= 1;
		input_data <= 16'd5;
             @(posedge clk);

        reset <= 0;
		// input_data <= 16'd5;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd3;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd4;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd6;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd5;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd3;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd4;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd6;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd12;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd13;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd4;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd6;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd10;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd11;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd4;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd6;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd100;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd3;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd4;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd2;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd5;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd3;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd4;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd6;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd20;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd3;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd4;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd6;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd30;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd3;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd4;
             @(posedge clk);
        reset <= 0;
		input_data <= 16'd10;
             @(posedge clk);
             @(posedge clk);
             @(posedge clk);
             @(posedge clk);
             @(posedge clk);
             @(posedge clk);
             @(posedge clk);
             @(posedge clk);



    $stop;
	end
endmodule
