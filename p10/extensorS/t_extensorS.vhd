
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY t_extensorS IS
END t_extensorS;
 
ARCHITECTURE behavior OF t_extensorS IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT extensorS
    PORT(
         litZwolf : IN  std_logic_vector(11 downto 0);
         sLitSechzehn : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal litZwolf : std_logic_vector(11 downto 0) := (others => '0');

 	--Outputs
   signal sLitSechzehn : std_logic_vector(15 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: extensorS PORT MAP (
          litZwolf => litZwolf,
          sLitSechzehn => sLitSechzehn
        );


   -- Stimulus process
   stim_proc: process
   begin		
      
		litZwolf  <= "000000001010";
		wait for 20 ns;
		
		litZwolf  <= "111100001010";

      wait;
   end process;

END;
