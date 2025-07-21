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
static const char *ng0 = "C:/Users/lenovo/Desktop/codes/verilog/P7/ppcpu/mips.v";
static int ng1[] = {0, 0};



static void Cont_66_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 7488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 8152);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 8056);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_128_1(char *t0)
{
    char t3[32];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 7736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 6008U);
    t4 = *((char **)t2);
    t2 = (t0 + 6168U);
    t5 = *((char **)t2);
    t2 = (t0 + 1368U);
    t6 = *((char **)t2);
    t2 = ((char*)((ng1)));
    t7 = ((char*)((ng1)));
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 99, 99, 6U, t8, 32, t7, 32, t2, 32, t6, 1, t5, 1, t4, 1);
    t9 = (t0 + 8216);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_bit_copy(t13, 0, t3, 0, 6);
    xsi_driver_vfirst_trans(t9, 0, 5);
    t14 = (t0 + 8072);
    *((int *)t14) = 1;

LAB1:    return;
}


extern void work_m_00000000002614742970_3877310806_init()
{
	static char *pe[] = {(void *)Cont_66_0,(void *)Cont_128_1};
	xsi_register_didat("work_m_00000000002614742970_3877310806", "isim/tb_isim_beh.exe.sim/work/m_00000000002614742970_3877310806.didat");
	xsi_register_executes(pe);
}
