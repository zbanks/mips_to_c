void func_80BD13DC(EnZov *arg0);                    /* static */
void func_80BD1440(EnZov *arg0, s16 arg1);          /* static */
void func_80BD1470(EnZov *arg0, s16 arg1, u8 arg2, f32 arg3); /* static */
void func_80BD1570(EnZov *arg1, s32 arg2, ?, EnZov *); /* static */
s32 func_80BD15A4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BD160C(EnZov *arg0, GlobalContext *arg1); /* static */
void func_80BD1764(EnZov *arg0);                    /* static */
s32 func_80BD1AE0(EnZov *arg0, GlobalContext *arg1); /* static */
void func_80BD1D30(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BD1FC8(GlobalContext *arg0, Actor *arg1); /* static */
s32 func_80BD2380(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80BD2404(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_0600D3EC;
extern FlexSkeletonHeader D_06016258;
static ColliderCylinderInit D_80BD26E0 = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x14, 0x28, 0, {0, 0, 0}},
};
static ? D_80BD270C;                                /* unable to generate initializer */
static Vec3f D_80BD2744 = {400.0f, 600.0f, 0.0f};
static Vec3f D_80BD2750 = {400.0f, 600.0f, 0.0f};
static ? D_80BD275C;                                /* unable to generate initializer */
static ? D_80BD2768;                                /* unable to generate initializer */
static ? D_80BD2770;                                /* unable to generate initializer */
static ? D_80BD2774;                                /* unable to generate initializer */

typedef struct EnZov {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 (*unk144)(GlobalContext *, Actor *); /* inferred */
    /* 0x0148 */ Vec3s unk148;                      /* inferred */
    /* 0x014E */ char pad14E[0x84];                 /* maybe part of unk148[23]? */
    /* 0x01D2 */ Vec3s unk1D2;                      /* inferred */
    /* 0x01D8 */ char pad1D8[0x84];                 /* maybe part of unk1D2[23]? */
    /* 0x025C */ SkelAnime unk25C;                  /* inferred */
    /* 0x02A0 */ ColliderCylinder unk2A0;           /* inferred */
    /* 0x02EC */ s16 unk2EC;                        /* inferred */
    /* 0x02EE */ s16 unk2EE;                        /* inferred */
    /* 0x02F0 */ Vec3s unk2F0;                      /* inferred */
    /* 0x02F6 */ Vec3s unk2F6;                      /* inferred */
    /* 0x02FC */ Vec3f unk2FC;                      /* inferred */
    /* 0x0308 */ Vec3f unk308;                      /* inferred */
    /* 0x0314 */ Vec3f unk314;                      /* inferred */
    /* 0x0320 */ u16 unk320;                        /* inferred */
    /* 0x0322 */ s16 unk322;                        /* inferred */
    /* 0x0324 */ s16 unk324;                        /* inferred */
    /* 0x0326 */ s16 unk326;                        /* inferred */
    /* 0x0328 */ s16 unk328;                        /* inferred */
    /* 0x032A */ s16 unk32A;                        /* inferred */
    /* 0x032C */ s16 unk32C;                        /* inferred */
    /* 0x032E */ char pad32E[0x2];                  /* maybe part of unk32C[2]? */
    /* 0x0330 */ void (*actionFunc)(EnZov *, GlobalContext *);
} EnZov;                                            /* size 0x334 */

void EnZov_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnZov *this = (EnZov *) thisx;
    SkelAnime *sp34;
    PosRot *temp_a1_2;
    SkelAnime *temp_a1;
    s32 temp_v0;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    this->actor.colChkInfo.mass = 0xFF;
    Actor_SetScale(&this->actor, 0.01f);
    Collider_InitAndSetCylinder(globalCtx, &this->unk2A0, &this->actor, &D_80BD26E0);
    temp_a1 = &this->unk25C;
    sp34 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06016258, &D_0600D3EC, &this->unk148, &this->unk1D2, 0x17);
    SkelAnime_ChangeAnimDefaultRepeat(sp34, &D_0600D3EC);
    this->unk320 = 0;
    this->unk32C = -1;
    this->unk326 = -1;
    this->unk32A = 0x7C;
    this->unk322 = 0;
    this->actionFunc = func_80BD1C84;
    this->unk144 = func_80BD1FC8;
    temp_a1_2 = &this->actor.world;
    this->unk328 = (s16) this->actor.cutscene;
    sp34 = (SkelAnime *) temp_a1_2;
    Math_Vec3f_Copy(&this->unk2FC, &temp_a1_2->pos);
    Math_Vec3f_Copy(&this->unk308, &temp_a1_2->pos);
    Math_Vec3f_Copy(&this->unk314, &temp_a1_2->pos);
    temp_v0 = this->actor.params & 0xF;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            this->unk320 |= 2;
            if (((gSaveContext.weekEventReg[55] & 0x80) != 0) || ((gSaveContext.weekEventReg[53] & 0x20) != 0)) {
                Actor_MarkForDeath(&this->actor);
            }
            // Duplicate return node #9. Try simplifying control flow for better match
            return;
        }
        this->actionFunc = func_80BD1C38;
        this->actor.shape.shadowDraw = NULL;
        return;
    }
    this->actionFunc = func_80BD1F1C;
    func_80BD1570(this, 9, 0);
    if ((gSaveContext.weekEventReg[55] & 0x80) == 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void EnZov_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnZov *this = (EnZov *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk2A0);
}

void func_80BD13DC(EnZov *arg0) {
    s16 temp_a0;

    if (arg0->unk32C != -1) {
        arg0 = arg0;
        temp_a0 = (arg0 + (arg0->unk32C * 2))->unk328;
        if (ActorCutscene_GetCurrentIndex() == temp_a0) {
            arg0 = arg0;
            ActorCutscene_Stop(temp_a0);
        }
        arg0->unk32C = -1;
    }
}

void func_80BD1440(EnZov *arg0, s16 arg1) {
    func_80BD13DC(arg0);
    arg0->unk32C = arg1;
}

void func_80BD1470(EnZov *arg0, s16 arg1, u8 arg2, f32 arg3) {
    f32 sp3C;
    AnimationHeaderCommon **sp30;
    AnimationHeaderCommon **temp_v1;
    f32 phi_f0;

    if (((arg1 != arg0->unk322) || (arg2 != 0)) && ((s32) arg1 >= 0) && ((s32) arg1 < 0xE)) {
        if (arg1 != 6) {
            if (arg1 != 7) {
                phi_f0 = 0.0f;
            } else {
                phi_f0 = 57.0f;
            }
        } else {
            phi_f0 = 30.0f;
        }
        temp_v1 = (arg1 * 4) + &D_80BD270C;
        sp30 = temp_v1;
        sp3C = phi_f0;
        SkelAnime_ChangeAnim(arg0 + 0x25C, (AnimationHeader *) *temp_v1, 1.0f, phi_f0, (f32) SkelAnime_GetFrameCount(*temp_v1), (u8) (s32) arg2, arg3);
        arg0->unk322 = arg1;
    }
}

void func_80BD1570(s16 arg1, s32 arg2) {
    func_80BD1470((EnZov *) arg1, arg2 & 0xFF, 0x40A00000U);
}

s32 func_80BD15A4(Actor *arg0, GlobalContext *arg1) {
    if ((arg0->xzDistToPlayer < 100.0f) && (Actor_IsLinkFacingActor(arg0, 0x3000, arg1) != 0) && (Actor_IsActorFacingLink(arg0, 0x3000) != 0)) {
        return 1;
    }
    return 0;
}

void func_80BD160C(EnZov *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    u16 temp_v0_2;
    s32 phi_s1;

    phi_s1 = 0;
    if ((gSaveContext.weekEventReg[53] & 0x20) != 0) {
        arg0->unk320 &= 0xFFFD;
        if (gSaveContext.playerForm != 2) {
            temp_v0 = arg0->unk322;
            phi_s1 = 0x1024;
            if ((temp_v0 == 0) || (temp_v0 == 4)) {
                func_80BD1570(arg0, 4, 2);
            } else {
                func_80BD1570(arg0, 6, 2);
            }
            goto block_13;
        }
        temp_v0_2 = arg0->unk320;
        phi_s1 = 0x1022;
        if ((temp_v0_2 & 4) != 0) {
            phi_s1 = 0x1023;
        } else {
            arg0->unk320 = temp_v0_2 | 4;
            func_80BD1570(arg0, 3, 2);
            goto block_13;
        }
    } else {
        if (gSaveContext.playerForm == 2) {
            func_80BD1570(arg0, 2, 2);
            arg0->actionFunc = func_80BD19FC;
            arg0->unk324 = 0xA;
            func_80BD1440(arg0, 0);
        } else {
            func_80BD1570(arg0, 5, 2);
            phi_s1 = 0x1020;
        }
block_13:
    }
    arg0->unk320 |= 1;
    if (phi_s1 != 0) {
        func_801518B0(arg1, phi_s1 & 0xFFFF, &arg0->actor);
    }
}

void func_80BD1764(EnZov *arg0) {
    SkelAnime *sp1C;
    EnZov *temp_a0_2;
    EnZov *temp_a3;
    SkelAnime *temp_a0;
    s16 temp_t6;

    temp_a0 = arg0 + 0x25C;
    sp1C = temp_a0;
    arg0 = arg0;
    temp_a3 = arg0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        temp_t6 = temp_a3->unk322;
        switch (temp_t6) {
        case 1:
        case 6:
            func_80BD1570(temp_a3, 6, 2, temp_a3);
            break;
        case 3:
        case 7:
            func_80BD1570(temp_a3, 7, 2, temp_a3);
            break;
        case 4:
            func_80BD1570(temp_a3, 0, 0, temp_a3);
            break;
        case 8:
            func_80BD1570(temp_a3, 9, 0, temp_a3);
            break;
        case 10:
            func_80BD1570(temp_a3, 0xB, 0, temp_a3);
            break;
        case 12:
            func_80BD1570(temp_a3, 0xD, 0, temp_a3);
            break;
        default:
            temp_a0_2 = temp_a3;
            arg0 = temp_a3;
            func_80BD1570(temp_a0_2, 0, 0, temp_a3);
            arg0->unk320 &= 0xFFFE;
            break;
        }
        SkelAnime_FrameUpdateMatrix(sp1C);
    }
}

void func_80BD187C(EnZov *this, GlobalContext *globalCtx) {
    s16 temp_v0_3;
    u16 temp_v0_2;
    u8 temp_v0;

    func_80BD1764(this);
    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 != 2) {
        if ((temp_v0 == 5) && (func_80147624(globalCtx) != 0)) {
            temp_v0_2 = globalCtx->msgCtx.unk11F04;
            if (temp_v0_2 != 0x1022) {
                if (temp_v0_2 != 0x1023) {
                    if (temp_v0_2 != 0x1024) {
                        this->unk320 &= 0xFFFE;
                        func_80BD1570(this, 0, 0, (EnZov *) globalCtx);
                        func_801477B4(globalCtx);
                        this->actionFunc = func_80BD1C84;
                        return;
                    }
                    if (this->unk322 != 6) {
                        func_80BD1570(this, 0, 0, (EnZov *) globalCtx);
                    }
                    func_801477B4(globalCtx);
                    this->actionFunc = func_80BD1C84;
                    return;
                }
                temp_v0_3 = this->unk322;
                if ((temp_v0_3 != 6) && (temp_v0_3 != 1)) {
                    func_80BD1570(this, 1, 2, (EnZov *) globalCtx);
                }
                func_801477B4(globalCtx);
                this->actionFunc = func_80BD1C84;
                return;
            }
            func_80151938(globalCtx, 0x1023U);
            return;
        }
        // Duplicate return node #17. Try simplifying control flow for better match
        return;
    }
    func_801477B4(globalCtx);
    this->actionFunc = func_80BD1C84;
    this->unk320 &= 0xFFFE;
    func_80BD1570(this, 0, 0);
}

void func_80BD19FC(EnZov *this, GlobalContext *globalCtx) {
    Actor *temp_v0_3;
    s16 temp_v0_2;
    u16 temp_v0;

    func_80BD1764(this);
    if (this->unk322 == 0) {
        temp_v0 = this->unk320;
        if ((temp_v0 & 2) == 0) {
            this->unk320 = temp_v0 | 2;
            this->unk2EE = 3;
        }
        temp_v0_2 = this->unk324;
        if ((s32) temp_v0_2 > 0) {
            this->unk324 = temp_v0_2 - 1;
            return;
        }
        func_80BD13DC(this);
        func_801518B0(globalCtx, 0x1021U, &this->actor);
        temp_v0_3 = globalCtx->actorCtx.actorList[2].first->unkA80;
        temp_v0_3->unk264 = (u16) (temp_v0_3->unk264 | 4);
        func_800B86C8(&this->actor, globalCtx, globalCtx->actorCtx.actorList[2].first->unkA80);
        this->actionFunc = func_80BD187C;
        return;
    }
    if (func_801378B8(&this->unk25C, 10.0f) != 0) {
        this->unk2EE = 3;
        this->unk320 &= 0xFFFD;
    }
}

s32 func_80BD1AE0(EnZov *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s16 temp_v1;

    func_80BD1764(arg0);
    if (func_800EE29C(arg1, 0x1F8U) != 0) {
        temp_v1 = (s16) arg1->csCtx.npcActions[func_800EE200(arg1, 0x1F8U)]->unk0;
        if (temp_v1 != arg0->unk326) {
            arg0->unk326 = temp_v1;
            temp_v0 = arg0->unk326;
            if (temp_v0 != 1) {
                if (temp_v0 != 2) {
                    if (temp_v0 != 3) {
                        if (temp_v0 != 4) {
                            return 1;
                        }
                        func_80BD1570(arg0, 0xC, 2);
                        goto block_11;
                    }
                    func_80BD1470(arg0, 0xA, 2U, 0.0f);
                    return 1;
                }
                func_80BD1570(arg0, 8, 2);
                arg0->unk320 |= 0x10;
                return 1;
            }
            func_80BD1570(arg0, 0, 0);
            return 1;
        }
block_11:
        return 1;
    }
    return 0;
}

void func_80BD1BF0(EnZov *this, GlobalContext *globalCtx) {
    if (func_80BD1AE0(this) == 0) {
        func_80BD1570(this, 0, 0);
        this->actionFunc = func_80BD1C84;
    }
}

void func_80BD1C38(EnZov *this, GlobalContext *globalCtx) {
    if (func_80BD1AE0(this, globalCtx) != 0) {
        func_800EDF24(&this->actor, globalCtx, func_800EE200(globalCtx, 0x1F8U));
    }
}

void func_80BD1C84(EnZov *this, GlobalContext *globalCtx) {
    func_80BD1764(this);
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        this->actionFunc = func_80BD187C;
        func_80BD160C(this, globalCtx);
    } else if (func_80BD15A4(&this->actor, globalCtx) != 0) {
        func_800B8614(&this->actor, globalCtx, 120.0f);
    }
    if (func_800EE29C(globalCtx, 0x1F8U) != 0) {
        this->actionFunc = func_80BD1BF0;
        func_80BD1BF0(this, globalCtx);
    }
}

void func_80BD1D30(Actor *arg0, GlobalContext *arg1) {
    u16 phi_a1;

    phi_a1 = 0x1031U;
    if (gSaveContext.playerForm == 2) {
        if ((gSaveContext.weekEventReg[79] & 1) != 0) {
            phi_a1 = 0x1032U;
        } else {
            phi_a1 = 0x1033U;
        }
    }
    func_801518B0(arg1, phi_a1, arg0);
}

void func_80BD1D94(EnZov *this, GlobalContext *globalCtx) {
    func_80BD1764();
}

void func_80BD1DB8(EnZov *this, GlobalContext *globalCtx) {
    u16 temp_v0;

    func_80BD1764(this);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 2, 0x1000, (s16) 0x200);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        temp_v0 = globalCtx->msgCtx.unk11F04;
        switch (temp_v0) {
        case 4147:
        case 4148:
        case 4149:
        case 4150:
        case 4151:
        case 4152:
            func_80151938(globalCtx, (temp_v0 + 1) & 0xFFFF);
            return;
        case 4153:
            globalCtx->nextEntranceIndex = globalCtx->setupExitList[(s32) (this->actor.params & 0xFE00) >> 9];
            globalCtx->unk_1887F = 5;
            globalCtx->sceneLoadFlag = 0x14;
            gSaveContext.weekEventReg[78] |= 1;
            this->actionFunc = func_80BD1D94;
            globalCtx->msgCtx.unk11F10 = 0;
            func_801A89A8(0x101400FF);
            return;
        default:
            func_801477B4(globalCtx);
            this->actionFunc = func_80BD1F1C;
            // Duplicate return node #7. Try simplifying control flow for better match
            return;
        }
    }
}

void func_80BD1F1C(EnZov *this, GlobalContext *globalCtx) {
    s16 temp_a1;

    func_80BD1764(this);
    temp_a1 = this->actor.home.rot.y;
    if (this->actor.shape.rot.y != temp_a1) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, temp_a1, 2, 0x1000, (s16) 0x200);
        this->actor.world.rot.y = this->actor.shape.rot.y;
    }
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        this->actionFunc = func_80BD1DB8;
        func_80BD1D30(&this->actor, globalCtx);
        return;
    }
    if (func_80BD15A4(&this->actor, globalCtx) != 0) {
        func_800B8614(&this->actor, globalCtx, 120.0f);
    }
}

s32 func_80BD1FC8(GlobalContext *arg0, Actor *arg1) {
    s32 sp34;
    Vec3s *sp28;
    Vec3s *temp_v0;
    s32 temp_v1;

    temp_v0 = arg1 + 0xBC;
    sp28 = temp_v0;
    sp34 = func_8013A530(arg0, arg1, 4, arg1 + 0x3C, temp_v0, 10.0f, 300.0f, (s16) -1);
    temp_v1 = sp34 | func_8013A530(arg0, arg1, 5, arg1 + 0x308, sp28, 50.0f, 160.0f, (s16) 0x3000);
    sp34 = temp_v1;
    return temp_v1 | func_8013A530(arg0, arg1, 6, arg1 + 0x314, sp28, 50.0f, 160.0f, (s16) 0x3000);
}

void EnZov_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnZov *this = (EnZov *) thisx;
    ColliderCylinder *sp34;
    ColliderCylinder *temp_a2;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 phi_v0;
    s16 phi_v1;

    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    temp_a2 = &this->unk2A0;
    sp34 = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 10.0f, 10.0f, 10.0f, 4U);
    this->actionFunc(this, globalCtx);
    if (func_800EE29C(globalCtx, 0x1F8U) == 0) {
        this->unk320 &= 0xFFEF;
    }
    if (((this->unk320 & 1) != 0) && (func_80BD15A4(&this->actor, globalCtx) != 0)) {
        func_800E9250(globalCtx, &this->actor, &this->unk2F0, &this->unk2F6, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
    } else {
        if (((this->unk320 & 0x10) != 0) && (this->unk322 == 0)) {
            Math_SmoothStepToS(&this->unk2F0.x, -0x1B58, 6, 0x1838, (s16) 0x64);
        } else {
            Math_SmoothStepToS(&this->unk2F0.x, 0, 6, 0x1838, (s16) 0x64);
        }
        Math_SmoothStepToS(&this->unk2F0.y, 0, 6, 0x1838, (s16) 0x64);
        Math_SmoothStepToS(&this->unk2F6.x, 0, 6, 0x1838, (s16) 0x64);
        Math_SmoothStepToS(&this->unk2F6.y, 0, 6, 0x1838, (s16) 0x64);
    }
    temp_v1 = this->unk2EE;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        this->unk2EE = temp_v1 - 1;
        phi_v0 = this->unk2EE;
    }
    phi_v1 = this->unk2EE;
    if (phi_v0 == 0) {
        this->unk2EE = Rand_S16Offset(0x3C, 0x3C);
        phi_v1 = this->unk2EE;
    }
    this->unk2EC = phi_v1;
    if ((s32) this->unk2EC >= 3) {
        this->unk2EC = 0;
    }
    if ((this->unk32C != -1) && (temp_v1_2 = this->unk32C, (ActorCutscene_GetCurrentIndex() != (this + (temp_v1_2 * 2))->unk328))) {
        if ((temp_v1_2 == 0) && (ActorCutscene_GetCurrentIndex() == 0x7C)) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay((this + (this->unk32C * 2))->unk328);
            return;
        }
        if (ActorCutscene_GetCanPlayNext((this + (this->unk32C * 2))->unk328) != 0) {
            ActorCutscene_Start((this + (this->unk32C * 2))->unk328, &this->actor);
            return;
        }
        ActorCutscene_SetIntentToPlay((this + (this->unk32C * 2))->unk328);
        // Duplicate return node #25. Try simplifying control flow for better match
    }
}

s32 func_80BD2380(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xC) {
        arg4->x += arg5->unk2F2;
        if (((arg5->unk320 & 0x10) != 0) && (arg5->unk322 == 0)) {
            arg4->z += arg5->unk2F0;
        }
    }
    if (arg1 == 0xB) {
        arg4->x += arg5->unk2F8;
    }
    return 0;
}

void func_80BD2404(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f *sp20;
    Vec3f *temp_a1;

    if (arg1 == 0xC) {
        temp_a1 = arg4 + 0x3C;
        sp20 = temp_a1;
        SysMatrix_MultiplyVector3fByState(&D_80BD2744, temp_a1);
        Math_Vec3f_Copy(arg4 + 0x2FC, temp_a1);
        arg4->unk300 = (f32) (arg4->unk300 + 10.0f);
    }
    if (arg1 == 0x12) {
        SysMatrix_MultiplyVector3fByState(&D_80BD2750, arg4 + 0x308);
    }
    if (arg1 == 0xD) {
        SysMatrix_MultiplyVector3fByState(&D_80BD2750, arg4 + 0x314);
    }
}

void EnZov_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnZov *this = (EnZov *) thisx;
    Gfx *sp38;
    s32 sp30;
    GraphicsContext *sp28;
    Gfx *temp_t0;
    GraphicsContext *temp_a0;
    s16 temp_a0_2;
    s32 temp_f6;
    u16 temp_t8;
    u8 temp_v1;
    s32 phi_a1;
    u8 phi_v1;

    temp_a0 = globalCtx->state.gfxCtx;
    sp28 = temp_a0;
    func_8012C28C(temp_a0);
    temp_t8 = (u16) this->unk322;
    temp_a0_2 = this->unk2EC;
    temp_f6 = (s32) this->unk25C.animCurrentFrame;
    temp_v1 = temp_a0_2 & 0xFF;
    phi_a1 = 0;
    phi_v1 = temp_v1;
    phi_v1 = temp_v1;
    switch (temp_t8) {
    case 0:
        if ((temp_a0_2 == 0) && ((this->unk320 & 0x10) == 0)) {
            phi_v1 = 1U;
        }
        break;
    case 5:
        if (temp_a0_2 == 0) {
            phi_v1 = 1U;
        }
        break;
    case 2:
        if (temp_f6 < 0x17) {
            phi_v1 = 0U;
        } else if (temp_f6 >= 0x1A) {
            phi_v1 = 1U;
        } else if (temp_f6 == 0x18) {
            phi_v1 = 0U;
        } else {
            phi_v1 = 1U;
        }
        break;
    case 3:
    case 7:
        if (temp_f6 < 0x33) {
            if (temp_f6 < 0x2B) {
                phi_v1 = 0U;
            } else {
                phi_v1 = *(&D_80BD2770 + ((temp_f6 - 0x2B) & 3));
                goto block_18;
            }
        } else {
block_18:
        }
block_25:
        phi_a1 = 1;
        break;
    case 4:
        phi_v1 = 1U;
        if ((temp_f6 < 0xE) || (temp_f6 >= 0x18)) {

        } else {
            phi_v1 = *(&D_80BD2774 + ((temp_f6 - 0xE) & 3));
        }
        goto block_25;
    case 8:
        phi_v1 = 0U;
        break;
    case 9:
        phi_v1 = 0U;
        goto block_25;
    }
    temp_t0 = sp28->polyOpa.p;
    temp_t0->words.w0 = 0xDB060024;
    sp38 = temp_t0;
    sp30 = phi_a1;
    temp_t0->words.w1 = Lib_SegmentedToVirtual(*(&D_80BD275C + (phi_v1 * 4)));
    temp_t0->unk8 = 0xDB060020;
    sp38 = temp_t0;
    temp_t0->unkC = Lib_SegmentedToVirtual(*(&D_80BD2768 + (phi_a1 * 4)));
    sp28->polyOpa.p = temp_t0 + 0x10;
    SkelAnime_DrawSV(globalCtx, this->unk25C.skeleton, this->unk25C.limbDrawTbl, (s32) this->unk25C.dListCount, func_80BD2380, func_80BD2404, &this->actor);
}

