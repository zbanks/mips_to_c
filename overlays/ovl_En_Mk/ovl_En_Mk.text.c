typedef struct EnMk {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ SkelAnime unk_190;                  /* inferred */
    /* 0x1D4 */ Vec3s unk_1D4;                      /* inferred */
    /* 0x1DA */ char pad_1DA[0x48];                 /* maybe part of unk_1D4[13]? */
    /* 0x222 */ Vec3s unk_222;                      /* inferred */
    /* 0x228 */ char pad_228[0x48];                 /* maybe part of unk_222[13]? */
    /* 0x270 */ Vec3s unk_270;                      /* inferred */
    /* 0x276 */ s16 unk_276;                        /* inferred */
    /* 0x278 */ s16 unk_278;                        /* inferred */
    /* 0x27A */ u16 unk_27A;                        /* inferred */
    /* 0x27C */ s16 unk_27C;                        /* inferred */
    /* 0x27E */ char pad_27E[0x2];
    /* 0x280 */ void (*actionFunc)(EnMk *, GlobalContext *);
} EnMk;                                             /* size = 0x284 */

struct _mips2c_stack_EnMk_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnMk_Draw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnMk_Init {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnMk_Update {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ColliderCylinder *sp34;              /* inferred */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x10];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_809592E0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ? sp1C;                              /* inferred */
    /* 0x1C */ char pad_1C[0x14];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80959524 {};              /* size 0x0 */

struct _mips2c_stack_func_8095954C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80959624 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809596A0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80959774 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80959844 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80959A24 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80959C94 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80959D28 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80959E18 {
    /* 0x00 */ char pad_0[0x22];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8095A150 {};              /* size 0x0 */

struct _mips2c_stack_func_8095A198 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

s32 func_800B8718(EnMk *, GlobalContext *);         /* extern */
? func_800B874C(EnMk *, GlobalContext *, ?, ?);     /* extern */
? func_809592E0(EnMk *arg0, s16 arg1);              /* static */
s32 func_80959524(GlobalContext *arg0);             /* static */
void func_8095954C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80959624(Actor *arg0, GlobalContext *arg1); /* static */
void func_80959844(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_8095A150(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_8095A198(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06001C38;
extern FlexSkeletonHeader D_06006CA0;
static ColliderCylinderInit D_8095A260 = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x1E, 0x28, 0, {0, 0, 0}},
};
static ? D_8095A28C;                                /* unable to generate initializer */
static Vec3f D_8095A2A0 = {1000.0f, -100.0f, 0.0f};

? func_809592E0(EnMk *arg0, s16 arg1) {
    ? sp1C;
    AnimationHeader *temp_a1;
    SkelAnime *temp_a0;

    sp1C.unk_0 = (s32) D_8095A28C.unk_0;
    sp1C.unk_4 = (s32) D_8095A28C.unk_4;
    sp1C.unk_8 = (s32) D_8095A28C.unk_8;
    sp1C.unk_C = (s32) D_8095A28C.unk_C;
    sp1C.unk_10 = (s32) D_8095A28C.unk_10;
    if (arg1 == arg0->unk_27C) {
        return 0;
    }
    if (((s32) arg1 < 0) || (temp_a0 = arg0 + 0x190, (((s32) arg1 < 5) == 0))) {
        return 0;
    }
    temp_a1 = *(&sp1C + (arg1 * 4));
    arg0 = arg0;
    arg1 = arg1;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, temp_a1);
    arg0->unk_27C = arg1;
    return 1;
}

void EnMk_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_s1;
    s16 phi_s0;
    EnMk *phi_s2;
    s32 phi_s1;
    EnMk *this = (EnMk *) thisx;

    this->actor.minVelocityY = -4.0f;
    this->actor.gravity = -1.0f;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 36.0f);
    SkelAnime_InitSV(globalCtx, &this->unk_190, &D_06006CA0, &D_06001C38, &this->unk_1D4, &this->unk_222, 0xD);
    this->unk_27C = -1;
    func_809592E0(this, 0);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_144, (Actor *) this, &D_8095A260);
    this->actor.colChkInfo.mass = 0xFF;
    Actor_SetScale((Actor *) this, 0.01f);
    this->actionFunc = func_80959E18;
    this->unk_27A = 0;
    this->actor.targetMode = 6;
    phi_s1 = 0;
    if (func_80959524(globalCtx) < 7) {
        this->unk_27A |= 2;
    }
    phi_s0 = (s16) this->actor.cutscene;
    phi_s2 = this;
    do {
        phi_s2->unk_276 = phi_s0;
        if (phi_s0 != -1) {
            this->actor.cutscene = (s8) phi_s0;
            phi_s0 = ActorCutscene_GetAdditionalCutscene((s16) this->actor.cutscene);
        }
        temp_s1 = phi_s1 + 2;
        phi_s2 += 2;
        phi_s1 = temp_s1;
    } while (temp_s1 != 4);
    this->actor.cutscene = (s8) this->unk_276;
}

void EnMk_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnMk *this = (EnMk *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
}

s32 func_80959524(GlobalContext *arg0) {
    return *(&gSaveContext.roomInf[0][5] + (arg0->sceneNum * 0x1C)) & 7;
}

void func_8095954C(Actor *arg0, GlobalContext *arg1) {
    u16 temp_t9;

    if (func_800EE29C(arg1, 0x7FU) != 0) {
        func_800EDF24(arg0, arg1, func_800EE200(arg1, 0x7FU));
        temp_t9 = arg1->csCtx.npcActions[func_800EE200(arg1, 0x7FU)]->unk0;
        switch (temp_t9) {
            func_809592E0((EnMk *) arg0, (s16) (arg1->csCtx.npcActions[func_800EE200(arg1, 0x7FU)]->unk0 - 1));
            return;
        }
    } else {
        func_809592E0((EnMk *) arg0, 0);
    default:
    }
}

void func_80959624(Actor *arg0, GlobalContext *arg1) {
    u16 phi_a1;

    phi_a1 = 0xFBAU;
    if (gSaveContext.playerForm == 2) {
        if ((arg0->unk_27A & 4) != 0) {
            phi_a1 = 0xFB9U;
        } else if ((gSaveContext.weekEventReg[55] & 0x80) != 0) {
            phi_a1 = 0xFBCU;
        } else {
            phi_a1 = 0xFBBU;
        }
    }
    func_801518B0(arg1, phi_a1, arg0);
}

void func_809596A0(EnMk *this, GlobalContext *globalCtx) {
    u16 temp_v1;
    u8 temp_v0;

    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    temp_v1 = globalCtx->msgCtx.unk11F04;
    if ((temp_v1 == 0xFB9) || (temp_v1 == 0xFBB) || (temp_v1 == 0xFBC)) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0x400, (s16) 0x80);
        this->actor.world.rot.y = this->actor.shape.rot.y;
    }
    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 != 2) {
        if ((temp_v0 == 5) && (func_80147624(globalCtx) != 0)) {
            func_801477B4(globalCtx);
            this->actionFunc = func_80959774;
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    this->actionFunc = func_80959774;
}

void func_80959774(EnMk *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.home.rot.y, 3, 0x400, (s16) 0x80);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        func_80959624((Actor *) this, globalCtx);
        this->actionFunc = func_809596A0;
    } else if ((this->actor.xzDistToPlayer < 120.0f) && (Actor_IsLinkFacingActor((Actor *) this, 0x3000, globalCtx) != 0)) {
        func_800B8614((Actor *) this, globalCtx, 130.0f);
    }
    func_8095954C((Actor *) this, globalCtx);
}

void func_80959844(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u16 phi_a1;

    if (((arg0->unk_27A & 2) != 0) && (func_80959524(arg1) >= 7)) {
        phi_a1 = 0xFB3U;
    } else if ((gSaveContext.weekEventReg[20] & 0x40) != 0) {
        phi_a1 = 0xFB9U;
    } else if ((gSaveContext.weekEventReg[19] & 0x40) != 0) {
        phi_a1 = 0xFB5U;
    } else if (func_80959524(arg1) >= 7) {
        phi_a1 = 0xFB3U;
    } else {
        temp_v0 = gSaveContext.playerForm;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {
                if (temp_v0 != 3) {
                    if (temp_v0 != 4) {
                        if (func_80959524(arg1) > 0) {
                            phi_a1 = 0xFB0U;
                        } else {
                            phi_a1 = 0xFB1U;
                            if ((gSaveContext.weekEventReg[19] & 0x20) != 0) {
                                phi_a1 = 0xFB2U;
                            }
                        }
                    } else {
                        goto block_24;
                    }
                } else if ((gSaveContext.weekEventReg[19] & 0x10) != 0) {
                    if ((gSaveContext.weekEventReg[55] & 0x80) != 0) {
                        phi_a1 = 0xFAFU;
                    } else {
                        phi_a1 = 0xFAEU;
                    }
                } else {
                    phi_a1 = 0xFACU;
                }
            } else if ((gSaveContext.weekEventReg[19] & 8) != 0) {
                if ((gSaveContext.weekEventReg[55] & 0x80) != 0) {
                    phi_a1 = 0xFABU;
                } else {
                    phi_a1 = 0xFAAU;
                }
            } else {
                phi_a1 = 0xFA8U;
            }
        } else {
block_24:
            if (func_80959524(arg1) > 0) {
                phi_a1 = 0xFA7U;
            } else if ((gSaveContext.weekEventReg[19] & 4) != 0) {
                if ((gSaveContext.weekEventReg[55] & 0x80) != 0) {
                    phi_a1 = 0xFBFU;
                } else {
                    phi_a1 = 0xFA6U;
                }
            } else {
                phi_a1 = 0xFA0U;
            }
        }
    }
    func_801518B0(arg1, phi_a1, arg0);
}

void func_80959A24(EnMk *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a0;
    u16 temp_v1;
    u8 temp_v0;

    globalCtx = globalCtx;
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    this->unk_27A |= 1;
    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if ((temp_v0 != 2) && (temp_a0 = globalCtx, (temp_v0 == 5)) && (globalCtx = globalCtx, (func_80147624(temp_a0) != 0))) {
        temp_v1 = globalCtx->msgCtx.unk11F04;
        switch (temp_v1) {
        case 4001:
        case 4003:
        case 4004:
        case 4010:
        case 4014:
            func_80151938(globalCtx, (temp_v1 + 1) & 0xFFFF);
            return;
        case 4002:
            if ((gSaveContext.weekEventReg[55] & 0x80) != 0) {
                func_801477B4(globalCtx);
                this->actionFunc = func_80959E18;
                return;
            }
            func_80151938(globalCtx, (temp_v1 + 1) & 0xFFFF);
            return;
        case 4005:
        case 4006:
        case 4007:
        case 4009:
        case 4011:
        case 4013:
        case 4015:
        case 4016:
        case 4018:
        case 4029:
        case 4030:
        case 4031:
            func_801477B4(globalCtx);
            this->actionFunc = func_80959E18;
            return;
        case 4000:
            gSaveContext.weekEventReg[19] |= 4;
            func_80151938(globalCtx, 0xFA1U);
            return;
        case 4008:
            gSaveContext.weekEventReg[19] |= 8;
            if ((gSaveContext.weekEventReg[55] & 0x80) != 0) {
                func_80151938(globalCtx, 0xFBDU);
                return;
            }
            func_80151938(globalCtx, 0xFA9U);
            return;
        case 4012:
            gSaveContext.weekEventReg[19] |= 0x10;
            if ((gSaveContext.weekEventReg[55] & 0x80) != 0) {
                func_80151938(globalCtx, 0xFBEU);
                return;
            }
            func_80151938(globalCtx, 0xFADU);
            return;
        case 4017:
            gSaveContext.weekEventReg[19] |= 0x20;
            func_801477B4(globalCtx);
            this->actionFunc = func_80959E18;
            return;
        case 4019:
        case 4020:
            func_801477B4(globalCtx);
            this->actionFunc = func_80959E18;
            this->actor.flags &= 0xFFFEFFFF;
            return;
        case 4021:
            func_801477B4(globalCtx);
            this->actionFunc = func_80959E18;
            return;
        default:
            func_801477B4(globalCtx);
            this->actionFunc = func_80959E18;
            /* Duplicate return node #21. Try simplifying control flow for better match */
            return;
        }
    }
}

void func_80959C94(EnMk *this, GlobalContext *globalCtx) {
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_80959A24;
        this->unk_27A &= 0xFFFD;
        func_801518B0(globalCtx, 0xFB3U, (Actor *) this);
        return;
    }
    this->actor.flags |= 0x10000;
    func_800B8500((Actor *) this, globalCtx, 350.0f, 1000.0f, -1);
}

void func_80959D28(EnMk *this, GlobalContext *globalCtx) {
    s8 temp_a0;
    u16 temp_t6;

    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    if ((globalCtx->csCtx.state == 0) && (this->actor.cutscene == -1)) {
        if ((gSaveContext.weekEventReg[20] & 0x40) != 0) {
            temp_t6 = this->unk_27A & 0xFFFE;
            this->unk_27A = temp_t6;
            this->actionFunc = func_80959774;
            this->actor.home.rot.y += 0x4E20;
            this->unk_27A = temp_t6 | 4;
        } else {
            this->actionFunc = func_80959E18;
        }
        this->actor.cutscene = (s8) this->unk_276;
        return;
    }
    temp_a0 = this->actor.cutscene;
    if (temp_a0 != -1) {
        if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
            this->actor.cutscene = -1;
        } else {
            ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        }
    }
    func_8095954C((Actor *) this, globalCtx);
}

void func_80959E18(EnMk *this, GlobalContext *globalCtx) {
    s16 sp22;
    u16 temp_v1;
    s32 phi_v0;

    sp22 = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    if ((gSaveContext.weekEventReg[20] & 0x40) != 0) {
        this->actionFunc = func_80959774;
        this->unk_27A &= 0xFFFE;
        this->actor.home.rot.y += 0x4E20;
        return;
    }
    if (func_800B8718(this, globalCtx) != 0) {
        globalCtx->msgCtx.unk1202A = 4;
        this->actionFunc = func_80959D28;
        if (gSaveContext.playerForm == 2) {
            this->actor.cutscene = (s8) this->unk_276;
            gSaveContext.weekEventReg[20] |= 0x40;
            Item_Give(globalCtx, 0x63U);
        } else {
            this->actor.cutscene = (s8) this->unk_278;
        }
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
    } else if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        func_80959844((Actor *) this, globalCtx);
        this->actionFunc = func_80959A24;
        this->unk_27A |= 1;
    } else if (((this->unk_27A & 2) != 0) && (func_80959524(globalCtx) >= 7)) {
        this->actionFunc = func_80959C94;
    } else {
        temp_v1 = this->unk_27A;
        if (this->actor.xzDistToPlayer < 120.0f) {
            phi_v0 = (s32) sp22;
            if ((s32) sp22 < 0) {
                phi_v0 = -(s32) sp22;
            }
            if (phi_v0 < 0x4301) {
                this->unk_27A = temp_v1 | 1;
                func_800B8614((Actor *) this, globalCtx, 200.0f);
                if (((gSaveContext.weekEventReg[20] & 0x40) == 0) && ((gSaveContext.weekEventReg[19] & 0x40) != 0)) {
                    func_800B874C(this, globalCtx, 0x43480000, 0x42C80000);
                }
            } else {
                goto block_19;
            }
        } else {
block_19:
            this->unk_27A = temp_v1 & 0xFFFE;
        }
    }
    func_8095954C((Actor *) this, globalCtx);
}

void EnMk_Update(Actor *thisx, GlobalContext *globalCtx) {
    ? sp38;
    ColliderCylinder *sp34;
    ColliderCylinder *temp_a2;
    EnMk *this = (EnMk *) thisx;

    temp_a2 = &this->unk_144;
    sp34 = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
    this->actionFunc(this, globalCtx);
    if (((this->unk_27A & 1) != 0) && (func_800EE29C(globalCtx, 0x7FU) == 0)) {
        func_800E9250(globalCtx, (Actor *) this, &this->unk_270, (Vec3s *) &sp38, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
        return;
    }
    Math_SmoothStepToS((s16 *) &this->unk_270, 0, 6, 0x1838, (s16) 0x64);
    Math_SmoothStepToS(&this->unk_270.y, 0, 6, 0x1838, (s16) 0x64);
}

s32 func_8095A150(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xB) {
        arg4->y -= arg5->unk_272;
        arg4->z += arg5->unk_270;
    }
    return 0;
}

void func_8095A198(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 0xB) {
        SysMatrix_MultiplyVector3fByState(&D_8095A2A0, arg4 + 0x3C);
    }
}

void EnMk_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnMk *this = (EnMk *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk_190.skeleton, this->unk_190.limbDrawTbl, (s32) this->unk_190.dListCount, func_8095A150, func_8095A198, (Actor *) this);
}
