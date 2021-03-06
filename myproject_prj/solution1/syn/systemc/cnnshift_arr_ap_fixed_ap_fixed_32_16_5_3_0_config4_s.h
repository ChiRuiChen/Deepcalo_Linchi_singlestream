// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s_HH_
#define _cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s_layebkb.h"

namespace ap_rtl {

struct cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s : public sc_module {
    // Port declarations 9
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<128> > data_V_read;
    sc_in< sc_lv<3200> > output_V_read;
    sc_out< sc_lv<3200> > ap_return;
    sc_signal< sc_lv<6> > ap_var_for_const0;


    // Module declarations
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s(sc_module_name name);
    SC_HAS_PROCESS(cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s);

    ~cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s();

    sc_trace_file* mVcdFile;

    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s_layebkb* layer_in_row_Array_V_3_0_0_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s_layebkb* layer_in_row_Array_V_3_1_0_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s_layebkb* layer_in_row_Array_V_3_2_0_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s_layebkb* layer_in_row_Array_V_3_3_0_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s_layebkb* layer_in_row_Array_V_3_0_1_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s_layebkb* layer_in_row_Array_V_3_1_1_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s_layebkb* layer_in_row_Array_V_3_2_1_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s_layebkb* layer_in_row_Array_V_3_3_1_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s_layebkb* layer_in_row_Array_V_3_0_2_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s_layebkb* layer_in_row_Array_V_3_1_2_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s_layebkb* layer_in_row_Array_V_3_2_2_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s_layebkb* layer_in_row_Array_V_3_3_2_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s_layebkb* layer_in_row_Array_V_3_0_3_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s_layebkb* layer_in_row_Array_V_3_1_3_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s_layebkb* layer_in_row_Array_V_3_2_3_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config4_s_layebkb* layer_in_row_Array_V_3_3_3_U;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_logic > layer_in_row_Array_V_3_0_0_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_0_0_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_3_0_0_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_1_0_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_1_0_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_3_1_0_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_2_0_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_2_0_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_3_2_0_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_3_0_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_3_0_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_3_3_0_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_0_1_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_0_1_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_3_0_1_d0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_3_0_1_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_1_1_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_1_1_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_3_1_1_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_2_1_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_2_1_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_3_2_1_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_3_1_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_3_1_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_3_3_1_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_0_2_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_0_2_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_3_0_2_d0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_3_0_2_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_1_2_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_1_2_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_3_1_2_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_2_2_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_2_2_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_3_2_2_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_3_2_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_3_2_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_3_3_2_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_0_3_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_0_3_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_3_0_3_d0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_3_0_3_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_1_3_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_1_3_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_3_1_3_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_2_3_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_2_3_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_3_2_3_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_3_3_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_3_3_3_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_3_3_3_q0;
    sc_signal< sc_lv<128> > data_V_read_2_reg_410;
    sc_signal< sc_lv<32> > DataOut_V_22_reg_415;
    sc_signal< sc_lv<32> > DataOut_V_23_reg_420;
    sc_signal< sc_lv<32> > DataOut_V_25_reg_426;
    sc_signal< sc_lv<32> > DataOut_V_26_reg_431;
    sc_signal< sc_lv<32> > DataOut_V_29_reg_437;
    sc_signal< sc_lv<32> > DataOut_V_30_reg_442;
    sc_signal< sc_lv<32> > DataOut_V_33_reg_448;
    sc_signal< sc_lv<32> > DataOut_V_34_reg_453;
    sc_signal< sc_lv<512> > tmp_reg_459;
    sc_signal< sc_lv<512> > tmp_4_reg_464;
    sc_signal< sc_lv<512> > tmp_5_reg_469;
    sc_signal< sc_lv<512> > tmp_6_reg_474;
    sc_signal< sc_lv<512> > tmp_7_reg_479;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_lv<32> > trunc_ln203_fu_136_p1;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0_0to0;
    sc_signal< sc_logic > ap_reset_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_pp0_stage0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<6> ap_const_lv6_3A;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_5F;
    static const sc_lv<32> ap_const_lv32_60;
    static const sc_lv<32> ap_const_lv32_7F;
    static const sc_lv<32> ap_const_lv32_A80;
    static const sc_lv<32> ap_const_lv32_C7F;
    static const sc_lv<32> ap_const_lv32_800;
    static const sc_lv<32> ap_const_lv32_9FF;
    static const sc_lv<32> ap_const_lv32_580;
    static const sc_lv<32> ap_const_lv32_77F;
    static const sc_lv<32> ap_const_lv32_300;
    static const sc_lv<32> ap_const_lv32_4FF;
    static const sc_lv<32> ap_const_lv32_80;
    static const sc_lv<32> ap_const_lv32_27F;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state2_pp0_stage0_iter1();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp0_0to0();
    void thread_ap_ready();
    void thread_ap_reset_idle_pp0();
    void thread_ap_return();
    void thread_layer_in_row_Array_V_3_0_0_ce0();
    void thread_layer_in_row_Array_V_3_0_0_we0();
    void thread_layer_in_row_Array_V_3_0_1_ce0();
    void thread_layer_in_row_Array_V_3_0_1_d0();
    void thread_layer_in_row_Array_V_3_0_1_we0();
    void thread_layer_in_row_Array_V_3_0_2_ce0();
    void thread_layer_in_row_Array_V_3_0_2_d0();
    void thread_layer_in_row_Array_V_3_0_2_we0();
    void thread_layer_in_row_Array_V_3_0_3_ce0();
    void thread_layer_in_row_Array_V_3_0_3_d0();
    void thread_layer_in_row_Array_V_3_0_3_we0();
    void thread_layer_in_row_Array_V_3_1_0_ce0();
    void thread_layer_in_row_Array_V_3_1_0_we0();
    void thread_layer_in_row_Array_V_3_1_1_ce0();
    void thread_layer_in_row_Array_V_3_1_1_we0();
    void thread_layer_in_row_Array_V_3_1_2_ce0();
    void thread_layer_in_row_Array_V_3_1_2_we0();
    void thread_layer_in_row_Array_V_3_1_3_ce0();
    void thread_layer_in_row_Array_V_3_1_3_we0();
    void thread_layer_in_row_Array_V_3_2_0_ce0();
    void thread_layer_in_row_Array_V_3_2_0_we0();
    void thread_layer_in_row_Array_V_3_2_1_ce0();
    void thread_layer_in_row_Array_V_3_2_1_we0();
    void thread_layer_in_row_Array_V_3_2_2_ce0();
    void thread_layer_in_row_Array_V_3_2_2_we0();
    void thread_layer_in_row_Array_V_3_2_3_ce0();
    void thread_layer_in_row_Array_V_3_2_3_we0();
    void thread_layer_in_row_Array_V_3_3_0_ce0();
    void thread_layer_in_row_Array_V_3_3_0_we0();
    void thread_layer_in_row_Array_V_3_3_1_ce0();
    void thread_layer_in_row_Array_V_3_3_1_we0();
    void thread_layer_in_row_Array_V_3_3_2_ce0();
    void thread_layer_in_row_Array_V_3_3_2_we0();
    void thread_layer_in_row_Array_V_3_3_3_ce0();
    void thread_layer_in_row_Array_V_3_3_3_we0();
    void thread_trunc_ln203_fu_136_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
