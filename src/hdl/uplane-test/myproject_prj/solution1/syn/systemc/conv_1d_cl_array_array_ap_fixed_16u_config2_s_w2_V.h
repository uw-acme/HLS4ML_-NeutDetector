// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V_H__
#define __conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 10;
  static const unsigned AddressRange = 48;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V_ram) {
        ram[0] = "0b1100101001";
        ram[1] = "0b0110101110";
        ram[2] = "0b0101100111";
        ram[3] = "0b1011000100";
        ram[4] = "0b0001100101";
        ram[5] = "0b1010000101";
        ram[6] = "0b0001011111";
        ram[7] = "0b1111000010";
        ram[8] = "0b0010011010";
        ram[9] = "0b0011011110";
        ram[10] = "0b1010010001";
        ram[11] = "0b1101001111";
        ram[12] = "0b1111100110";
        ram[13] = "0b0110000111";
        ram[14] = "0b1100010010";
        ram[15] = "0b0011000001";
        ram[16] = "0b1001100101";
        ram[17] = "0b1011110101";
        ram[18] = "0b1111000101";
        ram[19] = "0b1111111011";
        ram[20] = "0b0000101000";
        ram[21] = "0b0100100010";
        ram[22] = "0b0101001101";
        ram[23] = "0b1011101111";
        ram[24] = "0b1110010110";
        ram[25] = "0b0010101111";
        ram[26] = "0b1111010000";
        ram[27] = "0b0110100100";
        ram[28] = "0b0100111010";
        ram[29] = "0b1110110001";
        ram[30] = "0b1110111110";
        ram[31] = "0b0001011001";
        ram[32] = "0b0010011111";
        ram[33] = "0b1001100111";
        ram[34] = "0b1101000010";
        ram[35] = "0b1011100100";
        ram[36] = "0b0100101100";
        ram[37] = "0b0000110010";
        ram[38] = "0b1010000111";
        ram[39] = "0b0010000100";
        ram[40] = "0b0011011111";
        ram[41] = "0b0100110100";
        ram[42] = "0b0100100101";
        ram[43] = "0b0110011000";
        ram[44] = "0b0100111011";
        ram[45] = "0b1111011111";
        ram[46] = "0b1111101111";
        ram[47] = "0b0000110100";


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


SC_MODULE(conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V) {


static const unsigned DataWidth = 10;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V_ram* meminst;


SC_CTOR(conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V) {
meminst = new conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V_ram("conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V() {
    delete meminst;
}


};//endmodule
#endif
