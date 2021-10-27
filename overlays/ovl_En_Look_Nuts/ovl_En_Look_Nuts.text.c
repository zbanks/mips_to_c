typedef struct EnLookNuts {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x3C];                 /* maybe part of unk_188[11]? */
    /* 0x1CA */ Vec3s unk_1CA;                      /* inferred */
    /* 0x1D0 */ char pad_1D0[0x3C];                 /* maybe part of unk_1CA[11]? */
    /* 0x20C */ void (*actionFunc)(EnLookNuts *, GlobalContext *);
    /* 0x210 */ char pad_210[0x6];                  /* maybe part of actionFunc[2]? */
    /* 0x216 */ s16 unk_216;                        /* inferred */
    /* 0x218 */ s16 unk_218;                        /* inferred */
    /* 0x21A */ s16 unk_21A;                        /* inferred */
    /* 0x21C */ s16 unk_21C;                        /* inferred */
    /* 0x21E */ s16 unk_21E;                        /* inferred */
    /* 0x220 */ s16 unk_220;                        /* inferred */
    /* 0x222 */ s16 unk_222;                        /* inferred */
    /* 0x224 */ char pad_224[0x2];
    /* 0x226 */ s16 unk_226;                        /* inferred */
    /* 0x228 */ char pad_228[0x4];                  /* maybe part of unk_226[3]? */
    /* 0x22C */ f32 unk_22C;                        /* inferred */
    /* 0x230 */ f32 unk_230;                        /* inferred */
    /* 0x234 */ f32 unk_234;                        /* inferred */
    /* 0x238 */ Vec3f unk_238;                      /* inferred */
    /* 0x244 */ ColliderCylinder unk_244;           /* inferred */
} EnLookNuts;                                       /* size = 0x290 */

struct _mips2c_stack_EnLookNuts_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnLookNuts_Draw {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ GraphicsContext *sp28;               /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnLookNuts_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnLookNuts_Update {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ColliderCylinder *sp34;              /* inferred */
    /* 0x38 */ char pad_38[0xA];                    /* maybe part of sp34[3]? */
    /* 0x42 */ s16 sp42;                            /* inferred */
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0xC];
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad_5C[0x8];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x8];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80A67A34 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A67AA8 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A67C48 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A67D0C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A67F30 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A67FC4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A68080 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A680FC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

s32 func_8013D83C(Path *, s16, PosRot *, f32 *);    /* extern */
void func_80A67A34(EnLookNuts *arg0);               /* static */
void func_80A67AA8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A67C48(Actor *arg0);                    /* static */
void func_80A67D0C(EnLookNuts *arg0, GlobalContext *arg1); /* static */
void func_80A67F30(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A67FC4(Actor *actor, Lights *mapper, GlobalContext *globalCtx); /* static */
void func_80A68080(Actor *arg0);                    /* static */
void func_80A680FC(void *arg0, GlobalContext *arg1); /* static */
extern AnimationHeader D_06000430;
extern SkeletonHeader D_06002848;
extern AnimationHeaderCommon D_06002B6C;
static ColliderCylinderInit D_80A68600 = {
    {0xA, 0, 9, 0, 0, 1},
    {0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0},
    {0x14, 0x32, 0, {0, 0, 0}},
};
static s32 D_80A6862C = 0;
static DamageTable D_80A68630 = {
    {
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xE1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF0,
        0xF0,
        0xF0,
        0,
        0xF1,
        0xF1,
    },
};
static ? D_80A68650;                                /* unable to generate initializer */
static ? D_80A6865C;                                /* unable to generate initializer */

void EnLookNuts_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v1;
    EnLookNuts *this = (EnLookNuts *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    SkelAnime_Init(globalCtx, &this->unk_144, &D_06002848, &D_06000430, &this->unk_188, &this->unk_1CA, 0xB);
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.colChkInfo.damageTable = &D_80A68630;
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.targetMode = 1;
    Collider_InitAndSetCylinder(globalCtx, &this->unk_244, (Actor *) this, &D_80A68600);
    temp_v1 = this->actor.params;
    this->unk_21E = temp_v1 & 0x7F;
    this->actor.flags |= 0x8000000;
    this->unk_220 = ((s32) temp_v1 >> 7) & 0x1F;
    this->unk_226 = ((s32) temp_v1 >> 0xC) & 0xF;
    if (this->unk_21E == 0x7F) {
        this->unk_21E = -1;
    }
    if (((s32) this->unk_21E >= 0) && (Flags_GetSwitch(globalCtx, (s32) this->unk_21E) != 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (this->unk_220 == 0x1F) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->unk_21C = 0;
    func_80A67A34(this);
}

void EnLookNuts_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnLookNuts *this = (EnLookNuts *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_244);
}

void func_80A67A34(EnLookNuts *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_06002B6C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06002B6C), (u8) 0, -10.0f);
    arg0->unk_21C = 0;
    arg0->actionFunc = func_80A67AA8;
}

void func_80A67AA8(Actor *arg0, GlobalContext *arg1) {
    f32 sp34;
    f32 sp30;
    SkelAnime *sp2C;
    Path *temp_v0;
    SkelAnime *temp_a0;
    f32 temp_v0_2;

    temp_a0 = arg0 + 0x144;
    sp2C = temp_a0;
    sp34 = 0.0f;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801690CC(arg1) != 0) {
        arg0->speedXZ = 0.0f;
        return;
    }
    arg0->speedXZ = 2.0f;
    if ((func_801378B8(sp2C, 1.0f) != 0) || (func_801378B8(sp2C, 5.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x387FU);
    }
    if (D_80A6862C != 0) {
        Math_ApproachZeroF(&arg0->speedXZ, 0.3f, 1.0f);
        return;
    }
    temp_v0 = func_8013D648(arg1, arg0->unk_220, 0x1F);
    arg0[1].shape.shadowScale = (bitwise f32) temp_v0;
    if (temp_v0 != 0) {
        sp34 = (f32) func_8013D83C(temp_v0, arg0->unk_214, &arg0->world, &sp30);
    }
    if ((sp30 < 10.0f) && (temp_v0_2 = arg0[1].shape.shadowScale, ((bitwise s32) temp_v0_2 != 0))) {
        arg0->unk_214 = (s16) (arg0->unk_214 + 1);
        if ((s32) arg0->unk_214 >= (s32) *temp_v0_2) {
            arg0->unk_214 = 0;
        }
        if (Rand_ZeroOne() < 0.6f) {
            func_80A67C48(arg0);
            return;
        }
        goto block_15;
    }
block_15:
    Math_SmoothStepToS(&arg0->shape.rot.y, (s16) (s32) sp34, 1, 0x1388, (s16) 0);
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_80A67C48(Actor *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_06002B6C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06002B6C), (u8) 2, -10.0f);
    arg0->unk_224 = Rand_S16Offset(1, 3);
    arg0[1].projectedW = 10000.0f;
    if (Rand_ZeroOne() < 0.5f) {
        arg0[1].projectedW = -10000.0f;
    }
    arg0->unk_21A = 0xA;
    arg0->unk_21C = 1;
    arg0[1].shape.shadowDraw = func_80A67D0C;
}

void func_80A67D0C(EnLookNuts *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s16 temp_v1;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    Math_ApproachZeroF(arg0 + 0x70, 0.3f, 1.0f);
    if ((func_801690CC(arg1) == 0) && (D_80A6862C == 0) && (arg0->unk_21A == 0)) {
        temp_v1 = arg0->unk_224;
        arg0->unk_21A = 0xA;
        switch (temp_v1) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            arg0->unk_224 = temp_v1 + 1;
            arg0->unk_238.y *= -1.0f;
            break;
        case 5:
            arg0->unk_238.y = 0.0f;
            temp_v0 = Rand_S16Offset(1, 2);
            arg0->unk_21A = 0;
            arg0->unk_224 += temp_v0;
block_17:
            break;
        case 6:
            if (fabsf(arg0->unk_238.y - arg0->unk_230) < 10.0f) {
                arg0->unk_224 = 0xA;
                arg0->unk_21A = 5;
                arg0->unk_238.x = 4000.0f;
            }
            break;
        case 7:
            if (fabsf(arg0->unk_238.y - arg0->unk_230) < 10.0f) {
                arg0->unk_224 = temp_v1 + 1;
                arg0->unk_238.z = 4000.0f;
            }
            break;
        case 8:
            arg0->unk_224 = 0xA;
            arg0->unk_21A = 0x14;
            arg0->unk_238.z = -8000.0f;
            break;
        case 10:
            Math_Vec3f_Copy(arg0 + 0x238, &D_801D15B0);
            arg0->unk_224 = 0xB;
            goto block_17;
        case 11:
            if ((fabsf(arg0->unk_22C) < 30.0f) && (fabsf(arg0->unk_230) < 30.0f) && (fabsf(arg0->unk_234) < 30.0f)) {
                arg0->unk_224 = 0xC;
                goto block_17;
            }
            break;
        }
        if (arg0->unk_224 == 0xC) {
            arg0->unk_224 = 0;
            func_80A67A34(arg0);
        }
    }
}

void func_80A67F30(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_06002B6C, 2.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06002B6C), (u8) 0, -10.0f);
    arg0->unk_21C = 2;
    arg0->unk_21A = 0x12C;
    func_801518B0(arg1, 0x833U, arg0);
    arg0[1].shape.shadowDraw = func_80A67FC4;
}

void func_80A67FC4(Actor *actor, Lights *mapper, GlobalContext *globalCtx) {
    Actor *sp2C;
    Actor *temp_a0;

    temp_a0 = &actor[1];
    sp2C = temp_a0;
    SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0);
    if ((func_801378B8((SkelAnime *) temp_a0, 1.0f) != 0) || (func_801378B8((SkelAnime *) temp_a0, 5.0f) != 0)) {
        Audio_PlayActorSound2(actor, 0x387FU);
    }
    actor->speedXZ = 4.0f;
    Math_SmoothStepToS(&actor->world.rot.y, actor->yawTowardsPlayer, 1, 0xBB8, (s16) 0);
    if ((actor->xzDistToPlayer < 70.0f) || (actor->unk_21A == 0)) {
        actor->speedXZ = 0.0f;
        func_80A68080(actor);
    }
}

void func_80A68080(Actor *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_06002B6C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06002B6C), (u8) 2, -10.0f);
    arg0->unk_21C = 3;
    arg0[1].shape.shadowDraw = func_80A680FC;
}

void func_80A680FC(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    Math_SmoothStepToS(arg0 + 0x32, arg0->yawTowardsPlayer, 1, 0xBB8, (s16) 0);
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        func_801477B4(arg1);
        arg1->nextEntranceIndex = Entrance_CreateIndexFromSpawn((s32) arg0->unk_226);
        gSaveContext.nextCutsceneIndex = 0;
        Scene_SetExitFade(arg1);
        arg1->sceneLoadFlag = 0x14;
        gSaveContext.weekEventReg[17] |= 4;
    }
}

void EnLookNuts_Update(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp64;
    ? sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    ? sp44;
    s16 sp42;
    ColliderCylinder *sp34;
    ColliderCylinder *temp_a2;
    f32 temp_f16;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v1;
    EnLookNuts *this = (EnLookNuts *) thisx;

    if (this->unk_218 == 0) {
        this->unk_216 += 1;
        if ((s32) this->unk_216 >= 3) {
            this->unk_216 = 0;
            this->unk_218 = (s32) Rand_ZeroFloat(60.0f) + 0x14;
        }
    }
    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk_218;
    if (temp_v0 != 0) {
        this->unk_218 = temp_v0 - 1;
    }
    temp_v0_2 = this->unk_21A;
    if (temp_v0_2 != 0) {
        this->unk_21A = temp_v0_2 - 1;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    if (D_80A6862C == 0) {
        if (((s32) this->unk_21C < 2) && (this->actor.xzDistToPlayer < 320.0f) && (this->actor.yDistToPlayer < 80.0f)) {
            sp5C.unk_0 = (s32) D_80A68650.unk_0;
            sp5C.unk_4 = (s32) D_80A68650.unk_4;
            sp5C.unk_8 = (s32) D_80A68650.unk_8;
            Math_Vec3f_Copy((Vec3f *) &sp50, (Vec3f *) &this->actor.world);
            temp_f16 = sp50 + (Math_SinS((s16) (this->actor.world.rot.y + (s32) this->unk_230)) * 10.0f);
            sp54 += 30.0f;
            sp50 = temp_f16;
            sp58 += Math_CosS((s16) (this->actor.world.rot.y + (s32) this->unk_230)) * 10.0f;
            SysMatrix_StatePush();
            Matrix_RotateY(this->actor.shape.rot.y, 0U);
            sp64 = 20.0f;
            SysMatrix_MultiplyVector3fByState((Vec3f *) &sp5C, (Vec3f *) &sp44);
            SysMatrix_StatePop();
            if (this->unk_222 == 0) {
                phi_v1 = 1;
                if (gSaveContext.isNight != 0) {
                    phi_v1 = 0;
                }
                sp42 = phi_v1;
                if (Player_GetMask(globalCtx) != 0x10) {
                    EffectSsSolderSrchBall_Spawn(globalCtx, (Vec3f *) &sp50, (Vec3f *) &sp44, &D_801D15B0, (s16) 0x32, &this->unk_222, (s16) (s32) phi_v1);
                }
            }
            if ((this->unk_222 == 1) || (this->actor.xzDistToPlayer < 20.0f)) {
                if ((((bitwise s32) globalCtx->actorCtx.actorList[2].first[8].targetArrowOffset & 0x100) == 0) && (func_801690CC(globalCtx) == 0)) {
                    Math_Vec3f_Copy(&this->unk_238, &D_801D15B0);
                    this->unk_21C = 2;
                    play_sound(0x482CU);
                    func_800B7298(globalCtx, (Actor *) this, 0x1AU);
                    D_80A6862C = 1;
                    this->actor.flags |= 0x11;
                    this->actor.gravity = 0.0f;
                    func_80A67F30((Actor *) this, globalCtx);
                } else {
                    this->unk_222 = 0;
                }
            }
        }
        Math_ApproachF(&this->unk_22C, this->unk_238.x, 1.0f, 3000.0f);
        Math_ApproachF(&this->unk_230, this->unk_238.y, 1.0f, 6000.0f);
        Math_ApproachF(&this->unk_234, this->unk_238.z, 1.0f, 2000.0f);
        temp_a2 = &this->unk_244;
        this->actor.shape.rot.y = this->actor.world.rot.y;
        sp34 = temp_a2;
        Collider_UpdateCylinder((Actor *) this, temp_a2);
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    }
}

void EnLookNuts_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp28;
    Gfx *sp20;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;
    EnLookNuts *this = (EnLookNuts *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp28 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp28->polyOpa.p;
    sp28->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDB060020;
    sp20 = temp_v0;
    sp20->words.w1 = Lib_SegmentedToVirtual(*(&D_80A6865C + (this->unk_216 * 4)));
    SkelAnime_Draw(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, NULL, NULL, (Actor *) this);
}
