typedef struct BgDblueWaterfall {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk144;            /* inferred */
    /* 0x190 */ void *unk190;                       /* inferred */
    /* 0x194 */ void (*actionFunc)(BgDblueWaterfall *, GlobalContext *);
    /* 0x198 */ f32 unk198;                         /* inferred */
    /* 0x19C */ s16 unk19C;                         /* inferred */
    /* 0x19E */ u8 unk19E;                          /* inferred */
    /* 0x19F */ u8 unk19F;                          /* inferred */
    /* 0x1A0 */ u8 unk1A0;                          /* inferred */
    /* 0x1A1 */ char pad1A1[0x2];                   /* maybe part of unk1A0[3]? */
    /* 0x1A3 */ s8 unk1A3;                          /* inferred */
    /* 0x1A4 */ s16 unk1A4;                         /* inferred */
    /* 0x1A6 */ char pad1A6[0x6];                   /* maybe part of unk1A4[4]? */
} BgDblueWaterfall;                                 /* size = 0x1AC */

struct _mips2c_stack_BgDblueWaterfall_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgDblueWaterfall_Draw {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ Gfx *sp18;                           /* inferred */
    /* 0x1C */ char pad1C[0x1C];                    /* maybe part of sp18[8]? */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ Gfx *sp3C;                           /* inferred */
    /* 0x40 */ char pad40[0x4];
    /* 0x44 */ GraphicsContext *sp44;               /* inferred */
    /* 0x48 */ char pad48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_BgDblueWaterfall_Init {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgDblueWaterfall_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B83C80 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B83D04 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B83D58 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B83D94 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B83E1C {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B83EA4 {
    /* 0x00 */ char pad0[0x98];
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ char padA8[0x4];
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ f32 spDC;                            /* inferred */
    /* 0xE0 */ char padE0[0x8];
};                                                  /* size = 0xE8 */

struct _mips2c_stack_func_80B841A0 {
    /* 0x00 */ char pad0[0x94];
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_80B84348 {
    /* 0x00 */ char pad0[0x70];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad74[0xC];                     /* maybe part of sp70[4]? */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ char padA4[0xC];                     /* maybe part of spA0[4]? */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ char padB4[0x4];
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ char padBC[0x4];
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_80B84568 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ CollisionContext *sp2C;              /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ WaterBox *sp3C;                      /* inferred */
    /* 0x40 */ CollisionPoly *sp40;                 /* inferred */
    /* 0x44 */ char pad44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B84610 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B8484C {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B84928 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ CollisionCheckContext *sp24;         /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B84AD4 {};              /* size 0x0 */

struct _mips2c_stack_func_80B84AEC {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B84B9C {};              /* size 0x0 */

struct _mips2c_stack_func_80B84BCC {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B84EF0 {};              /* size 0x0 */

struct _mips2c_stack_func_80B84F20 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

s32 func_80B83C80(Vec3f *arg0, f32 *arg1, BgDblueWaterfall *); /* static */
s32 func_80B83D04(GlobalContext *arg0, GlobalContext *arg1); /* static */
s32 func_80B83D58(BgDblueWaterfall *arg0, GlobalContext *arg1); /* static */
void func_80B83D94(BgDblueWaterfall *arg0, GlobalContext *arg1, s32); /* static */
void func_80B83E1C(BgDblueWaterfall *arg0, GlobalContext *arg1, s32); /* static */
void func_80B83EA4(BgDblueWaterfall *arg0, GlobalContext *arg1, s32); /* static */
void func_80B841A0(Actor *arg0, GlobalContext *arg1, s32); /* static */
void func_80B84348(BgDblueWaterfall *arg0, GlobalContext *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8); /* static */
void func_80B84568(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B84610(BgDblueWaterfall *arg0, GlobalContext *arg1, s32); /* static */
void func_80B8484C(BgDblueWaterfall *arg0, GlobalContext *arg1); /* static */
void func_80B84AD4(BgDblueWaterfall *arg0, GlobalContext *arg1); /* static */
void func_80B84B9C(BgDblueWaterfall *arg0, GlobalContext *arg1); /* static */
void func_80B84EF0(BgDblueWaterfall *arg0, GlobalContext *arg1); /* static */
extern ? D_06003250;
extern ? D_06003358;
extern ? D_06003770;
extern ? D_0600B280;
extern void D_0600B448;
static ColliderCylinderInit D_80B85370 = {
    {0xA, 0, 9, 0x39, 0x20, 1},
    {4, {0, 0, 0}, {0xCBFBB0, 0, 0}, 0, 1, 1},
    {0x32, 0x2E4, 0xFD1C, {0, 0, 0}},
};
static Color_RGBA8 D_80B8539C = {0xC8, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80B853A0 = {0xC8, 0xC8, 0xC8, 0};
static s16 D_80B853A4 = 0;
static InitChainEntry D_80B853A8[6];                /* unable to generate initializer */

s32 func_80B83C80(Vec3f *arg0, f32 *arg1) {
    f32 temp_f0;
    f32 temp_f2;

    temp_f0 = Math3D_LengthSquared(arg0);
    if (temp_f0 < 0.0000010000001f) {
        return 0;
    }
    temp_f2 = 1.0f / sqrtf(temp_f0);
    arg1->unk0 = arg0->x * temp_f2;
    arg1->unk4 = (f32) (arg0->y * temp_f2);
    arg1->unk8 = (f32) (arg0->z * temp_f2);
    return 1;
}

s32 func_80B83D04(GlobalContext *arg0, GlobalContext *arg1) {
    s32 sp18;
    s16 temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->unk1C;
    sp18 = ((s32) temp_v0 >> 8) & 1;
    if (Flags_GetSwitch(arg1, temp_v0 & 0x7F) != 0) {
        phi_v1 = 1;
    } else {
        phi_v1 = 0;
    }
    return phi_v1 ^ sp18;
}

s32 func_80B83D58(BgDblueWaterfall *arg0, GlobalContext *arg1) {
    if (Flags_GetSwitch(arg1, arg0->actor.params & 0x7F) != 0) {
        return 0;
    }
    return 1;
}

void func_80B83D94(BgDblueWaterfall *arg0, GlobalContext *arg1) {
    s32 sp20;
    s32 sp1C;
    GlobalContext *temp_a3;
    s16 temp_v0;
    s32 temp_a1;
    s32 phi_v0;

    temp_a3 = arg1;
    temp_v0 = arg0->actor.params;
    arg1 = temp_a3;
    temp_a1 = temp_v0 & 0x7F;
    sp1C = ((s32) temp_v0 >> 8) & 1;
    sp20 = temp_a1;
    if (Flags_GetSwitch(temp_a3, temp_a1) != 0) {
        phi_v0 = 1;
    } else {
        phi_v0 = 0;
    }
    if (phi_v0 != sp1C) {
        if (phi_v0 != 0) {
            Actor_UnsetSwitchFlag(arg1, temp_a1);
            return;
        }
        Actor_SetSwitchFlag(arg1, temp_a1);
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_80B83E1C(BgDblueWaterfall *arg0, GlobalContext *arg1) {
    s32 sp20;
    s32 sp1C;
    GlobalContext *temp_a3;
    s16 temp_v0;
    s32 temp_a1;
    s32 phi_v0;

    temp_a3 = arg1;
    temp_v0 = arg0->actor.params;
    arg1 = temp_a3;
    temp_a1 = temp_v0 & 0x7F;
    sp1C = ((s32) temp_v0 >> 8) & 1;
    sp20 = temp_a1;
    if (Flags_GetSwitch(temp_a3, temp_a1) != 0) {
        phi_v0 = 1;
    } else {
        phi_v0 = 0;
    }
    if (phi_v0 == sp1C) {
        if (phi_v0 != 0) {
            Actor_UnsetSwitchFlag(arg1, temp_a1);
            return;
        }
        Actor_SetSwitchFlag(arg1, temp_a1);
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_80B83EA4(BgDblueWaterfall *arg0, GlobalContext *arg1) {
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 *temp_a0;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 *temp_s6;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f4_2;
    s16 temp_s1;
    s32 temp_s2;
    s32 phi_s3;
    s32 phi_s2;

    if ((arg0->unk144.info.bumperFlags & 2) != 0) {
        temp_a0 = &sp98;
        temp_f0 = (f32) arg0->unk144.info.bumper.hitPos.x;
        spB4 = (f32) arg0->unk144.info.bumper.hitPos.y;
        sp9C = 0.0f;
        temp_f2 = (f32) arg0->unk144.info.bumper.hitPos.z;
        sp98 = temp_f0 - arg0->actor.world.pos.x;
        spB0 = temp_f0;
        spB8 = temp_f2;
        spA0 = temp_f2 - arg0->actor.world.pos.z;
        if (func_80B83C80((Vec3f *) temp_a0, &spA4, arg0) == 0) {
            Math_Vec3f_Copy((Vec3f *) &spA4, &D_801D15B0);
        }
        sp9C = 0.0f;
        temp_s6 = &spBC;
        temp_s5 = &spC8;
        temp_s4 = &spD4;
        spC0 = -1.4f;
        phi_s3 = 0;
        phi_s2 = 0;
        do {
            temp_s1 = (s32) (Rand_ZeroOne() * 4369.0f) + phi_s3;
            temp_f0_2 = Rand_ZeroOne();
            temp_f20 = 1.0f - (temp_f0_2 * temp_f0_2);
            temp_f4 = Math_SinS(temp_s1) * temp_f20;
            sp98 = temp_f4;
            temp_f20_2 = temp_f20 * 5.0f;
            spA0 = Math_CosS(temp_s1) * temp_f20;
            spD4 = (sp98 * temp_f20_2) + spB0;
            spD8 = ((Rand_ZeroOne() * 16.0f) - 8.0f) + spB4;
            spDC = (spA0 * temp_f20_2) + spB8;
            temp_f4_2 = ((2.0f * Rand_ZeroOne()) - 1.0f) + ((spA4 * 3.0f) + (temp_f4 * 5.0f));
            spC8 = temp_f4_2;
            spCC = (Rand_ZeroOne() * 10.0f) + 5.0f;
            temp_f2_2 = ((2.0f * Rand_ZeroOne()) - 1.0f) + ((spAC * 3.0f) + (spA0 * 5.0f));
            spBC = temp_f4_2 * -0.02f;
            spD0 = temp_f2_2;
            spC4 = temp_f2_2 * -0.02f;
            EffectSsEnIce_Spawn(arg1, (Vec3f *) temp_s4, (Rand_ZeroOne() * 0.3f) + 0.1f, (Vec3f *) temp_s5, (Vec3f *) temp_s6, &D_80B8539C, &D_80B853A0, 0x1E);
            temp_s2 = phi_s2 + 1;
            phi_s3 += 0x1111;
            phi_s2 = temp_s2;
        } while (temp_s2 != 0xF);
    }
}

void func_80B841A0(Actor *arg0, GlobalContext *arg1) {
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 *temp_s5;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    s16 temp_s3;
    s32 temp_s1;
    s32 phi_s2;
    s32 phi_s1;

    if ((arg0->unk172 & 2) != 0) {
        temp_f22 = (f32) arg0->unk16A;
        temp_f24 = (f32) arg0->unk16C;
        temp_s5 = &sp94;
        temp_f26 = (f32) arg0->unk16E;
        phi_s2 = 0;
        phi_s1 = 0;
        do {
            temp_s3 = (s32) (Rand_ZeroOne() * 6553.0f) + phi_s2;
            temp_f0 = Rand_ZeroOne();
            temp_f20 = (1.0f - (temp_f0 * temp_f0)) * 14.0f;
            sp94 = (Math_SinS(temp_s3) * temp_f20) + temp_f22;
            sp98 = ((Rand_ZeroOne() * 20.0f) - 10.0f) + temp_f24;
            sp9C = (Math_CosS(temp_s3) * temp_f20) + temp_f26;
            EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s5, NULL, NULL, (s16) 0, (s16) 0xFA);
            temp_s1 = phi_s1 + 1;
            phi_s2 += 0x1999;
            phi_s1 = temp_s1;
        } while (temp_s1 != 0xA);
        Audio_PlayActorSound2(arg0, 0x1862U);
    }
}

void func_80B84348(BgDblueWaterfall *arg0, GlobalContext *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8) {
    f32 spB8;
    f32 spB0;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp70;
    f32 *temp_s2;
    f32 *temp_s3;
    f32 *temp_s4;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f6;
    s16 temp_a0;
    s32 temp_s0;
    s32 phi_s0;

    temp_s4 = &sp80;
    temp_s3 = &sp8C;
    temp_s2 = &sp98;
    spB8 = 1.0f / (f32) arg8;
    spB0 = arg0->actor.world.pos.y + arg3;
    phi_s0 = 0;
    if (arg8 > 0) {
        sp70 = arg2 - arg3;
        do {
            temp_a0 = D_80B853A4 + 0x4E20;
            D_80B853A4 = temp_a0;
            temp_f20 = Math_SinS(temp_a0);
            temp_f24 = (Rand_ZeroOne() * sp70) + (spB8 * (f32) phi_s0);
            temp_f22 = Math_CosS(D_80B853A4);
            temp_f26 = ((Rand_ZeroOne() * 0.8f) + 0.2f) * arg4;
            temp_f16 = temp_f20 * temp_f26;
            sp8C = temp_f16;
            temp_f6 = temp_f22 * temp_f26;
            temp_f18 = (Rand_ZeroOne() * 4.0f) + arg5;
            sp94 = temp_f6;
            sp90 = temp_f18;
            sp80 = temp_f16 * -0.016f;
            sp84 = temp_f18 * -0.015f;
            sp88 = temp_f6 * -0.016f;
            sp9C = temp_f24 + spB0;
            sp98 = (temp_f20 * 50.0f) + arg0->actor.world.pos.x;
            spA0 = (temp_f22 * 50.0f) + arg0->actor.world.pos.z;
            EffectSsIceSmoke_Spawn(arg1, (Vec3f *) temp_s2, (Vec3f *) temp_s3, (Vec3f *) temp_s4, (s16) (s32) ((Rand_ZeroOne() * arg7) + arg6));
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != arg8);
    }
}

void func_80B84568(Actor *arg0, GlobalContext *arg1) {
    CollisionPoly *sp40;
    WaterBox *sp3C;
    s32 sp38;
    f32 sp34;
    f32 sp30;
    CollisionContext *sp2C;
    CollisionContext *temp_a0;

    temp_a0 = arg1 + 0x830;
    sp2C = temp_a0;
    sp34 = func_800C411C(temp_a0, &sp40, &sp38, arg0, arg0 + 0x24);
    if (func_800CA1E8(arg1, sp2C, arg0->world.pos.x, arg0->world.pos.z, &sp30, &sp3C) != 0) {
        if (sp30 < sp34) {
            goto block_4;
        }
        arg0->unk198 = sp30;
        return;
    }
block_4:
    arg0->unk198 = sp34;
}

void func_80B84610(BgDblueWaterfall *arg0, GlobalContext *arg1) {
    f32 sp34;
    void *temp_s1;

    temp_s1 = arg1->actorCtx.actorList[2].first;
    if ((s32) arg0->unk1A7 <= 0) {
        arg0->unk1A7 = 0x10;
    } else {
        arg0->unk1A7 -= Rand_Next() >> 0x1F;
    }
    if ((s32) arg0->unk1A7 >= 6) {
        arg0->unk1A8 += Rand_ZeroOne() * 0.1f;
        if (arg0->unk1A8 > 0.5f) {
            arg0->unk1A8 = 0.5f;
        } else {
            goto block_9;
        }
    } else {
        arg0->unk1A8 -= Rand_ZeroOne() * 0.2f;
        if (arg0->unk1A8 > -0.5f) {
            arg0->unk1A8 = -0.5f;
        } else {
block_9:
            arg0->unk1A8 = arg0->unk1A8;
        }
    }
    SysMatrix_StatePush();
    Matrix_RotateY((s16) (arg0->actor.yawTowardsPlayer + 0x4000), 0U);
    SysMatrix_GetStateTranslationAndScaledZ(arg0->unk1A8, (Vec3f *) &sp34);
    SysMatrix_StatePop();
    temp_s1->world.pos.x += sp34;
    temp_s1->world.pos.z += sp3C;
    temp_s1->unkB80 = 8.0f;
    temp_s1->unkB84 = (s16) arg0->actor.yawTowardsPlayer;
}

void BgDblueWaterfall_Init(BgDblueWaterfall *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    BgDblueWaterfall *this = (BgDblueWaterfall *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80B853A8);
    this->actor.shape.rot.z = 0;
    this->actor.world.rot.z = 0;
    temp_a1 = &this->unk144;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80B85370);
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    this->unk190 = Lib_SegmentedToVirtual(&D_0600B448);
    Actor_SetHeight((Actor *) this, -100.0f);
    func_80B84568((Actor *) this, globalCtx);
    func_80B8484C(this, globalCtx);
}

void BgDblueWaterfall_Destroy(BgDblueWaterfall *this, GlobalContext *globalCtx) {
    BgDblueWaterfall *this = (BgDblueWaterfall *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk144);
}

void func_80B8484C(BgDblueWaterfall *arg0, GlobalContext *arg1) {
    s32 sp1C;
    BgDblueWaterfall *temp_a0;
    s32 temp_v1;
    BgDblueWaterfall *phi_a0;
    BgDblueWaterfall *phi_a0_2;

    temp_a0 = arg0;
    temp_v1 = temp_a0->actor.home.rot.z * 0xA;
    phi_a0 = temp_a0;
    if (func_80B83D04(arg1) != 0) {
        temp_a0->unk19E = 0;
        temp_a0->unk19F = 0xFF;
        temp_a0->unk1A0 = 0;
        temp_a0->unk144.dim.radius = 0x37;
        temp_a0->unk144.dim.height = 0x96;
        temp_a0->unk144.dim.yShift = -0x96;
    } else {
        temp_a0->unk19E = 0xFF;
        temp_a0->unk19F = 0;
        temp_a0->unk1A0 = 0;
        temp_a0->unk144.dim.radius = 0x32;
        temp_a0->unk144.dim.height = 0x2E4;
        temp_a0->unk144.dim.yShift = -0x2E4;
    }
    temp_a0->actor.colChkInfo.mass = 0xFF;
    if ((temp_v1 != 0) && (sp1C = temp_v1, arg0 = temp_a0, phi_a0 = arg0, phi_a0_2 = arg0, (func_80B83D58(temp_a0, arg1) == 0))) {
        arg0->unk19C = (s16) temp_v1;
    } else {
        phi_a0->unk19C = 0;
        phi_a0_2 = phi_a0;
    }
    phi_a0_2->unk1A3 = 0;
    phi_a0_2->actionFunc = func_80B84928;
}

void func_80B84928(BgDblueWaterfall *this, GlobalContext *globalCtx) {
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    CollisionCheckContext *sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a2;
    CollisionCheckContext *temp_a1;
    s16 temp_v0_2;
    s32 temp_t7;
    s32 temp_v0;
    u8 temp_v1;
    s32 phi_a2;

    temp_v0 = func_80B83D04((GlobalContext *) this, globalCtx);
    sp30 = temp_v0;
    temp_v1 = this->unk144.base.acFlags;
    temp_t7 = (temp_v1 & 2) != 0;
    sp2C = temp_t7;
    if (temp_t7 != 0) {
        this->unk144.base.acFlags = temp_v1 & 0xFFFD;
    }
    if ((temp_v0 == 0) && ((this->unk144.base.ocFlags2 & 1) != 0)) {
        sp28 = 0;
        func_80B84610(this, globalCtx, 0);
    }
    temp_v0_2 = this->unk19C;
    phi_a2 = 0;
    if ((s32) temp_v0_2 > 0) {
        this->unk19C = temp_v0_2 - 1;
        if (this->unk19C == 0) {
            if (sp30 != 0) {
                func_80B83D94(this, globalCtx, 0);
                func_80B84EF0(this, globalCtx);
            } else {
                func_80B83E1C(this, globalCtx, 0);
                func_80B84B9C(this, globalCtx);
            }
            phi_a2 = 1;
        }
    }
    if (phi_a2 == 0) {
        if (sp2C != 0) {
            if (sp30 != 0) {
                func_80B83EA4(this, globalCtx, phi_a2);
                if ((this->unk144.info.acHitInfo->toucher.dmgFlags & 0x800) != 0) {
                    this->unk1A4 = (s16) this->actor.cutscene;
                    func_80B84AD4(this, globalCtx);
                    return;
                }
                /* Duplicate return node #19. Try simplifying control flow for better match */
                return;
            }
            func_80B841A0((Actor *) this, globalCtx, phi_a2);
            if ((this->unk144.info.acHitInfo->toucher.dmgFlags & 0x1000) != 0) {
                this->unk1A4 = ActorCutscene_GetAdditionalCutscene((s16) this->actor.cutscene);
                func_80B84AD4(this, globalCtx);
                return;
            }
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return;
        }
        temp_a1 = &globalCtx->colChkCtx;
        temp_a2 = &this->unk144;
        sp20 = temp_a2;
        sp24 = temp_a1;
        CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2);
        CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2);
        /* Duplicate return node #19. Try simplifying control flow for better match */
    }
}

void func_80B84AD4(BgDblueWaterfall *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80B84AEC;
}

void func_80B84AEC(BgDblueWaterfall *this, GlobalContext *globalCtx) {
    s32 sp20;

    if (ActorCutscene_GetCanPlayNext(this->unk1A4) != 0) {
        sp20 = func_80B83D04((GlobalContext *) this, globalCtx);
        ActorCutscene_StartAndSetUnkLinkFields(this->unk1A4, (Actor *) this);
        this->unk1A3 = 1;
        if (sp20 != 0) {
            func_80B83D94(this, globalCtx);
            func_80B84EF0(this, globalCtx);
            return;
        }
        func_80B83E1C(this, globalCtx);
        func_80B84B9C(this, globalCtx);
        return;
    }
    ActorCutscene_SetIntentToPlay(this->unk1A4);
}

void func_80B84B9C(BgDblueWaterfall *arg0, GlobalContext *arg1) {
    arg0->unk19C = 0x3C;
    arg0->unk19E = 0xFF;
    arg0->unk19F = 0;
    arg0->unk1A0 = 0;
    arg0->actionFunc = func_80B84BCC;
}

void func_80B84BCC(BgDblueWaterfall *this, GlobalContext *globalCtx) {
    s32 sp38;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_4;
    u8 temp_v0_3;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    GlobalContext *phi_a1;

    this->unk19C += -1;
    temp_v0 = this->unk19C;
    if ((s32) temp_v0 > 0) {
        if ((s32) temp_v0 >= 0x39) {
            sp38 = temp_v0 & 1;
            func_80B84348(this, NULL, -5500.0f, 0.4f, -15.0f, 370.0f, 100.0f, 8e-45.0f);
        }
        phi_a1 = globalCtx;
        if ((temp_v0 & 1) == 0) {
            temp_v0_2 = this->unk19C;
            if (((s32) temp_v0_2 < 0x18) && ((s32) temp_v0_2 >= 0xB)) {
                temp_f2 = this->unk198;
                if (temp_f2 > -32000.0f) {
                    temp_f0 = temp_f2 - this->actor.world.pos.y;
                    globalCtx = globalCtx;
                    func_80B84348(this, globalCtx, temp_f0 + 50.0f, temp_f0, 7.0f, -1.0f, 280.0f, 100.0f, 3);
                    phi_a1 = globalCtx;
                }
            }
            if ((s32) this->unk19C >= 0x33) {
                func_80B84348(this, phi_a1, 0.0f, -400.0f, 0.6f, -12.0f, 370.0f, 100.0f, 2);
            } else if ((s32) this->unk19C >= 0x29) {
                func_80B84348(this, phi_a1, 0.0f, -400.0f, 1.0f, -12.0f, 370.0f, 100.0f, 2);
            } else if ((s32) this->unk19C >= 0x15) {
                func_80B84348(this, phi_a1, 0.0f, -400.0f, 1.8f, -12.0f, 370.0f, 100.0f, 2);
            }
        }
        temp_v0_3 = this->unk19E;
        if ((s32) temp_v0_3 >= 7) {
            this->unk19E = temp_v0_3 - 6;
        } else {
            this->unk19E = 0;
        }
        temp_v0_4 = this->unk19C;
        if ((s32) temp_v0_4 >= 0x37) {
            temp_v0_5 = this->unk1A0;
            if ((s32) temp_v0_5 < 0xCD) {
                this->unk1A0 = temp_v0_5 + 0x32;
            } else {
                this->unk1A0 = 0xFF;
            }
        } else if ((s32) temp_v0_4 >= 0x24) {
            temp_v0_6 = this->unk1A0;
            if ((s32) temp_v0_6 >= 0x10) {
                this->unk1A0 = temp_v0_6 - 0xF;
            } else {
                goto block_25;
            }
        } else {
block_25:
            this->unk1A0 = 0;
        }
        if ((s32) this->unk19C < 0x3C) {
            temp_v0_7 = this->unk19F;
            if ((s32) temp_v0_7 < 0xF5) {
                this->unk19F = temp_v0_7 + 0xA;
            } else {
                this->unk19F = 0xFF;
            }
        }
        func_800B9010((Actor *) this, 0x20B2U);
        return;
    }
    if (this->unk1A3 != 0) {
        ActorCutscene_Stop(this->unk1A4);
    }
    func_80B8484C(this, globalCtx);
}

void func_80B84EF0(BgDblueWaterfall *arg0, GlobalContext *arg1) {
    arg0->unk19C = 0x3C;
    arg0->unk19E = 0;
    arg0->unk19F = 0xFF;
    arg0->unk1A0 = 0;
    arg0->actionFunc = func_80B84F20;
}

void func_80B84F20(BgDblueWaterfall *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;

    this->unk19C += -1;
    temp_v0 = this->unk19C;
    if ((s32) temp_v0 > 0) {
        if ((s32) temp_v0 >= 0x3A) {
            func_80B84348(this, (GlobalContext *)0x42C80000, -100.0f, 4.0f, -6.0f, 370.0f, (bitwise f32) (GlobalContext *)0x42C80000, 1.7e-44f);
        }
        if ((s32) this->unk19C < 0x32) {
            temp_v0_2 = this->unk19E;
            if ((s32) temp_v0_2 < 0xFA) {
                this->unk19E = temp_v0_2 + 5;
            } else {
                this->unk19E = 0xFF;
            }
        }
        temp_v0_3 = this->unk19F;
        if ((s32) temp_v0_3 >= 6) {
            this->unk19F = temp_v0_3 - 5;
        } else {
            this->unk19F = 0;
        }
        func_800B9010((Actor *) this, 0x2144U);
        return;
    }
    if (this->unk1A3 != 0) {
        ActorCutscene_Stop(this->unk1A4);
    }
    func_80B8484C(this, globalCtx);
}

void BgDblueWaterfall_Update(BgDblueWaterfall *this, GlobalContext *globalCtx) {
    BgDblueWaterfall *this = (BgDblueWaterfall *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgDblueWaterfall_Draw(BgDblueWaterfall *this, GlobalContext *globalCtx) {
    GraphicsContext *sp44;
    Gfx *sp3C;
    s32 sp38;
    Gfx *sp18;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    f32 temp_f6;
    u8 temp_v0_2;
    u8 temp_v0_5;
    void *temp_a1;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_15;
    void *temp_v0_16;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    f32 phi_f6;
    BgDblueWaterfall *phi_a3;
    BgDblueWaterfall *phi_a3_2;
    GraphicsContext *phi_a2;
    s32 phi_t0;
    u32 phi_a1;
    BgDblueWaterfall *this = (BgDblueWaterfall *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    this = this;
    sp44 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = sp44->polyXlu.p;
    sp44->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    this = this;
    sp44 = sp44;
    sp3C = temp_v0;
    sp3C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = this->unk19E;
    if ((s32) temp_v0_2 > 0) {
        temp_f6 = (f32) temp_v0_2;
        phi_f6 = temp_f6;
        if ((s32) temp_v0_2 < 0) {
            phi_f6 = temp_f6 + 4294967296.0f;
        }
        sp38 = (s32) (phi_f6 * 0.49803922f);
        temp_a1 = this->unk190;
        this = this;
        sp44 = sp44;
        AnimatedMat_Draw(globalCtx, (AnimatedMaterial *) temp_a1);
        temp_v0_3 = sp44->polyXlu.p;
        sp44->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFA00008A;
        temp_v0_3->words.w1 = (sp38 & 0xFF) | ~0xFF;
        temp_v0_4 = sp44->polyXlu.p;
        sp44->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = (u32) &D_0600B280;
        temp_v0_4->words.w0 = 0xDE000000;
    }
    temp_v0_5 = this->unk19F;
    phi_a3 = this;
    phi_a3_2 = this;
    phi_a2 = sp44;
    phi_t0 = -0x100;
    phi_a1 = 0xDE000000U;
    if ((s32) temp_v0_5 > 0) {
        if ((s32) temp_v0_5 < 0xFF) {
            temp_v0_6 = sp44->polyXlu.p;
            sp44->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDB060024;
            temp_v0_6->words.w1 = D_801AEF88;
            temp_v0_7 = sp44->polyXlu.p;
            sp44->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w0 = 0xFA00009B;
            temp_v0_7->words.w1 = this->unk19F | ~0xFF;
            temp_v0_8 = sp44->polyXlu.p;
            sp44->polyXlu.p = temp_v0_8 + 8;
            temp_v0_8->words.w1 = &D_06003358;
            temp_v0_8->words.w0 = 0xDE000000;
        } else {
            this = this;
            sp44 = sp44;
            func_8012C28C(globalCtx->state.gfxCtx);
            temp_v0_9 = sp44->polyOpa.p;
            sp44->polyOpa.p = temp_v0_9 + 8;
            temp_v0_9->words.w0 = 0xDB060024;
            temp_v0_9->words.w1 = (u32) D_801AEFA0;
            temp_v0_10 = sp44->polyOpa.p;
            sp44->polyOpa.p = temp_v0_10 + 8;
            temp_v0_10->words.w1 = -1;
            temp_v0_10->words.w0 = 0xFA00009B;
            temp_v0_11 = sp44->polyOpa.p;
            sp44->polyOpa.p = temp_v0_11 + 8;
            temp_v0_11->words.w0 = 0xDA380003;
            this = this;
            sp44 = sp44;
            sp18 = temp_v0_11;
            sp18->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_12 = sp44->polyOpa.p;
            sp44->polyOpa.p = temp_v0_12 + 8;
            temp_v0_12->words.w1 = (u32) &D_06003358;
            temp_v0_12->words.w0 = 0xDE000000;
            phi_a3 = this;
        }
        temp_v0_13 = sp44->polyXlu.p;
        sp44->polyXlu.p = temp_v0_13 + 8;
        temp_v0_13->words.w0 = 0xFA0000FF;
        temp_v0_13->words.w1 = phi_a3->unk19F | ~0xFF;
        temp_v0_14 = sp44->polyXlu.p;
        sp44->polyXlu.p = temp_v0_14 + 8;
        temp_v0_14->words.w1 = &D_06003250;
        temp_v0_14->words.w0 = 0xDE000000;
        phi_a3_2 = phi_a3;
        phi_a2 = sp44;
        phi_t0 = -0x100;
        phi_a1 = 0xDE000000U;
    }
    if ((s32) phi_a3_2->unk1A0 > 0) {
        temp_v0_15 = phi_a2->polyXlu.p;
        phi_a2->polyXlu.p = temp_v0_15 + 8;
        temp_v0_15->words.w0 = 0xFA0000FF;
        temp_v0_15->words.w1 = phi_a3_2->unk1A0 | phi_t0;
        temp_v0_16 = phi_a2->polyXlu.p;
        phi_a2->polyXlu.p = temp_v0_16 + 8;
        temp_v0_16->words.w1 = &D_06003770;
        temp_v0_16->words.w0 = phi_a1;
    }
}
