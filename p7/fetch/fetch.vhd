
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity fetch is

generic (
	bus_dir : integer := 11;
	bus_datos : integer:= 25
);
    Port ( data_in_pila : in  STD_LOGIC_VECTOR (10 downto 0);
           load,up,down,clk,clr : in  STD_LOGIC;
           stackP : out  STD_LOGIC_VECTOR (2 downto 0);
			  q: out std_logic_vector (10 downto 0);
           ins : out  STD_LOGIC_VECTOR (24 downto 0)
			  );
end fetch;

architecture Behavioral of fetch is
signal sal_pila : std_logic_vector(10 downto 0);

--componente de la memoria de programa
		component memProg is
		Port ( dir_r : in  STD_LOGIC_VECTOR (bus_dir-1 downto 0);
					  data_out : out  STD_LOGIC_VECTOR (bus_datos-1 downto 0)
					  --clk : in STD_LOGIC
					  );
					 
		end component;

--componente de la pila

		component pila is 
		Port ( DW,UP,L,CLR,CLK : in  STD_LOGIC;
					  DATOS_PILA : in  STD_LOGIC_VECTOR (10 downto 0);
					  BUS_PC : out  STD_LOGIC_VECTOR (10 downto 0);
					  SP_OUT : out  STD_LOGIC_VECTOR (2 downto 0));
		end component;

begin


		pila1 : pila port map(
		
		    DW => down,
			 UP => up,
			 L => load,
			 CLR => clr,
			 CLK => clk,
			 DATOS_PILA => data_in_pila,
			 SP_OUT => stackP,
			 BUS_PC => sal_pila
			 
			 );
			 
		memoria1 : memProg port map(
		   
			dir_r => sal_pila,
			data_out => ins
	  
			 );
			 
			 q <= sal_pila;
end Behavioral;

