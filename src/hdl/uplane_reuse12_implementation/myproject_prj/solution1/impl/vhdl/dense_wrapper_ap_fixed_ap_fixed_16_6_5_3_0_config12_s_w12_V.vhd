-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s_w12_V_rom is 
    generic(
             DWIDTH     : integer := 122; 
             AWIDTH     : integer := 3; 
             MEM_SIZE    : integer := 8
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
    0 => "00111001010000000010100111000000010011110011111111010101101111111100000001111111101011010000000000110010110000000101001110", 
    1 => "11001010000000000100001111000000010110001000000001001110011111111100000001000000010101100100000001011000010000000110100010", 
    2 => "11000000000000000101000010111111101101101011111111011000111111111100010000000000010111100100000001001010101111111110000110", 
    3 => "01001110110000000110101011111111110101000111111111001010111111111011111100000000001101010000000000111101000000000101110011", 
    4 => "00110000100000000011110101111111101110010011111111010010111111111011011011111111110011100000000001001000101111111100110001", 
    5 => "00101110000000000011101011111111101001111100000001000111010000000010111101111111101011110100000001011010100000000101101110", 
    6 => "11100001100000000011110011111111110101111100000001100110110000000101110101000000010010101000000001010110001111111101011100", 
    7 => "10110001100000000110100111111111101111000100000001010110111111111011010001000000010111101111111111010100001111111111011110" );

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
        DataWidth : INTEGER := 122;
        AddressRange : INTEGER := 8;
        AddressWidth : INTEGER := 3);
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


