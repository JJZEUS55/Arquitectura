library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_arith.all;
use IEEE.STD_LOGIC_unsigned.all;

entity contador is

    Port ( dataIn : in  STD_LOGIC_VECTOR (3 downto 0);
           LB,EB,clr,clk : in  STD_LOGIC;
           dataOut : inout  STD_LOGIC_VECTOR (3 downto 0));
end contador;

architecture Behavioral of contador is

begin

process(clk,clr)
begin 
if(clr ='1')then 
 dataOut <= "0000";
 elsif (rising_edge(clk)) then 
		 if (lb = '1' and eb='0') then 
		 dataout <= dataIn;
		 --dataOut <= valor;
		 elsif(eb = '1' and lb='0')then    
		 dataOut <= dataout+1;
	
		 end if;
end if;
end process; 

end Behavioral;

