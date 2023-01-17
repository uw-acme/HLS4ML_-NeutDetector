-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s_w12_V_rom is 
    generic(
             DWIDTH     : integer := 58; 
             AWIDTH     : integer := 4; 
             MEM_SIZE    : integer := 16
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s_w12_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1011111110111111110001000000000001100101100000000100011111", 
    1 => "0100111010111111101011111100000001100010110000000100001010", 
    2 => "1100110100000000010001101100000010000001010000000011111001", 
    3 => "0101011110111111101101101100000000111011000000000100110110", 
    4 => "0111000101000000010101101011111111010000101111111100110010", 
    5 => "1100110000111111101010111011111110111111001111111110111100", 
    6 => "0011111010111111110111011000000001110111101111111100001101", 
    7 => "0101110101000000001100011000000000111110011111111100100000", 
    8 => "1010111101000000011010110111111111011100001111111011101101", 
    9 => "1110010101000000001111100111111111110000100000000010110011", 
    10 => "0110101111111111101110101011111111001010111111111100001110", 
    11 => "1011011101111111110100001100000001110011111111111011000101", 
    12 => "0110100110000000001111011011111111011010111111111011110101", 
    13 => "0011101010000000001100111011111111100101110000000101111101", 
    14 => "0100101001000000010110000011111111000101100000000011110010", 
    15 => "0011111110000000011000010111111111011001100000000010010010" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s_w12_V is
    generic (
        DataWidth : INTEGER := 58;
        AddressRange : INTEGER := 16;
        AddressWidth : INTEGER := 4);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s_w12_V is
    component dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s_w12_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s_w12_V_rom_U :  component dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s_w12_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


