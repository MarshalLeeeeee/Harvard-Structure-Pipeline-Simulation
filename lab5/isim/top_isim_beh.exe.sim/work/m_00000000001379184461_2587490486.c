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
static const char *ng0 = "F:/document/SJTU/course/computer_architecture/experiment/workshop/lmc/lab3/Alu/Alu.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {32, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {12U, 0U};



static void Always_32_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t35[8];
    char t41[8];
    char t62[8];
    char t80[8];
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
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
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

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB32;

LAB29:    if (t18 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t6) = 1;

LAB32:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB55;

LAB52:    if (t18 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t6) = 1;

LAB55:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB70;

LAB67:    if (t18 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t6) = 1;

LAB70:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB85;

LAB82:    if (t18 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t6) = 1;

LAB85:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB105;

LAB102:    if (t18 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t6) = 1;

LAB105:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB106;

LAB107:
LAB108:
LAB88:
LAB73:
LAB58:
LAB35:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(35, ng0);

LAB13:    xsi_set_current_line(36, ng0);
    xsi_set_current_line(36, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);

LAB14:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB25;

LAB22:    if (t18 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t6) = 1;

LAB25:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB28:    goto LAB12;

LAB15:    xsi_set_current_line(36, ng0);
    t8 = (t0 + 1048U);
    t21 = *((char **)t8);
    t8 = (t0 + 1008U);
    t22 = (t8 + 72U);
    t28 = *((char **)t22);
    t29 = (t0 + 2088);
    t31 = (t29 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_generic_get_index_select_value(t30, 1, t21, t28, 2, t32, 32, 1);
    t33 = (t0 + 1208U);
    t34 = *((char **)t33);
    t33 = (t0 + 1168U);
    t36 = (t33 + 72U);
    t37 = *((char **)t36);
    t38 = (t0 + 2088);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    xsi_vlog_generic_get_index_select_value(t35, 1, t34, t37, 2, t40, 32, 1);
    t14 = *((unsigned int *)t30);
    t15 = *((unsigned int *)t35);
    t16 = (t14 & t15);
    *((unsigned int *)t41) = t16;
    t42 = (t30 + 4);
    t43 = (t35 + 4);
    t44 = (t41 + 4);
    t17 = *((unsigned int *)t42);
    t18 = *((unsigned int *)t43);
    t19 = (t17 | t18);
    *((unsigned int *)t44) = t19;
    t20 = *((unsigned int *)t44);
    t23 = (t20 != 0);
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB19:    t61 = (t0 + 1928);
    t63 = (t0 + 1928);
    t64 = (t63 + 72U);
    t65 = *((char **)t64);
    t66 = (t0 + 2088);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    xsi_vlog_generic_convert_bit_index(t62, t65, 2, t68, 32, 1);
    t69 = (t62 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (!(t70));
    if (t71 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB14;

LAB17:    t24 = *((unsigned int *)t41);
    t25 = *((unsigned int *)t44);
    *((unsigned int *)t41) = (t24 | t25);
    t45 = (t30 + 4);
    t46 = (t35 + 4);
    t26 = *((unsigned int *)t30);
    t27 = (~(t26));
    t47 = *((unsigned int *)t45);
    t48 = (~(t47));
    t49 = *((unsigned int *)t35);
    t50 = (~(t49));
    t51 = *((unsigned int *)t46);
    t52 = (~(t51));
    t53 = (t27 & t48);
    t54 = (t50 & t52);
    t55 = (~(t53));
    t56 = (~(t54));
    t57 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t57 & t55);
    t58 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t58 & t56);
    t59 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t59 & t55);
    t60 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t60 & t56);
    goto LAB19;

LAB20:    xsi_vlogvar_assign_value(t61, t41, 0, *((unsigned int *)t62), 1);
    goto LAB21;

LAB24:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(37, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 1768);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB28;

LAB31:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(42, ng0);

LAB36:    xsi_set_current_line(43, ng0);
    xsi_set_current_line(43, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 2088);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);

LAB37:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB48;

LAB45:    if (t18 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t6) = 1;

LAB48:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB51:    goto LAB35;

LAB38:    xsi_set_current_line(43, ng0);
    t8 = (t0 + 1048U);
    t21 = *((char **)t8);
    t8 = (t0 + 1008U);
    t22 = (t8 + 72U);
    t28 = *((char **)t22);
    t29 = (t0 + 2088);
    t31 = (t29 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_generic_get_index_select_value(t30, 1, t21, t28, 2, t32, 32, 1);
    t33 = (t0 + 1208U);
    t34 = *((char **)t33);
    t33 = (t0 + 1168U);
    t36 = (t33 + 72U);
    t37 = *((char **)t36);
    t38 = (t0 + 2088);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    xsi_vlog_generic_get_index_select_value(t35, 1, t34, t37, 2, t40, 32, 1);
    t14 = *((unsigned int *)t30);
    t15 = *((unsigned int *)t35);
    t16 = (t14 | t15);
    *((unsigned int *)t41) = t16;
    t42 = (t30 + 4);
    t43 = (t35 + 4);
    t44 = (t41 + 4);
    t17 = *((unsigned int *)t42);
    t18 = *((unsigned int *)t43);
    t19 = (t17 | t18);
    *((unsigned int *)t44) = t19;
    t20 = *((unsigned int *)t44);
    t23 = (t20 != 0);
    if (t23 == 1)
        goto LAB40;

LAB41:
LAB42:    t61 = (t0 + 1928);
    t63 = (t0 + 1928);
    t64 = (t63 + 72U);
    t65 = *((char **)t64);
    t66 = (t0 + 2088);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    xsi_vlog_generic_convert_bit_index(t62, t65, 2, t68, 32, 1);
    t69 = (t62 + 4);
    t57 = *((unsigned int *)t69);
    t71 = (!(t57));
    if (t71 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB37;

LAB40:    t24 = *((unsigned int *)t41);
    t25 = *((unsigned int *)t44);
    *((unsigned int *)t41) = (t24 | t25);
    t45 = (t30 + 4);
    t46 = (t35 + 4);
    t26 = *((unsigned int *)t45);
    t27 = (~(t26));
    t47 = *((unsigned int *)t30);
    t53 = (t47 & t27);
    t48 = *((unsigned int *)t46);
    t49 = (~(t48));
    t50 = *((unsigned int *)t35);
    t54 = (t50 & t49);
    t51 = (~(t53));
    t52 = (~(t54));
    t55 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t55 & t51);
    t56 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t56 & t52);
    goto LAB42;

LAB43:    xsi_vlogvar_assign_value(t61, t41, 0, *((unsigned int *)t62), 1);
    goto LAB44;

LAB47:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(44, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 1768);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB51;

LAB54:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(49, ng0);

LAB59:    xsi_set_current_line(50, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t22, 32, t28, 32);
    t21 = (t0 + 1928);
    xsi_vlogvar_assign_value(t21, t30, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB63;

LAB60:    if (t18 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t6) = 1;

LAB63:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB66:    goto LAB58;

LAB62:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(51, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 1768);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB66;

LAB69:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(56, ng0);

LAB74:    xsi_set_current_line(57, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_minus(t30, 32, t22, 32, t28, 32);
    t21 = (t0 + 1928);
    xsi_vlogvar_assign_value(t21, t30, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB78;

LAB75:    if (t18 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t6) = 1;

LAB78:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB81:    goto LAB73;

LAB77:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB78;

LAB79:    xsi_set_current_line(58, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 1768);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB81;

LAB84:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB85;

LAB86:    xsi_set_current_line(63, ng0);

LAB89:    xsi_set_current_line(64, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    memset(t30, 0, 8);
    t21 = (t22 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB91;

LAB90:    t29 = (t28 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB91;

LAB94:    if (*((unsigned int *)t22) < *((unsigned int *)t28))
        goto LAB92;

LAB93:    t32 = (t0 + 1928);
    xsi_vlogvar_assign_value(t32, t30, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB98;

LAB95:    if (t18 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t6) = 1;

LAB98:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB101:    goto LAB88;

LAB91:    t31 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB93;

LAB92:    *((unsigned int *)t30) = 1;
    goto LAB93;

LAB97:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB98;

LAB99:    xsi_set_current_line(65, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 1768);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB101;

LAB104:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(70, ng0);

LAB109:    xsi_set_current_line(71, ng0);
    xsi_set_current_line(71, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 2088);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);

LAB110:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB127;

LAB124:    if (t18 != 0)
        goto LAB126;

LAB125:    *((unsigned int *)t6) = 1;

LAB127:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB128;

LAB129:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB130:    goto LAB108;

LAB111:    xsi_set_current_line(71, ng0);
    t8 = (t0 + 1048U);
    t21 = *((char **)t8);
    t8 = (t0 + 1008U);
    t22 = (t8 + 72U);
    t28 = *((char **)t22);
    t29 = (t0 + 2088);
    t31 = (t29 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_generic_get_index_select_value(t35, 1, t21, t28, 2, t32, 32, 1);
    t33 = (t0 + 1208U);
    t34 = *((char **)t33);
    t33 = (t0 + 1168U);
    t36 = (t33 + 72U);
    t37 = *((char **)t36);
    t38 = (t0 + 2088);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    xsi_vlog_generic_get_index_select_value(t41, 1, t34, t37, 2, t40, 32, 1);
    t14 = *((unsigned int *)t35);
    t15 = *((unsigned int *)t41);
    t16 = (t14 | t15);
    *((unsigned int *)t62) = t16;
    t42 = (t35 + 4);
    t43 = (t41 + 4);
    t44 = (t62 + 4);
    t17 = *((unsigned int *)t42);
    t18 = *((unsigned int *)t43);
    t19 = (t17 | t18);
    *((unsigned int *)t44) = t19;
    t20 = *((unsigned int *)t44);
    t23 = (t20 != 0);
    if (t23 == 1)
        goto LAB113;

LAB114:
LAB115:    memset(t30, 0, 8);
    t61 = (t62 + 4);
    t57 = *((unsigned int *)t61);
    t58 = (~(t57));
    t59 = *((unsigned int *)t62);
    t60 = (t59 & t58);
    t70 = (t60 & 1U);
    if (t70 != 0)
        goto LAB119;

LAB117:    if (*((unsigned int *)t61) == 0)
        goto LAB116;

LAB118:    t63 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t63) = 1;

LAB119:    t64 = (t30 + 4);
    t65 = (t62 + 4);
    t72 = *((unsigned int *)t62);
    t73 = (~(t72));
    *((unsigned int *)t30) = t73;
    *((unsigned int *)t64) = 0;
    if (*((unsigned int *)t65) != 0)
        goto LAB121;

LAB120:    t78 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t78 & 1U);
    t79 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t79 & 1U);
    t66 = (t0 + 1928);
    t67 = (t0 + 1928);
    t68 = (t67 + 72U);
    t69 = *((char **)t68);
    t81 = (t0 + 2088);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    xsi_vlog_generic_convert_bit_index(t80, t69, 2, t83, 32, 1);
    t84 = (t80 + 4);
    t85 = *((unsigned int *)t84);
    t71 = (!(t85));
    if (t71 == 1)
        goto LAB122;

LAB123:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB110;

LAB113:    t24 = *((unsigned int *)t62);
    t25 = *((unsigned int *)t44);
    *((unsigned int *)t62) = (t24 | t25);
    t45 = (t35 + 4);
    t46 = (t41 + 4);
    t26 = *((unsigned int *)t45);
    t27 = (~(t26));
    t47 = *((unsigned int *)t35);
    t53 = (t47 & t27);
    t48 = *((unsigned int *)t46);
    t49 = (~(t48));
    t50 = *((unsigned int *)t41);
    t54 = (t50 & t49);
    t51 = (~(t53));
    t52 = (~(t54));
    t55 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t55 & t51);
    t56 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t56 & t52);
    goto LAB115;

LAB116:    *((unsigned int *)t30) = 1;
    goto LAB119;

LAB121:    t74 = *((unsigned int *)t30);
    t75 = *((unsigned int *)t65);
    *((unsigned int *)t30) = (t74 | t75);
    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t65);
    *((unsigned int *)t64) = (t76 | t77);
    goto LAB120;

LAB122:    xsi_vlogvar_assign_value(t66, t30, 0, *((unsigned int *)t80), 1);
    goto LAB123;

LAB126:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB127;

LAB128:    xsi_set_current_line(72, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 1768);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB130;

}


extern void work_m_00000000001379184461_2587490486_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000001379184461_2587490486", "isim/top_isim_beh.exe.sim/work/m_00000000001379184461_2587490486.didat");
	xsi_register_executes(pe);
}
