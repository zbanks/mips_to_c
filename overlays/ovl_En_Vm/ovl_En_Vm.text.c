? EffectSsDeadDd_Spawn(void *, void *, Vec3f *, Vec3f *, ? *, ? *, s32, s32, s32, s32); /* extern */
? func_800B31BC(GlobalContext *, Vec3f *, ?, ?, s32, s32); /* extern */
void func_808CC420(EnVm *arg0, s16, s16);           /* static */
void func_808CC490(Actor *arg0, GlobalContext *arg1); /* static */
void func_808CC5C4(Actor *arg0);                    /* static */
void func_808CC610(EnVm *arg0, void *arg1);         /* static */
void func_808CC788(EnVm *arg0);                     /* static */
void func_808CC820(EnVm *arg0, GlobalContext *arg1); /* static */
void func_808CCA10(Actor *arg0);                    /* static */
void func_808CCAA4(void *arg0, ? arg1);             /* static */
void func_808CCB08(void *arg0);                     /* static */
void func_808CCB50(EnVm *arg0, ? arg1);             /* static */
void func_808CCBE4(Actor *arg0, GlobalContext *arg1); /* static */
void func_808CCCF0(Actor *arg0, GlobalContext *arg1); /* static */
void func_808CCDE4(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_808CD020(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_808CD08C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06000068;
extern ? D_06002728;
extern SkeletonHeader D_06003F60;
static ColliderJntSphElementInit D_808CD4C0 = {
    {{0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 5, 1}, {2, {{0, 0, 0}, 0x14}, 0x64}},
    {
        {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 5, 1},
        {0xA, {{0, 0x8FC, 0}, 0x21}, 0x64},
    },
};
static ColliderJntSphInit D_808CD508 = {{9, 0, 0xD, 0x39, 0x10, 0}, 2, &D_808CD4C0};
static ColliderTrisElementInit D_808CD518 = {
    {0, {0xF7CFFFFF, 0, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 0},
    {{{0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}}},
};
static ColliderTrisInit D_808CD554 = {{9, 0x11, 0, 0, 0, 2}, 1, &D_808CD518};
static DamageTable D_808CD564 = {
    {
        0xF0,
        0xF0,
        0xF0,
        1,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        1,
    },
};
static CollisionCheckInfoInit D_808CD584 = {2, 0x19, 0x64, 0xFF};
static void *D_808CD58C = {
    (void *)0x403F300,
    (void *)0x403FB00,
    (void *)0x4040300,
    (void *)0x4040B00,
    (void *)0x4041300,
    (void *)0x4041B00,
    (void *)0x4042300,
    (void *)0x4042B00,
};
static InitChainEntry D_808CD5AC;                   /* unable to generate initializer */
static s32 D_808CD5B8 = 0;
static ? D_808CD5BC;                                /* unable to generate initializer */
static ? D_808CD5C0;                                /* unable to generate initializer */

typedef struct EnVm {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x3C];                 /* maybe part of unk188[11]? */
    /* 0x01CA */ Vec3s unk1CA;                      /* inferred */
    /* 0x01D0 */ char pad1D0[0x3C];                 /* maybe part of unk1CA[11]? */
    /* 0x020C */ void (*actionFunc)(EnVm *, GlobalContext *);
    /* 0x0210 */ u8 unk210;                         /* inferred */
    /* 0x0211 */ char pad211[0x1];                  /* maybe part of unk210[2]? */
    /* 0x0212 */ s16 unk212;                        /* inferred */
    /* 0x0214 */ s16 unk214;                        /* inferred */
    /* 0x0216 */ s16 unk216;                        /* inferred */
    /* 0x0218 */ s16 unk218;                        /* inferred */
    /* 0x021A */ char pad21A[0x2];                  /* maybe part of unk218[2]? */
    /* 0x021C */ f32 unk21C;                        /* inferred */
    /* 0x0220 */ f32 unk220;                        /* inferred */
    /* 0x0224 */ f32 unk224;                        /* inferred */
    /* 0x0228 */ char pad228[0xC];                  /* maybe part of unk224[4]? */
    /* 0x0234 */ Vec3f unk234;                      /* inferred */
    /* 0x0240 */ ColliderJntSph unk240;             /* inferred */
    /* 0x0260 */ ColliderJntSphElement unk260;      /* inferred */
    /* 0x02A0 */ char pad2A0[0x40];                 /* maybe part of unk260[2]? */
    /* 0x02E0 */ ColliderTris unk2E0;               /* inferred */
    /* 0x0300 */ ColliderTrisElement unk300;        /* inferred */
} EnVm;                                             /* size 0x35C */

void EnVm_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnVm *this = (EnVm *) thisx;
    s32 temp_v0;
    void **temp_s0;
    s32 phi_v0;
    void **phi_s0;

    Actor_ProcessInitChain(&this->actor, &D_808CD5AC);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 35.0f);
    SkelAnime_Init(globalCtx, &this->unk144, &D_06003F60, &D_06000068, &this->unk188, &this->unk1CA, 0xB);
    Collider_InitAndSetTris(globalCtx, &this->unk2E0, &this->actor, &D_808CD554, &this->unk300);
    Collider_InitAndSetJntSph(globalCtx, &this->unk240, &this->actor, &D_808CD508, &this->unk260);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_808CD564, &D_808CD584);
    temp_v0 = ((s32) this->actor.params >> 8) & 0xFF;
    phi_v0 = temp_v0;
    phi_s0 = &D_808CD58C;
    if ((temp_v0 == 0xFF) || (temp_v0 == 0)) {
        phi_v0 = 5;
    }
    this->actor.params &= 0xFF;
    this->actor.bgCheckFlags |= 0x400;
    this->unk21C = (f32) phi_v0 * 40.0f;
    if (D_808CD5B8 == 0) {
        do {
            temp_s0 = phi_s0 + 4;
            temp_s0->unk-4 = Lib_SegmentedToVirtual(*phi_s0);
            phi_s0 = temp_s0;
        } while (temp_s0 != &D_808CD5AC);
        D_808CD5B8 = 1;
    }
    func_808CC420(this);
}

void EnVm_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnVm *this = (EnVm *) thisx;
    Collider_DestroyTris(globalCtx, &this->unk2E0);
    Collider_DestroyJntSph(globalCtx, &this->unk240);
}

void func_808CC420(EnVm *arg0) {
    f32 temp_f0;

    temp_f0 = (f32) SkelAnime_GetFrameCount(&D_06000068.common);
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06000068, 1.0f, temp_f0, temp_f0, (u8) 2, 0.0f);
    arg0->actionFunc = func_808CC490;
}

void func_808CC490(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    s16 sp22;
    f32 temp_f0;
    s16 temp_v1;
    s32 temp_v0;
    s32 phi_v0;
    s32 phi_a0;

    sp24 = arg1->actorCtx.actorList[2].first;
    Math_ApproachS(arg0 + 0x216, 0, 0xA, 0x5DC);
    arg0->unk218 = (s16) (arg0->unk218 - 0x1F4);
    func_800B9010(arg0, 0x3170U);
    if (arg0->xzDistToPlayer <= arg0->unk21C) {
        temp_f0 = arg0->yDistToPlayer;
        if ((temp_f0 <= 80.0f) && (temp_f0 >= -160.0f)) {
            temp_v1 = (arg0->yawTowardsPlayer - arg0->unk218) - arg0->shape.rot.y;
            sp22 = temp_v1;
            temp_v0 = Math_Vec3f_Pitch(&arg0->focus.pos, sp24 + 0x24);
            phi_a0 = (s32) (s16) temp_v0;
            if (temp_v0 >= 0x1B92) {
                phi_a0 = 0x1B91;
            }
            phi_v0 = (s32) temp_v1;
            if ((s32) temp_v1 < 0) {
                phi_v0 = -(s32) temp_v1;
            }
            if ((phi_v0 < 0x2711) && (phi_a0 >= 0xE38) && (Player_GetMask(arg1) != 0x10)) {
                func_808CC5C4(arg0);
            }
        }
    }
}

void func_808CC5C4(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimPlaybackRepeat(temp_a0, &D_06000068, 2.0f);
    arg0->unk214 = 0xA;
    arg0->unk20C = func_808CC610;
}

void func_808CC610(EnVm *arg0, void *arg1) {
    s32 sp3C;
    s16 sp3A;
    s16 sp38;
    s16 temp_v0_2;
    s32 temp_v0;
    s16 phi_v0;
    s16 phi_a1;

    sp3C = arg1->unk1CCC;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    temp_v0 = Math_Vec3f_Pitch(arg0 + 0x3C, sp3C + 0x24);
    phi_a1 = (s16) temp_v0;
    if (temp_v0 >= 0x1B92) {
        phi_a1 = 0x1B91;
    }
    temp_v0_2 = (s32) ((arg0->unk21C - arg0->actor.xzDistToPlayer) * 60.0f) + 0xFA0;
    phi_v0 = temp_v0_2;
    if ((s32) temp_v0_2 >= 0x1001) {
        phi_v0 = 0x1000;
    }
    sp3A = phi_v0;
    sp38 = phi_a1;
    Math_SmoothStepToS(arg0 + 0x216, phi_a1, 0xA, 0xFA0, (s16) 0);
    if (((s32) phi_a1 < 0xAAA) || ((s32) sp3A <= 0)) {
        func_808CC420(arg0, phi_a1, sp3A);
        return;
    }
    if (Math_ScaledStepToS(arg0 + 0x218, (s16) (arg0->actor.yawTowardsPlayer - arg0->actor.shape.rot.y), sp3A) != 0) {
        arg0->unk214 += -1;
        if (arg0->unk214 == 0) {
            EffectSsDeadDd_Spawn(arg1, arg0 + 0x228, &D_801D15B0, &D_801D15B0, &D_808CD5BC, &D_808CD5C0, 0x96, -0x19, 0x10, 0x14);
            func_808CC788(arg0);
        }
    }
}

void func_808CC788(Actor *arg0) {
    Audio_PlayActorSound2(arg0, 0x3973U);
    SkelAnime_ChangeAnim((SkelAnime *) (arg0 + 0x144), &D_06000068, 3.0f, 3.0f, 7.0f, (u8) 2, 0.0f);
    arg0->unk214 = 0x131;
    arg0->unk2F0 = (u8) (arg0->unk2F0 & 0xFFFD);
    arg0->unk20C = func_808CC820;
    arg0->unk220 = 0.06f;
}

void func_808CC820(EnVm *arg0, GlobalContext *arg1) {
    s32 sp34;
    s16 sp32;
    Vec3f *sp28;
    Vec3f *sp24;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    f32 temp_f2;
    s16 temp_v0_3;
    s32 temp_v0;
    u8 temp_v0_2;
    s16 phi_v1;

    sp34 = arg1->actorCtx.actorList[2].first;
    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x144) != 0) {
        arg0->unk144.animCurrentFrame = arg0->unk144.initialFrame;
    }
    temp_a0 = arg0 + 0x3C;
    sp28 = temp_a0;
    temp_a1 = sp34 + 0x24;
    sp24 = temp_a1;
    temp_v0 = Math_Vec3f_Pitch(temp_a0, temp_a1);
    phi_v1 = (s16) temp_v0;
    if (temp_v0 >= 0x1B92) {
        phi_v1 = 0x1B91;
    }
    temp_v0_2 = arg0->unk2E0.base.atFlags;
    if ((temp_v0_2 & 2) != 0) {
        arg0->unk2E0.base.atFlags = temp_v0_2 & 0xFFFD;
        arg0->unk214 = 0;
        if (arg0->unk220 > 0.01f) {
            arg0->unk220 = 0.01f;
        }
    }
    if (((s32) arg0->unk216 < 0xAAA) || (sp32 = phi_v1, (Player_GetMask(arg1) == 0x10)) || (temp_v0_3 = arg0->unk214, (temp_v0_3 == 0))) {
        arg0->unk214 = 0;
        if (Math_StepToF(arg0 + 0x220, 0.0f, 0.003f) != 0) {
            arg0->unk210 = 0;
            arg0->unk224 = 0.0f;
            func_808CC420(arg0);
            return;
        }
        // Duplicate return node #17. Try simplifying control flow for better match
        return;
    }
    arg0->unk214 = temp_v0_3 - 1;
    if ((s32) arg0->unk214 < 0x12D) {
        Math_ApproachS(arg0 + 0x218, (s16) (arg0->actor.yawTowardsPlayer - arg0->actor.shape.rot.y), 0xA, 0xDAC);
        Math_ApproachS(arg0 + 0x216, sp32, 0xA, 0xDAC);
        temp_f2 = Math_Vec3f_DistXYZ(sp28, sp24) + 40.0f;
        if (arg0->unk224 < temp_f2) {
            Math_StepToF(arg0 + 0x224, temp_f2, 40.0f);
        }
        Math_StepToF(arg0 + 0x220, 0.01f, 0.012f);
        CollisionCheck_SetAT(arg1, &arg1->colChkCtx, arg0 + 0x2E0);
        if (arg0->unk210 == 0) {
            arg0->unk210 = 1;
        }
    }
}

void func_808CCA10(Actor *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06000068, -1.0f, (f32) SkelAnime_GetFrameCount(&D_06000068.common), 0.0f, (u8) 2, 0.0f);
    arg0->unk214 = 0x64;
    arg0->unk210 = 0;
    arg0->unk224 = 0.0f;
    arg0->unk220 = 0.0f;
    Audio_PlayActorSound2(arg0, 0x389EU);
    arg0->unk20C = func_808CCAA4;
}

void func_808CCAA4(void *arg0, ? arg1) {
    s16 temp_v0;

    Math_ApproachS(arg0 + 0x216, 0, 0xA, 0x5DC);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    temp_v0 = arg0->unk214;
    if (temp_v0 == 0) {
        func_808CCB08(arg0);
        return;
    }
    arg0->unk214 = (s16) (temp_v0 - 1);
}

void func_808CCB08(void *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06000068);
    arg0->unk214 = -1;
    arg0->unk20C = func_808CCB50;
}

void func_808CCB50(EnVm *arg0, ? arg1) {
    s16 temp_v0;

    Math_ApproachS(arg0 + 0x216, 0, 0xA, 0x5DC);
    temp_v0 = arg0->unk214;
    if ((s32) temp_v0 > 0) {
        arg0->unk214 = temp_v0 - 1;
        return;
    }
    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x144) != 0) {
        if (arg0->unk214 == -1) {
            arg0->unk214 = 0xA;
            arg0->unk144.animCurrentFrame = 0.0f;
            arg0->unk144.animPlaybackSpeed = 2.0f;
            return;
        }
        func_808CC420(arg0);
        // Duplicate return node #6. Try simplifying control flow for better match
    }
}

void func_808CCBE4(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f8;

    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06000068, -1.0f, (f32) SkelAnime_GetFrameCount(&D_06000068.common), 0.0f, (u8) 2, 0.0f);
    Enemy_StartFinishingBlow(arg1, arg0);
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x21);
    temp_f0 = arg0->focus.pos.y;
    arg0->unk214 = 0x21;
    arg0->unk220 = 0.0f;
    arg0->unk224 = 0.0f;
    temp_f16 = (arg0->world.pos.y - temp_f0) * 71.428566f;
    arg0->world.pos.y = temp_f0;
    arg0->velocity.y = 8.0f;
    arg0->gravity = -0.5f;
    arg0->shape.yOffset = temp_f16;
    temp_f8 = Rand_ZeroOne() + 1.0f;
    arg0->unk210 = 0;
    arg0->speedXZ = temp_f8;
    arg0->flags |= 0x10;
    arg0->unk20C = func_808CCCF0;
}

void func_808CCCF0(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_v0_2;
    s16 temp_v0;

    arg0->unk216 = (s16) (arg0->unk216 + 0x5DC);
    arg0->unk218 = (s16) (arg0->unk218 + 0x9C4);
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    Actor_UpdateBgCheckInfo(arg1, arg0, 30.0f, 20.0f, 40.0f, 7U);
    arg0->unk214 = (s16) (arg0->unk214 - 1);
    temp_v0 = arg0->unk214;
    if (temp_v0 == 1) {
        temp_v0_2 = Actor_Spawn(&arg1->actorCtx, arg1, 9, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0x6FF, (s16) 0);
        if (temp_v0_2 != 0) {
            temp_v0_2->unk1F0 = 0;
            return;
        }
        // Duplicate return node #5. Try simplifying control flow for better match
        return;
    }
    if (temp_v0 == 0) {
        Item_DropCollectibleRandom(arg1, arg0, &arg0->world.pos, 0xB0);
        Actor_MarkForDeath(arg0);
    }
}

void func_808CCDE4(Actor *arg0, GlobalContext *arg1) {
    s32 sp1C;
    Actor *temp_a0;
    ColliderJntSph *temp_a1;
    s16 temp_v0;
    s32 temp_a2;
    s32 temp_v1;
    u8 temp_t0;
    void *phi_v0;
    s32 phi_a2;
    s32 phi_a2_2;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;

    temp_t0 = arg0->unk251;
    phi_a2 = 0;
    phi_v1_3 = 0;
    if ((temp_t0 & 2) != 0) {
        arg0->unk251 = (u8) (temp_t0 & 0xFFFD);
        phi_v0 = arg0->unk25C;
loop_2:
        phi_v0 += 0x40;
        phi_a2_2 = phi_a2;
        phi_v1 = phi_v1_3;
        if ((phi_v0->unk16 & 2) == 0) {
            temp_a2 = phi_a2 + 1;
            temp_v1 = phi_v1_3 + 0x40;
            phi_a2 = temp_a2;
            phi_a2_2 = temp_a2;
            phi_v1 = temp_v1;
            phi_v1_3 = temp_v1;
            if (temp_a2 != 2) {
                goto loop_2;
            }
        }
        temp_a1 = arg0 + 0x240;
        if (phi_a2_2 != 2) {
            temp_a0 = arg0;
            sp1C = phi_v1;
            arg0 = arg0;
            func_800BE5CC(temp_a0, temp_a1, phi_a2_2);
            if (arg0->colChkInfo.damageEffect == 0) {
                func_808CCBE4(arg0, arg1);
                return;
            }
            if ((phi_v1 == 0) && (func_808CCAA4 != arg0->unk20C)) {
                temp_v0 = (arg0->world.rot.y - arg0->shape.rot.y) - arg0->unk218;
                phi_v1_2 = (s32) temp_v0;
                if ((s32) temp_v0 < 0) {
                    phi_v1_2 = -(s32) temp_v0;
                }
                if (phi_v1_2 >= 0x6001) {
                    func_808CCA10(arg0);
                }
            }
            // Duplicate return node #13. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #13. Try simplifying control flow for better match
    }
}

void EnVm_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnVm *this = (EnVm *) thisx;
    Vec3f *sp34;
    ColliderJntSph *sp30;
    ColliderJntSph *temp_a2;
    CollisionCheckContext *temp_a1_2;
    Vec3f *temp_a1;

    func_808CCDE4(&this->actor, globalCtx);
    temp_a1 = &this->unk234;
    if (this->unk210 == 2) {
        sp34 = temp_a1;
        func_800B31BC(globalCtx, temp_a1, 0x14, -1, 0x9B, 0xA);
        if ((globalCtx->gameplayFrames & 1) != 0) {
            func_800BBFB0(globalCtx, temp_a1, 6.0f, 1, (s16) 0x78, (s16) 0x14, (u8) 1);
        }
        Audio_PlayActorSound2(&this->actor, 0x3172U);
    }
    if (this->unk224 > 0.0f) {
        func_800B9010(&this->actor, 0x3171U);
    }
    this->actionFunc(this, globalCtx);
    this->unk212 += 0xC;
    temp_a1_2 = &globalCtx->colChkCtx;
    temp_a2 = &this->unk240;
    sp30 = temp_a2;
    sp34 = (Vec3f *) temp_a1_2;
    CollisionCheck_SetOC(globalCtx, temp_a1_2, &temp_a2->base);
    if (func_808CCCF0 != this->actionFunc) {
        CollisionCheck_SetAC(globalCtx, temp_a1_2, &temp_a2->base);
    }
}

s32 func_808CD020(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 2) {
        arg4->x += arg5->unk216;
        arg4->y += arg5->unk218;
    } else if ((arg1 == 0xA) && (func_808CCCF0 == arg5->unk20C)) {
        *arg2 = NULL;
    }
    return 0;
}

void func_808CD08C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    CollisionPoly *sp4C;
    u32 sp48;
    Vec3f *temp_s1;
    Vec3f *temp_s2;
    f32 temp_f0;

    Collider_UpdateSpheres(arg1, arg4 + 0x240);
    temp_s1 = arg4 + 0x3C;
    if (arg1 == 2) {
        sp4C = NULL;
        SysMatrix_GetStateTranslation(temp_s1);
        SysMatrix_GetStateTranslationAndScaledZ(1600.0f, arg4 + 0x228);
        temp_s2 = arg4 + 0x234;
        SysMatrix_GetStateTranslationAndScaledZ(arg4->unk224 * 71.428566f, temp_s2);
        if (func_800C55C4(arg0 + 0x830, temp_s1, temp_s2, &sp5C, &sp4C, 1U, 1U, 0U, 1U, &sp48) != 0) {
            temp_f0 = Math_Vec3f_DistXYZ(temp_s1, &sp5C);
            arg4->unk210 = 2U;
            arg4->unk224 = (f32) (temp_f0 - 5.0f);
            Math_Vec3f_Copy(temp_s2, &sp5C);
        } else if (arg4->unk210 != 0) {
            arg4->unk210 = 1U;
        }
        sp50 = (Math_CosS((s16) (arg4->shape.rot.y + arg4->unk218)) * 5.0f) + arg4->unk234;
        sp54 = arg4->unk238;
        sp58 = arg4->unk23C - (Math_SinS((s16) (arg4->shape.rot.y + arg4->unk218)) * 5.0f);
        Collider_SetTrisVertices(arg4 + 0x2E0, 0, temp_s1, temp_s2, (Vec3f *) &sp50);
    }
}

void EnVm_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnVm *this = (EnVm *) thisx;
    GraphicsContext *sp28;
    Gfx *temp_s0;
    Gfx *temp_s0_2;
    Gfx *temp_s0_3;
    GraphicsContext *temp_v0;
    f32 temp_f12;

    temp_v0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_v0->polyOpa.p;
    temp_s0->words.w0 = 0xDE000000;
    temp_s0->words.w1 = (u32) (sSetupDL + 0x4B0);
    temp_v0->polyOpa.p = temp_s0 + 8;
    sp28 = temp_v0;
    SkelAnime_Draw(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, func_808CD020, func_808CD08C, &this->actor);
    if (this->unk210 == 2) {
        temp_s0_2 = sp28->polyXlu.p;
        temp_s0_2->words.w1 = (u32) (sSetupDL + 0xB40);
        temp_s0_2->words.w0 = 0xDE000000;
        temp_s0_2->unkC = 0xC0;
        temp_s0_2->unk8 = 0xE3001801;
        SysMatrix_InsertTranslation(this->unk234.x, this->unk234.y + 10.0f, this->unk234.z, 0);
        Matrix_Scale(0.8f, 0.8f, 0.8f, 1);
        temp_s0_2->unk10 = 0xDA380003;
        temp_s0_2->unk14 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_s0_2->unk1C = -0x58;
        temp_s0_2->unk18 = 0xFA000000;
        temp_s0_2->unk24 = 0xFF00;
        temp_s0_2->unk20 = 0xFB000000;
        temp_s0_2->unk28 = 0xDB060020;
        temp_s0_2->unk2C = (void *) (&D_808CD58C)[globalCtx->gameplayFrames & 7];
        temp_s0_2->unk30 = 0xDE000000;
        temp_s0_2->unk34 = &D_04044300;
        sp28->polyXlu.p = temp_s0_2 + 0x38;
    }
    if (this->unk224 > 0.0f) {
        temp_s0_3 = sp28->polyOpa.p;
        temp_s0_3->words.w0 = 0xDB060020;
        temp_s0_3->words.w1 = func_8012CB28(globalCtx->state.gfxCtx, 0U, (u32) this->unk212);
        SysMatrix_InsertTranslation(this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z, 0);
        SysMatrix_InsertRotation(this->unk216, (s16) (this->unk218 + this->actor.shape.rot.y), 0, 1);
        temp_f12 = this->unk220;
        Matrix_Scale(temp_f12, temp_f12, this->unk224 * 0.0015f, 1);
        temp_s0_3->unk8 = 0xDA380003;
        temp_s0_3->unkC = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_s0_3->unk10 = 0xDE000000;
        temp_s0_3->unk14 = &D_06002728;
        sp28->polyOpa.p = temp_s0_3 + 0x18;
    }
}

