-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s_w12_V_rom is 
    generic(
             DWIDTH     : integer := 26; 
             AWIDTH     : integer := 5; 
             MEM_SIZE    : integer := 32
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
    0 => "11111010010000000101111110", 1 => "00111111111111111111110110", 
    2 => "10110000010000000100001100", 3 => "10100111010000000011101111", 
    4 => "11010100010000000111010010", 5 => "11100000100000000100101000", 
    6 => "10101110101111111110100010", 7 => "11101101111111111010101100", 
    8 => "00110100000000000100100100", 9 => "00101010010000000101000011", 
    10 => "11001001001111111110110111", 11 => "01000011111111111101011011", 
    12 => "11110000010000000100100000", 13 => "00111100010000000100110011", 
    14 => "00111101101111111111010100", 15 => "01100001010000000101011010", 
    16 => "01000000111111111011110111", 17 => "01110000111111111100101010", 
    18 => "11100000100000000100110110", 19 => "01001100101111111100110101", 
    20 => "01010001111111111110000001", 21 => "01010111001111111101001110", 
    22 => "01100101111111111101001001", 23 => "00111100111111111111011100", 
    24 => "01000100100000000100111001", 25 => "11111000111111111010010100", 
    26 => "11001100101111111011100000", 27 => "01001000001111111011011111", 
    28 => "01010101100000000011100010", 29 => "10110001000000000100011111", 
    30 => "11111000111111111011001101", 31 => "10110101011111111010010100" );

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
        DataWidth : INTEGER := 26;
        AddressRange : INTEGER := 32;
        AddressWidth : INTEGER := 5);
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


