// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _pooling1d_cl_array_array_ap_fixed_16u_config4_s_HH_
#define _pooling1d_cl_array_array_ap_fixed_16u_config4_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "pooling1d_cl_array_array_ap_fixed_16u_config4_s_pool_tablbkb.h"
#include "fifo_w16_d49_A.h"

namespace ap_rtl {

struct pooling1d_cl_array_array_ap_fixed_16u_config4_s : public sc_module {
    // Port declarations 106
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
    sc_in< sc_lv<16> > data_V_data_0_V_dout;
    sc_in< sc_logic > data_V_data_0_V_empty_n;
    sc_out< sc_logic > data_V_data_0_V_read;
    sc_in< sc_lv<16> > data_V_data_1_V_dout;
    sc_in< sc_logic > data_V_data_1_V_empty_n;
    sc_out< sc_logic > data_V_data_1_V_read;
    sc_in< sc_lv<16> > data_V_data_2_V_dout;
    sc_in< sc_logic > data_V_data_2_V_empty_n;
    sc_out< sc_logic > data_V_data_2_V_read;
    sc_in< sc_lv<16> > data_V_data_3_V_dout;
    sc_in< sc_logic > data_V_data_3_V_empty_n;
    sc_out< sc_logic > data_V_data_3_V_read;
    sc_in< sc_lv<16> > data_V_data_4_V_dout;
    sc_in< sc_logic > data_V_data_4_V_empty_n;
    sc_out< sc_logic > data_V_data_4_V_read;
    sc_in< sc_lv<16> > data_V_data_5_V_dout;
    sc_in< sc_logic > data_V_data_5_V_empty_n;
    sc_out< sc_logic > data_V_data_5_V_read;
    sc_in< sc_lv<16> > data_V_data_6_V_dout;
    sc_in< sc_logic > data_V_data_6_V_empty_n;
    sc_out< sc_logic > data_V_data_6_V_read;
    sc_in< sc_lv<16> > data_V_data_7_V_dout;
    sc_in< sc_logic > data_V_data_7_V_empty_n;
    sc_out< sc_logic > data_V_data_7_V_read;
    sc_in< sc_lv<16> > data_V_data_8_V_dout;
    sc_in< sc_logic > data_V_data_8_V_empty_n;
    sc_out< sc_logic > data_V_data_8_V_read;
    sc_in< sc_lv<16> > data_V_data_9_V_dout;
    sc_in< sc_logic > data_V_data_9_V_empty_n;
    sc_out< sc_logic > data_V_data_9_V_read;
    sc_in< sc_lv<16> > data_V_data_10_V_dout;
    sc_in< sc_logic > data_V_data_10_V_empty_n;
    sc_out< sc_logic > data_V_data_10_V_read;
    sc_in< sc_lv<16> > data_V_data_11_V_dout;
    sc_in< sc_logic > data_V_data_11_V_empty_n;
    sc_out< sc_logic > data_V_data_11_V_read;
    sc_in< sc_lv<16> > data_V_data_12_V_dout;
    sc_in< sc_logic > data_V_data_12_V_empty_n;
    sc_out< sc_logic > data_V_data_12_V_read;
    sc_in< sc_lv<16> > data_V_data_13_V_dout;
    sc_in< sc_logic > data_V_data_13_V_empty_n;
    sc_out< sc_logic > data_V_data_13_V_read;
    sc_in< sc_lv<16> > data_V_data_14_V_dout;
    sc_in< sc_logic > data_V_data_14_V_empty_n;
    sc_out< sc_logic > data_V_data_14_V_read;
    sc_in< sc_lv<16> > data_V_data_15_V_dout;
    sc_in< sc_logic > data_V_data_15_V_empty_n;
    sc_out< sc_logic > data_V_data_15_V_read;
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
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    pooling1d_cl_array_array_ap_fixed_16u_config4_s(sc_module_name name);
    SC_HAS_PROCESS(pooling1d_cl_array_array_ap_fixed_16u_config4_s);

    ~pooling1d_cl_array_array_ap_fixed_16u_config4_s();

    sc_trace_file* mVcdFile;

    pooling1d_cl_array_array_ap_fixed_16u_config4_s_pool_tablbkb* pool_table_width16_U;
    fifo_w16_d49_A* data_window_0_V_V_fifo_U;
    fifo_w16_d49_A* data_window_1_V_V_fifo_U;
    fifo_w16_d49_A* data_window_2_V_V_fifo_U;
    fifo_w16_d49_A* data_window_3_V_V_fifo_U;
    fifo_w16_d49_A* data_window_4_V_V_fifo_U;
    fifo_w16_d49_A* data_window_5_V_V_fifo_U;
    fifo_w16_d49_A* data_window_6_V_V_fifo_U;
    fifo_w16_d49_A* data_window_7_V_V_fifo_U;
    fifo_w16_d49_A* data_window_8_V_V_fifo_U;
    fifo_w16_d49_A* data_window_9_V_V_fifo_U;
    fifo_w16_d49_A* data_window_10_V_V_fifo_U;
    fifo_w16_d49_A* data_window_11_V_V_fifo_U;
    fifo_w16_d49_A* data_window_12_V_V_fifo_U;
    fifo_w16_d49_A* data_window_13_V_V_fifo_U;
    fifo_w16_d49_A* data_window_14_V_V_fifo_U;
    fifo_w16_d49_A* data_window_15_V_V_fifo_U;
    fifo_w16_d49_A* data_window_16_V_V_fifo_U;
    fifo_w16_d49_A* data_window_17_V_V_fifo_U;
    fifo_w16_d49_A* data_window_18_V_V_fifo_U;
    fifo_w16_d49_A* data_window_19_V_V_fifo_U;
    fifo_w16_d49_A* data_window_20_V_V_fifo_U;
    fifo_w16_d49_A* data_window_21_V_V_fifo_U;
    fifo_w16_d49_A* data_window_22_V_V_fifo_U;
    fifo_w16_d49_A* data_window_23_V_V_fifo_U;
    fifo_w16_d49_A* data_window_24_V_V_fifo_U;
    fifo_w16_d49_A* data_window_25_V_V_fifo_U;
    fifo_w16_d49_A* data_window_26_V_V_fifo_U;
    fifo_w16_d49_A* data_window_27_V_V_fifo_U;
    fifo_w16_d49_A* data_window_28_V_V_fifo_U;
    fifo_w16_d49_A* data_window_29_V_V_fifo_U;
    fifo_w16_d49_A* data_window_30_V_V_fifo_U;
    fifo_w16_d49_A* data_window_31_V_V_fifo_U;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_lv<7> > pool_table_width16_address0;
    sc_signal< sc_logic > pool_table_width16_ce0;
    sc_signal< sc_lv<1> > pool_table_width16_q0;
    sc_signal< sc_logic > data_V_data_0_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_logic > data_V_data_1_V_blk_n;
    sc_signal< sc_logic > data_V_data_2_V_blk_n;
    sc_signal< sc_logic > data_V_data_3_V_blk_n;
    sc_signal< sc_logic > data_V_data_4_V_blk_n;
    sc_signal< sc_logic > data_V_data_5_V_blk_n;
    sc_signal< sc_logic > data_V_data_6_V_blk_n;
    sc_signal< sc_logic > data_V_data_7_V_blk_n;
    sc_signal< sc_logic > data_V_data_8_V_blk_n;
    sc_signal< sc_logic > data_V_data_9_V_blk_n;
    sc_signal< sc_logic > data_V_data_10_V_blk_n;
    sc_signal< sc_logic > data_V_data_11_V_blk_n;
    sc_signal< sc_logic > data_V_data_12_V_blk_n;
    sc_signal< sc_logic > data_V_data_13_V_blk_n;
    sc_signal< sc_logic > data_V_data_14_V_blk_n;
    sc_signal< sc_logic > data_V_data_15_V_blk_n;
    sc_signal< sc_logic > res_V_data_0_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_lv<1> > icmp_ln879_reg_2183;
    sc_signal< sc_lv<1> > icmp_ln879_reg_2183_pp0_iter4_reg;
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
    sc_signal< sc_lv<7> > wp_idx_reg_1605;
    sc_signal< sc_lv<1> > icmp_ln358_fu_1616_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< sc_logic > io_acc_block_signal_op179;
    sc_signal< sc_logic > data_window_1_V_V_full_n;
    sc_signal< sc_logic > data_window_1_V_V_write;
    sc_signal< sc_lv<1> > icmp_ln895_reg_2175;
    sc_signal< sc_lv<1> > icmp_ln177_reg_2179;
    sc_signal< bool > ap_predicate_op197_write_state5;
    sc_signal< sc_logic > data_window_0_V_V_full_n;
    sc_signal< sc_logic > data_window_0_V_V_write;
    sc_signal< bool > ap_predicate_op199_write_state5;
    sc_signal< sc_logic > data_window_3_V_V_full_n;
    sc_signal< sc_logic > data_window_3_V_V_write;
    sc_signal< bool > ap_predicate_op201_write_state5;
    sc_signal< sc_logic > data_window_2_V_V_full_n;
    sc_signal< sc_logic > data_window_2_V_V_write;
    sc_signal< bool > ap_predicate_op203_write_state5;
    sc_signal< sc_logic > data_window_5_V_V_full_n;
    sc_signal< sc_logic > data_window_5_V_V_write;
    sc_signal< bool > ap_predicate_op205_write_state5;
    sc_signal< sc_logic > data_window_4_V_V_full_n;
    sc_signal< sc_logic > data_window_4_V_V_write;
    sc_signal< bool > ap_predicate_op207_write_state5;
    sc_signal< sc_logic > data_window_7_V_V_full_n;
    sc_signal< sc_logic > data_window_7_V_V_write;
    sc_signal< bool > ap_predicate_op209_write_state5;
    sc_signal< sc_logic > data_window_6_V_V_full_n;
    sc_signal< sc_logic > data_window_6_V_V_write;
    sc_signal< bool > ap_predicate_op211_write_state5;
    sc_signal< sc_logic > data_window_9_V_V_full_n;
    sc_signal< sc_logic > data_window_9_V_V_write;
    sc_signal< bool > ap_predicate_op213_write_state5;
    sc_signal< sc_logic > data_window_8_V_V_full_n;
    sc_signal< sc_logic > data_window_8_V_V_write;
    sc_signal< bool > ap_predicate_op215_write_state5;
    sc_signal< sc_logic > data_window_11_V_V_full_n;
    sc_signal< sc_logic > data_window_11_V_V_write;
    sc_signal< bool > ap_predicate_op217_write_state5;
    sc_signal< sc_logic > data_window_10_V_V_full_n;
    sc_signal< sc_logic > data_window_10_V_V_write;
    sc_signal< bool > ap_predicate_op219_write_state5;
    sc_signal< sc_logic > data_window_13_V_V_full_n;
    sc_signal< sc_logic > data_window_13_V_V_write;
    sc_signal< bool > ap_predicate_op221_write_state5;
    sc_signal< sc_logic > data_window_12_V_V_full_n;
    sc_signal< sc_logic > data_window_12_V_V_write;
    sc_signal< bool > ap_predicate_op223_write_state5;
    sc_signal< sc_logic > data_window_15_V_V_full_n;
    sc_signal< sc_logic > data_window_15_V_V_write;
    sc_signal< bool > ap_predicate_op225_write_state5;
    sc_signal< sc_logic > data_window_14_V_V_full_n;
    sc_signal< sc_logic > data_window_14_V_V_write;
    sc_signal< bool > ap_predicate_op227_write_state5;
    sc_signal< sc_logic > data_window_17_V_V_full_n;
    sc_signal< sc_logic > data_window_17_V_V_write;
    sc_signal< bool > ap_predicate_op229_write_state5;
    sc_signal< sc_logic > data_window_16_V_V_full_n;
    sc_signal< sc_logic > data_window_16_V_V_write;
    sc_signal< bool > ap_predicate_op231_write_state5;
    sc_signal< sc_logic > data_window_19_V_V_full_n;
    sc_signal< sc_logic > data_window_19_V_V_write;
    sc_signal< bool > ap_predicate_op233_write_state5;
    sc_signal< sc_logic > data_window_18_V_V_full_n;
    sc_signal< sc_logic > data_window_18_V_V_write;
    sc_signal< bool > ap_predicate_op235_write_state5;
    sc_signal< sc_logic > data_window_21_V_V_full_n;
    sc_signal< sc_logic > data_window_21_V_V_write;
    sc_signal< bool > ap_predicate_op237_write_state5;
    sc_signal< sc_logic > data_window_20_V_V_full_n;
    sc_signal< sc_logic > data_window_20_V_V_write;
    sc_signal< bool > ap_predicate_op239_write_state5;
    sc_signal< sc_logic > data_window_23_V_V_full_n;
    sc_signal< sc_logic > data_window_23_V_V_write;
    sc_signal< bool > ap_predicate_op241_write_state5;
    sc_signal< sc_logic > data_window_22_V_V_full_n;
    sc_signal< sc_logic > data_window_22_V_V_write;
    sc_signal< bool > ap_predicate_op243_write_state5;
    sc_signal< sc_logic > data_window_25_V_V_full_n;
    sc_signal< sc_logic > data_window_25_V_V_write;
    sc_signal< bool > ap_predicate_op245_write_state5;
    sc_signal< sc_logic > data_window_24_V_V_full_n;
    sc_signal< sc_logic > data_window_24_V_V_write;
    sc_signal< bool > ap_predicate_op247_write_state5;
    sc_signal< sc_logic > data_window_27_V_V_full_n;
    sc_signal< sc_logic > data_window_27_V_V_write;
    sc_signal< bool > ap_predicate_op249_write_state5;
    sc_signal< sc_logic > data_window_26_V_V_full_n;
    sc_signal< sc_logic > data_window_26_V_V_write;
    sc_signal< bool > ap_predicate_op251_write_state5;
    sc_signal< sc_logic > data_window_29_V_V_full_n;
    sc_signal< sc_logic > data_window_29_V_V_write;
    sc_signal< bool > ap_predicate_op253_write_state5;
    sc_signal< sc_logic > data_window_28_V_V_full_n;
    sc_signal< sc_logic > data_window_28_V_V_write;
    sc_signal< bool > ap_predicate_op255_write_state5;
    sc_signal< sc_logic > data_window_31_V_V_full_n;
    sc_signal< sc_logic > data_window_31_V_V_write;
    sc_signal< bool > ap_predicate_op257_write_state5;
    sc_signal< sc_logic > data_window_30_V_V_full_n;
    sc_signal< sc_logic > data_window_30_V_V_write;
    sc_signal< bool > ap_predicate_op259_write_state5;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter3;
    sc_signal< sc_lv<16> > data_window_0_V_V_dout;
    sc_signal< sc_logic > data_window_0_V_V_empty_n;
    sc_signal< sc_logic > data_window_0_V_V_read;
    sc_signal< sc_lv<1> > icmp_ln879_reg_2183_pp0_iter3_reg;
    sc_signal< sc_lv<16> > data_window_1_V_V_dout;
    sc_signal< sc_logic > data_window_1_V_V_empty_n;
    sc_signal< sc_logic > data_window_1_V_V_read;
    sc_signal< sc_lv<16> > data_window_2_V_V_dout;
    sc_signal< sc_logic > data_window_2_V_V_empty_n;
    sc_signal< sc_logic > data_window_2_V_V_read;
    sc_signal< sc_lv<16> > data_window_3_V_V_dout;
    sc_signal< sc_logic > data_window_3_V_V_empty_n;
    sc_signal< sc_logic > data_window_3_V_V_read;
    sc_signal< sc_lv<16> > data_window_4_V_V_dout;
    sc_signal< sc_logic > data_window_4_V_V_empty_n;
    sc_signal< sc_logic > data_window_4_V_V_read;
    sc_signal< sc_lv<16> > data_window_5_V_V_dout;
    sc_signal< sc_logic > data_window_5_V_V_empty_n;
    sc_signal< sc_logic > data_window_5_V_V_read;
    sc_signal< sc_lv<16> > data_window_6_V_V_dout;
    sc_signal< sc_logic > data_window_6_V_V_empty_n;
    sc_signal< sc_logic > data_window_6_V_V_read;
    sc_signal< sc_lv<16> > data_window_7_V_V_dout;
    sc_signal< sc_logic > data_window_7_V_V_empty_n;
    sc_signal< sc_logic > data_window_7_V_V_read;
    sc_signal< sc_lv<16> > data_window_8_V_V_dout;
    sc_signal< sc_logic > data_window_8_V_V_empty_n;
    sc_signal< sc_logic > data_window_8_V_V_read;
    sc_signal< sc_lv<16> > data_window_9_V_V_dout;
    sc_signal< sc_logic > data_window_9_V_V_empty_n;
    sc_signal< sc_logic > data_window_9_V_V_read;
    sc_signal< sc_lv<16> > data_window_10_V_V_dout;
    sc_signal< sc_logic > data_window_10_V_V_empty_n;
    sc_signal< sc_logic > data_window_10_V_V_read;
    sc_signal< sc_lv<16> > data_window_11_V_V_dout;
    sc_signal< sc_logic > data_window_11_V_V_empty_n;
    sc_signal< sc_logic > data_window_11_V_V_read;
    sc_signal< sc_lv<16> > data_window_12_V_V_dout;
    sc_signal< sc_logic > data_window_12_V_V_empty_n;
    sc_signal< sc_logic > data_window_12_V_V_read;
    sc_signal< sc_lv<16> > data_window_13_V_V_dout;
    sc_signal< sc_logic > data_window_13_V_V_empty_n;
    sc_signal< sc_logic > data_window_13_V_V_read;
    sc_signal< sc_lv<16> > data_window_14_V_V_dout;
    sc_signal< sc_logic > data_window_14_V_V_empty_n;
    sc_signal< sc_logic > data_window_14_V_V_read;
    sc_signal< sc_lv<16> > data_window_15_V_V_dout;
    sc_signal< sc_logic > data_window_15_V_V_empty_n;
    sc_signal< sc_logic > data_window_15_V_V_read;
    sc_signal< sc_lv<16> > data_window_16_V_V_dout;
    sc_signal< sc_logic > data_window_16_V_V_empty_n;
    sc_signal< sc_logic > data_window_16_V_V_read;
    sc_signal< sc_lv<16> > data_window_17_V_V_dout;
    sc_signal< sc_logic > data_window_17_V_V_empty_n;
    sc_signal< sc_logic > data_window_17_V_V_read;
    sc_signal< sc_lv<16> > data_window_18_V_V_dout;
    sc_signal< sc_logic > data_window_18_V_V_empty_n;
    sc_signal< sc_logic > data_window_18_V_V_read;
    sc_signal< sc_lv<16> > data_window_19_V_V_dout;
    sc_signal< sc_logic > data_window_19_V_V_empty_n;
    sc_signal< sc_logic > data_window_19_V_V_read;
    sc_signal< sc_lv<16> > data_window_20_V_V_dout;
    sc_signal< sc_logic > data_window_20_V_V_empty_n;
    sc_signal< sc_logic > data_window_20_V_V_read;
    sc_signal< sc_lv<16> > data_window_21_V_V_dout;
    sc_signal< sc_logic > data_window_21_V_V_empty_n;
    sc_signal< sc_logic > data_window_21_V_V_read;
    sc_signal< sc_lv<16> > data_window_22_V_V_dout;
    sc_signal< sc_logic > data_window_22_V_V_empty_n;
    sc_signal< sc_logic > data_window_22_V_V_read;
    sc_signal< sc_lv<16> > data_window_23_V_V_dout;
    sc_signal< sc_logic > data_window_23_V_V_empty_n;
    sc_signal< sc_logic > data_window_23_V_V_read;
    sc_signal< sc_lv<16> > data_window_24_V_V_dout;
    sc_signal< sc_logic > data_window_24_V_V_empty_n;
    sc_signal< sc_logic > data_window_24_V_V_read;
    sc_signal< sc_lv<16> > data_window_25_V_V_dout;
    sc_signal< sc_logic > data_window_25_V_V_empty_n;
    sc_signal< sc_logic > data_window_25_V_V_read;
    sc_signal< sc_lv<16> > data_window_26_V_V_dout;
    sc_signal< sc_logic > data_window_26_V_V_empty_n;
    sc_signal< sc_logic > data_window_26_V_V_read;
    sc_signal< sc_lv<16> > data_window_27_V_V_dout;
    sc_signal< sc_logic > data_window_27_V_V_empty_n;
    sc_signal< sc_logic > data_window_27_V_V_read;
    sc_signal< sc_lv<16> > data_window_28_V_V_dout;
    sc_signal< sc_logic > data_window_28_V_V_empty_n;
    sc_signal< sc_logic > data_window_28_V_V_read;
    sc_signal< sc_lv<16> > data_window_29_V_V_dout;
    sc_signal< sc_logic > data_window_29_V_V_empty_n;
    sc_signal< sc_logic > data_window_29_V_V_read;
    sc_signal< sc_lv<16> > data_window_30_V_V_dout;
    sc_signal< sc_logic > data_window_30_V_V_empty_n;
    sc_signal< sc_logic > data_window_30_V_V_read;
    sc_signal< sc_lv<16> > data_window_31_V_V_dout;
    sc_signal< sc_logic > data_window_31_V_V_empty_n;
    sc_signal< sc_logic > data_window_31_V_V_read;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > io_acc_block_signal_op325;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter5;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<7> > i_iw_fu_1622_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > icmp_ln304_fu_1628_p2;
    sc_signal< sc_lv<1> > icmp_ln304_reg_2160;
    sc_signal< sc_lv<1> > icmp_ln304_reg_2160_pp0_iter1_reg;
    sc_signal< sc_lv<1> > pool_table_width16_load_reg_2170;
    sc_signal< sc_lv<1> > icmp_ln895_fu_1653_p2;
    sc_signal< sc_lv<1> > icmp_ln177_fu_1659_p2;
    sc_signal< sc_lv<1> > icmp_ln879_fu_1665_p2;
    sc_signal< sc_lv<16> > tmp_V_207_reg_2187;
    sc_signal< sc_lv<16> > tmp_V_208_reg_2192;
    sc_signal< sc_lv<1> > icmp_ln1496_fu_1767_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_reg_2197;
    sc_signal< sc_lv<16> > tmp_V_209_reg_2202;
    sc_signal< sc_lv<16> > tmp_V_210_reg_2207;
    sc_signal< sc_lv<1> > icmp_ln1496_32_fu_1773_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_32_reg_2212;
    sc_signal< sc_lv<16> > tmp_V_211_reg_2217;
    sc_signal< sc_lv<16> > tmp_V_212_reg_2222;
    sc_signal< sc_lv<1> > icmp_ln1496_33_fu_1779_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_33_reg_2227;
    sc_signal< sc_lv<16> > tmp_V_213_reg_2232;
    sc_signal< sc_lv<16> > tmp_V_214_reg_2237;
    sc_signal< sc_lv<1> > icmp_ln1496_34_fu_1785_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_34_reg_2242;
    sc_signal< sc_lv<16> > tmp_V_215_reg_2247;
    sc_signal< sc_lv<16> > tmp_V_216_reg_2252;
    sc_signal< sc_lv<1> > icmp_ln1496_35_fu_1791_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_35_reg_2257;
    sc_signal< sc_lv<16> > tmp_V_217_reg_2262;
    sc_signal< sc_lv<16> > tmp_V_218_reg_2267;
    sc_signal< sc_lv<1> > icmp_ln1496_36_fu_1797_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_36_reg_2272;
    sc_signal< sc_lv<16> > tmp_V_219_reg_2277;
    sc_signal< sc_lv<16> > tmp_V_220_reg_2282;
    sc_signal< sc_lv<1> > icmp_ln1496_37_fu_1803_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_37_reg_2287;
    sc_signal< sc_lv<16> > tmp_V_221_reg_2292;
    sc_signal< sc_lv<16> > tmp_V_222_reg_2297;
    sc_signal< sc_lv<1> > icmp_ln1496_38_fu_1809_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_38_reg_2302;
    sc_signal< sc_lv<16> > tmp_V_223_reg_2307;
    sc_signal< sc_lv<16> > tmp_V_224_reg_2312;
    sc_signal< sc_lv<1> > icmp_ln1496_39_fu_1815_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_39_reg_2317;
    sc_signal< sc_lv<16> > tmp_V_225_reg_2322;
    sc_signal< sc_lv<16> > tmp_V_226_reg_2327;
    sc_signal< sc_lv<1> > icmp_ln1496_40_fu_1821_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_40_reg_2332;
    sc_signal< sc_lv<16> > tmp_V_227_reg_2337;
    sc_signal< sc_lv<16> > tmp_V_228_reg_2342;
    sc_signal< sc_lv<1> > icmp_ln1496_41_fu_1827_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_41_reg_2347;
    sc_signal< sc_lv<16> > tmp_V_229_reg_2352;
    sc_signal< sc_lv<16> > tmp_V_230_reg_2357;
    sc_signal< sc_lv<1> > icmp_ln1496_42_fu_1833_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_42_reg_2362;
    sc_signal< sc_lv<16> > tmp_V_231_reg_2367;
    sc_signal< sc_lv<16> > tmp_V_232_reg_2372;
    sc_signal< sc_lv<1> > icmp_ln1496_43_fu_1839_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_43_reg_2377;
    sc_signal< sc_lv<16> > tmp_V_233_reg_2382;
    sc_signal< sc_lv<16> > tmp_V_234_reg_2387;
    sc_signal< sc_lv<1> > icmp_ln1496_44_fu_1845_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_44_reg_2392;
    sc_signal< sc_lv<16> > tmp_V_235_reg_2397;
    sc_signal< sc_lv<16> > tmp_V_236_reg_2402;
    sc_signal< sc_lv<1> > icmp_ln1496_45_fu_1851_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_45_reg_2407;
    sc_signal< sc_lv<16> > tmp_V_237_reg_2412;
    sc_signal< sc_lv<16> > tmp_V_238_reg_2417;
    sc_signal< sc_lv<1> > icmp_ln1496_46_fu_1857_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_46_reg_2422;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<64> > zext_ln305_fu_1634_p1;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<2> > filt_mask_V_fu_1639_p3;
    sc_signal< sc_lv<2> > select_ln304_fu_1646_p3;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state8;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<7> ap_const_lv7_63;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<7> ap_const_lv7_62;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state8();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_block_state5_pp0_stage0_iter3();
    void thread_ap_block_state6_pp0_stage0_iter4();
    void thread_ap_block_state7_pp0_stage0_iter5();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_predicate_op197_write_state5();
    void thread_ap_predicate_op199_write_state5();
    void thread_ap_predicate_op201_write_state5();
    void thread_ap_predicate_op203_write_state5();
    void thread_ap_predicate_op205_write_state5();
    void thread_ap_predicate_op207_write_state5();
    void thread_ap_predicate_op209_write_state5();
    void thread_ap_predicate_op211_write_state5();
    void thread_ap_predicate_op213_write_state5();
    void thread_ap_predicate_op215_write_state5();
    void thread_ap_predicate_op217_write_state5();
    void thread_ap_predicate_op219_write_state5();
    void thread_ap_predicate_op221_write_state5();
    void thread_ap_predicate_op223_write_state5();
    void thread_ap_predicate_op225_write_state5();
    void thread_ap_predicate_op227_write_state5();
    void thread_ap_predicate_op229_write_state5();
    void thread_ap_predicate_op231_write_state5();
    void thread_ap_predicate_op233_write_state5();
    void thread_ap_predicate_op235_write_state5();
    void thread_ap_predicate_op237_write_state5();
    void thread_ap_predicate_op239_write_state5();
    void thread_ap_predicate_op241_write_state5();
    void thread_ap_predicate_op243_write_state5();
    void thread_ap_predicate_op245_write_state5();
    void thread_ap_predicate_op247_write_state5();
    void thread_ap_predicate_op249_write_state5();
    void thread_ap_predicate_op251_write_state5();
    void thread_ap_predicate_op253_write_state5();
    void thread_ap_predicate_op255_write_state5();
    void thread_ap_predicate_op257_write_state5();
    void thread_ap_predicate_op259_write_state5();
    void thread_ap_ready();
    void thread_data_V_data_0_V_blk_n();
    void thread_data_V_data_0_V_read();
    void thread_data_V_data_10_V_blk_n();
    void thread_data_V_data_10_V_read();
    void thread_data_V_data_11_V_blk_n();
    void thread_data_V_data_11_V_read();
    void thread_data_V_data_12_V_blk_n();
    void thread_data_V_data_12_V_read();
    void thread_data_V_data_13_V_blk_n();
    void thread_data_V_data_13_V_read();
    void thread_data_V_data_14_V_blk_n();
    void thread_data_V_data_14_V_read();
    void thread_data_V_data_15_V_blk_n();
    void thread_data_V_data_15_V_read();
    void thread_data_V_data_1_V_blk_n();
    void thread_data_V_data_1_V_read();
    void thread_data_V_data_2_V_blk_n();
    void thread_data_V_data_2_V_read();
    void thread_data_V_data_3_V_blk_n();
    void thread_data_V_data_3_V_read();
    void thread_data_V_data_4_V_blk_n();
    void thread_data_V_data_4_V_read();
    void thread_data_V_data_5_V_blk_n();
    void thread_data_V_data_5_V_read();
    void thread_data_V_data_6_V_blk_n();
    void thread_data_V_data_6_V_read();
    void thread_data_V_data_7_V_blk_n();
    void thread_data_V_data_7_V_read();
    void thread_data_V_data_8_V_blk_n();
    void thread_data_V_data_8_V_read();
    void thread_data_V_data_9_V_blk_n();
    void thread_data_V_data_9_V_read();
    void thread_data_window_0_V_V_read();
    void thread_data_window_0_V_V_write();
    void thread_data_window_10_V_V_read();
    void thread_data_window_10_V_V_write();
    void thread_data_window_11_V_V_read();
    void thread_data_window_11_V_V_write();
    void thread_data_window_12_V_V_read();
    void thread_data_window_12_V_V_write();
    void thread_data_window_13_V_V_read();
    void thread_data_window_13_V_V_write();
    void thread_data_window_14_V_V_read();
    void thread_data_window_14_V_V_write();
    void thread_data_window_15_V_V_read();
    void thread_data_window_15_V_V_write();
    void thread_data_window_16_V_V_read();
    void thread_data_window_16_V_V_write();
    void thread_data_window_17_V_V_read();
    void thread_data_window_17_V_V_write();
    void thread_data_window_18_V_V_read();
    void thread_data_window_18_V_V_write();
    void thread_data_window_19_V_V_read();
    void thread_data_window_19_V_V_write();
    void thread_data_window_1_V_V_read();
    void thread_data_window_1_V_V_write();
    void thread_data_window_20_V_V_read();
    void thread_data_window_20_V_V_write();
    void thread_data_window_21_V_V_read();
    void thread_data_window_21_V_V_write();
    void thread_data_window_22_V_V_read();
    void thread_data_window_22_V_V_write();
    void thread_data_window_23_V_V_read();
    void thread_data_window_23_V_V_write();
    void thread_data_window_24_V_V_read();
    void thread_data_window_24_V_V_write();
    void thread_data_window_25_V_V_read();
    void thread_data_window_25_V_V_write();
    void thread_data_window_26_V_V_read();
    void thread_data_window_26_V_V_write();
    void thread_data_window_27_V_V_read();
    void thread_data_window_27_V_V_write();
    void thread_data_window_28_V_V_read();
    void thread_data_window_28_V_V_write();
    void thread_data_window_29_V_V_read();
    void thread_data_window_29_V_V_write();
    void thread_data_window_2_V_V_read();
    void thread_data_window_2_V_V_write();
    void thread_data_window_30_V_V_read();
    void thread_data_window_30_V_V_write();
    void thread_data_window_31_V_V_read();
    void thread_data_window_31_V_V_write();
    void thread_data_window_3_V_V_read();
    void thread_data_window_3_V_V_write();
    void thread_data_window_4_V_V_read();
    void thread_data_window_4_V_V_write();
    void thread_data_window_5_V_V_read();
    void thread_data_window_5_V_V_write();
    void thread_data_window_6_V_V_read();
    void thread_data_window_6_V_V_write();
    void thread_data_window_7_V_V_read();
    void thread_data_window_7_V_V_write();
    void thread_data_window_8_V_V_read();
    void thread_data_window_8_V_V_write();
    void thread_data_window_9_V_V_read();
    void thread_data_window_9_V_V_write();
    void thread_filt_mask_V_fu_1639_p3();
    void thread_i_iw_fu_1622_p2();
    void thread_icmp_ln1496_32_fu_1773_p2();
    void thread_icmp_ln1496_33_fu_1779_p2();
    void thread_icmp_ln1496_34_fu_1785_p2();
    void thread_icmp_ln1496_35_fu_1791_p2();
    void thread_icmp_ln1496_36_fu_1797_p2();
    void thread_icmp_ln1496_37_fu_1803_p2();
    void thread_icmp_ln1496_38_fu_1809_p2();
    void thread_icmp_ln1496_39_fu_1815_p2();
    void thread_icmp_ln1496_40_fu_1821_p2();
    void thread_icmp_ln1496_41_fu_1827_p2();
    void thread_icmp_ln1496_42_fu_1833_p2();
    void thread_icmp_ln1496_43_fu_1839_p2();
    void thread_icmp_ln1496_44_fu_1845_p2();
    void thread_icmp_ln1496_45_fu_1851_p2();
    void thread_icmp_ln1496_46_fu_1857_p2();
    void thread_icmp_ln1496_fu_1767_p2();
    void thread_icmp_ln177_fu_1659_p2();
    void thread_icmp_ln304_fu_1628_p2();
    void thread_icmp_ln358_fu_1616_p2();
    void thread_icmp_ln879_fu_1665_p2();
    void thread_icmp_ln895_fu_1653_p2();
    void thread_internal_ap_ready();
    void thread_io_acc_block_signal_op179();
    void thread_io_acc_block_signal_op325();
    void thread_pool_table_width16_address0();
    void thread_pool_table_width16_ce0();
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
    void thread_select_ln304_fu_1646_p3();
    void thread_start_out();
    void thread_start_write();
    void thread_zext_ln305_fu_1634_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
