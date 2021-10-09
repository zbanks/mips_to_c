typedef struct EnWaterEffect {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ? unk144;                           /* inferred */
    /* 0x144 */ char pad144[0xC80];
    /* 0xDC4 */ s16 unkDC4;                         /* inferred */
    /* 0xDC6 */ s16 unkDC6;                         /* inferred */
    /* 0xDC8 */ char padDC8[0x10];                  /* maybe part of unkDC6[9]? */
    /* 0xDD8 */ f32 unkDD8;                         /* inferred */
    /* 0xDDC */ char padDDC[0x8];                   /* maybe part of unkDD8[3]? */
    /* 0xDE4 */ f32 unkDE4;                         /* inferred */
    /* 0xDE8 */ char padDE8[0x8];                   /* maybe part of unkDE4[3]? */
    /* 0xDF0 */ f32 unkDF0;                         /* inferred */
    /* 0xDF4 */ char padDF4[0x18];                  /* maybe part of unkDF0[7]? */
    /* 0xE0C */ f32 unkE0C;                         /* inferred */
    /* 0xE10 */ f32 unkE10;                         /* inferred */
    /* 0xE14 */ f32 unkE14;                         /* inferred */
    /* 0xE18 */ char padE18[0x4];
    /* 0xE1C */ f32 unkE1C;                         /* inferred */
    /* 0xE20 */ f32 unkE20;                         /* inferred */
    /* 0xE24 */ f32 unkE24;                         /* inferred */
    /* 0xE28 */ char padE28[0x4];
    /* 0xE2C */ f32 unkE2C;                         /* inferred */
    /* 0xE30 */ f32 unkE30;                         /* inferred */
    /* 0xE34 */ f32 unkE34;                         /* inferred */
    /* 0xE38 */ f32 unkE38;                         /* inferred */
} EnWaterEffect;                                    /* size = 0xE3C */

struct _mips2c_stack_EnWaterEffect_Destroy {};      /* size 0x0 */

struct _mips2c_stack_EnWaterEffect_Draw {
    /* 0x00 */ char pad0[0x54];
    /* 0x54 */ ? *sp54;                             /* inferred */
    /* 0x58 */ char pad58[0x58];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_EnWaterEffect_Init {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ ActorContext *sp3C;                  /* inferred */
    /* 0x40 */ char pad40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnWaterEffect_Update {
    /* 0x00 */ char pad0[0x88];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad94[0x4];
    /* 0x98 */ ? sp98;                              /* inferred */
    /* 0x98 */ char pad98[0x4];
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char padA0[0x4];
    /* 0xA4 */ ? spA4;                              /* inferred */
    /* 0xA4 */ char padA4[0x4];
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ char padAC[0x10];                    /* maybe part of spA8[5]? */
    /* 0xBC */ Actor *spBC;                         /* inferred */
    /* 0xC0 */ char padC0[0x8];
};                                                  /* size = 0xC8 */

struct _mips2c_stack_func_80A587A0 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A58908 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A599E8 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A59C04 {
    /* 0x00 */ char pad0[0x64];
    /* 0x64 */ CollisionContext *sp64;              /* inferred */
    /* 0x68 */ char pad68[0xC];                     /* maybe part of sp64[4]? */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ char pad80[0x8];                     /* maybe part of sp7C[3]? */
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad88[0x8];
    /* 0x90 */ ? sp90;                              /* inferred */
    /* 0x90 */ char pad90[0x4];
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ char pad98[0x18];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_80A5A184 {
    /* 0x00 */ char pad0[0x60];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80A5A534 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A5A6B8 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ ? *sp30;                             /* inferred */
    /* 0x34 */ ? *sp34;                             /* inferred */
    /* 0x38 */ char pad38[0x8];                     /* maybe part of sp34[3]? */
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad44[0xC];                     /* maybe part of sp40[4]? */
    /* 0x50 */ Gfx *sp50;                           /* inferred */
    /* 0x54 */ char pad54[0x8];                     /* maybe part of sp50[3]? */
    /* 0x5C */ Gfx *sp5C;                           /* inferred */
    /* 0x60 */ char pad60[0x8];                     /* maybe part of sp5C[3]? */
    /* 0x68 */ Gfx *sp68;                           /* inferred */
    /* 0x6C */ char pad6C[0x8];                     /* maybe part of sp68[3]? */
    /* 0x74 */ Gfx *sp74;                           /* inferred */
    /* 0x78 */ char pad78[0x8];                     /* maybe part of sp74[3]? */
    /* 0x80 */ Gfx *sp80;                           /* inferred */
    /* 0x84 */ char pad84[0x1C];
};                                                  /* size = 0xA0 */

f32 func_800C3FA0(CollisionContext *, ? *, ? *);    /* extern */
void func_80A587A0(EnWaterEffect *arg0, f32 *arg1, u8 arg2); /* static */
void func_80A58908(EnWaterEffect *arg0, Vec3f *arg1, ? *arg2, u8 arg3); /* static */
void func_80A599E8(Actor *arg0, f32 *arg1, u8 arg2); /* static */
void func_80A59C04(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A5A184(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A5A534(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A5A6B8(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_06000420;
extern ? D_06000730;
extern ? D_06000A48;
extern ? D_06000CD8;
extern void D_06000DE0;
extern void D_06000E0C;
extern void D_06000E40;
extern void D_06000E58;
extern ? D_06004260;
extern ? D_060042B0;
extern ? D_060042F8;
extern ? D_06004340;
extern ? D_060043E8;
static ? D_80A5AFB0;                                /* unable to generate initializer */
static ? D_80A5AFBC;                                /* unable to generate initializer */

void func_80A587A0(EnWaterEffect *arg0, f32 *arg1, u8 arg2) {
    void *sp18;
    s16 temp_v0;
    void *phi_v1;
    s16 phi_v0;

    phi_v1 = arg0 + 0x144;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_v1->unk0 == 0) {
        phi_v1->unk0 = 1U;
        phi_v1->unk4 = (s32) arg1->unk0;
        phi_v1->unk8 = (s32) arg1->unk4;
        phi_v1->unkC = (s32) arg1->unk8;
        phi_v1->unk10 = (s32) D_80A5AFB0.unk0;
        phi_v1->unk14 = (s32) D_80A5AFB0.unk4;
        phi_v1->unk18 = (s32) D_80A5AFB0.unk8;
        phi_v1->unk1C = (s32) D_80A5AFB0.unk0;
        phi_v1->unk20 = (s32) D_80A5AFB0.unk4;
        phi_v1->unk24 = (s32) D_80A5AFB0.unk8;
        phi_v1->unk30 = 0.0f;
        phi_v1->unk2C = 0.1f;
        sp18 = phi_v1;
        phi_v1->unk34 = Rand_ZeroFloat(6.2831855f);
        phi_v1->unk1 = (s8) (u32) Rand_ZeroFloat(100.0f);
        phi_v1->unk2A = arg2;
        return;
    }
    phi_v1 += 0x40;
    if ((s32) temp_v0 >= 0x19) {
        return;
    }
    goto loop_1;
}

void func_80A58908(EnWaterEffect *arg0, Vec3f *arg1, ? *arg2, u8 arg3) {
    ? sp2C;
    f32 temp_f2;
    s16 temp_v0;
    void *phi_s0;
    s16 phi_v0;

    sp2C.unk0 = (s32) D_80A5AFBC.unk0;
    sp2C.unk4 = (s32) D_80A5AFBC.unk4;
    sp2C.unk8 = (s32) D_80A5AFBC.unk8;
    phi_s0 = arg0 + 0x144;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->unk0 == 0) {
        phi_s0->unk0 = 2U;
        phi_s0->unk4 = (s32) arg1->x;
        phi_s0->unk8 = (s32) arg1->y;
        phi_s0->unkC = (s32) arg1->z;
        phi_s0->unk10 = (s32) arg2->unk0;
        phi_s0->unk14 = (s32) arg2->unk4;
        phi_s0->unk18 = (s32) arg2->unk8;
        phi_s0->unk1C = (s32) sp2C.unk0;
        phi_s0->unk20 = (s32) sp2C.unk4;
        phi_s0->unk24 = (s32) sp2C.unk8;
        temp_f2 = Rand_ZeroFloat(0.02f) + 0.02f;
        phi_s0->unk30 = temp_f2;
        phi_s0->unk2C = temp_f2;
        phi_s0->unk34 = Rand_ZeroFloat(6.2831855f);
        phi_s0->unk1 = (s8) (u32) Rand_ZeroFloat(100.0f);
        phi_s0->unk2A = arg3;
        return;
    }
    phi_s0 += 0x40;
    if ((s32) temp_v0 >= 0x19) {
        return;
    }
    goto loop_1;
}

void EnWaterEffect_Init(EnWaterEffect *this, GlobalContext *globalCtx) {
    ActorContext *sp3C;
    ActorContext *temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    EnWaterEffect *this = (EnWaterEffect *) thisx;

    this->actor.flags &= -2;
    temp_v0 = this->actor.params;
    this->unkDC4 = (s16) (s32) Rand_ZeroFloat(100.0f);
    if (temp_v0 == 1) {
        this->actor.update = func_80A59C04;
        this->actor.draw = func_80A5A184;
        this->unkDC6 = (s16) (s32) (Rand_ZeroFloat(100.0f) + 60.0f);
        return;
    }
    if ((temp_v0 == 0x309) || (temp_v0 == 0x30A) || (temp_v0 == 0x30B) || (temp_v0 == 0x30C)) {
        this->actor.update = func_80A5A534;
        this->actor.draw = func_80A5A6B8;
        this->actor.shape.rot.y = (s16) (s32) Rand_ZeroFloat(65536.0f);
        Actor_SetScale((Actor *) this, (f32) this->actor.shape.rot.z * 0.0002f);
        temp_v0_2 = this->actor.params;
        temp_a0 = &globalCtx->actorCtx;
        if (temp_v0_2 == 0x309) {
            sp3C = temp_a0;
            Actor_Spawn(temp_a0, globalCtx, 0x170, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) (s32) this->actor.shape.rot.z, (s16) 0x30A);
            Actor_Spawn(temp_a0, globalCtx, 0x170, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) (s32) this->actor.shape.rot.z, (s16) 0x30B);
        } else if (temp_v0_2 == 0x30A) {
            this->unkDC4 = -3;
        } else if (temp_v0_2 == 0x30B) {
            this->unkDC4 = -6;
        } else if (temp_v0_2 == 0x30C) {
            this->unkDC4 = 0x17;
        }
        this->unkE0C = 0.2f;
        this->unkE10 = 0.2f;
        this->unkE1C = -0.017f;
        this->unkE14 = 0.2f;
        this->unkE20 = -0.018f;
        this->unkDD8 = 1.0f;
        this->unkDE4 = 1.0f;
        this->unkDF0 = 1.0f;
        this->unkE2C = 255.0f;
        this->unkE34 = 255.0f;
        this->unkE24 = -0.019f;
        this->unkE30 = 200.0f;
        this->unkE38 = 191.25f;
    }
}

void EnWaterEffect_Destroy(EnWaterEffect *this, GlobalContext *globalCtx) {
    EnWaterEffect *this = (EnWaterEffect *) thisx;

}

void EnWaterEffect_Update(EnWaterEffect *this, GlobalContext *globalCtx) {
    Actor *spBC;
    f32 spA8;
    ? spA4;
    f32 sp9C;
    ? sp98;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    ? *temp_s1;
    Vec3f *temp_s2;
    Vec3f *temp_s2_2;
    Vec3f *temp_s2_3;
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s16 temp_fp;
    s16 temp_s0;
    s32 temp_t6;
    u8 temp_t5;
    u8 temp_v0;
    u8 phi_a2;
    ? *phi_s1;
    f32 phi_f0;
    s32 phi_v0;
    s16 phi_s0;
    Vec3f *phi_s2;
    s16 phi_fp;
    EnWaterEffect *this = (EnWaterEffect *) thisx;

    temp_s1 = &this->unk144;
    spBC = globalCtx->actorCtx.actorList[2].first;
    if (Flags_GetSwitch(globalCtx, (s32) this->actor.params) == 0) {
        this->unkDC4 += 1;
        if (((this->unkDC4 & 0x1F) == 0) && (Rand_ZeroOne() < 0.5f)) {
            Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 10.0f, 40.0f, 4U);
            sp88 = randPlusMinusPoint5Scaled(50.0f) + this->actor.world.pos.x;
            sp8C = this->actor.world.pos.y;
            sp90 = randPlusMinusPoint5Scaled(50.0f) + this->actor.world.pos.z;
            temp_f2 = this->actor.world.pos.y + this->actor.yDistToWater;
            phi_a2 = 1U;
            if (temp_f2 <= this->actor.floorHeight) {
                phi_a2 = 0U;
            } else {
                this->actor.floorHeight = temp_f2;
            }
            func_80A587A0(this, &sp88, phi_a2);
        }
    }
    phi_s1 = temp_s1;
    phi_fp = 0;
    do {
        if (phi_s1->unk0 != 0) {
            temp_f14 = phi_s1->unk14;
            temp_t5 = phi_s1->unk1 + 1;
            temp_t6 = temp_t5 & 6;
            phi_s1->unk1 = temp_t5;
            phi_s1->unk4 = (f32) (phi_s1->unk4 + phi_s1->unk10);
            phi_s1->unk8 = (f32) (phi_s1->unk8 + temp_f14);
            phi_s1->unkC = (f32) (phi_s1->unkC + phi_s1->unk18);
            phi_s1->unk14 = (f32) (temp_f14 + phi_s1->unk20);
            if (temp_t6 != 0) {
                phi_f0 = 80.0f;
            } else {
                phi_f0 = 200.0f;
            }
            Math_ApproachF(phi_s1 + 0x38, phi_f0, 1.0f, 80.0f);
            temp_v0 = phi_s1->unk0;
            if (temp_v0 == 1) {
                phi_s1->unk34 = (f32) (phi_s1->unk34 + 0.15f);
                Math_ApproachF(phi_s1 + 0x2C, 0.03f, 0.5f, 0.005f);
                Math_ApproachF(phi_s1 + 0x30, 0.5f, 0.5f, 0.02f);
                phi_v0 = 0;
                if (phi_s1->unk30 > 0.15f) {
                    phi_s1->unk20 = -1.0f;
                    if (phi_s1->unk14 < -20.0f) {
                        phi_s1->unk14 = -20.0f;
                    }
                }
                if ((fabsf(phi_s1->unk4 - spBC->world.pos.x) < 15.0f) && (fabsf(phi_s1->unkC - spBC->world.pos.z) < 15.0f) && (temp_f2_2 = spBC->world.pos.y, temp_f0 = phi_s1->unk8, (temp_f2_2 < temp_f0)) && ((temp_f0 - temp_f2_2) < 40.0f)) {
                    phi_v0 = 1;
                }
                temp_f2_3 = this->actor.floorHeight;
                if ((phi_s1->unk8 <= temp_f2_3) || (phi_v0 != 0)) {
                    if (phi_v0 != 0) {
                        temp_s2 = phi_s1 + 4;
                        phi_s1->unk0 = 0U;
                        Audio_PlaySoundAtPosition(globalCtx, temp_s2, 0x1E, 0x2817U);
                        phi_s2 = temp_s2;
                    } else {
                        phi_s1->unk8 = temp_f2_3;
                        temp_s2_2 = phi_s1 + 4;
                        phi_s2 = temp_s2_2;
                        if (phi_s1->unk2A == 0) {
                            temp_s2_3 = phi_s1 + 4;
                            Audio_PlaySoundAtPosition(globalCtx, temp_s2_3, 0x1E, 0x283DU);
                            phi_s1->unk0 = 3U;
                            phi_s1->unk2C = 0.1f;
                            phi_s1->unk30 = 0.6f;
                            phi_s1->unk10 = (f32) D_80A5AFB0.unk0;
                            phi_s1->unk14 = (f32) D_80A5AFB0.unk4;
                            phi_s1->unk18 = (f32) D_80A5AFB0.unk8;
                            phi_s1->unk1C = (f32) D_80A5AFB0.unk0;
                            phi_s1->unk20 = (f32) D_80A5AFB0.unk4;
                            phi_s1->unk3C = 0xC8;
                            phi_s1->unk28 = 9;
                            phi_s1->unk24 = (f32) D_80A5AFB0.unk8;
                            Math_Vec3f_Copy((Vec3f *) &sp98, temp_s2_3);
                            sp9C += 3.0f;
                            EffectSsGSplash_Spawn(globalCtx, (Vec3f *) &sp98, NULL, NULL, (s16) 1, (s16) 0x64);
                            phi_s2 = temp_s2_3;
                        } else {
                            phi_s1->unk0 = 0U;
                            Audio_PlaySoundAtPosition(globalCtx, temp_s2_2, 0x1E, 0x2830U);
                            EffectSsGRipple_Spawn(globalCtx, temp_s2_2, 0x46, 0x1F4, (s16) 0);
                            EffectSsGRipple_Spawn(globalCtx, temp_s2_2, 0x46, 0x1F4, (s16) 0xA);
                            Math_Vec3f_Copy((Vec3f *) &sp98, temp_s2_2);
                            sp9C += 10.0f;
                            EffectSsGSplash_Spawn(globalCtx, (Vec3f *) &sp98, NULL, NULL, (s16) 1, (s16) 0x12C);
                        }
                    }
                    phi_s0 = 0;
                    do {
                        SysMatrix_InsertYRotation_f((2.0f * ((f32) phi_s0 * 3.1415927f)) / 5.5f, 0);
                        SysMatrix_GetStateTranslationAndScaledZ(Rand_ZeroFloat(1.5f) + 1.5f, (Vec3f *) &spA4);
                        spA8 = Rand_ZeroFloat(4.0f) + 2.0f;
                        func_80A58908(this, phi_s2, &spA4, phi_s1->unk2A);
                        temp_s0 = phi_s0 + 1;
                        phi_s0 = temp_s0;
                    } while ((s32) temp_s0 < 0xC);
                }
            } else if (temp_v0 == 2) {
                phi_s1->unk34 = (f32) (phi_s1->unk34 + 0.15f);
                if (phi_s1->unk14 < -8.0f) {
                    phi_s1->unk14 = -8.0f;
                }
                if (phi_s1->unk14 < 0.0f) {
                    temp_f2_4 = this->actor.floorHeight;
                    if (phi_s1->unk8 <= temp_f2_4) {
                        phi_s1->unk8 = temp_f2_4;
                        if (phi_s1->unk2A == 0) {
                            phi_s1->unk0 = 3U;
                            phi_s1->unk2C = 0.05f;
                            phi_s1->unk30 = 0.2f;
                            phi_s1->unk10 = (f32) D_80A5AFB0.unk0;
                            phi_s1->unk14 = (f32) D_80A5AFB0.unk4;
                            phi_s1->unk18 = (f32) D_80A5AFB0.unk8;
                            phi_s1->unk1C = (f32) D_80A5AFB0.unk0;
                            phi_s1->unk20 = (f32) D_80A5AFB0.unk4;
                            phi_s1->unk3C = 0x96;
                            phi_s1->unk24 = (f32) D_80A5AFB0.unk8;
                            phi_s1->unk28 = (s16) (s32) (Rand_ZeroFloat(5.0f) + 7.0f);
                        } else {
                            EffectSsGRipple_Spawn(globalCtx, phi_s1 + 4, 0, 0xC8, (s16) 0);
                            goto block_43;
                        }
                    }
                }
            } else if (temp_v0 == 3) {
                Math_ApproachF(phi_s1 + 0x2C, phi_s1->unk30, 0.1f, 0.6f);
                phi_s1->unk3C = (s16) (phi_s1->unk3C - phi_s1->unk28);
                if ((s32) phi_s1->unk3C <= 0) {
                    phi_s1->unk3C = 0;
block_43:
                    phi_s1->unk0 = 0U;
                }
            }
        }
        temp_fp = phi_fp + 1;
        phi_s1 += 0x40;
        phi_fp = temp_fp;
    } while ((s32) temp_fp < 0x19);
}

void EnWaterEffect_Draw(EnWaterEffect *this, GlobalContext *globalCtx) {
    ? *sp54;
    ? *temp_s2;
    ? *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    s16 temp_s5;
    s16 temp_s5_2;
    u8 temp_v0_2;
    ? *phi_s2;
    s32 phi_s4;
    s16 phi_s5;
    ? *phi_s2_2;
    s32 phi_s4_2;
    s16 phi_s5_2;
    EnWaterEffect *this = (EnWaterEffect *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_v0 = &this->unk144;
    temp_s2 = temp_v0;
    temp_s0 = temp_a0;
    sp54 = temp_v0;
    func_8012C2DC(temp_a0);
    phi_s2 = temp_s2;
    phi_s4 = 0;
    phi_s5 = 0;
    phi_s4_2 = 0;
    phi_s5_2 = 0;
    do {
        temp_v0_2 = phi_s2->unk0;
        if ((temp_v0_2 == 1) || (temp_v0_2 == 2)) {
            if (phi_s4 == 0) {
                temp_s0->polyXlu.p = Gfx_CallSetupDL(temp_s0->polyXlu.p, 0U);
                temp_v0_3 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_3 + 8;
                temp_v0_3->words.w0 = 0xDB060020;
                temp_v0_3->words.w1 = Lib_SegmentedToVirtual((void *) D_0408DBE0);
                temp_v0_4 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_4 + 8;
                temp_v0_4->words.w1 = (u32) &D_06004260;
                temp_v0_4->words.w0 = 0xDE000000;
                temp_v0_5 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_5 + 8;
                temp_v0_5->words.w1 = 0xFAFAFF00;
                temp_v0_5->words.w0 = 0xFB000000;
                phi_s4 = (phi_s4 + 1) & 0xFF;
            }
            temp_v1 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v1 + 8;
            temp_v1->words.w0 = 0xFA000000;
            temp_f0 = phi_s2->unk38;
            temp_v1->words.w1 = (((u32) (temp_f0 + 55.0f) & 0xFF) << 0x10) | ((u32) temp_f0 << 0x18) | 0xE196;
            SysMatrix_InsertTranslation(phi_s2->unk4, phi_s2->unk8, phi_s2->unkC, 0);
            if (phi_s2->unk0 == 1) {
                Matrix_RotateY(func_800DFC68(globalCtx->cameraPtrs[globalCtx->activeCamera]), 1U);
            } else {
                SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
            }
            Matrix_Scale(phi_s2->unk2C, phi_s2->unk30, 1.0f, 1);
            SysMatrix_InsertZRotation_f(phi_s2->unk34, 1);
            temp_v0_6 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDA380003;
            temp_v0_6->words.w1 = Matrix_NewMtx(temp_s0);
            temp_v0_7 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w1 = (u32) &D_060042B0;
            temp_v0_7->words.w0 = 0xDE000000;
        }
        temp_s5 = phi_s5 + 1;
        phi_s2 += 0x40;
        phi_s5 = temp_s5;
    } while ((s32) temp_s5 < 0x19);
    phi_s2_2 = sp54;
    do {
        if (phi_s2_2->unk0 == 3) {
            if (phi_s4_2 == 0) {
                func_8012C448(temp_s0);
                temp_v0_8 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_8 + 8;
                temp_v0_8->words.w0 = 0xDB060020;
                temp_v0_8->words.w1 = Lib_SegmentedToVirtual((void *) D_0408DBE0);
                temp_v0_9 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_9 + 8;
                temp_v0_9->words.w0 = 0xFB000000;
                temp_v0_9->words.w1 = 0xFAFAFF00;
                temp_v0_10 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_10 + 8;
                temp_v0_10->words.w1 = (u32) &D_06004260;
                temp_v0_10->words.w0 = 0xDE000000;
                phi_s4_2 = (phi_s4_2 + 1) & 0xFF;
            }
            temp_v1_2 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v1_2 + 8;
            temp_v1_2->words.w0 = 0xFA000000;
            temp_f0_2 = phi_s2_2->unk38;
            temp_v1_2->words.w1 = (((u32) (temp_f0_2 + 55.0f) & 0xFF) << 0x10) | ((u32) temp_f0_2 << 0x18) | 0xE100 | (phi_s2_2->unk3C & 0xFF);
            SysMatrix_InsertTranslation(phi_s2_2->unk4, phi_s2_2->unk8, phi_s2_2->unkC, 0);
            temp_f12 = phi_s2_2->unk2C;
            Matrix_Scale(temp_f12, 1.0f, temp_f12, 1);
            SysMatrix_InsertYRotation_f(phi_s2_2->unk34, 1);
            temp_v0_11 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_11 + 8;
            temp_v0_11->words.w0 = 0xDA380003;
            temp_v0_11->words.w1 = Matrix_NewMtx(temp_s0);
            temp_v0_12 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_12 + 8;
            temp_v0_12->words.w1 = (u32) &D_060042F8;
            temp_v0_12->words.w0 = 0xDE000000;
        }
        temp_s5_2 = phi_s5_2 + 1;
        phi_s2_2 += 0x40;
        phi_s5_2 = temp_s5_2;
    } while ((s32) temp_s5_2 < 0x19);
}

void func_80A599E8(Actor *arg0, f32 *arg1, u8 arg2) {
    s16 temp_v0;
    s32 temp_t5;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0 + 0x144;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->unk0 == 0) {
        phi_s0->unk0 = 4U;
        phi_s0->unk4 = (s32) arg1->unk0;
        phi_s0->unk8 = (s32) arg1->unk4;
        phi_s0->unkC = (s32) arg1->unk8;
        phi_s0->unk1C = (f32) D_80A5AFB0.unk0;
        phi_s0->unk20 = (f32) D_80A5AFB0.unk4;
        phi_s0->unk24 = (f32) D_80A5AFB0.unk8;
        phi_s0->unk10 = (f32) D_80A5AFB0.unk0;
        phi_s0->unk14 = (f32) D_80A5AFB0.unk4;
        phi_s0->unk18 = (f32) D_80A5AFB0.unk8;
        if ((arg2 == 0) || (arg2 == 2)) {
            phi_s0->unk20 = -1.0f;
        }
        if ((s32) arg2 >= 2) {
            if (arg2 == 2) {
                phi_s0->unk10 = randPlusMinusPoint5Scaled(10.0f);
                phi_s0->unk14 = (f32) (Rand_ZeroFloat(3.0f) + 5.0f);
                phi_s0->unk18 = randPlusMinusPoint5Scaled(10.0f);
            }
            phi_s0->unk2C = 0.003f;
            phi_s0->unk34 = 0.0017f;
            phi_s0->unk30 = 0.0018f;
        } else {
            phi_s0->unk34 = 0.003f;
            phi_s0->unk2C = 0.003f;
            phi_s0->unk30 = 0.003f;
        }
        phi_s0->unk38 = 255.0f;
        temp_t5 = (s32) Rand_ZeroFloat(65536.0f);
        phi_s0->unk3C = 0xFF;
        phi_s0->unk28 = (s16) temp_t5;
        phi_s0->unk1 = (s8) (u32) Rand_ZeroFloat(200.0f);
        phi_s0->unk2A = arg2;
        return;
    }
    phi_s0 += 0x40;
    if ((s32) temp_v0 >= 0x32) {
        return;
    }
    goto loop_1;
}

void func_80A59C04(Actor *this, GlobalContext *globalCtx) {
    f32 sp94;
    ? sp90;
    ? sp88;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    CollisionContext *sp64;
    Actor *temp_s3;
    Actor *temp_v0;
    Actor *temp_v0_2;
    Vec3f *temp_s2;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_s0;
    s16 temp_s0_2;
    s16 temp_s7;
    s16 temp_v1;
    u8 temp_v0_3;
    u8 temp_v0_4;
    Actor *phi_v0;
    Actor *phi_v0_2;
    Actor *phi_s1;
    u8 phi_v0_3;
    s16 phi_s0;
    s32 phi_s5;
    s16 phi_s0_2;
    s16 phi_s7;

    temp_v0 = globalCtx->actorCtx.actorList[1].first;
    temp_s3 = globalCtx->actorCtx.actorList[2].first;
    phi_v0 = temp_v0;
    phi_v0_2 = temp_v0;
    phi_s1 = this + 0x144;
    if (temp_v0 != 0) {
loop_1:
        phi_v0_2 = phi_v0;
        if (phi_v0->id != 0x21A) {
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
            phi_v0_2 = temp_v0_2;
            if (temp_v0_2 != 0) {
                goto loop_1;
            }
        }
    }
    temp_v1 = this->unkDC6;
    if (temp_v1 != 0) {
        this->unkDC6 = (s16) (temp_v1 - 1);
    }
    if ((phi_v0_2 != 0) && (Flags_GetSwitch(globalCtx, ((s32) phi_v0_2->params >> 1) & 0x7F) != 0)) {
        this->unkDC6 = (s16) (s32) (Rand_ZeroFloat(150.0f) + 100.0f);
    } else if (func_801690CC(globalCtx) == 0) {
        this->unkDC4 = (s16) (this->unkDC4 + 1);
        if (this->unkDC6 == 0) {
            this->unkDC6 = (s16) (s32) (Rand_ZeroFloat(150.0f) + 100.0f);
            Actor_UpdateBgCheckInfo(globalCtx, this, 20.0f, 10.0f, 40.0f, 4U);
            sp74 = randPlusMinusPoint5Scaled(50.0f) + this->world.pos.x;
            sp78 = this->world.pos.y;
            sp7C = randPlusMinusPoint5Scaled(50.0f) + this->world.pos.z;
            func_80A599E8(this, &sp74, 0U);
        }
    }
    phi_s7 = 0;
    do {
        temp_v0_3 = phi_s1->unk0;
        phi_s5 = 0;
        if (temp_v0_3 != 0) {
            temp_f0 = phi_s1->unk14;
            phi_s1->flags += phi_s1->home.pos.z;
            phi_s1->home.pos.x += temp_f0;
            phi_s1->unk1 = (u8) (phi_s1->unk1 + 1);
            phi_s1->home.pos.y += phi_s1->unk18;
            phi_s1->unk14 = (f32) (temp_f0 + phi_s1->unk20);
            if (temp_v0_3 == 4) {
                temp_v0_4 = phi_s1->unk2A;
                phi_v0_3 = temp_v0_4;
                if ((s32) temp_v0_4 > 0) {
                    if (temp_v0_4 == 1) {
                        Math_ApproachF(phi_s1 + 0x2C, 0.001f, 0.5f, 0.0002f);
                    }
                    phi_v0_3 = phi_s1->unk2A;
                    if ((phi_s1->unk2A & 1) != 0) {
                        Math_ApproachZeroF(phi_s1 + 0x38, 1.0f, 30.0f);
                        if (phi_s1->unk2A == 1) {
                            phi_s1->unk3C = (s16) (phi_s1->unk3C - 0x14);
                        } else {
                            phi_s1->unk3C = (s16) (phi_s1->unk3C - 0xA);
                        }
                        if ((s32) phi_s1->unk3C <= 0) {
                            phi_s1->unk0 = 0U;
                        }
                        Math_ApproachZeroF(phi_s1 + 0x10, 1.0f, 1.0f);
                        Math_ApproachZeroF(phi_s1 + 0x18, 1.0f, 1.0f);
                        phi_v0_3 = phi_s1->unk2A;
                    }
                }
                if ((phi_v0_3 & 1) == 0) {
                    sp64 = &globalCtx->colCtx;
                    if (phi_v0_3 == 0) {
                        func_80A599E8(this, phi_s1 + 4, 1U);
                    } else if ((phi_s1->unk1 & 1) == 0) {
                        func_80A599E8(this, phi_s1 + 4, 3U);
                    }
                    temp_s2 = phi_s1 + 4;
                    if (phi_s1->unk14 < -20.0f) {
                        phi_s1->unk14 = -20.0f;
                    }
                    phi_s1->unk28 = (s16) (phi_s1->unk28 + 0x800);
                    if ((fabsf(phi_s1->flags - temp_s3->world.pos.x) < 20.0f) && (fabsf(phi_s1->home.pos.y - temp_s3->world.pos.z) < 20.0f) && (fabsf(phi_s1->home.pos.x - (temp_s3->world.pos.y + 25.0f)) < 30.0f)) {
                        phi_s5 = 1;
                        if ((temp_s3->unk14B != 1) && (temp_s3->unkD44 == 0)) {
                            func_800B8D50(globalCtx, this, 2.0f, (s16) (s32) Rand_ZeroFloat(65536.0f), 0.0f, 0x10U);
                            phi_s0 = 0;
                            do {
                                temp_s0 = phi_s0 + 1;
                                (temp_s3 + phi_s0)->unkD45 = Rand_S16Offset(0, 0xC8);
                                phi_s0 = temp_s0;
                            } while ((s32) temp_s0 < 0x12);
                            temp_s3->unkD44 = 1U;
                            func_800B8E58(temp_s3, (temp_s3->unkA68->unk92 + 0x681E) & 0xFFFF);
                        }
                    }
                    Math_Vec3f_Copy((Vec3f *) &sp90, temp_s2);
                    sp94 += 30.0f;
                    temp_f0_2 = func_800C3FA0(sp64, &sp88, &sp90);
                    if (fabsf(temp_f0_2 - this->floorHeight) > 200.0f) {
                        phi_s5 = 1;
                    }
                    if ((phi_s1->home.pos.x <= temp_f0_2) || (phi_s5 != 0)) {
                        phi_s0_2 = 0;
                        if (phi_s5 == 0) {
                            phi_s1->home.pos.x = temp_f0_2;
                        }
                        phi_s1->unk14 = 0.0f;
                        phi_s1->unk20 = 0.0f;
                        if (phi_s1->unk2A == 0) {
                            do {
                                func_80A599E8(this, (f32 *) temp_s2, 2U);
                                temp_s0_2 = phi_s0_2 + 1;
                                phi_s0_2 = temp_s0_2;
                            } while ((s32) temp_s0_2 < 5);
                            Audio_PlaySoundAtPosition(globalCtx, temp_s2, 0x1E, 0x284EU);
                        }
                        phi_s1->unk2A = (u8) (phi_s1->unk2A + 1);
                    }
                }
            }
        }
        temp_s7 = phi_s7 + 1;
        phi_s1 += 0x40;
        phi_s7 = temp_s7;
    } while ((s32) temp_s7 < 0x32);
}

void func_80A5A184(Actor *this, GlobalContext *globalCtx) {
    Gfx *temp_s2;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    f32 temp_f4;
    s16 temp_s5;
    s32 temp_f6;
    Actor *phi_s1;
    s32 phi_s7;
    s32 phi_t7;
    s16 phi_s5;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    phi_s1 = this + 0x144;
    phi_s7 = 0;
    phi_s5 = 0;
    do {
        if (phi_s1->unk0 == 4) {
            if (phi_s7 == 0) {
                temp_v0 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0 + 8;
                temp_v0->words.w1 = (u32) &D_06004340;
                temp_v0->words.w0 = 0xDE000000;
                temp_v0_2 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = 0xFF0A0000;
                temp_v0_2->words.w0 = 0xFB000000;
                temp_s0->polyOpa.p = Gfx_SetFog(temp_s0->polyOpa.p, 0xFF, 0, 0, 0xFF, 0x1F4, 0xE10);
                phi_s7 = (phi_s7 + 1) & 0xFF;
            }
            temp_v1 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v1 + 8;
            temp_v1->words.w0 = 0xFA008080;
            temp_f4 = phi_s1->unk38;
            temp_f6 = (s32) temp_f4;
            if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
                if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
                    phi_t7 = (s32) (temp_f4 - 2.1474836e9f) | 0x80000000;
                } else {
                    goto block_7;
                }
            } else {
                phi_t7 = temp_f6;
                if (temp_f6 < 0) {
block_7:
                    phi_t7 = -1;
                }
            }
            temp_v1->words.w1 = (phi_t7 << 0x18) | phi_s1->unk3D;
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDB060020;
            temp_v0_3->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((s32) phi_s1->unk1 * -0x14) & 0x1FF, 0x20, 0x80);
            SysMatrix_InsertTranslation(phi_s1->flags, phi_s1->home.pos.x, phi_s1->home.pos.y, 0);
            if ((s32) phi_s1->unk2A >= 2) {
                SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
            } else {
                Matrix_RotateY(func_800DFC68(globalCtx->cameraPtrs[globalCtx->activeCamera]), 1U);
            }
            Matrix_Scale(phi_s1->world.pos.z, phi_s1->unk30, 1.0f, 1);
            if ((phi_s5 & 1) != 0) {
                SysMatrix_InsertYRotation_f(3.1415927f, 1);
            }
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDA380003;
            temp_v0_4->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w1 = (u32) &D_060043E8;
            temp_v0_5->words.w0 = 0xDE000000;
            if ((phi_s1->unk2A & 1) == 0) {
                SysMatrix_InsertTranslation(phi_s1->flags, phi_s1->home.pos.x + 5.0f, phi_s1->home.pos.y, 0);
                SysMatrix_InsertXRotation_s(phi_s1->unk28, 1);
                temp_f12 = phi_s1->unk34;
                Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
                temp_s2 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = temp_s2 + 8;
                temp_s2->words.w0 = 0xDA380003;
                temp_s2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                temp_v1_2 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = temp_v1_2 + 8;
                temp_v1_2->words.w1 = (u32) &D_0406AB30;
                temp_v1_2->words.w0 = 0xDE000000;
            }
        }
        temp_s5 = phi_s5 + 1;
        phi_s1 += 0x40;
        phi_s5 = temp_s5;
    } while ((s32) temp_s5 < 0x32);
    temp_s0->polyOpa.p = func_801660B8(globalCtx, temp_s0->polyOpa.p);
}

void func_80A5A534(Actor *this, GlobalContext *globalCtx) {
    s32 temp_a0;
    f32 *phi_v1;
    u32 *phi_v0;
    s32 phi_a0;

    if (this->unkE38 < 1.0f) {
        Actor_MarkForDeath(this);
    }
    this->unkDC4 = (s16) (this->unkDC4 + 1);
    phi_v1 = &this->home.pos.y;
    phi_v0 = &this->flags;
    phi_a0 = 4;
    if ((s32) this->unkDC4 >= 0) {
        do {
            temp_a0 = phi_a0 + 4;
            phi_v1->unkDD0 = (f32) (phi_v1->unkDD0 + phi_v0->unkE08);
            phi_v0->unkE08 = (f32) (phi_v0->unkE08 + phi_v0->unkE18);
            phi_a0 = temp_a0;
            if (phi_v1->unkDD0 <= 0.0f) {
                phi_v1->unkDD0 = 0.0f;
                phi_v0->unkE08 = 0.0f;
            }
            phi_v1 += 0xC;
            phi_v0 += 4;
        } while (temp_a0 != 0x10);
        Math_ApproachF(this + 0xDD8, 20.0f, 1.0f, 0.025f);
        Math_ApproachF(this + 0xDE4, 20.0f, 1.0f, 0.075f);
        Math_ApproachF(this + 0xDF0, 20.0f, 1.0f, 0.1f);
        if ((s32) this->unkDC4 >= 0x18) {
            Math_ApproachF(this + 0xDFC, 2.0f, 0.1f, 0.2f);
            Math_ApproachZeroF(this + 0xE2C, 1.0f, 26.0f);
            Math_ApproachZeroF(this + 0xE30, 1.0f, 26.0f);
            Math_ApproachZeroF(this + 0xE34, 1.0f, 24.0f);
            if ((s32) this->unkDC4 >= 0x32) {
                Math_ApproachZeroF(this + 0xE38, 1.0f, 3.75f);
            }
        }
    }
}

void func_80A5A6B8(Actor *this, GlobalContext *globalCtx) {
    Gfx *sp80;
    Gfx *sp74;
    Gfx *sp68;
    Gfx *sp5C;
    Gfx *sp50;
    Gfx *sp40;
    ? *sp34;
    ? *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    GraphicsContext *temp_s0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_s1;
    Actor *phi_s2;
    s32 phi_s4;
    s16 phi_s1;

    temp_s0 = globalCtx->state.gfxCtx;
    SysMatrix_InsertTranslation(this->world.pos.x, this->world.pos.y, this->world.pos.z, 0);
    Matrix_RotateY(this->shape.rot.y, 1U);
    Matrix_Scale(this->scale.x, this->scale.y, this->scale.z, 1);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xFB000000;
    temp_v0->words.w1 = 0xA5EBFF80;
    SysMatrix_StatePush();
    SysMatrix_StatePush();
    SysMatrix_StatePush();
    temp_a0 = this->params;
    phi_s2 = this + 0x144;
    phi_s4 = 0;
    if ((temp_a0 == 0x309) || (temp_a0 == 0x30A)) {
        if (this->unkE2C > 1.0f) {
            func_8012C2DC(globalCtx->state.gfxCtx);
            AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_06000DE0));
            temp_f12 = this->unkDD8;
            Matrix_Scale(temp_f12, this->unkDDC, temp_f12, 1);
            temp_v0_2 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDA380003;
            sp80 = temp_v0_2;
            sp80->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v1 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v1 + 8;
            temp_v1->words.w0 = 0xFA000000;
            temp_v1->words.w1 = ((u32) this->unkE2C & 0xFF) | ~0xFF;
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = (u32) &D_06000420;
            temp_v0_3->words.w0 = 0xDE000000;
        }
        SysMatrix_StatePop();
        if (this->unkE30 > 1.0f) {
            func_8012C2DC(globalCtx->state.gfxCtx);
            AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_06000E0C));
            temp_f12_2 = this->unkDE4;
            Matrix_Scale(temp_f12_2, this->unkDE8, temp_f12_2, 1);
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDA380003;
            sp74 = temp_v0_4;
            sp74->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v1_2 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v1_2 + 8;
            temp_v1_2->words.w0 = 0xFA000000;
            temp_v1_2->words.w1 = ((u32) this->unkE30 & 0xFF) | ~0xFF;
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w1 = (u32) &D_06000730;
            temp_v0_5->words.w0 = 0xDE000000;
        }
        SysMatrix_StatePop();
    } else {
        SysMatrix_StatePop();
        SysMatrix_StatePop();
    }
    if ((this->unkE34 > 1.0f) && (this->params != 0x30C)) {
        func_8012C2DC(globalCtx->state.gfxCtx);
        AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_06000E40));
        temp_f12_3 = this->unkDF0;
        Matrix_Scale(temp_f12_3, this->unkDF4, temp_f12_3, 1);
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDA380003;
        sp68 = temp_v0_6;
        sp68->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v1_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1_3 + 8;
        temp_v1_3->words.w0 = 0xFA000000;
        temp_v1_3->words.w1 = ((u32) this->unkE34 & 0xFF) | ~0xFF;
        temp_v0_7 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w1 = (u32) &D_06000A48;
        temp_v0_7->words.w0 = 0xDE000000;
    }
    SysMatrix_StatePop();
    temp_a0_2 = this->params;
    if ((temp_a0_2 == 0x309) || (temp_a0_2 == 0x30C)) {
        func_8012C2DC(globalCtx->state.gfxCtx);
        AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_06000E58));
        temp_f12_4 = this->unkDFC;
        Matrix_Scale(temp_f12_4, this->unkE00, temp_f12_4, 1);
        temp_v0_8 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_8 + 8;
        temp_v0_8->words.w0 = 0xDA380003;
        sp5C = temp_v0_8;
        sp5C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v1_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1_4 + 8;
        temp_v1_4->words.w0 = 0xFA000000;
        temp_v1_4->words.w1 = ((u32) this->unkE38 & 0xFF) | ~0xFF;
        temp_v0_9 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_9 + 8;
        temp_v0_9->words.w1 = (u32) &D_06000CD8;
        temp_v0_9->words.w0 = 0xDE000000;
    }
    if (this->params == 0x309) {
        func_8012C2DC(globalCtx->state.gfxCtx);
        phi_s1 = 0;
        do {
            if (phi_s2->unk0 == 3) {
                sp30 = &D_060042F8;
                if (phi_s4 == 0) {
                    sp34 = &D_06004260;
                    func_8012C448(globalCtx->state.gfxCtx);
                    temp_v0_10 = temp_s0->polyXlu.p;
                    temp_s0->polyXlu.p = temp_v0_10 + 8;
                    temp_v0_10->words.w0 = 0xDB060020;
                    sp50 = temp_v0_10;
                    sp50->words.w1 = Lib_SegmentedToVirtual((void *) D_0408DBE0);
                    temp_v0_11 = temp_s0->polyXlu.p;
                    temp_s0->polyXlu.p = temp_v0_11 + 8;
                    temp_v0_11->words.w1 = 0xFAFAFF00;
                    temp_v0_11->words.w0 = 0xFB000000;
                    temp_v0_12 = temp_s0->polyXlu.p;
                    temp_s0->polyXlu.p = temp_v0_12 + 8;
                    temp_v0_12->words.w0 = 0xDE000000;
                    temp_v0_12->words.w1 = (u32) sp34;
                    phi_s4 = (phi_s4 + 1) & 0xFF;
                }
                temp_v1_5 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v1_5 + 8;
                temp_v1_5->words.w0 = 0xFA000000;
                temp_f0 = phi_s2->unk38;
                temp_v1_5->words.w1 = (((u32) (temp_f0 + 55.0f) & 0xFF) << 0x10) | ((u32) temp_f0 << 0x18) | 0xE100 | (phi_s2->unk3C & 0xFF);
                SysMatrix_InsertTranslation(phi_s2->flags, phi_s2->home.pos.x, phi_s2->home.pos.y, 0);
                temp_f12_5 = phi_s2->world.pos.z;
                Matrix_Scale(temp_f12_5, 1.0f, temp_f12_5, 1);
                SysMatrix_InsertYRotation_f(phi_s2->unk34, 1);
                temp_v0_13 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_13 + 8;
                temp_v0_13->words.w0 = 0xDA380003;
                sp40 = temp_v0_13;
                sp40->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                temp_v0_14 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_14 + 8;
                temp_v0_14->words.w0 = 0xDE000000;
                temp_v0_14->words.w1 = (u32) sp30;
            }
            temp_s1 = phi_s1 + 1;
            phi_s2 += 0x40;
            phi_s1 = temp_s1;
        } while ((s32) temp_s1 < 0x19);
    }
}
