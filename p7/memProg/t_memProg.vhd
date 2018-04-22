
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use std.textio.all;
use ieee.Numeric_std.all;
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_textio.all;

ENTITY t_memProg IS
END t_memProg;
 
ARCHITECTURE behavior OF t_memProg IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT memProg
    PORT(
         dir_r : IN  std_logic_vector(9 downto 0);
			  clk : IN  std_logic;
         data_out : OUT  std_logic_vector(24 downto 0)
			
        );
    END COMPONENT;
    

   --Inputs
   signal dir_r : std_logic_vector(9 downto 0) := (others => '0');
	signal clk : std_logic := '0';

 	--Outputs
   signal data_out : std_logic_vector(24 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: memProg PORT MAP (
          dir_r => dir_r,
			 clk => clk,
          data_out => data_out
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
--		
		VARIABLE var_Dir: STD_LOGIC_VECTOR ( 9 DOWNTO 0 );
		
		--Salidas
		FILE archivoSalida : TEXT;
		VARIABLE lineaOut : LINE;
		
		VARIABLE var_Dout: STD_LOGIC_VECTOR (24 downto 0);

		VARIABLE cadena : STRING ( 1 TO 5 );
		VARIABLE cadena1 : STRING ( 1 TO 4 );
		VARIABLE cadena3 : STRING ( 1 TO 3 );
	begin
		
		FILE_OPEN (archivoEntrada, "in.txt", READ_MODE);
		FILE_OPEN (archivoSalida, "out.txt", WRITE_MODE);

		cadena1 := "OPER";
		WRITE ( lineaOut, cadena1, RIGHT, cadena1'LENGTH+1 );
		cadena := "19-16";
		WRITE ( lineaOut, cadena, RIGHT, cadena'LENGTH+1 );
		cadena := "15-12";
		WRITE ( lineaOut, cadena, RIGHT, cadena'LENGTH+1 );
		cadena1 := "11-8";
		WRITE ( lineaOut, cadena1, RIGHT, cadena1'LENGTH+1 );
		cadena3 := "7-4";
		WRITE ( lineaOut, cadena3, RIGHT, cadena3'LENGTH+1 );
		cadena3 := "3-0";
		WRITE ( lineaOut, cadena3, RIGHT, cadena3'LENGTH+1 );

		WRITELINE (archivoSalida, lineaOut);
		
		WAIT FOR 10 NS;
		
		WHILE NOT ENDFILE (archivoEntrada) LOOP
			
			READLINE (archivoEntrada,lineaEntrada);
			
			READ(lineaEntrada, var_Dir);
			dir_r <= var_Dir;
			
			WAIT UNTIL RISING_EDGE ( clk );
			

         var_Dout := data_out;


			--Se escriben entradas
         WRITE(lineaOut, var_Dout (24 downto 20) , RIGHT, 5 );
			WRITE(lineaOut, var_Dout (19 downto 16) , RIGHT, 5 );
			WRITE(lineaOut, var_Dout (15 downto 12) , RIGHT, 5 );
			WRITE(lineaOut, var_Dout (11 downto 8) , RIGHT, 5 );
			WRITE(lineaOut, var_Dout (7 downto 4), RIGHT, 5 );
			WRITE(lineaOut, var_Dout (3 downto 0) , RIGHT, 5 );
			--Se escriben salidas

			WRITELINE(archivoSalida, lineaOut);
		END LOOP;	
		--Se cierran archivos de texto
		FILE_CLOSE(archivoEntrada);
		FILE_CLOSE(archivoSalida);
		WAIT;
   end process;

END;