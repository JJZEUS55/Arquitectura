library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;
use IEEE.NUMERIC_STD.ALL;


entity p4 is
	generic
	(
		tam_palabra : integer := 16;
		tam_bus  : integer := 4
	);
	port
	(
		readR	: in 	std_logic_vector(tam_bus-1 downto 0);
		readR2	: in 	std_logic_vector(tam_bus-1 downto 0);
		writeRegister	: in 	std_logic_vector(tam_bus-1 downto 0);
		SHAMT				: in 	std_logic_vector(tam_bus-1 downto 0);
		writeData		: in 	std_logic_vector(tam_palabra-1 downto 0);
		readData1		: out	std_logic_vector(tam_palabra-1 downto 0);
		readData2		: out	std_logic_vector(tam_palabra-1 downto 0);
		SHE				: in	std_logic;
		dir				: in	std_logic;
		WR					: in	std_logic;
		clk				: in	std_logic;
		clr				: in	std_logic
	);

end p4;

architecture A_p4 of p4 is

-- Archivo de registros
type archivo is array (0 to ((2**tam_bus)-1)) of std_logic_vector((tam_palabra-1) downto 0);
signal fileRegister: archivo;

-- Se?ales para Barrel
signal dataIn	: std_logic_vector(tam_palabra-1 downto 0);
signal dataOut	: std_logic_vector(tam_palabra-1 downto 0);
signal srl_ssl : unsigned(tam_palabra-1 downto 0);

-- Se?al para escritura al archivo de registros
signal aux2	: std_logic_vector(tam_palabra-1 downto 0);
signal aux1	: std_logic_vector(tam_palabra-1 downto 0);


begin
	
	-- Lecturas as?ncronas
	aux1 <= fileRegister(conv_integer(readR));
	dataIn <= aux1;
	readData1 <= aux1;
	readData2 <= fileRegister(conv_integer(readR2));
	
	dataIn <= aux1;
	
	aux2 <= writeData when (SHE = '0') else
								dataOut;
	
	archivoRegistro: process(clr, clk)
	begin
		if(clr = '1') then 
			for i in 0 to ((2**tam_bus)-1) loop
				fileRegister(i) <= x"0000";
			end loop;
		elsif(rising_edge(clk)) then
			if(WR = '1') then
				fileRegister(conv_integer(writeRegister)) <= aux2;
			end if;
		end if;
	end process;
	
	-- sll y srl proceso
	sll_srl_p: process(SHAMT, dataIn, dir, srl_ssl)	
            
            variable shift : std_logic_vector(tam_palabra-1 downto 0);
            
            begin        
                --shift := dataIn;
                srl_ssl <= unsigned(dataIn);
                if (dir = '1') then                    -- Izquierda
                    for i in 0 to (tam_bus-1) loop
                        for j in (tam_palabra-1) downto 0 loop
                            if (SHAMT(i) = '0') then
                                srl_ssl <= srl_ssl;
                            else
                                if ((j-(2**i)) < 0) then
                                    srl_ssl(j) <= '0';
                                else
                                 
                                    srl_ssl <= srl_ssl sll (j-(2**i)); 
                                end if;
                            end if;
                        end loop;
                    end loop;
                    
                else                                        -- Derecha
                    for i in 0 to (tam_bus-1) loop
                        for j in 0 to (tam_palabra-1) loop
                            if (SHAMT(i) = '0') then
                                srl_ssl <= srl_ssl;
                            else
                                if ((j+(2**i)) < tam_palabra) then
                                     srl_ssl <= srl_ssl srl (j-(2**i));
                                else
                                    srl_ssl(j) <= '0';
                                end if;
                            end if;
                        end loop;
                    end loop;
                end if;
                
                dataOut <= std_logic_vector(srl_ssl);    
            end process;

end A_p4;