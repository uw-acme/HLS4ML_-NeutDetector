module fifo #(parameter LENGTH = 8, parameter word_size = 16, parameter addr_size = 2) (
    input logic clk, reset, write, read,
    input logic [word_size-1:0] output_to_fifo,
    output	logic [word_size-1:0] input_from_fifo
);
    logic [15:0] fifo_buffer [0:(LENGTH/2)-1];
    logic wr_en, empty, full;
    logic [addr_size-1:0] waddr, raddr;

    fifo_control control (.clk, .reset, .read, .write, .wr_en, .empty, .full,
                            .readAddr(raddr), .writeAddr(waddr));

    

	// DFFs to control data input
	always_ff @(posedge clk) begin
		if (wr_en) begin
			fifo_buffer[waddr] <= output_to_fifo;
		end
	end
    always_comb begin
        if(read)
            input_from_fifo = fifo_buffer[raddr];
    end
endmodule



module fifo_control #(parameter depth = 2) (
    input logic clk, reset,
	input logic read, write,
	output logic wr_en,
	output logic empty, full,
	output logic [depth-1:0] readAddr, writeAddr
);
    logic [depth-1:0] readAddr1, writeAddr1, read_next, write_next; // current pointers // next pointers;
	logic n_e, n_f; // pointers to tell what is the next status for the system

    enum logic [1:0] {NONE, READ, WRITE, R_W} ps, ns;

    /*
		The states of this FSM is the behavior that it is going to do. When 
		it is supposed to read, it will to the read pointer, and the status 
		will change depending on the position of the current pointers.
	*/
	always_comb begin
		n_e = empty;
		n_f = full;
		case(ps)
			NONE: 
                if (read&~write&~empty) begin
                    read_next   = readAddr1 + 1;
                    write_next  = writeAddr1;
                    ns          = READ;
                    if(read_next == writeAddr1)
                        n_e = 1;
                    else 
                        n_e = 0;

                    // if (full) // if full, change to not full
                    //     n_f = 0;
                    // else 
                    //     n_f = 1;

                end else if (~read&write&~full) begin
                    read_next   = readAddr1;
                    write_next  = writeAddr1 + 1;
                    ns          = WRITE;    
                    if(write_next == readAddr1)
                        n_f = 1;       
                    else
                        n_f = 0;
                    
                    if (empty) 
                        n_e = 0;
                    else    
                        n_e = 1;
                end else if (read&write) begin
                    read_next   = readAddr1+1;
					write_next  = writeAddr1+1; 		
                    ns          = R_W;    
                end else begin
                    read_next   = readAddr1;
                    write_next  = writeAddr1; 	
                    ns          = NONE;		
				end
            READ: begin
                read_next   = readAddr1;
                write_next  = writeAddr1;
                if (read&~write&~empty) begin
                    read_next   = readAddr1 + 1;
                    write_next  = writeAddr1;
                    ns = READ;
                end else if (~read&write&~full) begin
                    read_next   = readAddr1;
                    write_next  = writeAddr1+1;
                    ns = WRITE;
                end else if (read&write) begin
                    read_next   = readAddr1+1;
                    write_next  = writeAddr1+1;
                    ns = R_W;
                end else begin
                    ns = NONE;
                end
                if(~empty) begin
                    n_e = 0;
                end else begin
                    n_e = 1;
                end
            end
            WRITE: begin
                read_next   = readAddr1;
                write_next  = writeAddr1;
                if (read&~write&~empty) begin
                    read_next   = readAddr1 + 1;
                    write_next  = writeAddr1;
                    ns = READ;
                end else if (~read&write&~full) begin
                    read_next   = readAddr1;
                    write_next  = writeAddr1+1;
                    ns = WRITE;
                end else if (read&write) begin
                    read_next   = readAddr1+1;
                    write_next  = writeAddr1+1;
                    ns = R_W;
                end else begin
                    ns = NONE;
                end
                // if(~full) begin
                //     n_f = 0;
                // end else begin
                //     n_f = 1;
                // end
            end
            R_W: begin
                read_next   = readAddr1;
                write_next  = writeAddr1;
                if (read&~write&~empty) begin
                    read_next   = readAddr1 + 1;
                    write_next  = writeAddr1;
                    ns = READ;
                end else if (~read&write&~full) begin
                    read_next   = readAddr1;
                    write_next  = writeAddr1+1;
                    ns = WRITE;
                end else if (read&write) begin
                    read_next   = readAddr1+1;
                    write_next  = writeAddr1+1;
                    ns = R_W;
                end else begin
                    ns = NONE;
                end
            end
        endcase
    end

    always_comb begin
        writeAddr   = writeAddr1;
        readAddr    = readAddr1;
        wr_en       = ~full & write;
    end
    always_ff @(posedge clk) begin
        if(reset) begin
			readAddr1  <= '0;
			writeAddr1  <= '0;
		    empty       <= 1'b1;
		    full        <= 1'b0;
			ps          <= NONE;

		end else begin
			readAddr1   <= read_next;
			writeAddr1  <= write_next;
		    empty       <= n_e;
			full        <= n_f;
			ps          <= ns;
		end
    end

endmodule