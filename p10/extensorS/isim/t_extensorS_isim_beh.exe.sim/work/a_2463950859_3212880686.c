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
static const char *ng0 = "C:/Users/Acer/Desktop/Arquitectura/extensorS/extensorS.vhd";
extern char *IEEE_P_2592010699;



static void work_a_2463950859_3212880686_p_0(char *t0)
{
    char t16[16];
    char t26[16];
    char t36[16];
    char t40[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned char t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned char t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;

LAB0:    xsi_set_current_line(18, ng0);

LAB3:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = (11 - 11);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 592U);
    t9 = *((char **)t8);
    t10 = (11 - 11);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t17 = ((IEEE_P_2592010699) + 2332);
    t15 = xsi_base_array_concat(t15, t16, t17, (char)99, t7, (char)99, t14, (char)101);
    t18 = (t0 + 592U);
    t19 = *((char **)t18);
    t20 = (11 - 11);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t18 = (t19 + t23);
    t24 = *((unsigned char *)t18);
    t27 = ((IEEE_P_2592010699) + 2332);
    t25 = xsi_base_array_concat(t25, t26, t27, (char)97, t15, t16, (char)99, t24, (char)101);
    t28 = (t0 + 592U);
    t29 = *((char **)t28);
    t30 = (11 - 11);
    t31 = (t30 * -1);
    t32 = (1U * t31);
    t33 = (0 + t32);
    t28 = (t29 + t33);
    t34 = *((unsigned char *)t28);
    t37 = ((IEEE_P_2592010699) + 2332);
    t35 = xsi_base_array_concat(t35, t36, t37, (char)97, t25, t26, (char)99, t34, (char)101);
    t38 = (t0 + 592U);
    t39 = *((char **)t38);
    t41 = ((IEEE_P_2592010699) + 2332);
    t42 = (t0 + 3104U);
    t38 = xsi_base_array_concat(t38, t40, t41, (char)97, t35, t36, (char)97, t39, t42, (char)101);
    t43 = (1U + 1U);
    t44 = (t43 + 1U);
    t45 = (t44 + 1U);
    t46 = (t45 + 12U);
    t47 = (16U != t46);
    if (t47 == 1)
        goto LAB5;

LAB6:    t48 = (t0 + 1828);
    t49 = (t48 + 32U);
    t50 = *((char **)t49);
    t51 = (t50 + 40U);
    t52 = *((char **)t51);
    memcpy(t52, t38, 16U);
    xsi_driver_first_trans_fast(t48);

LAB2:    t53 = (t0 + 1776);
    *((int *)t53) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t46, 0);
    goto LAB6;

}

static void work_a_2463950859_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(19, ng0);

LAB3:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 1864);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 1784);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2463950859_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2463950859_3212880686_p_0,(void *)work_a_2463950859_3212880686_p_1};
	xsi_register_didat("work_a_2463950859_3212880686", "isim/t_extensorS_isim_beh.exe.sim/work/a_2463950859_3212880686.didat");
	xsi_register_executes(pe);
}
