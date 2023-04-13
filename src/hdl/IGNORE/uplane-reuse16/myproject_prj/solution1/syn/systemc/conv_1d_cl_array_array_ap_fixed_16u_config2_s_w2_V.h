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

  static const unsigned DataWidth = 58;
  static const unsigned AddressRange = 12;
  static const unsigned AddressWidth = 4;

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
        ram[0] = "0b1111010010000000010110001000000001100000110000000101010001";
        ram[1] = "0b1001010110111111101100010011111111111110110000000000000001";
        ram[2] = "0b0001000111111111100101111100000000011100011111111111101001";
        ram[3] = "0b0000001100111111111111101011111111000111100000000001110010";
        ram[4] = "0b1100101010000000000110000011111110101101001111111110000011";
        ram[5] = "0b0010101001000000011000110011111110011110100000000011101111";
        ram[6] = "0b1011100101000000001100110011111111101101100000000101101011";
        ram[7] = "0b0100101001000000011101101111111111000100010000000001010111";
        ram[8] = "0b1100110100000000001101011011111111001100110000000101101000";
        ram[9] = "0b0010000100111111111100011111111110101100010000000110101010";
        ram[10] = "0b1011101100111111100101110100000000000110110000000001001101";
        ram[11] = "0b0001100000111111110001001111111110101100101111111111101010";


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


static const unsigned DataWidth = 58;
static const unsigned AddressRange = 12;
static const unsigned AddressWidth = 4;

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
