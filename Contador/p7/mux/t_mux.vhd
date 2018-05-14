
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

 
ENTITY t_mux IS
END t_mux;
 
ARCHITECTURE behavior OF t_mux IS 

 
    COMPONENT mux
    PORT(
         dataCounter : IN  std_logic_vector(3 downto 0);
         EC : IN  std_logic;
         dataOut : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal dataCounter : std_logic_vector(3 downto 0) := (others => '0');
   signal EC : std_logic := '0';

 	--Outputs
   signal dataOut : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mux PORT MAP (
          dataCounter => dataCounter,
          EC => EC,
          dataOut => dataOut
        );

   stim_proc: process
   begin		
      
		dataCounter <= "1000";
	   wait for 20 ns;
		EC <= '1';		
		wait for 20 ns;
		EC <= '0';
      wait;
   end process;

END;
