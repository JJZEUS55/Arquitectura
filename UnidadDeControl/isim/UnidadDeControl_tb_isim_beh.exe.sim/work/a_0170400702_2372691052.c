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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Caos/Desktop/ESCOM/2017-2/Materias/Arqui/Practicas/Practica9/UnidadDeControl/UnidadDeControl_tb.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3564397177;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
void ieee_p_3564397177_sub_1281154728_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_1496949865_91900896(char *, char *, char *, unsigned char , unsigned char , int );
void ieee_p_3564397177_sub_2743816878_91900896(char *, char *, char *, char *);
void ieee_p_3564397177_sub_2889341154_91900896(char *, char *, char *, char *, char *);


static void work_a_0170400702_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 7392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 8088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 7200);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 8088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 7200);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0170400702_2372691052_p_1(char *t0)
{
    char t5[16];
    char t10[8];
    char t11[8];
    char t12[8];
    char t13[8];
    char t14[8];
    char t15[8];
    char t24[8];
    char t25[8];
    char t26[8];
    char t27[24];
    char t28[8];
    char t29[8];
    char t30[8];
    char t31[8];
    char t32[24];
    char t33[8];
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
    unsigned char t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 7640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 4656U);
    t3 = (t0 + 16021);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 12;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (12 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)0);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4760U);
    t3 = (t0 + 16033);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 11;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (11 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)1);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 5224U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t10, t7, 7U);
    t6 = (t0 + 15524U);
    t8 = (7U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t10, t6, (unsigned char)0, t8);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 5368U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t11, t7, 8U);
    t6 = (t0 + 15540U);
    t8 = (8U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t11, t6, (unsigned char)0, t8);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 5512U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t12, t7, 8U);
    t6 = (t0 + 15556U);
    t8 = (8U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t12, t6, (unsigned char)0, t8);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 5656U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t13, t7, 3U);
    t6 = (t0 + 15572U);
    t8 = (3U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t13, t6, (unsigned char)0, t8);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 5800U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t14, t7, 2U);
    t6 = (t0 + 15588U);
    t8 = (2U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t14, t6, (unsigned char)0, t8);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 6808U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t5, t7, 16U);
    t6 = (t0 + 15700U);
    t8 = (20U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t5, t6, (unsigned char)0, t8);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 5944U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t15, t7, 5U);
    t6 = (t0 + 15604U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t15, t6, (unsigned char)0, t8);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 4760U);
    t4 = (t0 + 5008U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 8152);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(133, ng0);
    t16 = (12 * 1000LL);
    t2 = (t0 + 7448);
    xsi_process_wait(t2, t16);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 8152);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(135, ng0);

LAB8:    t2 = (t0 + 4656U);
    t17 = std_textio_endfile(t2);
    t18 = (!(t17));
    if (t18 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(195, ng0);
    t2 = (t0 + 4656U);
    std_textio_file_close(t2);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 4760U);
    std_textio_file_close(t2);
    xsi_set_current_line(198, ng0);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(137, ng0);

LAB14:    t3 = (t0 + 7960);
    *((int *)t3) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:;
LAB12:    t6 = (t0 + 7960);
    *((int *)t6) = 0;
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 4656U);
    t4 = (t0 + 4936U);
    std_textio_readline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 4936U);
    t4 = (t0 + 3728U);
    t6 = *((char **)t4);
    t4 = (t0 + 15476U);
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 3728U);
    t3 = *((char **)t2);
    t2 = (t0 + 8216);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t20 = *((char **)t7);
    memcpy(t20, t3, 5U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 4936U);
    t4 = (t0 + 3848U);
    t6 = *((char **)t4);
    t4 = (t0 + 15492U);
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 3848U);
    t3 = *((char **)t2);
    t2 = (t0 + 8280);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t20 = *((char **)t7);
    memcpy(t20, t3, 4U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 4936U);
    t4 = (t0 + 3368U);
    t6 = *((char **)t4);
    t4 = (t0 + 15460U);
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 3368U);
    t3 = *((char **)t2);
    t8 = (3 - 3);
    t9 = (t8 * -1);
    t21 = (1U * t9);
    t22 = (0 + t21);
    t2 = (t3 + t22);
    t17 = *((unsigned char *)t2);
    t4 = (t0 + 8344);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t20 = (t7 + 56U);
    t23 = *((char **)t20);
    *((unsigned char *)t23) = t17;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 3368U);
    t3 = *((char **)t2);
    t8 = (2 - 3);
    t9 = (t8 * -1);
    t21 = (1U * t9);
    t22 = (0 + t21);
    t2 = (t3 + t22);
    t17 = *((unsigned char *)t2);
    t4 = (t0 + 8408);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t20 = (t7 + 56U);
    t23 = *((char **)t20);
    *((unsigned char *)t23) = t17;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 3368U);
    t3 = *((char **)t2);
    t8 = (1 - 3);
    t9 = (t8 * -1);
    t21 = (1U * t9);
    t22 = (0 + t21);
    t2 = (t3 + t22);
    t17 = *((unsigned char *)t2);
    t4 = (t0 + 8472);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t20 = (t7 + 56U);
    t23 = *((char **)t20);
    *((unsigned char *)t23) = t17;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 3368U);
    t3 = *((char **)t2);
    t8 = (0 - 3);
    t9 = (t8 * -1);
    t21 = (1U * t9);
    t22 = (0 + t21);
    t2 = (t3 + t22);
    t17 = *((unsigned char *)t2);
    t4 = (t0 + 8536);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t20 = (t7 + 56U);
    t23 = *((char **)t20);
    *((unsigned char *)t23) = t17;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 4936U);
    t4 = (t0 + 3608U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_2743816878_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t17 = *((unsigned char *)t3);
    t2 = (t0 + 8152);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t20 = *((char **)t7);
    *((unsigned char *)t20) = t17;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 4936U);
    t4 = (t0 + 3488U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_2743816878_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 3488U);
    t3 = *((char **)t2);
    t17 = *((unsigned char *)t3);
    t2 = (t0 + 8600);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t20 = *((char **)t7);
    *((unsigned char *)t20) = t17;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(158, ng0);
    t16 = (4 * 1000LL);
    t2 = (t0 + 7448);
    xsi_process_wait(t2, t16);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    t4 = (t0 + 1792U);
    t19 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t4, 0U, 0U);
    if (t19 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t2 = (t0 + 3968U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    memcpy(t2, t3, 20U);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 3728U);
    t6 = *((char **)t4);
    memcpy(t24, t6, 5U);
    t4 = (t0 + 15476U);
    t8 = (7U + 1);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t24, t4, (unsigned char)0, t8);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 3848U);
    t6 = *((char **)t4);
    memcpy(t25, t6, 4U);
    t4 = (t0 + 15492U);
    t8 = (8U + 1);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t25, t4, (unsigned char)0, t8);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 3368U);
    t6 = *((char **)t4);
    memcpy(t26, t6, 4U);
    t4 = (t0 + 15460U);
    t8 = (8U + 1);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t26, t4, (unsigned char)0, t8);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 3608U);
    t6 = *((char **)t4);
    t17 = *((unsigned char *)t6);
    t8 = (3U + 1);
    ieee_p_3564397177_sub_1496949865_91900896(IEEE_P_3564397177, t2, t3, t17, (unsigned char)0, t8);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 3488U);
    t6 = *((char **)t4);
    t17 = *((unsigned char *)t6);
    t8 = (2U + 1);
    ieee_p_3564397177_sub_1496949865_91900896(IEEE_P_3564397177, t2, t3, t17, (unsigned char)0, t8);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 3968U);
    t6 = *((char **)t4);
    memcpy(t27, t6, 20U);
    t4 = (t0 + 15508U);
    t8 = (20U + 1);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t27, t4, (unsigned char)0, t8);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 6088U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t28, t7, 4U);
    t6 = (t0 + 15620U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t28, t6, (unsigned char)0, t8);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 4760U);
    t4 = (t0 + 5008U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(175, ng0);

LAB22:    t2 = (t0 + 7992);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    t4 = (t0 + 7992);
    *((int *)t4) = 0;
    xsi_set_current_line(176, ng0);
    t16 = (4 * 1000LL);
    t2 = (t0 + 7448);
    xsi_process_wait(t2, t16);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    t3 = (t0 + 1792U);
    t17 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t17 == 1)
        goto LAB20;
    else
        goto LAB22;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t2 = (t0 + 3968U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    memcpy(t2, t3, 20U);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 3728U);
    t6 = *((char **)t4);
    memcpy(t29, t6, 5U);
    t4 = (t0 + 15476U);
    t8 = (7U + 1);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t29, t4, (unsigned char)0, t8);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 3848U);
    t6 = *((char **)t4);
    memcpy(t30, t6, 4U);
    t4 = (t0 + 15492U);
    t8 = (8U + 1);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t30, t4, (unsigned char)0, t8);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 3368U);
    t6 = *((char **)t4);
    memcpy(t31, t6, 4U);
    t4 = (t0 + 15460U);
    t8 = (8U + 1);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t31, t4, (unsigned char)0, t8);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 3608U);
    t6 = *((char **)t4);
    t17 = *((unsigned char *)t6);
    t8 = (3U + 1);
    ieee_p_3564397177_sub_1496949865_91900896(IEEE_P_3564397177, t2, t3, t17, (unsigned char)0, t8);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 3488U);
    t6 = *((char **)t4);
    t17 = *((unsigned char *)t6);
    t8 = (2U + 1);
    ieee_p_3564397177_sub_1496949865_91900896(IEEE_P_3564397177, t2, t3, t17, (unsigned char)0, t8);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 3968U);
    t6 = *((char **)t4);
    memcpy(t32, t6, 20U);
    t4 = (t0 + 15508U);
    t8 = (20U + 1);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t32, t4, (unsigned char)0, t8);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 5008U);
    t4 = (t0 + 6232U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t33, t7, 4U);
    t6 = (t0 + 15636U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t33, t6, (unsigned char)0, t8);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 7448);
    t3 = (t0 + 4760U);
    t4 = (t0 + 5008U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    goto LAB8;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    goto LAB2;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

}


extern void work_a_0170400702_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0170400702_2372691052_p_0,(void *)work_a_0170400702_2372691052_p_1};
	xsi_register_didat("work_a_0170400702_2372691052", "isim/UnidadDeControl_tb_isim_beh.exe.sim/work/a_0170400702_2372691052.didat");
	xsi_register_executes(pe);
}
