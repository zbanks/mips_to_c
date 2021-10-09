? func_80169FDC(GlobalContext *);                   /* extern */
? func_801A75E8(?);                                 /* extern */
void func_80874A88(Actor *arg0);                    /* static */
void func_80874B04(Actor *arg0, GlobalContext *arg1); /* static */
void func_80874B88(EnWallmas *arg0, GlobalContext *arg1, EnWallmas *); /* static */
void func_80874D1C(EnWallmas *arg0, GlobalContext *arg1, EnWallmas *); /* static */
void func_80874F14(EnWallmas *arg0, GlobalContext *arg1, EnWallmas *); /* static */
void func_80875014(EnWallmas *arg0);                /* static */
void func_808750B8(EnWallmas *arg0);                /* static */
void func_808751C4(EnWallmas *arg0);                /* static */
void func_80875248(EnWallmas *arg0, EnWallmas *);   /* static */
void func_808753F0(Actor *arg0, s32 arg1);          /* static */
void func_80875518(EnWallmas *arg0);                /* static */
void func_808755A8(EnWallmas *arg0, GlobalContext *arg1); /* static */
void func_808756AC(EnWallmas *arg0, GlobalContext *arg1, EnWallmas *); /* static */
void func_808758C8(EnWallmas *arg0);                /* static */
void func_808759B8(Actor *arg0);                    /* static */
void func_80875A74(Actor *arg0, GlobalContext *arg1); /* static */
void func_80875F04(EnWallmas *arg0, GraphicsContext **arg1); /* static */
s32 func_808760A4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80876118(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06000590;
extern AnimationHeader D_06000EA4;
extern AnimationHeaderCommon D_060019CC;
extern AnimationHeaderCommon D_0600299C;
extern AnimationHeader D_060041F4;
extern ? D_06008688;
extern FlexSkeletonHeader D_06008FB0;
extern AnimationHeader D_06009244;
extern AnimationHeader D_06009520;
extern AnimationHeader D_06009DB0;
extern AnimationHeader D_0600A054;
static ColliderCylinderInit D_80876360 = {
    {0, 0, 9, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 5, 1},
    {0x1E, 0x28, 0, {0, 0, 0}},
};
static DamageTable D_8087638C = {
    {
        0x10,
        1,
        1,
        1,
        1,
        1,
        1,
        0xF0,
        1,
        1,
        1,
        0x22,
        0x31,
        0x42,
        1,
        0x10,
        1,
        2,
        0x10,
        0x50,
        0,
        0,
        1,
        1,
        1,
        0,
        0,
        0,
        0,
        0,
        0,
        1,
    },
};
static CollisionCheckInfoInit D_808763AC = {3, 0x1E, 0x28, 0x96};
static InitChainEntry D_808763B4;                   /* unable to generate initializer */
static ? D_808763C0;                                /* unable to generate initializer */
static ? D_808763D4;                                /* unable to generate initializer */
static ? D_808763D6;                                /* unable to generate initializer */
static ? D_808763E7;                                /* unable to generate initializer */

typedef struct EnWallmas {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ void (*actionFunc)(EnWallmas *, GlobalContext *);
    /* 0x018C */ u8 unk18C;                         /* inferred */
    /* 0x018D */ char pad18D[0x1];                  /* maybe part of unk18C[2]? */
    /* 0x018E */ s16 unk18E;                        /* inferred */
    /* 0x0190 */ s16 unk190;                        /* inferred */
    /* 0x0192 */ Vec3s unk192;                      /* inferred */
    /* 0x0198 */ char pad198[0x90];                 /* maybe part of unk192[25]? */
    /* 0x0228 */ Vec3s unk228;                      /* inferred */
    /* 0x022E */ char pad22E[0x92];
    /* 0x02C0 */ f32 unk2C0;                        /* inferred */
    /* 0x02C4 */ f32 unk2C4;                        /* inferred */
    /* 0x02C8 */ f32 unk2C8;                        /* inferred */
    /* 0x02CC */ f32 unk2CC;                        /* inferred */
    /* 0x02D0 */ f32 unk2D0;                        /* inferred */
    /* 0x02D4 */ Vec3f unk2D4;                      /* inferred */
    /* 0x02E0 */ char pad2E0[0x78];                 /* maybe part of unk2D4[11]? */
    /* 0x0358 */ ColliderCylinder unk358;           /* inferred */
} EnWallmas;                                        /* size 0x3A4 */

void EnWallmas_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnWallmas *this = (EnWallmas *) thisx;
    f32 temp_f10;
    s16 temp_v0;

    Actor_ProcessInitChain(&this->actor, &D_808763B4);
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.5f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_06008FB0, &D_06009DB0, &this->unk192, &this->unk228, 0x19);
    Collider_InitAndSetCylinder(globalCtx, &this->unk358, &this->actor, &D_80876360);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_8087638C, &D_808763AC);
    this->unk190 = ((s32) this->actor.params >> 8) & 0xFF;
    this->actor.params &= 0xFF;
    temp_f10 = (f32) this->actor.shape.rot.x * 40.0f;
    this->actor.shape.rot.x = 0;
    this->actor.world.rot.x = 0;
    this->unk2C4 = temp_f10 * 0.1f;
    if (this->unk2C4 <= 0.0f) {
        this->unk2C4 = 200.0f;
    }
    Actor_SetHeight(&this->actor, 25.0f);
    temp_v0 = this->actor.params;
    if ((temp_v0 & 0x80) != 0) {
        Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, 0x8E, this->actor.world.pos.x, this->actor.world.pos.y - 15.0f, this->actor.world.pos.z, (s16) (s32) this->actor.world.rot.x, (s16) (this->actor.world.rot.y + 0x5900), (s16) (s32) this->actor.world.rot.z, 0xFF50);
        this->actor.params &= 0xFF7F;
        func_80875248(this);
        return;
    }
    if (temp_v0 == 2) {
        if (Flags_GetSwitch(globalCtx, (s32) this->unk190) != 0) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
        func_808758C8(this);
        return;
    }
    if (temp_v0 == 1) {
        func_808758C8(this);
        return;
    }
    func_80874B88(this, globalCtx);
}

void EnWallmas_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnWallmas *this = (EnWallmas *) thisx;
    Actor *temp_v1;
    ColliderCylinder *temp_a1;
    s16 temp_v1_2;

    temp_a1 = &this->unk358;
    this = this;
    Collider_DestroyCylinder(globalCtx, temp_a1);
    temp_v1 = this->actor.parent;
    if ((temp_v1 != 0) && (temp_v1->update != 0)) {
        temp_v1_2 = temp_v1->unk14E;
        if ((s32) temp_v1_2 > 0) {
            temp_v1->unk14E = (s16) (temp_v1_2 - 1);
        }
    }
}

void func_80874A88(Actor *arg0) {
    arg0->unk18C = 0xA;
    arg0->unk2CC = 0.55f;
    arg0->unk36C = 3;
    arg0->unk18E = 0x50;
    arg0->flags &= -0x401;
    arg0->unk2D0 = 0.82500005f;
    arg0->unk2C8 = 1.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x50);
}

void func_80874B04(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk18C == 0xA) {
        arg0->unk18C = 0U;
        arg0->unk36C = 0;
        arg0->unk2C8 = 0.0f;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x2D4), 0xB, 2, 0.3f, 0.2f);
        arg0->flags |= 0x400;
    }
}

void func_80874B88(EnWallmas *arg0, GlobalContext *arg1) {
    s32 temp_t7;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_t7 = arg0->actor.flags & ~1;
    arg0->actor.flags = temp_t7;
    arg0->actor.flags = temp_t7 | 0x20;
    arg0->unk18E = 0x82;
    arg0->actor.velocity.y = 0.0f;
    arg0->actor.world.pos.y = temp_v0->world.pos.y;
    arg0->actor.draw = EnWallmas_Draw;
    arg0->actionFunc = func_80874BE4;
    arg0->actor.floorHeight = temp_v0->floorHeight;
}

void func_80874BE4(EnWallmas *this, GlobalContext *globalCtx) {
    Actor *temp_v1;
    PosRot *temp_a0;
    PosRot *temp_a3;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v0;
    EnWallmas *phi_a2;

    temp_v0 = this->unk18E;
    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    temp_a3 = &temp_v1->world;
    this->actor.world.pos.x = temp_a3->pos.x;
    this->actor.world.pos.y = temp_a3->pos.y;
    this->actor.world.pos.z = temp_a3->pos.z;
    this->actor.floorHeight = temp_v1->floorHeight;
    this->actor.floorPoly = temp_v1->floorPoly;
    if (temp_v0 != 0) {
        this->unk18E = temp_v0 - 1;
    }
    if (((temp_v1->unkA6C & 0x8100000) != 0) || ((temp_v1->unkA70 & 0x80) != 0) || ((s32) temp_v1->unkB5E > 0) || ((s32) temp_v1->freezeTimer > 0) || ((temp_v1->bgCheckFlags & 1) == 0) || ((temp_a0 = &this->actor.home, (this->actor.params == 1)) && (this = this, ((120.0f + this->unk2C4) < Math_Vec3f_DistXZ(&temp_a0->pos, &temp_a3->pos))))) {
        this = this;
        func_801A75E8(0x3890);
        this->unk18E = 0x82;
    }
    temp_v0_2 = this->unk18E;
    phi_v0 = temp_v0_2;
    phi_a2 = this;
    if (temp_v0_2 == 0x50) {
        this = this;
        Audio_PlayActorSound2(&this->actor, 0x3890U);
        phi_v0 = this->unk18E;
        phi_a2 = this;
    }
    if (phi_v0 == 0) {
        func_80874D1C(phi_a2, globalCtx, phi_a2);
    }
}

void func_80874D1C(EnWallmas *arg0, GlobalContext *arg1) {
    void *sp34;
    s32 temp_t1;
    s32 temp_t3;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    sp34 = temp_v1;
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_0600299C, 0.0f, 20.0f, (f32) SkelAnime_GetFrameCount(&D_0600299C), (u8) 2, 0.0f);
    arg0->unk2C0 = temp_v1->world.pos.y;
    temp_t1 = arg0->actor.flags | 1;
    arg0->actor.world.pos.y = temp_v1->world.pos.y + 300.0f;
    arg0->actor.shape.rot.y = temp_v1->shape.rot.y + 0x8000;
    temp_t3 = temp_t1 & ~0x20;
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    arg0->actor.flags = temp_t1;
    arg0->actor.flags = temp_t3;
    arg0->actionFunc = func_80874DE8;
    arg0->actor.floorHeight = temp_v1->floorHeight;
}

void func_80874DE8(EnWallmas *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    Actor *temp_v1;
    f32 temp_f0;
    f32 temp_f0_2;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if (((temp_v1->unkA70 & 0x80) != 0) || ((s32) temp_v1->freezeTimer > 0)) {
        func_80875248(this, this);
        return;
    }
    sp1C = temp_v1;
    this = this;
    if ((func_801690CC(globalCtx) == 0) && ((temp_v1->unkA70 & 0x10) == 0) && ((s32) temp_v1->unkD5C >= 0) && (this->actor.xzDistToPlayer < 30.0f) && (temp_f0 = this->actor.yDistToPlayer, (temp_f0 < -5.0f)) && (-(f32) (temp_v1->unk55A + 0xA) < temp_f0)) {
        func_808756AC(this, globalCtx, this);
        return;
    }
    temp_f0_2 = this->unk2C0;
    if (this->actor.world.pos.y <= temp_f0_2) {
        this->actor.world.pos.y = temp_f0_2;
        this->actor.velocity.y = 0.0f;
        func_80874F14(this, globalCtx, this);
    }
}

void func_80874F14(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_060019CC, 1.0f, 41.0f, (f32) SkelAnime_GetFrameCount(&D_060019CC), (u8) 2, -3.0f);
    func_800BBDAC(arg1, arg0, arg0 + 0x24, 15.0f, 6, 20.0f, (s16) 0x12C, (s16) 0x64, (u8) 1);
    Audio_PlayActorSound2(arg0, 0x3893U);
    arg0->unk188 = func_80874FD8;
}

void func_80874FD8(EnWallmas *this, GlobalContext *globalCtx) {
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        func_80875014(this);
    }
}

void func_80875014(EnWallmas *arg0) {
    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_0600A054);
    arg0->actionFunc = func_80875054;
}

void func_80875054(EnWallmas *this, GlobalContext *globalCtx) {
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        func_808750B8(this);
    }
    Math_ScaledStepToS(&this->actor.shape.rot.y, (s16) (this->actor.yawTowardsPlayer + 0x8000), 0xB6);
    this->actor.world.rot.y = this->actor.shape.rot.y;
}

void func_808750B8(EnWallmas *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimPlaybackStop(temp_a0, &D_060041F4, 3.0f);
    arg0->actionFunc = func_80875108;
    arg0->actor.speedXZ = 3.0f;
}

void func_80875108(EnWallmas *this, GlobalContext *globalCtx) {
    SkelAnime *temp_s0;

    temp_s0 = &this->unk144;
    if (SkelAnime_FrameUpdateMatrix(temp_s0) != 0) {
        func_808751C4(this);
    }
    Math_ScaledStepToS(&this->actor.shape.rot.y, (s16) (this->actor.yawTowardsPlayer + 0x8000), 0xB6);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if ((func_801378B8(temp_s0, 0.0f) != 0) || (func_801378B8(temp_s0, 12.0f) != 0) || (func_801378B8(temp_s0, 24.0f) != 0) || (func_801378B8(temp_s0, 36.0f) != 0)) {
        Audio_PlayActorSound2(&this->actor, 0x3894U);
    }
}

void func_808751C4(EnWallmas *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06009244);
    arg0->actionFunc = func_8087520C;
    arg0->actor.speedXZ = 0.0f;
}

void func_8087520C(EnWallmas *this, GlobalContext *globalCtx) {
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        func_80875248(this);
    }
}

void func_80875248(EnWallmas *arg0) {
    arg0->unk18E = 0;
    arg0->actor.speedXZ = 0.0f;
    arg0 = arg0;
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_060019CC, 3.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_060019CC), (u8) 2, -3.0f);
    arg0->actionFunc = func_808752CC;
}

void func_808752CC(EnWallmas *this, GlobalContext *globalCtx) {
    Actor *sp24;
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_a0 = &this->unk144;
    sp20 = temp_a0;
    sp24 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (this->unk144.animCurrentFrame > 20.0f) {
        this->actor.world.pos.y += 30.0f;
        this->unk18E += 9;
        this->actor.flags &= -0x2001;
    }
    if (func_801378B8(temp_a0, 20.0f) != 0) {
        Audio_PlayActorSound2(&this->actor, 0x3891U);
    }
    if (this->actor.yDistToPlayer < -900.0f) {
        temp_v0 = this->actor.params;
        if (temp_v0 == 2) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
        if ((temp_v0 == 0) || (Math_Vec3f_DistXZ(&this->actor.home.pos, &sp24->world.pos) < this->unk2C4)) {
            func_80874B88(this, globalCtx);
            return;
        }
        func_808758C8(this);
        // Duplicate return node #11. Try simplifying control flow for better match
    }
}

void func_808753F0(Actor *arg0, s32 arg1) {
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_06000590, -3.0f);
    if (arg1 != 0) {
        func_800BE504(arg0, arg0 + 0x358);
    }
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x14);
    arg0->unk188 = func_80875484;
    arg0->speedXZ = 5.0f;
    arg0->velocity.y = 10.0f;
}

void func_80875484(EnWallmas *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk144;
    sp24 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        if (this->actor.colChkInfo.health == 0) {
            func_808755A8(this, globalCtx);
        } else {
            func_80875518(this);
        }
    }
    if (func_801378B8(sp24, 13.0f) != 0) {
        Audio_PlayActorSound2(&this->actor, 0x387BU);
    }
    Math_StepToF(&this->actor.speedXZ, 0.0f, 0.2f);
}

void func_80875518(EnWallmas *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06000EA4);
    arg0->actionFunc = func_8087556C;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.velocity.y = 0.0f;
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
}

void func_8087556C(EnWallmas *this, GlobalContext *globalCtx) {
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        func_80875248(this);
    }
}

void func_808755A8(EnWallmas *arg0, GlobalContext *arg1) {
    Vec3f *sp2C;
    Vec3f *temp_a1;

    arg0->actor.speedXZ = 0.0f;
    arg0->actor.velocity.y = 0.0f;
    temp_a1 = arg0 + 0x24;
    sp2C = temp_a1;
    func_800B3030(arg1, temp_a1, &D_801D15B0, &D_801D15B0, (s16) 0xFA, (s16) -0xA, 2);
    Audio_PlaySoundAtPosition(arg1, temp_a1, 0xB, 0x3878U);
    arg0->actionFunc = func_80875638;
}

void func_80875638(EnWallmas *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    if (Math_StepToF(&this->actor.scale.x, 0.0f, 0.0015f) != 0) {
        Actor_SetScale(&this->actor, 0.01f);
        Item_DropCollectibleRandom(globalCtx, &this->actor, &this->actor.world.pos, 0x90);
        Actor_MarkForDeath(&this->actor);
    }
    temp_f0 = this->actor.scale.x;
    this->actor.scale.z = temp_f0;
    this->actor.scale.y = temp_f0;
}

void func_808756AC(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_06009520, -5.0f);
    arg0->unk18E = -0x1E;
    arg0->unk188 = func_8087571C;
    arg0->speedXZ = 0.0f;
    arg0->velocity.y = 0.0f;
    arg0->unk2C0 = (f32) arg0->yDistToPlayer;
    func_800B724C(arg1, arg0, 0x12U);
}

void func_8087571C(EnWallmas *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    Actor *temp_s1;
    SkelAnime *temp_a0;
    s16 phi_v0;

    temp_a0 = &this->unk144;
    temp_s1 = globalCtx->actorCtx.actorList[2].first;
    sp24 = temp_a0;
    if (func_801378B8(temp_a0, 1.0f) != 0) {
        func_800B8E58(temp_s1, (temp_s1->unkA68->unk92 + 0x6805) & 0xFFFF);
        Audio_PlayActorSound2(&this->actor, 0x3892U);
    }
    if (SkelAnime_FrameUpdateMatrix(sp24) != 0) {
        temp_s1->world.pos.x = this->actor.world.pos.x;
        temp_s1->world.pos.z = this->actor.world.pos.z;
        if ((s32) this->unk18E < 0) {
            this->actor.world.pos.y += 2.0f;
        } else {
            this->actor.world.pos.y += 10.0f;
        }
        temp_s1->world.pos.y = this->actor.world.pos.y - *(&D_808763C0 + (gSaveContext.playerForm * 4));
        if (this->unk18E == -0x1E) {
            func_800B8E58(temp_s1, (temp_s1->unkA68->unk92 + 0x680C) & 0xFFFF);
        }
        phi_v0 = this->unk18E;
        if (this->unk18E == 0) {
            Audio_PlayActorSound2(&this->actor, 0x3891U);
            phi_v0 = this->unk18E;
        }
        this->unk18E = phi_v0 + 2;
    } else {
        Math_StepToF(&this->actor.world.pos.y, *(&D_808763C0 + (gSaveContext.playerForm * 4)) + temp_s1->world.pos.y, 5.0f);
    }
    Math_StepToF(&this->actor.world.pos.x, temp_s1->world.pos.x, 3.0f);
    Math_StepToF(&this->actor.world.pos.z, temp_s1->world.pos.z, 3.0f);
    if (this->unk18E == 0x1E) {
        play_sound(0x5801U);
        func_80169FDC(globalCtx);
    }
}

void func_808758C8(EnWallmas *arg0) {
    arg0->unk18E = 0;
    arg0->actor.draw = NULL;
    arg0->actor.flags &= -2;
    if (arg0->actor.params == 1) {
        arg0->actionFunc = func_80875910;
        return;
    }
    arg0->actionFunc = func_8087596C;
}

void func_80875910(EnWallmas *this, GlobalContext *globalCtx) {
    PosRot *temp_a0;

    temp_a0 = &this->actor.home;
    this = this;
    if (Math_Vec3f_DistXZ(&temp_a0->pos, &globalCtx->actorCtx.actorList[2].first->world.pos) < this->unk2C4) {
        func_80874B88(this, globalCtx, this);
    }
}

void func_8087596C(EnWallmas *this, GlobalContext *globalCtx) {
    if (Flags_GetSwitch(globalCtx, (s32) this->unk190) != 0) {
        func_80874B88(this, globalCtx);
        this->unk18E = 0x51;
    }
}

void func_808759B8(Actor *arg0) {
    arg0->speedXZ = 0.0f;
    if (arg0->velocity.y > 0.0f) {
        arg0->velocity.y = 0.0f;
    }
    func_800BE504(arg0, arg0 + 0x358);
    arg0->unk188 = func_80875A0C;
}

void func_80875A0C(EnWallmas *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk18E;
    if (temp_v0 != 0) {
        this->unk18E = temp_v0 - 1;
    }
    if (this->unk18E == 0) {
        func_80874B04();
        if (this->actor.colChkInfo.health == 0) {
            func_808753F0(&this->actor, 0);
            return;
        }
        this->actor.world.rot.y = this->actor.shape.rot.y;
        func_80875248(this);
        // Duplicate return node #6. Try simplifying control flow for better match
    }
}

void func_80875A74(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = arg0->unk369;
    if (((temp_v0 & 2) != 0) && ((arg0->unk369 = (u8) (temp_v0 & 0xFFFD), func_800BE258(arg0, arg0 + 0x370), (arg0->unk18C != 0xA)) || ((*arg0->unk394 & 0xDB0B3) == 0))) {
        if (Actor_ApplyDamage(arg0) == 0) {
            Enemy_StartFinishingBlow(arg1, arg0);
            Audio_PlayActorSound2(arg0, 0x3896U);
            arg0->flags &= -2;
        } else if (arg0->colChkInfo.damage != 0) {
            Audio_PlayActorSound2(arg0, 0x3895U);
        }
        func_80874B04(arg0, arg1);
        temp_v0_2 = arg0->colChkInfo.damageEffect;
        if (temp_v0_2 != 0xF) {
            if (temp_v0_2 == 3) {
                func_80874A88(arg0);
                if (arg0->colChkInfo.health == 0) {
                    arg0->unk18E = 3;
                    arg0->unk369 = (u8) (arg0->unk369 & 0xFFFE);
                }
                func_808759B8(arg0);
                return;
            }
            if (temp_v0_2 == 1) {
                arg0->unk18E = 0x28;
                func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
                Audio_PlayActorSound2(arg0, 0x389EU);
                func_808759B8(arg0);
                return;
            }
            if (temp_v0_2 == 5) {
                arg0->unk18E = 0x28;
                func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
                Audio_PlayActorSound2(arg0, 0x389EU);
                arg0->unk18C = 0x1FU;
                arg0->unk2CC = 0.55f;
                arg0->unk2C8 = 2.0f;
                func_808759B8(arg0);
                return;
            }
            if (temp_v0_2 == 2) {
                arg0->unk2C8 = 4.0f;
                arg0->unk18C = 0U;
                arg0->unk2CC = 0.55f;
            } else if (temp_v0_2 == 4) {
                arg0->unk2C8 = 4.0f;
                arg0->unk18C = 0x14U;
                arg0->unk2CC = 0.55f;
                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0->unk37E, (f32) arg0->unk380, (f32) arg0->unk382, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
            }
            func_808753F0(arg0, 1);
            // Duplicate return node #21. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #21. Try simplifying control flow for better match
    }
}

void EnWallmas_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnWallmas *this = (EnWallmas *) thisx;
    void (*sp2C)(EnWallmas *, GlobalContext *);
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    f32 temp_f0;
    void (*temp_v0)(EnWallmas *, GlobalContext *);
    void (*phi_v0)(EnWallmas *, GlobalContext *);

    func_80875A74(&this->actor, globalCtx);
    this->actionFunc(this, globalCtx);
    temp_v0 = this->actionFunc;
    if ((func_80874BE4 != temp_v0) && (func_80875910 != temp_v0) && (func_8087571C != temp_v0) && (func_8087596C != temp_v0)) {
        if ((func_808752CC != temp_v0) && (func_8087571C != temp_v0)) {
            Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        }
        phi_v0 = this->actionFunc;
        if (func_80874DE8 != this->actionFunc) {
            sp2C = func_80874DE8;
            Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 20.0f, 25.0f, 0.0f, 0x1DU);
            phi_v0 = this->actionFunc;
        }
        if ((func_80875638 != phi_v0) && (func_80874DE8 != phi_v0)) {
            temp_a1 = &this->unk358;
            sp28 = temp_a1;
            Collider_UpdateCylinder(&this->actor, temp_a1);
            temp_a1_2 = &globalCtx->colChkCtx;
            sp2C = (void (*)(EnWallmas *, GlobalContext *)) temp_a1_2;
            CollisionCheck_SetOC(globalCtx, temp_a1_2, &sp28->base);
            if ((func_80875484 != this->actionFunc) && ((this->actor.bgCheckFlags & 1) != 0) && (this->actor.freezeTimer == 0)) {
                CollisionCheck_SetAC(globalCtx, temp_a1_2, &sp28->base);
            }
        }
        Actor_SetHeight(&this->actor, 25.0f);
        if (this->unk2C8 > 0.0f) {
            if (this->unk18C != 0xA) {
                Math_StepToF(&this->unk2C8, 0.0f, 0.05f);
                temp_f0 = (this->unk2C8 + 1.0f) * 0.275f;
                this->unk2CC = temp_f0;
                if (temp_f0 > 0.55f) {
                    this->unk2CC = 0.55f;
                    return;
                }
                this->unk2CC = this->unk2CC;
                return;
            }
            if (Math_StepToF(&this->unk2D0, 0.55f, 0.01375f) == 0) {
                func_800B9010(&this->actor, 0x20B2U);
            }
            // Duplicate return node #22. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #22. Try simplifying control flow for better match
    }
}

void func_80875F04(EnWallmas *arg0, GraphicsContext **arg1) {
    MtxF sp50;
    void *sp4C;
    GraphicsContext *sp48;
    GraphicsContext *temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_t0;
    f32 phi_f12;
    s32 phi_v1;

    if ((arg0->actor.floorPoly != 0) && (((s32) arg0->unk18E < 0x51) || (func_80875A0C == arg0->actionFunc))) {
        temp_v0 = *arg1;
        temp_t0 = temp_v0->polyOpa.p;
        temp_t0->words.w0 = 0xDE000000;
        temp_t0->words.w1 = sSetupDL + 0x840;
        temp_t0->unkC = 0xFF;
        temp_t0->unk8 = 0xFA000000;
        sp4C = temp_t0;
        sp48 = temp_v0;
        func_800C0094(arg0->actor.floorPoly, arg0->actor.world.pos.x, arg0->actor.floorHeight, arg0->actor.world.pos.z, &sp50);
        SysMatrix_InsertMatrix(&sp50, 0);
        temp_v0_2 = arg0->actionFunc;
        if ((func_80874BE4 != temp_v0_2) && (func_808752CC != temp_v0_2) && (func_8087571C != temp_v0_2) && (func_8087596C != temp_v0_2)) {
            phi_f12 = arg0->actor.scale.x * 50.0f;
        } else {
            temp_v0_3 = 0x50 - arg0->unk18E;
            phi_v1 = temp_v0_3;
            if (temp_v0_3 >= 0x51) {
                phi_v1 = 0x50;
            }
            phi_f12 = (f32) phi_v1 * 0.00625f;
        }
        sp4C = temp_t0;
        Matrix_Scale(phi_f12, 1.0f, phi_f12, 1);
        temp_t0->unk10 = 0xDA380003;
        sp4C = temp_t0;
        temp_t0->unk14 = Matrix_NewMtx(*arg1);
        temp_t0->unk1C = D_04076BC0;
        temp_t0->unk18 = 0xDE000000;
        sp48->polyOpa.p = temp_t0 + 0x20;
    }
}

s32 func_808760A4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    f32 temp_f0;

    if (arg1 == 1) {
        if (func_8087571C != arg5->unk188) {
            arg3->z -= 1600.0f;
        } else {
            temp_f0 = arg5->unk154;
            arg3->z -= (1600.0f * (temp_f0 - arg5->unk15C)) / temp_f0;
        }
    }
    return 0;
}

void func_80876118(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    GraphicsContext *sp34;
    s8 *sp24;
    GraphicsContext *temp_v0_2;
    s8 *temp_v0;
    s8 temp_v1;
    void *temp_s0;

    temp_v0 = arg1 + &D_808763D4;
    temp_v1 = *temp_v0;
    if (temp_v1 != -1) {
        sp24 = temp_v0;
        SysMatrix_GetStateTranslation(arg4 + (temp_v1 * 0xC) + 0x2D4);
    }
    if ((arg1 + &D_808763D4) == &D_808763E7) {
        SysMatrix_GetStateTranslationAndScaledX(1000.0f, arg4 + 0x340);
        SysMatrix_GetStateTranslationAndScaledX(-1000.0f, arg4 + 0x34C);
        return;
    }
    if ((arg1 + &D_808763D4) == &D_808763D6) {
        temp_v0_2 = *arg0;
        temp_s0 = temp_v0_2->polyOpa.p;
        sp34 = temp_v0_2;
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(1600.0f, -700.0f, -1700.0f, 1);
        Matrix_RotateY(0x2AAA, 1U);
        SysMatrix_InsertZRotation_s(0xAAA, 1);
        Matrix_Scale(2.0f, 2.0f, 2.0f, 1);
        temp_s0->words.w0 = 0xDA380003;
        temp_s0->words.w1 = Matrix_NewMtx(*arg0);
        temp_s0->unk8 = 0xDE000000;
        temp_s0->unkC = &D_06008688;
        sp34->polyOpa.p = temp_s0 + 0x10;
        SysMatrix_StatePop();
    }
}

void EnWallmas_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnWallmas *this = (EnWallmas *) thisx;
    if (func_80874BE4 != this->actionFunc) {
        func_8012C28C(globalCtx->state.gfxCtx);
        SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_808760A4, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80876118, &this->actor);
        func_800BE680(globalCtx, &this->actor, (Vec3f []) &this->unk2D4, 0xB, this->unk2CC, this->unk2D0, this->unk2C8, (u8) (s32) this->unk18C);
    }
    if (this->actor.colorFilterTimer != 0) {
        func_800AE5A0(globalCtx);
    }
    func_80875F04(this, &globalCtx->state.gfxCtx);
}

