
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_arith.all;
use IEEE.STD_LOGIC_unsigned.all;

entity union is
    Port ( dato : in  STD_LOGIC_VECTOR (8 downto 0);
           clk, clr, ini2  : in  STD_LOGIC;
			 --- z1, lbu, lau, ecu, eau, ebu : out  STD_LOGIC;
           display2 : out  STD_LOGIC_VECTOR (6 downto 0);
           anodo : out  STD_LOGIC_VECTOR (3 downto 0);
			  clk_out : out std_logic;
           a : inout  STD_LOGIC_VECTOR (8 downto 0));
end union;

architecture Behavioral of union is


-- entidad contador
			component contador is 
			 Port ( dataIn : in  STD_LOGIC_VECTOR (3 downto 0);
						  LB,EB,clr,clk : in  STD_LOGIC;
						  dataOut : inout  STD_LOGIC_VECTOR (3 downto 0));
			end component;

-- entidad decodificador
			component deco is
				 Port ( bcd : in  STD_LOGIC_VECTOR (3 downto 0);
						  display  : out  STD_LOGIC_VECTOR (6 downto 0));
			end component;

-- entidad registro
			 component registro is
				 Port ( datoEntrada : in  STD_LOGIC_VECTOR (8 downto 0);
						  LA, EA, clr, clk : in  STD_LOGIC;
						  datoSalida : inout  STD_LOGIC_VECTOR (8 downto 0));
			end component;

-- Entidad mux
			component mux is
				 Port ( dataCounter : in  STD_LOGIC_VECTOR (3 downto 0);
						  EC: in std_logic;
						  dataOut : out std_logic_vector (3 downto 0));
			end component;
			
-- Entidad control
			  component control is
				Port ( clk, clr, ini, a0, z : in  STD_LOGIC;
					  la, ea, lb, eb, ec : out  STD_LOGIC);
				end component;
				
-- Entidad Divisor
				component	divFrecuencia is
						 Port ( osc_clk, clr : in  STD_LOGIC;
						        clk : out  STD_LOGIC);
					end component;

				
signal a2 : std_logic_vector (8 downto 0);
signal la2, ea2, z2, ec2, eb2, lb2, clk2 : std_logic;
signal salContador, salMux : std_logic_vector (3 downto 0);



begin
   
	anodo <= "1000";
	
	clk_out <= clk2;
   
--	valorBCD <= salContador;
	
	divisor1 : divFrecuencia port map(clk, clr, clk2);
	
   registro1 : registro port map(dato, la2, ea2, clr, clk2, a);
	
	z2 <= '1' when a = "000000000" else '0';

	control1 : control port map(clk2, clr, ini2, a(0), z2, la2, ea2, lb2, eb2, ec2);
			 
	contador1 : contador port map("0000", lb2, eb2, clr, clk2, salContador);
	
	mux1 : mux port map(salContador, ec2, salMux );
	
	deco1 : deco port map(salMux, display2);
	
--	z1 <= z2;
--	lbu <= lb2; 
--	lau <= la2;
--	ecu <= ec2;
--	eau <= ea2;
--	ebu <= eb2;
  	
end Behavioral;

