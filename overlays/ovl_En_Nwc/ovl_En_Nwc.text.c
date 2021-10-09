typedef struct EnNwc {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x5A];                 /* maybe part of unk_188[16]? */
    /* 0x1E8 */ Vec3s unk_1E8;                      /* inferred */
    /* 0x1EE */ char pad_1EE[0x5A];                 /* maybe part of unk_1E8[16]? */
    /* 0x248 */ s8 unk_248;                         /* inferred */
    /* 0x249 */ s8 unk_249;                         /* inferred */
    /* 0x24A */ s16 unk_24A;                        /* inferred */
    /* 0x24C */ s16 unk_24C;                        /* inferred */
    /* 0x24E */ char pad_24E[0x2];
    /* 0x250 */ void *unk_250;                      /* inferred */
    /* 0x254 */ s16 unk_254;                        /* inferred */
    /* 0x256 */ s16 unk_256;                        /* inferred */
    /* 0x258 */ s16 unk_258;                        /* inferred */
    /* 0x25A */ s16 unk_25A;                        /* inferred */
    /* 0x25C */ u16 unk_25C;                        /* inferred */
    /* 0x25E */ s16 unk_25E;                        /* inferred */
    /* 0x260 */ s16 unk_260;                        /* inferred */
    /* 0x262 */ s16 unk_262;                        /* inferred */
    /* 0x264 */ void (*actionFunc)(EnNwc *, GlobalContext *);
} EnNwc;                                            /* size = 0x268 */

struct _mips2c_stack_EnNwc_Destroy {};              /* size 0x0 */

struct _mips2c_stack_EnNwc_Draw {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ GraphicsContext *sp2C;               /* inferred */
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnNwc_Init {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnNwc_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80944320 {
    /* 0x00 */ char pad_0[0x88];
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad_88[0x10];
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ char pad_B0[0xC];                    /* maybe part of spAC[4]? */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
};                                                  /* size = 0xC8 */

struct _mips2c_stack_func_80944554 {};              /* size 0x0 */

struct _mips2c_stack_func_80944590 {};              /* size 0x0 */

struct _mips2c_stack_func_809445D4 {};              /* size 0x0 */

struct _mips2c_stack_func_80944630 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809447A8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80944818 {
    /* 0x00 */ char pad_0[0x1F];
    /* 0x1F */ u8 sp1F;                             /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809448A4 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809449D0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80944A50 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ PosRot *sp28;                        /* inferred */
    /* 0x2C */ char pad_2C[0xC];                    /* maybe part of sp28[4]? */
    /* 0x38 */ s16 sp38;                            /* inferred */
    /* 0x3A */ char pad_3A[0x6];                    /* maybe part of sp38[4]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ void *sp4C;                          /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80944E44 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80944EFC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80944FA8 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8094506C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8094529C {};              /* size 0x0 */

struct _mips2c_stack_func_80945310 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

? func_801A0868(s32 *, ?, u8);                      /* extern */
void func_80944320(EnNwc *arg0, GlobalContext *arg1); /* static */
void *func_80944554(GlobalContext *arg0, GlobalContext *); /* static */
s32 func_80944590(EnNwc *arg0, GlobalContext *arg1); /* static */
s32 func_809445D4(void *arg0, void *arg1);          /* static */
void func_80944630(EnNwc *arg0, u16 arg1, u8);      /* static */
void func_809447A8(EnNwc *arg0);                    /* static */
void func_80944818(EnNwc *arg0, GlobalContext *);   /* static */
s32 func_8094529C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80945310(Actor *thisx, GlobalContext *globalCtx); /* static */
extern AnimationHeader D_060000E8;
extern ? D_060002E8;
extern FlexSkeletonHeader D_06002530;
static Color_RGBA8 D_80945390 = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80945394 = {0x50, 0x50, 0x50, 0xFF};
static ? D_80945398;                                /* unable to generate initializer */

void EnNwc_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_v0;
    void *temp_v0_2;
    EnNwc *this = (EnNwc *) thisx;

    temp_v0 = Object_GetIndex(&globalCtx->objectCtx, 0xF);
    if (temp_v0 < 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((gSaveContext.weekEventReg[25] & 8) != 0) {
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x11, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) (s32) this->actor.world.rot.y, (s16) 0, (s16) 0);
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->unk_248 = (s8) temp_v0;
    this->unk_249 = this->actor.objBankIndex;
    temp_v0_2 = func_80944554(globalCtx, globalCtx);
    this->unk_260 = 0;
    this->unk_250 = temp_v0_2;
    this->unk_25E = this->unk_260;
    Actor_SetScale((Actor *) this, 0.01f);
    this->actionFunc = func_809448A4;
    this->unk_25C = 0;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 6.0f);
    this->actor.minVelocityY = -9.0f;
    this->actor.velocity.y = 0.0f;
    this->actor.gravity = -1.0f;
}

void EnNwc_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnNwc *this = (EnNwc *) thisx;

}

void func_80944320(EnNwc *arg0, GlobalContext *arg1) {
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    ? sp88;
    Vec3f *temp_s0;
    f32 *temp_s1_2;
    f32 *temp_s2;
    f32 *temp_s3;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f4;
    s16 temp_s0_2;
    s16 temp_s1;
    s32 temp_s0_3;
    void *temp_t9;
    s32 phi_s0;

    temp_s0 = arg0 + 0x24;
    temp_t9 = (arg1 + (arg1->activeCamera * 4))->unk_800;
    sp88.unk_0 = (s32) temp_t9->unk_5C;
    sp88.unk_4 = (s32) temp_t9->unk_60;
    sp88.unk_8 = (s32) temp_t9->unk_64;
    temp_s1 = Math_Vec3f_Yaw((Vec3f *) &sp88, temp_s0);
    temp_s0_2 = Math_Vec3f_Pitch((Vec3f *) &sp88, temp_s0) * -1;
    temp_f20 = Math_SinS(temp_s1);
    temp_f24 = arg0->actor.world.pos.x - (Math_CosS(temp_s0_2) * (5.0f * temp_f20));
    temp_f26 = arg0->actor.world.pos.y - (Math_SinS(temp_s0_2) * 5.0f);
    temp_f20_2 = Math_CosS(temp_s1);
    temp_s2 = &spA4;
    temp_s3 = &sp98;
    temp_s1_2 = &spBC;
    temp_f28 = arg0->actor.world.pos.z - (Math_CosS(temp_s0_2) * (5.0f * temp_f20_2));
    phi_s0 = 0;
    do {
        spA4 = randPlusMinusPoint5Scaled(4.0f);
        spA8 = randPlusMinusPoint5Scaled(4.0f);
        temp_f0 = randPlusMinusPoint5Scaled(4.0f);
        temp_f16 = temp_f28 + temp_f0;
        temp_f4 = -temp_f0 * 0.1f;
        sp98 = -spA4 * 0.1f;
        spAC = temp_f0;
        sp9C = -spA8 * 0.1f;
        spBC = temp_f24 + spA4;
        spA0 = temp_f4;
        spC0 = temp_f26 + spA8;
        spC4 = temp_f16;
        func_800B0F80(arg1, (Vec3f *) temp_s1_2, (Vec3f *) temp_s2, (Vec3f *) temp_s3, &D_80945390, &D_80945394, (s16) 0x12C, (s16) 0x1E, (s16) 0xA);
        temp_s0_3 = phi_s0 + 1;
        phi_s0 = temp_s0_3;
    } while (temp_s0_3 != 5);
}

void *func_80944554(GlobalContext *arg0) {
    void *temp_v1;
    void *temp_v1_2;
    void *phi_v1;

    temp_v1 = arg0->actorCtx.actorList[4].first;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
loop_1:
        if (phi_v1->id == 0xA6) {
            return phi_v1;
        }
        temp_v1_2 = phi_v1->next;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 == 0) {
            /* Duplicate return node #4. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_1;
    }
    return NULL;
}

s32 func_80944590(EnNwc *arg0, GlobalContext *arg1) {
    if ((s32) arg0->unk_250->unk_14 >= 0x14) {
        return 0;
    }
    if ((arg1->actorCtx.actorList[2].first->unk_A74 * 4) < 0) {
        return 0;
    }
    return 1;
}

s32 func_809445D4(void *arg0, void *arg1) {
    if (arg0->unk_250 == 0) {
        return 0;
    }
    if (((arg1->unk_1CCC->unk_A74 * 4) < 0) && (arg0->unk_98 < 100.0f)) {
        return 1;
    }
    return 0;
}

void func_80944630(EnNwc *arg0, u16 arg1) {
    f32 temp_f16;
    f32 temp_f4;
    f32 temp_f8;
    s16 phi_t5;

    arg0->actor.speedXZ = 0.0f;
    switch (arg1) {
    case 0:
        arg0->unk_254 = 0xA;
        arg0->actionFunc = func_8094506C;
        break;
    case 1:
        temp_f8 = Rand_ZeroFloat(20.0f) + 15.0f;
        arg0->actionFunc = func_80944FA8;
        arg0->unk_254 = (s16) (s32) temp_f8;
        arg0->unk_256 = (s16) (s32) randPlusMinusPoint5Scaled(65536.0f);
        break;
    case 2:
        temp_f4 = Rand_ZeroFloat(20.0f) + 15.0f;
        arg0->actionFunc = func_80944E44;
        phi_t5 = (s16) (s32) temp_f4;
block_7:
        arg0->unk_254 = phi_t5;
        break;
    case 3:
        arg0->actionFunc = func_80944A50;
        arg0->unk_256 = 0;
        arg0->unk_258 = (s16) (s32) randPlusMinusPoint5Scaled(10000.0f);
        break;
    case 4:
        arg0->actor.world.rot.y = arg0->actor.home.rot.z * 0x3000;
        arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
        temp_f16 = Rand_ZeroFloat(40.0f) + 120.0f;
        arg0->actionFunc = func_80944EFC;
        phi_t5 = (s16) (s32) temp_f16;
        goto block_7;
    }
    arg0->unk_25A = (s16) arg1;
}

void func_809447A8(EnNwc *arg0) {
    arg0->actor.speedXZ = 0.0f;
    if (arg0->unk_25A != 0) {
        func_80944630(NULL);
        return;
    }
    func_80944630(arg0, (u16) (s16) (s32) (Rand_ZeroFloat(2.0f) + 1.0f));
}

void func_80944818(EnNwc *arg0) {
    u8 sp1F;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_a2;
    void *temp_v1;
    u8 phi_a2;

    if (func_809445D4() != 0) {
        temp_v1 = arg0->unk_250;
        temp_v0 = temp_v1->home.rot.z;
        temp_a2 = ((s32) temp_v0 / 2) & 0xFF;
        phi_a2 = (u8) temp_a2;
        if (temp_a2 >= 0xA) {
            phi_a2 = 9U;
        }
        arg0->actor.home.rot.z = temp_v0 + 1;
        temp_v0_2 = temp_v1->home.rot.z;
        if ((s32) temp_v0_2 < 0x14) {
            temp_v1->home.rot.z = temp_v0_2 + 2;
        }
        sp1F = phi_a2;
        func_80944630(arg0, 3U, phi_a2);
        func_801A0868(&D_801DB4A4, 0x4852, phi_a2);
    }
}

void func_809448A4(EnNwc *this, GlobalContext *globalCtx) {
    SkelAnime *sp30;
    SkelAnime *temp_a1;

    if (Object_IsLoaded(&globalCtx->objectCtx, (s32) this->unk_248) != 0) {
        temp_a1 = &this->unk_144;
        *(gSegments + 0x18) = (u32) (globalCtx->objectCtx.status[this->unk_248].segment + 0x80000000);
        sp30 = temp_a1;
        SkelAnime_InitSV(globalCtx, temp_a1, &D_06002530, &D_060000E8, &this->unk_188, &this->unk_1E8, 0x10);
        SkelAnime_ChangeAnim(sp30, &D_060000E8, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060000E8), (u8) 0, 0.0f);
        *(gSegments + 0x18) = (u32) (globalCtx->objectCtx.status[this->unk_249].segment + 0x80000000);
        this->unk_25A = -1;
        func_809447A8(this);
    }
}

void func_809449D0(EnNwc *this, GlobalContext *globalCtx) {
    Math_SmoothStepToS(&this->unk_262, 0x2710, 2, 0x1B58, (s16) 0x3E8);
    Math_SmoothStepToS(&this->unk_260, 0, 2, 0x1B58, (s16) 0x3E8);
    Math_SmoothStepToS(&this->unk_25E, 0x36B0, 2, 0x1B58, (s16) 0x3E8);
}

void func_80944A50(EnNwc *this, GlobalContext *globalCtx) {
    void *sp4C;
    f32 sp40;
    s16 sp38;
    PosRot *sp28;
    Actor *temp_v0_3;
    PosRot *temp_a3;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 phi_v1;
    s16 phi_a1;
    s16 phi_v1_2;
    s32 phi_v1_3;

    sp4C = this->unk_250 + 0x2A4;
    this->unk_254 += 1;
    if ((this->unk_25C & 1) != 0) {
        phi_v1 = 0;
        phi_a1 = 0;
        phi_v1 = 0;
        phi_a1 = 0;
        if (this->actor.speedXZ > 0.0f) {
            temp_v0 = this->unk_254;
            if ((temp_v0 & 4) != 0) {
                phi_v1 = -0x2710;
                phi_a1 = 0x1B58;
            }
            if ((temp_v0 & 3) == 3) {
                this->actor.velocity.y = 2.0f;
            }
        }
        sp38 = phi_v1;
        Math_SmoothStepToS(&this->unk_260, phi_a1, 2, 0x1B58, (s16) 0x3E8);
        Math_SmoothStepToS(&this->unk_262, sp38, 2, 0x1B58, (s16) 0x3E8);
    } else {
        temp_v0_2 = this->unk_254;
        if (((temp_v0_2 & 3) == 3) && ((temp_v0_2 & 0x14) != 0)) {
            this->actor.velocity.y = 2.0f;
        }
        if ((this->unk_254 & 0x1B) == 0x18) {
            Audio_PlayActorSound2((Actor *) this, 0x2994U);
        }
    }
    if (((s32) this->unk_250->home.rot.z >= 0x14) && ((this->unk_25C & 1) == 0)) {
        this->unk_256 += 2;
        if ((s32) this->unk_256 >= (s32) (s16) ((this->actor.home.rot.z * 0x1E) + 0x1E)) {
            temp_v0_3 = this->unk_250;
            this->unk_25C |= 1;
            temp_v0_3->home.rot.x += 2;
            func_80944320(this, globalCtx);
            Actor_SetScale((Actor *) this, 0.002f);
            Audio_PlayActorSound2((Actor *) this, 0x2948U);
        }
    }
    temp_a3 = &this->actor.world;
    sp28 = temp_a3;
    Math_Vec3f_Diff((this->actor.home.rot.z * 0xC) + sp4C, (Vec3f *) temp_a3, (Vec3f *) &sp40);
    if (((sp40 * sp40) + (sp48 * sp48)) < 25.0f) {
        temp_v0_4 = this->actor.home.rot.z;
        this->actor.speedXZ = 0.0f;
        if (temp_v0_4 == 1) {
            phi_v1_2 = this->actor.yawTowardsPlayer;
        } else {
            phi_v1_3 = Math_Vec3f_Yaw((Vec3f *) temp_a3, ((temp_v0_4 * 0xC) + sp4C) - 0x18) << 0x10;
            goto block_25;
        }
    } else {
        sp28 = temp_a3;
        this->unk_258 += (s32) randPlusMinusPoint5Scaled(1500.0f);
        temp_v0_5 = this->unk_258;
        if ((s32) temp_v0_5 >= 0x1389) {
            this->unk_258 = 0x1388;
        } else if ((s32) temp_v0_5 < -0x1388) {
            this->unk_258 = -0x1388;
        }
        this->actor.speedXZ = 2.0f;
        phi_v1_3 = (Math_Vec3f_Yaw((Vec3f *) temp_a3, (this->actor.home.rot.z * 0xC) + sp4C) + this->unk_258) << 0x10;
block_25:
        phi_v1_2 = (s16) (phi_v1_3 >> 0x10);
    }
    this->actor.world.rot.y = phi_v1_2;
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.world.rot.y, 2, 0xBB8, (s16) 0xC8);
    if (func_80944590(this, globalCtx) != 0) {
        this->unk_250->home.rot.x = 0;
        this->unk_250->home.rot.z = 0;
        func_80944630(this, 4U);
        if ((this->unk_25C & 1) != 0) {
            func_80944320(this, globalCtx);
        }
        this->unk_25C &= 0xFFFE;
        Actor_SetScale((Actor *) this, 0.01f);
    }
    temp_f0 = this->actor.scale.x;
    if (temp_f0 < 0.01f) {
        this->actor.scale.x = temp_f0 + 0.002f;
        Actor_SetScale((Actor *) this, this->actor.scale.x);
    }
    if ((s32) this->unk_250->home.rot.x >= 0x14) {
        Audio_PlayActorSound2((Actor *) this, 0x2813U);
        this->actionFunc = func_809449D0;
        this->actor.speedXZ = 0.0f;
        Actor_SetScale((Actor *) this, 0.01f);
    }
}

void func_80944E44(EnNwc *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 phi_v1;
    s16 phi_v0;

    temp_v0 = this->unk_254;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        this->unk_254 = temp_v0 - 1;
        phi_v1 = this->unk_254;
    }
    phi_v0 = this->unk_254;
    if (phi_v1 == 0) {
        func_809447A8();
        return;
    }
    if ((this->unk_254 & 3) == 3) {
        this->actor.velocity.y = 2.0f;
        phi_v0 = this->unk_254;
    }
    if ((phi_v0 & 0xB) == 8) {
        Audio_PlayActorSound2((Actor *) this, 0x2994U);
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        this->actor.speedXZ = 0.0f;
        return;
    }
    this->actor.speedXZ = 2.0f;
}

void func_80944EFC(EnNwc *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 phi_v1;
    s16 phi_v0;

    temp_v0 = this->unk_254;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        this->unk_254 = temp_v0 - 1;
        phi_v1 = this->unk_254;
    }
    phi_v0 = this->unk_254;
    if (phi_v1 == 0) {
        func_809447A8();
        return;
    }
    if ((this->unk_254 & 3) == 3) {
        this->actor.velocity.y = 2.0f;
        phi_v0 = this->unk_254;
    }
    if ((phi_v0 & 0xB) == 8) {
        Audio_PlayActorSound2((Actor *) this, 0x2994U);
    }
    this->actor.speedXZ = 2.0f;
    if ((this->actor.bgCheckFlags & 8) != 0) {
        func_809447A8(this);
    }
}

void func_80944FA8(EnNwc *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 phi_v1;
    s16 phi_v0;

    temp_v0 = this->unk_254;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        this->unk_254 = temp_v0 - 1;
        phi_v1 = this->unk_254;
    }
    phi_v0 = this->unk_254;
    if (phi_v1 == 0) {
        func_809447A8(this);
        return;
    }
    if ((this->unk_254 & 7) == 7) {
        this->actor.velocity.y = 2.0f;
        phi_v0 = this->unk_254;
    }
    if ((phi_v0 & 0xB) == 8) {
        Audio_PlayActorSound2((Actor *) this, 0x2994U);
    }
    if ((this->actor.bgCheckFlags & 1) == 0) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->unk_256, 0xA, 0x1000, (s16) 0x800);
        this->actor.world.rot.y = this->actor.shape.rot.y;
    }
}

void func_8094506C(EnNwc *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = this->unk_254;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        this->unk_254 = temp_v0 - 1;
        phi_v1 = this->unk_254;
    }
    if (phi_v1 == 0) {
        func_809447A8();
    }
    func_80944818(this, globalCtx);
}

void EnNwc_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v1;
    s16 phi_v0;
    s16 phi_v1;
    EnNwc *this = (EnNwc *) thisx;

    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, 10.0f, 10.0f, 5U);
    this->actionFunc(this, globalCtx);
    if ((this->unk_25C & 1) != 0) {
        this->actor.draw = func_80945310;
        this->actor.objBankIndex = this->unk_248;
        this->actor.shape.shadowScale = 15.0f;
    } else {
        this->actor.draw = EnNwc_Draw;
        this->actor.objBankIndex = this->unk_249;
        this->actor.shape.shadowScale = 6.0f;
    }
    temp_v1 = this->unk_24C;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        this->unk_24C = temp_v1 - 1;
        phi_v0 = this->unk_24C;
    }
    phi_v1 = this->unk_24C;
    if (phi_v0 == 0) {
        this->unk_24C = Rand_S16Offset(0x3C, 0x3C);
        phi_v1 = this->unk_24C;
    }
    if ((phi_v1 == 1) || (phi_v1 == 3)) {
        this->unk_24A = 1;
        return;
    }
    this->unk_24A = 0;
}

void EnNwc_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ? sp38;
    Gfx *sp30;
    GraphicsContext *sp2C;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    EnNwc *this = (EnNwc *) thisx;

    sp38.unk_0 = (s32) D_80945398.unk_0;
    sp38.unk_4 = (s32) D_80945398.unk_4;
    temp_a0 = globalCtx->state.gfxCtx;
    sp2C = temp_a0;
    func_8012C28C(temp_a0);
    temp_v1 = sp2C->polyOpa.p;
    temp_v1->words.w0 = 0xDB060020;
    sp30 = temp_v1;
    temp_v1->words.w1 = Lib_SegmentedToVirtual((sp + (this->unk_24A * 4))->unk_38);
    temp_v1->unk_8 = 0xDA380003;
    sp30 = temp_v1;
    temp_v1->unk_C = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v1->unk_14 = &D_060002E8;
    temp_v1->unk_10 = 0xDE000000;
    sp2C->polyOpa.p = temp_v1 + 0x18;
}

s32 func_8094529C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xD) {
        arg4->y += arg5->unk_262;
    }
    if ((arg1 == 0xB) || (arg1 == 7)) {
        arg4->y += arg5->unk_25E;
        arg4->z += arg5->unk_260;
    }
    return 0;
}

void func_80945310(Actor *thisx, GlobalContext *globalCtx) {
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, thisx->unk_148, thisx->unk_164, (s32) thisx->unk_146, func_8094529C, NULL, thisx);
}
