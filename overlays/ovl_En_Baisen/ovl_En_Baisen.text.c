void EnBaisen_ChangeAnimation(EnBaisen *arg0, s32 arg1); /* static */
s32 EnBaisen_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80BE871C(EnBaisen *arg0);                 /* static */
extern AnimationHeader D_060011C0;
extern FlexSkeletonHeader D_06007908;
static ColliderCylinderInit D_80BE8E10 = {
    {0xA, 0, 0, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
    {0x14, 0x3C, 0, {0, 0, 0}},
};
static ? D_80BE8E3C;                                /* unable to generate initializer */
static ? D_80BE8E4C;                                /* unable to generate initializer */
static ? D_80BE8E58;                                /* unable to generate initializer */



void EnBaisen_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnBaisen *this = (EnBaisen *) thisx;
    s16 temp_v0;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 25.0f);
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06007908, &D_060011C0, this->jointTable, this->morphTable, 0x14);
    temp_v0 = this->actor.params;
    this->actor.colChkInfo.mass = 0xFF;
    this->paramCopy = (s32) temp_v0;
    if (temp_v0 == 0) {
        this->unk290 = 1;
        if (((gSaveContext.weekEventReg[63] & 0x80) == 0) && ((gSaveContext.day != 3) || (gSaveContext.isNight == 0))) {
            Actor_MarkForDeath(&this->actor);
        }
    } else {
        this->collider.dim.radius = 0x1E;
        this->collider.dim.height = 0x3C;
        this->collider.dim.yShift = 0;
        if (((gSaveContext.weekEventReg[63] & 0x80) != 0) || ((gSaveContext.day == 3) && (gSaveContext.isNight != 0))) {
            Actor_MarkForDeath(&this->actor);
        }
    }
    this->actor.targetMode = 6;
    this->actor.gravity = -3.0f;
    Collider_InitAndSetCylinder(globalCtx, &this->collider, &this->actor, &D_80BE8E10);
    if (this->paramCopy == 0) {
        this->actionFunc = func_80BE87B0;
        return;
    }
    func_80BE87FC(this);
}

void EnBaisen_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBaisen *this = (EnBaisen *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnBaisen_ChangeAnimation(EnBaisen *arg0, s32 arg1) {
    f32 temp_f0;
    s32 temp_v1;

    arg0->animIndex = arg1;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*(&D_80BE8E4C + (arg1 * 4)));
    temp_v1 = arg0->animIndex;
    arg0->frameCount = temp_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, *(&D_80BE8E4C + (temp_v1 * 4)), 1.0f, 0.0f, temp_f0, (u8) (s32) *(&D_80BE8E58 + temp_v1), -10.0f);
}

void func_80BE871C(EnBaisen *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 phi_v1;

    temp_v0 = arg0->unk29E - arg0->actor.world.rot.y;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    arg0->headRotXTarget = 0;
    if ((arg0->actor.xzDistToPlayer < 200.0f) && (phi_v1 < 0x4E20)) {
        arg0->headRotXTarget = arg0->unk29E - arg0->actor.world.rot.y;
        temp_v0_2 = arg0->headRotXTarget;
        if ((s32) temp_v0_2 >= 0x2711) {
            arg0->headRotXTarget = 0x2710;
            return;
        }
        if ((s32) temp_v0_2 < -0x2710) {
            arg0->headRotXTarget = -0x2710;
        }
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void func_80BE87B0(EnBaisen *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    Actor *temp_v0_2;
    Actor *phi_v0;

    temp_v0 = globalCtx->actorCtx.actorList[4].first;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        do {
            if (phi_v0->id == 0x26D) {
                this->heishiPointer = phi_v0;
            }
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
        } while (temp_v0_2 != 0);
    }
    func_80BE87FC(this);
}

void func_80BE87FC(EnBaisen *this) {
    if (this->paramCopy == 0) {
        this->textIdIndex = 2;
        EnBaisen_ChangeAnimation((EnBaisen *)2);
        this->unk29E = this->actor.world.rot.y;
    } else {
        EnBaisen_ChangeAnimation(NULL);
    }
    this->unk29C = 0;
    this->actionFunc = func_80BE887C;
    this->actor.textId = *(&D_80BE8E3C + (this->textIdIndex * 2));
}

void func_80BE887C(EnBaisen *this, GlobalContext *globalCtx) {
    EnBaisen *temp_a0;
    GlobalContext *temp_a0_2;

    temp_a0 = this;
    this = this;
    if (func_800B84D0(&temp_a0->actor, globalCtx) != 0) {
        func_80BE895C(this, globalCtx);
        return;
    }
    temp_a0_2 = globalCtx;
    if (this->paramCopy != 0) {
        this->textIdIndex = 0;
        if ((gSaveContext.weekEventReg[60] & 8) != 0) {
            this->textIdIndex = 1;
        }
        globalCtx = globalCtx;
        this = this;
        if (Player_GetMask(temp_a0_2) == 0xA) {
            this->textIdIndex = 6;
        }
        if (this->unk2AC == 1) {
            func_80BE895C(this, globalCtx);
            return;
        }
        goto block_9;
    }
block_9:
    this->actor.textId = *(&D_80BE8E3C + (this->actor.unk2A0 * 2));
    func_800B8614(&this->actor, globalCtx, 70.0f);
}

void func_80BE895C(EnBaisen *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    Actor *temp_t6;

    temp_t6 = this->unk2A4;
    sp1C = temp_t6;
    if (temp_t6 != 0) {
        this->unk290 = 1;
        this->unk2AC = 1;
        this = this;
        func_800B86C8(sp1C, globalCtx, sp1C);
    }
    this->unk29C = 1;
    if (this->paramCopy == 0) {
        this->actionFunc = func_80BE8AAC;
        this->unk2A4 = this->heishiPointer;
        return;
    }
    this->actionFunc = func_80BE89D8;
}

void func_80BE89D8(EnBaisen *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    u16 temp_v0_2;

    temp_v0 = this->unk2A4;
    if (this == temp_v0) {
        this->unk29E = this->actor.world.rot.y;
        if (this->animIndex == 0) {
            EnBaisen_ChangeAnimation(this, 1);
        }
    } else {
        this->unk29E = Math_Vec3f_Yaw(&this->actor.world.pos, &temp_v0->world.pos);
        if (this->animIndex != 0) {
            EnBaisen_ChangeAnimation(this, 0);
        }
    }
    temp_v0_2 = globalCtx->msgCtx.unk11F04;
    if ((temp_v0_2 == 0x2AC6) || (temp_v0_2 == 0x2AC7) || (temp_v0_2 == 0x2AC8)) {
        this->skelAnime.animPlaybackSpeed = 0.0f;
        this->unk29E = this->actor.yawTowardsPlayer;
    }
    if (this->unk2AC == 2) {
        func_80BE87FC(this);
    }
}

void func_80BE8AAC(EnBaisen *this, GlobalContext *globalCtx) {
    Actor *temp_a3;
    Actor *temp_a3_2;
    s16 temp_v0;

    if ((this->textIdIndex & 1) != 0) {
        this->unk29E = this->actor.world.rot.y;
        if (this->animIndex == 0) {
            EnBaisen_ChangeAnimation(this, 1);
        }
    } else {
        temp_a3 = this->unk2A4;
        if (temp_a3 != 0) {
            this->unk29E = Math_Vec3f_Yaw(&this->actor.world.pos, &temp_a3->world.pos);
        }
        if (this->animIndex != 0) {
            EnBaisen_ChangeAnimation(this, 0);
        }
    }
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        func_801477B4(globalCtx);
        this->textIdIndex += 1;
        temp_v0 = this->textIdIndex;
        if ((s32) temp_v0 < 6) {
            func_80151938(globalCtx, *(&D_80BE8E3C + (temp_v0 * 2)));
            if ((this->textIdIndex & 1) == 0) {
                this->unk2A4 = this->heishiPointer;
            } else {
                this->unk2A4 = &this->actor;
            }
            temp_a3_2 = this->unk2A4;
            func_800B86C8(temp_a3_2, globalCtx, temp_a3_2);
            return;
        }
        func_80BE87FC(this);
        // Duplicate return node #15. Try simplifying control flow for better match
    }
}

void EnBaisen_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnBaisen *this = (EnBaisen *) thisx;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    s16 temp_v0;

    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    temp_v0 = this->unusedCounter;
    if (temp_v0 != 0) {
        this->unusedCounter = temp_v0 - 1;
    }
    this->actor.shape.rot.y = this->actor.world.rot.y;
    if ((this->paramCopy != 0) && (gSaveContext.day == 3) && (gSaveContext.isNight != 0)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 20.0f, 20.0f, 50.0f, 0x1DU);
    Actor_SetScale(&this->actor, 0.01f);
    if (this->unk290 != 0) {
        func_80BE871C(this);
    }
    Actor_SetHeight(&this->actor, 60.0f);
    Math_SmoothStepToS(&this->headRotX, this->headRotXTarget, 1, 0xBB8, (s16) 0);
    Math_SmoothStepToS(&this->headRotY, this->headRotYTarget, 1, 0x3E8, (s16) 0);
    temp_a2 = &this->collider;
    sp2C = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
}

s32 EnBaisen_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 9) {
        arg4->x += arg5->unk27E;
        arg4->y += arg5->unk27C;
        arg4->z += arg5->unk280;
    }
    return 0;
}

void EnBaisen_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnBaisen *this = (EnBaisen *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, EnBaisen_OverrideLimbDraw, NULL, &this->actor);
}

