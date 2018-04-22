/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Acer/Desktop/Arquitectura/p6/pila/t_pila.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
void ieee_p_3564397177_sub_1281154728_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_1496949865_91900896(char *, char *, char *, unsigned char , unsigned char , int );
void ieee_p_3564397177_sub_2743816878_91900896(char *, char *, char *, char *);
void ieee_p_3564397177_sub_3205433008_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_3988856810_91900896(char *, char *, char *, char *, char *);


static void work_a_0594399622_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1408U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2884);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1408U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2884);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0594399622_2372691052_p_1(char *t0)
{
    char t5[16];
    char t10[8];
    char t11[8];
    char t12[8];
    char t13[8];
    char t14[8];
    char t15[8];
    char t16[8];
    char t20[16];
    char t28[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    int64 t17;
    unsigned char t18;
    unsigned char t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 3128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2072U);
    t3 = (t0 + 6796);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 6;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (6 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)0);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2136U);
    t3 = (t0 + 6802);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (7 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)1);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 6809);
    t4 = (t0 + 2488U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2280U);
    t4 = (t0 + 2488U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t10, t7, 4U);
    t6 = (t0 + 6580U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t10, t6, (unsigned char)0, t8);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 6813);
    t4 = (t0 + 2488U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2280U);
    t4 = (t0 + 2488U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t11, t7, 4U);
    t6 = (t0 + 6580U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t11, t6, (unsigned char)0, t8);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 6817);
    t4 = (t0 + 2488U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2280U);
    t4 = (t0 + 2488U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t12, t7, 4U);
    t6 = (t0 + 6580U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t12, t6, (unsigned char)0, t8);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 6821);
    t4 = (t0 + 2488U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2280U);
    t4 = (t0 + 2488U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t13, t7, 4U);
    t6 = (t0 + 6580U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t13, t6, (unsigned char)0, t8);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 6825);
    t4 = (t0 + 2404U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2280U);
    t4 = (t0 + 2404U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t14, t7, 5U);
    t6 = (t0 + 6564U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t14, t6, (unsigned char)0, t8);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 6830);
    t4 = (t0 + 2488U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2280U);
    t4 = (t0 + 2488U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t15, t7, 4U);
    t6 = (t0 + 6580U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t15, t6, (unsigned char)0, t8);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 6834);
    t4 = (t0 + 2488U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2280U);
    t4 = (t0 + 2488U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t16, t7, 4U);
    t6 = (t0 + 6580U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t16, t6, (unsigned char)0, t8);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2136U);
    t4 = (t0 + 2280U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(110, ng0);
    t17 = (10 * 1000LL);
    t2 = (t0 + 3028);
    xsi_process_wait(t2, t17);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(112, ng0);

LAB8:    t2 = (t0 + 2072U);
    t18 = std_textio_endfile(t2);
    t19 = (!(t18));
    if (t19 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 2072U);
    std_textio_file_close(t2);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 2136U);
    std_textio_file_close(t2);
    xsi_set_current_line(152, ng0);

LAB20:    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(114, ng0);
    t3 = (t0 + 3028);
    t4 = (t0 + 2072U);
    t6 = (t0 + 2240U);
    std_textio_readline(STD_TEXTIO, t3, t4, t6);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2240U);
    t4 = (t0 + 1476U);
    t6 = *((char **)t4);
    t4 = (t0 + 6516U);
    ieee_p_3564397177_sub_3988856810_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 6838);
    t4 = (t0 + 1476U);
    t6 = *((char **)t4);
    t7 = ((IEEE_P_2592010699) + 2332);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 0;
    t22 = (t21 + 4U);
    *((int *)t22) = 2;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t8 = (2 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t9;
    t22 = (t0 + 6516U);
    t4 = xsi_base_array_concat(t4, t5, t7, (char)97, t2, t20, (char)97, t6, t22, (char)101);
    t9 = (3U + 8U);
    t18 = (11U != t9);
    if (t18 == 1)
        goto LAB12;

LAB13:    t23 = (t0 + 3404);
    t24 = (t23 + 32U);
    t25 = *((char **)t24);
    t26 = (t25 + 40U);
    t27 = *((char **)t26);
    memcpy(t27, t4, 11U);
    xsi_driver_first_trans_fast(t23);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2240U);
    t4 = (t0 + 1544U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_2743816878_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1544U);
    t3 = *((char **)t2);
    t18 = *((unsigned char *)t3);
    t2 = (t0 + 3440);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t21 = *((char **)t7);
    *((unsigned char *)t21) = t18;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2240U);
    t4 = (t0 + 1612U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_2743816878_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 1612U);
    t3 = *((char **)t2);
    t18 = *((unsigned char *)t3);
    t2 = (t0 + 3476);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t21 = *((char **)t7);
    *((unsigned char *)t21) = t18;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2240U);
    t4 = (t0 + 1748U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_2743816878_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1748U);
    t3 = *((char **)t2);
    t18 = *((unsigned char *)t3);
    t2 = (t0 + 3512);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t21 = *((char **)t7);
    *((unsigned char *)t21) = t18;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2240U);
    t4 = (t0 + 1680U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_2743816878_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1680U);
    t3 = *((char **)t2);
    t18 = *((unsigned char *)t3);
    t2 = (t0 + 3548);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t21 = *((char **)t7);
    *((unsigned char *)t21) = t18;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(131, ng0);

LAB16:    t2 = (t0 + 3324);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB10:;
LAB12:    xsi_size_not_matching(11U, t9, 0);
    goto LAB13;

LAB14:    t4 = (t0 + 3324);
    *((int *)t4) = 0;
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 1144U);
    t3 = *((char **)t2);
    t2 = (t0 + 1816U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    memcpy(t2, t3, 11U);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 1236U);
    t3 = *((char **)t2);
    t2 = (t0 + 1884U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    memcpy(t2, t3, 3U);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2280U);
    t4 = (t0 + 1476U);
    t6 = *((char **)t4);
    memcpy(t28, t6, 8U);
    t4 = (t0 + 6516U);
    ieee_p_3564397177_sub_3205433008_91900896(IEEE_P_3564397177, t2, t3, t28, t4, (unsigned char)0, 5);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2280U);
    t4 = (t0 + 1544U);
    t6 = *((char **)t4);
    t18 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_1496949865_91900896(IEEE_P_3564397177, t2, t3, t18, (unsigned char)0, 5);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2280U);
    t4 = (t0 + 1612U);
    t6 = *((char **)t4);
    t18 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_1496949865_91900896(IEEE_P_3564397177, t2, t3, t18, (unsigned char)0, 5);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2280U);
    t4 = (t0 + 1748U);
    t6 = *((char **)t4);
    t18 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_1496949865_91900896(IEEE_P_3564397177, t2, t3, t18, (unsigned char)0, 5);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2280U);
    t4 = (t0 + 1680U);
    t6 = *((char **)t4);
    t18 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_1496949865_91900896(IEEE_P_3564397177, t2, t3, t18, (unsigned char)0, 5);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2280U);
    t4 = (t0 + 1884U);
    t6 = *((char **)t4);
    memcpy(t29, t6, 3U);
    t4 = (t0 + 6548U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t29, t4, (unsigned char)0, 5);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2280U);
    t4 = (t0 + 1816U);
    t6 = *((char **)t4);
    t7 = ((IEEE_P_2592010699) + 2332);
    t21 = (t0 + 6532U);
    t4 = xsi_base_array_concat(t4, t5, t7, (char)99, (unsigned char)2, (char)97, t6, t21, (char)101);
    t9 = (1U + 11U);
    t22 = (char *)alloca(t9);
    memcpy(t22, t4, t9);
    ieee_p_3564397177_sub_3205433008_91900896(IEEE_P_3564397177, t2, t3, t22, t5, (unsigned char)0, 5);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3028);
    t3 = (t0 + 2136U);
    t4 = (t0 + 2280U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    goto LAB8;

LAB15:    t3 = (t0 + 936U);
    t18 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t18 == 1)
        goto LAB14;
    else
        goto LAB16;

LAB17:    goto LAB15;

LAB18:    goto LAB2;

LAB19:    goto LAB18;

LAB21:    goto LAB19;

}


extern void work_a_0594399622_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0594399622_2372691052_p_0,(void *)work_a_0594399622_2372691052_p_1};
	xsi_register_didat("work_a_0594399622_2372691052", "isim/t_pila_isim_beh.exe.sim/work/a_0594399622_2372691052.didat");
	xsi_register_executes(pe);
}
