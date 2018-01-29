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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/document/SJTU/course/computer_architecture/experiment/workshop/lmc/lab6/lab6/AR.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};



static void Always_48_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 5888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 6456);
    *((int *)t2) = 1;
    t3 = (t0 + 5920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3688);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB2;

}

static void Always_50_1(char *t0)
{
    char t6[8];
    char t22[8];
    char t37[8];
    char t53[8];
    char t67[8];
    char t83[8];
    char t91[8];
    char t123[8];
    char t131[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;

LAB0:    t1 = (t0 + 6136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 6472);
    *((int *)t2) = 1;
    t3 = (t0 + 6168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
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
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (!(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB14;

LAB15:    memcpy(t131, t22, 8);

LAB16:    t159 = (t131 + 4);
    t160 = *((unsigned int *)t159);
    t161 = (~(t160));
    t162 = *((unsigned int *)t131);
    t163 = (t162 & t161);
    t164 = (t163 != 0);
    if (t164 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB48:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t22, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t2) != 0)
        goto LAB51;

LAB52:    t5 = (t22 + 4);
    t14 = *((unsigned int *)t22);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB53;

LAB54:    t17 = *((unsigned int *)t22);
    t18 = (~(t17));
    t19 = *((unsigned int *)t5);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t5) > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t22) > 0)
        goto LAB59;

LAB60:    memcpy(t6, t53, 8);

LAB61:    t23 = (t0 + 3848);
    xsi_vlogvar_assign_value(t23, t6, 0, 0, 32);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 4488);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 4648);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4808);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    t2 = (t0 + 4968);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t35 = (t0 + 1528U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng2)));
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = (t35 + 4);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t35);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB20;

LAB17:    if (t49 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t37) = 1;

LAB20:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t54) != 0)
        goto LAB23;

LAB24:    t61 = (t53 + 4);
    t62 = *((unsigned int *)t53);
    t63 = *((unsigned int *)t61);
    t64 = (t62 || t63);
    if (t64 > 0)
        goto LAB25;

LAB26:    memcpy(t91, t53, 8);

LAB27:    memset(t123, 0, 8);
    t124 = (t91 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t91);
    t128 = (t127 & t126);
    t129 = (t128 & 1U);
    if (t129 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t124) != 0)
        goto LAB41;

LAB42:    t132 = *((unsigned int *)t22);
    t133 = *((unsigned int *)t123);
    t134 = (t132 | t133);
    *((unsigned int *)t131) = t134;
    t135 = (t22 + 4);
    t136 = (t123 + 4);
    t137 = (t131 + 4);
    t138 = *((unsigned int *)t135);
    t139 = *((unsigned int *)t136);
    t140 = (t138 | t139);
    *((unsigned int *)t137) = t140;
    t141 = *((unsigned int *)t137);
    t142 = (t141 != 0);
    if (t142 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB16;

LAB19:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t53) = 1;
    goto LAB24;

LAB23:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB24;

LAB25:    t65 = (t0 + 1688U);
    t66 = *((char **)t65);
    t65 = ((char*)((ng2)));
    memset(t67, 0, 8);
    t68 = (t66 + 4);
    t69 = (t65 + 4);
    t70 = *((unsigned int *)t66);
    t71 = *((unsigned int *)t65);
    t72 = (t70 ^ t71);
    t73 = *((unsigned int *)t68);
    t74 = *((unsigned int *)t69);
    t75 = (t73 ^ t74);
    t76 = (t72 | t75);
    t77 = *((unsigned int *)t68);
    t78 = *((unsigned int *)t69);
    t79 = (t77 | t78);
    t80 = (~(t79));
    t81 = (t76 & t80);
    if (t81 != 0)
        goto LAB31;

LAB28:    if (t79 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t67) = 1;

LAB31:    memset(t83, 0, 8);
    t84 = (t67 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (~(t85));
    t87 = *((unsigned int *)t67);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t84) != 0)
        goto LAB34;

LAB35:    t92 = *((unsigned int *)t53);
    t93 = *((unsigned int *)t83);
    t94 = (t92 & t93);
    *((unsigned int *)t91) = t94;
    t95 = (t53 + 4);
    t96 = (t83 + 4);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t95);
    t99 = *((unsigned int *)t96);
    t100 = (t98 | t99);
    *((unsigned int *)t97) = t100;
    t101 = *((unsigned int *)t97);
    t102 = (t101 != 0);
    if (t102 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB27;

LAB30:    t82 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t83) = 1;
    goto LAB35;

LAB34:    t90 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB35;

LAB36:    t103 = *((unsigned int *)t91);
    t104 = *((unsigned int *)t97);
    *((unsigned int *)t91) = (t103 | t104);
    t105 = (t53 + 4);
    t106 = (t83 + 4);
    t107 = *((unsigned int *)t53);
    t108 = (~(t107));
    t109 = *((unsigned int *)t105);
    t110 = (~(t109));
    t111 = *((unsigned int *)t83);
    t112 = (~(t111));
    t113 = *((unsigned int *)t106);
    t114 = (~(t113));
    t115 = (t108 & t110);
    t116 = (t112 & t114);
    t117 = (~(t115));
    t118 = (~(t116));
    t119 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t119 & t117);
    t120 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t120 & t118);
    t121 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t121 & t117);
    t122 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t122 & t118);
    goto LAB38;

LAB39:    *((unsigned int *)t123) = 1;
    goto LAB42;

LAB41:    t130 = (t123 + 4);
    *((unsigned int *)t123) = 1;
    *((unsigned int *)t130) = 1;
    goto LAB42;

LAB43:    t143 = *((unsigned int *)t131);
    t144 = *((unsigned int *)t137);
    *((unsigned int *)t131) = (t143 | t144);
    t145 = (t22 + 4);
    t146 = (t123 + 4);
    t147 = *((unsigned int *)t145);
    t148 = (~(t147));
    t149 = *((unsigned int *)t22);
    t150 = (t149 & t148);
    t151 = *((unsigned int *)t146);
    t152 = (~(t151));
    t153 = *((unsigned int *)t123);
    t154 = (t153 & t152);
    t155 = (~(t150));
    t156 = (~(t154));
    t157 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t157 & t155);
    t158 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t158 & t156);
    goto LAB45;

LAB46:    xsi_set_current_line(52, ng0);
    t165 = ((char*)((ng2)));
    t166 = (t0 + 3688);
    xsi_vlogvar_assign_value(t166, t165, 0, 0, 1);
    goto LAB48;

LAB49:    *((unsigned int *)t22) = 1;
    goto LAB52;

LAB51:    t4 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB52;

LAB53:    t7 = (t0 + 1848U);
    t8 = *((char **)t7);
    goto LAB54;

LAB55:    t7 = (t0 + 2168U);
    t21 = *((char **)t7);
    t7 = ((char*)((ng3)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_lshift(t37, 32, t21, 32, t7, 32);
    t23 = (t0 + 2008U);
    t29 = *((char **)t23);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 32, t37, 32, t29, 32);
    goto LAB56;

LAB57:    xsi_vlog_unsigned_bit_combine(t6, 32, t8, 32, t53, 32);
    goto LAB61;

LAB59:    memcpy(t6, t8, 8);
    goto LAB61;

}


extern void work_m_00000000001800683723_1580280862_init()
{
	static char *pe[] = {(void *)Always_48_0,(void *)Always_50_1};
	xsi_register_didat("work_m_00000000001800683723_1580280862", "isim/test_for_top_isim_beh.exe.sim/work/m_00000000001800683723_1580280862.didat");
	xsi_register_executes(pe);
}
