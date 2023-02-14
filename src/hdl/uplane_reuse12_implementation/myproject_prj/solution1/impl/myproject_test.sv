`timescale 1ns/100ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/08/2023 04:39:50 PM
// Design Name: 
// Module Name: myproject_test
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

module myproject_test();
logic  [15:0] conv1d_input_V_data_0_V_TDATA;
logic  [15:0] layer13_out_V_data_0_V_TDATA;
logic  [15:0] const_size_in_1;
logic  [15:0] const_size_out_1;
logic   ap_clk;
logic   ap_rst_n;
logic   const_size_in_1_ap_vld;
logic   const_size_out_1_ap_vld;
logic   ap_start;
logic   ap_done;
logic   conv1d_input_V_data_0_V_TVALID;
logic   conv1d_input_V_data_0_V_TREADY;
logic   layer13_out_V_data_0_V_TVALID;
logic   layer13_out_V_data_0_V_TREADY;
logic   ap_ready;
logic   ap_idle;

myproject dut (
        conv1d_input_V_data_0_V_TDATA,
        layer13_out_V_data_0_V_TDATA,
        const_size_in_1,
        const_size_out_1,
        ap_clk,
        ap_rst_n,
        const_size_in_1_ap_vld,
        const_size_out_1_ap_vld,
        ap_start,
        ap_done,
        conv1d_input_V_data_0_V_TVALID,
        conv1d_input_V_data_0_V_TREADY,
        layer13_out_V_data_0_V_TVALID,
        layer13_out_V_data_0_V_TREADY,
        ap_ready,
        ap_idle
);

     parameter CLOCK_PERIOD = 100;
    initial begin
        ap_clk <= 0;
        forever #(CLOCK_PERIOD/2) ap_clk <= ~ap_clk;
    end
    
//    always_comb begin
//        if(~ap_rst_n) first = 1;
//        else if( conv2d_1_input_V_data_0_V_TREADY & first) begin
//            conv2d_1_input_V_data_0_V_TDATA = 16'd1;
//            first = 0;
//        end else begin
//            conv2d_1_input_V_data_0_V_TDATA = 16'd0;
//            first = (first == 1);
//        end
        
    
//    end
    
//    assign conv2d_1_input_V_data_0_V_TDATA =  16'd0;
//    initial begin
//        ap_rst_n <= 0;  ap_start <= 0;first <=1 ;third <=1; @(posedge ap_clk);
//        ap_rst_n <= 1; ap_start <= 1;//@(posedge ap_clk); repeat(100) @(posedge ap_clk);
////        while (ap_idle != 1) begin
////            @(posedge ap_clk);
////        end
//        conv2d_1_input_V_data_0_V_TVALID <= 1; second <= 0; repeat(14) @(posedge ap_clk);
//        conv2d_1_input_V_data_0_V_TDATA <= 16'd75; @(posedge ap_clk);
//        //conv2d_1_input_V_data_0_V_TDATA <= 0; @(posedge ap_clk);
        
//        while (ap_ready != 1) begin
//          @(posedge ap_clk);
//        end 
 
//        while (ap_done != 1) begin
//            //ap_rst_n <= 0; 
            
//            layer6_out_V_data_0_V_TREADY <= 1; layer6_out_V_data_1_V_TREADY <= 1; layer6_out_V_data_2_V_TREADY <= 1;
//            layer6_out_V_data_3_V_TREADY <= 1; layer6_out_V_data_4_V_TREADY <= 1; layer6_out_V_data_5_V_TREADY <= 1;
//            layer6_out_V_data_6_V_TREADY <= 1; layer6_out_V_data_7_V_TREADY <= 1; layer6_out_V_data_8_V_TREADY <= 1;
//            layer6_out_V_data_9_V_TREADY <= 1; conv2d_1_input_V_data_0_V_TVALID <=0; @(posedge ap_clk);
//        end
        
//        repeat(900) @(posedge ap_clk);
//        $stop;
   
//    end

    initial begin
        conv1d_input_V_data_0_V_TDATA <= 16'd1001;
        ap_rst_n <= 0;  ap_start <= 0; @(posedge ap_clk);
        ap_rst_n <= 1;                 @(posedge ap_clk);
//        while (ap_idle != 1) begin
//            @(posedge ap_clk);
//        end
        
        ap_start <= 1; @(posedge ap_clk);
        conv1d_input_V_data_0_V_TVALID <= 1;
// input_1_V_data_0_V_TVALID <=1;  input_1_V_data_0_V_TDATA <= 16'd1; repeat (300)@(posedge ap_clk);
//            layer6_out_V_data_0_V_TREADY <= 1; layer6_out_V_data_1_V_TREADY <= 1; layer6_out_V_data_2_V_TREADY <= 1; layer6_out_V_data_3_V_TREADY <= 1;
//            layer6_out_V_data_4_V_TREADY <= 1; layer6_out_V_data_5_V_TREADY <= 1; layer6_out_V_data_6_V_TREADY <= 1; layer6_out_V_data_7_V_TREADY <= 1;
//            layer6_out_V_data_8_V_TREADY <= 1; layer6_out_V_data_9_V_TREADY <= 1; layer6_out_V_data_10_V_TREADY <= 1; layer6_out_V_data_11_V_TREADY <= 1;
//            layer6_out_V_data_12_V_TREADY <= 1; layer6_out_V_data_13_V_TREADY <= 1; layer6_out_V_data_14_V_TREADY <= 1; layer6_out_V_data_15_V_TREADY <= 1;  repeat(30) @(posedge ap_clk);
//        while (ap_ready != 1) begin
//           @(posedge ap_clk);
//        end 
//        while (ap_done != 1) begin
//            ap_rst_n <= 1; 
//            layer6_out_V_data_0_V_TREADY <= 1; layer6_out_V_data_1_V_TREADY <= 1; layer6_out_V_data_2_V_TREADY <= 1;
//            layer6_out_V_data_3_V_TREADY <= 1; layer6_out_V_data_4_V_TREADY <= 1; layer6_out_V_data_5_V_TREADY <= 1;
//            layer6_out_V_data_6_V_TREADY <= 1; layer6_out_V_data_7_V_TREADY <= 1; layer6_out_V_data_8_V_TREADY <= 1;
//            layer6_out_V_data_9_V_TREADY <= 1; @(posedge ap_clk);
//        end
//        ap_start <= 0; repeat(30) @(posedge ap_clk);
//        ap_start <= 1; layer6_out_V_data_0_V_TREADY <= 0; layer6_out_V_data_1_V_TREADY <= 0; layer6_out_V_data_2_V_TREADY <= 0;
//            layer6_out_V_data_3_V_TREADY <= 0; layer6_out_V_data_4_V_TREADY <= 0; layer6_out_V_data_5_V_TREADY <= 0;
//            layer6_out_V_data_6_V_TREADY <= 0; layer6_out_V_data_7_V_TREADY <= 0; layer6_out_V_data_8_V_TREADY <= 0;
//            layer6_out_V_data_9_V_TREADY <= 0;  @(posedge ap_clk);
//            layer6_out_V_data_0_V_TREADY <= 1; layer6_out_V_data_1_V_TREADY <= 1; layer6_out_V_data_2_V_TREADY <= 1;
//            layer6_out_V_data_3_V_TREADY <= 1; layer6_out_V_data_4_V_TREADY <= 1; layer6_out_V_data_5_V_TREADY <= 1;
//            layer6_out_V_data_6_V_TREADY <= 1; layer6_out_V_data_7_V_TREADY <= 1; layer6_out_V_data_8_V_TREADY <= 1;
//            layer6_out_V_data_9_V_TREADY <= 1; @(posedge ap_clk);
            
        //input_1_V_data_0_V_TDATA <= 16'b1111_0000_0000_0001;
        repeat(5) @(posedge ap_clk);
        $stop;
   
    end
    
endmodule