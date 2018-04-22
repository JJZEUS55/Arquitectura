LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use std.textio.all;
use ieee.Numeric_std.all;
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_textio.all;


ENTITY t_fecth IS
END t_fecth;
 
ARCHITECTURE behavior OF t_fecth IS 
 
 
    COMPONENT fetch
    PORT(
         data_in_pila : IN  std_logic_vector(10 downto 0);
         load : IN  std_logic;
         up : IN  std_logic;
         down : IN  std_logic;
         clk : IN  std_logic;
         clr : IN  std_logic;
         stackP : OUT  std_logic_vector(2 downto 0);
			q: out std_logic_vector (10 downto 0);
         ins : OUT  std_logic_vector(24 downto 0)
        );
    END COMPONENT;
  


   --Inputs
   signal data_in_pila : std_logic_vector(10 downto 0) := (others => '0');
   signal load : std_logic := '0';
   signal up : std_logic := '0';
   signal down : std_logic := '0';
   signal clk : std_logic := '0';
   signal clr : std_logic := '0';
   signal q : std_logic_vector(10 downto 0) := (others => '0');
 	--Outputs
   signal stackP : std_logic_vector(2 downto 0);
   signal ins : std_logic_vector(24 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: fetch PORT MAP (
          data_in_pila => data_in_pila,
          load => load,
          up => up,
          down => down,
          clk => clk,
          clr => clr,
          stackP => stackP,
			 q => q,
          ins => ins
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
		VARIABLE var_Din: STD_LOGIC_VECTOR ( 10 DOWNTO 0 );
		VARIABLE var_up, var_dw, var_clr, var_l: STD_LOGIC;
		
		--Salidas
		FILE archivoSalida : TEXT;
		VARIABLE lineaOut : LINE;
		
		VARIABLE var_Dout: STD_LOGIC_VECTOR (24 downto 0);
		VARIABLE var_sp: STD_LOGIC_VECTOR (2 downto 0);
		VARIABLE var_q: STD_LOGIC_VECTOR (10 downto 0);
		
		VARIABLE cadena : STRING ( 1 TO 5 );
		VARIABLE cadena1 : STRING ( 1 TO 4 );
		VARIABLE cadena3 : STRING ( 1 TO 3 );
		VARIABLE cadena2 : STRING ( 1 TO 2 );
		
   begin		
	
	  FILE_OPEN (archivoSalida, "out.txt", WRITE_MODE);
	  
      cadena := " CLK ";
		WRITE ( lineaOut, cadena, RIGHT, cadena'LENGTH+1 );	  
      cadena := " CLR ";
		WRITE ( lineaOut, cadena, RIGHT, cadena'LENGTH+1 );
		cadena1 := "DATA";
		WRITE ( lineaOut, cadena1, RIGHT, cadena1'LENGTH+1 );
		cadena1 := "LOAD";
		WRITE ( lineaOut, cadena1, RIGHT, cadena1'LENGTH+2 );
		cadena1 := " UP ";
		WRITE ( lineaOut, cadena1, RIGHT, cadena1'LENGTH+2 );
		cadena1 := "DOWN";
		WRITE ( lineaOut, cadena1, RIGHT, cadena1'LENGTH+1 );	
		cadena1 := " SP ";
		WRITE ( lineaOut, cadena1, RIGHT, cadena1'LENGTH+2 );
		cadena3 := " Q ";
		WRITE ( lineaOut, cadena3, RIGHT, cadena3'LENGTH+5 );
		cadena := " INS ";
		WRITE ( lineaOut, cadena, RIGHT, cadena'LENGTH+15 );

		WRITELINE (archivoSalida, lineaOut);
			
--primeros cambias
--wait for 200 ns;
	   clr <= '1';
		wait for 2 ns;
			var_clr := clr;
			var_Din := data_in_pila;
			var_l := load;
			var_up := up;
			var_dw := down;
			var_sp := stackP;
      	var_Dout := ins;
			var_q := q;
			
			WRITE(lineaOut, clk, RIGHT, 5 );
		   WRITE(lineaOut, var_clr, RIGHT, 5 );
         HWRITE(lineaOut, '0'&var_Din , RIGHT, 7 );
	  	   WRITE(lineaOut, var_l, RIGHT, 5 );
			WRITE(lineaOut, var_up, RIGHT, 5 );
			WRITE(lineaOut, var_dw, RIGHT, 5 );
			
			--Se escriben salidas
			
			WRITE(lineaOut, var_sp, RIGHT, 8 );
			WRITE(lineaOut, var_q, RIGHT, 14 );
			WRITE(lineaOut, var_Dout, RIGHT, 33 );
			
			WRITELINE(archivoSalida, lineaOut);

wait until rising_edge(clk);      
		
      clr <= '0';
		
		for i in 0 to 3 loop
		 
		 wait until rising_edge(clk);   
		
			var_clr := clr;
			var_Din := data_in_pila;
			var_l := load;
			var_up := up;
			var_dw := down;
			var_sp := stackP;
      	var_Dout := ins;
			var_q := q;
			
			WRITE(lineaOut, clk, RIGHT, 5 );
		   WRITE(lineaOut, var_clr, RIGHT, 5 );
         HWRITE(lineaOut, '0'&var_Din , RIGHT, 7 );
	  	   WRITE(lineaOut, var_l, RIGHT, 5 );
			WRITE(lineaOut, var_up, RIGHT, 5 );
			WRITE(lineaOut, var_dw, RIGHT, 5 );
			
			--Se escriben salidas
			WRITE(lineaOut, var_sp, RIGHT, 8 );
			WRITE(lineaOut, var_q, RIGHT, 14 );
			WRITE(lineaOut, var_Dout, RIGHT, 33 );
			
			WRITELINE(archivoSalida, lineaOut);
		end loop;
		
		ciclo: for j in 0 to 2 loop  	
		
		load <= '1';
		data_in_pila <= "000"&x"02";
		
			wait until rising_edge(clk);
	
		   var_clr := clr;
			var_Din := data_in_pila;
			var_l := load;
			var_up := up;
			var_dw := down;
			var_sp := stackP;
      	var_Dout := ins;
			var_q := q;
	    
	      WRITE(lineaOut, clk, RIGHT, 5 );
	      WRITE(lineaOut, var_clr, RIGHT, 5 );
         HWRITE(lineaOut, '0'&var_Din , RIGHT, 7 );
	  	   WRITE(lineaOut, var_l, RIGHT, 5 );
			WRITE(lineaOut, var_up, RIGHT, 5 );
			WRITE(lineaOut, var_dw, RIGHT, 5 );
			
			--Se escriben salidas
			WRITE(lineaOut, var_sp, RIGHT, 8 );
			WRITE(lineaOut, var_q, RIGHT, 14);
			WRITE(lineaOut, var_Dout, RIGHT, 33 );
			
			WRITELINE(archivoSalida, lineaOut);	
			
		   load <= '0';
			
		for j in 0 to 1 loop 		
		wait until rising_edge(clk);
			var_clr := clr;
			var_Din := data_in_pila;
			var_l := load;
			var_up := up;
			var_dw := down;
			var_sp := stackP;
      	var_Dout := ins;
			var_q := q;
		
        
			WRITE(lineaOut, clk, RIGHT, 5 );
		   WRITE(lineaOut, var_clr, RIGHT, 5 );
         HWRITE(lineaOut, '0'&var_Din , RIGHT, 7 );
	  	   WRITE(lineaOut, var_l, RIGHT, 5 );
			WRITE(lineaOut, var_up, RIGHT, 5 );
			WRITE(lineaOut, var_dw, RIGHT, 5 );
			
			--Se escriben salidas
			WRITE(lineaOut, var_sp, RIGHT, 8 );
			WRITE(lineaOut, var_q, RIGHT, 14 );
			WRITE(lineaOut, var_Dout, RIGHT, 33 );
			
			WRITELINE(archivoSalida, lineaOut);
			
		--Se cierran archivos de texto

	
		
		end loop;
		end loop;
		
			FILE_CLOSE(archivoSalida);
		
		WAIT;
			
   end process;

END;
