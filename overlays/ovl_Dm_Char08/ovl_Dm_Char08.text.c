typedef struct DmChar08 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ SkelAnime unk15C;                   /* inferred */
    /* 0x1A0 */ void (*actionFunc)(DmChar08 *, GlobalContext *);
    /* 0x1A4 */ Actor *unk1A4;                      /* inferred */
    /* 0x1A8 */ Actor *unk1A8;                      /* inferred */
    /* 0x1AC */ f32 unk1AC;                         /* inferred */
    /* 0x1B0 */ f32 unk1B0;                         /* inferred */
    /* 0x1B4 */ f32 unk1B4;                         /* inferred */
    /* 0x1B8 */ f32 unk1B8;                         /* inferred */
    /* 0x1BC */ f32 unk1BC;                         /* inferred */
    /* 0x1C0 */ f32 unk1C0;                         /* inferred */
    /* 0x1C4 */ char pad1C4[0xC];                   /* maybe part of unk1C0[4]? */
    /* 0x1D0 */ f32 unk1D0;                         /* inferred */
    /* 0x1D4 */ f32 unk1D4;                         /* inferred */
    /* 0x1D8 */ f32 unk1D8;                         /* inferred */
    /* 0x1DC */ char pad1DC[0x8];                   /* maybe part of unk1D8[3]? */
    /* 0x1E4 */ f32 unk1E4;                         /* inferred */
    /* 0x1E8 */ char pad1E8[0x8];                   /* maybe part of unk1E4[3]? */
    /* 0x1F0 */ f32 unk1F0;                         /* inferred */
    /* 0x1F4 */ s16 unk1F4;                         /* inferred */
    /* 0x1F6 */ char pad1F6[0x4];                   /* maybe part of unk1F4[3]? */
    /* 0x1FA */ s16 unk1FA;                         /* inferred */
    /* 0x1FC */ s16 unk1FC;                         /* inferred */
    /* 0x1FE */ s8 unk1FE;                          /* inferred */
    /* 0x1FF */ u8 unk1FF;                          /* inferred */
    /* 0x200 */ s8 unk200;                          /* inferred */
    /* 0x201 */ u8 unk201;                          /* inferred */
    /* 0x202 */ u8 unk202;                          /* inferred */
    /* 0x203 */ s8 unk203;                          /* inferred */
    /* 0x204 */ char pad204[0x1];
    /* 0x205 */ u8 unk205;                          /* inferred */
    /* 0x206 */ s8 unk206;                          /* inferred */
    /* 0x207 */ s8 unk207;                          /* inferred */
    /* 0x208 */ s8 unk208;                          /* inferred */
    /* 0x209 */ u8 unk209;                          /* inferred */
    /* 0x20A */ char pad20A[0x2];                   /* maybe part of unk209[3]? */
} DmChar08;                                         /* size = 0x20C */

struct _mips2c_stack_DmChar08_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_DmChar08_Draw {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad38[0x10];
};                                                  /* size = 0x48 */

struct _mips2c_stack_DmChar08_Init {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ SkelAnime *sp3C;                     /* inferred */
    /* 0x40 */ ActorContext *sp40;                  /* inferred */
    /* 0x44 */ char pad44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_DmChar08_Update {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AAF050 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AAF15C {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AAF610 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ Actor *sp18;                         /* inferred */
    /* 0x1C */ Actor *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AAF79C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AAF884 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AAF8F4 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AAFA18 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s16 sp1C;                            /* inferred */
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AAFAC4 {};              /* size 0x0 */

struct _mips2c_stack_func_80AAFAE4 {};              /* size 0x0 */

struct _mips2c_stack_func_80AAFB04 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AAFB94 {};              /* size 0x0 */

struct _mips2c_stack_func_80AAFBA4 {
    /* 0x00 */ char pad0[0x58];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad64[0x4];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80AAFCCC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AAFE78 {};              /* size 0x0 */

struct _mips2c_stack_func_80AAFE88 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ char pad30[0xC];                     /* maybe part of sp2C[4]? */
    /* 0x3C */ u32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80AB01E8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB023C {};              /* size 0x0 */

struct _mips2c_stack_func_80AB032C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB096C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB0A10 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB0E3C {};              /* size 0x0 */

struct _mips2c_stack_func_80AB0E7C {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AB0F90 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

? func_800C6554(f32, GlobalContext *, GlobalContext *, void *, GlobalContext *); /* extern */
f32 func_800F5A8C(u16, u16, u16, GlobalContext *);  /* extern */
void func_80AAF050(DmChar08 *arg0);                 /* static */
void func_80AAF15C(SkelAnime *arg0, void *arg1, s32 arg2, DmChar08 *); /* static */
void func_80AAF610(DmChar08 *, GlobalContext *);    /* static */
void func_80AAF79C(DmChar08 *, GlobalContext *);    /* static */
void func_80AAF884(DmChar08 *, GlobalContext *);    /* static */
void func_80AAF8F4(DmChar08 *, GlobalContext *);    /* static */
void func_80AAFA18(DmChar08 *, GlobalContext *);    /* static */
void func_80AAFAC4(DmChar08 *, GlobalContext *);    /* static */
void func_80AAFAE4(DmChar08 *, GlobalContext *);    /* static */
void func_80AAFB04(DmChar08 *, GlobalContext *);    /* static */
void func_80AAFB94(DmChar08 *, GlobalContext *);    /* static */
void func_80AAFBA4(DmChar08 *arg0, GlobalContext *arg1); /* static */
void func_80AAFCCC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AAFE78(DmChar08 *, GlobalContext *);    /* static */
void func_80AAFE88(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB01E8(DmChar08 *arg0, GlobalContext *arg1); /* static */
void func_80AB023C(DmChar08 *arg0, GlobalContext *arg1); /* static */
void func_80AB032C(DmChar08 *arg0, GlobalContext *arg1); /* static */
void func_80AB096C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB0A10(DmChar08 *arg0, GlobalContext *arg1); /* static */
s32 func_80AB0E3C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *actor); /* static */
void func_80AB0E7C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80AB0F90(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern CollisionHeader D_06002328;
extern CollisionHeader D_06002470;
extern ? D_06004E70;
extern FlexSkeletonHeader D_0600E748;
static ? D_80AB1390;                                /* unable to generate initializer */
static ? D_80AB1398;                                /* unable to generate initializer */
static ? D_80AB13A0;                                /* unable to generate initializer */
static ? D_80AB14D0;                                /* unable to generate initializer */
static ? D_80AB1600;                                /* unable to generate initializer */
static ? D_80AB1648;                                /* unable to generate initializer */
static CollisionHeader D_80AB1690;                  /* type too large by 20; unable to generate initializer */
static ? *D_80AB16A8[5] = {&D_80AB13A0, &D_80AB1398, &D_80AB1390, NULL, NULL};
static ? D_80AB16BC;                                /* unable to generate initializer */
static InitChainEntry D_80AB1764[3];                /* unable to generate initializer */
static s16 D_80AB1770 = 0;
static Color_RGBA8 D_80AB1774 = {0xFA, 0xC8, 0xFA, 0x64};
static Color_RGBA8 D_80AB1778 = {0x50, 0x50, 0x50, 0};
static Vec3f D_80AB177C = {0.0f, -0.8f, 0.0f};
static ? D_80AB1788;                                /* unable to generate initializer */

void func_80AAF050(DmChar08 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    u8 temp_t6;

    temp_t6 = arg0->unk200;
    switch (temp_t6) {
    case 0:
        temp_v0 = arg0->unk1F8;
        arg0->unk201 = 0;
        if ((s32) temp_v0 > 0) {
            arg0->unk1F8 = temp_v0 - 1;
        } else {
            arg0->unk1F8 = 0;
        }
        temp_v0_2 = arg0->unk1F8;
        if ((s32) temp_v0_2 < 4) {
            arg0->unk201 = (u8) temp_v0_2;
        }
        if (temp_v0_2 == 0) {
            arg0 = arg0;
            arg0->unk1F8 = Rand_S16Offset(0x1E, 0x1E);
            return;
        }
    default:
        return;
    case 1:
        temp_v0_3 = arg0->unk1F8;
        arg0->unk201 = 4;
        if ((s32) temp_v0_3 > 0) {
            arg0->unk1F8 = temp_v0_3 - 1;
        } else {
            arg0->unk1F8 = 0;
        }
        temp_v0_4 = arg0->unk1F8;
        if ((s32) temp_v0_4 < 4) {
            arg0->unk201 = temp_v0_4 + 4;
        }
        if (temp_v0_4 == 0) {
            arg0 = arg0;
            arg0->unk1F8 = Rand_S16Offset(0x1E, 0x1E);
            return;
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return;
    case 2:
        arg0->unk201 = 2;
        return;
    case 3:
        arg0->unk201 = 4;
        return;
    case 5:
        arg0->unk201 = 8;
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return;
    }
}

void func_80AAF15C(SkelAnime *arg0, void *arg1, s32 arg2) {
    f32 temp_f0;
    void *temp_s0;
    f32 phi_f2;

    temp_s0 = arg1 + ((arg2 & 0xFFFF) * 0x18);
    temp_f0 = temp_s0->unkC;
    if (temp_f0 < 0.0f) {
        phi_f2 = (f32) SkelAnime_GetFrameCount(temp_s0->unk0);
    } else {
        phi_f2 = temp_f0;
    }
    SkelAnime_ChangeAnim(arg0, (AnimationHeader *) temp_s0->unk0, temp_s0->unk4, temp_s0->unk8, phi_f2, (u8) (s32) temp_s0->unk10, temp_s0->unk14);
}

void DmChar08_Init(DmChar08 *this, GlobalContext *globalCtx) {
    ActorContext *sp40;
    SkelAnime *sp3C;
    ActorContext *temp_a0;
    SkelAnime *temp_a1;
    s16 temp_v0;
    s16 temp_v1;
    DmChar08 *this = (DmChar08 *) thisx;

    this->actor.targetMode = 5;
    this->unk200 = 2;
    this->actor.targetArrowOffset = 120.0f;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 24.0f);
    temp_a1 = &this->unk15C;
    sp3C = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_0600E748, NULL, NULL, NULL, 0);
    Actor_ProcessInitChain((Actor *) this, D_80AB1764);
    Actor_SetScale((Actor *) this, 0.1f);
    this->unk1F4 = 0;
    this->unk1FE = 0;
    this->unk1FF = 0;
    this->unk205 = 0;
    this->unk202 = 0;
    this->unk1FC = 0xFFFF;
    this->unk209 = 0;
    this->unk1E4 = this->actor.world.pos.y;
    this->unk1F0 = 0.0f;
    temp_v0 = globalCtx->sceneNum;
    if (temp_v0 == 0x38) {
        if ((gSaveContext.weekEventReg[53] & 0x20) != 0) {
            BcCheck3_BgActorInit((DynaPolyActor *) this, 3);
            BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06002470);
        } else {
            BcCheck3_BgActorInit((DynaPolyActor *) this, 3);
            BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06002328);
        }
        this->unk209 = 1;
    } else if (temp_v0 == 0x49) {
        BcCheck3_BgActorInit((DynaPolyActor *) this, 3);
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_80AB1690);
        this->unk209 = 1;
    }
    temp_a0 = &globalCtx->actorCtx;
    sp40 = temp_a0;
    this->unk1A4 = Actor_Spawn(temp_a0, globalCtx, 0x23C, this->actor.world.pos.x + -80.0f, this->actor.world.pos.y + 390.0f, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 1);
    this->unk1A8 = Actor_Spawn(temp_a0, globalCtx, 0x23C, this->actor.world.pos.x + 68.0f, this->actor.world.pos.y + 368.0f, this->actor.world.pos.z - 174.0f, (s16) 0, (s16) 0x7530, (s16) 0, (s16) 1);
    temp_v1 = globalCtx->sceneNum;
    if (temp_v1 != 0x38) {
        if (temp_v1 != 0x49) {
            if (temp_v1 != 0x62) {

            } else {
                this->unk1FF = 2;
                this->unk202 = 2;
                this->unk203 = 0x63;
                this->unk200 = 0;
                this->unk207 = 0;
                this->unk208 = 0;
                this->actionFunc = func_80AAFE78;
                this->unk1F0 = 1.0f;
            }
        } else {
            this->unk1FF = 2;
            this->unk202 = 2;
            this->unk203 = 0x63;
            this->unk200 = 0;
            this->unk207 = 0;
            this->unk208 = 0;
            this->actor.flags |= 1;
            this->actionFunc = func_80AAFAE4;
            this->unk1F0 = 1.0f;
        }
    } else if ((gSaveContext.weekEventReg[53] & 0x20) != 0) {
        this->actor.world.pos.x = -6480.0f;
        this->unk1E4 = -120.0f;
        this->actor.world.rot.x = 0;
        this->actor.world.rot.y = -0x7234;
        this->actor.world.rot.z = 0;
        this->actor.shape.rot.x = 0;
        this->actor.shape.rot.y = -0x7234;
        this->actor.shape.rot.z = 0;
        this->unk1FF = 2;
        this->unk202 = 2;
        this->unk203 = 0x63;
        this->unk200 = 1;
        this->unk207 = 0;
        this->unk208 = 0;
        this->actor.flags |= 1;
        this->actor.world.pos.z = 1750.0f;
        this->unk1F0 = 1.0f;
        if (gSaveContext.entranceIndex == 0x6A80) {
            this->unk200 = 0;
            this->actionFunc = func_80AAFAC4;
        } else {
            this->actionFunc = func_80AAF8F4;
        }
    } else {
        this->actionFunc = func_80AAF610;
    }
    func_80AAF15C(sp3C, (this->unk202 * 0x18) + &D_80AB16BC, 0);
}

void DmChar08_Destroy(DmChar08 *this, GlobalContext *globalCtx) {
    DmChar08 *this = (DmChar08 *) thisx;
    if (this->unk209 != 0) {
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
    }
}

void func_80AAF610(DmChar08 *arg0, GlobalContext *arg1) {
    Actor *sp1C;
    Actor *sp18;
    Actor *temp_v0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    Actor *phi_a2;
    Actor *phi_v1;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    phi_a2 = temp_v0;
    phi_v1 = temp_v0;
    if (((temp_v0->unkA70 * 0x10) < 0) && (temp_f0 = temp_v0->world.pos.x, (temp_f0 > -5780.0f)) && (temp_f0 < -5385.0f) && (temp_f0_2 = temp_v0->world.pos.z, (temp_f0_2 > 1120.0f)) && (temp_f0_2 < 2100.0f)) {
        if (D_80AB1770 == 0) {
            sp18 = temp_v0;
            sp1C = temp_v0;
            play_sound(0x4807U);
            D_80AB1770 = 1;
            phi_a2 = sp1C;
            phi_v1 = sp18;
        }
    } else {
        D_80AB1770 = 0;
    }
    if ((phi_a2->unk14B == 2) && (arg1->msgCtx.unk1202A == 3) && (arg1->msgCtx.unk1202E == 2)) {
        temp_f0_3 = phi_v1->world.pos.x;
        if ((temp_f0_3 > -5780.0f) && (temp_f0_3 < -5385.0f)) {
            temp_f0_4 = phi_v1->world.pos.z;
            if ((temp_f0_4 > 1120.0f) && (temp_f0_4 < 2100.0f)) {
                arg0->actionFunc = func_80AAF79C;
            }
        }
    }
}

void func_80AAF79C(DmChar08 *arg0, GlobalContext *arg1) {
    s8 temp_s0;
    s16 phi_s0;

    temp_s0 = arg0->actor.cutscene;
    phi_s0 = (s16) temp_s0;
    if ((gSaveContext.weekEventReg[93] & 8) != 0) {
        phi_s0 = ActorCutscene_GetAdditionalCutscene(ActorCutscene_GetAdditionalCutscene(ActorCutscene_GetAdditionalCutscene((s16) temp_s0)));
    }
    if (ActorCutscene_GetCanPlayNext(phi_s0) != 0) {
        ActorCutscene_Start(phi_s0, (Actor *) arg0);
        gSaveContext.weekEventReg[53] |= 0x20;
        gSaveContext.weekEventReg[93] |= 8;
        BgCheck_RemoveActorMesh(arg1, &arg1->colCtx.dyna, arg0->unk144);
        arg0->actionFunc = func_80AAF884;
        return;
    }
    ActorCutscene_SetIntentToPlay(phi_s0);
}

void func_80AAF884(DmChar08 *arg0, GlobalContext *arg1) {
    DmChar08 *temp_a0;

    temp_a0 = arg0;
    if (arg1->csCtx.state == 0) {
        arg0 = arg0;
        BcCheck3_BgActorInit((DynaPolyActor *) temp_a0, 3);
        BgCheck3_LoadMesh(arg1, (DynaPolyActor *) arg0, &D_06002470);
        arg0->actionFunc = func_80AAF8F4;
        arg0->actor.flags |= 1;
    }
}

void func_80AAF8F4(DmChar08 *arg0, GlobalContext *arg1) {
    f32 sp28;

    if (fabsf(arg0->actor.xzDistToPlayer) < 200.0f) {
        arg0->actionFunc = func_80AAFA18;
    }
    arg0->unk1FA += 0xC8;
    sp28 = 50.0f * Math_SinS(arg0->unk1FA);
    Math_SmoothStepToF((f32 *) &arg0->actor.world, -6400.0f, 0.2f, 2.0f, 0.1f);
    Math_SmoothStepToF(&arg0->unk1E4, -180.0f + sp28, 0.5f, 5.0f, 0.1f);
    Math_SmoothStepToF(&arg0->actor.world.pos.z, 1750.0f, 0.5f, 20.0f, 0.1f);
    Math_SmoothStepToS(&arg0->actor.world.rot.y, -0x7234, 0xA, 0xDC, (s16) 1);
    Math_SmoothStepToS(&arg0->actor.shape.rot.y, -0x7234, 0xA, 0xDC, (s16) 1);
}

void func_80AAFA18(DmChar08 *arg0, GlobalContext *arg1) {
    s16 sp1E;
    s16 sp1C;
    s16 temp_v0;
    s32 temp_a0;
    s16 phi_a0;

    temp_v0 = ActorCutscene_GetAdditionalCutscene((s16) arg0->actor.cutscene);
    temp_a0 = temp_v0 << 0x10;
    sp1C = temp_v0;
    phi_a0 = sp1C;
    if ((gSaveContext.weekEventReg[53] & 0x40) != 0) {
        phi_a0 = ActorCutscene_GetAdditionalCutscene((s16) (temp_a0 >> 0x10));
    }
    sp1E = phi_a0;
    if (ActorCutscene_GetCanPlayNext(phi_a0) != 0) {
        gSaveContext.weekEventReg[53] |= 0x40;
        ActorCutscene_Start(phi_a0, (Actor *) arg0);
        arg0->actionFunc = func_80AAFE78;
        return;
    }
    ActorCutscene_SetIntentToPlay(phi_a0);
}

void func_80AAFAC4(DmChar08 *arg0, GlobalContext *arg1) {
    if (arg1->csCtx.state == 0) {
        arg0->actionFunc = func_80AAF8F4;
    }
}

void func_80AAFAE4(DmChar08 *arg0, GlobalContext *arg1) {
    if (arg1->csCtx.state == 0) {
        arg0->actionFunc = func_80AAFB04;
    }
}

void func_80AAFB04(DmChar08 *arg0, GlobalContext *arg1) {
    if ((fabsf(arg0->actor.xzDistToPlayer) < 200.0f) && (arg1->actorCtx.actorList[2].first->world.pos.y > 0.0f)) {
        arg1->nextEntranceIndex = 0x6A70;
        arg1->sceneLoadFlag = 0x14;
        arg0 = arg0;
        Scene_SetExitFade(arg1);
        arg0->actionFunc = func_80AAFB94;
    }
}

void func_80AAFB94(DmChar08 *arg0, GlobalContext *arg1) {

}

void func_80AAFBA4(DmChar08 *arg0, GlobalContext *arg1) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 temp_f10;
    s32 temp_s0;
    s32 phi_s0;

    temp_f10 = (Rand_ZeroOne() - 0.5f) * 24.0f;
    D_80AB177C.x = 0.0f;
    sp58 = temp_f10;
    sp5C = -5.2f;
    D_80AB177C.z = 0.0f;
    sp60 = 4.0f;
    D_80AB177C.y = 1.18f;
    phi_s0 = 0;
    if ((s32) arg0->unk1FE > 0) {
        do {
            EffectSsDtBubble_SpawnCustomColor(arg1, arg0 + 0x1C4, (Vec3f *) &sp58, &D_80AB177C, &D_80AB1774, &D_80AB1778, (s16) Rand_S16Offset(0x50, 0x82), (s16) 0x1E, (s16) 0);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 < (s32) arg0->unk1FE);
    }
}

void func_80AAFCCC(Actor *arg0, GlobalContext *arg1) {
    MessageContext *temp_a0;
    MessageContext *temp_a0_2;
    MessageContext *temp_a0_3;
    s16 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;

    temp_v0 = arg1->sceneNum;
    if (temp_v0 != 0x38) {
        if (temp_v0 != 0x49) {
            return;
        }
        temp_v0_2 = arg0->unk206;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 != 1) {
                temp_a0 = arg1 + 0x4908;
                if (temp_v0_2 != 2) {
                    return;
                }
                arg1 = arg1;
                if (func_80152498(temp_a0) == 2) {
                    func_801518B0(arg1, 0x102FU, arg0);
                    goto block_25;
                }
                /* Duplicate return node #26. Try simplifying control flow for better match */
                return;
            }
            func_801518B0(arg1, 0x102EU, arg0);
            arg0->unk206 = (u8) (arg0->unk206 + 1);
            return;
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
        return;
    }
    if ((gSaveContext.weekEventReg[55] & 0x80) == 0) {
        temp_v0_3 = arg0->unk206;
        if (temp_v0_3 != 0) {
            if (temp_v0_3 != 1) {
                temp_a0_2 = &arg1->msgCtx;
                if (temp_v0_3 != 2) {
                    return;
                }
                arg1 = arg1;
                if (func_80152498(temp_a0_2) == 2) {
                    func_801518B0(arg1, 0x102BU, arg0);
                    goto block_25;
                }
                /* Duplicate return node #26. Try simplifying control flow for better match */
                return;
            }
            func_801518B0(arg1, 0x102AU, arg0);
            arg0->unk206 = (u8) (arg0->unk206 + 1);
            return;
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
        return;
    }
    temp_v0_4 = arg0->unk206;
    if (temp_v0_4 != 0) {
        if (temp_v0_4 != 1) {
            temp_a0_3 = &arg1->msgCtx;
            if (temp_v0_4 != 2) {
                return;
            }
            arg1 = arg1;
            if (func_80152498(temp_a0_3) == 2) {
                func_801477B4(arg1);
block_25:
                arg0->unk206 = 0U;
            }
            /* Duplicate return node #26. Try simplifying control flow for better match */
            return;
        }
        func_801518B0(arg1, 0x103BU, arg0);
        arg0->unk206 = (u8) (arg0->unk206 + 1);
    }
}

void func_80AAFE78(DmChar08 *arg0, GlobalContext *arg1) {

}

void func_80AAFE88(Actor *arg0, GlobalContext *arg1) {
    u32 sp3C;
    void *sp2C;
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    f32 temp_f12;
    s32 temp_t6;
    u16 *temp_v0_3;
    u16 temp_a0_3;
    u16 temp_t0;
    u16 temp_v0_2;
    u32 temp_t9;
    u32 temp_v0;
    void *temp_t3;
    void *temp_v1;
    f32 phi_f12;

    temp_a0 = arg1;
    arg1 = arg1;
    if (func_800EE29C(temp_a0, 0x1DAU) != 0) {
        temp_a0_2 = arg1;
        arg1 = arg1;
        temp_v0 = func_800EE200(temp_a0_2, 0x1DAU);
        temp_t6 = temp_v0 * 4;
        sp3C = temp_v0;
        temp_v1 = arg1 + temp_t6;
        temp_a0_3 = *temp_v1->unk1F4C;
        if (arg0->unk1F6 != temp_a0_3) {
            arg0->unk1F6 = (s16) temp_a0_3;
            temp_t0 = *temp_v1->unk1F4C;
            switch (temp_t0) {
            case 1:
                arg0->unk202 = 0;
                break;
            case 3:
                arg0->unk1FE = 2;
                break;
            case 4:
                arg0->unk202 = 2;
                break;
            case 5:
                arg0->unk202 = 1;
                break;
            case 6:
                arg0->unk200 = 0;
                break;
            case 7:
                arg0->unk200 = 2;
                break;
            case 8:
                arg0->unk202 = 6;
                break;
            case 9:
                arg0->unk202 = 2;
                break;
            case 10:
                arg0->unk202 = 4;
                break;
            case 12:
                arg0->unk202 = 5;
                break;
            case 13:
                arg0->unk1FE = 0;
                break;
            case 14:
                arg1 = arg1;
                Audio_PlayActorSound2(arg0, 0x28DEU);
                arg0->unk202 = 2;
                break;
            }
        }
        temp_t3 = arg1 + (sp3C * 4);
        sp2C = temp_t3;
        temp_v0_2 = *temp_t3->unk1F4C;
        if (temp_v0_2 != 2) {
            if (temp_v0_2 != 5) {
                if (temp_v0_2 != 0xE) {
                    func_800EDF24(arg0, arg1, sp3C);
                } else {
                    func_800EDE34(arg0, arg1, (s32) sp3C);
                    Math_SmoothStepToS(&arg0->world.rot.y, sp2C->unk1F4C->unk8, 0xA, 0xDC, (s16) 1);
                    arg0->shape.rot.y = arg0->world.rot.y;
                }
            } else {
                func_800EDF78(arg0, arg1, (s32) sp3C);
            }
        } else {
            arg0->unk1FF = 1U;
            temp_v0_3 = sp2C->unk1F4C;
            arg1 = arg1;
            temp_f12 = 2.0f * func_800F5A8C(temp_v0_3->unk4, temp_v0_3->unk2, arg1->csCtx.frames, arg1);
            phi_f12 = temp_f12;
            if (temp_f12 > 1.0f) {
                phi_f12 = 1.0f;
            }
            temp_t9 = (u32) ((1.0f - phi_f12) * 255.0f);
            arg0->unk205 = (s8) temp_t9;
            if ((temp_t9 & 0xFF) < 6) {
                arg0->unk1FF = 2U;
            }
            func_800EDF24(arg0, arg1, sp3C);
        }
        arg0->unk1E4 = (f32) arg0->world.pos.y;
        if (((s32) arg0->unk1FF >= 2) || (*sp2C->unk1F4C == 2)) {
            Math_SmoothStepToF(arg0 + 0x1F0, 1.0f, 0.02f, 0.1f, 0.00001f);
            return;
        }
        /* Duplicate return node #32. Try simplifying control flow for better match */
        return;
    }
    arg0->unk1F6 = 0x63;
}

void func_80AB01E8(DmChar08 *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    temp_v0 = arg0->unk202;
    if (arg0->unk203 != temp_v0) {
        arg0->unk203 = temp_v0;
        func_80AAF15C(arg0 + 0x15C, (temp_v0 * 0x18) + &D_80AB16BC, 0, arg0);
    }
}

void func_80AB023C(DmChar08 *arg0, GlobalContext *arg1) {
    u16 temp_t7;
    u16 temp_v1;

    temp_v1 = arg1->msgCtx.unk11F04;
    if ((arg0->unk1FC != temp_v1) && (temp_v1 != 0)) {
        arg0->unk1FC = temp_v1;
        arg0->unk208 = 0;
        temp_t7 = arg1->msgCtx.unk11F04;
        switch (temp_t7) {
        case 4133:
            arg0->unk207 = 1;
            return;
        case 4134:
            arg0->unk207 = 2;
            return;
        case 4135:
            arg0->unk207 = 3;
            return;
        case 4136:
            arg0->unk207 = 4;
            return;
        case 4137:
            arg0->unk207 = 0xA;
            return;
        case 4140:
            arg0->unk207 = 5;
            return;
        case 4141:
            arg0->unk207 = 8;
            return;
        case 4138:
            arg0->unk207 = 6;
            return;
        case 4139:
            arg0->unk207 = 2;
            return;
        case 4142:
            arg0->unk207 = 9;
            return;
        case 4143:
            arg0->unk207 = 7;
            return;
        case 4155:
            arg0->unk207 = 6;
            return;
        case 4144:
            arg0->unk207 = 4;
            /* Duplicate return node #17. Try simplifying control flow for better match */
            return;
        }
    } else {
    default:
    }
}

void func_80AB032C(DmChar08 *arg0, GlobalContext *arg1) {
    u8 temp_t8;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;

    temp_v0 = arg0->unk207;
    switch (temp_v0) {                              /* switch 1 */
    case 1:                                         /* switch 1 */
        temp_v0_2 = arg0->unk208;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 != 1) {
                return;
            }
            if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                arg0->unk202 = 2;
                arg0->unk200 = 0;
                arg0->unk207 = 0;
block_89:
                arg0->unk208 = 0;
            }
        default:                                    /* switch 1 */
        default:                                    /* switch 2 */
        default:                                    /* switch 3 */
        default:                                    /* switch 4 */
            return;
        }
        arg0->unk202 = 6;
        arg0->unk200 = 2;
        arg0->unk208 = temp_v0_2 + 1;
        return;
    case 2:                                         /* switch 1 */
        temp_v0_3 = arg0->unk208;
        if (temp_v0_3 != 0) {
            if (temp_v0_3 != 1) {
                if (temp_v0_3 != 2) {
                    return;
                }
                if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                    arg0->unk202 = 2;
                    arg0->unk200 = 0;
                    arg0->unk207 = 0;
                    goto block_89;
                }
                /* Duplicate return node #90. Try simplifying control flow for better match */
                return;
            }
            if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                arg0->unk202 = 3;
                arg0->unk200 = 0;
                arg0->unk208 += 1;
                return;
            }
            /* Duplicate return node #90. Try simplifying control flow for better match */
            return;
        }
        arg0->unk202 = 4;
        arg0->unk200 = 2;
        arg0->unk208 = temp_v0_3 + 1;
        return;
    case 3:                                         /* switch 1 */
    case 4:                                         /* switch 1 */
    case 8:                                         /* switch 1 */
        temp_t8 = arg0->unk208;
        switch (temp_t8) {                          /* switch 2 */
        case 0:                                     /* switch 2 */
            arg0->unk202 = 3;
            if ((s32) temp_v0 >= 5) {
                arg0->unk200 = 2;
            } else {
                arg0->unk200 = 0;
            }
            arg0->unk208 = 2;
            return;
        case 2:                                     /* switch 2 */
            if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                arg0->unk202 = 5;
                arg0->unk200 = 2;
                arg0->unk208 += 1;
                return;
            }
            /* Duplicate return node #90. Try simplifying control flow for better match */
            return;
        case 3:                                     /* switch 2 */
            if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                if (arg0->unk207 != 4) {
                    arg0->unk202 = 2;
                    arg0->unk200 = 0;
                    arg0->unk207 = 0;
                    goto block_89;
                }
                arg0->unk202 = 3;
                arg0->unk200 = 0;
                arg0->unk208 += 1;
                return;
            }
            /* Duplicate return node #90. Try simplifying control flow for better match */
            return;
        case 4:                                     /* switch 2 */
        case 5:                                     /* switch 2 */
            if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                arg0->unk208 += 1;
                return;
            }
            /* Duplicate return node #90. Try simplifying control flow for better match */
            return;
        case 6:                                     /* switch 2 */
            if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                arg0->unk202 = 2;
                arg0->unk200 = 0;
                arg0->unk207 = 0;
                goto block_89;
            }
            /* Duplicate return node #90. Try simplifying control flow for better match */
            return;
        }
        break;
    case 5:                                         /* switch 1 */
        temp_v0_4 = arg0->unk208;
        switch (temp_v0_4) {                        /* switch 3 */
        case 0:                                     /* switch 3 */
            arg0->unk202 = 3;
            arg0->unk200 = 0;
            arg0->unk208 = temp_v0_4 + 1;
            return;
        case 2:                                     /* switch 3 */
        case 3:                                     /* switch 3 */
            if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                arg0->unk208 += 1;
                return;
            }
            /* Duplicate return node #90. Try simplifying control flow for better match */
            return;
        case 4:                                     /* switch 3 */
            if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                arg0->unk202 = 5;
                arg0->unk200 = 2;
                arg0->unk208 += 1;
                return;
            }
            /* Duplicate return node #90. Try simplifying control flow for better match */
            return;
        case 5:                                     /* switch 3 */
            if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                arg0->unk202 = 2;
                arg0->unk200 = 0;
                arg0->unk207 = 0;
                goto block_89;
            }
            /* Duplicate return node #90. Try simplifying control flow for better match */
            return;
        }
        break;
    case 6:                                         /* switch 1 */
        temp_v0_5 = arg0->unk208;
        if (temp_v0_5 != 0) {
            if (temp_v0_5 != 1) {
                if (temp_v0_5 != 2) {
                    return;
                }
                if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                    arg0->unk202 = 2;
                    arg0->unk200 = 0;
                    arg0->unk207 = 0;
                    goto block_89;
                }
                /* Duplicate return node #90. Try simplifying control flow for better match */
                return;
            }
            if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                arg0->unk208 += 1;
                return;
            }
            /* Duplicate return node #90. Try simplifying control flow for better match */
            return;
        }
        arg0->unk202 = 3;
        arg0->unk200 = 5;
        arg0->unk208 = temp_v0_5 + 1;
        return;
    case 7:                                         /* switch 1 */
        temp_v0_6 = arg0->unk208;
        if (temp_v0_6 != 0) {
            if (temp_v0_6 != 1) {
                if (temp_v0_6 != 2) {
                    return;
                }
                if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                    arg0->unk202 = 2;
                    arg0->unk200 = 0;
                    arg0->unk207 = 0;
                    goto block_89;
                }
                /* Duplicate return node #90. Try simplifying control flow for better match */
                return;
            }
            if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                arg0->unk202 = 3;
                arg0->unk200 = 2;
                arg0->unk208 += 1;
                return;
            }
            /* Duplicate return node #90. Try simplifying control flow for better match */
            return;
        }
        arg0->unk202 = 5;
        arg0->unk200 = 2;
        arg0->unk208 = temp_v0_6 + 1;
        return;
    case 9:                                         /* switch 1 */
        temp_v0_7 = arg0->unk208;
        switch (temp_v0_7) {                        /* switch 4 */
        case 0:                                     /* switch 4 */
            arg0->unk202 = 3;
            arg0->unk200 = 0;
            arg0->unk208 = temp_v0_7 + 1;
            return;
        case 1:                                     /* switch 4 */
            if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                arg0->unk208 += 1;
            }
            if ((func_80152498(arg1 + 0x4908) == 6) && (func_80147624(arg1) != 0)) {
                arg0->unk208 = 3;
                return;
            }
            /* Duplicate return node #90. Try simplifying control flow for better match */
            return;
        case 2:                                     /* switch 4 */
            if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                arg0->unk202 = 2;
                arg0->unk200 = 0;
                arg0->unk208 += 1;
            }
            if ((func_80152498(&arg1->msgCtx) == 6) && (func_80147624(arg1) != 0)) {
                arg0->unk208 = 3;
                return;
            }
            /* Duplicate return node #90. Try simplifying control flow for better match */
            return;
        case 3:                                     /* switch 4 */
            if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                arg0->unk202 = 4;
                arg0->unk200 = 2;
                arg0->unk208 += 1;
                return;
            }
            /* Duplicate return node #90. Try simplifying control flow for better match */
            return;
        case 4:                                     /* switch 4 */
            if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                arg0->unk202 = 2;
                arg0->unk200 = 0;
                arg0->unk207 = 0;
                goto block_89;
            }
            /* Duplicate return node #90. Try simplifying control flow for better match */
            return;
        }
        break;
    case 10:                                        /* switch 1 */
        temp_v0_8 = arg0->unk208;
        if (temp_v0_8 != 0) {
            if (temp_v0_8 != 1) {
                if (temp_v0_8 != 2) {
                    if (temp_v0_8 != 3) {
                        return;
                    }
                    if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                        arg0->unk202 = 2;
                        arg0->unk200 = 0;
                        arg0->unk207 = 0;
                        goto block_89;
                    }
                    /* Duplicate return node #90. Try simplifying control flow for better match */
                    return;
                }
                if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                    arg0->unk202 = 3;
                    arg0->unk200 = 0;
                    arg0->unk208 += 1;
                    return;
                }
                /* Duplicate return node #90. Try simplifying control flow for better match */
                return;
            }
            if (func_801378B8(arg0 + 0x15C, arg0->unk15C.animFrameCount) != 0) {
                arg0->unk202 = 5;
                arg0->unk200 = 2;
                arg0->unk208 += 1;
                return;
            }
            /* Duplicate return node #90. Try simplifying control flow for better match */
            return;
        }
        arg0->unk202 = 3;
        arg0->unk200 = 0;
        arg0->unk208 = temp_v0_8 + 1;
        return;
    }
}

void func_80AB096C(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    if ((arg1->csCtx.state != 0) && (arg1->sceneNum == 0x38) && (gSaveContext.sceneSetupIndex == 0) && (arg1->csCtx.unk_12 == 0)) {
        temp_v0 = arg1->csCtx.frames;
        if (((s32) temp_v0 >= 0x37A) && ((s32) temp_v0 < 0x39A)) {
            Audio_PlayActorSound2(arg0, 0x2159U);
        }
    }
    if ((arg0->unk202 == 1) && (func_801378B8(arg0 + 0x15C, 16.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x28D6U);
    }
}

void func_80AB0A10(DmChar08 *arg0, GlobalContext *arg1) {
    ? *temp_v0;
    ? *temp_v0_2;
    Vec3s *temp_v1;
    Vec3s *temp_v1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 temp_f6;
    ? *phi_v0;
    Vec3s *phi_v1;
    f32 phi_f2;
    f32 phi_f0;
    ? *phi_v0_2;
    Vec3s *phi_v1_2;
    f32 phi_f2_2;
    f32 phi_f12;
    GlobalContext *phi_f14;

    phi_v0 = &D_80AB1648;
    phi_v1 = &D_80AB1600;
    phi_f14 = arg1;
    if (arg1->actorCtx.actorList[2].first->unk24 > 0.0f) {
        temp_f0 = arg0->unk15C.animCurrentFrame;
        phi_f12 = 19.0f;
        if (temp_f0 <= 19.0f) {
            phi_f2 = temp_f0 / 19.0f;
        } else {
            phi_f2 = (29.0f - temp_f0) / 9.0f;
            phi_f12 = 29.0f;
        }
        *D_80AB16A8 = &D_80AB13A0;
        do {
            temp_v0 = phi_v0 + 0x18;
            temp_v1 = phi_v1 + 0x18;
            temp_v1->unk-12 = (s16) phi_v0->unk6;
            temp_v1->unk-C = (s16) phi_v0->unkC;
            temp_v1->unk-6 = (s16) phi_v0->unk12;
            temp_v1->unk-18 = (s16) phi_v0->unk0;
            phi_v0 = temp_v0;
            phi_v1 = temp_v1;
        } while (temp_v0 != &D_80AB1690);
        D_80AB1600.unk20 = 0x4B0;
        D_80AB1600.unk38 = 0x6A4;
        temp_f6 = (s32) ((100.0f * phi_f2) + 900.0f);
        D_80AB1600.y = (s16) temp_f6;
        D_80AB1600.unk8 = (s16) temp_f6;
        D_80AB1600.unkE = (s16) (s32) ((500.0f * phi_f2) + -200.0f);
        D_80AB1600.unk14 = (s16) (s32) ((900.0f * phi_f2) + -800.0f);
    } else {
        temp_f0_2 = arg0->unk15C.animCurrentFrame + 26.0f;
        phi_f0 = temp_f0_2;
        phi_v0_2 = &D_80AB1648;
        phi_v1_2 = &D_80AB1600;
        phi_f12 = 29.0f;
        phi_f14 = (bitwise GlobalContext *) 18.0f;
        if (temp_f0_2 > 29.0f) {
            phi_f0 = temp_f0_2 - 29.0f;
        }
        if (phi_f0 <= 18.0f) {
            phi_f2_2 = phi_f0 / 18.0f;
        } else {
            phi_f2_2 = (29.0f - phi_f0) / 10.0f;
        }
        *D_80AB16A8 = &D_80AB14D0;
        do {
            temp_v0_2 = phi_v0_2 + 0x18;
            phi_v1_2->unk12 = (s16) -(s32) phi_v0_2->unk12;
            phi_v1_2->unkC = (s16) -(s32) phi_v0_2->unkC;
            phi_v1_2->unk6 = (s16) -(s32) phi_v0_2->unk6;
            temp_v1_2 = phi_v1_2 + 0x18;
            temp_v1_2->unk-18 = (s16) -(s32) phi_v0_2->unk0;
            phi_v0_2 = temp_v0_2;
            phi_v1_2 = temp_v1_2;
        } while (temp_v0_2 != &D_80AB1690);
        D_80AB1600.y = (s16) (s32) ((500.0f * phi_f2_2) + 720.0f);
        D_80AB1600.unk8 = (s16) (s32) ((660.0f * phi_f2_2) + 420.0f);
        D_80AB1600.unkE = (s16) (s32) ((1130.0f * phi_f2_2) + -430.0f);
        D_80AB1600.unk20 = 0x4B0;
        D_80AB1600.unk38 = 0x6A4;
        D_80AB1600.unk14 = (s16) (s32) ((1430.0f * phi_f2_2) + -1060.0f);
    }
    func_800C6554(phi_f12, phi_f14, arg1, arg1 + 0x880, arg1);
}

void DmChar08_Update(DmChar08 *this, GlobalContext *globalCtx) {
    DmChar08 *this = (DmChar08 *) thisx;
    this->actor.focus.pos.y = this->unk1D4 + this->actor.targetArrowOffset;
    this->actor.focus.pos.x = this->unk1D0;
    this->actor.focus.pos.z = this->unk1D8;
    this->actor.focus.rot.x = this->actor.world.rot.x;
    this->actor.focus.rot.y = this->actor.world.rot.y;
    this->actor.focus.rot.z = this->actor.world.rot.z;
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->unk206 = 1;
    }
    func_80AAF050(this);
    this->actionFunc(this, globalCtx);
    func_80AAFE88((Actor *) this, globalCtx);
    func_80AB023C(this, globalCtx);
    func_80AB032C(this, globalCtx);
    func_80AB01E8(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->unk15C);
    func_80AAFBA4(this, globalCtx);
    this->actor.world.pos.y = this->unk1E4;
    if (globalCtx->sceneNum == 0x38) {
        if (this->actor.xzDistToPlayer > 1300.0f) {
            func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
        } else {
            func_800C6314(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
        }
    }
    if (this->unk1FF != 0) {
        func_80AAFCCC((Actor *) this, globalCtx);
        func_800B8614((Actor *) this, globalCtx, 400.0f);
    }
    func_80AB096C((Actor *) this, globalCtx);
    func_80AB0A10(this, globalCtx);
}

s32 func_80AB0E3C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4) {
    if ((arg0->csCtx.state == 0) && (arg0->sceneNum == 0x38) && (arg1 == 0x15)) {
        arg4->z = -0x5E24;
    }
    return 0;
}

void func_80AB0E7C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 *temp_a0;
    f32 *temp_a0_2;
    f32 *temp_a0_3;
    f32 *temp_a0_4;

    temp_a0 = &sp18;
    if (arg1 == 2) {
        sp18 = 800.0f;
        sp1C = 2600.0f;
        sp20 = -800.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, arg4 + 0x1AC);
        temp_a0_2 = &sp18;
        sp18 = 2600.0f;
        sp1C = 2500.0f;
        sp20 = 700.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_2, arg4 + 0x1B8);
        return;
    }
    temp_a0_3 = &sp18;
    if (arg1 == 8) {
        sp18 = 1600.0f;
        sp1C = -200.0f;
        sp20 = 0.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_3, arg4 + 0x1C4);
        return;
    }
    temp_a0_4 = &sp18;
    if (arg1 == 6) {
        sp18 = 600.0f;
        sp1C = 700.0f;
        sp20 = 0.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_4, arg4 + 0x1D0);
    }
}

void func_80AB0F90(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;

    switch (arg1) {
    case 4:
        arg2 = arg2;
        SysMatrix_StatePop();
        temp_f12 = ((1.0f - 0.7f) * arg2->unk1F0) + 0.7f;
        Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
        SysMatrix_StatePush();
        return;
    case 17:
    case 18:
    case 21:
    case 22:
        arg2 = arg2;
        SysMatrix_StatePop();
        temp_f12_2 = (arg2->unk1F0 * 0.4f) + 0.6f;
        Matrix_Scale(temp_f12_2, temp_f12_2, temp_f12_2, 1);
        SysMatrix_StatePush();
        return;
    case 19:
    case 23:
        temp_f12_3 = (arg2->unk1F0 * 0.4f) + 0.6f;
        Matrix_Scale(temp_f12_3, temp_f12_3, temp_f12_3, 1);
        return;
    case 14:
        arg2 = arg2;
        SysMatrix_StatePop();
        temp_f12_4 = (arg2->unk1F0 * 0.52f) + 0.48f;
        Matrix_Scale(temp_f12_4, temp_f12_4, temp_f12_4, 1);
        SysMatrix_StatePush();
        return;
    case 10:
    case 12:
        temp_f0 = arg2->unk1F0;
        temp_f12_5 = (temp_f0 * 0.55f) + 0.45f;
        Matrix_Scale(temp_f12_5, (temp_f0 * 0.2f) + 0.8f, temp_f12_5, 1);
        /* fallthrough */
    default:
        return;
    }
}

void DmChar08_Draw(DmChar08 *this, GlobalContext *globalCtx) {
    Gfx *sp34;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    DmChar08 *this = (DmChar08 *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp34 = temp_v0;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_80AB1788 + (this->unk201 * 4)));
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp30 = temp_v0_2;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80AB1788 + (this->unk201 * 4)));
    if (((s32) this->unk1FF > 0) || (globalCtx->csCtx.state != 0)) {
        func_801343C0(globalCtx, this->unk15C.skeleton, this->unk15C.limbDrawTbl, (s32) this->unk15C.dListCount, func_80AB0E3C, func_80AB0E7C, func_80AB0F90, (Actor *) this);
        this->unk1A4->world.pos.x = this->unk1AC;
        this->unk1A4->world.pos.y = this->unk1B0;
        this->unk1A4->world.pos.z = this->unk1B4;
        this->unk1A8->world.pos.x = this->unk1B8;
        this->unk1A8->world.pos.y = this->unk1BC;
        this->unk1A8->world.pos.z = this->unk1C0;
    }
    if (this->unk1FF == 0) {
        Scene_SetRenderModeXlu(globalCtx, 0, 1U);
        temp_v0_3 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDA380003;
        temp_v0_3->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_4 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDE000000;
        temp_v0_4->words.w1 = (u32) &D_06004E70;
        return;
    }
    if (this->unk1FF == 1) {
        func_8012C2DC(globalCtx->state.gfxCtx);
        Scene_SetRenderModeXlu(globalCtx, 2, 2U);
        temp_v0_5 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xFB000000;
        temp_v0_5->words.w1 = (u32) this->unk205;
        temp_v0_6 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDA380003;
        temp_v0_6->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_7 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xDE000000;
        temp_v0_7->words.w1 = (u32) &D_06004E70;
    }
}
