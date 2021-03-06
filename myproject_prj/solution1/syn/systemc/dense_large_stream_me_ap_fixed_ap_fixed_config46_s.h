// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dense_large_stream_me_ap_fixed_ap_fixed_config46_s_HH_
#define _dense_large_stream_me_ap_fixed_ap_fixed_config46_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s.h"

namespace ap_rtl {

struct dense_large_stream_me_ap_fixed_ap_fixed_config46_s : public sc_module {
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
    dense_large_stream_me_ap_fixed_ap_fixed_config46_s(sc_module_name name);
    SC_HAS_PROCESS(dense_large_stream_me_ap_fixed_ap_fixed_config46_s);

    ~dense_large_stream_me_ap_fixed_ap_fixed_config46_s();

    sc_trace_file* mVcdFile;

    dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s* grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<34> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > data_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_logic > ap_CS_fsm_state34;
    sc_signal< sc_logic > res_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_lv<32> > tmp_V_reg_167;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_ready;
    sc_signal< sc_logic > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_done;
    sc_signal< sc_lv<32> > tmp_V_32_reg_172;
    sc_signal< sc_lv<32> > tmp_V_33_reg_177;
    sc_signal< sc_lv<32> > tmp_V_34_reg_182;
    sc_signal< sc_lv<32> > tmp_V_35_reg_187;
    sc_signal< sc_lv<32> > tmp_V_36_reg_192;
    sc_signal< sc_lv<32> > tmp_V_37_reg_197;
    sc_signal< sc_lv<32> > tmp_V_38_reg_202;
    sc_signal< sc_lv<32> > tmp_V_39_reg_207;
    sc_signal< sc_lv<32> > tmp_V_40_reg_212;
    sc_signal< sc_lv<32> > tmp_V_41_reg_217;
    sc_signal< sc_lv<32> > tmp_V_42_reg_222;
    sc_signal< sc_lv<32> > tmp_V_43_reg_227;
    sc_signal< sc_lv<32> > tmp_V_44_reg_232;
    sc_signal< sc_lv<32> > tmp_V_45_reg_237;
    sc_signal< sc_lv<32> > tmp_V_46_reg_242;
    sc_signal< sc_lv<32> > tmp_V_47_reg_247;
    sc_signal< sc_lv<32> > tmp_V_48_reg_252;
    sc_signal< sc_lv<32> > tmp_V_49_reg_257;
    sc_signal< sc_lv<32> > tmp_V_50_reg_262;
    sc_signal< sc_lv<32> > tmp_V_51_reg_267;
    sc_signal< sc_lv<32> > tmp_V_52_reg_272;
    sc_signal< sc_lv<32> > tmp_V_53_reg_277;
    sc_signal< sc_lv<32> > tmp_V_54_reg_282;
    sc_signal< sc_lv<32> > tmp_V_55_reg_287;
    sc_signal< sc_lv<32> > tmp_V_56_reg_292;
    sc_signal< sc_lv<32> > tmp_V_57_reg_297;
    sc_signal< sc_lv<32> > tmp_V_58_reg_302;
    sc_signal< sc_lv<32> > tmp_V_59_reg_307;
    sc_signal< sc_lv<32> > tmp_V_60_reg_312;
    sc_signal< sc_lv<32> > tmp_V_61_reg_317;
    sc_signal< sc_lv<32> > tmp_V_62_reg_322;
    sc_signal< sc_logic > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_start;
    sc_signal< sc_logic > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_idle;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_0;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_1;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_2;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_3;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_4;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_5;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_6;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_7;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_8;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_9;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_10;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_11;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_12;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_13;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_14;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_15;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_16;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_17;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_18;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_19;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_20;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_21;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_22;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_23;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_24;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_25;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_26;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_27;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_28;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_29;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_30;
    sc_signal< sc_lv<32> > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_return_31;
    sc_signal< sc_logic > grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_start_reg;
    sc_signal< bool > ap_block_state1_ignore_call10;
    sc_signal< bool > ap_block_state27;
    sc_signal< bool > ap_block_state28;
    sc_signal< bool > ap_block_state29;
    sc_signal< bool > ap_block_state30;
    sc_signal< bool > ap_block_state31;
    sc_signal< bool > ap_block_state32;
    sc_signal< bool > ap_block_state33;
    sc_signal< bool > ap_block_state34;
    sc_signal< sc_lv<34> > ap_NS_fsm;
    sc_signal< bool > ap_block_state1;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<34> ap_ST_fsm_state1;
    static const sc_lv<34> ap_ST_fsm_state2;
    static const sc_lv<34> ap_ST_fsm_state3;
    static const sc_lv<34> ap_ST_fsm_state4;
    static const sc_lv<34> ap_ST_fsm_state5;
    static const sc_lv<34> ap_ST_fsm_state6;
    static const sc_lv<34> ap_ST_fsm_state7;
    static const sc_lv<34> ap_ST_fsm_state8;
    static const sc_lv<34> ap_ST_fsm_state9;
    static const sc_lv<34> ap_ST_fsm_state10;
    static const sc_lv<34> ap_ST_fsm_state11;
    static const sc_lv<34> ap_ST_fsm_state12;
    static const sc_lv<34> ap_ST_fsm_state13;
    static const sc_lv<34> ap_ST_fsm_state14;
    static const sc_lv<34> ap_ST_fsm_state15;
    static const sc_lv<34> ap_ST_fsm_state16;
    static const sc_lv<34> ap_ST_fsm_state17;
    static const sc_lv<34> ap_ST_fsm_state18;
    static const sc_lv<34> ap_ST_fsm_state19;
    static const sc_lv<34> ap_ST_fsm_state20;
    static const sc_lv<34> ap_ST_fsm_state21;
    static const sc_lv<34> ap_ST_fsm_state22;
    static const sc_lv<34> ap_ST_fsm_state23;
    static const sc_lv<34> ap_ST_fsm_state24;
    static const sc_lv<34> ap_ST_fsm_state25;
    static const sc_lv<34> ap_ST_fsm_state26;
    static const sc_lv<34> ap_ST_fsm_state27;
    static const sc_lv<34> ap_ST_fsm_state28;
    static const sc_lv<34> ap_ST_fsm_state29;
    static const sc_lv<34> ap_ST_fsm_state30;
    static const sc_lv<34> ap_ST_fsm_state31;
    static const sc_lv<34> ap_ST_fsm_state32;
    static const sc_lv<34> ap_ST_fsm_state33;
    static const sc_lv<34> ap_ST_fsm_state34;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state29();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state30();
    void thread_ap_CS_fsm_state31();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state34();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_state1();
    void thread_ap_block_state1_ignore_call10();
    void thread_ap_block_state27();
    void thread_ap_block_state28();
    void thread_ap_block_state29();
    void thread_ap_block_state30();
    void thread_ap_block_state31();
    void thread_ap_block_state32();
    void thread_ap_block_state33();
    void thread_ap_block_state34();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_data_V_V_blk_n();
    void thread_data_V_V_read();
    void thread_grp_dense_large_ap_fixed_ap_fixed_32_16_5_3_0_config46_s_fu_35_ap_start();
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
