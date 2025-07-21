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
static const char *ng0 = "C:/Users/lenovo/Desktop/codes/verilog/P7/ppcpu/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {6U, 0U};
static int ng3[] = {5, 0};
static int ng4[] = {4, 0};
static int ng5[] = {12, 0};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4U, 0U};
static int ng10[] = {1, 0};
static int ng11[] = {0, 0};
static unsigned int ng12[] = {5U, 0U};



static void Always_41_0(char *t0)
{
    char t10[8];
    char t17[8];
    char t24[8];
    char t40[8];
    char t54[8];
    char t65[8];
    char t74[8];
    char t90[8];
    char t98[8];
    char t145[16];
    char t146[16];
    char t147[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    int t144;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(81, ng0);

LAB127:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(43, ng0);

LAB24:    xsi_set_current_line(44, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    goto LAB23;

LAB9:    xsi_set_current_line(47, ng0);

LAB25:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t17, 0, 8);
    t7 = (t17 + 4);
    t9 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = (t18 >> 31);
    t20 = (t19 & 1);
    *((unsigned int *)t17) = t20;
    t21 = *((unsigned int *)t9);
    t22 = (t21 >> 31);
    t23 = (t22 & 1);
    *((unsigned int *)t7) = t23;
    memset(t24, 0, 8);
    t25 = (t10 + 4);
    t26 = (t17 + 4);
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t17);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB29;

LAB26:    if (t36 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t24) = 1;

LAB29:    memset(t40, 0, 8);
    t41 = (t24 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t24);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t41) != 0)
        goto LAB32;

LAB33:    t48 = (t40 + 4);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t48);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB34;

LAB35:    memcpy(t98, t40, 8);

LAB36:    t129 = (t98 + 4);
    t130 = *((unsigned int *)t129);
    t131 = (~(t130));
    t132 = *((unsigned int *)t98);
    t133 = (t132 & t131);
    t134 = (t133 != 0);
    if (t134 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);

LAB50:    goto LAB23;

LAB11:    xsi_set_current_line(56, ng0);

LAB58:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t17, 0, 8);
    t7 = (t17 + 4);
    t9 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = (t18 >> 31);
    t20 = (t19 & 1);
    *((unsigned int *)t17) = t20;
    t21 = *((unsigned int *)t9);
    t22 = (t21 >> 31);
    t23 = (t22 & 1);
    *((unsigned int *)t7) = t23;
    memset(t24, 0, 8);
    t25 = (t10 + 4);
    t26 = (t17 + 4);
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t17);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB60;

LAB59:    if (t36 != 0)
        goto LAB61;

LAB62:    memset(t40, 0, 8);
    t41 = (t24 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t24);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t41) != 0)
        goto LAB65;

LAB66:    t48 = (t40 + 4);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t48);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB67;

LAB68:    memcpy(t98, t40, 8);

LAB69:    t129 = (t98 + 4);
    t130 = *((unsigned int *)t129);
    t131 = (~(t130));
    t132 = *((unsigned int *)t98);
    t133 = (t132 & t131);
    t134 = (t133 != 0);
    if (t134 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);

LAB83:    goto LAB23;

LAB13:    xsi_set_current_line(65, ng0);

LAB91:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t18 = *((unsigned int *)t9);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB92;

LAB93:
LAB94:    t39 = (t0 + 2248);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    goto LAB23;

LAB15:    xsi_set_current_line(69, ng0);

LAB95:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t18 = *((unsigned int *)t9);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB96;

LAB97:
LAB98:    t39 = (t0 + 2248);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    goto LAB23;

LAB17:    xsi_set_current_line(73, ng0);

LAB99:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t54, 0, 8);
    xsi_vlog_signed_less(t54, 32, t4, 32, t7, 32);
    memset(t17, 0, 8);
    t3 = (t54 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t54);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t3) != 0)
        goto LAB102;

LAB103:    t9 = (t17 + 4);
    t16 = *((unsigned int *)t17);
    t18 = *((unsigned int *)t9);
    t19 = (t16 || t18);
    if (t19 > 0)
        goto LAB104;

LAB105:    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t9);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t9) > 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t17) > 0)
        goto LAB110;

LAB111:    memcpy(t10, t26, 8);

LAB112:    t39 = (t0 + 2248);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 32);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    goto LAB23;

LAB19:    xsi_set_current_line(77, ng0);

LAB113:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t24, 0, 8);
    t3 = (t24 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t24) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 4294967295U);
    t8 = ((char*)((ng11)));
    xsi_vlogtype_concat(t145, 64, 64, 2U, t8, 32, t24, 32);
    t9 = (t0 + 1208U);
    t25 = *((char **)t9);
    memset(t40, 0, 8);
    t9 = (t40 + 4);
    t26 = (t25 + 4);
    t18 = *((unsigned int *)t25);
    t19 = (t18 >> 0);
    *((unsigned int *)t40) = t19;
    t20 = *((unsigned int *)t26);
    t21 = (t20 >> 0);
    *((unsigned int *)t9) = t21;
    t22 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t22 & 4294967295U);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t23 & 4294967295U);
    t39 = ((char*)((ng11)));
    xsi_vlogtype_concat(t146, 64, 64, 2U, t39, 32, t40, 32);
    xsi_vlog_unsigned_less(t147, 64, t145, 64, t146, 64);
    memset(t17, 0, 8);
    t41 = (t147 + 4);
    t27 = *((unsigned int *)t41);
    t28 = (~(t27));
    t29 = *((unsigned int *)t147);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t41) != 0)
        goto LAB116;

LAB117:    t48 = (t17 + 4);
    t32 = *((unsigned int *)t17);
    t33 = *((unsigned int *)t48);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB118;

LAB119:    t35 = *((unsigned int *)t17);
    t36 = (~(t35));
    t37 = *((unsigned int *)t48);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t48) > 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t17) > 0)
        goto LAB124;

LAB125:    memcpy(t10, t53, 8);

LAB126:    t55 = (t0 + 2248);
    xsi_vlogvar_assign_value(t55, t10, 0, 0, 32);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    goto LAB23;

LAB28:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB29;

LAB30:    *((unsigned int *)t40) = 1;
    goto LAB33;

LAB32:    t47 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB33;

LAB34:    t52 = (t0 + 1048U);
    t53 = *((char **)t52);
    memset(t54, 0, 8);
    t52 = (t54 + 4);
    t55 = (t53 + 4);
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 31);
    t58 = (t57 & 1);
    *((unsigned int *)t54) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 31);
    t61 = (t60 & 1);
    *((unsigned int *)t52) = t61;
    t62 = (t0 + 2248);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    memset(t65, 0, 8);
    t66 = (t65 + 4);
    t67 = (t64 + 4);
    t68 = *((unsigned int *)t64);
    t69 = (t68 >> 31);
    t70 = (t69 & 1);
    *((unsigned int *)t65) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 >> 31);
    t73 = (t72 & 1);
    *((unsigned int *)t66) = t73;
    memset(t74, 0, 8);
    t75 = (t54 + 4);
    t76 = (t65 + 4);
    t77 = *((unsigned int *)t54);
    t78 = *((unsigned int *)t65);
    t79 = (t77 ^ t78);
    t80 = *((unsigned int *)t75);
    t81 = *((unsigned int *)t76);
    t82 = (t80 ^ t81);
    t83 = (t79 | t82);
    t84 = *((unsigned int *)t75);
    t85 = *((unsigned int *)t76);
    t86 = (t84 | t85);
    t87 = (~(t86));
    t88 = (t83 & t87);
    if (t88 != 0)
        goto LAB38;

LAB37:    if (t86 != 0)
        goto LAB39;

LAB40:    memset(t90, 0, 8);
    t91 = (t74 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t74);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t91) != 0)
        goto LAB43;

LAB44:    t99 = *((unsigned int *)t40);
    t100 = *((unsigned int *)t90);
    t101 = (t99 & t100);
    *((unsigned int *)t98) = t101;
    t102 = (t40 + 4);
    t103 = (t90 + 4);
    t104 = (t98 + 4);
    t105 = *((unsigned int *)t102);
    t106 = *((unsigned int *)t103);
    t107 = (t105 | t106);
    *((unsigned int *)t104) = t107;
    t108 = *((unsigned int *)t104);
    t109 = (t108 != 0);
    if (t109 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB36;

LAB38:    *((unsigned int *)t74) = 1;
    goto LAB40;

LAB39:    t89 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB40;

LAB41:    *((unsigned int *)t90) = 1;
    goto LAB44;

LAB43:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB44;

LAB45:    t110 = *((unsigned int *)t98);
    t111 = *((unsigned int *)t104);
    *((unsigned int *)t98) = (t110 | t111);
    t112 = (t40 + 4);
    t113 = (t90 + 4);
    t114 = *((unsigned int *)t40);
    t115 = (~(t114));
    t116 = *((unsigned int *)t112);
    t117 = (~(t116));
    t118 = *((unsigned int *)t90);
    t119 = (~(t118));
    t120 = *((unsigned int *)t113);
    t121 = (~(t120));
    t6 = (t115 & t117);
    t122 = (t119 & t121);
    t123 = (~(t6));
    t124 = (~(t122));
    t125 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t125 & t123);
    t126 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t126 & t124);
    t127 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t127 & t123);
    t128 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t128 & t124);
    goto LAB47;

LAB48:    xsi_set_current_line(49, ng0);

LAB51:    xsi_set_current_line(50, ng0);
    t135 = (t0 + 1688U);
    t136 = *((char **)t135);
    t135 = (t136 + 4);
    t137 = *((unsigned int *)t135);
    t138 = (~(t137));
    t139 = *((unsigned int *)t136);
    t140 = (t139 & t138);
    t141 = (t140 != 0);
    if (t141 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB57:
LAB54:    goto LAB50;

LAB52:    xsi_set_current_line(50, ng0);
    t142 = ((char*)((ng3)));
    t143 = (t0 + 2408);
    xsi_vlogvar_assign_value(t143, t142, 0, 0, 5);
    goto LAB54;

LAB55:    xsi_set_current_line(51, ng0);
    t4 = ((char*)((ng4)));
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 5);
    goto LAB57;

LAB60:    *((unsigned int *)t24) = 1;
    goto LAB62;

LAB61:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t40) = 1;
    goto LAB66;

LAB65:    t47 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB66;

LAB67:    t52 = (t0 + 1048U);
    t53 = *((char **)t52);
    memset(t54, 0, 8);
    t52 = (t54 + 4);
    t55 = (t53 + 4);
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 31);
    t58 = (t57 & 1);
    *((unsigned int *)t54) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 31);
    t61 = (t60 & 1);
    *((unsigned int *)t52) = t61;
    t62 = (t0 + 2248);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    memset(t65, 0, 8);
    t66 = (t65 + 4);
    t67 = (t64 + 4);
    t68 = *((unsigned int *)t64);
    t69 = (t68 >> 31);
    t70 = (t69 & 1);
    *((unsigned int *)t65) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 >> 31);
    t73 = (t72 & 1);
    *((unsigned int *)t66) = t73;
    memset(t74, 0, 8);
    t75 = (t54 + 4);
    t76 = (t65 + 4);
    t77 = *((unsigned int *)t54);
    t78 = *((unsigned int *)t65);
    t79 = (t77 ^ t78);
    t80 = *((unsigned int *)t75);
    t81 = *((unsigned int *)t76);
    t82 = (t80 ^ t81);
    t83 = (t79 | t82);
    t84 = *((unsigned int *)t75);
    t85 = *((unsigned int *)t76);
    t86 = (t84 | t85);
    t87 = (~(t86));
    t88 = (t83 & t87);
    if (t88 != 0)
        goto LAB71;

LAB70:    if (t86 != 0)
        goto LAB72;

LAB73:    memset(t90, 0, 8);
    t91 = (t74 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t74);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t91) != 0)
        goto LAB76;

LAB77:    t99 = *((unsigned int *)t40);
    t100 = *((unsigned int *)t90);
    t101 = (t99 & t100);
    *((unsigned int *)t98) = t101;
    t102 = (t40 + 4);
    t103 = (t90 + 4);
    t104 = (t98 + 4);
    t105 = *((unsigned int *)t102);
    t106 = *((unsigned int *)t103);
    t107 = (t105 | t106);
    *((unsigned int *)t104) = t107;
    t108 = *((unsigned int *)t104);
    t109 = (t108 != 0);
    if (t109 == 1)
        goto LAB78;

LAB79:
LAB80:    goto LAB69;

LAB71:    *((unsigned int *)t74) = 1;
    goto LAB73;

LAB72:    t89 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB73;

LAB74:    *((unsigned int *)t90) = 1;
    goto LAB77;

LAB76:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB77;

LAB78:    t110 = *((unsigned int *)t98);
    t111 = *((unsigned int *)t104);
    *((unsigned int *)t98) = (t110 | t111);
    t112 = (t40 + 4);
    t113 = (t90 + 4);
    t114 = *((unsigned int *)t40);
    t115 = (~(t114));
    t116 = *((unsigned int *)t112);
    t117 = (~(t116));
    t118 = *((unsigned int *)t90);
    t119 = (~(t118));
    t120 = *((unsigned int *)t113);
    t121 = (~(t120));
    t6 = (t115 & t117);
    t122 = (t119 & t121);
    t123 = (~(t6));
    t124 = (~(t122));
    t125 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t125 & t123);
    t126 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t126 & t124);
    t127 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t127 & t123);
    t128 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t128 & t124);
    goto LAB80;

LAB81:    xsi_set_current_line(58, ng0);

LAB84:    xsi_set_current_line(59, ng0);
    t135 = (t0 + 1688U);
    t136 = *((char **)t135);
    t135 = (t136 + 4);
    t137 = *((unsigned int *)t135);
    t138 = (~(t137));
    t139 = *((unsigned int *)t136);
    t140 = (t139 & t138);
    t141 = (t140 != 0);
    if (t141 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB90:
LAB87:    goto LAB83;

LAB85:    xsi_set_current_line(59, ng0);
    t142 = ((char*)((ng3)));
    t143 = (t0 + 2408);
    xsi_vlogvar_assign_value(t143, t142, 0, 0, 5);
    goto LAB87;

LAB88:    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng4)));
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 5);
    goto LAB90;

LAB92:    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t20 | t21);
    t25 = (t4 + 4);
    t26 = (t7 + 4);
    t22 = *((unsigned int *)t25);
    t23 = (~(t22));
    t27 = *((unsigned int *)t4);
    t122 = (t27 & t23);
    t28 = *((unsigned int *)t26);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t144 = (t30 & t29);
    t31 = (~(t122));
    t32 = (~(t144));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t31);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t32);
    goto LAB94;

LAB96:    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t20 | t21);
    t25 = (t4 + 4);
    t26 = (t7 + 4);
    t22 = *((unsigned int *)t4);
    t23 = (~(t22));
    t27 = *((unsigned int *)t25);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (~(t31));
    t122 = (t23 & t28);
    t144 = (t30 & t32);
    t33 = (~(t122));
    t34 = (~(t144));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t33);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t34);
    t37 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t37 & t33);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t34);
    goto LAB98;

LAB100:    *((unsigned int *)t17) = 1;
    goto LAB103;

LAB102:    t8 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB103;

LAB104:    t25 = ((char*)((ng10)));
    goto LAB105;

LAB106:    t26 = ((char*)((ng11)));
    goto LAB107;

LAB108:    xsi_vlog_unsigned_bit_combine(t10, 32, t25, 32, t26, 32);
    goto LAB112;

LAB110:    memcpy(t10, t25, 8);
    goto LAB112;

LAB114:    *((unsigned int *)t17) = 1;
    goto LAB117;

LAB116:    t47 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB117;

LAB118:    t52 = ((char*)((ng10)));
    goto LAB119;

LAB120:    t53 = ((char*)((ng11)));
    goto LAB121;

LAB122:    xsi_vlog_unsigned_bit_combine(t10, 32, t52, 32, t53, 32);
    goto LAB126;

LAB124:    memcpy(t10, t52, 8);
    goto LAB126;

}


extern void work_m_00000000001663910019_0886308060_init()
{
	static char *pe[] = {(void *)Always_41_0};
	xsi_register_didat("work_m_00000000001663910019_0886308060", "isim/tb_isim_beh.exe.sim/work/m_00000000001663910019_0886308060.didat");
	xsi_register_executes(pe);
}
