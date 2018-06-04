--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:31:32 06/15/2017
-- Design Name:   
-- Module Name:   C:/Users/Acer/Desktop/Arquitectura/ESCOMIPS/t_ESCOMIPS2.vhd
-- Project Name:  ESCOMIPS
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ESCOMIPS
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY t_ESCOMIPS2 IS
END t_ESCOMIPS2;
 
ARCHITECTURE behavior OF t_ESCOMIPS2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ESCOMIPS
    PORT(
         clk : IN  std_logic;
         clr : IN  std_logic;
         salidaESCOMIPS : OUT  std_logic_vector(15 downto 0);
         banderasESCOM : OUT  std_logic_vector(3 downto 0);
         MICRO : OUT  std_logic_vector(19 downto 0);
         instruccionS : OUT  std_logic_vector(24 downto 0);
         lectura1 : OUT  std_logic_vector(15 downto 0);
         lectura2 : OUT  std_logic_vector(15 downto 0);
         salidaContador : OUT  std_logic_vector(15 downto 0);
         salidaALUESCOM : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal clr : std_logic := '0';

 	--Outputs
   signal salidaESCOMIPS : std_logic_vector(15 downto 0);
   signal banderasESCOM : std_logic_vector(3 downto 0);
   signal MICRO : std_logic_vector(19 downto 0);
   signal instruccionS : std_logic_vector(24 downto 0);
   signal lectura1 : std_logic_vector(15 downto 0);
   signal lectura2 : std_logic_vector(15 downto 0);
   signal salidaContador : std_logic_vector(15 downto 0);
   signal salidaALUESCOM : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ESCOMIPS PORT MAP (
          clk => clk,
          clr => clr,
          salidaESCOMIPS => salidaESCOMIPS,
          banderasESCOM => banderasESCOM,
          MICRO => MICRO,
          instruccionS => instruccionS,
          lectura1 => lectura1,
          lectura2 => lectura2,
          salidaContador => salidaContador,
          salidaALUESCOM => salidaALUESCOM
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
      clr <= '1';
		
		wait for 100 ns;
		
		clr <= '0';
		

      wait for 100000 ns;
   end process;

END;
