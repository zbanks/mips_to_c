void func_808BD348(Actor *arg0);                    /* static */
void func_808BD3B4(Actor *arg0, GlobalContext *arg1); /* static */
void func_808BDCF0(Actor *arg0, void *, GlobalContext *); /* static */
void func_808BDE7C(Actor *arg0, void *, GlobalContext *); /* static */
void func_808BE294(Actor *arg0, s32 arg1);          /* static */
void func_808BE3A8(Actor *arg0);                    /* static */
void func_808BE73C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_808BEBD0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_808BED30(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06000168;
extern Gfx D_06001E50;
extern Gfx D_06001F50;
extern SkeletonHeader D_06002468;
extern AnimationHeader D_0600259C;
extern AnimationHeader D_06002A5C;
extern AnimationHeader D_06002BD4;
extern AnimationHeader D_06002DD4;
extern AnimationHeader D_06002FA4;
extern AnimationHeader D_06003180;
extern AnimationHeader D_0600326C;
extern AnimationHeader D_060033E4;
extern AnimationHeader D_06003780;
static ColliderCylinderInit D_808BEF30 = {
    {6, 0, 9, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x12, 0x20, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit D_808BEF5C = {1, 0x12, 0x20, 0xFF};
static DamageTable D_808BEF64 = {
    {
        1,
        1,
        0,
        1,
        1,
        1,
        0,
        1,
        1,
        1,
        1,
        0x22,
        0x32,
        0x42,
        1,
        1,
        1,
        2,
        1,
        0x51,
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
static InitChainEntry D_808BEF84;                   /* unable to generate initializer */
static Color_RGBA8 D_808BEF90 = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_808BEF94 = {0x96, 0x96, 0x96, 0};
static ? D_808BEF98;                                /* unable to generate initializer */
static ? D_808BEF9A;                                /* unable to generate initializer */
static Vec3f D_808BEFA4 = {
    {-1500.0f, 0.0f, -1700.0f},
    {-1500.0f, 0.0f, 1700.0f},
    {-2500.0f, -2000.0f, 0.0f},
    {-1000.0f, 1000.0f, 0.0f},
    {0.0f, 0.0f, 0.0f},
};



void EnDekunuts_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnDekunuts *this = (EnDekunuts *) thisx;
    s16 temp_v0;
    s16 temp_v0_2;

    Actor_ProcessInitChain(&this->actor, &D_808BEF84);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 35.0f);
    SkelAnime_Init(globalCtx, &this->skelAnime, &D_06002468, &D_0600326C, this->jointTable, this->morphTable, 0xA);
    Collider_InitAndSetCylinder(globalCtx, &this->collider, &this->actor, &D_808BEF30);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_808BEF64, &D_808BEF5C);
    this->unk_194 = ((s32) this->actor.params >> 8) & 0xFF;
    temp_v0 = this->unk_194;
    this->actor.params &= 0xFF;
    if ((temp_v0 == 0xFF) || (temp_v0 == 0)) {
        this->unk_194 = 1;
    }
    temp_v0_2 = this->actor.params;
    if (temp_v0_2 == 1) {
        this->actor.flags &= -2;
        this->collider.base.colType = 0xA;
        this->collider.info.bumperFlags |= 0x78;
    } else if (temp_v0_2 == 2) {
        this->actor.targetMode = 0;
    }
    func_808BD428(this);
}

void EnDekunuts_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDekunuts *this = (EnDekunuts *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void func_808BD348(Actor *arg0) {
    arg0->unk18E = 0xA;
    arg0->unk214 = 0.55f;
    arg0->unk290 = 3;
    arg0->unk190 = 0x50;
    arg0->unk218 = 0.82500005f;
    arg0->unk210 = 1.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x50);
}

void func_808BD3B4(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk18E == 0xA) {
        arg0->unk18E = 0U;
        arg0->unk290 = 6;
        arg0->unk210 = 0.0f;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x21C), 8, 2, 0.2f, 0.2f);
    }
}

void func_808BD428(EnDekunuts *this) {
    SkelAnime_ChangeAnimPlaybackStop(&this->skelAnime, &D_06003180, 0.0f);
    this->unk_190 = Rand_S16Offset(0x64, 0x32);
    this->collider.dim.height = 5;
    Math_Vec3f_Copy(&this->actor.world.pos, &this->actor.home.pos);
    this->collider.base.acFlags &= 0xFFFE;
    this->actionFunc = func_808BD49C;
}

void func_808BD49C(EnDekunuts *this, GlobalContext *globalCtx) {
    s32 sp2C;
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 phi_v1;
    f32 phi_f0;
    f32 phi_f2;

    temp_a0 = &this->skelAnime;
    phi_v1 = 0;
    if (this->skelAnime.animPlaybackSpeed < 0.5f) {
        phi_v1 = 1;
    }
    if (phi_v1 != 0) {
        temp_v0 = this->unk_190;
        if (temp_v0 != 0) {
            this->unk_190 = temp_v0 - 1;
        }
    }
    sp2C = phi_v1;
    sp20 = temp_a0;
    if (func_801378B8(temp_a0, 9.0f) != 0) {
        this->collider.base.acFlags |= 1;
    } else if (func_801378B8(temp_a0, 8.0f) != 0) {
        Audio_PlayActorSound2(&this->actor, 0x387CU);
    }
    temp_f0 = this->skelAnime.animCurrentFrame;
    if (temp_f0 < 9.0f) {
        phi_f0 = 9.0f;
    } else {
        if (temp_f0 > 12.0f) {
            phi_f2 = 12.0f;
        } else {
            phi_f2 = temp_f0;
        }
        phi_f0 = phi_f2;
    }
    this->collider.dim.height = (s32) ((phi_f0 - 9.0f) * 9.0f) + 5;
    if ((sp2C == 0) && (this->actor.params == 0) && (Player_GetMask(globalCtx) != 0x10) && (this->actor.xzDistToPlayer < 120.0f)) {
        func_808BDC9C(this);
    } else if (SkelAnime_FrameUpdateMatrix(sp20) != 0) {
        if (((this->unk_190 == 0) && (this->actor.xzDistToPlayer > 320.0f)) || (Player_GetMask(globalCtx) == 0x10)) {
            func_808BD78C(this);
        } else {
            temp_v0_2 = this->actor.params;
            if (temp_v0_2 == 1) {
                func_808BE680(this);
            } else if ((temp_v0_2 == 0) && (this->actor.xzDistToPlayer < 120.0f)) {
                func_808BDC9C(this);
            } else {
                func_808BD870(this);
            }
        }
    }
    if ((sp2C != 0) && ((temp_f2 = this->actor.xzDistToPlayer, (temp_f2 > 160.0f)) || (this->actor.params != 0)) && (((temp_v0_3 = this->actor.params, (temp_v0_3 == 0)) && (fabsf(this->actor.yDistToPlayer) < 120.0f)) || ((temp_v0_3 == 2) && (this->actor.yDistToPlayer > -60.0f)) || (temp_v0_3 == 1)) && ((this->unk_190 == 0) || (temp_f2 < 480.0f))) {
        this->skelAnime.animPlaybackSpeed = 1.0f;
    }
}

void func_808BD78C(EnDekunuts *this) {
    SkelAnime *temp_a0;

    temp_a0 = &this->skelAnime;
    this = this;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_06002FA4);
    this->unk_190 = 2;
    this->actionFunc = func_808BD7D4;
}

void func_808BD7D4(EnDekunuts *this, GlobalContext *globalCtx) {
    SkelAnime *sp1C;
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_a0 = &this->skelAnime;
    sp1C = temp_a0;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, 0.0f) != 0) {
        temp_v0 = this->unk_190;
        if (temp_v0 != 0) {
            this->unk_190 = temp_v0 - 1;
        }
    }
    if ((this->unk_190 == 0) || ((this->actor.xzDistToPlayer < 120.0f) && (this = this, (Player_GetMask(globalCtx) != 0x10)))) {
        func_808BDC9C(this);
    }
}

void func_808BD870(EnDekunuts *this) {
    SkelAnime *temp_a0;

    temp_a0 = &this->skelAnime;
    this = this;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_0600326C, -3.0f);
    if (func_808BDA4C == this->actionFunc) {
        this->unk_190 = 0x1002;
    } else {
        this->unk_190 = 1;
    }
    this->actionFunc = func_808BD8D8;
}

void func_808BD8D8(EnDekunuts *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s16 temp_v0;

    temp_a0 = &this->skelAnime;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, 0.0f) != 0) {
        temp_v0 = this->unk_190;
        if (temp_v0 != 0) {
            this->unk_190 = temp_v0 - 1;
        }
    }
    if ((this->unk_190 & 0x1000) == 0) {
        Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 2, 0xE38);
    }
    if (this->unk_190 == 0x1000) {
        temp_f0 = this->actor.xzDistToPlayer;
        if ((temp_f0 > 480.0f) || ((this->actor.params == 0) && (temp_f0 < 120.0f)) || (Player_GetMask(globalCtx) == 0x10)) {
            func_808BDC9C(this);
            return;
        }
        func_808BDA08(this);
        return;
    }
    if (this->unk_190 == 0) {
        if (Player_GetMask(globalCtx) == 0x10) {
            func_808BDC9C(this);
            return;
        }
        func_808BDA08(this);
        // Duplicate return node #16. Try simplifying control flow for better match
    }
}

void func_808BDA08(EnDekunuts *this) {
    SkelAnime *temp_a0;

    temp_a0 = &this->skelAnime;
    this = this;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06000168);
    this->actionFunc = func_808BDA4C;
    this->unk_190 = this->unk_194;
}

void func_808BDA4C(EnDekunuts *this, GlobalContext *globalCtx) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    SkelAnime *sp38;
    Actor *temp_v0;
    SkelAnime *temp_a0;
    f32 *temp_a1;
    s16 temp_v0_3;
    s32 temp_v0_2;
    s16 phi_a1;
    s32 phi_v0;
    s16 phi_v1;

    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 2, 0xE38);
    if (this->actor.params == 2) {
        temp_v0 = globalCtx->actorCtx.actorList[2].first;
        temp_a1 = &sp58;
        sp58 = temp_v0->world.pos.x;
        sp60 = temp_v0->world.pos.z;
        sp5C = temp_v0->world.pos.y + 40.0f;
        temp_v0_2 = Actor_PitchToPoint(&this->actor, (Vec3f *) temp_a1);
        if (temp_v0_2 < -0x3800) {
            phi_a1 = -0x3800;
        } else {
            phi_v1 = (s16) temp_v0_2;
            if (temp_v0_2 >= -0x1FFF) {
                phi_v1 = -0x2000;
            }
            phi_a1 = phi_v1;
        }
        if (this->skelAnime.animCurrentFrame < 7.0f) {
            Math_ScaledStepToS(&this->actor.world.rot.x, phi_a1, 0x800);
        } else {
            Math_ScaledStepToS(&this->actor.world.rot.x, 0, 0x800);
        }
    }
    temp_a0 = &this->skelAnime;
    sp38 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        this->actor.world.rot.x = 0;
        func_808BD870(this);
        return;
    }
    if (func_801378B8(temp_a0, 7.0f) != 0) {
        sp44 = Math_CosS(this->actor.world.rot.x) * 15.0f;
        sp48 = (Math_SinS(this->actor.shape.rot.y) * sp44) + this->actor.world.pos.x;
        sp4C = (this->actor.world.pos.y + 12.0f) - (Math_SinS(this->actor.world.rot.x) * 15.0f);
        phi_v0 = 0;
        if (this->actor.params == 2) {
            phi_v0 = 2;
        }
        if (Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xDA, sp48, sp4C, (Math_CosS(this->actor.shape.rot.y) * sp44) + this->actor.world.pos.z, (s16) (s32) this->actor.world.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) 0, (s16) phi_v0) != 0) {
            Audio_PlayActorSound2(&this->actor, 0x387EU);
            return;
        }
        // Duplicate return node #20. Try simplifying control flow for better match
        return;
    }
    if (((s32) this->unk_190 >= 2) && (func_801378B8(sp38, 12.0f) != 0)) {
        SkelAnime_ChangeAnimTransitionStop(sp38, &D_06000168, -3.0f);
        temp_v0_3 = this->unk_190;
        if (temp_v0_3 != 0) {
            this->unk_190 = temp_v0_3 - 1;
        }
    }
}

void func_808BDC9C(EnDekunuts *this) {
    SkelAnime_ChangeAnimTransitionStop(&this->skelAnime, &D_06002A5C, -5.0f);
    this->unk_190 = 0;
    Audio_PlayActorSound2(&this->actor, 0x387DU);
    this->actionFunc = func_808BDD54;
}

void func_808BDCF0(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_06002A5C, -5.0f);
    arg0->unk190 = 0x50;
    arg0->unk28D = (u8) (arg0->unk28D & 0xFFFE);
    Audio_PlayActorSound2(arg0, 0x387DU);
    arg0->unk188 = func_808BDD54;
}

void func_808BDD54(EnDekunuts *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s16 temp_v0;
    f32 phi_f2;

    temp_a0 = &this->skelAnime;
    sp24 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        temp_v0 = this->unk_190;
        if (temp_v0 != 0) {
            this->unk_190 = temp_v0 - 1;
        }
        if (this->unk_190 == 0) {
            func_808BD428(this);
        }
    } else {
        temp_f0 = this->skelAnime.animCurrentFrame;
        phi_f2 = 1.0f;
        if (temp_f0 < 1.0f) {

        } else if (temp_f0 > 3.0f) {
            phi_f2 = 3.0f;
        } else {
            phi_f2 = temp_f0;
        }
        this->collider.dim.height = (s32) ((3.0f - phi_f2) * 12.0f) + 5;
    }
    if (func_801378B8(sp24, 4.0f) != 0) {
        this->collider.base.acFlags &= 0xFFFE;
    }
    Math_ApproachF(&this->actor.world.pos.x, this->actor.home.pos.x, 0.5f, 3.0f);
    Math_ApproachF(&this->actor.world.pos.z, this->actor.home.pos.z, 0.5f, 3.0f);
}

void func_808BDE7C(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_06002DD4, -3.0f);
    arg0->unk2BE = 0x25;
    arg0->colChkInfo.mass = 0x32;
    Audio_PlayActorSound2(arg0, 0x3880U);
    arg0->world.rot.x = 0;
    arg0->flags |= 0x20;
    arg0->unk28D = (u8) (arg0->unk28D & 0xFFFE);
    arg0->unk188 = func_808BDEF8;
}

void func_808BDEF8(EnDekunuts *this, GlobalContext *globalCtx) {
    if (SkelAnime_FrameUpdateMatrix(&this->skelAnime) != 0) {
        this->unk_18D = 3;
        this->unk_192 = this->actor.yawTowardsPlayer + 0x8000;
        func_808BDF60(this);
    }
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 2, 0xE38);
}

void func_808BDF60(EnDekunuts *this) {
    SkelAnime *temp_a0;

    temp_a0 = &this->skelAnime;
    this = this;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_06003780);
    this->unk_190 = 2;
    this->unk_18C = 0;
    this->collider.base.acFlags |= 1;
    this->actionFunc = func_808BDFB8;
}

void func_808BDFB8(EnDekunuts *this, GlobalContext *globalCtx) {
    SkelAnime *sp2C;
    SkelAnime *temp_a0;
    s16 temp_a1;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v1;
    u16 temp_v0_2;
    s32 phi_a0;
    s32 phi_a0_2;

    temp_a0 = &this->skelAnime;
    sp2C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, 0.0f) != 0) {
        temp_v0 = this->unk_190;
        if (temp_v0 != 0) {
            this->unk_190 = temp_v0 - 1;
        }
    }
    if (this->unk_18C != 0) {
        Audio_PlayActorSound2(&this->actor, 0x387FU);
        this->unk_18C = 0;
    } else {
        this->unk_18C = 1;
    }
    Math_StepToF(&this->actor.speedXZ, 7.5f, 1.0f);
    if (Math_SmoothStepToS(&this->actor.world.rot.y, this->unk_192, 1, 0xE38, (s16) 0xB6) == 0) {
        temp_v0_2 = this->actor.bgCheckFlags;
        if ((temp_v0_2 & 0x20) != 0) {
            this->unk_192 = Actor_YawToPoint(&this->actor, &this->actor.home.pos);
        } else if ((temp_v0_2 & 8) != 0) {
            this->unk_192 = this->actor.wallYaw;
        } else if (this->unk_18D == 0) {
            temp_v0_3 = Actor_YawToPoint(&this->actor, &this->actor.home.pos);
            temp_a1 = this->actor.yawTowardsPlayer;
            temp_v1 = temp_v0_3 - temp_a1;
            phi_a0 = (s32) temp_v1;
            if ((s32) temp_v1 < 0) {
                phi_a0 = -(s32) temp_v1;
            }
            if (phi_a0 >= 0x2001) {
                this->unk_192 = temp_v0_3;
            } else {
                phi_a0_2 = -1;
                if ((s32) temp_v1 >= 0) {
                    phi_a0_2 = 1;
                }
                this->unk_192 = (phi_a0_2 * -0x2000) + temp_a1;
            }
        } else {
            this->unk_192 = this->actor.yawTowardsPlayer + 0x8000;
        }
    }
    this->actor.shape.rot.y = this->actor.world.rot.y + 0x8000;
    if ((this->unk_18D == 0) && (Actor_XZDistanceToPoint(&this->actor, &this->actor.home.pos) < 20.0f) && (fabsf(this->actor.world.pos.y - this->actor.home.pos.y) < 2.0f)) {
        this->actor.colChkInfo.mass = 0xFF;
        this->actor.flags &= -0x21;
        this->actor.speedXZ = 0.0f;
        func_808BDC9C(this);
        return;
    }
    if (this->unk_190 == 0) {
        func_808BE1CC(this);
    }
}

void func_808BE1CC(EnDekunuts *this) {
    SkelAnime *temp_a0;
    u8 temp_v0;

    temp_a0 = &this->skelAnime;
    this = this;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_060033E4);
    temp_v0 = this->unk_18D;
    this->unk_190 = 3;
    this->actor.speedXZ = 0.0f;
    if (temp_v0 != 0) {
        this->unk_18D = temp_v0 - 1;
    }
    this->actionFunc = func_808BE22C;
}

void func_808BE22C(EnDekunuts *this, GlobalContext *globalCtx) {
    SkelAnime *sp1C;
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_a0 = &this->skelAnime;
    sp1C = temp_a0;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, 0.0f) != 0) {
        temp_v0 = this->unk_190;
        if (temp_v0 != 0) {
            this->unk_190 = temp_v0 - 1;
        }
    }
    if (this->unk_190 == 0) {
        func_808BDF60(this);
    }
}

void func_808BE294(Actor *arg0, s32 arg1) {
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_0600259C, -3.0f);
    if (arg0->params == 0) {
        arg0->speedXZ = 10.0f;
        if (arg1 != 0) {
            func_800BE504(arg0, arg0 + 0x27C);
        }
    }
    arg0->world.rot.x = 0;
    arg0->unk28D = (u8) (arg0->unk28D & 0xFFFE);
    arg0->unk188 = func_808BE358;
    Audio_PlayActorSound2(arg0, 0x3880U);
    Audio_PlayActorSound2(arg0, 0x393BU);
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) SkelAnime_GetFrameCount(&D_0600259C.common));
}

void func_808BE358(EnDekunuts *this, GlobalContext *globalCtx) {
    Math_StepToF(&this->actor.speedXZ, 0.0f, 1.0f);
    if (SkelAnime_FrameUpdateMatrix(&this->skelAnime) != 0) {
        func_808BE484(this);
    }
}

void func_808BE3A8(Actor *arg0) {
    arg0->speedXZ = 0.0f;
    if (arg0->velocity.y > 0.0f) {
        arg0->velocity.y = 0.0f;
    }
    func_800BE504(arg0, arg0 + 0x27C);
    arg0->unk188 = func_808BE3FC;
}

void func_808BE3FC(EnDekunuts *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk_190;
    if (temp_v0 != 0) {
        this->unk_190 = temp_v0 - 1;
    }
    if (this->unk_190 == 0) {
        func_808BD3B4();
        if (this->actor.params == 1) {
            func_808BDCF0(&this->actor);
            return;
        }
        if (this->actor.colChkInfo.health == 0) {
            func_808BE294(&this->actor, 0);
            return;
        }
        this->actor.world.rot.y = this->actor.shape.rot.y;
        func_808BDF60(this);
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void func_808BE484(EnDekunuts *this) {
    SkelAnime *temp_a0;

    temp_a0 = &this->skelAnime;
    this = this;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06002BD4);
    this->actionFunc = func_808BE4D4;
    this->actor.speedXZ = 0.0f;
    Audio_PlayActorSound2(&this->actor, 0x3881U);
}

void func_808BE4D4(EnDekunuts *this, GlobalContext *globalCtx) {
    f32 sp48;
    f32 sp44;
    f32 sp40;
    PosRot *sp3C;
    PosRot *temp_a1;

    if (SkelAnime_FrameUpdateMatrix(&this->skelAnime) != 0) {
        sp40 = this->actor.world.pos.x;
        sp44 = this->actor.world.pos.y + 18.0f;
        sp48 = this->actor.world.pos.z;
        EffectSsDeadDb_Spawn(globalCtx, (Vec3f *) &sp40, &D_801D15B0, &D_801D15B0, &D_808BEF90, &D_808BEF94, (s16) 0xC8, (s16) 0, 0xD);
        temp_a1 = &this->actor.world;
        sp3C = temp_a1;
        Audio_PlaySoundAtPosition(globalCtx, &temp_a1->pos, 0xB, 0x3878U);
        sp44 = this->actor.world.pos.y + 10.0f;
        EffectSsHahen_SpawnBurst(globalCtx, (Vec3f *) &sp40, 3.0f, 0, (s16) 0xC, (s16) 3, (s16) 0xF, (s16) -1, (s16) 0xA, NULL);
        Item_DropCollectibleRandom(globalCtx, &this->actor, &sp3C->pos, 0xE0);
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x183, this->actor.home.pos.x, this->actor.home.pos.y, this->actor.home.pos.z, (s16) 0, (s16) (s32) this->actor.home.rot.y, (s16) 0, (s16) 0x80);
        EffectSsHahen_SpawnBurst(globalCtx, &this->actor.home.pos, 6.0f, 0, (s16) 6, (s16) 2, (s16) 0xF, (s16) 0x40, (s16) 0xA, &D_06001F50);
        Actor_MarkForDeath(&this->actor);
    }
}

void func_808BE680(EnDekunuts *this) {
    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_0600326C, -3.0f);
    this->actionFunc = func_808BE6C4;
}

void func_808BE6C4(EnDekunuts *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    if (Player_GetMask(globalCtx) != 0x10) {
        Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 2, 0xE38);
    }
    if (this->actor.xzDistToPlayer > 480.0f) {
        func_808BDC9C(this);
    }
}

void func_808BE73C(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0_2;
    s16 temp_v0_4;
    u8 temp_v0;
    u8 temp_v0_3;
    void *temp_a1;

    temp_v0 = arg0->unk28D;
    temp_a1 = arg0 + 0x294;
    if ((temp_v0 & 2) != 0) {
        arg0->unk28D = (u8) (temp_v0 & 0xFFFD);
        arg1 = arg1;
        func_800BE258(arg0, temp_a1);
        if ((arg0->unk18E != 0xA) || ((*arg0->unk2B8 & 0xDB0B3) == 0)) {
            func_808BD3B4(arg0, arg1);
            if ((arg0->colChkInfo.mass == 0x32) || (temp_v0_2 = arg0->params, (temp_v0_2 != 0))) {
                if ((arg0->params != 1) && (Actor_ApplyDamage(arg0) == 0)) {
                    Enemy_StartFinishingBlow(arg1, arg0);
                }
                if (arg0->params == 1) {
                    func_808BDCF0(arg0);
                    return;
                }
                temp_v0_3 = arg0->colChkInfo.damageEffect;
                if (temp_v0_3 == 3) {
                    func_808BD348(arg0);
                    if (arg0->colChkInfo.health == 0) {
                        arg0->unk190 = 3;
                        arg0->unk28D = (u8) (arg0->unk28D & 0xFFFE);
                    }
                    func_808BE3A8(arg0);
                    return;
                }
                if (temp_v0_3 == 1) {
                    arg0->unk190 = 0x28;
                    func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
                    Audio_PlayActorSound2(arg0, 0x389EU);
                    func_808BE3A8(arg0);
                    return;
                }
                if (temp_v0_3 == 2) {
                    arg0->unk210 = 4.0f;
                    arg0->unk18E = 0U;
                    arg0->unk214 = 0.55f;
                } else if (temp_v0_3 == 4) {
                    arg0->unk210 = 4.0f;
                    arg0->unk18E = 0x14U;
                    arg0->unk214 = 0.55f;
                    Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0->unk2A2, (f32) arg0->unk2A4, (f32) arg0->unk2A6, (s16) 0, (s16) 0, (s16) 0, (s16) 3);
                } else if (temp_v0_3 == 5) {
                    arg0->unk18E = 0x20U;
                    arg0->unk210 = 4.0f;
                    arg0->unk214 = 0.55f;
                }
                func_808BE294(arg0, 1);
                return;
            }
            if (temp_v0_2 == 0) {
                func_808BDE7C(arg0);
                return;
            }
            // Duplicate return node #34. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #34. Try simplifying control flow for better match
        return;
    }
    if ((arg0->colChkInfo.mass == 0xFF) && (arg1->actorCtx.unk2 != 0) && (arg0->xyzDistToPlayerSq < 40000.0f)) {
        temp_v0_4 = arg0->params;
        if (temp_v0_4 == 1) {
            func_808BDCF0(arg0, temp_a1, arg1);
            return;
        }
        if (temp_v0_4 == 0) {
            func_808BDE7C(arg0, temp_a1, arg1);
            return;
        }
        if (arg0->colChkInfo.health != 0) {
            arg0->colChkInfo.health = 0;
            Enemy_StartFinishingBlow(arg1, arg0);
            func_808BE294(arg0, 0);
        }
        // Duplicate return node #34. Try simplifying control flow for better match
    }
}

void EnDekunuts_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnDekunuts *this = (EnDekunuts *) thisx;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a1;
    f32 temp_f0;
    u8 temp_v0;

    func_808BE73C(&this->actor, globalCtx);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 20.0f, (f32) this->collider.dim.radius, (f32) this->collider.dim.height, 0x1DU);
    temp_a1 = &this->collider;
    sp2C = temp_a1;
    Collider_UpdateCylinder(&this->actor, temp_a1);
    if ((this->collider.base.acFlags & 1) != 0) {
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &sp2C->base);
    }
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &sp2C->base);
    if (this->unk_210 > 0.0f) {
        temp_v0 = this->unk_18E;
        if (temp_v0 != 0xA) {
            Math_StepToF(&this->unk_210, 0.0f, 0.05f);
            temp_f0 = (this->unk_210 + 1.0f) * 0.275f;
            this->unk_214 = temp_f0;
            if (temp_f0 > 0.55f) {
                this->unk_214 = 0.55f;
                return;
            }
            this->unk_214 = this->unk_214;
            return;
        }
        if ((temp_v0 == 0xA) && (Math_StepToF(&this->unk_218, 0.55f, 0.020625f) == 0)) {
            func_800B9010(&this->actor, 0x20B2U);
        }
        // Duplicate return node #10. Try simplifying control flow for better match
    }
}

s32 func_808BEBD0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 phi_f12;
    f32 phi_f14;
    f32 phi_f16;

    if (func_808BDA4C == arg5->unk188) {
        if (arg1 == 5) {
            temp_f0 = arg5->unk15C;
            if (temp_f0 <= 6.0f) {
                temp_f16 = (temp_f0 * 0.1167f) + 1.0f;
                phi_f12 = temp_f16;
                phi_f14 = 1.0f - (temp_f0 * 0.0833f);
                phi_f16 = temp_f16;
                goto block_9;
            }
            if (temp_f0 <= 7.0f) {
                temp_f0_2 = temp_f0 - 6.0f;
                temp_f16_2 = 1.7f - (temp_f0_2 * 0.7f);
                phi_f12 = temp_f16_2;
                phi_f14 = 0.5f + temp_f0_2;
                phi_f16 = temp_f16_2;
                goto block_9;
            }
            if (temp_f0 <= 10.0f) {
                phi_f12 = 1.0f;
                phi_f14 = 1.5f - ((temp_f0 - 7.0f) * 0.1667f);
                phi_f16 = 1.0f;
block_9:
                Matrix_Scale(phi_f12, phi_f14, phi_f16, 1);
            }
        } else if ((arg1 == 2) && (arg5->params == 2)) {
            arg4->z = arg5->world.rot.x;
        }
    }
    return 0;
}

void func_808BED30(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    s8 *sp30;
    s32 sp2C;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_v1;
    s8 *temp_t7;
    s8 temp_s3;
    Vec3f *phi_s0;
    Vec3f *phi_s1;
    s32 phi_s2;

    temp_t7 = arg1 + &D_808BEF98;
    sp30 = temp_t7;
    temp_s3 = *temp_t7;
    if (temp_s3 != -1) {
        if ((s32) temp_s3 < 3) {
            SysMatrix_GetStateTranslationAndScaledX(1000.0f, arg4 + (temp_s3 * 0xC) + 0x21C);
        } else {
            temp_v1 = arg4 + (temp_s3 * 0xC);
            sp2C = temp_v1;
            SysMatrix_GetStateTranslation(temp_v1 + 0x21C);
            temp_s2 = temp_s3 + 1;
            phi_s0 = &D_808BEFA4;
            phi_s1 = temp_v1 + 0x228;
            phi_s2 = temp_s2;
            if (temp_s2 < 8) {
                do {
                    SysMatrix_MultiplyVector3fByState(phi_s0, phi_s1);
                    temp_s2_2 = phi_s2 + 1;
                    phi_s0 += 0xC;
                    phi_s1 += 0xC;
                    phi_s2 = temp_s2_2;
                } while (temp_s2_2 != 8);
            }
        }
    }
    if (sp30 == &D_808BEF9A) {
        SysMatrix_GetStateTranslation(arg4 + 0x3C);
    }
}

void EnDekunuts_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnDekunuts *this = (EnDekunuts *) thisx;
    SkelAnime_Draw(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, func_808BEBD0, func_808BED30, &this->actor);
    SysMatrix_SetStateRotationAndTranslation(this->actor.home.pos.x, this->actor.home.pos.y, this->actor.home.pos.z, &this->actor.home.rot);
    Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
    if (this->actor.colorFilterTimer != 0) {
        func_800AE5A0(globalCtx);
    }
    func_800BDFC0(globalCtx, &D_06001E50);
    func_800BE680(globalCtx, &this->actor, (Vec3f []) this->unk_21C, 8, this->unk_214, this->unk_218, this->unk_210, (u8) (s32) this->unk_18E);
}

