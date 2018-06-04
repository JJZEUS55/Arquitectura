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

char *STD_TEXTIO;
char *IEEE_P_2592010699;
char *IEEE_P_3499444699;
char *WORK_P_0751954218;
char *IEEE_P_3620187407;
char *STD_STANDARD;
char *IEEE_P_3564397177;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    std_textio_init();
    ieee_p_3564397177_init();
    work_p_0751954218_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    work_a_3867927571_3212880686_init();
    work_a_3531332027_3212880686_init();
    work_a_1061504304_3212880686_init();
    work_a_2131384204_3212880686_init();
    work_a_2178422333_3212880686_init();
    work_a_3389147487_3212880686_init();
    work_a_0283168587_3212880686_init();
    work_a_2446174517_3212880686_init();
    work_a_0170400702_2372691052_init();


    xsi_register_tops("work_a_0170400702_2372691052");

    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    WORK_P_0751954218 = xsi_get_engine_memory("work_p_0751954218");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");

    return xsi_run_simulation(argc, argv);

}
