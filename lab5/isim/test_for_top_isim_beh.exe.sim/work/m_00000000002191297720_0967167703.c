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
static const char *ng0 = "F:/document/SJTU/course/computer_architecture/experiment/workshop/lmc/lab4/signext/signext.v";
static unsigned int ng1[] = {4294967295U, 0U};
static unsigned int ng2[] = {65535U, 0U};
static int ng3[] = {1, 0};



static void Cont_26_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t29[8];
    char t30[8];
    char t31[8];
    char t33[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 15);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 15);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t21);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t40, 8);

LAB16:    t38 = (t0 + 2768);
    t41 = (t38 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memcpy(t44, t3, 8);
    xsi_driver_vfirst_trans(t38, 0, 31);
    t45 = (t0 + 2688);
    *((int *)t45) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = ((char*)((ng1)));
    t26 = ((char*)((ng2)));
    t27 = (t0 + 1048U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_minus(t29, 32, t26, 32, t28, 16);
    t27 = ((char*)((ng3)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t29, 32, t27, 32);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_minus(t31, 32, t25, 32, t30, 32);
    t32 = ((char*)((ng3)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 32, t31, 32, t32, 32);
    goto LAB9;

LAB10:    t38 = (t0 + 1048U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t40, 32);
    goto LAB16;

LAB14:    memcpy(t3, t33, 8);
    goto LAB16;

}


extern void work_m_00000000002191297720_0967167703_init()
{
	static char *pe[] = {(void *)Cont_26_0};
	xsi_register_didat("work_m_00000000002191297720_0967167703", "isim/test_for_top_isim_beh.exe.sim/work/m_00000000002191297720_0967167703.didat");
	xsi_register_executes(pe);
}
