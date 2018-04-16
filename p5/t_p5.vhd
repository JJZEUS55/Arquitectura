LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use std.textio.all;
use ieee.Numeric_std.all;
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_textio.all;

ENTITY t_p5 IS
generic (
    
            bus_dir : integer := 11;
        bus_datos : integer:= 16 
    ); 
END t_p5;
 
ARCHITECTURE behavior OF t_p5 IS 

    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT p5
    
    PORT(
         dir_w : IN  std_logic_vector(bus_dir-1 downto 0);
         data_in : IN  std_logic_vector(bus_datos-1 downto 0);
         data_out : OUT  std_logic_vector(bus_datos-1 downto 0);
         clk : IN  std_logic;
         wd : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal dir_w : std_logic_vector(bus_dir-1 downto 0) := (others => '0');
   signal data_in : std_logic_vector(bus_datos-1 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal wd : std_logic := '0';
	signal data_in2 : std_logic_vector (bus_datos-1 downto 0) := (others => '0');

 	--Outputs
   signal data_out : std_logic_vector(bus_datos-1 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: p5 PORT MAP (
          dir_w => dir_w,
          data_in => data_in,
          data_out => data_out,
          clk => clk,
          wd => wd
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   
     --Entradas
		FILE archivoEntrada : TEXT;
		VARIABLE lineaEntrada : LINE;
		
		VARIABLE var_wd : STD_LOGIC;
		VARIABLE var_Dir: STD_LOGIC_VECTOR ( bus_dir-1 DOWNTO 0 );
		VARIABLE var_Din: STD_LOGIC_VECTOR ( bus_datos-1 DOWNTO 0 );
		
		--Salidas
		FILE archivoSalida : TEXT;
		VARIABLE lineaOut : LINE;
		
		VARIABLE var_Dout: STD_LOGIC_VECTOR ( bus_datos-1 DOWNTO 0 );

		VARIABLE cadena : STRING ( 1 TO 4 );
		VARIABLE cadenaA : STRING ( 1 TO 2 );
		VARIABLE cadena1 : STRING ( 1 TO 5 );
	begin
		
		FILE_OPEN (archivoEntrada, "in.txt", READ_MODE);
		FILE_OPEN (archivoSalida, "out.txt", WRITE_MODE);
		
		cadenaA := " A";
		WRITE ( lineaOut, cadenaA, RIGHT, cadenaA'LENGTH+1 );
		cadena := " DIN";
		WRITE ( lineaOut, cadena, RIGHT, cadena'LENGTH+1 );
		cadena := "  WD";
		WRITE ( lineaOut, cadena, RIGHT, cadena'LENGTH+1 );
		cadena := "DOUT";
		WRITE ( lineaOut, cadena, RIGHT, cadena'LENGTH+1 );
		
		WRITELINE (archivoSalida, lineaOut);
		
		WAIT FOR 10 NS;
		--Se lee hasta encontrar el fin del archivo
		WHILE NOT ENDFILE (archivoEntrada) LOOP
			
			READLINE (archivoEntrada,lineaEntrada);
			  
			HREAD(lineaEntrada, var_Din);
			data_in <= var_Din;		
			
			HREAD(lineaEntrada, var_Dir);
            dir_w <= var_Dir;  
			
			READ(lineaEntrada, var_wd);
			wd <= var_wd;
			
			WAIT UNTIL RISING_EDGE ( clk );
			
			var_Dout := data_out;
			
			--Se escriben entradas
			HWRITE(lineaOut, var_Dir, RIGHT, 4 );
			HWRITE(lineaOut, var_Din, RIGHT, 5 );
			WRITE(lineaOut, var_wd, RIGHT, 5 );
			
			--Se escriben salidas
			
			HWRITE(lineaOut, var_Dout, RIGHT, 5 );
			
			WRITELINE(archivoSalida, lineaOut);
			
		END LOOP;
		
		--Se cierran archivos de texto
		FILE_CLOSE(archivoEntrada);
		FILE_CLOSE(archivoSalida);
		WAIT;
   end process;

END;
