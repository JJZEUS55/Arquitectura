library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_arith.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;


entity memProg is
generic (
		bus_dir : integer := 9;
	bus_datos : integer:= 25
);
    Port ( dir_r : in  STD_LOGIC_VECTOR (bus_dir-1 downto 0);
           data_out : out  STD_LOGIC_VECTOR (bus_datos-1 downto 0)
			  --clk : in STD_LOGIC
			  );
           --clk, wd : in  STD_LOGIC);
end memProg;

architecture Behavioral of memProg is

---literal de 12 bits
constant zero : std_logic_vector(11 downto 0) := "000000000000";
constant uno : std_logic_vector(11 downto 0) := "000000000001";
constant salto : std_logic_vector(11 downto 0) := "111111111011";
constant salto2 : std_logic_vector(15 downto 0) := "0000000000001010";
constant nada : std_logic_vector(19 downto 0) := "00000000000000000000";

--codigo de operacion
constant op_li : std_logic_Vector(4 downto 0) := "00001";
constant op_add : std_logic_Vector(4 downto 0) := "00000";
constant op_swi : std_logic_Vector(4 downto 0) := "00011";
constant op_b : std_logic_Vector(4 downto 0) := "10011";
constant op_addi : std_logic_Vector(4 downto 0) := "00101";
constant op_bnei : std_logic_Vector(4 downto 0) := "01110";
constant op_nop :std_logic_vector(4 downto 0) := "10110";

--codigo de registros
constant R1 : std_logic_Vector(3 downto 0) := "0001";
constant R0 : std_logic_Vector(3 downto 0) := "0000";
constant R2 : std_logic_Vector(3 downto 0) := "0010";
constant R3 : std_logic_Vector(3 downto 0) := "0011";
constant R4 : std_logic_Vector(3 downto 0) := "0100";

--instrucciones 
constant i0 : std_logic_vector(24 downto 0) := op_li&R0&x"0000";
constant i1 : std_logic_vector(24 downto 0) := op_li&R1&x"0001";
constant i2 : std_logic_vector(24 downto 0) := op_li&R2&x"0000";
constant i3 : std_logic_vector(24 downto 0) := op_li&R3&x"000C";

constant i4 : std_logic_vector(24 downto 0) := op_add&R4&R0&R1&x"00";
constant i5 : std_logic_vector(24 downto 0) := op_swi&R4&x"0072";
constant i6 : std_logic_vector(24 downto 0) := op_addi&R0&R1&zero;
constant i7 : std_logic_vector(24 downto 0) := op_addi&R1&R4&zero;

constant i8 : std_logic_vector(24 downto 0) := op_addi&R2&R2&uno;

----- salto bnei

constant i9 : std_logic_vector(24 downto 0) := op_bnei&R3&R2&salto;

--- nop

constant i10 : std_logic_vector(24 downto 0) := op_nop&nada;

constant i11 : std_logic_vector(24 downto 0) := op_b&"0000"&salto2;

--- fin 

type ejemplo is array (0 to (2**bus_dir)-1) of std_logic_vector(bus_Datos-1 downto 0);
constant aux : ejemplo := (i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, others=>(others=> '0'));

begin

	data_out <= aux(conv_integer(dir_r));


end Behavioral;


