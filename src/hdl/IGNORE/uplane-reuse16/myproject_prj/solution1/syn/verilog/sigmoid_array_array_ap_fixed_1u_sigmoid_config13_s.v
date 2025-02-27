// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module sigmoid_array_array_ap_fixed_1u_sigmoid_config13_s (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        data_V_data_V_dout,
        data_V_data_V_empty_n,
        data_V_data_V_read,
        res_V_data_V_TREADY,
        res_V_data_V_TDATA,
        res_V_data_V_TVALID
);

parameter    ap_ST_fsm_pp0_stage0 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
input  [15:0] data_V_data_V_dout;
input   data_V_data_V_empty_n;
output   data_V_data_V_read;
input   res_V_data_V_TREADY;
output  [15:0] res_V_data_V_TDATA;
output   res_V_data_V_TVALID;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg data_V_data_V_read;

reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_enable_reg_pp0_iter0;
reg    ap_enable_reg_pp0_iter1;
reg    ap_enable_reg_pp0_iter2;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter4;
reg    ap_idle_pp0;
reg    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_state4_pp0_stage0_iter3;
wire    regslice_both_res_V_data_V_U_apdone_blk;
reg    ap_block_state5_pp0_stage0_iter4;
reg    ap_block_pp0_stage0_11001;
wire   [9:0] sigmoid_table10_address0;
reg    sigmoid_table10_ce0;
wire   [9:0] sigmoid_table10_q0;
reg    data_V_data_V_blk_n;
wire    ap_block_pp0_stage0;
reg    res_V_data_V_TDATA_blk_n;
wire  signed [12:0] sext_ln850_fu_134_p1;
reg  signed [12:0] sext_ln850_reg_253;
wire   [0:0] icmp_ln850_fu_138_p2;
reg   [0:0] icmp_ln850_reg_259;
wire   [0:0] icmp_ln851_fu_156_p2;
reg   [0:0] icmp_ln851_reg_264;
wire   [12:0] add_ln700_fu_162_p2;
reg   [12:0] add_ln700_reg_269;
wire   [12:0] select_ln850_fu_173_p3;
reg   [12:0] select_ln850_reg_274;
reg   [0:0] tmp_2_reg_279;
wire   [0:0] icmp_ln108_fu_203_p2;
reg   [0:0] icmp_ln108_reg_285;
reg    ap_block_pp0_stage0_subdone;
wire   [63:0] zext_ln109_fu_243_p1;
reg    ap_block_pp0_stage0_01001;
wire   [11:0] tmp_1_fu_124_p4;
wire   [25:0] shl_ln_fu_116_p3;
wire   [3:0] trunc_ln851_fu_144_p1;
wire   [9:0] p_Result_3_i_i_i_fu_148_p3;
wire   [12:0] select_ln851_fu_168_p3;
wire   [12:0] add_ln106_fu_179_p2;
wire   [2:0] tmp_3_fu_193_p4;
wire   [9:0] trunc_ln106_fu_209_p1;
wire   [0:0] xor_ln107_fu_218_p2;
wire   [0:0] or_ln107_fu_231_p2;
wire   [9:0] select_ln107_fu_223_p3;
wire   [9:0] xor_ln106_fu_212_p2;
wire   [9:0] select_ln107_1_fu_235_p3;
reg   [0:0] ap_NS_fsm;
reg    ap_idle_pp0_0to3;
reg    ap_reset_idle_pp0;
wire    ap_enable_pp0;
wire   [15:0] res_V_data_V_TDATA_int;
reg    res_V_data_V_TVALID_int;
wire    res_V_data_V_TREADY_int;
wire    regslice_both_res_V_data_V_U_vld_out;

// power-on initialization
initial begin
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 1'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
end

sigmoid_array_array_ap_fixed_1u_sigmoid_config13_s_sigmoidEe #(
    .DataWidth( 10 ),
    .AddressRange( 1024 ),
    .AddressWidth( 10 ))
sigmoid_table10_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(sigmoid_table10_address0),
    .ce0(sigmoid_table10_ce0),
    .q0(sigmoid_table10_q0)
);

regslice_both #(
    .DataWidth( 16 ))
regslice_both_res_V_data_V_U(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .data_in(res_V_data_V_TDATA_int),
    .vld_in(res_V_data_V_TVALID_int),
    .ack_in(res_V_data_V_TREADY_int),
    .data_out(res_V_data_V_TDATA),
    .vld_out(regslice_both_res_V_data_V_U_vld_out),
    .ack_out(res_V_data_V_TREADY),
    .apdone_blk(regslice_both_res_V_data_V_U_apdone_blk)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter1 <= ap_start;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        add_ln700_reg_269 <= add_ln700_fu_162_p2;
        icmp_ln108_reg_285 <= icmp_ln108_fu_203_p2;
        icmp_ln850_reg_259 <= icmp_ln850_fu_138_p2;
        icmp_ln851_reg_264 <= icmp_ln851_fu_156_p2;
        select_ln850_reg_274 <= select_ln850_fu_173_p3;
        sext_ln850_reg_253 <= sext_ln850_fu_134_p1;
        tmp_2_reg_279 <= add_ln106_fu_179_p2[32'd12];
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0_0to3 = 1'b1;
    end else begin
        ap_idle_pp0_0to3 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0_0to3 == 1'b1))) begin
        ap_reset_idle_pp0 = 1'b1;
    end else begin
        ap_reset_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b0 == ap_block_pp0_stage0) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_V_data_V_blk_n = data_V_data_V_empty_n;
    end else begin
        data_V_data_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_V_data_V_read = 1'b1;
    end else begin
        data_V_data_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter4 == 1'b1)) | ((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter3 == 1'b1)))) begin
        res_V_data_V_TDATA_blk_n = res_V_data_V_TREADY_int;
    end else begin
        res_V_data_V_TDATA_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter3 == 1'b1))) begin
        res_V_data_V_TVALID_int = 1'b1;
    end else begin
        res_V_data_V_TVALID_int = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        sigmoid_table10_ce0 = 1'b1;
    end else begin
        sigmoid_table10_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_pp0_stage0 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln106_fu_179_p2 = (13'd512 + select_ln850_fu_173_p3);

assign add_ln700_fu_162_p2 = ($signed(13'd1) + $signed(sext_ln850_fu_134_p1));

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = ((ap_done_reg == 1'b1) | ((regslice_both_res_V_data_V_U_apdone_blk == 1'b1) & (ap_enable_reg_pp0_iter4 == 1'b1)) | ((ap_start == 1'b1) & ((ap_start == 1'b0) | (data_V_data_V_empty_n == 1'b0) | (ap_done_reg == 1'b1))));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((ap_done_reg == 1'b1) | ((ap_enable_reg_pp0_iter4 == 1'b1) & ((res_V_data_V_TREADY_int == 1'b0) | (regslice_both_res_V_data_V_U_apdone_blk == 1'b1))) | ((res_V_data_V_TREADY_int == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b1)) | ((ap_start == 1'b1) & ((ap_start == 1'b0) | (data_V_data_V_empty_n == 1'b0) | (ap_done_reg == 1'b1))));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((ap_done_reg == 1'b1) | ((ap_enable_reg_pp0_iter4 == 1'b1) & ((res_V_data_V_TREADY_int == 1'b0) | (regslice_both_res_V_data_V_U_apdone_blk == 1'b1))) | ((res_V_data_V_TREADY_int == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b1)) | ((ap_start == 1'b1) & ((ap_start == 1'b0) | (data_V_data_V_empty_n == 1'b0) | (ap_done_reg == 1'b1))));
end

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0 = ((ap_start == 1'b0) | (data_V_data_V_empty_n == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state5_pp0_stage0_iter4 = (regslice_both_res_V_data_V_U_apdone_blk == 1'b1);
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_reg_pp0_iter0 = ap_start;

assign icmp_ln108_fu_203_p2 = ((tmp_3_fu_193_p4 != 3'd0) ? 1'b1 : 1'b0);

assign icmp_ln850_fu_138_p2 = (($signed(shl_ln_fu_116_p3) < $signed(26'd67108849)) ? 1'b1 : 1'b0);

assign icmp_ln851_fu_156_p2 = ((p_Result_3_i_i_i_fu_148_p3 == 10'd0) ? 1'b1 : 1'b0);

assign or_ln107_fu_231_p2 = (tmp_2_reg_279 | icmp_ln108_reg_285);

assign p_Result_3_i_i_i_fu_148_p3 = {{trunc_ln851_fu_144_p1}, {6'd0}};

assign res_V_data_V_TDATA_int = sigmoid_table10_q0;

assign res_V_data_V_TVALID = regslice_both_res_V_data_V_U_vld_out;

assign select_ln107_1_fu_235_p3 = ((or_ln107_fu_231_p2[0:0] === 1'b1) ? select_ln107_fu_223_p3 : xor_ln106_fu_212_p2);

assign select_ln107_fu_223_p3 = ((xor_ln107_fu_218_p2[0:0] === 1'b1) ? 10'd1023 : 10'd0);

assign select_ln850_fu_173_p3 = ((icmp_ln850_reg_259[0:0] === 1'b1) ? select_ln851_fu_168_p3 : sext_ln850_reg_253);

assign select_ln851_fu_168_p3 = ((icmp_ln851_reg_264[0:0] === 1'b1) ? sext_ln850_reg_253 : add_ln700_reg_269);

assign sext_ln850_fu_134_p1 = $signed(tmp_1_fu_124_p4);

assign shl_ln_fu_116_p3 = {{data_V_data_V_dout}, {10'd0}};

assign sigmoid_table10_address0 = zext_ln109_fu_243_p1;

assign tmp_1_fu_124_p4 = {{data_V_data_V_dout[15:4]}};

assign tmp_3_fu_193_p4 = {{add_ln106_fu_179_p2[12:10]}};

assign trunc_ln106_fu_209_p1 = select_ln850_reg_274[9:0];

assign trunc_ln851_fu_144_p1 = data_V_data_V_dout[3:0];

assign xor_ln106_fu_212_p2 = (trunc_ln106_fu_209_p1 ^ 10'd512);

assign xor_ln107_fu_218_p2 = (tmp_2_reg_279 ^ 1'd1);

assign zext_ln109_fu_243_p1 = select_ln107_1_fu_235_p3;

endmodule //sigmoid_array_array_ap_fixed_1u_sigmoid_config13_s
