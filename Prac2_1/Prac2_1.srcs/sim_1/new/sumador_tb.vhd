library IEEE;
use IEEE.Std_logic_1164.all;
use IEEE.Numeric_Std.all;

entity sumador_tb is
end;

architecture bench of sumador_tb is

  component sumador
  	PORT (
  		a : IN STD_LOGIC_VECTOR (3 DOWNTO 0);
  		b : IN STD_LOGIC_VECTOR (3 DOWNTO 0);
  		cin : IN STD_LOGIC;
  		s : OUT STD_LOGIC_VECTOR (4 DOWNTO 0);
  		cout : OUT STD_LOGIC
  	);
  end component;

  signal a: STD_LOGIC_VECTOR (3 DOWNTO 0);
  signal b: STD_LOGIC_VECTOR (3 DOWNTO 0);
  signal cin: STD_LOGIC;
  signal s: STD_LOGIC_VECTOR (4 DOWNTO 0);
  signal cout: STD_LOGIC ;

begin

  uut: sumador port map ( a    => a,
                          b    => b,
                          cin  => cin,
                          s    => s,
                          cout => cout );

  stimulus: process
  begin
  
   a(0) <= '1';
    a(1) <= '0';
    a(2) <= '1';
    a(3) <= '0';
    b(0) <= '1';
    b(1) <= '0';
    b(2) <= '1';
    b(3) <= '0';
    cin <= '0';
    
    wait for 10 ns;

    a(0) <= '0';
    a(1) <= '0';
    a(2) <= '1';
    a(3) <= '1';
    b(0) <= '0';
    b(1) <= '0';
    b(2) <= '0';
    b(3) <= '1';
    cin <= '0';   
    
    wait for 10 ns;
    
    a(0) <= '1';
    a(1) <= '0';
    a(2) <= '0';
    a(3) <= '1';
    b(0) <= '1';
    b(1) <= '0';
    b(2) <= '1';
    b(3) <= '0';
    cin <= '0';   
    
    wait for 10 ns;
    
    a(0) <= '0';
    a(1) <= '1';
    a(2) <= '1';
    a(3) <= '1';
    b(0) <= '1';
    b(1) <= '0';
    b(2) <= '0';
    b(3) <= '1';
    cin <= '1';   
    
    wait for 10 ns;

    a(0) <= '0';
    a(1) <= '0';
    a(2) <= '1';
    a(3) <= '0';
    b(0) <= '0';
    b(1) <= '1';
    b(2) <= '0';
    b(3) <= '0';
    cin <= '0';   
    
    wait for 10 ns;
   
   
    a(0) <= '1';
    a(1) <= '1';
    a(2) <= '1';
    a(3) <= '0';
    b(0) <= '1';
    b(1) <= '1';
    b(2) <= '1';
    b(3) <= '0';
    cin <= '1';   
    
    wait for 10 ns;   
   
    a(0) <= '1';
    a(1) <= '1';
    a(2) <= '1';
    a(3) <= '1';
    b(0) <= '1';
    b(1) <= '0';
    b(2) <= '1';
    b(3) <= '0';
    cin <= '1';   
    
    wait for 10 ns;
   
   
    a(0) <= '1';
    a(1) <= '1';
    a(2) <= '0';
    a(3) <= '1';
    b(0) <= '0';
    b(1) <= '0';
    b(2) <= '0';
    b(3) <= '1';
    cin <= '1';   
    
    wait for 10 ns; 
    
    a(0) <= '1';
    a(1) <= '0';
    a(2) <= '0';
    a(3) <= '0';
    b(0) <= '0';
    b(1) <= '0';
    b(2) <= '1';
    b(3) <= '0';
    cin <= '1';   
    
    wait for 10 ns;  
    
    
-- Resta de prueba 8 - 4
        a(0) <= '0';
        a(1) <= '0';
        a(2) <= '0';
        a(3) <= '1';
        b(0) <= '0';
        b(1) <= '0';
        b(2) <= '1';
        b(3) <= '0';
        cin <= '1';   

wait for 10 ns;  

    wait;
  end process;


end;