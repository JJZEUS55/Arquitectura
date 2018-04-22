
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_arith.all;
use IEEE.STD_LOGIC_unsigned.all;

entity pila is
generic( n: integer := 8);

    Port ( DW,UP,L,CLR,CLK : in  STD_LOGIC;
           DATOS_PILA : in  STD_LOGIC_VECTOR (15 downto 0);
           BUS_PC : out  STD_LOGIC_VECTOR (15 downto 0));
end pila;

architecture Behavioral of pila is
type pila is array (0 to n-1) of std_logic_vector (15 downto 0); 
signal aux: pila;

begin

process(CLK, CLR, aux)
variable sp: integer range 0 to n-1;
	begin 
	 if (CLR= '1') then 
	    sp:=0;								-- clear
		 for i in 0 to n-1 loop
		   aux(i) <= (others=>'0');
	    end loop;
    elsif (clk'event and CLK ='1')then 
		 if(L='0' and UP='0' and DW='0') then -- normal 
			 sp:=sp;
			 aux(sp) <= aux(sp)+1;
		 elsif(L='1' and UP='0' and DW='0') then --Salto
		    aux(sp) <= DATOS_PILA;
		 elsif(L='1' and UP='1' and DW='0') then --Call
		    if(sp = 7) then 
			 sp:=sp;
			 aux(sp)<= DATOS_PILA;
			 else
		    sp:=sp+1;
			 aux(sp)<= DATOS_PILA;
			 end if;
		 elsif(L='0' and UP='0' and DW='1') then --Ret
		    if(sp = 0)then
			 sp:=sp;
			 aux(sp)<=aux(sp)+1;
			 else 
		    sp:=sp-1;
			 aux(sp)<=aux(sp)+1;
			 end if;
		 end if;
	 end if;
	 
	 BUS_PC <= aux(sp);
end process;			
end Behavioral;

