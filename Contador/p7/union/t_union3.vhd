
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

 
ENTITY t_union3 IS
END t_union3;
 
ARCHITECTURE behavior OF t_union3 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT union
    PORT(
         dato : IN  std_logic_vector(8 downto 0);
         clk : IN  std_logic;
         clr : IN  std_logic;
         ini2 : IN  std_logic;
         z1 : OUT  std_logic;
         lbu : OUT  std_logic;
         lau : OUT  std_logic;
         ecu : OUT  std_logic;
         eau : OUT  std_logic;
         ebu : OUT  std_logic;
         display2 : OUT  std_logic_vector(6 downto 0);
         anodo : OUT  std_logic_vector(3 downto 0);
         valorBCD : OUT  std_logic_vector(3 downto 0);
         a : INOUT  std_logic_vector(8 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal dato : std_logic_vector(8 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal clr : std_logic := '0';
   signal ini2 : std_logic := '0';

	--BiDirs
   signal a : std_logic_vector(8 downto 0);

 	--Outputs
   signal z1 : std_logic;
   signal lbu : std_logic;
   signal lau : std_logic;
   signal ecu : std_logic;
   signal eau : std_logic;
   signal ebu : std_logic;
   signal display2 : std_logic_vector(6 downto 0);
   signal anodo : std_logic_vector(3 downto 0);
   signal valorBCD : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
  
	-- Instantiate the Unit Under Test (UUT)
   uut: union PORT MAP (
          dato => dato,
          clk => clk,
          clr => clr,
          ini2 => ini2,
          z1 => z1,
          lbu => lbu,
          lau => lau,
          ecu => ecu,
          eau => eau,
          ebu => ebu,
          display2 => display2,
          anodo => anodo,
          valorBCD => valorBCD,
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
		dato <= "111110001";
		wait for 20 ns;
		clr <= '0';
      wait for 20 ns;
		ini2 <= '1';      -- insert stimulus here 

      wait;
   end process;

END;
