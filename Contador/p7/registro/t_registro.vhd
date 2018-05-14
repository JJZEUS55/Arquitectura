
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY t_registro IS
END t_registro;
 
ARCHITECTURE behavior OF t_registro IS 
 
    COMPONENT registro
    PORT(
         datoEntrada : IN  std_logic_vector(8 downto 0);
         LA : IN  std_logic;
         EA : IN  std_logic;
         clr : IN  std_logic;
         clk : IN  std_logic;
         datoSalida : OUT  std_logic_vector(8 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal datoEntrada : std_logic_vector(8 downto 0) := (others => '0');
   signal LA : std_logic := '0';
   signal EA : std_logic := '0';
   signal clr : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal datoSalida : std_logic_vector(8 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: registro PORT MAP (
          datoEntrada => datoEntrada,
          LA => LA,
          EA => EA,
          clr => clr,
          clk => clk,
          datoSalida => datoSalida
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
   begin		
      
	   clr <='1';
		wait for 20 ns;
		clr <= '0';
		wait for 20 ns;
		LA <= '1';
      datoEntrada <= "111100001";	
      wait for 20 ns;
      LA <= '0';
      wait for 20 ns;
      EA <= '1';
		wait for 20 ns;
		EA <= '0';
      wait;
   end process;

END;
