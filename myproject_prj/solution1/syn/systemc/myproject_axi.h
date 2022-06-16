// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _myproject_axi_HH_
#define _myproject_axi_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "Loop_1_proc681.h"
#include "myproject.h"
#include "Block_myproject_axi_exit210_proc.h"
#include "fifo_w32_d2464_A.h"
#include "fifo_w1_d3_A.h"
#include "fifo_w32_d1_A_x.h"
#include "start_for_myproject_U0.h"
#include "start_for_Block_myproject_axi_exit210_proc_U0.h"

namespace ap_rtl {

struct myproject_axi : public sc_module {
    // Port declarations 10
    sc_in< sc_lv<32> > in_r_TDATA;
    sc_in< sc_lv<1> > in_r_TLAST;
    sc_out< sc_lv<32> > out_r_TDATA;
    sc_out< sc_lv<1> > out_r_TLAST;
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > in_r_TVALID;
    sc_out< sc_logic > in_r_TREADY;
    sc_out< sc_logic > out_r_TVALID;
    sc_in< sc_logic > out_r_TREADY;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    myproject_axi(sc_module_name name);
    SC_HAS_PROCESS(myproject_axi);

    ~myproject_axi();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    Loop_1_proc681* Loop_1_proc681_U0;
    myproject* myproject_U0;
    Block_myproject_axi_exit210_proc* Block_myproject_axi_exit210_proc_U0;
    fifo_w32_d2464_A* in_local_V_V_U;
    fifo_w1_d3_A* is_last_0_loc_0_i_loc_c_U;
    fifo_w32_d1_A_x* out_local_V_V_U;
    start_for_myproject_U0* start_for_myproject_U0_U;
    start_for_Block_myproject_axi_exit210_proc_U0* start_for_Block_myproject_axi_exit210_proc_U0_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > Loop_1_proc681_U0_ap_start;
    sc_signal< sc_logic > Loop_1_proc681_U0_start_full_n;
    sc_signal< sc_logic > Loop_1_proc681_U0_ap_done;
    sc_signal< sc_logic > Loop_1_proc681_U0_ap_continue;
    sc_signal< sc_logic > Loop_1_proc681_U0_ap_idle;
    sc_signal< sc_logic > Loop_1_proc681_U0_ap_ready;
    sc_signal< sc_logic > Loop_1_proc681_U0_start_out;
    sc_signal< sc_logic > Loop_1_proc681_U0_start_write;
    sc_signal< sc_logic > Loop_1_proc681_U0_in_r_TREADY;
    sc_signal< sc_lv<32> > Loop_1_proc681_U0_in_local_V_V_din;
    sc_signal< sc_logic > Loop_1_proc681_U0_in_local_V_V_write;
    sc_signal< sc_lv<1> > Loop_1_proc681_U0_is_last_0_loc_0_i_out_out_din;
    sc_signal< sc_logic > Loop_1_proc681_U0_is_last_0_loc_0_i_out_out_write;
    sc_signal< sc_logic > myproject_U0_em_barrel_V_V_read;
    sc_signal< sc_lv<32> > myproject_U0_layer56_out_V_V_din;
    sc_signal< sc_logic > myproject_U0_layer56_out_V_V_write;
    sc_signal< sc_logic > myproject_U0_ap_start;
    sc_signal< sc_logic > myproject_U0_ap_done;
    sc_signal< sc_logic > myproject_U0_ap_ready;
    sc_signal< sc_logic > myproject_U0_ap_idle;
    sc_signal< sc_logic > myproject_U0_ap_continue;
    sc_signal< sc_logic > Block_myproject_axi_exit210_proc_U0_ap_start;
    sc_signal< sc_logic > Block_myproject_axi_exit210_proc_U0_ap_done;
    sc_signal< sc_logic > Block_myproject_axi_exit210_proc_U0_ap_continue;
    sc_signal< sc_logic > Block_myproject_axi_exit210_proc_U0_ap_idle;
    sc_signal< sc_logic > Block_myproject_axi_exit210_proc_U0_ap_ready;
    sc_signal< sc_logic > Block_myproject_axi_exit210_proc_U0_out_local_V_V_read;
    sc_signal< sc_lv<32> > Block_myproject_axi_exit210_proc_U0_out_r_TDATA;
    sc_signal< sc_logic > Block_myproject_axi_exit210_proc_U0_out_r_TVALID;
    sc_signal< sc_lv<1> > Block_myproject_axi_exit210_proc_U0_out_r_TLAST;
    sc_signal< sc_logic > Block_myproject_axi_exit210_proc_U0_is_last_0_loc_0_i_loc_read;
    sc_signal< sc_logic > ap_sync_continue;
    sc_signal< sc_logic > in_local_V_V_full_n;
    sc_signal< sc_lv<32> > in_local_V_V_dout;
    sc_signal< sc_logic > in_local_V_V_empty_n;
    sc_signal< sc_logic > is_last_0_loc_0_i_loc_c_full_n;
    sc_signal< sc_lv<1> > is_last_0_loc_0_i_loc_c_dout;
    sc_signal< sc_logic > is_last_0_loc_0_i_loc_c_empty_n;
    sc_signal< sc_logic > out_local_V_V_full_n;
    sc_signal< sc_lv<32> > out_local_V_V_dout;
    sc_signal< sc_logic > out_local_V_V_empty_n;
    sc_signal< sc_lv<1> > start_for_myproject_U0_din;
    sc_signal< sc_logic > start_for_myproject_U0_full_n;
    sc_signal< sc_lv<1> > start_for_myproject_U0_dout;
    sc_signal< sc_logic > start_for_myproject_U0_empty_n;
    sc_signal< sc_lv<1> > start_for_Block_myproject_axi_exit210_proc_U0_din;
    sc_signal< sc_logic > start_for_Block_myproject_axi_exit210_proc_U0_full_n;
    sc_signal< sc_lv<1> > start_for_Block_myproject_axi_exit210_proc_U0_dout;
    sc_signal< sc_logic > start_for_Block_myproject_axi_exit210_proc_U0_empty_n;
    sc_signal< sc_logic > myproject_U0_start_full_n;
    sc_signal< sc_logic > myproject_U0_start_write;
    sc_signal< sc_logic > Block_myproject_axi_exit210_proc_U0_start_full_n;
    sc_signal< sc_logic > Block_myproject_axi_exit210_proc_U0_start_write;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_Block_myproject_axi_exit210_proc_U0_ap_continue();
    void thread_Block_myproject_axi_exit210_proc_U0_ap_start();
    void thread_Block_myproject_axi_exit210_proc_U0_start_full_n();
    void thread_Block_myproject_axi_exit210_proc_U0_start_write();
    void thread_Loop_1_proc681_U0_ap_continue();
    void thread_Loop_1_proc681_U0_ap_start();
    void thread_Loop_1_proc681_U0_start_full_n();
    void thread_ap_rst_n_inv();
    void thread_ap_sync_continue();
    void thread_in_r_TREADY();
    void thread_myproject_U0_ap_continue();
    void thread_myproject_U0_ap_start();
    void thread_myproject_U0_start_full_n();
    void thread_myproject_U0_start_write();
    void thread_out_r_TDATA();
    void thread_out_r_TLAST();
    void thread_out_r_TVALID();
    void thread_start_for_Block_myproject_axi_exit210_proc_U0_din();
    void thread_start_for_myproject_U0_din();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
