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
static const char *ng0 = "C:/Users/lenovo/Desktop/codes/verilog/P7/ppcpu/Bridge.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {12288U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {32512U, 0U};
static unsigned int ng5[] = {11U, 0U};
static unsigned int ng6[] = {32528U, 0U};
static unsigned int ng7[] = {32544U, 0U};
static unsigned int ng8[] = {4U, 0U};
static int ng9[] = {1, 0};
static unsigned int ng10[] = {1U, 0U};



static void Always_65_0(char *t0)
{
    char t6[8];
    char t10[8];
    char t25[8];
    char t26[8];
    char t30[8];
    char t38[8];
    char t78[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;

LAB0:    t1 = (t0 + 6816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 7136);
    *((int *)t2) = 1;
    t3 = (t0 + 6848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 2136U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;

LAB9:    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t11) != 0)
        goto LAB13;

LAB14:    t18 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t18);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB15;

LAB16:    memcpy(t38, t10, 8);

LAB17:    t70 = (t38 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t38);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(73, ng0);

LAB34:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB32:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2136U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB36;

LAB35:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB38;

LAB37:    *((unsigned int *)t6) = 1;

LAB38:    memset(t10, 0, 8);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t8) != 0)
        goto LAB42;

LAB43:    t11 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB44;

LAB45:    memcpy(t38, t10, 8);

LAB46:    t52 = (t38 + 4);
    t71 = *((unsigned int *)t52);
    t72 = (~(t71));
    t73 = *((unsigned int *)t38);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(87, ng0);

LAB63:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 30);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4456);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB61:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2136U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB65;

LAB64:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB65;

LAB68:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB67;

LAB66:    *((unsigned int *)t6) = 1;

LAB67:    memset(t10, 0, 8);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t8) != 0)
        goto LAB71;

LAB72:    t11 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB73;

LAB74:    memcpy(t38, t10, 8);

LAB75:    t52 = (t38 + 4);
    t71 = *((unsigned int *)t52);
    t72 = (~(t71));
    t73 = *((unsigned int *)t38);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(101, ng0);

LAB92:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4776);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 30);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4936);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5096);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB90:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2136U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB94;

LAB93:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB94;

LAB97:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB96;

LAB95:    *((unsigned int *)t6) = 1;

LAB96:    memset(t10, 0, 8);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t8) != 0)
        goto LAB100;

LAB101:    t11 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB102;

LAB103:    memcpy(t38, t10, 8);

LAB104:    t52 = (t38 + 4);
    t71 = *((unsigned int *)t52);
    t72 = (~(t71));
    t73 = *((unsigned int *)t38);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB117;

LAB118:    xsi_set_current_line(114, ng0);

LAB138:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5416);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB119:    goto LAB2;

LAB7:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t10) = 1;
    goto LAB14;

LAB13:    t17 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB15:    t22 = (t0 + 2136U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng1)));
    t24 = ((char*)((ng2)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t22, 32, t24, 32);
    memset(t26, 0, 8);
    t27 = (t23 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB19;

LAB18:    t28 = (t25 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t23) < *((unsigned int *)t25))
        goto LAB20;

LAB21:    memset(t30, 0, 8);
    t31 = (t26 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t26);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t31) != 0)
        goto LAB25;

LAB26:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t30);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t42 = (t10 + 4);
    t43 = (t30 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB17;

LAB19:    t29 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB21;

LAB20:    *((unsigned int *)t26) = 1;
    goto LAB21;

LAB23:    *((unsigned int *)t30) = 1;
    goto LAB26;

LAB25:    t37 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB26;

LAB27:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t10 + 4);
    t53 = (t30 + 4);
    t54 = *((unsigned int *)t10);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB29;

LAB30:    xsi_set_current_line(67, ng0);

LAB33:    xsi_set_current_line(68, ng0);
    t76 = (t0 + 2136U);
    t77 = *((char **)t76);
    t76 = (t0 + 3816);
    xsi_vlogvar_assign_value(t76, t77, 0, 0, 32);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2296U);
    t3 = *((char **)t2);
    t2 = (t0 + 3976);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2776U);
    t3 = *((char **)t2);
    t2 = (t0 + 3656);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2616U);
    t3 = *((char **)t2);
    t2 = (t0 + 4136);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    goto LAB32;

LAB36:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB38;

LAB40:    *((unsigned int *)t10) = 1;
    goto LAB43;

LAB42:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB43;

LAB44:    t17 = (t0 + 2136U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng4)));
    t22 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t17, 32, t22, 32);
    memset(t26, 0, 8);
    t23 = (t18 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB48;

LAB47:    t24 = (t25 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB48;

LAB51:    if (*((unsigned int *)t18) < *((unsigned int *)t25))
        goto LAB49;

LAB50:    memset(t30, 0, 8);
    t28 = (t26 + 4);
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t26);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t28) != 0)
        goto LAB54;

LAB55:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t30);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t31 = (t10 + 4);
    t37 = (t30 + 4);
    t42 = (t38 + 4);
    t45 = *((unsigned int *)t31);
    t46 = *((unsigned int *)t37);
    t47 = (t45 | t46);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t42);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB46;

LAB48:    t27 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB50;

LAB49:    *((unsigned int *)t26) = 1;
    goto LAB50;

LAB52:    *((unsigned int *)t30) = 1;
    goto LAB55;

LAB54:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB55;

LAB56:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t42);
    *((unsigned int *)t38) = (t50 | t51);
    t43 = (t10 + 4);
    t44 = (t30 + 4);
    t54 = *((unsigned int *)t10);
    t55 = (~(t54));
    t56 = *((unsigned int *)t43);
    t57 = (~(t56));
    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t44);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t66 & t64);
    t67 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB58;

LAB59:    xsi_set_current_line(80, ng0);

LAB62:    xsi_set_current_line(81, ng0);
    t53 = (t0 + 2136U);
    t70 = *((char **)t53);
    t53 = ((char*)((ng4)));
    memset(t78, 0, 8);
    xsi_vlog_unsigned_minus(t78, 32, t70, 32, t53, 32);
    t76 = (t0 + 5736);
    xsi_vlogvar_assign_value(t76, t78, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 2);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 2);
    *((unsigned int *)t5) = t15;
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 1073741823U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 1073741823U);
    t8 = (t0 + 4296);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 30);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2296U);
    t3 = *((char **)t2);
    t2 = (t0 + 4456);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    t2 = (t0 + 4616);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2936U);
    t3 = *((char **)t2);
    t2 = (t0 + 3656);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB61;

LAB65:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB67;

LAB69:    *((unsigned int *)t10) = 1;
    goto LAB72;

LAB71:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB72;

LAB73:    t17 = (t0 + 2136U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng6)));
    t22 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t17, 32, t22, 32);
    memset(t26, 0, 8);
    t23 = (t18 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB77;

LAB76:    t24 = (t25 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB77;

LAB80:    if (*((unsigned int *)t18) < *((unsigned int *)t25))
        goto LAB78;

LAB79:    memset(t30, 0, 8);
    t28 = (t26 + 4);
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t26);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t28) != 0)
        goto LAB83;

LAB84:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t30);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t31 = (t10 + 4);
    t37 = (t30 + 4);
    t42 = (t38 + 4);
    t45 = *((unsigned int *)t31);
    t46 = *((unsigned int *)t37);
    t47 = (t45 | t46);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t42);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB85;

LAB86:
LAB87:    goto LAB75;

LAB77:    t27 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB79;

LAB78:    *((unsigned int *)t26) = 1;
    goto LAB79;

LAB81:    *((unsigned int *)t30) = 1;
    goto LAB84;

LAB83:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB84;

LAB85:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t42);
    *((unsigned int *)t38) = (t50 | t51);
    t43 = (t10 + 4);
    t44 = (t30 + 4);
    t54 = *((unsigned int *)t10);
    t55 = (~(t54));
    t56 = *((unsigned int *)t43);
    t57 = (~(t56));
    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t44);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t66 & t64);
    t67 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB87;

LAB88:    xsi_set_current_line(94, ng0);

LAB91:    xsi_set_current_line(95, ng0);
    t53 = (t0 + 2136U);
    t70 = *((char **)t53);
    t53 = ((char*)((ng6)));
    memset(t78, 0, 8);
    xsi_vlog_unsigned_minus(t78, 32, t70, 32, t53, 32);
    t76 = (t0 + 5896);
    xsi_vlogvar_assign_value(t76, t78, 0, 0, 32);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 5896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 2);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 2);
    *((unsigned int *)t5) = t15;
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 1073741823U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 1073741823U);
    t8 = (t0 + 4776);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 30);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2296U);
    t3 = *((char **)t2);
    t2 = (t0 + 4936);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    t2 = (t0 + 5096);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3096U);
    t3 = *((char **)t2);
    t2 = (t0 + 3656);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB90;

LAB94:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB96;

LAB98:    *((unsigned int *)t10) = 1;
    goto LAB101;

LAB100:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB101;

LAB102:    t17 = (t0 + 2136U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng7)));
    t22 = ((char*)((ng8)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t17, 32, t22, 32);
    memset(t26, 0, 8);
    t23 = (t18 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB106;

LAB105:    t24 = (t25 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB106;

LAB109:    if (*((unsigned int *)t18) < *((unsigned int *)t25))
        goto LAB107;

LAB108:    memset(t30, 0, 8);
    t28 = (t26 + 4);
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t26);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t28) != 0)
        goto LAB112;

LAB113:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t30);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t31 = (t10 + 4);
    t37 = (t30 + 4);
    t42 = (t38 + 4);
    t45 = *((unsigned int *)t31);
    t46 = *((unsigned int *)t37);
    t47 = (t45 | t46);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t42);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB114;

LAB115:
LAB116:    goto LAB104;

LAB106:    t27 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB108;

LAB107:    *((unsigned int *)t26) = 1;
    goto LAB108;

LAB110:    *((unsigned int *)t30) = 1;
    goto LAB113;

LAB112:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB113;

LAB114:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t42);
    *((unsigned int *)t38) = (t50 | t51);
    t43 = (t10 + 4);
    t44 = (t30 + 4);
    t54 = *((unsigned int *)t10);
    t55 = (~(t54));
    t56 = *((unsigned int *)t43);
    t57 = (~(t56));
    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t44);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t66 & t64);
    t67 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB116;

LAB117:    xsi_set_current_line(108, ng0);

LAB120:    xsi_set_current_line(109, ng0);
    t53 = (t0 + 2136U);
    t70 = *((char **)t53);
    t53 = (t0 + 5256);
    xsi_vlogvar_assign_value(t53, t70, 0, 0, 32);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2296U);
    t3 = *((char **)t2);
    t2 = (t0 + 5416);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3256U);
    t3 = *((char **)t2);
    t2 = (t0 + 3656);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t25, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t19 = (t15 ^ t16);
    t20 = (t14 | t19);
    t21 = *((unsigned int *)t4);
    t32 = *((unsigned int *)t5);
    t33 = (t21 | t32);
    t34 = (~(t33));
    t35 = (t20 & t34);
    if (t35 != 0)
        goto LAB124;

LAB121:    if (t33 != 0)
        goto LAB123;

LAB122:    *((unsigned int *)t25) = 1;

LAB124:    memset(t10, 0, 8);
    t8 = (t25 + 4);
    t36 = *((unsigned int *)t8);
    t39 = (~(t36));
    t40 = *((unsigned int *)t25);
    t41 = (t40 & t39);
    t45 = (t41 & 1U);
    if (t45 != 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t8) != 0)
        goto LAB127;

LAB128:    t11 = (t10 + 4);
    t46 = *((unsigned int *)t10);
    t47 = *((unsigned int *)t11);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB129;

LAB130:    t49 = *((unsigned int *)t10);
    t50 = (~(t49));
    t51 = *((unsigned int *)t11);
    t54 = (t50 || t51);
    if (t54 > 0)
        goto LAB131;

LAB132:    if (*((unsigned int *)t11) > 0)
        goto LAB133;

LAB134:    if (*((unsigned int *)t10) > 0)
        goto LAB135;

LAB136:    memcpy(t6, t18, 8);

LAB137:    t22 = (t0 + 5576);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 4);
    goto LAB119;

LAB123:    t7 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB124;

LAB125:    *((unsigned int *)t10) = 1;
    goto LAB128;

LAB127:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB128;

LAB129:    t17 = ((char*)((ng10)));
    goto LAB130;

LAB131:    t18 = ((char*)((ng3)));
    goto LAB132;

LAB133:    xsi_vlog_unsigned_bit_combine(t6, 32, t17, 32, t18, 32);
    goto LAB137;

LAB135:    memcpy(t6, t17, 8);
    goto LAB137;

}


extern void work_m_00000000003328262186_0156190743_init()
{
	static char *pe[] = {(void *)Always_65_0};
	xsi_register_didat("work_m_00000000003328262186_0156190743", "isim/tb_isim_beh.exe.sim/work/m_00000000003328262186_0156190743.didat");
	xsi_register_executes(pe);
}
