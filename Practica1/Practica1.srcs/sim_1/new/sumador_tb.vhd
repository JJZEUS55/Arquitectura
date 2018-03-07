library IEEE;
use IEEE.Std_logic_1164.all;
use IEEE.Numeric_Std.all;

entity sumador4bits_tb is   
end;

architecture bench of sumador4bits_tb is

  component sumador4bits
      Port ( a,b : in STD_LOGIC_VECTOR (3 downto 0);
             cin : in STD_LOGIC;
             s : out STD_LOGIC_VECTOR (3 downto 0);
             cout : out STD_LOGIC);
  end component;

  signal a,b: STD_LOGIC_VECTOR (3 downto 0);
  signal cin: STD_LOGIC;
  signal s: STD_LOGIC_VECTOR (3 downto 0);
  signal cout: STD_LOGIC;

begin

  uut: sumador4bits port map ( a    => a,
                               b    => b,
                               cin  => cin,
                               s    => s,
                               cout => cout );

  stimulus: process
  begin
  
    a(0) <= '1';
    a(1) <= '1';
    a(2) <= '0';
    a(3) <= '0';
    b(0) <= '0';
    b(1) <= '0';
    b(2) <= '1';
    b(3) <= '1';
    cin <= '1';
    
    wait for 10 ns;

    a(0) <= '1';
    a(1) <= '1';
    a(2) <= '0';
    a(3) <= '0';
    b(0) <= '1';
    b(1) <= '1';
    b(2) <= '0';
    b(3) <= '0';
    cin <= '1';   
    
    wait for 10 ns;

   
  end process;


end;