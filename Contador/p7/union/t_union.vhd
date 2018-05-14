
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY t_union IS
END t_union;
 
ARCHITECTURE behavior OF t_union IS 

 
    COMPONENT union
    PORT(
         dato : IN  std_logic_vector(8 downto 0);
         clk : IN  std_logic;
         clr : IN  std_logic;
         ini2 : IN  std_logic;
         display2 : OUT  std_logic_vector(6 downto 0);
         anodo : OUT  std_logic_vector(3 downto 0);
			valorBCD : out std_logic_vector (3 downto 0);
         a : INOUT  std_logic_vector(8 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal dato : std_logic_vector(8 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal clr : std_logic := '0';
   signal ini2 : std_logic := '0';
	signal valor : std_logic_vector(3 downto 0) := (others => '0');

	--BiDirs
   signal a : std_logic_vector(8 downto 0);

 	--Outputs
   signal display2 : std_logic_vector(6 downto 0);
   signal anodo : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: union PORT MAP (
          dato => dato,
          clk => clk,
          clr => clr,
          ini2 => ini2,
          display2 => display2,
          anodo => anodo,
          a => a
			 
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
		dato <= "000000001";
		wait for 20 ns;
		clr <= '0';
      wait for 20 ns;
		ini2 <= '1';
--		wait for 20 ns;
--		ini2 <= '0';
--		dato <= "100000000";
--		wait for 20 ns;
--		ini2 <= '1' ;
		wait;
	
   end process;

END;
