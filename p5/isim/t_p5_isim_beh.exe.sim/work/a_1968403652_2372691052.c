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
static const char *ng0 = "C:/Users/Acer/Desktop/Arquitectura/p5/p5/t_p5.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
void ieee_p_3564397177_sub_1496949865_91900896(char *, char *, char *, unsigned char , unsigned char , int );
void ieee_p_3564397177_sub_2743816878_91900896(char *, char *, char *, char *);
void ieee_p_3564397177_sub_3205433008_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_3988856810_91900896(char *, char *, char *, char *, char *);


static void work_a_1968403652_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2428U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2812);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1224U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2328);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2812);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1224U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2328);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1968403652_2372691052_p_1(char *t0)
{
    char t5[16];
    char t10[8];
    char t11[8];
    char t12[8];
    char t13[8];
    char t21[8];
    char t22[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    int64 t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 2572U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1684U);
    t3 = (t0 + 5565);
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
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1748U);
    t3 = (t0 + 5571);
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
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5578);
    t4 = (t0 + 2016U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2472);
    t3 = (t0 + 1892U);
    t4 = (t0 + 2016U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t10, t7, 4U);
    t6 = (t0 + 5360U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t10, t6, (unsigned char)0, t8);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 5582);
    t4 = (t0 + 2016U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2472);
    t3 = (t0 + 1892U);
    t4 = (t0 + 2016U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t11, t7, 4U);
    t6 = (t0 + 5360U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t11, t6, (unsigned char)0, t8);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 5586);
    t4 = (t0 + 2016U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2472);
    t3 = (t0 + 1892U);
    t4 = (t0 + 2016U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t12, t7, 4U);
    t6 = (t0 + 5360U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t12, t6, (unsigned char)0, t8);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 5590);
    t4 = (t0 + 2016U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2472);
    t3 = (t0 + 1892U);
    t4 = (t0 + 2016U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t13, t7, 4U);
    t6 = (t0 + 5360U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t13, t6, (unsigned char)0, t8);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2472);
    t3 = (t0 + 1748U);
    t4 = (t0 + 1892U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(95, ng0);
    t14 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t14);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(97, ng0);

LAB8:    t2 = (t0 + 1684U);
    t15 = std_textio_endfile(t2);
    t16 = (!(t15));
    if (t16 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1684U);
    std_textio_file_close(t2);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1748U);
    std_textio_file_close(t2);
    xsi_set_current_line(130, ng0);

LAB20:    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 2472);
    t4 = (t0 + 1684U);
    t6 = (t0 + 1852U);
    std_textio_readline(STD_TEXTIO, t3, t4, t6);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2472);
    t3 = (t0 + 1852U);
    t4 = (t0 + 1360U);
    t6 = *((char **)t4);
    t4 = (t0 + 5328U);
    ieee_p_3564397177_sub_3988856810_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1360U);
    t3 = *((char **)t2);
    t2 = (t0 + 2848);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t17 = *((char **)t7);
    memcpy(t17, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2472);
    t3 = (t0 + 1852U);
    t4 = (t0 + 1428U);
    t6 = *((char **)t4);
    t4 = (t0 + 5328U);
    ieee_p_3564397177_sub_3988856810_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1428U);
    t3 = *((char **)t2);
    t4 = ((IEEE_P_2592010699) + 2332);
    t6 = (t0 + 5328U);
    t2 = xsi_base_array_concat(t2, t5, t4, (char)99, (unsigned char)2, (char)97, t3, t6, (char)101);
    t9 = (1U + 8U);
    t15 = (9U != t9);
    if (t15 == 1)
        goto LAB12;

LAB13:    t7 = (t0 + 2884);
    t17 = (t7 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t2, 9U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2472);
    t3 = (t0 + 1852U);
    t4 = (t0 + 1292U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_2743816878_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1292U);
    t3 = *((char **)t2);
    t15 = *((unsigned char *)t3);
    t2 = (t0 + 2920);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t17 = *((char **)t7);
    *((unsigned char *)t17) = t15;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(110, ng0);

LAB16:    t2 = (t0 + 2768);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB10:;
LAB12:    xsi_size_not_matching(9U, t9, 0);
    goto LAB13;

LAB14:    t4 = (t0 + 2768);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1052U);
    t3 = *((char **)t2);
    t2 = (t0 + 1496U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    memcpy(t2, t3, 8U);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2472);
    t3 = (t0 + 1892U);
    t4 = (t0 + 1428U);
    t6 = *((char **)t4);
    memcpy(t21, t6, 8U);
    t4 = (t0 + 5328U);
    ieee_p_3564397177_sub_3205433008_91900896(IEEE_P_3564397177, t2, t3, t21, t4, (unsigned char)0, 5);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2472);
    t3 = (t0 + 1892U);
    t4 = (t0 + 1360U);
    t6 = *((char **)t4);
    memcpy(t22, t6, 8U);
    t4 = (t0 + 5328U);
    ieee_p_3564397177_sub_3205433008_91900896(IEEE_P_3564397177, t2, t3, t22, t4, (unsigned char)0, 5);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2472);
    t3 = (t0 + 1892U);
    t4 = (t0 + 1292U);
    t6 = *((char **)t4);
    t15 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_1496949865_91900896(IEEE_P_3564397177, t2, t3, t15, (unsigned char)0, 5);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2472);
    t3 = (t0 + 1892U);
    t4 = (t0 + 1496U);
    t6 = *((char **)t4);
    memcpy(t23, t6, 8U);
    t4 = (t0 + 5344U);
    ieee_p_3564397177_sub_3205433008_91900896(IEEE_P_3564397177, t2, t3, t23, t4, (unsigned char)0, 5);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2472);
    t3 = (t0 + 1748U);
    t4 = (t0 + 1892U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    goto LAB8;

LAB15:    t3 = (t0 + 752U);
    t15 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t15 == 1)
        goto LAB14;
    else
        goto LAB16;

LAB17:    goto LAB15;

LAB18:    goto LAB2;

LAB19:    goto LAB18;

LAB21:    goto LAB19;

}


extern void work_a_1968403652_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1968403652_2372691052_p_0,(void *)work_a_1968403652_2372691052_p_1};
	xsi_register_didat("work_a_1968403652_2372691052", "isim/t_p5_isim_beh.exe.sim/work/a_1968403652_2372691052.didat");
	xsi_register_executes(pe);
}
