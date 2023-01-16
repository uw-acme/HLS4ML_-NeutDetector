-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V_rom is 
    generic(
             DWIDTH     : integer := 10; 
             AWIDTH     : integer := 6; 
             MEM_SIZE    : integer := 48
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1100101001", 1 => "0110101110", 2 => "0101100111", 3 => "1011000100", 
    4 => "0001100101", 5 => "1010000101", 6 => "0001011111", 7 => "1111000010", 
    8 => "0010011010", 9 => "0011011110", 10 => "1010010001", 11 => "1101001111", 
    12 => "1111100110", 13 => "0110000111", 14 => "1100010010", 15 => "0011000001", 
    16 => "1001100101", 17 => "1011110101", 18 => "1111000101", 19 => "1111111011", 
    20 => "0000101000", 21 => "0100100010", 22 => "0101001101", 23 => "1011101111", 
    24 => "1110010110", 25 => "0010101111", 26 => "1111010000", 27 => "0110100100", 
    28 => "0100111010", 29 => "1110110001", 30 => "1110111110", 31 => "0001011001", 
    32 => "0010011111", 33 => "1001100111", 34 => "1101000010", 35 => "1011100100", 
    36 => "0100101100", 37 => "0000110010", 38 => "1010000111", 39 => "0010000100", 
    40 => "0011011111", 41 => "0100110100", 42 => "0100100101", 43 => "0110011000", 
    44 => "0100111011", 45 => "1111011111", 46 => "1111101111", 47 => "0000110100" );

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

entity conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V is
    generic (
        DataWidth : INTEGER := 10;
        AddressRange : INTEGER := 48;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V is
    component conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V_rom_U :  component conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


