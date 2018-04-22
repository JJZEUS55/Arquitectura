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
static const char *ng0 = "C:/Users/Acer/Desktop/Arquitectura/p6/memProg/t_memProg.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
void ieee_p_3564397177_sub_1281154728_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_2889341154_91900896(char *, char *, char *, char *, char *);


static void work_a_1407802089_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2100U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2484);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 948U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2000);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2484);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 948U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2000);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1407802089_2372691052_p_1(char *t0)
{
    char t5[16];
    char t10[8];
    char t11[8];
    char t12[8];
    char t13[8];
    char t14[8];
    char t15[8];
    char t22[8];
    char t24[8];
    char t25[8];
    char t26[8];
    char t27[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    int64 t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t23;

LAB0:    t1 = (t0 + 2244U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1272U);
    t3 = (t0 + 5117);
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
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1336U);
    t3 = (t0 + 5123);
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
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 5130);
    t4 = (t0 + 1688U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2144);
    t3 = (t0 + 1480U);
    t4 = (t0 + 1688U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t10, t7, 4U);
    t6 = (t0 + 4900U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t10, t6, (unsigned char)0, t8);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5134);
    t4 = (t0 + 1604U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2144);
    t3 = (t0 + 1480U);
    t4 = (t0 + 1604U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t11, t7, 5U);
    t6 = (t0 + 4884U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t11, t6, (unsigned char)0, t8);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5139);
    t4 = (t0 + 1604U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2144);
    t3 = (t0 + 1480U);
    t4 = (t0 + 1604U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t12, t7, 5U);
    t6 = (t0 + 4884U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t12, t6, (unsigned char)0, t8);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 5144);
    t4 = (t0 + 1688U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2144);
    t3 = (t0 + 1480U);
    t4 = (t0 + 1688U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t13, t7, 4U);
    t6 = (t0 + 4900U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t13, t6, (unsigned char)0, t8);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 5148);
    t4 = (t0 + 1772U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 3U);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2144);
    t3 = (t0 + 1480U);
    t4 = (t0 + 1772U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t14, t7, 3U);
    t6 = (t0 + 4916U);
    t8 = (3U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t14, t6, (unsigned char)0, t8);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 5151);
    t4 = (t0 + 1772U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 3U);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2144);
    t3 = (t0 + 1480U);
    t4 = (t0 + 1772U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t15, t7, 3U);
    t6 = (t0 + 4916U);
    t8 = (3U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t15, t6, (unsigned char)0, t8);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2144);
    t3 = (t0 + 1336U);
    t4 = (t0 + 1480U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(95, ng0);
    t16 = (10 * 1000LL);
    t2 = (t0 + 2144);
    xsi_process_wait(t2, t16);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(97, ng0);

LAB8:    t2 = (t0 + 1272U);
    t17 = std_textio_endfile(t2);
    t18 = (!(t17));
    if (t18 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 1272U);
    std_textio_file_close(t2);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 1336U);
    std_textio_file_close(t2);
    xsi_set_current_line(124, ng0);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 2144);
    t4 = (t0 + 1272U);
    t6 = (t0 + 1440U);
    std_textio_readline(STD_TEXTIO, t3, t4, t6);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2144);
    t3 = (t0 + 1440U);
    t4 = (t0 + 1016U);
    t6 = *((char **)t4);
    t4 = (t0 + 4852U);
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1016U);
    t3 = *((char **)t2);
    t2 = (t0 + 2520);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t19 = *((char **)t7);
    memcpy(t19, t3, 10U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(104, ng0);

LAB14:    t2 = (t0 + 2440);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:;
LAB12:    t4 = (t0 + 2440);
    *((int *)t4) = 0;
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t2 = (t0 + 1084U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    memcpy(t2, t3, 25U);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2144);
    t3 = (t0 + 1480U);
    t4 = (t0 + 1084U);
    t6 = *((char **)t4);
    t9 = (24 - 24);
    t20 = (t9 * 1U);
    t21 = (0 + t20);
    t4 = (t6 + t21);
    memcpy(t22, t4, 5U);
    t7 = (t5 + 0U);
    t19 = (t7 + 0U);
    *((int *)t19) = 24;
    t19 = (t7 + 4U);
    *((int *)t19) = 20;
    t19 = (t7 + 8U);
    *((int *)t19) = -1;
    t8 = (20 - 24);
    t23 = (t8 * -1);
    t23 = (t23 + 1);
    t19 = (t7 + 12U);
    *((unsigned int *)t19) = t23;
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t22, t5, (unsigned char)0, 5);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2144);
    t3 = (t0 + 1480U);
    t4 = (t0 + 1084U);
    t6 = *((char **)t4);
    t9 = (24 - 19);
    t20 = (t9 * 1U);
    t21 = (0 + t20);
    t4 = (t6 + t21);
    memcpy(t24, t4, 4U);
    t7 = (t5 + 0U);
    t19 = (t7 + 0U);
    *((int *)t19) = 19;
    t19 = (t7 + 4U);
    *((int *)t19) = 16;
    t19 = (t7 + 8U);
    *((int *)t19) = -1;
    t8 = (16 - 19);
    t23 = (t8 * -1);
    t23 = (t23 + 1);
    t19 = (t7 + 12U);
    *((unsigned int *)t19) = t23;
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t24, t5, (unsigned char)0, 5);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2144);
    t3 = (t0 + 1480U);
    t4 = (t0 + 1084U);
    t6 = *((char **)t4);
    t9 = (24 - 15);
    t20 = (t9 * 1U);
    t21 = (0 + t20);
    t4 = (t6 + t21);
    memcpy(t25, t4, 4U);
    t7 = (t5 + 0U);
    t19 = (t7 + 0U);
    *((int *)t19) = 15;
    t19 = (t7 + 4U);
    *((int *)t19) = 12;
    t19 = (t7 + 8U);
    *((int *)t19) = -1;
    t8 = (12 - 15);
    t23 = (t8 * -1);
    t23 = (t23 + 1);
    t19 = (t7 + 12U);
    *((unsigned int *)t19) = t23;
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t25, t5, (unsigned char)0, 5);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2144);
    t3 = (t0 + 1480U);
    t4 = (t0 + 1084U);
    t6 = *((char **)t4);
    t9 = (24 - 11);
    t20 = (t9 * 1U);
    t21 = (0 + t20);
    t4 = (t6 + t21);
    memcpy(t26, t4, 4U);
    t7 = (t5 + 0U);
    t19 = (t7 + 0U);
    *((int *)t19) = 11;
    t19 = (t7 + 4U);
    *((int *)t19) = 8;
    t19 = (t7 + 8U);
    *((int *)t19) = -1;
    t8 = (8 - 11);
    t23 = (t8 * -1);
    t23 = (t23 + 1);
    t19 = (t7 + 12U);
    *((unsigned int *)t19) = t23;
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t26, t5, (unsigned char)0, 5);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2144);
    t3 = (t0 + 1480U);
    t4 = (t0 + 1084U);
    t6 = *((char **)t4);
    t9 = (24 - 7);
    t20 = (t9 * 1U);
    t21 = (0 + t20);
    t4 = (t6 + t21);
    memcpy(t27, t4, 4U);
    t7 = (t5 + 0U);
    t19 = (t7 + 0U);
    *((int *)t19) = 7;
    t19 = (t7 + 4U);
    *((int *)t19) = 4;
    t19 = (t7 + 8U);
    *((int *)t19) = -1;
    t8 = (4 - 7);
    t23 = (t8 * -1);
    t23 = (t23 + 1);
    t19 = (t7 + 12U);
    *((unsigned int *)t19) = t23;
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t27, t5, (unsigned char)0, 5);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2144);
    t3 = (t0 + 1480U);
    t4 = (t0 + 1084U);
    t6 = *((char **)t4);
    t9 = (24 - 3);
    t20 = (t9 * 1U);
    t21 = (0 + t20);
    t4 = (t6 + t21);
    memcpy(t28, t4, 4U);
    t7 = (t5 + 0U);
    t19 = (t7 + 0U);
    *((int *)t19) = 3;
    t19 = (t7 + 4U);
    *((int *)t19) = 0;
    t19 = (t7 + 8U);
    *((int *)t19) = -1;
    t8 = (0 - 3);
    t23 = (t8 * -1);
    t23 = (t23 + 1);
    t19 = (t7 + 12U);
    *((unsigned int *)t19) = t23;
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t28, t5, (unsigned char)0, 5);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2144);
    t3 = (t0 + 1336U);
    t4 = (t0 + 1480U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    goto LAB8;

LAB13:    t3 = (t0 + 660U);
    t17 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t17 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    goto LAB2;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}


extern void work_a_1407802089_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1407802089_2372691052_p_0,(void *)work_a_1407802089_2372691052_p_1};
	xsi_register_didat("work_a_1407802089_2372691052", "isim/t_memProg_isim_beh.exe.sim/work/a_1407802089_2372691052.didat");
	xsi_register_executes(pe);
}
