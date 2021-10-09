struct _mips2c_stack_func_80194710 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ u32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80194750 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ u32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80194790 {};              /* size 0x0 */

struct _mips2c_stack_func_80194804 {};              /* size 0x0 */

struct _mips2c_stack_func_80194840 {};              /* size 0x0 */

struct _mips2c_stack_func_801948B0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

void func_80194710(void *arg0, s32 arg1);           /* static */
void func_80194750(void *arg0, s32 arg1);           /* static */
? func_80194790(s32 arg0, s32 arg1);                /* static */
void func_80194804(s32 arg0);                       /* static */
s16 func_80194840(s32 arg0);                        /* static */
? func_801948B0(s32 *arg0, s32 *arg1);              /* static */
extern s32 D_A4500000;
extern s32 D_A4500004;
extern s32 D_A450000C;
static u8 D_801D6010 = 0;
static ? D_801D6014;                                /* unable to generate initializer */
static ? D_801D6028;                                /* unable to generate initializer */
static ? D_801D6098;                                /* unable to generate initializer */
void *D_801D6188 = &D_801D6098;
void *D_801D618C = &D_801D6028;

void func_80194710(void *arg0, s32 arg1) {
    u32 sp1C;

    sp1C = osSetIntMask(1U);
    osInvalDCache(arg0, arg1);
    osSetIntMask(sp1C);
}

void func_80194750(void *arg0, s32 arg1) {
    u32 sp1C;

    sp1C = osSetIntMask(1U);
    osWritebackDCache(arg0, arg1);
    osSetIntMask(sp1C);
}

? func_80194790(s32 arg0, s32 arg1) {
    s32 phi_v1;

    phi_v1 = arg0;
    if (D_801D6010 != 0) {
        phi_v1 = arg0 - 0x2000;
    }
    if (((arg0 + arg1) & 0x1FFF) == 0) {
        D_801D6010 = 1;
    } else {
        D_801D6010 = 0;
    }
    if (D_A450000C & 0x80000000) {
        return -1;
    }
    D_A4500000 = phi_v1 + 0x80000000;
    D_A4500004 = arg1;
    return 0;
}

void func_80194804(s32 arg0) {
    D_801D6188 = (arg0 * 0x22) + &D_801D6098;
    D_801D618C = (arg0 * 0x10) + &D_801D6028;
}

s16 func_80194840(s32 arg0) {
    s32 temp_a1;
    s32 temp_v1;
    s16 *phi_a2;
    s32 phi_a1;
    s32 phi_a1_2;
    s32 phi_v1;
    s32 phi_v1_2;

    phi_a2 = D_801D6188 + 2;
    phi_a1 = 2;
    phi_v1_2 = 0;
loop_1:
    phi_a2 += 2;
    phi_a1_2 = phi_a1;
    phi_v1 = phi_v1_2;
    if (arg0 >= (s32) *phi_a2) {
        temp_a1 = phi_a1 + 2;
        temp_v1 = phi_v1_2 + 1;
        phi_a1 = temp_a1;
        phi_a1_2 = temp_a1;
        phi_v1 = temp_v1;
        phi_v1_2 = temp_v1;
        if (temp_a1 != 0x20) {
            goto loop_1;
        }
    }
    if (phi_a1_2 == 0x20) {
        return 0;
    }
    return *(&D_801D6014 + (*(D_801D618C + phi_v1) * 2));
}

? func_801948B0(s32 *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 phi_s0;
    s32 phi_s1;

    phi_s0 = *arg0;
    phi_s1 = *arg1;
loop_1:
    temp_v0 = func_80194840(phi_s0);
    if (temp_v0 == 0) {
        return -1;
    }
    if (phi_s1 >= temp_v0) {
        phi_s0 += 1;
        phi_s1 -= temp_v0;
        goto loop_1;
    }
    *arg0 = phi_s0;
    *arg1 = phi_s1;
    return 0;
}
