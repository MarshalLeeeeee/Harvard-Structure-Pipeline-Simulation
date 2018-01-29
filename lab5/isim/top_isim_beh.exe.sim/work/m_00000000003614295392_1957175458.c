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
static const char *ng0 = "F:/document/SJTU/course/computer_architecture/experiment/workshop/lmc/lab5/lab5/ProgramCounter.v";
static int ng1[] = {0, 0};
static int ng2[] = {4, 0};
static int ng3[] = {2, 0};
static unsigned int ng4[] = {0U, 0U};



static void Always_40_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 5016);
    *((int *)t2) = 1;
    t3 = (t0 + 4480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB2;

}

static void Always_46_1(char *t0)
{
    char t8[8];
    char t41[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5032);
    *((int *)t2) = 1;
    t3 = (t0 + 4728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 32, t7, 32);
    t9 = (t0 + 2728);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_lshift(t8, 29, t3, 26, t2, 32);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 29);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = ((char*)((ng4)));
    t10 = *((unsigned int *)t7);
    t11 = *((unsigned int *)t9);
    t12 = (t10 & t11);
    *((unsigned int *)t8) = t12;
    t13 = (t7 + 4);
    t14 = (t9 + 4);
    t15 = (t8 + 4);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB6;

LAB7:
LAB8:    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 32, t4, 29, t8, 32);
    t42 = (t0 + 3048);
    xsi_vlogvar_assign_value(t42, t41, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_lshift(t8, 32, t3, 32, t2, 32);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 32, t8, 32, t6, 32);
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t41, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t4);
    t12 = (t10 & t11);
    *((unsigned int *)t43) = t12;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t43 + 4);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    *((unsigned int *)t6) = t18;
    t19 = *((unsigned int *)t6);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB9;

LAB10:
LAB11:    memset(t41, 0, 8);
    t13 = (t43 + 4);
    t44 = *((unsigned int *)t13);
    t45 = (~(t44));
    t46 = *((unsigned int *)t43);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t13) != 0)
        goto LAB14;

LAB15:    t15 = (t41 + 4);
    t49 = *((unsigned int *)t41);
    t50 = *((unsigned int *)t15);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB16;

LAB17:    t52 = *((unsigned int *)t41);
    t53 = (~(t52));
    t54 = *((unsigned int *)t15);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t15) > 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t41) > 0)
        goto LAB22;

LAB23:    memcpy(t8, t58, 8);

LAB24:    t59 = (t0 + 3368);
    xsi_vlogvar_assign_value(t59, t8, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t41, 0, 8);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t16 = (t12 & t11);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t2) != 0)
        goto LAB27;

LAB28:    t5 = (t41 + 4);
    t18 = *((unsigned int *)t41);
    t19 = *((unsigned int *)t5);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB29;

LAB30:    t21 = *((unsigned int *)t41);
    t22 = (~(t21));
    t25 = *((unsigned int *)t5);
    t26 = (t22 || t25);
    if (t26 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t5) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t41) > 0)
        goto LAB35;

LAB36:    memcpy(t8, t15, 8);

LAB37:    t23 = (t0 + 3528);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 32);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB2;

LAB6:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t8) = (t21 | t22);
    t23 = (t7 + 4);
    t24 = (t9 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t35);
    t40 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t40 & t36);
    goto LAB8;

LAB9:    t21 = *((unsigned int *)t43);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t43) = (t21 | t22);
    t7 = (t3 + 4);
    t9 = (t4 + 4);
    t25 = *((unsigned int *)t3);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t4);
    t30 = (~(t29));
    t31 = *((unsigned int *)t9);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t35);
    t38 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t38 & t36);
    t39 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t39 & t35);
    t40 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t40 & t36);
    goto LAB11;

LAB12:    *((unsigned int *)t41) = 1;
    goto LAB15;

LAB14:    t14 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB15;

LAB16:    t23 = (t0 + 3208);
    t24 = (t23 + 56U);
    t42 = *((char **)t24);
    goto LAB17;

LAB18:    t56 = (t0 + 2728);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    goto LAB19;

LAB20:    xsi_vlog_unsigned_bit_combine(t8, 32, t42, 32, t58, 32);
    goto LAB24;

LAB22:    memcpy(t8, t42, 8);
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t4 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB28;

LAB29:    t6 = (t0 + 3048);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    goto LAB30;

LAB31:    t13 = (t0 + 3368);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t8, 32, t9, 32, t15, 32);
    goto LAB37;

LAB35:    memcpy(t8, t9, 8);
    goto LAB37;

}


extern void work_m_00000000003614295392_1957175458_init()
{
	static char *pe[] = {(void *)Always_40_0,(void *)Always_46_1};
	xsi_register_didat("work_m_00000000003614295392_1957175458", "isim/top_isim_beh.exe.sim/work/m_00000000003614295392_1957175458.didat");
	xsi_register_executes(pe);
}
