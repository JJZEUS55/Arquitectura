
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY t_divFrecuencia IS
END t_divFrecuencia;
 
ARCHITECTURE behavior OF t_divFrecuencia IS 
 
 
    COMPONENT divFrecuencia
    PORT(
         osc_clk : IN  std_logic;
         clr : IN  std_logic;
			salida : out std_logic_vector (23 downto 0);
         clk : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal osc_clk : std_logic := '0';
   signal clr : std_logic := '0';

 	--Outputs
   signal clk : std_logic;
	signal salida1 : out std_logic_vector (23 downto 0)

   -- Clock period definitions
   constant osc_clk_period : time := 10 ns;
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: divFrecuencia PORT MAP (
          osc_clk => osc_clk,
          clr => clr,
          clk => clk
        );

   -- Clock process definitions
   osc_clk_process :process
   begin
		osc_clk <= '0';
		wait for osc_clk_period/2;
		osc_clk <= '1';
		wait for osc_clk_period/2;
   end process;
 
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
      
		clr <= '1';
      wait for 20 ns;	
		clr <= '0';      -- insert stimulus here 

      wait;
   end process;

END;
