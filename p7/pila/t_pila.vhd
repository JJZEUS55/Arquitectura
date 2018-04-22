LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use std.textio.all;
use ieee.Numeric_std.all;
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_textio.all;

ENTITY t_pila IS
END t_pila;
 
ARCHITECTURE behavior OF t_pila IS 
 
    COMPONENT pila
    PORT(
         DW : IN  std_logic;
         UP : IN  std_logic;
         L : IN  std_logic;
         CLR : IN  std_logic;
         CLK : IN  std_logic;
         DATOS_PILA : IN  std_logic_vector(10 downto 0);
         BUS_PC : OUT  std_logic_vector(10 downto 0);
         SP_OUT : OUT  std_logic_vector(2 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal DW : std_logic := '0';
   signal UP : std_logic := '0';
   signal L : std_logic := '0';
   signal CLR : std_logic := '0';
   signal CLK : std_logic := '0';
   signal DATOS_PILA : std_logic_vector(10 downto 0) := (others => '0');

 	--Outputs
   signal BUS_PC : std_logic_vector(10 downto 0);
   signal SP_OUT : std_logic_vector(2 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: pila PORT MAP (
          DW => DW,
          UP => UP,
          L => L,
          CLR => CLR,
          CLK => CLK,
          DATOS_PILA => DATOS_PILA,
          BUS_PC => BUS_PC,
          SP_OUT => SP_OUT
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;


   -- Stimulus process
   stim_proc: process
   
     --Entradas
      FILE archivoEntrada : TEXT;
  		VARIABLE lineaEntrada : LINE;
--		
		VARIABLE var_Din: STD_LOGIC_VECTOR ( 7 DOWNTO 0 );
		VARIABLE var_up, var_dw, var_clr, var_l: STD_LOGIC;
		
		--Salidas
		FILE archivoSalida : TEXT;
		VARIABLE lineaOut : LINE;
		
		VARIABLE var_Dout: STD_LOGIC_VECTOR (10 downto 0);
		VARIABLE var_sp: STD_LOGIC_VECTOR (2 downto 0);

		VARIABLE cadena : STRING ( 1 TO 5 );
		VARIABLE cadena1 : STRING ( 1 TO 4 );
		VARIABLE cadena3 : STRING ( 1 TO 3 );
		VARIABLE cadena2 : STRING ( 1 TO 2 );
	begin
		
		FILE_OPEN (archivoEntrada, "in.txt", READ_MODE);
		FILE_OPEN (archivoSalida, "out.txt", WRITE_MODE);

		cadena1 := "DATA";
		WRITE ( lineaOut, cadena1, RIGHT, cadena1'LENGTH+1 );
		cadena1 := " UP ";
		WRITE ( lineaOut, cadena1, RIGHT, cadena1'LENGTH+1 );
		cadena1 := "DOWN";
		WRITE ( lineaOut, cadena1, RIGHT, cadena1'LENGTH+1 );
		cadena1 := "LOAD";
		WRITE ( lineaOut, cadena1, RIGHT, cadena1'LENGTH+1 );
		cadena := " CLR ";
		WRITE ( lineaOut, cadena, RIGHT, cadena'LENGTH+1 );
		cadena1 := " SP ";
		WRITE ( lineaOut, cadena1, RIGHT, cadena1'LENGTH+1 );
		cadena1 := " PC ";
		WRITE ( lineaOut, cadena1, RIGHT, cadena1'LENGTH+1 );

		WRITELINE (archivoSalida, lineaOut);
		
		WAIT FOR 10 NS;
		--Se lee hasta encontrar el fin del archivo
		WHILE NOT ENDFILE (archivoEntrada) LOOP
			
			READLINE (archivoEntrada,lineaEntrada);
			
			HREAD(lineaEntrada, var_Din);
			DATOS_PILA <= "000"&var_Din;
			
			READ(lineaEntrada, var_up);
			UP <= var_up;
			
			READ(lineaEntrada, var_dw);
			DW <= var_dw;
			
			READ(lineaEntrada, var_l);
			L <= var_l;
			
			READ(lineaEntrada, var_clr);
			CLR <= var_clr;
				
			WAIT UNTIL RISING_EDGE ( clk );
			
         var_Dout := BUS_PC;
			var_sp := SP_OUT;

			--Se escriben entradas
         HWRITE(lineaOut, var_Din , RIGHT, 5 );
			WRITE(lineaOut, var_up, RIGHT, 5 );
			WRITE(lineaOut, var_dw, RIGHT, 5 );
			WRITE(lineaOut, var_l, RIGHT, 5 );
			WRITE(lineaOut, var_clr, RIGHT, 5 );
			--Se escriben salidas
			WRITE(lineaOut, var_sp, RIGHT, 5 );
			HWRITE(lineaOut, '0'&var_Dout, RIGHT, 5 );

			WRITELINE(archivoSalida, lineaOut);
		END LOOP;	
		
		--Se cierran archivos de texto
		FILE_CLOSE(archivoEntrada);
		FILE_CLOSE(archivoSalida);
		WAIT;
   end process;

END;
