
library IEEE;
use IEEE.Std_logic_1164.all;
use IEEE.Numeric_Std.all;

entity ALU_4bits_tb is
end;

architecture bench of ALU_4bits_tb is

  component ALU_4bits 
      Port ( a : in  STD_LOGIC_VECTOR (3 downto 0);
             b : in  STD_LOGIC_VECTOR (3 downto 0);
             op : in  STD_LOGIC_VECTOR (3 downto 0);
             res : inout  STD_LOGIC_VECTOR (3 downto 0);
  	   z: out STD_LOGIC;
  	   cb : out STD_LOGIC;
  	   nb : out STD_LOGIC;
  	   ov: out STD_LOGIC
  			  );
  end component;

  signal a: STD_LOGIC_VECTOR (3 downto 0);
  signal b: STD_LOGIC_VECTOR (3 downto 0);
  signal op: STD_LOGIC_VECTOR (3 downto 0);
  signal res: STD_LOGIC_VECTOR (3 downto 0);
  signal z: STD_LOGIC;
  signal cb: STD_LOGIC;
  signal nb: STD_LOGIC;
  signal ov: STD_LOGIC ;

begin

  -- Insert values for generic parameters !!
  uut: ALU_4bits
                    port map ( a   => a,
                               b   => b,
                               op  => op,
                               res => res,
                               z   => z,
                               cb  => cb,
                               nb  => nb,
                               ov  => ov );

  stimulus: process
  begin
  a <= "0101";
          b <= "1110";
          -- SUMA
          op <= "0011";
          wait for 10 ns;
          
          -- RESTA
          op <= "0111";
          wait for 10 ns;
          
          -- AND
          op <= "0000";
          wait for 10 ns;
          
          op <= "1101";
          wait for 10 ns;
          
          op <= "0001";
          wait for 10 ns;
          
          op <= "1100";
          wait for 10 ns;
        
        op <= "0010";
          wait for 10 ns;        
          
         op <= "0100";
          wait for 10 ns;
          
          a <= "0101";
          b <= "0111";
          op <= "0011";
          wait for 10 ns;
          
          
          a <= "0101";
          b <= "0101";
          op <= "0111";
          wait for 10 ns;
      
          op <= "1101";
          wait for 10 ns;
    

  end process;


end;