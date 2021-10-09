? func_800B9084();                                  /* extern */
void func_80BFA2FC(GlobalContext *arg0);            /* static */
void func_80BFA350(Actor *actor, Lights *mapper, GlobalContext *globalCtx); /* static */
void func_80BFA444(GlobalContext *arg0, EnYb *arg1, s16 arg2, u8 arg3, f32 arg4); /* static */
s32 func_80BFA5CC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BFA634(EnYb *arg0, GlobalContext *arg1); /* static */
void func_80BFA67C(EnYb *arg0);                     /* static */
void func_80BFA6E0(EnYb *arg0, s16 arg1);           /* static */
void func_80BFA710(EnYb *);                         /* static */
void func_80BFB074(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80BFB0E0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **gfx); /* static */
extern AnimationHeader D_06000200;
extern FlexSkeletonHeader D_06005F48;
static ColliderCylinderInit D_80BFB2B0 = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x14, 0x28, 0, {0, 0, 0}},
};
static ? D_80BFB2DC;                                /* unable to generate initializer */
static ? D_80BFB2E0;                                /* unable to generate initializer */
static Vec3f D_80BFB2E8 = {0.0f, 0.5f, 0.0f};
static Vec3f D_80BFB2F4 = {500.0f, -500.0f, 0.0f};
static Vec3f D_80BFB300 = {500.0f, -500.0f, 0.0f};

typedef struct EnYb {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ ? unk188;                          /* inferred */
    /* 0x0189 */ char pad189[0x117];
    /* 0x02A0 */ ? unk2A0;                          /* inferred */
    /* 0x02A1 */ char pad2A1[0x117];
    /* 0x03B8 */ ColliderCylinder unk3B8;           /* inferred */
    /* 0x0404 */ char pad404[0xC];
    /* 0x0410 */ u16 unk410;                        /* inferred */
    /* 0x0412 */ s16 unk412;                        /* inferred */
    /* 0x0414 */ s16 unk414;                        /* inferred */
    /* 0x0416 */ s16 unk416;                        /* inferred */
    /* 0x0418 */ char pad418[0x2];                  /* maybe part of unk416[2]? */
    /* 0x041A */ s16 unk41A;                        /* inferred */
    /* 0x041C */ s16 unk41C;                        /* inferred */
    /* 0x041E */ char pad41E[0x2];                  /* maybe part of unk41C[2]? */
    /* 0x0420 */ void (*actionFunc)(EnYb *, GlobalContext *);
} EnYb;                                             /* size 0x424 */

void EnYb_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnYb *this = (EnYb *) thisx;
    SkelAnime *temp_s0;
    s32 temp_s1;
    s16 phi_s0;
    EnYb *phi_s2;
    s32 phi_s1;

    Actor_SetScale(&this->actor, 0.01f);
    ActorShape_Init(&this->actor.shape, 0.0f, func_80BFA350, 20.0f);
    temp_s0 = &this->unk144;
    SkelAnime_InitSV(globalCtx, temp_s0, &D_06005F48, &D_06000200, (Vec3s *) ((s32) &this->unk188 & ~0xF), (Vec3s *) ((s32) &this->unk2A0 & ~0xF), 0x16);
    SkelAnime_ChangeAnimDefaultRepeat(temp_s0, &D_06000200);
    Collider_InitAndSetCylinder(globalCtx, &this->unk3B8, &this->actor, &D_80BFB2B0);
    this->actor.colChkInfo.mass = 0xFF;
    this->actionFunc = func_80BFAC88;
    this->unk412 = 3;
    this->actor.minVelocityY = -9.0f;
    this->actor.gravity = -1.0f;
    func_80BFA444(globalCtx, this, 2, 0U, 0.0f);
    phi_s0 = (s16) this->actor.cutscene;
    phi_s2 = this;
    phi_s1 = 0;
    do {
        phi_s2->unk416 = phi_s0;
        if (phi_s0 != -1) {
            this->actor.cutscene = (s8) phi_s0;
            phi_s0 = ActorCutscene_GetAdditionalCutscene((s16) this->actor.cutscene);
        }
        temp_s1 = phi_s1 + 2;
        phi_s2 += 2;
        phi_s1 = temp_s1;
    } while (temp_s1 != 4);
    this->unk41A = -1;
    this->actor.cutscene = (s8) this->unk416;
    if ((s32) gSaveContext.time < 0x4000) {
        this->unk414 = 0xFF;
    } else {
        this->unk414 = 0;
        this->actionFunc = func_80BFAE80;
        this->actor.flags &= -2;
    }
    if ((gSaveContext.weekEventReg[82] & 4) != 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void EnYb_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnYb *this = (EnYb *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk3B8);
}

void func_80BFA2FC(GlobalContext *arg0) {
    if (gSaveContext.inventory.items[gItemSlots[0x43]] == 0x43) {
        func_80151BB4(arg0, 0x34U);
    }
    func_80151BB4(arg0, 0xFU);
}

void func_80BFA350(Actor *actor, Lights *mapper, GlobalContext *globalCtx) {
    Vec3f sp34;
    PosRot *sp28;
    PosRot *temp_a1;
    f32 temp_f0;

    temp_a1 = &actor->world;
    if ((s32) actor->unk414 > 0) {
        if (actor->unk412 == 2) {
            actor->scale.x = (((27.0f - actor->unk408) + actor->world.pos.y) * 0.00044444448f) + 0.01f;
        }
        sp28 = temp_a1;
        Math_Vec3f_Copy(&sp34, &temp_a1->pos);
        Math_Vec3f_Copy(&sp28->pos, actor + 0x404);
        func_800B4AEC(globalCtx, actor, 50.0f);
        temp_f0 = actor->floorHeight;
        if (sp34.y < temp_f0) {
            actor->world.pos.y = temp_f0;
        } else {
            actor->world.pos.y = sp34.y;
        }
        func_800B3FC0(actor, mapper, globalCtx);
        Math_Vec3f_Copy(&sp28->pos, &sp34);
        actor->scale.x = 0.01f;
    }
}

void func_80BFA444(GlobalContext *arg0, EnYb *arg1, s16 arg2, u8 arg3, f32 arg4) {
    AnimationHeaderCommon **sp34;
    AnimationHeaderCommon **temp_v1;
    AnimationHeaderCommon **temp_v1_2;
    AnimationHeaderCommon **temp_v1_3;
    u8 temp_a3;

    temp_a3 = arg3 & 0xFF;
    if (((s32) arg2 >= 0) && ((s32) arg2 < 3) && ((arg2 != arg1->unk412) || (temp_a3 != 0))) {
        if ((s32) arg2 > 0) {
            if (temp_a3 == 0) {
                temp_v1 = (arg2 * 4) + &D_80BFB2E0;
                sp34 = temp_v1;
                SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x144, (LinkAnimationHeader *) temp_v1->unk-4, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(temp_v1->unk-4), (u8) 0, arg4);
            } else {
                temp_v1_2 = (arg2 * 4) + &D_80BFB2E0;
                sp34 = temp_v1_2;
                SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x144, (LinkAnimationHeader *) temp_v1_2->unk-4, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(temp_v1_2->unk-4), (u8) 0, arg4);
            }
        } else {
            temp_v1_3 = (arg2 * 4) + &D_80BFB2DC;
            sp34 = temp_v1_3;
            arg3 = temp_a3;
            SkelAnime_ChangeAnim(arg1 + 0x144, (AnimationHeader *) *temp_v1_3, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*temp_v1_3), (u8) (s32) arg3, arg4);
        }
        arg1->unk412 = arg2;
    }
}

s32 func_80BFA5CC(Actor *arg0, GlobalContext *arg1) {
    if ((arg0->xzDistToPlayer < 100.0f) && (Actor_IsLinkFacingActor(arg0, 0x3000, arg1) != 0) && (Actor_IsActorFacingLink(arg0, 0x3000) != 0)) {
        return 1;
    }
    return 0;
}

void func_80BFA634(EnYb *arg0, GlobalContext *arg1) {
    if ((s32) arg0->unk412 <= 0) {
        SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
        return;
    }
    func_801360E0(arg1, arg0 + 0x144);
}

void func_80BFA67C(EnYb *arg0) {
    s16 temp_a0;

    if (arg0->unk41A != -1) {
        arg0 = arg0;
        temp_a0 = (arg0 + (arg0->unk41A * 2))->unk416;
        if (ActorCutscene_GetCurrentIndex() == temp_a0) {
            arg0 = arg0;
            ActorCutscene_Stop(temp_a0);
        }
        arg0->unk41A = -1;
    }
}

void func_80BFA6E0(EnYb *arg0, s16 arg1) {
    func_80BFA67C(arg0);
    arg0->unk41A = arg1;
}

void func_80BFA710(void) {
    func_800B9084();
}

void func_80BFA730(EnYb *this, GlobalContext *globalCtx) {
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 *temp_s3;
    s16 temp_v0;
    s32 temp_s0;
    s32 phi_s0;

    func_80BFA634(this, globalCtx);
    temp_s3 = &sp60;
    phi_s0 = 3;
    do {
        sp60 = randPlusMinusPoint5Scaled(60.0f) + this->actor.world.pos.x;
        sp68 = randPlusMinusPoint5Scaled(60.0f) + this->actor.world.pos.z;
        sp64 = randPlusMinusPoint5Scaled(50.0f) + (this->actor.world.pos.y + 20.0f);
        func_800B3030(globalCtx, (Vec3f *) temp_s3, &D_80BFB2E8, &D_80BFB2E8, (s16) 0x64, (s16) 0, 2);
        temp_s0 = phi_s0 - 1;
        phi_s0 = temp_s0;
    } while (temp_s0 >= 0);
    Audio_PlaySoundAtPosition(globalCtx, &this->actor.world.pos, 0x14, 0x3878U);
    temp_v0 = this->unk414;
    if ((s32) temp_v0 >= 0xB) {
        this->unk414 = temp_v0 - 0xA;
        return;
    }
    Actor_MarkForDeath(&this->actor);
}

void func_80BFA868(EnYb *this, GlobalContext *globalCtx) {
    func_80BFA634(this, globalCtx);
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        this->actor.flags &= 0xFFFEFFFF;
        this->actionFunc = func_80BFA9D4;
        func_801518B0(globalCtx, 0x147DU, &this->actor);
        func_80BFA2FC(globalCtx);
    } else {
        func_800B8500(&this->actor, globalCtx, 1000.0f, 1000.0f, -1);
    }
    func_80BFA710(this);
}

void func_80BFA91C(EnYb *this, GlobalContext *globalCtx) {
    func_80BFA634(this, globalCtx);
    if (Actor_HasParent(&this->actor, globalCtx) != 0) {
        this->actor.parent = NULL;
        this->actionFunc = func_80BFA868;
        this->actor.flags |= 0x10000;
        func_800B8500(&this->actor, globalCtx, 1000.0f, 1000.0f, -1);
    } else {
        func_800B8A1C(&this->actor, globalCtx, 0x89, 10000.0f, 100.0f);
    }
    func_80BFA710(this);
}

void func_80BFA9D4(EnYb *this, GlobalContext *globalCtx) {
    u16 temp_v0;

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 2, 0x1000, (s16) 0x200);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    func_80BFA634(this, globalCtx);
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        temp_v0 = globalCtx->msgCtx.unk11F04;
        if (temp_v0 != 0x147C) {
            if (temp_v0 == 0x147D) {
                func_801477B4(globalCtx);
                this->actionFunc = func_80BFA730;
                gSaveContext.weekEventReg[82] |= 4;
            } else {
                func_801477B4(globalCtx);
                this->actionFunc = func_80BFAC88;
            }
        } else if (Player_GetMask(globalCtx) == 0xE) {
            func_801477B4(globalCtx);
            this->actionFunc = func_80BFAC88;
        } else if (gSaveContext.inventory.items[gItemSlots[0x43]] == 0x43) {
            func_80151938(globalCtx, 0x147DU);
            func_80BFA2FC(globalCtx);
        } else {
            func_801477B4(globalCtx);
            this->actionFunc = func_80BFA91C;
            func_80BFA91C(this, globalCtx);
        }
    }
    func_80BFA710(this);
}

void func_80BFAB4C(EnYb *this, GlobalContext *globalCtx) {
    func_80BFA634(this, globalCtx);
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        this->actionFunc = func_80BFA9D4;
        func_801518B0(globalCtx, 0x147CU, &this->actor);
        this->actor.flags &= 0xFFFEFFFF;
    } else {
        func_800B8500(&this->actor, globalCtx, 1000.0f, 1000.0f, -1);
    }
    func_80BFA710(this);
}

void func_80BFABF0(EnYb *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    func_80BFA634(this, globalCtx);
    temp_v0 = this->unk41C;
    if ((s32) temp_v0 > 0) {
        this->unk41C = temp_v0 - 1;
    } else {
        func_80BFA67C(this);
        this->actionFunc = func_80BFAB4C;
        this->actor.flags |= 0x10000;
        func_800B8500(&this->actor, globalCtx, 1000.0f, 1000.0f, -1);
    }
    func_80BFA710(this);
}

void func_80BFAC88(EnYb *this, GlobalContext *globalCtx) {
    Actor *sp20;
    u16 temp_v0;

    sp20 = globalCtx->actorCtx.actorList[2].first;
    func_80BFA634(this, globalCtx);
    if ((this->actor.xzDistToPlayer < 180.0f) && (fabsf(this->actor.yDistToPlayer) < 50.0f) && (globalCtx->msgCtx.unk1202A == 3) && (globalCtx->msgCtx.unk1202E == 7) && (gSaveContext.playerForm == 4)) {
        this->actionFunc = func_80BFABF0;
        this->unk41C = 0xC8;
        func_80BFA6E0(this, 0);
    } else if (func_800B84D0(&this->actor, globalCtx) != 0) {
        func_80BFA2FC(globalCtx);
        this->actionFunc = func_80BFA9D4;
        if (Player_GetMask(globalCtx) == 0xE) {
            func_801518B0(globalCtx, 0x147CU, &this->actor);
        } else {
            func_801518B0(globalCtx, 0x147BU, &this->actor);
        }
    } else if (func_80BFA5CC(&this->actor, globalCtx) != 0) {
        func_800B8614(&this->actor, globalCtx, 120.0f);
    }
    temp_v0 = this->unk410;
    if ((temp_v0 & 1) != 0) {
        if ((sp20->unkA70 * 0x10) >= 0) {
            this->unk410 = temp_v0 & 0xFFFE;
        }
    } else if (((sp20->unkA70 * 0x10) < 0) && (this->actor.xzDistToPlayer < 180.0f) && (fabsf(this->actor.yDistToPlayer) < 50.0f)) {
        this->unk410 = temp_v0 | 1;
        Audio_PlayActorSound2(&this->actor, 0x4807U);
    }
    func_80BFA710(this);
}

void func_80BFAE80(EnYb *this, GlobalContext *globalCtx) {
    if ((s32) gSaveContext.time < 0x4000) {
        func_80BFA634();
        this->unk414 += 5;
        if ((s32) this->unk414 >= 0xFB) {
            this->unk414 = 0xFF;
            this->actionFunc = func_80BFAC88;
            this->actor.flags |= 1;
        }
        func_80BFA710(this);
    }
}

void EnYb_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnYb *this = (EnYb *) thisx;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a2;
    s16 temp_v0;
    s32 temp_v1;
    s32 phi_v1;

    temp_v1 = this->actor.flags & 1;
    temp_a2 = &this->unk3B8;
    phi_v1 = temp_v1;
    if (temp_v1 == 1) {
        sp28 = temp_a2;
        Collider_UpdateCylinder(&this->actor, temp_a2);
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
        phi_v1 = this->actor.flags & 1;
    }
    if (phi_v1 == 1) {
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 40.0f, 25.0f, 40.0f, 5U);
    }
    this->actionFunc(this, globalCtx);
    if ((this->unk41A != -1) && (ActorCutscene_GetCurrentIndex() != (this + (this->unk41A * 2))->unk416)) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay((this + (this->unk41A * 2))->unk416);
            return;
        }
        if (ActorCutscene_GetCanPlayNext((this + (this->unk41A * 2))->unk416) != 0) {
            temp_v0 = this->unk41A;
            if (temp_v0 == 0) {
                ActorCutscene_StartAndSetUnkLinkFields((this + (temp_v0 * 2))->unk416, &this->actor);
                return;
            }
            // Duplicate return node #12. Try simplifying control flow for better match
            return;
        }
        ActorCutscene_SetIntentToPlay((this + (this->unk41A * 2))->unk416);
        // Duplicate return node #12. Try simplifying control flow for better match
    }
}

void func_80BFB074(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 0xB) {
        arg1 = arg1;
        SysMatrix_MultiplyVector3fByState(&D_80BFB2F4, arg4 + 0x3C);
    }
    if (arg1 == 3) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x404);
    }
}

void func_80BFB0E0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 0xB) {
        arg1 = arg1;
        SysMatrix_MultiplyVector3fByState(&D_80BFB300, arg4 + 0x3C);
    }
    if (arg1 == 3) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x404);
    }
}

void EnYb_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnYb *this = (EnYb *) thisx;
    Gfx *temp_a0;
    Gfx *temp_a0_2;
    Gfx *temp_a0_3;
    GraphicsContext *temp_a2;
    s16 temp_v0;

    temp_v0 = this->unk414;
    temp_a2 = globalCtx->state.gfxCtx;
    if (temp_v0 != 0) {
        if ((s32) temp_v0 < 0xFF) {
            if ((s32) temp_v0 >= 0x81) {
                temp_a0 = temp_a2->polyXlu.p;
                temp_a2->polyXlu.p = temp_a0 + 8;
                func_8012C2B4(temp_a0);
                Scene_SetRenderModeXlu(globalCtx, 2, 2U);
            } else {
                temp_a0_2 = temp_a2->polyXlu.p;
                temp_a2->polyXlu.p = temp_a0_2 + 8;
                func_8012C304(temp_a0_2);
                Scene_SetRenderModeXlu(globalCtx, 1, 2U);
            }
            temp_a0_3 = temp_a2->polyXlu.p;
            temp_a2->polyXlu.p = temp_a0_3 + 8;
            temp_a0_3->words.w0 = 0xFB000000;
            temp_a0_3->words.w1 = this->unk414 & 0xFF;
            temp_a2->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, NULL, func_80BFB0E0, &this->actor, temp_a2->polyXlu.p);
            return;
        }
        func_8012C28C(temp_a2);
        Scene_SetRenderModeXlu(globalCtx, 0, 1U);
        SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, NULL, func_80BFB074, &this->actor);
        // Duplicate return node #7. Try simplifying control flow for better match
    }
}

