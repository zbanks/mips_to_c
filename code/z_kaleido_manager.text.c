struct _mips2c_stack_func_80163700 {};              /* size 0x0 */

struct _mips2c_stack_func_80163758 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_801637B4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80163804 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8016388C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_801638D8 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ ? *sp1C;                             /* inferred */
    /* 0x20 */ char pad20[0x8];
};                                                  /* size = 0x28 */

void *func_80163700(u32 arg0, void *arg1);          /* static */
void func_80163758(? *arg0, u32);                   /* static */
void func_801637B4(? *arg0);                        /* static */
void func_8016388C();                               /* static */
s32 func_801638D8(u32 arg0);                        /* static */
static ? D_801D0B70;                                /* unable to generate initializer */
static u32 D_801D0BA8 = 0;
static ? *D_801D0BAC = NULL;
static FaultAddrConvClient D_801F6BF0;

void *func_80163700(u32 arg0, void *arg1) {
    ? *temp_v0;
    s32 temp_a1;
    u32 temp_a2;

    temp_v0 = D_801D0BAC;
    if ((temp_v0 != 0) && (temp_a2 = temp_v0->unk0, temp_a1 = temp_v0->unkC, (temp_a2 != 0)) && (arg0 >= temp_a2) && (arg0 < (u32) (temp_a2 + (temp_v0->unk10 - temp_a1)))) {
        return arg0 + (temp_a1 - temp_a2);
    }
    return NULL;
}

void func_80163758(? *arg0) {
    u32 temp_t6;

    temp_t6 = D_801D0BA8;
    arg0->unk0 = temp_t6;
    Load2_LoadOverlay(arg0->unk4, arg0->unk8, arg0->unkC, arg0->unk10, temp_t6);
    arg0->unk14 = (s32) (arg0->unk0 - arg0->unkC);
    D_801D0BAC = arg0;
}

void func_801637B4(? *arg0) {
    s32 temp_t6;
    s32 temp_t7;
    void *temp_a0;
    void *temp_a3;

    temp_a3 = arg0->unk0;
    temp_a0 = temp_a3;
    if (temp_a3 != 0) {
        temp_t6 = arg0->unk10;
        temp_t7 = arg0->unkC;
        arg0->unk14 = 0;
        arg0 = arg0;
        bzero(temp_a0, temp_t6 - temp_t7);
        arg0->unk0 = NULL;
        D_801D0BAC = NULL;
    }
}

void func_80163804(GlobalContext *globalCtx) {
    ? *temp_v0;
    s32 temp_v1;
    s32 phi_a1;
    ? *phi_v0;
    u32 phi_a1_2;

    phi_a1 = 0;
    phi_v0 = &D_801D0B70;
    do {
        temp_v0 = phi_v0 + 0x1C;
        temp_v1 = phi_v0->unk10 - phi_v0->unkC;
        phi_v0 = temp_v0;
        phi_a1_2 = (u32) phi_a1;
        if (phi_a1 < temp_v1) {
            phi_a1_2 = (u32) temp_v1;
        }
        phi_a1 = (s32) phi_a1_2;
    } while (temp_v0 != &D_801D0BA8);
    D_801D0BA8 = THA_AllocEndAlign16(&globalCtx->state.heap, phi_a1_2);
    D_801D0BAC = NULL;
    Fault_AddAddrConvClient(&D_801F6BF0, (void *(*)(void *, void *)) func_80163700, NULL);
}

void func_8016388C(void) {
    ? *temp_a0;

    Fault_RemoveAddrConvClient(&D_801F6BF0);
    temp_a0 = D_801D0BAC;
    if (temp_a0 != 0) {
        func_801637B4(temp_a0);
        D_801D0BAC = NULL;
    }
    D_801D0BA8 = 0;
}

s32 func_801638D8(u32 arg0) {
    ? *sp1C;
    ? *temp_a0;
    ? *temp_v1;
    u32 temp_a1;
    ? *phi_a0;

    temp_a1 = arg0;
    temp_v1 = D_801D0BAC;
    phi_a0 = &D_801D0B70;
    if (temp_v1 == 0) {
loop_2:
        if ((temp_a1 >= (u32) phi_a0->unkC) && ((u32) phi_a0->unk10 >= temp_a1)) {
            sp1C = phi_a0;
            arg0 = temp_a1;
            func_80163758(phi_a0, temp_a1);
            return arg0 + phi_a0->unk14;
        }
        temp_a0 = phi_a0 + 0x1C;
        phi_a0 = temp_a0;
        if (temp_a0 == &D_801D0BA8) {
            return 0;
        }
        goto loop_2;
    }
    if ((temp_a1 < (u32) temp_v1->unkC) || (temp_a1 >= (u32) temp_v1->unk10)) {
        return 0;
    }
    return temp_a1 + temp_v1->unk14;
}
