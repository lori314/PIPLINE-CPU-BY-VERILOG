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
static const char *ng0 = "C:/Users/lenovo/Desktop/codes/verilog/P7/ppcpu/BE.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {15U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {12U, 0U};
static unsigned int ng6[] = {0U, 0U};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {8U, 0U};



static void Always_31_0(char *t0)
{
    char t14[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(36, ng0);

LAB10:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(32, ng0);

LAB9:    xsi_set_current_line(33, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2088);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB11:    xsi_set_current_line(37, ng0);

LAB14:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB15:    t4 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 32);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t13 == 1)
        goto LAB20;

LAB21:
LAB23:
LAB22:    xsi_set_current_line(79, ng0);

LAB72:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB24:    goto LAB13;

LAB16:    xsi_set_current_line(39, ng0);

LAB25:    xsi_set_current_line(40, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2088);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB24;

LAB18:    xsi_set_current_line(43, ng0);

LAB26:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1008U);
    t11 = (t3 + 72U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t14, 32, t4, t12, 2, t15, 32, 1);
    t16 = ((char*)((ng1)));
    memset(t17, 0, 8);
    if (*((unsigned int *)t14) != *((unsigned int *)t16))
        goto LAB29;

LAB27:    t18 = (t14 + 4);
    t19 = (t16 + 4);
    if (*((unsigned int *)t18) != *((unsigned int *)t19))
        goto LAB29;

LAB28:    *((unsigned int *)t17) = 1;

LAB29:    t20 = (t17 + 4);
    t6 = *((unsigned int *)t20);
    t7 = (~(t6));
    t8 = *((unsigned int *)t17);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t11 = *((char **)t4);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t14, 32, t3, t11, 2, t12, 32, 1);
    t15 = ((char*)((ng3)));
    memset(t17, 0, 8);
    if (*((unsigned int *)t14) != *((unsigned int *)t15))
        goto LAB36;

LAB34:    t16 = (t14 + 4);
    t18 = (t15 + 4);
    if (*((unsigned int *)t16) != *((unsigned int *)t18))
        goto LAB36;

LAB35:    *((unsigned int *)t17) = 1;

LAB36:    t19 = (t17 + 4);
    t6 = *((unsigned int *)t19);
    t7 = (~(t6));
    t8 = *((unsigned int *)t17);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(52, ng0);

LAB41:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB39:
LAB32:    goto LAB24;

LAB20:    xsi_set_current_line(57, ng0);

LAB42:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 3U);
    t23 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t23 & 3U);
    t12 = ((char*)((ng6)));
    memset(t17, 0, 8);
    if (*((unsigned int *)t14) != *((unsigned int *)t12))
        goto LAB45;

LAB43:    t15 = (t14 + 4);
    t16 = (t12 + 4);
    if (*((unsigned int *)t15) != *((unsigned int *)t16))
        goto LAB45;

LAB44:    *((unsigned int *)t17) = 1;

LAB45:    t18 = (t17 + 4);
    t24 = *((unsigned int *)t18);
    t25 = (~(t24));
    t26 = *((unsigned int *)t17);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 3U);
    t23 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t23 & 3U);
    t11 = ((char*)((ng8)));
    memset(t17, 0, 8);
    if (*((unsigned int *)t14) != *((unsigned int *)t11))
        goto LAB52;

LAB50:    t12 = (t14 + 4);
    t15 = (t11 + 4);
    if (*((unsigned int *)t12) != *((unsigned int *)t15))
        goto LAB52;

LAB51:    *((unsigned int *)t17) = 1;

LAB52:    t16 = (t17 + 4);
    t24 = *((unsigned int *)t16);
    t25 = (~(t24));
    t26 = *((unsigned int *)t17);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 3U);
    t23 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t23 & 3U);
    t11 = ((char*)((ng9)));
    memset(t17, 0, 8);
    if (*((unsigned int *)t14) != *((unsigned int *)t11))
        goto LAB59;

LAB57:    t12 = (t14 + 4);
    t15 = (t11 + 4);
    if (*((unsigned int *)t12) != *((unsigned int *)t15))
        goto LAB59;

LAB58:    *((unsigned int *)t17) = 1;

LAB59:    t16 = (t17 + 4);
    t24 = *((unsigned int *)t16);
    t25 = (~(t24));
    t26 = *((unsigned int *)t17);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 3U);
    t23 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t23 & 3U);
    t11 = ((char*)((ng4)));
    memset(t17, 0, 8);
    if (*((unsigned int *)t14) != *((unsigned int *)t11))
        goto LAB66;

LAB64:    t12 = (t14 + 4);
    t15 = (t11 + 4);
    if (*((unsigned int *)t12) != *((unsigned int *)t15))
        goto LAB66;

LAB65:    *((unsigned int *)t17) = 1;

LAB66:    t16 = (t17 + 4);
    t24 = *((unsigned int *)t16);
    t25 = (~(t24));
    t26 = *((unsigned int *)t17);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(74, ng0);

LAB71:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB69:
LAB62:
LAB55:
LAB48:    goto LAB24;

LAB30:    xsi_set_current_line(44, ng0);

LAB33:    xsi_set_current_line(45, ng0);
    t21 = ((char*)((ng4)));
    t22 = (t0 + 2088);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 4);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB32;

LAB37:    xsi_set_current_line(48, ng0);

LAB40:    xsi_set_current_line(49, ng0);
    t20 = ((char*)((ng5)));
    t21 = (t0 + 2088);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 4);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t3 = (t17 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 65535U);
    t23 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t23 & 65535U);
    xsi_vlogtype_concat(t14, 32, 32, 2U, t17, 16, t2, 16);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 32);
    goto LAB39;

LAB46:    xsi_set_current_line(58, ng0);

LAB49:    xsi_set_current_line(59, ng0);
    t19 = ((char*)((ng8)));
    t20 = (t0 + 2088);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB48;

LAB53:    xsi_set_current_line(62, ng0);

LAB56:    xsi_set_current_line(63, ng0);
    t18 = ((char*)((ng9)));
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 4);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t3 = (t17 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 255U);
    t23 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t23 & 255U);
    t12 = ((char*)((ng6)));
    t15 = ((char*)((ng6)));
    xsi_vlogtype_concat(t14, 32, 32, 4U, t15, 8, t12, 8, t17, 8, t2, 8);
    t16 = (t0 + 2248);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 32);
    goto LAB55;

LAB60:    xsi_set_current_line(66, ng0);

LAB63:    xsi_set_current_line(67, ng0);
    t18 = ((char*)((ng10)));
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 4);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1528U);
    t11 = *((char **)t4);
    memset(t17, 0, 8);
    t4 = (t17 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 255U);
    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 255U);
    t15 = ((char*)((ng6)));
    xsi_vlogtype_concat(t14, 32, 32, 4U, t15, 8, t17, 8, t3, 8, t2, 8);
    t16 = (t0 + 2248);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 32);
    goto LAB62;

LAB67:    xsi_set_current_line(70, ng0);

LAB70:    xsi_set_current_line(71, ng0);
    t18 = ((char*)((ng11)));
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 4);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t3 = (t17 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 255U);
    t23 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t23 & 255U);
    xsi_vlogtype_concat(t14, 32, 32, 2U, t17, 8, t2, 24);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 32);
    goto LAB69;

}


extern void work_m_00000000003187079019_4140825114_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000003187079019_4140825114", "isim/tb_isim_beh.exe.sim/work/m_00000000003187079019_4140825114.didat");
	xsi_register_executes(pe);
}
