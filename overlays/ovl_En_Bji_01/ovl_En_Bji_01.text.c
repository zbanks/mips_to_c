void func_809CD6B0(EnBji01 *this, GlobalContext *globalCtx); /* static */
s32 func_809CDA4C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_809CDB04(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06000FDC;
extern FlexSkeletonHeader D_0600578C;
static ColliderCylinderInit D_809CDC50 = {
    {0, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x12, 0x40, 0, {0, 0, 0}},
};
static struct_80B8E1A8 D_809CDC7C = {
    {(AnimationHeader *)0x6000FDC, 1.0f, 0, 0.0f},
    {(AnimationHeader *)0x6005B58, 1.0f, 0, 10.0f},
    {(AnimationHeader *)0x6000AB0, 1.0f, 0, 0.0f},
    {(AnimationHeader *)0x600066C, 1.0f, 2, -5.0f},
};
static ? D_809CDCBC;                                /* unable to generate initializer */
static Vec3f D_809CDCC8 = {1088.0f, 1200.0f, 0.0f};
static ? D_809CDCD4;                                /* unable to generate initializer */



void func_809CCDE0(EnBji01 *this, GlobalContext *globalCtx) {
    Actor *sp64;
    Vec3f sp58;
    PosRot *sp4C;
    Actor *temp_v0;
    PosRot *temp_a3;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    temp_a3 = &temp_v0->world;
    sp4C = temp_a3;
    sp64 = temp_v0;
    Math_Vec3f_Copy(&sp58, &temp_a3->pos);
    sp58.y = temp_v0->unkC44 + 3.0f;
    func_8013E950(&this->actor.world.pos, &this->actor.focus.pos, this->actor.shape.rot.y, &temp_a3->pos, &sp58, &this->headZRotAdj, &this->headXRotAdj, &this->torsoZRotAdj, &this->torsoXRotAdj, (u16) 0x1554, (u16) 0x1FFE, (u16) 0xE38, (u16) 0x1C70);
}

void func_809CCE98(EnBji01 *this, GlobalContext *globalCtx) {
    func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_809CDC7C, 0, &this->animationIndex);
    this->actor.textId = 0;
    this->actionFunc = func_809CCEE8;
}

void func_809CCEE8(EnBji01 *this, GlobalContext *globalCtx) {
    ObjMoonStone *temp_v0;

    Math_ScaledStepToS(&this->actor.shape.rot.y, this->actor.home.rot.y, 0x444);
    if (this->actor.params == 0) {
        if ((this->actor.xzDistToPlayer <= 60.0f) && (this->actor.yDistToPlayer <= 10.0f)) {
            this->actor.flags |= 0x10000;
        } else {
            this->actor.flags &= 0xFFFEFFFF;
        }
    }
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        globalCtx->msgCtx.unk11F22 = 0;
        globalCtx->msgCtx.unk11F10 = 0;
        func_809CD028(this, globalCtx);
        return;
    }
    temp_v0 = this->moonsTear;
    if (temp_v0 != 0) {
        if (temp_v0->actor.colChkInfo.health == 1) {
            func_809CD6C0(this, globalCtx);
            return;
        }
        goto block_11;
    }
    this->moonsTear = func_ActorCategoryIterateById(globalCtx, NULL, 6, 0x283);
block_11:
    func_800B8500(&this->actor, globalCtx, 60.0f, 10.0f, 0);
}

void func_809CD028(EnBji01 *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s32 temp_a0;
    s32 temp_hi;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u16 phi_t4;

    temp_v0 = this->actor.params;
    if ((temp_v0 != 0) && (temp_v0 != 1)) {
        if (temp_v0 != 3) {

        } else {
            temp_v0_2 = gSaveContext.playerForm;
            if ((temp_v0_2 != 1) && (temp_v0_2 != 2)) {
                if (temp_v0_2 != 3) {
                    if (temp_v0_2 != 4) {

                    } else {
                        this->textId = 0x5F7;
                    }
                } else {
                    if ((gSaveContext.weekEventReg[74] & 0x80) != 0) {
                        this->textId = 0x5F2;
                    } else {
                        this->textId = 0x5F1;
                    }
                    func_800B8500(&this->actor, globalCtx, this->actor.xzDistToPlayer, this->actor.yDistToPlayer, 0);
                }
            } else {
                temp_a0 = gSaveContext.day;
                temp_hi = temp_a0 % 5;
                if (temp_hi != 1) {
                    if (temp_hi != 2) {
                        if (temp_hi != 3) {

                        } else {
                            phi_t4 = 0x5EBU;
                            if ((f32) ((-(s32) ((temp_a0 % 5) << 0x10) - ((gSaveContext.time - 0x4000) & 0xFFFF)) + 0x40000) < 2730.6667f) {
                                this->textId = 0x5E8;
                            } else {
                                goto block_40;
                            }
                        }
                    } else {
                        phi_t4 = 0x5EAU;
                        goto block_40;
                    }
                } else {
                    this->textId = 0x5E9;
                }
            }
        }
    } else {
        temp_v0_3 = gSaveContext.playerForm;
        if ((temp_v0_3 != 1) && (temp_v0_3 != 2)) {
            if (temp_v0_3 != 3) {
                if (temp_v0_3 != 4) {

                } else if (Player_GetMask(globalCtx) == 2) {
                    this->textId = 0x236A;
                } else if ((gSaveContext.weekEventReg[74] & 0x10) != 0) {
                    this->textId = 0x5F6;
                } else {
                    this->textId = 0x5F5;
                    gSaveContext.weekEventReg[74] |= 0x10;
                }
            } else if ((gSaveContext.weekEventReg[17] & 0x10) != 0) {
                if ((gSaveContext.weekEventReg[74] & 0x80) != 0) {
                    this->textId = 0x5F4;
                } else {
                    this->textId = 0x5E2;
                }
            } else {
                this->textId = 0x5EC;
                gSaveContext.weekEventReg[17] |= 0x10;
            }
        } else {
            phi_t4 = 0x5E4U;
            if ((gSaveContext.weekEventReg[75] & 8) != 0) {
block_40:
                this->textId = phi_t4;
            } else {
                this->textId = 0x5DC;
                gSaveContext.weekEventReg[75] |= 8;
            }
        }
    }
    func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_809CDC7C, 2, &this->animationIndex);
    this->actionFunc = EnBji01_DialogueHandler;
}

void EnBji01_DialogueHandler(EnBji01 *this, GlobalContext *globalCtx) {
    EnBji01 *self = (EnBji01 *) this;
    u16 temp_v0_2;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 temp_v0_4;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 != 0) {
        if (temp_v0 != 4) {
            if (temp_v0 != 5) {
                if (temp_v0 != 6) {

                } else {
                    self->actor.params = 1;
                    self->actor.flags &= 0xFFFEFFFF;
                    func_809CCE98(self, globalCtx);
                }
            } else if (func_80147624(globalCtx) != 0) {
                self->actor.flags &= 0xFFFEFFFF;
                temp_v0_2 = globalCtx->msgCtx.unk11F04;
                switch (temp_v0_2) {
                case 1502:
                    func_8013E1C8(&self->skelAnime, (struct_80B8E1A8 []) &D_809CDC7C, 3, &self->animationIndex);
                    func_80151938(globalCtx, 0x5DFU);
                    break;
                case 1508:
                    func_80151938(globalCtx, 0x5E7U);
                    break;
                case 1509:
                    func_80151938(globalCtx, 0x5E0U);
                    break;
                case 1511:
                    func_80151938(globalCtx, 0x5E5U);
                    break;
                case 1500:
                case 1501:
                case 1503:
                case 1516:
                case 1517:
                case 1518:
                case 1522:
                case 1525:
                    func_80151938(globalCtx, (temp_v0_2 + 1) & 0xFFFF);
                    break;
                case 1520:
                case 1526:
                    func_80151938(globalCtx, 0x5EFU);
                    break;
                case 1505:
                case 1512:
                case 1513:
                case 1514:
                case 1515:
                case 1521:
                case 1523:
                case 1524:
                case 1527:
                case 1528:
                    func_801477B4(globalCtx);
                    self->actor.flags &= 0xFFFEFFFF;
                    self->actor.params = 1;
                    func_809CCE98(self, globalCtx);
                    break;
                }
            }
        } else if (func_80147624(globalCtx) != 0) {
            self->actor.flags &= 0xFFFEFFFF;
            self->actor.params = 1;
            temp_v0_3 = globalCtx->msgCtx.choiceIndex;
            if (temp_v0_3 != 0) {
                if (temp_v0_3 != 1) {

                } else {
                    func_8019F230();
                    temp_v0_4 = gSaveContext.playerForm;
                    if ((temp_v0_4 != 1) && (temp_v0_4 != 2)) {
                        if (temp_v0_4 != 3) {
                            if (temp_v0_4 != 4) {

                            } else {
                                func_80151938(globalCtx, 0x5F8U);
                            }
                        } else {
                            func_80151938(globalCtx, 0x5F0U);
                        }
                    } else {
                        func_80151938(globalCtx, 0x5E1U);
                    }
                }
            } else {
                func_8019F208();
                func_801477B4(globalCtx);
                func_809CD634(self, globalCtx);
            }
        }
    } else {
        Math_ScaledStepToS(&self->actor.shape.rot.y, self->actor.yawTowardsPlayer, 0x444);
        func_809CCDE0(self, globalCtx);
        if (self->actor.yawTowardsPlayer == self->actor.shape.rot.y) {
            func_801518B0(globalCtx, self->textId, &self->actor);
        }
    }
    if ((self->animationIndex == 3) && (self->skelAnime.animFrameCount == self->skelAnime.animCurrentFrame)) {
        func_8013E1C8(&self->skelAnime, (struct_80B8E1A8 []) &D_809CDC7C, 2, &self->animationIndex);
    }
}

void func_809CD634(EnBji01 *this, GlobalContext *globalCtx) {
    func_801A5BD0(0x6F);
    func_801A89A8(0xE0000101);
    globalCtx->nextEntranceIndex = 0x54A0;
    gSaveContext.respawn[0].entranceIndex = globalCtx->nextEntranceIndex;
    func_80169EFC(globalCtx);
    gSaveContext.respawnFlag = -2;
    this->actionFunc = func_809CD6B0;
}

void func_809CD6B0(EnBji01 *this, GlobalContext *globalCtx) {

}

void func_809CD6C0(EnBji01 *this, GlobalContext *globalCtx) {
    func_8013E1C8(&this->skelAnime, (struct_80B8E1A8 []) &D_809CDC7C, 2, &this->animationIndex);
    this->actionFunc = func_809CD70C;
}

void func_809CD70C(EnBji01 *this, GlobalContext *globalCtx) {
    Math_ScaledStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0x444);
    func_809CCDE0(this, globalCtx);
    if (this->actor.yawTowardsPlayer == this->actor.shape.rot.y) {
        func_800B86C8(&this->moonsTear->actor, globalCtx, &this->actor);
        this->actionFunc = func_809CD77C;
    }
}

void func_809CD77C(EnBji01 *this, GlobalContext *globalCtx) {
    if (this->moonsTear->actor.colChkInfo.health == 0) {
        func_809CCE98(this, globalCtx);
    }
}

void EnBji01_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnBji01 *this = (EnBji01 *) thisx;
    u32 temp_v1;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 30.0f);
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_0600578C, &D_06000FDC, this->jointTable, this->morphTable, 0x10);
    Collider_InitAndSetCylinder(globalCtx, &this->collider, &this->actor, &D_809CDC50);
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.targetMode = 0;
    this->actor.child = NULL;
    this->animationIndex = -1;
    Actor_SetScale(&this->actor, 0.01f);
    func_8013E3B8(&this->actor, (s16 []) this->cutscenes, 1);
    this->moonsTear = func_ActorCategoryIterateById(globalCtx, NULL, 6, 0x283);
    temp_v1 = gSaveContext.entranceIndex;
    if ((temp_v1 != 0x4C00) && (temp_v1 != 0x4C10)) {
        if (temp_v1 != 0x4C20) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
        this->actor.flags |= 0x10000;
        func_801A5BD0(0);
        func_801A89A8(0xE0000100);
        this->actor.params = 3;
        func_809CCE98(this, globalCtx);
        return;
    }
    this->actor.params = 0;
    func_809CCE98(this, globalCtx);
}

void EnBji01_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBji01 *this = (EnBji01 *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnBji01_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnBji01 *this = (EnBji01 *) thisx;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a2;
    s16 temp_v0;
    s16 temp_v0_2;

    this->actionFunc(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4U);
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    temp_v0 = this->blinkTimer;
    this->blinkTimer = temp_v0 - 1;
    if ((s32) temp_v0 <= 0) {
        this->blinkSeqIndex += -1;
        temp_v0_2 = this->blinkSeqIndex;
        if ((s32) temp_v0_2 < 0) {
            this->blinkSeqIndex = 4;
            this->blinkTimer = (s16) (s32) ((Rand_ZeroOne() * 60.0f) + 20.0f);
        } else {
            this->eyeTexIndex = *(&D_809CDCBC + (temp_v0_2 * 2));
        }
    }
    Actor_SetHeight(&this->actor, 40.0f);
    temp_a2 = &this->collider;
    sp28 = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
}

s32 func_809CDA4C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if ((arg1 == 0) && ((arg0->gameplayFrames & 1) != 0)) {
        *arg2 = NULL;
    }
    if (arg1 == 0) {
        arg4->x = arg4->x;
        arg4->y = arg4->y;
        arg4->z = arg4->z;
    }
    if (arg1 != 8) {
        if (arg1 != 0xF) {

        } else {
            arg4->x += arg5->unk2A8;
            arg4->z += arg5->unk2A6;
        }
    } else {
        arg4->x += arg5->unk2A4;
        arg4->z += arg5->unk2A2;
    }
    return 0;
}

void func_809CDB04(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f sp20;
    Vec3f *temp_a0;
    f32 temp_f0;

    if (arg1 == 0xF) {
        Math_Vec3f_Copy(&sp20, &D_809CDCC8);
        temp_a0 = &sp20;
        temp_f0 = (f32) 0 * 0.1f;
        sp20.x += temp_f0;
        sp20.y += temp_f0;
        sp20.z += temp_f0;
        SysMatrix_MultiplyVector3fByState(temp_a0, arg4 + 0x3C);
    }
}

void EnBji01_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnBji01 *this = (EnBji01 *) thisx;
    GraphicsContext *sp38;
    Gfx *sp30;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp38 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp38->polyOpa.p;
    sp38->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp30 = temp_v0;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_809CDCD4 + (this->eyeTexIndex * 4)));
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, func_809CDA4C, func_809CDB04, &this->actor);
}

