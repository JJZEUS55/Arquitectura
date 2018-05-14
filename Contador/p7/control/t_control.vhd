
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

 
ENTITY t_control IS
END t_control;
 
ARCHITECTURE behavior OF t_control IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT control
    PORT(
         clk : IN  std_logic;
         clr : IN  std_logic;
         ini : IN  std_logic;
         a0 : IN  std_logic;
         z : IN  std_logic;
         la : OUT  std_logic;
         ea : OUT  std_logic;
         lb : OUT  std_logic;
         eb : OUT  std_logic;
         ec : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal clr : std_logic := '0';
   signal ini : std_logic := '0';
   signal a0 : std_logic := '0';
   signal z : std_logic := '0';

 	--Outputs
   signal la : std_logic;
   signal ea : std_logic;
   signal lb : std_logic;
   signal eb : std_logic;
   signal ec : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: control PORT MAP (
          clk => clk,
          clr => clr,
          ini => ini,
          a0 => a0,
          z => z,
          la => la,
          ea => ea,
          lb => lb,
          eb => eb,
          ec => ec
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
	  wait for 10 ns;
	  clr <= '0';
	  wait for 10 ns;
	  ini<='1';
     wait for 30 ns;
	  a0 <= '1';
	  wait for 20 ns;
	  a0 <= '0';
	  z <= '1';
	  wait for 20 ns;
	  ini <= '0';
	  wait;
   end process;

END;
