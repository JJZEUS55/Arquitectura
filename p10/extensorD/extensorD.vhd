
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity extensorD is
    Port ( dirZwolf : in  STD_LOGIC_VECTOR (11 downto 0);
           dirSechzehn : out  STD_LOGIC_VECTOR (15 downto 0));
end extensorD;

architecture Behavioral of extensorD is

signal datoD : std_logic_vector(15 downto 0);

begin

datoD <= "0000"&dirZwolf;

dirSechzehn <= datoD;

end Behavioral;

