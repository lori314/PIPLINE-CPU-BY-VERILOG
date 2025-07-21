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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/co-eda/single_cpu/PC_trans.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {4, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};



static void Cont_32_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 3160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t4, 18, 18, 2U, t6, 16, t2, 2);
    xsi_vlogtype_sign_extend(t3, 32, t4, 18);
    t5 = (t0 + 3824);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t11 = (t0 + 3728);
    *((int *)t11) = 1;

LAB1:    return;
}

static void Cont_33_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t35[8];
    char t38[8];
    char t43[8];
    char t44[8];
    char t46[8];
    char t73[8];
    char t77[8];
    char t90[8];
    char t91[8];
    char t94[8];
    char t128[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t45;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t74;
    char *t75;
    char *t76;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t92;
    char *t93;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;

LAB0:    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t39 = *((unsigned int *)t4);
    t40 = (~(t39));
    t41 = *((unsigned int *)t29);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t43, 8);

LAB20:    t129 = (t0 + 3888);
    t130 = (t129 + 56U);
    t131 = *((char **)t130);
    t132 = (t131 + 56U);
    t133 = *((char **)t132);
    memcpy(t133, t3, 8);
    xsi_driver_vfirst_trans(t129, 0, 31);
    t134 = (t0 + 3744);
    *((int *)t134) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 2008U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng3)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 32, t34, 32, t33, 32);
    t36 = (t0 + 1048U);
    t37 = *((char **)t36);
    memset(t38, 0, 8);
    xsi_vlog_unsigned_add(t38, 32, t35, 32, t37, 32);
    goto LAB13;

LAB14:    t36 = (t0 + 1688U);
    t45 = *((char **)t36);
    t36 = ((char*)((ng4)));
    memset(t46, 0, 8);
    t47 = (t45 + 4);
    t48 = (t36 + 4);
    t49 = *((unsigned int *)t45);
    t50 = *((unsigned int *)t36);
    t51 = (t49 ^ t50);
    t52 = *((unsigned int *)t47);
    t53 = *((unsigned int *)t48);
    t54 = (t52 ^ t53);
    t55 = (t51 | t54);
    t56 = *((unsigned int *)t47);
    t57 = *((unsigned int *)t48);
    t58 = (t56 | t57);
    t59 = (~(t58));
    t60 = (t55 & t59);
    if (t60 != 0)
        goto LAB24;

LAB21:    if (t58 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t46) = 1;

LAB24:    memset(t44, 0, 8);
    t62 = (t46 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t46);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t62) != 0)
        goto LAB27;

LAB28:    t69 = (t44 + 4);
    t70 = *((unsigned int *)t44);
    t71 = *((unsigned int *)t69);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB29;

LAB30:    t86 = *((unsigned int *)t44);
    t87 = (~(t86));
    t88 = *((unsigned int *)t69);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t69) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t44) > 0)
        goto LAB35;

LAB36:    memcpy(t43, t90, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t38, 32, t43, 32);
    goto LAB20;

LAB18:    memcpy(t3, t38, 8);
    goto LAB20;

LAB23:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t44) = 1;
    goto LAB28;

LAB27:    t68 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB28;

LAB29:    t74 = ((char*)((ng1)));
    t75 = (t0 + 1528U);
    t76 = *((char **)t75);
    t75 = (t0 + 1048U);
    t78 = *((char **)t75);
    memset(t77, 0, 8);
    t75 = (t77 + 4);
    t79 = (t78 + 4);
    t80 = *((unsigned int *)t78);
    t81 = (t80 >> 28);
    *((unsigned int *)t77) = t81;
    t82 = *((unsigned int *)t79);
    t83 = (t82 >> 28);
    *((unsigned int *)t75) = t83;
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t84 & 15U);
    t85 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t85 & 15U);
    xsi_vlogtype_concat(t73, 32, 32, 3U, t77, 4, t76, 26, t74, 2);
    goto LAB30;

LAB31:    t92 = (t0 + 1688U);
    t93 = *((char **)t92);
    t92 = ((char*)((ng5)));
    memset(t94, 0, 8);
    t95 = (t93 + 4);
    t96 = (t92 + 4);
    t97 = *((unsigned int *)t93);
    t98 = *((unsigned int *)t92);
    t99 = (t97 ^ t98);
    t100 = *((unsigned int *)t95);
    t101 = *((unsigned int *)t96);
    t102 = (t100 ^ t101);
    t103 = (t99 | t102);
    t104 = *((unsigned int *)t95);
    t105 = *((unsigned int *)t96);
    t106 = (t104 | t105);
    t107 = (~(t106));
    t108 = (t103 & t107);
    if (t108 != 0)
        goto LAB41;

LAB38:    if (t106 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t94) = 1;

LAB41:    memset(t91, 0, 8);
    t110 = (t94 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t94);
    t114 = (t113 & t112);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t110) != 0)
        goto LAB44;

LAB45:    t117 = (t91 + 4);
    t118 = *((unsigned int *)t91);
    t119 = *((unsigned int *)t117);
    t120 = (t118 || t119);
    if (t120 > 0)
        goto LAB46;

LAB47:    t123 = *((unsigned int *)t91);
    t124 = (~(t123));
    t125 = *((unsigned int *)t117);
    t126 = (t124 || t125);
    if (t126 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t117) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t91) > 0)
        goto LAB52;

LAB53:    memcpy(t90, t128, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t43, 32, t73, 32, t90, 32);
    goto LAB37;

LAB35:    memcpy(t43, t73, 8);
    goto LAB37;

LAB40:    t109 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t109) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t91) = 1;
    goto LAB45;

LAB44:    t116 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t116) = 1;
    goto LAB45;

LAB46:    t121 = (t0 + 1368U);
    t122 = *((char **)t121);
    goto LAB47;

LAB48:    t121 = (t0 + 1048U);
    t127 = *((char **)t121);
    t121 = ((char*)((ng3)));
    memset(t128, 0, 8);
    xsi_vlog_unsigned_add(t128, 32, t127, 32, t121, 32);
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t90, 32, t122, 32, t128, 32);
    goto LAB54;

LAB52:    memcpy(t90, t122, 8);
    goto LAB54;

}


extern void work_m_03544153201686197180_3103511573_init()
{
	static char *pe[] = {(void *)Cont_32_0,(void *)Cont_33_1};
	xsi_register_didat("work_m_03544153201686197180_3103511573", "isim/IFU_tb_isim_beh.exe.sim/work/m_03544153201686197180_3103511573.didat");
	xsi_register_executes(pe);
}
