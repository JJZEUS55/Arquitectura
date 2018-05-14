
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity deco is
    Port ( bcd : in  STD_LOGIC_VECTOR (3 downto 0);
           display  : out  STD_LOGIC_VECTOR (6 downto 0));
end deco;

architecture Behavioral of deco is

constant zero : std_logic_vector (6 downto 0) := "1000000";
constant eins : std_logic_vector (6 downto 0) := "1111001";
constant zwei : std_logic_vector (6 downto 0) := "0100100";
constant drei : std_logic_vector (6 downto 0) := "0110000";
constant vier : std_logic_vector (6 downto 0) := "0011001";
constant funf : std_logic_vector (6 downto 0) := "0010010";
constant sechs : std_logic_vector (6 downto 0) := "0000010";
constant sieben : std_logic_vector (6 downto 0) := "1111000";
constant acht : std_logic_vector (6 downto 0) := "0000000";
constant neun : std_logic_vector (6 downto 0) := "0010000";
constant minus : std_logic_vector (6 downto 0) := "0111111";
constant nein : std_logic_vector (6 downto 0) := "1111111";

begin

display <= zero when bcd = "0000" else 
           eins when bcd = "0001" else 
			  zwei when bcd = "0010" else 
			  drei when bcd = "0011" else 
			  vier when bcd = "0100" else 
			  funf when bcd = "0101" else 
			  sechs when bcd = "0110" else 
			  sieben when bcd = "0111" else 
			  acht when bcd = "1000" else 
			  neun when bcd = "1001" else 
			  minus when bcd = "1010" else
			  nein;
			  

end Behavioral;

