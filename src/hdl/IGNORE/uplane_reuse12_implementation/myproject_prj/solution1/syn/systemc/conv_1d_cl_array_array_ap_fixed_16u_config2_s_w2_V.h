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
        ram[0] = "0b0001110011111111111010011100000000101011011111111001010011";
        ram[1] = "0b0100011111111111110101111111111111011100000000000011000011";
        ram[2] = "0b0000000011000000000001100111111110011110111111111101101110";
        ram[3] = "0b1011111111000000000110101100000000101101111111111101111100";
        ram[4] = "0b1010010011111111101011001000000001010100110000000010110010";
        ram[5] = "0b1011001110111111111100100100000000110001010000000000101111";
        ram[6] = "0b0000100100000000000101001000000001001100001111111001101100";
        ram[7] = "0b0010001100111111110011110000000000101100100000000011011000";
        ram[8] = "0b0001010011000000010010000000000001100000001111111011101101";
        ram[9] = "0b0011010100111111111010010011111110100011011111111100100010";
        ram[10] = "0b1011011111000000010001011011111111000111100000000011100101";
        ram[11] = "0b0010000110111111111001010011111111110011110000000110101111";


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
