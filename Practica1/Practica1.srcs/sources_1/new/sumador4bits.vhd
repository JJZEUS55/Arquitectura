----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 06.03.2018 12:31:49
-- Design Name: 
-- Module Name: sumador4bits - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity sumador4bits is
    Port ( a,b : in STD_LOGIC_VECTOR (3 downto 0);
           cin : in STD_LOGIC;
           s : out STD_LOGIC_VECTOR (3 downto 0);
           cout : out STD_LOGIC);
end sumador4bits;

architecture Behavioral of sumador4bits is
signal Eb : std_logic_vector(3 downto 0);
signal C : std_logic_vector(4 downto 0);

begin

    generate_for : for i in 0 to 3 generate
    begin
        Eb(i) <= b(i) xor cin;
        s(i) <= a(i) xor Eb(i) xor c(i);
        c(i+1) <= (Eb(i) and c(i)) or (a(i) and c(i)) or (Eb(i) and a(i));
   end generate generate_for;

    cout <= c(4);

end Behavioral;
