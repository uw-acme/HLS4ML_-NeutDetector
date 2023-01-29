// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_1d_cl_array_array_ap_fixed_16u_config2_s_outidx_H__
#define __conv_1d_cl_array_array_ap_fixed_16u_config2_s_outidx_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_1d_cl_array_array_ap_fixed_16u_config2_s_outidx_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 2;
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


   SC_CTOR(conv_1d_cl_array_array_ap_fixed_16u_config2_s_outidx_ram) {
        ram[0] = "0b00";
        ram[1] = "0b00";
        ram[2] = "0b00";
        ram[3] = "0b01";
        ram[4] = "0b01";
        ram[5] = "0b01";
        ram[6] = "0b10";
        ram[7] = "0b10";
        ram[8] = "0b10";
        ram[9] = "0b11";
        ram[10] = "0b11";
        ram[11] = "0b11";


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


SC_MODULE(conv_1d_cl_array_array_ap_fixed_16u_config2_s_outidx) {


static const unsigned DataWidth = 2;
static const unsigned AddressRange = 12;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_1d_cl_array_array_ap_fixed_16u_config2_s_outidx_ram* meminst;


SC_CTOR(conv_1d_cl_array_array_ap_fixed_16u_config2_s_outidx) {
meminst = new conv_1d_cl_array_array_ap_fixed_16u_config2_s_outidx_ram("conv_1d_cl_array_array_ap_fixed_16u_config2_s_outidx_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_1d_cl_array_array_ap_fixed_16u_config2_s_outidx() {
    delete meminst;
}


};//endmodule
#endif
