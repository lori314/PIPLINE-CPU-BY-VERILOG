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
static const char *ng0 = "C:/Users/lenovo/Desktop/codes/verilog/P7/ppcpu/DE.v";
static int ng1[] = {0, 0};
static int ng2[] = {3, 0};
static int ng3[] = {4, 0};
static int ng4[] = {1, 0};
static int ng5[] = {5, 0};
static int ng6[] = {2, 0};



static void Always_29_0(char *t0)
{
    char t14[8];
    char t17[8];
    char t34[8];
    char t35[8];
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
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(33, ng0);

LAB10:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB11:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t13 == 1)
        goto LAB16;

LAB17:
LAB19:
LAB18:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB20:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(30, ng0);

LAB9:    xsi_set_current_line(31, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB8;

LAB12:    xsi_set_current_line(35, ng0);

LAB21:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB20;

LAB14:    xsi_set_current_line(38, ng0);

LAB22:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1008U);
    t11 = (t4 + 72U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t14, 32, t5, t12, 2, t15, 32, 1);
    t16 = ((char*)((ng1)));
    memset(t17, 0, 8);
    t18 = (t14 + 4);
    t19 = (t16 + 4);
    t6 = *((unsigned int *)t14);
    t7 = *((unsigned int *)t16);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t18);
    t10 = *((unsigned int *)t19);
    t20 = (t9 ^ t10);
    t21 = (t8 | t20);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t19);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB26;

LAB23:    if (t24 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t17) = 1;

LAB26:    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t17);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1008U);
    t5 = (t2 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t14, 32, t4, t11, 2, t12, 32, 1);
    t15 = ((char*)((ng4)));
    memset(t17, 0, 8);
    t16 = (t14 + 4);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t14);
    t7 = *((unsigned int *)t15);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t16);
    t10 = *((unsigned int *)t18);
    t20 = (t9 ^ t10);
    t21 = (t8 | t20);
    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t18);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB34;

LAB31:    if (t24 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t17) = 1;

LAB34:    t27 = (t17 + 4);
    t29 = *((unsigned int *)t27);
    t30 = (~(t29));
    t31 = *((unsigned int *)t17);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB37:
LAB29:    goto LAB20;

LAB16:    xsi_set_current_line(47, ng0);

LAB39:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t14, 0, 8);
    t4 = (t14 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 3U);
    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 3U);
    t12 = ((char*)((ng1)));
    memset(t17, 0, 8);
    t15 = (t14 + 4);
    t16 = (t12 + 4);
    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t12);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t16);
    t26 = (t24 ^ t25);
    t29 = (t23 | t26);
    t30 = *((unsigned int *)t15);
    t31 = *((unsigned int *)t16);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t39 = (t29 & t33);
    if (t39 != 0)
        goto LAB43;

LAB40:    if (t32 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t17) = 1;

LAB43:    t19 = (t17 + 4);
    t40 = *((unsigned int *)t19);
    t41 = (~(t40));
    t42 = *((unsigned int *)t17);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 3U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 3U);
    t11 = ((char*)((ng4)));
    memset(t17, 0, 8);
    t12 = (t14 + 4);
    t15 = (t11 + 4);
    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t11);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t15);
    t26 = (t24 ^ t25);
    t29 = (t23 | t26);
    t30 = *((unsigned int *)t12);
    t31 = *((unsigned int *)t15);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t39 = (t29 & t33);
    if (t39 != 0)
        goto LAB51;

LAB48:    if (t32 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t17) = 1;

LAB51:    t18 = (t17 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (~(t40));
    t42 = *((unsigned int *)t17);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 3U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 3U);
    t11 = ((char*)((ng6)));
    memset(t17, 0, 8);
    t12 = (t14 + 4);
    t15 = (t11 + 4);
    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t11);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t15);
    t26 = (t24 ^ t25);
    t29 = (t23 | t26);
    t30 = *((unsigned int *)t12);
    t31 = *((unsigned int *)t15);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t39 = (t29 & t33);
    if (t39 != 0)
        goto LAB59;

LAB56:    if (t32 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t17) = 1;

LAB59:    t18 = (t17 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (~(t40));
    t42 = *((unsigned int *)t17);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 3U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 3U);
    t11 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t12 = (t14 + 4);
    t15 = (t11 + 4);
    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t11);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t15);
    t26 = (t24 ^ t25);
    t29 = (t23 | t26);
    t30 = *((unsigned int *)t12);
    t31 = *((unsigned int *)t15);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t39 = (t29 & t33);
    if (t39 != 0)
        goto LAB67;

LAB64:    if (t32 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t17) = 1;

LAB67:    t18 = (t17 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (~(t40));
    t42 = *((unsigned int *)t17);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB70:
LAB62:
LAB54:
LAB46:    goto LAB20;

LAB25:    t27 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(39, ng0);

LAB30:    xsi_set_current_line(40, ng0);
    t36 = (t0 + 1208U);
    t37 = *((char **)t36);
    memset(t35, 0, 8);
    t36 = (t35 + 4);
    t38 = (t37 + 4);
    t39 = *((unsigned int *)t37);
    t40 = (t39 >> 0);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t38);
    t42 = (t41 >> 0);
    *((unsigned int *)t36) = t42;
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 65535U);
    t44 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t44 & 65535U);
    xsi_vlogtype_sign_extend(t34, 32, t35, 16);
    t45 = (t0 + 1928);
    xsi_vlogvar_assign_value(t45, t34, 0, 0, 32);
    goto LAB29;

LAB33:    t19 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(42, ng0);

LAB38:    xsi_set_current_line(43, ng0);
    t28 = (t0 + 1208U);
    t36 = *((char **)t28);
    memset(t35, 0, 8);
    t28 = (t35 + 4);
    t37 = (t36 + 4);
    t39 = *((unsigned int *)t36);
    t40 = (t39 >> 16);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 16);
    *((unsigned int *)t28) = t42;
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 65535U);
    t44 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t44 & 65535U);
    xsi_vlogtype_sign_extend(t34, 32, t35, 16);
    t38 = (t0 + 1928);
    xsi_vlogvar_assign_value(t38, t34, 0, 0, 32);
    goto LAB37;

LAB42:    t18 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(48, ng0);

LAB47:    xsi_set_current_line(49, ng0);
    t27 = (t0 + 1208U);
    t28 = *((char **)t27);
    memset(t35, 0, 8);
    t27 = (t35 + 4);
    t36 = (t28 + 4);
    t46 = *((unsigned int *)t28);
    t47 = (t46 >> 0);
    *((unsigned int *)t35) = t47;
    t48 = *((unsigned int *)t36);
    t49 = (t48 >> 0);
    *((unsigned int *)t27) = t49;
    t50 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t50 & 255U);
    t51 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t51 & 255U);
    xsi_vlogtype_sign_extend(t34, 32, t35, 8);
    t37 = (t0 + 1928);
    xsi_vlogvar_assign_value(t37, t34, 0, 0, 32);
    goto LAB46;

LAB50:    t16 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(51, ng0);

LAB55:    xsi_set_current_line(52, ng0);
    t19 = (t0 + 1208U);
    t27 = *((char **)t19);
    memset(t35, 0, 8);
    t19 = (t35 + 4);
    t28 = (t27 + 4);
    t46 = *((unsigned int *)t27);
    t47 = (t46 >> 8);
    *((unsigned int *)t35) = t47;
    t48 = *((unsigned int *)t28);
    t49 = (t48 >> 8);
    *((unsigned int *)t19) = t49;
    t50 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t50 & 255U);
    t51 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t51 & 255U);
    xsi_vlogtype_sign_extend(t34, 32, t35, 8);
    t36 = (t0 + 1928);
    xsi_vlogvar_assign_value(t36, t34, 0, 0, 32);
    goto LAB54;

LAB58:    t16 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(54, ng0);

LAB63:    xsi_set_current_line(55, ng0);
    t19 = (t0 + 1208U);
    t27 = *((char **)t19);
    memset(t35, 0, 8);
    t19 = (t35 + 4);
    t28 = (t27 + 4);
    t46 = *((unsigned int *)t27);
    t47 = (t46 >> 16);
    *((unsigned int *)t35) = t47;
    t48 = *((unsigned int *)t28);
    t49 = (t48 >> 16);
    *((unsigned int *)t19) = t49;
    t50 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t50 & 255U);
    t51 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t51 & 255U);
    xsi_vlogtype_sign_extend(t34, 32, t35, 8);
    t36 = (t0 + 1928);
    xsi_vlogvar_assign_value(t36, t34, 0, 0, 32);
    goto LAB62;

LAB66:    t16 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(57, ng0);

LAB71:    xsi_set_current_line(58, ng0);
    t19 = (t0 + 1208U);
    t27 = *((char **)t19);
    memset(t35, 0, 8);
    t19 = (t35 + 4);
    t28 = (t27 + 4);
    t46 = *((unsigned int *)t27);
    t47 = (t46 >> 24);
    *((unsigned int *)t35) = t47;
    t48 = *((unsigned int *)t28);
    t49 = (t48 >> 24);
    *((unsigned int *)t19) = t49;
    t50 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t50 & 255U);
    t51 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t51 & 255U);
    xsi_vlogtype_sign_extend(t34, 32, t35, 8);
    t36 = (t0 + 1928);
    xsi_vlogvar_assign_value(t36, t34, 0, 0, 32);
    goto LAB70;

}


extern void work_m_00000000001070706052_2694143388_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000001070706052_2694143388", "isim/tb_isim_beh.exe.sim/work/m_00000000001070706052_2694143388.didat");
	xsi_register_executes(pe);
}
