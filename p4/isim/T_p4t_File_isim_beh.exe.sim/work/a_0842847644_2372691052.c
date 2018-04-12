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
static const char *ng0 = "C:/Users/Acer/Desktop/Arquitectura/p4/p4t.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
void ieee_p_3564397177_sub_1496949865_91900896(char *, char *, char *, unsigned char , unsigned char , int );
void ieee_p_3564397177_sub_2743816878_91900896(char *, char *, char *, char *);
void ieee_p_3564397177_sub_3205433008_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_3988856810_91900896(char *, char *, char *, char *, char *);


static void work_a_0842847644_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3840);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3356);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3840);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3356);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0842847644_2372691052_p_1(char *t0)
{
    char t5[16];
    char t10[8];
    char t11[8];
    char t12[8];
    char t13[8];
    char t14[8];
    char t15[8];
    char t16[8];
    char t17[8];
    char t18[8];
    char t19[8];
    char t24[8];
    char t25[8];
    char t26[8];
    char t27[8];
    char t28[16];
    char t29[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    int64 t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;

LAB0:    t1 = (t0 + 3600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2712U);
    t3 = (t0 + 7789);
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
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2776U);
    t3 = (t0 + 7795);
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
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 7802);
    t4 = (t0 + 3044U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 3044U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t10, t7, 4U);
    t6 = (t0 + 7512U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t10, t6, (unsigned char)0, t8);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 7806);
    t4 = (t0 + 3044U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 3044U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t11, t7, 4U);
    t6 = (t0 + 7512U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t11, t6, (unsigned char)0, t8);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 7810);
    t4 = (t0 + 3128U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 3128U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t12, t7, 5U);
    t6 = (t0 + 7528U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t12, t6, (unsigned char)0, t8);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 7815);
    t4 = (t0 + 3044U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 3044U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t13, t7, 4U);
    t6 = (t0 + 7512U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t13, t6, (unsigned char)0, t8);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 7819);
    t4 = (t0 + 3044U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 3044U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t14, t7, 4U);
    t6 = (t0 + 7512U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t14, t6, (unsigned char)0, t8);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 7823);
    t4 = (t0 + 3044U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 3044U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t15, t7, 4U);
    t6 = (t0 + 7512U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t15, t6, (unsigned char)0, t8);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 7827);
    t4 = (t0 + 3044U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 3044U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t16, t7, 4U);
    t6 = (t0 + 7512U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t16, t6, (unsigned char)0, t8);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 7831);
    t4 = (t0 + 3044U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 3044U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t17, t7, 4U);
    t6 = (t0 + 7512U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t17, t6, (unsigned char)0, t8);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 7835);
    t4 = (t0 + 3044U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 3044U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t18, t7, 4U);
    t6 = (t0 + 7512U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t18, t6, (unsigned char)0, t8);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 7839);
    t4 = (t0 + 3044U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 3044U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t19, t7, 4U);
    t6 = (t0 + 7512U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t19, t6, (unsigned char)0, t8);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2776U);
    t4 = (t0 + 2920U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(129, ng0);
    t20 = (10 * 1000LL);
    t2 = (t0 + 3500);
    xsi_process_wait(t2, t20);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(131, ng0);

LAB8:    t2 = (t0 + 2712U);
    t21 = std_textio_endfile(t2);
    t22 = (!(t21));
    if (t22 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 2712U);
    std_textio_file_close(t2);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 2776U);
    std_textio_file_close(t2);
    xsi_set_current_line(188, ng0);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(133, ng0);
    t3 = (t0 + 3500);
    t4 = (t0 + 2712U);
    t6 = (t0 + 2880U);
    std_textio_readline(STD_TEXTIO, t3, t4, t6);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2880U);
    t4 = (t0 + 2116U);
    t6 = *((char **)t4);
    t4 = (t0 + 7448U);
    ieee_p_3564397177_sub_3988856810_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 2116U);
    t3 = *((char **)t2);
    t2 = (t0 + 3876);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t23 = *((char **)t7);
    memcpy(t23, t3, 4U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2880U);
    t4 = (t0 + 2184U);
    t6 = *((char **)t4);
    t4 = (t0 + 7448U);
    ieee_p_3564397177_sub_3988856810_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = (t0 + 3912);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t23 = *((char **)t7);
    memcpy(t23, t3, 4U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2880U);
    t4 = (t0 + 2320U);
    t6 = *((char **)t4);
    t4 = (t0 + 7464U);
    ieee_p_3564397177_sub_3988856810_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    t2 = (t0 + 3948);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t23 = *((char **)t7);
    memcpy(t23, t3, 4U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2880U);
    t4 = (t0 + 2252U);
    t6 = *((char **)t4);
    t4 = (t0 + 7464U);
    ieee_p_3564397177_sub_3988856810_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 2252U);
    t3 = *((char **)t2);
    t2 = (t0 + 3984);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t23 = *((char **)t7);
    memcpy(t23, t3, 4U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2880U);
    t4 = (t0 + 2388U);
    t6 = *((char **)t4);
    t4 = (t0 + 7480U);
    ieee_p_3564397177_sub_3988856810_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 2388U);
    t3 = *((char **)t2);
    t2 = (t0 + 4020);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t23 = *((char **)t7);
    memcpy(t23, t3, 16U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2880U);
    t4 = (t0 + 2048U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_2743816878_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t21 = *((unsigned char *)t3);
    t2 = (t0 + 4056);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t23 = *((char **)t7);
    *((unsigned char *)t23) = t21;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2880U);
    t4 = (t0 + 1912U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_2743816878_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t21 = *((unsigned char *)t3);
    t2 = (t0 + 4092);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t23 = *((char **)t7);
    *((unsigned char *)t23) = t21;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2880U);
    t4 = (t0 + 1980U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_2743816878_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 1980U);
    t3 = *((char **)t2);
    t21 = *((unsigned char *)t3);
    t2 = (t0 + 4128);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t23 = *((char **)t7);
    *((unsigned char *)t23) = t21;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2880U);
    t4 = (t0 + 1844U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_2743816878_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 1844U);
    t3 = *((char **)t2);
    t21 = *((unsigned char *)t3);
    t2 = (t0 + 4164);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t23 = *((char **)t7);
    *((unsigned char *)t23) = t21;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(162, ng0);

LAB14:    t2 = (t0 + 3796);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:;
LAB12:    t4 = (t0 + 3796);
    *((int *)t4) = 0;
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 2456U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    memcpy(t2, t3, 16U);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 1604U);
    t3 = *((char **)t2);
    t2 = (t0 + 2524U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    memcpy(t2, t3, 16U);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 2116U);
    t6 = *((char **)t4);
    memcpy(t24, t6, 4U);
    t4 = (t0 + 7448U);
    ieee_p_3564397177_sub_3205433008_91900896(IEEE_P_3564397177, t2, t3, t24, t4, (unsigned char)0, 5);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 2184U);
    t6 = *((char **)t4);
    memcpy(t25, t6, 4U);
    t4 = (t0 + 7448U);
    ieee_p_3564397177_sub_3205433008_91900896(IEEE_P_3564397177, t2, t3, t25, t4, (unsigned char)0, 5);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 2320U);
    t6 = *((char **)t4);
    memcpy(t26, t6, 4U);
    t4 = (t0 + 7464U);
    ieee_p_3564397177_sub_3205433008_91900896(IEEE_P_3564397177, t2, t3, t26, t4, (unsigned char)0, 6);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 2252U);
    t6 = *((char **)t4);
    memcpy(t27, t6, 4U);
    t4 = (t0 + 7464U);
    ieee_p_3564397177_sub_3205433008_91900896(IEEE_P_3564397177, t2, t3, t27, t4, (unsigned char)0, 5);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 2388U);
    t6 = *((char **)t4);
    memcpy(t5, t6, 16U);
    t4 = (t0 + 7480U);
    ieee_p_3564397177_sub_3205433008_91900896(IEEE_P_3564397177, t2, t3, t5, t4, (unsigned char)0, 5);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 2048U);
    t6 = *((char **)t4);
    t21 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_1496949865_91900896(IEEE_P_3564397177, t2, t3, t21, (unsigned char)0, 5);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 1912U);
    t6 = *((char **)t4);
    t21 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_1496949865_91900896(IEEE_P_3564397177, t2, t3, t21, (unsigned char)0, 5);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 1980U);
    t6 = *((char **)t4);
    t21 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_1496949865_91900896(IEEE_P_3564397177, t2, t3, t21, (unsigned char)0, 5);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 2456U);
    t6 = *((char **)t4);
    memcpy(t28, t6, 16U);
    t4 = (t0 + 7496U);
    ieee_p_3564397177_sub_3205433008_91900896(IEEE_P_3564397177, t2, t3, t28, t4, (unsigned char)0, 5);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2920U);
    t4 = (t0 + 2524U);
    t6 = *((char **)t4);
    memcpy(t29, t6, 16U);
    t4 = (t0 + 7496U);
    ieee_p_3564397177_sub_3205433008_91900896(IEEE_P_3564397177, t2, t3, t29, t4, (unsigned char)0, 5);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 3500);
    t3 = (t0 + 2776U);
    t4 = (t0 + 2920U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    goto LAB8;

LAB13:    t3 = (t0 + 1304U);
    t21 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t21 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    goto LAB2;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}


extern void work_a_0842847644_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0842847644_2372691052_p_0,(void *)work_a_0842847644_2372691052_p_1};
	xsi_register_didat("work_a_0842847644_2372691052", "isim/T_p4t_File_isim_beh.exe.sim/work/a_0842847644_2372691052.didat");
	xsi_register_executes(pe);
}
