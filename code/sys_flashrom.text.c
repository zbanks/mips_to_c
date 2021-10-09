struct _mips2c_stack_SysFlashrom_ThreadEntry {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_801857C0 {};              /* size 0x0 */

struct _mips2c_stack_func_801857D0 {};              /* size 0x0 */

struct _mips2c_stack_func_80185864 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80185908 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80185968 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0x18];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_801859F0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80185A2C {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x18];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80185B1C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80185BE4 {};              /* size 0x0 */

struct _mips2c_stack_func_80185C24 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ u32 sp18;                            /* inferred */
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80185DDC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80185EC4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80185F04 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80185F64 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? func_80186B78();                                  /* extern */
? func_80186D60(s32 *, s32 *);                      /* extern */
void *func_80187124(s32);                           /* extern */
? func_801872FC(? *, ?, void *, OSMesgQueue *);     /* extern */
void *func_801873BC(s32);                           /* extern */
? func_8018752C(? *, ?, s32, void *, s32, OSMesgQueue *); /* extern */
s32 func_801857C0();                                /* static */
s8 *func_801857D0();                                /* static */
s32 func_80185864();                                /* static */
void *func_80185968(void *arg0, s32 arg1, s32 arg2, s80185D40 *); /* static */
void *func_801859F0(s32 arg0);                      /* static */
void *func_80185A2C(void *arg0, s32 arg1, s32 arg2); /* static */
void *func_80185B1C(void *arg0, s32 arg1, s32 arg2); /* static */
s32 func_80185BE4(s32 *arg0, s32 *arg1, s32 arg2);  /* static */
void *func_80185C24(void *arg0, s32 arg1, s32 arg2, s80185D40 *); /* static */
void func_80185DDC(s32 arg0, s32 arg1, s32 arg2);   /* static */
s32 func_80185EC4();                                /* static */
void *func_80185F04();                              /* static */
void func_80185F64();                               /* static */
static OSMesgQueue D_801FBE10;
static void *D_801FBE28;
static s32 D_801FBE2C;
static s32 D_801FBE30;
s80185D40 D_801FD008;
void *D_801FD034;
OSThread sys_flashromOSThread;
u8 sys_flashromStack[4096];
StackEntry sys_flashromStackEntry;

s32 func_801857C0(void) {
    return D_801FBE2C;
}

s8 *func_801857D0(void) {
    s32 temp_v0;

    temp_v0 = D_801FBE30;
    if (temp_v0 != 0x3200F1) {
        if (temp_v0 != 0xC20000) {
            if (temp_v0 != 0xC20001) {
                if (temp_v0 != 0xC2001D) {
                    if (temp_v0 != 0xC2001E) {
                        return "UNKNOWN";
                    }
                    return "C";
                }
                return "B or D";
            }
            return "A";
        }
        return "PROTO A";
    }
    return "D(NEW)";
}

s32 func_80185864(void) {
    s32 sp1C;
    s32 sp18;

    if (func_801857C0() == 0) {
        goto block_10;
    }
    func_80186D60(&sp1C, &sp18);
    D_801FBE30 = sp18;
    if (sp1C == 0x11118001) {
        if ((sp18 == 0xC20000) || (sp18 == 0xC20001) || (sp18 == 0xC2001E) || (sp18 == 0x3200F1) || (sp18 == 0xC2001D)) {
            return 0;
        }
        goto block_10;
    }
block_10:
    return -1;
}

u32 func_80185908(void) {
    osCreateMesgQueue(&D_801FBE10, &D_801FBE28, 1);
    func_80186B78();
    D_801FBE2C = 1;
    if (func_80185864() != 0) {
        D_801FBE2C = 0;
        return -1U;
    }
    return 0U;
}

void *func_80185968(void *arg0, s32 arg1, s32 arg2) {
    ? sp20;

    if (func_801857C0() == 0) {
        return (void *)-1;
    }
    osInvalDCache(arg0, arg2 << 7);
    func_8018752C(&sp20, 0, arg1, arg0, arg2, &D_801FBE10);
    osRecvMesg(&D_801FBE10, NULL, 1);
    return NULL;
}

void *func_801859F0(s32 arg0) {
    if (func_801857C0() == 0) {
        return (void *)-1;
    }
    return func_80187124(arg0);
}

void *func_80185A2C(void *arg0, s32 arg1, s32 arg2) {
    ? sp40;
    s32 temp_s0;
    void *temp_v0;
    void *phi_s1;
    s32 phi_s2;
    s32 phi_s0;

    if (func_801857C0() == 0) {
        return (void *)-1;
    }
    if ((arg1 & 0x7F) != 0) {
        Fault_AddHungupAndCrash("../sys_flashrom.c", 0x113U);
    }
    osWritebackDCache(arg0, arg2 << 7);
    phi_s0 = 0;
    if (arg2 != 0) {
        phi_s1 = arg0;
        phi_s2 = arg1;
loop_6:
        func_801872FC(&sp40, 0, phi_s1, &D_801FBE10);
        osRecvMesg(&D_801FBE10, NULL, 1);
        temp_v0 = func_801873BC(phi_s2);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
        if (temp_v0 != 0) {
            return temp_v0;
        }
        phi_s1 += 0x80;
        phi_s2 += 1;
        if (temp_s0 == arg2) {
            goto block_9;
        }
        goto loop_6;
    }
block_9:
    return NULL;
}

void *func_80185B1C(void *arg0, s32 arg1, s32 arg2) {
    void *temp_v0;
    void *temp_v0_2;
    s32 phi_s0;

    if (func_801857C0() == 0) {
        return (void *)-1;
    }
    osWritebackDCache(arg0, arg2 << 7);
    phi_s0 = 0;
loop_3:
    temp_v0_2 = func_801859F0(arg1);
    if (temp_v0_2 != 0) {
        if (phi_s0 < 3) {
            phi_s0 += 1;
            goto loop_3;
        }
        return temp_v0_2;
    }
    temp_v0 = func_80185A2C(arg0, arg1, arg2);
    if (temp_v0 != 0) {
        if (phi_s0 < 3) {
            phi_s0 += 1;
            goto loop_3;
        }
        return temp_v0;
    }
    return NULL;
}

s32 func_80185BE4(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 temp_a2;
    u32 temp_v0;
    u32 temp_v1;
    u32 phi_v0;

    temp_v1 = arg2 << 7;
    phi_v0 = 0U;
    if (temp_v1 != 0) {
        temp_a2 = *arg1;
loop_2:
        temp_v0 = phi_v0 + 4;
        phi_v0 = temp_v0;
        if ((*arg0 & temp_a2) != temp_a2) {
            return 0;
        }
        if (temp_v0 >= temp_v1) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return 1;
        }
        goto loop_2;
    }
    return 1;
}

void *func_80185C24(void *arg0, s32 arg1, s32 arg2) {
    void *sp24;
    void *sp1C;
    u32 sp18;
    u32 temp_a0;
    void *temp_v0;
    void *phi_v0;
    void *phi_v1;
    void *phi_v1_2;

    if (func_801857C0() == 0) {
        return (void *)-1;
    }
    temp_a0 = arg2 << 7;
    sp18 = temp_a0;
    temp_v0 = SystemArena_Malloc(temp_a0);
    if (temp_v0 == 0) {
        phi_v1_2 = func_80185B1C(arg0, arg1, arg2);
    } else {
        sp24 = temp_v0;
        func_80185968(temp_v0, arg1, arg2);
        if (bcmp(temp_v0, arg0, sp18) == 0) {
            phi_v1 = NULL;
        } else {
            if (func_80185BE4((s32 *) temp_v0, (s32 *) arg0, arg2) != 0) {
                phi_v0 = func_80185B1C(arg0, arg1, arg2);
            } else {
                phi_v0 = func_80185B1C(arg0, arg1, arg2);
            }
            phi_v1 = phi_v0;
            if (phi_v0 == 0) {
                func_80185968(sp24, arg1, arg2);
                phi_v1 = (void *)-1;
                if (bcmp(sp24, arg0, sp18) == 0) {
                    phi_v1 = NULL;
                }
            }
        }
        sp1C = phi_v1;
        SystemArena_Free(sp24);
        phi_v1_2 = phi_v1;
    }
    return phi_v1_2;
}

void SysFlashrom_ThreadEntry(s80185D40 *param_1) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v0;
    s80185D40 *temp_a3;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_a3 = param_1;
    temp_v0 = temp_a3->unk0;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            return;
        }
        temp_a0 = temp_a3->unk8;
        temp_a1 = temp_a3->unkC;
        temp_a2 = temp_a3->unk10;
        param_1 = temp_a3;
        temp_v0_2 = func_80185968((void *) temp_a0, temp_a1, temp_a2, temp_a3);
        temp_a1_2 = temp_v0_2;
        param_1->unk4 = temp_v0_2;
        osSendMesg(&param_1->unk14, temp_a1_2, 1);
        return;
    }
    param_1 = temp_a3;
    temp_v0_3 = func_80185C24((void *) temp_a3->unk8, temp_a3->unkC, temp_a3->unk10, temp_a3);
    temp_a1_3 = temp_v0_3;
    param_1->unk4 = temp_v0_3;
    osSendMesg(&param_1->unk14, temp_a1_3, 1);
}

void func_80185DDC(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_at;

    if (func_801857C0() != 0) {
        D_801FD008.unk0 = 1;
        temp_at = &D_801FD008.unkC;
        *temp_at = arg0;
        *temp_at = arg1;
        D_801FD008.unk10 = arg2;
        osCreateMesgQueue(&D_801FD008.unk14, &D_801FD034, 1);
        StackCheck_Init(&sys_flashromStackEntry, (void *) sys_flashromStack, (void *) &sys_flashromStackEntry, 0U, 0x100, "sys_flashrom");
        osCreateThread(&sys_flashromOSThread, 0xD, (void *) SysFlashrom_ThreadEntry, (void *) &D_801FD008, (void *) &sys_flashromStackEntry, 0xD);
        osStartThread(&sys_flashromOSThread);
    }
}

s32 func_80185EC4(void) {
    if (func_801857C0() == 0) {
        return -1;
    }
    return (D_801FD008.unk14.validCount < D_801FD008.unk14.msgCount) ^ 1;
}

void *func_80185F04(void) {
    if (func_801857C0() == 0) {
        return (void *)-1;
    }
    osRecvMesg(&D_801FD008.unk14, NULL, 1);
    osDestroyThread(&sys_flashromOSThread);
    StackCheck_Cleanup(&sys_flashromStackEntry);
    return D_801FD008.unk4;
}

void func_80185F64(void) {
    func_80185DDC();
    func_80185F04();
}
