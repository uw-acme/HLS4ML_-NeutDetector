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

  static const unsigned DataWidth = 122;
  static const unsigned AddressRange = 8;
  static const unsigned AddressWidth = 3;

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
        ram[0] = "0b00111001010000000010100111000000010011110011111111010101101111111100000001111111101011010000000000110010110000000101001110";
        ram[1] = "0b11001010000000000100001111000000010110001000000001001110011111111100000001000000010101100100000001011000010000000110100010";
        ram[2] = "0b11000000000000000101000010111111101101101011111111011000111111111100010000000000010111100100000001001010101111111110000110";
        ram[3] = "0b01001110110000000110101011111111110101000111111111001010111111111011111100000000001101010000000000111101000000000101110011";
        ram[4] = "0b00110000100000000011110101111111101110010011111111010010111111111011011011111111110011100000000001001000101111111100110001";
        ram[5] = "0b00101110000000000011101011111111101001111100000001000111010000000010111101111111101011110100000001011010100000000101101110";
        ram[6] = "0b11100001100000000011110011111111110101111100000001100110110000000101110101000000010010101000000001010110001111111101011100";
        ram[7] = "0b10110001100000000110100111111111101111000100000001010110111111111011010001000000010111101111111111010100001111111111011110";


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


static const unsigned DataWidth = 122;
static const unsigned AddressRange = 8;
static const unsigned AddressWidth = 3;

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
