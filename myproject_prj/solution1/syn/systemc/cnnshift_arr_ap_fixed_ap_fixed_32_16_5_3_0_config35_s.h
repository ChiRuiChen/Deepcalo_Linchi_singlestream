// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config35_s_HH_
#define _cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config35_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config35_s_laycnw.h"

namespace ap_rtl {

struct cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config35_s : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > data_0_V_read;
    sc_in< sc_lv<32> > data_1_V_read;
    sc_in< sc_lv<32> > data_2_V_read;
    sc_in< sc_lv<32> > data_3_V_read;
    sc_in< sc_lv<32> > data_4_V_read;
    sc_in< sc_lv<32> > data_5_V_read;
    sc_in< sc_lv<32> > data_6_V_read;
    sc_in< sc_lv<32> > data_7_V_read;
    sc_in< sc_lv<1024> > output_V_read;
    sc_out< sc_lv<1024> > ap_return;
    sc_signal< sc_lv<3> > ap_var_for_const0;


    // Module declarations
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config35_s(sc_module_name name);
    SC_HAS_PROCESS(cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config35_s);

    ~cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config35_s();

    sc_trace_file* mVcdFile;

    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config35_s_laycnw* layer_in_row_Array_V_7_0_0_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config35_s_laycnw* layer_in_row_Array_V_7_0_1_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config35_s_laycnw* layer_in_row_Array_V_7_0_2_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config35_s_laycnw* layer_in_row_Array_V_7_0_3_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config35_s_laycnw* layer_in_row_Array_V_7_0_4_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config35_s_laycnw* layer_in_row_Array_V_7_0_5_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config35_s_laycnw* layer_in_row_Array_V_7_0_6_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config35_s_laycnw* layer_in_row_Array_V_7_0_7_U;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > layer_in_row_Array_V_7_0_0_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_7_0_0_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_7_0_0_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_7_0_1_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_7_0_1_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_7_0_1_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_7_0_2_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_7_0_2_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_7_0_2_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_7_0_3_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_7_0_3_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_7_0_3_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_7_0_4_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_7_0_4_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_7_0_4_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_7_0_5_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_7_0_5_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_7_0_5_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_7_0_6_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_7_0_6_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_7_0_6_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_7_0_7_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_7_0_7_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_7_0_7_q0;
    sc_signal< sc_lv<256> > tmp_fu_214_p4;
    sc_signal< sc_lv<256> > tmp_s_fu_224_p4;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_state1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<32> ap_const_lv32_300;
    static const sc_lv<32> ap_const_lv32_3FF;
    static const sc_lv<32> ap_const_lv32_100;
    static const sc_lv<32> ap_const_lv32_1FF;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_layer_in_row_Array_V_7_0_0_ce0();
    void thread_layer_in_row_Array_V_7_0_0_we0();
    void thread_layer_in_row_Array_V_7_0_1_ce0();
    void thread_layer_in_row_Array_V_7_0_1_we0();
    void thread_layer_in_row_Array_V_7_0_2_ce0();
    void thread_layer_in_row_Array_V_7_0_2_we0();
    void thread_layer_in_row_Array_V_7_0_3_ce0();
    void thread_layer_in_row_Array_V_7_0_3_we0();
    void thread_layer_in_row_Array_V_7_0_4_ce0();
    void thread_layer_in_row_Array_V_7_0_4_we0();
    void thread_layer_in_row_Array_V_7_0_5_ce0();
    void thread_layer_in_row_Array_V_7_0_5_we0();
    void thread_layer_in_row_Array_V_7_0_6_ce0();
    void thread_layer_in_row_Array_V_7_0_6_we0();
    void thread_layer_in_row_Array_V_7_0_7_ce0();
    void thread_layer_in_row_Array_V_7_0_7_we0();
    void thread_tmp_fu_214_p4();
    void thread_tmp_s_fu_224_p4();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
