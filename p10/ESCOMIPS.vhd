
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library work;
use work.paketaxo.all;

entity ESCOMIPS is
    Port ( clk,clr : in  STD_LOGIC;
           salidaESCOMIPS : out  STD_LOGIC_VECTOR (15 downto 0);
			  banderasESCOM : out std_logic_vector (3 downto 0);
			  MICRO : out std_logic_vector (19 downto 0);
			  instruccionS : out std_logic_vector (24 downto 0);
			  lectura1, lectura2 : out std_logic_vector (15 downto 0);
			  salidaContador : out std_logic_vector (15 downto 0);
			  salidaALUESCOM : out std_logic_vector (3 downto 0);
			  salidaDatosPrueba : out std_logic_vector(15 downto 0)
			  
			  );
end ESCOMIPS;

architecture Behavioral of ESCOMIPS is

-----Señales memoria de programa 
signal instruccion : std_logic_vector(24 downto 0);
signal contador : std_logic_vector (15 downto 0);
signal datoPila : std_logic_vector (15 downto 0);
signal entradaMem : std_logic_vector(8 downto 0);

---- Señal nueva de clear
signal clear2 : std_logic;

----- Señales de la pila 
signal up2, dw2, wpc2: std_logic;

--- señales de la unidad de control
signal SDMPE, SR2E, SWDE, SEXTE, SOP1E, SOP2E, SDMDE, SRE, SHEE, DIRE, WRE, WDE : std_logic;
signal aluopE : std_logic_vector (3 downto 0);


signal banderasE :std_logic_vector (3 downto 0);
signal RDE, RDE2 : std_logic_vector (15 downto 0);

signal salidaMicro : std_logic_vector (19 downto 0);
signal salidaALU : std_logic_vector (15 downto 0);
signal salidaMemDatos : std_logic_vector (15 downto 0);

---- señales Salidas Mux sdmd 

signal salidaSDMDE : std_logic_vector (10 downto 0);
signal salidaSDMPE : std_logic_vector (15 downto 0);
signal salidaSR2E : std_logic_vector (3 downto 0);
signal salidaSWDE : std_logic_vector (15 downto 0);
signal salidaSEXTE : std_logic_vector (15 downto 0);
signal salidaSRE : std_logic_vector (15 downto 0);


---- señales Muxes ALU

signal SOP1MUX : STD_LOGIC_VECTOR(15 downto 0);
signal SOP2MUX : STD_LOGIC_VECTOR(15 downto 0);


signal salidaExtensorD, salidaExtensorS : std_logic_vector(15 downto 0);	

begin

PROCESS(clk)
BEGIN 
	IF(falling_edge(clk))then 
	  clear2 <= clr;
	 end if;
end process;

memoriaPrograma1 : memProg port map(entradaMem,instruccion);

pila1 : pila port map(up2, dw2, wpc2,clear2,clk,datoPila,contador);           
	
memoriaDatos : p5 port map(salidaSDMDE, RDE2, salidaMemDatos , clk, WDE);

extensorDE : extensorD port map(instruccion(11 downto 0), salidaExtensorD);

extensorSE : extensorS port map(instruccion(11 downto 0), salidaExtensorS);

aluFinal : ALU_4bits port map(SOP1MUX, SOP2MUX, salidaMicro(7 downto 4), salidaALU, banderasE(0), banderasE(1), banderasE(2), banderasE(3));

archivoReg : p4 port map(instruccion(15 downto 12), salidaSR2E, instruccion(19 downto 16), instruccion(7 downto 4), salidaSWDE , RDE, RDE2, SHEE, DIRE, WRE, clk, clear2);

unionE : Union port map(salidaMicro(0), clk, clear2, banderasE, instruccion(24 downto 20), instruccion(3 downto 0), salidaMicro);

entradaMem <= contador(8 downto 0);

datoPila <= instruccion(15 downto 0) when SDMPE = '0' else
            salidaSRE;
				
salidaSR2E <= instruccion(11 downto 8) when SR2E = '0' else
              instruccion(19 downto 16);
				  
salidaSWDE <= instruccion(15 downto 0) when  SWDE = '0' else
              salidaSRE;
		
salidaSEXTE <= salidaExtensorS when SEXTE = '0' else 
               salidaExtensorD;
				 
SOP1MUX <=   RDE when SOP1E = '0' else
             contador;
				 
SOP2MUX <=   RDE2 when SOP2E = '0' else
             salidaSEXTE;

salidaSDMDE <= salidaALU(10 downto 0) when SDMDE = '0' else 
               instruccion(10 downto 0);
					
				
salidaSRE <= salidaMemDatos  when SRE = '0' else 
             salidaALU;



SDMPE <= salidaMicro(19);
SR2E <= salidaMicro(15);
SWDE <= salidaMicro(14);
SEXTE <= salidaMicro(13);
SOP1E <= salidaMicro(9);
SOP2E <= salidaMicro(8); 
SDMDE <= salidaMicro(3);
SRE <= salidaMicro(1);
SHEE <= salidaMicro(12);
DIRE <= salidaMicro(11);
WRE <= salidaMicro(10);
WDE <= salidaMicro(2);
up2 <= salidaMicro(18);
dw2 <= salidaMicro(17);
wpc2 <= salidaMicro(16);


salidaESCOMIPS <= salidaALU;

           banderasESCOM <= banderasE;
			  MICRO <= salidaMicro;
			  instruccionS <= instruccion;
			  lectura1 <= RDE;
			  lectura2 <= RDE2;
			  salidaContador <= contador;
			  salidaALUESCOM <= instruccion(7 downto 4);
           salidaDatosPrueba <= salidaMemDatos;
end Behavioral;

