// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s_w12_V_H__
#define __dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s_w12_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s_w12_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 58;
  static const unsigned AddressRange = 16;
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


   SC_CTOR(dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s_w12_V_ram) {
        ram[0] = "0b1011111110111111110001000000000001100101100000000100011111";
        ram[1] = "0b0100111010111111101011111100000001100010110000000100001010";
        ram[2] = "0b1100110100000000010001101100000010000001010000000011111001";
        ram[3] = "0b0101011110111111101101101100000000111011000000000100110110";
        ram[4] = "0b0111000101000000010101101011111111010000101111111100110010";
        ram[5] = "0b1100110000111111101010111011111110111111001111111110111100";
        ram[6] = "0b0011111010111111110111011000000001110111101111111100001101";
        ram[7] = "0b0101110101000000001100011000000000111110011111111100100000";
        ram[8] = "0b1010111101000000011010110111111111011100001111111011101101";
        ram[9] = "0b1110010101000000001111100111111111110000100000000010110011";
        ram[10] = "0b0110101111111111101110101011111111001010111111111100001110";
        ram[11] = "0b1011011101111111110100001100000001110011111111111011000101";
        ram[12] = "0b0110100110000000001111011011111111011010111111111011110101";
        ram[13] = "0b0011101010000000001100111011111111100101110000000101111101";
        ram[14] = "0b0100101001000000010110000011111111000101100000000011110010";
        ram[15] = "0b0011111110000000011000010111111111011001100000000010010010";


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


SC_MODULE(dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s_w12_V) {


static const unsigned DataWidth = 58;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s_w12_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s_w12_V) {
meminst = new dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s_w12_V_ram("dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s_w12_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s_w12_V() {
    delete meminst;
}


};//endmodule
#endif
