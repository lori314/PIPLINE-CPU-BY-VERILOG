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
static const char *ng0 = "C:/Users/lenovo/Desktop/codes/verilog/P7/ppcpu/PC_trans.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {4, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {12288U, 0U};
static int ng6[] = {3, 0};
static int ng7[] = {5, 0};



static void Cont_36_0(char *t0)
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

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t4, 18, 18, 2U, t6, 16, t2, 2);
    xsi_vlogtype_sign_extend(t3, 32, t4, 18);
    t5 = (t0 + 4736);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t11 = (t0 + 4624);
    *((int *)t11) = 1;

LAB1:    return;
}

static void Cont_37_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 4800);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 4640);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_38_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t36[8];
    char t37[8];
    char t42[8];
    char t43[8];
    char t46[8];
    char t73[8];
    char t77[8];
    char t87[8];
    char t92[8];
    char t93[8];
    char t96[8];
    char t125[8];
    char t130[8];
    char t131[8];
    char t134[8];
    char t164[8];
    char t165[8];
    char t170[8];
    char t171[8];
    char t174[8];
    char t203[8];
    char t210[8];
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
    char *t35;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t44;
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
    char *t86;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t94;
    char *t95;
    char *t97;
    char *t98;
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
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t132;
    char *t133;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    char *t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    char *t163;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t172;
    char *t173;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    char *t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    char *t202;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    char *t208;
    char *t209;
    char *t211;
    char *t212;
    char *t213;
    char *t214;
    char *t215;
    char *t216;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
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

LAB13:    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t40 = *((unsigned int *)t29);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t42, 8);

LAB20:    t211 = (t0 + 4864);
    t212 = (t211 + 56U);
    t213 = *((char **)t212);
    t214 = (t213 + 56U);
    t215 = *((char **)t214);
    memcpy(t215, t3, 8);
    xsi_driver_vfirst_trans(t211, 0, 31);
    t216 = (t0 + 4656);
    *((int *)t216) = 1;

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

LAB12:    t33 = (t0 + 2488U);
    t34 = *((char **)t33);
    t33 = (t0 + 2648U);
    t35 = *((char **)t33);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 32, t34, 32, t35, 32);
    t33 = ((char*)((ng2)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t36, 32, t33, 32);
    goto LAB13;

LAB14:    t44 = (t0 + 1688U);
    t45 = *((char **)t44);
    t44 = ((char*)((ng4)));
    memset(t46, 0, 8);
    t47 = (t45 + 4);
    t48 = (t44 + 4);
    t49 = *((unsigned int *)t45);
    t50 = *((unsigned int *)t44);
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

LAB24:    memset(t43, 0, 8);
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

LAB28:    t69 = (t43 + 4);
    t70 = *((unsigned int *)t43);
    t71 = *((unsigned int *)t69);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB29;

LAB30:    t88 = *((unsigned int *)t43);
    t89 = (~(t88));
    t90 = *((unsigned int *)t69);
    t91 = (t89 || t90);
    if (t91 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t69) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t43) > 0)
        goto LAB35;

LAB36:    memcpy(t42, t92, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t37, 32, t42, 32);
    goto LAB20;

LAB18:    memcpy(t3, t37, 8);
    goto LAB20;

LAB23:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t43) = 1;
    goto LAB28;

LAB27:    t68 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB28;

LAB29:    t74 = ((char*)((ng1)));
    t75 = (t0 + 1528U);
    t76 = *((char **)t75);
    t75 = (t0 + 2648U);
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
    t86 = ((char*)((ng5)));
    memset(t87, 0, 8);
    xsi_vlog_unsigned_minus(t87, 32, t73, 32, t86, 32);
    goto LAB30;

LAB31:    t94 = (t0 + 1688U);
    t95 = *((char **)t94);
    t94 = ((char*)((ng6)));
    memset(t96, 0, 8);
    t97 = (t95 + 4);
    t98 = (t94 + 4);
    t99 = *((unsigned int *)t95);
    t100 = *((unsigned int *)t94);
    t101 = (t99 ^ t100);
    t102 = *((unsigned int *)t97);
    t103 = *((unsigned int *)t98);
    t104 = (t102 ^ t103);
    t105 = (t101 | t104);
    t106 = *((unsigned int *)t97);
    t107 = *((unsigned int *)t98);
    t108 = (t106 | t107);
    t109 = (~(t108));
    t110 = (t105 & t109);
    if (t110 != 0)
        goto LAB41;

LAB38:    if (t108 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t96) = 1;

LAB41:    memset(t93, 0, 8);
    t112 = (t96 + 4);
    t113 = *((unsigned int *)t112);
    t114 = (~(t113));
    t115 = *((unsigned int *)t96);
    t116 = (t115 & t114);
    t117 = (t116 & 1U);
    if (t117 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t112) != 0)
        goto LAB44;

LAB45:    t119 = (t93 + 4);
    t120 = *((unsigned int *)t93);
    t121 = *((unsigned int *)t119);
    t122 = (t120 || t121);
    if (t122 > 0)
        goto LAB46;

LAB47:    t126 = *((unsigned int *)t93);
    t127 = (~(t126));
    t128 = *((unsigned int *)t119);
    t129 = (t127 || t128);
    if (t129 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t119) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t93) > 0)
        goto LAB52;

LAB53:    memcpy(t92, t130, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t42, 32, t87, 32, t92, 32);
    goto LAB37;

LAB35:    memcpy(t42, t87, 8);
    goto LAB37;

LAB40:    t111 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t93) = 1;
    goto LAB45;

LAB44:    t118 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB45;

LAB46:    t123 = (t0 + 1368U);
    t124 = *((char **)t123);
    t123 = ((char*)((ng5)));
    memset(t125, 0, 8);
    xsi_vlog_unsigned_minus(t125, 32, t124, 32, t123, 32);
    goto LAB47;

LAB48:    t132 = (t0 + 1688U);
    t133 = *((char **)t132);
    t132 = ((char*)((ng2)));
    memset(t134, 0, 8);
    t135 = (t133 + 4);
    t136 = (t132 + 4);
    t137 = *((unsigned int *)t133);
    t138 = *((unsigned int *)t132);
    t139 = (t137 ^ t138);
    t140 = *((unsigned int *)t135);
    t141 = *((unsigned int *)t136);
    t142 = (t140 ^ t141);
    t143 = (t139 | t142);
    t144 = *((unsigned int *)t135);
    t145 = *((unsigned int *)t136);
    t146 = (t144 | t145);
    t147 = (~(t146));
    t148 = (t143 & t147);
    if (t148 != 0)
        goto LAB58;

LAB55:    if (t146 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t134) = 1;

LAB58:    memset(t131, 0, 8);
    t150 = (t134 + 4);
    t151 = *((unsigned int *)t150);
    t152 = (~(t151));
    t153 = *((unsigned int *)t134);
    t154 = (t153 & t152);
    t155 = (t154 & 1U);
    if (t155 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t150) != 0)
        goto LAB61;

LAB62:    t157 = (t131 + 4);
    t158 = *((unsigned int *)t131);
    t159 = *((unsigned int *)t157);
    t160 = (t158 || t159);
    if (t160 > 0)
        goto LAB63;

LAB64:    t166 = *((unsigned int *)t131);
    t167 = (~(t166));
    t168 = *((unsigned int *)t157);
    t169 = (t167 || t168);
    if (t169 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t157) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t131) > 0)
        goto LAB69;

LAB70:    memcpy(t130, t170, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t92, 32, t125, 32, t130, 32);
    goto LAB54;

LAB52:    memcpy(t92, t125, 8);
    goto LAB54;

LAB57:    t149 = (t134 + 4);
    *((unsigned int *)t134) = 1;
    *((unsigned int *)t149) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t131) = 1;
    goto LAB62;

LAB61:    t156 = (t131 + 4);
    *((unsigned int *)t131) = 1;
    *((unsigned int *)t156) = 1;
    goto LAB62;

LAB63:    t161 = (t0 + 2488U);
    t162 = *((char **)t161);
    t161 = (t0 + 2648U);
    t163 = *((char **)t161);
    memset(t164, 0, 8);
    xsi_vlog_unsigned_add(t164, 32, t162, 32, t163, 32);
    t161 = ((char*)((ng2)));
    memset(t165, 0, 8);
    xsi_vlog_unsigned_add(t165, 32, t164, 32, t161, 32);
    goto LAB64;

LAB65:    t172 = (t0 + 1688U);
    t173 = *((char **)t172);
    t172 = ((char*)((ng7)));
    memset(t174, 0, 8);
    t175 = (t173 + 4);
    t176 = (t172 + 4);
    t177 = *((unsigned int *)t173);
    t178 = *((unsigned int *)t172);
    t179 = (t177 ^ t178);
    t180 = *((unsigned int *)t175);
    t181 = *((unsigned int *)t176);
    t182 = (t180 ^ t181);
    t183 = (t179 | t182);
    t184 = *((unsigned int *)t175);
    t185 = *((unsigned int *)t176);
    t186 = (t184 | t185);
    t187 = (~(t186));
    t188 = (t183 & t187);
    if (t188 != 0)
        goto LAB75;

LAB72:    if (t186 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t174) = 1;

LAB75:    memset(t171, 0, 8);
    t190 = (t174 + 4);
    t191 = *((unsigned int *)t190);
    t192 = (~(t191));
    t193 = *((unsigned int *)t174);
    t194 = (t193 & t192);
    t195 = (t194 & 1U);
    if (t195 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t190) != 0)
        goto LAB78;

LAB79:    t197 = (t171 + 4);
    t198 = *((unsigned int *)t171);
    t199 = *((unsigned int *)t197);
    t200 = (t198 || t199);
    if (t200 > 0)
        goto LAB80;

LAB81:    t204 = *((unsigned int *)t171);
    t205 = (~(t204));
    t206 = *((unsigned int *)t197);
    t207 = (t205 || t206);
    if (t207 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t197) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t171) > 0)
        goto LAB86;

LAB87:    memcpy(t170, t210, 8);

LAB88:    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t130, 32, t165, 32, t170, 32);
    goto LAB71;

LAB69:    memcpy(t130, t165, 8);
    goto LAB71;

LAB74:    t189 = (t174 + 4);
    *((unsigned int *)t174) = 1;
    *((unsigned int *)t189) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t171) = 1;
    goto LAB79;

LAB78:    t196 = (t171 + 4);
    *((unsigned int *)t171) = 1;
    *((unsigned int *)t196) = 1;
    goto LAB79;

LAB80:    t201 = (t0 + 1848U);
    t202 = *((char **)t201);
    t201 = ((char*)((ng5)));
    memset(t203, 0, 8);
    xsi_vlog_unsigned_minus(t203, 32, t202, 32, t201, 32);
    goto LAB81;

LAB82:    t208 = (t0 + 1048U);
    t209 = *((char **)t208);
    t208 = ((char*)((ng2)));
    memset(t210, 0, 8);
    xsi_vlog_unsigned_add(t210, 32, t209, 32, t208, 32);
    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t170, 32, t203, 32, t210, 32);
    goto LAB88;

LAB86:    memcpy(t170, t203, 8);
    goto LAB88;

}


extern void work_m_00000000001122234659_3103511573_init()
{
	static char *pe[] = {(void *)Cont_36_0,(void *)Cont_37_1,(void *)Cont_38_2};
	xsi_register_didat("work_m_00000000001122234659_3103511573", "isim/PC_trans_isim_beh.exe.sim/work/m_00000000001122234659_3103511573.didat");
	xsi_register_executes(pe);
}
