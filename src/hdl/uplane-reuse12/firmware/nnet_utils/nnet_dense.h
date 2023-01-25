#ifndef NNET_DENSE_H_
#define NNET_DENSE_H_

#include "nnet_common.h"
#include "nnet_mult.h"
#include "nnet_dense_latency.h"
#include "nnet_dense_resource.h"
#include "nnet_helpers.h"
#include "hls_stream.h"
#include <math.h>

namespace nnet {

struct dense_config
{
    // Internal data type definitions
    typedef float bias_t;
    typedef float weight_t;
    typedef float accum_t;

    // Layer Sizes
    static const unsigned n_in = 10;
    static const unsigned n_out = 10;

    // Resource reuse info
    static const unsigned io_type = io_parallel;
    static const unsigned strategy = latency; 
    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned n_zeros = 0;
    // partitioning arrays cyclically to go with roll factors?
    // Product function to use
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

template<class data_T, class res_T, typename CONFIG_T>
void dense(
    data_T    data[CONFIG_T::n_in],
    res_T     res[CONFIG_T::n_out],
    typename CONFIG_T::weight_t  weights[CONFIG_T::n_in*CONFIG_T::n_out],
    typename CONFIG_T::bias_t    biases[CONFIG_T::n_out])
{
    std::cout << "\n**Conintues to dense**\n"<< std::endl;
    #pragma HLS inline
    if (CONFIG_T::strategy == nnet::latency) {
        std::cout << "goes to latency" << std::endl;
        dense_latency<data_T, res_T, CONFIG_T>(data, res, weights, biases);
    } else {
        std::cout << "goes to resource" << std::endl;
        dense_resource<data_T, res_T, CONFIG_T>(data, res, weights, biases);
    }

    std::cout << "dense layer output" << std::endl;
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

#endif
