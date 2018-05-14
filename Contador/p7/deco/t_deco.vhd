
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 

 
ENTITY t_deco IS
END t_deco;
 
ARCHITECTURE behavior OF t_deco IS 
 
 
    COMPONENT deco
    PORT(
         bcd : IN  std_logic_vector(3 downto 0);
         display : OUT  std_logic_vector(6 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal bcd : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal display : std_logic_vector(6 downto 0);

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: deco PORT MAP (
          bcd => bcd,
          display => display
        );


   -- Stimulus process
   stim_proc: process
   begin		
     
	  bcd <= "1010";
	  wait for 20 ns;
	  bcd <= "1000";
	  wait for 20 ns;
	  bcd <= "1111";
	  wait;

   end process;

END;
