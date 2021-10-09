struct _mips2c_stack_EnDai_Destroy {};              /* size 0x0 */

struct _mips2c_stack_EnDai_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnDai_Init {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnDai_Update {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B3DFF0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B3E168 {
    /* 0x00 */ char pad0[0x74];
    /* 0x74 */ s32 sp74;                            /* inferred */
    /* 0x78 */ char pad78[0x8];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80B3E460 {};              /* size 0x0 */

struct _mips2c_stack_func_80B3E5B4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B3E5DC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B3E69C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B3E7C8 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B3E834 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B3E8BC {};              /* size 0x0 */

struct _mips2c_stack_func_80B3E96C {
    /* 0x00 */ char pad0[0x50];
    /* 0x50 */ ?32 sp50;                            /* inferred */
    /* 0x54 */ ?32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ ?32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ ?32 sp70;                            /* inferred */
    /* 0x74 */ ? sp74;                              /* inferred */
    /* 0x74 */ char pad74[0xC];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80B3EC10 {};              /* size 0x0 */

struct _mips2c_stack_func_80B3EC84 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B3ED88 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B3EE8C {
    /* 0x00 */ char pad0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B3EEDC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B3EF90 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B3F00C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B3F044 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ char pad24[0x4];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ u32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B3F598 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B3F614 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad24[0x40];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad64[0x2];
    /* 0x66 */ s16 sp66;                            /* inferred */
    /* 0x68 */ char pad68[0x8];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80B3F6EC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B3F78C {
    /* 0x00 */ char pad0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad48[0x10];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80B3F920 {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ Gfx *sp48;                           /* inferred */
    /* 0x4C */ char pad4C[0x10];                    /* maybe part of sp48[5]? */
    /* 0x5C */ Gfx *sp5C;                           /* inferred */
    /* 0x60 */ Gfx *sp60;                           /* inferred */
    /* 0x64 */ char pad64[0xC];
};                                                  /* size = 0x70 */

u8 *func_80B3DFF0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, ?32 arg4, s32 arg7, ?32 argA, f32 argB, s32 argC, s32, f32, f32, s32); /* static */
void func_80B3E168(void *arg0, GraphicsContext **arg1); /* static */
s32 func_80B3E460(EnDai *arg0);                     /* static */
? func_80B3E5B4(GraphicsContext **arg0, GlobalContext *); /* static */
s32 func_80B3E5DC(Actor *arg0, s32 arg1, GlobalContext *); /* static */
s32 func_80B3E69C(EnDai *arg0, GlobalContext *arg1); /* static */
s32 func_80B3E7C8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B3E834(EnDai *arg0);                    /* static */
s16 func_80B3E8BC(Actor *arg0, u8 arg1);            /* static */
? func_80B3E96C(Actor *arg0, GlobalContext *arg1);  /* static */
void func_80B3EC10(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, void *arg9, void *); /* static */
? func_80B3EC84(void *arg0);                        /* static */
? func_80B3ED88(void *arg0);                        /* static */
void func_80B3EE8C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B3F044(Actor *arg0, GlobalContext *arg1); /* static */
? func_80B3F598(s32 arg0, s32 arg1, s32 *arg2, ? arg3, void *arg5); /* static */
void func_80B3F614(s32 arg0, s32 arg1, ? arg2, ? arg3, void *arg4); /* static */
void func_80B3F6EC(s32 arg0, s32 arg1, void *arg2, ? arg3); /* static */
void func_80B3F78C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B3F920(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_06000230;
extern ? D_060002E8;
extern ? D_0600C538;
extern FlexSkeletonHeader D_060130D0;
static ? D_80B3FBF0;                                /* unable to generate initializer */
static ActorAnimationEntryS D_80B3FBFC[9] = {
    {(AnimationHeader *)0x60079E4, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60079E4, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6007354, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6000CEC, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x60069DC, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x600563C, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600563C, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6002E58, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6006590, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
};
static s32 D_80B3FC8C[10] = {
    0x100060E,
    0xC900C12,
    0x10005520,
    0x110E0C,
    0x910C0F0C,
    0x920C0F0C,
    0x930C1211,
    0x5520100E,
    0xC940C12,
    0x10000000,
};
static ? D_80B3FCB4;                                /* unable to generate initializer */
static ? D_80B3FCE4;                                /* unable to generate initializer */
static ? D_80B3FD14;                                /* unable to generate initializer */
static ? D_80B3FD2C;                                /* unable to generate initializer */
static ? D_80B3FD4C;                                /* unable to generate initializer */
static s16 D_80B3FD6C[8] = {1, 1, 1, 2, 2, 2, 3, 3};
static ? D_80B3FD7C;                                /* unable to generate initializer */
static ? D_80B3FDE8;                                /* unable to generate initializer */
static ? D_80B3FDF4;                                /* unable to generate initializer */
static s16 D_80B3FE00[4] = {1, 2, 3, 0};
static ? D_80B3FE08;                                /* unable to generate initializer */
static ? D_80B3FE38;                                /* unable to generate initializer */
static Vec3f D_80B3FE4C;                            /* type too large by 8; unable to generate initializer */
static f32 D_80B3FE54 = 0.0f;
static ? D_80B3FE58;                                /* unable to generate initializer */
static ? D_80B3FE70;                                /* unable to generate initializer */

u8 *func_80B3DFF0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, ?32 arg4, s32 arg7, ?32 argA, f32 argB, s32 argC) {
    f32 temp_f2;
    s32 temp_v0;
    u32 temp_t0;
    u32 temp_t1;
    u8 *phi_a0;
    s32 phi_v0;

    phi_a0 = arg0;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (*phi_a0 == 0) {
        *phi_a0 = 1;
        arg0 = phi_a0;
        temp_f2 = (f32) argC / 3.0f;
        temp_t0 = (u32) ((Rand_ZeroOne() * (2.0f * temp_f2)) + temp_f2);
        temp_t1 = temp_t0;
        arg0->unk1 = (s8) temp_t0;
        arg0->unk2 = (s8) temp_t1;
        arg0->unk10 = (s32) arg1.unk0;
        arg0->unk14 = (s32) arg1.unk4;
        arg0->unk18 = (s32) arg1.unk8;
        arg0->unk1C = (s32) arg4.unk0;
        arg0->unk20 = (s32) arg4.unk4;
        arg0->unk24 = (s32) arg4.unk8;
        arg0->unk28 = (s32) arg7.unk0;
        arg0->unk2C = (s32) arg7.unk4;
        arg0->unk30 = (s32) arg7.unk8;
        arg0->unk34 = argA;
        arg0->unk38 = argB;
        return arg0;
    }
    phi_a0 += 0x3C;
    if (temp_v0 == 0x20) {
        return NULL;
    }
    goto loop_1;
}

void func_80B3E168(void *arg0, GraphicsContext **arg1) {
    s32 sp74;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f16;
    s32 temp_f4;
    s32 temp_s3;
    s32 temp_v1_2;
    u8 temp_t3;
    void *phi_s2;
    f32 phi_f16;
    s32 phi_t7;
    s32 phi_s3;

    sp74 = 0;
    temp_a0 = *arg1;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    phi_s2 = arg0;
    phi_s3 = 0;
    do {
        if (phi_s2->unk0 == 1) {
            temp_v0 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0 + 8;
            temp_v0->words.w1 = 0;
            temp_v0->words.w0 = 0xE7000000;
            if (sp74 == 0) {
                sp74 = 1;
                temp_v0_2 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = (u32) &D_06000230;
                temp_v0_2->words.w0 = 0xDE000000;
            }
            SysMatrix_StatePush();
            temp_t3 = phi_s2->unk1;
            temp_f16 = (f32) temp_t3;
            phi_f16 = temp_f16;
            if ((s32) temp_t3 < 0) {
                phi_f16 = temp_f16 + 4294967296.0f;
            }
            temp_f0 = ((f32) phi_s2->unk2 / phi_f16) * 255.0f;
            temp_v1 = temp_s0->polyXlu.p;
            temp_f4 = (s32) temp_f0;
            temp_s0->polyXlu.p = temp_v1 + 8;
            temp_v1->words.w0 = 0xFA000000;
            if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
                if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
                    phi_t7 = (s32) (temp_f0 - 2.1474836e9f) | 0x80000000;
                } else {
                    goto block_9;
                }
            } else {
                phi_t7 = temp_f4;
                if (temp_f4 < 0) {
block_9:
                    phi_t7 = -1;
                }
            }
            temp_v1->words.w1 = (phi_t7 & 0xFF) | 0xC3E1EB00;
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDB060020;
            temp_v1_2 = phi_s2->unk2 + (phi_s3 * 3);
            temp_v0_3->words.w1 = Gfx_TwoTexScroll(*arg1, 0, temp_v1_2 * 3, temp_v1_2 * 0xF, 0x20, 0x40, 1, 0U, 0U, 0x20, 0x20);
            SysMatrix_InsertTranslation(phi_s2->unk10, phi_s2->unk14, phi_s2->unk18, 0);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            temp_f12 = phi_s2->unk34;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDA380003;
            temp_v0_4->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w1 = (u32) &D_060002E8;
            temp_v0_5->words.w0 = 0xDE000000;
            SysMatrix_StatePop();
        }
        temp_s3 = phi_s3 + 1;
        phi_s2 += 0x3C;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x20);
}

s32 func_80B3E460(EnDai *arg0) {
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f18;
    f32 temp_f18_2;
    s32 temp_v1;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a2;
    u8 temp_a2_2;
    void *temp_v0;
    void *phi_v0;
    s32 phi_v1;
    s32 phi_a1;
    s32 phi_a1_2;
    s32 phi_a1_3;

    phi_v0 = arg0 + 0x2EC;
    phi_v1 = 0;
    phi_a1_3 = 0;
    do {
        temp_a0 = phi_v0->unk0;
        temp_v1 = phi_v1 + 2;
        phi_v1 = temp_v1;
        phi_a1_2 = phi_a1_3;
        if ((temp_a0 != 0) && (temp_a2 = phi_v0->unk2, (temp_a2 != 0))) {
            temp_f18 = phi_v0->unk28;
            temp_f14 = phi_v0->unk2C;
            temp_f10 = phi_v0->unk30;
            phi_v0->unk10 = (f32) (phi_v0->unk10 + temp_f18);
            phi_v0->unk14 = (f32) (phi_v0->unk14 + temp_f14);
            phi_v0->unk2 = (u8) (temp_a2 - 1);
            phi_v0->unk18 = (f32) (phi_v0->unk18 + temp_f10);
            phi_v0->unk28 = (f32) (temp_f18 + phi_v0->unk1C);
            phi_v0->unk2C = (f32) (temp_f14 + phi_v0->unk20);
            phi_v0->unk30 = (f32) (temp_f10 + phi_v0->unk24);
            phi_v0->unk34 = (f32) (phi_v0->unk34 + phi_v0->unk38);
            phi_a1_2 = phi_a1_3 + 1;
        } else if (temp_a0 != 0) {
            phi_v0->unk0 = 0U;
        }
        temp_a0_2 = phi_v0->unk3C;
        temp_v0 = phi_v0 + 0x3C;
        phi_a1 = phi_a1_2;
        if ((temp_a0_2 != 0) && (temp_a2_2 = temp_v0->unk2, (temp_a2_2 != 0))) {
            temp_f18_2 = temp_v0->unk28;
            temp_f14_2 = temp_v0->unk2C;
            temp_f10_2 = temp_v0->unk30;
            temp_v0->unk10 = (f32) (temp_v0->unk10 + temp_f18_2);
            temp_v0->unk14 = (f32) (temp_v0->unk14 + temp_f14_2);
            temp_v0->unk2 = (u8) (temp_a2_2 - 1);
            temp_v0->unk18 = (f32) (temp_v0->unk18 + temp_f10_2);
            temp_v0->unk28 = (f32) (temp_f18_2 + temp_v0->unk1C);
            temp_v0->unk2C = (f32) (temp_f14_2 + temp_v0->unk20);
            temp_v0->unk30 = (f32) (temp_f10_2 + temp_v0->unk24);
            temp_v0->unk34 = (f32) (temp_v0->unk34 + temp_v0->unk38);
            phi_a1 = phi_a1_2 + 1;
        } else if (temp_a0_2 != 0) {
            temp_v0->unk0 = 0;
        }
        phi_v0 = temp_v0 + 0x3C;
        phi_a1_3 = phi_a1;
    } while (temp_v1 != 0x20);
    return phi_a1;
}

? func_80B3E5B4(GraphicsContext **arg0) {
    func_80B3E168(arg0 + 0x2EC, arg0);
    return 0;
}

s32 func_80B3E5DC(Actor *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v1;
    s32 phi_t0;

    phi_v1 = 0;
    phi_t0 = 0;
    if ((arg1 != 0) && (arg1 != 1)) {
        if ((arg1 != 5) && (arg1 != 6)) {
            if (arg1 != arg0->unkA70) {
                goto block_12;
            }
        } else {
            temp_v0 = arg0->unkA70;
            if ((temp_v0 != 5) && (temp_v0 != 6)) {
                goto block_12;
            }
        }
    } else {
        temp_v0_2 = arg0->unkA70;
        if ((temp_v0_2 != 0) && (temp_v0_2 != 1)) {
block_12:
            phi_v1 = 1;
        }
    }
    if (phi_v1 != 0) {
        arg0->unkA70 = arg1;
        phi_t0 = func_8013BC6C(arg0 + 0x144, D_80B3FBFC, arg1);
    }
    return phi_t0;
}

s32 func_80B3E69C(EnDai *arg0, GlobalContext *arg1) {
    u16 temp_t4;
    u16 temp_t5;
    u16 temp_t6;
    u16 temp_v0;
    s32 phi_v1;

    phi_v1 = 0;
    if ((arg1->csCtx.state != 0) && (arg1->sceneNum == 0x5C) && (arg1->csCtx.unk_12 == 0) && ((gSaveContext.weekEventReg[30] & 1) == 0)) {
        if ((arg0->unk_1CE & 0x10) == 0) {
            arg0 = arg0;
            Actor_SetSwitchFlag(arg1, 0x14);
            arg0->unk_1CC = 0xFF;
            temp_t5 = arg0->unk_1CE | 0x90;
            temp_t6 = temp_t5 & 0xFEDF;
            arg0->unk_1CE = temp_t5;
            arg0->unk_1CE = temp_t6;
            arg0->unk_1DC = 0;
            arg0->unk_1CD = 0;
            arg0->unk_1F0.x = D_80B3FBF0.unk0;
            arg0->unk_1F0.y = D_80B3FBF0.unk4;
            arg0->unk_1F0.z = D_80B3FBF0.unk8;
            arg0->unk_1FC.x = D_80B3FBF0.unk0;
            arg0->unk_1FC.y = D_80B3FBF0.unk4;
            arg0->unk_1FC.z = D_80B3FBF0.unk8;
        }
        phi_v1 = 1;
    } else {
        temp_v0 = arg0->unk_1CE;
        temp_t4 = temp_v0 & 0xFFEF;
        if ((temp_v0 & 0x10) != 0) {
            arg0->unk_1CE = temp_t4;
            arg0->unk_1CE = temp_t4 | 0x200;
            gSaveContext.weekEventReg[30] |= 1;
            arg0->actionFunc = func_80B3F00C;
        }
    }
    return phi_v1;
}

s32 func_80B3E7C8(Actor *arg0, GlobalContext *arg1) {
    s32 sp1C;
    s32 phi_v1;

    phi_v1 = 0;
    if ((arg0->unk1CE & 7) != 0) {
        sp1C = 0;
        phi_v1 = sp1C;
        if (func_800B84D0(arg0, arg1) != 0) {
            func_8013AED4(arg0 + 0x1CE, 0U, 7U);
            arg0->unk188 = func_80B3EF90;
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

void func_80B3E834(EnDai *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    if ((arg0->unk_1CE & 0x80) != 0) {
        temp_v0 = arg0->unk_1D8;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk_1D8 = temp_v0 - 1;
            phi_v1 = arg0->unk_1D8;
        }
        if (phi_v1 == 0) {
            arg0->unk_1D6 += 1;
            if ((s32) arg0->unk_1D6 >= 5) {
                arg0 = arg0;
                arg0->unk_1D8 = Rand_S16Offset(0x14, 0x14);
                arg0->unk_1D6 = 0;
            }
        }
    }
}

s16 func_80B3E8BC(Actor *arg0, u8 arg1) {
    f32 temp_f0;
    s32 temp_a1;
    s32 temp_v1;
    s32 phi_v1;
    s32 phi_v0;
    f32 *phi_a2;
    s32 phi_a1;
    s32 phi_v1_2;

    phi_v0 = 9;
    if (arg1 == 3) {
        phi_v1 = 0;
        goto block_5;
    }
    phi_v0 = 0xC;
    if (arg1 == 4) {
        phi_v1 = 9;
block_5:
        temp_a1 = phi_v1 * 4;
        phi_a1 = temp_a1;
        phi_v1_2 = phi_v1;
        if (phi_v1 < phi_v0) {
            temp_f0 = arg0->unk15C;
            phi_a2 = temp_a1 + &D_80B3FCB4;
loop_7:
            phi_a1 += 4;
            if ((*phi_a2 <= temp_f0) && (temp_f0 <= *(&D_80B3FCE4 + phi_a1))) {
                return *(&D_80B3FD14 + (phi_v1_2 * 2));
            }
            temp_v1 = phi_v1_2 + 1;
            phi_a2 += 4;
            phi_v1_2 = temp_v1;
            if (temp_v1 >= phi_v0) {
                /* Duplicate return node #11. Try simplifying control flow for better match */
                return arg0->unk1D6;
            }
            goto loop_7;
        }
        return arg0->unk1D6;
    }
    return 2;
}

? func_80B3E96C(Actor *arg0, GlobalContext *arg1) {
    ? sp74;
    ?32 sp70;
    f32 sp6C;
    ?32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    ?32 sp54;
    ?32 sp50;
    f32 temp_f6;
    s16 temp_v1;
    s16 phi_v0;

    temp_v1 = arg0->unk1DA;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        arg0->unk1DA = (s16) (temp_v1 - 1);
        phi_v0 = arg0->unk1DA;
    }
    if (phi_v0 == 0) {
        if (arg0->unk1DC != 0) {
            if (func_801378B8(arg0 + 0x144, arg0->unk154) != 0) {
                goto block_7;
            }
            goto block_16;
        }
block_7:
        if (arg0->unk1DC != 0) {
            if (arg0->unk1DC != 1) {
                if (arg0->unk1DC != 2) {
                    if (arg0->unk1DC != 3) {

                    } else {
                        func_80B3E5DC(arg0, 1);
                        arg0->unk1F0 = (s32) D_80B3FBF0.unk0;
                        arg0->unk1F4 = (s32) D_80B3FBF0.unk4;
                        arg0->unk1F8 = (s32) D_80B3FBF0.unk8;
                        arg0->unk1FC = (s32) D_80B3FBF0.unk0;
                        arg0->unk200 = (s32) D_80B3FBF0.unk4;
                        arg0->unk1DC = 0;
                        arg0->unk204 = (s32) D_80B3FBF0.unk8;
                        arg0->unk1DA = Rand_S16Offset(0x14, 0x14);
                    }
                } else {
                    func_80B3E5DC(arg0, 4);
                    arg0->unk1DC = (s16) (arg0->unk1DC + 1);
                }
            } else {
                Audio_PlayActorSound2(arg0, 0x2922U);
                Actor_Spawn(arg1 + 0x1CA0, arg1, 0xBC, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0x1388, (s16) 0x708, (s16) 0x3E8, (s16) 0);
                func_80B3E5DC(arg0, 3);
                arg0->unk1DC = (s16) (arg0->unk1DC + 1);
            }
        } else {
            func_80B3E5DC(arg0, 2);
            arg0->unk1DC = (s16) (arg0->unk1DC + 1);
        }
    } else {
block_16:
        if (arg0->unk1DC == 2) {
            sp54 = 0;
            sp50 = 0;
            sp70 = 0;
            sp68 = 0;
            sp58 = 200.0f;
            sp6C = 6.0f;
            sp5C = Math_SinS(arg0->unk1D4) * 80.0f;
            temp_f6 = Math_CosS(arg0->unk1D4) * 80.0f;
            sp60 = -40.0f;
            sp64 = temp_f6;
            Lib_Vec3f_TranslateAndRotateY(arg0 + 0x1E4, arg0->unk1D4, (Vec3f *) &sp50, (Vec3f *) &sp74);
            func_80B3DFF0(arg0 + 0x2EC, subroutine_arg1, sp74.unk4, sp74.unk8, sp68.unk0, sp68.unk4, sp68.unk8, sp5C.unk0, sp5C.unk4, sp5C.unk8, 0.03f, 0.04f, 0x10);
        }
    }
    return 0;
}

void func_80B3EC10(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, void *arg9) {
    f32 temp_f0;

    temp_f0 = (arg8 - arg0) / (arg4 - arg0);
    arg9->unk0 = (f32) (((arg5 - arg1) * temp_f0) + arg1);
    arg9->unk4 = (f32) (((arg6 - arg2) * temp_f0) + arg2);
    arg9->unk8 = (f32) (((arg7 - arg3) * temp_f0) + arg3);
}

? func_80B3EC84(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_t0;
    s32 temp_v1;
    void *temp_v0;
    s16 *phi_v0;
    s32 phi_t0;
    ? phi_t1;

    phi_v0 = D_80B3FD6C;
    phi_t0 = 0;
    phi_t1 = 0;
loop_1:
    temp_v1 = phi_t0 * 4;
    if ((arg0->unk1DC == *phi_v0) && (temp_f12 = *(&D_80B3FD2C + temp_v1), temp_f0 = arg0->unk15C, (temp_f12 < temp_f0)) && (temp_f2 = *(&D_80B3FD4C + temp_v1), (temp_f0 <= temp_f2))) {
        temp_v0 = (phi_t0 * 0xC) + &D_80B3FD7C;
        func_80B3EC10(temp_f12, (bitwise f32) &D_80B3FD2C, subroutine_arg1, temp_v0->unk4, temp_v0->unk8, temp_f2, temp_v0->unkC, temp_v0->unk10, temp_v0->unk14, (bitwise void *) temp_f0, arg0 + 0x1F0);
        phi_t1 = 1;
    } else {
        temp_t0 = phi_t0 + 1;
        phi_v0 += 2;
        phi_t0 = temp_t0;
        if (temp_t0 != 8) {
            goto loop_1;
        }
    }
    return phi_t1;
}

? func_80B3ED88(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_t0;
    s32 temp_v1;
    void *temp_v0;
    s16 *phi_v0;
    s32 phi_t0;
    ? phi_t1;

    phi_v0 = D_80B3FE00;
    phi_t0 = 0;
    phi_t1 = 0;
loop_1:
    temp_v1 = phi_t0 * 4;
    if ((arg0->unk1DC == *phi_v0) && (temp_f12 = *(&D_80B3FDE8 + temp_v1), temp_f0 = arg0->unk15C, (temp_f12 < temp_f0)) && (temp_f2 = *(&D_80B3FDF4 + temp_v1), (temp_f0 <= temp_f2))) {
        temp_v0 = (phi_t0 * 0xC) + &D_80B3FE08;
        func_80B3EC10(temp_f12, (bitwise f32) &D_80B3FDE8, subroutine_arg1, temp_v0->unk4, temp_v0->unk8, temp_f2, temp_v0->unkC, temp_v0->unk10, temp_v0->unk14, (bitwise void *) temp_f0, arg0 + 0x1FC);
        phi_t1 = 1;
    } else {
        temp_t0 = phi_t0 + 1;
        phi_v0 += 2;
        phi_t0 = temp_t0;
        if (temp_t0 != 3) {
            goto loop_1;
        }
    }
    return phi_t1;
}

void func_80B3EE8C(Actor *arg0, GlobalContext *arg1) {
    s16 sp1E;
    s8 temp_a0;

    temp_a0 = arg0->cutscene;
    sp1E = (s16) temp_a0;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0, arg0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a0);
}

void func_80B3EEDC(EnDai *this, GlobalContext *globalCtx) {
    Actor *temp_v0;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    if ((temp_v0->unk14B == (GlobalContext *)1) && (globalCtx->msgCtx.unk1202A == 3) && (globalCtx->msgCtx.unk1202E == (GlobalContext *)1)) {
        func_80B3E5DC((Actor *) this, 1, (GlobalContext *)1);
        this->actionFunc = (void (*)(EnDai *, GlobalContext *)) func_80B3EE8C;
        return;
    }
    if ((temp_v0->unkA70 * 0x10) >= 0) {
        func_80B3E96C((Actor *) this, (GlobalContext *)1);
        this->unk_A6C = 0;
        return;
    }
    if (this->unk_A6C == 0) {
        play_sound(0x4807U);
        this->unk_A6C = 1;
    }
}

void func_80B3EF90(EnDai *this, GlobalContext *globalCtx) {
    if (func_8010BF58((Actor *) this, globalCtx, D_80B3FC8C, NULL, &this->unk_1D0) != 0) {
        func_8013AED4(&this->unk_1CE, 3U, 7U);
        this->unk_1D0 = 0;
        this->actionFunc = func_80B3F00C;
        return;
    }
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 4, 0x2AA8);
}

void func_80B3F00C(EnDai *this, GlobalContext *globalCtx) {
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.world.rot.y, 3, 0x2AA8);
}

void func_80B3F044(Actor *arg0, GlobalContext *arg1) {
    u32 sp2C;
    s32 sp28;
    Actor *sp20;
    Actor *temp_a0;
    f32 temp_f0;
    s32 temp_t7;
    u16 *temp_t9;
    u16 temp_v1;
    u32 temp_v0;
    u8 temp_v0_2;
    s16 phi_v0;

    sp2C = 0;
    if (func_800EE29C(arg1, 0x1D8U) != 0) {
        temp_v0 = func_800EE200(arg1, 0x1D8U);
        temp_t7 = temp_v0 * 4;
        sp2C = temp_v0;
        temp_t9 = (arg1 + temp_t7)->unk1F4C;
        temp_v1 = *temp_t9;
        if ((temp_v1 & 0xFF) != arg0->unk1CC) {
            sp28 = (s32) temp_v1;
            func_80B3E5DC(arg0, *(&D_80B3FE38 + (temp_v1 * 4)));
            if (temp_v1 != 1) {
                if (temp_v1 != 2) {
                    if (temp_v1 != 3) {

                    } else {
                        arg0->unk1CE = (u16) (arg0->unk1CE & 0xFF7F);
                    }
                } else {
                    sp28 = (s32) temp_v1;
                    Audio_PlayActorSound2(arg0, 0x2960U);
                }
            } else {
                arg0->unk1E0 = 0.0f;
            }
        }
        arg0->unk1CC = (u8) *temp_t9;
    }
    temp_v0_2 = arg0->unk1CC;
    if (temp_v0_2 != 1) {
        if (temp_v0_2 != 2) {
            if (temp_v0_2 != 3) {
                if (temp_v0_2 != 4) {

                } else {
                    temp_a0 = arg0 + 0x144;
                    sp20 = temp_a0;
                    if (func_801378B8((SkelAnime *) temp_a0, 30.0f) != 0) {
                        Audio_PlayActorSound2(arg0, 0x3907U);
                    }
                    if (func_801378B8((SkelAnime *) sp20, 35.0f) != 0) {
                        Audio_PlayActorSound2(arg0, 0x2961U);
                    }
                    phi_v0 = func_80B3E8BC(arg0, arg0->unk1CC);
                    goto block_31;
                }
            } else {
                if (func_801378B8((SkelAnime *) (arg0 + 0x144), 6.0f) != 0) {
                    Audio_PlayActorSound2(arg0, 0x39ADU);
                }
                phi_v0 = func_80B3E8BC(arg0, arg0->unk1CC);
                goto block_31;
            }
        } else {
            if (arg1->csCtx.frames == 0x168) {
                Audio_PlayActorSound2(arg0, 0x30FEU);
            }
            if (func_801378B8((SkelAnime *) (arg0 + 0x144), 43.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x2962U);
            }
            phi_v0 = func_80B3E8BC(arg0, arg0->unk1CC);
block_31:
            arg0->unk1D6 = phi_v0;
        }
    } else {
        arg0->unk1E0 = (f32) (arg0->unk1E0 + 1.0f);
        temp_f0 = arg0->unk1E0;
        if (temp_f0 < 30.0f) {
            arg0->unk1CD = (s8) (u32) ((temp_f0 / 30.0f) * 255.0f);
        } else {
            arg0->unk1CD = 0xFF;
        }
    }
    func_800EDF24(arg0, arg1, sp2C);
}

void EnDai_Init(EnDai *this, GlobalContext *globalCtx) {
    u16 temp_t7;
    EnDai *this = (EnDai *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 0.0f);
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_060130D0, NULL, this->jointTable, this->morphTable, 0x13);
    this->unk_A70 = -1;
    func_80B3E5DC((Actor *) this, 0);
    Actor_SetScale((Actor *) this, 0.2f);
    this->actor.targetMode = 0xA;
    this->unk_1F0.x = D_80B3FBF0.unk0;
    this->unk_1F0.y = D_80B3FBF0.unk4;
    this->unk_1F0.z = D_80B3FBF0.unk8;
    this->unk_1FC.x = D_80B3FBF0.unk0;
    this->unk_1FC.y = D_80B3FBF0.unk4;
    this->unk_1CE = 0;
    this->unk_1D6 = 0;
    this->unk_1FC.z = D_80B3FBF0.unk8;
    if ((gSaveContext.weekEventReg[33] & 0x80) != 0) {
        func_8013AED4(&this->unk_1CE, 3U, 7U);
        this->unk_1CE |= 0x80;
        this->unk_1CD = 0xFF;
        this->actionFunc = func_80B3F00C;
        return;
    }
    if ((gSaveContext.weekEventReg[30] & 1) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->unk_1CD = 0;
    temp_t7 = this->unk_1CE | 0x120;
    this->unk_1CE = temp_t7;
    this->actor.flags &= -2;
    this->unk_1CE = temp_t7 | 0x80;
    this->actionFunc = func_80B3EEDC;
}

void EnDai_Destroy(EnDai *this, GlobalContext *globalCtx) {
    EnDai *this = (EnDai *) thisx;

}

void EnDai_Update(EnDai *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    u16 temp_v0;
    EnDai *this = (EnDai *) thisx;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    if ((func_80B3E7C8((Actor *) this, globalCtx) == 0) && (func_80B3E69C(this, globalCtx) != 0)) {
        func_80B3F044((Actor *) this, globalCtx);
        SkelAnime_FrameUpdateMatrix(&this->skelAnime);
        func_80B3E834(this);
        func_80B3E460(this);
        return;
    }
    this->actionFunc(this, globalCtx);
    if ((sp2C->unkA70 * 0x10) >= 0) {
        SkelAnime_FrameUpdateMatrix(&this->skelAnime);
        func_80B3E834(this);
        temp_v0 = this->unk_1CE;
        if ((temp_v0 & 0x200) == 0) {
            func_8013C964((Actor *) this, globalCtx, 0.0f, 0.0f, 0, (s16) (temp_v0 & 7));
        }
        func_80B3E460(this);
    }
}

? func_80B3F598(s32 arg0, s32 arg1, s32 *arg2, ? arg3, void *arg5) {
    if ((arg5->unk1CE & 0x40) == 0) {
        *arg2 = 0;
    }
    if (arg1 == 0xB) {
        arg1 = arg1;
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg5 + 0x1E4);
    }
    if (arg1 == 0xA) {
        *arg2 = 0;
    }
    return 0;
}

void func_80B3F614(s32 arg0, s32 arg1, ? arg2, ? arg3, void *arg4) {
    ? sp64;
    ? sp24;
    GameInfo *temp_v0;

    if (arg1 != 0xA) {
        if (arg1 == 0xB) {
            temp_v0 = gGameInfo;
            D_80B3FE4C.x = (f32) temp_v0->data[1536];
            D_80B3FE54 = (f32) temp_v0->data[1537];
            D_80B3FE54 = (f32) temp_v0->data[1538];
            SysMatrix_MultiplyVector3fByState(&D_80B3FE4C, arg4 + 0x3C);
            Math_Vec3s_Copy(arg4 + 0x48, arg4 + 0x30);
            SysMatrix_CopyCurrentState((MtxF *) &sp24);
            func_8018219C((MtxF *) &sp24, (Vec3s *) &sp64, 0);
            arg4->unk1D4 = (s16) (sp66 - 0x4000);
            return;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return;
    }
    SysMatrix_CopyCurrentState(arg4 + 0x18C);
}

void func_80B3F6EC(s32 arg0, s32 arg1, void *arg2, ? arg3) {
    void *temp_a0;
    void *phi_a0;
    void *phi_a0_2;

    temp_a0 = arg2;
    phi_a0 = temp_a0;
    phi_a0_2 = temp_a0;
    if (arg1 != 2) {
        if (arg1 == 9) {
            if ((temp_a0->unk1CE & 0x100) != 0) {
                arg2 = temp_a0;
                func_80B3EC84(temp_a0);
                phi_a0 = arg2;
            }
            Matrix_Scale(phi_a0->unk1F0, phi_a0->unk1F4, phi_a0->unk1F8, 1);
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    if ((temp_a0->unk1CE & 0x100) != 0) {
        arg2 = temp_a0;
        func_80B3ED88(temp_a0);
        phi_a0_2 = arg2;
    }
    Matrix_Scale(phi_a0_2->unk1FC, phi_a0_2->unk200, phi_a0_2->unk204, 1);
}

void func_80B3F78C(Actor *arg0, GlobalContext *arg1) {
    Gfx *sp44;
    Gfx *sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_s0;

    if (arg1->actorCtx.unkB != 0) {
        arg0->unk1CE = (u16) (arg0->unk1CE | 0x40);
    } else {
        Actor_RecordUndrawnActor(arg1, arg0);
        arg0->unk1CE = (u16) (arg0->unk1CE & 0xFFBF);
    }
    func_8012C2DC(arg1->state.gfxCtx);
    temp_s0 = arg1->state.gfxCtx;
    Scene_SetRenderModeXlu(arg1, 2, 2U);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w1 = 0xFF;
    temp_v0->words.w0 = 0xFB000000;
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060020;
    sp44 = temp_v0_2;
    sp44->words.w1 = Lib_SegmentedToVirtual(*(&D_80B3FE58 + (arg0->unk1D6 * 4)));
    temp_s0->polyXlu.p = func_8013AB00(arg1, arg0->unk148, arg0->unk164, (s32) arg0->unk146, (void *) func_80B3F598, (void *) func_80B3F614, (void *) func_80B3F6EC, arg0, temp_s0->polyXlu.p);
    if ((arg0->unk1CE & 0x40) != 0) {
        SysMatrix_SetCurrentState(arg0 + 0x18C);
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDA380003;
        sp40 = temp_v0_3;
        sp40->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = (u32) &D_0600C538;
        temp_v0_4->words.w0 = 0xDE000000;
    }
    func_80B3E5B4((GraphicsContext **) arg0, arg1);
}

void func_80B3F920(Actor *arg0, GlobalContext *arg1) {
    Gfx *sp60;
    Gfx *sp5C;
    Gfx *sp48;
    Gfx *sp44;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_s0;
    GraphicsContext *temp_s0_2;

    arg0->unk1CE = (u16) (arg0->unk1CE | 0x40);
    if (arg0->unk1CD == 0xFF) {
        func_8012C28C(arg1->state.gfxCtx);
        temp_s0 = arg1->state.gfxCtx;
        Scene_SetRenderModeXlu(arg1, 0, 1U);
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        sp60 = temp_v0;
        sp60->words.w1 = Lib_SegmentedToVirtual(*(&D_80B3FE70 + (arg0->unk1D6 * 4)));
        temp_s0->polyOpa.p = func_8013AB00(arg1, arg0->unk148, arg0->unk164, (s32) arg0->unk146, (void *) func_80B3F598, (void *) func_80B3F614, (void *) func_80B3F6EC, arg0, temp_s0->polyOpa.p);
        SysMatrix_SetCurrentState(arg0 + 0x18C);
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDA380003;
        sp5C = temp_v0_2;
        sp5C->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = (u32) &D_0600C538;
        temp_v0_3->words.w0 = 0xDE000000;
    } else {
        func_8012C2DC(arg1->state.gfxCtx);
        temp_s0_2 = arg1->state.gfxCtx;
        Scene_SetRenderModeXlu(arg1, 2, 2U);
        temp_v0_4 = temp_s0_2->polyXlu.p;
        temp_s0_2->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xFB000000;
        temp_v0_4->words.w1 = (u32) arg0->unk1CD;
        temp_v0_5 = temp_s0_2->polyXlu.p;
        temp_s0_2->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDB060020;
        sp48 = temp_v0_5;
        sp48->words.w1 = Lib_SegmentedToVirtual(*(&D_80B3FE70 + (arg0->unk1D6 * 4)));
        temp_s0_2->polyXlu.p = func_8013AB00(arg1, arg0->unk148, arg0->unk164, (s32) arg0->unk146, (void *) func_80B3F598, (void *) func_80B3F614, (void *) func_80B3F6EC, arg0, temp_s0_2->polyXlu.p);
        SysMatrix_SetCurrentState(arg0 + 0x18C);
        temp_v0_6 = temp_s0_2->polyXlu.p;
        temp_s0_2->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDA380003;
        sp44 = temp_v0_6;
        sp44->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_7 = temp_s0_2->polyXlu.p;
        temp_s0_2->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w1 = (u32) &D_0600C538;
        temp_v0_7->words.w0 = 0xDE000000;
    }
    func_80B3E5B4((GraphicsContext **) arg0, arg1);
}

void EnDai_Draw(EnDai *this, GlobalContext *globalCtx) {
    u16 temp_v0;
    EnDai *this = (EnDai *) thisx;

    temp_v0 = this->unk_1CE;
    if ((temp_v0 & 0x200) == 0) {
        if ((temp_v0 & 0x20) != 0) {
            func_80B3F78C();
            return;
        }
        func_80B3F920();
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}
