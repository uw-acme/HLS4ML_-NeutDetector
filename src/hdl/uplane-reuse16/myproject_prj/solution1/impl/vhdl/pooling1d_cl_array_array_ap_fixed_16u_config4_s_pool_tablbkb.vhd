-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity pooling1d_cl_array_array_ap_fixed_16u_config4_s_pool_tablbkb_rom is 
    generic(
             DWIDTH     : integer := 1; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 99
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of pooling1d_cl_array_array_ap_fixed_16u_config4_s_pool_tablbkb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0", 1 => "1", 2 => "0", 3 => "1", 4 => "0", 5 => "1", 6 => "0", 
    7 => "1", 8 => "0", 9 => "1", 10 => "0", 11 => "1", 12 => "0", 13 => "1", 
    14 => "0", 15 => "1", 16 => "0", 17 => "1", 18 => "0", 19 => "1", 20 => "0", 
    21 => "1", 22 => "0", 23 => "1", 24 => "0", 25 => "1", 26 => "0", 27 => "1", 
    28 => "0", 29 => "1", 30 => "0", 31 => "1", 32 => "0", 33 => "1", 34 => "0", 
    35 => "1", 36 => "0", 37 => "1", 38 => "0", 39 => "1", 40 => "0", 41 => "1", 
    42 => "0", 43 => "1", 44 => "0", 45 => "1", 46 => "0", 47 => "1", 48 => "0", 
    49 => "1", 50 => "0", 51 => "1", 52 => "0", 53 => "1", 54 => "0", 55 => "1", 
    56 => "0", 57 => "1", 58 => "0", 59 => "1", 60 => "0", 61 => "1", 62 => "0", 
    63 => "1", 64 => "0", 65 => "1", 66 => "0", 67 => "1", 68 => "0", 69 => "1", 
    70 => "0", 71 => "1", 72 => "0", 73 => "1", 74 => "0", 75 => "1", 76 => "0", 
    77 => "1", 78 => "0", 79 => "1", 80 => "0", 81 => "1", 82 => "0", 83 => "1", 
    84 => "0", 85 => "1", 86 => "0", 87 => "1", 88 => "0", 89 => "1", 90 => "0", 
    91 => "1", 92 => "0", 93 => "1", 94 => "0", 95 => "1", 96 => "0", 97 => "1", 
    98 => "0" );

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

entity pooling1d_cl_array_array_ap_fixed_16u_config4_s_pool_tablbkb is
    generic (
        DataWidth : INTEGER := 1;
        AddressRange : INTEGER := 99;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of pooling1d_cl_array_array_ap_fixed_16u_config4_s_pool_tablbkb is
    component pooling1d_cl_array_array_ap_fixed_16u_config4_s_pool_tablbkb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    pooling1d_cl_array_array_ap_fixed_16u_config4_s_pool_tablbkb_rom_U :  component pooling1d_cl_array_array_ap_fixed_16u_config4_s_pool_tablbkb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


