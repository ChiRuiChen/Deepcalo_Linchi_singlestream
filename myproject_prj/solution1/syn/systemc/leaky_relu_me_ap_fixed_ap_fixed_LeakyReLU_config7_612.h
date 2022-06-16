// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config7_612_HH_
#define _leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config7_612_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "myproject_axi_mul_32s_16ns_48_5_1.h"

namespace ap_rtl {

struct leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config7_612 : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_in< sc_logic > start_full_n;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > start_out;
    sc_out< sc_logic > start_write;
    sc_in< sc_lv<32> > data_V_V_dout;
    sc_in< sc_logic > data_V_V_empty_n;
    sc_out< sc_logic > data_V_V_read;
    sc_out< sc_lv<32> > res_V_V_din;
    sc_in< sc_logic > res_V_V_full_n;
    sc_out< sc_logic > res_V_V_write;


    // Module declarations
    leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config7_612(sc_module_name name);
    SC_HAS_PROCESS(leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config7_612);

    ~leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config7_612();

    sc_trace_file* mVcdFile;

    myproject_axi_mul_32s_16ns_48_5_1<1,5,32,16,48>* myproject_axi_mul_32s_16ns_48_5_1_U25;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > data_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln514_reg_118;
    sc_signal< sc_logic > res_V_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< sc_lv<1> > icmp_ln514_reg_118_pp0_iter6_reg;
    sc_signal< sc_lv<15> > i_0_reg_65;
    sc_signal< sc_lv<1> > icmp_ln514_fu_76_p2;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter7;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln514_reg_118_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln514_reg_118_pp0_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln514_reg_118_pp0_iter3_reg;
    sc_signal< sc_lv<1> > icmp_ln514_reg_118_pp0_iter4_reg;
    sc_signal< sc_lv<1> > icmp_ln514_reg_118_pp0_iter5_reg;
    sc_signal< sc_lv<15> > i_fu_82_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<32> > tmp_V_reg_127;
    sc_signal< sc_lv<32> > tmp_V_reg_127_pp0_iter2_reg;
    sc_signal< sc_lv<32> > tmp_V_reg_127_pp0_iter3_reg;
    sc_signal< sc_lv<32> > tmp_V_reg_127_pp0_iter4_reg;
    sc_signal< sc_lv<32> > tmp_V_reg_127_pp0_iter5_reg;
    sc_signal< sc_lv<32> > tmp_V_reg_127_pp0_iter6_reg;
    sc_signal< sc_lv<1> > icmp_ln1494_fu_97_p2;
    sc_signal< sc_lv<1> > icmp_ln1494_reg_139;
    sc_signal< sc_lv<32> > trunc_ln_reg_144;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<16> > grp_fu_91_p1;
    sc_signal< sc_lv<48> > grp_fu_91_p2;
    sc_signal< sc_logic > grp_fu_91_ce;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state10;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<15> ap_const_lv15_0;
    static const sc_lv<15> ap_const_lv15_6040;
    static const sc_lv<15> ap_const_lv15_1;
    static const sc_lv<48> ap_const_lv48_4CCC;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_block_state5_pp0_stage0_iter3();
    void thread_ap_block_state6_pp0_stage0_iter4();
    void thread_ap_block_state7_pp0_stage0_iter5();
    void thread_ap_block_state8_pp0_stage0_iter6();
    void thread_ap_block_state9_pp0_stage0_iter7();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_data_V_V_blk_n();
    void thread_data_V_V_read();
    void thread_grp_fu_91_ce();
    void thread_grp_fu_91_p1();
    void thread_i_fu_82_p2();
    void thread_icmp_ln1494_fu_97_p2();
    void thread_icmp_ln514_fu_76_p2();
    void thread_internal_ap_ready();
    void thread_real_start();
    void thread_res_V_V_blk_n();
    void thread_res_V_V_din();
    void thread_res_V_V_write();
    void thread_start_out();
    void thread_start_write();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif