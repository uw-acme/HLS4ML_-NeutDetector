// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _conv_1d_cl_array_array_ap_fixed_16u_config2_s_HH_
#define _conv_1d_cl_array_array_ap_fixed_16u_config2_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "myproject_mux_83_3_1_1.h"
#include "myproject_mux_32_16_1_1.h"
#include "myproject_mux_42_16_1_1.h"
#include "myproject_mux_164_16_1_1.h"
#include "myproject_mul_mul_16s_16s_26_3_1.h"
#include "myproject_mul_mul_16s_10s_26_3_1.h"
#include "conv_1d_cl_array_array_ap_fixed_16u_config2_s_outidx.h"
#include "conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V.h"
#include "fifo_w16_d99_A.h"

namespace ap_rtl {

struct conv_1d_cl_array_array_ap_fixed_16u_config2_s : public sc_module {
    // Port declarations 61
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_in< sc_logic > start_full_n;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > start_out;
    sc_out< sc_logic > start_write;
    sc_in< sc_lv<16> > data_V_data_V_TDATA;
    sc_in< sc_logic > data_V_data_V_TVALID;
    sc_out< sc_logic > data_V_data_V_TREADY;
    sc_out< sc_lv<16> > res_V_data_0_V_din;
    sc_in< sc_logic > res_V_data_0_V_full_n;
    sc_out< sc_logic > res_V_data_0_V_write;
    sc_out< sc_lv<16> > res_V_data_1_V_din;
    sc_in< sc_logic > res_V_data_1_V_full_n;
    sc_out< sc_logic > res_V_data_1_V_write;
    sc_out< sc_lv<16> > res_V_data_2_V_din;
    sc_in< sc_logic > res_V_data_2_V_full_n;
    sc_out< sc_logic > res_V_data_2_V_write;
    sc_out< sc_lv<16> > res_V_data_3_V_din;
    sc_in< sc_logic > res_V_data_3_V_full_n;
    sc_out< sc_logic > res_V_data_3_V_write;
    sc_out< sc_lv<16> > res_V_data_4_V_din;
    sc_in< sc_logic > res_V_data_4_V_full_n;
    sc_out< sc_logic > res_V_data_4_V_write;
    sc_out< sc_lv<16> > res_V_data_5_V_din;
    sc_in< sc_logic > res_V_data_5_V_full_n;
    sc_out< sc_logic > res_V_data_5_V_write;
    sc_out< sc_lv<16> > res_V_data_6_V_din;
    sc_in< sc_logic > res_V_data_6_V_full_n;
    sc_out< sc_logic > res_V_data_6_V_write;
    sc_out< sc_lv<16> > res_V_data_7_V_din;
    sc_in< sc_logic > res_V_data_7_V_full_n;
    sc_out< sc_logic > res_V_data_7_V_write;
    sc_out< sc_lv<16> > res_V_data_8_V_din;
    sc_in< sc_logic > res_V_data_8_V_full_n;
    sc_out< sc_logic > res_V_data_8_V_write;
    sc_out< sc_lv<16> > res_V_data_9_V_din;
    sc_in< sc_logic > res_V_data_9_V_full_n;
    sc_out< sc_logic > res_V_data_9_V_write;
    sc_out< sc_lv<16> > res_V_data_10_V_din;
    sc_in< sc_logic > res_V_data_10_V_full_n;
    sc_out< sc_logic > res_V_data_10_V_write;
    sc_out< sc_lv<16> > res_V_data_11_V_din;
    sc_in< sc_logic > res_V_data_11_V_full_n;
    sc_out< sc_logic > res_V_data_11_V_write;
    sc_out< sc_lv<16> > res_V_data_12_V_din;
    sc_in< sc_logic > res_V_data_12_V_full_n;
    sc_out< sc_logic > res_V_data_12_V_write;
    sc_out< sc_lv<16> > res_V_data_13_V_din;
    sc_in< sc_logic > res_V_data_13_V_full_n;
    sc_out< sc_logic > res_V_data_13_V_write;
    sc_out< sc_lv<16> > res_V_data_14_V_din;
    sc_in< sc_logic > res_V_data_14_V_full_n;
    sc_out< sc_logic > res_V_data_14_V_write;
    sc_out< sc_lv<16> > res_V_data_15_V_din;
    sc_in< sc_logic > res_V_data_15_V_full_n;
    sc_out< sc_logic > res_V_data_15_V_write;
    sc_signal< sc_logic > ap_var_for_const5;
    sc_signal< sc_lv<3> > ap_var_for_const0;
    sc_signal< sc_lv<3> > ap_var_for_const1;
    sc_signal< sc_lv<3> > ap_var_for_const2;
    sc_signal< sc_lv<3> > ap_var_for_const4;
    sc_signal< sc_lv<3> > ap_var_for_const3;


    // Module declarations
    conv_1d_cl_array_array_ap_fixed_16u_config2_s(sc_module_name name);
    SC_HAS_PROCESS(conv_1d_cl_array_array_ap_fixed_16u_config2_s);

    ~conv_1d_cl_array_array_ap_fixed_16u_config2_s();

    sc_trace_file* mVcdFile;

    conv_1d_cl_array_array_ap_fixed_16u_config2_s_outidx* outidx_U;
    conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V* w2_V_U;
    myproject_mux_83_3_1_1<1,1,3,3,3,3,3,3,3,3,3,3>* myproject_mux_83_3_1_1_U3;
    myproject_mux_32_16_1_1<1,1,16,16,16,2,16>* myproject_mux_32_16_1_1_U4;
    myproject_mux_42_16_1_1<1,1,16,16,16,16,2,16>* myproject_mux_42_16_1_1_U5;
    myproject_mux_164_16_1_1<1,1,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,4,16>* myproject_mux_164_16_1_1_U6;
    myproject_mux_164_16_1_1<1,1,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,4,16>* myproject_mux_164_16_1_1_U7;
    myproject_mux_164_16_1_1<1,1,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,4,16>* myproject_mux_164_16_1_1_U8;
    myproject_mul_mul_16s_16s_26_3_1<1,3,16,16,26>* myproject_mul_mul_16s_16s_26_3_1_U9;
    myproject_mul_mul_16s_16s_26_3_1<1,3,16,16,26>* myproject_mul_mul_16s_16s_26_3_1_U10;
    myproject_mul_mul_16s_16s_26_3_1<1,3,16,16,26>* myproject_mul_mul_16s_16s_26_3_1_U11;
    myproject_mul_mul_16s_10s_26_3_1<1,3,16,10,26>* myproject_mul_mul_16s_10s_26_3_1_U12;
    fifo_w16_d99_A* data_window_0_V_V_fifo_U;
    fifo_w16_d99_A* data_window_1_V_V_fifo_U;
    fifo_w16_d99_A* data_window_2_V_V_fifo_U;
    regslice_both<16>* regslice_both_data_V_data_V_U;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_lv<4> > outidx_address0;
    sc_signal< sc_logic > outidx_ce0;
    sc_signal< sc_lv<2> > outidx_q0;
    sc_signal< sc_lv<4> > w2_V_address0;
    sc_signal< sc_logic > w2_V_ce0;
    sc_signal< sc_lv<58> > w2_V_q0;
    sc_signal< sc_logic > data_V_data_V_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > res_V_data_0_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<1> > p_Result_s_reg_1644;
    sc_signal< sc_logic > res_V_data_1_V_blk_n;
    sc_signal< sc_logic > res_V_data_2_V_blk_n;
    sc_signal< sc_logic > res_V_data_3_V_blk_n;
    sc_signal< sc_logic > res_V_data_4_V_blk_n;
    sc_signal< sc_logic > res_V_data_5_V_blk_n;
    sc_signal< sc_logic > res_V_data_6_V_blk_n;
    sc_signal< sc_logic > res_V_data_7_V_blk_n;
    sc_signal< sc_logic > res_V_data_8_V_blk_n;
    sc_signal< sc_logic > res_V_data_9_V_blk_n;
    sc_signal< sc_logic > res_V_data_10_V_blk_n;
    sc_signal< sc_logic > res_V_data_11_V_blk_n;
    sc_signal< sc_logic > res_V_data_12_V_blk_n;
    sc_signal< sc_logic > res_V_data_13_V_blk_n;
    sc_signal< sc_logic > res_V_data_14_V_blk_n;
    sc_signal< sc_logic > res_V_data_15_V_blk_n;
    sc_signal< sc_lv<4> > w_index50_reg_584;
    sc_signal< sc_lv<32> > in_index_0_i_i_i_i_i49_reg_595;
    sc_signal< sc_lv<16> > tmp_data_0_V_1148_reg_607;
    sc_signal< sc_lv<16> > tmp_data_1_V_846_reg_618;
    sc_signal< sc_lv<16> > tmp_data_2_V_844_reg_629;
    sc_signal< sc_lv<16> > tmp_data_3_V_842_reg_640;
    sc_signal< sc_lv<16> > tmp_data_4_V_840_reg_651;
    sc_signal< sc_lv<16> > tmp_data_5_V_838_reg_662;
    sc_signal< sc_lv<16> > tmp_data_6_V_836_reg_673;
    sc_signal< sc_lv<16> > tmp_data_7_V_834_reg_684;
    sc_signal< sc_lv<16> > tmp_data_8_V_832_reg_695;
    sc_signal< sc_lv<16> > tmp_data_9_V_830_reg_706;
    sc_signal< sc_lv<16> > tmp_data_10_V_828_reg_717;
    sc_signal< sc_lv<16> > tmp_data_11_V_826_reg_728;
    sc_signal< sc_lv<16> > tmp_data_12_V_824_reg_739;
    sc_signal< sc_lv<16> > tmp_data_13_V_822_reg_750;
    sc_signal< sc_lv<16> > tmp_data_14_V_820_reg_761;
    sc_signal< sc_lv<16> > tmp_data_15_V_818_reg_772;
    sc_signal< sc_lv<16> > tmp_data_3_V_reg_783;
    sc_signal< sc_lv<16> > tmp_data_2_V_reg_802;
    sc_signal< sc_lv<16> > tmp_data_1_V_reg_821;
    sc_signal< sc_lv<16> > tmp_data_0_V_reg_840;
    sc_signal< sc_lv<16> > tmp_data_7_V_reg_859;
    sc_signal< sc_lv<16> > tmp_data_6_V_reg_878;
    sc_signal< sc_lv<16> > tmp_data_5_V_reg_897;
    sc_signal< sc_lv<16> > tmp_data_4_V_reg_916;
    sc_signal< sc_lv<16> > tmp_data_11_V_reg_935;
    sc_signal< sc_lv<16> > tmp_data_10_V_reg_954;
    sc_signal< sc_lv<16> > tmp_data_9_V_reg_973;
    sc_signal< sc_lv<16> > tmp_data_8_V_reg_992;
    sc_signal< sc_lv<16> > tmp_data_15_V_reg_1011;
    sc_signal< sc_lv<16> > tmp_data_14_V_reg_1030;
    sc_signal< sc_lv<16> > tmp_data_13_V_reg_1049;
    sc_signal< sc_lv<16> > tmp_data_12_V_reg_1068;
    sc_signal< sc_lv<1> > icmp_ln20_fu_1091_p2;
    sc_signal< sc_lv<1> > icmp_ln20_reg_1614;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln26_fu_1097_p2;
    sc_signal< sc_lv<1> > icmp_ln26_reg_1620;
    sc_signal< sc_lv<3> > select_ln31_fu_1161_p3;
    sc_signal< sc_lv<3> > select_ln31_reg_1625;
    sc_signal< sc_lv<8> > i_iw_fu_1225_p2;
    sc_signal< sc_lv<8> > i_iw_reg_1633;
    sc_signal< sc_logic > data_window_0_V_V_full_n;
    sc_signal< sc_logic > data_window_0_V_V_write;
    sc_signal< sc_lv<1> > trunc_ln13_fu_1221_p1;
    sc_signal< sc_logic > data_window_1_V_V_full_n;
    sc_signal< sc_logic > data_window_1_V_V_write;
    sc_signal< sc_lv<1> > tmp_1800_fu_1231_p3;
    sc_signal< sc_logic > data_window_2_V_V_full_n;
    sc_signal< sc_logic > data_window_2_V_V_write;
    sc_signal< sc_lv<1> > tmp_1801_fu_1239_p3;
    sc_signal< bool > ap_block_state3;
    sc_signal< sc_lv<1> > p_Result_s_fu_1247_p3;
    sc_signal< sc_lv<16> > tmp_V_reg_1648;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<16> > data_window_0_V_V_dout;
    sc_signal< sc_logic > data_window_0_V_V_empty_n;
    sc_signal< sc_logic > data_window_0_V_V_read;
    sc_signal< sc_lv<16> > data_window_1_V_V_dout;
    sc_signal< sc_logic > data_window_1_V_V_empty_n;
    sc_signal< sc_logic > data_window_1_V_V_read;
    sc_signal< sc_lv<16> > data_window_2_V_V_dout;
    sc_signal< sc_logic > data_window_2_V_V_empty_n;
    sc_signal< sc_logic > data_window_2_V_V_read;
    sc_signal< bool > ap_block_state4;
    sc_signal< sc_lv<16> > tmp_V_1024_reg_1653;
    sc_signal< sc_lv<16> > tmp_V_1025_reg_1658;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter5;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<4> > w_index_fu_1261_p2;
    sc_signal< sc_lv<4> > w_index_reg_1673;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<32> > in_index_fu_1267_p2;
    sc_signal< sc_lv<32> > in_index_reg_1678;
    sc_signal< sc_lv<1> > icmp_ln168_fu_1273_p2;
    sc_signal< sc_lv<1> > icmp_ln168_reg_1683;
    sc_signal< sc_lv<1> > icmp_ln151_fu_1279_p2;
    sc_signal< sc_lv<1> > icmp_ln151_reg_1688;
    sc_signal< sc_lv<1> > icmp_ln151_reg_1688_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln151_reg_1688_pp0_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln151_reg_1688_pp0_iter3_reg;
    sc_signal< sc_lv<1> > icmp_ln151_reg_1688_pp0_iter4_reg;
    sc_signal< sc_lv<2> > out_index_reg_1692;
    sc_signal< sc_lv<2> > out_index_reg_1692_pp0_iter2_reg;
    sc_signal< sc_lv<2> > out_index_reg_1692_pp0_iter3_reg;
    sc_signal< sc_lv<2> > out_index_reg_1692_pp0_iter4_reg;
    sc_signal< sc_lv<16> > tmp_1543_fu_1289_p5;
    sc_signal< sc_lv<16> > tmp_1543_reg_1699;
    sc_signal< sc_lv<16> > trunc_ln160_1_fu_1298_p1;
    sc_signal< sc_lv<16> > trunc_ln160_1_reg_1704;
    sc_signal< sc_lv<16> > tmp_1544_reg_1709;
    sc_signal< sc_lv<16> > tmp_1545_reg_1714;
    sc_signal< sc_lv<10> > tmp_1546_reg_1719;
    sc_signal< sc_lv<32> > select_ln168_fu_1332_p3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<26> > sext_ln1116_cast_fu_1338_p1;
    sc_signal< sc_lv<26> > grp_fu_1572_p2;
    sc_signal< sc_lv<26> > mul_ln1118_reg_1757;
    sc_signal< sc_lv<26> > grp_fu_1578_p2;
    sc_signal< sc_lv<26> > mul_ln1118_1543_reg_1762;
    sc_signal< sc_lv<26> > grp_fu_1584_p2;
    sc_signal< sc_lv<26> > mul_ln1118_1544_reg_1767;
    sc_signal< sc_lv<26> > grp_fu_1590_p2;
    sc_signal< sc_lv<26> > mul_ln1118_1545_reg_1772;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_lv<8> > wp_idx51_reg_572;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_logic > io_acc_block_signal_op190;
    sc_signal< bool > ap_block_state11;
    sc_signal< sc_lv<1> > icmp_ln49_fu_1566_p2;
    sc_signal< sc_lv<4> > ap_phi_mux_w_index50_phi_fu_588_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<32> > ap_phi_mux_in_index_0_i_i_i_i_i49_phi_fu_599_p4;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_data_0_V_phi_fu_845_p8;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_data_1_V_phi_fu_826_p8;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_data_2_V_phi_fu_807_p8;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_data_3_V_phi_fu_788_p8;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_data_4_V_phi_fu_921_p8;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_data_5_V_phi_fu_902_p8;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_data_6_V_phi_fu_883_p8;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_data_7_V_phi_fu_864_p8;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_data_8_V_phi_fu_997_p8;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_data_9_V_phi_fu_978_p8;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_data_10_V_phi_fu_959_p8;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_data_11_V_phi_fu_940_p8;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_data_12_V_phi_fu_1073_p8;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_data_13_V_phi_fu_1054_p8;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_data_14_V_phi_fu_1035_p8;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_data_15_V_phi_fu_1016_p8;
    sc_signal< sc_lv<16> > acc_0_V_fu_1378_p2;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter5_tmp_data_3_V_reg_783;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter5_tmp_data_2_V_reg_802;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter5_tmp_data_1_V_reg_821;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter5_tmp_data_0_V_reg_840;
    sc_signal< sc_lv<16> > acc_4_V_fu_1435_p2;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter5_tmp_data_7_V_reg_859;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter5_tmp_data_6_V_reg_878;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter5_tmp_data_5_V_reg_897;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter5_tmp_data_4_V_reg_916;
    sc_signal< sc_lv<16> > acc_8_V_fu_1499_p2;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter5_tmp_data_11_V_reg_935;
    sc_signal< sc_lv<4> > or_ln_fu_1454_p3;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter5_tmp_data_10_V_reg_954;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter5_tmp_data_9_V_reg_973;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter5_tmp_data_8_V_reg_992;
    sc_signal< sc_lv<16> > acc_12_V_fu_1556_p2;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter5_tmp_data_15_V_reg_1011;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter5_tmp_data_14_V_reg_1030;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter5_tmp_data_13_V_reg_1049;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter5_tmp_data_12_V_reg_1068;
    sc_signal< sc_lv<64> > zext_ln155_fu_1255_p1;
    sc_signal< sc_lv<8> > r_fu_1103_p2;
    sc_signal< sc_lv<7> > tmp_1799_fu_1109_p4;
    sc_signal< sc_lv<1> > trunc_ln49_fu_1087_p1;
    sc_signal< sc_lv<1> > or_ln26_fu_1137_p2;
    sc_signal< sc_lv<1> > icmp_ln31_fu_1119_p2;
    sc_signal< sc_lv<1> > xor_ln26_fu_1143_p2;
    sc_signal< sc_lv<3> > trunc_ln32_fu_1125_p1;
    sc_signal< sc_lv<1> > and_ln31_fu_1149_p2;
    sc_signal< sc_lv<3> > sub_ln31_fu_1155_p2;
    sc_signal< sc_lv<3> > select_ln35_fu_1129_p3;
    sc_signal< sc_lv<1> > xor_ln20_fu_1169_p2;
    sc_signal< sc_lv<1> > and_ln26_fu_1174_p2;
    sc_signal< sc_lv<1> > or_ln321_fu_1187_p2;
    sc_signal< sc_lv<3> > select_ln321_fu_1179_p3;
    sc_signal< sc_lv<3> > p_Val2_s_fu_1199_p9;
    sc_signal< sc_lv<3> > p_Val2_s_fu_1199_p10;
    sc_signal< sc_lv<2> > tmp_1543_fu_1289_p4;
    sc_signal< sc_lv<16> > trunc_ln9_fu_1353_p4;
    sc_signal< sc_lv<16> > phi_ln_fu_1365_p6;
    sc_signal< sc_lv<4> > zext_ln1265_fu_1362_p1;
    sc_signal< sc_lv<16> > phi_ln1265_1_fu_1397_p18;
    sc_signal< sc_lv<16> > trunc_ln708_1543_fu_1388_p4;
    sc_signal< sc_lv<4> > phi_ln1265_2_fu_1461_p17;
    sc_signal< sc_lv<16> > phi_ln1265_2_fu_1461_p18;
    sc_signal< sc_lv<16> > trunc_ln708_1544_fu_1445_p4;
    sc_signal< sc_lv<16> > phi_ln1265_3_fu_1518_p18;
    sc_signal< sc_lv<16> > trunc_ln708_1545_fu_1509_p4;
    sc_signal< sc_lv<16> > grp_fu_1572_p1;
    sc_signal< sc_lv<16> > grp_fu_1578_p0;
    sc_signal< sc_lv<16> > grp_fu_1584_p0;
    sc_signal< sc_lv<16> > grp_fu_1590_p0;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > regslice_both_data_V_data_V_U_apdone_blk;
    sc_signal< sc_lv<16> > data_V_data_V_TDATA_int;
    sc_signal< sc_logic > data_V_data_V_TVALID_int;
    sc_signal< sc_logic > data_V_data_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_data_V_data_V_U_ack_in;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_state2;
    static const sc_lv<6> ap_ST_fsm_state3;
    static const sc_lv<6> ap_ST_fsm_state4;
    static const sc_lv<6> ap_ST_fsm_pp0_stage0;
    static const sc_lv<6> ap_ST_fsm_state11;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const bool ap_const_boolean_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<16> ap_const_lv16_62;
    static const sc_lv<16> ap_const_lv16_78;
    static const sc_lv<16> ap_const_lv16_FFAE;
    static const sc_lv<16> ap_const_lv16_8C;
    static const sc_lv<16> ap_const_lv16_FFA9;
    static const sc_lv<16> ap_const_lv16_FFDC;
    static const sc_lv<16> ap_const_lv16_14;
    static const sc_lv<16> ap_const_lv16_88;
    static const sc_lv<16> ap_const_lv16_FFF4;
    static const sc_lv<16> ap_const_lv16_37;
    static const sc_lv<16> ap_const_lv16_89;
    static const sc_lv<16> ap_const_lv16_FFDF;
    static const sc_lv<16> ap_const_lv16_FFBA;
    static const sc_lv<16> ap_const_lv16_FFCF;
    static const sc_lv<16> ap_const_lv16_60;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_9;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<8> ap_const_lv8_C6;
    static const sc_lv<8> ap_const_lv8_C7;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_2;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_B;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_39;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_19;
    // Thread declarations
    void thread_ap_var_for_const5();
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const4();
    void thread_ap_var_for_const3();
    void thread_ap_clk_no_reset_();
    void thread_acc_0_V_fu_1378_p2();
    void thread_acc_12_V_fu_1556_p2();
    void thread_acc_4_V_fu_1435_p2();
    void thread_acc_8_V_fu_1499_p2();
    void thread_and_ln26_fu_1174_p2();
    void thread_and_ln31_fu_1149_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state10_pp0_stage0_iter5();
    void thread_ap_block_state11();
    void thread_ap_block_state3();
    void thread_ap_block_state4();
    void thread_ap_block_state5_pp0_stage0_iter0();
    void thread_ap_block_state6_pp0_stage0_iter1();
    void thread_ap_block_state7_pp0_stage0_iter2();
    void thread_ap_block_state8_pp0_stage0_iter3();
    void thread_ap_block_state9_pp0_stage0_iter4();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_in_index_0_i_i_i_i_i49_phi_fu_599_p4();
    void thread_ap_phi_mux_tmp_data_0_V_phi_fu_845_p8();
    void thread_ap_phi_mux_tmp_data_10_V_phi_fu_959_p8();
    void thread_ap_phi_mux_tmp_data_11_V_phi_fu_940_p8();
    void thread_ap_phi_mux_tmp_data_12_V_phi_fu_1073_p8();
    void thread_ap_phi_mux_tmp_data_13_V_phi_fu_1054_p8();
    void thread_ap_phi_mux_tmp_data_14_V_phi_fu_1035_p8();
    void thread_ap_phi_mux_tmp_data_15_V_phi_fu_1016_p8();
    void thread_ap_phi_mux_tmp_data_1_V_phi_fu_826_p8();
    void thread_ap_phi_mux_tmp_data_2_V_phi_fu_807_p8();
    void thread_ap_phi_mux_tmp_data_3_V_phi_fu_788_p8();
    void thread_ap_phi_mux_tmp_data_4_V_phi_fu_921_p8();
    void thread_ap_phi_mux_tmp_data_5_V_phi_fu_902_p8();
    void thread_ap_phi_mux_tmp_data_6_V_phi_fu_883_p8();
    void thread_ap_phi_mux_tmp_data_7_V_phi_fu_864_p8();
    void thread_ap_phi_mux_tmp_data_8_V_phi_fu_997_p8();
    void thread_ap_phi_mux_tmp_data_9_V_phi_fu_978_p8();
    void thread_ap_phi_mux_w_index50_phi_fu_588_p4();
    void thread_ap_phi_reg_pp0_iter5_tmp_data_0_V_reg_840();
    void thread_ap_phi_reg_pp0_iter5_tmp_data_10_V_reg_954();
    void thread_ap_phi_reg_pp0_iter5_tmp_data_11_V_reg_935();
    void thread_ap_phi_reg_pp0_iter5_tmp_data_12_V_reg_1068();
    void thread_ap_phi_reg_pp0_iter5_tmp_data_13_V_reg_1049();
    void thread_ap_phi_reg_pp0_iter5_tmp_data_14_V_reg_1030();
    void thread_ap_phi_reg_pp0_iter5_tmp_data_15_V_reg_1011();
    void thread_ap_phi_reg_pp0_iter5_tmp_data_1_V_reg_821();
    void thread_ap_phi_reg_pp0_iter5_tmp_data_2_V_reg_802();
    void thread_ap_phi_reg_pp0_iter5_tmp_data_3_V_reg_783();
    void thread_ap_phi_reg_pp0_iter5_tmp_data_4_V_reg_916();
    void thread_ap_phi_reg_pp0_iter5_tmp_data_5_V_reg_897();
    void thread_ap_phi_reg_pp0_iter5_tmp_data_6_V_reg_878();
    void thread_ap_phi_reg_pp0_iter5_tmp_data_7_V_reg_859();
    void thread_ap_phi_reg_pp0_iter5_tmp_data_8_V_reg_992();
    void thread_ap_phi_reg_pp0_iter5_tmp_data_9_V_reg_973();
    void thread_ap_ready();
    void thread_data_V_data_V_TDATA_blk_n();
    void thread_data_V_data_V_TREADY();
    void thread_data_V_data_V_TREADY_int();
    void thread_data_window_0_V_V_read();
    void thread_data_window_0_V_V_write();
    void thread_data_window_1_V_V_read();
    void thread_data_window_1_V_V_write();
    void thread_data_window_2_V_V_read();
    void thread_data_window_2_V_V_write();
    void thread_grp_fu_1572_p1();
    void thread_grp_fu_1578_p0();
    void thread_grp_fu_1584_p0();
    void thread_grp_fu_1590_p0();
    void thread_i_iw_fu_1225_p2();
    void thread_icmp_ln151_fu_1279_p2();
    void thread_icmp_ln168_fu_1273_p2();
    void thread_icmp_ln20_fu_1091_p2();
    void thread_icmp_ln26_fu_1097_p2();
    void thread_icmp_ln31_fu_1119_p2();
    void thread_icmp_ln49_fu_1566_p2();
    void thread_in_index_fu_1267_p2();
    void thread_internal_ap_ready();
    void thread_io_acc_block_signal_op190();
    void thread_or_ln26_fu_1137_p2();
    void thread_or_ln321_fu_1187_p2();
    void thread_or_ln_fu_1454_p3();
    void thread_outidx_address0();
    void thread_outidx_ce0();
    void thread_p_Result_s_fu_1247_p3();
    void thread_p_Val2_s_fu_1199_p9();
    void thread_phi_ln1265_2_fu_1461_p17();
    void thread_r_fu_1103_p2();
    void thread_real_start();
    void thread_res_V_data_0_V_blk_n();
    void thread_res_V_data_0_V_din();
    void thread_res_V_data_0_V_write();
    void thread_res_V_data_10_V_blk_n();
    void thread_res_V_data_10_V_din();
    void thread_res_V_data_10_V_write();
    void thread_res_V_data_11_V_blk_n();
    void thread_res_V_data_11_V_din();
    void thread_res_V_data_11_V_write();
    void thread_res_V_data_12_V_blk_n();
    void thread_res_V_data_12_V_din();
    void thread_res_V_data_12_V_write();
    void thread_res_V_data_13_V_blk_n();
    void thread_res_V_data_13_V_din();
    void thread_res_V_data_13_V_write();
    void thread_res_V_data_14_V_blk_n();
    void thread_res_V_data_14_V_din();
    void thread_res_V_data_14_V_write();
    void thread_res_V_data_15_V_blk_n();
    void thread_res_V_data_15_V_din();
    void thread_res_V_data_15_V_write();
    void thread_res_V_data_1_V_blk_n();
    void thread_res_V_data_1_V_din();
    void thread_res_V_data_1_V_write();
    void thread_res_V_data_2_V_blk_n();
    void thread_res_V_data_2_V_din();
    void thread_res_V_data_2_V_write();
    void thread_res_V_data_3_V_blk_n();
    void thread_res_V_data_3_V_din();
    void thread_res_V_data_3_V_write();
    void thread_res_V_data_4_V_blk_n();
    void thread_res_V_data_4_V_din();
    void thread_res_V_data_4_V_write();
    void thread_res_V_data_5_V_blk_n();
    void thread_res_V_data_5_V_din();
    void thread_res_V_data_5_V_write();
    void thread_res_V_data_6_V_blk_n();
    void thread_res_V_data_6_V_din();
    void thread_res_V_data_6_V_write();
    void thread_res_V_data_7_V_blk_n();
    void thread_res_V_data_7_V_din();
    void thread_res_V_data_7_V_write();
    void thread_res_V_data_8_V_blk_n();
    void thread_res_V_data_8_V_din();
    void thread_res_V_data_8_V_write();
    void thread_res_V_data_9_V_blk_n();
    void thread_res_V_data_9_V_din();
    void thread_res_V_data_9_V_write();
    void thread_select_ln168_fu_1332_p3();
    void thread_select_ln31_fu_1161_p3();
    void thread_select_ln321_fu_1179_p3();
    void thread_select_ln35_fu_1129_p3();
    void thread_sext_ln1116_cast_fu_1338_p1();
    void thread_start_out();
    void thread_start_write();
    void thread_sub_ln31_fu_1155_p2();
    void thread_tmp_1543_fu_1289_p4();
    void thread_tmp_1799_fu_1109_p4();
    void thread_tmp_1800_fu_1231_p3();
    void thread_tmp_1801_fu_1239_p3();
    void thread_trunc_ln13_fu_1221_p1();
    void thread_trunc_ln160_1_fu_1298_p1();
    void thread_trunc_ln32_fu_1125_p1();
    void thread_trunc_ln49_fu_1087_p1();
    void thread_trunc_ln708_1543_fu_1388_p4();
    void thread_trunc_ln708_1544_fu_1445_p4();
    void thread_trunc_ln708_1545_fu_1509_p4();
    void thread_trunc_ln9_fu_1353_p4();
    void thread_w2_V_address0();
    void thread_w2_V_ce0();
    void thread_w_index_fu_1261_p2();
    void thread_xor_ln20_fu_1169_p2();
    void thread_xor_ln26_fu_1143_p2();
    void thread_zext_ln1265_fu_1362_p1();
    void thread_zext_ln155_fu_1255_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
