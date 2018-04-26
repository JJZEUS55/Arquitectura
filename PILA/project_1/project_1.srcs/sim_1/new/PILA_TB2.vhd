
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use std.textio.all;
use ieee.Numeric_std.all;
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_textio.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY PILA_TB2 IS
END PILA_TB2;
 
ARCHITECTURE behavior OF PILA_TB2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT PILA
    PORT(
         datos : IN  std_logic_vector(15 downto 0);
         PCout : OUT  std_logic_vector(15 downto 0);
         clk : IN  std_logic;
         clr : IN  std_logic;
         up : IN  std_logic;
			down : IN  std_logic;
			stack : out integer range 0 to 15;
         wpc : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal datos : std_logic_vector(15 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal clr : std_logic := '0';
   signal up : std_logic := '0';
	signal down : std_logic := '0';
   signal wpc : std_logic := '0';
	

 	--Outputs
   signal PCout : std_logic_vector(15 downto 0);
	signal stack : integer range 0 to 15;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: PILA PORT MAP (
          datos => datos,
          PCout => PCout,
          clk => clk,
          clr => clr,
          up => up,
			 stack => stack,
          wpc => wpc,
			 down => down
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
      -- hold reset state for 100 ns.
      --Entradas
            FILE archivoEntrada : TEXT;
            VARIABLE lineaEntrada : LINE;
      --        
              VARIABLE var_Din, var_Pcout: STD_LOGIC_VECTOR ( 15 DOWNTO 0 );
              VARIABLE var_up, var_dw, var_clr, var_l: STD_LOGIC;
              
              --Salidas
              FILE archivoSalida : TEXT;
              VARIABLE lineaOut : LINE;
              
              VARIABLE var_Dout, var_SP: integer range 0 to 15;
              --VARIABLE var_sp: STD_LOGIC_VECTOR (2 downto 0);
      
              VARIABLE cadena : STRING ( 1 TO 5 );
              VARIABLE cadena1 : STRING ( 1 TO 4 );
              VARIABLE cadena3 : STRING ( 1 TO 3 );
              VARIABLE cadena2 : STRING ( 1 TO 2 );
          begin
              
              FILE_OPEN (archivoEntrada, "in.txt", READ_MODE);
              FILE_OPEN (archivoSalida, "out.txt", WRITE_MODE);
      
              cadena1 := "CLR ";
              WRITE ( lineaOut, cadena1, RIGHT, cadena1'LENGTH+1 );
              cadena1 := " UP ";
              WRITE ( lineaOut, cadena1, RIGHT, cadena1'LENGTH+1 );
              cadena1 := " DW ";
              WRITE ( lineaOut, cadena1, RIGHT, cadena1'LENGTH+1 );
              cadena1 := "WPC ";
              WRITE ( lineaOut, cadena1, RIGHT, cadena1'LENGTH+1 );
              cadena := "DATOS";
              WRITE ( lineaOut, cadena, RIGHT, cadena'LENGTH+1 );
              cadena1 := " SP ";
              WRITE ( lineaOut, cadena1, RIGHT, cadena1'LENGTH+1 );
              cadena1 := " PCc";
              WRITE ( lineaOut, cadena1, RIGHT, cadena1'LENGTH+1 );
      
              WRITELINE (archivoSalida, lineaOut);
              
              WAIT FOR 10 NS;
              --Se lee hasta encontrar el fin del archivo
              WHILE NOT ENDFILE (archivoEntrada) LOOP
                  
                  READLINE (archivoEntrada,lineaEntrada);
                  
                  HREAD(lineaEntrada, var_Din);
                  datos <= var_Din;
                  
                  READ(lineaEntrada, var_up);
                  UP <= var_up;
                  
                  READ(lineaEntrada, var_dw);
                  down <= var_dw;
                  
                  READ(lineaEntrada, var_l);
                  wpc <= var_l;
                  
                  READ(lineaEntrada, var_clr);
                  clr <= var_clr;
                     
                  WAIT UNTIL RISING_EDGE ( clk );
                  
                  --var_Dout := stack;
                  var_Pcout := PCout;
                  var_SP := stack;
      
                  --Se escriben entradas
                  WRITE(lineaOut, var_clr, RIGHT, 5 );
                  WRITE(lineaOut, var_up, RIGHT, 5 );
                  WRITE(lineaOut, var_dw, RIGHT, 5 );
                  WRITE(lineaOut, var_l, RIGHT, 5 );
               HWRITE(lineaOut, var_Din , RIGHT, 5 ); 
               WRITE(lineaOut, integer'image(var_SP), RIGHT, 5 );    
               HWRITE(lineaOut, var_Pcout, RIGHT, 5 );  
                        
                  
                  
                  
                  --Se escriben salidas
                  --WRITE(lineaOut, var_sp, RIGHT, 5 );
                 -- HWRITE(lineaOut, '0'&var_Dout, RIGHT, 5 );
                  WRITELINE(archivoSalida, lineaOut);
                  
              END LOOP;    
              
              --Se cierran archivos de texto
              FILE_CLOSE(archivoEntrada);
              FILE_CLOSE(archivoSalida);
              WAIT;  

      -- insert stimulus here 

      --wait;
   end process;

END;
