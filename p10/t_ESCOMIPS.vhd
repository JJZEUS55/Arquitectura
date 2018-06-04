
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY t_ESCOMIPS IS
END t_ESCOMIPS;
 
ARCHITECTURE behavior OF t_ESCOMIPS IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ESCOMIPS
    PORT(
         clk : IN  std_logic;
         clr : IN  std_logic;
         salidaESCOMIPS : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal clr : std_logic := '0';

 	--Outputs
   signal salidaESCOMIPS : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ESCOMIPS PORT MAP (
          clk => clk,
          clr => clr,
          salidaESCOMIPS => salidaESCOMIPS
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
  
   
	   clr <= '1';
		wait for 200 ns;
		
		clr <= '0';
		
	   wait for 10000000 ns;
   end process;

END;
