
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity extensorS is
    Port ( litZwolf : in  STD_LOGIC_VECTOR (11 downto 0);
           sLitSechzehn : out  STD_LOGIC_VECTOR (15 downto 0));
end extensorS;

architecture Behavioral of extensorS is

signal dato : std_logic_vector(15 downto 0);

begin


dato <=litZwolf(11)&litZwolf(11)&litZwolf(11)&litZwolf(11)&litZwolf;
sLitSechzehn <= dato;

end Behavioral;

