//
//    rfnoc-hls-neuralnet: Vivado HLS code for neural-net building blocks
//
//    Copyright (C) 2017 EJ Kreinar
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#include <iostream>
#include <string>

#include "myproject.h"
#include "parameters.h"

void myproject(
    input_t conv1d_input[N_INPUT_1_1*N_INPUT_2_1],
    result_t layer13_out[N_LAYER_12],
    unsigned short &const_size_in_1,
    unsigned short &const_size_out_1
) {

    //hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=conv1d_input complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer13_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=conv1d_input,layer13_out 
    #pragma HLS DATAFLOW 

    const_size_in_1 = N_INPUT_1_1*N_INPUT_2_1;
    const_size_out_1 = N_LAYER_12;

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        //hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<conv1d_weight_t, 48>(w2, "w2.txt");
        nnet::load_weights_from_txt<conv1d_bias_t, 16>(b2, "b2.txt");
        nnet::load_weights_from_txt<conv1d_1_weight_t, 2560>(w5, "w5.txt");
        nnet::load_weights_from_txt<conv1d_1_bias_t, 32>(b5, "b5.txt");
        nnet::load_weights_from_txt<conv1d_2_weight_t, 18432>(w8, "w8.txt");
        nnet::load_weights_from_txt<conv1d_2_bias_t, 64>(b8, "b8.txt");
        nnet::load_weights_from_txt<wavrec_out_weight_t, 64>(w12, "w12.txt");
        nnet::load_weights_from_txt<wavrec_out_bias_t, 1>(b12, "b12.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    //hls-fpga-machine-learning insert layers

    layer2_t layer2_out[N_OUTPUTS_2*N_FILT_2];
    #pragma HLS ARRAY_PARTITION variable=layer2_out complete dim=0
    nnet::conv_1d_cl<input_t, layer2_t, config2>(conv1d_input, layer2_out, w2, b2); // conv1d

    layer3_t layer3_out[N_OUTPUTS_2*N_FILT_2];
    #pragma HLS ARRAY_PARTITION variable=layer3_out complete dim=0
    nnet::relu<layer2_t, layer3_t, relu_config3>(layer2_out, layer3_out); // conv1d_relu

    // looking at the inputs of the first max pooling
    // for (int i = 0; i < 99; i++) {
    //     std::cout << layer2_out[i] << std::endl;
    // }
    // std::cout<< "output, max pooling ints" <<std::endl;
    // // looking at the inputs of the first max pooling
    // for (int i = 0; i < 99; i++) {
    //     std::cout << layer3_out[i] << std::endl;
    // }

    layer4_t layer4_out[N_OUTPUTS_4*N_FILT_4];
    #pragma HLS ARRAY_PARTITION variable=layer4_out complete dim=0
    nnet::pooling1d_cl<layer3_t, layer4_t, config4>(layer3_out, layer4_out); // max_pooling1d

    layer5_t layer5_out[N_OUTPUTS_5*N_FILT_5];
    #pragma HLS ARRAY_PARTITION variable=layer5_out complete dim=0
    nnet::conv_1d_cl<layer4_t, layer5_t, config5>(layer4_out, layer5_out, w5, b5); // conv1d_1

    layer6_t layer6_out[N_OUTPUTS_5*N_FILT_5];
    #pragma HLS ARRAY_PARTITION variable=layer6_out complete dim=0
    nnet::relu<layer5_t, layer6_t, relu_config6>(layer5_out, layer6_out); // conv1d_1_relu

    layer7_t layer7_out[N_OUTPUTS_7*N_FILT_7];
    #pragma HLS ARRAY_PARTITION variable=layer7_out complete dim=0
    nnet::pooling1d_cl<layer6_t, layer7_t, config7>(layer6_out, layer7_out); // max_pooling1d_1

    layer8_t layer8_out[N_OUTPUTS_8*N_FILT_8];
    #pragma HLS ARRAY_PARTITION variable=layer8_out complete dim=0
    nnet::conv_1d_cl<layer7_t, layer8_t, config8>(layer7_out, layer8_out, w8, b8); // conv1d_2

    layer9_t layer9_out[N_OUTPUTS_8*N_FILT_8];
    #pragma HLS ARRAY_PARTITION variable=layer9_out complete dim=0
    nnet::relu<layer8_t, layer9_t, relu_config9>(layer8_out, layer9_out); // conv1d_2_relu

    layer10_t layer10_out[N_FILT_10];
    #pragma HLS ARRAY_PARTITION variable=layer10_out complete dim=0
    nnet::global_pooling1d_cl<layer9_t, layer10_t, config10>(layer9_out, layer10_out); // global_max_pooling1d

    layer12_t layer12_out[N_LAYER_12];
    #pragma HLS ARRAY_PARTITION variable=layer12_out complete dim=0
    nnet::dense<layer10_t, layer12_t, config12>(layer10_out, layer12_out, w12, b12); // wavrec_out

    nnet::sigmoid<layer12_t, result_t, sigmoid_config13>(layer12_out, layer13_out); // wavrec_out_sigmoid

}

int main(int argc, char** argv) {
   input_t inputVals[64];
    std::vector<float> inputVector = 
    {   2, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 2
    };
    nnet::copy_data<float, input_t, 0, N_INPUT_1_1*N_INPUT_2_1>(inputVector, inputVals);
   result_t outputVals[16];
   unsigned short const_size_in_1;
   unsigned short const_size_out_1;
//    std::cout << "input values" << std::endl;
//     for (int i = 0; i < 10; i++) {
//         std::string str = inputVals[i].to_string();
//         // If the variable is 0 (formatted as 0) output all 0s
//         if (inputVals[i] == 0) {
//             std::cout << "0b00000000000000000" << std::endl;
//         } else {
//         //Find where the decimal point is and sign extend to make sure it is the right length
//             if (str.find('.') < 9) {
//                 str.insert(str.find('b')+1, 9 - str.find('.'), str.at(2));
//             }
//             // Remove the decimal
//             std::cout << str.erase(str.find('.'), 1) << std::endl;
//         }
//     }

    for (int i = 0; i < 64; i++) {
        std::cout << inputVals[i] << std::endl;
    }

   myproject(inputVals, outputVals, const_size_in_1, const_size_out_1);

   std::cout << "The final output" << std::endl;
   for (int i = 0; i < 10; i++) {
        std::string str = outputVals[i].to_string();
        // If the variable is 0 (formatted as 0) output all 0s
        if (outputVals[i] == 0) {
            std::cout << "0b00000000000000000" << std::endl;
        } else {
            //Find where the decimal point is and sign extend to make sure it is the right length
            if (str.find('.') < 9) {
                str.insert(str.find('b')+1, 9 - str.find('.'), str.at(2));
            }
            // Remove the decimal
            std::cout << str.erase(str.find('.'), 1) << std::endl;
        }
   }
   std::cout << "\n" << std::endl;
   return 0;
} 