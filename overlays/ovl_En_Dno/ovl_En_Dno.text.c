void func_80A711D0(Actor *arg0, GlobalContext *arg1, Vec3f *arg2); /* static */
s32 func_80A71424(s16 *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5); /* static */
void func_80A714B4(EnDno *arg0, GlobalContext *arg1); /* static */
void func_80A7153C(void *arg0, void *arg1, void *arg2); /* static */
void func_80A715DC(EnDno *arg0, GlobalContext *arg1); /* static */
void func_80A71788(EnDno *arg0, GlobalContext *arg1); /* static */
void func_80A71B58(EnDno *this, GlobalContext *globalCtx); /* static */
void func_80A7256C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A72598(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A72D8C(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1); /* static */
s32 func_80A72FAC(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1); /* static */
void func_80A73408(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A7361C(GlobalContext *globalCtx, s32 limbIndex, Gfx **dList, Vec3f *pos, Vec3s *rot, Actor *actor); /* static */
void func_80A73654(GlobalContext *globalCtx, s32 limbIndex, Gfx **dList, Vec3s *rot, Actor *actor); /* static */
extern AnimationHeader D_06007CA4;
extern FlexSkeletonHeader D_0600E1F8;
static struct_80B8E1A8 D_80A739A0 = {
    {(AnimationHeader *)0x6000470, 1.0f, 2, 0.0f},
    {(AnimationHeader *)0x60008F0, 1.0f, 2, 0.0f},
    {(AnimationHeader *)0x6000F6C, 1.0f, 0, 0.0f},
    {(AnimationHeader *)0x6001A50, 1.0f, 2, 0.0f},
    {(AnimationHeader *)0x6002530, 1.0f, 2, 0.0f},
    {(AnimationHeader *)0x6003320, 1.0f, 2, 0.0f},
    {(AnimationHeader *)0x60036D0, 1.0f, 0, 0.0f},
    {(AnimationHeader *)0x60041CC, 1.0f, 2, 0.0f},
    {(AnimationHeader *)0x6004DD8, 1.0f, 2, 0.0f},
    {(AnimationHeader *)0x6005F98, 1.0f, 0, 0.0f},
    {(AnimationHeader *)0x6006488, 1.0f, 2, 0.0f},
    {(AnimationHeader *)0x60073E4, 1.0f, 0, 0.0f},
    {(AnimationHeader *)0x60077A8, 1.0f, 0, 0.0f},
    {(AnimationHeader *)0x6007CA4, 1.0f, 0, 0.0f},
    {(AnimationHeader *)0x6008324, 1.0f, 0, 0.0f},
    {(AnimationHeader *)0x6008AE4, 1.0f, 2, 0.0f},
    {(AnimationHeader *)0x6009100, 1.0f, 2, 0.0f},
    {(AnimationHeader *)0x60051E4, 1.0f, 2, 0.0f},
    {(AnimationHeader *)0x6005E20, 1.0f, 0, 0.0f},
    {(AnimationHeader *)0x6006F84, 1.0f, 0, 0.0f},
};
static ColliderCylinderInit D_80A73B00 = {
    {0, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x11, 0x3A, 0, {0, 0, 0}},
};
static Vec3f D_80A73B2C = {0.0f, 0.0f, 1.0f};
static InitChainEntry D_80A73B38;                   /* unable to generate initializer */
static Vec3f D_80A73B40 = {0.0f, 0.0f, 0.0f};



void func_80A711D0(Actor *arg0, GlobalContext *arg1, Vec3f *arg2) {
    f32 temp_f2;

    temp_f2 = Rand_ZeroOne() * 0.5f;
    Lights_PointGlowSetInfo(arg0 + 0x440, (s16) (s32) arg2->x, (s16) (s32) arg2->y, (s16) (s32) arg2->z, (u8) (u32) ((127.5f * temp_f2) + 127.5f), (u8) (u32) ((100.0f * temp_f2) + 100.0f), (u8) (u32) ((40.0f * temp_f2) + 40.0f), (s16) 0x140);
}

s32 func_80A71424(s16 *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5) {
    s16 temp_v0;
    s32 phi_v1;
    s32 phi_v0;

    temp_v0 = arg2 - arg3;
    if ((s32) temp_v0 >= 0) {
        phi_v1 = (s32) temp_v0;
    } else {
        phi_v1 = -(s32) temp_v0;
    }
    if ((s32) arg4 >= phi_v1) {
        phi_v0 = Math_ScaledStepToS(arg0, (s16) (arg1 + temp_v0), arg5);
    } else {
        phi_v0 = Math_ScaledStepToS(arg0, arg1, arg5);
    }
    return phi_v0;
}

void func_80A714B4(EnDno *arg0, GlobalContext *arg1) {
    Actor *temp_v0;
    Actor *phi_s0;
    Actor *phi_s0_2;

    phi_s0 = NULL;
    do {
        temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, 1, 0x17E);
        phi_s0_2 = temp_v0;
        if (temp_v0 != 0) {
            if ((temp_v0->params & 0xF) == 1) {
                Actor_SetSwitchFlag(arg1, ((s32) temp_v0->params >> 4) & 0x7F);
            }
            phi_s0_2 = temp_v0->next;
        }
        phi_s0 = phi_s0_2;
    } while (phi_s0_2 != 0);
}

void func_80A7153C(void *arg0, void *arg1, void *arg2) {
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f8;
    s16 temp_a0;

    temp_a0 = arg0->unk16;
    arg0 = arg0;
    sp1C = Math_CosS(temp_a0);
    temp_f0 = Math_SinS(arg0->unk16);
    temp_f2 = arg2->unk0 - arg0->unk8;
    temp_f12 = arg2->unk8 - arg0->unk10;
    temp_f8 = temp_f2 * temp_f0;
    arg1->unk0 = (f32) ((temp_f2 * sp1C) - (temp_f12 * temp_f0));
    arg1->unk8 = (f32) ((temp_f12 * sp1C) + temp_f8);
    arg1->unk4 = (f32) (arg2->unk4 - arg0->unkC);
}

void func_80A715DC(EnDno *arg0, GlobalContext *arg1) {
    Vec3f sp88;
    Vec3f sp7C;
    Vec3f sp70;
    Actor *temp_v0;
    PosRot *temp_s1;
    Vec3f *temp_s2;
    Actor *phi_s0;
    Actor *phi_s0_2;

    phi_s0 = NULL;
    do {
        temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, 1, 0x17E);
        phi_s0_2 = temp_v0;
        if (temp_v0 != 0) {
            if ((temp_v0->params & 0xF) == 0) {
                temp_s1 = &temp_v0->home;
                if ((temp_v0->unk170 & 1) == 0) {
                    temp_s2 = arg0 + 0x24;
                    if (func_8013E5CC(&temp_s1->pos, &temp_v0->home.rot, &D_80A73B2C, arg0 + 0x108, temp_s2, &sp88) != 0) {
                        Math_Vec3f_Diff(temp_s2, &temp_s1->pos, &sp7C);
                        Matrix_RotateY((s16) ((s32) temp_v0->home.rot.y * -1), 0U);
                        SysMatrix_MultiplyVector3fByState(&sp7C, &sp70);
                        if ((fabsf(sp70.x) < 100.0f) && (sp70.y >= -10.0f) && (sp70.y <= 180.0f) && (sp70.z < 0.0f)) {
                            temp_v0->unk170 = (s32) (temp_v0->unk170 | 1);
                        }
                    }
                }
            }
            phi_s0_2 = temp_v0->next;
        }
        phi_s0 = phi_s0_2;
    } while (phi_s0_2 != 0);
}

void func_80A71788(EnDno *arg0, GlobalContext *arg1) {
    Actor *temp_v0;
    Actor *phi_s0;
    Actor *phi_s0_2;

    phi_s0 = NULL;
    do {
        temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, 1, 0x17E);
        phi_s0_2 = temp_v0;
        if (temp_v0 != 0) {
            Actor_UnsetSwitchFlag(arg1, ((s32) temp_v0->params >> 4) & 0x7F);
            phi_s0_2 = temp_v0->next;
        }
        phi_s0 = phi_s0_2;
    } while (phi_s0_2 != 0);
}

void EnDno_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnDno *this = (EnDno *) thisx;
    SkelAnime *sp38;
    Actor *temp_v0;
    Actor *temp_v0_3;
    ColliderCylinder *temp_s0;
    SkelAnime *temp_a1;
    s32 temp_v0_2;
    Actor *phi_s0;
    Actor *phi_s0_2;

    phi_s0 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(globalCtx, phi_s0, 4, 0x17F);
    phi_s0_2 = temp_v0;
    if (temp_v0 != 0) {
        if (temp_v0 != this) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
        phi_s0_2 = temp_v0->next;
        goto block_5;
    }
block_5:
    phi_s0 = phi_s0_2;
    if (phi_s0_2 == 0) {
        Actor_ProcessInitChain(&this->actor, &D_80A73B38);
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 21.0f);
        temp_a1 = &this->skelAnime;
        sp38 = temp_a1;
        SkelAnime_InitSV(globalCtx, temp_a1, &D_0600E1F8, &D_06007CA4, this->jointTable, this->morphTable, 0x1C);
        temp_s0 = &this->collider;
        Collider_InitCylinder(globalCtx, temp_s0);
        Collider_SetCylinder(globalCtx, temp_s0, &this->actor, &D_80A73B00);
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4U);
        SkelAnime_ChangeAnim(sp38, (AnimationHeader *) D_80A739A0.unkE0, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(D_80A739A0.unkE0), (u8) (s32) D_80A739A0.unkE8, D_80A739A0.unkEC);
        temp_v0_2 = ((s32) this->actor.params >> 0xE) & 3;
        this->unk_3BE = 0x3E93;
        this->unk_3B0 = 0;
        this->unk_468 = 0x63;
        this->unk_3C0 = 60.0f;
        this->skelAnime.animPlaybackSpeed = 0.0f;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 != 1) {
                this->actionFunc = func_80A71B04;
                return;
            }
            if ((gSaveContext.weekEventReg[23] & 0x20) != 0) {
                Actor_MarkForDeath(&this->actor);
                return;
            }
            func_8013E1C8(sp38, (struct_80B8E1A8 []) &D_80A739A0, 0xD, &this->unk_32C);
            temp_v0_3 = func_ActorCategoryIterateById(globalCtx, NULL, 4, 0x16A);
            this->unk_460 = temp_v0_3;
            if (temp_v0_3 == 0) {
                Actor_MarkForDeath(&this->actor);
                return;
            }
            this->actionFunc = func_80A71B68;
            return;
        }
        func_80A71788(this, globalCtx);
        if (((gSaveContext.weekEventReg[23] & 0x20) == 0) || ((gSaveContext.weekEventReg[93] & 2) != 0)) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
        func_8013E1C8(sp38, (struct_80B8E1A8 []) &D_80A739A0, 0xE, &this->unk_32C);
        this->actor.room = -1;
        gSaveContext.unk_3DD0[1] = 5;
        this->lightNode = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, &this->lightInfo);
        this->unk_3B0 |= 1;
        this->actionFunc = func_80A72438;
        this->unk_454 = 0.0f;
        return;
    }
    goto loop_1;
}

void EnDno_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDno *this = (EnDno *) thisx;
    GlobalContext *temp_a0;

    temp_a0 = globalCtx;
    globalCtx = globalCtx;
    Collider_DestroyCylinder(temp_a0, &this->collider);
    LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, this->lightNode);
}

void func_80A71B04(EnDno *this, GlobalContext *globalCtx) {
    this->unk_452 = 0;
    func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 0x13, &this->unk_32C);
    this->actionFunc = func_80A71B58;
}

void func_80A71B58(EnDno *this, GlobalContext *globalCtx) {

}

void func_80A71B68(EnDno *this, GlobalContext *globalCtx) {
    this->unk_452 = 0;
    this->actor.textId = 0;
    if ((*(gBitFlags + 0x18) & gSaveContext.inventory.questItems) != 0) {
        if ((gSaveContext.weekEventReg[27] & 1) != 0) {
            if ((this->unk_3B0 & 0x20) == 0) {
                func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 6, &this->unk_32C);
                this->actor.shape.rot.y = Actor_YawBetweenActors(&this->actor, this->unk_460);
            }
        } else {
            func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 0xD, &this->unk_32C);
        }
    } else {
        func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 0xD, &this->unk_32C);
    }
    this->actionFunc = func_80A71C3C;
}

void func_80A71C3C(EnDno *this, GlobalContext *globalCtx) {
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = this->unk_32C;
    switch (temp_v1) {
    case 9:
    case 16:
        func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 0xA, &this->unk_32C);
block_9:
        break;
    case 3:
    case 10:
        if (this->skelAnime.animFrameCount == this->skelAnime.animCurrentFrame) {
            func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 0xD, &this->unk_32C);
            goto block_9;
        }
        break;
    case 11:
        func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 0xF, &this->unk_32C);
        goto block_9;
    case 15:
        if (this->skelAnime.animFrameCount == this->skelAnime.animCurrentFrame) {
            func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 6, &this->unk_32C);
        }
        // fallthrough
    case 6:
        Math_SmoothStepToS(&this->actor.shape.rot.y, Actor_YawBetweenActors(&this->actor, this->unk_460), 2, 0xE38, (s16) 0x222);
        goto block_9;
    }
    if ((this->unk_32C == 0xD) && (this->actor.xzDistToPlayer <= 120.0f)) {
        func_80A71424(&this->unk_466, 0, this->actor.yawTowardsPlayer, this->actor.shape.rot.y, (s16) 0x2000, (s16) 0x16C);
    } else {
        Math_ScaledStepToS(&this->unk_466, 0, 0x16C);
    }
    temp_v1_2 = this->unk_32C;
    if ((temp_v1_2 != 3) && (temp_v1_2 != 0xF) && (temp_v1_2 != 6)) {
        Math_ScaledStepToS(&this->actor.shape.rot.y, this->actor.home.rot.y, 0x222);
    }
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        globalCtx->msgCtx.unk11F22 = 0;
        globalCtx->msgCtx.unk11F10 = 0;
        func_80A71E54(this, globalCtx);
        return;
    }
    if (this->actor.xzDistToPlayer < 60.0f) {
        func_800B8614(&this->actor, globalCtx, 60.0f);
    }
}

void func_80A71E54(EnDno *this, GlobalContext *globalCtx) {
    if ((*(gBitFlags + 0x18) & gSaveContext.inventory.questItems) != 0) {
        if ((gSaveContext.weekEventReg[27] & 1) != 0) {
            this->unk_464 = 0x811;
        } else {
            this->unk_464 = 0x80F;
            gSaveContext.weekEventReg[27] |= 1;
        }
    } else if ((gSaveContext.weekEventReg[26] & 0x80) != 0) {
        this->unk_464 = 0x80B;
    } else {
        this->unk_464 = 0x80C;
        gSaveContext.weekEventReg[26] |= 0x80;
    }
    if (this->unk_464 != 0x811) {
        this->unk_3B0 |= 0x10;
    } else {
        this->unk_3B0 &= 0xFFEF;
    }
    this->actionFunc = func_80A71F18;
}

void func_80A71F18(EnDno *this, GlobalContext *globalCtx) {
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    u16 temp_a1;
    u16 temp_t1;
    u32 temp_v0;

    Math_ScaledStepToS(&this->unk_466, 0, 0x16C);
    temp_v0 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0) { // switch 1
    case 0: // switch 1
        if (((this->unk_3B0 & 0x10) == 0) || (Math_ScaledStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xE38) != 0)) {
            temp_a1 = this->unk_464;
            if (temp_a1 != 0x80B) {
                if ((temp_a1 != 0x80C) && (temp_a1 != 0x80F)) {
                    if (temp_a1 != 0x811) {
                        return;
                    }
                    goto block_10;
                }
                temp_v0_2 = this->unk_32C;
                if (temp_v0_2 == 0xD) {
                    func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 4, &this->unk_32C);
                    return;
                }
                if ((temp_v0_2 == 4) && (this->skelAnime.animFrameCount == this->skelAnime.animCurrentFrame)) {
                    func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 0xB, &this->unk_32C);
                    func_801518B0(globalCtx, this->unk_464, &this->actor);
                    return;
                }
                // Duplicate return node #59. Try simplifying control flow for better match
                return;
            }
            func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 0x10, &this->unk_32C);
block_10:
            func_801518B0(globalCtx, this->unk_464, &this->actor);
            return;
        }
    default: // switch 1
    default: // switch 2
        return;
    case 3: // switch 1
        if (globalCtx->msgCtx.unk11F04 == 0x80B) {
            temp_v0_3 = this->unk_32C;
            if (temp_v0_3 != 0xA) {
                if (temp_v0_3 == 0x10) {
                    if (this->skelAnime.animFrameCount == this->skelAnime.animCurrentFrame) {
                        func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 9, &this->unk_32C);
                    }
                    Math_ScaledStepToS(&this->actor.shape.rot.y, Actor_YawBetweenActors(&this->actor, this->unk_460), 0x71C);
                    return;
                }
                // Duplicate return node #59. Try simplifying control flow for better match
                return;
            }
            if (this->skelAnime.animFrameCount == this->skelAnime.animCurrentFrame) {
                func_801477B4(globalCtx);
                func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 0xD, &this->unk_32C);
                func_80A71B68(this, globalCtx);
                return;
            }
            // Duplicate return node #59. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #59. Try simplifying control flow for better match
        return;
    case 4: // switch 1
    case 5: // switch 1
    case 6: // switch 1
        temp_t1 = globalCtx->msgCtx.unk11F04;
        switch (temp_t1) { // switch 2
        case 2059: // switch 2
            temp_v0_4 = this->unk_32C;
            if (temp_v0_4 != 9) {
                if (temp_v0_4 != 0xA) {
                    if ((temp_v0_4 == 0x10) && (this->skelAnime.animFrameCount == this->skelAnime.animCurrentFrame)) {
                        func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 9, &this->unk_32C);
                        return;
                    }
                    // Duplicate return node #59. Try simplifying control flow for better match
                    return;
                }
                if (this->skelAnime.animFrameCount == this->skelAnime.animCurrentFrame) {
                    func_801477B4(globalCtx);
                    func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 0xD, &this->unk_32C);
                    func_80A71B68(this, globalCtx);
                    return;
                }
                // Duplicate return node #59. Try simplifying control flow for better match
                return;
            }
            if (func_80147624(globalCtx) != 0) {
                func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 0xA, &this->unk_32C);
                globalCtx->msgCtx.unk11F22 = 0x44;
                return;
            }
            // Duplicate return node #59. Try simplifying control flow for better match
            return;
        case 2060: // switch 2
            if (func_80147624(globalCtx) != 0) {
                func_80151938(globalCtx, 0x80DU);
                return;
            }
            // Duplicate return node #59. Try simplifying control flow for better match
            return;
        case 2061: // switch 2
            if (func_80147624(globalCtx) != 0) {
                func_80151938(globalCtx, 0x80EU);
                return;
            }
            // Duplicate return node #59. Try simplifying control flow for better match
            return;
        case 2062: // switch 2
            temp_v0_5 = this->unk_32C;
            if (temp_v0_5 == 0xB) {
                func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 3, &this->unk_32C);
                return;
            }
            if (temp_v0_5 == 3) {
                if (this->skelAnime.animFrameCount == this->skelAnime.animCurrentFrame) {
                    func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 0xD, &this->unk_32C);
                    return;
                }
                // Duplicate return node #59. Try simplifying control flow for better match
                return;
            }
            if ((temp_v0_5 == 0xD) && (func_80147624(globalCtx) != 0)) {
                func_801477B4(globalCtx);
                func_80A71B68(this, globalCtx);
                return;
            }
            // Duplicate return node #59. Try simplifying control flow for better match
            return;
        case 2063: // switch 2
            if (func_80147624(globalCtx) != 0) {
                func_80151938(globalCtx, 0x810U);
                return;
            }
            // Duplicate return node #59. Try simplifying control flow for better match
            return;
        case 2064: // switch 2
            if (func_80147624(globalCtx) != 0) {
                this->unk_3B0 |= 0x20;
                func_801477B4(globalCtx);
                func_80A71B68(this, globalCtx);
                return;
            }
            temp_v0_6 = this->unk_32C;
            if (temp_v0_6 != 0xB) {
                if (temp_v0_6 != 0xF) {
                    return;
                }
                if (this->skelAnime.animFrameCount == this->skelAnime.animCurrentFrame) {
                    func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 6, &this->unk_32C);
                    return;
                }
                // Duplicate return node #59. Try simplifying control flow for better match
                return;
            }
            func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 0xF, &this->unk_32C);
            return;
        case 2065: // switch 2
            if (func_80147624(globalCtx) != 0) {
                func_801477B4(globalCtx);
                func_80A71B68(this, globalCtx);
            }
            // Duplicate return node #59. Try simplifying control flow for better match
            return;
        }
        break;
    }
}

void func_80A72438(EnDno *this, GlobalContext *globalCtx) {
    this->unk_452 = 1;
    func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 0xE, &this->unk_32C);
    this->actor.textId = 0;
    if (Flags_GetSwitch(globalCtx, ((s32) this->actor.params >> 7) & 0x7F) != 0) {
        this->unk_454 = 1.0f;
    }
    this->actionFunc = func_80A724B8;
}

void func_80A724B8(EnDno *this, GlobalContext *globalCtx) {
    if (this->actor.xzDistToPlayer < 120.0f) {
        func_80A71424(&this->unk_466, 0, this->actor.yawTowardsPlayer, this->actor.home.rot.y, (s16) 0x2000, (s16) 0x2D8);
    }
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        func_80A725E0(this, globalCtx);
        return;
    }
    if (this->actor.xzDistToPlayer < 60.0f) {
        func_800B8614(&this->actor, globalCtx, 60.0f);
    }
}

void func_80A7256C(Actor *arg0, GlobalContext *arg1) {
    func_800B8500(arg0, arg1, arg0->xzDistToPlayer, arg0->yDistToPlayer, -1);
}

void func_80A72598(Actor *arg0, GlobalContext *arg1) {
    if (func_800B84D0(arg0, arg1) != 0) {
        func_80A725E0((EnDno *) arg0, arg1);
        return;
    }
    func_80A7256C(arg0, arg1);
}

void func_80A725E0(EnDno *this, GlobalContext *globalCtx) {
    this->actionFunc = func_80A725F8;
}

void func_80A725F8(EnDno *this, GlobalContext *globalCtx) {
    SkelAnime *sp28;
    SkelAnime *temp_a0;
    SkelAnime *temp_a0_2;
    f32 temp_f0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_5;
    u16 temp_t6;
    u16 temp_v0_4;
    u32 temp_v0;

    func_80A71424(&this->unk_466, 0, 0, 0, (s16) 0x2000, (s16) 0x16C);
    temp_v0 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0) { // switch 1
    case 0: // switch 1
        temp_v0_2 = this->unk_328;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 != 2) {
                if (temp_v0_2 != 3) {
                    return;
                }
                func_801518B0(globalCtx, 0x804U, &this->actor);
                return;
            }
            if (Math_ScaledStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0x2D8) != 0) {
                gSaveContext.weekEventReg[93] |= 2;
                func_801518B0(globalCtx, 0x802U, &this->actor);
                return;
            }
            // Duplicate return node #53. Try simplifying control flow for better match
            return;
        }
        temp_v0_3 = this->unk_32C;
        if (temp_v0_3 == 0xE) {
            if (Math_ScaledStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0x2D8) != 0) {
                func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 5, &this->unk_32C);
                return;
            }
            // Duplicate return node #53. Try simplifying control flow for better match
            return;
        }
        temp_a0 = &this->skelAnime;
        if ((temp_v0_3 == 5) && (sp28 = temp_a0, (func_801378B8(temp_a0, this->skelAnime.animFrameCount) != 0))) {
            if (Flags_GetSwitch(globalCtx, ((s32) this->actor.params >> 7) & 0x7F) != 0) {
                func_801518B0(globalCtx, 0x801U, &this->actor);
            } else if (Player_GetMask(globalCtx) == 0x13) {
                func_801518B0(globalCtx, 0x806U, &this->actor);
            } else {
                func_801518B0(globalCtx, 0x800U, &this->actor);
            }
            func_8013E1C8(sp28, (struct_80B8E1A8 []) &D_80A739A0, 0xE, &this->unk_32C);
            return;
        }
    default: // switch 1
        return;
    case 1: // switch 1
    case 2: // switch 1
    case 3: // switch 1
        temp_v0_4 = globalCtx->msgCtx.unk11F04;
        if (((temp_v0_4 == 0x800) || (temp_v0_4 == 0x801)) && (this->unk_32C == 8)) {
            Math_SmoothStepToF(&this->unk_454, 1.0f, 1.0f, 0.1f, 0.01f);
            temp_f0 = this->skelAnime.animCurrentFrame;
            if (temp_f0 <= 23.0f) {
                this->unk_452 = 3;
                if (func_801378B8(&this->skelAnime, 23.0f) != 0) {
                    Audio_PlayActorSound2(&this->actor, 0x2952U);
                }
            } else if (temp_f0 <= 24.0f) {
                this->unk_452 = 4;
            } else if (temp_f0 >= 25.0f) {
                this->unk_452 = 2;
            }
            temp_a0_2 = &this->skelAnime;
            sp28 = temp_a0_2;
            if (func_801378B8(temp_a0_2, this->skelAnime.animFrameCount) != 0) {
                func_8013E1C8(temp_a0_2, (struct_80B8E1A8 []) &D_80A739A0, 0xC, &this->unk_32C);
                func_801518B0(globalCtx, 0x803U, &this->actor);
                return;
            }
            // Duplicate return node #53. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #53. Try simplifying control flow for better match
        return;
    case 4: // switch 1
    case 5: // switch 1
    case 6: // switch 1
        temp_t6 = globalCtx->msgCtx.unk11F04;
        switch (temp_t6) { // switch 2
        case 2048: // switch 2
        case 2049: // switch 2
            if (func_80147624(globalCtx) != 0) {
                globalCtx->msgCtx.unk11F22 = 0x44;
                this->unk_452 = 1;
                this->unk_454 = 0.0f;
                func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 8, &this->unk_32C);
                return;
            }
            // Duplicate return node #53. Try simplifying control flow for better match
            return;
        case 2050: // switch 2
            if (func_80147624(globalCtx) != 0) {
                if (gSaveContext.inventory.items[gItemSlots[0x48]] == 0x48) {
                    this->unk_458 = 4;
                } else {
                    this->unk_458 = 0x8E;
                }
                func_800B8A1C(&this->actor, globalCtx, this->unk_458, 60.0f, 60.0f);
                func_801477B4(globalCtx);
                func_80A72B84(this, globalCtx);
                return;
            }
            // Duplicate return node #53. Try simplifying control flow for better match
            return;
        case 2051: // switch 2
            if (func_80147624(globalCtx) != 0) {
                func_80A72AE4(this, globalCtx);
                return;
            }
            // Duplicate return node #53. Try simplifying control flow for better match
            return;
        case 2052: // switch 2
            temp_v0_5 = this->unk_32C;
            if (temp_v0_5 == 0xE) {
                if ((func_80147624(globalCtx) != 0) && (func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 5, &this->unk_32C), ((this->unk_3B0 & 0x40) == 0))) {
                    func_80A72CF8(this, globalCtx);
                    this->unk_3B0 |= 0x40;
                    return;
                }
                // Duplicate return node #53. Try simplifying control flow for better match
                return;
            }
            if ((temp_v0_5 == 5) && (this->skelAnime.animFrameCount == this->skelAnime.animCurrentFrame)) {
                func_801477B4(globalCtx);
                func_80A72438(this, globalCtx);
                return;
            }
            // Duplicate return node #53. Try simplifying control flow for better match
            return;
        case 2054: // switch 2
            if (func_80147624(globalCtx) != 0) {
                func_80151938(globalCtx, 0x800U);
                return;
            }
            // Duplicate return node #53. Try simplifying control flow for better match
            return;
        default: // switch 2
            func_80A72438(this, globalCtx);
            // Duplicate return node #53. Try simplifying control flow for better match
            return;
        }
        break;
    }
}

void func_80A72AE4(EnDno *this, GlobalContext *globalCtx) {
    func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 0, &this->unk_32C);
    func_80A714B4(this, globalCtx);
    this->actionFunc = func_80A72B3C;
}

void func_80A72B3C(EnDno *this, GlobalContext *globalCtx) {
    EnDno *temp_a2;
    f32 temp_a1;

    temp_a2 = this;
    temp_a1 = temp_a2->skelAnime.animFrameCount;
    this = temp_a2;
    if (func_801378B8(&temp_a2->skelAnime, temp_a1) != 0) {
        this->unk_44E = 0;
        func_80A72C04(this, globalCtx);
    }
}

void func_80A72B84(EnDno *this, GlobalContext *globalCtx) {
    this->unk_328 = 3;
    this->actionFunc = func_80A72BA4;
}

void func_80A72BA4(EnDno *this, GlobalContext *globalCtx) {
    if (Actor_HasParent(&this->actor, globalCtx) != 0) {
        this->actor.parent = NULL;
        this->actionFunc = (void (*)(EnDno *, GlobalContext *)) func_80A72598;
        return;
    }
    func_800B8A1C(&this->actor, globalCtx, this->unk_458, 60.0f, 60.0f);
}

void func_80A72C04(EnDno *this, GlobalContext *globalCtx) {
    Vec3f *sp3C;
    EnDno_ActorUnkStruct *sp38;
    EnDno_ActorUnkStruct *temp_a3;
    Vec3f *temp_a0;
    u32 temp_t7;

    func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 0, &this->unk_32C);
    temp_a0 = &this->unk_334;
    temp_t7 = this->actor.flags | 0x8000000;
    this->actor.flags = temp_t7;
    this->actor.flags = temp_t7 & ~9;
    sp3C = temp_a0;
    Math_Vec3f_Copy(temp_a0, &this->actor.world.pos);
    temp_a3 = &this->unk_340;
    sp38 = temp_a3;
    func_8013DCE0(globalCtx, sp3C, &this->actor, temp_a3, globalCtx->setupPathList, this->actor.params & 0x7F, 1, 0, 1, 0);
    func_8013DF3C(globalCtx, sp38);
    this->actor.world.rot.y = this->unk_340.unk_56;
    this->actor.world.rot.x = this->unk_340.unk_54;
    Actor_SetSwitchFlag(globalCtx, ((s32) this->actor.params >> 7) & 0x7F);
    this->actionFunc = func_80A730A0;
}

void func_80A72CF8(EnDno *this, GlobalContext *globalCtx) {
    EnDno *temp_a1;

    temp_a1 = this;
    this = temp_a1;
    Actor_UpdateBgCheckInfo(globalCtx, &temp_a1->actor, 0.0f, 0.0f, 0.0f, 4U);
    Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, 0x38, this->actor.world.pos.x + 80.0f, this->actor.floorHeight, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, 0x201);
}

s32 func_80A72D8C(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1) {
    s32 sp3C;
    f32 sp38;
    s32 sp2C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_s0;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_s0 = arg1->unk_48;
    sp3C = 0;
    temp_s0->gravity = 0.0f;
    temp_v0 = temp_s0->yawTowardsPlayer - temp_s0->world.rot.y;
    if (((s32) temp_v0 < 0x4001) && ((s32) temp_v0 >= -0x4000)) {
        Math_SmoothStepToF(temp_s0 + 0x70, 15.0f, 0.8f, 1.0f, 0.01f);
    } else {
        temp_f0 = temp_s0->xzDistToPlayer;
        if (temp_f0 <= 80.0f) {
            Math_SmoothStepToF(temp_s0 + 0x70, 8.0f, 0.5f, 0.5f, 0.01f);
        } else if (temp_f0 <= 360.0f) {
            Math_SmoothStepToF(temp_s0 + 0x70, 7.0f, 0.5f, 0.5f, 0.01f);
        } else {
            Math_SmoothStepToF(temp_s0 + 0x70, 3.5f, 0.5f, 0.5f, 0.01f);
        }
    }
    temp_f2 = temp_s0->speedXZ;
    if (arg1->unk_50 < (temp_f2 * temp_f2)) {
        sp3C = 1;
    } else {
        temp_a1 = arg1->unk_54;
        temp_v0_2 = temp_a1 - temp_s0->world.rot.x;
        temp_f12 = temp_f2 / sqrtf(arg1->unk_4C);
        phi_v1_2 = -temp_v0_2;
        if (temp_v0_2 >= 0) {
            phi_v1_2 = temp_v0_2;
        }
        temp_v0_3 = arg1->unk_56 - temp_s0->world.rot.y;
        phi_v1 = -temp_v0_3;
        if (temp_v0_3 >= 0) {
            phi_v1 = temp_v0_3;
        }
        temp_a2 = (s32) ((f32) phi_v1_2 * temp_f12) + 0x71C;
        sp2C = phi_v1;
        sp38 = temp_f12;
        Math_ScaledStepToS(temp_s0 + 0x30, temp_a1, temp_a2);
        Math_ScaledStepToS(temp_s0 + 0x32, arg1->unk_56, (s16) ((s32) ((f32) phi_v1 * temp_f12) + 0x71C));
    }
    return sp3C;
}

s32 func_80A72FAC(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1) {
    f32 sp24;
    f32 sp20;
    f32 temp_f6;
    void *temp_s0;

    temp_s0 = arg1->unk_48;
    temp_f6 = Math_CosS((s16) ((s32) temp_s0->world.rot.x * -1)) * temp_s0->speedXZ;
    sp20 = gFramerateDivisorHalf;
    sp24 = temp_f6;
    temp_s0->velocity.x = Math_SinS(temp_s0->world.rot.y) * sp24;
    temp_s0->velocity.y = Math_SinS((s16) ((s32) temp_s0->world.rot.x * -1)) * temp_s0->speedXZ;
    temp_s0->velocity.z = Math_CosS(temp_s0->world.rot.y) * temp_f6;
    temp_s0->unk334 = (f32) (temp_s0->unk334 + ((temp_s0->velocity.x * sp20) + temp_s0->colChkInfo.displacement.x));
    temp_s0->unk338 = (f32) (temp_s0->unk338 + ((temp_s0->velocity.y * sp20) + temp_s0->colChkInfo.displacement.y));
    temp_s0->unk33C = (f32) (temp_s0->unk33C + ((temp_s0->velocity.z * sp20) + temp_s0->colChkInfo.displacement.z));
    return 0;
}

void func_80A730A0(EnDno *this, GlobalContext *globalCtx) {
    f32 sp30;
    SkelAnime *sp2C;
    PosRot *temp_a0_2;
    SkelAnime *temp_a0;
    f32 temp_f10;
    s32 temp_v0;
    s32 phi_a2;

    temp_a0 = &this->skelAnime;
    sp2C = temp_a0;
    if (func_801378B8(temp_a0, this->skelAnime.animFrameCount) != 0) {
        temp_v0 = this->unk_32C;
        phi_a2 = -1;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {

            } else {
                phi_a2 = 2;
            }
        } else if ((s32) this->unk_44E >= 0x14) {
            phi_a2 = 1;
        } else {
            this->unk_44E = 0x14;
        }
        if (phi_a2 >= 0) {
            func_8013E1C8(temp_a0, (struct_80B8E1A8 []) &D_80A739A0, phi_a2, &this->unk_32C);
        }
    }
    func_8013DE04(globalCtx, &this->unk_340, func_8013DF3C, func_80A72D8C, func_80A72FAC, func_8013E0A4);
    temp_a0_2 = &this->actor.world;
    this->unk_340.unk_2C.x = 0.0f;
    this->unk_45C += 0x1999;
    this->unk_340.unk_2C.y = 0.0f;
    this->unk_340.unk_2C.z = 0.0f;
    sp2C = (SkelAnime *) temp_a0_2;
    Math_Vec3f_Copy(&temp_a0_2->pos, &this->unk_334);
    sp30 = Math_SinS(this->unk_3AE);
    temp_f10 = Math_SinS(this->unk_3AC) * (4.0f + sp30);
    this->unk_3AC += 0x1194;
    this->unk_3AE += 0x3E8;
    this->actor.shape.rot.y = this->actor.yawTowardsPlayer;
    this->actor.world.pos.y += temp_f10;
    func_80A715DC(this, globalCtx);
    func_800B9010(&this->actor, 0x2153U);
    if ((this->unk_340.unk_1C & 0x20) != 0) {
        Math_Vec3f_Copy(&temp_a0_2->pos, &this->unk_340.unk_20);
        this->actor.speedXZ = 0.0f;
        this->actor.velocity.x = 0.0f;
        this->actor.velocity.y = 0.0f;
        this->actor.velocity.z = 0.0f;
        func_80A73244(this, globalCtx);
    }
}

void func_80A73244(EnDno *this, GlobalContext *globalCtx) {
    s32 temp_a1;
    u32 temp_t7;

    temp_t7 = this->actor.flags & 0xF7FFFFFF;
    this->actor.flags = temp_t7;
    this->actor.flags = temp_t7 | 9;
    this->unk_328 = 2;
    this->actor.speedXZ = 0.0f;
    temp_a1 = ((s32) this->actor.params >> 7) & 0x7F;
    this = this;
    Actor_UnsetSwitchFlag(globalCtx, temp_a1);
    gSaveContext.unk_3DD0[1] = 5;
    this->unk_44E = 0;
    this->actionFunc = func_80A732C8;
}

void func_80A732C8(EnDno *this, GlobalContext *globalCtx) {
    SkelAnime *sp28;
    SkelAnime *temp_a0;
    u8 temp_v0;

    temp_v0 = this->unk_44E;
    if (temp_v0 == 0) {
        if (Math_ScaledStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 0x71C) != 0) {
            this->unk_44E = 3;
            this->unk_3B0 |= 4;
            func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_80A739A0, 7, &this->unk_32C);
        }
    } else {
        temp_a0 = &this->skelAnime;
        if (temp_v0 == 3) {
            sp28 = temp_a0;
            if (func_801378B8(temp_a0, this->skelAnime.animFrameCount) != 0) {
                func_8013E1C8(sp28, (struct_80B8E1A8 []) &D_80A739A0, 0xE, &this->unk_32C);
                func_80A72438(this, globalCtx);
            } else {
                if (this->skelAnime.animCurrentFrame >= 20.0f) {
                    Math_SmoothStepToF(&this->unk_454, 0.0f, 1.0f, 0.125f, 0.01f);
                }
                if (func_801378B8(sp28, 4.0f) != 0) {
                    Audio_PlayActorSound2(&this->actor, 0x295EU);
                    this->unk_452 = 4;
                } else if (func_801378B8(sp28, 5.0f) != 0) {
                    this->unk_452 = 3;
                }
            }
        }
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
}

void func_80A73408(Actor *arg0, GlobalContext *arg1) {
    u8 sp33;
    u32 sp2C;
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s32 temp_t8;
    u16 temp_v1;
    u32 temp_v0;
    s32 phi_a2;

    sp33 = 1;
    if (func_800EE29C(arg1, 0x1DBU) != 0) {
        temp_v0 = func_800EE200(arg1, 0x1DBU);
        temp_t8 = temp_v0 * 4;
        sp2C = temp_v0;
        temp_v1 = *(arg1 + temp_t8)->unk1F4C;
        if (arg0->unk468 != temp_v1) {
            if (temp_v1 != 1) {
                phi_a2 = 0x11;
                if (temp_v1 != 2) {
                    sp33 = 0;
                    phi_a2 = 0;
                }
            } else {
                phi_a2 = 0xD;
            }
            if (sp33 != 0) {
                func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) &D_80A739A0, phi_a2, arg0 + 0x32C);
            }
        }
        func_800EDF24(arg0, arg1, sp2C);
    }
    temp_a0 = arg0 + 0x148;
    sp24 = temp_a0;
    if ((func_801378B8(temp_a0, arg0->unk158) != 0) && (arg0->unk32C == 0x11)) {
        func_8013E1C8(temp_a0, (struct_80B8E1A8 []) &D_80A739A0, 0x12, arg0 + 0x32C);
    }
}

void EnDno_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnDno *this = (EnDno *) thisx;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;

    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    func_80A73408(&this->actor, globalCtx);
    this->actionFunc(this, globalCtx);
    if ((this->unk_3B0 & 4) != 0) {
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4U);
    }
    temp_a2 = &this->collider;
    sp2C = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
    Actor_SetHeight(&this->actor, 51.0f);
}

void EnDno_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnDno *this = (EnDno *) thisx;
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, func_80A7361C, func_80A73654, &this->actor);
}

s32 func_80A7361C(GlobalContext *globalCtx, s32 limbIndex, Gfx **dList, Vec3f *pos, Vec3s *rot, Actor *actor) {
    *dList = NULL;
    if (limbIndex == 9) {
        rot->x += actor->unk466;
    }
    return 0;
}

void func_80A73654(GlobalContext *globalCtx, s32 limbIndex, Gfx **dList, Vec3s *rot, Actor *actor) {
    Gfx *sp94;
    Gfx *sp90;
    Vec3f sp84;
    GraphicsContext *sp74;
    u32 sp64;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    u16 temp_t9;
    s32 phi_v0;

    phi_v0 = 0;
    if (*dList != 0) {
        temp_t9 = actor->unk452;
        switch (temp_t9) {
        case 0:
            if ((limbIndex != 0x19) && (limbIndex != 0x1A) && (limbIndex != 0xD) && (limbIndex != 0xF) && (limbIndex != 0x10) && (limbIndex != 0xE)) {
block_24:
                phi_v0 = 1;
            }
            break;
        case 1:
            if ((limbIndex != 0x1A) && (limbIndex != 0xD) && (limbIndex != 0xF) && (limbIndex != 0x10) && (limbIndex != 0xE)) {
                goto block_24;
            }
            break;
        case 2:
            if ((limbIndex != 0xF) && (limbIndex != 0x10)) {
                goto block_24;
            }
            break;
        case 3:
            if ((limbIndex != 0x10) && (limbIndex != 0xE)) {
                goto block_24;
            }
            break;
        case 4:
            if ((limbIndex != 0xF) && (limbIndex != 0xE)) {
                goto block_24;
            }
            break;
        }
    }
    if (phi_v0 == 1) {
        temp_a0 = globalCtx->state.gfxCtx;
        sp74 = temp_a0;
        func_8012C28C(temp_a0);
        if (limbIndex == 0xD) {
            temp_f12 = actor->unk454;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            SysMatrix_InsertXRotation_s(actor->unk45C, 1);
        }
        temp_v1 = sp74->polyOpa.p;
        temp_v1->words.w0 = 0xDA380003;
        sp94 = temp_v1;
        temp_v1->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v1->unk8 = 0xDE000000;
        temp_v1->unkC = (Gfx *) *dList;
        sp74->polyOpa.p = temp_v1 + 0x10;
    }
    if (((actor->unk3B0 & 1) != 0) && (limbIndex == 0x1A)) {
        temp_s0 = globalCtx->state.gfxCtx;
        SysMatrix_StatePush();
        sp64 = globalCtx->gameplayFrames;
        SysMatrix_MultiplyVector3fByState(&D_80A73B40, &sp84);
        func_80A711D0(actor, globalCtx, &sp84);
        SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
        Matrix_Scale(0.15f, 0.15f, 1.0f, 1);
        SysMatrix_InsertTranslation(0.0f, -3200.0f, 0.0f, 1);
        temp_v1_2 = func_8012C2B4(temp_s0->polyXlu.p);
        temp_v1_2->words.w0 = 0xDA380003;
        sp90 = temp_v1_2;
        temp_v1_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v1_2->unk8 = 0xDB060020;
        sp90 = temp_v1_2;
        temp_v1_2->unkC = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, (s32) sp64 * -0x14, 0x20, 0x80);
        temp_v1_2->unk14 = 0xFFFF00FF;
        temp_v1_2->unk10 = 0xFA008080;
        temp_v1_2->unk1C = 0xFF000000;
        temp_v1_2->unk18 = 0xFB000000;
        temp_v1_2->unk20 = 0xDE000000;
        temp_v1_2->unk24 = D_0407D590;
        temp_s0->polyXlu.p = temp_v1_2 + 0x28;
        SysMatrix_StatePop();
    }
}

