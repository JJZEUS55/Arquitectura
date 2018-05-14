
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_arith.ALL;
use IEEE.STD_LOGIC_unsigned.all;

entity divFrecuencia is
    Port ( osc_clk, clr : in  STD_LOGIC;
           clk : out  STD_LOGIC);
end divFrecuencia;

architecture Behavioral of divFrecuencia is
signal cont: std_logic_vector (23 downto 0);

begin

process(osc_clk, clr)
begin 

 if(clr = '1') then 
   cont <= (others => '0');
 elsif (rising_edge(osc_clk)) then  
   cont <= cont + 1;
 end if; 
 end process;
 
 clk <= cont(23);

end Behavioral;

