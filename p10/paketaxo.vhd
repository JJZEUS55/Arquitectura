
library IEEE;
use IEEE.STD_LOGIC_1164.all;

package paketaxo is

-----Entidad Unidad de Control
component Union is
    Port ( LFU, clk, clr   : in  STD_LOGIC;
           banderasU : in  STD_LOGIC_VECTOR (3 downto 0);
           CP_CODEU : in  STD_LOGIC_VECTOR (4 downto 0);
           IU : in  STD_LOGIC_VECTOR (3 downto 0);
			  --NIVEL_UC : out  STD_LOGIC;
           SalidaU : out  STD_LOGIC_VECTOR (19 downto 0));
end component;

-----Entidad Extensores

component extensorD is
    Port ( dirZwolf : in  STD_LOGIC_VECTOR (11 downto 0);
           dirSechzehn : out  STD_LOGIC_VECTOR (15 downto 0));
end component;

component extensorS is
    Port ( litZwolf : in  STD_LOGIC_VECTOR (11 downto 0);
           sLitSechzehn : out  STD_LOGIC_VECTOR (15 downto 0));
end component;

----Entidad memoria de Programa

component memProg is
generic (
		bus_dir : integer := 9;
	bus_datos : integer:= 25
);
    Port ( dir_r : in  STD_LOGIC_VECTOR (bus_dir-1 downto 0);
           data_out : out  STD_LOGIC_VECTOR (bus_datos-1 downto 0)
			  --clk : in STD_LOGIC
			  );
end component;

---- Entidad Archivo de Registros 

component p4 is
	generic
	(
		tam_palabra : integer := 16;
		tam_bus  : integer := 4
	);
	port
	(
		readR	: in 	std_logic_vector(tam_bus-1 downto 0);
		readR2	: in 	std_logic_vector(tam_bus-1 downto 0);
		writeRegister	: in 	std_logic_vector(tam_bus-1 downto 0);
		SHAMT				: in 	std_logic_vector(tam_bus-1 downto 0);
		writeData		: in 	std_logic_vector(tam_palabra-1 downto 0);
		readData1		: out	std_logic_vector(tam_palabra-1 downto 0);
		readData2		: out	std_logic_vector(tam_palabra-1 downto 0);
		SHE				: in	std_logic;
		dir				: in	std_logic;
		WR					: in	std_logic;
		clk				: in	std_logic;
		clr				: in	std_logic
	);

end component;

----- Entidad memoria de datos

component p5 is
generic (

		bus_dir : integer := 11;
	bus_datos : integer:= 16 
);
    Port ( --dir_r : in  STD_LOGIC_VECTOR (bus_dir-1 downto 0);
           dir_w : in  STD_LOGIC_VECTOR (bus_dir-1 downto 0);
           data_in : in  STD_LOGIC_VECTOR (bus_datos-1 downto 0);
           data_out : out  STD_LOGIC_VECTOR (bus_datos-1 downto 0);
           clk, wd : in  STD_LOGIC);
end component;

---- Entidad pila

component pila is

    Port ( DW,UP,L,CLR,CLK : in  STD_LOGIC;
           DATOS_PILA : in  STD_LOGIC_VECTOR (15 downto 0);
           BUS_PC : out  STD_LOGIC_VECTOR (15 downto 0));
end component;


--- Entidad ALU

component ALU_4bits is generic (N: integer := 16);
    Port ( a : in  STD_LOGIC_VECTOR (N-1 downto 0);
           b : in  STD_LOGIC_VECTOR (N-1 downto 0);
           op : in  STD_LOGIC_VECTOR (3 downto 0);
           res : inout  STD_LOGIC_VECTOR (N-1 downto 0);
	   z: out STD_LOGIC;
	   cb : out STD_LOGIC;
	   nb : out STD_LOGIC;
	   ov: out STD_LOGIC
			  );
			  

end component;



	


end paketaxo;
