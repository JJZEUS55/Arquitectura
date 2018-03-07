-- Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2017.4 (win64) Build 2086221 Fri Dec 15 20:55:39 MST 2017
-- Date        : Tue Mar  6 14:43:08 2018
-- Host        : JJZEUS55 running 64-bit major release  (build 9200)
-- Command     : write_vhdl -mode funcsim -nolib -force -file
--               C:/Users/geoge/Practica1/Practica1.sim/sim_1/synth/func/xsim/sumador4bits_tb_func_synth.vhd
-- Design      : sumador4bits
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7a100tcsg324-3
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity sumador4bits is
  port (
    a : in STD_LOGIC_VECTOR ( 3 downto 0 );
    b : in STD_LOGIC_VECTOR ( 3 downto 0 );
    cin : in STD_LOGIC;
    s : out STD_LOGIC_VECTOR ( 3 downto 0 );
    cout : out STD_LOGIC
  );
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of sumador4bits : entity is true;
end sumador4bits;

architecture STRUCTURE of sumador4bits is
  signal C_2 : STD_LOGIC;
  signal a_IBUF : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal b_IBUF : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal cin_IBUF : STD_LOGIC;
  signal cout_OBUF : STD_LOGIC;
  signal s_OBUF : STD_LOGIC_VECTOR ( 3 downto 0 );
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \s_OBUF[1]_inst_i_1\ : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \s_OBUF[3]_inst_i_2\ : label is "soft_lutpair0";
begin
\a_IBUF[0]_inst\: unisim.vcomponents.IBUF
     port map (
      I => a(0),
      O => a_IBUF(0)
    );
\a_IBUF[1]_inst\: unisim.vcomponents.IBUF
     port map (
      I => a(1),
      O => a_IBUF(1)
    );
\a_IBUF[2]_inst\: unisim.vcomponents.IBUF
     port map (
      I => a(2),
      O => a_IBUF(2)
    );
\a_IBUF[3]_inst\: unisim.vcomponents.IBUF
     port map (
      I => a(3),
      O => a_IBUF(3)
    );
\b_IBUF[0]_inst\: unisim.vcomponents.IBUF
     port map (
      I => b(0),
      O => b_IBUF(0)
    );
\b_IBUF[1]_inst\: unisim.vcomponents.IBUF
     port map (
      I => b(1),
      O => b_IBUF(1)
    );
\b_IBUF[2]_inst\: unisim.vcomponents.IBUF
     port map (
      I => b(2),
      O => b_IBUF(2)
    );
\b_IBUF[3]_inst\: unisim.vcomponents.IBUF
     port map (
      I => b(3),
      O => b_IBUF(3)
    );
cin_IBUF_inst: unisim.vcomponents.IBUF
     port map (
      I => cin,
      O => cin_IBUF
    );
cout_OBUF_inst: unisim.vcomponents.OBUF
     port map (
      I => cout_OBUF,
      O => cout
    );
cout_OBUF_inst_i_1: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BB3A3A22EEACAC88"
    )
        port map (
      I0 => a_IBUF(3),
      I1 => cin_IBUF,
      I2 => b_IBUF(2),
      I3 => C_2,
      I4 => a_IBUF(2),
      I5 => b_IBUF(3),
      O => cout_OBUF
    );
\s_OBUF[0]_inst\: unisim.vcomponents.OBUF
     port map (
      I => s_OBUF(0),
      O => s(0)
    );
\s_OBUF[0]_inst_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => a_IBUF(0),
      I1 => cin_IBUF,
      I2 => b_IBUF(0),
      O => s_OBUF(0)
    );
\s_OBUF[1]_inst\: unisim.vcomponents.OBUF
     port map (
      I => s_OBUF(1),
      O => s(1)
    );
\s_OBUF[1]_inst_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B4874B78"
    )
        port map (
      I0 => b_IBUF(0),
      I1 => a_IBUF(0),
      I2 => a_IBUF(1),
      I3 => cin_IBUF,
      I4 => b_IBUF(1),
      O => s_OBUF(1)
    );
\s_OBUF[2]_inst\: unisim.vcomponents.OBUF
     port map (
      I => s_OBUF(2),
      O => s(2)
    );
\s_OBUF[2]_inst_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6996"
    )
        port map (
      I0 => C_2,
      I1 => a_IBUF(2),
      I2 => cin_IBUF,
      I3 => b_IBUF(2),
      O => s_OBUF(2)
    );
\s_OBUF[3]_inst\: unisim.vcomponents.OBUF
     port map (
      I => s_OBUF(3),
      O => s(3)
    );
\s_OBUF[3]_inst_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"718EE8178E7117E8"
    )
        port map (
      I0 => a_IBUF(2),
      I1 => C_2,
      I2 => b_IBUF(2),
      I3 => a_IBUF(3),
      I4 => cin_IBUF,
      I5 => b_IBUF(3),
      O => s_OBUF(3)
    );
\s_OBUF[3]_inst_i_2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"08EAAE80"
    )
        port map (
      I0 => a_IBUF(1),
      I1 => a_IBUF(0),
      I2 => b_IBUF(0),
      I3 => cin_IBUF,
      I4 => b_IBUF(1),
      O => C_2
    );
end STRUCTURE;
