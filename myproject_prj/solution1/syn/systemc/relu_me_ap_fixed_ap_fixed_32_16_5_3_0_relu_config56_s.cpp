// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<1> relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::ap_ST_fsm_pp0_stage0 = "1";
const sc_lv<32> relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::ap_const_lv32_0 = "00000000000000000000000000000000";
const bool relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::ap_const_boolean_1 = true;
const bool relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::ap_const_boolean_0 = false;
const sc_lv<31> relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::ap_const_lv31_0 = "0000000000000000000000000000000";

relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_01001);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( data_V_V_empty_n );
    sensitive << ( res_V_V_full_n );

    SC_METHOD(thread_ap_block_pp0_stage0_11001);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( data_V_V_empty_n );
    sensitive << ( res_V_V_full_n );

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( data_V_V_empty_n );
    sensitive << ( res_V_V_full_n );

    SC_METHOD(thread_ap_block_state1_pp0_stage0_iter0);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( data_V_V_empty_n );

    SC_METHOD(thread_ap_block_state2_pp0_stage0_iter1);

    SC_METHOD(thread_ap_block_state3_pp0_stage0_iter2);
    sensitive << ( res_V_V_full_n );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_enable_reg_pp0_iter0);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_enable_reg_pp0_iter2 );

    SC_METHOD(thread_ap_idle_pp0_0to1);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_ap_reset_idle_pp0);
    sensitive << ( ap_start );
    sensitive << ( ap_idle_pp0_0to1 );

    SC_METHOD(thread_data_V_V_blk_n);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( data_V_V_empty_n );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_data_V_V_read);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_icmp_ln1494_fu_53_p2);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( tmp_V_reg_69 );

    SC_METHOD(thread_out_data_V_fu_58_p3);
    sensitive << ( trunc_ln1494_reg_74 );
    sensitive << ( icmp_ln1494_fu_53_p2 );

    SC_METHOD(thread_res_V_V_blk_n);
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( res_V_V_full_n );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_res_V_V_din);
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( out_data_V_reg_79 );
    sensitive << ( ap_block_pp0_stage0_01001 );

    SC_METHOD(thread_res_V_V_write);
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_trunc_ln1494_fu_49_p1);
    sensitive << ( data_V_V_dout );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_block_pp0_stage0_subdone );
    sensitive << ( ap_reset_idle_pp0 );

    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "1";
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter2 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, data_V_V_dout, "(port)data_V_V_dout");
    sc_trace(mVcdFile, data_V_V_empty_n, "(port)data_V_V_empty_n");
    sc_trace(mVcdFile, data_V_V_read, "(port)data_V_V_read");
    sc_trace(mVcdFile, res_V_V_din, "(port)res_V_V_din");
    sc_trace(mVcdFile, res_V_V_full_n, "(port)res_V_V_full_n");
    sc_trace(mVcdFile, res_V_V_write, "(port)res_V_V_write");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter2, "ap_enable_reg_pp0_iter2");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_block_state1_pp0_stage0_iter0, "ap_block_state1_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state2_pp0_stage0_iter1, "ap_block_state2_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage0_iter2, "ap_block_state3_pp0_stage0_iter2");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, data_V_V_blk_n, "data_V_V_blk_n");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, res_V_V_blk_n, "res_V_V_blk_n");
    sc_trace(mVcdFile, tmp_V_reg_69, "tmp_V_reg_69");
    sc_trace(mVcdFile, trunc_ln1494_fu_49_p1, "trunc_ln1494_fu_49_p1");
    sc_trace(mVcdFile, trunc_ln1494_reg_74, "trunc_ln1494_reg_74");
    sc_trace(mVcdFile, out_data_V_fu_58_p3, "out_data_V_fu_58_p3");
    sc_trace(mVcdFile, out_data_V_reg_79, "out_data_V_reg_79");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, ap_block_pp0_stage0_01001, "ap_block_pp0_stage0_01001");
    sc_trace(mVcdFile, icmp_ln1494_fu_53_p2, "icmp_ln1494_fu_53_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_idle_pp0_0to1, "ap_idle_pp0_0to1");
    sc_trace(mVcdFile, ap_reset_idle_pp0, "ap_reset_idle_pp0");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
#endif

    }
}

relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::~relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_pp0_stage0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_start.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        out_data_V_reg_79 = out_data_V_fu_58_p3.read();
        tmp_V_reg_69 = data_V_V_dout.read();
        trunc_ln1494_reg_74 = trunc_ln1494_fu_49_p1.read();
    }
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[0];
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = (esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
  (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, data_V_V_empty_n.read()) || 
   esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || (esl_seteq<1,1,1>(ap_const_logic_0, res_V_V_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())));
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
  (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, data_V_V_empty_n.read()) || 
   esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || (esl_seteq<1,1,1>(ap_const_logic_0, res_V_V_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())));
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
  (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, data_V_V_empty_n.read()) || 
   esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || (esl_seteq<1,1,1>(ap_const_logic_0, res_V_V_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())));
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_ap_block_state2_pp0_stage0_iter1() {
    ap_block_state2_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_ap_block_state3_pp0_stage0_iter2() {
    ap_block_state3_pp0_stage0_iter2 = esl_seteq<1,1,1>(ap_const_logic_0, res_V_V_full_n.read());
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_ap_enable_reg_pp0_iter0() {
    ap_enable_reg_pp0_iter0 = ap_start.read();
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_ap_idle_pp0_0to1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0_0to1 = ap_const_logic_1;
    } else {
        ap_idle_pp0_0to1 = ap_const_logic_0;
    }
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_ap_reset_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_0to1.read()))) {
        ap_reset_idle_pp0 = ap_const_logic_1;
    } else {
        ap_reset_idle_pp0 = ap_const_logic_0;
    }
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_data_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_V_V_blk_n = data_V_V_empty_n.read();
    } else {
        data_V_V_blk_n = ap_const_logic_1;
    }
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_data_V_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_V_read = ap_const_logic_1;
    } else {
        data_V_V_read = ap_const_logic_0;
    }
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_icmp_ln1494_fu_53_p2() {
    icmp_ln1494_fu_53_p2 = (!tmp_V_reg_69.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(tmp_V_reg_69.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_out_data_V_fu_58_p3() {
    out_data_V_fu_58_p3 = (!icmp_ln1494_fu_53_p2.read()[0].is_01())? sc_lv<31>(): ((icmp_ln1494_fu_53_p2.read()[0].to_bool())? trunc_ln1494_reg_74.read(): ap_const_lv31_0);
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_res_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_V_V_blk_n = res_V_V_full_n.read();
    } else {
        res_V_V_blk_n = ap_const_logic_1;
    }
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_res_V_V_din() {
    res_V_V_din = esl_zext<32,31>(out_data_V_reg_79.read());
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_res_V_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_V_write = ap_const_logic_1;
    } else {
        res_V_V_write = ap_const_logic_0;
    }
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_trunc_ln1494_fu_49_p1() {
    trunc_ln1494_fu_49_p1 = data_V_V_dout.read().range(31-1, 0);
}

void relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
break;
        default : 
            ap_NS_fsm = "X";
            break;
    }
}

}

