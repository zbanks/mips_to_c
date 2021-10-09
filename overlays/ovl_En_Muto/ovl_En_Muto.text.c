typedef struct EnMuto {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x60];                 /* maybe part of unk_188[17]? */
    /* 0x1EE */ Vec3s unk_1EE;                      /* inferred */
    /* 0x1F4 */ char pad_1F4[0x60];                 /* maybe part of unk_1EE[17]? */
    /* 0x254 */ void (*actionFunc)(EnMuto *, GlobalContext *);
    /* 0x258 */ s16 unk_258;                        /* inferred */
    /* 0x25A */ s16 unk_25A;                        /* inferred */
    /* 0x25C */ char pad_25C[0x2];
    /* 0x25E */ s16 unk_25E;                        /* inferred */
    /* 0x260 */ s16 unk_260;                        /* inferred */
    /* 0x262 */ char pad_262[0x4];                  /* maybe part of unk_260[3]? */
    /* 0x266 */ s16 unk_266;                        /* inferred */
    /* 0x268 */ char pad_268[0x4];                  /* maybe part of unk_266[3]? */
    /* 0x26C */ s16 unk_26C;                        /* inferred */
    /* 0x26E */ char pad_26E[0x2];
    /* 0x270 */ s16 unk_270;                        /* inferred */
    /* 0x272 */ char pad_272[0x2];
    /* 0x274 */ f32 unk_274;                        /* inferred */
    /* 0x278 */ char pad_278[0x2];
    /* 0x27A */ s16 unk_27A;                        /* inferred */
    /* 0x27C */ s16 unk_27C;                        /* inferred */
    /* 0x27E */ char pad_27E[0x2];
    /* 0x280 */ s32 unk_280;                        /* inferred */
    /* 0x284 */ s32 unk_284;                        /* inferred */
    /* 0x288 */ s32 unk_288;                        /* inferred */
    /* 0x28C */ s32 unk_28C;                        /* inferred */
    /* 0x290 */ char pad_290[0x4];
    /* 0x294 */ ColliderCylinder unk_294;           /* inferred */
    /* 0x2D4 */ s16 unk_2D4;                        /* overlap; inferred */
    /* 0x2D6 */ s16 unk_2D6;                        /* overlap; inferred */
    /* 0x2D8 */ s16 unk_2D8;                        /* overlap; inferred */
} EnMuto;                                           /* size = 0x2E0 */

struct _mips2c_stack_EnMuto_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnMuto_Draw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnMuto_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnMuto_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BE7C94 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BE7D20 {};              /* size 0x0 */

struct _mips2c_stack_func_80BE7DB4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BE7DEC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BE7F88 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BE7FEC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BE8328 {};              /* size 0x0 */

void func_80BE7C94(void *arg0, s32 arg1);           /* static */
void func_80BE7D20(EnMuto *arg0);                   /* static */
void func_80BE7DB4(EnMuto *arg0);                   /* static */
void func_80BE7F88(EnMuto *arg0, GlobalContext *arg1); /* static */
s32 func_80BE8328(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
extern AnimationHeader D_06000E50;
extern FlexSkeletonHeader D_06007150;
static ? D_80BE8410;                                /* unable to generate initializer */
static ColliderCylinderInit D_80BE841C = {
    {0xA, 0, 0, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
    {0x14, 0x3C, 0, {0, 0, 0}},
};
static ? D_80BE8448;                                /* unable to generate initializer */
static ? D_80BE8450;                                /* unable to generate initializer */

void EnMuto_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    EnMuto *this = (EnMuto *) thisx;

    this->actor.colChkInfo.mass = 0xFF;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 40.0f);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_06007150, &D_06000E50, &this->unk_188, &this->unk_1EE, 0x11);
    temp_v0 = this->actor.params;
    this->unk_280 = (s32) temp_v0;
    if (temp_v0 == 0) {
        this->unk_284 = 1;
        this->unk_27A = 2;
        if ((gSaveContext.weekEventReg[60] & 0x80) != 0) {
            this->unk_27A = 3;
        }
        if ((gSaveContext.day != 3) || (gSaveContext.isNight == 0)) {
            Actor_MarkForDeath((Actor *) this);
        }
    } else {
        this->unk_2D4 = 0x1E;
        this->unk_2D6 = 0x3C;
        this->unk_2D8 = 0;
        if (((gSaveContext.weekEventReg[63] & 0x80) != 0) || ((gSaveContext.day == 3) && (gSaveContext.isNight != 0))) {
            Actor_MarkForDeath((Actor *) this);
        }
    }
    this->actor.targetMode = 6;
    this->actor.gravity = -3.0f;
    Collider_InitAndSetCylinder(globalCtx, &this->unk_294, (Actor *) this, &D_80BE841C);
    func_80BE7DB4(this);
}

void EnMuto_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnMuto *this = (EnMuto *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_294);
}

void func_80BE7C94(void *arg0, s32 arg1) {
    f32 temp_f0;
    s32 temp_v1;

    arg0->unk_290 = arg1;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*(&D_80BE8448 + (arg1 * 4)));
    temp_v1 = arg0->unk_290;
    arg0->unk_274 = temp_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, *(&D_80BE8448 + (temp_v1 * 4)), 1.0f, 0.0f, temp_f0, (u8) (s32) *(&D_80BE8450 + temp_v1), -4.0f);
}

void func_80BE7D20(EnMuto *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 phi_v1;

    temp_v0 = arg0->unk_27C - arg0->actor.world.rot.y;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    arg0->unk_260 = 0;
    if ((arg0->actor.xzDistToPlayer < 200.0f) && (phi_v1 < 0x4E20)) {
        arg0->unk_260 = arg0->unk_27C - arg0->actor.world.rot.y;
        temp_v0_2 = arg0->unk_260;
        if ((s32) temp_v0_2 >= 0x2711) {
            arg0->unk_260 = 0x2710;
            return;
        }
        if ((s32) temp_v0_2 < -0x2710) {
            arg0->unk_260 = -0x2710;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_80BE7DB4(EnMuto *arg0) {
    func_80BE7C94(NULL);
    arg0->unk_278 = 0;
    arg0->actionFunc = func_80BE7DEC;
}

void func_80BE7DEC(EnMuto *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a0;
    s16 temp_v0;
    s16 temp_v1;
    s32 phi_a0;

    this->actor.textId = *(&D_80BE8410 + (this->unk_27A * 2));
    if ((this->unk_280 == 0) && (globalCtx->actorCtx.actorList[2].first->unk_14B == 3)) {
        if ((gSaveContext.weekEventReg[88] & 8) == 0) {
            this->actor.textId = 0x62C;
        } else {
            this->actor.textId = 0x62B;
        }
    }
    if (this->unk_280 == 0) {
        this = this;
        if (Player_GetMask(globalCtx) == 2) {
            this->actor.textId = 0x2363;
        }
    }
    globalCtx = globalCtx;
    this = this;
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        func_80BE7F88(this, globalCtx);
        return;
    }
    if (this->unk_280 == 0) {
        temp_v1 = this->actor.yawTowardsPlayer;
        temp_v0 = temp_v1 - this->actor.world.rot.y;
        phi_a0 = temp_v0 << 0x10;
        if ((s32) temp_v0 < 0) {
            phi_a0 = (s32) temp_v0 * -0x10000;
        }
        this->unk_27C = temp_v1;
        if ((phi_a0 >> 0x10) >= 0x2891) {
            return;
        }
        goto block_22;
    }
    this->unk_27A = 0;
    temp_a0 = globalCtx;
    if ((gSaveContext.weekEventReg[60] & 8) != 0) {
        this->unk_27A = 1;
    }
    globalCtx = globalCtx;
    this = this;
    if (Player_GetMask(temp_a0) == 0xA) {
        this->unk_27A = 4;
    }
    if (this->unk_28C == 1) {
        func_80BE7F88(this, globalCtx);
        return;
    }
block_22:
    func_800B8614((Actor *) this, globalCtx, 80.0f);
}

void func_80BE7F88(EnMuto *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a2;

    if (arg0->unk_280 == 0) {
        arg0->unk_27C = 0;
    }
    temp_a0 = arg0->unk_288;
    temp_a2 = temp_a0;
    if (temp_a0 != 0) {
        arg0->unk_284 = 1;
        arg0->unk_28C = 1;
        arg0 = arg0;
        func_800B86C8(temp_a0, arg1, temp_a2);
    }
    arg0->unk_278 = 1;
    arg0->actionFunc = func_80BE7FEC;
}

void func_80BE7FEC(EnMuto *this, GlobalContext *globalCtx) {
    f32 sp1C;
    Actor *temp_v0;
    PosRot *temp_a0;
    Vec3f *temp_a1;
    f32 temp_f8;
    u16 temp_v0_2;

    if (this->unk_280 == 0) {
        this->unk_27C = this->actor.yawTowardsPlayer;
        this = this;
        if ((func_80152498(&globalCtx->msgCtx) == 5) && (this = this, (func_80147624(globalCtx) != 0))) {
            this = this;
            func_801477B4(globalCtx);
            if (this->actor.textId == 0x62C) {
                gSaveContext.weekEventReg[88] |= 8;
            }
            if (this->actor.textId == 0x624) {
                gSaveContext.weekEventReg[60] |= 0x80;
            }
            this->unk_27A = 3;
            func_80BE7DB4(this);
            return;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return;
    }
    temp_v0 = this->unk_288;
    temp_a0 = &this->actor.world;
    temp_a1 = temp_v0 + 0x24;
    if (this == temp_v0) {
        this->unk_27C = this->actor.world.rot.y;
        if (this->unk_144.animPlaybackSpeed == 0.0f) {
            this->unk_144.animPlaybackSpeed = 1.0f;
        }
    } else {
        temp_f8 = this->unk_144.animCurrentFrame;
        this = this;
        sp1C = temp_f8;
        this->unk_27C = Math_Vec3f_Yaw((Vec3f *) temp_a0, temp_a1);
        if (this->unk_274 <= sp1C) {
            this->unk_144.animPlaybackSpeed = 0.0f;
        }
    }
    temp_v0_2 = globalCtx->msgCtx.unk11F04;
    if ((temp_v0_2 == 0x2AC6) || (temp_v0_2 == 0x2AC7) || (temp_v0_2 == 0x2AC8)) {
        this->unk_144.animPlaybackSpeed = 0.0f;
        this->unk_27C = this->actor.yawTowardsPlayer;
        this->unk_144.animCurrentFrame = 30.0f;
    }
    if (globalCtx->msgCtx.unk11F04 == 0x2ACF) {
        this->unk_144.animPlaybackSpeed = 0.0f;
    }
    if (this->unk_28C == 2) {
        func_80BE7DB4(this);
    }
}

void EnMuto_Update(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    s16 temp_v0;
    EnMuto *this = (EnMuto *) thisx;

    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    if (this->unk_284 != 0) {
        func_80BE7D20(this);
    }
    if ((this->unk_280 != 0) && (gSaveContext.day == 3) && (gSaveContext.isNight != 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk_270;
    if (temp_v0 != 0) {
        this->unk_270 = temp_v0 - 1;
    }
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.shape.rot.y = this->actor.world.rot.y;
    Actor_SetHeight((Actor *) this, 60.0f);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Math_SmoothStepToS(&this->unk_25A, this->unk_260, 1, 0xBB8, (s16) 0);
    Math_SmoothStepToS(&this->unk_258, this->unk_25E, 1, 0x3E8, (s16) 0);
    Math_SmoothStepToS(&this->unk_266, this->unk_26C, 1, 0xBB8, (s16) 0);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 50.0f, 0x1DU);
    temp_a2 = &this->unk_294;
    this->actor.uncullZoneForward = 500.0f;
    sp2C = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
}

s32 func_80BE8328(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 1) {
        arg4->x += arg5->unk_266;
    }
    if (arg1 == 0xF) {
        arg4->x += arg5->unk_25A;
        arg4->z += arg5->unk_258;
    }
    return 0;
}

void EnMuto_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnMuto *this = (EnMuto *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80BE8328, NULL, (Actor *) this);
}
