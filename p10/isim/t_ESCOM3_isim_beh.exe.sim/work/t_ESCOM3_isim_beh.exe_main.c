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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *WORK_P_1541072586;
char *IEEE_P_3499444699;
char *IEEE_P_3620187407;
char *WORK_P_4130788155;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    work_p_4130788155_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    work_p_1541072586_init();
    work_a_1461414970_3212880686_init();
    work_a_0951762062_3212880686_init();
    work_a_1645251960_3212880686_init();
    work_a_1518192563_3212880686_init();
    work_a_2463950859_3212880686_init();
    work_a_3709398994_1969699793_init();
    work_a_3072743798_1704190975_init();
    work_a_2253722718_3212880686_init();
    work_a_1452136513_3212880686_init();
    work_a_3349543142_3212880686_init();
    work_a_3503106169_3212880686_init();
    work_a_1878588406_3212880686_init();
    work_a_0055566882_3212880686_init();
    work_a_1150053985_3212880686_init();
    work_a_1282704194_3212880686_init();
    work_a_0991361627_3212880686_init();
    work_a_3451042171_2372691052_init();


    xsi_register_tops("work_a_3451042171_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    WORK_P_1541072586 = xsi_get_engine_memory("work_p_1541072586");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    WORK_P_4130788155 = xsi_get_engine_memory("work_p_4130788155");

    return xsi_run_simulation(argc, argv);

}
