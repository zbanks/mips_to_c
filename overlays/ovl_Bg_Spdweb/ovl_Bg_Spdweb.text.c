typedef struct BgSpdweb {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ void (*actionFunc)(BgSpdweb *, GlobalContext *);
    /* 0x160 */ u8 unk_160;                         /* inferred */
    /* 0x161 */ u8 unk_161;                         /* inferred */
    /* 0x162 */ s16 unk_162;                        /* inferred */
    /* 0x164 */ f32 unk_164;                        /* inferred */
    /* 0x168 */ ColliderTris unk_168;               /* inferred */
    /* 0x188 */ ColliderTrisElement unk_188;        /* inferred */
    /* 0x1E4 */ char pad_1E4[0x114];                /* maybe part of unk_188[4]? */
    /* 0x2F8 */ Vec3s *unk_2F8;                     /* inferred */
} BgSpdweb;                                         /* size = 0x2FC */

struct _mips2c_stack_BgSpdweb_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgSpdweb_Draw {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ GraphicsContext *sp20;               /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_BgSpdweb_Init {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_BgSpdweb_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809CE068 {
    /* 0x00 */ char pad_0[0x64];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0xC];
    /* 0x70 */ ? sp70;                              /* inferred */
    /* 0x70 */ char pad_70[0xC];
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad_7C[0xC];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_809CE15C {};              /* size 0x0 */

struct _mips2c_stack_func_809CE1D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809CE234 {
    /* 0x00 */ char pad_0[0xA8];
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_809CE4C8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x12];                   /* maybe part of sp24[5]? */
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];                    /* maybe part of sp3A[3]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ Actor *sp4C;                         /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_809CE830 {
    /* 0x00 */ char pad_0[0x90];
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ char pad_98[0x4];
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x4];
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ char pad_A8[0x8];                    /* maybe part of spA4[3]? */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ char pad_B4[0x10];                   /* maybe part of spB0[5]? */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ f32 spDC;                            /* inferred */
    /* 0xE0 */ f32 spE0;                            /* inferred */
    /* 0xE4 */ f32 spE4;                            /* inferred */
};                                                  /* size = 0xE8 */

struct _mips2c_stack_func_809CEBC0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x10];                   /* maybe part of sp44[5]? */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_809CEE74 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809CEEAC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

s32 func_80123F48(GlobalContext *, f32 *, ?, f32);  /* extern */
? func_801A75E8(?);                                 /* extern */
void func_809CE068(BgSpdweb *arg0);                 /* static */
void func_809CE15C(BgSpdweb *arg0);                 /* static */
void func_809CE1D0(Actor *arg0, GlobalContext *arg1); /* static */
void func_809CE234(Actor *arg0, GlobalContext *arg1); /* static */
void func_809CE4C8(BgSpdweb *, GlobalContext *);    /* static */
void func_809CE830(Actor *arg0, GlobalContext *arg1); /* static */
void func_809CEBC0(BgSpdweb *, GlobalContext *);    /* static */
void func_809CEE74(BgSpdweb *arg0);                 /* static */
void func_809CEEAC(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_06000060;
extern CollisionHeader D_060011C0;
extern ? D_060012F0;
extern CollisionHeader D_06002678;
static ColliderTrisElementInit D_809CF080[2] = {
    {
        {0, {0xF7CFFFFF, 0, 0}, {0xC00, 0, 0}, 0, 1, 0},
        {{{75.0f, -8.0f, 75.0f}, {75.0f, -8.0f, -75.0f}, {-75.0f, -8.0f, -75.0f}}},
    },
    {
        {0, {0xF7CFFFFF, 0, 0}, {0xC00, 0, 0}, 0, 1, 0},
        {{{75.0f, -8.0f, 75.0f}, {-75.0f, -8.0f, -75.0f}, {-75.0f, -8.0f, 75.0f}}},
    },
};
static ColliderTrisInit D_809CF0F8 = {{0xA, 0, 9, 0, 0x20, 2}, 2, &D_809CF080};
static ColliderTrisElementInit D_809CF108[4] = {
    {
        {0, {0xF7CFFFFF, 0, 0}, {0x800, 0, 0}, 0, 1, 0},
        {{{70.0f, 160.0f, 15.0f}, {-70.0f, 160.0f, 15.0f}, {-70.0f, 20.0f, 15.0f}}},
    },
    {
        {0, {0xF7CFFFFF, 0, 0}, {0x800, 0, 0}, 0, 1, 0},
        {{{70.0f, 160.0f, 15.0f}, {-70.0f, 20.0f, 15.0f}, {70.0f, 20.0f, 15.0f}}},
    },
    {
        {0, {0xF7CFFFFF, 0, 0}, {0x800, 0, 0}, 0, 1, 0},
        {{{-70.0f, 160.0f, -15.0f}, {70.0f, 160.0f, -15.0f}, {70.0f, 20.0f, -15.0f}}},
    },
    {
        {0, {0xF7CFFFFF, 0, 0}, {0x800, 0, 0}, 0, 1, 0},
        {{{-70.0f, 160.0f, -15.0f}, {70.0f, 20.0f, -15.0f}, {-70.0f, 20.0f, -15.0f}}},
    },
};
static ColliderTrisInit D_809CF1F8 = {{0xA, 0, 9, 0, 0x20, 2}, 4, &D_809CF108};
static Color_RGBA8 D_809CF208 = {0xFF, 0xFF, 0x96, 0xAA};
static Color_RGBA8 D_809CF20C = {0xFF, 0, 0, 0};
static InitChainEntry D_809CF210[4];                /* unable to generate initializer */

void BgSpdweb_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgSpdweb *this = (BgSpdweb *) thisx;
    Actor_ProcessInitChain((Actor *) this, D_809CF210);
    this->unk_161 = 0;
    this->unk_160 = ((s32) this->actor.params >> 8) & 0x7F;
    this->actor.params &= 0xFF;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    if (this->actor.params == 0) {
        Collider_InitAndSetTris(globalCtx, &this->unk_168, (Actor *) this, &D_809CF0F8, &this->unk_188);
        func_809CE068(this);
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06002678);
        this->actionFunc = func_809CE4C8;
        this->unk_164 = 0.0f;
        this->unk_2F8 = globalCtx->colCtx.dyna.bgActors[this->unk_144].colHeader->vtxList;
    } else {
        Collider_InitAndSetTris(globalCtx, &this->unk_168, (Actor *) this, &D_809CF1F8, &this->unk_188);
        func_809CE068(this);
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_060011C0);
        this->actionFunc = func_809CEBC0;
        Actor_SetHeight((Actor *) this, 30.0f);
    }
    this->unk_162 = 0;
    if (Flags_GetSwitch(globalCtx, (s32) this->unk_160) != 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void BgSpdweb_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;
    BgSpdweb *this = (BgSpdweb *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk_144);
    Collider_DestroyTris(globalCtx, &this->unk_168);
}

void func_809CE068(BgSpdweb *arg0) {
    ? sp7C;
    ? sp70;
    ? sp64;
    Vec3f *temp_s0;
    s32 temp_s5;
    s32 phi_s2;
    s32 phi_s1;
    Vec3f *phi_s0;
    s32 phi_s5;

    SysMatrix_SetStateRotationAndTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, arg0 + 0xBC);
    phi_s2 = 0;
    phi_s5 = 0;
    if (arg0->unk_168.count > 0) {
        do {
            phi_s1 = 0;
            phi_s0 = (Vec3f *) &sp64;
loop_3:
            SysMatrix_MultiplyVector3fByState(arg0->unk_168.elements + phi_s2 + phi_s1 + 0x28, phi_s0);
            temp_s0 = phi_s0 + 0xC;
            phi_s1 += 0xC;
            phi_s0 = temp_s0;
            if (temp_s0 != &arg0) {
                goto loop_3;
            }
            Collider_SetTrisVertices(arg0 + 0x168, phi_s5, (Vec3f *) &sp64, (Vec3f *) &sp70, (Vec3f *) &sp7C);
            temp_s5 = phi_s5 + 1;
            phi_s2 += 0x5C;
            phi_s5 = temp_s5;
        } while (temp_s5 < arg0->unk_168.count);
    }
}

void func_809CE15C(BgSpdweb *arg0) {
    s32 temp_f18;

    temp_f18 = (s32) ((arg0->actor.home.pos.y - arg0->actor.world.pos.y) * 10.0f);
    arg0->unk_2F8->unk_5C = (s16) temp_f18;
    arg0->unk_2F8->unk_56 = (s16) temp_f18;
    arg0->unk_2F8->unk_50 = (s16) temp_f18;
    arg0->unk_2F8->unk_4A = (s16) temp_f18;
    arg0->unk_2F8->unk_44 = (s16) temp_f18;
    arg0->unk_2F8->unk_3E = (s16) temp_f18;
    arg0->unk_2F8->unk_14 = (s16) temp_f18;
    arg0->unk_2F8->y = (s16) temp_f18;
}

void func_809CE1D0(Actor *arg0, GlobalContext *arg1) {
    u8 temp_a1;

    arg0->unk_162 = 0x1E;
    temp_a1 = arg0->unk_160;
    arg0 = arg0;
    Actor_SetSwitchFlag(arg1, (s32) temp_a1);
    if (arg0->params == 0) {
        arg0->unk_15C = func_809CE234;
        return;
    }
    arg0->unk_15C = func_809CE830;
}

void func_809CE234(Actor *arg0, GlobalContext *arg1) {
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    PosRot *temp_s4;
    f32 *temp_a1;
    f32 *temp_fp;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f2;
    f32 temp_f6;
    s16 temp_s0;
    s16 temp_s1;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_s3;
    s16 phi_s2;
    f32 phi_f24;
    f32 phi_f20;
    f32 phi_f22;
    s32 phi_s3;

    temp_v0 = arg0->unk_162;
    if (temp_v0 != 0) {
        arg0->unk_162 = (s16) (temp_v0 - 1);
    }
    if ((s32) arg0->unk_162 == 0) {
        ActorCutscene_Stop((s16) arg0->cutscene);
        Actor_MarkForDeath(arg0);
        return;
    }
    if (((s32) arg0->unk_162 % 3) == 0) {
        temp_f6 = Rand_ZeroOne() * 10922.0f;
        spB8 = 0.0f;
        temp_s4 = &arg0->home;
        temp_fp = &spB4;
        spAC = arg0->world.pos.y;
        phi_s2 = (s16) (s32) temp_f6;
        phi_s3 = 0;
        do {
            temp_v0_2 = (s32) randPlusMinusPoint5Scaled(10240.0f) + phi_s2;
            temp_s0 = temp_v0_2;
            temp_f24 = Math_SinS(temp_v0_2);
            temp_f0 = Math_CosS(temp_s0);
            temp_f22 = temp_f0;
            temp_f10 = 120.0f * temp_f0;
            temp_a1 = &spA8;
            spA8 = arg0->world.pos.x + (120.0f * temp_f24);
            spB0 = arg0->world.pos.z + temp_f10;
            temp_f2 = Math_Vec3f_DistXZ((Vec3f *) temp_s4, (Vec3f *) temp_a1) * 0.008333334f;
            temp_s1 = temp_s0 + 0x8000;
            phi_f24 = temp_f24;
            phi_f20 = temp_f2;
            phi_f22 = temp_f22;
            if (temp_f2 < 0.7f) {
                temp_f20 = 1.0f - temp_f2;
                temp_f24_2 = Math_SinS(temp_s1);
                phi_f24 = temp_f24_2;
                phi_f20 = temp_f20;
                phi_f22 = Math_CosS(temp_s1);
            }
            spB8 = 0.0f;
            spB4 = 7.0f * phi_f24 * phi_f20;
            spBC = 7.0f * phi_f22 * phi_f20;
            EffectSsDeadDb_Spawn(arg1, (Vec3f *) temp_s4, (Vec3f *) temp_fp, &D_801D15B0, &D_809CF208, &D_809CF20C, (s16) 0x32, (s16) 8, 0xE);
            temp_s3 = phi_s3 + 1;
            phi_s2 = (s16) (phi_s2 + 0x2AAA);
            phi_s3 = temp_s3;
        } while (temp_s3 != 6);
        Audio_PlaySoundAtPosition(arg1, (Vec3f *) temp_s4, 0xB, 0x3878U);
    }
}

void func_809CE4C8(BgSpdweb *arg0, GlobalContext *arg1) {
    Actor *sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s16 sp3A;
    s32 sp24;
    Actor *temp_v0;
    ColliderTrisElement *temp_v0_2;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_v1;
    void *temp_a2;
    s32 phi_v1;
    s16 phi_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    sp40 = arg0->actor.world.pos.x;
    sp44 = arg0->actor.world.pos.y - 50.0f;
    sp48 = arg0->actor.world.pos.z;
    sp4C = temp_v0;
    sp3A = temp_v0->unk_B6A;
    if (func_80123F48(arg1, &sp40, 0x428C0000, 50.0f) != 0) {
        arg0->actor.home.pos.x = sp4C->unk_B9C;
        arg0->actor.home.pos.z = sp4C->unk_BA4;
        func_809CEE74(arg0);
        return;
    }
    phi_v1 = 0;
    if ((arg0->unk_168.base.acFlags & 2) != 0) {
loop_3:
        temp_v0_2 = arg0->unk_168.elements;
        temp_a2 = temp_v0_2 + phi_v1;
        if ((temp_a2->unk_16 & 2) != 0) {
            if ((*(temp_v0_2 + phi_v1)->unk_24 & 0x800) != 0) {
                Math_Vec3s_ToVec3f((Vec3f *) &arg0->actor.home, temp_a2 + 0xE);
                func_809CEE74(arg0);
                return;
            }
            sp24 = phi_v1;
            if (func_800CAF70((DynaPolyActor *) arg0) != 0) {
                sp3A = 0x12C;
                goto block_9;
            }
            goto block_8;
        }
block_8:
        temp_v1 = phi_v1 + 0x5C;
        phi_v1 = temp_v1;
        if (temp_v1 == 0xB8) {
            goto block_9;
        }
        goto loop_3;
    }
block_9:
    if (func_800CAF70((DynaPolyActor *) arg0) != 0) {
        phi_v0 = sp3A;
        if ((s32) sp3A < 0) {
            phi_v0 = 0;
        }
        temp_f2 = arg0->unk_164;
        temp_f12 = 2.0f * sqrtf((f32) phi_v0);
        if ((temp_f2 < temp_f12) && (temp_f12 > 2.0f)) {
            arg0->unk_164 = temp_f12;
            arg0->unk_162 = 0xC;
            if ((s32) sp3A >= 0x33) {
                sp4C->unk_A6C = (s32) (sp4C->unk_A6C | 0x20);
                arg0->unk_161 = 1;
            }
        } else if (sp4C->speedXZ != 0.0f) {
            if (temp_f2 < 2.0f) {
                arg0->unk_164 = 2.0f;
            } else {
                arg0->unk_164 = temp_f2;
            }
        }
    }
    temp_v0_3 = arg0->unk_162;
    if (temp_v0_3 != 0) {
        arg0->unk_162 = temp_v0_3 - 1;
    }
    arg0->actor.world.pos.y = (sin_rad((f32) arg0->unk_162 * 0.5235988f) * arg0->unk_164) + arg0->actor.home.pos.y;
    Math_ApproachZeroF(&arg0->unk_164, 1.0f, 0.8f);
    temp_v0_4 = arg0->unk_162;
    if (temp_v0_4 == 4) {
        if ((arg0->unk_161 != 0) || ((func_800CAF70((DynaPolyActor *) arg0) != 0) && (arg0->unk_164 > 2.0f))) {
            sp4C->velocity.y = arg0->unk_164 * 0.7f;
            temp_f2_2 = arg0->unk_164;
            sp4C->unk_B68 = (s16) (s32) ((temp_f2_2 * temp_f2_2 * 0.15f) + arg0->actor.world.pos.y);
            arg0->unk_161 = 0;
            sp4C->unk_A6C = (s32) (sp4C->unk_A6C & ~0x20);
        }
        goto block_32;
    }
    if (temp_v0_4 == 0xB) {
        if (arg0->unk_164 > 3.0f) {
            Audio_PlayActorSound2((Actor *) arg0, 0x2861U);
        } else {
            func_801A75E8(0x2861);
        }
block_32:
    }
    if (arg0->unk_162 == 0) {
        arg0->unk_162 = 0xC;
    }
    func_809CE15C(arg0);
    CollisionCheck_SetAC(arg1, &arg1->colChkCtx, (Collider *) &arg0->unk_168);
}

void func_809CE830(Actor *arg0, GlobalContext *arg1) {
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spB0;
    f32 spA4;
    f32 sp9C;
    f32 sp94;
    f32 sp90;
    PosRot *temp_s4;
    f32 *temp_a1;
    f32 *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    f32 temp_f8;
    s16 temp_s0;
    s16 temp_s1;
    s16 temp_s3;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_s2;
    s16 phi_s3;
    f32 phi_f28;
    f32 phi_f24;
    f32 phi_f22;
    f32 phi_f26;
    s32 phi_s2;

    temp_v0 = arg0->unk_162;
    if (temp_v0 != 0) {
        arg0->unk_162 = (s16) (temp_v0 - 1);
    }
    if ((s32) arg0->unk_162 == 0) {
        if (ActorCutscene_GetLength((s16) arg0->cutscene) == -1) {
            ActorCutscene_Stop((s16) arg0->cutscene);
        }
        Actor_MarkForDeath(arg0);
        return;
    }
    if (((s32) arg0->unk_162 % 3) == 0) {
        temp_s3 = (s16) (s32) (Rand_ZeroOne() * 10922.0f);
        spB0 = Math_CosS(arg0->shape.rot.x);
        temp_f20 = Math_SinS(arg0->shape.rot.x);
        temp_f30 = Math_CosS(arg0->shape.rot.y);
        temp_f0 = Math_SinS(arg0->shape.rot.y);
        temp_f2 = 90.0f * temp_f20;
        temp_s4 = &arg0->home;
        temp_f16 = 90.0f * spB0;
        spC4 = arg0->world.pos.x + (temp_f2 * temp_f0);
        spC8 = arg0->world.pos.y + temp_f16;
        sp9C = temp_f16;
        spA4 = temp_f0;
        spCC = arg0->world.pos.z + (temp_f2 * temp_f30);
        sp94 = temp_f20 * temp_f0;
        sp90 = temp_f20 * temp_f30;
        phi_s3 = temp_s3;
        phi_s2 = 0;
        do {
            temp_v0_2 = (s32) randPlusMinusPoint5Scaled(10240.0f) + phi_s3;
            temp_s0 = temp_v0_2;
            temp_f20_2 = Math_SinS(temp_v0_2);
            temp_f0_2 = Math_CosS(temp_s0);
            temp_f24 = temp_f30 * temp_f20_2;
            temp_f22 = temp_f0_2;
            temp_a1 = &spD0;
            temp_f8 = sp9C * temp_f0_2;
            spD0 = ((temp_f24 + (sp94 * temp_f0_2)) * 90.0f) + spC4;
            temp_f26 = spA4 * temp_f20_2;
            spD4 = temp_f8 + spC8;
            spD8 = (((sp90 * temp_f0_2) - temp_f26) * 90.0f) + spCC;
            temp_f2_2 = Math_Vec3f_DistXYZ((Vec3f *) temp_s4, (Vec3f *) temp_a1) * 0.011111111f;
            temp_s1 = temp_s0 + 0x8000;
            phi_f28 = temp_f2_2;
            phi_f24 = temp_f24;
            phi_f22 = temp_f22;
            phi_f26 = temp_f26;
            if (temp_f2_2 < 0.65f) {
                temp_f28 = 1.0f - temp_f2_2;
                temp_f20_3 = Math_SinS(temp_s1);
                phi_f28 = temp_f28;
                phi_f24 = temp_f30 * temp_f20_3;
                phi_f22 = Math_CosS(temp_s1);
                phi_f26 = spA4 * temp_f20_3;
            }
            temp_f14 = 6.5f * phi_f28;
            temp_a2 = &spDC;
            spDC = temp_f14 * (phi_f24 + (sp94 * phi_f22));
            spE0 = temp_f14 * spB0 * phi_f22;
            spE4 = temp_f14 * ((sp90 * phi_f22) - phi_f26);
            EffectSsDeadDb_Spawn(arg1, (Vec3f *) temp_s4, (Vec3f *) temp_a2, &D_801D15B0, &D_809CF208, &D_809CF20C, (s16) 0x3C, (s16) 8, 0xE);
            temp_s2 = phi_s2 + 1;
            phi_s3 = (s16) (phi_s3 + 0x2AAA);
            phi_s2 = temp_s2;
        } while (temp_s2 != 6);
        Audio_PlaySoundAtPosition(arg1, (Vec3f *) temp_s4, 0xB, 0x3878U);
    }
}

void func_809CEBC0(BgSpdweb *arg0, GlobalContext *arg1) {
    f32 sp58;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp28;
    Vec3f *sp24;
    Actor *temp_v0;
    Vec3f *temp_a0;
    Vec3f *temp_v1;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f18;
    f32 temp_f8;
    ColliderTrisElement *phi_v0;
    Vec3f *phi_v1;
    Vec3f *phi_v1_2;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    phi_v1 = NULL;
    if ((arg0->unk_168.base.acFlags & 2) != 0) {
        phi_v0 = arg0->unk_168.elements;
loop_2:
        if ((phi_v0->info.bumperFlags & 2) != 0) {
            sp24 = phi_v1;
            Math_Vec3s_ToVec3f((Vec3f *) &arg0->actor.home, phi_v0 + 0xE);
            phi_v1_2 = phi_v1;
        } else {
            temp_v1 = phi_v1 + 0x5C;
            phi_v0 += 0x5C;
            phi_v1 = temp_v1;
            phi_v1_2 = temp_v1;
            if (temp_v1 != 0x170) {
                goto loop_2;
            }
        }
        if (phi_v1_2 == 0x170) {
            sp28 = Math_SinS(arg0->actor.shape.rot.x);
            arg0->actor.home.pos.x = (Math_SinS(arg0->actor.shape.rot.y) * (90.0f * sp28)) + arg0->actor.world.pos.x;
            arg0->actor.home.pos.y = (Math_CosS(arg0->actor.shape.rot.x) * 90.0f) + arg0->actor.world.pos.y;
            sp28 = Math_SinS(arg0->actor.shape.rot.x);
            arg0->actor.home.pos.z = (Math_CosS(arg0->actor.shape.rot.y) * (90.0f * sp28)) + arg0->actor.world.pos.z;
        }
        func_809CEE74(arg0);
    } else if (temp_v0->unk_147 == 7) {
        temp_a0 = temp_v0 + 0xB9C;
        if (temp_v0->unk_B28 != 0) {
            sp24 = temp_a0;
            Math_Vec3f_Diff(temp_a0, (Vec3f *) &arg0->actor.world, (Vec3f *) &sp3C);
            sp38 = Math_SinS((s16) ((s32) arg0->actor.shape.rot.x * -1));
            sp34 = Math_CosS((s16) ((s32) arg0->actor.shape.rot.x * -1));
            sp30 = Math_SinS((s16) ((s32) arg0->actor.shape.rot.y * -1));
            temp_f0 = Math_CosS((s16) ((s32) arg0->actor.shape.rot.y * -1));
            temp_f18 = ((sp3C * sp38 * sp30) + (sp40 * sp34)) - (sp44 * sp38 * temp_f0);
            temp_f8 = (-sp3C * sp34 * sp30) + (sp40 * sp38) + (sp44 * sp34 * temp_f0);
            temp_f10 = sp3C * temp_f0;
            sp58 = temp_f8;
            if ((fabsf(temp_f10 + (sp44 * sp30)) < 70.0f) && (fabsf(temp_f8) < 10.0f) && (temp_f18 < 160.0f) && (temp_f18 > 20.0f)) {
                Math_Vec3f_Copy((Vec3f *) &arg0->actor.home, sp24);
                func_809CEE74(arg0);
            }
        }
    }
    CollisionCheck_SetAC(arg1, &arg1->colChkCtx, (Collider *) &arg0->unk_168);
}

void func_809CEE74(BgSpdweb *arg0) {
    ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
    arg0->actionFunc = func_809CEEAC;
}

void func_809CEEAC(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;
    s8 temp_a0;
    s8 temp_a0_2;

    temp_a0 = arg0->cutscene;
    arg0 = arg0;
    temp_a2 = arg0;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        temp_a0_2 = temp_a2->cutscene;
        arg0 = temp_a2;
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0_2, temp_a2);
        func_809CE1D0(arg0, arg1);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a2->cutscene);
}

void BgSpdweb_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgSpdweb *this = (BgSpdweb *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgSpdweb_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp20;
    Gfx *temp_s0;
    GraphicsContext *temp_t6;
    BgSpdweb *this = (BgSpdweb *) thisx;

    temp_t6 = globalCtx->state.gfxCtx;
    sp20 = temp_t6;
    temp_s0 = temp_t6->polyXlu.p;
    temp_s0->words.w1 = (u32) (sSetupDL + 0x4B0);
    temp_s0->words.w0 = 0xDE000000;
    if (this->actor.params == 1) {
        temp_s0->unk_8 = 0xDA380003;
        temp_s0->unk_C = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_s0->unk_10 = 0xDE000000;
        temp_s0->unk_14 = &D_06000060;
    } else {
        SysMatrix_InsertTranslation(0.0f, (this->actor.home.pos.y - this->actor.world.pos.y) * 10.0f, 0.0f, 1);
        Matrix_Scale(1.0f, ((this->actor.home.pos.y - this->actor.world.pos.y) + 10.0f) * 0.1f, 1.0f, 1);
        temp_s0->unk_8 = 0xDA380003;
        temp_s0->unk_C = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_s0->unk_10 = 0xDE000000;
        temp_s0->unk_14 = &D_060012F0;
    }
    sp20->polyXlu.p = temp_s0 + 0x18;
}
