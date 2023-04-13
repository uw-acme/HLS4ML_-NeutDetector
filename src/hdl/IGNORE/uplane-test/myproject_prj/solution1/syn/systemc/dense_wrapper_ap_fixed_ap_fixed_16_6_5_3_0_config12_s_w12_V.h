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

  static const unsigned DataWidth = 26;
  static const unsigned AddressRange = 32;
  static const unsigned AddressWidth = 5;

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
        ram[0] = "0b11111010010000000101111110";
        ram[1] = "0b00111111111111111111110110";
        ram[2] = "0b10110000010000000100001100";
        ram[3] = "0b10100111010000000011101111";
        ram[4] = "0b11010100010000000111010010";
        ram[5] = "0b11100000100000000100101000";
        ram[6] = "0b10101110101111111110100010";
        ram[7] = "0b11101101111111111010101100";
        ram[8] = "0b00110100000000000100100100";
        ram[9] = "0b00101010010000000101000011";
        ram[10] = "0b11001001001111111110110111";
        ram[11] = "0b01000011111111111101011011";
        ram[12] = "0b11110000010000000100100000";
        ram[13] = "0b00111100010000000100110011";
        ram[14] = "0b00111101101111111111010100";
        ram[15] = "0b01100001010000000101011010";
        ram[16] = "0b01000000111111111011110111";
        ram[17] = "0b01110000111111111100101010";
        ram[18] = "0b11100000100000000100110110";
        ram[19] = "0b01001100101111111100110101";
        ram[20] = "0b01010001111111111110000001";
        ram[21] = "0b01010111001111111101001110";
        ram[22] = "0b01100101111111111101001001";
        ram[23] = "0b00111100111111111111011100";
        ram[24] = "0b01000100100000000100111001";
        ram[25] = "0b11111000111111111010010100";
        ram[26] = "0b11001100101111111011100000";
        ram[27] = "0b01001000001111111011011111";
        ram[28] = "0b01010101100000000011100010";
        ram[29] = "0b10110001000000000100011111";
        ram[30] = "0b11111000111111111011001101";
        ram[31] = "0b10110101011111111010010100";


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


static const unsigned DataWidth = 26;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

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
