struct _mips2c_stack_func_80140260 {};              /* size 0x0 */

struct _mips2c_stack_func_8014026C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x20];                   /* maybe part of sp24[9]? */
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ s32 sp4C;                            /* inferred */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ s32 sp5C;                            /* inferred */
    /* 0x60 */ char pad_60[0x4];
    /* 0x64 */ s32 sp64;                            /* inferred */
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0x14];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80140730 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80140810 {};              /* size 0x0 */

struct _mips2c_stack_func_80140898 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80140900 {};              /* size 0x0 */

struct _mips2c_stack_func_8014090C {};              /* size 0x0 */

struct _mips2c_stack_func_80140970 {
    /* 0x00 */ char pad_0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80140CE0 {};              /* size 0x0 */

struct _mips2c_stack_func_80140D04 {};              /* size 0x0 */

struct _mips2c_stack_func_80140D10 {};              /* size 0x0 */

void func_8014026C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg9, s16 argA, s32 argB, s32 argC, s32); /* static */
void func_80140730(OSViMode *arg0);                 /* static */
void func_80140810(void *arg0);                     /* static */
void func_8014090C(void *arg0, s32 arg1);           /* static */
void func_80140970(void *arg0, u16 *arg1);          /* static */
static ? D_801C5DD0;                                /* unable to generate initializer */
static ? D_801C5DE0;                                /* unable to generate initializer */
static ? D_801C5DF0;                                /* unable to generate initializer */
static ? D_801C5E00;                                /* unable to generate initializer */
static ? D_801DF0C0;                                /* unable to generate initializer; const */
GameInfo *gGameInfo;
s32 gScreenHeight = 0xF0;
s32 gScreenWidth = 0x140;

void func_80140260(OSViMode *vimode) {

}

void func_8014026C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg9, s16 argA, s32 argB, s32 argC) {
    s32 sp68;
    s32 sp64;
    s32 sp5C;
    s32 sp58;
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    s32 sp24;
    s32 sp20;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t6;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 temp_v1_9;
    void *temp_v0;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v1_4;
    s32 phi_v1_5;
    s32 phi_v1_6;
    s32 phi_v0;
    s32 phi_v1_7;
    s32 phi_v1_8;
    s32 phi_v0_2;
    s32 phi_a0;
    s32 phi_v1_9;
    s32 phi_v1_10;
    s32 phi_t0;
    s32 phi_t3;
    s32 phi_v1_11;
    s32 phi_v1_12;
    s32 phi_v0_3;

    temp_t0 = arg3 == 0;
    temp_v1 = temp_t0 != 0;
    temp_a2 = arg3 != 0;
    phi_v1_5 = temp_v1;
    if (temp_v1 != 0) {
        phi_v1_5 = (arg5 == 0) != 0;
    }
    temp_v1_2 = temp_t0 != 0;
    temp_t1 = arg5 == 0;
    phi_v1 = temp_v1_2;
    if (temp_v1_2 != 0) {
        phi_v1 = arg5 != 0;
    }
    sp68 = phi_v1;
    phi_v1_2 = temp_a2;
    if (temp_a2 != 0) {
        phi_v1_2 = arg5 != 0;
    }
    sp64 = phi_v1_2;
    phi_v1_7 = temp_a2;
    if (temp_a2 != 0) {
        phi_v1_7 = temp_t1 != 0;
    }
    phi_v1_3 = temp_a2;
    if (temp_a2 != 0) {
        temp_v1_3 = (arg4 == 0) != 0;
        phi_v1_3 = temp_v1_3;
        if (temp_v1_3 != 0) {
            temp_v1_4 = arg5 != 0;
            phi_v1_3 = temp_v1_4;
            if (temp_v1_4 != 0) {
                phi_v1_3 = arg6 != 0;
            }
        }
    }
    sp5C = phi_v1_3;
    sp20 = arg6 != 0;
    phi_v1_4 = temp_a2;
    if (temp_a2 != 0) {
        temp_v1_5 = arg4 != 0;
        phi_v1_4 = temp_v1_5;
        if (temp_v1_5 != 0) {
            temp_v1_6 = arg5 != 0;
            phi_v1_4 = temp_v1_6;
            if (temp_v1_6 != 0) {
                phi_v1_4 = (arg6 == 0) != 0;
            }
        }
    }
    sp58 = phi_v1_4;
    temp_v1_7 = temp_t0 != 0;
    temp_a3 = arg6 == 0;
    phi_v1_9 = temp_v1_7;
    if (temp_v1_7 != 0) {
        temp_v1_8 = arg4 != 0;
        phi_v1_9 = temp_v1_8;
        if (temp_v1_8 != 0) {
            temp_v1_9 = arg5 != 0;
            phi_v1_9 = temp_v1_9;
            if (temp_v1_9 != 0) {
                phi_v1_9 = temp_a3 != 0;
            }
        }
    }
    argB &= -2;
    argC &= -2;
    if (phi_v1_5 != 0) {
        phi_v0 = 2;
    } else {
        phi_v0 = 1;
    }
    if (temp_a2 != 0) {
        phi_v1_6 = 1;
    } else {
        phi_v1_6 = 2;
    }
    sp50 = (0x800 / phi_v1_6) * phi_v0;
    phi_t0 = 0;
    phi_t3 = 0;
    if (temp_t1 != 0) {
        if (phi_v1_7 != 0) {
            phi_t3 = 0x1000000;
        } else {
            phi_t3 = 0x2000000;
        }
    }
    phi_a0 = 0;
    if (temp_t1 != 0) {
        if (phi_v1_7 != 0) {
            phi_t0 = 0x3000000;
        } else {
            phi_t0 = 0x2000000;
        }
    }
    arg0->unk_0 = (s8) arg1;
    if (arg4 == 0) {
        phi_a0 = 0x10;
    }
    phi_v1_8 = 2;
    phi_v0_2 = 0;
    phi_v1_10 = 2;
    phi_v1_11 = 2;
    phi_v1_12 = 2;
    if (sp64 == 0) {
        phi_v0_2 = 0x40;
    }
    if (temp_a3 != 0) {
        phi_v1_8 = 3;
    }
    temp_t6 = phi_v1_8 | 0x300C | phi_v0_2 | phi_a0;
    arg0->unk_4 = temp_t6;
    phi_v1_10 = 1;
    phi_v1_11 = 1;
    phi_v1_12 = 1;
    if (sp5C != 0) {
        arg0->unk_4 = (s32) (temp_t6 | 0x100);
    } else if ((sp58 | phi_v1_9) != 0) {
        arg0->unk_4 = (s32) (arg0->unk_4 | 0x300);
    } else if (arg4 != 0) {
        arg0->unk_4 = (s32) (arg0->unk_4 | 0x200);
    } else {
        arg0->unk_4 = (s32) arg0->unk_4;
    }
    if (sp68 != 0) {

    }
    temp_v0 = (arg2 * 0x1C) + &D_801DF0C0;
    arg0->unk_8 = (s32) (phi_v1_10 * arg7);
    if (arg2 < 3) {
        arg0->unk_C = (s32) temp_v0->unk_0;
        arg0->unk_10 = (s32) temp_v0->unk_4;
        arg0->unk_14 = (s32) temp_v0->unk_8;
        arg0->unk_18 = (s32) temp_v0->unk_C;
        arg0->unk_1C = (s32) temp_v0->unk_10;
        arg0->unk_30 = (s32) temp_v0->unk_14;
        arg0->unk_44 = (s32) temp_v0->unk_14;
        arg0->unk_34 = (s32) temp_v0->unk_18;
        arg0->unk_48 = (s32) temp_v0->unk_18;
    } else {
        sp24 = temp_a2;
        sp48 = phi_t0;
        sp4C = phi_t3;
        __assert("../z_vimode.c", 0xD8U);
    }
    arg0->unk_1C = (s32) (arg0->unk_1C + ((arg9 << 0x10) + argA));
    temp_v0_2 = (argB << 0x10) + (s16) argC;
    arg0->unk_30 = (s32) (arg0->unk_30 + temp_v0_2);
    arg0->unk_44 = (s32) (arg0->unk_44 + temp_v0_2);
    if (sp64 != 0) {
        arg0->unk_10 = (s32) (arg0->unk_10 + 1);
        if (arg2 == 2) {
            arg0->unk_14 = (s32) (arg0->unk_14 + 0x40001);
            arg0->unk_18 = (s32) (arg0->unk_18 + 0xFFFCFFFE);
        }
    } else {
        arg0->unk_30 = (s32) (arg0->unk_30 + 0xFFFDFFFE);
        if (arg2 == 2) {
            arg0->unk_34 = (s32) (arg0->unk_34 + 0xFFFCFFFE);
        } else if (arg2 == 0) {
            arg0->unk_48 = (s32) (arg0->unk_48 + 0x2FFFE);
        }
    }
    arg0->unk_20 = 0x400;
    arg0->unk_24 = 0;
    if (sp20 != 0) {

    }
    arg0->unk_28 = (s32) (phi_v1_11 * arg7 * 2);
    if (sp20 != 0) {
        phi_v0_3 = 1;
    } else {
        phi_v0_3 = 2;
    }
    if ((arg3 != 0) != 0) {

    }
    arg0->unk_3C = (s32) (phi_v1_12 * arg7 * 2 * phi_v0_3);
    arg0->unk_2C = (s32) (sp50 | phi_t3);
    arg0->unk_38 = 2;
    arg0->unk_4C = 2;
    arg0->unk_40 = (s32) (sp50 | phi_t0);
}

void func_80140730(OSViMode *arg0) {
    GameInfo *temp_v1;
    s16 temp_a1;

    gGameInfo->data[144] = (s16) arg0[1].comRegs.leap;
    gGameInfo->data[145] = (s16) arg0[1].comRegs.ctrl;
    gGameInfo->data[146] = (s16) arg0->unk_50;
    gGameInfo->data[147] = (s16) arg0[1].comRegs.hSync;
    gGameInfo->data[148] = (s16) arg0[1].comRegs.vSync;
    gGameInfo->data[149] = (s16) arg0[1].comRegs.burst;
    gGameInfo->data[150] = (s16) arg0[1].comRegs.width;
    temp_v1 = gGameInfo;
    if (temp_v1->data[154] == 1) {
        temp_v1->data[154] = 0;
        temp_a1 = gGameInfo->data[155];
        if (temp_a1 != 1) {
            if (temp_a1 != 2) {
                func_80140260(arg0);
                /* Duplicate return node #7. Try simplifying control flow for better match */
                return;
            }
            func_80140260(&osViModeFpalLan1);
            return;
        }
        func_80140260(&osViModePalLan1);
    }
}

void func_80140810(void *arg0) {
    GameInfo *temp_v0;
    s16 temp_v1;

    temp_v0 = gGameInfo;
    temp_v1 = temp_v0->data[145];
    if ((temp_v1 & ~3) == 1) {
        temp_v0->data[145] = temp_v1 + 4;
    }
    arg0->unk_68 = (s32) gGameInfo->data[144];
    arg0->unk_54 = (s32) (gGameInfo->data[145] & ~3);
    arg0->unk_50 = (s32) gGameInfo->data[146];
    arg0->unk_64 = (s32) gGameInfo->data[147];
    arg0->unk_60 = (s32) gGameInfo->data[148];
    arg0->unk_5C = (s32) gGameInfo->data[149];
    arg0->unk_58 = (s32) gGameInfo->data[150];
}

void func_80140898(void *arg0) {
    arg0->unk_68 = 0;
    arg0->unk_54 = 0x140;
    arg0->unk_50 = 0xF0;
    arg0->unk_5C = 0;
    arg0->unk_58 = 0;
    arg0->unk_64 = 0;
    arg0->unk_60 = 0;
    arg0->unk_80 = 0x42;
    arg0->unk_7C = 1;
    arg0->unk_78 = 1;
    arg0->unk_74 = 0;
    arg0->unk_70 = 1;
    arg0->unk_6C = (u32) osTvType;
    func_80140730();
}

void func_80140900(void *arg0) {

}

void func_8014090C(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;
    s32 phi_v0_4;
    s32 phi_v0_5;
    s32 phi_v0_6;

    temp_v0 = arg0->unk_4;
    phi_v0_6 = temp_v0;
    if ((arg1 & 1) != 0) {
        phi_v0_6 = temp_v0 | 8;
    }
    phi_v0_5 = phi_v0_6;
    if ((arg1 & 2) != 0) {
        phi_v0_5 = phi_v0_6 & ~8;
    }
    phi_v0_4 = phi_v0_5;
    if ((arg1 & 4) != 0) {
        phi_v0_4 = phi_v0_5 | 4;
    }
    phi_v0_3 = phi_v0_4;
    if ((arg1 & 8) != 0) {
        phi_v0_3 = phi_v0_4 & ~4;
    }
    phi_v0_2 = phi_v0_3;
    if ((arg1 & 0x10) != 0) {
        phi_v0_2 = phi_v0_3 | 0x10;
    }
    phi_v0 = phi_v0_2;
    if ((arg1 & 0x20) != 0) {
        phi_v0 = phi_v0_2 & ~0x10;
    }
    arg0->unk_4 = phi_v0;
}

void func_80140970(void *arg0, u16 *arg1) {
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_4;
    u16 temp_v0_2;
    u16 phi_v0;
    u16 phi_v0_2;
    u16 phi_v0_3;
    u16 phi_v0_4;
    u16 phi_v0_5;
    u16 phi_v0_6;
    u16 phi_v0_7;
    u16 phi_v0_8;
    u16 phi_v0_9;
    u16 phi_v1;
    u16 phi_v1_2;
    s32 phi_v0_10;

    func_80140810(arg0);
    temp_v0 = arg0->unk_68;
    if ((temp_v0 == 1) || (temp_v0 == 2) || (temp_v0 == 3)) {
        gScreenWidth = arg0->unk_54;
        gScreenHeight = arg0->unk_50;
        temp_v0_2 = *arg1;
        phi_v0 = temp_v0_2;
        if (~(temp_v0_2 | ~0x1009) == 0) {
            arg1 = arg1;
            func_80140898(arg0);
            phi_v0 = *arg1;
        }
        phi_v0_2 = phi_v0;
        phi_v0_5 = phi_v0;
        if (~(phi_v0 | ~8) == 0) {
            if (~(phi_v0 | ~0x800) == 0) {
                arg0->unk_64 = (s32) (arg0->unk_64 - 1);
                phi_v0_2 = *arg1;
            }
            phi_v0_3 = phi_v0_2;
            if (~(phi_v0_2 | ~0x400) == 0) {
                arg0->unk_64 = (s32) (arg0->unk_64 + 1);
                phi_v0_3 = *arg1;
            }
            phi_v0_4 = phi_v0_3;
            if (~(phi_v0_3 | ~0x200) == 0) {
                arg0->unk_5C = (s32) (arg0->unk_5C - 1);
                phi_v0_4 = *arg1;
            }
            phi_v0_5 = phi_v0_4;
            if (~(phi_v0_4 | ~0x100) == 0) {
                arg0->unk_5C = (s32) (arg0->unk_5C + 1);
                phi_v0_5 = *arg1;
            }
        }
        phi_v0_6 = phi_v0_5;
        phi_v0_9 = phi_v0_5;
        if (~(phi_v0_5 | ~1) == 0) {
            if (~(phi_v0_5 | ~0x800) == 0) {
                arg0->unk_60 = (s32) (arg0->unk_60 - 1);
                phi_v0_6 = *arg1;
            }
            phi_v0_7 = phi_v0_6;
            if (~(phi_v0_6 | ~0x400) == 0) {
                arg0->unk_60 = (s32) (arg0->unk_60 + 1);
                phi_v0_7 = *arg1;
            }
            phi_v0_8 = phi_v0_7;
            if (~(phi_v0_7 | ~0x200) == 0) {
                arg0->unk_58 = (s32) (arg0->unk_58 - 1);
                phi_v0_8 = *arg1;
            }
            phi_v0_9 = phi_v0_8;
            if (~(phi_v0_8 | ~0x100) == 0) {
                arg0->unk_58 = (s32) (arg0->unk_58 + 1);
                phi_v0_9 = *arg1;
            }
        }
        if (~(phi_v0_9 | ~4) == 0) {
            if (~(arg1[6] | ~0x800) == 0) {
                arg0->unk_70 = (s32) (arg0->unk_70 == 0);
            }
            phi_v1 = arg1[6];
            if (~(arg1[6] | ~0x400) == 0) {
                arg0->unk_74 = (s32) (arg0->unk_74 == 0);
                phi_v1 = arg1[6];
            }
            phi_v1_2 = phi_v1;
            if (~(phi_v1 | ~0x200) == 0) {
                arg0->unk_78 = (s32) (arg0->unk_78 == 0);
                phi_v1_2 = arg1[6];
            }
            if (~(phi_v1_2 | ~0x100) == 0) {
                arg0->unk_7C = (s32) (arg0->unk_7C == 0);
            }
        }
        if (arg0->unk_68 >= 2) {
            if (arg0->unk_5C < -0x10) {
                arg0->unk_5C = -0x10;
            }
            if (arg0->unk_64 < -0x32) {
                arg0->unk_64 = -0x32;
            }
            if (arg0->unk_58 >= 0x11) {
                arg0->unk_58 = 0x10;
            }
            temp_v0_3 = arg0->unk_60;
            phi_v0_10 = temp_v0_3;
            if (temp_v0_3 >= 0x33) {
                arg0->unk_60 = 0x32;
                phi_v0_10 = 0x32;
            }
        } else {
            if (arg0->unk_5C < 0) {
                arg0->unk_5C = 0;
            }
            if (arg0->unk_64 < 0) {
                arg0->unk_64 = 0;
            }
            if (arg0->unk_58 > 0) {
                arg0->unk_58 = 0;
            }
            temp_v0_4 = arg0->unk_60;
            phi_v0_10 = temp_v0_4;
            if (temp_v0_4 > 0) {
                arg0->unk_60 = 0;
                phi_v0_10 = 0;
            }
        }
        func_8014026C(arg0, 0x1C, (s32) osTvType, arg0->unk_70, arg0->unk_74, arg0->unk_78, arg0->unk_7C, arg0->unk_54, arg0->unk_50, (s16) arg0->unk_5C, arg0->unk_58, arg0->unk_64, phi_v0_10);
        func_8014090C(arg0, arg0->unk_80);
        if (arg0->unk_68 == 3) {
            func_80140260(&osViModeNtscLan1);
            func_80140260((OSViMode *) arg0);
            arg0->unk_68 = 2;
        }
    }
    func_80140730((OSViMode *) arg0);
}

void func_80140CE0(void *arg0) {
    arg0->unk_0 = 0;
    arg0->unk_4 = 0;
    arg0->unk_8 = 0xFF;
    arg0->unk_9 = 0xFF;
    arg0->unk_A = 0xFF;
    arg0->unk_B = 0xFF;
}

void func_80140D04(void *arg0) {

}

void func_80140D10(void *arg0, Gfx **gfx, u32 arg2) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    s32 temp_a3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    Gfx *phi_v0;
    Gfx *phi_v0_2;

    temp_v0 = *gfx;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0->words.w1 = 0;
    temp_v0_2 = &temp_v0[1];
    temp_v0_2->words.w1 = -1;
    temp_v0_2->words.w0 = 0xEE000000;
    temp_v0_3 = &temp_v0_2[1];
    phi_v0 = temp_v0_3;
    if (arg0->unk_4 == 1) {
        temp_v0_3->words.w1 = (u32) &D_0E0001C8;
        temp_v0_3->words.w0 = 0xDE000000;
        phi_v0 = &temp_v0_3[1];
    }
    temp_a3 = arg0->unk_0;
    phi_v0_2 = phi_v0;
    if (temp_a3 != 1) {
        if (temp_a3 != 2) {
            if (temp_a3 != 3) {
                if (temp_a3 != 4) {

                } else {
                    phi_v0->words.w0 = 0xF8000000;
                    temp_v0_4 = phi_v0 + 8;
                    phi_v0->words.w1 = arg0->unk_8;
                    temp_v0_4->unk_4 = &D_801C5DE0;
                    temp_v0_4->unk_0 = 0xDE000000U;
                    phi_v0_2 = temp_v0_4 + 8;
                }
            } else {
                phi_v0->words.w0 = 0xF9000000;
                temp_v0_5 = phi_v0 + 8;
                phi_v0->words.w1 = arg0->unk_8;
                temp_v0_5->unk_4 = &D_801C5DD0;
                temp_v0_5->unk_0 = 0xDE000000U;
                phi_v0_2 = temp_v0_5 + 8;
            }
        } else {
            phi_v0->words.w0 = 0xFA000000;
            temp_v0_6 = phi_v0 + 8;
            phi_v0->words.w1 = arg0->unk_8;
            temp_v0_6->unk_4 = &D_801C5E00;
            temp_v0_6->unk_0 = 0xDE000000U;
            phi_v0_2 = temp_v0_6 + 8;
        }
    } else {
        phi_v0->words.w0 = 0xDE000000;
        phi_v0->words.w1 = &D_801C5DF0;
        phi_v0_2 = phi_v0 + 8;
    }
    phi_v0_2->words.w0 = 0xE7000000;
    phi_v0_2->words.w1 = 0;
    *gfx = phi_v0_2 + 8;
}
