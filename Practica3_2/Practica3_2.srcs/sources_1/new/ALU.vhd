
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ALU_4bits is generic (N: integer := 4);
    Port ( a : in  STD_LOGIC_VECTOR (N-1 downto 0);
           b : in  STD_LOGIC_VECTOR (N-1 downto 0);
           op : in  STD_LOGIC_VECTOR (3 downto 0);
           res : inout  STD_LOGIC_VECTOR (N-1 downto 0);
	   z: out STD_LOGIC;
	   cb : out STD_LOGIC;
	   nb : out STD_LOGIC;
	   ov: out STD_LOGIC
			  );
			  

end ALU_4bits;

architecture A_ALU_4bits of ALU_4bits is

signal a_invert: STD_LOGIC;
signal b_invert: STD_LOGIC;


signal a_Res, b_Res : STD_LOGIC_VECTOR (N-1 downto 0);

signal and_Res: STD_LOGIC_VECTOR (N-1 downto 0);
signal or_Res : STD_LOGIC_VECTOR (N-1 downto 0);
signal xor_Res : STD_LOGIC_VECTOR (N-1 downto 0); 
signal sum_Res: STD_LOGIC_VECTOR (N-1 downto 0);
signal c: STD_LOGIC_VECTOR (N downto 0);

begin
	c(0) <= b_invert;

	a_invert <= op(3);
	b_invert <= op(2);
	
	alu: for i in 0 to N-1 generate

		a_Res(i) <= a(i) xor a_invert;
		b_Res(i) <= b(i) xor b_invert;
		
		and_Res(i) <= a_Res(i) and b_Res(i);
		or_Res(i) <= a_Res(i) or b_Res(i);
		xor_Res(i) <= a_Res(i) xor b_Res(i);
		
		sum_Res(i) <= a_res(i) xor b_Res(i) xor c(i);
		c(i+1) <= (a_Res(i) and c(i)) or (b_Res(i) and c(i)) or (a_Res(i) and b_Res(i));
		
		res(i) <= and_Res(i) when op(1 downto 0) = "00" else
	        or_Res(i)  when op(1 downto 0) = "01" else
		xor_Res(i) when op(1 downto 0) = "10" else 
		sum_Res(i);
	
				
	end generate;
	
	z <= '1' when res = "0000" else '0'; 
        cb <= c(N) when op (1 downto 0) = "11" else '0';
        nb <= '1' when res(N-1) = '1' else '0';
        ov <= (c(N) xor c(N-1)) when op(1 downto 0) = "11" else '0';
  
	
end A_ALU_4bits;