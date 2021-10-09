s32 func_8013D83C(Path *, s16, PosRot *, f32 *);    /* extern */
void func_80A67A34(EnLookNuts *arg0);               /* static */
void func_80A67AA8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A67C48(Actor *arg0);                    /* static */
void func_80A67D0C(EnLookNuts *arg0, GlobalContext *arg1); /* static */
void func_80A67F30(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A67FC4(Actor *arg0, ? arg1);            /* static */
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

typedef struct EnLookNuts {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x3C];                 /* maybe part of unk188[11]? */
    /* 0x01CA */ Vec3s unk1CA;                      /* inferred */
    /* 0x01D0 */ char pad1D0[0x3C];                 /* maybe part of unk1CA[11]? */
    /* 0x020C */ void (*actionFunc)(EnLookNuts *, GlobalContext *);
    /* 0x0210 */ char pad210[0x6];
    /* 0x0216 */ s16 unk216;                        /* inferred */
    /* 0x0218 */ s16 unk218;                        /* inferred */
    /* 0x021A */ s16 unk21A;                        /* inferred */
    /* 0x021C */ s16 unk21C;                        /* inferred */
    /* 0x021E */ s16 unk21E;                        /* inferred */
    /* 0x0220 */ s16 unk220;                        /* inferred */
    /* 0x0222 */ s16 unk222;                        /* inferred */
    /* 0x0224 */ s16 unk224;                        /* inferred */
    /* 0x0226 */ s16 unk226;                        /* inferred */
    /* 0x0228 */ char pad228[0x4];                  /* maybe part of unk226[3]? */
    /* 0x022C */ f32 unk22C;                        /* inferred */
    /* 0x0230 */ f32 unk230;                        /* inferred */
    /* 0x0234 */ f32 unk234;                        /* inferred */
    /* 0x0238 */ Vec3f unk238;                      /* inferred */
    /* 0x0244 */ ColliderCylinder unk244;           /* inferred */
} EnLookNuts;                                       /* size 0x290 */

void EnLookNuts_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnLookNuts *this = (EnLookNuts *) thisx;
    s16 temp_v1;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    SkelAnime_Init(globalCtx, &this->unk144, &D_06002848, &D_06000430, &this->unk188, &this->unk1CA, 0xB);
    Actor_SetScale(&this->actor, 0.01f);
    this->actor.colChkInfo.damageTable = &D_80A68630;
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.targetMode = 1;
    Collider_InitAndSetCylinder(globalCtx, &this->unk244, &this->actor, &D_80A68600);
    temp_v1 = this->actor.params;
    this->unk21E = temp_v1 & 0x7F;
    this->actor.flags |= 0x8000000;
    this->unk220 = ((s32) temp_v1 >> 7) & 0x1F;
    this->unk226 = ((s32) temp_v1 >> 0xC) & 0xF;
    if (this->unk21E == 0x7F) {
        this->unk21E = -1;
    }
    if (((s32) this->unk21E >= 0) && (Flags_GetSwitch(globalCtx, (s32) this->unk21E) != 0)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    if (this->unk220 == 0x1F) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->unk21C = 0;
    func_80A67A34(this);
}

void EnLookNuts_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnLookNuts *this = (EnLookNuts *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk244);
}

void func_80A67A34(EnLookNuts *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_06002B6C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06002B6C), (u8) 0, -10.0f);
    arg0->unk21C = 0;
    arg0->actionFunc = func_80A67AA8;
}

void func_80A67AA8(Actor *arg0, GlobalContext *arg1) {
    f32 sp34;
    f32 sp30;
    SkelAnime *sp2C;
    Path *temp_v0;
    Path *temp_v0_2;
    SkelAnime *temp_a0;

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
    temp_v0 = func_8013D648(arg1, arg0->unk220, 0x1F);
    arg0->unk210 = temp_v0;
    if (temp_v0 != 0) {
        sp34 = (f32) func_8013D83C(temp_v0, arg0->unk214, &arg0->world, &sp30);
    }
    if ((sp30 < 10.0f) && (temp_v0_2 = arg0->unk210, (temp_v0_2 != 0))) {
        arg0->unk214 = (s16) (arg0->unk214 + 1);
        if ((s32) arg0->unk214 >= (s32) temp_v0_2->count) {
            arg0->unk214 = 0;
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
    arg0->unk224 = Rand_S16Offset(1, 3);
    arg0->unk23C = 10000.0f;
    if (Rand_ZeroOne() < 0.5f) {
        arg0->unk23C = -10000.0f;
    }
    arg0->unk21A = 0xA;
    arg0->unk21C = 1;
    arg0->unk20C = func_80A67D0C;
}

void func_80A67D0C(EnLookNuts *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s16 temp_v1;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    Math_ApproachZeroF(arg0 + 0x70, 0.3f, 1.0f);
    if ((func_801690CC(arg1) == 0) && (D_80A6862C == 0) && (arg0->unk21A == 0)) {
        temp_v1 = arg0->unk224;
        arg0->unk21A = 0xA;
        switch (temp_v1) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            arg0->unk224 = temp_v1 + 1;
            arg0->unk238.y *= -1.0f;
            break;
        case 5:
            arg0->unk238.y = 0.0f;
            temp_v0 = Rand_S16Offset(1, 2);
            arg0->unk21A = 0;
            arg0->unk224 += temp_v0;
block_17:
            break;
        case 6:
            if (fabsf(arg0->unk238.y - arg0->unk230) < 10.0f) {
                arg0->unk224 = 0xA;
                arg0->unk21A = 5;
                arg0->unk238.x = 4000.0f;
            }
            break;
        case 7:
            if (fabsf(arg0->unk238.y - arg0->unk230) < 10.0f) {
                arg0->unk224 = temp_v1 + 1;
                arg0->unk238.z = 4000.0f;
            }
            break;
        case 8:
            arg0->unk224 = 0xA;
            arg0->unk21A = 0x14;
            arg0->unk238.z = -8000.0f;
            break;
        case 10:
            Math_Vec3f_Copy(arg0 + 0x238, &D_801D15B0);
            arg0->unk224 = 0xB;
            goto block_17;
        case 11:
            if ((fabsf(arg0->unk22C) < 30.0f) && (fabsf(arg0->unk230) < 30.0f) && (fabsf(arg0->unk234) < 30.0f)) {
                arg0->unk224 = 0xC;
                goto block_17;
            }
            break;
        }
        if (arg0->unk224 == 0xC) {
            arg0->unk224 = 0;
            func_80A67A34(arg0);
        }
    }
}

void func_80A67F30(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_06002B6C, 2.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06002B6C), (u8) 0, -10.0f);
    arg0->unk21C = 2;
    arg0->unk21A = 0x12C;
    func_801518B0(arg1, 0x833U, arg0);
    arg0->unk20C = func_80A67FC4;
}

void func_80A67FC4(Actor *arg0, ? arg1) {
    SkelAnime *sp2C;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    sp2C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if ((func_801378B8(temp_a0, 1.0f) != 0) || (func_801378B8(temp_a0, 5.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x387FU);
    }
    arg0->speedXZ = 4.0f;
    Math_SmoothStepToS(&arg0->world.rot.y, arg0->yawTowardsPlayer, 1, 0xBB8, (s16) 0);
    if ((arg0->xzDistToPlayer < 70.0f) || (arg0->unk21A == 0)) {
        arg0->speedXZ = 0.0f;
        func_80A68080(arg0);
    }
}

void func_80A68080(Actor *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_06002B6C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06002B6C), (u8) 2, -10.0f);
    arg0->unk21C = 3;
    arg0->unk20C = func_80A680FC;
}

void func_80A680FC(void *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    Math_SmoothStepToS(arg0 + 0x32, arg0->unk92, 1, 0xBB8, (s16) 0);
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        func_801477B4(arg1);
        arg1->nextEntranceIndex = Entrance_CreateIndexFromSpawn((s32) arg0->unk226);
        gSaveContext.nextCutsceneIndex = 0;
        Scene_SetExitFade(arg1);
        arg1->sceneLoadFlag = 0x14;
        gSaveContext.weekEventReg[17] |= 4;
    }
}

void EnLookNuts_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnLookNuts *this = (EnLookNuts *) thisx;
    f32 sp64;
    Vec3f sp5C;
    Vec3f sp50;
    Vec3f sp44;
    s16 sp42;
    ColliderCylinder *sp34;
    ColliderCylinder *temp_a2;
    f32 temp_f16;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v1;

    if (this->unk218 == 0) {
        this->unk216 += 1;
        if ((s32) this->unk216 >= 3) {
            this->unk216 = 0;
            this->unk218 = (s32) Rand_ZeroFloat(60.0f) + 0x14;
        }
    }
    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk218;
    if (temp_v0 != 0) {
        this->unk218 = temp_v0 - 1;
    }
    temp_v0_2 = this->unk21A;
    if (temp_v0_2 != 0) {
        this->unk21A = temp_v0_2 - 1;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    if (D_80A6862C == 0) {
        if (((s32) this->unk21C < 2) && (this->actor.xzDistToPlayer < 320.0f) && (this->actor.yDistToPlayer < 80.0f)) {
            sp5C.x = D_80A68650.unk0;
            sp5C.y = D_80A68650.unk4;
            sp5C.z = D_80A68650.unk8;
            Math_Vec3f_Copy(&sp50, &this->actor.world.pos);
            temp_f16 = sp50.x + (Math_SinS((s16) (this->actor.world.rot.y + (s32) this->unk230)) * 10.0f);
            sp50.y += 30.0f;
            sp50.x = temp_f16;
            sp50.z += Math_CosS((s16) (this->actor.world.rot.y + (s32) this->unk230)) * 10.0f;
            SysMatrix_StatePush();
            Matrix_RotateY(this->actor.shape.rot.y, 0U);
            sp64 = 20.0f;
            SysMatrix_MultiplyVector3fByState(&sp5C, &sp44);
            SysMatrix_StatePop();
            if (this->unk222 == 0) {
                phi_v1 = 1;
                if (gSaveContext.isNight != 0) {
                    phi_v1 = 0;
                }
                sp42 = phi_v1;
                if (Player_GetMask(globalCtx) != 0x10) {
                    EffectSsSolderSrchBall_Spawn(globalCtx, &sp50, &sp44, &D_801D15B0, (s16) 0x32, &this->unk222, (s16) (s32) phi_v1);
                }
            }
            if ((this->unk222 == 1) || (this->actor.xzDistToPlayer < 20.0f)) {
                if (((globalCtx->actorCtx.actorList[2].first->unkA74 & 0x100) == 0) && (func_801690CC(globalCtx) == 0)) {
                    Math_Vec3f_Copy(&this->unk238, &D_801D15B0);
                    this->unk21C = 2;
                    play_sound(0x482CU);
                    func_800B7298(globalCtx, &this->actor, 0x1AU);
                    D_80A6862C = 1;
                    this->actor.flags |= 0x11;
                    this->actor.gravity = 0.0f;
                    func_80A67F30(&this->actor, globalCtx);
                } else {
                    this->unk222 = 0;
                }
            }
        }
        Math_ApproachF(&this->unk22C, this->unk238.x, 1.0f, 3000.0f);
        Math_ApproachF(&this->unk230, this->unk238.y, 1.0f, 6000.0f);
        Math_ApproachF(&this->unk234, this->unk238.z, 1.0f, 2000.0f);
        temp_a2 = &this->unk244;
        this->actor.shape.rot.y = this->actor.world.rot.y;
        sp34 = temp_a2;
        Collider_UpdateCylinder(&this->actor, temp_a2);
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
    }
}

void EnLookNuts_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnLookNuts *this = (EnLookNuts *) thisx;
    GraphicsContext *sp28;
    Gfx *sp20;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp28 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp28->polyOpa.p;
    sp28->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp20 = temp_v0;
    sp20->words.w1 = Lib_SegmentedToVirtual(*(&D_80A6865C + (this->unk216 * 4)));
    SkelAnime_Draw(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, NULL, NULL, &this->actor);
}

