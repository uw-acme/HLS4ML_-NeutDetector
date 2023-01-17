#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "ap_int.h"
#include "ap_fixed.h"

#include "nnet_utils/nnet_helpers.h"
//hls-fpga-machine-learning insert includes
#include "nnet_utils/nnet_activation.h"
#include "nnet_utils/nnet_activation_stream.h"
#include "nnet_utils/nnet_conv1d.h"
#include "nnet_utils/nnet_conv1d_stream.h"
#include "nnet_utils/nnet_dense.h"
#include "nnet_utils/nnet_dense_compressed.h"
#include "nnet_utils/nnet_dense_stream.h"
#include "nnet_utils/nnet_pooling.h"
#include "nnet_utils/nnet_pooling_stream.h"
 
//hls-fpga-machine-learning insert weights
#include "weights/w2.h"
#include "weights/b2.h"
#include "weights/w5.h"
#include "weights/b5.h"
#include "weights/w8.h"
#include "weights/b8.h"
#include "weights/w12.h"
#include "weights/b12.h"

//hls-fpga-machine-learning insert layer-config
// conv1d
struct config2_mult : nnet::dense_config {
    static const unsigned n_in = 3;
    static const unsigned n_out = 16;
    static const unsigned reuse_factor = 12;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<16,6> accum_t;
    typedef conv1d_bias_t bias_t;
    typedef conv1d_weight_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config2 : nnet::conv1d_config {
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_width = 200;
    static const unsigned n_chan = N_INPUT_2_1;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_width;
    static const unsigned n_filt = N_FILT_2;
    static const unsigned stride_width = 2;
    static const unsigned dilation = 1;
    static const unsigned out_width = N_OUTPUTS_2;
    static const unsigned reuse_factor = 12;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::encoded;
    static const unsigned min_width = 6;
    static const ap_uint<filt_width> pixels[min_width];
    typedef ap_fixed<16,6> accum_t;
    typedef conv1d_bias_t bias_t;
    typedef conv1d_weight_t weight_t;
    typedef config2_mult mult_config;
};
const ap_uint<config2::filt_width> config2::pixels[] = {1,2,5,2,4,0};

// conv1d_relu
struct relu_config3 : nnet::activ_config {
    static const unsigned n_in = N_OUTPUTS_2*N_FILT_2;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 16;
    typedef ap_fixed<18,8> table_t;
};

// max_pooling1d
struct config4 : nnet::pooling1d_config {
    static const unsigned n_in = N_OUTPUTS_2;
    static const unsigned n_out = N_OUTPUTS_4;
    static const unsigned n_filt = N_FILT_4;
    static const unsigned pool_width = 2;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned stride_width = 2;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::encoded;
    static const unsigned reuse = 16;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_4;
    typedef ap_fixed<16,6> accum_t;
};

// conv1d_1
struct config5_mult : nnet::dense_config {
    static const unsigned n_in = 80;
    static const unsigned n_out = 32;
    static const unsigned reuse_factor = 16;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<16,6> accum_t;
    typedef conv1d_1_bias_t bias_t;
    typedef conv1d_1_weight_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config5 : nnet::conv1d_config {
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_width = 49;
    static const unsigned n_chan = N_FILT_4;
    static const unsigned filt_width = 5;
    static const unsigned kernel_size = filt_width;
    static const unsigned n_filt = N_FILT_5;
    static const unsigned stride_width = 2;
    static const unsigned dilation = 1;
    static const unsigned out_width = N_OUTPUTS_5;
    static const unsigned reuse_factor = 16;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::encoded;
    static const unsigned min_width = 9;
    static const ap_uint<filt_width> pixels[min_width];
    typedef ap_fixed<16,6> accum_t;
    typedef conv1d_1_bias_t bias_t;
    typedef conv1d_1_weight_t weight_t;
    typedef config5_mult mult_config;
};
const ap_uint<config5::filt_width> config5::pixels[] = {1,2,5,10,21,10,20,8,16};

// conv1d_1_relu
struct relu_config6 : nnet::activ_config {
    static const unsigned n_in = N_OUTPUTS_5*N_FILT_5;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 16;
    typedef ap_fixed<18,8> table_t;
};

// max_pooling1d_1
struct config7 : nnet::pooling1d_config {
    static const unsigned n_in = N_OUTPUTS_5;
    static const unsigned n_out = N_OUTPUTS_7;
    static const unsigned n_filt = N_FILT_7;
    static const unsigned pool_width = 2;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned stride_width = 2;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::encoded;
    static const unsigned reuse = 16;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_7;
    typedef ap_fixed<16,6> accum_t;
};

// conv1d_2
struct config8_mult : nnet::dense_config {
    static const unsigned n_in = 288;
    static const unsigned n_out = 64;
    static const unsigned reuse_factor = 16;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<16,6> accum_t;
    typedef conv1d_2_bias_t bias_t;
    typedef conv1d_2_weight_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config8 : nnet::conv1d_config {
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_width = 11;
    static const unsigned n_chan = N_FILT_7;
    static const unsigned filt_width = 9;
    static const unsigned kernel_size = filt_width;
    static const unsigned n_filt = N_FILT_8;
    static const unsigned stride_width = 1;
    static const unsigned dilation = 1;
    static const unsigned out_width = N_OUTPUTS_8;
    static const unsigned reuse_factor = 16;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::encoded;
    static const unsigned min_width = 17;
    static const ap_uint<filt_width> pixels[min_width];
    typedef ap_fixed<16,6> accum_t;
    typedef conv1d_2_bias_t bias_t;
    typedef conv1d_2_weight_t weight_t;
    typedef config8_mult mult_config;
};
const ap_uint<config8::filt_width> config8::pixels[] = {1,3,7,15,31,63,127,255,511,510,508,504,496,480,448,384,256};

// conv1d_2_relu
struct relu_config9 : nnet::activ_config {
    static const unsigned n_in = N_OUTPUTS_8*N_FILT_8;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 16;
    typedef ap_fixed<18,8> table_t;
};

// global_max_pooling1d
struct config10 : nnet::pooling1d_config {
    static const unsigned n_in = N_OUTPUTS_8;
    static const unsigned n_filt = N_FILT_8;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const unsigned reuse = 16;
    typedef ap_fixed<16,6> accum_t;
};

// wavrec_out
struct config12 : nnet::dense_config {
    static const unsigned n_in = N_SIZE_1_11;
    static const unsigned n_out = N_LAYER_12;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 16;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 64;
    static const bool store_weights_in_bram = false;
    typedef ap_fixed<16,6> accum_t;
    typedef wavrec_out_bias_t bias_t;
    typedef wavrec_out_weight_t weight_t;
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

// wavrec_out_sigmoid
struct sigmoid_config13 : nnet::activ_config {
    static const unsigned n_in = N_LAYER_12;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 16;
    typedef ap_fixed<18,8> table_t;
};


#endif
