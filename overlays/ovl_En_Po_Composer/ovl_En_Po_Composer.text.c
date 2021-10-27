typedef struct EnPoComposer {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ ColliderJntSph unk_190;             /* inferred */
    /* 0x1B0 */ ColliderJntSphElement unk_1B0;      /* inferred */
    /* 0x1F0 */ SkelAnime unk_1F0;                  /* inferred */
    /* 0x234 */ void (*actionFunc)(EnPoComposer *, GlobalContext *);
    /* 0x238 */ MtxF unk_238;                       /* inferred */
    /* 0x278 */ LightNode *unk_278;                 /* inferred */
    /* 0x27C */ LightInfo unk_27C;                  /* inferred */
    /* 0x28A */ char pad_28A[0x6];
    /* 0x290 */ s32 unk_290;                        /* inferred */
    /* 0x294 */ Vec3s unk_294;                      /* inferred */
    /* 0x29A */ char pad_29A[0x42];                 /* maybe part of unk_294[12]? */
    /* 0x2DC */ Vec3s unk_2DC;                      /* inferred */
    /* 0x2E2 */ char pad_2E2[0x4A];                 /* maybe part of unk_2DC[13]? */
    /* 0x32C */ s16 unk_32C;                        /* inferred */
    /* 0x32E */ s16 unk_32E;                        /* inferred */
    /* 0x330 */ s16 unk_330;                        /* inferred */
    /* 0x332 */ char pad_332[0x2];
    /* 0x334 */ s16 unk_334;                        /* inferred */
    /* 0x336 */ ? unk_336;                          /* inferred */
    /* 0x336 */ char pad_336[0x1];
    /* 0x337 */ u8 unk_337;                         /* inferred */
    /* 0x338 */ u8 unk_338;                         /* inferred */
    /* 0x339 */ u8 unk_339;                         /* inferred */
    /* 0x33A */ ? unk_33A;                          /* inferred */
    /* 0x33A */ char pad_33A[0x1];
    /* 0x33B */ u8 unk_33B;                         /* inferred */
    /* 0x33C */ u8 unk_33C;                         /* inferred */
    /* 0x33D */ u8 unk_33D;                         /* inferred */
    /* 0x33E */ char pad_33E[0x2];                  /* maybe part of unk_33D[3]? */
} EnPoComposer;                                     /* size = 0x340 */

struct _mips2c_stack_EnPoComposer_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnPoComposer_Draw {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ Gfx *sp5C;                           /* inferred */
    /* 0x60 */ Gfx *sp60;                           /* inferred */
    /* 0x64 */ Gfx *sp64;                           /* inferred */
    /* 0x68 */ char pad_68[0x4];
    /* 0x6C */ Gfx *sp6C;                           /* inferred */
    /* 0x70 */ Gfx *sp70;                           /* inferred */
    /* 0x74 */ Gfx *sp74;                           /* inferred */
    /* 0x78 */ char pad_78[0x8];                    /* maybe part of sp74[3]? */
    /* 0x80 */ s16 sp80;                            /* inferred */
    /* 0x82 */ s16 sp82;                            /* inferred */
    /* 0x84 */ s16 sp84;                            /* inferred */
    /* 0x86 */ char pad_86[0x2];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ ? *sp94;                             /* inferred */
    /* 0x98 */ ? *sp98;                             /* inferred */
    /* 0x9C */ Gfx *sp9C;                           /* inferred */
    /* 0xA0 */ char pad_A0[0x8];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_EnPoComposer_Init {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnPoComposer_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BC5250 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC5294 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC52D4 {};              /* size 0x0 */

struct _mips2c_stack_func_80BC52F0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BC538C {};              /* size 0x0 */

struct _mips2c_stack_func_80BC53A0 {};              /* size 0x0 */

struct _mips2c_stack_func_80BC53B0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC5404 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Actor *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BC552C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC5570 {};              /* size 0x0 */

struct _mips2c_stack_func_80BC5580 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BC55E0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC562C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC5670 {};              /* size 0x0 */

struct _mips2c_stack_func_80BC5680 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC56D0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ SkelAnime *sp1C;                     /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BC5738 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC5780 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ SkelAnime *sp1C;                     /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BC57E8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC5830 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ SkelAnime *sp1C;                     /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BC5898 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC58E0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BC59BC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC59EC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ u32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x2];
    /* 0x26 */ u16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BC5CC8 {};              /* size 0x0 */

struct _mips2c_stack_func_80BC5D34 {};              /* size 0x0 */

struct _mips2c_stack_func_80BC5DEC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC5FE8 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ CollisionCheckContext *sp18;         /* inferred */
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BC60BC {};              /* size 0x0 */

struct _mips2c_stack_func_80BC617C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? func_800B8D10(GlobalContext *, EnPoComposer *, f32, ?, f32, s32, s32); /* extern */
? func_801A1FB4(?, Vec3f *, ?, ?);                  /* extern */
void func_80BC5250(EnPoComposer *arg0);             /* static */
void func_80BC52D4(EnPoComposer *arg0, s32);        /* static */
void func_80BC538C(EnPoComposer *arg0, u16);        /* static */
void func_80BC53B0(Actor *arg0, u16);               /* static */
void func_80BC552C(Actor *arg0, u16);               /* static */
void func_80BC5580(Actor *arg0, u16);               /* static */
void func_80BC562C(Actor *arg0, u16);               /* static */
void func_80BC5680(Actor *arg0, u16);               /* static */
void func_80BC5738(Actor *arg0, u16);               /* static */
void func_80BC57E8(Actor *arg0, u16);               /* static */
void func_80BC5898(Actor *arg0, u16);               /* static */
void func_80BC59BC(Actor *arg0, u16);               /* static */
s32 func_80BC59EC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BC5CC8(Actor *arg0);                    /* static */
void func_80BC5D34(EnPoComposer *arg0);             /* static */
void func_80BC5DEC(EnPoComposer *arg0);             /* static */
void func_80BC5FE8(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BC60BC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, void **arg6); /* static */
void func_80BC617C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **gfx); /* static */
extern AnimationHeader D_0600188C;
extern ? D_06006E08;
extern ? D_06006EA8;
extern ? D_06006F38;
extern Gfx D_06006FD8;
extern FlexSkeletonHeader D_06009930;
static ColliderCylinderInit D_80BC6780 = {
    {3, 0, 9, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x14, 0x28, 0x14, {0, 0, 0}},
};
static ColliderJntSphElementInit D_80BC67AC = {{0, {0xF7CFFFFF, 0, 8}, {0, 0, 0}, 1, 0, 1}, {9, {{0, 0xFA24, 0}, 0xA}, 0x64}};
static ColliderJntSphInit D_80BC67D0 = {{3, 0x11, 9, 0x39, 0x10, 0}, 1, &D_80BC67AC};
static CollisionCheckInfoInit D_80BC67E0 = {4, 0x19, 0x32, 0x28};
static DamageTable D_80BC67E8 = {
    {
        0,
        2,
        1,
        2,
        0x11,
        2,
        2,
        0x12,
        1,
        2,
        4,
        2,
        2,
        2,
        2,
        2,
        2,
        0,
        0,
        0,
        0,
        0,
        1,
        4,
        2,
        2,
        8,
        4,
        0,
        0,
        4,
        0,
    },
};
static ActorAnimationEntry D_80BC6808[13] = {
    {(AnimationHeader *)0x6003DB0, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6003954, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x600188C, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6000570, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6001F44, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x60023E8, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6002AE0, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6000A58, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6001420, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6003024, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x600334C, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x60015B8, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x600020C, 1.0f, 0.0f, 0.0f, 0, 0.0f},
};
static s32 D_80BC6940 = 0xFFFFD200;
static s32 D_80BC6944 = 0xFF;
static ? D_80BC6948;                                /* unable to generate initializer */
static ? D_80BC694C;                                /* unable to generate initializer */
static ? D_80BC6950;                                /* unable to generate initializer */
static ? D_80BC6954;                                /* unable to generate initializer */
static InitChainEntry D_80BC6958;                   /* unable to generate initializer */
static s32 D_80BC695C = 0;

void EnPoComposer_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *temp_s1_2;
    ColliderJntSph *temp_s1;
    LightInfo *temp_s1_3;
    s16 temp_v0;
    s32 temp_s1_4;
    s16 phi_s0;
    s32 phi_s1;
    EnPoComposer *this = (EnPoComposer *) thisx;

    Actor_ProcessInitChain((Actor *) this, &D_80BC6958);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 30.0f);
    SkelAnime_InitSV(globalCtx, &this->unk_1F0, &D_06009930, &D_0600188C, &this->unk_294, &this->unk_2DC, 0xC);
    temp_s1 = &this->unk_190;
    Collider_InitJntSph(globalCtx, temp_s1);
    Collider_SetJntSph(globalCtx, temp_s1, (Actor *) this, &D_80BC67D0, &this->unk_1B0);
    temp_s1_2 = &this->unk_144;
    Collider_InitCylinder(globalCtx, temp_s1_2);
    Collider_SetCylinder(globalCtx, temp_s1_2, (Actor *) this, &D_80BC6780);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80BC67E8, &D_80BC67E0);
    temp_s1_3 = &this->unk_27C;
    this->unk_278 = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, temp_s1_3);
    Lights_PointGlowSetInfo(temp_s1_3, (s16) (s32) this->actor.home.pos.x, (s16) (s32) this->actor.home.pos.y, (s16) (s32) this->actor.home.pos.z, (u8) 0xFF, (u8) 0xFF, (u8) 0xFF, (s16) 0);
    this->actor.flags &= -2;
    this->unk_336 = (unaligned s32) D_80BC6940;
    temp_v0 = this->actor.params;
    this->unk_33A = (unaligned s32) D_80BC6944;
    this->unk_334 = 0x63;
    if ((temp_v0 & 0x8000) != 0) {
        this->unk_290 = 0;
        this->unk_330 = 1;
        func_80BC538C(this);
        return;
    }
    if ((temp_v0 & 0x4000) != 0) {
        if (gSaveContext.entranceIndex != 0x20A0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->unk_290 = 0;
        this->unk_330 = 1;
        func_80BC538C(this);
        return;
    }
    phi_s0 = (s16) this->actor.cutscene;
    phi_s1 = 0;
    if ((gSaveContext.weekEventReg[14] & 4) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
loop_9:
    if (phi_s0 == -1) {

    } else {
        (this + (phi_s1 * 2))->unk_324 = phi_s0;
        temp_s1_4 = phi_s1 + 1;
        phi_s0 = ActorCutscene_GetAdditionalCutscene(phi_s0);
        phi_s1 = temp_s1_4;
        if (temp_s1_4 == 4) {

        } else {
            goto loop_9;
        }
    }
    if ((gSaveContext.weekEventReg[14] & 2) != 0) {
        this->unk_290 = 1;
    } else {
        this->unk_290 = 0;
    }
    this->unk_330 = 0;
    func_80BC5250(this);
}

void EnPoComposer_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    GlobalContext *temp_a0;
    LightContext *temp_a1;
    EnPoComposer *this = (EnPoComposer *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->lightCtx;
    globalCtx = globalCtx;
    LightContext_RemoveLight(temp_a0, temp_a1, this->unk_278);
    Collider_DestroyJntSph(globalCtx, &this->unk_190);
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
}

void func_80BC5250(EnPoComposer *arg0) {
    func_800BDC5C(arg0 + 0x1F0, (ActorAnimationEntry []) D_80BC6808, 0);
    arg0->actionFunc = func_80BC5294;
}

void func_80BC5294(EnPoComposer *this, GlobalContext *globalCtx) {
    if (this->actor.xzDistToPlayer < 200.0f) {
        func_80BC52D4();
    }
}

void func_80BC52D4(EnPoComposer *arg0) {
    arg0->unk_330 = 1;
    arg0->actionFunc = func_80BC52F0;
}

void func_80BC52F0(EnPoComposer *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCanPlayNext((this + (this->unk_290 * 2))->unk_324) != 0) {
        ActorCutscene_Start((this + (this->unk_290 * 2))->unk_324, (Actor *) this);
        func_80BC538C(this);
        return;
    }
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
    }
    ActorCutscene_SetIntentToPlay((this + (this->unk_290 * 2))->unk_324);
}

void func_80BC538C(EnPoComposer *arg0) {
    arg0->actionFunc = func_80BC53A0;
}

void func_80BC53A0(EnPoComposer *this, GlobalContext *globalCtx) {

}

void func_80BC53B0(Actor *arg0) {
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk_32C = 0;
    temp_a3->flags |= 1;
    arg0 = temp_a3;
    func_800BDC5C(temp_a3 + 0x1F0, (ActorAnimationEntry []) D_80BC6808, 8);
    arg0[1].projectedPos.y = func_80BC5404;
}

void func_80BC5404(EnPoComposer *this, GlobalContext *globalCtx) {
    Actor *sp34;
    s16 temp_v0;
    u16 temp_v1;

    temp_v0 = this->unk_32C;
    if (temp_v0 == 0x14) {
        sp34 = globalCtx->actorCtx.actorList[2].first;
        func_800B8D10(globalCtx, this, 0.0f, 0, 0.0f, 1, 4);
        this->unk_32C = 0;
    } else {
        this->unk_32C = temp_v0 + 1;
    }
    if ((globalCtx->actorCtx.actorList[2].first->unk_A70 * 0x10) < 0) {
        if (D_80BC695C == 0) {
            play_sound(0x4807U);
        }
        D_80BC695C = 1;
    } else {
        D_80BC695C = 0;
    }
    if (globalCtx->msgCtx.unk1202A == 3) {
        temp_v1 = globalCtx->msgCtx.unk1202E;
        if (temp_v1 != 7) {
            if (temp_v1 == 0xA) {
                this->unk_290 = 3;
                func_80BC52D4(this, 3);
            }
        } else {
            this->unk_290 = 2;
            func_80BC52D4(this, 3);
        }
    }
    func_801A1FB4(3, &this->actor.projectedPos, 0xF, 0x44FA0000);
}

void func_80BC552C(Actor *arg0) {
    func_800BDC5C(arg0 + 0x1F0, (ActorAnimationEntry []) D_80BC6808, 0);
    arg0[1].projectedPos.y = func_80BC5570;
}

void func_80BC5570(EnPoComposer *this, GlobalContext *globalCtx) {

}

void func_80BC5580(Actor *arg0) {
    arg0->unk_32C = 0;
    Audio_PlayActorSound2(arg0, 0x3873U);
    Audio_PlayActorSound2(arg0, 0x38ECU);
    func_800BDC5C((SkelAnime *) &arg0[1].colChkInfo.displacement.z, (ActorAnimationEntry []) D_80BC6808, 1);
    arg0[1].projectedPos.y = (bitwise f32) func_80BC55E0;
}

void func_80BC55E0(EnPoComposer *this, GlobalContext *globalCtx) {
    this->unk_32C += 1;
    this->actor.shape.rot.y += 0x1000;
    if (this->unk_32C == 0x20) {
        func_80BC552C();
    }
}

void func_80BC562C(Actor *arg0) {
    func_800BDC5C(arg0 + 0x1F0, (ActorAnimationEntry []) D_80BC6808, 2);
    arg0[1].projectedPos.y = func_80BC5670;
}

void func_80BC5670(EnPoComposer *this, GlobalContext *globalCtx) {

}

void func_80BC5680(Actor *arg0) {
    arg0->unk_32E = 0;
    Audio_PlayActorSound2(arg0, 0x3A61U);
    func_800BDC5C((SkelAnime *) &arg0[1].colChkInfo.displacement.z, (ActorAnimationEntry []) D_80BC6808, 3);
    arg0[1].projectedPos.y = (bitwise f32) func_80BC56D0;
}

void func_80BC56D0(EnPoComposer *this, GlobalContext *globalCtx) {
    SkelAnime *sp1C;
    SkelAnime *temp_a0;
    f32 temp_a1;

    temp_a0 = &this->unk_1F0;
    if (this->unk_32E == 0) {
        temp_a1 = this->unk_1F0.animFrameCount;
        this = this;
        sp1C = temp_a0;
        if (func_801378B8(temp_a0, temp_a1) != 0) {
            this->unk_32E += 1;
            func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80BC6808, 4);
        }
    }
}

void func_80BC5738(Actor *arg0) {
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk_32E = 0;
    arg0 = temp_a3;
    func_800BDC5C(temp_a3 + 0x1F0, (ActorAnimationEntry []) D_80BC6808, 5);
    arg0[1].projectedPos.y = func_80BC5780;
}

void func_80BC5780(EnPoComposer *this, GlobalContext *globalCtx) {
    SkelAnime *sp1C;
    SkelAnime *temp_a0;
    f32 temp_a1;

    temp_a0 = &this->unk_1F0;
    if (this->unk_32E == 0) {
        temp_a1 = this->unk_1F0.animFrameCount;
        this = this;
        sp1C = temp_a0;
        if (func_801378B8(temp_a0, temp_a1) != 0) {
            this->unk_32E += 1;
            func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80BC6808, 6);
        }
    }
}

void func_80BC57E8(Actor *arg0) {
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk_32E = 0;
    arg0 = temp_a3;
    func_800BDC5C(temp_a3 + 0x1F0, (ActorAnimationEntry []) D_80BC6808, 7);
    arg0[1].projectedPos.y = func_80BC5830;
}

void func_80BC5830(EnPoComposer *this, GlobalContext *globalCtx) {
    SkelAnime *sp1C;
    SkelAnime *temp_a0;
    f32 temp_a1;

    temp_a0 = &this->unk_1F0;
    if (this->unk_32E == 0) {
        temp_a1 = this->unk_1F0.animFrameCount;
        this = this;
        sp1C = temp_a0;
        if (func_801378B8(temp_a0, temp_a1) != 0) {
            this->unk_32E += 1;
            func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80BC6808, 8);
        }
    }
}

void func_80BC5898(Actor *arg0) {
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk_32E = 0;
    arg0 = temp_a3;
    func_800BDC5C(temp_a3 + 0x1F0, (ActorAnimationEntry []) D_80BC6808, 9);
    arg0[1].projectedPos.y = func_80BC58E0;
}

void func_80BC58E0(EnPoComposer *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    if (this->unk_32E == 0) {
        temp_a0 = &this->unk_1F0;
        sp24 = temp_a0;
        if (func_801378B8(temp_a0, this->unk_1F0.animFrameCount) != 0) {
            this->unk_32E += 1;
            Audio_PlayActorSound2((Actor *) this, 0x3A61U);
            func_800BDC5C(sp24, (ActorAnimationEntry []) D_80BC6808, 0xA);
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    if ((func_801378B8(&this->unk_1F0, 1.0f) != 0) && ((s32) this->unk_339 >= 0x21)) {
        if (this->unk_32E == 1) {
            Audio_PlayActorSound2((Actor *) this, 0x39B4U);
            this->unk_32E = 2;
            return;
        }
        Audio_PlayActorSound2((Actor *) this, 0x39B5U);
        this->unk_32E = 1;
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_80BC59BC(Actor *arg0) {
    gSaveContext.weekEventReg[14] |= 4;
    Actor_MarkForDeath(arg0);
}

s32 func_80BC59EC(Actor *arg0, GlobalContext *arg1) {
    u16 sp26;
    u32 sp20;
    f32 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_t9;
    u16 temp_a0;
    u16 temp_t3;
    u32 temp_v0;
    u8 temp_v0_4;
    void *temp_v1;
    u16 phi_a1;

    phi_a1 = 0x1E1U;
    if ((arg0->params & 0x8000) != 0) {
        phi_a1 = 0x1E2U;
    }
    if (arg0->unk_330 == 0) {
        goto block_44;
    }
    sp26 = phi_a1;
    if (func_800EE29C(arg1, (u32) phi_a1) != 0) {
        sp26 = phi_a1;
        temp_v0 = func_800EE200(arg1, (u32) phi_a1);
        temp_t9 = temp_v0 * 4;
        sp20 = temp_v0;
        temp_v1 = arg1 + temp_t9;
        temp_a0 = *temp_v1->unk_1F4C;
        if (arg0->unk_334 != temp_a0) {
            arg0->unk_334 = temp_a0;
            temp_t3 = *temp_v1->unk_1F4C;
            switch (temp_t3) {
            case 1:
                func_80BC552C(arg0, phi_a1);
block_20:
                break;
            case 2:
                func_80BC5580(arg0, phi_a1);
                goto block_20;
            case 3:
                func_80BC562C(arg0, phi_a1);
                goto block_20;
            case 4:
                func_80BC5680(arg0, phi_a1);
                goto block_20;
            case 5:
                func_80BC5738(arg0, phi_a1);
                goto block_20;
            case 6:
                func_80BC57E8(arg0, phi_a1);
                goto block_20;
            case 7:
                func_80BC5898(arg0, phi_a1);
                goto block_20;
            case 8:
                arg0->unk_332 = 1;
                break;
            case 9:
                arg0->unk_332 = 0;
                Audio_PlayActorSound2(arg0, 0x3874U);
                goto block_20;
            case 10:
                if (phi_a1 == 0x1E1) {
                    func_80BC59BC(arg0, phi_a1);
                } else {
                    Actor_MarkForDeath(arg0);
                }
                goto block_20;
            }
        }
        if (func_80BC55E0 != (bitwise s32) arg0[1].projectedPos.y) {
            func_800EDF24(arg0, arg1, sp20);
        } else {
            func_800EDE34(arg0, arg1, (s32) sp20);
        }
        func_80BC5CC8(arg0);
        if (((bitwise s32) arg0[2].home.pos.x == 3) && (arg1->csCtx.frames == 0xCC)) {
            play_sound(0x485CU);
        }
        if (arg0->unk_332 == 1) {
            func_800B9010(arg0, 0x3260U);
        }
        return 1;
    }
    temp_v0_2 = arg0[1].projectedPos.y;
    if ((func_80BC53A0 != (bitwise s32) temp_v0_2) && (func_80BC52F0 != (bitwise s32) temp_v0_2) && (func_80BC5404 != (bitwise s32) temp_v0_2) && (arg1->csCtx.state == 0)) {
        temp_v0_3 = arg0->params;
        if ((temp_v0_3 & 0x8000) != 0) {
            func_80BC538C((EnPoComposer *) arg0, phi_a1);
        } else if ((temp_v0_3 & 0x4000) != 0) {
            func_80BC538C((EnPoComposer *) arg0, phi_a1);
        } else {
            arg0->unk_330 = 0;
            if ((bitwise s32) arg0[2].home.pos.x < 3) {
                temp_v0_4 = gSaveContext.weekEventReg[14];
                if ((temp_v0_4 & 2) == 0) {
                    gSaveContext.weekEventReg[14] = temp_v0_4 | 2;
                }
                func_80BC53B0(arg0, phi_a1);
            } else {
                func_80BC538C((EnPoComposer *) arg0, phi_a1);
            }
        }
    }
    arg0->unk_334 = 0x63U;
block_44:
    return 0;
}

void func_80BC5CC8(Actor *arg0) {
    s16 temp_v0;
    u8 temp_v1;
    u8 temp_v1_2;

    temp_v0 = arg0->unk_332;
    if ((temp_v0 == 1) && (temp_v1 = arg0->unk_339, (temp_v1 != 0xFF))) {
        if ((s32) temp_v1 >= 0xF8) {
            arg0->unk_339 = 0xFFU;
            return;
        }
        arg0->unk_339 = (u8) (temp_v1 + 7);
        return;
    }
    if ((temp_v0 == 0) && (temp_v1_2 = arg0->unk_339, (temp_v1_2 != 0))) {
        if ((s32) temp_v1_2 < 8) {
            arg0->unk_339 = 0U;
            return;
        }
        arg0->unk_339 = (u8) (temp_v1_2 - 7);
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

void func_80BC5D34(EnPoComposer *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    u8 temp_v1;

    temp_v0 = arg0->unk_336 + 5;
    if ((s32) temp_v0 >= 0x100) {
        arg0->unk_336 = 0xFFU;
    } else {
        arg0->unk_336 = (u8) temp_v0;
    }
    temp_v0_2 = arg0->unk_337 + 5;
    if ((s32) temp_v0_2 >= 0x100) {
        arg0->unk_337 = 0xFF;
    } else {
        arg0->unk_337 = (u8) temp_v0_2;
    }
    temp_v1 = arg0->unk_338;
    temp_v0_3 = temp_v1 + 5;
    if ((s32) temp_v1 >= 0xD3) {
        temp_v0_4 = temp_v1 - 5;
        if ((s32) temp_v0_4 < 0xD2) {
            arg0->unk_338 = 0xD2;
            return;
        }
        arg0->unk_338 = (u8) temp_v0_4;
        return;
    }
    if ((s32) temp_v0_3 >= 0xD3) {
        arg0->unk_338 = 0xD2;
        return;
    }
    arg0->unk_338 = (u8) temp_v0_3;
}

void func_80BC5DEC(EnPoComposer *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f16;
    f32 temp_f6;
    u32 temp_v0;

    if ((func_80BC55E0 == arg0->actionFunc) && (temp_f0 = arg0->unk_1F0.animCurrentFrame, (temp_f0 < 12.0f))) {
        temp_v0 = (u32) ((temp_f0 * 16.66f) + 55.0f);
        arg0->unk_33C = (u8) temp_v0;
        arg0->unk_33B = (u8) temp_v0;
        arg0->unk_33A = (s8) temp_v0;
        arg0->unk_33D = (u8) (u32) (temp_f0 * 16.666666f);
    } else {
        temp_f0_2 = Rand_ZeroOne();
        temp_f16 = temp_f0_2 * 30.0f;
        temp_f6 = temp_f0_2 * 100.0f;
        arg0->unk_33D = 0xC8;
        arg0->unk_33A = (s8) ((s32) temp_f16 + 0xE1);
        arg0->unk_33B = (s32) temp_f6 + 0x9B;
        arg0->unk_33C = (s32) (temp_f0_2 * 160.0f) + 0x5F;
    }
    if (arg0->unk_339 == 0) {
        arg0->unk_33D = 0;
    }
}

void func_80BC5FE8(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    CollisionCheckContext *sp18;
    ColliderCylinder *temp_a2;
    CollisionCheckContext *temp_a1;

    temp_a2 = arg0 + 0x144;
    sp1C = temp_a2;
    Collider_UpdateCylinder(arg0, temp_a2);
    temp_a1 = arg1 + 0x18884;
    sp18 = temp_a1;
    CollisionCheck_SetOC(arg1, temp_a1, (Collider *) temp_a2);
    CollisionCheck_SetOC(arg1, temp_a1, (Collider *) &arg0[1].focus.rot.z);
}

void EnPoComposer_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnPoComposer *this = (EnPoComposer *) thisx;
    func_80BC5DEC(this);
    SkelAnime_FrameUpdateMatrix(&this->unk_1F0);
    Actor_SetHeight((Actor *) this, 42.0f);
    this->actionFunc(this, globalCtx);
    if (func_80BC59EC((Actor *) this, globalCtx) == 0) {
        func_80BC5FE8((Actor *) this, globalCtx);
    }
}

s32 func_80BC60BC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, void **arg6) {
    void *temp_a1;
    void *temp_a1_2;

    if ((arg5->unk_339 == 0) || (arg1 == 9)) {
        *arg2 = NULL;
    } else if (((arg5[4].z & 0x8000) != 0) && (arg1 == 0xA)) {
        *arg2 = &D_06006FD8;
    }
    if (arg1 == 0x13) {
        temp_a1 = *arg6;
        *arg6 = temp_a1 + 8;
        temp_a1->unk_4 = 0;
        temp_a1->unk_0 = 0xE7000000;
        temp_a1_2 = *arg6;
        *arg6 = temp_a1_2 + 8;
        temp_a1_2->unk_0 = 0xFB000000;
        temp_a1_2->unk_4 = (s32) ((arg5->unk_336 << 0x18) | (arg5->unk_337 << 0x10) | (arg5->unk_338 << 8) | arg5->unk_339);
    }
    return 0;
}

void func_80BC617C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Collider_UpdateSpheres(arg1, arg4 + 0x190);
    if (arg1 == 9) {
        SysMatrix_CopyCurrentState(arg4 + 0x238);
    }
}

void EnPoComposer_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp9C;
    ? *sp98;
    ? *sp94;
    f32 sp88;
    s16 sp84;
    s16 sp82;
    s16 sp80;
    Gfx *sp74;
    Gfx *sp70;
    Gfx *sp6C;
    Gfx *sp64;
    Gfx *sp60;
    Gfx *sp5C;
    ColliderJntSphElement *temp_t5;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s1;
    f32 temp_f6;
    s16 temp_t2;
    s16 temp_t5_2;
    s16 temp_t8;
    u8 temp_t3;
    u8 temp_v0;
    u8 temp_v0_10;
    ? *phi_t0;
    Gfx *phi_v1;
    f32 phi_f6;
    EnPoComposer *this = (EnPoComposer *) thisx;

    temp_s1 = globalCtx->state.gfxCtx;
    func_80BC5D34(this);
    if ((this->actor.params & 0x8000) != 0) {
        sp98 = &D_80BC694C;
        phi_t0 = &D_80BC6954;
    } else {
        sp98 = &D_80BC6948;
        phi_t0 = &D_80BC6950;
    }
    temp_v0 = this->unk_339;
    if ((temp_v0 == 0xFF) || (temp_v0 == 0)) {
        sp94 = phi_t0;
        func_8012C28C(globalCtx->state.gfxCtx);
        temp_v0_6 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_6[1];
        temp_v0_6->words.w0 = 0xDB060020;
        sp94 = phi_t0;
        sp74 = temp_v0_6;
        sp74->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, (s32) this->unk_336, (s32) this->unk_337, (s32) this->unk_338, (s32) this->unk_339);
        temp_v0_7 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_7[1];
        temp_v0_7->words.w0 = 0xDB060028;
        sp94 = phi_t0;
        sp70 = temp_v0_7;
        sp70->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, (s32) sp98->unk_0, (s32) sp98->unk_1, (s32) sp98->unk_2, (s32) this->unk_339);
        temp_v0_8 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_8[1];
        temp_v0_8->words.w0 = 0xDB06002C;
        sp6C = temp_v0_8;
        sp6C->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, (s32) phi_t0->unk_0, (s32) phi_t0->unk_1, (s32) phi_t0->unk_2, (s32) this->unk_339);
        temp_v0_9 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_9[1];
        temp_v0_9->words.w1 = (u32) D_801AEFA0;
        temp_v0_9->words.w0 = 0xDB060030;
        temp_s1->polyOpa.p = SkelAnime_DrawSV2(globalCtx, this->unk_1F0.skeleton, this->unk_1F0.limbDrawTbl, (s32) this->unk_1F0.dListCount, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *, Gfx **)) func_80BC60BC, func_80BC617C, (Actor *) this, temp_s1->polyOpa.p);
    } else {
        sp94 = phi_t0;
        func_8012C28C(globalCtx->state.gfxCtx);
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xDB060020;
        sp94 = phi_t0;
        sp64 = temp_v0_2;
        sp64->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, (s32) this->unk_336, (s32) this->unk_337, (s32) this->unk_338, (s32) this->unk_339);
        temp_v0_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xDB060028;
        sp94 = phi_t0;
        sp60 = temp_v0_3;
        sp60->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, (s32) sp98->unk_0, (s32) sp98->unk_1, (s32) sp98->unk_2, (s32) this->unk_339);
        temp_v0_4 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_4[1];
        temp_v0_4->words.w0 = 0xDB06002C;
        sp5C = temp_v0_4;
        sp5C->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, (s32) phi_t0->unk_0, (s32) phi_t0->unk_1, (s32) phi_t0->unk_2, (s32) this->unk_339);
        temp_v0_5 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_5[1];
        temp_v0_5->words.w1 = (u32) D_801AEF88;
        temp_v0_5->words.w0 = 0xDB060030;
        temp_s1->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk_1F0.skeleton, this->unk_1F0.limbDrawTbl, (s32) this->unk_1F0.dListCount, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *, Gfx **)) func_80BC60BC, func_80BC617C, (Actor *) this, temp_s1->polyXlu.p);
    }
    temp_v0_10 = this->unk_339;
    if (temp_v0_10 != 0) {
        if (temp_v0_10 == 0xFF) {
            Scene_SetRenderModeXlu(globalCtx, 0, 1U);
            phi_v1 = temp_s1->polyOpa.p;
        } else {
            Scene_SetRenderModeXlu(globalCtx, 1, 2U);
            phi_v1 = temp_s1->polyXlu.p;
        }
        phi_v1->words.w0 = 0xE7000000;
        phi_v1->words.w1 = 0;
        phi_v1[1].words.w0 = 0xFB000000;
        phi_v1[1].words.w1 = (this->unk_33A << 0x18) | (this->unk_33B << 0x10) | (this->unk_33C << 8) | this->unk_339;
        sp9C = phi_v1;
        SysMatrix_SetCurrentState(&this->unk_238);
        phi_v1[2].words.w0 = 0xDA380003;
        sp9C = phi_v1;
        phi_v1[2].words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        phi_v1[3].words.w0 = 0xDE000000;
        phi_v1[3].words.w1 = &D_06006E08;
        phi_v1[4].words.w1 = &D_06006F38;
        phi_v1[4].words.w0 = 0xDE000000;
        phi_v1[5].words.w0 = 0xE7000000;
        phi_v1[5].words.w1 = 0;
        phi_v1[6].words.w0 = 0xFB000000;
        phi_v1[6].words.w1 = (sp98->unk_0 << 0x18) | (sp98->unk_1 << 0x10) | (sp98->unk_2 << 8) | this->unk_339;
        phi_v1[7].words.w1 = &D_06006EA8;
        phi_v1[7].words.w0 = 0xDE000000;
        if (this->unk_339 == 0xFF) {
            temp_s1->polyOpa.p = phi_v1 + 0x40;
        } else {
            temp_s1->polyXlu.p = phi_v1 + 0x40;
        }
    }
    SysMatrix_SetCurrentState(&globalCtx->mf_187FC);
    SysMatrix_GetStateTranslationAndScaledZ(15.0f, (Vec3f *) &sp88);
    temp_t5 = this->unk_190.elements;
    sp80.unk_0 = (s32) (unaligned s32) temp_t5->unk_30;
    (&sp80)[2] = (u16) temp_t5->dim.worldSphere.center.z;
    temp_t5_2 = sp80 + (s32) sp88;
    temp_t8 = sp82 + (s32) sp8C;
    sp80 = temp_t5_2;
    sp82 = temp_t8;
    temp_t2 = sp84 + (s32) sp90;
    sp84 = temp_t2;
    temp_t3 = this->unk_33D;
    temp_f6 = (f32) temp_t3;
    phi_f6 = temp_f6;
    if ((s32) temp_t3 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    Lights_PointGlowSetInfo(&this->unk_27C, temp_t5_2, temp_t8, temp_t2, (u8) (s32) (phi_f6 * 0.78431374f));
}
