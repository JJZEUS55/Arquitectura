LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY Prueba_tb IS
END Prueba_tb;
 
ARCHITECTURE behavior OF Prueba_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT UnidadDeControl
    PORT(
         OV : IN  std_logic;
         N : IN  std_logic;
         Z : IN  std_logic;
         C : IN  std_logic;
         LF : IN  std_logic;
         clk : IN  std_logic;
         clr : IN  std_logic;
         OP_CODE : IN  std_logic_vector(4 downto 0);
         FUN_CODE : IN  std_logic_vector(3 downto 0);
         NA_out : OUT  std_logic;
         SDOPC_out : OUT  std_logic;
         SM_out : OUT  std_logic;
         MicroInstruccion : OUT  std_logic_vector(19 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal OV : std_logic := '0';
   signal N : std_logic := '0';
   signal Z : std_logic := '0';
   signal C : std_logic := '0';
   signal LF : std_logic := '0';
   signal clk : std_logic := '0';
   signal clr : std_logic := '0';
   signal OP_CODE : std_logic_vector(4 downto 0) := (others => '0');
   signal FUN_CODE : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal NA_out : std_logic;
   signal SDOPC_out : std_logic;
   signal SM_out : std_logic;
   signal MicroInstruccion : std_logic_vector(19 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: UnidadDeControl PORT MAP (
          OV => OV,
          N => N,
          Z => Z,
          C => C,
          LF => LF,
          clk => clk,
          clr => clr,
          OP_CODE => OP_CODE,
          FUN_CODE => FUN_CODE,
          NA_out => NA_out,
          SDOPC_out => SDOPC_out,
          SM_out => SM_out,
          MicroInstruccion => MicroInstruccion
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
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
