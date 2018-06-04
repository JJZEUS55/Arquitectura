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
static const char *ng0 = "C:/Users/Acer/Desktop/Arquitectura/p6/pila/pila.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_0951762062_3212880686_p_0(char *t0)
{
    char t31[16];
    char t32[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    int t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    unsigned char t27;
    unsigned char t28;
    unsigned char t29;
    unsigned char t30;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 936U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB12;

LAB13:    t3 = (unsigned char)0;

LAB14:    if (t3 != 0)
        goto LAB10;

LAB11:
LAB3:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 1476U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    t7 = (t6 - 0);
    t13 = (t7 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, t6);
    t14 = (16U * t13);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t9 = (t0 + 2308);
    t10 = (t9 + 32U);
    t16 = *((char **)t10);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t1, 16U);
    xsi_driver_first_trans_fast_port(t9);
    t1 = (t0 + 2228);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1476U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(26, ng0);
    t6 = (8 - 1);
    t1 = (t0 + 4432);
    *((int *)t1) = 0;
    t2 = (t0 + 4436);
    *((int *)t2) = t6;
    t7 = 0;
    t8 = t6;

LAB5:    if (t7 <= t8)
        goto LAB6;

LAB8:    goto LAB3;

LAB6:    xsi_set_current_line(27, ng0);
    t5 = xsi_get_transient_memory(16U);
    memset(t5, 0, 16U);
    t9 = t5;
    memset(t9, (unsigned char)2, 16U);
    t10 = (t0 + 4432);
    t11 = *((int *)t10);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    t14 = (16U * t13);
    t15 = (0U + t14);
    t16 = (t0 + 2272);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t5, 16U);
    xsi_driver_first_trans_delta(t16, t15, 16U, 0LL);

LAB7:    t1 = (t0 + 4432);
    t7 = *((int *)t1);
    t2 = (t0 + 4436);
    t8 = *((int *)t2);
    if (t7 == t8)
        goto LAB8;

LAB9:    t6 = (t7 + 1);
    t7 = t6;
    t5 = (t0 + 4432);
    *((int *)t5) = t7;
    goto LAB5;

LAB10:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 776U);
    t9 = *((char **)t2);
    t25 = *((unsigned char *)t9);
    t26 = (t25 == (unsigned char)2);
    if (t26 == 1)
        goto LAB21;

LAB22:    t24 = (unsigned char)0;

LAB23:    if (t24 == 1)
        goto LAB18;

LAB19:    t23 = (unsigned char)0;

LAB20:    if (t23 != 0)
        goto LAB15;

LAB17:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t21 = *((unsigned char *)t2);
    t22 = (t21 == (unsigned char)3);
    if (t22 == 1)
        goto LAB31;

LAB32:    t4 = (unsigned char)0;

LAB33:    if (t4 == 1)
        goto LAB28;

LAB29:    t3 = (unsigned char)0;

LAB30:    if (t3 != 0)
        goto LAB26;

LAB27:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t21 = *((unsigned char *)t2);
    t22 = (t21 == (unsigned char)3);
    if (t22 == 1)
        goto LAB39;

LAB40:    t4 = (unsigned char)0;

LAB41:    if (t4 == 1)
        goto LAB36;

LAB37:    t3 = (unsigned char)0;

LAB38:    if (t3 != 0)
        goto LAB34;

LAB35:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t21 = *((unsigned char *)t2);
    t22 = (t21 == (unsigned char)2);
    if (t22 == 1)
        goto LAB50;

LAB51:    t4 = (unsigned char)0;

LAB52:    if (t4 == 1)
        goto LAB47;

LAB48:    t3 = (unsigned char)0;

LAB49:    if (t3 != 0)
        goto LAB45;

LAB46:
LAB16:    goto LAB3;

LAB12:    t2 = (t0 + 960U);
    t5 = *((char **)t2);
    t21 = *((unsigned char *)t5);
    t22 = (t21 == (unsigned char)3);
    t3 = t22;
    goto LAB14;

LAB15:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1476U);
    t17 = *((char **)t2);
    t6 = *((int *)t17);
    t2 = (t0 + 1476U);
    t18 = *((char **)t2);
    t2 = (t18 + 0);
    *((int *)t2) = t6;
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 1476U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    t7 = (t6 - 0);
    t13 = (t7 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, t6);
    t14 = (16U * t13);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t9 = (t32 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 15;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t8 = (0 - 15);
    t33 = (t8 * -1);
    t33 = (t33 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t33;
    t10 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t31, t1, t32, 1);
    t16 = (t31 + 12U);
    t33 = *((unsigned int *)t16);
    t34 = (1U * t33);
    t3 = (16U != t34);
    if (t3 == 1)
        goto LAB24;

LAB25:    t17 = (t0 + 1476U);
    t18 = *((char **)t17);
    t11 = *((int *)t18);
    t12 = (t11 - 0);
    t35 = (t12 * 1);
    t36 = (16U * t35);
    t37 = (0U + t36);
    t17 = (t0 + 2272);
    t19 = (t17 + 32U);
    t20 = *((char **)t19);
    t38 = (t20 + 40U);
    t39 = *((char **)t38);
    memcpy(t39, t10, 16U);
    xsi_driver_first_trans_delta(t17, t37, 16U, 0LL);
    goto LAB16;

LAB18:    t2 = (t0 + 592U);
    t16 = *((char **)t2);
    t29 = *((unsigned char *)t16);
    t30 = (t29 == (unsigned char)2);
    t23 = t30;
    goto LAB20;

LAB21:    t2 = (t0 + 684U);
    t10 = *((char **)t2);
    t27 = *((unsigned char *)t10);
    t28 = (t27 == (unsigned char)2);
    t24 = t28;
    goto LAB23;

LAB24:    xsi_size_not_matching(16U, t34, 0);
    goto LAB25;

LAB26:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1052U);
    t10 = *((char **)t1);
    t1 = (t0 + 1476U);
    t16 = *((char **)t1);
    t6 = *((int *)t16);
    t7 = (t6 - 0);
    t13 = (t7 * 1);
    t14 = (16U * t13);
    t15 = (0U + t14);
    t1 = (t0 + 2272);
    t17 = (t1 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t10, 16U);
    xsi_driver_first_trans_delta(t1, t15, 16U, 0LL);
    goto LAB16;

LAB28:    t1 = (t0 + 592U);
    t9 = *((char **)t1);
    t25 = *((unsigned char *)t9);
    t26 = (t25 == (unsigned char)2);
    t3 = t26;
    goto LAB30;

LAB31:    t1 = (t0 + 684U);
    t5 = *((char **)t1);
    t23 = *((unsigned char *)t5);
    t24 = (t23 == (unsigned char)2);
    t4 = t24;
    goto LAB33;

LAB34:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1476U);
    t10 = *((char **)t1);
    t6 = *((int *)t10);
    t27 = (t6 == 7);
    if (t27 != 0)
        goto LAB42;

LAB44:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1476U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t7 = (t6 + 1);
    t1 = (t0 + 1476U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t7;
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t1 = (t0 + 1476U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    t7 = (t6 - 0);
    t13 = (t7 * 1);
    t14 = (16U * t13);
    t15 = (0U + t14);
    t1 = (t0 + 2272);
    t9 = (t1 + 32U);
    t10 = *((char **)t9);
    t16 = (t10 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t2, 16U);
    xsi_driver_first_trans_delta(t1, t15, 16U, 0LL);

LAB43:    goto LAB16;

LAB36:    t1 = (t0 + 592U);
    t9 = *((char **)t1);
    t25 = *((unsigned char *)t9);
    t26 = (t25 == (unsigned char)2);
    t3 = t26;
    goto LAB38;

LAB39:    t1 = (t0 + 684U);
    t5 = *((char **)t1);
    t23 = *((unsigned char *)t5);
    t24 = (t23 == (unsigned char)3);
    t4 = t24;
    goto LAB41;

LAB42:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1476U);
    t16 = *((char **)t1);
    t7 = *((int *)t16);
    t1 = (t0 + 1476U);
    t17 = *((char **)t1);
    t1 = (t17 + 0);
    *((int *)t1) = t7;
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t1 = (t0 + 1476U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    t7 = (t6 - 0);
    t13 = (t7 * 1);
    t14 = (16U * t13);
    t15 = (0U + t14);
    t1 = (t0 + 2272);
    t9 = (t1 + 32U);
    t10 = *((char **)t9);
    t16 = (t10 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t2, 16U);
    xsi_driver_first_trans_delta(t1, t15, 16U, 0LL);
    goto LAB43;

LAB45:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1476U);
    t10 = *((char **)t1);
    t6 = *((int *)t10);
    t27 = (t6 == 0);
    if (t27 != 0)
        goto LAB53;

LAB55:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1476U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t7 = (t6 - 1);
    t1 = (t0 + 1476U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t7;
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 1476U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    t7 = (t6 - 0);
    t13 = (t7 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, t6);
    t14 = (16U * t13);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t9 = (t32 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 15;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t8 = (0 - 15);
    t33 = (t8 * -1);
    t33 = (t33 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t33;
    t10 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t31, t1, t32, 1);
    t16 = (t31 + 12U);
    t33 = *((unsigned int *)t16);
    t34 = (1U * t33);
    t3 = (16U != t34);
    if (t3 == 1)
        goto LAB58;

LAB59:    t17 = (t0 + 1476U);
    t18 = *((char **)t17);
    t11 = *((int *)t18);
    t12 = (t11 - 0);
    t35 = (t12 * 1);
    t36 = (16U * t35);
    t37 = (0U + t36);
    t17 = (t0 + 2272);
    t19 = (t17 + 32U);
    t20 = *((char **)t19);
    t38 = (t20 + 40U);
    t39 = *((char **)t38);
    memcpy(t39, t10, 16U);
    xsi_driver_first_trans_delta(t17, t37, 16U, 0LL);

LAB54:    goto LAB16;

LAB47:    t1 = (t0 + 592U);
    t9 = *((char **)t1);
    t25 = *((unsigned char *)t9);
    t26 = (t25 == (unsigned char)3);
    t3 = t26;
    goto LAB49;

LAB50:    t1 = (t0 + 684U);
    t5 = *((char **)t1);
    t23 = *((unsigned char *)t5);
    t24 = (t23 == (unsigned char)2);
    t4 = t24;
    goto LAB52;

LAB53:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1476U);
    t16 = *((char **)t1);
    t7 = *((int *)t16);
    t1 = (t0 + 1476U);
    t17 = *((char **)t1);
    t1 = (t17 + 0);
    *((int *)t1) = t7;
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 1476U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    t7 = (t6 - 0);
    t13 = (t7 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, t6);
    t14 = (16U * t13);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t9 = (t32 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 15;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t8 = (0 - 15);
    t33 = (t8 * -1);
    t33 = (t33 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t33;
    t10 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t31, t1, t32, 1);
    t16 = (t31 + 12U);
    t33 = *((unsigned int *)t16);
    t34 = (1U * t33);
    t3 = (16U != t34);
    if (t3 == 1)
        goto LAB56;

LAB57:    t17 = (t0 + 1476U);
    t18 = *((char **)t17);
    t11 = *((int *)t18);
    t12 = (t11 - 0);
    t35 = (t12 * 1);
    t36 = (16U * t35);
    t37 = (0U + t36);
    t17 = (t0 + 2272);
    t19 = (t17 + 32U);
    t20 = *((char **)t19);
    t38 = (t20 + 40U);
    t39 = *((char **)t38);
    memcpy(t39, t10, 16U);
    xsi_driver_first_trans_delta(t17, t37, 16U, 0LL);
    goto LAB54;

LAB56:    xsi_size_not_matching(16U, t34, 0);
    goto LAB57;

LAB58:    xsi_size_not_matching(16U, t34, 0);
    goto LAB59;

}


extern void work_a_0951762062_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0951762062_3212880686_p_0};
	xsi_register_didat("work_a_0951762062_3212880686", "isim/t_ESCOMIPS_isim_beh.exe.sim/work/a_0951762062_3212880686.didat");
	xsi_register_executes(pe);
}
