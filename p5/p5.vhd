library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_arith.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;


entity p5 is
generic (

		bus_dir : integer := 11;
	bus_datos : integer:= 16 
);
    Port ( --dir_r : in  STD_LOGIC_VECTOR (bus_dir-1 downto 0);
           dir_w : in  STD_LOGIC_VECTOR (bus_dir-1 downto 0);
           data_in : in  STD_LOGIC_VECTOR (bus_datos-1 downto 0);
           data_out : out  STD_LOGIC_VECTOR (bus_datos-1 downto 0);
           clk, wd : in  STD_LOGIC);
end p5;

architecture Behavioral of p5 is
type ejemplo is array (0 to (2**bus_dir)-1) of std_logic_vector(bus_Datos-1 downto 0);
signal aux : ejemplo := (others=>(others=> '0')); 
--signal aux2 : ejemplo := (others=>(others=> '0'));
--signal data2 : std_logic_vector(bus_dir downto 0); 
begin

 --data2 <= '0'&data_in;
 
	process(clk)
	
	begin

		if (rising_edge(clk)) then
			if (WD = '1') then --escritura
				aux(conv_integer(dir_w)) <= data_in;
			end if;
		else 
		     
		end if;
	end process;

	data_out <= aux(conv_integer(dir_w));


end Behavioral;

