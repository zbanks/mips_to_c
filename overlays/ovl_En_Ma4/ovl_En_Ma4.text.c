void EnMa4_ChangeAnim(EnMa4 *arg0, s16 arg1, s16);  /* static */
void EnMa4_HorsebackGameCheckPlayerInteractions(Actor *arg0, GlobalContext *arg1); /* static */
void EnMa4_InitPath(EnMa4 *arg0, GlobalContext *arg1); /* static */
s32 EnMa4_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void EnMa4_PostLimbDraw(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void EnMa4_RunInCircles(EnMa4 *arg0, GlobalContext *arg1); /* static */
void func_80ABDCA0(EnMa4 *arg0);                    /* static */
void func_80ABDD9C(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_060003B0;
extern ? D_06000A20;
extern ? D_06002A8C;
extern ? D_06007328;
extern FlexSkeletonHeader D_06013928;
extern ? D_06015B7C;
static ColliderCylinderInit D_80AC00B0 = {
    {0xA, 0, 0, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0x12, 0x2E, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80AC00DC = {0, 0, 0, 0, 0xFF};
static ? D_80AC00E8;                                /* unable to generate initializer */
static ? D_80AC00FC;                                /* unable to generate initializer */
static ? D_80AC010C;                                /* unable to generate initializer */
static s32 D_80AC024C = 9;
static s32 D_80AC0250 = 0;
static s16 D_80AC0254 = 0xA;
static s16 D_80AC0258 = 0;
static s32 D_80AC025C = 0;
static u16 D_80AC0260 = 0x63;
static ? D_80AC0264;                                /* unable to generate initializer */



void func_80ABDCA0(EnMa4 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v1;

    temp_v0 = arg0->overrideEyeTexIndex;
    if (temp_v0 != 0) {
        arg0->eyeTexIndex = temp_v0;
        return;
    }
    temp_v0_2 = arg0->blinkTimer;
    if (temp_v0_2 == 0) {
        phi_v1 = 0;
    } else {
        arg0->blinkTimer = temp_v0_2 - 1;
        phi_v1 = arg0->blinkTimer;
    }
    if (phi_v1 == 0) {
        arg0->eyeTexIndex += 1;
        if ((s32) arg0->eyeTexIndex >= 3) {
            arg0 = arg0;
            arg0->blinkTimer = Rand_S16Offset(0x1E, 0x1E);
            arg0->eyeTexIndex = 0;
        }
    }
}

void EnMa4_ChangeAnim(EnMa4 *arg0, s16 arg1) {
    void *sp28;
    void *temp_v1;

    temp_v1 = (arg1 * 0x10) + &D_80AC010C;
    sp28 = temp_v1;
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) temp_v1->unk0, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(temp_v1->unk0), (u8) (s32) temp_v1->unk8, temp_v1->unkC);
}

void func_80ABDD9C(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    void *temp_v1;
    s16 phi_a3;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    if ((arg0->unk1D8 == 0) && ((temp_v0 = arg0->unk14C, (&D_06007328 == temp_v0)) || (&D_06002A8C == temp_v0) || (&D_06015B7C == temp_v0))) {
        phi_a3 = 1;
    } else {
        phi_a3 = 0;
        if ((arg0->unk332 == 2) && (EnMa4_DialogueHandler != arg0->unk188)) {
            phi_a3 = 1;
        }
    }
    arg0->unk1F0 = (s32) temp_v1->world.pos.x;
    arg0->unk1F4 = (f32) temp_v1->world.pos.y;
    arg0->unk1F8 = (s32) temp_v1->world.pos.z;
    arg0->unk1F4 = (f32) (arg0->unk1F4 - -10.0f);
    func_800BD888(arg0, arg0 + 0x1D8, 0, phi_a3);
}

void EnMa4_InitPath(EnMa4 *arg0, GlobalContext *arg1) {
    u8 *sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    Vec3f *temp_a0_2;
    f32 *temp_a1;
    s16 temp_v0_2;
    u8 *temp_v1;
    void *temp_a0;
    void *temp_v0;

    temp_v1 = arg1->setupPathList + (((s32) (arg0->actor.params & 0xFF00) >> 8) * 8);
    temp_a0 = temp_v1->unk4;
    arg0 = arg0;
    sp2C = temp_v1;
    temp_v0 = Lib_SegmentedToVirtual(temp_a0);
    temp_a1 = &sp20;
    arg0->pathPoints = temp_v0;
    arg0->pathIndex = 0;
    temp_a0_2 = arg0 + 0x24;
    arg0->pathPointsCount = (s16) temp_v1->unk0;
    arg0->actor.home.pos.x = (f32) temp_v0->unk0;
    arg0->actor.home.pos.y = (f32) temp_v0->unk2;
    arg0->actor.home.pos.z = (f32) temp_v0->unk4;
    sp20 = (f32) temp_v0->unk6;
    sp24 = (f32) arg0->pathPoints->unk8;
    sp28 = (f32) arg0->pathPoints->unkA;
    temp_a0_2->x = arg0->actor.home.pos.x;
    temp_a0_2->y = arg0->actor.home.pos.y;
    temp_a0_2->z = arg0->actor.home.pos.z;
    temp_v0_2 = Math_Vec3f_Yaw(temp_a0_2, (Vec3f *) temp_a1);
    arg0->actor.world.rot.y = temp_v0_2;
    arg0->actor.shape.rot.y = temp_v0_2;
}

void EnMa4_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnMa4 *this = (EnMa4 *) thisx;
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1;
    u32 temp_v0;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 18.0f);
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06013928, NULL, this->limbDrawTable, this->transitionDrawTable, 0x17);
    temp_a1 = &this->collider;
    sp30 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_80AC00B0);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80AC00DC);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4U);
    Actor_SetScale(&this->actor, 0.01f);
    this->actor.targetMode = 0;
    this->unk_1D8.unk_00 = 0;
    this->unk_334 = 0;
    this->hasBow = 1;
    this->mouthTexIndex = 0;
    this->animTimer = 0;
    if (((s32) gSaveContext.day % 5) == 1) {
        this->type = 0;
    } else if ((gSaveContext.weekEventReg[22] & 1) != 0) {
        this->type = 1;
    } else {
        this->type = 2;
        this->hasBow = 0;
    }
    if (func_800EE1D8(globalCtx) != 0) {
        EnMa4_ChangeAnim(this, 0);
        this->state = 1;
        EnMa4_InitHorsebackGame(this, globalCtx);
        return;
    }
    EnMa4_InitPath(this, globalCtx);
    temp_v0 = gSaveContext.entranceIndex;
    if (temp_v0 == 0x6410) {
        EnMa4_ChangeAnim(this, 0);
        this->state = 2;
    } else if (temp_v0 == 0x64A0) {
        EnMa4_ChangeAnim(this, 0);
        this->state = 3;
    } else {
        if (this->type == 2) {
            EnMa4_ChangeAnim(this, 0xE);
            this->actor.shape.shadowScale = 0.0f;
        } else {
            EnMa4_ChangeAnim(this, 8);
        }
        this->state = 0;
    }
    EnMa4_SetupWait(this);
}

void EnMa4_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnMa4 *this = (EnMa4 *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
    gSaveContext.weekEventReg[8] &= 0xFE;
}

void EnMa4_RunInCircles(EnMa4 *arg0, GlobalContext *arg1) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    s16 sp2E;
    PosRot *sp28;
    PosRot *temp_a0;
    SkelAnime *temp_a0_2;
    f32 *temp_a1;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_v0;

    if ((D_80AC024C != 9) && (func_801378B8(arg0 + 0x144, arg0->skelAnime.animFrameCount) != 0)) {
        if (D_80AC024C == 3) {
            temp_v0 = D_80AC0250;
            if (temp_v0 < 3) {
                D_80AC0250 = temp_v0 + 1;
            } else {
                D_80AC0250 = 0;
                EnMa4_ChangeAnim(arg0, 0xD);
                D_80AC024C = 0xD;
            }
        } else {
            arg0->actor.speedXZ = 2.7f;
            EnMa4_ChangeAnim(arg0, 9);
            D_80AC024C = 9;
        }
    }
    if ((D_80AC024C == 0xD) && (func_801378B8(&arg0->skelAnime, 37.0f) != 0)) {
        Audio_PlayActorSound2(&arg0->actor, 0x29BFU);
    }
    temp_a0 = &arg0->actor.world;
    temp_a1 = &sp34;
    sp34 = (f32) arg0->pathPoints[arg0->pathIndex].x;
    sp38 = (f32) arg0->pathPoints[arg0->pathIndex].y;
    sp28 = temp_a0;
    sp3C = (f32) arg0->pathPoints[arg0->pathIndex].z;
    sp2E = Math_Vec3f_Yaw(&temp_a0->pos, (Vec3f *) temp_a1);
    if (Math_Vec3f_DistXZ(&temp_a0->pos, (Vec3f *) &sp34) > 50.0f) {
        Math_SmoothStepToS(&arg0->actor.world.rot.y, sp2E, 0xA, 0x3000, (s16) 0x100);
        Math_SmoothStepToS(&arg0->actor.shape.rot.y, sp2E, 5, 0x3000, (s16) 0x100);
    } else {
        if ((D_80AC0254 == 0) && ((Rand_Next() & 3) == 0)) {
            arg0->actor.speedXZ = 0.0f;
            D_80AC0254 = 2;
            EnMa4_ChangeAnim(arg0, 3);
            D_80AC024C = 3;
        } else {
            temp_v0_2 = D_80AC0254;
            if ((s32) temp_v0_2 > 0) {
                D_80AC0254 = temp_v0_2 - 1;
            }
        }
        temp_v0_3 = arg0->pathIndex;
        if ((s32) temp_v0_3 < (arg0->pathPointsCount - 1)) {
            arg0->pathIndex = temp_v0_3 + 1;
        } else {
            arg0->pathIndex = 0;
        }
    }
    Actor_UpdateBgCheckInfo(arg1, &arg0->actor, 0.0f, 0.0f, 0.0f, 4U);
    Actor_SetVelocityAndMoveYRotationAndGravity(&arg0->actor);
    temp_a0_2 = &arg0->skelAnime;
    if ((&D_06007328 == arg0->skelAnime.animCurrentSeg) && ((sp28 = (PosRot *) temp_a0_2, (func_801378B8(temp_a0_2, 0.0f) != 0)) || (func_801378B8(temp_a0_2, 4.0f) != 0))) {
        Audio_PlayActorSound2(&arg0->actor, 0x3ABEU);
    }
}

void EnMa4_SetupWait(EnMa4 *this) {
    EnMa4 *self = (EnMa4 *) this;
    s16 temp_v0;

    temp_v0 = self->state;
    if ((temp_v0 != 2) && (temp_v0 != 3)) {
        if (self->type != 2) {
            EnMa4_ChangeAnim(self, 9);
            self->actor.speedXZ = 2.7f;
        } else {
            EnMa4_ChangeAnim(self, 0xF);
            self->actor.speedXZ = 0.0f;
        }
    } else {
        EnMa4_ChangeAnim(self, 1);
        self->actor.speedXZ = 0.0f;
    }
    self->animTimer = 0;
    self->actor.gravity = -0.2f;
    EnMa4_InitFaceExpression(self);
    self->actionFunc = EnMa4_Wait;
}

void EnMa4_Wait(EnMa4 *this, GlobalContext *globalCtx) {
    EnMa4 *self = (EnMa4 *) this;
    Actor *sp24;
    s16 sp22;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 phi_v0;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    sp22 = self->actor.shape.rot.y - self->actor.yawTowardsPlayer;
    temp_v0 = self->state;
    if ((temp_v0 == 2) || (temp_v0 == 3)) {
        self->actor.flags |= 0x10000;
    } else if (self->type != 2) {
        EnMa4_RunInCircles(self, globalCtx);
    } else if (func_801378B8(&self->skelAnime, self->skelAnime.animFrameCount) != 0) {
        self->animTimer += 1;
        temp_v0_2 = self->animTimer;
        if (temp_v0_2 == 5) {
            EnMa4_ChangeAnim(self, 0x11);
        } else if (temp_v0_2 == 8) {
            self->animTimer = 0;
            EnMa4_ChangeAnim(self, 0xF);
        }
    }
    if (func_800B84D0(&self->actor, globalCtx) != 0) {
        EnMa4_StartDialogue(self, globalCtx);
        EnMa4_SetupDialogueHandler(self);
        return;
    }
    if (self->type == 2) {
        phi_v0 = (s32) sp22;
        if ((s32) sp22 < 0) {
            phi_v0 = -(s32) sp22;
        }
        if (phi_v0 < 0x4000) {
            goto block_16;
        }
    } else {
block_16:
        if ((sp24->unkA6C << 8) >= 0) {
            func_800B8614(&self->actor, globalCtx, 100.0f);
        }
    }
}

void EnMa4_HandlePlayerChoice(EnMa4 *this, GlobalContext *globalCtx) {
    EnMa4 *self = (EnMa4 *) this;
    u16 temp_t6;

    if (func_80147624(globalCtx) != 0) {
        temp_t6 = self->textId;
        switch (temp_t6) {
        case 13113:
            if (globalCtx->msgCtx.choiceIndex == 0) {
                func_8019F208();
                func_801518B0(globalCtx, 0x333AU, &self->actor);
                self->textId = 0x333A;
                return;
            }
            func_8019F208();
            func_801518B0(globalCtx, 0x333BU, &self->actor);
            self->textId = 0x333B;
            return;
        case 13121:
            if (globalCtx->msgCtx.choiceIndex == 0) {
                func_8019F208();
                gSaveContext.weekEventReg[21] |= 0x20;
                func_801518B0(globalCtx, 0x3343U, &self->actor);
                self->textId = 0x3343;
                return;
            }
            func_8019F230();
            EnMa4_SetFaceExpression(self, 0, 1);
            func_801518B0(globalCtx, 0x3342U, &self->actor);
            self->textId = 0x3342;
            self->state = 0;
            func_80151BB4(globalCtx, 5U);
            return;
        case 13126:
            if (globalCtx->msgCtx.choiceIndex == 0) {
                func_8019F208();
                gSaveContext.weekEventReg[21] |= 0x20;
                func_801518B0(globalCtx, 0x3343U, &self->actor);
                self->textId = 0x3343;
                return;
            }
            func_8019F230();
            EnMa4_SetFaceExpression(self, 0, 1);
            func_801518B0(globalCtx, 0x3342U, &self->actor);
            self->textId = 0x3342;
            return;
        case 13127:
            if (globalCtx->msgCtx.choiceIndex == 0) {
                func_8019F208();
                func_801518B0(globalCtx, 0x3349U, &self->actor);
                self->textId = 0x3349;
                return;
            }
            func_8019F230();
            func_801518B0(globalCtx, 0x3348U, &self->actor);
            self->textId = 0x3348;
            func_80151BB4(globalCtx, 5U);
            return;
        case 13133:
            if (globalCtx->msgCtx.choiceIndex == 0) {
                func_8019F208();
                func_801518B0(globalCtx, 0x334EU, &self->actor);
                self->textId = 0x334E;
                if ((*(gBitFlags + 0x38) & gSaveContext.inventory.questItems) != 0) {
                    func_80151BB4(globalCtx, 0x1CU);
                }
                func_80151BB4(globalCtx, 5U);
                return;
            }
            func_8019F230();
            EnMa4_SetFaceExpression(self, 0, 0);
            func_801518B0(globalCtx, 0x334CU, &self->actor);
            self->textId = 0x334C;
            return;
        case 13140:
            if (globalCtx->msgCtx.choiceIndex == 0) {
                func_8019F208();
                func_801518B0(globalCtx, 0x3349U, &self->actor);
                self->textId = 0x3349;
                return;
            }
            func_8019F230();
            EnMa4_SetFaceExpression(self, 1, 0);
            func_801518B0(globalCtx, 0x3355U, &self->actor);
            self->textId = 0x3355;
            func_80151BB4(globalCtx, 5U);
            return;
        case 13142:
            if (globalCtx->msgCtx.choiceIndex == 0) {
                func_8019F208();
                func_801477B4(globalCtx);
                EnMa4_SetupBeginHorsebackGame(self);
                return;
            }
            if (self->type == 1) {
                func_8019F230();
                EnMa4_SetFaceExpression(self, 3, 3);
                func_801518B0(globalCtx, 0x3357U, &self->actor);
                self->textId = 0x3357;
                func_80151BB4(globalCtx, 5U);
                return;
            }
            func_8019F230();
            EnMa4_SetFaceExpression(self, 4, 2);
            func_801518B0(globalCtx, 0x335BU, &self->actor);
            self->textId = 0x335B;
            func_80151BB4(globalCtx, 5U);
            return;
        case 13145:
            if (globalCtx->msgCtx.choiceIndex == 0) {
                func_8019F208();
                func_801518B0(globalCtx, 0x3349U, &self->actor);
                self->textId = 0x3349;
                return;
            }
            func_8019F230();
            EnMa4_SetFaceExpression(self, 4, 2);
            func_801518B0(globalCtx, 0x335AU, &self->actor);
            self->textId = 0x335A;
            func_80151BB4(globalCtx, 5U);
            // Duplicate return node #31. Try simplifying control flow for better match
            return;
        }
    } else {
    default:
    }
}

void EnMa4_ChooseNextDialogue(EnMa4 *this, GlobalContext *globalCtx) {
    EnMa4 *self = (EnMa4 *) this;
    Actor *sp24;
    Actor *temp_t6;
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    GlobalContext *temp_a3;
    u16 temp_v0;
    u16 phi_t2;

    temp_a3 = globalCtx;
    temp_t6 = temp_a3->actorCtx.actorList[2].first;
    globalCtx = temp_a3;
    sp24 = temp_t6;
    if (func_80147624(temp_a3) != 0) {
        temp_v0 = self->textId;
        if ((s32) temp_v0 >= 0x2391) {
            switch (temp_v0) {
            case 13109:
                globalCtx = globalCtx;
                EnMa4_SetFaceExpression(self, 0, 3);
                func_801518B0(globalCtx, 0x3336U, &self->actor);
                self->textId = 0x3336;
                func_80151BB4(globalCtx, 5U);
                return;
            case 13112:
                func_801518B0(globalCtx, 0x3339U, &self->actor);
                self->textId = 0x3339;
                return;
            case 13114:
            case 13115:
                globalCtx = globalCtx;
                EnMa4_SetFaceExpression(self, 0, 3);
                func_801518B0(globalCtx, 0x333CU, &self->actor);
                self->textId = 0x333C;
                return;
            case 13116:
                globalCtx = globalCtx;
                EnMa4_SetFaceExpression(self, 0, 2);
                func_801518B0(globalCtx, 0x333DU, &self->actor);
                self->textId = 0x333D;
                return;
            case 13117:
                func_801518B0(globalCtx, 0x333EU, &self->actor);
                phi_t2 = 0x333EU;
block_30:
                self->textId = phi_t2;
                // Duplicate return node #31. Try simplifying control flow for better match
                return;
            case 13118:
                func_801477B4(globalCtx);
                EnMa4_SetupBeginDescribeThemCs(self);
                return;
            case 13119:
                func_801518B0(globalCtx, 0x3340U, &self->actor);
                self->textId = 0x3340;
                return;
            case 13120:
                globalCtx = globalCtx;
                EnMa4_SetFaceExpression(self, 0, 3);
                func_801518B0(globalCtx, 0x3341U, &self->actor);
                self->textId = 0x3341;
                return;
            case 13123:
                globalCtx = globalCtx;
                EnMa4_SetFaceExpression(self, 0, 0);
                func_801518B0(globalCtx, 0x3344U, &self->actor);
                self->textId = 0x3344;
                return;
            case 13124:
                func_801518B0(globalCtx, 0x3345U, &self->actor);
                self->textId = 0x3345;
                return;
            case 13125:
                func_801518B0(globalCtx, 0x3349U, &self->actor);
                self->textId = 0x3349;
                return;
            case 13129:
                func_801518B0(globalCtx, 0x334AU, &self->actor);
                self->textId = 0x334A;
                return;
            case 13130:
                func_801477B4(globalCtx);
                EnMa4_SetupBeginHorsebackGame(self);
                return;
            case 13132:
                func_801518B0(globalCtx, 0x334DU, &self->actor);
                self->textId = 0x334D;
                return;
            case 13136:
            case 13137:
            case 13149:
            case 13150:
                if (self->type == 0) {
                    func_801518B0(globalCtx, 0x3352U, &self->actor);
                    self->textId = 0x3352;
                    return;
                }
                func_801518B0(globalCtx, 0x3356U, &self->actor);
                phi_t2 = 0x3356U;
                goto block_30;
            case 13138:
            case 13165:
                globalCtx = globalCtx;
                EnMa4_SetFaceExpression(self, 0, 0);
                temp_a0 = globalCtx;
                if ((*(gBitFlags + 0x38) & gSaveContext.inventory.questItems) != 0) {
                    func_801518B0(globalCtx, 0x334CU, &self->actor);
                    self->textId = 0x334C;
                    return;
                }
                globalCtx = globalCtx;
                func_801477B4(temp_a0);
                sp24->unkA6C = (s32) (sp24->unkA6C | 0x20);
                EnMa4_SetupBeginEponasSongCs(self);
                EnMa4_BeginEponasSongCs(self, globalCtx);
                return;
            case 13144:
                temp_a0_2 = globalCtx;
                if ((gSaveContext.playerForm != 4) || ((*(gBitFlags + 0x38) & gSaveContext.inventory.questItems) == 0)) {
                    globalCtx = globalCtx;
                    func_801518B0(temp_a0_2, 0x335CU, &self->actor);
                    self->textId = 0x335C;
                    func_80151BB4(globalCtx, 5U);
                    return;
                }
                func_801518B0(globalCtx, 0x3359U, &self->actor);
                phi_t2 = 0x3359U;
                goto block_30;
            }
        } else {
            if (temp_v0 == 0x2390) {
                func_801477B4(globalCtx);
                EnMa4_SetupBeginHorsebackGame(self);
                return;
            }
            // Duplicate return node #31. Try simplifying control flow for better match
        }
    } else {
    default:
    }
}

void EnMa4_SetupDialogueHandler(EnMa4 *this) {
    EnMa4 *self = (EnMa4 *) this;
    if (self->type != 2) {
        EnMa4_ChangeAnim((EnMa4 *)1);
    } else {
        EnMa4_ChangeAnim((EnMa4 *)0xF);
    }
    self->actionFunc = EnMa4_DialogueHandler;
}

void EnMa4_DialogueHandler(EnMa4 *this, GlobalContext *globalCtx) {
    EnMa4 *self = (EnMa4 *) this;
    GlobalContext *temp_a0;
    u32 temp_v0;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0) {
    case 4:
        EnMa4_HandlePlayerChoice(self, globalCtx);
        break;
    case 5:
        EnMa4_ChooseNextDialogue(self, globalCtx);
        break;
    case 6:
        temp_a0 = globalCtx;
        globalCtx = globalCtx;
        if ((func_80147624(temp_a0) != 0) && ((globalCtx->msgCtx.unk120B1 == 0) || ((*(gBitFlags + 0x48) & gSaveContext.inventory.questItems) == 0))) {
            EnMa4_SetupWait(self);
        }
        break;
    }
    if (self->type != 2) {
        Math_SmoothStepToS(&self->actor.shape.rot.y, self->actor.yawTowardsPlayer, 5, 0x7D0, (s16) 0x3E8);
    }
}

void EnMa4_SetupBeginHorsebackGame(EnMa4 *this) {
    EnMa4 *self = (EnMa4 *) this;
    self->actionFunc = EnMa4_BeginHorsebackGame;
}

void EnMa4_BeginHorsebackGame(EnMa4 *this, GlobalContext *globalCtx) {
    EnMa4 *self = (EnMa4 *) this;
    globalCtx->nextEntranceIndex = 0x6400;
    gSaveContext.nextCutsceneIndex = 0xFFF0;
    globalCtx->sceneLoadFlag = 0x14;
    globalCtx->unk_1887F = 0x50;
    gSaveContext.nextTransition = 3;
}

void EnMa4_HorsebackGameCheckPlayerInteractions(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a1;

    temp_a1 = arg1;
    arg1 = arg1;
    if (func_800B84D0(arg0, temp_a1) != 0) {
        func_801518B0(arg1, 0x336EU, arg0);
        arg0->unk188 = EnMa4_HorsebackGameTalking;
        return;
    }
    if ((gSaveContext.unk_3DE0[4] == 0) && ((u32) *(&gSaveContext + 0x3E04) < 0x2CECU)) {
        func_800B8614(arg0, arg1, 100.0f);
    }
}

void EnMa4_HorsebackGameTalking(EnMa4 *this, GlobalContext *globalCtx) {
    EnMa4 *self = (EnMa4 *) this;
    if (func_800B867C(&self->actor, globalCtx) != 0) {
        self->actionFunc = EnMa4_HorsebackGameWait;
    }
}

void EnMa4_InitHorsebackGame(EnMa4 *this, GlobalContext *globalCtx) {
    EnMa4 *self = (EnMa4 *) this;
    Actor *sp1C;

    sp1C = globalCtx->actorCtx.actorList[2].first;
    globalCtx->interfaceCtx.unk_280 = 1;
    globalCtx = globalCtx;
    func_8010E9F0(4, 0);
    gSaveContext.weekEventReg[8] |= 1;
    func_80112AFC(globalCtx);
    sp1C->unkA6C = (s32) (sp1C->unkA6C | 0x20);
    self->actionFunc = EnMa4_SetupHorsebackGameWait;
}

void EnMa4_SetupHorsebackGameWait(EnMa4 *this, GlobalContext *globalCtx) {
    EnMa4 *self = (EnMa4 *) this;
    Actor *temp_v0;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    if (globalCtx->interfaceCtx.unk_280 == 8) {
        self->actionFunc = EnMa4_HorsebackGameWait;
        temp_v0->unkA6C = (s32) (temp_v0->unkA6C & ~0x20);
    }
}

void EnMa4_HorsebackGameWait(EnMa4 *this, GlobalContext *globalCtx) {
    EnMa4 *self = (EnMa4 *) this;
    Actor *temp_v0;
    s16 temp_v0_2;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    temp_v0->unkA74 = (s32) (temp_v0->unkA74 | 0x400);
    EnMa4_HorsebackGameCheckPlayerInteractions();
    temp_v0_2 = self->poppedBalloonCounter;
    if (D_80AC0258 != temp_v0_2) {
        D_80AC0258 = temp_v0_2;
        globalCtx->interfaceCtx.unk_25C = 1;
    }
    if ((gSaveContext.unk3E00 != 0) || ((u32) gSaveContext.unk3E04 >= 0x2EE0U) || (self->poppedBalloonCounter == 0xA)) {
        gSaveContext.unk_3DD0[4] = 6;
        EnMa4_SetupHorsebackGameEnd(self, globalCtx);
        D_80AC0258 = 0;
    }
}

void EnMa4_SetupHorsebackGameEnd(EnMa4 *this, GlobalContext *globalCtx) {
    EnMa4 *self = (EnMa4 *) this;
    gSaveContext.weekEventReg[8] &= 0xFE;
    self->actionFunc = EnMa4_HorsebackGameEnd;
    func_801A89A8(0x100000FF);
    func_801A89A8(0x8041);
}

void EnMa4_HorsebackGameEnd(EnMa4 *this, GlobalContext *globalCtx) {
    EnMa4 *self = (EnMa4 *) this;
    EnMa4 *temp_a2;
    s32 temp_v1;
    s32 phi_v1;

    temp_a2 = self;
    if (globalCtx->actorCtx.actorList[2].first->unkA6C & 0x100000) {
        globalCtx->actorCtx.unk268 = 1;
        globalCtx->actorCtx.unk278 = 0x8000;
    } else {
        globalCtx->actorCtx.unk268 = 1;
    }
    temp_v1 = D_80AC025C;
    phi_v1 = temp_v1;
    if (temp_v1 == 0x19) {
        if (temp_a2->poppedBalloonCounter == 0xA) {
            self = temp_a2;
            func_801518B0(globalCtx, 0x334FU, &temp_a2->actor);
            self->textId = 0x334F;
        } else {
            self = temp_a2;
            func_801518B0(globalCtx, 0x334BU, &temp_a2->actor);
            self->textId = 0x334B;
        }
        phi_v1 = D_80AC025C;
    } else if (temp_v1 == 0x32) {
        globalCtx->actorCtx.unk268 = 0;
        globalCtx->nextEntranceIndex = 0x6410;
        gSaveContext.nextCutsceneIndex = 0;
        globalCtx->sceneLoadFlag = 0x14;
        phi_v1 = 0;
        if (temp_a2->poppedBalloonCounter == 0xA) {
            globalCtx->unk_1887F = 0x50;
            gSaveContext.nextTransition = 3;
        } else {
            globalCtx->unk_1887F = 0x40;
            gSaveContext.nextTransition = 2;
        }
        temp_a2->poppedBalloonCounter = 0;
    }
    D_80AC025C = phi_v1 + 1;
}

void EnMa4_SetupBeginEponasSongCs(EnMa4 *this) {
    EnMa4 *self = (EnMa4 *) this;
    self->actionFunc = EnMa4_BeginEponasSongCs;
}

void EnMa4_BeginEponasSongCs(EnMa4 *this, GlobalContext *globalCtx) {
    EnMa4 *self = (EnMa4 *) this;
    s16 sp1E;
    s8 temp_a0;

    temp_a0 = self->actor.cutscene;
    sp1E = (s16) temp_a0;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        ActorCutscene_Start((s16) temp_a0, &self->actor);
        EnMa4_SetupEponasSongCs(self);
        return;
    }
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
    }
    ActorCutscene_SetIntentToPlay(sp1E);
}

void EnMa4_SetupEponasSongCs(EnMa4 *this) {
    EnMa4 *self = (EnMa4 *) this;
    self->animTimer = 0;
    self->actionFunc = EnMa4_EponasSongCs;
}

void EnMa4_EponasSongCs(EnMa4 *this, GlobalContext *globalCtx) {
    EnMa4 *self = (EnMa4 *) this;
    u32 sp24;
    Actor *temp_v0_2;
    s32 temp_t6;
    u16 temp_a0_2;
    u16 temp_a1;
    u32 temp_v0;
    void *temp_a0;
    void *temp_v1;

    if (func_800EE29C(globalCtx, 0x78U) != 0) {
        temp_v0 = func_800EE200(globalCtx, 0x78U);
        temp_t6 = temp_v0 * 4;
        sp24 = temp_v0;
        temp_v1 = globalCtx + temp_t6;
        temp_a0 = temp_v1->unk1F4C;
        if (globalCtx->csCtx.frames == temp_a0->unk2) {
            temp_a1 = temp_a0->unk0;
            if (D_80AC0260 != temp_a1) {
                D_80AC0260 = temp_a1;
                self->animTimer = 0;
                temp_a0_2 = temp_v1->unk1F4C->unk0;
                if (temp_a0_2 != 1) {
                    if (temp_a0_2 != 2) {

                    } else {
                        self->hasBow = 0;
                        EnMa4_ChangeAnim(self, 4, 1);
                    }
                } else {
                    self->hasBow = 1;
                    EnMa4_ChangeAnim(self, 1, 1);
                }
            }
        }
        func_800EDF24(&self->actor, globalCtx, sp24);
        if ((D_80AC0260 == 2) && (self->animTimer == 0) && (func_801378B8(&self->skelAnime, self->skelAnime.animFrameCount) != 0)) {
            EnMa4_ChangeAnim(self, 7);
            return;
        }
        // Duplicate return node #13. Try simplifying control flow for better match
        return;
    }
    temp_v0_2 = globalCtx->actorCtx.actorList[2].first;
    temp_v0_2->unkA6C = (s32) (temp_v0_2->unkA6C | 0x20);
    func_800B85E0(&self->actor, globalCtx, 200.0f, -1);
    D_80AC0260 = 0x63;
    self->hasBow = 1;
    EnMa4_SetupEndEponasSongCs(self);
}

void EnMa4_SetupEndEponasSongCs(EnMa4 *this) {
    EnMa4 *self = (EnMa4 *) this;
    self->actionFunc = EnMa4_EndEponasSongCs;
}

void EnMa4_EndEponasSongCs(EnMa4 *this, GlobalContext *globalCtx) {
    EnMa4 *self = (EnMa4 *) this;
    Actor *sp24;
    Actor *temp_v1;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    self->actor.flags |= 0x10000;
    sp24 = temp_v1;
    if (func_800B84D0(&self->actor, globalCtx) != 0) {
        temp_v1->unkA6C = (s32) (temp_v1->unkA6C & ~0x20);
        func_801518B0(globalCtx, 0x334CU, &self->actor);
        self->textId = 0x334C;
        self->actor.flags &= 0xFFFEFFFF;
        EnMa4_SetupDialogueHandler(self);
        return;
    }
    func_800B85E0(&self->actor, globalCtx, 200.0f, -1);
}

void EnMa4_SetupBeginDescribeThemCs(EnMa4 *this) {
    EnMa4 *self = (EnMa4 *) this;
    self->actionFunc = EnMa4_BeginDescribeThemCs;
}

void EnMa4_BeginDescribeThemCs(EnMa4 *this, GlobalContext *globalCtx) {
    EnMa4 *self = (EnMa4 *) this;
    globalCtx->nextEntranceIndex = 0x6400;
    gSaveContext.nextCutsceneIndex = 0xFFF5;
    globalCtx->sceneLoadFlag = 0x14;
    globalCtx->unk_1887F = 0x40;
    gSaveContext.nextTransition = 2;
}

void EnMa4_StartDialogue(EnMa4 *this, GlobalContext *globalCtx) {
    EnMa4 *self = (EnMa4 *) this;
    u32 sp34;
    s32 sp30;
    u32 sp24;
    s32 sp20;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_t0;
    s32 temp_t2;
    s32 temp_t6;
    u32 temp_t1;
    u32 temp_t3;
    u32 temp_t7;
    u8 temp_v0_5;
    u16 phi_t4;

    temp_v0 = self->type;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                func_801518B0(globalCtx, 0x3335U, &self->actor);
                phi_t4 = 0x3335U;
                goto block_49;
            }
            temp_v0_2 = self->state;
            if (temp_v0_2 == 0) {
                func_801518B0(globalCtx, 0x3358U, &self->actor);
                self->textId = 0x3358;
                return;
            }
            if (temp_v0_2 == 2) {
                temp_t0 = gSaveContext.unk3E00;
                temp_t1 = gSaveContext.unk3E04;
                sp20 = temp_t0;
                sp24 = temp_t1;
                if ((temp_t0 != 0) || (temp_t1 >= 0x2EE0U)) {
                    func_801518B0(globalCtx, 0x3356U, &self->actor);
                    self->textId = 0x3356;
                } else {
                    sp34 = sp24;
                    sp30 = sp20;
                    if ((s32) sp24 < (s32) gSaveContext.roomInf[127][4]) {
                        gSaveContext.roomInf[127][4] = sp24;
                        func_801518B0(globalCtx, 0x335DU, &self->actor);
                        self->textId = 0x335D;
                    } else {
                        func_801518B0(globalCtx, 0x335EU, &self->actor);
                        self->textId = 0x335E;
                    }
                }
                self->state = 0;
                self->actor.flags &= 0xFFFEFFFF;
                return;
            }
            // Duplicate return node #50. Try simplifying control flow for better match
            return;
        }
        if (gSaveContext.playerForm != 4) {
            if ((gSaveContext.weekEventReg[21] & 0x80) != 0) {
                globalCtx = globalCtx;
                EnMa4_SetFaceExpression(self, 3, 3);
                func_801518B0(globalCtx, 0x3337U, &self->actor);
                self->textId = 0x3337;
                func_80151BB4(globalCtx, 5U);
                return;
            }
            func_801518B0(globalCtx, 0x3335U, &self->actor);
            self->textId = 0x3335;
            gSaveContext.weekEventReg[21] |= 0x80;
            return;
        }
        temp_v0_3 = self->state;
        if (temp_v0_3 == 0) {
            func_801518B0(globalCtx, 0x3354U, &self->actor);
            phi_t4 = 0x3354U;
block_49:
            self->textId = phi_t4;
            // Duplicate return node #50. Try simplifying control flow for better match
            return;
        }
        if (temp_v0_3 == 2) {
            temp_t6 = gSaveContext.unk3E00;
            temp_t7 = gSaveContext.unk3E04;
            sp20 = temp_t6;
            sp24 = temp_t7;
            if ((temp_t6 != 0) || (temp_t7 >= 0x2EE0U)) {
                func_801518B0(globalCtx, 0x3356U, &self->actor);
                self->textId = 0x3356;
            } else {
                sp34 = sp24;
                sp30 = sp20;
                if ((s32) sp24 < (s32) gSaveContext.roomInf[127][4]) {
                    gSaveContext.roomInf[127][4] = sp24;
                    globalCtx = globalCtx;
                    EnMa4_SetFaceExpression(self, 0, 3);
                    func_801518B0(globalCtx, 0x3350U, &self->actor);
                    self->textId = 0x3350;
                } else {
                    func_801518B0(globalCtx, 0x3351U, &self->actor);
                    self->textId = 0x3351;
                }
            }
            self->state = 0;
            self->actor.flags &= 0xFFFEFFFF;
            return;
        }
        // Duplicate return node #50. Try simplifying control flow for better match
        return;
    }
    if (gSaveContext.playerForm != 4) {
        if ((gSaveContext.weekEventReg[21] & 0x80) != 0) {
            globalCtx = globalCtx;
            EnMa4_SetFaceExpression(self, 3, 3);
            func_801518B0(globalCtx, 0x3337U, &self->actor);
            self->textId = 0x3337;
            func_80151BB4(globalCtx, 5U);
            return;
        }
        func_801518B0(globalCtx, 0x3335U, &self->actor);
        self->textId = 0x3335;
        gSaveContext.weekEventReg[21] |= 0x80;
        return;
    }
    temp_v0_4 = self->state;
    if (temp_v0_4 == 0) {
        temp_v0_5 = gSaveContext.weekEventReg[21];
        if ((temp_v0_5 & 0x40) != 0) {
            if ((temp_v0_5 & 0x20) == 0) {
                func_801518B0(globalCtx, 0x3346U, &self->actor);
                self->textId = 0x3346;
                return;
            }
            func_801518B0(globalCtx, 0x3347U, &self->actor);
            self->textId = 0x3347;
            return;
        }
        func_801518B0(globalCtx, 0x3338U, &self->actor);
        self->textId = 0x3338;
        gSaveContext.weekEventReg[21] |= 0x40;
        return;
    }
    if (temp_v0_4 == 2) {
        temp_t2 = gSaveContext.unk3E00;
        temp_t3 = gSaveContext.unk3E04;
        sp20 = temp_t2;
        sp24 = temp_t3;
        if ((temp_t2 != 0) || (temp_t3 >= 0x2EE0U)) {
            globalCtx = globalCtx;
            EnMa4_SetFaceExpression(self, 0, 0);
            func_801518B0(globalCtx, 0x336DU, &self->actor);
            self->textId = 0x336D;
        } else {
            sp34 = sp24;
            sp30 = sp20;
            if ((s32) sp24 < (s32) gSaveContext.roomInf[127][4]) {
                gSaveContext.roomInf[127][4] = sp24;
                globalCtx = globalCtx;
                EnMa4_SetFaceExpression(self, 0, 3);
                func_801518B0(globalCtx, 0x3350U, &self->actor);
                self->textId = 0x3350;
            } else {
                func_801518B0(globalCtx, 0x3351U, &self->actor);
                self->textId = 0x3351;
            }
        }
        self->state = 0;
        self->actor.flags &= 0xFFFEFFFF;
        return;
    }
    if (temp_v0_4 == 3) {
        func_801518B0(globalCtx, 0x3340U, &self->actor);
        self->textId = 0x3340;
        self->actor.flags &= 0xFFFEFFFF;
    }
}

void EnMa4_SetFaceExpression(EnMa4 *this, s16 overrideEyeTexIndex, s16 mouthTexIndex) {
    EnMa4 *self = (EnMa4 *) this;
    self->overrideEyeTexIndex = overrideEyeTexIndex;
    self->mouthTexIndex = mouthTexIndex;
}

void EnMa4_InitFaceExpression(EnMa4 *this) {
    EnMa4 *self = (EnMa4 *) this;
    if (self->type != 2) {
        EnMa4_SetFaceExpression(self, 0, 0);
        return;
    }
    EnMa4_SetFaceExpression(self, 1, 2);
}

void EnMa4_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnMa4 *this = (EnMa4 *) thisx;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a2;

    temp_a2 = &this->collider;
    sp24 = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    func_80ABDCA0(this);
    this->actionFunc(this, globalCtx);
    func_80ABDD9C(&this->actor, globalCtx);
}

s32 EnMa4_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    s16 sp4;

    if (arg1 == 0xE) {
        sp4.unk0 = (s32) (unaligned s32) arg5->unk1E0;
        sp4.unk4 = (u16) arg5->unk1E4;
        arg4->x += sp6;
        arg4->z += sp4;
    }
    if (arg1 == 0xD) {
        sp4.unk0 = (s32) (unaligned s32) arg5->unk1E6;
        sp4.unk4 = (u16) arg5->unk1EA;
        arg4->x -= sp6;
        arg4->z -= sp4;
    }
    return 0;
}

void EnMa4_PostLimbDraw(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f sp28;
    void *temp_a0;
    void *temp_v1;

    sp28.x = D_80AC0264.unk0;
    sp28.y = D_80AC0264.unk4;
    sp28.z = D_80AC0264.unk8;
    if (arg1 == 0xE) {
        SysMatrix_MultiplyVector3fByState(&sp28, arg4 + 0x3C);
        return;
    }
    if ((arg1 == 0x13) && (arg4->unk33A == 1)) {
        temp_a0 = *arg0;
        temp_v1 = temp_a0->unk2B0;
        temp_a0->unk2B0 = (void *) (temp_v1 + 8);
        temp_v1->unk4 = &D_060003B0;
        temp_v1->unk0 = 0xDE000000;
    }
}

void EnMa4_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnMa4 *this = (EnMa4 *) thisx;
    GraphicsContext *sp38;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a3;
    s32 temp_a0;
    s32 temp_a0_2;
    GraphicsContext *phi_a3;

    temp_a3 = globalCtx->state.gfxCtx;
    phi_a3 = temp_a3;
    if (this->type == 2) {
        temp_v0 = temp_a3->polyOpa.p;
        temp_a3->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp38 = temp_a3;
        sp30 = temp_v0;
        sp30->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_a3->polyOpa.p;
        temp_a3->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = (u32) &D_06000A20;
        temp_v0_2->words.w0 = 0xDE000000;
        phi_a3 = globalCtx->state.gfxCtx;
    }
    sp38 = globalCtx->state.gfxCtx;
    func_8012C28C(phi_a3);
    temp_v0_3 = globalCtx->state.gfxCtx->polyOpa.p;
    globalCtx->state.gfxCtx->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060020;
    temp_a0 = *(&D_80AC00E8 + (this->eyeTexIndex * 4));
    temp_v0_3->words.w1 = (temp_a0 & 0xFFFFFF) + gSegments[(u32) (temp_a0 * 0x10) >> 0x1C] + 0x80000000;
    temp_v0_4 = globalCtx->state.gfxCtx->polyOpa.p;
    globalCtx->state.gfxCtx->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDB060024;
    temp_a0_2 = *(&D_80AC00FC + (this->mouthTexIndex * 4));
    temp_v0_4->words.w1 = (temp_a0_2 & 0xFFFFFF) + gSegments[(u32) (temp_a0_2 * 0x10) >> 0x1C] + 0x80000000;
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, EnMa4_OverrideLimbDraw, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) EnMa4_PostLimbDraw, &this->actor);
}

