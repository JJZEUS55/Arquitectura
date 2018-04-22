library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_arith.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;


entity memProg is
generic (
		bus_dir : integer := 11;
	bus_datos : integer:= 25
);
    Port ( dir_r : in  STD_LOGIC_VECTOR (bus_dir-1 downto 0);
           data_out : out  STD_LOGIC_VECTOR (bus_datos-1 downto 0)
--			  clk : in STD_LOGIC
			  );
           --clk, wd : in  STD_LOGIC);
end memProg;

architecture Behavioral of memProg is
--codigo de operacion
constant op_li : std_logic_Vector(4 downto 0) := "00001";
constant op_add : std_logic_Vector(4 downto 0) := "00000";
constant op_swi : std_logic_Vector(4 downto 0) := "00011";
constant op_b : std_logic_Vector(4 downto 0) := "10011";

--codigo de registros
constant R1 : std_logic_Vector(3 downto 0) := "0001";
constant R0 : std_logic_Vector(3 downto 0) := "0000";

--instrucciones 
constant i0 : std_logic_vector(24 downto 0) := op_li&R0&x"0001";
constant i1 : std_logic_vector(24 downto 0) := op_li&R1&x"0007";
constant i2 : std_logic_vector(24 downto 0) := op_add&R1&R1&R0&x"00";
constant i3 : std_logic_vector(24 downto 0) := op_swi&R1&x"0005";
constant i4 : std_logic_vector(24 downto 0) := op_b&R0&x"0002";

type ejemplo is array (0 to (2**bus_dir)-1) of std_logic_vector(bus_Datos-1 downto 0);
constant aux : ejemplo := (i0, i1, i2, i3, i4,others=>(others=> '0'));

begin

--	process(clk)
--	begin		
--		if (rising_edge(clk)) then
--			if (WD = '1') then --escritura
--				aux(conv_integer(dir_w)) <= data_in;
--			end if;
--		end if;
--	end process;

	data_out <= aux(conv_integer(dir_r));


end Behavioral;


