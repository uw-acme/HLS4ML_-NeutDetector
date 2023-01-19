#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

//hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 200
#define N_INPUT_2_1 1
#define N_OUTPUTS_2 99
#define N_FILT_2 16
#define N_OUTPUTS_4 49
#define N_FILT_4 16
#define N_OUTPUTS_5 23
#define N_FILT_5 32
#define N_OUTPUTS_7 11
#define N_FILT_7 32
#define N_OUTPUTS_8 3
#define N_FILT_8 64
#define N_FILT_10 64
#define N_SIZE_1_11 64
#define N_LAYER_12 1

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<16,6> model_default_t;
typedef ap_fixed<16,6> input_t;
typedef ap_fixed<16,6> layer2_t;
typedef ap_fixed<16,6> conv1d_weight_t;
typedef ap_fixed<16,6> conv1d_bias_t;
typedef ap_fixed<16,6> conv1d_relu_default_t;
typedef ap_fixed<16,6> layer3_t;
typedef ap_fixed<16,6> max_pooling1d_default_t;
typedef ap_fixed<16,6> layer4_t;
typedef ap_fixed<16,6> layer5_t;
typedef ap_fixed<16,6> conv1d_1_weight_t;
typedef ap_fixed<16,6> conv1d_1_bias_t;
typedef ap_fixed<16,6> conv1d_1_relu_default_t;
typedef ap_fixed<16,6> layer6_t;
typedef ap_fixed<16,6> max_pooling1d_1_default_t;
typedef ap_fixed<16,6> layer7_t;
typedef ap_fixed<16,6> layer8_t;
typedef ap_fixed<16,6> conv1d_2_weight_t;
typedef ap_fixed<16,6> conv1d_2_bias_t;
typedef ap_fixed<16,6> conv1d_2_relu_default_t;
typedef ap_fixed<16,6> layer9_t;
typedef ap_fixed<16,6> global_max_pooling1d_default_t;
typedef ap_fixed<16,6> layer10_t;
typedef ap_fixed<16,6> layer12_t;
typedef ap_fixed<16,6> wavrec_out_weight_t;
typedef ap_fixed<16,6> wavrec_out_bias_t;
typedef ap_fixed<16,6> wavrec_out_sigmoid_default_t;
typedef ap_fixed<16,6> result_t;

#endif
