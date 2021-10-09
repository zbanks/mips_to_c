struct _mips2c_stack_EnGinkoMan_BankAward {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnGinkoMan_BankAward2 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnGinkoMan_DepositDialogue {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnGinkoMan_Destroy {};         /* size 0x0 */

struct _mips2c_stack_EnGinkoMan_Dialogue {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnGinkoMan_Draw {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnGinkoMan_FacePlayer {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnGinkoMan_Idle {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnGinkoMan_Init {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnGinkoMan_OverrideLimbDraw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnGinkoMan_PostLimbDraw {};    /* size 0x0 */

struct _mips2c_stack_EnGinkoMan_SetupBankAward {};  /* size 0x0 */

struct _mips2c_stack_EnGinkoMan_SetupBankAward2 {}; /* size 0x0 */

struct _mips2c_stack_EnGinkoMan_SetupDialogue {};   /* size 0x0 */

struct _mips2c_stack_EnGinkoMan_SetupIdle {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnGinkoMan_SetupStamp {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnGinkoMan_Stamp {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnGinkoMan_SwitchAnimation {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnGinkoMan_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnGinkoMan_WaitForDialogueInput {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnGinkoMan_WaitForRupeeCount {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

void EnGinkoMan_FacePlayer(Actor *arg0, GlobalContext *arg1); /* static */
s32 EnGinkoMan_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void EnGinkoMan_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *actor); /* static */
void EnGinkoMan_WaitForDialogueInput(Actor *arg0, GlobalContext *arg1); /* static */
void EnGinkoMan_WaitForRupeeCount(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_060008C0;
extern ? D_06000AC4;
extern AnimationHeader D_060043F0;
extern ? D_06004A7C;
extern Gfx D_0600B1D8;
extern FlexSkeletonHeader D_0600C240;
static ActorAnimationEntry animations[5] = {
    {(AnimationHeader *)0x60008C0, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x60043F0, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6004F40, 1.0f, 0.0f, 0.0f, 2, -4.0f},
    {(AnimationHeader *)0x6000AC4, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6004A7C, 1.0f, 0.0f, 0.0f, 0, -4.0f},
};

void EnGinkoMan_Init(EnGinkoMan *this, GlobalContext *globalCtx) {
    EnGinkoMan *this = (EnGinkoMan *) thisx;
    this->actor.targetMode = 1;
    this->actor.uncullZoneForward = 400.0f;
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.colChkInfo.cylRadius = 0x64;
    this->curTextId = 0;
    this->isNewAccount = 0;
    this->isStampChecked = 0;
    this->choiceDepositWithdrawl = 0;
    this->serviceFee = 0;
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_0600C240, &D_060043F0, this->limbDrawTbl, this->transitionDrawTbl, 0x10);
    EnGinkoMan_SetupIdle(this);
}

void EnGinkoMan_Destroy(EnGinkoMan *this, GlobalContext *globalCtx) {
    EnGinkoMan *this = (EnGinkoMan *) thisx;

}

void EnGinkoMan_SetupIdle(EnGinkoMan *this) {
    EnGinkoMan *temp_a3;

    temp_a3 = this;
    temp_a3->actor.flags |= 1;
    this = temp_a3;
    func_800BDC5C(&temp_a3->skelAnime, (ActorAnimationEntry []) animations, 1);
    this->actionFunc = EnGinkoMan_Idle;
}

void EnGinkoMan_Idle(EnGinkoMan *this, GlobalContext *globalCtx) {
    s32 sp24;
    s32 temp_v1;
    s32 phi_v0;

    temp_v1 = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    sp24 = temp_v1;
    EnGinkoMan_SwitchAnimation(this, globalCtx);
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        if ((gSaveContext.roomInf[127][0] & 0xFFFF) == 0) {
            func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) animations, 0);
            func_801518B0(globalCtx, 0x44CU, (Actor *) this);
            this->curTextId = 0x44C;
        } else {
            func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) animations, 1);
            if ((((s32) gSaveContext.day % 5) == 3) && (gSaveContext.isNight == 1)) {
                func_801518B0(globalCtx, 0x467U, (Actor *) this);
                this->curTextId = 0x467;
            } else {
                func_801518B0(globalCtx, 0x466U, (Actor *) this);
                this->curTextId = 0x466;
            }
        }
        EnGinkoMan_SetupDialogue(this);
        return;
    }
    phi_v0 = temp_v1;
    if (temp_v1 < 0) {
        phi_v0 = -temp_v1;
    }
    if (phi_v0 < 0x1555) {
        func_800B8614((Actor *) this, globalCtx, 100.0f);
    }
}

void EnGinkoMan_DepositDialogue(EnGinkoMan *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a0;
    GlobalContext *temp_a3;
    s16 temp_v0;
    s16 temp_v0_4;
    s32 temp_v1_2;
    u32 temp_v1;
    u8 temp_t0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    GlobalContext *phi_a3;
    GlobalContext *phi_a3_2;
    s16 phi_t6;
    GlobalContext *phi_a3_3;
    s16 phi_t6_2;

    temp_a0 = globalCtx;
    globalCtx = globalCtx;
    temp_a3 = globalCtx;
    phi_a3 = temp_a3;
    phi_a3_2 = temp_a3;
    phi_a3_3 = temp_a3;
    if (func_80147624(temp_a0) != 0) {
        temp_v0 = this->curTextId;
        switch (temp_v0) {
        case 1100:
            globalCtx = temp_a3;
            func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) animations, 1);
            if ((gSaveContext.weekEventReg[10] & 8) != 0) {
                func_801518B0(globalCtx, 0x44EU, (Actor *) this);
                this->curTextId = 0x44E;
                return;
            }
            func_801518B0(globalCtx, 0x44DU, (Actor *) this);
            this->curTextId = 0x44D;
            return;
        case 1101:
            func_801518B0(temp_a3, 0x44EU, (Actor *) this);
            this->curTextId = 0x44E;
            return;
        case 1103:
            globalCtx = temp_a3;
            func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) animations, 0);
            func_801518B0(globalCtx, 0x450U, (Actor *) this);
            this->curTextId = 0x450;
            return;
        case 1107:
        case 1108:
        case 1109:
            if (this->isNewAccount == 1) {
                this->isNewAccount = 0;
                if (temp_v0 != 0x453) {
                    globalCtx = temp_a3;
                    func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) animations, 1);
                    phi_a3 = globalCtx;
                }
                func_801518B0(phi_a3, 0x461U, (Actor *) this);
                phi_t6_2 = 0x461;
block_63:
                this->curTextId = phi_t6_2;
                /* Duplicate return node #64. Try simplifying control flow for better match */
                return;
            }
            if (temp_v0 == 0x453) {
                globalCtx = temp_a3;
                func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) animations, 0);
                phi_a3_2 = globalCtx;
            }
            phi_a3_2->msgCtx.bankRupees = gSaveContext.roomInf[127][0] & 0xFFFF;
            func_801518B0(phi_a3_2, 0x45AU, (Actor *) this);
            this->curTextId = 0x45A;
            return;
        case 1110:
        case 1113:
            func_801518B0(temp_a3, 0x44EU, (Actor *) this);
            this->curTextId = 0x44E;
            return;
        case 1114:
            temp_v1 = gSaveContext.roomInf[127][0] & 0xFFFF;
            if ((temp_v1 >= 0xC8U) && ((s32) this->previousBankValue < 0xC8) && (temp_v0_2 = gSaveContext.weekEventReg[59], ((temp_v0_2 & 0x40) == 0))) {
                gSaveContext.weekEventReg[59] = temp_v0_2 | 0x40;
                func_801518B0(temp_a3, 0x45BU, (Actor *) this);
                phi_t6_2 = 0x45B;
                goto block_63;
            }
            if ((temp_v1 >= 0x3E8U) && ((s32) this->previousBankValue < 0x3E8) && (temp_v0_3 = gSaveContext.weekEventReg[59], ((temp_v0_3 & 0x80) == 0))) {
                gSaveContext.weekEventReg[59] = temp_v0_3 | 0x80;
                func_801518B0(temp_a3, 0x45CU, (Actor *) this);
                this->curTextId = 0x45C;
                return;
            }
            if (temp_v1 >= 0x1388U) {
                temp_v0_4 = this->previousBankValue;
                if (((s32) temp_v0_4 < 0x1388) && (temp_t0 = gSaveContext.weekEventReg[60], ((temp_t0 & 1) == 0))) {
                    gSaveContext.weekEventReg[60] = temp_t0 | 1;
                    func_801518B0(temp_a3, 0x45DU, (Actor *) this);
                    this->curTextId = 0x45D;
                    return;
                }
                if ((s32) temp_v0_4 < (s32) (s16) temp_v1) {
                    globalCtx = temp_a3;
                    func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) animations, 1);
                    func_801518B0(globalCtx, 0x45EU, (Actor *) this);
                    this->curTextId = 0x45E;
                    return;
                }
                globalCtx = temp_a3;
                func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) animations, 0);
                func_801518B0(globalCtx, 0x460U, (Actor *) this);
                this->curTextId = 0x460;
                return;
            }
            globalCtx = temp_a3;
            func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) animations, 0);
            func_801518B0(globalCtx, 0x460U, (Actor *) this);
            this->curTextId = 0x460;
            return;
        case 1115:
        case 1116:
        case 1117:
            this->isStampChecked = 0;
            globalCtx = temp_a3;
            func_801477B4(temp_a3);
            EnGinkoMan_SetupBankAward(this);
            EnGinkoMan_BankAward(this, globalCtx);
            return;
        case 1121:
            func_801518B0(temp_a3, 0x462U, (Actor *) this);
            this->curTextId = 0x462;
            return;
        case 1122:
            func_801518B0(temp_a3, 0x463U, (Actor *) this);
            this->curTextId = 0x463;
            return;
        case 1123:
            func_801518B0(temp_a3, 0x464U, (Actor *) this);
            this->curTextId = 0x464;
            return;
        case 1124:
            temp_a3->msgCtx.unk11F22 = 0x44;
            EnGinkoMan_SetupStamp(this);
            return;
        case 1125:
            globalCtx = temp_a3;
            func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) animations, 0);
            globalCtx->msgCtx.bankRupees = gSaveContext.roomInf[127][0] & 0xFFFF;
            func_801518B0(globalCtx, 0x45AU, (Actor *) this);
            this->curTextId = 0x45A;
            return;
        case 1126:
        case 1127:
            func_801518B0(temp_a3, 0x468U, (Actor *) this);
            this->curTextId = 0x468;
            return;
        case 1129:
            EnGinkoMan_SetupStamp(this);
            return;
        case 1130:
        case 1132:
        case 1150:
            if (this->choiceDepositWithdrawl == 0) {
                if ((u32) (gSaveContext.roomInf[127][0] & 0xFFFF) >= 0x1388U) {
                    func_801518B0(temp_a3, 0x45FU, (Actor *) this);
                    phi_t6 = 0x45F;
                    goto block_50;
                }
                if (gSaveContext.rupees == 0) {
                    func_801518B0(temp_a3, 0x458U, (Actor *) this);
                    this->curTextId = 0x458;
                } else {
                    func_801518B0(temp_a3, 0x479U, (Actor *) this);
                    this->curTextId = 0x479;
                }
            } else if ((((s32) gSaveContext.day % 5) == 3) && (gSaveContext.isNight == 1)) {
                func_801518B0(temp_a3, 0x46DU, (Actor *) this);
                this->curTextId = 0x46D;
            } else {
                func_801518B0(temp_a3, 0x46BU, (Actor *) this);
                phi_t6 = 0x46B;
block_50:
                this->curTextId = phi_t6;
            }
            this->choiceDepositWithdrawl = 0;
            return;
        case 1131:
            func_801518B0(temp_a3, 0x46EU, (Actor *) this);
            this->curTextId = 0x46E;
            return;
        case 1133:
            func_801518B0(temp_a3, 0x46BU, (Actor *) this);
            this->curTextId = 0x46B;
            return;
        case 1136:
            globalCtx = temp_a3;
            if (func_80147624(temp_a3) != 0) {
                func_801477B4(globalCtx);
                this->isStampChecked = 0;
                EnGinkoMan_SetupIdle(this);
                return;
            }
            /* Duplicate return node #64. Try simplifying control flow for better match */
            return;
        case 1142:
            globalCtx = temp_a3;
            func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) animations, 1);
            phi_a3_3 = globalCtx;
            /* fallthrough */
        case 1141:
        case 1148:
        case 1149:
            func_801518B0(phi_a3_3, 0x468U, (Actor *) this);
            this->curTextId = 0x468;
            return;
        case 1138:
        case 1139:
        case 1140:
            temp_v1_2 = gSaveContext.roomInf[127][0] & 0xFFFF;
            if (temp_v1_2 == 0) {
                func_801518B0(temp_a3, 0x478U, (Actor *) this);
                this->curTextId = 0x478;
                return;
            }
            temp_a3->msgCtx.bankRupees = temp_v1_2;
            func_801518B0(temp_a3, 0x45AU, (Actor *) this);
            this->curTextId = 0x45A;
            return;
        case 1143:
            globalCtx = temp_a3;
            func_801518B0(temp_a3, 0x471U, (Actor *) this);
            this->curTextId = 0x471;
            this->serviceFee = (s16) globalCtx->msgCtx.unk1206C;
            return;
        case 1145:
            func_801518B0(temp_a3, 0x44FU, (Actor *) this);
            phi_t6_2 = 0x44F;
            goto block_63;
        }
    } else {
    default:
    }
}

void EnGinkoMan_WaitForDialogueInput(Actor *arg0, GlobalContext *arg1) {
    void *sp20;
    GlobalContext *temp_a0;
    s16 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_5;
    u32 temp_v0_4;
    u32 temp_v0_6;
    void *temp_v1;
    void *temp_v1_2;
    s16 phi_t0;

    temp_a0 = arg1;
    arg1 = arg1;
    if (func_80147624(temp_a0) != 0) {
        temp_v0 = arg0->unk258;
        if (temp_v0 != 0x44E) {
            if (temp_v0 != 0x452) {
                if (temp_v0 != 0x468) {
                    if (temp_v0 != 0x471) {
                        return;
                    }
                    temp_v1 = arg1 + 0x10000;
                    if (arg1->msgCtx.choiceIndex == 0) {
                        temp_v0_2 = arg1->msgCtx.bankRupeesSelected;
                        if ((gSaveContext.roomInf[127][0] & 0xFFFF) < (temp_v0_2 + arg0->unk25A)) {
                            arg1 = arg1;
                            play_sound(0x4806U);
                            func_800BDC5C(arg0 + 0x144, (ActorAnimationEntry []) animations, 0);
                            func_801518B0(arg1, 0x476U, arg0);
                            arg0->unk258 = 0x476;
                            return;
                        }
                        if ((s32) (*(gUpgradeCapacities + 0x18))[(u32) (gSaveContext.inventory.upgrades & *(gUpgradeMasks + 0x10)) >> gUpgradeShifts[4]] < (temp_v0_2 + gSaveContext.rupees)) {
                            arg1 = arg1;
                            play_sound(0x4806U);
                            func_801518B0(arg1, 0x475U, arg0);
                            arg0->unk258 = 0x475;
                            return;
                        }
                        sp20 = temp_v1;
                        arg1 = arg1;
                        func_8019F208();
                        temp_v0_3 = arg1->msgCtx.bankRupeesSelected;
                        if (temp_v0_3 >= 0x64) {
                            sp20 = temp_v1;
                            func_801518B0(arg1, 0x474U, arg0);
                            arg0->unk258 = 0x474;
                        } else if (temp_v0_3 >= 0xA) {
                            sp20 = temp_v1;
                            func_801518B0(arg1, 0x473U, arg0);
                            arg0->unk258 = 0x473;
                        } else {
                            sp20 = temp_v1;
                            func_801518B0(arg1, 0x472U, arg0);
                            arg0->unk258 = 0x472;
                        }
                        arg0->unk262 = (s16) gSaveContext.roomInf[127][0];
                        temp_v0_4 = gSaveContext.roomInf[127][0];
                        gSaveContext.roomInf[127][0] = (((temp_v0_4 & 0xFFFF) - (arg1 + 0x10000)->unk6980) - arg0->unk25A) | (temp_v0_4 & 0xFFFF0000);
                        func_801159EC((arg1 + 0x10000)->unk6982);
                        return;
                    }
                    arg1 = arg1;
                    func_8019F230();
                    func_801518B0(arg1, 0x47CU, arg0);
                    phi_t0 = 0x47C;
                    goto block_44;
                }
                if (arg1->msgCtx.choiceIndex == 2) {
                    arg1 = arg1;
                    func_8019F230();
                    func_801518B0(arg1, 0x470U, arg0);
                    arg0->unk258 = 0x470;
                    return;
                }
                sp20 = arg1 + 0x10000;
                arg1 = arg1;
                func_8019F208();
                arg0->unk25C = (s16) arg1->msgCtx.choiceIndex;
                if (arg0->unk260 == 0) {
                    arg0->unk260 = 1;
                    func_801518B0(arg1, 0x469U, arg0);
                    phi_t0 = 0x469;
block_44:
                    arg0->unk258 = phi_t0;
                    /* Duplicate return node #45. Try simplifying control flow for better match */
                    return;
                }
                func_801518B0(arg1, 0x47EU, arg0);
                arg0->unk258 = 0x47E;
                return;
            }
            temp_v1_2 = arg1 + 0x10000;
            if (arg1->msgCtx.choiceIndex == 0) {
                if ((s32) gSaveContext.rupees < arg1->msgCtx.bankRupeesSelected) {
                    arg1 = arg1;
                    play_sound(0x4806U);
                    func_800BDC5C((SkelAnime *) (arg0 + 0x144), (ActorAnimationEntry []) animations, 1);
                    func_801518B0(arg1, 0x459U, arg0);
                    arg0->unk258 = 0x459;
                    return;
                }
                sp20 = temp_v1_2;
                arg1 = arg1;
                func_8019F208();
                temp_v0_5 = arg1->msgCtx.bankRupeesSelected;
                if (temp_v0_5 >= 0x64) {
                    sp20 = temp_v1_2;
                    func_801518B0(arg1, 0x455U, arg0);
                    arg0->unk258 = 0x455;
                } else if (temp_v0_5 >= 0xA) {
                    sp20 = temp_v1_2;
                    func_801518B0(arg1, 0x454U, arg0);
                    arg0->unk258 = 0x454;
                } else {
                    sp20 = temp_v1_2;
                    arg1 = arg1;
                    func_800BDC5C((SkelAnime *) (arg0 + 0x144), (ActorAnimationEntry []) animations, 1);
                    func_801518B0(arg1, 0x453U, arg0);
                    arg0->unk258 = 0x453;
                }
                if ((gSaveContext.roomInf[127][0] & 0xFFFF) == 0) {
                    arg0->unk25E = 1;
                }
                sp20 = arg1 + 0x10000;
                func_801159EC((s16) ((s32) (arg1 + 0x10000)->unk6980 * -1));
                arg0->unk262 = (s16) gSaveContext.roomInf[127][0];
                temp_v0_6 = gSaveContext.roomInf[127][0];
                gSaveContext.roomInf[127][0] = ((temp_v0_6 & 0xFFFF) + (arg1 + 0x10000)->unk6980) | (temp_v0_6 & 0xFFFF0000);
                return;
            }
            arg1 = arg1;
            func_8019F230();
            func_800BDC5C((SkelAnime *) (arg0 + 0x144), (ActorAnimationEntry []) animations, 1);
            if ((gSaveContext.roomInf[127][0] & 0xFFFF) == 0) {
                func_801518B0(arg1, 0x456U, arg0);
                arg0->unk258 = 0x456;
                return;
            }
            func_801518B0(arg1, 0x47DU, arg0);
            arg0->unk258 = 0x47D;
            return;
        }
        if (arg1->msgCtx.choiceIndex == 0) {
            if ((u32) (gSaveContext.roomInf[127][0] & 0xFFFF) >= 0x1388U) {
                arg1 = arg1;
                play_sound(0x4806U);
                func_801518B0(arg1, 0x45FU, arg0);
                arg0->unk258 = 0x45F;
                return;
            }
            if ((s32) gSaveContext.rupees > 0) {
                arg1 = arg1;
                func_8019F208();
                func_801518B0(arg1, 0x44FU, arg0);
                arg0->unk258 = 0x44F;
                return;
            }
            arg1 = arg1;
            play_sound(0x4806U);
            func_801518B0(arg1, 0x458U, arg0);
            arg0->unk258 = 0x458;
            return;
        }
        arg1 = arg1;
        func_8019F230();
        func_801518B0(arg1, 0x451U, arg0);
        arg0->unk258 = 0x451;
    }
}

void EnGinkoMan_WaitForRupeeCount(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;
    s16 temp_v0;

    temp_a0 = arg1;
    arg1 = arg1;
    if (func_80147624(temp_a0) != 0) {
        temp_v0 = arg0->unk258;
        if (temp_v0 != 0x450) {
            if (temp_v0 != 0x46E) {
                return;
            }
            if (arg1->msgCtx.bankRupeesSelected == 0) {
                func_801518B0(arg1, 0x46FU, arg0);
                arg0->unk258 = 0x46F;
                return;
            }
            if (gSaveContext.isNight == 1) {
                func_801518B0(arg1, 0x477U, arg0);
                arg0->unk258 = 0x477;
                return;
            }
            func_801518B0(arg1, 0x471U, arg0);
            arg0->unk258 = 0x471;
            arg0->unk25A = 0;
            /* Duplicate return node #12. Try simplifying control flow for better match */
            return;
        }
        if (arg1->msgCtx.bankRupeesSelected == 0) {
            arg1 = arg1;
            func_800BDC5C((SkelAnime *) (arg0 + 0x144), (ActorAnimationEntry []) animations, 1);
            func_801518B0(arg1, 0x457U, arg0);
            arg0->unk258 = 0x457;
            return;
        }
        func_801518B0(arg1, 0x452U, arg0);
        arg0->unk258 = 0x452;
    }
}

void EnGinkoMan_SetupDialogue(EnGinkoMan *this) {
    this->actionFunc = EnGinkoMan_Dialogue;
}

void EnGinkoMan_Dialogue(EnGinkoMan *this, GlobalContext *globalCtx) {
    u32 temp_v0;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0) {
    case 2:
        EnGinkoMan_SetupIdle(this);
        break;
    case 4:
        EnGinkoMan_WaitForDialogueInput((Actor *) this, globalCtx);
        break;
    case 5:
        EnGinkoMan_DepositDialogue(this, globalCtx);
        break;
    case 6:
        if (func_80147624(globalCtx) != 0) {
            this->isStampChecked = 0;
            EnGinkoMan_SetupIdle(this);
        }
        break;
    case 14:
        EnGinkoMan_WaitForRupeeCount((Actor *) this, globalCtx);
        break;
    }
    if ((&D_060008C0 == this->skelAnime.animCurrentSeg) && (func_801378B8(&this->skelAnime, this->skelAnime.animFrameCount) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x2992U);
    }
}

void EnGinkoMan_SetupBankAward(EnGinkoMan *this) {
    this->actionFunc = EnGinkoMan_BankAward;
}

void EnGinkoMan_BankAward(EnGinkoMan *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        this->actor.parent = NULL;
        EnGinkoMan_SetupBankAward2(this);
        return;
    }
    temp_v0 = this->curTextId;
    if (temp_v0 == 0x45B) {
        if ((gSaveContext.weekEventReg[10] & 8) == 0) {
            func_800B8A1C((Actor *) this, globalCtx, ((u32) (gSaveContext.inventory.upgrades & *(gUpgradeMasks + 0x10)) >> gUpgradeShifts[4]) + 8, 500.0f, 100.0f);
            return;
        }
        func_800B8A1C((Actor *) this, globalCtx, 2, 500.0f, 100.0f);
        return;
    }
    if (temp_v0 == 0x45C) {
        func_800B8A1C((Actor *) this, globalCtx, 2, 500.0f, 100.0f);
        return;
    }
    if ((gSaveContext.weekEventReg[59] & 8) == 0) {
        func_800B8A1C((Actor *) this, globalCtx, 0xC, 500.0f, 100.0f);
        return;
    }
    func_800B8A1C((Actor *) this, globalCtx, 2, 500.0f, 100.0f);
}

void EnGinkoMan_SetupBankAward2(EnGinkoMan *this) {
    this->actionFunc = EnGinkoMan_BankAward2;
}

void EnGinkoMan_BankAward2(EnGinkoMan *this, GlobalContext *globalCtx) {
    u8 temp_v0;
    u8 temp_v0_2;

    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        temp_v0 = gSaveContext.weekEventReg[10];
        if (((temp_v0 & 8) == 0) && (this->curTextId == 0x45B)) {
            gSaveContext.weekEventReg[10] = temp_v0 | 8;
            func_801518B0(globalCtx, 0x47AU, (Actor *) this);
            this->curTextId = 0x47A;
        } else {
            func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) animations, 1);
            func_801518B0(globalCtx, 0x47BU, (Actor *) this);
            this->curTextId = 0x47B;
        }
        EnGinkoMan_SetupDialogue(this);
        return;
    }
    if (this->curTextId == 0x45D) {
        if ((func_80152498(&globalCtx->msgCtx) == 6) && (func_80147624(globalCtx) != 0)) {
            temp_v0_2 = gSaveContext.weekEventReg[59];
            if ((temp_v0_2 & 8) == 0) {
                gSaveContext.weekEventReg[59] = temp_v0_2 | 8;
            }
            EnGinkoMan_SetupIdle(this);
            return;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return;
    }
    func_800B85E0((Actor *) this, globalCtx, 500.0f, -1);
}

void EnGinkoMan_SetupStamp(EnGinkoMan *this) {
    func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) animations, 2);
    this->actionFunc = EnGinkoMan_Stamp;
}

void EnGinkoMan_Stamp(EnGinkoMan *this, GlobalContext *globalCtx) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    s16 temp_v0;

    if ((this->curTextId == 0x464) && (func_801378B8(&this->skelAnime, 10.0f) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x2993U);
    }
    temp_a0 = &this->skelAnime;
    sp20 = temp_a0;
    if (func_801378B8(temp_a0, this->skelAnime.animFrameCount) != 0) {
        temp_v0 = this->curTextId;
        if (temp_v0 != 0x464) {
            if (temp_v0 != 0x469) {

            } else {
                func_800BDC5C(temp_a0, (ActorAnimationEntry []) animations, 1);
                globalCtx->msgCtx.bankRupees = gSaveContext.roomInf[127][0] & 0xFFFF;
                if ((((s32) gSaveContext.day % 5) == 3) && (gSaveContext.isNight == 1)) {
                    func_801518B0(globalCtx, 0x46CU, (Actor *) this);
                    this->curTextId = 0x46C;
                } else {
                    func_801518B0(globalCtx, 0x46AU, (Actor *) this);
                    this->curTextId = 0x46A;
                }
            }
        } else {
            func_800BDC5C(temp_a0, (ActorAnimationEntry []) animations, 1);
            func_801518B0(globalCtx, 0x465U, (Actor *) this);
            this->curTextId = 0x465;
        }
        EnGinkoMan_SetupDialogue(this);
    }
}

void EnGinkoMan_SwitchAnimation(EnGinkoMan *this, GlobalContext *globalCtx) {
    EnGinkoMan *temp_a3;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v0;
    EnGinkoMan *phi_a3;

    temp_a3 = this;
    phi_a3 = temp_a3;
    if (temp_a3->actor.xzDistToPlayer > 160.0f) {
        temp_v0 = temp_a3->animTimer;
        phi_v0 = temp_v0;
        if ((temp_v0 == 0) && (&D_06004A7C != temp_a3->skelAnime.animCurrentSeg)) {
            temp_a3->animTimer = 0x28;
            this = temp_a3;
            func_800BDC5C(&temp_a3->skelAnime, (ActorAnimationEntry []) animations, 4);
            goto block_7;
        }
    } else {
        temp_v0_2 = temp_a3->animTimer;
        phi_v0 = temp_v0_2;
        if ((temp_v0_2 == 0) && (&D_06000AC4 != temp_a3->skelAnime.animCurrentSeg)) {
            temp_a3->animTimer = 0x28;
            this = temp_a3;
            func_800BDC5C(&temp_a3->skelAnime, (ActorAnimationEntry []) animations, 3);
block_7:
            phi_v0 = this->animTimer;
            phi_a3 = this;
        }
    }
    if (phi_v0 != 0) {
        phi_a3->animTimer = phi_v0 - 1;
    }
}

void EnGinkoMan_FacePlayer(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    if (&D_06004A7C != arg0->unk14C) {
        func_800E9250(arg1, arg0, arg0 + 0x24C, arg0 + 0x252, (Vec3f) arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z);
        return;
    }
    func_800E8F08(arg0 + 0x24C, arg0 + 0x252);
}

void EnGinkoMan_Update(EnGinkoMan *this, GlobalContext *globalCtx) {
    EnGinkoMan *this = (EnGinkoMan *) thisx;
    this->actionFunc(this, globalCtx);
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    this->actor.focus.pos.y += 30.0f;
    EnGinkoMan_FacePlayer((Actor *) this, globalCtx);
}

s32 EnGinkoMan_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 0xF) {
        *arg2 = &D_0600B1D8;
    }
    if (arg1 == 0xF) {
        SysMatrix_InsertTranslation(1500.0f, 0.0f, 0.0f, 1);
        SysMatrix_InsertXRotation_s(arg5->unk24E, 1);
        SysMatrix_InsertZRotation_s(arg5->unk24C, 1);
        SysMatrix_InsertTranslation(-1500.0f, 0.0f, 0.0f, 1);
    } else if (arg1 == 8) {
        SysMatrix_InsertXRotation_s((s16) ((s32) arg5->unk254 * -1), 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) arg5->unk252 * -1), 1);
    }
    return 0;
}

void EnGinkoMan_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3) {

}

void EnGinkoMan_Draw(EnGinkoMan *this, GlobalContext *globalCtx) {
    Gfx *sp38;
    Gfx *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    EnGinkoMan *this = (EnGinkoMan *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp38 = temp_v0;
    sp38->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, 0x32, 0x50, 0, 0);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp34 = temp_v0_2;
    sp34->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, 0x32, 0x50, 0, 0);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0;
    temp_v0_3->words.w0 = 0xE7000000;
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, EnGinkoMan_OverrideLimbDraw, EnGinkoMan_PostLimbDraw, (Actor *) this);
}
