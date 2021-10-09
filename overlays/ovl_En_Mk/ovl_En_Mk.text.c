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

typedef struct EnMk {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderCylinder unk144;           /* inferred */
    /* 0x0190 */ SkelAnime unk190;                  /* inferred */
    /* 0x01D4 */ Vec3s unk1D4;                      /* inferred */
    /* 0x01DA */ char pad1DA[0x48];                 /* maybe part of unk1D4[13]? */
    /* 0x0222 */ Vec3s unk222;                      /* inferred */
    /* 0x0228 */ char pad228[0x48];                 /* maybe part of unk222[13]? */
    /* 0x0270 */ Vec3s unk270;                      /* inferred */
    /* 0x0276 */ s16 unk276;                        /* inferred */
    /* 0x0278 */ s16 unk278;                        /* inferred */
    /* 0x027A */ u16 unk27A;                        /* inferred */
    /* 0x027C */ s16 unk27C;                        /* inferred */
    /* 0x027E */ char pad27E[0x2];                  /* maybe part of unk27C[2]? */
    /* 0x0280 */ void (*actionFunc)(EnMk *, GlobalContext *);
} EnMk;                                             /* size 0x284 */

? func_809592E0(EnMk *arg0, s16 arg1) {
    ? sp1C;
    AnimationHeader *temp_a1;
    SkelAnime *temp_a0;

    sp1C.unk0 = (s32) D_8095A28C.unk0;
    sp1C.unk4 = (s32) D_8095A28C.unk4;
    sp1C.unk8 = (s32) D_8095A28C.unk8;
    sp1C.unkC = (s32) D_8095A28C.unkC;
    sp1C.unk10 = (s32) D_8095A28C.unk10;
    if (arg1 == arg0->unk27C) {
        return 0;
    }
    if (((s32) arg1 < 0) || (temp_a0 = arg0 + 0x190, (((s32) arg1 < 5) == 0))) {
        return 0;
    }
    temp_a1 = *(&sp1C + (arg1 * 4));
    arg0 = arg0;
    arg1 = arg1;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, temp_a1);
    arg0->unk27C = arg1;
    return 1;
}

void EnMk_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnMk *this = (EnMk *) thisx;
    s32 temp_s1;
    s16 phi_s0;
    EnMk *phi_s2;
    s32 phi_s1;

    this->actor.minVelocityY = -4.0f;
    this->actor.gravity = -1.0f;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 36.0f);
    SkelAnime_InitSV(globalCtx, &this->unk190, &D_06006CA0, &D_06001C38, &this->unk1D4, &this->unk222, 0xD);
    this->unk27C = -1;
    func_809592E0(this, 0);
    Collider_InitAndSetCylinder(globalCtx, &this->unk144, &this->actor, &D_8095A260);
    this->actor.colChkInfo.mass = 0xFF;
    Actor_SetScale(&this->actor, 0.01f);
    this->actionFunc = func_80959E18;
    this->unk27A = 0;
    this->actor.targetMode = 6;
    phi_s1 = 0;
    if (func_80959524(globalCtx) < 7) {
        this->unk27A |= 2;
    }
    phi_s0 = (s16) this->actor.cutscene;
    phi_s2 = this;
    do {
        phi_s2->unk276 = phi_s0;
        if (phi_s0 != -1) {
            this->actor.cutscene = (s8) phi_s0;
            phi_s0 = ActorCutscene_GetAdditionalCutscene((s16) this->actor.cutscene);
        }
        temp_s1 = phi_s1 + 2;
        phi_s2 += 2;
        phi_s1 = temp_s1;
    } while (temp_s1 != 4);
    this->actor.cutscene = (s8) this->unk276;
}

void EnMk_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnMk *this = (EnMk *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk144);
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
        if ((arg0->unk27A & 4) != 0) {
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

    SkelAnime_FrameUpdateMatrix(&this->unk190);
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
        // Duplicate return node #9. Try simplifying control flow for better match
        return;
    }
    this->actionFunc = func_80959774;
}

void func_80959774(EnMk *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk190);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.home.rot.y, 3, 0x400, (s16) 0x80);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        func_80959624(&this->actor, globalCtx);
        this->actionFunc = func_809596A0;
    } else if ((this->actor.xzDistToPlayer < 120.0f) && (Actor_IsLinkFacingActor(&this->actor, 0x3000, globalCtx) != 0)) {
        func_800B8614(&this->actor, globalCtx, 130.0f);
    }
    func_8095954C(&this->actor, globalCtx);
}

void func_80959844(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u16 phi_a1;

    if (((arg0->unk27A & 2) != 0) && (func_80959524(arg1) >= 7)) {
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
    SkelAnime_FrameUpdateMatrix(&this->unk190);
    this->unk27A |= 1;
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
            // Duplicate return node #21. Try simplifying control flow for better match
            return;
        }
    }
}

void func_80959C94(EnMk *this, GlobalContext *globalCtx) {
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        this->actionFunc = func_80959A24;
        this->unk27A &= 0xFFFD;
        func_801518B0(globalCtx, 0xFB3U, &this->actor);
        return;
    }
    this->actor.flags |= 0x10000;
    func_800B8500(&this->actor, globalCtx, 350.0f, 1000.0f, -1);
}

void func_80959D28(EnMk *this, GlobalContext *globalCtx) {
    s8 temp_a0;
    u16 temp_t6;

    SkelAnime_FrameUpdateMatrix(&this->unk190);
    if ((globalCtx->csCtx.state == 0) && (this->actor.cutscene == -1)) {
        if ((gSaveContext.weekEventReg[20] & 0x40) != 0) {
            temp_t6 = this->unk27A & 0xFFFE;
            this->unk27A = temp_t6;
            this->actionFunc = func_80959774;
            this->actor.home.rot.y += 0x4E20;
            this->unk27A = temp_t6 | 4;
        } else {
            this->actionFunc = func_80959E18;
        }
        this->actor.cutscene = (s8) this->unk276;
        return;
    }
    temp_a0 = this->actor.cutscene;
    if (temp_a0 != -1) {
        if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, &this->actor);
            this->actor.cutscene = -1;
        } else {
            ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        }
    }
    func_8095954C(&this->actor, globalCtx);
}

void func_80959E18(EnMk *this, GlobalContext *globalCtx) {
    s16 sp22;
    u16 temp_v1;
    s32 phi_v0;

    sp22 = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    SkelAnime_FrameUpdateMatrix(&this->unk190);
    if ((gSaveContext.weekEventReg[20] & 0x40) != 0) {
        this->actionFunc = func_80959774;
        this->unk27A &= 0xFFFE;
        this->actor.home.rot.y += 0x4E20;
        return;
    }
    if (func_800B8718(this, globalCtx) != 0) {
        globalCtx->msgCtx.unk1202A = 4;
        this->actionFunc = func_80959D28;
        if (gSaveContext.playerForm == 2) {
            this->actor.cutscene = (s8) this->unk276;
            gSaveContext.weekEventReg[20] |= 0x40;
            Item_Give(globalCtx, 0x63U);
        } else {
            this->actor.cutscene = (s8) this->unk278;
        }
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
    } else if (func_800B84D0(&this->actor, globalCtx) != 0) {
        func_80959844(&this->actor, globalCtx);
        this->actionFunc = func_80959A24;
        this->unk27A |= 1;
    } else if (((this->unk27A & 2) != 0) && (func_80959524(globalCtx) >= 7)) {
        this->actionFunc = func_80959C94;
    } else {
        temp_v1 = this->unk27A;
        if (this->actor.xzDistToPlayer < 120.0f) {
            phi_v0 = (s32) sp22;
            if ((s32) sp22 < 0) {
                phi_v0 = -(s32) sp22;
            }
            if (phi_v0 < 0x4301) {
                this->unk27A = temp_v1 | 1;
                func_800B8614(&this->actor, globalCtx, 200.0f);
                if (((gSaveContext.weekEventReg[20] & 0x40) == 0) && ((gSaveContext.weekEventReg[19] & 0x40) != 0)) {
                    func_800B874C(this, globalCtx, 0x43480000, 0x42C80000);
                }
            } else {
                goto block_19;
            }
        } else {
block_19:
            this->unk27A = temp_v1 & 0xFFFE;
        }
    }
    func_8095954C(&this->actor, globalCtx);
}

void EnMk_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnMk *this = (EnMk *) thisx;
    Vec3s sp38;
    ColliderCylinder *sp34;
    ColliderCylinder *temp_a2;

    temp_a2 = &this->unk144;
    sp34 = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4U);
    this->actionFunc(this, globalCtx);
    if (((this->unk27A & 1) != 0) && (func_800EE29C(globalCtx, 0x7FU) == 0)) {
        func_800E9250(globalCtx, &this->actor, &this->unk270, &sp38, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
        return;
    }
    Math_SmoothStepToS(&this->unk270.x, 0, 6, 0x1838, (s16) 0x64);
    Math_SmoothStepToS(&this->unk270.y, 0, 6, 0x1838, (s16) 0x64);
}

s32 func_8095A150(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xB) {
        arg4->y -= arg5->unk272;
        arg4->z += arg5->unk270;
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
    SkelAnime_DrawSV(globalCtx, this->unk190.skeleton, this->unk190.limbDrawTbl, (s32) this->unk190.dListCount, func_8095A150, func_8095A198, &this->actor);
}

