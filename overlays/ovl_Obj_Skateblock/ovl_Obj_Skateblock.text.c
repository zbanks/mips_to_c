typedef struct ObjSkateblock {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ void (*actionFunc)(ObjSkateblock *, GlobalContext *);
    /* 0x160 */ char pad_160[0x60];                 /* maybe part of actionFunc[25]? */
    /* 0x1C0 */ u8 unk_1C0;                         /* inferred */
    /* 0x1C1 */ u8 unk_1C1;                         /* inferred */
    /* 0x1C2 */ char pad_1C2[0x2];                  /* maybe part of unk_1C1[3]? */
} ObjSkateblock;                                    /* size = 0x1C4 */

struct _mips2c_stack_ObjSkateblock_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjSkateblock_Draw {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0x8];                    /* maybe part of sp20[3]? */
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_ObjSkateblock_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjSkateblock_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A21150 {};              /* size 0x0 */

struct _mips2c_stack_func_80A211F4 {};              /* size 0x0 */

struct _mips2c_stack_func_80A212F0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A21370 {
    /* 0x00 */ char pad_0[0x70];
    /* 0x70 */ s32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0x14];                   /* maybe part of sp70[6]? */
    /* 0x88 */ s32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ s32 sp98;                            /* inferred */
    /* 0x9C */ char pad_9C[0xC];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_80A21548 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A216D4 {
    /* 0x00 */ char pad_0[0x96];
    /* 0x96 */ s16 sp96;                            /* inferred */
    /* 0x98 */ char pad_98[0x4];                    /* maybe part of sp96[3]? */
    /* 0x9C */ s32 sp9C;                            /* inferred */
    /* 0xA0 */ ? spA0;                              /* inferred */
    /* 0xA0 */ char pad_A0[0x4];
    /* 0xA4 */ ? spA4;                              /* inferred */
    /* 0xA4 */ char pad_A4[0xC];
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ char pad_B4[0x8];                    /* maybe part of spB0[3]? */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ f32 spDC;                            /* inferred */
    /* 0xE0 */ char pad_E0[0x4];
    /* 0xE4 */ f32 spE4;                            /* inferred */
    /* 0xE8 */ f32 spE8;                            /* inferred */
    /* 0xEC */ char pad_EC[0x4];
};                                                  /* size = 0xF0 */

struct _mips2c_stack_func_80A21934 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A21990 {
    /* 0x000 */ char pad_0[0xB4];
    /* 0x0B4 */ s32 spB4;                           /* inferred */
    /* 0x0B8 */ ? spB8;                             /* inferred */
    /* 0x0B8 */ char pad_B8[0x4];
    /* 0x0BC */ ? spBC;                             /* inferred */
    /* 0x0BC */ char pad_BC[0xC];
    /* 0x0C8 */ f32 spC8;                           /* inferred */
    /* 0x0CC */ char pad_CC[0x4];
    /* 0x0D0 */ f32 spD0;                           /* inferred */
    /* 0x0D4 */ f32 spD4;                           /* inferred */
    /* 0x0D8 */ f32 spD8;                           /* inferred */
    /* 0x0DC */ f32 spDC;                           /* inferred */
    /* 0x0E0 */ f32 spE0;                           /* inferred */
    /* 0x0E4 */ f32 spE4;                           /* inferred */
    /* 0x0E8 */ f32 spE8;                           /* inferred */
    /* 0x0EC */ f32 spEC;                           /* inferred */
    /* 0x0F0 */ f32 spF0;                           /* inferred */
    /* 0x0F4 */ f32 spF4;                           /* inferred */
    /* 0x0F8 */ char pad_F8[0x8];                   /* maybe part of spF4[3]? */
    /* 0x100 */ f32 sp100;                          /* inferred */
    /* 0x104 */ char pad_104[0x4];
};                                                  /* size = 0x108 */

struct _mips2c_stack_func_80A21C30 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A21C88 {};              /* size 0x0 */

struct _mips2c_stack_func_80A21CB4 {};              /* size 0x0 */

struct _mips2c_stack_func_80A21CD8 {};              /* size 0x0 */

struct _mips2c_stack_func_80A21D1C {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ f32 sp4;                             /* inferred */
    /* 0x08 */ char pad_8[0x18];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A21E9C {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A21F68 {};              /* size 0x0 */

struct _mips2c_stack_func_80A21F74 {
    /* 0x00 */ char pad_0[0x8A];
    /* 0x8A */ s16 sp8A;                            /* inferred */
    /* 0x8C */ char pad_8C[0x10];                   /* maybe part of sp8A[9]? */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ char pad_B4[0x4];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_80A22308 {};              /* size 0x0 */

struct _mips2c_stack_func_80A22334 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0xC];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A2244C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A224A4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A22628 {};              /* size 0x0 */

struct _mips2c_stack_func_80A2264C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A22728 {};              /* size 0x0 */

struct _mips2c_stack_func_80A2273C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A227A4 {};              /* size 0x0 */

struct _mips2c_stack_func_80A227C0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

f32 func_800C4240(s32, void *, void *, f32 *, f32 *, f32); /* extern */
s32 func_800C56E0(s32, f32 *, f32 *, f32 *, ? *, s32, s32, s32, s32, ? *, f32 *, f32); /* extern */
s32 func_80A21150(f32 *arg0);                       /* static */
void func_80A211F4(f32 *arg0, s32 arg1);            /* static */
void func_80A212F0(f32 *arg0, f32 *arg1, s16 arg2); /* static */
s32 func_80A21370(f32 *arg0, f32 *arg1);            /* static */
s32 func_80A21548(f32 *arg0, f32 *);                /* static */
s32 func_80A216D4(f32 *arg0, f32 *arg1, f32 arg2, Vec3f *arg3); /* static */
s32 func_80A21934(Actor *arg0, f32 *);              /* static */
s32 func_80A21990(f32 *arg0, s32 arg1, void *arg2); /* static */
? func_80A21C30(Actor *arg0, f32 *);                /* static */
void func_80A21C88(f32 *arg0, s16 arg1);            /* static */
void func_80A21CB4(f32 *arg0, f32 *arg1);           /* static */
void func_80A21CD8(f32 *arg0);                      /* static */
void func_80A21D1C(Actor *arg0);                    /* static */
void func_80A21E9C(ObjSkateblock *arg0, GlobalContext *arg1); /* static */
void func_80A21F68(void *arg0);                     /* static */
void func_80A21F74(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A22308(ObjSkateblock *arg0);            /* static */
void func_80A22334(f32 *arg0, f32 *arg1);           /* static */
void func_80A2244C(f32 *arg0);                      /* static */
void func_80A224A4(Actor *arg0, f32 *arg1);         /* static */
void func_80A22628(Actor *arg0);                    /* static */
void func_80A2264C(f32 *arg0, f32 *arg1);           /* static */
void func_80A22728(f32 *arg0);                      /* static */
void func_80A2273C(DynaPolyActor *arg0, ? arg1);    /* static */
void func_80A227A4(DynaPolyActor *arg0);            /* static */
void func_80A227C0(f32 *arg0, f32 *arg1);           /* static */
extern void D_0501B370;
static s32 D_80A22A10 = 0;
static s32 D_80A22A14 = 0;
static void *D_80A22A18 = NULL;
static ? D_80A22A1C;                                /* unable to generate initializer */
static ? D_80A22A44;                                /* unable to generate initializer */
static ? D_80A22A6C;                                /* unable to generate initializer */
static ? D_80A22A94;                                /* unable to generate initializer */
static f32 D_80A22ABC[2] = {-300.0f, 300.0f};
static f32 D_80A22AC4[2] = {1.0f, -1.0f};
static Vec3f D_80A22ACC = {0.0f, 0.3f, 0.0f};
static Color_RGBA8 D_80A22AD8 = {0xFA, 0xFA, 0xFA, 0xFF};
static Color_RGBA8 D_80A22ADC = {0xB4, 0xB4, 0xB4, 0xFF};
static InitChainEntry D_80A22AE0[6];                /* unable to generate initializer */
static ? D_80A22AF8;                                /* unable to generate initializer */
static ? D_80A22B08;                                /* unable to generate initializer */

s32 func_80A21150(f32 *arg0) {
    f32 temp_f2;
    s32 temp_v0;
    s32 phi_v0;

    temp_f2 = arg0->unk_148;
    if (fabsf(temp_f2) > 0.1f) {
        if (temp_f2 > 0.0f) {
            phi_v0 = (arg0->unk_150 + 0x2000) << 0x10;
        } else {
            phi_v0 = (arg0->unk_150 - 0x6000) << 0x10;
        }
        temp_v0 = phi_v0 >> 0x10;
        if (temp_v0 < -0x4000) {
            return 3;
        }
        if (temp_v0 < 0) {
            return 1;
        }
        if (temp_v0 < 0x4000) {
            return 2;
        }
        return 0;
    }
    return -1;
}

void func_80A211F4(f32 *arg0, s32 arg1) {
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a2;
    s16 temp_v0;
    s32 phi_v0;

    phi_v0 = 0;
    if (arg0->unk_148 > 0.0f) {
        phi_v0 = 1;
    }
    if ((arg1 == 0) && (phi_v0 != 0)) {
        arg0->unk_172 = (s16) (arg0->unk_172 + 1);
    } else {
        temp_a2 = arg0->unk_172;
        if ((s32) temp_a2 > 0) {
            arg0->unk_172 = (s16) (temp_a2 - 1);
        }
    }
    if ((arg1 == 1) && (phi_v0 != 0)) {
        arg0->unk_174 = (s16) (arg0->unk_174 + 1);
    } else {
        temp_a0 = arg0->unk_174;
        if ((s32) temp_a0 > 0) {
            arg0->unk_174 = (s16) (temp_a0 - 1);
        }
    }
    if ((arg1 == 2) && (phi_v0 != 0)) {
        arg0->unk_176 = (s16) (arg0->unk_176 + 1);
    } else {
        temp_a0_2 = arg0->unk_176;
        if ((s32) temp_a0_2 > 0) {
            arg0->unk_176 = (s16) (temp_a0_2 - 1);
        }
    }
    if ((arg1 == 3) && (phi_v0 != 0)) {
        arg0->unk_178 = (s16) (arg0->unk_178 + 1);
        return;
    }
    temp_v0 = arg0->unk_178;
    if ((s32) temp_v0 > 0) {
        arg0->unk_178 = (s16) (temp_v0 - 1);
    }
}

void func_80A212F0(f32 *arg0, f32 *arg1, s16 arg2) {
    f32 sp1C;
    f32 temp_f0;

    sp1C = Math_SinS(arg2);
    temp_f0 = Math_CosS(arg2);
    arg0->unk_0 = (arg1->unk_8 * sp1C) + (arg1->unk_0 * temp_f0);
    arg0->unk_4 = (f32) arg1->unk_4;
    arg0->unk_8 = (f32) ((arg1->unk_8 * temp_f0) - (arg1->unk_0 * sp1C));
}

s32 func_80A21370(f32 *arg0, f32 *arg1) {
    s32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    s32 sp88;
    s32 sp70;
    f32 *temp_fp;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 temp_s3;
    void *temp_v1;
    f32 *phi_s1;
    ? *phi_s4;
    ? *phi_s5;
    s32 phi_t0;
    s32 phi_v0;
    void *phi_s2;
    void *phi_s6;
    f32 phi_f20;
    s32 phi_s3;
    s32 phi_v0_2;
    s32 phi_t0_2;

    sp90 = arg0->unk_28 + 40.0f;
    sp70 = arg1 + 0x830;
    temp_fp = &sp8C;
    phi_s1 = arg0;
    phi_s4 = &D_80A22A44;
    phi_s5 = &D_80A22A1C;
    phi_t0 = 0;
    phi_v0 = -1;
    phi_s2 = arg0 + 0x184;
    phi_s6 = arg0 + 0x18C;
    phi_f20 = -32000.0f;
    phi_s3 = 0;
    do {
        phi_s1->unk_184 = 0;
        phi_s1->unk_188 = -32000.0f;
        phi_s1->unk_18C = 0x32;
        sp8C = phi_s4->unk_0 + (phi_s5->unk_0 * arg0->unk_58) + arg0->unk_24;
        sp88 = phi_t0;
        sp98 = phi_v0;
        sp94 = phi_s4->unk_4 + (phi_s5->unk_4 * arg0->unk_60) + arg0->unk_2C;
        temp_f0 = func_800C4240(sp70, phi_s2, phi_s6, arg0, temp_fp, 0.0f);
        phi_s2->unk_4 = temp_f0;
        phi_s1 += 0xC;
        phi_v0_2 = phi_v0;
        phi_t0_2 = phi_t0;
        if (temp_f0 > -31999.0f) {
            temp_f0_2 = phi_s2->unk_4;
            phi_t0_2 = 1;
            if (phi_f20 < temp_f0_2) {
                phi_v0_2 = phi_s3;
                phi_f20 = temp_f0_2;
            }
        }
        temp_s3 = phi_s3 + 1;
        phi_s4 += 8;
        phi_s5 += 8;
        phi_t0 = phi_t0_2;
        phi_v0 = phi_v0_2;
        phi_s2 += 0xC;
        phi_s6 += 0xC;
        phi_s3 = temp_s3;
    } while (temp_s3 != 5);
    if (phi_v0_2 >= 0) {
        temp_v1 = arg0 + (phi_v0_2 * 0xC);
        arg0->unk_80 = (s32) temp_v1->unk_184;
        arg0->unk_88 = (f32) temp_v1->unk_188;
        arg0->unk_85 = (s8) temp_v1->unk_18C;
    }
    return phi_t0_2;
}

s32 func_80A21548(f32 *arg0) {
    f32 *temp_a0;
    f32 *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f12;
    void *temp_v0;
    f32 phi_f2;
    f32 phi_f2_2;
    f32 phi_f2_3;
    f32 phi_f2_4;
    s32 phi_v1;
    f32 phi_f2_5;

    temp_a2 = arg0;
    temp_a0 = temp_a2;
    temp_a2->unk_1C1 = (u8) (temp_a2->unk_1C1 & 0xFFFB);
    arg0 = temp_a2;
    if (func_80A21370(temp_a0, temp_a2) != 0) {
        temp_f12 = arg0->unk_28 - 10.0f;
        phi_f2 = -32000.0f;
        phi_v1 = 0;
        if (temp_f12 < arg0->unk_188) {
            temp_f0 = arg0->unk_188;
            if (temp_f0 > -32000.0f) {
                phi_f2 = temp_f0;
                phi_v1 = 1;
            }
        }
        temp_v0 = arg0 + (1 * 0xC);
        phi_f2_2 = phi_f2;
        if (temp_f12 < temp_v0->unk_188) {
            temp_f0_2 = temp_v0->unk_188;
            if (phi_f2 < temp_f0_2) {
                phi_f2_2 = temp_f0_2;
                phi_v1 = 1;
            }
        }
        phi_f2_3 = phi_f2_2;
        if (temp_f12 < temp_v0->unk_194) {
            temp_f0_3 = temp_v0->unk_194;
            if (phi_f2_2 < temp_f0_3) {
                phi_f2_3 = temp_f0_3;
                phi_v1 = 1;
            }
        }
        phi_f2_4 = phi_f2_3;
        if (temp_f12 < temp_v0->unk_1A0) {
            temp_f0_4 = temp_v0->unk_1A0;
            if (phi_f2_3 < temp_f0_4) {
                phi_f2_4 = temp_f0_4;
                phi_v1 = 1;
            }
        }
        phi_f2_5 = phi_f2_4;
        if (temp_f12 < temp_v0->unk_1AC) {
            temp_f0_5 = temp_v0->unk_1AC;
            if (phi_f2_4 < temp_f0_5) {
                phi_v1 = 1;
                phi_f2_5 = temp_f0_5;
            }
        }
        if (phi_v1 != 0) {
            arg0->unk_28 = phi_f2_5;
            arg0->unk_1C1 = (u8) (arg0->unk_1C1 | 4);
            arg0->unk_68 = 0.0f;
        }
        return phi_v1;
    }
    return 0;
}

s32 func_80A216D4(f32 *arg0, f32 *arg1, f32 arg2, Vec3f *arg3) {
    f32 spE8;
    f32 spE4;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB0;
    ? spA4;
    ? spA0;
    s32 sp9C;
    s16 sp96;
    ? *temp_s0;
    f32 *temp_a1;
    f32 *temp_a2_2;
    f32 *temp_s3;
    f32 *temp_s5;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f8;
    s16 temp_a2;
    s16 phi_a2;
    ? *phi_s1;
    ? *phi_s0;
    f32 phi_f20;

    temp_a2 = arg0->unk_150;
    phi_a2 = temp_a2;
    if (arg0->unk_148 < 0.0f) {
        phi_a2 = (s16) (temp_a2 - 0x8000);
    }
    sp96 = phi_a2;
    spE8 = Math_SinS(phi_a2);
    spE4 = Math_CosS(sp96);
    temp_f0 = Math3D_Distance(arg0 + 0x24, arg0 + 0x108);
    sp9C = 0;
    temp_s3 = &spD4;
    temp_f2 = temp_f0 + (300.0f * arg0->unk_60) + arg2;
    temp_f24 = temp_f2 * spE8;
    temp_s5 = &spC8;
    temp_f26 = temp_f2 * spE4;
    phi_s1 = &D_80A22A94;
    phi_s0 = &D_80A22A6C;
    phi_f20 = 3.4028235e38f;
    do {
        temp_a1 = &spBC;
        spBC = phi_s1->unk_0 + (phi_s0->unk_0 * arg0->unk_58);
        spC4 = 0.0f;
        spC0 = phi_s1->unk_4 + (phi_s0->unk_4 * arg0->unk_5C);
        func_80A212F0(temp_s3, temp_a1, sp96);
        temp_f8 = spD4 + arg0->unk_108;
        spD4 = temp_f8;
        temp_f16 = spD8 + arg0->unk_10C;
        temp_a2_2 = temp_s5;
        spD8 = temp_f16;
        spCC = temp_f16;
        spC8 = temp_f24 + temp_f8;
        temp_f18 = spDC + arg0->unk_110;
        temp_f4 = temp_f26 + temp_f18;
        spDC = temp_f18;
        spD0 = temp_f4;
        if (func_800C56E0(arg1 + 0x830, temp_s3, temp_a2_2, &spB0, &spA0, 1, 0, 0, 1, &spA4, arg0, 0.0f) != 0) {
            temp_f0_2 = Math3D_DistanceSquared((Vec3f *) temp_s3, (Vec3f *) &spB0);
            if (temp_f0_2 < phi_f20) {
                temp_f20 = temp_f0_2;
                sp9C = 1;
                Math_Vec3f_Diff((Vec3f *) &spB0, (Vec3f *) temp_s5, arg3);
                phi_f20 = temp_f20;
            }
        }
        temp_s0 = phi_s0 + 8;
        phi_s1 += 8;
        phi_s0 = temp_s0;
    } while (temp_s0 != &D_80A22A94);
    return sp9C;
}

s32 func_80A21934(Actor *arg0) {
    f32 sp1C;

    if (func_80A216D4(NULL, &sp1C) != 0) {
        arg0->world.pos.x += sp1C;
        arg0->world.pos.z += sp24;
        return 1;
    }
    return 0;
}

s32 func_80A21990(f32 *arg0, s32 arg1, void *arg2) {
    f32 sp100;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spC8;
    ? spBC;
    ? spB8;
    s32 spB4;
    f32 *temp_a1;
    f32 *temp_a2;
    f32 *temp_s1;
    f32 *temp_s3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f30;
    f32 temp_f4;
    f32 temp_f8;
    s16 temp_s6;
    s16 phi_s6;
    f32 *phi_s2;
    f32 *phi_s1;
    f32 phi_f22;

    temp_s6 = arg0->unk_150;
    phi_s6 = temp_s6;
    if (arg0->unk_148 < 0.0f) {
        phi_s6 = (s16) (temp_s6 - 0x8000);
    }
    sp100 = Math_SinS(phi_s6);
    temp_f26 = Math_CosS(phi_s6);
    temp_f0 = Math3D_Distance(arg0 + 0x24, arg0 + 0x108);
    spB4 = 0;
    temp_s3 = &spEC;
    temp_f12 = -(temp_f0 + (300.0f * arg0->unk_60) + 2.0f);
    temp_f28 = temp_f12 * sp100;
    temp_f30 = temp_f12 * temp_f26;
    phi_s2 = D_80A22AC4;
    phi_s1 = D_80A22ABC;
    phi_f22 = 3.4028235e38f;
    do {
        spDC = 0.0f;
        temp_a1 = &spD4;
        spD8 = -10.0f;
        spD4 = *phi_s2 + (*phi_s1 * arg0->unk_58);
        func_80A212F0(temp_s3, temp_a1, phi_s6);
        temp_f10 = spEC + arg0->unk_24;
        spEC = temp_f10;
        temp_f18 = spF0 + arg0->unk_28;
        temp_a2 = &spE0;
        spF0 = temp_f18;
        spE4 = temp_f18;
        spE0 = temp_f28 + temp_f10;
        temp_f8 = spF4 + arg0->unk_2C;
        temp_f4 = temp_f30 + temp_f8;
        spF4 = temp_f8;
        spE8 = temp_f4;
        if (func_800C56E0(arg1 + 0x830, temp_s3, temp_a2, &spC8, &spB8, 1, 0, 0, 1, &spBC, arg0, 0.0f) != 0) {
            temp_f0_2 = Math3D_DistanceSquared((Vec3f *) temp_s3, (Vec3f *) &spC8);
            if (temp_f0_2 < phi_f22) {
                spB4 = 1;
                arg2->unk_4 = 0.0f;
                arg2->unk_0 = (f32) ((spC8 - spEC) + (300.0f * arg0->unk_60 * sp100));
                arg2->unk_8 = (f32) ((spD0 - spF4) + (300.0f * arg0->unk_60 * temp_f26));
                phi_f22 = temp_f0_2;
            }
        }
        temp_s1 = phi_s1 + 4;
        phi_s2 += 4;
        phi_s1 = temp_s1;
    } while (temp_s1 != D_80A22AC4);
    return spB4;
}

? func_80A21C30(Actor *arg0) {
    f32 sp1C;

    if (func_80A21990(&sp1C) != 0) {
        arg0->world.pos.x += sp1C;
        arg0->world.pos.z += sp24;
        return 1;
    }
    return 0;
}

void func_80A21C88(f32 *arg0, s16 arg1) {
    if ((arg1 == 0) || (arg1 == 1)) {
        arg0->unk_16C = (void *) (arg0 + 0x24);
    } else {
        arg0->unk_16C = (void *) (arg0 + 0x2C);
    }
    arg0->unk_170 = arg1;
}

void func_80A21CB4(f32 *arg0, f32 *arg1) {
    void *temp_v0;

    temp_v0 = arg1->unk_1CCC;
    temp_v0->unk_A70 = (s32) (temp_v0->unk_A70 & ~0x10);
    arg0->unk_148 = 0.0f;
}

void func_80A21CD8(f32 *arg0) {
    f32 temp_f2;

    temp_f2 = arg0->unk_78;
    arg0->unk_68 = (f32) (arg0->unk_68 + arg0->unk_74);
    if (arg0->unk_68 < temp_f2) {
        arg0->unk_68 = temp_f2;
    }
    arg0->unk_28 = (f32) (arg0->unk_28 + arg0->unk_68);
}

void func_80A21D1C(Actor *arg0) {
    f32 sp4;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f4;
    f32 temp_f6;
    f32 phi_f2;
    f32 phi_f2_2;

    temp_f16 = arg0->home.pos.x;
    temp_f14 = arg0->world.pos.x - temp_f16;
    if (temp_f14 >= 0.0f) {
        phi_f2 = 0.5f;
    } else {
        phi_f2 = -0.5f;
    }
    temp_f6 = (f32) (((s32) (phi_f2 + temp_f14) / 0x1E) * 0x1E);
    sp4 = temp_f6;
    if (fabsf(temp_f14 - temp_f6) < 3.0f) {
        arg0->world.pos.x = temp_f16 + temp_f6;
    }
    temp_f16_2 = arg0->home.pos.z;
    temp_f14_2 = arg0->world.pos.z - temp_f16_2;
    if (temp_f14_2 >= 0.0f) {
        phi_f2_2 = 0.5f;
    } else {
        phi_f2_2 = -0.5f;
    }
    temp_f4 = (f32) (((s32) (phi_f2_2 + temp_f14_2) / 0x1E) * 0x1E);
    sp4 = temp_f4;
    if (fabsf(temp_f14_2 - temp_f4) < 3.0f) {
        arg0->world.pos.z = temp_f16_2 + temp_f4;
    }
}

void func_80A21E9C(ObjSkateblock *arg0, GlobalContext *arg1) {
    DynaPolyActor *temp_v0;
    s32 temp_s1;
    ObjSkateblock *phi_s0;
    s32 phi_s1;

    phi_s0 = arg0;
    phi_s1 = 0;
    if ((arg0->unk_1C1 & 4) != 0) {
        do {
            temp_v0 = BgCheck_GetActorOfMesh(arg1 + 0x830, phi_s0->unk_18C);
            temp_s1 = phi_s1 + 0xC;
            phi_s1 = temp_s1;
            if ((temp_v0 != 0) && (temp_v0->actor.id == 0x142) && (fabsf(arg0->actor.world.pos.y - phi_s0->unk_188) < 0.1f)) {
                temp_v0->unk_1C1 = (u8) (temp_v0->unk_1C1 | 2);
            }
            phi_s0 += 0xC;
        } while (temp_s1 != 0x3C);
    }
}

void func_80A21F68(void *arg0) {
    arg0->unk_17C = 0;
}

void func_80A21F74(Actor *arg0, GlobalContext *arg1) {
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    s16 sp8A;
    f32 *temp_a1;
    f32 *temp_s2;
    f32 temp_f20;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_s1;
    s16 phi_v1;
    f32 phi_f22;
    s32 phi_s1;

    temp_v1 = arg0->unk_150;
    phi_v1 = temp_v1;
    phi_s1 = 0;
    if (arg0->unk_148 < 0.0f) {
        phi_v1 = (s16) (temp_v1 - 0x8000);
    }
    arg0->unk_17C = (s16) (arg0->unk_17C + 1);
    if ((arg0->flags & 0x40) != 0) {
        temp_v0 = arg0->unk_17C;
        if ((s32) temp_v0 >= 0x2E) {
            phi_f22 = 1.0f;
        } else {
            phi_f22 = ((f32) temp_v0 * 0.017777778f) + 0.2f;
        }
        sp8A = phi_v1;
        temp_s2 = &spA8;
        spA0 = 12.0f;
        do {
            if (!(phi_f22 < (Rand_ZeroOne() * 1.2f))) {
                arg0->unk_180 = (f32) (arg0->unk_180 + Rand_ZeroOne());
                temp_f2 = arg0->unk_180;
                if (temp_f2 > 1.0f) {
                    arg0->unk_180 = (f32) (temp_f2 - 1.0f);
                }
                temp_a1 = &sp9C;
                sp9C = (arg0->unk_180 - 0.5f) * 600.0f * arg0->scale.x;
                spA4 = (arg0->scale.z * -300.0f) + 4.0f;
                func_80A212F0(temp_s2, temp_a1, sp8A);
                spA8 += arg0->world.pos.x;
                spAC += arg0->world.pos.y;
                spB0 += arg0->world.pos.z;
                temp_f20 = ((Rand_ZeroOne() * 800.0f) + (1600.0f * arg0->scale.x)) * phi_f22;
                func_800B0E48(arg1, (Vec3f *) temp_s2, &D_801D15B0, &D_80A22ACC, &D_80A22AD8, &D_80A22ADC, (s16) (s32) temp_f20, (s16) (s32) ((Rand_ZeroOne() * 20.0f) + 30.0f));
            }
            temp_s1 = phi_s1 + 1;
            phi_s1 = temp_s1;
        } while (temp_s1 != 2);
    }
}

void ObjSkateblock_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_t9;
    ObjSkateblock *this = (ObjSkateblock *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80A22AE0);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, (CollisionHeader *) &D_05007498);
    if (D_80A22A18 == 0) {
        D_80A22A18 = Lib_SegmentedToVirtual(&D_0501B370);
    }
    func_80A22308(this);
    this->unk_1C0 = (u8) D_80A22A14;
    temp_t9 = D_80A22A14 + 1;
    D_80A22A14 = temp_t9;
    D_80A22A14 = temp_t9 & 0x1F;
}

void ObjSkateblock_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjSkateblock *this = (ObjSkateblock *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void func_80A22308(ObjSkateblock *arg0) {
    arg0->actionFunc = func_80A22334;
    arg0->unk_174 = 0;
    arg0->unk_176 = 0;
    arg0->unk_178 = 0;
    arg0->unk_172 = 0;
    arg0->actor.velocity.y = 0.0f;
}

void func_80A22334(f32 *arg0, f32 *arg1) {
    s32 sp30;
    s32 sp2C;
    ? sp20;
    s32 temp_v0;

    func_80A21CD8(arg0);
    func_80A21548(arg0, arg1);
    temp_v0 = func_80A21150(arg0);
    sp2C = temp_v0;
    func_80A211F4(arg0, temp_v0);
    sp30 = 1;
    if (temp_v0 == -1) {
        sp30 = 0;
    } else if (((arg0->unk_1C1 & 2) == 0) && ((s32) (arg0 + (temp_v0 * 2))->unk_172 >= 0xB) && (D_80A22A10 == 0) && (func_80A216D4(arg0, arg1, 2.0f, (Vec3f *) &sp20) == 0) && (func_801233E4((GlobalContext *) arg1) == 0)) {
        func_80A21C88(arg0, (s16) sp2C);
        func_80A2244C(arg0);
        sp30 = 0;
        func_800B7298((GlobalContext *) arg1, (Actor *) arg0, 7U);
        arg0->unk_1C1 = (u8) (arg0->unk_1C1 | 1);
    }
    if (sp30 != 0) {
        func_80A21CB4(arg0, arg1);
    }
}

void func_80A2244C(f32 *arg0) {
    arg0->unk_15C = func_80A224A4;
    arg0->unk_17A = 0xF;
    arg0->unk_168 = (f32) *(&D_80A22AF8 + (arg0->unk_170 * 4));
    arg0->unk_164 = 0.0f;
    arg0->unk_68 = (f32) arg0->unk_74;
    func_80A21F68();
}

void func_80A224A4(Actor *arg0, f32 *arg1) {
    s32 sp28;
    s32 sp24;
    f32 *temp_v1;
    s16 temp_v0;
    u8 temp_v0_2;

    sp28 = 0;
    sp24 = 0;
    Math_StepToF(arg0 + 0x164, arg0->unk_168, 0.75f);
    temp_v1 = arg0->unk_16C;
    *temp_v1 += arg0->unk_164;
    if (func_80A21934(arg0, arg1) != 0) {
        Audio_PlayActorSound2(arg0, 0x2835U);
        func_80A21D1C(arg0);
        sp28 = 1;
    } else {
        func_800B9010(arg0, 0xDFU);
    }
    func_80A21CD8((f32 *) arg0);
    if (func_80A21548((f32 *) arg0, arg1) == 0) {
        func_80A21C30(arg0, arg1);
        func_80A21D1C(arg0);
        func_80A22628(arg0);
        sp24 = 1;
    } else if (sp28 != 0) {
        func_80A22308((ObjSkateblock *) arg0);
    }
    temp_v0 = arg0->unk_17A;
    if ((s32) temp_v0 > 0) {
        arg0->unk_17A = (s16) (temp_v0 - 1);
    }
    if ((sp24 != 0) || (sp28 != 0) || (arg0->unk_17A == 1)) {
        func_80A21CB4((f32 *) arg0, arg1);
    }
    temp_v0_2 = arg0->unk_1C1;
    if (((temp_v0_2 & 1) != 0) && ((sp24 != 0) || (sp28 != 0) || (arg0->xzDistToPlayer > 400.0f))) {
        arg0->unk_1C1 = (u8) (temp_v0_2 & 0xFFFE);
        func_800B7298((GlobalContext *) arg1, arg0, 6U);
    }
    func_80A21F74(arg0, (GlobalContext *) arg1);
}

void func_80A22628(Actor *arg0) {
    arg0->unk_15C = func_80A2264C;
    arg0->unk_160 = (f32) arg0->world.pos.y;
    arg0->velocity.y = arg0->gravity;
}

void func_80A2264C(f32 *arg0, f32 *arg1) {
    s32 sp20;
    s32 temp_ret;
    s32 temp_v0;

    if (func_80A21150(arg0) != -1) {
        func_80A21CB4(arg0, arg1);
    }
    func_80A21CD8(arg0);
    temp_ret = func_80A21548(arg0, arg1);
    temp_v0 = temp_ret;
    if (((temp_v0 != 0) || ((arg0->unk_160 - arg0->unk_28) > 300.0f)) && (sp20 = temp_v0, (func_800C9B40((CollisionContext *) (arg1 + 0x830), arg0->unk_80, (s32) arg0->unk_85) == 0xC))) {
        func_800C62BC((GlobalContext *) arg1, (DynaCollisionContext *) (arg1 + 0x880), arg0->unk_144);
        arg0->unk_13C = 0;
        func_80A22728(arg0);
        return;
    }
    if (temp_ret != 0) {
        func_80A22308((ObjSkateblock *) arg0);
    }
}

void func_80A22728(f32 *arg0) {
    arg0->unk_15C = func_80A2273C;
}

void func_80A2273C(DynaPolyActor *arg0, ? arg1) {
    if (func_800CAF70(arg0) == 0) {
        arg0->actor.world.pos.x = arg0->actor.home.pos.x;
        arg0->actor.world.pos.z = arg0->actor.home.pos.z;
        arg0->actor.world.pos.y = (arg0->actor.home.pos.y - (600.0f * arg0->actor.scale.y)) - 10.0f;
        func_80A227A4(arg0);
    }
}

void func_80A227A4(DynaPolyActor *arg0) {
    arg0->unk_15C = func_80A227C0;
    arg0->unk_17A = 0x28;
}

void func_80A227C0(f32 *arg0, f32 *arg1) {
    s16 temp_v0;

    if (func_80A21150(arg0) != -1) {
        func_80A21CB4(arg0, arg1);
    }
    temp_v0 = arg0->unk_17A;
    if ((s32) temp_v0 > 0) {
        arg0->unk_17A = (s16) (temp_v0 - 1);
        return;
    }
    func_800C6314((GlobalContext *) arg1, (DynaCollisionContext *) (arg1 + 0x880), arg0->unk_144);
    arg0->unk_13C = ObjSkateblock_Draw;
    if (Math_StepToF(arg0 + 0x28, arg0->unk_C, 1.0f) != 0) {
        func_80A22308((ObjSkateblock *) arg0);
    }
    if (func_800CAF70((DynaPolyActor *) arg0) != 0) {
        D_80A22A10 |= 1 << arg0->unk_1C0;
    }
}

void ObjSkateblock_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjSkateblock *this = (ObjSkateblock *) thisx;
    D_80A22A10 &= ~(1 << this->unk_1C0);
    this->actionFunc(this, globalCtx);
    this->unk_1C1 &= 0xFFFD;
}

void ObjSkateblock_Draw(Actor *thisx, GlobalContext *globalCtx) {
    void *sp2C;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    ObjSkateblock *this = (ObjSkateblock *) thisx;

    sp2C = ((this->actor.params & 0xF) * 3) + &D_80A22B08;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    AnimatedMat_DrawStep(globalCtx, (AnimatedMaterial *) D_80A22A18, 0U);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_v0;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFA00FFFF;
    temp_v0_2->words.w1 = (sp2C->unk_0 << 0x18) | (sp2C->unk_1 << 0x10) | (sp2C->unk_2 << 8) | 0xFF;
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = (u32) &D_050182A8;
    func_80A21E9C(this, globalCtx);
}
