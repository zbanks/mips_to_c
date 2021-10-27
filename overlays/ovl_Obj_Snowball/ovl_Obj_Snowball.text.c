typedef struct ObjSnowball {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderJntSph unk_144;             /* inferred */
    /* 0x164 */ ColliderJntSphElement unk_164;      /* inferred */
    /* 0x1A4 */ void (*actionFunc)(ObjSnowball *, GlobalContext *);
    /* 0x1A8 */ char pad_1A8[0x64];                 /* maybe part of actionFunc[26]? */
    /* 0x20C */ f32 unk_20C;                        /* inferred */
    /* 0x210 */ char pad_210[0x1];
    /* 0x211 */ s8 unk_211;                         /* inferred */
    /* 0x212 */ char pad_212[0x2];                  /* maybe part of unk_211[3]? */
} ObjSnowball;                                      /* size = 0x214 */

struct _mips2c_stack_ObjSnowball_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjSnowball_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjSnowball_Init {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x8];                    /* maybe part of sp34[3]? */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0xC];
};                                                  /* size = 0x60 */

struct _mips2c_stack_ObjSnowball_Update {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B02CD0 {
    /* 0x00 */ char pad_0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B02D58 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B02DB0 {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ void *sp48;                          /* inferred */
    /* 0x4C */ char pad_4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80B02E54 {
    /* 0x00 */ char pad_0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B02EE4 {
    /* 0x00 */ char pad_0[0x94];
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_80B030F8 {
    /* 0x000 */ char pad_0[0xE4];
    /* 0x0E4 */ f32 spE4;                           /* inferred */
    /* 0x0E8 */ f32 spE8;                           /* inferred */
    /* 0x0EC */ f32 spEC;                           /* inferred */
    /* 0x0F0 */ f32 spF0;                           /* inferred */
    /* 0x0F4 */ f32 spF4;                           /* inferred */
    /* 0x0F8 */ f32 spF8;                           /* inferred */
    /* 0x0FC */ f32 spFC;                           /* inferred */
    /* 0x100 */ f32 sp100;                          /* inferred */
    /* 0x104 */ f32 sp104;                          /* inferred */
    /* 0x108 */ char pad_108[0x8];
};                                                  /* size = 0x110 */

struct _mips2c_stack_func_80B03688 {
    /* 0x00 */ char pad_0[0xA0];
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ char pad_C4[0x4];
};                                                  /* size = 0xC8 */

struct _mips2c_stack_func_80B03A80 {
    /* 0x00 */ char pad_0[0xA0];
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ char pad_A4[0x28];                   /* maybe part of spA0[11]? */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ f32 spDC;                            /* inferred */
    /* 0xE0 */ f32 spE0;                            /* inferred */
    /* 0xE4 */ char pad_E4[0x4];
};                                                  /* size = 0xE8 */

struct _mips2c_stack_func_80B03E2C {
    /* 0x00 */ char pad_0[0x60];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80B03FF8 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0xC];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B04338 {};              /* size 0x0 */

struct _mips2c_stack_func_80B04350 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Collider *sp18;                      /* inferred */
    /* 0x1C */ CollisionCheckContext *sp1C;         /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B04540 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B0457C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B04608 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B04648 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B046E4 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80B047C0 {
    /* 0x00 */ char pad_0[0x70];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ char pad_80[0x4];
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad_88[0x4];
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ char pad_90[0x8];                    /* maybe part of sp8C[3]? */
    /* 0x98 */ s32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ char pad_A8[0x8];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_80B04B48 {};              /* size 0x0 */

struct _mips2c_stack_func_80B04B60 {};              /* size 0x0 */

struct _mips2c_stack_func_80B04D34 {
    /* 0x00 */ char pad_0[0x80];
    /* 0x80 */ s16 sp80;                            /* inferred */
    /* 0x82 */ s16 sp82;                            /* inferred */
    /* 0x84 */ s16 sp84;                            /* inferred */
    /* 0x86 */ char pad_86[0x2];
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad_88[0x50];
};                                                  /* size = 0xD8 */

void func_80B02CD0(void *arg0, GlobalContext *arg1); /* static */
void func_80B02D58(void *arg0, GlobalContext *arg1); /* static */
void func_80B02DB0(void *arg0, GlobalContext *arg1); /* static */
void func_80B02E54(void *arg0, GlobalContext *arg1); /* static */
void func_80B02EE4(Actor *arg0, GlobalContext *arg1, Actor *); /* static */
void func_80B030F8(void *arg0, GlobalContext *arg1); /* static */
void func_80B03688(GlobalContext *arg0, GlobalContext *arg1); /* static */
void func_80B03A80(GlobalContext *arg0, f32 arg1, f32 *arg2, f32 *); /* static */
void func_80B03E2C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B03FF8(Actor *arg0, GlobalContext *arg1, Actor *); /* static */
void func_80B04338(ObjSnowball *arg0, GlobalContext *arg1); /* static */
void func_80B04350(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B04540(Actor *arg0, GlobalContext *arg1, Actor *); /* static */
void func_80B0457C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B04608(Actor *arg0, GlobalContext *);   /* static */
void func_80B04648(GlobalContext *arg0, s32 arg1);  /* static */
void func_80B046E4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B047C0(Actor *arg0, s32 arg1);          /* static */
void func_80B04B48(Actor *arg0, s32 arg1, Actor *); /* static */
void func_80B04B60(s32 arg0, ? arg1);               /* static */
void func_80B04D34(void *arg0, GlobalContext *arg1); /* static */
extern Gfx D_060082D0;
extern Gfx D_06008B90;
static ColliderJntSphElementInit D_80B04F50 = {{0, {0, 0, 0}, {0x81837FBE, 0, 0}, 0, 1, 1}, {0, {{0, 0, 0}, 0x49}, 0x64}};
static ColliderJntSphInit D_80B04F74 = {{0xA, 0, 9, 0x39, 0x20, 0}, 1, &D_80B04F50};
static ? D_80B04F84;                                /* unable to generate initializer */
static ? D_80B04FAC;                                /* unable to generate initializer */
static Color_RGBA8 D_80B04FB4 = {0xFA, 0xFA, 0xFA, 0xFF};
static Color_RGBA8 D_80B04FB8 = {0xB4, 0xB4, 0xB4, 0xFF};
static Vec3f D_80B04FBC = {0.0f, 0.3f, 0.0f};
static ? D_80B04FC8;                                /* unable to generate initializer */
static InitChainEntry D_80B04FD4;                   /* unable to generate initializer */
static Vec3f D_80B04FD8 = {0.0f, 1.0f, 0.0f};
static Vec3f D_80B04FE4 = {0.0f, 0.0f, 1.0f};

void func_80B02CD0(void *arg0, GlobalContext *arg1) {
    void *temp_v0;

    temp_v0 = (arg0->unk_16 * 8) + &D_80B04F84;
    Actor_SpawnAsChildAndCutscene(arg1 + 0x1CA0, arg1, temp_v0->unk_0, arg0->unk_8, arg0->unk_C, arg0->unk_10, (s16) (s32) arg0->unk_14, (s16) 0, (s16) (s32) arg0->unk_18, (s32) temp_v0->unk_2, -1U, (s32) arg0->unk_20, NULL);
}

void func_80B02D58(void *arg0, GlobalContext *arg1) {
    s16 temp_a0;
    s32 temp_v0;

    temp_a0 = arg0->unk_1C;
    arg0 = arg0;
    temp_v0 = func_800A8150(temp_a0 & 0x3F);
    if (temp_v0 >= 0) {
        Item_DropCollectible(arg1, arg0 + 8, ((((s32) arg0->unk_1C >> 8) & 0x7F) << 8) | temp_v0);
    }
}

void func_80B02DB0(void *arg0, GlobalContext *arg1) {
    void *sp48;
    void *temp_v1;

    temp_v1 = (arg0->unk_16 * 8) + &D_80B04F84;
    sp48 = temp_v1;
    Actor_SpawnAsChildAndCutscene(arg1 + 0x1CA0, arg1, temp_v1->unk_0, arg0->unk_8, arg0->unk_C, arg0->unk_10, (s16) (s32) arg0->unk_14, (s16) 0, (s16) (s32) arg0->unk_18, arg0->unk_1C | temp_v1->unk_2, ActorCutscene_GetAdditionalCutscene((s16) arg0->unk_38), (s32) arg0->unk_20, NULL);
}

void func_80B02E54(void *arg0, GlobalContext *arg1) {
    void *temp_v0;

    temp_v0 = (arg0->unk_16 * 8) + &D_80B04F84;
    Actor_SpawnAsChildAndCutscene(arg1 + 0x1CA0, arg1, temp_v0->unk_0, arg0->unk_8, arg0->unk_C, arg0->unk_10, (s16) (s32) arg0->unk_14, (s16) 0, (s16) (s32) arg0->unk_18, arg0->unk_1C | temp_v0->unk_2, -1U, (s32) arg0->unk_20, NULL);
}

void func_80B02EE4(Actor *arg0, GlobalContext *arg1) {
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 *temp_s2;
    f32 *temp_s3;
    f32 *temp_s4;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f2;
    s32 temp_s1;
    void *temp_s0;
    s32 phi_s1;

    temp_s4 = &spAC;
    temp_s3 = &spA0;
    temp_s2 = &sp94;
    temp_s0 = arg0->unk_160 + 0xE;
    phi_s1 = 0;
    do {
        sp94 = ((Rand_ZeroOne() * 14.0f) - 7.0f) + (f32) temp_s0->unk_0;
        sp98 = ((Rand_ZeroOne() * 14.0f) - 7.0f) + (f32) temp_s0->unk_2;
        sp9C = ((Rand_ZeroOne() * 14.0f) - 7.0f) + (f32) temp_s0->unk_4;
        temp_f16 = (Rand_ZeroOne() - 0.5f) * 1.6f;
        spA4 = -0.8f;
        spA0 = temp_f16;
        temp_f2 = (Rand_ZeroOne() - 0.5f) * 1.6f;
        spA8 = temp_f2;
        spAC = spA0 * -0.06f;
        spB0 = spA4 * -0.06f;
        spB4 = temp_f2 * -0.06f;
        temp_f20 = Rand_ZeroOne();
        func_800B0E48(arg1, (Vec3f *) temp_s2, (Vec3f *) temp_s3, (Vec3f *) temp_s4, &D_80B04FB4, &D_80B04FB8, (s16) ((s32) (temp_f20 * 30.0f) + 0xF), (s16) ((s32) (Rand_ZeroOne() * 40.0f) + 0x1E));
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
    } while (temp_s1 != 4);
}

void func_80B030F8(void *arg0, GlobalContext *arg1) {
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    Gfx *temp_s2;
    Gfx *temp_s2_2;
    f32 *temp_s2_3;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f6;
    s16 temp_s0;
    s16 temp_s0_2;
    s32 temp_s5;
    s32 temp_s5_2;
    s32 temp_s7;
    u32 temp_v1;
    s32 phi_s5;
    s16 phi_s6;
    f32 phi_f22;
    s32 phi_s3;
    s32 phi_s0;
    s32 phi_s4;
    Gfx *phi_s2;
    s16 phi_s6_2;
    s32 phi_s5_2;

    temp_f28 = sqrtf(arg0->unk_20C);
    phi_s5 = 0;
    phi_s6 = 0;
    phi_s6_2 = 0;
    phi_s5_2 = 0;
    do {
        temp_s7 = phi_s5 & 7;
        phi_s3 = -0x118;
        if (temp_s7 < 4) {
            phi_f22 = 1.0f;
            phi_s0 = 0x40;
            phi_s4 = 0;
            phi_s2 = D_80B04FC8.unk_8;
        } else {
            phi_s3 = -0x190;
            if (temp_s7 < 6) {
                temp_s2 = D_80B04FC8.unk_4;
                phi_f22 = 0.9f;
                phi_s3 = -0x154;
                if (Rand_ZeroOne() < 0.4f) {
                    phi_s0 = 0x20;
                    phi_s4 = 0;
                    phi_s2 = temp_s2;
                } else {
                    phi_s0 = 0x40;
                    phi_s4 = 0;
                    phi_s2 = temp_s2;
                }
            } else {
                temp_s2_2 = D_80B04FC8.unk_0;
                phi_f22 = 0.8f;
                phi_s0 = 0x41;
                phi_s4 = 1;
                phi_s2 = temp_s2_2;
                if (Rand_Next() > 0) {
                    phi_s0 = 0x21;
                    phi_s2 = temp_s2_2;
                }
            }
        }
        temp_f20 = (Rand_ZeroOne() * (40.0f * arg0->unk_20C)) + 20.0f;
        temp_f2 = Math_SinS((s16) ((s32) (Rand_ZeroOne() * 2621.44f) + phi_s6)) * temp_f20;
        spFC = temp_f2;
        sp100 = (Rand_ZeroOne() - 0.4f) * temp_f20 * 1.6666666f;
        temp_f10 = temp_f2 * 0.16f;
        sp104 = Math_CosS((s16) ((s32) (Rand_ZeroOne() * 2621.44f) + phi_s6)) * temp_f20;
        spF0 = temp_f10 * phi_f22;
        spF4 = (Rand_ZeroOne() * 16.0f) + 3.0f;
        spF8 = sp104 * 0.16f * phi_f22;
        spFC += arg0->unk_24;
        sp100 += arg0->unk_28;
        sp104 += arg0->unk_2C;
        EffectSsKakera_Spawn(arg1, (Vec3f *) &spFC, (Vec3f *) &spF0, (Vec3f *) &spFC, (s16) phi_s3, (s16) phi_s0, (s16) 0x1E, (s16) 0, (s16) 0, (s16) (s32) (s16) (s32) (((Rand_ZeroOne() * 15.0f) + 30.0f) * arg0->unk_20C), (s16) phi_s4, (s16) 0, 0x32, (s16) -1, (s16) 0xEF, phi_s2);
        if ((arg0->unk_210 == 0) && (temp_s7 >= 3)) {
            spFC += (Rand_ZeroOne() * 120.0f) - 60.0f;
            sp100 += Rand_ZeroOne() * 80.0f;
            sp104 += (Rand_ZeroOne() * 120.0f) - 60.0f;
            temp_s0 = (s32) (Rand_ZeroOne() * 50.0f * temp_f28) + 0x28;
            func_800B0E48(arg1, (Vec3f *) &spFC, &D_801D15B0, &D_80B04FBC, &D_80B04FB4, &D_80B04FB8, (s16) (s32) temp_s0, (s16) ((s32) (Rand_ZeroOne() * 60.0f * temp_f28) + 0x32));
        }
        temp_s5 = phi_s5 + 1;
        phi_s5 = temp_s5;
        phi_s6 += 0xA3D;
    } while (temp_s5 < 0x19);
    if (arg0->unk_210 != 0) {
        temp_s2_3 = &spE4;
        temp_f26 = arg0->unk_20C * 60.0f;
        do {
            temp_v1 = Rand_Next() >> 0x10;
            temp_s0_2 = (s16) temp_v1;
            temp_f20_2 = Math_SinS((s16) temp_v1);
            temp_f22 = Math_CosS(temp_s0_2);
            spFC = Math_SinS(phi_s6_2);
            sp104 = Math_CosS(phi_s6_2);
            spF0 = 2.0f * spFC;
            temp_f2_2 = temp_f22 * temp_f26;
            temp_f18 = (2.0f * Rand_ZeroOne()) + 1.0f;
            temp_f6 = spFC * temp_f2_2;
            spF4 = temp_f18;
            spF8 = 2.0f * sp104;
            temp_f10_2 = sp104 * temp_f2_2;
            spFC = temp_f6;
            sp100 = temp_f20_2 * temp_f26;
            sp104 = temp_f10_2;
            spFC = temp_f6 + arg0->unk_24;
            sp100 += arg0->unk_28;
            sp104 = temp_f10_2 + arg0->unk_2C;
            spE4 = spF0 * -0.02f;
            spE8 = temp_f18 * -0.05f;
            spEC = spF8 * -0.02f;
            EffectSsIceSmoke_Spawn(arg1, (Vec3f *) &spFC, (Vec3f *) &spF0, (Vec3f *) temp_s2_3, (s16) (s32) ((f32) ((s32) (Rand_ZeroOne() * 170.0f) + 0x96) * temp_f28));
            temp_s5_2 = phi_s5_2 + 1;
            phi_s6_2 += 0x1000;
            phi_s5_2 = temp_s5_2;
        } while (temp_s5_2 != 0x10);
    }
}

void func_80B03688(GlobalContext *arg0, GlobalContext *arg1) {
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 *temp_s4;
    f32 *temp_s4_2;
    f32 *temp_s5;
    f32 *temp_s5_2;
    f32 *temp_s6;
    f32 *temp_s6_2;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f6;
    s16 temp_s3;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 phi_s0;
    s32 phi_s2;
    s32 phi_s0_2;
    s32 phi_s2_2;

    temp_f22 = sqrtf(arg0->view.currQuakeScale.y);
    phi_s2 = 0;
    phi_s2_2 = 0;
    if (arg0->unk_210 == 0) {
        temp_s6 = &spA0;
        temp_s5 = &spAC;
        temp_s4 = &spB8;
        phi_s0 = 0;
        do {
            temp_f20 = (Rand_ZeroOne() * (45.0f * arg0->view.currQuakeScale.y)) + 50.0f;
            temp_f4 = Math_SinS((s16) ((s32) (Rand_ZeroOne() * 6553.6f) + phi_s0)) * temp_f20;
            spB8 = temp_f4;
            spBC = Rand_ZeroOne() * 20.0f;
            temp_f18 = Math_CosS((s16) ((s32) (Rand_ZeroOne() * 6553.6f) + phi_s0)) * temp_f20;
            temp_f4_2 = temp_f4;
            temp_f6 = temp_f4_2 * 0.06f;
            spB0 = 0.0f;
            spC0 = temp_f18;
            spA4 = 0.3f;
            temp_f16 = spC0 * 0.06f;
            spAC = temp_f6;
            spB4 = temp_f16;
            spA0 = temp_f6 * -0.08f;
            spA8 = temp_f16 * -0.08f;
            spB8 = temp_f4_2 + arg0->state.destroy;
            spBC += arg0->state.nextGameStateInit;
            spC0 += arg0->state.nextGameStateSize;
            temp_s3 = (s32) (Rand_ZeroOne() * 60.0f * temp_f22) + 0x46;
            func_800B0E48(arg1, (Vec3f *) temp_s4, (Vec3f *) temp_s5, (Vec3f *) temp_s6, &D_80B04FB4, &D_80B04FB8, (s16) (s32) temp_s3, (s16) ((s32) (Rand_ZeroOne() * 70.0f * temp_f22) + 0x46));
            temp_s2 = phi_s2 + 1;
            phi_s0 += 0x1999;
            phi_s2 = temp_s2;
        } while (temp_s2 != 0xA);
        return;
    }
    temp_s6_2 = &spA0;
    temp_s5_2 = &spAC;
    temp_s4_2 = &spB8;
    phi_s0_2 = 0;
    do {
        temp_f20_2 = (Rand_ZeroOne() * (45.0f * arg0->view.currQuakeScale.y)) + 50.0f;
        spB8 = Math_SinS((s16) ((s32) (Rand_ZeroOne() * 3640.889f) + phi_s0_2));
        temp_f0 = Math_CosS((s16) ((s32) (Rand_ZeroOne() * 3640.889f) + phi_s0_2));
        spB0 = 0.0f;
        spC0 = temp_f0;
        spA4 = 0.03f;
        temp_f16_2 = spB8 * 3.0f * temp_f22;
        spAC = temp_f16_2;
        temp_f10 = temp_f0 * 3.0f * temp_f22;
        spB4 = temp_f10;
        spA0 = temp_f16_2 * -0.02f;
        spA8 = temp_f10 * -0.02f;
        spB8 = (spB8 * temp_f20_2) + arg0->state.destroy;
        spBC = (Rand_ZeroOne() * 20.0f) + arg0->state.nextGameStateInit;
        spC0 = (spC0 * temp_f20_2) + arg0->state.nextGameStateSize;
        EffectSsIceSmoke_Spawn(arg1, (Vec3f *) temp_s4_2, (Vec3f *) temp_s5_2, (Vec3f *) temp_s6_2, (s16) ((s32) (Rand_ZeroOne() * 140.0f * temp_f22) + 0x64));
        temp_s2_2 = phi_s2_2 + 1;
        phi_s0_2 += 0xE38;
        phi_s2_2 = temp_s2_2;
    } while (temp_s2_2 != 0x12);
}

void func_80B03A80(GlobalContext *arg0, f32 arg1, f32 *arg2) {
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spA0;
    Gfx *temp_s1;
    Gfx *temp_s1_2;
    f32 *temp_s7;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f30;
    s16 temp_s0;
    s32 temp_s4;
    s32 temp_v0;
    s32 phi_s5;
    s32 phi_s4;
    s32 phi_s2;
    s32 phi_s0;
    s32 phi_s3;
    Gfx *phi_s1;

    temp_f30 = sqrtf(arg1);
    spA0 = 40.0f * arg1;
    arg1 = arg1;
    temp_s7 = &spD8;
    phi_s5 = 0;
    phi_s4 = 0;
    do {
        temp_f20 = (Rand_ZeroOne() * spA0) + 20.0f;
        spD8 = Math_SinS((s16) ((s32) (Rand_ZeroOne() * 6553.6f) + phi_s5)) * temp_f20;
        spDC = Rand_ZeroOne() * temp_f20;
        spE0 = Math_CosS((s16) ((s32) (Rand_ZeroOne() * 6553.6f) + phi_s5)) * temp_f20;
        spCC = spD8 * 0.17f;
        temp_v0 = phi_s4 & 3;
        temp_f18 = (Rand_ZeroOne() * 14.0f) + 3.0f;
        spD4 = spE0 * 0.17f;
        spD0 = temp_f18;
        spD8 += arg2->unk_0;
        spDC += arg2[1];
        spE0 += arg2[2];
        phi_s2 = -0x190;
        phi_s3 = 1;
        if (temp_v0 == 0) {
            temp_s1 = D_80B04FC8.unk_0;
            if (Rand_Next() > 0) {
                phi_s0 = 0x21;
                phi_s1 = temp_s1;
            } else {
                phi_s0 = 0x41;
                phi_s1 = temp_s1;
            }
        } else {
            phi_s2 = -0x118;
            if (temp_v0 == 1) {
                temp_s1_2 = D_80B04FC8.unk_4;
                phi_s2 = -0x154;
                if (Rand_Next() > 0) {
                    phi_s0 = 0x21;
                    phi_s1 = temp_s1_2;
                } else {
                    phi_s0 = 0x41;
                    phi_s1 = temp_s1_2;
                }
            } else {
                phi_s0 = 0x40;
                phi_s3 = 0;
                phi_s1 = D_80B04FC8.unk_8;
            }
        }
        EffectSsKakera_Spawn(arg0, (Vec3f *) temp_s7, (Vec3f *) &spCC, (Vec3f *) temp_s7, (s16) phi_s2, (s16) phi_s0, (s16) 0x1E, (s16) 0, (s16) 0, (s16) (s32) (((Rand_ZeroOne() * 15.0f) + 25.0f) * arg1), (s16) phi_s3, (s16) 0, 0x36, (s16) -1, (s16) 0xEF, phi_s1);
        spD8 += (Rand_ZeroOne() * 80.0f) - 40.0f;
        spDC += Rand_ZeroOne() * 55.0f;
        spE0 += (Rand_ZeroOne() * 80.0f) - 40.0f;
        temp_s0 = (s32) (Rand_ZeroOne() * 60.0f * temp_f30) + 0x3C;
        func_800B0E48(arg0, (Vec3f *) temp_s7, &D_801D15B0, &D_80B04FBC, &D_80B04FB4, &D_80B04FB8, (s16) (s32) temp_s0, (s16) ((s32) (Rand_ZeroOne() * 30.0f * temp_f30) + 0x3C));
        temp_s4 = phi_s4 + 1;
        phi_s5 += 0x1999;
        phi_s4 = temp_s4;
    } while (temp_s4 != 0xD);
}

void func_80B03E2C(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f6;
    s32 temp_s4;
    Actor *phi_s1;
    void *phi_s0;
    s32 phi_s4;

    arg0->unk_1C6 = (s16) (arg0->yawTowardsPlayer - 0x4000);
    temp_f6 = Rand_ZeroOne() * -600.0f;
    arg0[1].colChkInfo.cylHeight = arg0->yawTowardsPlayer + 0x4000;
    arg0->unk_1CC = (s16) (s32) temp_f6;
    arg0->unk_1FC = (s16) (s32) (Rand_ZeroOne() * 600.0f);
    phi_s1 = arg0;
    phi_s0 = arg0 + 0x1A8;
    phi_s4 = 0;
    do {
        phi_s1[1].velocity.x = arg0->home.pos.x;
        phi_s1[1].velocity.y = arg0->home.pos.y + (61.0f * arg0[1].shape.shadowDraw);
        phi_s1[1].velocity.z = arg0->home.pos.z;
        temp_f20 = Math_SinS(phi_s1->unk_1C6);
        phi_s0->unk_C = (f32) ((Rand_ZeroOne() + 5.0f) * temp_f20);
        phi_s0->unk_10 = (f32) ((Rand_ZeroOne() * 11.0f) + 20.0f);
        temp_f20_2 = Math_CosS(phi_s0->unk_1E);
        temp_f16 = Rand_ZeroOne() + 5.0f;
        phi_s0->unk_1C = 0;
        phi_s0->unk_20 = 0;
        phi_s0->unk_14 = (f32) (temp_f16 * temp_f20_2);
        phi_s0->unk_22 = (s16) ((s32) (Rand_ZeroOne() * 400.0f) + 0x44C);
        temp_s4 = phi_s4 + 0x30;
        temp_f10 = Rand_ZeroOne() * -600.0f;
        phi_s0->unk_2D = 0;
        phi_s0->unk_2C = 0;
        phi_s0->unk_26 = (s16) (s32) temp_f10;
        phi_s1 += 0x30;
        phi_s0 += 0x30;
        phi_s4 = temp_s4;
    } while (temp_s4 != 0x60);
}

void func_80B03FF8(Actor *arg0, GlobalContext *arg1) {
    void *sp18;
    ? (*temp_a2)(Actor *, GlobalContext *, ?);
    s32 temp_t7;
    void *temp_v1;

    temp_t7 = arg0->home.rot.y * 8;
    temp_v1 = temp_t7 + &D_80B04F84;
    temp_a2 = temp_v1->unk_4;
    if (temp_a2 != 0) {
        sp18 = temp_v1;
        temp_a2(arg0, arg1, temp_a2);
    }
    sp18 = temp_t7 + &D_80B04F84;
    Audio_PlayActorSound2(arg0, 0x28F5U);
    if ((temp_t7 + &D_80B04F84) == &D_80B04FAC) {
        Actor_SetSwitchFlag(arg1, arg0->params & 0x3F);
    }
}

void ObjSnowball_Init(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    s32 sp44;
    s32 sp40;
    s32 sp34;
    ColliderJntSph *temp_a1;
    ColliderJntSphElement *temp_t0;
    ColliderJntSphElement *temp_v1_2;
    Sphere16 *temp_v1_3;
    f32 *temp_t5;
    f32 temp_f0;
    s32 temp_v1;
    f32 phi_f20;
    ObjSnowball *this = (ObjSnowball *) thisx;

    sp40 = (s32) this->actor.home.rot.y;
    Actor_ProcessInitChain((Actor *) this, &D_80B04FD4);
    temp_v1 = sp40 == 1;
    if (temp_v1 != 0) {
        phi_f20 = 1.5f;
    } else {
        phi_f20 = 1.0f;
    }
    sp34 = temp_v1;
    Actor_SetScale((Actor *) this, 0.1f * phi_f20);
    this->actor.shape.rot.x = 0;
    this->actor.shape.rot.z = 0;
    this->actor.uncullZoneScale = 150.0f * phi_f20;
    this->actor.world.pos.y += 20.0f * phi_f20;
    this->actor.uncullZoneDownward = 300.0f * phi_f20;
    this->actor.shape.rot.y = (s16) (Rand_Next() >> 0x10);
    this->unk_20C = phi_f20;
    if (temp_v1 != 0) {
        this->actor.textId = 0x238;
        this->actor.flags |= 1;
        this->actor.targetArrowOffset = 466.66666f;
        Actor_SetHeight((Actor *) this, 24.0f);
        this->actor.targetMode = 3;
    }
    temp_a1 = &this->unk_144;
    sp34 = (s32) temp_a1;
    Collider_InitJntSph(globalCtx, temp_a1);
    Collider_SetJntSph(globalCtx, temp_a1, (Actor *) this, &D_80B04F74, &this->unk_164);
    temp_v1_2 = this->unk_144.elements;
    this->actor.colChkInfo.mass = 0xFE;
    temp_t5 = &sp48;
    temp_v1_2->dim.worldSphere.center.x = (s16) (s32) this->actor.world.pos.x;
    temp_v1_3 = &temp_v1_2->dim.worldSphere;
    temp_v1_3->center.y = (s16) (s32) this->actor.world.pos.y;
    temp_v1_3->center.z = (s16) (s32) this->actor.world.pos.z;
    temp_t0 = this->unk_144.elements;
    temp_v1_3->radius = (s16) (s32) ((f32) temp_t0->dim.modelSphere.radius * temp_t0->dim.scale * phi_f20);
    sp48 = this->actor.home.pos.x;
    sp4C = this->actor.home.pos.y + 30.0f;
    sp50 = this->actor.home.pos.z;
    temp_f0 = func_800C411C(&globalCtx->colCtx, &this->actor.floorPoly, &sp44, (Actor *) this, (Vec3f *) temp_t5);
    this->actor.floorHeight = temp_f0;
    if (temp_f0 < (this->actor.home.pos.y - 10.0f)) {
        this->actor.floorPoly = NULL;
    } else {
        ActorShape_Init(&this->actor.shape, 0.0f, NULL, 13.0f);
    }
    func_80B04338(this, globalCtx);
    if ((sp40 == 5) && (Flags_GetSwitch(globalCtx, this->actor.params & 0x3F) != 0)) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void ObjSnowball_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjSnowball *this = (ObjSnowball *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk_144);
}

void func_80B04338(ObjSnowball *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80B04350;
}

void func_80B04350(Actor *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp1C;
    Collider *sp18;
    Actor *temp_a0;
    Actor *temp_a0_2;
    Actor *temp_a3;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;
    s32 temp_t3;
    s32 temp_v0_2;
    s32 temp_v1;
    s8 temp_v0_3;
    u8 temp_v0;
    Actor *phi_a3;

    temp_a3 = arg0;
    temp_v0 = temp_a3->unk_155;
    temp_v1 = (temp_v0 & 2) != 0;
    phi_a3 = temp_a3;
    if (temp_v1 != 0) {
        temp_a3->unk_155 = (u8) (temp_v0 & 0xFFFD);
    }
    if ((temp_v1 != 0) && (temp_a3->unk_211 == 0) && ((*temp_a3->unk_160->unk_24 & 0x80004D08) != 0)) {
        temp_t3 = temp_a3->flags | 0x10;
        temp_a3->flags = temp_t3;
        if (temp_a3->home.rot.y == 1) {
            temp_a3->flags = temp_t3 & ~9;
        }
        temp_v0_2 = *temp_a3->unk_160->unk_24;
        if ((temp_v0_2 & 0x4000) != 0) {
            temp_a3->unk_20A = 1;
        } else {
            if ((temp_v0_2 & 0x800) != 0) {
                temp_a3->unk_210 = 1;
            }
            temp_a3->unk_20A = 0;
        }
        if ((s32) temp_a3->cutscene < 0) {
            temp_a0 = temp_a3;
            arg0 = temp_a3;
            func_80B03FF8(temp_a0, arg1, temp_a3);
            if (arg0->unk_20A == 0) {
                func_80B04608(arg0, arg1);
                return;
            }
            func_80B046E4(arg0, arg1);
            return;
        }
        func_80B04540(temp_a3, arg1, temp_a3);
        return;
    }
    if ((temp_v1 != 0) && ((*temp_a3->unk_160->unk_24 & 0x13820) == 0) && ((s32) temp_a3->unk_209 <= 0)) {
        arg0 = temp_a3;
        func_80B02EE4(temp_a3, arg1, temp_a3);
        temp_a0_2 = arg0;
        if (*arg0->unk_160->unk_24 & 0x1000000) {
            arg0->unk_209 = 0x19;
        } else {
            arg0->unk_209 = 0xA;
        }
        arg0 = arg0;
        Audio_PlayActorSound2(temp_a0_2, 0x185DU);
        phi_a3 = arg0;
    }
    temp_v0_3 = phi_a3->unk_209;
    if ((s32) temp_v0_3 > 0) {
        phi_a3->unk_209 = (s8) (temp_v0_3 - 1);
    }
    temp_a2 = phi_a3 + 0x144;
    sp18 = temp_a2;
    temp_a1 = &arg1->colChkCtx;
    sp1C = temp_a1;
    CollisionCheck_SetAC(arg1, temp_a1, temp_a2);
    CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
}

void func_80B04540(Actor *arg0, GlobalContext *arg1) {
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
    arg0[1].scale.z = func_80B0457C;
}

void func_80B0457C(Actor *arg0, GlobalContext *arg1) {
    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
        func_80B03FF8(arg0, arg1);
        arg0->unk_20B = 1;
        if (arg0->unk_20A == 0) {
            func_80B04608(arg0, arg1);
            return;
        }
        func_80B046E4(arg0, arg1);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
}

void func_80B04608(Actor *arg0) {
    func_80B030F8();
    arg0->draw = NULL;
    arg0->unk_208 = 0x32;
    arg0->floorPoly = NULL;
    arg0[1].scale.z = func_80B04648;
}

void func_80B04648(GlobalContext *arg0, s32 arg1) {
    s8 temp_a0;
    s8 temp_v0;

    arg0->unk_208 = (s8) (arg0->unk_208 - 1);
    temp_v0 = arg0->unk_208;
    if ((s32) temp_v0 <= 0) {
        if (arg0->unk_20B != 0) {
            temp_a0 = arg0->unk_38;
            arg0 = arg0;
            ActorCutscene_Stop((s16) temp_a0);
        }
        if ((Actor *) arg0->home.rot.y == 1) {
            func_80B04B48((Actor *) arg0, arg1, (Actor *) arg0);
            return;
        }
        Actor_MarkForDeath((Actor *) arg0);
        return;
    }
    if (temp_v0 == 0x2D) {
        func_80B03688(arg0, arg0);
    }
}

void func_80B046E4(Actor *arg0, GlobalContext *arg1) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 *temp_a2;
    s32 temp_s1;
    Actor *phi_s0;
    s32 phi_s1;

    func_80B03E2C(arg0, arg1);
    phi_s0 = arg0;
    phi_s1 = 0;
    do {
        temp_a2 = &sp44;
        sp44 = phi_s0[1].velocity.x;
        sp48 = phi_s0[1].velocity.y - (60.0f * arg0[1].shape.shadowDraw);
        sp4C = phi_s0[1].velocity.z;
        func_80B03A80(arg1, arg0[1].shape.shadowDraw, temp_a2);
        temp_s1 = phi_s1 + 0x30;
        phi_s0 += 0x30;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x60);
    arg0->draw = func_80B04D34;
    arg0->floorPoly = NULL;
    arg0->unk_208 = 0x32;
    arg0[1].scale.z = func_80B047C0;
}

void func_80B047C0(Actor *arg0, s32 arg1) {
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    s32 sp98;
    ? sp88;
    f32 sp84;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 temp_f0;
    f32 temp_f12;
    s32 temp_s2;
    s32 temp_s2_2;
    u8 temp_v0;
    void *temp_s0;
    Actor *phi_s1;
    f32 phi_f2;
    f32 phi_f12;
    s32 phi_s2;
    Actor *phi_s1_2;
    Vec3f *phi_s0;
    s32 phi_s2_2;

    phi_s1 = arg0;
    phi_s2 = 0;
    phi_s2_2 = 0;
    do {
        temp_s0 = phi_s1 + 0x1A8;
        if ((phi_s1->unk_1D5 & 1) == 0) {
            temp_s0->unk_10 = (f32) (temp_s0->unk_10 - 6.0f);
            temp_s0->unk_10 = (f32) (temp_s0->unk_10 * 0.96f);
            if (temp_s0->unk_10 < -20.0f) {
                temp_s0->unk_10 = -20.0f;
            }
            temp_s0->unk_0 = (f32) (temp_s0->unk_0 + temp_s0->unk_C);
            temp_s0->unk_4 = (f32) (temp_s0->unk_4 + temp_s0->unk_10);
            temp_s0->unk_8 = (f32) (temp_s0->unk_8 + temp_s0->unk_14);
            temp_s0->unk_1C = (s16) (temp_s0->unk_1C + temp_s0->unk_22);
            temp_s0->unk_1E = (s16) (temp_s0->unk_1E + temp_s0->unk_24);
            temp_s0->unk_20 = (s16) (temp_s0->unk_20 + temp_s0->unk_26);
            sp9C = temp_s0->unk_0;
            spA0 = temp_s0->unk_4 + 25.0f;
            spA4 = temp_s0->unk_8;
            temp_s0->unk_18 = func_800C411C(arg1 + 0x830, temp_s0 + 0x28, &sp98, arg0, (Vec3f *) &sp9C);
            if (temp_s0->unk_10 <= 0.0f) {
                SysMatrix_InsertRotation(temp_s0->unk_1C, temp_s0->unk_1E, temp_s0->unk_20, 0);
                SysMatrix_MultiplyVector3fByState(&D_80B04FE4, (Vec3f *) &sp88);
                temp_f12 = (bitwise f32) arg0[1].shape.shadowDraw * 60.0f * 0.9f;
                phi_f12 = temp_f12;
                if (sp8C > 0.0f) {
                    sp84 = temp_f12;
                    if (Math3D_AngleBetweenVectors(&D_80B04FD8, (Vec3f *) &sp88, &sp7C) != 0) {
                        phi_f2 = 1.0f;
                    } else {
                        phi_f2 = 1.0f - (sp7C * sp7C);
                    }
                    if (phi_f2 <= 0.0f) {
                        phi_f12 = 0.0f;
                    } else {
                        phi_f12 = temp_f12 * sqrtf(phi_f2);
                    }
                }
                temp_f0 = temp_s0->unk_18;
                if (((temp_s0->unk_4 - phi_f12) < temp_f0) || (temp_f0 < -31990.0f)) {
                    temp_s0->unk_2D = (u8) (temp_s0->unk_2D | 1);
                    sp70 = temp_s0->unk_0;
                    sp74 = temp_s0->unk_4 - phi_f12;
                    sp78 = temp_s0->unk_8;
                    func_80B03A80((bitwise GlobalContext *) phi_f12, (bitwise f32) arg1, (f32 *) arg0[1].shape.shadowDraw, &sp70);
                }
            }
        }
        temp_s2 = phi_s2 + 0x30;
        phi_s1 += 0x30;
        phi_s2 = temp_s2;
    } while (temp_s2 < 0x60);
    arg0->unk_208 = (s8) (arg0->unk_208 - 1);
    if (((s32) arg0->unk_208 <= 0) || ((phi_s1_2 = arg0, phi_s0 = &arg0[1].velocity, ((arg0->unk_1D5 & 1) != 0)) && ((arg0->unk_205 & 1) != 0))) {
        if (arg0->unk_20B != 0) {
            ActorCutscene_Stop((s16) arg0->cutscene);
        }
        if (arg0->home.rot.y == 1) {
            func_80B04B48(arg0, arg1);
            return;
        }
        Actor_MarkForDeath(arg0);
        return;
    }
    do {
        temp_s2_2 = phi_s2_2 + 0x30;
        phi_s1_2 += 0x30;
        phi_s2_2 = temp_s2_2;
        if ((phi_s1_2->unk_1D5 & 1) != 0) {
            phi_s0->unk_2C = 0U;
        } else {
            temp_v0 = phi_s0->unk_2C;
            if ((s32) temp_v0 < 0x88) {
                phi_s0->unk_2C = (u8) (temp_v0 + 0x18);
            } else {
                phi_s0->unk_2C = 0xA0U;
            }
        }
        phi_s0 += 0x30;
    } while (temp_s2_2 != 0x60);
}

void func_80B04B48(Actor *arg0, s32 arg1) {
    arg0[1].scale.z = func_80B04B60;
}

void func_80B04B60(s32 arg0, ? arg1) {

}

void ObjSnowball_Update(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp24;
    f32 temp_f0;
    ObjSnowball *this = (ObjSnowball *) thisx;

    sp24 = 0;
    if (this->actor.home.rot.y == 1) {
        if (this->unk_211 != 0) {
            if (func_800B867C((Actor *) this, globalCtx) != 0) {
                this->unk_211 = 0;
                this->actor.flags &= -0x11;
            }
        } else if (func_800B84D0((Actor *) this, globalCtx) != 0) {
            this->unk_211 = 1;
            this->actor.flags |= 0x10;
        } else if (this->actor.isTargeted != 0) {
            sp24 = 1;
        }
    }
    this->actionFunc(this, globalCtx);
    if ((sp24 != 0) && (func_80B04350 == this->actionFunc)) {
        func_800B8614((Actor *) this, globalCtx, 100.0f);
    }
    if ((this->actor.floorPoly != 0) && (temp_f0 = this->actor.projectedPos.z, (temp_f0 < 920.0f))) {
        if (temp_f0 > 400.0f) {
            this->actor.shape.shadowDraw = func_800B3FC0;
            this->actor.shape.shadowAlpha = (u8) ((s32) (0x398 - (s32) temp_f0) >> 2);
            return;
        }
        if (temp_f0 > -30.0f) {
            this->actor.shape.shadowAlpha = 0x82;
            this->actor.shape.shadowDraw = func_800B3FC0;
            return;
        }
        goto block_18;
    }
block_18:
    this->actor.shape.shadowDraw = NULL;
}

void ObjSnowball_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjSnowball *this = (ObjSnowball *) thisx;
    func_800BDFC0(globalCtx, &D_06008B90);
}

void func_80B04D34(Actor *arg0, GlobalContext *arg1) {
    ? sp88;
    s16 sp84;
    s16 sp82;
    s16 sp80;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    s16 *temp_a3;
    s32 temp_s5;
    void *temp_s0;
    Actor *phi_s3;
    s32 phi_s5;

    phi_s3 = arg0;
    phi_s5 = 0;
    do {
        temp_s0 = phi_s3 + 0x1A8;
        if ((phi_s3->unk_1D5 & 1) == 0) {
            temp_a3 = &sp80;
            sp80 = temp_s0->unk_1C;
            sp82 = temp_s0->unk_1E;
            sp84 = temp_s0->unk_20;
            SysMatrix_SetStateRotationAndTranslation(temp_s0->unk_0, temp_s0->unk_4, temp_s0->unk_8, (Vec3s *) temp_a3);
            Matrix_Scale(arg0->scale.x, arg0->scale.y, arg0->scale.z, 1);
            func_800BDFC0(arg1, &D_060082D0);
            if ((temp_s0->unk_28 != 0) && ((s32) temp_s0->unk_2C > 0)) {
                temp_a0 = arg1->state.gfxCtx;
                temp_s1 = temp_a0;
                func_8012C448(temp_a0);
                temp_v0 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = &temp_v0[1];
                temp_v0->words.w0 = 0xFCFF97FF;
                temp_v0->words.w1 = 0xFFFDFE38;
                temp_v0_2 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = &temp_v0_2[1];
                temp_v0_2->words.w0 = 0xFA000000;
                temp_v0_2->words.w1 = (u32) temp_s0->unk_2C;
                func_800C0094(temp_s0->unk_28, temp_s0->unk_0, temp_s0->unk_18, temp_s0->unk_8, (MtxF *) &sp88);
                SysMatrix_SetCurrentState((MtxF *) &sp88);
                Matrix_Scale(arg0->scale.x * 7.5f, 1.0f, arg0->scale.z * 7.5f, 1);
                temp_v0_3 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = &temp_v0_3[1];
                temp_v0_3->words.w0 = 0xDA380003;
                temp_v0_3->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
                temp_v0_4 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = &temp_v0_4[1];
                temp_v0_4->words.w1 = (u32) D_04076BC0;
                temp_v0_4->words.w0 = 0xDE000000;
            }
        }
        temp_s5 = phi_s5 + 0x30;
        phi_s3 += 0x30;
        phi_s5 = temp_s5;
    } while (temp_s5 != 0x60);
}
