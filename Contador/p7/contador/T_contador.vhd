
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY T_contador IS
END T_contador;
 
ARCHITECTURE behavior OF T_contador IS 
 
    COMPONENT contador
    PORT(
         dataIn : IN  std_logic_vector(3 downto 0);
         LB : IN  std_logic;
         EB : IN  std_logic;
         clr : IN  std_logic;
         clk : IN  std_logic;
         dataOut : inOUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal dataIn : std_logic_vector(3 downto 0) := (others => '0');
   signal LB : std_logic := '0';
   signal EB : std_logic := '0';
   signal clr : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal dataOut : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: contador PORT MAP (
          dataIn => dataIn,
          LB => LB,
          EB => EB,
          clr => clr,
          clk => clk,
          dataOut => dataOut
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
	 
	 clr<='1';
	 dataIn <= "0011";
	 wait for 20 ns;
	 clr <='0';
    wait for 20 ns;
	 lb <= '1';
	 eb <= '0';
	 wait for 20 ns;
	 lb <= '0';
	 eb <= '1';
	 wait;
   end process;

END;
