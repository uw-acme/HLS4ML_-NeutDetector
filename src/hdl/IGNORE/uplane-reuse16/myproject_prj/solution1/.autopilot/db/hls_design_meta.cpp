#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("conv1d_input_V_data_0_V_TDATA", 16, hls_in, 0, "axis", "in_data", 1),
	Port_Property("layer13_out_V_data_0_V_TDATA", 16, hls_out, 1, "axis", "out_data", 1),
	Port_Property("const_size_in_1", 16, hls_out, 2, "ap_vld", "out_data", 1),
	Port_Property("const_size_out_1", 16, hls_out, 3, "ap_vld", "out_data", 1),
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst_n", 1, hls_in, -1, "", "", 1),
	Port_Property("const_size_in_1_ap_vld", 1, hls_out, 2, "ap_vld", "out_vld", 1),
	Port_Property("const_size_out_1_ap_vld", 1, hls_out, 3, "ap_vld", "out_vld", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("conv1d_input_V_data_0_V_TVALID", 1, hls_in, 0, "axis", "in_vld", 1),
	Port_Property("conv1d_input_V_data_0_V_TREADY", 1, hls_out, 0, "axis", "in_acc", 1),
	Port_Property("layer13_out_V_data_0_V_TVALID", 1, hls_out, 1, "axis", "out_vld", 1),
	Port_Property("layer13_out_V_data_0_V_TREADY", 1, hls_in, 1, "axis", "out_acc", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
};
const char* HLS_Design_Meta::dut_name = "myproject";
