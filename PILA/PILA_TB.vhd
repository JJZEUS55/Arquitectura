
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY PILA_TB IS
END PILA_TB;
 
ARCHITECTURE behavior OF PILA_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT PILA
    PORT(
         datos : IN  std_logic_vector(15 downto 0);
         PCout : OUT  std_logic_vector(15 downto 0);
         clk : IN  std_logic;
         clr : IN  std_logic;
         up : IN  std_logic;
			down : IN  std_logic;
			stack : out integer range 0 to 15;
         wpc : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal datos : std_logic_vector(15 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal clr : std_logic := '0';
   signal up : std_logic := '0';
	signal down : std_logic := '0';
   signal wpc : std_logic := '0';
	

 	--Outputs
   signal PCout : std_logic_vector(15 downto 0);
	signal stack : integer range 0 to 15;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: PILA PORT MAP (
          datos => datos,
          PCout => PCout,
          clk => clk,
          clr => clr,
          up => up,
			 stack => stack,
          wpc => wpc,
			 down => down
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
      
      --Estimulo 1
		clr<='1';
		up <= '0';
		down <= '0';
		wpc <= '0';
		datos <= x"0000";
		
		wait for 10 ns;
		
      --Estimulo 2
          clr<='0';
          up <= '0';
          down <= '0';
          wpc <= '0';
          datos <= x"0000";		
          
          wait for 10 ns;

--Estimulo 3
          clr<='0';
          up <= '0';
          down <= '0';
          wpc <= '0';
          datos <= x"0000";		
          
          wait for 10 ns;
          
  --Estimulo 4
          clr<='0';
          up <= '0';
          down <= '0';
          wpc <= '0';
          datos <= x"0000";
          
          wait for 10 ns;
          
  --Estimulo 5
          clr<='0';
          up <= '0';
          down <= '0';
          wpc <= '0';
          datos <= x"0000";
          
          wait for 10 ns;
       
          
  --Estimulo 6
            clr<='0';
            up <= '1';
            down <= '0';
            wpc <= '1';
            datos <= x"0060";
            
            wait for 10 ns;
            
    --Estimulo 7
          clr<='0';
          up <= '0';
          down <= '0';
          wpc <= '0';
          datos <= x"0000";
          
          wait for 10 ns;
          
          
      --Estimulo 8
            clr<='0';
            up <= '0';
            down <= '0';
            wpc <= '0';
            datos <= x"0000";
            
            wait for 10 ns;
            
     --Estimulo 9
          clr<='0';
          up <= '0';
          down <= '0';
          wpc <= '0';
          datos <= x"0000";
          
          wait for 10 ns;
          
    --Estimulo 10
        clr<='0';
        up <= '1';
        down <= '0';
        wpc <= '1';
        datos <= x"0140";
        
        wait for 10 ns;
          
          
      --Estimulo 11
      clr<='0';
      up <= '0';
      down <= '0';
      wpc <= '0';
      datos <= x"0000";
      
      wait for 10 ns;
      
--Estimulo 12
        clr<='0';
        up <= '0';
        down <= '0';
        wpc <= '0';
        datos <= x"0000";
        
        wait for 10 ns;
        
        
    --Estimulo 13
          clr<='0';
          up <= '0';
          down <= '0';
          wpc <= '0';
          datos <= x"0000";
          
          wait for 10 ns;
          
  --Estimulo 14
        clr<='0';
        up <= '0';
        down <= '0';
        wpc <= '1';
        datos <= x"1000";
        
        wait for 10 ns;
          
  --Estimulo 15
          clr<='0';
          up <= '0';
          down <= '0';
          wpc <= '0';
          datos <= x"0000";
          
          wait for 10 ns;        
          
  --Estimulo 16
          clr<='0';
          up <= '0';
          down <= '0';
          wpc <= '1';
          datos <= x"0000";
          
          wait for 10 ns;  
          
      --Estimulo 17
          clr<='0';
          up <= '0';
          down <= '1';
          wpc <= '0';
          datos <= x"0000";
          
          wait for 10 ns; 
          
       --Estimulo 18
        clr<='0';
        up <= '0';
        down <= '0';
        wpc <= '0';
        datos <= x"0000";
        
        wait for 10 ns;
        
        
         --Estimulo 19
       clr<='0';
       up <= '0';
       down <= '0';
       wpc <= '0';
       datos <= x"0000";
       
       wait for 10 ns; 
       
     --Estimulo 20
        clr<='0';
        up <= '0';
        down <= '0';
        wpc <= '0';
        datos <= x"0000";
        
        wait for 10 ns; 
        
        --Estimulo 21
        clr<='0';
        up <= '0';
        down <= '1';
        wpc <= '0';
        datos <= x"0000";
        
        wait for 10 ns;
        
        --Estimulo 22
        clr<='0';
        up <= '0';
        down <= '0';
        wpc <= '0';
        datos <= x"0000";
        
        wait for 10 ns;
        
        --Estimulo 23
        clr<='0';
        up <= '0';
        down <= '0';
        wpc <= '0';
        datos <= x"0000";
        
        wait;
        

      -- insert stimulus here 

      --wait;
   end process;

END;
