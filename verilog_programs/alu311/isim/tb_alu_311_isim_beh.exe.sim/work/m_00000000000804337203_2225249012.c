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
static const char *ng0 = "D:/dld_github/alu311/alu_311.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};
static int ng9[] = {8, 0};
static int ng10[] = {9, 0};
static int ng11[] = {10, 0};
static int ng12[] = {11, 0};
static int ng13[] = {12, 0};
static int ng14[] = {13, 0};
static int ng15[] = {14, 0};



static void Always_24_0(char *t0)
{
    char t6[8];
    char t31[8];
    char t41[8];
    char t48[8];
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
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
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

LAB11:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
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
        goto LAB16;

LAB13:    if (t18 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t6) = 1;

LAB16:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
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
        goto LAB23;

LAB20:    if (t18 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t6) = 1;

LAB23:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
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
        goto LAB30;

LAB27:    if (t18 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t6) = 1;

LAB30:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(34, ng0);
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
        goto LAB37;

LAB34:    if (t18 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t6) = 1;

LAB37:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(36, ng0);
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
        goto LAB44;

LAB41:    if (t18 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t6) = 1;

LAB44:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(38, ng0);
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
        goto LAB51;

LAB48:    if (t18 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t6) = 1;

LAB51:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(40, ng0);
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
        goto LAB62;

LAB59:    if (t18 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t6) = 1;

LAB62:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(42, ng0);
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
        goto LAB83;

LAB80:    if (t18 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t6) = 1;

LAB83:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
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
        goto LAB104;

LAB101:    if (t18 != 0)
        goto LAB103;

LAB102:    *((unsigned int *)t6) = 1;

LAB104:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB105;

LAB106:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
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
        goto LAB114;

LAB111:    if (t18 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t6) = 1;

LAB114:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB115;

LAB116:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
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
        goto LAB124;

LAB121:    if (t18 != 0)
        goto LAB123;

LAB122:    *((unsigned int *)t6) = 1;

LAB124:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB125;

LAB126:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
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
        goto LAB134;

LAB131:    if (t18 != 0)
        goto LAB133;

LAB132:    *((unsigned int *)t6) = 1;

LAB134:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB135;

LAB136:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng14)));
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
        goto LAB141;

LAB138:    if (t18 != 0)
        goto LAB140;

LAB139:    *((unsigned int *)t6) = 1;

LAB141:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB142;

LAB143:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng15)));
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
        goto LAB148;

LAB145:    if (t18 != 0)
        goto LAB147;

LAB146:    *((unsigned int *)t6) = 1;

LAB148:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB149;

LAB150:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t6, 8, t3, 4, t4, 4);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 8);

LAB151:
LAB144:
LAB137:
LAB127:
LAB117:
LAB107:
LAB86:
LAB65:
LAB54:
LAB47:
LAB40:
LAB33:
LAB26:
LAB19:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(27, ng0);
    t28 = (t0 + 1048U);
    t29 = *((char **)t28);
    t28 = (t0 + 1208U);
    t30 = *((char **)t28);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 8, t29, 4, t30, 4);
    t28 = (t0 + 1768);
    xsi_vlogvar_assign_value(t28, t31, 0, 0, 8);
    goto LAB12;

LAB15:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(29, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_minus(t31, 8, t22, 4, t28, 4);
    t21 = (t0 + 1768);
    xsi_vlogvar_assign_value(t21, t31, 0, 0, 8);
    goto LAB19;

LAB22:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(31, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_multiply(t31, 8, t22, 4, t28, 4);
    t21 = (t0 + 1768);
    xsi_vlogvar_assign_value(t21, t31, 0, 0, 8);
    goto LAB26;

LAB29:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(33, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_divide(t31, 8, t22, 4, t28, 4);
    t21 = (t0 + 1768);
    xsi_vlogvar_assign_value(t21, t31, 0, 0, 8);
    goto LAB33;

LAB36:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(35, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_mod(t31, 8, t22, 4, t28, 4);
    t21 = (t0 + 1768);
    xsi_vlogvar_assign_value(t21, t31, 0, 0, 8);
    goto LAB40;

LAB43:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(37, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_multiply(t31, 8, t22, 4, t28, 4);
    t21 = (t0 + 1768);
    xsi_vlogvar_assign_value(t21, t31, 0, 0, 8);
    goto LAB47;

LAB50:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(39, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    memset(t31, 0, 8);
    t21 = (t22 + 4);
    t32 = *((unsigned int *)t21);
    t33 = (~(t32));
    t34 = *((unsigned int *)t22);
    t35 = (t34 & t33);
    t36 = (t35 & 15U);
    if (t36 != 0)
        goto LAB58;

LAB56:    if (*((unsigned int *)t21) == 0)
        goto LAB55;

LAB57:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;

LAB58:    t29 = (t0 + 1768);
    xsi_vlogvar_assign_value(t29, t31, 0, 0, 8);
    goto LAB54;

LAB55:    *((unsigned int *)t31) = 1;
    goto LAB58;

LAB61:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(41, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    memset(t31, 0, 8);
    t21 = (t22 + 4);
    t32 = *((unsigned int *)t21);
    t33 = (~(t32));
    t34 = *((unsigned int *)t22);
    t35 = (t34 & t33);
    t36 = (t35 & 15U);
    if (t36 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t21) != 0)
        goto LAB68;

LAB69:    t29 = (t31 + 4);
    t37 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB70;

LAB71:    memcpy(t48, t31, 8);

LAB72:    t80 = (t0 + 1768);
    xsi_vlogvar_assign_value(t80, t48, 0, 0, 8);
    goto LAB65;

LAB66:    *((unsigned int *)t31) = 1;
    goto LAB69;

LAB68:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB69;

LAB70:    t30 = (t0 + 1208U);
    t40 = *((char **)t30);
    memset(t41, 0, 8);
    t30 = (t40 + 4);
    t42 = *((unsigned int *)t30);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (t44 & t43);
    t46 = (t45 & 15U);
    if (t46 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t30) != 0)
        goto LAB75;

LAB76:    t49 = *((unsigned int *)t31);
    t50 = *((unsigned int *)t41);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t52 = (t31 + 4);
    t53 = (t41 + 4);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t52);
    t56 = *((unsigned int *)t53);
    t57 = (t55 | t56);
    *((unsigned int *)t54) = t57;
    t58 = *((unsigned int *)t54);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB77;

LAB78:
LAB79:    goto LAB72;

LAB73:    *((unsigned int *)t41) = 1;
    goto LAB76;

LAB75:    t47 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB76;

LAB77:    t60 = *((unsigned int *)t48);
    t61 = *((unsigned int *)t54);
    *((unsigned int *)t48) = (t60 | t61);
    t62 = (t31 + 4);
    t63 = (t41 + 4);
    t64 = *((unsigned int *)t31);
    t65 = (~(t64));
    t66 = *((unsigned int *)t62);
    t67 = (~(t66));
    t68 = *((unsigned int *)t41);
    t69 = (~(t68));
    t70 = *((unsigned int *)t63);
    t71 = (~(t70));
    t72 = (t65 & t67);
    t73 = (t69 & t71);
    t74 = (~(t72));
    t75 = (~(t73));
    t76 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t76 & t74);
    t77 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t77 & t75);
    t78 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t78 & t74);
    t79 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t79 & t75);
    goto LAB79;

LAB82:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB83;

LAB84:    xsi_set_current_line(43, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    memset(t31, 0, 8);
    t21 = (t22 + 4);
    t32 = *((unsigned int *)t21);
    t33 = (~(t32));
    t34 = *((unsigned int *)t22);
    t35 = (t34 & t33);
    t36 = (t35 & 15U);
    if (t36 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t21) != 0)
        goto LAB89;

LAB90:    t29 = (t31 + 4);
    t37 = *((unsigned int *)t31);
    t38 = (!(t37));
    t39 = *((unsigned int *)t29);
    t42 = (t38 || t39);
    if (t42 > 0)
        goto LAB91;

LAB92:    memcpy(t48, t31, 8);

LAB93:    t80 = (t0 + 1768);
    xsi_vlogvar_assign_value(t80, t48, 0, 0, 8);
    goto LAB86;

LAB87:    *((unsigned int *)t31) = 1;
    goto LAB90;

LAB89:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB90;

LAB91:    t30 = (t0 + 1208U);
    t40 = *((char **)t30);
    memset(t41, 0, 8);
    t30 = (t40 + 4);
    t43 = *((unsigned int *)t30);
    t44 = (~(t43));
    t45 = *((unsigned int *)t40);
    t46 = (t45 & t44);
    t49 = (t46 & 15U);
    if (t49 != 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t30) != 0)
        goto LAB96;

LAB97:    t50 = *((unsigned int *)t31);
    t51 = *((unsigned int *)t41);
    t55 = (t50 | t51);
    *((unsigned int *)t48) = t55;
    t52 = (t31 + 4);
    t53 = (t41 + 4);
    t54 = (t48 + 4);
    t56 = *((unsigned int *)t52);
    t57 = *((unsigned int *)t53);
    t58 = (t56 | t57);
    *((unsigned int *)t54) = t58;
    t59 = *((unsigned int *)t54);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB98;

LAB99:
LAB100:    goto LAB93;

LAB94:    *((unsigned int *)t41) = 1;
    goto LAB97;

LAB96:    t47 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB97;

LAB98:    t61 = *((unsigned int *)t48);
    t64 = *((unsigned int *)t54);
    *((unsigned int *)t48) = (t61 | t64);
    t62 = (t31 + 4);
    t63 = (t41 + 4);
    t65 = *((unsigned int *)t62);
    t66 = (~(t65));
    t67 = *((unsigned int *)t31);
    t72 = (t67 & t66);
    t68 = *((unsigned int *)t63);
    t69 = (~(t68));
    t70 = *((unsigned int *)t41);
    t73 = (t70 & t69);
    t71 = (~(t72));
    t74 = (~(t73));
    t75 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t75 & t71);
    t76 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t76 & t74);
    goto LAB100;

LAB103:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB104;

LAB105:    xsi_set_current_line(45, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t28);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t21 = (t22 + 4);
    t29 = (t28 + 4);
    t30 = (t31 + 4);
    t35 = *((unsigned int *)t21);
    t36 = *((unsigned int *)t29);
    t37 = (t35 | t36);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t30);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB108;

LAB109:
LAB110:    t52 = (t0 + 1768);
    xsi_vlogvar_assign_value(t52, t31, 0, 0, 8);
    goto LAB107;

LAB108:    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t30);
    *((unsigned int *)t31) = (t42 | t43);
    t40 = (t22 + 4);
    t47 = (t28 + 4);
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t22);
    t72 = (t46 & t45);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t28);
    t73 = (t51 & t50);
    t55 = (~(t72));
    t56 = (~(t73));
    t57 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t57 & t55);
    t58 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t58 & t56);
    goto LAB110;

LAB113:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB114;

LAB115:    xsi_set_current_line(47, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t28);
    t34 = (t32 & t33);
    *((unsigned int *)t31) = t34;
    t21 = (t22 + 4);
    t29 = (t28 + 4);
    t30 = (t31 + 4);
    t35 = *((unsigned int *)t21);
    t36 = *((unsigned int *)t29);
    t37 = (t35 | t36);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t30);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB118;

LAB119:
LAB120:    t52 = (t0 + 1768);
    xsi_vlogvar_assign_value(t52, t31, 0, 0, 8);
    goto LAB117;

LAB118:    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t30);
    *((unsigned int *)t31) = (t42 | t43);
    t40 = (t22 + 4);
    t47 = (t28 + 4);
    t44 = *((unsigned int *)t22);
    t45 = (~(t44));
    t46 = *((unsigned int *)t40);
    t49 = (~(t46));
    t50 = *((unsigned int *)t28);
    t51 = (~(t50));
    t55 = *((unsigned int *)t47);
    t56 = (~(t55));
    t72 = (t45 & t49);
    t73 = (t51 & t56);
    t57 = (~(t72));
    t58 = (~(t73));
    t59 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t59 & t57);
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t60 & t58);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t61 & t57);
    t64 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t64 & t58);
    goto LAB120;

LAB123:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB124;

LAB125:    xsi_set_current_line(49, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t28);
    t34 = (t32 ^ t33);
    *((unsigned int *)t31) = t34;
    t21 = (t22 + 4);
    t29 = (t28 + 4);
    t30 = (t31 + 4);
    t35 = *((unsigned int *)t21);
    t36 = *((unsigned int *)t29);
    t37 = (t35 | t36);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t30);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB128;

LAB129:
LAB130:    t40 = (t0 + 1768);
    xsi_vlogvar_assign_value(t40, t31, 0, 0, 8);
    goto LAB127;

LAB128:    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t30);
    *((unsigned int *)t31) = (t42 | t43);
    goto LAB130;

LAB133:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB134;

LAB135:    xsi_set_current_line(51, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_lshift(t31, 8, t22, 4, t28, 4);
    t21 = (t0 + 1768);
    xsi_vlogvar_assign_value(t21, t31, 0, 0, 8);
    goto LAB137;

LAB140:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB141;

LAB142:    xsi_set_current_line(53, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_rshift(t31, 8, t22, 4, t28, 4);
    t21 = (t0 + 1768);
    xsi_vlogvar_assign_value(t21, t31, 0, 0, 8);
    goto LAB144;

LAB147:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB148;

LAB149:    xsi_set_current_line(55, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_arith_lshift(t31, 8, t22, 4, t28, 4);
    t21 = (t0 + 1768);
    xsi_vlogvar_assign_value(t21, t31, 0, 0, 8);
    goto LAB151;

}


extern void work_m_00000000000804337203_2225249012_init()
{
	static char *pe[] = {(void *)Always_24_0};
	xsi_register_didat("work_m_00000000000804337203_2225249012", "isim/tb_alu_311_isim_beh.exe.sim/work/m_00000000000804337203_2225249012.didat");
	xsi_register_executes(pe);
}
