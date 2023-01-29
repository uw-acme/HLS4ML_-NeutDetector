// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __pooling1d_cl_array_array_ap_fixed_16u_config4_s_pool_tablbkb_H__
#define __pooling1d_cl_array_array_ap_fixed_16u_config4_s_pool_tablbkb_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct pooling1d_cl_array_array_ap_fixed_16u_config4_s_pool_tablbkb_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 1;
  static const unsigned AddressRange = 99;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(pooling1d_cl_array_array_ap_fixed_16u_config4_s_pool_tablbkb_ram) {
        ram[0] = "0b0";
        ram[1] = "0b1";
        ram[2] = "0b0";
        ram[3] = "0b1";
        ram[4] = "0b0";
        ram[5] = "0b1";
        ram[6] = "0b0";
        ram[7] = "0b1";
        ram[8] = "0b0";
        ram[9] = "0b1";
        ram[10] = "0b0";
        ram[11] = "0b1";
        ram[12] = "0b0";
        ram[13] = "0b1";
        ram[14] = "0b0";
        ram[15] = "0b1";
        ram[16] = "0b0";
        ram[17] = "0b1";
        ram[18] = "0b0";
        ram[19] = "0b1";
        ram[20] = "0b0";
        ram[21] = "0b1";
        ram[22] = "0b0";
        ram[23] = "0b1";
        ram[24] = "0b0";
        ram[25] = "0b1";
        ram[26] = "0b0";
        ram[27] = "0b1";
        ram[28] = "0b0";
        ram[29] = "0b1";
        ram[30] = "0b0";
        ram[31] = "0b1";
        ram[32] = "0b0";
        ram[33] = "0b1";
        ram[34] = "0b0";
        ram[35] = "0b1";
        ram[36] = "0b0";
        ram[37] = "0b1";
        ram[38] = "0b0";
        ram[39] = "0b1";
        ram[40] = "0b0";
        ram[41] = "0b1";
        ram[42] = "0b0";
        ram[43] = "0b1";
        ram[44] = "0b0";
        ram[45] = "0b1";
        ram[46] = "0b0";
        ram[47] = "0b1";
        ram[48] = "0b0";
        ram[49] = "0b1";
        ram[50] = "0b0";
        ram[51] = "0b1";
        ram[52] = "0b0";
        ram[53] = "0b1";
        ram[54] = "0b0";
        ram[55] = "0b1";
        ram[56] = "0b0";
        ram[57] = "0b1";
        ram[58] = "0b0";
        ram[59] = "0b1";
        ram[60] = "0b0";
        ram[61] = "0b1";
        ram[62] = "0b0";
        ram[63] = "0b1";
        ram[64] = "0b0";
        ram[65] = "0b1";
        ram[66] = "0b0";
        ram[67] = "0b1";
        ram[68] = "0b0";
        ram[69] = "0b1";
        ram[70] = "0b0";
        ram[71] = "0b1";
        ram[72] = "0b0";
        ram[73] = "0b1";
        ram[74] = "0b0";
        ram[75] = "0b1";
        ram[76] = "0b0";
        ram[77] = "0b1";
        ram[78] = "0b0";
        ram[79] = "0b1";
        ram[80] = "0b0";
        ram[81] = "0b1";
        ram[82] = "0b0";
        ram[83] = "0b1";
        ram[84] = "0b0";
        ram[85] = "0b1";
        ram[86] = "0b0";
        ram[87] = "0b1";
        ram[88] = "0b0";
        ram[89] = "0b1";
        ram[90] = "0b0";
        ram[91] = "0b1";
        ram[92] = "0b0";
        ram[93] = "0b1";
        ram[94] = "0b0";
        ram[95] = "0b1";
        ram[96] = "0b0";
        ram[97] = "0b1";
        ram[98] = "0b0";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(pooling1d_cl_array_array_ap_fixed_16u_config4_s_pool_tablbkb) {


static const unsigned DataWidth = 1;
static const unsigned AddressRange = 99;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


pooling1d_cl_array_array_ap_fixed_16u_config4_s_pool_tablbkb_ram* meminst;


SC_CTOR(pooling1d_cl_array_array_ap_fixed_16u_config4_s_pool_tablbkb) {
meminst = new pooling1d_cl_array_array_ap_fixed_16u_config4_s_pool_tablbkb_ram("pooling1d_cl_array_array_ap_fixed_16u_config4_s_pool_tablbkb_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~pooling1d_cl_array_array_ap_fixed_16u_config4_s_pool_tablbkb() {
    delete meminst;
}


};//endmodule
#endif
