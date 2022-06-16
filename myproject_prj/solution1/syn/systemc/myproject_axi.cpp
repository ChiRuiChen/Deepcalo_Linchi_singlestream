// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "myproject_axi.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_lv<32> myproject_axi::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> myproject_axi::ap_const_lv1_0 = "0";
const sc_logic myproject_axi::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic myproject_axi::ap_const_logic_0 = sc_dt::Log_0;

myproject_axi::myproject_axi(sc_module_name name) : sc_module(name), mVcdFile(0) {
    Loop_1_proc681_U0 = new Loop_1_proc681("Loop_1_proc681_U0");
    Loop_1_proc681_U0->ap_clk(ap_clk);
    Loop_1_proc681_U0->ap_rst(ap_rst_n_inv);
    Loop_1_proc681_U0->ap_start(Loop_1_proc681_U0_ap_start);
    Loop_1_proc681_U0->start_full_n(Loop_1_proc681_U0_start_full_n);
    Loop_1_proc681_U0->ap_done(Loop_1_proc681_U0_ap_done);
    Loop_1_proc681_U0->ap_continue(Loop_1_proc681_U0_ap_continue);
    Loop_1_proc681_U0->ap_idle(Loop_1_proc681_U0_ap_idle);
    Loop_1_proc681_U0->ap_ready(Loop_1_proc681_U0_ap_ready);
    Loop_1_proc681_U0->start_out(Loop_1_proc681_U0_start_out);
    Loop_1_proc681_U0->start_write(Loop_1_proc681_U0_start_write);
    Loop_1_proc681_U0->in_r_TLAST(in_r_TLAST);
    Loop_1_proc681_U0->in_r_TVALID(in_r_TVALID);
    Loop_1_proc681_U0->in_r_TREADY(Loop_1_proc681_U0_in_r_TREADY);
    Loop_1_proc681_U0->in_local_V_V_din(Loop_1_proc681_U0_in_local_V_V_din);
    Loop_1_proc681_U0->in_local_V_V_full_n(in_local_V_V_full_n);
    Loop_1_proc681_U0->in_local_V_V_write(Loop_1_proc681_U0_in_local_V_V_write);
    Loop_1_proc681_U0->in_r_TDATA(in_r_TDATA);
    Loop_1_proc681_U0->is_last_0_loc_0_i_out_out_din(Loop_1_proc681_U0_is_last_0_loc_0_i_out_out_din);
    Loop_1_proc681_U0->is_last_0_loc_0_i_out_out_full_n(is_last_0_loc_0_i_loc_c_full_n);
    Loop_1_proc681_U0->is_last_0_loc_0_i_out_out_write(Loop_1_proc681_U0_is_last_0_loc_0_i_out_out_write);
    myproject_U0 = new myproject("myproject_U0");
    myproject_U0->em_barrel_V_V_dout(in_local_V_V_dout);
    myproject_U0->em_barrel_V_V_empty_n(in_local_V_V_empty_n);
    myproject_U0->em_barrel_V_V_read(myproject_U0_em_barrel_V_V_read);
    myproject_U0->layer56_out_V_V_din(myproject_U0_layer56_out_V_V_din);
    myproject_U0->layer56_out_V_V_full_n(out_local_V_V_full_n);
    myproject_U0->layer56_out_V_V_write(myproject_U0_layer56_out_V_V_write);
    myproject_U0->ap_clk(ap_clk);
    myproject_U0->ap_rst(ap_rst_n_inv);
    myproject_U0->ap_start(myproject_U0_ap_start);
    myproject_U0->ap_done(myproject_U0_ap_done);
    myproject_U0->ap_ready(myproject_U0_ap_ready);
    myproject_U0->ap_idle(myproject_U0_ap_idle);
    myproject_U0->ap_continue(myproject_U0_ap_continue);
    Block_myproject_axi_exit210_proc_U0 = new Block_myproject_axi_exit210_proc("Block_myproject_axi_exit210_proc_U0");
    Block_myproject_axi_exit210_proc_U0->ap_clk(ap_clk);
    Block_myproject_axi_exit210_proc_U0->ap_rst(ap_rst_n_inv);
    Block_myproject_axi_exit210_proc_U0->ap_start(Block_myproject_axi_exit210_proc_U0_ap_start);
    Block_myproject_axi_exit210_proc_U0->ap_done(Block_myproject_axi_exit210_proc_U0_ap_done);
    Block_myproject_axi_exit210_proc_U0->ap_continue(Block_myproject_axi_exit210_proc_U0_ap_continue);
    Block_myproject_axi_exit210_proc_U0->ap_idle(Block_myproject_axi_exit210_proc_U0_ap_idle);
    Block_myproject_axi_exit210_proc_U0->ap_ready(Block_myproject_axi_exit210_proc_U0_ap_ready);
    Block_myproject_axi_exit210_proc_U0->out_local_V_V_dout(out_local_V_V_dout);
    Block_myproject_axi_exit210_proc_U0->out_local_V_V_empty_n(out_local_V_V_empty_n);
    Block_myproject_axi_exit210_proc_U0->out_local_V_V_read(Block_myproject_axi_exit210_proc_U0_out_local_V_V_read);
    Block_myproject_axi_exit210_proc_U0->out_r_TDATA(Block_myproject_axi_exit210_proc_U0_out_r_TDATA);
    Block_myproject_axi_exit210_proc_U0->out_r_TVALID(Block_myproject_axi_exit210_proc_U0_out_r_TVALID);
    Block_myproject_axi_exit210_proc_U0->out_r_TREADY(out_r_TREADY);
    Block_myproject_axi_exit210_proc_U0->out_r_TLAST(Block_myproject_axi_exit210_proc_U0_out_r_TLAST);
    Block_myproject_axi_exit210_proc_U0->is_last_0_loc_0_i_loc_dout(is_last_0_loc_0_i_loc_c_dout);
    Block_myproject_axi_exit210_proc_U0->is_last_0_loc_0_i_loc_empty_n(is_last_0_loc_0_i_loc_c_empty_n);
    Block_myproject_axi_exit210_proc_U0->is_last_0_loc_0_i_loc_read(Block_myproject_axi_exit210_proc_U0_is_last_0_loc_0_i_loc_read);
    in_local_V_V_U = new fifo_w32_d2464_A("in_local_V_V_U");
    in_local_V_V_U->clk(ap_clk);
    in_local_V_V_U->reset(ap_rst_n_inv);
    in_local_V_V_U->if_read_ce(ap_var_for_const0);
    in_local_V_V_U->if_write_ce(ap_var_for_const0);
    in_local_V_V_U->if_din(Loop_1_proc681_U0_in_local_V_V_din);
    in_local_V_V_U->if_full_n(in_local_V_V_full_n);
    in_local_V_V_U->if_write(Loop_1_proc681_U0_in_local_V_V_write);
    in_local_V_V_U->if_dout(in_local_V_V_dout);
    in_local_V_V_U->if_empty_n(in_local_V_V_empty_n);
    in_local_V_V_U->if_read(myproject_U0_em_barrel_V_V_read);
    is_last_0_loc_0_i_loc_c_U = new fifo_w1_d3_A("is_last_0_loc_0_i_loc_c_U");
    is_last_0_loc_0_i_loc_c_U->clk(ap_clk);
    is_last_0_loc_0_i_loc_c_U->reset(ap_rst_n_inv);
    is_last_0_loc_0_i_loc_c_U->if_read_ce(ap_var_for_const0);
    is_last_0_loc_0_i_loc_c_U->if_write_ce(ap_var_for_const0);
    is_last_0_loc_0_i_loc_c_U->if_din(Loop_1_proc681_U0_is_last_0_loc_0_i_out_out_din);
    is_last_0_loc_0_i_loc_c_U->if_full_n(is_last_0_loc_0_i_loc_c_full_n);
    is_last_0_loc_0_i_loc_c_U->if_write(Loop_1_proc681_U0_is_last_0_loc_0_i_out_out_write);
    is_last_0_loc_0_i_loc_c_U->if_dout(is_last_0_loc_0_i_loc_c_dout);
    is_last_0_loc_0_i_loc_c_U->if_empty_n(is_last_0_loc_0_i_loc_c_empty_n);
    is_last_0_loc_0_i_loc_c_U->if_read(Block_myproject_axi_exit210_proc_U0_is_last_0_loc_0_i_loc_read);
    out_local_V_V_U = new fifo_w32_d1_A_x("out_local_V_V_U");
    out_local_V_V_U->clk(ap_clk);
    out_local_V_V_U->reset(ap_rst_n_inv);
    out_local_V_V_U->if_read_ce(ap_var_for_const0);
    out_local_V_V_U->if_write_ce(ap_var_for_const0);
    out_local_V_V_U->if_din(myproject_U0_layer56_out_V_V_din);
    out_local_V_V_U->if_full_n(out_local_V_V_full_n);
    out_local_V_V_U->if_write(myproject_U0_layer56_out_V_V_write);
    out_local_V_V_U->if_dout(out_local_V_V_dout);
    out_local_V_V_U->if_empty_n(out_local_V_V_empty_n);
    out_local_V_V_U->if_read(Block_myproject_axi_exit210_proc_U0_out_local_V_V_read);
    start_for_myproject_U0_U = new start_for_myproject_U0("start_for_myproject_U0_U");
    start_for_myproject_U0_U->clk(ap_clk);
    start_for_myproject_U0_U->reset(ap_rst_n_inv);
    start_for_myproject_U0_U->if_read_ce(ap_var_for_const0);
    start_for_myproject_U0_U->if_write_ce(ap_var_for_const0);
    start_for_myproject_U0_U->if_din(start_for_myproject_U0_din);
    start_for_myproject_U0_U->if_full_n(start_for_myproject_U0_full_n);
    start_for_myproject_U0_U->if_write(Loop_1_proc681_U0_start_write);
    start_for_myproject_U0_U->if_dout(start_for_myproject_U0_dout);
    start_for_myproject_U0_U->if_empty_n(start_for_myproject_U0_empty_n);
    start_for_myproject_U0_U->if_read(myproject_U0_ap_ready);
    start_for_Block_myproject_axi_exit210_proc_U0_U = new start_for_Block_myproject_axi_exit210_proc_U0("start_for_Block_myproject_axi_exit210_proc_U0_U");
    start_for_Block_myproject_axi_exit210_proc_U0_U->clk(ap_clk);
    start_for_Block_myproject_axi_exit210_proc_U0_U->reset(ap_rst_n_inv);
    start_for_Block_myproject_axi_exit210_proc_U0_U->if_read_ce(ap_var_for_const0);
    start_for_Block_myproject_axi_exit210_proc_U0_U->if_write_ce(ap_var_for_const0);
    start_for_Block_myproject_axi_exit210_proc_U0_U->if_din(start_for_Block_myproject_axi_exit210_proc_U0_din);
    start_for_Block_myproject_axi_exit210_proc_U0_U->if_full_n(start_for_Block_myproject_axi_exit210_proc_U0_full_n);
    start_for_Block_myproject_axi_exit210_proc_U0_U->if_write(Loop_1_proc681_U0_start_write);
    start_for_Block_myproject_axi_exit210_proc_U0_U->if_dout(start_for_Block_myproject_axi_exit210_proc_U0_dout);
    start_for_Block_myproject_axi_exit210_proc_U0_U->if_empty_n(start_for_Block_myproject_axi_exit210_proc_U0_empty_n);
    start_for_Block_myproject_axi_exit210_proc_U0_U->if_read(Block_myproject_axi_exit210_proc_U0_ap_ready);

    SC_METHOD(thread_Block_myproject_axi_exit210_proc_U0_ap_continue);

    SC_METHOD(thread_Block_myproject_axi_exit210_proc_U0_ap_start);
    sensitive << ( start_for_Block_myproject_axi_exit210_proc_U0_empty_n );

    SC_METHOD(thread_Block_myproject_axi_exit210_proc_U0_start_full_n);

    SC_METHOD(thread_Block_myproject_axi_exit210_proc_U0_start_write);

    SC_METHOD(thread_Loop_1_proc681_U0_ap_continue);

    SC_METHOD(thread_Loop_1_proc681_U0_ap_start);

    SC_METHOD(thread_Loop_1_proc681_U0_start_full_n);
    sensitive << ( start_for_myproject_U0_full_n );
    sensitive << ( start_for_Block_myproject_axi_exit210_proc_U0_full_n );

    SC_METHOD(thread_ap_rst_n_inv);
    sensitive << ( ap_rst_n );

    SC_METHOD(thread_ap_sync_continue);

    SC_METHOD(thread_in_r_TREADY);
    sensitive << ( Loop_1_proc681_U0_in_r_TREADY );

    SC_METHOD(thread_myproject_U0_ap_continue);

    SC_METHOD(thread_myproject_U0_ap_start);
    sensitive << ( start_for_myproject_U0_empty_n );

    SC_METHOD(thread_myproject_U0_start_full_n);

    SC_METHOD(thread_myproject_U0_start_write);

    SC_METHOD(thread_out_r_TDATA);
    sensitive << ( Block_myproject_axi_exit210_proc_U0_out_r_TDATA );

    SC_METHOD(thread_out_r_TLAST);
    sensitive << ( Block_myproject_axi_exit210_proc_U0_out_r_TLAST );

    SC_METHOD(thread_out_r_TVALID);
    sensitive << ( Block_myproject_axi_exit210_proc_U0_out_r_TVALID );

    SC_METHOD(thread_start_for_Block_myproject_axi_exit210_proc_U0_din);

    SC_METHOD(thread_start_for_myproject_U0_din);

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    SC_THREAD(thread_ap_var_for_const0);

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "myproject_axi_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, in_r_TDATA, "(port)in_r_TDATA");
    sc_trace(mVcdFile, in_r_TLAST, "(port)in_r_TLAST");
    sc_trace(mVcdFile, out_r_TDATA, "(port)out_r_TDATA");
    sc_trace(mVcdFile, out_r_TLAST, "(port)out_r_TLAST");
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst_n, "(port)ap_rst_n");
    sc_trace(mVcdFile, in_r_TVALID, "(port)in_r_TVALID");
    sc_trace(mVcdFile, in_r_TREADY, "(port)in_r_TREADY");
    sc_trace(mVcdFile, out_r_TVALID, "(port)out_r_TVALID");
    sc_trace(mVcdFile, out_r_TREADY, "(port)out_r_TREADY");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_rst_n_inv, "ap_rst_n_inv");
    sc_trace(mVcdFile, Loop_1_proc681_U0_ap_start, "Loop_1_proc681_U0_ap_start");
    sc_trace(mVcdFile, Loop_1_proc681_U0_start_full_n, "Loop_1_proc681_U0_start_full_n");
    sc_trace(mVcdFile, Loop_1_proc681_U0_ap_done, "Loop_1_proc681_U0_ap_done");
    sc_trace(mVcdFile, Loop_1_proc681_U0_ap_continue, "Loop_1_proc681_U0_ap_continue");
    sc_trace(mVcdFile, Loop_1_proc681_U0_ap_idle, "Loop_1_proc681_U0_ap_idle");
    sc_trace(mVcdFile, Loop_1_proc681_U0_ap_ready, "Loop_1_proc681_U0_ap_ready");
    sc_trace(mVcdFile, Loop_1_proc681_U0_start_out, "Loop_1_proc681_U0_start_out");
    sc_trace(mVcdFile, Loop_1_proc681_U0_start_write, "Loop_1_proc681_U0_start_write");
    sc_trace(mVcdFile, Loop_1_proc681_U0_in_r_TREADY, "Loop_1_proc681_U0_in_r_TREADY");
    sc_trace(mVcdFile, Loop_1_proc681_U0_in_local_V_V_din, "Loop_1_proc681_U0_in_local_V_V_din");
    sc_trace(mVcdFile, Loop_1_proc681_U0_in_local_V_V_write, "Loop_1_proc681_U0_in_local_V_V_write");
    sc_trace(mVcdFile, Loop_1_proc681_U0_is_last_0_loc_0_i_out_out_din, "Loop_1_proc681_U0_is_last_0_loc_0_i_out_out_din");
    sc_trace(mVcdFile, Loop_1_proc681_U0_is_last_0_loc_0_i_out_out_write, "Loop_1_proc681_U0_is_last_0_loc_0_i_out_out_write");
    sc_trace(mVcdFile, myproject_U0_em_barrel_V_V_read, "myproject_U0_em_barrel_V_V_read");
    sc_trace(mVcdFile, myproject_U0_layer56_out_V_V_din, "myproject_U0_layer56_out_V_V_din");
    sc_trace(mVcdFile, myproject_U0_layer56_out_V_V_write, "myproject_U0_layer56_out_V_V_write");
    sc_trace(mVcdFile, myproject_U0_ap_start, "myproject_U0_ap_start");
    sc_trace(mVcdFile, myproject_U0_ap_done, "myproject_U0_ap_done");
    sc_trace(mVcdFile, myproject_U0_ap_ready, "myproject_U0_ap_ready");
    sc_trace(mVcdFile, myproject_U0_ap_idle, "myproject_U0_ap_idle");
    sc_trace(mVcdFile, myproject_U0_ap_continue, "myproject_U0_ap_continue");
    sc_trace(mVcdFile, Block_myproject_axi_exit210_proc_U0_ap_start, "Block_myproject_axi_exit210_proc_U0_ap_start");
    sc_trace(mVcdFile, Block_myproject_axi_exit210_proc_U0_ap_done, "Block_myproject_axi_exit210_proc_U0_ap_done");
    sc_trace(mVcdFile, Block_myproject_axi_exit210_proc_U0_ap_continue, "Block_myproject_axi_exit210_proc_U0_ap_continue");
    sc_trace(mVcdFile, Block_myproject_axi_exit210_proc_U0_ap_idle, "Block_myproject_axi_exit210_proc_U0_ap_idle");
    sc_trace(mVcdFile, Block_myproject_axi_exit210_proc_U0_ap_ready, "Block_myproject_axi_exit210_proc_U0_ap_ready");
    sc_trace(mVcdFile, Block_myproject_axi_exit210_proc_U0_out_local_V_V_read, "Block_myproject_axi_exit210_proc_U0_out_local_V_V_read");
    sc_trace(mVcdFile, Block_myproject_axi_exit210_proc_U0_out_r_TDATA, "Block_myproject_axi_exit210_proc_U0_out_r_TDATA");
    sc_trace(mVcdFile, Block_myproject_axi_exit210_proc_U0_out_r_TVALID, "Block_myproject_axi_exit210_proc_U0_out_r_TVALID");
    sc_trace(mVcdFile, Block_myproject_axi_exit210_proc_U0_out_r_TLAST, "Block_myproject_axi_exit210_proc_U0_out_r_TLAST");
    sc_trace(mVcdFile, Block_myproject_axi_exit210_proc_U0_is_last_0_loc_0_i_loc_read, "Block_myproject_axi_exit210_proc_U0_is_last_0_loc_0_i_loc_read");
    sc_trace(mVcdFile, ap_sync_continue, "ap_sync_continue");
    sc_trace(mVcdFile, in_local_V_V_full_n, "in_local_V_V_full_n");
    sc_trace(mVcdFile, in_local_V_V_dout, "in_local_V_V_dout");
    sc_trace(mVcdFile, in_local_V_V_empty_n, "in_local_V_V_empty_n");
    sc_trace(mVcdFile, is_last_0_loc_0_i_loc_c_full_n, "is_last_0_loc_0_i_loc_c_full_n");
    sc_trace(mVcdFile, is_last_0_loc_0_i_loc_c_dout, "is_last_0_loc_0_i_loc_c_dout");
    sc_trace(mVcdFile, is_last_0_loc_0_i_loc_c_empty_n, "is_last_0_loc_0_i_loc_c_empty_n");
    sc_trace(mVcdFile, out_local_V_V_full_n, "out_local_V_V_full_n");
    sc_trace(mVcdFile, out_local_V_V_dout, "out_local_V_V_dout");
    sc_trace(mVcdFile, out_local_V_V_empty_n, "out_local_V_V_empty_n");
    sc_trace(mVcdFile, start_for_myproject_U0_din, "start_for_myproject_U0_din");
    sc_trace(mVcdFile, start_for_myproject_U0_full_n, "start_for_myproject_U0_full_n");
    sc_trace(mVcdFile, start_for_myproject_U0_dout, "start_for_myproject_U0_dout");
    sc_trace(mVcdFile, start_for_myproject_U0_empty_n, "start_for_myproject_U0_empty_n");
    sc_trace(mVcdFile, start_for_Block_myproject_axi_exit210_proc_U0_din, "start_for_Block_myproject_axi_exit210_proc_U0_din");
    sc_trace(mVcdFile, start_for_Block_myproject_axi_exit210_proc_U0_full_n, "start_for_Block_myproject_axi_exit210_proc_U0_full_n");
    sc_trace(mVcdFile, start_for_Block_myproject_axi_exit210_proc_U0_dout, "start_for_Block_myproject_axi_exit210_proc_U0_dout");
    sc_trace(mVcdFile, start_for_Block_myproject_axi_exit210_proc_U0_empty_n, "start_for_Block_myproject_axi_exit210_proc_U0_empty_n");
    sc_trace(mVcdFile, myproject_U0_start_full_n, "myproject_U0_start_full_n");
    sc_trace(mVcdFile, myproject_U0_start_write, "myproject_U0_start_write");
    sc_trace(mVcdFile, Block_myproject_axi_exit210_proc_U0_start_full_n, "Block_myproject_axi_exit210_proc_U0_start_full_n");
    sc_trace(mVcdFile, Block_myproject_axi_exit210_proc_U0_start_write, "Block_myproject_axi_exit210_proc_U0_start_write");
#endif

    }
    mHdltvinHandle.open("myproject_axi.hdltvin.dat");
    mHdltvoutHandle.open("myproject_axi.hdltvout.dat");
}

myproject_axi::~myproject_axi() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete Loop_1_proc681_U0;
    delete myproject_U0;
    delete Block_myproject_axi_exit210_proc_U0;
    delete in_local_V_V_U;
    delete is_last_0_loc_0_i_loc_c_U;
    delete out_local_V_V_U;
    delete start_for_myproject_U0_U;
    delete start_for_Block_myproject_axi_exit210_proc_U0_U;
}

void myproject_axi::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void myproject_axi::thread_Block_myproject_axi_exit210_proc_U0_ap_continue() {
    Block_myproject_axi_exit210_proc_U0_ap_continue = ap_const_logic_1;
}

void myproject_axi::thread_Block_myproject_axi_exit210_proc_U0_ap_start() {
    Block_myproject_axi_exit210_proc_U0_ap_start = start_for_Block_myproject_axi_exit210_proc_U0_empty_n.read();
}

void myproject_axi::thread_Block_myproject_axi_exit210_proc_U0_start_full_n() {
    Block_myproject_axi_exit210_proc_U0_start_full_n = ap_const_logic_1;
}

void myproject_axi::thread_Block_myproject_axi_exit210_proc_U0_start_write() {
    Block_myproject_axi_exit210_proc_U0_start_write = ap_const_logic_0;
}

void myproject_axi::thread_Loop_1_proc681_U0_ap_continue() {
    Loop_1_proc681_U0_ap_continue = ap_const_logic_1;
}

void myproject_axi::thread_Loop_1_proc681_U0_ap_start() {
    Loop_1_proc681_U0_ap_start = ap_const_logic_1;
}

void myproject_axi::thread_Loop_1_proc681_U0_start_full_n() {
    Loop_1_proc681_U0_start_full_n = (start_for_myproject_U0_full_n.read() & start_for_Block_myproject_axi_exit210_proc_U0_full_n.read());
}

void myproject_axi::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void myproject_axi::thread_ap_sync_continue() {
    ap_sync_continue = ap_const_logic_0;
}

void myproject_axi::thread_in_r_TREADY() {
    in_r_TREADY = Loop_1_proc681_U0_in_r_TREADY.read();
}

void myproject_axi::thread_myproject_U0_ap_continue() {
    myproject_U0_ap_continue = ap_const_logic_1;
}

void myproject_axi::thread_myproject_U0_ap_start() {
    myproject_U0_ap_start = start_for_myproject_U0_empty_n.read();
}

void myproject_axi::thread_myproject_U0_start_full_n() {
    myproject_U0_start_full_n = ap_const_logic_1;
}

void myproject_axi::thread_myproject_U0_start_write() {
    myproject_U0_start_write = ap_const_logic_0;
}

void myproject_axi::thread_out_r_TDATA() {
    out_r_TDATA = Block_myproject_axi_exit210_proc_U0_out_r_TDATA.read();
}

void myproject_axi::thread_out_r_TLAST() {
    out_r_TLAST = Block_myproject_axi_exit210_proc_U0_out_r_TLAST.read();
}

void myproject_axi::thread_out_r_TVALID() {
    out_r_TVALID = Block_myproject_axi_exit210_proc_U0_out_r_TVALID.read();
}

void myproject_axi::thread_start_for_Block_myproject_axi_exit210_proc_U0_din() {
    start_for_Block_myproject_axi_exit210_proc_U0_din =  (sc_lv<1>) (ap_const_logic_1);
}

void myproject_axi::thread_start_for_myproject_U0_din() {
    start_for_myproject_U0_din =  (sc_lv<1>) (ap_const_logic_1);
}

void myproject_axi::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"in_r_TDATA\" :  \"" << in_r_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_r_TLAST\" :  \"" << in_r_TLAST.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"out_r_TDATA\" :  \"" << out_r_TDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_r_TLAST\" :  \"" << out_r_TLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_r_TVALID\" :  \"" << in_r_TVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"in_r_TREADY\" :  \"" << in_r_TREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_r_TVALID\" :  \"" << out_r_TVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"out_r_TREADY\" :  \"" << out_r_TREADY.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

