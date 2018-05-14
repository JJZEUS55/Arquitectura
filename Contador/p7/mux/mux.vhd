
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mux is
    Port ( dataCounter : in  STD_LOGIC_VECTOR (3 downto 0);
	        EC: in std_logic;
	        dataOut : out std_logic_vector (3 downto 0));
end mux;

architecture Behavioral of mux is
constant guion : std_logic_vector (3 downto 0) := "1010";
begin

dataOut <= guion when EC = '0' else 
           dataCounter;
end Behavioral;

