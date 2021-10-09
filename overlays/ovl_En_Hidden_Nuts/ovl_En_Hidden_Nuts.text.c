? func_801A5080(?);                                 /* extern */
s32 func_801A5100(EnHiddenNuts *);                  /* extern */
void func_80BDB1B4(EnHiddenNuts *arg0, s32 arg1, EnHiddenNuts *); /* static */
void func_80BDB268(EnHiddenNuts *arg0);             /* static */
void func_80BDB580(EnHiddenNuts *arg0);             /* static */
void func_80BDB788(EnHiddenNuts *arg0);             /* static */
void func_80BDB930(void *arg0);                     /* static */
void func_80BDBA28(EnHiddenNuts *arg0, GlobalContext *arg1); /* static */
void func_80BDBE70(f32 arg0, EnHiddenNuts *arg1, GlobalContext *); /* static */
extern SkeletonHeader D_060023B8;
extern AnimationHeader D_060024CC;
static ColliderCylinderInit D_80BDC0D0 = {
    {0xA, 0, 0, 9, 0x10, 1},
    {0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
    {0x1E, 0x14, 0, {0, 0, 0}},
};
static ? D_80BDC0FC;                                /* unable to generate initializer */
static ? D_80BDC120;                                /* unable to generate initializer */
static ? D_80BDC12C;                                /* unable to generate initializer */
static ? D_80BDC138;                                /* unable to generate initializer */
static s32 D_80BDC144 = 0xFFFFFFFF;
static s32 D_80BDC148 = 0x96969600;
static ? D_80BDC14C;                                /* unable to generate initializer */
static ? D_80BDC158;                                /* unable to generate initializer */
static s32 D_80BDC164 = 0xFFFFFFFF;
static s32 D_80BDC168 = 0x96969600;

typedef struct EnHiddenNuts {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x36];                 /* maybe part of unk188[10]? */
    /* 0x01C4 */ Vec3s unk1C4;                      /* inferred */
    /* 0x01CA */ char pad1CA[0x36];                 /* maybe part of unk1C4[10]? */
    /* 0x0200 */ void (*actionFunc)(EnHiddenNuts *, GlobalContext *);
    /* 0x0204 */ Path *unk204;                      /* inferred */
    /* 0x0208 */ s16 unk208;                        /* inferred */
    /* 0x020A */ u8 unk20A;                         /* inferred */
    /* 0x020B */ char pad20B[0x1];                  /* maybe part of unk20A[2]? */
    /* 0x020C */ void unk20C;                       /* inferred */
    /* 0x020D */ char pad20D[0x7];
    /* 0x0214 */ f32 unk214;                        /* inferred */
    /* 0x0218 */ s16 unk218;                        /* inferred */
    /* 0x021A */ s16 unk21A;                        /* inferred */
    /* 0x021C */ s16 unk21C;                        /* inferred */
    /* 0x021E */ s16 unk21E;                        /* inferred */
    /* 0x0220 */ s32 unk220;                        /* inferred */
    /* 0x0224 */ s16 unk224;                        /* inferred */
    /* 0x0226 */ s16 unk226;                        /* inferred */
    /* 0x0228 */ f32 unk228;                        /* inferred */
    /* 0x022C */ f32 unk22C;                        /* inferred */
    /* 0x0230 */ char pad230[0x4];                  /* maybe part of unk22C[2]? */
    /* 0x0234 */ ColliderCylinder unk234;           /* inferred */
} EnHiddenNuts;                                     /* size 0x280 */

void EnHiddenNuts_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnHiddenNuts *this = (EnHiddenNuts *) thisx;
    s16 temp_a1;
    s16 temp_v1;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    SkelAnime_Init(globalCtx, &this->unk144, &D_060023B8, &D_060024CC, &this->unk188, &this->unk1C4, 0xA);
    Actor_SetScale(&this->actor, 0.01f);
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.targetMode = 0;
    Collider_InitAndSetCylinder(globalCtx, &this->unk234, &this->actor, &D_80BDC0D0);
    temp_v1 = this->actor.params;
    this->unk21C = temp_v1 & 0x7F;
    this->unk21E = ((s32) temp_v1 >> 7) & 0x1F;
    if (this->unk21C == 0x7F) {
        this->unk21C = -1;
    }
    if (((s32) this->unk21C >= 0) && (Flags_GetSwitch(globalCtx, (s32) this->unk21C) != 0)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    temp_a1 = this->unk21E;
    if (temp_a1 == 0x1F) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->unk204 = func_8013D648(globalCtx, temp_a1, 0x3F);
    this->unk226 = (s16) this->actor.cutscene;
    func_801A5080(2);
    func_80BDB268(this);
}

void EnHiddenNuts_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnHiddenNuts *this = (EnHiddenNuts *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk234);
}

void func_80BDB1B4(EnHiddenNuts *arg0, s32 arg1) {
    f32 sp34;
    f32 sp30;
    s32 temp_v1;
    f32 phi_f0;
    f32 phi_f2;

    arg0->unk220 = arg1;
    sp34 = 0.0f;
    sp30 = -4.0f;
    temp_v1 = arg0->unk220;
    arg0->unk22C = (f32) SkelAnime_GetFrameCount(*(&D_80BDC0FC + (arg1 * 4)));
    phi_f0 = 0.0f;
    phi_f2 = -4.0f;
    if (temp_v1 == 1) {
        phi_f0 = arg0->unk22C;
        phi_f2 = 0.0f;
    }
    SkelAnime_ChangeAnim(arg0 + 0x144, *(&D_80BDC0FC + (temp_v1 * 4)), 1.0f, phi_f0, arg0->unk22C, (u8) (s32) *(&D_80BDC120 + temp_v1), phi_f2);
}

void func_80BDB268(EnHiddenNuts *arg0) {
    arg0->actor.textId = 0x234;
    arg0->unk228 = 1600.0f;
    arg0->actor.shape.yOffset = 1600.0f;
    func_80BDB1B4((EnHiddenNuts *)1);
    arg0->unk21A = 0;
    arg0->actionFunc = func_80BDB2B8;
}

void func_80BDB2B8(EnHiddenNuts *this, GlobalContext *globalCtx) {
    f32 sp98;
    Vec3f sp94;
    Vec3f sp88;
    Color_RGBA8 sp84;
    Color_RGBA8 sp80;
    Vec3f sp74;
    Actor *temp_s0;
    PosRot *temp_s2;
    Vec3f *temp_s1;
    s32 temp_s0_2;
    s32 phi_s0;

    temp_s0 = globalCtx->actorCtx.actorList[2].first;
    Audio_PlayActorSound2(&this->actor, 0x3201U);
    if ((temp_s0->unkA70 * 0x10) < 0) {
        if (this->unk20A == 0) {
            play_sound(0x4807U);
            this->unk20A = 1;
        }
    } else {
        this->unk20A = 0;
    }
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        func_80BDB580(this);
        return;
    }
    if (this->unk218 == 0) {
        sp94.x = D_80BDC12C.unk0;
        sp94.y = D_80BDC12C.unk4;
        sp94.z = D_80BDC12C.unk8;
        sp88.x = D_80BDC138.unk0;
        sp88.y = D_80BDC138.unk4;
        temp_s2 = &this->actor.world;
        sp88.z = D_80BDC138.unk8;
        temp_s1 = &sp74;
        sp84 = D_80BDC144;
        sp80 = D_80BDC148;
        phi_s0 = 0;
        do {
            sp98 = Rand_ZeroFloat(1.0f) + 1.0f;
            Math_Vec3f_Copy(temp_s1, &temp_s2->pos);
            sp74.x += randPlusMinusPoint5Scaled(15.0f);
            sp74.z += randPlusMinusPoint5Scaled(15.0f);
            EffectSsDtBubble_SpawnCustomColor(globalCtx, temp_s1, &sp94, &sp88, &sp84, &sp80, (s16) Rand_S16Offset(0x78, 0x5A), (s16) 0x1E, (s16) 1);
            temp_s0_2 = phi_s0 + 1;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 3);
        this->unk218 = 0x1E;
    }
    if (!(this->actor.xzDistToPlayer > 120.0f)) {
        if ((globalCtx->msgCtx.unk1202A == 3) && (globalCtx->msgCtx.unk1202E == 0)) {
            globalCtx->msgCtx.unk1202A = 4;
            func_80BDB788(this);
            return;
        }
        if (func_801A5100(this) == 2) {
            func_80BDB788(this);
            return;
        }
        func_800B8614(&this->actor, globalCtx, (f32) gGameInfo->data[2413] + 100.0f);
        // Duplicate return node #17. Try simplifying control flow for better match
    }
}

void func_80BDB580(EnHiddenNuts *arg0) {
    arg0->unk21A = 1;
    arg0->actionFunc = func_80BDB59C;
}

void func_80BDB59C(EnHiddenNuts *this, GlobalContext *globalCtx) {
    f32 sp9C;
    Vec3f sp98;
    Vec3f sp8C;
    Color_RGBA8 sp88;
    Color_RGBA8 sp84;
    Vec3f sp78;
    PosRot *temp_s2;
    Vec3f *temp_s1;
    s32 temp_s0;
    s32 phi_s0;

    Audio_PlayActorSound2(&this->actor, 0x3201U);
    if (this->unk218 == 0) {
        sp98.x = D_80BDC14C.unk0;
        sp98.y = D_80BDC14C.unk4;
        sp98.z = D_80BDC14C.unk8;
        sp8C.x = D_80BDC158.unk0;
        sp8C.y = D_80BDC158.unk4;
        sp8C.z = D_80BDC158.unk8;
        temp_s1 = &sp78;
        sp88 = D_80BDC164;
        sp84 = D_80BDC168;
        temp_s2 = &this->actor.world;
        phi_s0 = 0;
        do {
            sp9C = Rand_ZeroFloat(1.0f) + 1.0f;
            Math_Vec3f_Copy(temp_s1, &temp_s2->pos);
            sp78.x += randPlusMinusPoint5Scaled(15.0f);
            sp78.z += randPlusMinusPoint5Scaled(15.0f);
            EffectSsDtBubble_SpawnCustomColor(globalCtx, temp_s1, &sp98, &sp8C, &sp88, &sp84, (s16) Rand_S16Offset(0x78, 0x5A), (s16) 0x1E, (s16) 1);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != 3);
        this->unk218 = 0x1E;
    }
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        func_801477B4(globalCtx);
        func_80BDB268(this);
    }
}

void func_80BDB788(Actor *arg0) {
    s32 temp_t7;

    temp_t7 = arg0->flags | 0x10;
    arg0->flags = temp_t7;
    arg0->flags = temp_t7 | 0x8000000;
    Audio_PlayActorSound2(arg0, 0x387CU);
    Audio_PlayActorSound2(arg0, 0x3881U);
    arg0->unk21A = 2;
    arg0->unk200 = func_80BDB7E8;
}

void func_80BDB7E8(EnHiddenNuts *this, GlobalContext *globalCtx) {
    Vec3f sp3C;

    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
        ActorCutscene_SetIntentToPlay(this->unk226);
        return;
    }
    if (ActorCutscene_GetCanPlayNext(this->unk226) == 0) {
        ActorCutscene_SetIntentToPlay(this->unk226);
        return;
    }
    ActorCutscene_StartAndSetUnkLinkFields(this->unk226, &this->actor);
    this->unk228 = -1200.0f;
    Math_Vec3f_Copy(&sp3C, &this->actor.world.pos);
    sp3C.y = this->actor.floorHeight + 30.0f;
    EffectSsHahen_SpawnBurst(globalCtx, &sp3C, 4.0f, 0, (s16) 0xA, (s16) 3, (s16) 0xF, (s16) -1, (s16) 0xA, NULL);
    Audio_PlayActorSound2(&this->actor, 0x387CU);
    func_80BDB1B4(this, 7);
    this->actionFunc = func_80BDB8F4;
}

void func_80BDB8F4(EnHiddenNuts *this, GlobalContext *globalCtx) {
    if (this->unk22C <= this->unk144.animCurrentFrame) {
        func_80BDB930();
    }
}

void func_80BDB930(void *arg0) {
    func_80BDB1B4((EnHiddenNuts *)3);
    arg0->unk21A = 3;
    arg0->unk200 = func_80BDB978;
    arg0->unk228 = 500.0f;
}

void func_80BDB978(EnHiddenNuts *this, GlobalContext *globalCtx) {
    f32 sp24;
    SkelAnime *sp20;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk144;
    sp20 = temp_a0;
    sp24 = this->unk144.animCurrentFrame;
    if ((func_801378B8(temp_a0, 0.0f) != 0) || (func_801378B8(temp_a0, 8.0f) != 0) || (func_801378B8(sp20, 18.0f) != 0)) {
        Audio_PlayActorSound2(&this->actor, 0x3882U);
    }
    if (this->unk22C <= sp24) {
        this->unk224 += 1;
        if ((s32) this->unk224 >= 2) {
            func_80BDBA28(this, globalCtx);
        }
    }
}

void func_80BDBA28(EnHiddenNuts *arg0, GlobalContext *arg1) {
    Vec3f sp44;
    PosRot *sp40;
    Path *temp_a0;
    PosRot *temp_a1;

    func_80BDB1B4(arg0, 2);
    temp_a1 = &arg0->actor.world;
    arg0->unk228 = 0.0f;
    sp40 = temp_a1;
    Math_Vec3f_Copy(&sp44, &temp_a1->pos);
    sp44.y = arg0->actor.floorHeight + 30.0f;
    EffectSsHahen_SpawnBurst(arg1, &sp44, 4.0f, 0, (s16) 0xA, (s16) 3, (s16) 0xF, (s16) -1, (s16) 0xA, NULL);
    Audio_PlayActorSound2(&arg0->actor, 0x387CU);
    temp_a0 = arg0->unk204;
    arg0->unk208 = 1;
    if ((temp_a0 != 0) && (func_8013D68C(temp_a0, arg0->unk208, &arg0->unk20C) == 0)) {
        Actor_MarkForDeath(&arg0->actor);
    }
    arg0->actor.speedXZ = 2.0f;
    arg0->actor.gravity = -2.0f;
    arg0->actor.velocity.y = 4.0f;
    arg0->actor.world.rot.y = Math_Vec3f_Yaw(&sp40->pos, (Vec3f *) &arg0->unk20C);
    arg0->unk21A = 4;
    arg0->actionFunc = func_80BDBB48;
}

void func_80BDBB48(EnHiddenNuts *this, GlobalContext *globalCtx) {
    f32 sp58;
    WaterBox *sp54;
    f32 sp50;
    s16 sp4E;
    Vec3f sp40;
    PosRot *sp30;
    SkelAnime *sp2C;
    Path *temp_a0_3;
    SkelAnime *temp_a0;
    SkelAnime *temp_a0_2;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_a1_2;
    void *temp_a1;

    sp4E = 0;
    sp58 = this->unk144.animCurrentFrame;
    if ((func_800CA1AC(globalCtx, &globalCtx->colCtx, this->actor.world.pos.x, this->actor.world.pos.z, &sp50, &sp54) != 0) && (this->actor.world.pos.y < sp50)) {
        this->actor.velocity.y = 0.0f;
        Math_Vec3f_Copy(&sp40, &this->actor.world.pos);
        sp40.y = sp50;
        this->actor.gravity = 0.0f;
        if ((globalCtx->gameplayFrames & 7) == 0) {
            EffectSsGRipple_Spawn(globalCtx, &sp40, 0x28A, 0xC4E, (s16) 0);
        }
        temp_a0 = &this->unk144;
        sp2C = temp_a0;
        if ((func_801378B8(temp_a0, 0.0f) != 0) || (func_801378B8(temp_a0, 5.0f) != 0) || (func_801378B8(sp2C, 10.0f) != 0)) {
            Audio_PlayActorSound2(&this->actor, 0x2902U);
            sp4E = 1;
        }
    }
    sp30 = &this->actor.world;
    temp_a0_2 = &this->unk144;
    if ((sp4E != 0) && ((sp2C = temp_a0_2, (func_801378B8(temp_a0_2, 0.0f) != 0)) || (func_801378B8(temp_a0_2, 5.0f) != 0) || (func_801378B8(sp2C, 10.0f) != 0))) {
        Audio_PlayActorSound2(&this->actor, 0x387FU);
    }
    temp_a1 = &this->unk20C;
    sp2C = (SkelAnime *) temp_a1;
    Math_SmoothStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw(&sp30->pos, (Vec3f *) temp_a1), 1, 0x1388, (s16) 0);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.world.rot.y, 1, 0x3E8, (s16) 0);
    if (this->unk220 == 2) {
        if (this->unk22C <= sp58) {
            this->actor.speedXZ = 0.0f;
            this->actor.velocity.y = 0.0f;
            func_80BDB1B4(this, 6);
            return;
        }
        // Duplicate return node #23. Try simplifying control flow for better match
        return;
    }
    Math_ApproachF(&sp30->pos.x, (bitwise f32) this->unk20C, 0.5f, fabsf(((f32) gGameInfo->data[2433] + 8.0f) * Math_SinS(this->actor.world.rot.y)));
    Math_ApproachF(&this->actor.world.pos.z, this->unk214, 0.5f, fabsf(((f32) gGameInfo->data[2433] + 8.0f) * Math_CosS(this->actor.world.rot.y)));
    temp_f2 = this->actor.world.pos.x - (bitwise f32) this->unk20C;
    temp_f12 = this->actor.world.pos.z - this->unk214;
    if ((sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < 4.0f) && (temp_a0_3 = this->unk204, (temp_a0_3 != 0))) {
        this->unk208 += 1;
        temp_a1_2 = this->unk208;
        if ((s32) temp_a1_2 >= (s32) temp_a0_3->count) {
            func_80BDBE70(temp_f12, this, globalCtx);
            return;
        }
        if ((temp_a0_3 != 0) && (func_8013D68C(temp_a0_3, temp_a1_2, (void *) sp2C) == 0)) {
            Actor_MarkForDeath(&this->actor);
        }
        // Duplicate return node #23. Try simplifying control flow for better match
    }
}

void func_80BDBE70(EnHiddenNuts *arg0, GlobalContext *arg1) {
    s16 temp_a1;
    s16 temp_a3;

    temp_a3 = arg0->unk21C;
    temp_a1 = temp_a3;
    if ((s32) temp_a3 >= 0) {
        arg0 = arg0;
        Actor_SetSwitchFlag(arg1, (s32) temp_a1);
    }
    arg0 = arg0;
    func_80BDB1B4(arg0, 8, arg0);
    arg0->unk21A = 5;
    arg0->actionFunc = func_80BDBED4;
}

void func_80BDBED4(EnHiddenNuts *this, GlobalContext *globalCtx) {
    Vec3f sp38;

    if (this->unk22C <= this->unk144.animCurrentFrame) {
        Math_Vec3f_Copy(&sp38, &this->actor.world.pos);
        sp38.y = this->actor.floorHeight;
        Audio_PlayActorSound2(&this->actor, 0x387DU);
        EffectSsHahen_SpawnBurst(globalCtx, &sp38, 4.0f, 0, (s16) 0xA, (s16) 3, (s16) 0xF, (s16) -1, (s16) 0xA, NULL);
        Actor_MarkForDeath(&this->actor);
    }
}

void EnHiddenNuts_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnHiddenNuts *this = (EnHiddenNuts *) thisx;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    s16 temp_v0;

    temp_v0 = this->unk218;
    if (temp_v0 != 0) {
        this->unk218 = temp_v0 - 1;
    }
    Actor_SetHeight(&this->actor, 20.0f);
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    this->actionFunc(this, globalCtx);
    Math_ApproachF(&this->actor.shape.yOffset, this->unk228, 0.5f, 200.0f);
    if ((s32) this->unk21A >= 4) {
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 20.0f, 20.0f, 40.0f, 0x1DU);
    }
    temp_a2 = &this->unk234;
    sp2C = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
}

void EnHiddenNuts_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnHiddenNuts *this = (EnHiddenNuts *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_Draw(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, NULL, NULL, &this->actor);
}

