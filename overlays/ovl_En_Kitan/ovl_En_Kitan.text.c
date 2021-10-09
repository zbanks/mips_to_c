void func_80C0923C(Actor *arg0, GlobalContext *arg1, s32 arg2); /* static */
s32 func_80C09390(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80C09418(Actor *arg0);                     /* static */
void func_80C094A8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C09518(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C095C8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C09648(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C09708(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C09990(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C09AA4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C09B50(EnKitan *, GlobalContext *);     /* static */
s32 func_80C09C74(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_80C09C90(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80C09CD0(Actor *this, GlobalContext *globalCtx); /* static */
extern AnimationHeader D_06000CE8;
extern AnimationHeader D_0600190C;
extern AnimationHeader D_06002770;
extern FlexSkeletonHeader D_06007FA8;
static ColliderCylinderInit D_80C09D50 = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x14, 0x28, 0, {0, 0, 0}},
};
static Color_RGBA8 D_80C09D7C = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80C09D80 = {0xFF, 0xFF, 0xC8, 0xFF};
static Vec3f D_80C09D84 = {0.0f, 0.0f, 0.0f};

typedef struct EnKitan {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x78];                 /* maybe part of unk188[21]? */
    /* 0x0206 */ Vec3s unk206;                      /* inferred */
    /* 0x020C */ char pad20C[0x78];                 /* maybe part of unk206[21]? */
    /* 0x0284 */ SkelAnime unk284;                  /* inferred */
    /* 0x02C8 */ char pad2C8[0xE];
    /* 0x02D6 */ s16 unk2D6;                        /* inferred */
    /* 0x02D8 */ void (*actionFunc)(EnKitan *, GlobalContext *);
} EnKitan;                                          /* size 0x2DC */

void EnKitan_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnKitan *this = (EnKitan *) thisx;
    SkelAnime *sp34;
    SkelAnime *temp_a1;
    SkelAnime *temp_a1_2;

    Actor_SetScale(&this->actor, 0.0f);
    this->actionFunc = func_80C09B50;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 12.0f);
    temp_a1 = &this->unk144;
    sp34 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06007FA8, &D_06002770, &this->unk188, &this->unk206, 0x15);
    SkelAnime_ChangeAnimDefaultRepeat(sp34, &D_06002770);
    temp_a1_2 = &this->unk284;
    sp34 = temp_a1_2;
    Collider_InitAndSetCylinder(globalCtx, (ColliderCylinder *) temp_a1_2, &this->actor, &D_80C09D50);
    this->actor.colChkInfo.mass = 0xFF;
    Collider_UpdateCylinder(&this->actor, (ColliderCylinder *) temp_a1_2);
    this->actor.velocity.y = -9.0f;
    this->actor.minVelocityY = -9.0f;
    this->actor.gravity = -1.0f;
    if ((Player_GetMask(globalCtx) != 5) || (Actor_GetCollectibleFlag(globalCtx, (s32) (this->actor.params & 0xFE00) >> 9) != 0)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->unk2D6 = 0x78;
    this->actor.flags &= -2;
}

void EnKitan_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnKitan *this = (EnKitan *) thisx;
    Collider_DestroyCylinder(globalCtx, (ColliderCylinder *) &this->unk284);
}

void func_80C0923C(Actor *arg0, GlobalContext *arg1, s32 arg2) {
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 *temp_s2;
    f32 *temp_s3;
    f32 temp_f2;
    s32 temp_s0;
    s32 phi_s0;

    sp70 = arg0->world.pos.x;
    sp74 = arg0->world.pos.y;
    sp78 = arg0->world.pos.z;
    phi_s0 = 0;
    if (arg2 > 0) {
        temp_s3 = &sp88;
        temp_s2 = &sp7C;
        do {
            sp7C = randPlusMinusPoint5Scaled(10.0f);
            sp80 = Rand_ZeroFloat(6.0f);
            temp_f2 = -sp7C * 0.05f;
            sp84 = randPlusMinusPoint5Scaled(10.0f);
            sp8C = 0.1f;
            sp88 = temp_f2;
            sp90 = temp_f2;
            func_800B0F18(arg1, (Vec3f *) &sp70, (Vec3f *) temp_s2, (Vec3f *) temp_s3, &D_80C09D7C, &D_80C09D80, (s16) 0x190, (s16) 0x14, (s16) 0x14);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != arg2);
    }
}

s32 func_80C09390(Actor *arg0, GlobalContext *arg1) {
    if (arg1->actorCtx.actorList[2].first->unkA6C & 0x800000) {
        goto block_6;
    }
    if ((Actor_IsLinkFacingActor(arg0, 0x3000, arg1) != 0) && (Actor_IsActorFacingLink(arg0, 0x3000) != 0) && (arg0->xzDistToPlayer < 120.0f)) {
        return 1;
    }
block_6:
    return 0;
}

s32 func_80C09418(Actor *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_f4;
    s32 temp_s0;
    s32 temp_v0;
    s32 phi_s0;

    phi_s0 = 0;
loop_1:
    temp_f4 = (s32) Rand_ZeroFloat(30.0f);
    temp_a0 = arg0->unk2D0;
    temp_s0 = phi_s0 + 1;
    temp_a1 = 1 << temp_f4;
    phi_s0 = temp_s0;
    if ((temp_a0 & temp_a1) != 0) {
        if (temp_s0 >= 0x3E9) {

        }
        goto loop_1;
    }
    temp_v0 = (temp_f4 * 2) + 0x4B6;
    arg0->unk2D0 = (s32) (temp_a0 | temp_a1);
    return temp_v0 & 0xFFFF;
}

void func_80C094A8(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v0 = arg0->unk2D6;
    if ((s32) temp_v0 > 0) {
        arg0->unk2D6 = (s16) (temp_v0 - 1);
        arg0->scale.x *= 0.7f;
        Actor_SetScale(arg0, arg0->scale.x);
        return;
    }
    Actor_MarkForDeath(arg0);
}

void func_80C09518(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp28;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    sp28 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk2D8 = func_80C09708;
        func_80151938(arg1, 0x4B5U);
        arg0->flags &= 0xFFFEFFFF;
        SkelAnime_ChangeAnimTransitionRepeat(sp28, &D_06000CE8, -5.0f);
        return;
    }
    func_800B8500(arg0, arg1, 1000.0f, 1000.0f, -1);
}

void func_80C095C8(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    if (func_800B867C(arg0, arg1) != 0) {
        arg0->flags |= 0x10000;
        arg0->unk2D8 = func_80C09518;
        func_800B8500(arg0, arg1, 1000.0f, 1000.0f, -1);
    }
}

void func_80C09648(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->parent = NULL;
        arg0->unk2D8 = func_80C095C8;
        gSaveContext.weekEventReg[79] |= 0x80;
        return;
    }
    if ((gSaveContext.weekEventReg[79] & 0x80) != 0) {
        func_800B8A1C(arg0, arg1, 4, 2000.0f, 1000.0f);
        return;
    }
    func_800B8A1C(arg0, arg1, 0xC, 2000.0f, 1000.0f);
}

void func_80C09708(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    u16 temp_v0_2;
    u8 temp_v0;

    temp_a0 = arg0 + 0x144;
    sp24 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06002770, -10.0f);
        if (arg1->msgCtx.unk11F04 != 0x4B4) {
            func_80151938(arg1, func_80C09418(arg0) & 0xFFFF);
        }
    }
    temp_v0 = func_80152498(&arg1->msgCtx);
    if (temp_v0 != 4) {
        if (temp_v0 != 5) {
            return;
        }
        if (func_80147624(arg1) != 0) {
            temp_v0_2 = arg1->msgCtx.unk11F04;
            switch (temp_v0_2) {
            case 1200:
            case 1201:
                func_80151938(arg1, (temp_v0_2 + 1) & 0xFFFF);
                return;
            case 1202:
                SkelAnime_ChangeAnimTransitionRepeat(sp24, &D_06002770, -5.0f);
                func_80151938(arg1, func_80C09418(arg0) & 0xFFFF);
                return;
            case 1204:
                func_801477B4(arg1);
                arg0->unk2D8 = func_80C09648;
                func_80C09648(arg0, arg1);
                return;
            case 1203:
                func_801A89A8(0x110000FF);
                // fallthrough
            case 1205:
                func_801477B4(arg1);
                arg0->unk2D8 = func_80C094A8;
                arg0->unk2D6 = 4;
                func_80C0923C(arg0, arg1, 0x1E);
                Audio_PlaySoundAtPosition(arg1, &arg0->world.pos, 0x1E, 0x3A87U);
                Actor_SetCollectibleFlag(arg1, (s32) (arg0->params & 0xFE00) >> 9);
                return;
            default:
                if ((temp_v0_2 & 1) == 0) {
                    func_80151938(arg1, (temp_v0_2 + 1) & 0xFFFF);
                }
                // Duplicate return node #23. Try simplifying control flow for better match
                return;
            }
        } else {
            // Duplicate return node #23. Try simplifying control flow for better match
        }
    } else if (func_80147624(arg1) != 0) {
        if (arg1->msgCtx.unk1206C == (arg1->msgCtx.choiceIndex + 1)) {
            play_sound(0x485AU);
            arg0->unk2D6 = (s16) (arg0->unk2D6 + 1);
            if ((s32) arg0->unk2D6 < 5) {
                arg1->msgCtx.unk11F10 = 0;
            } else {
                arg0->unk2D6 = 0;
                arg0->unk2D0 = 0;
                func_80151938(arg1, 0x4B4U);
            }
            SkelAnime_ChangeAnimTransitionStop(sp24, &D_0600190C, -5.0f);
            return;
        }
        play_sound(0x485BU);
        SkelAnime_ChangeAnimTransitionRepeat(sp24, &D_06000CE8, -5.0f);
        func_80151938(arg1, 0x4B3U);
        arg0->unk2D6 = 0;
        arg0->unk2D0 = 0;
    }
}

void func_80C09990(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk2D8 = func_80C09708;
        func_801518B0(arg1, 0x4B0U, arg0);
        arg0->unk2D6 = 0;
        SkelAnime_ChangeAnimTransitionRepeat(sp24, &D_06000CE8, -5.0f);
        func_801A3098(0x73U);
        return;
    }
    if (((s32) arg0->unk2D6 <= 0) || (Player_GetMask(arg1) != 5)) {
        arg0->unk2D8 = func_80C094A8;
        arg0->unk2D6 = 4;
        func_80C0923C(arg0, arg1, 0x1E);
        Audio_PlaySoundAtPosition(arg1, &arg0->world.pos, 0x1E, 0x3A87U);
        return;
    }
    if (func_80C09390(arg0, arg1) != 0) {
        func_800B8614(arg0, arg1, 130.0f);
        arg0->unk2D6 = (s16) (arg0->unk2D6 - 1);
    }
}

void func_80C09AA4(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0_2;
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v0 = arg0->unk2D6;
    temp_a0_2 = arg0;
    if ((s32) temp_v0 > 0) {
        arg0->unk2D6 = (s16) (temp_v0 - 1);
        arg0->scale.x = (arg0->scale.x * 0.3f) + 0.0105f;
        Actor_SetScale(arg0, arg0->scale.x);
        return;
    }
    arg0 = arg0;
    Actor_SetScale(temp_a0_2, 0.015f);
    arg0->unk2D8 = func_80C09990;
    arg0->flags |= 1;
    arg0->unk2D6 = 0x258;
}

void func_80C09B50(EnKitan *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk2D6;
    if ((s32) temp_v0 > 0) {
        arg0->unk2D6 = temp_v0 - 1;
        return;
    }
    func_80C0923C((Actor *)0x1E);
    Audio_PlayActorSound2(&arg0->actor, 0x3A86U);
    arg0->actor.shape.rot.y = arg0->actor.yawTowardsPlayer;
    arg0->actor.draw = func_80C09CD0;
    arg0->actionFunc = (void (*)(EnKitan *, GlobalContext *)) func_80C09AA4;
    arg0->unk2D6 = 0x14;
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
}

void EnKitan_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnKitan *this = (EnKitan *) thisx;
    if (this->actor.draw != 0) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk284);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 40.0f, 25.0f, 40.0f, 5U);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 2, 0x1000, (s16) 0x200);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    this->actionFunc(this, globalCtx);
}

s32 func_80C09C74(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    return 0;
}

void func_80C09C90(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 6) {
        SysMatrix_MultiplyVector3fByState(&D_80C09D84, arg4 + 0x3C);
    }
}

void func_80C09CD0(Actor *this, GlobalContext *globalCtx) {
    func_8012C5B0(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk148, this->unk164, (s32) this->unk146, func_80C09C74, func_80C09C90, this);
}

