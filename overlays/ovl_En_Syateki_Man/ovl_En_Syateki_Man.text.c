s32 EnSyatekiMan_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void EnSyatekiMan_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_809C64C0(Actor *arg0, GlobalContext *arg1, void *arg2, s32 arg3); /* static */
s32 func_809C6720(GlobalContext *arg0, s32 arg1, s32 arg2, s32 arg3); /* static */
void func_809C6A04(Actor *arg0, GlobalContext *arg1, EnSyatekiMan *); /* static */
void func_809C6C2C(Actor *arg0, GlobalContext *arg1, EnSyatekiMan *); /* static */
void func_809C6F98(Actor *arg0, GlobalContext *arg1); /* static */
void func_809C7380(Actor *arg0, GlobalContext *arg1, EnSyatekiMan *); /* static */
void func_809C7620(Actor *arg0, GlobalContext *arg1, EnSyatekiMan *); /* static */
void func_809C8DE8(EnSyatekiMan *arg0);             /* static */
extern ? D_06005AC8;
extern ? D_060062C8;
extern ? D_0600D2F8;
extern AnimationHeader D_0600D9D0;
extern AnimationHeader D_0600DFEC;
extern FlexSkeletonHeader D_0600E7D0;
extern Gfx D_0600F2D0;
extern ? D_0600FB90;
extern ? D_06010390;
static ActorAnimationEntry D_809C9180 = {
    {(AnimationHeader *)0x600D9D0, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x600DFEC, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x600D2F8, 1.0f, 0.0f, 0.0f, 2, -8.0f},
};
static ? D_809C91C8;                                /* unable to generate initializer */
static ? D_809C9464;                                /* unable to generate initializer */
static ? D_809C946C;                                /* unable to generate initializer */
static ? D_809C9474;                                /* unable to generate initializer */
static ? D_809C9480;                                /* unable to generate initializer */
static ? D_809C948C;                                /* unable to generate initializer */
static s16 D_809C9498 = 0x1E;
static s16 D_809C949C = 0;
static s32 D_809C94A0 = 0;
static s16 D_809C94A4 = 0x1E;
static s32 D_809C94A8 = 0;
static ? D_809C94AC;                                /* unable to generate initializer */
static ? D_809C94B8;                                /* unable to generate initializer */
static ? D_809C94D0;                                /* unable to generate initializer; const */



void func_809C64C0(Actor *arg0, GlobalContext *arg1, void *arg2, s32 arg3) {
    void *temp_s0;
    void *phi_s0;

    phi_s0 = arg2;
    if (arg3 > 0) {
        do {
            Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, phi_s0->unk0, phi_s0->unk4, phi_s0->unk8, phi_s0->unkC, (s16) 0, (s16) 0, (s16) 0, phi_s0->unk10);
            temp_s0 = phi_s0 + 0x14;
            phi_s0 = temp_s0;
        } while (temp_s0 != ((arg3 * 0x14) + arg2));
    }
}

void EnSyatekiMan_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnSyatekiMan *this = (EnSyatekiMan *) thisx;
    Path *sp34;
    s32 sp30;

    sp34 = &globalCtx->setupPathList[(s32) (this->actor.params & 0xFF00) >> 8];
    sp30 = *(&D_809C946C + (this->unk_194 * 4));
    this->actor.targetMode = 1;
    Actor_SetScale(&this->actor, 0.01f);
    if (globalCtx->sceneNum == 0x24) {
        SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_0600E7D0, &D_0600DFEC, this->jointTable, this->morphTable, 0x10);
    } else {
        SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_0600E7D0, &D_0600D9D0, this->jointTable, this->morphTable, 0x10);
    }
    this->actor.colChkInfo.cylRadius = 0x64;
    this->actionFunc = func_809C6810;
    this->unk_26A = 0;
    this->unk_270 = 0xF;
    this->unk_27E = 0;
    this->unk_26E = 0;
    this->unk_190 = 0;
    this->unk_272 = 0;
    this->unk_274 = 0;
    this->unk_280 = 0;
    this->unk_278 = 0;
    this->unk_27A = 0;
    this->unk_284 = 0;
    this->unk_194 = 0;
    this->unk_282 = 0;
    this->unk_264 = 0;
    this->unk_266 = 0;
    if (globalCtx->sceneNum == 0x24) {
        this->path = sp34;
        func_809C64C0(&this->actor, globalCtx, *(&D_809C9464 + (0 * 4)), sp30);
    }
}

void EnSyatekiMan_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnSyatekiMan *this = (EnSyatekiMan *) thisx;
    gSaveContext.weekEventReg[63] &= 0xFE;
}

s32 func_809C6720(GlobalContext *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 sp28;
    s16 sp22;
    Vec3f *sp1C;
    Vec3f *temp_a0;
    f32 temp_f0;
    f32 phi_f0;
    s32 phi_v0;

    temp_a0 = arg0->actorCtx.actorList[2].first + 0x24;
    sp1C = temp_a0;
    sp22 = Math_Vec3f_Yaw(temp_a0, (Vec3f *) &arg1);
    temp_f0 = Math_Vec3f_DistXZ(temp_a0, (Vec3f *) &arg1);
    if (temp_f0 < 5.0f) {
        phi_f0 = 10.0f;
    } else if (temp_f0 < 30.0f) {
        phi_f0 = 40.0f;
    } else {
        phi_f0 = 80.0f;
    }
    arg0->actorCtx.unk268 = 1;
    sp28 = temp_f0;
    func_800B6F20(arg0, (s32) (arg0 + 0x1F0C), phi_f0, sp22);
    phi_v0 = 0;
    if (temp_f0 < 5.0f) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_809C6810(EnSyatekiMan *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = globalCtx->sceneNum;
    if (temp_v0 == 0x24) {
        this->actionFunc = func_809C6848;
        return;
    }
    if (temp_v0 == 0x20) {
        this->actionFunc = func_809C72D8;
    }
}

void func_809C6848(EnSyatekiMan *this, GlobalContext *globalCtx) {
    Actor *sp24;
    u16 sp22;
    Actor *temp_t6;
    GlobalContext *temp_a3;
    s32 temp_hi;
    u16 temp_a1;
    u16 temp_v0;

    temp_a3 = globalCtx;
    temp_t6 = temp_a3->actorCtx.actorList[2].first;
    globalCtx = temp_a3;
    sp24 = temp_t6;
    if (func_800B84D0(&this->actor, temp_a3) != 0) {
        globalCtx = globalCtx;
        func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) &D_809C9180, 2);
        temp_v0 = Text_GetFaceReaction(globalCtx, 0x31U);
        temp_a1 = temp_v0 & 0xFFFF;
        if (temp_v0 != 0) {
            sp22 = temp_a1;
            func_801518B0(globalCtx, temp_a1, &this->actor);
            this->unk_284 = (s16) temp_a1;
        } else if (sp24->unk14B == 4) {
            if (this->unk_282 == 0) {
                this->unk_282 = 1;
                func_801518B0(globalCtx, 0xA28U, &this->actor);
                this->unk_284 = 0xA28;
            } else {
                func_801518B0(globalCtx, 0xA29U, &this->actor);
                this->unk_284 = 0xA29;
            }
        } else {
            temp_hi = (s32) gSaveContext.day % 5;
            if (temp_hi != 1) {
                if (temp_hi != 2) {
                    if (temp_hi != 3) {

                    } else {
                        func_801518B0(globalCtx, 0xA3AU, &this->actor);
                        this->unk_284 = 0xA3A;
                    }
                } else {
                    func_801518B0(globalCtx, 0xA39U, &this->actor);
                    this->unk_284 = 0xA39;
                }
            } else {
                func_801518B0(globalCtx, 0xA38U, &this->actor);
                this->unk_284 = 0xA38;
            }
        }
        this->actionFunc = func_809C6E30;
    } else {
        func_800B8614(&this->actor, globalCtx, 120.0f);
    }
    if (sp24->world.pos.z < 135.0f) {
        sp24->world.pos.z = 135.0f;
    }
}

void func_809C6A04(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    GlobalContext *temp_a3;
    s32 temp_hi;
    u8 temp_t1;
    void *temp_t6;

    temp_a3 = arg1;
    temp_t6 = temp_a3->actorCtx.actorList[2].first;
    arg1 = temp_a3;
    sp24 = temp_t6;
    if (func_80147624(temp_a3) != 0) {
        if (arg1->msgCtx.choiceIndex == 0) {
            if (((u32) (gSaveContext.inventory.upgrades & *gUpgradeMasks) >> *gUpgradeShifts) == 0) {
                arg1 = arg1;
                play_sound(0x4806U);
                func_801518B0(arg1, 0xA30U, arg0);
                arg0->unk284 = 0xA30;
                return;
            }
            if ((s32) gSaveContext.rupees < 0x14) {
                arg1 = arg1;
                play_sound(0x4806U);
                func_801518B0(arg1, 0xA31U, arg0);
                arg0->unk284 = 0xA31;
                if (arg0->unk26A == 4) {
                    gSaveContext.minigameState = 3;
                }
                arg0->unk26A = 3;
                return;
            }
            arg1 = arg1;
            func_8019F208();
            func_801159EC(-0x14);
            temp_t1 = gSaveContext.weekEventReg[63] | 1;
            gSaveContext.weekEventReg[63] = temp_t1;
            gSaveContext.weekEventReg[63] = temp_t1 & 0xFD;
            arg1->msgCtx.unk11F22 = 0x43;
            arg1->msgCtx.unk12023 = 4;
            arg0->unk26A = 7;
            sp24->unkA6C = (s32) (sp24->unkA6C | 0x20);
            arg0->unk188 = func_809C7FFC;
            return;
        }
        arg1 = arg1;
        func_8019F230();
        temp_hi = (s32) gSaveContext.day % 5;
        if (temp_hi != 1) {
            if (temp_hi != 2) {
                if (temp_hi != 3) {

                } else {
                    func_801518B0(arg1, 0xA2FU, arg0);
                    arg0->unk284 = 0xA2F;
                }
            } else {
                func_801518B0(arg1, 0xA2EU, arg0);
                arg0->unk284 = 0xA2E;
            }
        } else {
            func_801518B0(arg1, 0xA2DU, arg0);
            arg0->unk284 = 0xA2D;
        }
        if (arg0->unk26A == 4) {
            gSaveContext.minigameState = 3;
        }
        arg0->unk26A = 3;
        // Duplicate return node #19. Try simplifying control flow for better match
    }
}

void func_809C6C2C(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    GlobalContext *temp_a3;
    GlobalContext *temp_a3_2;
    s16 temp_t6;
    u8 temp_t0;
    void *temp_v1;

    temp_a3 = arg1;
    temp_v1 = temp_a3->actorCtx.actorList[2].first;
    arg1 = temp_a3;
    sp24 = temp_v1;
    temp_a3_2 = arg1;
    if (func_80147624(temp_a3) != 0) {
        temp_t6 = arg0->unk284;
        switch (temp_t6) {
        case 2600:
        case 2601:
            func_801518B0(temp_a3_2, 0xA2AU, arg0);
            arg0->unk284 = 0xA2A;
            return;
        case 2603:
        case 2604:
        case 2613:
            temp_a3_2->msgCtx.unk11F22 = 0x43;
            temp_a3_2->msgCtx.unk12023 = 4;
            temp_v1->freezeTimer = 0;
            arg1 = temp_a3_2;
            func_80112AFC(temp_a3_2);
            arg1->interfaceCtx.hbaAmmo = 0x50;
            func_80123F2C(arg1, 0x50);
            arg0->unk26A = 1;
            arg0->unk188 = func_809C80C0;
            func_801A2BB8(0x25);
            return;
        case 2610:
            if ((gSaveContext.weekEventReg[63] & 2) != 0) {
                sp24 = temp_v1;
                func_801477B4(temp_a3_2);
                temp_v1->unkA6C = (s32) (temp_v1->unkA6C & ~0x20);
                temp_t0 = gSaveContext.weekEventReg[63] & 0xFE;
                gSaveContext.weekEventReg[63] = temp_t0;
                gSaveContext.weekEventReg[63] = temp_t0 & 0xFD;
                arg0->unk188 = func_809C6848;
                gSaveContext.minigameState = 3;
                arg0->unk26A = 0;
                return;
            }
            func_801518B0(temp_a3_2, 0xA33U, arg0);
            arg0->unk284 = 0xA33;
            return;
        case 2611:
            func_801518B0(temp_a3_2, 0xA2AU, arg0);
            arg0->unk284 = 0xA2A;
            arg0->unk26A = 4;
            return;
        case 2612:
            temp_a3_2->msgCtx.unk11F22 = 0x43;
            temp_a3_2->msgCtx.unk12023 = 4;
            temp_v1->freezeTimer = 0;
            gSaveContext.minigameState = 3;
            temp_v1->unkA6C = (s32) (temp_v1->unkA6C | 0x20);
            arg0->unk188 = func_809C7A90;
            func_809C7A90((EnSyatekiMan *) arg0, temp_a3_2);
            // Duplicate return node #10. Try simplifying control flow for better match
            return;
        }
    } else {
    default:
    }
}

void func_809C6E30(EnSyatekiMan *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    SkelAnime *sp18;
    Actor *temp_v1;
    EnSyatekiMan *temp_a0;
    EnSyatekiMan *temp_a2;
    GlobalContext *temp_a0_2;
    SkelAnime *temp_a0_3;
    s32 temp_v0;
    u32 temp_v0_2;
    u8 temp_t6;
    EnSyatekiMan *phi_a2;
    EnSyatekiMan *phi_a2_2;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = temp_v1->unkA6C;
    if ((temp_v0 & 0x20) != 0) {
        temp_v1->unkA6C = (s32) (temp_v0 | 0x20);
    }
    sp1C = temp_v1;
    this = this;
    temp_v0_2 = func_80152498(&globalCtx->msgCtx);
    temp_a2 = this;
    phi_a2 = temp_a2;
    phi_a2_2 = temp_a2;
    switch (temp_v0_2) {
    case 2:
        temp_a2->actionFunc = func_809C6848;
block_9:
        phi_a2->unk_26A = 0;
        phi_a2_2 = phi_a2;
        break;
    case 4:
        temp_a0 = temp_a2;
        this = temp_a2;
        func_809C6A04(&temp_a0->actor, globalCtx, temp_a2);
        phi_a2_2 = this;
        break;
    case 5:
        this = temp_a2;
        func_809C6C2C(&temp_a2->actor, globalCtx, temp_a2);
        phi_a2_2 = this;
        break;
    case 6:
        temp_a0_2 = globalCtx;
        sp1C = temp_v1;
        globalCtx = globalCtx;
        this = temp_a2;
        phi_a2 = this;
        phi_a2_2 = this;
        if (func_80147624(temp_a0_2) != 0) {
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
            temp_v1->unkA6C = (s32) (temp_v1->unkA6C & ~0x20);
            temp_t6 = gSaveContext.weekEventReg[63] & 0xFE;
            gSaveContext.weekEventReg[63] = temp_t6;
            gSaveContext.weekEventReg[63] = temp_t6 & 0xFD;
            this->actionFunc = func_809C6848;
            goto block_9;
        }
        break;
    }
    temp_a0_3 = phi_a2_2 + 0x144;
    if (&D_0600D2F8 == phi_a2_2->skelAnime.animCurrentSeg) {
        sp18 = temp_a0_3;
        if (func_801378B8(temp_a0_3, phi_a2_2->skelAnime.animFrameCount) != 0) {
            func_800BDC5C(temp_a0_3, (ActorAnimationEntry []) &D_809C9180, 0);
        }
    }
}

void func_809C6F98(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v0_9;
    u8 temp_v0;
    s16 phi_t5;

    temp_v0 = gSaveContext.playerForm;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                temp_a0 = arg1;
                if (temp_v0 == 4) {
                    arg1 = arg1;
                    Actor_SetAllChestFlag(arg1, Actor_GetAllChestFlag(temp_a0) + 1);
                    if (((s32) gSaveContext.day % 5) != 3) {
                        temp_v0_2 = arg0->unk282;
                        if ((temp_v0_2 & 1) == 0) {
                            arg0->unk282 = (s16) (temp_v0_2 | 1);
                            func_801518B0(arg1, 0x3E8U, arg0);
                            arg0->unk284 = 0x3E8;
                            return;
                        }
                        func_801518B0(arg1, 0x3E9U, arg0);
                        arg0->unk284 = 0x3E9;
                        return;
                    }
                    temp_v0_3 = arg0->unk282;
                    if ((temp_v0_3 & 1) == 0) {
                        arg0->unk282 = (s16) (temp_v0_3 | 1);
                        func_801518B0(arg1, 0x3EAU, arg0);
                        arg0->unk284 = 0x3EA;
                        return;
                    }
                    func_801518B0(arg1, 0x3EBU, arg0);
                    phi_t5 = 0x3EB;
                    goto block_32;
                }
                // Duplicate return node #33. Try simplifying control flow for better match
                return;
            }
            if (((s32) gSaveContext.day % 5) != 3) {
                temp_v0_4 = arg0->unk282;
                if ((temp_v0_4 & 2) == 0) {
                    arg0->unk282 = (s16) (temp_v0_4 | 2);
                    func_801518B0(arg1, 0x3ECU, arg0);
                    arg0->unk284 = 0x3EC;
                    return;
                }
                func_801518B0(arg1, 0x3EDU, arg0);
                arg0->unk284 = 0x3ED;
                return;
            }
            temp_v0_5 = arg0->unk282;
            if ((temp_v0_5 & 2) == 0) {
                arg0->unk282 = (s16) (temp_v0_5 | 2);
                func_801518B0(arg1, 0x3EEU, arg0);
                arg0->unk284 = 0x3EE;
                return;
            }
            func_801518B0(arg1, 0x3EFU, arg0);
            phi_t5 = 0x3EF;
            goto block_32;
        }
        if (((s32) gSaveContext.day % 5) != 3) {
            temp_v0_6 = arg0->unk282;
            if ((temp_v0_6 & 8) == 0) {
                arg0->unk282 = (s16) (temp_v0_6 | 8);
                func_801518B0(arg1, 0x3F0U, arg0);
                arg0->unk284 = 0x3F0;
                return;
            }
            func_801518B0(arg1, 0x3F1U, arg0);
            arg0->unk284 = 0x3F1;
            return;
        }
        temp_v0_7 = arg0->unk282;
        if ((temp_v0_7 & 8) == 0) {
            arg0->unk282 = (s16) (temp_v0_7 | 8);
            func_801518B0(arg1, 0x3F4U, arg0);
            arg0->unk284 = 0x3F4;
            return;
        }
        func_801518B0(arg1, 0x3F5U, arg0);
        phi_t5 = 0x3F5;
        goto block_32;
    }
    if (((s32) gSaveContext.day % 5) != 3) {
        temp_v0_8 = arg0->unk282;
        if ((temp_v0_8 & 4) == 0) {
            arg0->unk282 = (s16) (temp_v0_8 | 4);
            func_801518B0(arg1, 0x3F2U, arg0);
            arg0->unk284 = 0x3F2;
            return;
        }
        func_801518B0(arg1, 0x3F3U, arg0);
        arg0->unk284 = 0x3F3;
        return;
    }
    temp_v0_9 = arg0->unk282;
    if ((temp_v0_9 & 4) == 0) {
        arg0->unk282 = (s16) (temp_v0_9 | 4);
        func_801518B0(arg1, 0x3F4U, arg0);
        arg0->unk284 = 0x3F4;
        return;
    }
    func_801518B0(arg1, 0x3F5U, arg0);
    phi_t5 = 0x3F5;
block_32:
    arg0->unk284 = phi_t5;
}

void func_809C72D8(EnSyatekiMan *this, GlobalContext *globalCtx) {
    u16 sp26;
    GlobalContext *temp_a0;
    GlobalContext *temp_a1;
    u16 temp_a1_2;
    u16 temp_v0;

    temp_a1 = globalCtx;
    globalCtx = globalCtx;
    if (func_800B84D0(&this->actor, temp_a1) != 0) {
        temp_a0 = globalCtx;
        globalCtx = globalCtx;
        temp_v0 = Text_GetFaceReaction(temp_a0, 0x30U);
        temp_a1_2 = temp_v0 & 0xFFFF;
        if (temp_v0 != 0) {
            sp26 = temp_a1_2;
            func_801518B0(globalCtx, temp_a1_2, &this->actor);
            this->unk_284 = (s16) temp_a1_2;
        } else {
            func_809C6F98(&this->actor, globalCtx);
        }
        this->actionFunc = func_809C7990;
        return;
    }
    func_800B8614(&this->actor, globalCtx, 120.0f);
}

void func_809C7380(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    GlobalContext *temp_a3;
    s16 temp_v0;
    u8 temp_t4;
    void *temp_t6;

    temp_a3 = arg1;
    temp_t6 = temp_a3->actorCtx.actorList[2].first;
    arg1 = temp_a3;
    sp24 = temp_t6;
    if (func_80147624(temp_a3) != 0) {
        if (arg1->msgCtx.choiceIndex == 0) {
            if (((u32) (gSaveContext.inventory.upgrades & *gUpgradeMasks) >> *gUpgradeShifts) == 0) {
                arg1 = arg1;
                play_sound(0x4806U);
                if (((s32) gSaveContext.day % 5) != 3) {
                    func_801518B0(arg1, 0x3F9U, arg0);
                    arg0->unk284 = 0x3F9;
                    return;
                }
                func_801518B0(arg1, 0x3FAU, arg0);
                arg0->unk284 = 0x3FA;
                return;
            }
            if ((s32) gSaveContext.rupees < 0x14) {
                arg1 = arg1;
                play_sound(0x4806U);
                if (((s32) gSaveContext.day % 5) != 3) {
                    func_801518B0(arg1, 0x3FBU, arg0);
                    arg0->unk284 = 0x3FB;
                } else {
                    func_801518B0(arg1, 0x3FCU, arg0);
                    arg0->unk284 = 0x3FC;
                }
                if (arg0->unk26A == 4) {
                    sp24->unkA74 = (s32) (sp24->unkA74 & ~0x400);
                    gSaveContext.minigameState = 3;
                }
                arg0->unk26A = 3;
                return;
            }
            arg1 = arg1;
            func_8019F208();
            func_801159EC(-0x14);
            temp_v0 = arg0->unk282;
            arg0->unk26A = 2;
            if ((temp_v0 & 0x10) == 0) {
                arg0->unk282 = (s16) (temp_v0 | 0x10);
                func_801518B0(arg1, 0x3FDU, arg0);
                arg0->unk284 = 0x3FD;
            } else {
                func_801518B0(arg1, 0x3FFU, arg0);
                arg0->unk284 = 0x3FF;
            }
            temp_t4 = gSaveContext.weekEventReg[63] | 1;
            gSaveContext.weekEventReg[63] = temp_t4;
            gSaveContext.weekEventReg[63] = temp_t4 & 0xFD;
            return;
        }
        arg1 = arg1;
        func_8019F230();
        if (((s32) gSaveContext.day % 5) != 3) {
            func_801518B0(arg1, 0x3F7U, arg0);
            arg0->unk284 = 0x3F7;
        } else {
            func_801518B0(arg1, 0x3F8U, arg0);
            arg0->unk284 = 0x3F8;
        }
        if (arg0->unk26A == 4) {
            sp24->unkA74 = (s32) (sp24->unkA74 & ~0x400);
            gSaveContext.minigameState = 3;
        }
        arg0->unk26A = 3;
        // Duplicate return node #23. Try simplifying control flow for better match
    }
}

void func_809C7620(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    GlobalContext *temp_a3;
    GlobalContext *temp_a3_2;
    s16 temp_v0;
    u8 temp_t2;
    u8 temp_t3;
    u8 temp_t4;
    void *temp_v1;

    temp_a3 = arg1;
    temp_v1 = temp_a3->actorCtx.actorList[2].first;
    arg1 = temp_a3;
    sp24 = temp_v1;
    temp_a3_2 = arg1;
    if (func_80147624(temp_a3) != 0) {
        temp_v0 = arg0->unk284;
        switch (temp_v0) {
        case 1000:
        case 1001:
        case 1002:
        case 1003:
            func_801518B0(temp_a3_2, 0x3F6U, arg0);
            arg0->unk284 = 0x3F6;
            return;
        case 1004:
            func_801518B0(temp_a3_2, 0x3EDU, arg0);
            arg0->unk284 = 0x3ED;
            return;
        case 1006:
            func_801518B0(temp_a3_2, 0x3EFU, arg0);
            arg0->unk284 = 0x3EF;
            return;
        case 1008:
            func_801518B0(temp_a3_2, 0x3F1U, arg0);
            arg0->unk284 = 0x3F1;
            return;
        case 1010:
            func_801518B0(temp_a3_2, 0x3F3U, arg0);
            arg0->unk284 = 0x3F3;
            return;
        case 1012:
            func_801518B0(temp_a3_2, 0x3F5U, arg0);
            arg0->unk284 = 0x3F5;
            return;
        case 1021:
        case 1023:
            if (arg0->unk26A == 4) {
                if (temp_v0 == 0x3FD) {
                    func_801518B0(temp_a3_2, 0x3FEU, arg0);
                    arg0->unk284 = 0x3FE;
                    return;
                }
                func_801518B0(temp_a3_2, 0x400U, arg0);
                arg0->unk284 = 0x400;
                return;
            }
            temp_a3_2->msgCtx.unk11F22 = 0x43;
            temp_a3_2->msgCtx.unk12023 = 4;
            temp_v1->freezeTimer = 0;
            arg0->unk26A = 7;
            temp_v1->unkA6C = (s32) (temp_v1->unkA6C | 0x20);
            temp_t3 = gSaveContext.weekEventReg[63] | 1;
            gSaveContext.weekEventReg[63] = temp_t3;
            gSaveContext.weekEventReg[63] = temp_t3 & 0xFD;
            arg0->unk188 = func_809C8710;
            return;
        case 1022:
        case 1024:
            temp_a3_2->msgCtx.unk11F22 = 0x43;
            temp_a3_2->msgCtx.unk12023 = 4;
            temp_v1->freezeTimer = 0;
            arg0->unk27E = 0;
            arg1 = temp_a3_2;
            func_80112AFC(temp_a3_2);
            func_80123F2C(arg1, 0x63);
            arg0->unk26A = 1;
            func_801A2BB8(0x25);
            arg0->unk188 = func_809C8808;
            return;
        case 1025:
            if ((gSaveContext.weekEventReg[63] & 2) != 0) {
                func_801477B4(temp_a3_2);
                temp_t4 = gSaveContext.weekEventReg[63] & 0xFE;
                gSaveContext.weekEventReg[63] = temp_t4;
                gSaveContext.weekEventReg[63] = temp_t4 & 0xFD;
                arg0->unk26A = 0;
                arg0->unk188 = func_809C72D8;
                return;
            }
            func_801518B0(temp_a3_2, 0x402U, arg0);
            arg0->unk284 = 0x402;
            return;
        case 1027:
            if ((gSaveContext.weekEventReg[63] & 2) != 0) {
                func_801477B4(temp_a3_2);
                temp_t2 = gSaveContext.weekEventReg[63] & 0xFE;
                gSaveContext.weekEventReg[63] = temp_t2;
                gSaveContext.weekEventReg[63] = temp_t2 & 0xFD;
                arg0->unk26A = 0;
                arg0->unk188 = func_809C72D8;
                return;
            }
            func_801518B0(temp_a3_2, 0x404U, arg0);
            arg0->unk284 = 0x404;
            return;
        case 1026:
        case 1028:
            func_801518B0(temp_a3_2, 0x3F6U, arg0);
            arg0->unk284 = 0x3F6;
            arg0->unk26A = 4;
            return;
        case 1029:
        case 1030:
        case 1031:
            temp_a3_2->msgCtx.unk11F22 = 0x43;
            temp_a3_2->msgCtx.unk12023 = 4;
            temp_v1->freezeTimer = 0;
            gSaveContext.minigameState = 3;
            arg0->unk188 = func_809C7D14;
            func_809C7D14((EnSyatekiMan *) arg0, temp_a3_2);
            // Duplicate return node #23. Try simplifying control flow for better match
            return;
        }
    } else {
    default:
    }
}

void func_809C7990(EnSyatekiMan *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    Actor *temp_v1;
    s32 temp_v0;
    u32 temp_v0_2;
    u8 temp_t2;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = temp_v1->unkA6C;
    if ((temp_v0 & 0x20) != 0) {
        temp_v1->unkA6C = (s32) (temp_v0 | 0x20);
    }
    sp1C = temp_v1;
    this = this;
    temp_v0_2 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0_2) {
    case 2:
        this->actionFunc = func_809C72D8;
block_9:
        this->unk_26A = 0;
    default:
        return;
    case 4:
        func_809C7380(&this->actor, globalCtx, this);
        return;
    case 5:
        func_809C7620(&this->actor, globalCtx, this);
        return;
    case 6:
        sp1C = temp_v1;
        this = this;
        if (func_80147624(globalCtx) != 0) {
            temp_t2 = gSaveContext.weekEventReg[63] & 0xFE;
            gSaveContext.weekEventReg[63] = temp_t2;
            gSaveContext.weekEventReg[63] = temp_t2 & 0xFD;
            temp_v1->unkA6C = (s32) (temp_v1->unkA6C & ~0x20);
            this->actionFunc = func_809C72D8;
            goto block_9;
        }
        // Duplicate return node #10. Try simplifying control flow for better match
        return;
    }
}

void func_809C7A90(EnSyatekiMan *this, GlobalContext *globalCtx) {
    Actor *temp_s0;
    u32 temp_v1_3;
    u8 temp_v1;
    u8 temp_v1_2;

    temp_s0 = globalCtx->actorCtx.actorList[2].first;
    if (Actor_HasParent(&this->actor, globalCtx) != 0) {
        temp_v1 = gSaveContext.weekEventReg[59];
        if ((temp_v1 & 0x10) == 0) {
            gSaveContext.weekEventReg[59] = temp_v1 | 0x10;
        } else {
            temp_v1_2 = gSaveContext.weekEventReg[32];
            if (((temp_v1_2 & 2) == 0) && ((s32) this->unk_280 >= 0x884)) {
                gSaveContext.weekEventReg[32] = temp_v1_2 | 2;
            }
        }
        this->actor.parent = NULL;
        this->actionFunc = func_809C7C14;
        return;
    }
    temp_v1_3 = (u32) (gSaveContext.inventory.upgrades & *gUpgradeMasks) >> *gUpgradeShifts;
    if ((temp_v1_3 < 3U) && ((gSaveContext.weekEventReg[59] & 0x10) == 0)) {
        func_800B8A1C(&this->actor, globalCtx, temp_v1_3 + 0x22, 500.0f, 100.0f);
    } else if ((s32) this->unk_280 < 0x884) {
        func_800B8A1C(&this->actor, globalCtx, 4, 500.0f, 100.0f);
    } else if ((gSaveContext.weekEventReg[32] & 2) == 0) {
        func_800B8A1C(&this->actor, globalCtx, 0xC, 500.0f, 100.0f);
    } else {
        func_800B8A1C(&this->actor, globalCtx, 5, 500.0f, 100.0f);
    }
    temp_s0->shape.rot.y = -0x8000;
    temp_s0->velocity.z = 0.0f;
    temp_s0->velocity.x = 0.0f;
    temp_s0->world.rot.y = temp_s0->shape.rot.y;
}

void func_809C7C14(EnSyatekiMan *this, GlobalContext *globalCtx) {
    Actor *sp24;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        if ((((s32) gSaveContext.day % 5) == 3) && ((s32) gSaveContext.time >= 0x8001)) {
            func_801518B0(globalCtx, 0xA36U, &this->actor);
            this->unk_284 = 0xA36;
        } else {
            func_801518B0(globalCtx, 0xA37U, &this->actor);
            this->unk_284 = 0xA37;
        }
        sp24->unkA6C = (s32) (sp24->unkA6C & ~0x20);
        this->actor.flags &= 0xFFFEFFFF;
        this->unk_280 = 0;
        this->unk_26A = 0;
        this->actionFunc = func_809C6E30;
        return;
    }
    func_800B85E0(&this->actor, globalCtx, 500.0f, -1);
}

void func_809C7D14(EnSyatekiMan *this, GlobalContext *globalCtx) {
    Actor *sp24;
    u32 temp_v0_2;
    u8 temp_v0;
    u8 temp_v1;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    if (Actor_HasParent(&this->actor, globalCtx) != 0) {
        if (this->unk_284 == 0x407) {
            temp_v1 = gSaveContext.weekEventReg[59];
            if ((temp_v1 & 0x20) == 0) {
                gSaveContext.weekEventReg[59] = temp_v1 | 0x20;
            }
        }
        if ((this->unk_284 == 0x405) || (this->unk_284 == 0x406)) {
            temp_v0 = gSaveContext.weekEventReg[32];
            if ((temp_v0 & 4) == 0) {
                gSaveContext.weekEventReg[32] = temp_v0 | 4;
            }
        }
        this->actor.parent = NULL;
        this->actionFunc = func_809C7EB4;
        return;
    }
    if (this->unk_284 == 0x407) {
        temp_v0_2 = (u32) (gSaveContext.inventory.upgrades & *gUpgradeMasks) >> *gUpgradeShifts;
        if ((temp_v0_2 < 3U) && ((gSaveContext.weekEventReg[59] & 0x20) == 0)) {
            func_800B8A1C(&this->actor, globalCtx, temp_v0_2 + 0x22, 500.0f, 100.0f);
        } else {
            func_800B8A1C(&this->actor, globalCtx, 5, 500.0f, 100.0f);
        }
    } else if ((gSaveContext.weekEventReg[32] & 4) == 0) {
        func_800B8A1C(&this->actor, globalCtx, 0xC, 500.0f, 100.0f);
    } else {
        func_800B8A1C(&this->actor, globalCtx, 7, 500.0f, 100.0f);
    }
    sp24->shape.rot.y = -0x8000;
    sp24->velocity.z = 0.0f;
    sp24->velocity.x = 0.0f;
    sp24->world.rot.y = sp24->shape.rot.y;
}

void func_809C7EB4(EnSyatekiMan *this, GlobalContext *globalCtx) {
    Actor *sp24;
    Actor *temp_a3;
    u8 temp_t2;

    temp_a3 = globalCtx->actorCtx.actorList[2].first;
    if (((s32) gSaveContext.day % 5) != 3) {
        sp24 = temp_a3;
        if ((func_80152498(&globalCtx->msgCtx) == 6) && (sp24 = temp_a3, (func_80147624(globalCtx) != 0))) {
            temp_a3->unkA6C = (s32) (temp_a3->unkA6C & ~0x20);
            this->unk_280 = 0;
            this->unk_26A = 0;
            temp_t2 = gSaveContext.weekEventReg[63] & 0xFE;
            gSaveContext.weekEventReg[63] = temp_t2;
            gSaveContext.weekEventReg[63] = temp_t2 & 0xFD;
            this->actionFunc = func_809C6810;
            return;
        }
        // Duplicate return node #7. Try simplifying control flow for better match
        return;
    }
    sp24 = temp_a3;
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        sp24 = temp_a3;
        func_801518B0(globalCtx, 0x408U, &this->actor);
        this->unk_284 = 0x408;
        temp_a3->unkA6C = (s32) (temp_a3->unkA6C & ~0x20);
        this->actor.flags &= 0xFFFEFFFF;
        this->unk_280 = 0;
        this->unk_26A = 0;
        this->actionFunc = func_809C7990;
        return;
    }
    func_800B85E0(&this->actor, globalCtx, 500.0f, -1);
}

void func_809C7FFC(EnSyatekiMan *this, GlobalContext *globalCtx) {
    Actor *sp24;
    Actor *temp_v1;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    sp24 = temp_v1;
    if (func_809C6720(globalCtx, subroutine_arg1, D_809C9474.unk4, D_809C9474.unk8) != 0) {
        temp_v1->unkA6C = (s32) (temp_v1->unkA6C | 0x20);
        this->unk_26A = 2;
        if (this->unk_282 != 2) {
            this->unk_282 = 2;
            func_801518B0(globalCtx, 0xA2BU, &this->actor);
            this->unk_284 = 0xA2B;
        } else {
            func_801518B0(globalCtx, 0xA2CU, &this->actor);
            this->unk_284 = 0xA2C;
        }
        this->actionFunc = func_809C6E30;
    }
}

void func_809C80C0(EnSyatekiMan *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    EnSyatekiMan *temp_a0;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    if ((s32) D_809C9498 > 0) {
        temp_v0->world.pos.x = D_809C9474.unk0;
        temp_v0->world.pos.y = D_809C9474.unk4;
        temp_v0->shape.rot.y = -0x8000;
        temp_v0->world.pos.z = D_809C9474.unk8;
        temp_v0->world.rot.y = temp_v0->shape.rot.y;
        globalCtx->unk_18790(globalCtx, -0x8000, &this->actor);
        D_809C9498 = D_809C9498 - 1;
        return;
    }
    D_809C9498 = 0x1E;
    this->unk_27E = 0;
    this->unk_280 = 0;
    temp_a0 = this;
    temp_v0->unkA6C = (s32) (temp_v0->unkA6C & ~0x20);
    this = this;
    Audio_PlayActorSound2(&temp_a0->actor, 0x482CU);
    this->unk_272 = 0x1F;
    this->unk_274 = 0;
    this->unk_276 = 0;
    this->unk_26C = 0;
    this->unk_278 = 0;
    this->unk_27A = 0;
    this->unk_27C = 0;
    this->unk_26E = 0;
    func_8010E9F0(1, 0x64);
    this->actor.draw = NULL;
    this->actionFunc = func_809C81D0;
}

void func_809C81D0(EnSyatekiMan *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    EnSyatekiMan *temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = this->unk_272;
    if (((temp_v0 == 0) || ((s32) this->unk_26C >= 0x8D)) && (D_809C949C == 0) && (temp_a0 = this, (((s32) this->unk_27C < 4) != 0))) {
        D_809C949C = 1;
        this->unk_26C = 0;
        this = this;
        sp1C = globalCtx->actorCtx.actorList[2].first;
        Audio_PlayActorSound2(&temp_a0->actor, 0x482CU);
        temp_v0_2 = this->unk_27E;
        this->unk_274 = *(&D_809C91C8 + (temp_v0_2 * 2));
        if (temp_v0_2 == 3) {
            this->unk_27E = 0;
        } else {
            this->unk_27E = temp_v0_2 + 1;
        }
    } else if ((this->unk_274 == 0) && (temp_v0 == 0) && (D_809C949C == 1) && ((s32) this->unk_27C < 4)) {
        if ((s32) this->unk_27A < 3) {
            this->unk_27A = 0;
        }
        this->unk_26C = 0;
        D_809C949C = 0;
        this->unk_27C += 1;
        if ((s32) this->unk_27C < 4) {
            this->unk_272 = 0x1F;
        }
    }
    if (this->unk_27A == 3) {
        this->unk_27A = 0;
        this->unk_276 |= 1;
    }
    if (this->unk_278 == 0xA) {
        this->unk_278 = 0;
        this->unk_276 |= 2;
    }
    this->unk_26C += 1;
    if ((gSaveContext.unk3DE8 == 0) && (gSaveContext.unk3DEC == 0)) {
        gSaveContext.unk3DEC = 0;
        gSaveContext.unk3DE8 = 0;
        gSaveContext.unk_3DD0[1] = 5;
        this->actor.draw = EnSyatekiMan_Draw;
        this->unk_27E = 0;
        this->unk_27C = 0;
        globalCtx->actorCtx.actorList[2].first->unkA6C = (s32) (globalCtx->actorCtx.actorList[2].first->unkA6C | 0x20);
        D_809C949C = 0;
        this = this;
        func_801A2C20();
        this->actionFunc = func_809C8488;
        return;
    }
    if ((this->unk_27C == 4) && (this->unk_276 == 0) && (this->unk_26E == 2)) {
        this->actor.draw = EnSyatekiMan_Draw;
        this->unk_27E = 0;
        this->unk_27C = 0;
        globalCtx->actorCtx.actorList[2].first->unkA6C = (s32) (globalCtx->actorCtx.actorList[2].first->unkA6C | 0x20);
        D_809C949C = 0;
        this = this;
        func_801A2C20();
        this->unk_26A = 5;
        if (this->unk_280 == 0x848) {
            this = this;
            func_8011B4E0(globalCtx, 2);
            gSaveContext.unk_3DD0[1] = 6;
            this->actionFunc = func_809C8610;
            return;
        }
        gSaveContext.unk_3DD0[1] = 5;
        this->actionFunc = func_809C8488;
        // Duplicate return node #28. Try simplifying control flow for better match
    }
}

void func_809C8488(EnSyatekiMan *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    u32 temp_a0;
    u8 temp_t7;
    u8 temp_v0_4;

    temp_v0 = this->unk_26A;
    if ((temp_v0 == 1) || (temp_v0 == 5)) {
        temp_v0_2 = this->unk_270;
        this->unk_190 = 0;
        this->unk_272 = 0;
        this->unk_274 = 0;
        this->unk_276 = 0;
        if ((s32) temp_v0_2 <= 0) {
            temp_a0 = gSaveContext.roomInf[127][6];
            temp_v0_3 = this->unk_280;
            if ((s32) ((u32) (temp_a0 & 0xFFFF0000) >> 0x10) < (s32) temp_v0_3) {
                gSaveContext.roomInf[127][6] = (temp_a0 & 0xFFFF) | (temp_v0_3 << 0x10);
            }
            this->unk_270 = 0xF;
            if ((s32) this->unk_280 >= 0x848) {
                func_801518B0(globalCtx, 0xA34U, &this->actor);
                this->unk_284 = 0xA34;
                goto block_12;
            }
            if ((s32) this->unk_280 >= 0x7D0) {
                temp_v0_4 = gSaveContext.weekEventReg[63];
                temp_t7 = temp_v0_4 & 0xFE;
                if ((temp_v0_4 & 2) != 0) {
                    gSaveContext.weekEventReg[63] = temp_t7;
                    gSaveContext.weekEventReg[63] = temp_t7 & 0xFD;
                    this->unk_26A = 0;
                    gSaveContext.minigameState = 3;
                    this->actionFunc = func_809C6848;
                    return;
                }
                func_801518B0(globalCtx, 0xA35U, &this->actor);
                this->unk_284 = 0xA35;
                this->unk_26A = 4;
                this->unk_280 = 0;
                goto block_13;
            }
            func_801518B0(globalCtx, 0xA32U, &this->actor);
            this->unk_284 = 0xA32;
block_12:
            this->unk_26A = 6;
block_13:
            this->actionFunc = func_809C6E30;
            goto block_15;
        }
        this->unk_270 = temp_v0_2 - 1;
        goto block_15;
    }
block_15:
    if ((s32) this->unk_270 < 5) {
        globalCtx->unk_1887C = -0xA;
    }
}

void func_809C8610(EnSyatekiMan *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    s32 temp_a1;
    u32 temp_t9;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    temp_v0->unkA6C = (s32) (temp_v0->unkA6C | 0x20);
    if (globalCtx->interfaceCtx.unk_286 == 0) {
        if ((gSaveContext.unk3DE8 == 0) && (gSaveContext.unk3DEC == 0)) {
            gSaveContext.unk3DEC = 0;
            gSaveContext.unk3DE8 = 0;
            gSaveContext.unk_3DD0[1] = 5;
            this->unk_27E = 0;
            this->unk_27C = 0;
            this->actionFunc = func_809C8488;
            D_809C94A0 = 0;
            return;
        }
        temp_a1 = D_809C94A0;
        if (temp_a1 >= 0xB) {
            temp_t9 = gSaveContext.unk3E94 + 0x64;
            gSaveContext.unk3E90 = (s32) (gSaveContext.unk3E90 + (temp_t9 < 0x64U));
            gSaveContext.unk3E94 = temp_t9;
            globalCtx->interfaceCtx.unk_25C += 0xA;
            this->unk_280 += 0xA;
            Audio_PlayActorSound2(&this->actor, 0x4807U);
            D_809C94A0 = 0;
            return;
        }
        D_809C94A0 = temp_a1 + 1;
        // Duplicate return node #7. Try simplifying control flow for better match
    }
}

void func_809C8710(EnSyatekiMan *this, GlobalContext *globalCtx) {
    ? sp24;

    if (gSaveContext.playerForm == 0) {
        sp24.unk0 = (s32) D_809C9480.unk0;
        sp24.unk4 = (s32) D_809C9480.unk4;
        sp24.unk8 = (s32) D_809C9480.unk8;
    } else {
        sp24.unk0 = (s32) D_809C948C.unk0;
        sp24.unk4 = (s32) D_809C948C.unk4;
        sp24.unk8 = (s32) D_809C948C.unk8;
    }
    if (func_809C6720(globalCtx, subroutine_arg1, sp24.unk4, sp24.unk8) != 0) {
        if (this->unk_284 == 0x3FD) {
            func_801518B0(globalCtx, 0x3FEU, &this->actor);
            this->unk_284 = 0x3FE;
        } else {
            func_801518B0(globalCtx, 0x400U, &this->actor);
            this->unk_284 = 0x400;
        }
        this->unk_26A = 2;
        this->actionFunc = func_809C7990;
    }
}

void func_809C8808(EnSyatekiMan *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    Actor *temp_v0;
    PosRot *temp_v1_2;
    PosRot *temp_v1_3;
    s16 temp_v1;

    temp_v1 = D_809C94A4;
    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    if (temp_v1 == 0x1E) {
        if (temp_v0->unk14B == 0) {
            temp_v1_2 = &temp_v0->world;
            temp_v1_2->pos.x = D_809C9480.unk0;
            temp_v1_2->pos.y = D_809C9480.unk4;
            temp_v1_2->pos.z = D_809C9480.unk8;
        } else {
            temp_v1_3 = &temp_v0->world;
            temp_v1_3->pos.x = D_809C948C.unk0;
            temp_v1_3->pos.y = D_809C948C.unk4;
            temp_v1_3->pos.z = D_809C948C.unk8;
        }
        temp_v0->prevPos.x = temp_v0->world.pos.x;
        temp_v0->prevPos.y = temp_v0->world.pos.y;
        temp_v0->shape.rot.y = -0x8000;
        temp_v0->prevPos.z = temp_v0->world.pos.z;
        temp_v0->world.rot.y = temp_v0->shape.rot.y;
        sp1C = temp_v0;
        globalCtx->unk_18790(globalCtx, -0x8000, &this->actor);
        temp_v0->unkA6C = (s32) (temp_v0->unkA6C | 0x20);
        D_809C94A4 = D_809C94A4 - 1;
        return;
    }
    if ((s32) temp_v1 > 0) {
        temp_v0->shape.rot.y = -0x8000;
        temp_v0->world.rot.y = temp_v0->shape.rot.y;
        D_809C94A4 = temp_v1 - 1;
        return;
    }
    if (temp_v1 == 0) {
        temp_v0->unkA6C = (s32) (temp_v0->unkA6C & ~0x20);
        this->unk_280 = 0;
        this->unk_27E = 0;
        this->unk_26C = 0x46;
        this->unk_26E = 0;
        D_809C94A4 = 0x1E;
        this = this;
        func_8010E9F0(1, 0x4B);
        this->actor.draw = NULL;
        this->actionFunc = func_809C898C;
    }
}

void func_809C898C(EnSyatekiMan *this, GlobalContext *globalCtx) {
    Actor *sp34;
    s32 sp30;
    s32 sp24;
    s32 sp20;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_f16;
    s32 temp_t6;
    s32 temp_t7;
    u32 temp_a1_3;
    u32 temp_t3;
    s32 phi_v1;
    SaveContext *phi_t0;

    temp_a1 = *(&gSaveContext + 0x3DEC);
    temp_a0 = gSaveContext.unk_3DE0[1];
    sp24 = temp_a1;
    sp20 = temp_a0;
    sp34 = globalCtx->actorCtx.actorList[2].first;
    temp_f16 = (s32) ((__ull_to_f((u64) temp_a0, (u64) temp_a1) * 0.1f) + 1.0f);
    sp30 = temp_f16;
    if (temp_f16 < 0x2EF) {
        if (D_809C94A8 == 0) {
            temp_a0_2 = gSaveContext.unk3DE8;
            temp_a1_2 = gSaveContext.unk3DEC;
            sp20 = temp_a0_2;
            sp24 = temp_a1_2;
            phi_v1 = (s32) (u32) __ull_rem((u64) temp_a0_2, (u64) temp_a1_2, 0U, 0x1F4U);
        } else {
            temp_t7 = gSaveContext.unk3DEC;
            temp_t6 = gSaveContext.unk3DE8;
            temp_a1_3 = temp_t7 + 0xFA;
            sp24 = temp_t7;
            sp20 = temp_t6;
            phi_v1 = (s32) (u32) __ull_rem(temp_t6 + (temp_a1_3 < 0xFAU), (u64) temp_a1_3, 0U, 0x1F4U);
        }
        phi_t0 = &gSaveContext;
        if (phi_v1 < 0x64) {
            this->unk_26C = 0x50;
        }
        temp_v0 = this->unk_26E;
        if (temp_v0 != 0) {
            if (temp_v0 == 2) {
                temp_t3 = gSaveContext.unk3E24;
                gSaveContext.unk3E20 = (s32) (gSaveContext.unk3E20 - (temp_t3 < 0xFAU));
                gSaveContext.unk3E24 = (u32) (temp_t3 - 0xFA);
                D_809C94A8 = (s32) (D_809C94A8 + 0x19) % 0x32;
            }
            this->unk_26E = 0;
        }
        temp_v0_2 = this->unk_26C;
        if (temp_v0_2 == 0) {
            this->unk_26C = temp_v0_2 + 1;
        }
        if ((D_809C94A8 == (sp30 % 0x32)) && ((s32) this->unk_26C >= 0x46)) {
            temp_v0_3 = this->unk_27E;
            if ((s32) temp_v0_3 < 0xF) {
                this->unk_27E = temp_v0_3 + 1;
                this->unk_190 = *(&D_809C94D0 + (temp_v0_3 * 4));
                Audio_PlayActorSound2(&this->actor, 0x482CU);
                this->unk_26C = 0;
                phi_t0 = &gSaveContext;
            }
        }
        if ((phi_t0->unk3DE8 == 0) && (phi_t0->unk3DEC == 0)) {
            this->unk_27E = 0;
            this->unk_26C = 0x50;
            phi_t0->unk3DEC = 0;
            phi_t0->unk3DE8 = 0;
            phi_t0->unk_3DD0[1] = 5;
            sp34->unkA6C = (s32) (sp34->unkA6C | 0x20);
            D_809C94A8 = 0;
            this->actor.draw = EnSyatekiMan_Draw;
            func_801A2C20();
            this->actionFunc = func_809C8BF0;
            if (this->unk_280 == 0x32) {
                func_801A3098(0x922U);
                func_8011B4E0(globalCtx, 1);
            }
        }
    }
}

void func_809C8BF0(EnSyatekiMan *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_a0;
    u32 temp_v1;
    u32 phi_v1;
    SaveContext *phi_a3;

    if (this->unk_26A == 1) {
        temp_v0 = this->unk_270;
        this->unk_190 = 0;
        if (((s32) temp_v0 <= 0) && (globalCtx->interfaceCtx.unk_286 == 0)) {
            Actor_SetAllChestFlag(globalCtx, (u32) this->unk_280);
            this->unk_270 = 0xF;
            temp_v1 = gSaveContext.roomInf[127][6];
            temp_v0_2 = this->unk_280;
            temp_a0 = temp_v1 & 0xFFFF;
            phi_v1 = temp_v1;
            phi_a3 = &gSaveContext;
            if ((temp_a0 < (s32) temp_v0_2) || (temp_v0_2 == 0x32)) {
                if (temp_a0 < (s32) temp_v0_2) {
                    if ((gSaveContext.weekEventReg[59] & 0x20) == 0) {
                        func_801518B0(globalCtx, 0x407U, &this->actor);
                        this->unk_284 = 0x407;
                    } else if (temp_v0_2 == 0x32) {
                        func_801518B0(globalCtx, 0x405U, &this->actor);
                        this->unk_284 = 0x405;
                    } else {
                        func_801518B0(globalCtx, 0x407U, &this->actor);
                        this->unk_284 = 0x407;
                    }
                    phi_v1 = gSaveContext.roomInf[127][6];
                    goto block_14;
                }
                if (temp_v0_2 == 0x32) {
                    func_801518B0(globalCtx, 0x406U, &this->actor);
                    this->unk_284 = 0x406;
                    phi_v1 = gSaveContext.roomInf[127][6];
block_14:
                    phi_a3 = &gSaveContext;
                }
                phi_a3->roomInf[127][6] = (phi_v1 & 0xFFFF0000) | (this->unk_280 & 0xFFFF);
                this->unk_26A = 6;
            } else {
                if (((s32) gSaveContext.day % 5) != 3) {
                    func_801518B0(globalCtx, 0x401U, &this->actor);
                    this->unk_284 = 0x401;
                } else {
                    func_801518B0(globalCtx, 0x403U, &this->actor);
                    this->unk_284 = 0x403;
                }
                this->unk_26A = 4;
            }
            this->actionFunc = func_809C7990;
        } else {
            this->unk_270 = temp_v0 - 1;
        }
    }
    if ((s32) this->unk_270 < 5) {
        globalCtx->unk_1887C = -0xA;
    }
}

void func_809C8DE8(EnSyatekiMan *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->unk_266;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 0x28) {

            } else {
                arg0->unk_266 = 0;
            }
            arg0->unk_264 = 0;
        } else {
            arg0->unk_264 = 1;
        }
    } else {
        arg0->unk_264 = 2;
    }
    arg0->unk_266 += 1;
}

void EnSyatekiMan_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnSyatekiMan *this = (EnSyatekiMan *) thisx;
    this->actionFunc(this, globalCtx);
    func_809C8DE8(this);
    this->actor.focus.pos.y = 70.0f;
    Actor_SetHeight(&this->actor, 70.0f);
    if (this->unk_26A != 1) {
        SkelAnime_FrameUpdateMatrix(&this->skelAnime);
        func_800E9250(globalCtx, &this->actor, &this->unk_258, &this->unk_25E, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
    }
}

s32 EnSyatekiMan_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if ((arg0->sceneNum == 0x20) && (arg1 == 0xF)) {
        *arg2 = &D_0600F2D0;
    }
    if (arg1 == 0xF) {
        SysMatrix_InsertTranslation(3000.0f, 0.0f, 0.0f, 1);
        SysMatrix_InsertZRotation_s(arg5->unk258, 1);
        SysMatrix_InsertXRotation_s(arg5->unk25A, 1);
        SysMatrix_InsertTranslation(-3000.0f, 0.0f, 0.0f, 1);
    } else if (arg1 == 8) {
        SysMatrix_InsertXRotation_s((s16) ((s32) arg5->unk260 * -1), 1);
    }
    return 0;
}

void EnSyatekiMan_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f sp18;

    sp18.x = D_809C94AC.unk0;
    sp18.y = D_809C94AC.unk4;
    sp18.z = D_809C94AC.unk8;
    if (arg1 == 0xF) {
        SysMatrix_MultiplyVector3fByState(&sp18, arg4 + 0x3C);
    }
}

void EnSyatekiMan_Draw(Actor *this, GlobalContext *globalCtx) {
    EnSyatekiMan *self = (EnSyatekiMan *) this;
    GraphicsContext *sp3C;
    Gfx *sp34;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    ? *phi_v0;

    phi_v0 = &D_060062C8;
    if (globalCtx->sceneNum == 0x20) {
        D_809C94B8.unk0 = &D_0600FB90;
        D_809C94B8.unk4 = &D_06010390;
        phi_v0 = &D_06010390;
    } else {
        D_809C94B8.unk0 = &D_06005AC8;
        D_809C94B8.unk4 = &D_060062C8;
    }
    D_809C94B8.unk8 = phi_v0;
    temp_a0 = globalCtx->state.gfxCtx;
    globalCtx = globalCtx;
    sp3C = temp_a0;
    func_8012C5B0(temp_a0);
    temp_v0 = sp3C->polyOpa.p;
    sp3C->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp3C = sp3C;
    sp34 = temp_v0;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_809C94B8 + (self->unk_264 * 4)));
    temp_v0_2 = sp3C->polyOpa.p;
    sp3C->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp30 = temp_v0_2;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_809C94B8 + (self->unk_264 * 4)));
    SkelAnime_DrawSV(globalCtx, self->skelAnime.skeleton, self->skelAnime.limbDrawTbl, (s32) self->skelAnime.dListCount, EnSyatekiMan_OverrideLimbDraw, EnSyatekiMan_PostLimbDraw, &self->actor);
}

