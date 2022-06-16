-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    data_0_V_read : IN STD_LOGIC_VECTOR (31 downto 0);
    data_1_V_read : IN STD_LOGIC_VECTOR (31 downto 0);
    data_2_V_read : IN STD_LOGIC_VECTOR (31 downto 0);
    data_3_V_read : IN STD_LOGIC_VECTOR (31 downto 0);
    data_4_V_read : IN STD_LOGIC_VECTOR (31 downto 0);
    data_5_V_read : IN STD_LOGIC_VECTOR (31 downto 0);
    data_6_V_read : IN STD_LOGIC_VECTOR (31 downto 0);
    data_7_V_read : IN STD_LOGIC_VECTOR (31 downto 0);
    output_V_read : IN STD_LOGIC_VECTOR (1023 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (1023 downto 0) );
end;


architecture behav of cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv2_2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv32_300 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000001100000000";
    constant ap_const_lv32_3FF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000001111111111";
    constant ap_const_lv32_100 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000100000000";
    constant ap_const_lv32_1FF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000111111111";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (0 downto 0) := "1";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal layer_in_row_Array_V_12_0_0_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_12_0_0_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_12_0_0_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_12_0_1_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_12_0_1_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_12_0_1_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_12_0_2_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_12_0_2_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_12_0_2_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_12_0_3_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_12_0_3_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_12_0_3_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_12_0_4_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_12_0_4_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_12_0_4_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_12_0_5_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_12_0_5_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_12_0_5_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_12_0_6_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_12_0_6_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_12_0_6_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_12_0_7_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_12_0_7_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_12_0_7_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_fu_214_p4 : STD_LOGIC_VECTOR (255 downto 0);
    signal tmp_8_fu_224_p4 : STD_LOGIC_VECTOR (255 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (0 downto 0);

    component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_layc1C IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (1 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (31 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    layer_in_row_Array_V_12_0_0_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_layc1C
    generic map (
        DataWidth => 32,
        AddressRange => 3,
        AddressWidth => 2)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv2_2,
        ce0 => layer_in_row_Array_V_12_0_0_ce0,
        we0 => layer_in_row_Array_V_12_0_0_we0,
        d0 => data_0_V_read,
        q0 => layer_in_row_Array_V_12_0_0_q0);

    layer_in_row_Array_V_12_0_1_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_layc1C
    generic map (
        DataWidth => 32,
        AddressRange => 3,
        AddressWidth => 2)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv2_2,
        ce0 => layer_in_row_Array_V_12_0_1_ce0,
        we0 => layer_in_row_Array_V_12_0_1_we0,
        d0 => data_1_V_read,
        q0 => layer_in_row_Array_V_12_0_1_q0);

    layer_in_row_Array_V_12_0_2_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_layc1C
    generic map (
        DataWidth => 32,
        AddressRange => 3,
        AddressWidth => 2)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv2_2,
        ce0 => layer_in_row_Array_V_12_0_2_ce0,
        we0 => layer_in_row_Array_V_12_0_2_we0,
        d0 => data_2_V_read,
        q0 => layer_in_row_Array_V_12_0_2_q0);

    layer_in_row_Array_V_12_0_3_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_layc1C
    generic map (
        DataWidth => 32,
        AddressRange => 3,
        AddressWidth => 2)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv2_2,
        ce0 => layer_in_row_Array_V_12_0_3_ce0,
        we0 => layer_in_row_Array_V_12_0_3_we0,
        d0 => data_3_V_read,
        q0 => layer_in_row_Array_V_12_0_3_q0);

    layer_in_row_Array_V_12_0_4_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_layc1C
    generic map (
        DataWidth => 32,
        AddressRange => 3,
        AddressWidth => 2)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv2_2,
        ce0 => layer_in_row_Array_V_12_0_4_ce0,
        we0 => layer_in_row_Array_V_12_0_4_we0,
        d0 => data_4_V_read,
        q0 => layer_in_row_Array_V_12_0_4_q0);

    layer_in_row_Array_V_12_0_5_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_layc1C
    generic map (
        DataWidth => 32,
        AddressRange => 3,
        AddressWidth => 2)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv2_2,
        ce0 => layer_in_row_Array_V_12_0_5_ce0,
        we0 => layer_in_row_Array_V_12_0_5_we0,
        d0 => data_5_V_read,
        q0 => layer_in_row_Array_V_12_0_5_q0);

    layer_in_row_Array_V_12_0_6_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_layc1C
    generic map (
        DataWidth => 32,
        AddressRange => 3,
        AddressWidth => 2)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv2_2,
        ce0 => layer_in_row_Array_V_12_0_6_ce0,
        we0 => layer_in_row_Array_V_12_0_6_we0,
        d0 => data_6_V_read,
        q0 => layer_in_row_Array_V_12_0_6_q0);

    layer_in_row_Array_V_12_0_7_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_layc1C
    generic map (
        DataWidth => 32,
        AddressRange => 3,
        AddressWidth => 2)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv2_2,
        ce0 => layer_in_row_Array_V_12_0_7_ce0,
        we0 => layer_in_row_Array_V_12_0_7_we0,
        d0 => data_7_V_read,
        q0 => layer_in_row_Array_V_12_0_7_q0);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "X";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if ((((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)) or ((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    ap_return <= (((((((((((((((((data_7_V_read & data_6_V_read) & data_5_V_read) & data_4_V_read) & data_3_V_read) & data_2_V_read) & data_1_V_read) & data_0_V_read) & tmp_fu_214_p4) & layer_in_row_Array_V_12_0_7_q0) & layer_in_row_Array_V_12_0_6_q0) & layer_in_row_Array_V_12_0_5_q0) & layer_in_row_Array_V_12_0_4_q0) & layer_in_row_Array_V_12_0_3_q0) & layer_in_row_Array_V_12_0_2_q0) & layer_in_row_Array_V_12_0_1_q0) & layer_in_row_Array_V_12_0_0_q0) & tmp_8_fu_224_p4);

    layer_in_row_Array_V_12_0_0_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_12_0_0_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_12_0_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_12_0_0_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_12_0_0_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_12_0_0_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_12_0_1_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_12_0_1_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_12_0_1_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_12_0_1_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_12_0_1_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_12_0_1_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_12_0_2_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_12_0_2_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_12_0_2_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_12_0_2_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_12_0_2_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_12_0_2_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_12_0_3_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_12_0_3_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_12_0_3_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_12_0_3_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_12_0_3_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_12_0_3_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_12_0_4_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_12_0_4_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_12_0_4_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_12_0_4_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_12_0_4_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_12_0_4_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_12_0_5_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_12_0_5_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_12_0_5_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_12_0_5_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_12_0_5_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_12_0_5_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_12_0_6_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_12_0_6_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_12_0_6_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_12_0_6_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_12_0_6_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_12_0_6_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_12_0_7_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_12_0_7_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_12_0_7_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_12_0_7_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_12_0_7_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_12_0_7_we0 <= ap_const_logic_0;
        end if; 
    end process;

    tmp_8_fu_224_p4 <= output_V_read(511 downto 256);
    tmp_fu_214_p4 <= output_V_read(1023 downto 768);
end behav;
