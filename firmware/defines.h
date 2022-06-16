#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

//hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 56
#define N_INPUT_2_1 11
#define N_INPUT_3_1 4
#define OUT_HEIGHT_2 56
#define OUT_WIDTH_2 55
#define N_CHAN_2 4
#define OUT_HEIGHT_57 60
#define OUT_WIDTH_57 59
#define N_CHAN_57 4
#define OUT_HEIGHT_4 56
#define OUT_WIDTH_4 55
#define N_FILT_4 8
#define OUT_HEIGHT_8 28
#define OUT_WIDTH_8 27
#define N_FILT_8 8
#define OUT_HEIGHT_58 30
#define OUT_WIDTH_58 29
#define N_CHAN_58 8
#define OUT_HEIGHT_9 28
#define OUT_WIDTH_9 27
#define N_FILT_9 8
#define OUT_HEIGHT_59 30
#define OUT_WIDTH_59 29
#define N_CHAN_59 8
#define OUT_HEIGHT_13 28
#define OUT_WIDTH_13 27
#define N_FILT_13 8
#define OUT_HEIGHT_17 14
#define OUT_WIDTH_17 13
#define N_FILT_17 8
#define OUT_HEIGHT_60 16
#define OUT_WIDTH_60 15
#define N_CHAN_60 8
#define OUT_HEIGHT_18 14
#define OUT_WIDTH_18 13
#define N_FILT_18 8
#define OUT_HEIGHT_61 16
#define OUT_WIDTH_61 15
#define N_CHAN_61 8
#define OUT_HEIGHT_22 14
#define OUT_WIDTH_22 13
#define N_FILT_22 8
#define OUT_HEIGHT_26 7
#define OUT_WIDTH_26 6
#define N_FILT_26 8
#define OUT_HEIGHT_62 9
#define OUT_WIDTH_62 8
#define N_CHAN_62 8
#define OUT_HEIGHT_27 7
#define OUT_WIDTH_27 6
#define N_FILT_27 8
#define OUT_HEIGHT_63 9
#define OUT_WIDTH_63 8
#define N_CHAN_63 8
#define OUT_HEIGHT_31 7
#define OUT_WIDTH_31 6
#define N_FILT_31 8
#define OUT_HEIGHT_35 3
#define OUT_WIDTH_35 3
#define N_FILT_35 8
#define OUT_HEIGHT_64 5
#define OUT_WIDTH_64 5
#define N_CHAN_64 8
#define OUT_HEIGHT_36 3
#define OUT_WIDTH_36 3
#define N_FILT_36 8
#define OUT_HEIGHT_65 5
#define OUT_WIDTH_65 5
#define N_CHAN_65 8
#define OUT_HEIGHT_40 3
#define OUT_WIDTH_40 3
#define N_FILT_40 8
#define OUT_HEIGHT_44 1
#define OUT_WIDTH_44 1
#define N_FILT_44 8
#define N_SIZE_1_45 8
#define N_LAYER_46 32
#define N_LAYER_50 32
#define N_LAYER_54 1

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<32,16> model_default_t;
typedef ap_fixed<32,16> input_t;
typedef ap_fixed<32,16> layer2_t;
typedef ap_fixed<32,16> layer3_t;
typedef ap_fixed<32,16> layer57_t;
typedef ap_fixed<32,16> layer4_t;
typedef ap_fixed<32,16> bias4_t;
typedef ap_fixed<32,16> layer7_t;
typedef ap_fixed<32,16> layer8_t;
typedef ap_fixed<32,16> layer58_t;
typedef ap_fixed<32,16> layer9_t;
typedef ap_fixed<32,16> bias9_t;
typedef ap_fixed<32,16> layer12_t;
typedef ap_fixed<32,16> layer59_t;
typedef ap_fixed<32,16> layer13_t;
typedef ap_fixed<32,16> bias13_t;
typedef ap_fixed<32,16> layer16_t;
typedef ap_fixed<32,16> layer17_t;
typedef ap_fixed<32,16> layer60_t;
typedef ap_fixed<32,16> layer18_t;
typedef ap_fixed<32,16> bias18_t;
typedef ap_fixed<32,16> layer21_t;
typedef ap_fixed<32,16> layer61_t;
typedef ap_fixed<32,16> layer22_t;
typedef ap_fixed<32,16> bias22_t;
typedef ap_fixed<32,16> layer25_t;
typedef ap_fixed<32,16> layer26_t;
typedef ap_fixed<32,16> layer62_t;
typedef ap_fixed<32,16> layer27_t;
typedef ap_fixed<32,16> bias27_t;
typedef ap_fixed<32,16> layer30_t;
typedef ap_fixed<32,16> layer63_t;
typedef ap_fixed<32,16> layer31_t;
typedef ap_fixed<32,16> bias31_t;
typedef ap_fixed<32,16> layer34_t;
typedef ap_fixed<32,16> layer35_t;
typedef ap_fixed<32,16> layer64_t;
typedef ap_fixed<32,16> layer36_t;
typedef ap_fixed<32,16> bias36_t;
typedef ap_fixed<32,16> layer39_t;
typedef ap_fixed<32,16> layer65_t;
typedef ap_fixed<32,16> layer40_t;
typedef ap_fixed<32,16> bias40_t;
typedef ap_fixed<32,16> layer43_t;
typedef ap_fixed<32,16> layer44_t;
typedef ap_fixed<32,16> layer46_t;
typedef ap_fixed<32,16> bias46_t;
typedef ap_fixed<32,16> layer49_t;
typedef ap_fixed<32,16> layer50_t;
typedef ap_fixed<32,16> bias50_t;
typedef ap_fixed<32,16> layer53_t;
typedef ap_fixed<32,16> layer54_t;
typedef ap_fixed<32,16> result_t;

#endif