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

#ifndef NNET_CONV1D_H_
#define NNET_CONV1D_H_

#include "nnet_common.h"
#include "nnet_conv1d_latency.h"
#include "nnet_conv1d_resource.h"
#include <cstdlib>

namespace nnet {

struct conv1d_config
{
    // Internal data type definitions
    typedef float bias_t;
    typedef float weight_t;
    typedef float accum_t;

    // Convolutional parameters
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_width = 10;
    static const unsigned n_chan = 0;
    static const unsigned filt_width = 1;
    static const unsigned kernel_size = filt_width;
    static const unsigned n_filt = 1;
    static const unsigned stride_width = 1;
    static const unsigned dilation = 1;
    static const unsigned out_width = 10; //(N_IN + PAD_LEFT * PAD_RIGHT - (DILATION * (FILT_WIDTH - 1) + 1)) / STRIDE + 1

    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned n_zeros = 0; // not used yet
};

template<class data_T, class res_T, typename CONFIG_T>
void conv_1d_cl(
    data_T data[CONFIG_T::in_width * CONFIG_T::n_chan],
    res_T  res[CONFIG_T::out_width * CONFIG_T::n_filt],
    typename CONFIG_T::weight_t weights[CONFIG_T::filt_width * CONFIG_T::n_chan * CONFIG_T::n_filt],
    typename CONFIG_T::bias_t   biases[CONFIG_T::n_filt])
{
    std::cout << "Going into conv1d if statement" << std::endl;
    if (CONFIG_T::strategy == nnet::latency) {
        std::cout << "went into latency" << std::endl;
        conv_1d_latency_cl<data_T, res_T, CONFIG_T>(data, res, weights, biases);
    } else {
        std::cout << "went into resource" << std::endl;

        // std::cout << "conv 1d input" << std::endl;
        // for (int i = 0; i < 10; i++) {
        //     std::string str = data[i].to_string();
        //     // If the variable is 0 (formatted as 0) output all 0s
        //     if (data[i] == 0) {
        //         std::cout << "0b00000000000000000" << std::endl;
        //     } else {
        //     //Find where the decimal point is and sign extend to make sure it is the right length
        //         if (str.find('.') < 9) {
        //             str.insert(str.find('b')+1, 9 - str.find('.'), str.at(2));
        //         }
        //         // Remove the decimal
        //         std::cout << str.erase(str.find('.'), 1) << std::endl;
        //     }
        // }
        conv_1d_resource_cl<data_T, res_T, CONFIG_T>(data, res, weights, biases);
        
        
        /******************************************************/
        std::cout << "conv1d output" << std::endl;
        for (int i = 0; i < 10; i++) {
            std::string str = res[i].to_string();
            // If the variable is 0 (formatted as 0) output all 0s
            if (res[i] == 0) {
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
    }
}

}//end namespace

#endif
