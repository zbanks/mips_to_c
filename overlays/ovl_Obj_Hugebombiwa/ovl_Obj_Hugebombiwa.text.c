typedef struct ObjHugebombiwa {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ char pad_190[0x324];                /* maybe part of unk_144[11]? */
    /* 0x4B4 */ void (*actionFunc)(ObjHugebombiwa *, GlobalContext *);
} ObjHugebombiwa;                                   /* size = 0x4B8 */

struct _mips2c_stack_ObjHugebombiwa_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjHugebombiwa_Draw {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x24];
};                                                  /* size = 0x60 */

struct _mips2c_stack_ObjHugebombiwa_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_ObjHugebombiwa_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A53BE0 {
    /* 0x00 */ char pad_0[0xB0];
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
};                                                  /* size = 0xC8 */

struct _mips2c_stack_func_80A53E60 {
    /* 0x00 */ char pad_0[0xD0];
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ f32 spDC;                            /* inferred */
    /* 0xE0 */ f32 spE0;                            /* inferred */
    /* 0xE4 */ f32 spE4;                            /* inferred */
};                                                  /* size = 0xE8 */

struct _mips2c_stack_func_80A541F4 {
    /* 0x000 */ char pad_0[0xC4];
    /* 0x0C4 */ f32 spC4;                           /* inferred */
    /* 0x0C8 */ f32 spC8;                           /* inferred */
    /* 0x0CC */ f32 spCC;                           /* inferred */
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
    /* 0x0F8 */ f32 spF8;                           /* inferred */
    /* 0x0FC */ f32 spFC;                           /* inferred */
    /* 0x100 */ char pad_100[0x10];
};                                                  /* size = 0x110 */

struct _mips2c_stack_func_80A54600 {
    /* 0x00 */ char pad_0[0xA0];
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ char pad_A4[0x1C];                   /* maybe part of spA0[8]? */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
};                                                  /* size = 0xD8 */

struct _mips2c_stack_func_80A54980 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A54A0C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A54BF0 {};              /* size 0x0 */

struct _mips2c_stack_func_80A54C04 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Collider *sp1C;                      /* inferred */
    /* 0x20 */ CollisionCheckContext *sp20;         /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A54CD8 {};              /* size 0x0 */

struct _mips2c_stack_func_80A54CEC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ PosRot *sp20;                        /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A54E10 {
    /* 0x00 */ char pad_0[0x84];
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ char pad_90[0x18];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_80A55064 {
    /* 0x00 */ char pad_0[0x98];
    /* 0x98 */ s32 sp98;                            /* inferred */
    /* 0x9C */ CollisionPoly *sp9C;                 /* inferred */
    /* 0xA0 */ char pad_A0[0x4];
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ char pad_B0[0x8];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_80A55310 {
    /* 0x00 */ char pad_0[0x84];
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ char pad_90[0x18];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_80A55564 {
    /* 0x00 */ char pad_0[0x98];
    /* 0x98 */ s32 sp98;                            /* inferred */
    /* 0x9C */ CollisionPoly *sp9C;                 /* inferred */
    /* 0xA0 */ char pad_A0[0x4];
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ char pad_B0[0x8];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_80A55B34 {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ GraphicsContext *sp5C;               /* inferred */
    /* 0x60 */ char pad_60[0x10];
};                                                  /* size = 0x70 */

void func_80A53BE0(GlobalContext *arg0, PosRot *arg1); /* static */
void func_80A53E60(GlobalContext *arg0, void *arg1, f32 arg2, f32 arg3); /* static */
void func_80A541F4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A54600(GlobalContext *arg0, void *arg1, f32 arg2, f32 arg3); /* static */
void func_80A54980(Actor *arg0, GlobalContext *arg1, s16 arg2); /* static */
s32 func_80A54A0C(void *arg0, void *);              /* static */
void func_80A54BF0(ObjHugebombiwa *arg0);           /* static */
void func_80A54C04(void *arg0, GlobalContext *arg1); /* static */
void func_80A54CD8(void *arg0);                     /* static */
void func_80A54CEC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A54E10(Actor *arg0);                    /* static */
void func_80A55064(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A55310(Actor *arg0);                    /* static */
void func_80A55564(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A55B34(Actor *this, GlobalContext *globalCtx); /* static */
extern Gfx D_060009E0;
extern Gfx D_06001820;
extern Gfx D_06001990;
extern ? D_06002F60;
extern ? D_06003110;
static ColliderCylinderInit D_80A55D00 = {
    {0xC, 0, 0xD, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0x81C37BB6, 0, 0}, 0, 1, 1},
    {0xB4, 0xE2, 0, {0, 0, 0}},
};
static Vec3f D_80A55D2C = {0.0f, 0.3f, 0.0f};
static Color_RGBA8 D_80A55D38 = {0xD2, 0xD2, 0xD2, 0xFF};
static Color_RGBA8 D_80A55D3C = {0x8C, 0x8C, 0x8C, 0xFF};
static f32 D_80A55D40[4] = {3.0f, 5.0f, 9.0f, 18.0f};
static ? D_80A55D50;                                /* unable to generate initializer */
static ? D_80A55D60;                                /* unable to generate initializer */
static s8 D_80A55D70 = 0;
static ? D_80A55D74;                                /* unable to generate initializer */
static InitChainEntry D_80A55D7C[5];                /* unable to generate initializer */

void func_80A53BE0(GlobalContext *arg0, PosRot *arg1) {
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 *temp_s5;
    f32 *temp_s7;
    f32 temp_f6;
    f32 temp_f6_2;
    s32 temp_s0;
    s32 phi_s0;
    s32 phi_s2;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_s1;

    temp_s7 = &spB0;
    temp_s5 = &spBC;
    phi_s0 = 0;
    phi_s2 = -0x12C;
    do {
        temp_f6 = (Rand_ZeroOne() - 0.5f) * 260.0f;
        spBC = temp_f6;
        spC0 = (f32) phi_s0 * 13.333333f;
        spC4 = (Rand_ZeroOne() - 0.5f) * 260.0f;
        spB0 = ((Rand_ZeroOne() - 0.5f) * 5.7f) + (spBC * 0.035f);
        spB4 = (Rand_ZeroOne() * 16.0f) + 5.0f + ((f32) (0x10 - phi_s0) * 0.25f);
        temp_f6_2 = temp_f6;
        spB8 = ((Rand_ZeroOne() - 0.5f) * 5.7f) + (spC4 * 0.035f);
        spBC = temp_f6_2 + arg1->pos.x;
        spC0 += arg1->pos.y;
        spC4 += arg1->pos.z;
        phi_v0 = 0x25;
        if (phi_s0 >= 0xE) {
            phi_s1 = 0x46;
        } else {
            phi_v0 = 0x41;
            if (phi_s0 >= 0xC) {
                phi_s1 = 0x46;
            } else {
                phi_v0 = 0x20;
                phi_s1 = 0x28;
                if (Rand_ZeroOne() < 0.7f) {
                    phi_v0 = 0x40;
                }
            }
        }
        phi_v1 = (s32) (s16) phi_s0;
        if ((s32) (s16) phi_s0 <= 0) {
            phi_v1 = 1;
        }
        EffectSsKakera_Spawn(arg0, (Vec3f *) temp_s5, (Vec3f *) temp_s7, (Vec3f *) temp_s5, (s16) phi_s2, (s16) phi_v0, (s16) 0xF, (s16) 0, (s16) 0, (s16) phi_v1, (s16) 1, (s16) 0, phi_s1, (s16) -1, (s16) 0x12A, &D_06001990);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
        phi_s2 += -0x1E;
    } while (temp_s0 != 0x10);
}

void func_80A53E60(GlobalContext *arg0, void *arg1, f32 arg2, f32 arg3) {
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 *temp_s4;
    f32 *temp_s7;
    f32 temp_f0;
    s16 temp_s0;
    s32 temp_s1;
    s32 phi_s1;
    f32 *phi_s2;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_s0;

    temp_s7 = &spD0;
    temp_s4 = &spDC;
    phi_s1 = -0x12C;
    phi_s2 = D_80A55D40;
    do {
        spDC = (Rand_ZeroOne() - 0.5f) * 11.0f;
        spE0 = (Rand_ZeroOne() - 0.2f) * 8.0f;
        spE4 = (Rand_ZeroOne() - 0.5f) * 11.0f;
        spD0 = ((Rand_ZeroOne() - 0.5f) * 5.0f) + (spDC * 1.4f);
        spD4 = (Rand_ZeroOne() * 13.0f) + 8.2f + (arg2 * -0.26f);
        spD8 = ((Rand_ZeroOne() - 0.5f) * 5.0f) + (spE4 * 1.4f);
        spDC += arg1->unk_0;
        spE0 += arg1->unk_4;
        spE4 += arg1->unk_8;
        phi_v0 = 0x21;
        if (phi_s1 == -0x1E0) {
            phi_s0 = 0x46;
        } else {
            phi_v0 = 0x41;
            if (phi_s1 == -0x1A4) {
                phi_s0 = 0x46;
            } else {
                phi_v0 = 0x20;
                phi_s0 = 0x28;
                if (Rand_ZeroOne() < 0.7f) {
                    phi_v0 = 0x40;
                }
            }
        }
        temp_f0 = *phi_s2 * arg3;
        if (temp_f0 <= 1.0f) {
            phi_v1 = 1;
        } else {
            phi_v1 = (s32) temp_f0;
        }
        EffectSsKakera_Spawn(arg0, (Vec3f *) temp_s4, (Vec3f *) temp_s7, (Vec3f *) temp_s4, (s16) phi_s1, (s16) phi_v0, (s16) 0xF, (s16) 0, (s16) 0, (s16) phi_v1, (s16) 1, (s16) 0, phi_s0, (s16) -1, (s16) 0x12A, &D_06001990);
        spDC += (Rand_ZeroOne() - 0.5f) * 270.0f;
        spE0 += (Rand_ZeroOne() - 0.1f) * 150.0f;
        spE4 += (Rand_ZeroOne() - 0.5f) * 270.0f;
        temp_s0 = (s16) (s32) ((Rand_ZeroOne() * 160.0f) + 140.0f);
        func_800B0E48(arg0, (Vec3f *) temp_s4, &D_801D15B0, &D_80A55D2C, &D_80A55D38, &D_80A55D3C, (s16) (s32) temp_s0, (s16) (s32) ((Rand_ZeroOne() * 180.0f) + 120.0f));
        temp_s1 = phi_s1 - 0x3C;
        phi_s1 = temp_s1;
        phi_s2 += 4;
    } while (temp_s1 != -0x21C);
}

void func_80A541F4(Actor *arg0, GlobalContext *arg1) {
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 *temp_fp;
    f32 *temp_s5;
    f32 *temp_s6;
    f32 *temp_s7;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f8;
    s32 temp_s1;
    s16 phi_s2;
    f32 phi_f30;
    s32 phi_s1;

    temp_fp = &spC4;
    temp_s7 = &spD0;
    temp_s6 = &spDC;
    temp_s5 = &spF4;
    phi_s2 = 0;
    phi_f30 = 0.0f;
    phi_s1 = 0;
    do {
        temp_f0 = Rand_ZeroOne();
        temp_f22 = (1.0f - (temp_f0 * temp_f0)) * 120.0f;
        temp_f20 = Math_SinS(phi_s2);
        temp_f0_2 = Math_CosS(phi_s2);
        temp_f24 = temp_f0_2;
        temp_f10 = temp_f0_2 * temp_f22;
        spF4 = (temp_f20 * temp_f22) + arg0->world.pos.x;
        temp_f8 = arg0->world.pos.y + phi_f30;
        spF8 = temp_f8;
        spE8 = temp_f20 * 10.0f;
        spFC = temp_f10 + arg0->world.pos.z;
        spEC = (Rand_ZeroOne() * 18.0f) + 10.0f;
        spF0 = temp_f24 * 10.0f;
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s5, (Vec3f *) &spE8, (Vec3f *) temp_s5, (s16) -0x28A, (s16) 0x25, (s16) 0xF, (s16) 0, (s16) 0, (s16) (s32) *(&D_80A55D50 + ((phi_s1 & 7) * 2)), (s16) 1, (s16) 0, 0x3C, (s16) -1, (s16) 0x12A, &D_060009E0);
        spDC = ((Rand_ZeroOne() - 0.5f) * 230.0f) + spF4;
        spE0 = ((Rand_ZeroOne() - 0.2f) * 200.0f) + temp_f8;
        temp_f4 = (Rand_ZeroOne() - 0.5f) * 230.0f;
        spD4 = -7.0f;
        spD0 = temp_f20 * 7.0f;
        spE4 = temp_f4 + spFC;
        spD8 = temp_f24 * 7.0f;
        spC8 = 0.24f;
        spC4 = temp_f20 * -0.07f;
        spCC = temp_f24 * -0.07f;
        func_800B12F0(arg1, (Vec3f *) temp_s6, (Vec3f *) temp_s7, (Vec3f *) temp_fp, (s16) ((s32) (Rand_ZeroOne() * 800.0f) + 0x3E8), (s16) -0x31, (s16) 0x14);
        spDC = ((Rand_ZeroOne() - 0.5f) * 160.0f) + spF4;
        spE0 = ((Rand_ZeroOne() - 0.2f) * 140.0f) + spF8;
        temp_f6 = (Rand_ZeroOne() - 0.5f) * 160.0f;
        spD4 = 0.0f;
        spD0 = temp_f20 * 15.0f;
        spE4 = temp_f6 + spFC;
        spD8 = temp_f24 * 15.0f;
        spC8 = 0.3f;
        spC4 = temp_f20 * -0.09f;
        spCC = temp_f24 * -0.09f;
        temp_f20_2 = Rand_ZeroOne();
        func_800B12F0(arg1, (Vec3f *) temp_s6, (Vec3f *) temp_s7, (Vec3f *) temp_fp, (s16) ((s32) (temp_f20_2 * 100.0f) + 0x28), (s16) ((s32) (Rand_ZeroOne() * 200.0f) + 0x14), (s16) 0xA);
        temp_s1 = phi_s1 + 1;
        phi_s2 += 0x4E20;
        phi_f30 += 17.692308f;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0xD);
}

void func_80A54600(GlobalContext *arg0, void *arg1, f32 arg2, f32 arg3) {
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spA0;
    f32 *temp_s1;
    f32 *temp_s7;
    f32 temp_f2;
    s16 temp_s0;
    s32 temp_s2;
    s8 temp_v0;
    s32 phi_v0;
    s32 phi_s2;

    spA0 = arg2 * -0.38f;
    temp_s7 = &spC0;
    temp_s1 = &spCC;
    phi_s2 = 0;
    do {
        spCC = (Rand_ZeroOne() - 0.5f) * 11.0f;
        spD0 = (Rand_ZeroOne() - 0.2f) * 8.0f;
        spD4 = (Rand_ZeroOne() - 0.5f) * 11.0f;
        spC0 = ((Rand_ZeroOne() - 0.5f) * 5.0f) + (spCC * 1.4f);
        spC4 = (Rand_ZeroOne() * 13.0f) + 8.2f + spA0;
        temp_v0 = D_80A55D70;
        spC8 = ((Rand_ZeroOne() - 0.5f) * 5.0f) + (spD4 * 1.4f);
        spCC += arg1->unk_0;
        spD0 += arg1->unk_4;
        temp_f2 = *(&D_80A55D60 + (temp_v0 * 4)) * arg3;
        D_80A55D70 = (s8) (temp_v0 + 1) & 3;
        spD4 += arg1->unk_8;
        if (temp_f2 <= 1.0f) {
            phi_v0 = 1;
        } else {
            phi_v0 = (s32) temp_f2;
        }
        EffectSsKakera_Spawn(arg0, (Vec3f *) temp_s1, (Vec3f *) temp_s7, (Vec3f *) temp_s1, (s16) (s32) (s16) ((temp_v0 * -0x5A) - 0x15E), (s16) 0x21, (s16) 0xF, (s16) 0, (s16) 0, (s16) phi_v0, (s16) 1, (s16) 0, 0x46, (s16) -1, (s16) 0x12A, &D_060009E0);
        spCC += (Rand_ZeroOne() - 0.5f) * 270.0f;
        spD0 += (Rand_ZeroOne() - 0.1f) * 150.0f;
        spD4 += (Rand_ZeroOne() - 0.5f) * 270.0f;
        temp_s0 = (s16) (s32) ((Rand_ZeroOne() * 160.0f) + 140.0f);
        func_800B1210(arg0, (Vec3f *) temp_s1, &D_801D15B0, &D_80A55D2C, (s16) (s32) temp_s0, (s16) (s32) ((Rand_ZeroOne() * 180.0f) + 120.0f));
        temp_s2 = phi_s2 + 1;
        phi_s2 = temp_s2;
    } while (temp_s2 != 2);
}

void func_80A54980(Actor *arg0, GlobalContext *arg1, s16 arg2) {
    s16 sp26;
    s16 temp_v0;
    s32 temp_a0;

    temp_v0 = Quake_Add((arg1 + (arg1->activeCamera * 4))->unk_800, 3U);
    temp_a0 = temp_v0 << 0x10;
    sp26 = temp_v0;
    Quake_SetSpeed((s16) (temp_a0 >> 0x10), 0x4E20);
    Quake_SetQuakeValues(sp26, arg2, 0, 0, (s16) 0);
    Quake_SetCountdown(sp26, 7);
    func_8013ECE0(arg0->xyzDistToPlayerSq, 0xFFU, 0x14U, 0x96U);
}

s32 func_80A54A0C(void *arg0) {
    s32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    s32 temp_v0;
    s32 temp_v1;

    if (((arg0->unk_155 & 2) != 0) && (*arg0->unk_180 & 0x80000000) && (temp_v0 = arg0->unk_14C, sp20 = arg0->unk_24, temp_v1 = ((s32) arg0->unk_1C >> 8) & 1, sp24 = arg0->unk_28 + 50.0f, sp28 = arg0->unk_2C, (temp_v0 != 0)) && (sp2C = temp_v1, (Math3D_DistanceSquared((Vec3f *) &sp20, temp_v0 + 0x24) < *(&D_80A55D74 + (temp_v1 * 4))))) {
        return 1;
    }
    return 0;
}

void ObjHugebombiwa_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    ObjHugebombiwa *this = (ObjHugebombiwa *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80A55D7C);
    temp_a1 = &this->unk_144;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    Collider_SetCylinder(globalCtx, sp24, (Actor *) this, &D_80A55D00);
    Collider_UpdateCylinder((Actor *) this, sp24);
    this->actor.colChkInfo.mass = 0xFF;
    if ((((s32) this->actor.params >> 8) & 1) == 1) {
        this->actor.draw = func_80A55B34;
        Actor_SetScale((Actor *) this, 0.74f);
        this->unk_144.dim.radius = 0xCC;
        this->unk_144.dim.height = 0xE6;
    } else {
        Actor_SetScale((Actor *) this, 0.067f);
        this->unk_144.dim.radius = 0x78;
        this->unk_144.dim.height = 0x97;
    }
    func_80A54BF0(this);
}

void ObjHugebombiwa_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjHugebombiwa *this = (ObjHugebombiwa *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
}

void func_80A54BF0(ObjHugebombiwa *arg0) {
    arg0->actionFunc = func_80A54C04;
}

void func_80A54C04(ObjHugebombiwa *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp20;
    Collider *sp1C;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;
    ObjHugebombiwa *temp_a0;
    ObjHugebombiwa *temp_a3;
    s8 temp_a0_2;
    s8 temp_v0;

    temp_a3 = arg0;
    temp_a0 = temp_a3;
    if ((temp_a3->unk_144.base.acFlags & 2) != 0) {
        temp_a3->unk_4B3 = 5;
    }
    arg0 = temp_a3;
    if (func_80A54A0C(temp_a0, temp_a3) != 0) {
        temp_a0_2 = arg0->actor.cutscene;
        arg0 = arg0;
        ActorCutscene_SetIntentToPlay((s16) temp_a0_2);
        func_80A54CD8(arg0);
        return;
    }
    temp_v0 = arg0->unk_4B3;
    arg0->unk_144.base.acFlags &= 0xFFFD;
    if ((s32) temp_v0 > 0) {
        arg0->unk_4B3 = temp_v0 - 1;
        if (arg0->unk_4B3 == 0) {
            arg0->unk_144.base.colType = 0xC;
        } else {
            arg0->unk_144.base.colType = 0xA;
        }
    }
    temp_a2 = arg0 + 0x144;
    temp_a1 = arg1 + 0x18884;
    sp20 = temp_a1;
    sp1C = temp_a2;
    CollisionCheck_SetAC(arg1, temp_a1, temp_a2);
    CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
}

void func_80A54CD8(ObjHugebombiwa *arg0) {
    arg0->actionFunc = func_80A54CEC;
}

void func_80A54CEC(Actor *arg0, GlobalContext *arg1) {
    PosRot *sp20;
    PosRot *temp_a1;
    PosRot *temp_a1_2;
    s16 temp_v1;
    s32 temp_v0;
    s32 phi_v0;

    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
        Actor_SetSwitchFlag(arg1, arg0->params & 0x7F);
        temp_a1 = &arg0->world;
        temp_v0 = ((s32) arg0->params >> 8) & 1;
        phi_v0 = temp_v0;
        if ((temp_v0 == 0) && ((temp_v1 = arg1->sceneNum, (temp_v1 == 0x5D)) || (temp_v1 == 0x5E))) {
            gSaveContext.weekEventReg[19] |= 2;
            phi_v0 = ((s32) arg0->params >> 8) & 1;
        }
        if (phi_v0 == 0) {
            temp_a1_2 = &arg0->world;
            sp20 = temp_a1_2;
            Audio_PlaySoundAtPosition(arg1, (Vec3f *) temp_a1_2, 0x50, 0x2810U);
        } else {
            sp20 = temp_a1;
            Audio_PlaySoundAtPosition(arg1, (Vec3f *) temp_a1, 0x50, 0x28F5U);
        }
        if ((((s32) arg0->params >> 8) & 1) == 0) {
            func_80A53BE0(arg1, sp20);
            func_80A54E10(arg0);
            return;
        }
        func_80A541F4(arg0, arg1);
        func_80A55310(arg0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
}

void func_80A54E10(Actor *arg0) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 *temp_s7;
    f32 temp_f20;
    f32 temp_f20_2;
    s32 temp_s1;
    s32 temp_t8;
    void *temp_s0;
    void *phi_s0;
    s16 phi_s2;
    s32 phi_s3;
    Vec3f *phi_s4;

    SysMatrix_StatePush();
    Matrix_RotateY(arg0->shape.rot.y, 0U);
    temp_s0 = arg0 + 0x190;
    temp_s7 = &sp84;
    phi_s0 = temp_s0;
    phi_s2 = 0x1000;
    phi_s3 = 0;
    phi_s4 = temp_s0 + 0xC;
    do {
        temp_f20 = (Rand_ZeroOne() * 0.06f) + 0.013f;
        phi_s0->unk_0 = (f32) (((Rand_ZeroOne() * 0.6f) + 0.6f) * temp_f20);
        phi_s0->unk_4 = (f32) (((Rand_ZeroOne() * 0.6f) + 0.4f) * temp_f20);
        phi_s0->unk_8 = (f32) (((Rand_ZeroOne() * 0.6f) + 0.6f) * temp_f20);
        temp_f20_2 = (Rand_ZeroOne() * 55.0f) + 47.0f;
        temp_s1 = phi_s3 + 1;
        sp84 = Math_SinS(phi_s2) * temp_f20_2;
        sp88 = (f32) temp_s1 * 10.0f;
        sp8C = fabsf(Math_CosS(phi_s2)) * temp_f20_2;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_s7, phi_s4);
        phi_s0->unk_C = (f32) (phi_s0->unk_C + arg0->world.pos.x);
        phi_s0->unk_10 = (f32) (phi_s0->unk_10 + arg0->world.pos.y);
        phi_s0->unk_14 = (f32) (phi_s0->unk_14 + arg0->world.pos.z);
        phi_s0->unk_1C = phi_s2;
        phi_s0->unk_18 = (f32) (((f32) phi_s3 * 1.04f) + 2.4f);
        phi_s0->unk_1E = (s16) (Rand_Next() >> 0x10);
        phi_s0->unk_20 = 0;
        temp_t8 = (s32) Rand_ZeroFloat(5000.0f);
        phi_s0->unk_24 = 0;
        phi_s0->unk_22 = (s16) temp_t8;
        phi_s0 += 0x28;
        phi_s2 = (s16) (phi_s2 + 0x4000);
        phi_s3 = temp_s1;
        phi_s4 += 0x28;
    } while (temp_s1 != 0x14);
    arg0->unk_4B0 = 0;
    arg0->unk_4B2 = 0x64;
    SysMatrix_StatePop();
    arg0->unk_4B4 = func_80A55064;
}

void func_80A55064(Actor *arg0, GlobalContext *arg1) {
    f32 spAC;
    f32 spA8;
    f32 spA4;
    CollisionPoly *sp9C;
    s32 sp98;
    f32 *temp_t0;
    f32 temp_f0;
    f32 temp_f18;
    f32 temp_f18_2;
    s32 temp_s6;
    void *temp_s0;
    Actor *phi_s4;
    s16 phi_s3;
    s32 phi_s6;

    phi_s4 = arg0;
    phi_s3 = (s16) (arg0->shape.rot.y - 0x4000);
    phi_s6 = 0;
    do {
        temp_s0 = phi_s4 + 0x190;
        if (phi_s4->unk_1B4 == 0) {
            temp_s0->unk_18 = (f32) (temp_s0->unk_18 - 3.0f);
            if (temp_s0->unk_18 < -30.0f) {
                temp_s0->unk_18 = -30.0f;
            }
            temp_f18 = temp_s0->unk_C + (Math_SinS(phi_s3) * 4.0f);
            temp_s0->unk_10 = (f32) (temp_s0->unk_10 + temp_s0->unk_18);
            temp_s0->unk_C = temp_f18;
            temp_t0 = &spA4;
            temp_f18_2 = temp_s0->unk_14 + (Math_CosS(phi_s3) * 4.0f);
            temp_s0->unk_1C = (s16) (temp_s0->unk_1C + temp_s0->unk_22);
            temp_s0->unk_14 = temp_f18_2;
            spA4 = temp_s0->unk_C;
            spA8 = temp_s0->unk_10 + 60.0f;
            spAC = temp_s0->unk_14;
            temp_f0 = func_800C411C(arg1 + 0x830, &sp9C, &sp98, arg0, (Vec3f *) temp_t0);
            if ((temp_f0 <= -31990.0f) || ((temp_s0->unk_10 - (350.0f * temp_s0->unk_4)) < temp_f0)) {
                arg0->unk_4B0 = (s16) (arg0->unk_4B0 + 1);
                temp_s0->unk_24 = 1;
                func_80A53E60(arg1, temp_s0 + 0xC, temp_s0->unk_18, temp_s0->unk_4 * 9.8f);
                if ((arg1->gameplayFrames & 3) == 0) {
                    func_80A54980(arg0, arg1, (s32) (Rand_ZeroOne() * 5.5f) + 1);
                }
            }
        }
        temp_s6 = phi_s6 + 0x28;
        phi_s4 += 0x28;
        phi_s3 = (s16) (phi_s3 + 0x666);
        phi_s6 = temp_s6;
    } while (temp_s6 != 0x320);
    arg0->unk_4B2 = (s8) (arg0->unk_4B2 - 1);
    if (((s32) arg0->unk_4B0 >= 0x14) || ((s32) arg0->unk_4B2 <= 0)) {
        ActorCutscene_Stop((s16) arg0->cutscene);
        Actor_MarkForDeath(arg0);
    }
}

void func_80A55310(Actor *arg0) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 *temp_s7;
    f32 temp_f20;
    f32 temp_f20_2;
    s32 temp_s1;
    s32 temp_t8;
    void *temp_s0;
    void *phi_s0;
    s16 phi_s2;
    s32 phi_s3;
    Vec3f *phi_s4;

    SysMatrix_StatePush();
    Matrix_RotateY(arg0->shape.rot.y, 0U);
    temp_s0 = arg0 + 0x190;
    temp_s7 = &sp84;
    phi_s0 = temp_s0;
    phi_s2 = 0x1000;
    phi_s3 = 0;
    phi_s4 = temp_s0 + 0xC;
    do {
        temp_f20 = (Rand_ZeroOne() * 0.09f) + 0.016f;
        phi_s0->unk_0 = (f32) (((Rand_ZeroOne() * 0.1f) + 0.95f) * temp_f20);
        phi_s0->unk_4 = (f32) (((Rand_ZeroOne() * 0.1f) + 0.95f) * temp_f20);
        phi_s0->unk_8 = (f32) (((Rand_ZeroOne() * 0.1f) + 0.95f) * temp_f20);
        temp_f20_2 = (Rand_ZeroOne() * 85.0f) + 77.0f;
        temp_s1 = phi_s3 + 1;
        sp84 = Math_SinS(phi_s2) * temp_f20_2;
        sp88 = (f32) temp_s1 * 14.0f;
        sp8C = fabsf(Math_CosS(phi_s2)) * temp_f20_2;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_s7, phi_s4);
        phi_s0->unk_C = (f32) (phi_s0->unk_C + arg0->world.pos.x);
        phi_s0->unk_10 = (f32) (phi_s0->unk_10 + arg0->world.pos.y);
        phi_s0->unk_14 = (f32) (phi_s0->unk_14 + arg0->world.pos.z);
        phi_s0->unk_1C = phi_s2;
        phi_s0->unk_18 = (f32) (((f32) phi_s3 * 1.04f) + 2.4f);
        phi_s0->unk_1E = (s16) (Rand_Next() >> 0x10);
        phi_s0->unk_20 = 0;
        temp_t8 = (s32) Rand_ZeroFloat(5000.0f);
        phi_s0->unk_24 = 0;
        phi_s0->unk_22 = (s16) temp_t8;
        phi_s0 += 0x28;
        phi_s2 = (s16) (phi_s2 + 0x4000);
        phi_s3 = temp_s1;
        phi_s4 += 0x28;
    } while (temp_s1 != 0x14);
    arg0->unk_4B0 = 0;
    arg0->unk_4B2 = 0x64;
    SysMatrix_StatePop();
    arg0->unk_4B4 = func_80A55564;
}

void func_80A55564(Actor *arg0, GlobalContext *arg1) {
    f32 spAC;
    f32 spA8;
    f32 spA4;
    CollisionPoly *sp9C;
    s32 sp98;
    f32 *temp_t0;
    f32 temp_f0;
    f32 temp_f18;
    f32 temp_f18_2;
    s32 temp_s6;
    void *temp_s0;
    Actor *phi_s4;
    s16 phi_s3;
    s32 phi_s6;

    phi_s4 = arg0;
    phi_s3 = (s16) (arg0->shape.rot.y - 0x4000);
    phi_s6 = 0;
    do {
        temp_s0 = phi_s4 + 0x190;
        if (phi_s4->unk_1B4 == 0) {
            temp_s0->unk_18 = (f32) (temp_s0->unk_18 - 3.0f);
            if (temp_s0->unk_18 < -30.0f) {
                temp_s0->unk_18 = -30.0f;
            }
            temp_f18 = temp_s0->unk_C + (Math_SinS(phi_s3) * 4.0f);
            temp_s0->unk_10 = (f32) (temp_s0->unk_10 + temp_s0->unk_18);
            temp_s0->unk_C = temp_f18;
            temp_t0 = &spA4;
            temp_f18_2 = temp_s0->unk_14 + (Math_CosS(phi_s3) * 4.0f);
            temp_s0->unk_1C = (s16) (temp_s0->unk_1C + temp_s0->unk_22);
            temp_s0->unk_14 = temp_f18_2;
            spA4 = temp_s0->unk_C;
            spA8 = temp_s0->unk_10 + 60.0f;
            spAC = temp_s0->unk_14;
            temp_f0 = func_800C411C(arg1 + 0x830, &sp9C, &sp98, arg0, (Vec3f *) temp_t0);
            if ((temp_f0 <= -31990.0f) || (temp_s0->unk_10 < temp_f0)) {
                arg0->unk_4B0 = (s16) (arg0->unk_4B0 + 1);
                temp_s0->unk_24 = 1;
                func_80A54600(arg1, temp_s0 + 0xC, temp_s0->unk_18, temp_s0->unk_4 * 10.1f);
                if ((arg1->gameplayFrames & 3) == 0) {
                    func_80A54980(arg0, arg1, (s32) (Rand_ZeroOne() * 5.5f) + 1);
                }
            }
        }
        temp_s6 = phi_s6 + 0x28;
        phi_s4 += 0x28;
        phi_s3 = (s16) (phi_s3 + 0x666);
        phi_s6 = temp_s6;
    } while (temp_s6 != 0x320);
    arg0->unk_4B2 = (s8) (arg0->unk_4B2 - 1);
    if (((s32) arg0->unk_4B0 >= 0x14) || ((s32) arg0->unk_4B2 <= 0)) {
        ActorCutscene_Stop((s16) arg0->cutscene);
        Actor_MarkForDeath(arg0);
    }
}

void ObjHugebombiwa_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjHugebombiwa *this = (ObjHugebombiwa *) thisx;
    this->actionFunc(this, globalCtx);
}

void ObjHugebombiwa_Draw(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp38;
    Gfx *temp_s1;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a2;
    f32 temp_f0;
    f32 temp_f12;
    s32 temp_s3;
    void (*temp_v0)(ObjHugebombiwa *, GlobalContext *);
    void *temp_s0;
    void *temp_s1_2;
    ObjHugebombiwa *phi_s2;
    Gfx *phi_s1;
    s32 phi_s3;
    Gfx *phi_s1_2;
    ObjHugebombiwa *this = (ObjHugebombiwa *) thisx;

    temp_v0 = this->actionFunc;
    temp_a2 = globalCtx->state.gfxCtx;
    if ((func_80A54C04 == temp_v0) || (func_80A54CEC == temp_v0)) {
        temp_f0 = this->actor.projectedPos.z;
        if (temp_f0 <= 4300.0f) {
            func_8012C28C(temp_a2);
            temp_v0_2 = temp_a2->polyOpa.p;
            temp_a2->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDB060020;
            temp_v0_2->words.w1 = (u32) D_801AEFA0;
            temp_v0_3 = temp_a2->polyOpa.p;
            temp_a2->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDA380003;
            temp_v0_3->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_4 = temp_a2->polyOpa.p;
            temp_a2->polyOpa.p = temp_v0_4 + 8;
            temp_v0_4->words.w1 = -1;
            temp_v0_4->words.w0 = 0xFA0000FF;
            temp_v0_5 = temp_a2->polyOpa.p;
            temp_a2->polyOpa.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDE000000;
            temp_v0_5->words.w1 = (u32) &D_06002F60;
            func_8012C2DC(globalCtx->state.gfxCtx);
            temp_v0_6 = temp_a2->polyXlu.p;
            temp_a2->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDA380003;
            temp_v0_6->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_7 = temp_a2->polyXlu.p;
            temp_a2->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w0 = 0xDE000000;
            temp_v0_7->words.w1 = (u32) &D_06003110;
            return;
        }
        if (temp_f0 < 4500.0f) {
            sp38 = (4500.0f - temp_f0) * 1.275f;
            func_8012C2DC(temp_a2);
            temp_v0_8 = temp_a2->polyXlu.p;
            temp_a2->polyXlu.p = temp_v0_8 + 8;
            temp_v0_8->words.w0 = 0xDB060020;
            temp_v0_8->words.w1 = (u32) D_801AEF88;
            temp_v0_9 = temp_a2->polyXlu.p;
            temp_a2->polyXlu.p = temp_v0_9 + 8;
            temp_v0_9->words.w0 = 0xDA380003;
            temp_v0_9->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_10 = temp_a2->polyXlu.p;
            temp_a2->polyXlu.p = temp_v0_10 + 8;
            temp_v0_10->words.w0 = 0xFA0000FF;
            temp_v0_10->words.w1 = ((s32) sp38 & 0xFF) | ~0xFF;
            temp_v0_11 = temp_a2->polyXlu.p;
            temp_a2->polyXlu.p = temp_v0_11 + 8;
            temp_v0_11->words.w1 = (u32) &D_06002F60;
            temp_v0_11->words.w0 = 0xDE000000;
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return;
    }
    temp_s1 = temp_a2->polyOpa.p;
    temp_s1->words.w1 = (u32) (sSetupDL + 0x4B0);
    temp_s1->words.w0 = 0xDE000000;
    phi_s2 = this;
    phi_s1 = temp_s1 + 8;
    phi_s3 = 0;
    do {
        temp_s0 = phi_s2 + 0x190;
        phi_s1_2 = phi_s1;
        if (phi_s2->unk_1B4 == 0) {
            SysMatrix_SetStateRotationAndTranslation(temp_s0->unk_C, temp_s0->unk_10, temp_s0->unk_14, temp_s0 + 0x1C);
            temp_f12 = temp_s0->unk_0;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            phi_s1->words.w0 = 0xDA380003;
            temp_s1_2 = phi_s1 + 8;
            phi_s1->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_s1_2->unk_0 = 0xDE000000;
            temp_s1_2->unk_4 = &D_06001990;
            phi_s1_2 = temp_s1_2 + 8;
        }
        temp_s3 = phi_s3 + 0x28;
        phi_s2 += 0x28;
        phi_s1 = phi_s1_2;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x320);
    temp_a2->polyOpa.p = phi_s1_2;
}

void func_80A55B34(Actor *this, GlobalContext *globalCtx) {
    GraphicsContext *sp5C;
    Gfx *temp_s1;
    GraphicsContext *temp_t8;
    s32 temp_s3;
    s32 temp_v0;
    void *temp_s0;
    void *temp_s1_2;
    Actor *phi_s2;
    Gfx *phi_s1;
    s32 phi_s3;
    Gfx *phi_s1_2;

    temp_v0 = this->unk_4B4;
    if ((func_80A54C04 == temp_v0) || (func_80A54CEC == temp_v0)) {
        func_800BDFC0(globalCtx, &D_06001820);
        return;
    }
    temp_t8 = globalCtx->state.gfxCtx;
    sp5C = temp_t8;
    temp_s1 = temp_t8->polyOpa.p;
    temp_s1->words.w0 = 0xDE000000;
    temp_s1->words.w1 = (u32) (sSetupDL + 0x4B0);
    phi_s2 = this;
    phi_s1 = temp_s1 + 8;
    phi_s3 = 0;
    do {
        temp_s0 = phi_s2 + 0x190;
        phi_s1_2 = phi_s1;
        if (phi_s2->unk_1B4 == 0) {
            SysMatrix_SetStateRotationAndTranslation(temp_s0->unk_C, temp_s0->unk_10 + (325.0f * temp_s0->unk_4), temp_s0->unk_14, temp_s0 + 0x1C);
            Matrix_Scale(temp_s0->unk_0, temp_s0->unk_4, temp_s0->unk_8, 1);
            SysMatrix_InsertTranslation(0.0f, -325.0f, 0.0f, 1);
            phi_s1->words.w0 = 0xDA380003;
            temp_s1_2 = phi_s1 + 8;
            phi_s1->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_s1_2->unk_0 = 0xDE000000;
            temp_s1_2->unk_4 = &D_060009E0;
            phi_s1_2 = temp_s1_2 + 8;
        }
        temp_s3 = phi_s3 + 0x28;
        phi_s2 += 0x28;
        phi_s1 = phi_s1_2;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x320);
    sp5C->polyOpa.p = phi_s1_2;
}
