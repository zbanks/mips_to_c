typedef struct EnBombers2 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x78];                 /* maybe part of unk_188[21]? */
    /* 0x206 */ Vec3s unk_206;                      /* inferred */
    /* 0x20C */ char pad_20C[0x78];                 /* maybe part of unk_206[21]? */
    /* 0x284 */ void (*actionFunc)(EnBombers2 *, GlobalContext *);
    /* 0x288 */ s16 unk_288;                        /* inferred */
    /* 0x28A */ s16 unk_28A;                        /* inferred */
    /* 0x28C */ char pad_28C[0x2];
    /* 0x28E */ s16 unk_28E;                        /* inferred */
    /* 0x290 */ s16 unk_290;                        /* inferred */
    /* 0x292 */ char pad_292[0xA];                  /* maybe part of unk_290[6]? */
    /* 0x29C */ Vec3f unk_29C;                      /* inferred */
    /* 0x2A8 */ s32 unk_2A8;                        /* inferred */
    /* 0x2AC */ u8 unk_2AC;                         /* inferred */
    /* 0x2AD */ char pad_2AD[0x1];
    /* 0x2AE */ s16 unk_2AE;                        /* inferred */
    /* 0x2B0 */ s16 unk_2B0;                        /* inferred */
    /* 0x2B2 */ s16 unk_2B2;                        /* inferred */
    /* 0x2B4 */ char pad_2B4[0x2];
    /* 0x2B6 */ s16 unk_2B6;                        /* inferred */
    /* 0x2B8 */ f32 unk_2B8;                        /* inferred */
    /* 0x2BC */ s16 unk_2BC;                        /* inferred */
    /* 0x2BE */ s16 unk_2BE;                        /* inferred */
    /* 0x2C0 */ s16 unk_2C0;                        /* inferred */
    /* 0x2C2 */ s16 unk_2C2;                        /* inferred */
    /* 0x2C4 */ s16 unk_2C4;                        /* inferred */
    /* 0x2C6 */ char pad_2C6[0x8];                  /* maybe part of unk_2C4[5]? */
    /* 0x2CE */ s16 unk_2CE;                        /* inferred */
    /* 0x2D0 */ ColliderCylinder unk_2D0;           /* inferred */
} EnBombers2;                                       /* size = 0x31C */

struct _mips2c_stack_EnBombers2_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnBombers2_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnBombers2_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnBombers2_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80C04AAC {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C04B40 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C04BA0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C04D00 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C04D8C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C050B8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ PosRot *sp28;                        /* inferred */
    /* 0x2C */ char pad_2C[0x6];                    /* maybe part of sp28[2]? */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C0520C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C056D4 {};              /* size 0x0 */

void func_80C04AAC(EnBombers2 *arg0, s16 arg1, f32 arg2, GlobalContext *); /* static */
void func_80C04B40(EnBombers2 *arg0);               /* static */
void func_80C04D00(EnBombers2 *arg0);               /* static */
void func_80C050B8(EnBombers2 *arg0, GlobalContext *arg1); /* static */
s32 func_80C056D4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
extern AnimationHeader D_060064B8;
extern FlexSkeletonHeader D_0600F82C;
static ? D_80C058A0;                                /* unable to generate initializer */
static ColliderCylinderInit D_80C058B0 = {
    {0xA, 0, 0, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
    {0x23, 0x1E, 0, {0, 0, 0}},
};
static ? D_80C058DC;                                /* unable to generate initializer */
static ? D_80C058F8;                                /* unable to generate initializer */
static void D_80C05900;                             /* unable to generate initializer */
static void *D_80C05910 = &D_80C05900;
static ? D_80C05914;                                /* unable to generate initializer */
static void *D_80C05920 = (void *)0x600E220;

void EnBombers2_Init(Actor *thisx, GlobalContext *globalCtx) {
    f32 temp_f6;
    EnBombers2 *this = (EnBombers2 *) thisx;

    this->actor.colChkInfo.mass = 0xFF;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 19.0f);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_0600F82C, &D_060064B8, &this->unk_188, &this->unk_206, 0x15);
    this->actor.targetMode = 6;
    Collider_InitAndSetCylinder(globalCtx, &this->unk_2D0, (Actor *) this, &D_80C058B0);
    if (((gSaveContext.weekEventReg[73] & 0x80) != 0) || (gSaveContext.entranceIndex == 0xD220)) {
        this->actor.world.pos.x += Math_SinS((s16) (this->actor.home.rot.y + 0xC100)) * 50.0f;
        temp_f6 = Math_CosS((s16) (this->actor.home.rot.y + 0xC100)) * 50.0f;
        this->unk_2AC = 1;
        this->actor.world.pos.z += temp_f6;
    }
    this->unk_2B0 = (s16) this->actor.cutscene;
    if (this->unk_2B0 == 0) {
        Actor_MarkForDeath((Actor *) this);
    }
    func_80C04B40(this);
}

void EnBombers2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBombers2 *this = (EnBombers2 *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_2D0);
}

void func_80C04AAC(EnBombers2 *arg0, s16 arg1, f32 arg2) {
    f32 temp_f0;
    s16 temp_v1;

    arg0->unk_2AE = arg1;
    temp_v1 = arg0->unk_2AE;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*(&D_80C058DC + (arg0->unk_2AE * 4)));
    arg0->unk_2B8 = temp_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, *(&D_80C058DC + (temp_v1 * 4)), arg2, 0.0f, temp_f0, (u8) (s32) *(&D_80C058F8 + temp_v1), -10.0f);
}

void func_80C04B40(EnBombers2 *arg0) {
    if (arg0->unk_2AC == 0) {
        func_80C04AAC((EnBombers2 *)4, 0x3F800000);
    } else {
        func_80C04AAC(NULL, 0x3F800000);
    }
    arg0->unk_2C0 = 0;
    arg0->actionFunc = func_80C04BA0;
}

void func_80C04BA0(EnBombers2 *this, GlobalContext *globalCtx) {
    s32 sp1C;
    GlobalContext *temp_a0;
    s16 temp_v0;
    u8 temp_v0_2;

    temp_v0 = this->actor.yawTowardsPlayer - this->actor.world.rot.y;
    if ((s32) temp_v0 < 0) {
        sp1C = -(s32) temp_v0;
    } else {
        sp1C = (s32) temp_v0;
    }
    temp_v0_2 = globalCtx->actorCtx.actorList[2].first->unk_14B;
    if ((temp_v0_2 != 1) && (temp_v0_2 != 2)) {
        if ((temp_v0_2 != 3) && (temp_v0_2 != 4)) {

        } else {
            this->unk_2C2 = 2;
            this->unk_2CE = 5;
        }
    } else {
        this->unk_2C2 = 1;
        this->unk_2CE = 5;
    }
    if (this->unk_2AC != 0) {
        this->unk_2C2 = 7;
    }
    temp_a0 = globalCtx;
    this->actor.textId = *(&D_80C058A0 + (this->unk_2C2 * 2));
    this = this;
    globalCtx = globalCtx;
    if (Text_GetFaceReaction(temp_a0, 0x15U) != 0) {
        this = this;
        this->actor.textId = Text_GetFaceReaction(globalCtx, 0x15U);
    }
    this = this;
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->unk_2B6 = this->actor.world.rot.y;
        gSaveContext.weekEventReg[86] |= 2;
        func_80C04D00(this);
        return;
    }
    if (sp1C < 0x3BB5) {
        func_800B8614((Actor *) this, globalCtx, 70.0f);
    }
}

void func_80C04D00(EnBombers2 *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->unk_2C2;
    if ((temp_v0 == 0) || (temp_v0 == 1)) {
        func_80C04AAC(arg0, 5, 1.0f);
    } else {
        func_80C04AAC(arg0, 1, 1.0f);
    }
    arg0->unk_2A8 = 0;
    if (arg0->unk_2AC != 0) {
        func_80C04AAC(arg0, 6, 1.0f);
    }
    arg0->unk_2C0 = 1;
    arg0->actionFunc = func_80C04D8C;
}

void func_80C04D8C(EnBombers2 *this, GlobalContext *globalCtx) {
    Actor *sp24;
    s32 temp_a0;
    s32 temp_t1;
    s32 temp_v1;
    u16 temp_t1_2;
    u16 temp_t1_3;
    u16 temp_t5;
    u16 temp_t6;
    u16 temp_t9;
    u8 temp_v0;
    void *temp_v0_2;
    EnBombers2 *phi_v0;
    s32 phi_v1;
    s32 phi_a0;
    EnBombers2 *phi_v0_2;
    s32 phi_v1_2;
    s32 phi_a1;
    s32 phi_a1_2;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    if ((this->unk_2AC == 0) && (this->unk_2B8 <= this->unk_144.animCurrentFrame)) {
        if ((this->unk_2A8 & 1) == 0) {
            func_80C04AAC(this, 1, 1.0f);
        } else {
            func_80C04AAC(this, 5, 1.0f);
        }
        temp_t1 = this->unk_2A8 + 1;
        this->unk_2A8 = temp_t1;
        this->unk_2A8 = temp_t1 & 1;
    }
    temp_v0 = sp24->unk_14B;
    if ((temp_v0 != 1) && (temp_v0 != 2)) {
        if (temp_v0 == 4) {
            this->unk_28E = -0xFA0;
        }
    } else {
        this->unk_28E = -0x1770;
    }
    if ((this->unk_2CE == func_80152498(&globalCtx->msgCtx)) && (func_80147624(globalCtx) != 0)) {
        phi_v1 = 0;
        phi_a0 = 0;
        phi_v1_2 = 0;
        if (this->unk_2CE == 0xF) {
            phi_v0 = this;
            do {
                if ((phi_v0->unk_2C4 == 0) && ((globalCtx + phi_v1)->unk_1695C == gSaveContext.bomberCode[phi_a0])) {
                    phi_v0->unk_2C4 = 1;
                }
                temp_a0 = phi_a0 + 1;
                phi_v0 += 2;
                phi_v1 += 2;
                phi_a0 = temp_a0;
            } while (temp_a0 < 5);
            phi_v0_2 = this;
            phi_a1_2 = 0;
            do {
                temp_v1 = phi_v1_2 + 2;
                phi_v1_2 = temp_v1;
                phi_a1 = phi_a1_2;
                if (phi_v0_2->unk_2C4 != 0) {
                    phi_a1 = phi_a1_2 + 1;
                }
                phi_v0_2 += 2;
                phi_a1_2 = phi_a1;
            } while (temp_v1 != 0xA);
            if (phi_a1 >= 5) {
                this->unk_2C2 = 6;
                temp_t9 = *(&D_80C058A0 + (this->unk_2C2 * 2));
                this->actor.textId = temp_t9;
                func_80151938(globalCtx, temp_t9 & 0xFFFF);
                Audio_PlayActorSound2((Actor *) this, 0x4823U);
                this->unk_2CE = 5;
                return;
            }
            goto block_25;
        }
block_25:
        if (Text_GetFaceReaction(globalCtx, 0x15U) != 0) {
            this->unk_28E = 0;
            func_801477B4(globalCtx);
            func_80C04B40(this);
            return;
        }
        temp_t1_2 = (u16) this->unk_2C2;
        switch (temp_t1_2) {
        case 0:
        case 1:
        case 5:
        case 7:
            this->unk_28E = 0;
            func_801477B4(globalCtx);
            func_80C04B40(this);
            return;
        case 2:
            this->unk_2C2 = 3;
            temp_t5 = *(&D_80C058A0 + (this->unk_2C2 * 2));
            this->actor.textId = temp_t5;
            func_80151938(globalCtx, temp_t5 & 0xFFFF);
            this->unk_2CE = 0xF;
            return;
        case 3:
            this->unk_2C4 = 0;
            temp_v0_2 = this + (1 * 2);
            temp_v0_2->unk_2C6 = 0;
            temp_v0_2->unk_2C8 = 0;
            temp_v0_2->unk_2CA = 0;
            temp_v0_2->unk_2C4 = 0;
            this->unk_2C2 = 4;
            Audio_PlayActorSound2((Actor *) this, 0x4806U);
            temp_t1_3 = *(&D_80C058A0 + (this->unk_2C2 * 2));
            this->actor.textId = temp_t1_3;
            func_80151938(globalCtx, temp_t1_3 & 0xFFFF);
            this->unk_2CE = 5;
            return;
        case 4:
            this->unk_2C2 = 5;
            temp_t6 = *(&D_80C058A0 + (this->unk_2C2 * 2));
            this->actor.textId = temp_t6;
            func_80151938(globalCtx, temp_t6 & 0xFFFF);
            this->unk_2CE = 5;
            return;
        case 6:
            globalCtx->msgCtx.unk11F10 = 0;
            func_80C050B8(this, globalCtx);
            /* Duplicate return node #34. Try simplifying control flow for better match */
            return;
        }
    } else {
    default:
    }
}

void func_80C050B8(EnBombers2 *arg0, GlobalContext *arg1) {
    s32 sp34;
    s16 sp32;
    PosRot *sp28;
    Vec3f *sp24;
    PosRot *temp_a0;
    Vec3f *temp_a0_2;
    s16 temp_v0;

    sp34 = arg1->actorCtx.actorList[2].first;
    func_80C04AAC(arg0, 2, 1.0f, arg1);
    arg0->unk_2A8 = 0;
    temp_a0 = &arg0->actor.home;
    sp28 = temp_a0;
    temp_a0_2 = &arg0->unk_29C;
    sp32 = Math_Vec3f_Yaw((Vec3f *) temp_a0, sp34 + 0x24);
    sp24 = temp_a0_2;
    Math_Vec3f_Copy(temp_a0_2, (Vec3f *) &arg0->actor.world);
    temp_v0 = arg0->actor.home.rot.y;
    if ((s32) temp_v0 < (s32) sp32) {
        arg0->unk_29C.x += Math_SinS((s16) (temp_v0 + 0xC100)) * 50.0f;
        arg0->unk_29C.z += Math_CosS((s16) (arg0->actor.home.rot.y + 0xC100)) * 50.0f;
    } else {
        arg0->unk_29C.x += Math_SinS((s16) (temp_v0 + 0x3F00)) * 50.0f;
        arg0->unk_29C.z += Math_CosS((s16) (arg0->actor.home.rot.y + 0x3F00)) * 50.0f;
    }
    arg0->unk_2B6 = Math_Vec3f_Yaw((Vec3f *) sp28, sp24);
    arg0->unk_2C0 = 2;
    arg0->actionFunc = func_80C0520C;
}

void func_80C0520C(EnBombers2 *this, GlobalContext *globalCtx) {
    f32 temp_f2;
    s16 temp_v0;
    u16 temp_t8;

    if (this->unk_2A8 == 0) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay(this->unk_2B0);
            return;
        }
        if (ActorCutscene_GetCanPlayNext(this->unk_2B0) == 0) {
            ActorCutscene_SetIntentToPlay(this->unk_2B0);
            return;
        }
        ActorCutscene_StartAndSetUnkLinkFields(this->unk_2B0, (Actor *) this);
        this->unk_2A8 = 1;
        return;
    }
    Math_SmoothStepToS(&this->actor.world.rot.y, this->unk_2B6, 1, 0xBB8, (s16) 0);
    temp_f2 = this->unk_29C.x;
    if ((fabsf(temp_f2 - this->actor.world.pos.x) < 3.0f) && (fabsf(this->unk_29C.z - this->actor.world.pos.z) < 3.0f)) {
        temp_v0 = this->actor.yawTowardsPlayer;
        this->unk_2B6 = temp_v0;
        this->actor.speedXZ = 0.0f;
        if (fabsf((f32) (this->actor.world.rot.y - temp_v0)) < 100.0f) {
            func_801477B4(globalCtx);
            this->unk_2CE = 5;
            this->unk_2C2 = 7;
            func_80C04AAC(this, 6, 1.0f);
            this->unk_2A8 = 0;
            this->unk_2C0 = 1;
            gSaveContext.weekEventReg[73] |= 0x80;
            ActorCutscene_Stop(this->unk_2B0);
            this->unk_2AC = 1;
            temp_t8 = *(&D_80C058A0 + (this->unk_2C2 * 2));
            this->actor.textId = temp_t8;
            func_801518B0(globalCtx, temp_t8 & 0xFFFF, (Actor *) this);
            this->actionFunc = func_80C04D8C;
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return;
    }
    Math_ApproachF((f32 *) &this->actor.world, temp_f2, 0.3f, 1.0f);
    Math_ApproachF(&this->actor.world.pos.z, this->unk_29C.z, 0.3f, 1.0f);
}

void EnBombers2_Update(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp34;
    SkelAnime *sp2C;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a2;
    PosRot *temp_a1;
    SkelAnime *temp_a0;
    f32 temp_f4;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 phi_v1;
    EnBombers2 *this = (EnBombers2 *) thisx;

    temp_a0 = &this->unk_144;
    sp2C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v1 = this->unk_2B2;
    if (temp_v1 != 0) {
        this->unk_2B2 = temp_v1 - 1;
    }
    if ((this->unk_2AE == 2) && ((func_801378B8(sp2C, 9.0f) != 0) || (func_801378B8(sp2C, 10.0f) != 0) || (func_801378B8(sp2C, 17.0f) != 0) || (func_801378B8(sp2C, 18.0f) != 0))) {
        Audio_PlayActorSound2((Actor *) this, 0x292CU);
    }
    temp_v1_2 = this->actor.world.rot.y;
    this->actor.shape.rot.y = temp_v1_2;
    if (this->unk_2C0 != 2) {
        temp_v0 = this->actor.yawTowardsPlayer - temp_v1_2;
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        this->unk_290 = 0;
        if (phi_v1 < 0x3A98) {
            this->unk_290 = this->actor.yawTowardsPlayer - this->actor.world.rot.y;
            temp_v0_2 = this->unk_290;
            if ((s32) temp_v0_2 >= 0x2711) {
                this->unk_290 = 0x2710;
            } else if ((s32) temp_v0_2 < -0x2710) {
                this->unk_290 = -0x2710;
            }
        }
    }
    Actor_SetHeight((Actor *) this, 20.0f);
    Actor_SetScale((Actor *) this, 0.008f);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Math_SmoothStepToS(&this->unk_28A, this->unk_290, 1, 0xBB8, (s16) 0);
    Math_SmoothStepToS(&this->unk_288, this->unk_28E, 1, 0xBB8, (s16) 0);
    if (this->unk_2BE == 0) {
        this->unk_2BC += 1;
        if ((s32) this->unk_2BC >= 3) {
            this->unk_2BC = 0;
            this->unk_2BE = (s32) Rand_ZeroFloat(60.0f) + 0x14;
        }
    }
    temp_a1 = &this->actor.world;
    sp2C = (SkelAnime *) temp_a1;
    Math_Vec3f_Copy((Vec3f *) &sp34, (Vec3f *) temp_a1);
    if (this->unk_2AC == 0) {
        this->actor.world.pos.x = (Math_SinS((s16) (this->actor.world.rot.y + 0x8000)) * 26.0f) + sp34;
        temp_f4 = Math_CosS((s16) (this->actor.world.rot.y + 0x8000)) * 26.0f;
        this->unk_2D0.dim.radius = 0x23;
        this->unk_2D0.dim.height = 0x1E;
        this->actor.world.pos.z = temp_f4 + sp3C;
    } else {
        this->unk_2D0.dim.radius = 0xA;
        this->unk_2D0.dim.height = 0x19;
    }
    temp_a2 = &this->unk_2D0;
    sp28 = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    if (this->unk_2AC == 0) {
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 50.0f, 0x1DU);
    }
    Math_Vec3f_Copy((Vec3f *) sp2C, (Vec3f *) &sp34);
}

s32 func_80C056D4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 8) {
        arg4->x += arg5->unk_296;
    }
    if (arg1 == 0x11) {
        arg4->x += arg5->unk_28A;
        arg4->z += arg5->unk_288;
    }
    if ((arg1 == 0xF) || (arg1 == 0x13) || (arg1 == 0x14)) {
        *arg2 = NULL;
    }
    return 0;
}

void EnBombers2_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp38;
    Gfx *sp34;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    EnBombers2 *this = (EnBombers2 *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp38 = temp_v0;
    sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_80C05914 + (this->unk_2BC * 4)));
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp34 = temp_v0_2;
    sp34->words.w1 = Lib_SegmentedToVirtual(D_80C05920);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060028;
    sp30 = temp_v0_3;
    sp30->words.w1 = Lib_SegmentedToVirtual(D_80C05910);
    Scene_SetRenderModeXlu(globalCtx, 0, 1U);
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80C056D4, NULL, (Actor *) this);
}
