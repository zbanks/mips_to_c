void func_8094373C(EnDaiku *arg0, s32 arg1);        /* static */
void func_809437C8(Actor *arg0, f32, EnDaiku *);    /* static */
s32 func_80943E18(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80943E60(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06001114;
extern AnimationHeader D_06002FA0;
extern ? D_06008EC8;
extern FlexSkeletonHeader D_0600A850;
extern AnimationHeader D_0600B690;
static ColliderCylinderInit D_80944078 = {
    {0xA, 0, 0, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
    {0x14, 0x3C, 0, {0, 0, 0}},
};
static ? D_809440A4;                                /* unable to generate initializer */
static ? D_809440C8;                                /* unable to generate initializer */
static ? D_809440D4;                                /* unable to generate initializer */
static ? sTextIds;                                  /* unable to generate initializer */



void EnDaiku_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnDaiku *this = (EnDaiku *) thisx;
    s16 temp_a3;
    s32 temp_v1;
    s32 temp_v1_2;

    this->actor.colChkInfo.mass = 0xFF;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 40.0f);
    this->actor.targetMode = 0;
    Collider_InitAndSetCylinder(globalCtx, &this->collider, &this->actor, &D_80944078);
    temp_a3 = this->actor.params;
    temp_v1 = temp_a3 & 0xFF;
    this->unk_278 = temp_v1;
    if (temp_v1 == 3) {
        this->unk_288 = ((s32) temp_a3 >> 8) & 0xFF;
        this->unk_258 = func_8013D648(globalCtx, this->unk_288, 0x3F);
        goto block_4;
    }
    if (this->unk_278 == 2) {
        this->unk_264 = -0x7D0;
block_4:
    }
    if (this->unk_278 == 0) {
        this->collider.dim.radius = 0x1E;
        this->collider.dim.height = 0x3C;
        this->collider.dim.yShift = 0;
        this->actor.flags |= 0x8000000;
        if (((gSaveContext.weekEventReg[63] & 0x80) != 0) || ((gSaveContext.day == 3) && (gSaveContext.isNight != 0))) {
            Actor_MarkForDeath(&this->actor);
        }
    } else if ((gSaveContext.day == 3) && (gSaveContext.isNight != 0)) {
        Actor_MarkForDeath(&this->actor);
    }
    Math_Vec3f_Copy(&this->unk_26C, &this->actor.world.pos);
    temp_v1_2 = this->unk_278;
    this->unk_280 = this->actor.world.rot.y;
    this->actor.gravity = -3.0f;
    if (temp_v1_2 != 0) {
        if (temp_v1_2 != 1) {
            if (temp_v1_2 != 2) {
                if (temp_v1_2 != 3) {

                } else {
                    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_0600A850, &D_06001114, this->jointTable, this->morphTable, 0x11);
                }
            } else {
                SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_0600A850, &D_0600B690, this->jointTable, this->morphTable, 0x11);
            }
        } else {
            goto block_19;
        }
    } else {
        this->unk_27E = (temp_v1_2 * 4) + 4;
block_19:
        SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_0600A850, &D_06002FA0, this->jointTable, this->morphTable, 0x11);
    }
    func_80943820(this);
}

void EnDaiku_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDaiku *this = (EnDaiku *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void func_8094373C(EnDaiku *arg0, s32 arg1) {
    AnimationHeaderCommon **sp2C;
    AnimationHeaderCommon **temp_v1;
    f32 temp_f0;

    temp_v1 = (arg1 * 4) + &D_809440A4;
    sp2C = temp_v1;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*temp_v1);
    arg0->unk_284 = temp_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_v1, 1.0f, 0.0f, temp_f0, (u8) (s32) *(&D_809440C8 + arg1), -4.0f);
}

void func_809437C8(Actor *arg0) {
    Path *temp_a0;
    s16 temp_a1;
    void *temp_a2;

    if (arg0->unk288 != -1) {
        temp_a0 = arg0->unk258;
        temp_a2 = arg0 + 0x26C;
        if (temp_a0 != 0) {
            temp_a1 = arg0->unk25C;
            arg0 = arg0;
            if (func_8013D68C(temp_a0, temp_a1, temp_a2) == 0) {
                Actor_MarkForDeath(arg0);
            }
        }
    }
}

void func_80943820(EnDaiku *this) {
    s32 sp24;
    s32 temp_v1;

    sp24 = gSaveContext.day - 1;
    temp_v1 = this->unk_278;
    if ((temp_v1 != 0) && (temp_v1 != 1)) {
        if (temp_v1 != 2) {
            if (temp_v1 != 3) {

            } else {
                func_8094373C(this, 6);
                goto block_8;
            }
        } else {
            func_8094373C(this, 7);
            goto block_8;
        }
    } else {
        func_8094373C(this, 0);
block_8:
    }
    this->unk_28C = (sp24 * 4) + this->unk_278;
    this->unk_28A = 0;
    this->actionFunc = func_809438F8;
    this->unk_280 = this->actor.shape.rot.y;
    this->actor.textId = *(&sTextIds + (this->unk_28C * 2));
}

void func_809438F8(EnDaiku *this, GlobalContext *globalCtx) {
    f32 sp4C;
    s32 sp44;
    PosRot *sp28;
    Path *temp_v0;
    PosRot *temp_a0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s16 temp_a0_2;
    s16 temp_v1;
    s32 phi_v0;
    s32 phi_a1;

    sp44 = gSaveContext.day - 1;
    sp4C = this->skelAnime.animCurrentFrame;
    if (Player_GetMask(globalCtx) == 2) {
        if (this->unk_278 == 1) {
            this->actor.textId = 0x2365;
        } else {
            this->actor.textId = 0x2366;
        }
    } else {
        this->unk_28C = (sp44 * 4) + this->unk_278;
        this->actor.textId = *(&sTextIds + (this->unk_28C * 2));
    }
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        func_80943BC0(this);
        return;
    }
    if ((this->unk_278 == 2) && (this->unk_284 <= sp4C)) {
        if (Rand_ZeroOne() < 0.5f) {
            func_8094373C(this, 7);
        } else {
            func_8094373C(this, 8);
        }
    }
    phi_v0 = this->unk_278;
    if (this->unk_278 == 3) {
        temp_f0 = 2.0f * Math_SinS(this->actor.world.rot.y);
        temp_a0 = &this->actor.world;
        sp28 = temp_a0;
        Math_ApproachF(&temp_a0->pos.x, this->unk_26C.x, 0.5f, fabsf(temp_f0));
        Math_ApproachF(&this->actor.world.pos.z, this->unk_26C.z, 0.5f, fabsf(2.0f * Math_CosS(this->actor.world.rot.y)));
        Math_SmoothStepToS(&this->actor.world.rot.y, this->unk_282, 1, 0x7D0, (s16) 0xA);
        temp_f2 = this->actor.world.pos.x - this->unk_26C.x;
        temp_f12 = this->actor.world.pos.z - this->unk_26C.z;
        temp_f14 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
        if (temp_f14 < 4.0f) {
            temp_v0 = this->unk_258;
            if ((temp_v0 != 0) && (fabsf((f32) (this->actor.world.rot.y - this->unk_282)) < 10.0f)) {
                this->unk_25C += 1;
                if ((s32) this->unk_25C >= (s32) temp_v0->count) {
                    this->unk_25C = 0;
                }
                func_809437C8((bitwise Actor *) temp_f12, temp_f14, this);
                this->unk_282 = Math_Vec3f_Yaw(&sp28->pos, &this->unk_26C);
            }
        }
        phi_v0 = this->unk_278;
    }
    if (phi_v0 != 0) {
        temp_a0_2 = this->actor.yawTowardsPlayer;
        temp_v1 = temp_a0_2 - this->actor.world.rot.y;
        phi_a1 = temp_v1 << 0x10;
        if ((s32) temp_v1 < 0) {
            phi_a1 = (s32) temp_v1 * -0x10000;
        }
        this->unk_280 = temp_a0_2;
        if ((phi_v0 == 1) || (phi_v0 == 2) || ((phi_a1 >> 0x10) < 0x2891)) {
            func_800B8614(&this->actor, globalCtx, 100.0f);
        }
    }
}

void func_80943BC0(EnDaiku *this) {
    this->unk_28A = 1;
    this->actionFunc = func_80943BDC;
}

void func_80943BDC(EnDaiku *this, GlobalContext *globalCtx) {
    if ((this->unk_278 == 2) && (this->unk_284 <= this->skelAnime.animCurrentFrame)) {
        if (Rand_ZeroOne() < 0.5f) {
            func_8094373C(this, 7);
        } else {
            func_8094373C(this, 8);
        }
    }
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        func_801477B4(globalCtx);
        func_80943820(this);
    }
}

void EnDaiku_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnDaiku *this = (EnDaiku *) thisx;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    s16 temp_v0;
    s16 temp_v0_2;

    if (this->unk_27E == 0) {
        SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    }
    if ((this->unk_278 == 0) && (gSaveContext.day == 3) && (gSaveContext.isNight != 0)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk_27C;
    if (temp_v0 != 0) {
        this->unk_27C = temp_v0 - 1;
    }
    temp_v0_2 = this->unk_27E;
    if (temp_v0_2 != 0) {
        this->unk_27E = temp_v0_2 - 1;
    }
    Actor_SetScale(&this->actor, 0.01f);
    this->actor.shape.rot.y = this->actor.world.rot.y;
    Actor_SetHeight(&this->actor, 65.0f);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Math_SmoothStepToS(&this->unk_260, this->unk_266, 1, 0xBB8, (s16) 0);
    Math_SmoothStepToS(&this->unk_25E, this->unk_264, 1, 0xBB8, (s16) 0);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 20.0f, 20.0f, 50.0f, 0x1DU);
    temp_a2 = &this->collider;
    this->actor.uncullZoneForward = 650.0f;
    sp2C = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
}

s32 func_80943E18(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xF) {
        arg4->x += arg5->unk260;
        arg4->z += arg5->unk25E;
    }
    return 0;
}

void func_80943E60(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0;

    temp_v0 = *arg0;
    if (arg1 == 0xF) {
        temp_a0 = temp_v0->unk2B0;
        temp_v0->unk2B0 = (void *) (temp_a0 + 8);
        temp_a0->unk0 = 0xDE000000;
        temp_a0->unk4 = (s32) *(&D_809440D4 + (arg4->unk278 * 4));
    }
    if ((arg4->unk278 == 3) && (arg1 == 8)) {
        temp_a0_2 = temp_v0->unk2B0;
        temp_v0->unk2B0 = (void *) (temp_a0_2 + 8);
        temp_a0_2->unk4 = &D_06008EC8;
        temp_a0_2->unk0 = 0xDE000000;
    }
}

void EnDaiku_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnDaiku *this = (EnDaiku *) thisx;
    GraphicsContext *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    s32 temp_t7;

    temp_a0 = globalCtx->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C28C(temp_a0);
    temp_t7 = this->unk_278;
    switch (temp_t7) {
    case 0:
        temp_v0 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xFB000000;
        temp_v0->words.w1 = 0xAA0A46FF;
        break;
    case 1:
        temp_v0_2 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFB000000;
        temp_v0_2->words.w1 = 0xAAC8FFFF;
        break;
    case 2:
        temp_v0_3 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFB000000;
        temp_v0_3->words.w1 = 0xE646FF;
        break;
    case 3:
        temp_v0_4 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xFB000000;
        temp_v0_4->words.w1 = 0xC80096FF;
        break;
    case 4:
        temp_v0_5 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xFB000000;
        temp_v0_5->words.w1 = 0xC80000FF;
        break;
    }
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, func_80943E18, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80943E60, &this->actor);
}

