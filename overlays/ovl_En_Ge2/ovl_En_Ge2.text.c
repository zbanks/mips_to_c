s32 func_800C57F8(CollisionContext *, PosRot *, s32, ? *, ? *, s32); /* extern */
u8 func_80B8B514(GlobalContext *arg0, EnGe2 *arg1); /* static */
s32 func_80B8B5AC(GlobalContext *arg0, Actor *arg1, PosRot *arg2, s16 arg3, s16 arg4, f32 arg5, f32 arg6); /* static */
? func_80B8B6B4(EnGe2 *arg0, GlobalContext *arg1);  /* static */
void func_80B8B7A8(EnGe2 *arg0, GlobalContext *arg1); /* static */
void func_80B8B848(EnGe2 *arg0, GlobalContext *arg1); /* static */
s32 func_80B8B90C(EnGe2 *arg0);                     /* static */
s32 func_80B8BA40(Actor *arg0);                     /* static */
void func_80B8BB3C(EnGe2 *arg0, GlobalContext *arg1); /* static */
void func_80B8BC1C(Actor *arg0);                    /* static */
void func_80B8BC78(EnGe2 *arg0, GlobalContext *arg1); /* static */
void func_80B8BD90(EnGe2 *arg0);                    /* static */
void func_80B8BFC8(EnGe2 *arg0);                    /* static */
void func_80B8C13C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B8CC0C(GlobalContext *arg0, Actor *arg1); /* static */
s32 func_80B8CCB4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80B8CCFC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeaderCommon D_0600030C;
extern AnimationHeader D_06000460;
extern AnimationHeaderCommon D_06001664;
extern FlexSkeletonHeader D_06008DD8;
extern AnimationHeaderCommon D_060091D0;
extern AnimationHeaderCommon D_06009D1C;
extern AnimationHeader D_0600A344;
static ColliderCylinderInit D_80B8CE40 = {
    {0xA, 0, 9, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0x38BFBB3, 0, 0}, 0, 1, 1},
    {0x1E, 0x3C, 0, {0, 0, 0}},
};
static Vec3f D_80B8CE6C = {0.0f, -0.05f, 0.0f};
static Vec3f D_80B8CE78 = {0.0f, -0.025f, 0.0f};
static Color_RGBA8 D_80B8CE84 = {0xFF, 0xFF, 0xFF, 0};
static Color_RGBA8 D_80B8CE88 = {0xFF, 0x96, 0, 0};
static Vec3f D_80B8CE8C = {600.0f, 700.0f, 0.0f};
static ? D_80B8CE98;                                /* unable to generate initializer */

typedef struct EnGe2 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 (*unk144)(GlobalContext *, Actor *); /* inferred */
    /* 0x0148 */ ColliderCylinder unk148;           /* inferred */
    /* 0x0194 */ SkelAnime unk194;                  /* inferred */
    /* 0x01D8 */ Vec3s unk1D8;                      /* inferred */
    /* 0x01DE */ char pad1DE[0x7E];                 /* maybe part of unk1D8[22]? */
    /* 0x025C */ Vec3s unk25C;                      /* inferred */
    /* 0x0262 */ char pad262[0x7E];                 /* maybe part of unk25C[22]? */
    /* 0x02E0 */ s16 unk2E0;                        /* inferred */
    /* 0x02E2 */ s16 unk2E2;                        /* inferred */
    /* 0x02E4 */ char pad2E4[0x2];                  /* maybe part of unk2E2[2]? */
    /* 0x02E6 */ s16 unk2E6;                        /* inferred */
    /* 0x02E8 */ char pad2E8[0x8];                  /* maybe part of unk2E6[5]? */
    /* 0x02F0 */ u8 *unk2F0;                        /* inferred */
    /* 0x02F4 */ s32 unk2F4;                        /* inferred */
    /* 0x02F8 */ u16 unk2F8;                        /* inferred */
    /* 0x02FA */ s16 unk2FA;                        /* inferred */
    /* 0x02FC */ f32 unk2FC;                        /* inferred */
    /* 0x0300 */ u8 unk300;                         /* inferred */
    /* 0x0301 */ u8 unk301;                         /* inferred */
    /* 0x0302 */ s16 unk302;                        /* inferred */
    /* 0x0304 */ char pad304[0x2];                  /* maybe part of unk302[2]? */
    /* 0x0306 */ s16 unk306;                        /* inferred */
    /* 0x0308 */ void (*actionFunc)(EnGe2 *, GlobalContext *);
} EnGe2;                                            /* size 0x30C */

void EnGe2_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnGe2 *this = (EnGe2 *) thisx;
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    s16 temp_v0;
    s32 temp_v0_2;
    u32 temp_t7;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 36.0f);
    temp_a1 = &this->unk194;
    sp30 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06008DD8, NULL, &this->unk1D8, &this->unk25C, 0x16);
    SkelAnime_ChangeAnimDefaultRepeat(sp30, &D_0600A344);
    Collider_InitAndSetCylinder(globalCtx, &this->unk148, &this->actor, &D_80B8CE40);
    this->actor.colChkInfo.mass = 0xFF;
    Actor_SetScale(&this->actor, 0.01f);
    temp_v0 = this->actor.world.rot.z;
    this->actor.uncullZoneForward = 1200.0f;
    if (temp_v0 == 0) {
        this->unk2FC = 40.0f;
    } else {
        this->unk2FC = fabsf((f32) temp_v0 * 20.0f);
    }
    this->actor.shape.rot.x = 0;
    this->actor.shape.rot.z = 0;
    this->actor.targetMode = 6;
    this->unk2F8 = 0;
    this->unk301 = 0;
    this->unk302 = -1;
    this->actionFunc = func_80B8C59C;
    this->unk144 = func_80B8CC0C;
    this->actor.minVelocityY = -9.0f;
    this->actor.gravity = -1.0f;
    this->actor.world.rot.x = this->actor.shape.rot.x;
    this->actor.world.rot.z = this->actor.shape.rot.z;
    this->actor.speedXZ = 1.5f;
    func_80B8B6B4(this, globalCtx);
    temp_t7 = this->actor.flags | 0x10;
    this->actor.flags = temp_t7;
    if ((globalCtx->actorCtx.unk5 & 2) != 0) {
        this->actor.flags = temp_t7 | 0x30;
    }
    temp_v0_2 = (s32) (this->actor.params & 0xE0) >> 5;
    if (temp_v0_2 != 1) {
        if (temp_v0_2 != 2) {
            return;
        }
        if ((gSaveContext.weekEventReg[83] & 2) != 0) {
            Actor_MarkForDeath(&this->actor);
        }
        return;
    }
    SkelAnime_ChangeAnim(sp30, (AnimationHeader *) &D_06009D1C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06009D1C), (u8) 0, 0.0f);
    this->actionFunc = func_80B8C9B8;
    this->actor.speedXZ = 0.0f;
    this->actor.uncullZoneForward = 4000.0f;
}

void EnGe2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGe2 *this = (EnGe2 *) thisx;

}

u8 func_80B8B514(GlobalContext *arg0, EnGe2 *arg1) {
    if (arg1->actor.xzDistToPlayer > 250.0f) {
        goto block_7;
    }
    if ((Player_GetMask(arg0) != 0x10) && (arg1->actor.xzDistToPlayer < 50.0f)) {
        return 2U;
    }
    if (func_800B715C(arg0) != 0) {
        return 1U;
    }
block_7:
    return 0U;
}

s32 func_80B8B5AC(GlobalContext *arg0, Actor *arg1, PosRot *arg2, s16 arg3, s16 arg4, f32 arg5, f32 arg6) {
    ? sp30;
    ? sp2C;
    s32 sp28;
    s16 temp_v0;
    s32 phi_v1;

    sp28 = arg0->actorCtx.actorList[2].first;
    if (Player_GetMask(arg0) == 0x10) {
        return 0;
    }
    if (arg5 < arg1->xzDistToPlayer) {
        return 0;
    }
    if (arg6 < fabsf(arg1->yDistToPlayer)) {
        return 0;
    }
    temp_v0 = arg1->yawTowardsPlayer - arg3;
    if ((s32) arg4 > 0) {
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if ((s32) arg4 < phi_v1) {
            return 0;
        }
        goto block_11;
    }
block_11:
    if (func_800C57F8(&arg0->colCtx, arg2, sp28 + 0xC40, &sp30, &sp2C, 0) != 0) {
        return 0;
    }
    return 1;
}

? func_80B8B6B4(EnGe2 *arg0, GlobalContext *arg1) {
    u8 *sp1C;
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_v0;
    u8 *temp_t8;
    void *temp_v0_2;

    temp_v0 = (s32) (arg0->actor.params & 0xFC00) >> 0xA;
    if (temp_v0 != 0x3F) {
        temp_t8 = arg1->setupPathList + (temp_v0 * 8);
        arg0->unk2F0 = temp_t8;
        if (temp_t8 != 0) {
            arg0 = arg0;
            sp1C = temp_t8;
            temp_v0_2 = Lib_SegmentedToVirtual(temp_t8->unk4);
            temp_f0 = (f32) temp_v0_2->unk0 - arg0->actor.world.pos.x;
            temp_f2 = (f32) temp_v0_2->unk4 - arg0->actor.world.pos.z;
            if (((temp_f0 * temp_f0) + (temp_f2 * temp_f2)) < 100.0f) {
                arg0->unk2F4 = 0;
                arg0->unk2F8 &= 0xFFFE;
                goto block_6;
            }
            arg0->unk2F4 = *sp1C - 1;
            arg0->unk2F8 |= 1;
            return 1;
        }
        goto block_6;
    }
    arg0->unk2F0 = NULL;
    arg0->unk2F4 = 0;
block_6:
    return 0;
}

void func_80B8B7A8(EnGe2 *arg0, GlobalContext *arg1) {
    s32 temp_t0;
    s32 temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    arg0->unk2F4 = 0;
    temp_t0 = (s32) (arg0->actor.params & 0xFC00) >> 0xA;
    if (temp_t0 != 0x3F) {
        temp_v0 = arg1->setupPathList;
        temp_v1 = temp_v0 + ((temp_v0 + (temp_t0 * 8))->unk1 * 8);
        arg0->unk2F0 = temp_v1;
        arg0 = arg0;
        temp_v0_2 = Lib_SegmentedToVirtual(temp_v1->unk4);
        arg0->actor.world.pos.x = (f32) temp_v0_2->unk0;
        arg0->actor.world.pos.z = (f32) temp_v0_2->unk4;
        return;
    }
    arg0->unk2F0 = NULL;
}

void func_80B8B848(EnGe2 *arg0, GlobalContext *arg1) {
    void *sp38;
    Vec3f sp2C;
    Vec3f *sp28;
    Vec3f *temp_a0;
    s32 temp_v0;
    void *temp_t8;
    void *temp_v0_2;

    arg0->unk2F4 = 0;
    temp_v0 = (s32) (arg0->actor.params & 0xFC00) >> 0xA;
    if (temp_v0 != 0x3F) {
        temp_t8 = arg1->setupPathList + (temp_v0 * 8);
        arg0->unk2F0 = temp_t8;
        if (temp_t8 != 0) {
            temp_v0_2 = Lib_SegmentedToVirtual(temp_t8->unk4);
            temp_a0 = arg0 + 0x24;
            sp28 = temp_a0;
            sp38 = temp_v0_2;
            Math_Vec3s_ToVec3f(temp_a0, (Vec3s *) temp_v0_2);
            arg0->unk2F4 += 1;
            Math_Vec3s_ToVec3f(&sp2C, sp38 + 6);
            arg0->actor.world.rot.y = Math_Vec3f_Yaw(temp_a0, &sp2C);
            arg0->actor.world.rot.x = Math_Vec3f_Pitch(temp_a0, &sp2C);
            arg0->actor.speedXZ = 15.0f;
            return;
        }
        // Duplicate return node #4. Try simplifying control flow for better match
        return;
    }
    arg0->unk2F0 = NULL;
}

s32 func_80B8B90C(EnGe2 *arg0) {
    u8 *sp34;
    f32 sp2C;
    f32 sp28;
    f32 temp_f12;
    f32 temp_f14;
    s32 temp_t4;
    s32 temp_t7;
    u8 *temp_v0;
    void *temp_v1;
    s32 phi_v0;

    temp_v0 = arg0->unk2F0;
    if (temp_v0 == 0) {
        return 1;
    }
    sp34 = temp_v0;
    temp_v1 = Lib_SegmentedToVirtual(temp_v0->unk4) + (arg0->unk2F4 * 6);
    temp_f12 = (f32) temp_v1->unk0 - arg0->actor.world.pos.x;
    temp_f14 = (f32) temp_v1->unk4 - arg0->actor.world.pos.z;
    sp2C = temp_f12;
    sp28 = temp_f14;
    arg0->actor.world.rot.y = Math_Atan2S(temp_f12, temp_f14);
    Math_SmoothStepToS(arg0 + 0xBE, arg0->actor.world.rot.y, 2, 0x7D0, (s16) 0xC8);
    phi_v0 = 0;
    if (((temp_f12 * temp_f12) + (temp_f14 * temp_f14)) < 100.0f) {
        if ((arg0->unk2F8 & 1) != 0) {
            temp_t4 = arg0->unk2F4 - 1;
            arg0->unk2F4 = temp_t4;
            if (temp_t4 < 0) {
                return 2;
            }
            goto block_8;
        }
        temp_t7 = arg0->unk2F4 + 1;
        arg0->unk2F4 = temp_t7;
        if (temp_t7 >= (s32) *sp34) {
            return 2;
        }
block_8:
        phi_v0 = 1;
        // Duplicate return node #9. Try simplifying control flow for better match
        return phi_v0;
    }
    return phi_v0;
}

s32 func_80B8BA40(Actor *arg0) {
    Vec3f sp30;
    s16 sp2E;
    s16 sp2C;
    Vec3f *sp28;
    Vec3f *temp_a0;
    void *temp_v1;
    s32 phi_v0;

    temp_v1 = arg0->unk2F0;
    if (temp_v1 == 0) {
        return 1;
    }
    Math_Vec3s_ToVec3f(&sp30, Lib_SegmentedToVirtual(temp_v1->unk4) + (arg0->unk2F4 * 6));
    temp_a0 = arg0 + 0x24;
    sp28 = temp_a0;
    sp2E = Math_Vec3f_Yaw(temp_a0, &sp30);
    sp2C = Math_Vec3f_Pitch(temp_a0, &sp30);
    Math_SmoothStepToS(arg0 + 0x32, sp2E, 0xA, 0x3E8, (s16) 0x64);
    Math_SmoothStepToS(arg0 + 0x30, sp2C, 6, 0x7D0, (s16) 0xC8);
    arg0->speedXZ = 15.0f;
    Actor_SetVelocityAndMoveXYRotationReverse(arg0);
    phi_v0 = 0;
    if (Math_Vec3f_DistXYZ(temp_a0, &sp30) < 40.0f) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_80B8BB3C(EnGe2 *arg0, GlobalContext *arg1) {
    s16 sp36;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    s16 temp_a0;

    temp_a0 = arg1->state.frames * 0x2800;
    sp36 = temp_a0;
    sp28 = (Math_CosS(temp_a0) * 5.0f) + arg0->actor.focus.pos.x;
    sp2C = arg0->actor.focus.pos.y + 10.0f;
    sp30 = (Math_SinS(temp_a0) * 5.0f) + arg0->actor.focus.pos.z;
    EffectSsKiraKira_SpawnDispersed(arg1, (Vec3f *) &sp28, &D_80B8CE6C, &D_80B8CE78, &D_80B8CE84, &D_80B8CE88, (s16) 0x3E8, 0x10);
}

void func_80B8BC1C(Actor *arg0) {
    if ((s32) Rand_ZeroFloat(2.0f) == 0) {
        Audio_PlayActorSound2(arg0, 0x6918U);
        return;
    }
    Audio_PlayActorSound2(arg0, 0x6919U);
}

void func_80B8BC78(EnGe2 *arg0, GlobalContext *arg1) {
    u16 temp_v1;
    u8 temp_v0;

    temp_v0 = arg0->unk300;
    if ((s32) temp_v0 > 0) {
        arg0->unk300 = temp_v0 - 1;
        return;
    }
    temp_v1 = *(arg1->setupExitList + ((arg0->actor.params & 0x1F) * 2));
    if (arg1->nextEntranceIndex != temp_v1) {
        arg1->nextEntranceIndex = temp_v1;
        arg1->sceneLoadFlag = 0x14;
        arg1->unk_1887F = 0x26;
    }
}

void func_80B8BCEC(EnGe2 *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk194);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 2, 0x1000, (s16) 0x200);
}

void func_80B8BD38(EnGe2 *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk194);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 2, 0x400, (s16) 0x100);
    func_80B8BC78(this, globalCtx);
}

void func_80B8BD90(EnGe2 *arg0) {
    arg0->actionFunc = func_80B8BD38;
    arg0->actor.speedXZ = 0.0f;
    arg0 = arg0;
    SkelAnime_ChangeAnim(arg0 + 0x194, (AnimationHeader *) &D_06009D1C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06009D1C), (u8) 0, -8.0f);
}

void func_80B8BE08(EnGe2 *this, GlobalContext *globalCtx) {
    SkelAnime *sp2C;
    SkelAnime *temp_a0;
    u8 temp_v0;

    temp_a0 = &this->unk194;
    sp2C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 2, 0x400, (s16) 0x100);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if (this->actor.xzDistToPlayer < 50.0f) {
        func_80B8BD90(this);
    } else if ((this->actor.bgCheckFlags & 1) == 0) {
        this->actor.world.pos.x = this->actor.prevPos.x;
        this->actor.world.pos.y = this->actor.prevPos.y;
        this->actor.world.pos.z = this->actor.prevPos.z;
        func_80B8BD90(this);
    }
    temp_v0 = this->unk300;
    if ((s32) temp_v0 > 0) {
        this->unk300 = temp_v0 - 1;
    } else {
        func_80B8BC78(this, globalCtx);
    }
    if ((func_801378B8(sp2C, 2.0f) != 0) || (func_801378B8(sp2C, 6.0f) != 0)) {
        Audio_PlayActorSound2(&this->actor, 0x2971U);
    }
}

void func_80B8BF04(EnGe2 *this, GlobalContext *globalCtx) {
    SkelAnime *sp30;
    SkelAnime *temp_a0;
    s16 temp_v1;

    temp_a0 = &this->unk194;
    sp30 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 2, 0x400, (s16) 0x100);
    temp_v1 = this->actor.shape.rot.y;
    this->actor.world.rot.y = temp_v1;
    if (this->actor.yawTowardsPlayer == temp_v1) {
        SkelAnime_ChangeAnim(sp30, (AnimationHeader *) &D_060091D0, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_060091D0), (u8) 0, -8.0f);
        this->unk300 = 0x32;
        this->actionFunc = func_80B8BE08;
        this->actor.speedXZ = 4.0f;
    }
}

void func_80B8BFC8(EnGe2 *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x194, (AnimationHeader *) &D_06009D1C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06009D1C), (u8) 0, -8.0f);
    arg0->unk300 = 0x3C;
    arg0->actionFunc = func_80B8C45C;
    arg0->actor.speedXZ = 0.0f;
}

void func_80B8C048(EnGe2 *this, GlobalContext *globalCtx) {
    EnGe2 *temp_a0;

    temp_a0 = this;
    if (this->actor.colorFilterTimer == 0) {
        this = this;
        func_80B8BFC8(temp_a0);
        this->unk301 = 0;
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->unk148.base);
        this->unk2F8 &= 0xFFFB;
    }
}

void func_80B8C0B0(EnGe2 *this, GlobalContext *globalCtx) {
    u8 temp_v0;

    SkelAnime_FrameUpdateMatrix(&this->unk194);
    func_80B8BB3C(this, globalCtx);
    temp_v0 = this->unk300;
    if ((s32) temp_v0 > 0) {
        this->unk300 = temp_v0 - 1;
        return;
    }
    func_80B8BFC8(this);
    this->unk301 = 0;
    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->unk148.base);
    this->unk2F8 &= 0xFFFD;
    this->actor.flags |= 1;
}

void func_80B8C13C(Actor *arg0, GlobalContext *arg1) {
    s32 *temp_v0;
    f32 phi_f0;

    if (gSaveContext.isNight != 0) {
        phi_f0 = 200.0f;
    } else {
        phi_f0 = 280.0f;
    }
    if (arg1->actorCtx.actorList[2].first->unk394 == 0x1A) {
        arg0->unk308 = func_80B8BF04;
        arg0->speedXZ = 0.0f;
        SkelAnime_ChangeAnim(arg0 + 0x194, (AnimationHeader *) &D_06009D1C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06009D1C), (u8) 0, -8.0f);
        arg0->unk2F8 = (u16) (arg0->unk2F8 | 0x20);
        return;
    }
    if ((gSaveContext.weekEventReg[80] & 8) != 0) {
        arg0->unk308 = func_80B8BCEC;
        arg0->speedXZ = 0.0f;
        SkelAnime_ChangeAnim(arg0 + 0x194, (AnimationHeader *) &D_06009D1C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06009D1C), (u8) 0, -8.0f);
        return;
    }
    if (func_80B8B5AC(arg1, arg0, arg0 + 0x3C, arg0->shape.rot.y, (s16) 0x1800, phi_f0, arg0->unk2FC) != 0) {
        if (((arg0->params & 0x1F) != 0x1F) && (func_801690CC(arg1) == 0)) {
            arg0->speedXZ = 0.0f;
            func_800B7298(arg1, arg0, 0x1AU);
            func_801000A4(0x482CU);
            func_801518B0(arg1, 0x1194U, arg0);
            arg0->unk308 = func_80B8BF04;
            SkelAnime_ChangeAnim(arg0 + 0x194, (AnimationHeader *) &D_06009D1C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06009D1C), (u8) 0, -8.0f);
            return;
        }
        // Duplicate return node #18. Try simplifying control flow for better match
        return;
    }
    if ((arg0->unk159 & 2) != 0) {
        temp_v0 = arg0->unk184;
        if ((temp_v0 != 0) && ((*temp_v0 & 1) != 0)) {
            func_800BCB70(arg0, 0, 0x78, 0, (s16) 0x190);
            arg0->unk308 = func_80B8C048;
            arg0->unk2F8 = (u16) (arg0->unk2F8 | 4);
            arg0->speedXZ = 0.0f;
            return;
        }
        SkelAnime_ChangeAnim(arg0 + 0x194, (AnimationHeader *) &D_06001664, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06001664), (u8) 2, -8.0f);
        arg0->unk300 = 0xC8;
        arg0->unk308 = func_80B8C0B0;
        arg0->speedXZ = 0.0f;
        Audio_PlayActorSound2(arg0, 0x399AU);
        arg0->flags &= -2;
        arg0->unk2F8 = (u16) (arg0->unk2F8 | 2);
        return;
    }
    if (arg0->home.rot.x == 0) {
        CollisionCheck_SetAC(arg1, &arg1->colChkCtx, arg0 + 0x148);
    }
}

void func_80B8C45C(EnGe2 *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a0;
    s32 temp_v1;
    u8 temp_v0;
    u8 temp_v0_2;

    temp_a0 = &this->unk194;
    sp34 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v1 = func_80B8B514(globalCtx, this) & 0xFF;
    if (temp_v1 != 0) {
        this->unk300 = 0x64;
        this->unk2FA = this->actor.yawTowardsPlayer;
        if ((s32) this->unk301 < temp_v1) {
            this->unk301 = (u8) temp_v1;
        }
    }
    temp_v0 = this->unk300;
    if ((s32) temp_v0 > 0) {
        this->unk300 = temp_v0 - 1;
    } else {
        this->actionFunc = func_80B8C59C;
        SkelAnime_ChangeAnim(sp34, &D_0600A344, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600A344.common), (u8) 0, -8.0f);
        this->unk2E6 = 0;
        this->unk301 = 0;
    }
    temp_v0_2 = this->unk301;
    if (temp_v0_2 != 1) {
        if (temp_v0_2 != 2) {

        } else {
            Math_SmoothStepToS(&this->actor.shape.rot.y, this->unk2FA, 2, 0xBB8, (s16) 0x3E8);
        }
    } else {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->unk2FA, 2, 0x3E8, (s16) 0x1F4);
    }
    this->actor.world.rot.y = this->actor.shape.rot.y;
    func_80B8C13C(&this->actor, globalCtx);
}

void func_80B8C59C(EnGe2 *this, GlobalContext *globalCtx) {
    s32 temp_v0;
    u8 temp_v0_2;

    SkelAnime_FrameUpdateMatrix(&this->unk194);
    this->actor.speedXZ = 1.5f;
    temp_v0 = func_80B8B90C(this);
    if (temp_v0 != 1) {
        if (temp_v0 == 2) {
            func_80B8B6B4(this, globalCtx);
        }
    } else {
        func_80B8BFC8(this);
        this->unk301 = 0;
    }
    temp_v0_2 = func_80B8B514(globalCtx, this);
    this->unk301 = temp_v0_2;
    if ((temp_v0_2 & 0xFF) != 0) {
        func_80B8BFC8(this);
        this->unk2FA = this->actor.yawTowardsPlayer;
    }
    func_80B8C13C(&this->actor, globalCtx);
}

void func_80B8C644(EnGe2 *this, GlobalContext *globalCtx) {
    SkelAnime *sp30;
    SkelAnime *temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1;

    temp_a0 = &this->unk194;
    sp30 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_800EE29C(globalCtx, 0x1DCU) != 0) {
        temp_v1 = (s16) globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x1DCU)]->unk0;
        if (temp_v1 != this->unk302) {
            this->unk302 = temp_v1;
            switch (temp_v1) {
            case 1:
                SkelAnime_ChangeAnim(sp30, (AnimationHeader *) &D_06009D1C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06009D1C), (u8) 0, -8.0f);
                func_80B8B7A8(this, globalCtx);
                break;
            case 2:
                SkelAnime_ChangeAnim(sp30, (AnimationHeader *) &D_0600030C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600030C), (u8) 0, -5.0f);
                this->unk306 = (s16) (s32) (Rand_ZeroFloat(10.0f) + 20.0f);
                break;
            case 3:
                Actor_MarkForDeath(&this->actor);
                break;
            case 4:
                SkelAnime_ChangeAnim(sp30, &D_06000460, 0.0f, 0.0f, 0.0f, (u8) 2, 0.0f);
                break;
            case 5:
                SkelAnime_ChangeAnim(sp30, &D_06000460, 0.0f, 1.0f, 1.0f, (u8) 2, 0.0f);
                func_80B8B848(this, globalCtx);
                this->unk2F8 |= 8;
                this->unk306 = (s16) (s32) (Rand_ZeroFloat(10.0f) + 20.0f);
                break;
            }
        }
    }
    temp_v0 = this->unk302;
    if (temp_v0 != 2) {
        if (temp_v0 != 5) {
            return;
        }
        if ((this->unk2F4 < (s32) *this->unk2F0) && (func_80B8BA40(&this->actor) != 0)) {
            this->unk2F4 += 1;
        }
        temp_v0_2 = this->unk306;
        this->actor.shape.rot.x += 0x3E8;
        this->actor.shape.rot.y += 0x7D0;
        this->actor.shape.rot.z += 0x1F4;
        if ((s32) temp_v0_2 > 0) {
            this->unk306 = temp_v0_2 - 1;
            return;
        }
        this->unk306 = (s16) (s32) (Rand_ZeroFloat(10.0f) + 20.0f);
        func_80B8BC1C(&this->actor);
        return;
    }
    func_80B8B90C(this);
    this->actor.speedXZ = 5.0f;
    if ((func_801378B8(sp30, 2.0f) != 0) || (func_801378B8(sp30, 6.0f) != 0)) {
        Audio_PlayActorSound2(&this->actor, 0x2971U);
    }
    temp_v0_3 = this->unk306;
    if ((s32) temp_v0_3 > 0) {
        this->unk306 = temp_v0_3 - 1;
        return;
    }
    this->unk306 = (s16) (s32) (Rand_ZeroFloat(10.0f) + 20.0f);
    func_80B8BC1C(&this->actor);
}

void func_80B8C9B8(EnGe2 *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk194);
    if ((func_80B8B5AC(globalCtx, &this->actor, &this->actor.focus, this->actor.shape.rot.y, (s16) 0x4000, 720.0f, this->unk2FC) != 0) && ((this->actor.params & 0x1F) != 0x1F) && (func_801690CC(globalCtx) == 0)) {
        func_800B7298(globalCtx, &this->actor, 0x1AU);
        func_801000A4(0x482CU);
        func_801518B0(globalCtx, 0x1194U, &this->actor);
        this->unk300 = 0x32;
        func_80B8BD90(this);
    }
    if (this->actor.yDistToPlayer < -150.0f) {
        this->actor.draw = NULL;
        return;
    }
    this->actor.draw = EnGe2_Draw;
}

void EnGe2_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnGe2 *this = (EnGe2 *) thisx;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a2;
    s16 temp_v1;
    u16 temp_t2;
    u16 temp_v0;
    s16 phi_v0;
    s16 phi_v1;

    if ((this->unk2F8 & 8) == 0) {
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    }
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 40.0f, 25.0f, 40.0f, 5U);
    temp_a2 = &this->unk148;
    sp28 = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
    if (func_800EE29C(globalCtx, 0x1DCU) != 0) {
        temp_t2 = this->unk2F8 & 0xFFFD;
        this->unk2F8 = temp_t2;
        this->actionFunc = func_80B8C644;
        this->unk2F8 = temp_t2 & 0xFFFE;
        this->actor.flags |= 0x20;
        this->actor.speedXZ = 0.0f;
    }
    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk2F8;
    if ((temp_v0 & 2) != 0) {
        this->unk2E0 = 2;
        return;
    }
    if ((temp_v0 & 4) == 0) {
        temp_v1 = this->unk2E2;
        if (temp_v1 == 0) {
            phi_v0 = 0;
        } else {
            this->unk2E2 = temp_v1 - 1;
            phi_v0 = this->unk2E2;
        }
        phi_v1 = this->unk2E2;
        if (phi_v0 == 0) {
            this->unk2E2 = Rand_S16Offset(0x3C, 0x3C);
            phi_v1 = this->unk2E2;
        }
        this->unk2E0 = phi_v1;
        if ((s32) this->unk2E0 >= 3) {
            this->unk2E0 = 0;
        }
    }
}

s32 func_80B8CC0C(GlobalContext *arg0, Actor *arg1) {
    s32 sp34;
    Vec3f *sp2C;
    Vec3s *sp28;
    Vec3f *temp_a3;
    Vec3s *temp_t0;

    temp_a3 = arg1 + 0x3C;
    temp_t0 = arg1 + 0xBC;
    sp28 = temp_t0;
    sp2C = temp_a3;
    sp34 = func_8013A530(arg0, arg1, 9, temp_a3, temp_t0, 10.0f, 400.0f, (s16) -1);
    return sp34 | func_8013A530(arg0, arg1, 0xB, temp_a3, temp_t0, 10.0f, 1200.0f, (s16) -1);
}

s32 func_80B8CCB4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 3) {
        arg4->x += arg5->unk2E6;
        arg4->z += arg5->unk2E4;
    }
    return 0;
}

void func_80B8CCFC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 6) {
        SysMatrix_MultiplyVector3fByState(&D_80B8CE8C, arg4 + 0x3C);
    }
}

void EnGe2_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnGe2 *this = (EnGe2 *) thisx;
    GraphicsContext *sp34;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    s32 temp_a0_2;

    temp_a0 = globalCtx->state.gfxCtx;
    sp34 = temp_a0;
    func_8012C5B0(temp_a0);
    temp_v1 = sp34->polyOpa.p;
    sp34->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDB060020;
    temp_a0_2 = *(&D_80B8CE98 + (this->unk2E0 * 4));
    temp_v1->words.w1 = (temp_a0_2 & 0xFFFFFF) + gSegments[(u32) (temp_a0_2 * 0x10) >> 0x1C] + 0x80000000;
    func_800B8050(&this->actor, globalCtx, 0);
    SkelAnime_DrawSV(globalCtx, this->unk194.skeleton, this->unk194.limbDrawTbl, (s32) this->unk194.dListCount, func_80B8CCB4, func_80B8CCFC, &this->actor);
}

