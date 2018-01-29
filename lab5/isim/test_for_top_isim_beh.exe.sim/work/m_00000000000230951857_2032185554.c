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
static const char *ng0 = "F:/document/SJTU/course/computer_architecture/experiment/workshop/lmc/lab5/lab5/instruction_memory.v";
static unsigned int ng1[] = {134217732U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};
static unsigned int ng7[] = {2348875776U, 0U};
static int ng8[] = {4, 0};
static unsigned int ng9[] = {2348941313U, 0U};
static int ng10[] = {5, 0};
static unsigned int ng11[] = {2234400U, 0U};
static int ng12[] = {6, 0};
static unsigned int ng13[] = {2236450U, 0U};
static int ng14[] = {7, 0};
static unsigned int ng15[] = {2885943328U, 0U};
static int ng16[] = {8, 0};
static unsigned int ng17[] = {2349137925U, 0U};
static int ng18[] = {9, 0};
static unsigned int ng19[] = {2349203462U, 0U};
static int ng20[] = {10, 0};
static unsigned int ng21[] = {10893348U, 0U};
static int ng22[] = {11, 0};
static unsigned int ng23[] = {10895397U, 0U};
static int ng24[] = {12, 0};
static unsigned int ng25[] = {10897447U, 0U};
static int ng26[] = {13, 0};



static void Always_34_0(char *t0)
{
    char t6[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    unsigned int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    int t25;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3256);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1768);
    t8 = (t0 + 1768);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 1768);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    t4 = (t0 + 1768);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    t4 = (t0 + 1768);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    t4 = (t0 + 1768);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1768);
    t4 = (t0 + 1768);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1768);
    t4 = (t0 + 1768);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1768);
    t4 = (t0 + 1768);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1768);
    t4 = (t0 + 1768);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng14)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1768);
    t4 = (t0 + 1768);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng16)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1768);
    t4 = (t0 + 1768);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng18)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1768);
    t4 = (t0 + 1768);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng20)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 1768);
    t4 = (t0 + 1768);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng22)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 1768);
    t4 = (t0 + 1768);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng24)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 1768);
    t4 = (t0 + 1768);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng26)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB32;

LAB33:    goto LAB2;

LAB6:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), t25);
    goto LAB7;

LAB8:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t25);
    goto LAB9;

LAB10:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t25);
    goto LAB11;

LAB12:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t25);
    goto LAB13;

LAB14:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t25);
    goto LAB15;

LAB16:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t25);
    goto LAB17;

LAB18:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t25);
    goto LAB19;

LAB20:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t25);
    goto LAB21;

LAB22:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t25);
    goto LAB23;

LAB24:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t25);
    goto LAB25;

LAB26:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t25);
    goto LAB27;

LAB28:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t25);
    goto LAB29;

LAB30:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t25);
    goto LAB31;

LAB32:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t25);
    goto LAB33;

}

static void Cont_52_1(char *t0)
{
    char t5[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 1768);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1208U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng5)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_rshift(t14, 32, t13, 32, t12, 32);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t14, 32, 2);
    t15 = (t0 + 3352);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t5, 8);
    xsi_driver_vfirst_trans(t15, 0, 31);
    t20 = (t0 + 3272);
    *((int *)t20) = 1;

LAB1:    return;
}


extern void work_m_00000000000230951857_2032185554_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Cont_52_1};
	xsi_register_didat("work_m_00000000000230951857_2032185554", "isim/test_for_top_isim_beh.exe.sim/work/m_00000000000230951857_2032185554.didat");
	xsi_register_executes(pe);
}
