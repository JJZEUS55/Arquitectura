
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity control is
    Port ( clk, clr, ini, a0, z : in  STD_LOGIC;
           la, ea, lb, eb, ec : out  STD_LOGIC);
end control;

architecture Behavioral of control is
type  estados is (E1, E2, E3);
signal edo_act, edo_sig: estados;


begin

process(clk, clr)
 begin 
  if(clr ='1')then 
   edo_act <= E1;
 elsif(rising_edge(clk))then 
   edo_act <= edo_sig;
 end if;
end process;

process(edo_act, ini, z, a0)
 begin 
 	la <= '0';
	 EA <= '0';
	 EB <= '0';
	 EC <= '0';
	LB<='0';
 case edo_act is 
  when E1 =>
    LB <= '1';
	 if(ini ='1')then 
	  edo_sig <= E2;
	 else
	 LA <= '1';
	  edo_sig <= E1;
	 end if;
  when E2 =>
         EA <= '1';
	 if(z ='0')then 
           if(a0 = '1')then
             eb <= '1';
           end if;
	  edo_sig <= E2;
	 else 
         edo_sig <= E3; 
	 end if;
  when E3 =>
    	EC <= '1';
   if(ini='1')then 
     edo_sig <= E3;
   else 
     edo_sig <= E1;
   end if;
end case;
end process;
	

end Behavioral;

