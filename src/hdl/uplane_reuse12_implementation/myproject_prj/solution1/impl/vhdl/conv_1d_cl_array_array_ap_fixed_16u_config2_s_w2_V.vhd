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
    0 => "0001110011111111111010011100000000101011011111111001010011", 
    1 => "0100011111111111110101111111111111011100000000000011000011", 
    2 => "0000000011000000000001100111111110011110111111111101101110", 
    3 => "1011111111000000000110101100000000101101111111111101111100", 
    4 => "1010010011111111101011001000000001010100110000000010110010", 
    5 => "1011001110111111111100100100000000110001010000000000101111", 
    6 => "0000100100000000000101001000000001001100001111111001101100", 
    7 => "0010001100111111110011110000000000101100100000000011011000", 
    8 => "0001010011000000010010000000000001100000001111111011101101", 
    9 => "0011010100111111111010010011111110100011011111111100100010", 
    10 => "1011011111000000010001011011111111000111100000000011100101", 
    11 => "0010000110111111111001010011111111110011110000000110101111" );

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


