-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv_1d_cl_array_array_ap_fixed_16u_config2_s_w2_V_rom is 
    generic(
             DWIDTH     : integer := 58; 
             AWIDTH     : integer := 4; 
             MEM_SIZE    : integer := 12
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
    0 => "1111010010000000010110001000000001100000110000000101010001", 
    1 => "1001010110111111101100010011111111111110110000000000000001", 
    2 => "0001000111111111100101111100000000011100011111111111101001", 
    3 => "0000001100111111111111101011111111000111100000000001110010", 
    4 => "1100101010000000000110000011111110101101001111111110000011", 
    5 => "0010101001000000011000110011111110011110100000000011101111", 
    6 => "1011100101000000001100110011111111101101100000000101101011", 
    7 => "0100101001000000011101101111111111000100010000000001010111", 
    8 => "1100110100000000001101011011111111001100110000000101101000", 
    9 => "0010000100111111111100011111111110101100010000000110101010", 
    10 => "1011101100111111100101110100000000000110110000000001001101", 
    11 => "0001100000111111110001001111111110101100101111111111101010" );

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
        DataWidth : INTEGER := 58;
        AddressRange : INTEGER := 12;
        AddressWidth : INTEGER := 4);
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


