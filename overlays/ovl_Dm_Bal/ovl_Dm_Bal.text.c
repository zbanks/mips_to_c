void func_80C1EAC4(DmBal *arg0);                    /* static */
void func_80C1EAE8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C1EC60(DmBal *arg0, GlobalContext *arg1); /* static */
void func_80C1ED0C(DmBal *arg0);                    /* static */
void func_80C1ED64(DmBal *arg0, GlobalContext *arg1, f32 *arg2, f32 *arg3, f32 arg4); /* static */
s32 func_80C1EF80(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80C1F060(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *actor); /* static */
extern AnimationHeader D_060005FC;
extern ? D_06001804;
extern FlexSkeletonHeader D_0600A6D0;
static ActorAnimationEntry D_80C1F170 = {
    {(AnimationHeader *)0x60005FC, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x6000840, 1.5f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x6000840, 1.5f, 0.0f, 0.0f, 2, -4.0f},
    {(AnimationHeader *)0x600A7DC, 1.0f, 0.0f, 0.0f, 2, -4.0f},
    {(AnimationHeader *)0x600B1E8, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x600B604, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x600C498, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x600C8D8, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x600C8D8, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x600C498, 1.0f, 23.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x600D530, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x6000C78, 1.0f, 0.0f, 0.0f, 0, -2.0f},
    {(AnimationHeader *)0x600CB78, 1.0f, 0.0f, 0.0f, 0, -2.0f},
    {(AnimationHeader *)0x6001804, 1.0f, 0.0f, 0.0f, 0, -2.0f},
};
static u16 D_80C1F2C0 = 0x63;
static ? D_80C1F2C4;                                /* unable to generate initializer */
static ? D_80C1F2D0;                                /* unable to generate initializer */

typedef struct DmBal {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ void (*actionFunc)(DmBal *, GlobalContext *);
    /* 0x018C */ f32 unk18C;                        /* inferred */
    /* 0x0190 */ f32 unk190;                        /* inferred */
    /* 0x0194 */ f32 unk194;                        /* inferred */
    /* 0x0198 */ s32 unk198;                        /* inferred */
    /* 0x019C */ Vec3s unk19C;                      /* inferred */
    /* 0x01A2 */ char pad1A2[0xC0];                 /* maybe part of unk19C[33]? */
    /* 0x0262 */ Vec3s unk262;                      /* inferred */
    /* 0x0268 */ char pad268[0xCC];                 /* maybe part of unk262[35]? */
    /* 0x0334 */ s16 unk334;                        /* inferred */
    /* 0x0336 */ s16 unk336;                        /* inferred */
    /* 0x0338 */ s16 unk338;                        /* inferred */
    /* 0x033A */ s16 unk33A;                        /* inferred */
} DmBal;                                            /* size 0x33C */

void DmBal_Init(Actor *thisx, GlobalContext *globalCtx) {
    DmBal *this = (DmBal *) thisx;
    this->actor.targetMode = 1;
    this->actor.uncullZoneForward = 3000.0f;
    Actor_SetScale(&this->actor, 0.02f);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 36.0f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_0600A6D0, &D_060005FC, &this->unk19C, &this->unk262, 0x21);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4U);
    this->unk334 = 0x3C;
    this->unk198 = 0;
    this->unk336 = 0;
    func_80C1EAC4(this);
}

void DmBal_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmBal *this = (DmBal *) thisx;

}

void func_80C1EAC4(DmBal *arg0) {
    arg0->actionFunc = func_80C1EAD8;
}

void func_80C1EAD8(DmBal *this, GlobalContext *globalCtx) {

}

void func_80C1EAE8(Actor *arg0, GlobalContext *arg1) {
    u32 sp2C;
    SkelAnime *sp24;
    SkelAnime *temp_a0_2;
    s32 temp_t7;
    u16 temp_a0;
    u16 temp_v1;
    u32 temp_v0;

    if (func_800EE29C(arg1, 0x238U) != 0) {
        temp_v0 = func_800EE200(arg1, 0x238U);
        temp_t7 = temp_v0 * 4;
        sp2C = temp_v0;
        temp_v1 = D_80C1F2C0;
        temp_a0 = *(arg1 + temp_t7)->unk1F4C;
        if (temp_v1 != temp_a0) {
            D_80C1F2C0 = temp_a0;
            if (temp_a0 != 1) {
                if (temp_a0 != 2) {
                    if (temp_a0 != 3) {

                    } else {
                        func_800BDC5C(arg0 + 0x144, (ActorAnimationEntry []) &D_80C1F170, 0xD);
                    }
                } else {
                    arg0->unk336 = 1;
                    func_800BDC5C(arg0 + 0x144, (ActorAnimationEntry []) &D_80C1F170, 0xC);
                }
            } else {
                arg0->unk336 = 0;
                arg0->unk198 = 0;
                func_800BDC5C(arg0 + 0x144, (ActorAnimationEntry []) &D_80C1F170, 0);
            }
        } else {
            temp_a0_2 = arg0 + 0x144;
            if (temp_v1 == 3) {
                sp24 = temp_a0_2;
                if (func_801378B8(temp_a0_2, 0.0f) != 0) {
                    arg0->unk336 = 1;
                } else if (func_801378B8(temp_a0_2, 29.0f) != 0) {
                    arg0->unk336 = 0;
                    arg0->unk198 = 0;
                }
            }
        }
        func_800EDF24(arg0, arg1, sp2C);
        arg0->home.pos.x = arg0->world.pos.x;
        arg0->home.pos.y = arg0->world.pos.y;
        arg0->home.pos.z = arg0->world.pos.z;
        return;
    }
    arg0->unk336 = 0;
    arg0->unk198 = 0;
    D_80C1F2C0 = 0x63;
}

void func_80C1EC60(DmBal *arg0, GlobalContext *arg1) {
    f32 temp_f2;
    f32 temp_f2_2;

    arg0->unk338 += 0x320;
    arg0->unk33A += 0x3E8;
    temp_f2 = (Math_CosS(arg0->unk338) * 0.1f) + 1.0f;
    arg0->unk194 = temp_f2;
    arg0->unk190 = temp_f2;
    temp_f2_2 = (Math_SinS(arg0->unk338) * 0.1f) + 1.0f;
    arg0->unk18C = temp_f2_2 * temp_f2_2;
    arg0->actor.world.pos.y = (Math_SinS(arg0->unk338) * 25.0f) + arg0->actor.home.pos.y;
}

void func_80C1ED0C(DmBal *arg0) {
    s16 temp_v0;

    if (arg0->unk336 == 1) {
        arg0->unk198 = 1;
        return;
    }
    temp_v0 = arg0->unk334;
    if ((s32) temp_v0 >= 4) {
        arg0->unk334 = temp_v0 - 1;
        return;
    }
    if (temp_v0 != 0) {
        arg0->unk198 = 1;
        arg0->unk334 = temp_v0 - 1;
        return;
    }
    arg0->unk198 = 0;
    arg0->unk334 = 0x3C;
}

void func_80C1ED64(DmBal *arg0, GlobalContext *arg1, f32 *arg2, f32 *arg3, f32 arg4) {
    Actor *temp_v0;

    temp_v0 = Actor_Spawn(arg1 + 0x1CA0, arg1, 0x2A4, arg2->unk0, arg2->unk4, arg2->unk8, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
    if (temp_v0 != 0) {
        temp_v0->velocity.x = arg3->unk0;
        temp_v0->velocity.y = arg3->unk4;
        temp_v0->velocity.z = arg3->unk8;
        temp_v0->gravity = arg4;
    }
}

void DmBal_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmBal *this = (DmBal *) thisx;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp30;
    SkelAnime *sp28;
    SkelAnime *temp_a0;
    f32 temp_f10;

    temp_a0 = &this->unk144;
    sp28 = temp_a0;
    if ((func_801378B8(temp_a0, 29.0f) != 0) && (&D_06001804 == this->unk144.animCurrentSeg)) {
        sp3C.unk0 = this->actor.world.pos.x;
        sp3C.unk4 = (f32) this->actor.world.pos.y;
        sp3C.unk8 = (f32) this->actor.world.pos.z;
        sp30.unk0 = D_80C1F2C4.unk0;
        sp30.unk4 = (s32) D_80C1F2C4.unk4;
        sp30.unk8 = (s32) D_80C1F2C4.unk8;
        temp_f10 = sp3C + (7.0f * Math_SinS(this->actor.shape.rot.y));
        sp40 += 2.5f;
        sp3C = temp_f10;
        sp44 += 7.0f * Math_CosS(this->actor.shape.rot.y);
        sp30 = Math_SinS(this->actor.shape.rot.y) * 5.0f;
        sp38 = Math_CosS(this->actor.shape.rot.y) * 5.0f;
        func_80C1ED64(this, globalCtx, &sp3C, &sp30, -0.4f);
        func_80C1ED64(this, globalCtx, &sp3C, &sp30, -0.5f);
    }
    this->actionFunc(this, globalCtx);
    func_80C1EAE8(&this->actor, globalCtx);
    func_80C1EC60(this, globalCtx);
    func_80C1ED0C(this);
    SkelAnime_FrameUpdateMatrix(sp28);
}

s32 func_80C1EF80(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    s16 sp20;
    s16 sp1C;
    s16 temp_a2;
    s32 temp_f18;

    if (arg1 == 6) {
        sp1C = (s16) (s32) (Math_SinS(arg5->unk33A) * 3640.0f);
        temp_f18 = (s32) (Math_CosS(arg5->unk33A) * 3640.0f);
        temp_a2 = (s16) temp_f18;
        sp20 = (s16) temp_f18;
        SysMatrix_InsertRotation(sp1C, 0, temp_a2, 1);
        Matrix_Scale(arg5->unk18C, arg5->unk190, arg5->unk194, 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) sp20 * -1), 1);
        SysMatrix_InsertXRotation_s((s16) ((s32) sp1C * -1), 1);
    }
    return 0;
}

void func_80C1F060(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3) {

}

void DmBal_Draw(Actor *thisx, GlobalContext *globalCtx) {
    DmBal *this = (DmBal *) thisx;
    GraphicsContext *sp30;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    s32 temp_a0_2;

    temp_a0 = globalCtx->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v1 = sp30->polyOpa.p;
    sp30->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDB060020;
    temp_a0_2 = *(&D_80C1F2D0 + (this->unk198 * 4));
    temp_v1->words.w1 = (temp_a0_2 & 0xFFFFFF) + gSegments[(u32) (temp_a0_2 * 0x10) >> 0x1C] + 0x80000000;
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80C1EF80, func_80C1F060, &this->actor);
}

