
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_arith.all;
use IEEE.numeric_std.all;
use IEEE.STD_LOGIC_unsigned.all;

entity registro is
    Port ( datoEntrada : in  STD_LOGIC_VECTOR (8 downto 0);
           LA, EA, clr, clk : in  STD_LOGIC;
           datoSalida : inout  STD_LOGIC_VECTOR (8 downto 0));
end registro;

architecture Behavioral of registro is

--signal dato : std_logic_vector (8 downto 0);
begin

process(clk, clr)
begin 
  if(clr = '1')then
--  dato <= "000000000";
  datoSalida <= "000000000";
  elsif(rising_edge(clk))then
   if(LA = '1' and EA = '0')then 
			datoSalida <= datoEntrada;
		elsif(LA = '0' and EA = '1')then
		    datoSalida <= to_stdlogicvector(to_bitvector(datoSalida) srl 1);
--			 datoSalida <= dato;
  end if;
  end if;
 end process;
  
end Behavioral;

