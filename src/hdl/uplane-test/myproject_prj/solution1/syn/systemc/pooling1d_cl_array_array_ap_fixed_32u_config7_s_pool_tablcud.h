// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __pooling1d_cl_array_array_ap_fixed_32u_config7_s_pool_tablcud_H__
#define __pooling1d_cl_array_array_ap_fixed_32u_config7_s_pool_tablcud_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct pooling1d_cl_array_array_ap_fixed_32u_config7_s_pool_tablcud_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 1;
  static const unsigned AddressRange = 23;
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


   SC_CTOR(pooling1d_cl_array_array_ap_fixed_32u_config7_s_pool_tablcud_ram) {
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


SC_MODULE(pooling1d_cl_array_array_ap_fixed_32u_config7_s_pool_tablcud) {


static const unsigned DataWidth = 1;
static const unsigned AddressRange = 23;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


pooling1d_cl_array_array_ap_fixed_32u_config7_s_pool_tablcud_ram* meminst;


SC_CTOR(pooling1d_cl_array_array_ap_fixed_32u_config7_s_pool_tablcud) {
meminst = new pooling1d_cl_array_array_ap_fixed_32u_config7_s_pool_tablcud_ram("pooling1d_cl_array_array_ap_fixed_32u_config7_s_pool_tablcud_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~pooling1d_cl_array_array_ap_fixed_32u_config7_s_pool_tablcud() {
    delete meminst;
}


};//endmodule
#endif
