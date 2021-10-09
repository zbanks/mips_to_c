typedef struct EnIshi {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ void (*actionFunc)(EnIshi *, GlobalContext *);
    /* 0x194 */ s8 unk_194;                         /* inferred */
    /* 0x195 */ s8 unk_195;                         /* inferred */
    /* 0x196 */ s8 unk_196;                         /* inferred */
    /* 0x197 */ u8 unk_197;                         /* inferred */
} EnIshi;                                           /* size = 0x198 */

struct _mips2c_stack_EnIshi_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnIshi_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 *sp24;                           /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnIshi_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8095D6E0 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ColliderCylinder *sp18;              /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8095D758 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8095D804 {
    /* 0x00 */ char pad_0[0xB8];
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ char pad_D0[0x10];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_func_8095DABC {
    /* 0x00 */ char pad_0[0xA4];
    /* 0xA4 */ Vec3f *spA4;                         /* inferred */
    /* 0xA8 */ char pad_A8[0x24];                   /* maybe part of spA4[10]? */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ f32 spDC;                            /* inferred */
    /* 0xE0 */ f32 spE0;                            /* inferred */
    /* 0xE4 */ char pad_E4[0x4];
};                                                  /* size = 0xE8 */

struct _mips2c_stack_func_8095DDA8 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8095DE9C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8095DF90 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8095DFF0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ EnItem00 *sp3C;                      /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_8095E14C {};              /* size 0x0 */

struct _mips2c_stack_func_8095E180 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8095E204 {
    /* 0x00 */ char pad_0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_8095E2B0 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8095E5AC {};              /* size 0x0 */

struct _mips2c_stack_func_8095E5C0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8095E64C {};              /* size 0x0 */

struct _mips2c_stack_func_8095E660 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8095E934 {};              /* size 0x0 */

struct _mips2c_stack_func_8095E95C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8095EA70 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8095EBDC {
    /* 0x00 */ char pad_0[0x58];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0xC];                    /* maybe part of sp60[4]? */
    /* 0x70 */ s32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0x4];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_8095F060 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8095F0A4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8095F180 {};              /* size 0x0 */

struct _mips2c_stack_func_8095F194 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8095F210 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8095F36C {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Gfx *sp18;                           /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x8];                    /* maybe part of sp20[3]? */
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ char pad_30[0x8];                    /* maybe part of sp2C[3]? */
    /* 0x38 */ GraphicsContext *sp38;               /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8095F61C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8095F654 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

s32 func_800C9EBC(GlobalContext *, s32, s32, s32, f32 *, ? *, ? *); /* extern */
void func_8095D6E0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_8095D758(Actor *arg0, GlobalContext *arg1, f32 arg2); /* static */
void func_8095D804(void *arg0, GlobalContext *arg1); /* static */
void func_8095DABC(void *arg0, GlobalContext *arg1); /* static */
void func_8095DDA8(void *arg0, GlobalContext *arg1); /* static */
void func_8095DE9C(void *arg0, GlobalContext *arg1); /* static */
void func_8095DF90(EnIshi *arg0, GlobalContext *arg1); /* static */
void func_8095DFF0(EnIshi *arg0, GlobalContext *arg1); /* static */
void func_8095E14C(EnIshi *arg0);                   /* static */
void func_8095E180(Vec3f *arg0, f32 arg1);          /* static */
void func_8095E204(EnIshi *arg0, GlobalContext *arg1); /* static */
s32 func_8095E2B0(EnIshi *arg0, GlobalContext *arg1); /* static */
void func_8095E5AC(EnIshi *arg0);                   /* static */
void func_8095E64C(EnIshi *arg0);                   /* static */
void func_8095E934(EnIshi *arg0);                   /* static */
void func_8095EA70(EnIshi *arg0);                   /* static */
void func_8095F060(EnIshi *arg0);                   /* static */
void func_8095F180(EnIshi *arg0);                   /* static */
void func_8095F210(void *arg0, GlobalContext *arg1); /* static */
void func_8095F36C(void *arg0, GraphicsContext **arg1); /* static */
void func_8095F61C(Actor *this, GlobalContext *globalCtx); /* static */
void func_8095F654(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_05006760;
extern Gfx D_060009B0;
static s16 D_8095F690 = 0;
static s16 D_8095F694 = 0;
static ? D_8095F6B8;                                /* unable to generate initializer */
static ? D_8095F6BC;                                /* unable to generate initializer */
static ? D_8095F6C0;                                /* unable to generate initializer */
static ? D_8095F6C8;                                /* unable to generate initializer */
static ? D_8095F6D0;                                /* unable to generate initializer */
static ? D_8095F6D4;                                /* unable to generate initializer */
static ? D_8095F6D8;                                /* unable to generate initializer */
static ? D_8095F6DC;                                /* unable to generate initializer */
static ? D_8095F6E0;                                /* unable to generate initializer */
static ? D_8095F6E8;                                /* unable to generate initializer */
static ? D_8095F6EC;                                /* unable to generate initializer */
static CollisionCheckInfoInit D_8095F744 = {0, 0xC, 0x3C, 0xFF};
static s16 D_8095F74C[6] = {0x10, 0xD, 0xB, 9, 7, 5};
static s16 D_8095F758[10] = {0x91, 0x87, 0x78, 0x64, 0x46, 0x32, 0x2D, 0x28, 0x23, 0};
static ? D_8095F76C;                                /* unable to generate initializer */
static Vec3f D_8095F778 = {0.0f, 1.0f, 0.0f};
static ? D_8095F784;                                /* unable to generate initializer */
static ? D_8095F7AC;                                /* unable to generate initializer */
static ? D_8095F7B0;                                /* unable to generate initializer */

void func_8095D6E0(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp18;
    ColliderCylinder *temp_a1;

    temp_a1 = arg0 + 0x144;
    sp18 = temp_a1;
    arg0 = arg0;
    Collider_InitCylinder(arg1, temp_a1);
    Collider_SetCylinder(arg1, temp_a1, arg0, ((arg0->params & 1) * 0x2C) + &D_8095F6EC);
    Collider_UpdateCylinder(arg0, temp_a1);
}

s32 func_8095D758(Actor *arg0, GlobalContext *arg1, f32 arg2) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    s32 sp20;
    Actor *temp_a3;
    CollisionPoly **temp_a1;
    f32 temp_f0;
    f32 temp_f16;
    s32 temp_cond;
    s32 phi_v0;

    temp_a3 = arg0;
    sp24 = temp_a3->world.pos.x;
    temp_a1 = temp_a3 + 0x80;
    sp28 = temp_a3->world.pos.y + 30.0f;
    temp_f16 = temp_a3->world.pos.z;
    arg0 = temp_a3;
    sp2C = temp_f16;
    temp_f0 = func_800C411C(arg1 + 0x830, temp_a1, &sp20, temp_a3, (Vec3f *) &sp24);
    temp_cond = temp_f0 > -32000.0f;
    arg0->floorHeight = temp_f0;
    phi_v0 = 0;
    if (temp_cond) {
        arg0->world.pos.y = arg0->floorHeight + arg2;
        Math_Vec3f_Copy((Vec3f *) &arg0->home, (Vec3f *) &arg0->world);
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_8095D804(void *arg0, GlobalContext *arg1) {
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 *temp_s2;
    f32 *temp_s3;
    s16 *temp_s1;
    s16 temp_s6;
    s32 temp_v0;
    u16 temp_v0_2;
    f32 phi_f4;
    s32 phi_v0;
    s16 *phi_s1;
    Gfx *phi_s4;

    temp_v0 = ((s32) arg0->unk_1C >> 3) & 1;
    if (temp_v0 == 0) {
        phi_s4 = (Gfx *) &D_050066B0;
    } else {
        phi_s4 = &D_060009B0;
    }
    temp_s6 = *(&D_8095F6E8 + (temp_v0 * 2));
    temp_s3 = &spB8;
    temp_s2 = &spC4;
    phi_s1 = D_8095F74C;
    do {
        spB8 = ((Rand_ZeroOne() - 0.5f) * 8.0f) + arg0->unk_24;
        spBC = (Rand_ZeroOne() * 5.0f) + arg0->unk_28 + 5.0f;
        spC0 = ((Rand_ZeroOne() - 0.5f) * 8.0f) + arg0->unk_2C;
        Math_Vec3f_Copy((Vec3f *) temp_s2, arg0 + 0x64);
        temp_v0_2 = arg0->unk_90;
        if ((temp_v0_2 & 1) != 0) {
            spC4 *= 0.6f;
            spC8 *= -0.3f;
            phi_f4 = spCC * 0.6f;
            goto block_8;
        }
        if ((temp_v0_2 & 8) != 0) {
            spC4 *= -0.5f;
            spC8 *= 0.5f;
            phi_f4 = spCC * -0.5f;
block_8:
            spCC = phi_f4;
        }
        spC4 += (Rand_ZeroOne() - 0.5f) * 11.0f;
        spC8 += (Rand_ZeroOne() * 7.0f) + 6.0f;
        spCC += (Rand_ZeroOne() - 0.5f) * 11.0f;
        if (Rand_Next() > 0) {
            phi_v0 = 0x41;
        } else {
            phi_v0 = 0x21;
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s3, (Vec3f *) temp_s2, (Vec3f *) temp_s3, (s16) -0x1A4, (s16) phi_v0, (s16) 0x1E, (s16) 5, (s16) 0, (s16) (s32) *phi_s1, (s16) 3, (s16) 0xA, 0x28, (s16) -1, (s16) (s32) temp_s6, phi_s4);
        temp_s1 = phi_s1 + 2;
        phi_s1 = temp_s1;
    } while (temp_s1 != D_8095F758);
}

void func_8095DABC(void *arg0, GlobalContext *arg1) {
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    Vec3f *spA4;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    s16 temp_s1;
    s32 temp_s2;
    u16 temp_v0;
    s16 phi_s1;
    s32 phi_s2;
    s32 phi_v1;
    s32 phi_v0;
    s16 *phi_s3;

    spA4 = arg0 + 0x64;
    temp_s5 = &spCC;
    temp_s4 = &spD8;
    phi_s1 = 0x1000;
    phi_s2 = 0;
    phi_s3 = D_8095F758;
    do {
        temp_s1 = phi_s1 + 0x4E20;
        temp_f20 = Rand_ZeroOne() * 10.0f;
        spCC = (Math_SinS(temp_s1) * temp_f20) + arg0->unk_24;
        spD0 = (Rand_ZeroOne() * 40.0f) + arg0->unk_28 + 5.0f;
        spD4 = (Math_CosS(temp_s1) * temp_f20) + arg0->unk_2C;
        Math_Vec3f_Copy((Vec3f *) temp_s4, spA4);
        temp_v0 = arg0->unk_90;
        phi_s1 = temp_s1;
        if ((temp_v0 & 1) != 0) {
            spD8 *= 0.9f;
            spDC *= -0.8f;
            spE0 *= 0.9f;
        } else if ((temp_v0 & 8) != 0) {
            spD8 *= -0.9f;
            spDC *= 0.8f;
            spE0 *= -0.9f;
        }
        temp_f20_2 = Rand_ZeroOne() * 10.0f;
        spD8 += temp_f20_2 * Math_SinS(temp_s1);
        temp_f22 = Rand_ZeroOne();
        spDC += (Rand_ZeroOne() * 4.0f) + (temp_f22 * (f32) phi_s2 * 0.7f);
        spE0 += temp_f20_2 * Math_CosS(temp_s1);
        if (phi_s2 == 0) {
            phi_v1 = -0x1C2;
            phi_v0 = 0x29;
        } else {
            phi_v0 = 0x45;
            if (phi_s2 < 4) {
                phi_v1 = -0x17C;
                phi_v0 = 0x25;
            } else {
                phi_v1 = -0x140;
            }
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s5, (Vec3f *) temp_s4, arg0 + 0x24, (s16) phi_v1, (s16) phi_v0, (s16) 0x1E, (s16) 5, (s16) 0, (s16) (s32) *phi_s3, (s16) 5, (s16) 2, 0x46, (s16) 0, (s16) 2, (Gfx *) &D_05006420);
        temp_s2 = phi_s2 + 1;
        phi_s2 = temp_s2;
        phi_s3 += 2;
    } while (temp_s2 != 9);
}

void func_8095DDA8(void *arg0, GlobalContext *arg1) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    Vec3f *temp_a1;
    u16 temp_v0;

    temp_a1 = arg0 + 0x24;
    arg0 = arg0;
    Math_Vec3f_Copy((Vec3f *) &sp2C, temp_a1);
    temp_v0 = arg0->unk_90;
    if ((temp_v0 & 1) != 0) {
        sp2C += 2.0f * arg0->unk_64;
        sp30 -= 2.0f * arg0->unk_68;
        sp34 += 2.0f * arg0->unk_6C;
    } else if ((temp_v0 & 8) != 0) {
        sp2C -= 2.0f * arg0->unk_64;
        sp30 += 2.0f * arg0->unk_68;
        sp34 -= 2.0f * arg0->unk_6C;
    }
    func_800BBFB0(arg1, (Vec3f *) &sp2C, 60.0f, 3, (s16) 0x50, (s16) 0x3C, (u8) 1);
}

void func_8095DE9C(void *arg0, GlobalContext *arg1) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    Vec3f *temp_a1;
    u16 temp_v0;

    temp_a1 = arg0 + 0x24;
    arg0 = arg0;
    Math_Vec3f_Copy((Vec3f *) &sp2C, temp_a1);
    temp_v0 = arg0->unk_90;
    if ((temp_v0 & 1) != 0) {
        sp2C += 2.0f * arg0->unk_64;
        sp30 -= 2.0f * arg0->unk_68;
        sp34 += 2.0f * arg0->unk_6C;
    } else if ((temp_v0 & 8) != 0) {
        sp2C -= 2.0f * arg0->unk_64;
        sp30 += 2.0f * arg0->unk_68;
        sp34 -= 2.0f * arg0->unk_6C;
    }
    func_800BBFB0(arg1, (Vec3f *) &sp2C, 140.0f, 0xA, (s16) 0xB4, (s16) 0x5A, (u8) 1);
}

void func_8095DF90(EnIshi *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->actor.params;
    if (((temp_v0 & 1) == 0) && ((((s32) temp_v0 >> 8) & 1) == 0)) {
        Item_DropCollectibleRandom(arg1, NULL, arg0 + 0x24, (s16) ((((s32) temp_v0 >> 4) & 0xF) * 0x10));
    }
}

void func_8095DFF0(EnIshi *arg0, GlobalContext *arg1) {
    EnItem00 *sp3C;
    f32 sp30;
    f32 sp2C;
    EnItem00 *temp_v0_2;
    Vec3f *temp_a1;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    u32 temp_a2;
    s32 phi_v0;
    f32 phi_f2;

    temp_v1 = arg0->actor.params;
    temp_v0 = *(&D_8095F76C + ((((s32) temp_v1 >> 4) & 7) * 2));
    temp_a1 = arg0 + 0x24;
    if ((s32) temp_v0 >= 0) {
        temp_a2 = ((((s32) temp_v1 >> 9) & 0x7F) << 8) | temp_v0;
        arg0 = arg0;
        temp_v0_2 = Item_DropCollectible(arg1, temp_a1, temp_a2);
        sp3C = temp_v0_2;
        if (temp_v0_2 != 0) {
            SysMatrix_StatePush();
            Matrix_RotateY(arg0->actor.shape.rot.y, 0U);
            SysMatrix_InsertXRotation_s(arg0->actor.shape.rot.x, 1);
            SysMatrix_InsertZRotation_s(arg0->actor.shape.rot.z, 1);
            SysMatrix_GetStateTranslationAndScaledY(1.0f, (Vec3f *) &sp30);
            temp_f0 = (bitwise f32) Math3D_Parallel((Vec3f *) &sp30, &D_8095F778);
            if (temp_f0 < 0.707f) {
                sp2C = temp_f0;
                temp_a0 = sp3C->actor.world.rot.y;
                temp_v1_2 = Math_FAtan2F(sp38, sp30) - temp_a0;
                phi_v0 = (s32) temp_v1_2;
                if ((s32) temp_v1_2 < 0) {
                    phi_v0 = -(s32) temp_v1_2;
                }
                if (phi_v0 >= 0x4001) {
                    sp3C->actor.world.rot.y = temp_a0 + 0x8000;
                }
                temp_f2 = temp_f0 + 0.5f;
                phi_f2 = temp_f2;
                if (temp_f2 < 0.5f) {
                    phi_f2 = 0.5f;
                }
                sp3C->actor.velocity.y *= phi_f2;
            }
            SysMatrix_StatePop();
        }
    }
}

void func_8095E14C(EnIshi *arg0) {
    f32 temp_f0;

    temp_f0 = arg0->actor.minVelocityY;
    arg0->actor.velocity.y += arg0->actor.gravity;
    if (arg0->actor.velocity.y < temp_f0) {
        arg0->actor.velocity.y = temp_f0;
    }
}

void func_8095E180(Vec3f *arg0, f32 arg1) {
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;

    arg1 = arg1;
    temp_f2 = arg0->x;
    temp_f14 = arg0->y;
    temp_f16 = arg0->z;
    temp_f12 = arg1 + (((Rand_ZeroOne() * 0.2f) - 0.1f) * arg1);
    temp_f18 = temp_f16 * temp_f12;
    temp_f10 = temp_f14 - (temp_f14 * temp_f12);
    arg0->x = temp_f2 - (temp_f2 * temp_f12);
    arg0->y = temp_f10;
    arg0->z = temp_f16 - temp_f18;
}

void func_8095E204(EnIshi *arg0, GlobalContext *arg1) {
    s32 temp_s1;
    s32 phi_s1;

    phi_s1 = 0;
loop_1:
    temp_s1 = phi_s1 + 1;
    phi_s1 = temp_s1;
    if (Actor_SpawnAsChildAndCutscene(arg1 + 0x1CA0, arg1, 0x16, arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, 1, (u32) arg0->actor.cutscene, (s32) arg0->actor.unk20, NULL) != 0) {
        if (temp_s1 != 3) {
            goto loop_1;
        }
    }
}

s32 func_8095E2B0(EnIshi *arg0, GlobalContext *arg1) {
    ? sp30;
    f32 sp2C;
    ? sp28;

    if ((func_800C9EBC(arg1, arg1 + 0x830, arg0->actor.world.pos.x, arg0->actor.world.pos.z, &sp2C, &sp30, &sp28) != 0) && (arg0->actor.world.pos.y < sp2C)) {
        return 1;
    }
    return 0;
}

void EnIshi_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp34;
    s32 sp30;
    s32 sp28;
    f32 *sp24;
    f32 *temp_v0_2;
    s16 temp_v0;
    s32 temp_a2;
    s32 temp_v1;
    s32 temp_v1_3;
    u32 temp_v1_2;
    EnIshi *this = (EnIshi *) thisx;

    temp_v0 = this->actor.params;
    temp_a2 = temp_v0 & 1;
    temp_v1 = ((s32) temp_v0 >> 2) & 1;
    if ((temp_a2 == 0) && (temp_v1 != 0)) {
        this->unk_197 |= 2;
    }
    sp30 = temp_v1;
    sp34 = temp_a2;
    Actor_ProcessInitChain((Actor *) this, (temp_a2 * 0x14) + &D_8095F784);
    if (globalCtx->csCtx.state != 0) {
        this->actor.uncullZoneForward += 1000.0f;
    }
    if ((this->actor.shape.rot.y == 0) && ((this->unk_197 & 2) == 0)) {
        sp34 = temp_a2;
        temp_v1_2 = Rand_Next() >> 0x10;
        this->actor.world.rot.y = (s16) temp_v1_2;
        this->actor.shape.rot.y = (s16) temp_v1_2;
    }
    temp_v1_3 = (temp_v0 & 1) * 4;
    temp_v0_2 = temp_v1_3 + &D_8095F6B8;
    sp24 = temp_v0_2;
    sp28 = temp_v1_3;
    Actor_SetScale((Actor *) this, *temp_v0_2);
    func_8095D6E0((Actor *) this, globalCtx);
    if ((sp24 == &D_8095F6BC) && (Flags_GetSwitch(globalCtx, ((s32) this->actor.params >> 9) & 0x7F) != 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    CollisionCheck_SetInfo(&this->actor.colChkInfo, NULL, &D_8095F744);
    if (sp24 == &D_8095F6BC) {
        this->actor.shape.shadowDraw = func_800B3FC0;
        this->actor.shape.shadowScale = 2.3f;
    } else {
        this->actor.shape.shadowAlpha = 0xA0;
        this->actor.shape.shadowScale = 2.4f;
    }
    this->actor.shape.yOffset = *(&D_8095F6C0 + sp28);
    if ((sp30 == 0) && (func_8095D758((Actor *) this, globalCtx, 0.0f) == 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (func_8095E2B0(this, globalCtx) != 0) {
        this->unk_197 |= 1;
    }
    this->unk_196 = Object_GetIndex(&globalCtx->objectCtx, *(&D_8095F6E8 + ((((s32) this->actor.params >> 3) & 1) * 2)));
    if ((s32) this->unk_196 < 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    func_8095E5AC(this);
}

void EnIshi_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnIshi *this = (EnIshi *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
}

void func_8095E5AC(EnIshi *arg0) {
    arg0->actionFunc = func_8095E5C0;
}

void func_8095E5C0(EnIshi *this, GlobalContext *globalCtx) {
    s8 temp_a1;

    temp_a1 = this->unk_196;
    this = this;
    if (Object_IsLoaded(&globalCtx->objectCtx, (s32) temp_a1) != 0) {
        this->actor.flags &= -0x11;
        this->actor.objBankIndex = this->unk_196;
        if ((((s32) this->actor.params >> 3) & 1) == 0) {
            this->actor.draw = func_8095F61C;
        } else {
            this->actor.draw = func_8095F654;
        }
        func_8095E64C(this);
    }
}

void func_8095E64C(EnIshi *arg0) {
    arg0->actionFunc = func_8095E660;
}

void func_8095E660(EnIshi *this, GlobalContext *globalCtx) {
    s32 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a2;
    CollisionCheckContext *temp_a1;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_v0_2;
    s32 temp_v1;
    s8 temp_v0_3;
    u8 temp_v0;

    temp_v0 = this->unk_144.base.acFlags;
    temp_v1 = (temp_v0 & 2) != 0;
    temp_t0 = this->actor.params & 1;
    temp_a3 = this->unk_197 & 2;
    if (temp_v1 != 0) {
        this->unk_144.base.acFlags = temp_v0 & 0xFFFD;
    }
    sp34 = temp_v1;
    sp30 = temp_a3;
    sp38 = temp_t0;
    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        sp38 = temp_t0;
        func_8095E934(this);
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x14, *(&D_8095F7AC + (temp_t0 * 2)));
        if ((((s32) this->actor.params >> 1) & 1) != 0) {
            func_8095E204(this, globalCtx);
        }
        this->actor.shape.shadowDraw = func_800B3FC0;
        return;
    }
    if ((temp_v1 != 0) && (temp_t0 == 0) && ((this->unk_144.info.acHitInfo->toucher.dmgFlags & 0x508) != 0)) {
        if (temp_a3 != 0) {
            func_8095DFF0(this, globalCtx);
            func_8095F060(this);
            return;
        }
        sp38 = temp_t0;
        func_8095DF90(this, globalCtx);
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, (s32) *(&D_8095F6D4 + temp_t0), *(&D_8095F6D0 + (temp_t0 * 2)));
        temp_v0_2 = temp_t0 * 4;
        sp2C = temp_v0_2;
        *(&D_8095F6D8 + temp_v0_2)(this, globalCtx);
        *(&D_8095F6E0 + temp_v0_2)(this, globalCtx);
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (temp_v1 != 0) {
        this->unk_195 = 5;
    }
    temp_a1 = &globalCtx->colChkCtx;
    temp_a2 = &this->unk_144;
    if ((this->actor.xzDistToPlayer < 600.0f) || (temp_a3 != 0)) {
        temp_v0_3 = this->unk_195;
        if ((s32) temp_v0_3 > 0) {
            this->unk_195 = temp_v0_3 - 1;
            if (this->unk_195 == 0) {
                this->unk_144.base.colType = *(&D_8095F6EC + (temp_t0 * 0x2C));
            } else {
                this->unk_144.base.colType = 0xA;
            }
        }
        sp2C = (s32) temp_a1;
        sp28 = temp_a2;
        sp30 = temp_a3;
        sp38 = temp_t0;
        CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2);
        CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2);
        if ((this->actor.xzDistToPlayer < 90.0f) && (temp_a3 == 0)) {
            if (temp_t0 == 1) {
                func_800B8A1C((Actor *) this, globalCtx, 0, 80.0f, 20.0f);
                return;
            }
            func_800B8A1C((Actor *) this, globalCtx, 0, 50.0f, 10.0f);
            /* Duplicate return node #25. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #25. Try simplifying control flow for better match */
    }
}

void func_8095E934(EnIshi *arg0) {
    arg0->actionFunc = func_8095E95C;
    arg0->actor.room = -1;
    arg0->actor.flags |= 0x10;
}

void func_8095E95C(EnIshi *this, GlobalContext *globalCtx) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s32 sp2C;
    s16 temp_v0;

    if (Actor_HasNoParent((Actor *) this, globalCtx) != 0) {
        temp_v0 = this->actor.params;
        this->actor.room = globalCtx->roomCtx.currRoom.num;
        if ((temp_v0 & 1) == 1) {
            Actor_SetSwitchFlag(globalCtx, ((s32) temp_v0 >> 9) & 0x7F);
        }
        func_8095EA70(this);
        func_8095E14C(this);
        func_8095E180(&this->actor.velocity, *(&D_8095F6C8 + ((this->actor.params & 1) * 4)));
        Actor_ApplyMovement((Actor *) this);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 7.5f, 35.0f, 0.0f, 0xC5U);
        return;
    }
    sp30 = this->actor.world.pos.x;
    sp34 = this->actor.world.pos.y + 20.0f;
    sp38 = this->actor.world.pos.z;
    this->actor.floorHeight = func_800C411C(&globalCtx->colCtx, &this->actor.floorPoly, &sp2C, (Actor *) this, (Vec3f *) &sp30);
}

void func_8095EA70(EnIshi *arg0) {
    f32 sp24;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f6;

    arg0->actor.velocity.x = Math_SinS(arg0->actor.world.rot.y) * arg0->actor.speedXZ;
    arg0->actor.velocity.z = Math_CosS(arg0->actor.world.rot.y) * arg0->actor.speedXZ;
    if ((arg0->actor.params & 1) == 0) {
        temp_f2 = Rand_ZeroOne() - 0.9f;
        temp_f4 = temp_f2 * 11000.0f;
        sp24 = temp_f2;
        D_8095F690 = (s16) (s32) temp_f4;
        D_8095F694 = (s16) (s32) ((fabsf(sp24) + 0.1f) * ((Rand_ZeroOne() - 0.5f) * 3000.0f));
    } else {
        temp_f2_2 = Rand_ZeroOne() - 0.5f;
        temp_f6 = temp_f2_2 * 6000.0f;
        sp24 = temp_f2_2;
        D_8095F690 = (s16) (s32) temp_f6;
        D_8095F694 = (s16) (s32) ((fabsf(sp24) + 0.5f) * ((Rand_ZeroOne() - 0.5f) * 1200.0f));
    }
    arg0->actor.colChkInfo.mass = 0xC8;
    arg0->unk_194 = 0x64;
    arg0->actionFunc = func_8095EBDC;
}

void func_8095EBDC(EnIshi *this, GlobalContext *globalCtx) {
    s32 sp70;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    ? (**temp_s1_3)(EnIshi *, GlobalContext *);
    ColliderCylinder *temp_s0;
    CollisionCheckContext *temp_s1_2;
    s16 temp_s0_3;
    s16 temp_v0_2;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_v0;
    u16 temp_v1_2;
    u8 temp_v1;
    s16 phi_s0;
    s32 phi_s1;

    sp70 = this->actor.params & 1;
    temp_v1 = this->unk_144.base.atFlags;
    temp_v0 = (temp_v1 & 2) != 0;
    if (temp_v0 != 0) {
        this->unk_144.base.atFlags = temp_v1 & 0xFFFD;
    }
    temp_v1_2 = this->actor.bgCheckFlags;
    this->unk_194 += -1;
    if (((temp_v1_2 & 9) != 0) || (temp_v0 != 0) || ((s32) this->unk_194 <= 0)) {
        func_8095DF90(this, globalCtx);
        temp_s0_2 = sp70 * 4;
        temp_s1_3 = temp_s0_2 + &D_8095F6D8;
        *temp_s1_3(this, globalCtx);
        if ((this->actor.bgCheckFlags & 0x20) == 0) {
            Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, (s32) *(&D_8095F6D4 + sp70), *(&D_8095F6D0 + (sp70 * 2)));
            *(&D_8095F6E0 + temp_s0_2)(this, globalCtx);
        }
        if (temp_s1_3 == &D_8095F6DC) {
            temp_v0_2 = Quake_Add(globalCtx->cameraPtrs[globalCtx->activeCamera], 3U);
            temp_s0_3 = temp_v0_2;
            Quake_SetSpeed(temp_v0_2, 0x4350);
            Quake_SetQuakeValues(temp_s0_3, 3, 0, 0, (s16) 0);
            Quake_SetCountdown(temp_s0_3, 7);
            func_8013ECE0(this->actor.xyzDistToPlayerSq, 0xFFU, 0x14U, 0x96U);
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((temp_v1_2 & 0x40) != 0) {
        phi_s0 = 0;
        if (sp70 == 0) {
            sp58 = this->actor.world.pos.x;
            sp5C = this->actor.world.pos.y + this->actor.yDistToWater;
            sp60 = this->actor.world.pos.z;
            EffectSsGSplash_Spawn(globalCtx, (Vec3f *) &sp58, NULL, NULL, (s16) 0, (s16) 0x15E);
            EffectSsGRipple_Spawn(globalCtx, (Vec3f *) &sp58, 0x96, 0x28A, (s16) 0);
        } else {
            sp5C = this->actor.world.pos.y + this->actor.yDistToWater;
            phi_s1 = 0;
            do {
                sp58 = (Math_SinS((s16) ((s32) (Rand_ZeroOne() * 2000.0f) + phi_s0)) * 50.0f) + this->actor.world.pos.x;
                sp60 = (Math_CosS((s16) ((s32) (Rand_ZeroOne() * 2000.0f) + phi_s0)) * 50.0f) + this->actor.world.pos.z;
                EffectSsGSplash_Spawn(globalCtx, (Vec3f *) &sp58, NULL, NULL, (s16) 0, (s16) 0x15E);
                temp_s1 = phi_s1 + 1;
                phi_s0 = (s16) (phi_s0 + 0x1746);
                phi_s1 = temp_s1;
            } while (temp_s1 != 0xB);
            sp58 = this->actor.world.pos.x;
            sp60 = this->actor.world.pos.z;
            EffectSsGRipple_Spawn(globalCtx, (Vec3f *) &sp58, 0x1F4, 0x384, (s16) 4);
        }
        this->actor.minVelocityY = -6.0f;
        this->actor.velocity.x *= 0.12f;
        this->actor.velocity.y *= 0.4f;
        this->actor.velocity.z *= 0.12f;
        this->actor.gravity *= 0.5f;
        D_8095F690 = (s16) ((s32) D_8095F690 >> 2);
        D_8095F694 = (s16) ((s32) D_8095F694 >> 2);
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x28, 0x28C5U);
        this->actor.bgCheckFlags &= 0xFFBF;
    }
    Math_StepToF(&this->actor.shape.yOffset, 0.0f, 2.0f);
    func_8095E14C(this);
    func_8095E180(&this->actor.velocity, *(&D_8095F6C8 + (sp70 * 4)));
    Actor_ApplyMovement((Actor *) this);
    this->actor.shape.rot.x += D_8095F690;
    this->actor.shape.rot.y += D_8095F694;
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 7.5f, 35.0f, 0.0f, 0xC5U);
    temp_s0 = &this->unk_144;
    Collider_UpdateCylinder((Actor *) this, temp_s0);
    temp_s1_2 = &globalCtx->colChkCtx;
    CollisionCheck_SetOC(globalCtx, temp_s1_2, (Collider *) temp_s0);
    CollisionCheck_SetAT(globalCtx, temp_s1_2, (Collider *) temp_s0);
}

void func_8095F060(EnIshi *arg0) {
    s8 temp_a0;

    temp_a0 = arg0->actor.cutscene;
    arg0->actor.flags |= 0x10;
    arg0 = arg0;
    ActorCutscene_SetIntentToPlay((s16) temp_a0);
    arg0->actionFunc = func_8095F0A4;
}

void func_8095F0A4(EnIshi *this, GlobalContext *globalCtx) {
    s32 sp28;
    s32 sp24;
    s32 temp_v0;

    sp28 = this->actor.params & 1;
    if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, (s32) *(&D_8095F6D4 + sp28), *(&D_8095F6D0 + (sp28 * 2)));
        temp_v0 = sp28 * 4;
        sp24 = temp_v0;
        *(&D_8095F6D8 + temp_v0)(this, globalCtx);
        *(&D_8095F6E0 + temp_v0)(this, globalCtx);
        this->actor.draw = NULL;
        func_8095F180(this);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
}

void func_8095F180(EnIshi *arg0) {
    arg0->actionFunc = func_8095F194;
}

void func_8095F194(EnIshi *this, GlobalContext *globalCtx) {
    if ((s32) this->actor.cutscene < 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (ActorCutscene_GetCurrentIndex() != this->actor.cutscene) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void EnIshi_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnIshi *this = (EnIshi *) thisx;
    this->actionFunc(this, globalCtx);
}

void func_8095F210(void *arg0, GlobalContext *arg1) {
    s32 sp28;
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    f32 temp_f0;
    s32 temp_f8;

    temp_f0 = arg0->unk_F4;
    if ((temp_f0 <= 1200.0f) || (((arg0->unk_197 & 1) != 0) && (temp_f0 < 1300.0f))) {
        func_800BDFC0(arg1, (Gfx *) &D_050066B0);
        return;
    }
    if (temp_f0 < 1300.0f) {
        temp_a0 = arg1->state.gfxCtx;
        arg1 = arg1;
        arg0 = arg0;
        sp24 = temp_a0;
        func_8012C2DC(temp_a0);
        temp_f8 = (s32) ((1300.0f - arg0->unk_F4) * 2.55f);
        temp_v0 = sp24->polyXlu.p;
        sp24->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp28 = temp_f8;
        sp24 = sp24;
        sp1C = temp_v0;
        sp1C->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_2 = sp24->polyXlu.p;
        sp24->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFA000000;
        temp_v0_2->words.w1 = (temp_f8 & 0xFF) | ~0xFF;
        temp_v0_3 = sp24->polyXlu.p;
        sp24->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDE000000;
        temp_v0_3->words.w1 = (u32) &D_05006760;
    }
}

void func_8095F36C(void *arg0, GraphicsContext **arg1) {
    GraphicsContext *sp38;
    Gfx *sp2C;
    f32 sp20;
    Gfx *sp18;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_a2;
    f32 temp_f0;
    f32 temp_f2;

    temp_f0 = arg0->unk_F4;
    temp_a2 = *arg1;
    if ((temp_f0 <= 2150.0f) || (((arg0->unk_197 & 1) != 0) && (temp_f0 < 2250.0f))) {
        arg0->unk_D0 = 0xA0;
        sp38 = temp_a2;
        func_8012C28C(*arg1);
        temp_v0_5 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDB060020;
        temp_v0_5->words.w1 = (u32) D_801AEFA0;
        temp_v0_6 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDA380003;
        sp38 = temp_a2;
        sp2C = temp_v0_6;
        sp2C->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_7 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_v0_7 + 8;
        temp_v0_7->words.w1 = -1;
        temp_v0_7->words.w0 = 0xFA000000;
        temp_v0_8 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_v0_8 + 8;
        temp_v0_8->words.w1 = (u32) &D_050061E8;
        temp_v0_8->words.w0 = 0xDE000000;
        return;
    }
    if (temp_f0 < 2250.0f) {
        temp_f2 = (2250.0f - temp_f0) * 2.55f;
        arg0->unk_D0 = (s8) (u32) (temp_f2 * 0.627451f);
        sp20 = temp_f2;
        sp38 = temp_a2;
        func_8012C2DC(*arg1);
        temp_v0 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        temp_v0->words.w1 = (u32) D_801AEF88;
        temp_v0_2 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDA380003;
        sp38 = temp_a2;
        sp18 = temp_v0_2;
        sp18->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_3 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFA000000;
        temp_v0_3->words.w1 = ((s32) sp20 & 0xFF) | ~0xFF;
        temp_v0_4 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = (u32) &D_050061E8;
        temp_v0_4->words.w0 = 0xDE000000;
        return;
    }
    arg0->unk_D0 = 0;
}

void func_8095F61C(Actor *this, GlobalContext *globalCtx) {
    *(&D_8095F7B0 + ((this->params & 1) * 4))();
}

void func_8095F654(Actor *this, GlobalContext *globalCtx) {
    func_800BDFC0(globalCtx, &D_060009B0);
}
