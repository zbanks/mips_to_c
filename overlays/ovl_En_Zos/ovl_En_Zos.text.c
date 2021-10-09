? func_801A1FB4(?, f32 *, ?, ?);                    /* extern */
void func_80BBAE84(EnZos *arg0, s16 arg1, u8 arg2, EnZos *); /* static */
s32 func_80BBAF5C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BBAFFC(EnZos *arg0, GlobalContext *arg1, EnZos *); /* static */
void func_80BBB0D4(EnZos *arg0, GlobalContext *arg1); /* static */
void func_80BBB15C(EnZos *arg0, GlobalContext *arg1); /* static */
void func_80BBB2C4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BBB354(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BBB414(EnZos *arg0, GlobalContext *arg1); /* static */
void func_80BBB4CC(EnZos *arg0, GlobalContext *arg1); /* static */
void func_80BBB574(EnZos *arg0, GlobalContext *arg1); /* static */
void func_80BBB718(EnZos *arg0, GlobalContext *arg1); /* static */
void func_80BBB8AC(EnZos *arg0, GlobalContext *arg1); /* static */
void func_80BBBB84(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BBBCBC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BBBD5C(EnZos *arg0, GlobalContext *arg1); /* static */
void func_80BBBDE0(EnZos *arg0, GlobalContext *arg1); /* static */
void func_80BBBFBC(EnZos *arg0, GlobalContext *arg1); /* static */
void func_80BBC070(EnZos *arg0, GlobalContext *arg1); /* static */
void func_80BBC14C(EnZos *arg0, GlobalContext *arg1); /* static */
void func_80BBC22C(EnZos *arg0, GlobalContext *arg1); /* static */
void func_80BBC24C(EnZos *arg0, GlobalContext *arg1); /* static */
void func_80BBC298(EnZos *arg0, GlobalContext *arg1); /* static */
void func_80BBC37C(EnZos *arg0, GlobalContext *arg1); /* static */
s32 func_80BBC4E4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_80BBC500(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_0600A164;
extern ? D_06013088;
extern ? D_060136E0;
extern FlexSkeletonHeader D_06015238;
static ColliderCylinderInit D_80BBC6F0 = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x3C, 0x28, 0, {0, 0, 0}},
};
static ? D_80BBC71C;                                /* unable to generate initializer */
static Vec3f D_80BBC750 = {0.0f, 0.0f, 0.0f};
static ? D_80BBC75C;                                /* unable to generate initializer */

typedef struct EnZos {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ Vec3s unk144;                      /* inferred */
    /* 0x014A */ char pad14A[0x66];                 /* maybe part of unk144[18]? */
    /* 0x01B0 */ Vec3s unk1B0;                      /* inferred */
    /* 0x01B6 */ char pad1B6[0x66];                 /* maybe part of unk1B0[18]? */
    /* 0x021C */ SkelAnime unk21C;                  /* inferred */
    /* 0x0260 */ ColliderCylinder unk260;           /* inferred */
    /* 0x02AC */ s16 unk2AC;                        /* inferred */
    /* 0x02AE */ s16 unk2AE;                        /* inferred */
    /* 0x02B0 */ char pad2B0[0x6];                  /* maybe part of unk2AE[4]? */
    /* 0x02B6 */ u16 unk2B6;                        /* inferred */
    /* 0x02B8 */ s16 unk2B8;                        /* inferred */
    /* 0x02BA */ s16 unk2BA;                        /* inferred */
    /* 0x02BC */ s16 unk2BC;                        /* inferred */
    /* 0x02BE */ char pad2BE[0x2];                  /* maybe part of unk2BC[2]? */
    /* 0x02C0 */ void (*actionFunc)(EnZos *, GlobalContext *);
} EnZos;                                            /* size 0x2C4 */

void EnZos_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnZos *this = (EnZos *) thisx;
    SkelAnime *sp34;
    SkelAnime *temp_a1;
    s32 temp_v0;

    Actor_SetScale(&this->actor, 0.0115f);
    this->actionFunc = func_80BBBDE0;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 30.0f);
    this->actor.colChkInfo.mass = 0xFF;
    temp_a1 = &this->unk21C;
    sp34 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06015238, &D_0600A164, &this->unk144, &this->unk1B0, 0x12);
    SkelAnime_ChangeAnimDefaultRepeat(sp34, &D_0600A164);
    Collider_InitAndSetCylinder(globalCtx, &this->unk260, &this->actor, &D_80BBC6F0);
    this->unk2B6 = 0;
    this->actor.minVelocityY = -4.0f;
    this->actor.gravity = -4.0f;
    func_80BBAE84(this, 0, 2U);
    temp_v0 = this->actor.params & 0xF;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if ((gSaveContext.weekEventReg[55] & 0x80) != 0) {
                Actor_MarkForDeath(&this->actor);
            }
            this->actor.flags |= 0x10;
            return;
        }
        this->actionFunc = func_80BBC37C;
        func_80BBAE84(this, 7, 2U);
        this->unk2BC = -1;
        this->unk2B6 |= 0x40;
        return;
    }
    if ((gSaveContext.weekEventReg[55] & 0x80) == 0) {
        Actor_MarkForDeath(&this->actor);
    }
    if ((gSaveContext.weekEventReg[78] & 1) != 0) {
        this->actionFunc = func_80BBC24C;
    } else {
        this->actionFunc = func_80BBC14C;
    }
    func_80BBAE84(this, 0, 2U);
}

void EnZos_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnZos *this = (EnZos *) thisx;
    gSaveContext.weekEventReg[52] &= 0xEF;
}

void func_80BBAE84(EnZos *arg0, s16 arg1, u8 arg2) {
    AnimationHeaderCommon **sp30;
    AnimationHeaderCommon **temp_v1;
    AnimationHeaderCommon **phi_v1;
    f32 phi_f0;

    if ((arg1 != arg0->unk2B8) && ((s32) arg1 >= 0) && ((s32) arg1 < 0xD)) {
        if ((s32) arg1 >= 0xB) {
            phi_v1 = (arg1 * 4) + &D_80BBC71C;
            phi_f0 = 29.0f;
        } else {
            temp_v1 = (arg1 * 4) + &D_80BBC71C;
            sp30 = temp_v1;
            phi_v1 = temp_v1;
            phi_f0 = (f32) SkelAnime_GetFrameCount(*temp_v1);
        }
        SkelAnime_ChangeAnim(arg0 + 0x21C, *phi_v1, 1.0f, 0.0f, phi_f0, (u8) (s32) arg2, -5.0f);
        arg0->unk2B8 = arg1;
        arg0->unk2B6 &= 0xFF7F;
    }
}

s32 func_80BBAF5C(Actor *arg0, GlobalContext *arg1) {
    if ((Actor_IsLinkFacingActor(arg0, 0x3000, arg1) != 0) && (((Actor_IsActorFacingLink(arg0, 0x4000) == 0) && (arg0->shape.rot.y == arg0->home.rot.y)) || ((Actor_IsActorFacingLink(arg0, 0x3000) != 0) && (arg0->shape.rot.y != arg0->home.rot.y))) && (arg0->xzDistToPlayer < 100.0f)) {
        return 1;
    }
    return 0;
}

s32 func_80BBAFFC(EnZos *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;
    s32 temp_f4;

    temp_a0 = arg0 + 0x21C;
    arg0 = arg0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        arg0 = arg0;
        temp_f4 = (s32) Rand_ZeroFloat(4.0f);
        if ((s16) temp_f4 != 0) {
            if ((s16) temp_f4 != 1) {
                if ((s16) temp_f4 != 2) {
                    func_80BBAE84(arg0, 0xC, 2U, arg0);
                    return 1;
                }
                func_80BBAE84(arg0, 0xB, 2U, arg0);
                return 1;
            }
            func_80BBAE84(arg0, 8, 2U, arg0);
            return 1;
        }
        func_80BBAE84(arg0, 7, 2U, arg0);
        return 1;
    }
    return 0;
}

void func_80BBB0D4(EnZos *arg0, GlobalContext *arg1) {
    SkelAnime *sp1C;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x21C;
    sp1C = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        if (Rand_ZeroFloat(1.0f) < 0.9f) {
            func_80BBAE84(arg0, 0, 2U);
        } else {
            func_80BBAE84(arg0, 1, 2U);
        }
        SkelAnime_FrameUpdateMatrix(sp1C);
    }
}

void func_80BBB15C(EnZos *arg0, GlobalContext *arg1) {
    u16 temp_v0;
    u8 temp_v0_2;
    u16 phi_t6;
    s32 phi_s1;

    if (gSaveContext.playerForm == 2) {
        temp_v0 = arg0->unk2B6;
        phi_s1 = 0x1235;
        if ((temp_v0 & 8) != 0) {
            func_80BBAE84(arg0, 6, 0U);
            arg0->unk2B6 |= 2;
        } else {
            phi_s1 = 0x123E;
            if ((temp_v0 & 4) != 0) {
                func_80BBAE84(arg0, 6, 0U);
                arg0->unk2B6 |= 2;
            } else {
                phi_s1 = 0x1231;
                if ((gSaveContext.weekEventReg[40] & 0x20) != 0) {
                    func_80BBAE84(arg0, 6, 0U);
                    phi_t6 = arg0->unk2B6 | 0x80;
                    phi_s1 = 0x1236;
                    goto block_11;
                }
                func_80BBAE84(arg0, 6, 0U);
                arg0->unk2B6 |= 0x80;
            }
        }
    } else {
        arg0->unk2B6 &= 0xFFFD;
        temp_v0_2 = gSaveContext.weekEventReg[39];
        phi_s1 = 0x1244;
        if ((temp_v0_2 & 0x10) != 0) {
            func_80BBAE84(arg0, 6, 0U);
            arg0->unk2B6 |= 0x80;
            phi_s1 = 0x1243;
        } else {
            gSaveContext.weekEventReg[39] = temp_v0_2 | 0x10;
            func_80BBAE84(arg0, 4, 0U);
            phi_t6 = arg0->unk2B6 | 0x10;
block_11:
            arg0->unk2B6 = phi_t6;
        }
    }
    func_801518B0(arg1, phi_s1 & 0xFFFF, &arg0->actor);
}

void func_80BBB2C4(Actor *arg0, GlobalContext *arg1) {
    if (func_800B84D0(arg0, arg1) != 0) {
        func_801518B0(arg1, 0x124FU, arg0);
        arg0->unk2C0 = func_80BBB8AC;
        arg0->flags &= 0xFFFEFFFF;
        return;
    }
    func_800B8500(arg0, arg1, 1000.0f, 1000.0f, -1);
}

void func_80BBB354(Actor *arg0, GlobalContext *arg1) {
    s32 phi_a2;

    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->parent = NULL;
        arg0->unk2C0 = func_80BBB2C4;
        gSaveContext.weekEventReg[39] |= 0x20;
        arg0->flags |= 0x10000;
        func_800B8500(arg0, arg1, 1000.0f, 1000.0f, -1);
        return;
    }
    if ((gSaveContext.weekEventReg[39] & 0x20) != 0) {
        phi_a2 = 5;
    } else {
        phi_a2 = 0xC;
    }
    func_800B8A1C(arg0, arg1, phi_a2, 10000.0f, 50.0f);
}

void func_80BBB414(EnZos *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;
    s16 temp_v1;

    temp_a0 = arg0 + 0x21C;
    arg0 = arg0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if ((func_800EE29C(arg1, 0x1F5U) != 0) && (arg0 = arg0, temp_v1 = (s16) arg1->csCtx.npcActions[func_800EE200(arg1, 0x1F5U)]->unk0, (temp_v1 != arg0->unk2BA))) {
        arg0->unk2BA = temp_v1;
        if (temp_v1 != 1) {
            if (temp_v1 != 2) {
                return;
            }
            func_80BBAE84(arg0, 0xA, 0U, arg0);
            // Duplicate return node #7. Try simplifying control flow for better match
            return;
        }
        func_80BBAE84(arg0, 1, 0U, arg0);
    }
}

void func_80BBB4CC(EnZos *arg0) {
    func_80BBB414(arg0);
    if ((arg0->actor.cutscene != -1) && (ActorCutscene_GetCurrentIndex() != arg0->actor.cutscene)) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
            return;
        }
        if (ActorCutscene_GetCanPlayNext((s16) arg0->actor.cutscene) != 0) {
            ActorCutscene_Start((s16) arg0->actor.cutscene, &arg0->actor);
            arg0->actor.cutscene = -1;
            return;
        }
        ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
        // Duplicate return node #7. Try simplifying control flow for better match
    }
}

void func_80BBB574(EnZos *arg0, GlobalContext *arg1) {
    u16 temp_v0;
    u16 temp_v0_2;

    if ((arg0->unk2B6 & 0x10) == 0) {
        Math_SmoothStepToS(arg0 + 0xBE, arg0->actor.yawTowardsPlayer, 2, 0x1000, (s16) 0x200);
        arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    }
    if (func_80BBAFFC(arg0, arg1) != 0) {
        temp_v0 = arg0->unk2B6;
        if ((temp_v0 & 0x20) != 0) {
            arg0->unk2B6 = temp_v0 & 0xFFDF;
            func_80151938(arg1, 0x124CU);
        }
    }
    if ((func_80152498(&arg1->msgCtx) == 5) && (func_80147624(arg1) != 0)) {
        temp_v0_2 = arg1->msgCtx.unk11F04;
        if (temp_v0_2 != 0x124B) {
            if (temp_v0_2 != 0x124C) {
                if (temp_v0_2 != 0x124D) {
                    if (temp_v0_2 != 0x124E) {
                        return;
                    }
                    func_801477B4(arg1);
                    arg0->actionFunc = (void (*)(EnZos *, GlobalContext *)) func_80BBB354;
                    func_80BBB354(&arg0->actor, arg1);
                    // Duplicate return node #18. Try simplifying control flow for better match
                    return;
                }
                arg0->unk2B6 &= 0xFFEF;
                func_80BBAE84(arg0, 6, 0U);
                func_80151938(arg1, 0x124EU);
                return;
            }
            arg1->msgCtx.unk11F10 = 0;
            arg0->actionFunc = func_80BBB4CC;
            func_80BBAE84(arg0, 0xA, 0U);
            return;
        }
        if (arg0->unk2B8 == 9) {
            arg1->msgCtx.unk11F10 = 0;
            arg0->unk2B6 |= 0x20;
            return;
        }
        func_80151938(arg1, 0x124CU);
    }
}

void func_80BBB718(EnZos *arg0, GlobalContext *arg1) {
    s32 sp24;
    void *sp20;
    s32 temp_v0;

    sp20 = arg1->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x21C);
    if (func_80152498(arg1 + 0x4908) == 0x10) {
        temp_v0 = func_80123810(arg1);
        if (temp_v0 > 0) {
            sp24 = temp_v0;
            func_801477B4(arg1);
            if (temp_v0 == 0x19) {
                sp20->textId = 0x1232;
                func_80BBAE84(arg0, 5, 0U);
                arg0->unk2B6 |= 8;
                gSaveContext.weekEventReg[40] |= 0x20;
            } else if ((gSaveContext.weekEventReg[39] & 8) != 0) {
                sp20->textId = 0x1241;
            } else {
                sp20->textId = 0x1237;
                gSaveContext.weekEventReg[39] |= 8;
                func_80BBAE84(arg0, 4, 0U);
                arg0->unk2B6 |= 4;
            }
            arg0->actionFunc = func_80BBB8AC;
            return;
        }
        if (temp_v0 < 0) {
            if ((gSaveContext.weekEventReg[39] & 8) != 0) {
                func_80151938(arg1, 0x1241U);
            } else {
                func_80151938(arg1, 0x1237U);
                gSaveContext.weekEventReg[39] |= 8;
                func_80BBAE84(arg0, 4, 0U);
                arg0->unk2B6 |= 4;
            }
            arg0->actionFunc = func_80BBB8AC;
        }
        // Duplicate return node #13. Try simplifying control flow for better match
    }
}

void func_80BBB8AC(EnZos *arg0, GlobalContext *arg1) {
    Actor *sp30;
    void *sp2C;
    s16 temp_v1;
    u16 temp_v1_2;
    void *temp_v0;

    sp30 = arg1->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(&arg0->unk21C);
    if ((arg0->unk2B6 & 0x10) == 0) {
        Math_SmoothStepToS(&arg0->actor.shape.rot.y, arg0->actor.yawTowardsPlayer, 2, 0x1000, (s16) 0x200);
        temp_v1 = arg0->actor.shape.rot.y;
        arg0->actor.world.rot.y = temp_v1;
        if (((arg0->unk2B6 & 0x80) != 0) && (temp_v1 == arg0->actor.yawTowardsPlayer)) {
            func_80BBAE84(arg0, 3, 0U);
        }
    }
    if ((func_80152498(&arg1->msgCtx) == 5) && (func_80147624(arg1) != 0)) {
        temp_v0 = arg1 + 0x10000;
        temp_v1_2 = arg1->msgCtx.unk11F04;
        switch (temp_v1_2) {
        case 4663:
            sp30->unkA87 = 0;
            // fallthrough
        case 4664:
        case 4666:
        case 4667:
        case 4668:
        case 4670:
        case 4671:
            func_80151938(arg1, (arg1->msgCtx.unk11F04 + 1) & 0xFFFF);
            return;
        case 4676:
            arg0->unk2B6 &= 0xFFEF;
            sp2C = temp_v0;
            func_80BBAE84(arg0, 6, 0U, (EnZos *) arg1);
            func_80151938(arg1, (arg1->msgCtx.unk11F04 + 1) & 0xFFFF);
            return;
        case 4658:
        case 4673:
            sp30->unkA87 = 0;
            // fallthrough
        case 4665:
        case 4678:
            sp2C = temp_v0;
            func_80BBAE84(arg0, 6, 0U, (EnZos *) arg1);
            func_80151938(arg1, (arg1->msgCtx.unk11F04 + 1) & 0xFFFF);
            return;
        case 4659:
            sp2C = temp_v0;
            func_80BBAE84(arg0, 5, 0U, (EnZos *) arg1);
            func_80151938(arg1, (arg1->msgCtx.unk11F04 + 1) & 0xFFFF);
            return;
        case 4677:
        case 4680:
            sp2C = temp_v0;
            func_80BBAE84(arg0, 3, 0U, (EnZos *) arg1);
            func_80151938(arg1, (arg1->msgCtx.unk11F04 + 1) & 0xFFFF);
            return;
        case 4657:
            func_80151938(arg1, 0xFFU);
            arg0->actionFunc = func_80BBB718;
            return;
        case 4675:
        case 4681:
            func_80BBAE84(arg0, 2, 0U, (EnZos *) arg1);
            func_801477B4(arg1);
            arg0->actionFunc = func_80BBBDE0;
            arg0->unk2B6 |= 1;
            return;
        case 4660:
        case 4669:
        case 4674:
            func_80BBAE84(arg0, 2, 0U, (EnZos *) arg1);
            func_800B84D0(&arg0->actor, arg1);
            func_801477B4(arg1);
            arg0->actionFunc = func_80BBBDE0;
            arg0->unk2B6 |= 1;
            return;
        case 4662:
            func_80BBAE84(arg0, 2, 0U, (EnZos *) arg1);
            func_801477B4(arg1);
            arg0->actionFunc = func_80BBBDE0;
            arg0->unk2B6 |= 1;
            return;
        default:
            func_801477B4(arg1);
            arg0->actionFunc = func_80BBBDE0;
            arg0->unk2B6 |= 1;
            // Duplicate return node #20. Try simplifying control flow for better match
            return;
        }
    }
}

void func_80BBBB84(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a1;
    u8 temp_v0;

    temp_a1 = arg1;
    arg1 = arg1;
    if (func_800B84D0(arg0, temp_a1) != 0) {
        arg0->flags &= 0xFFFEFFFF;
        if (gSaveContext.playerForm == 2) {
            func_801518B0(arg1, 0x1248U, arg0);
            arg0->unk2C0 = func_80BBB8AC;
            func_80BBAE84((EnZos *) arg0, 6, 0U);
            arg0->unk2B6 = (u16) (arg0->unk2B6 | 2);
            return;
        }
        temp_v0 = gSaveContext.weekEventReg[41];
        if ((temp_v0 & 0x10) != 0) {
            func_801518B0(arg1, 0x124AU, arg0);
            arg0->unk2C0 = func_80BBB8AC;
            func_80BBAE84((EnZos *) arg0, 6, 0U);
            return;
        }
        gSaveContext.weekEventReg[41] = temp_v0 | 0x10;
        func_801518B0(arg1, 0x124BU, arg0);
        arg0->unk2C0 = func_80BBB574;
        func_80BBAE84((EnZos *) arg0, 9, 2U);
        arg0->unk2B6 = (u16) (arg0->unk2B6 | 0x10);
        return;
    }
    func_800B8614(arg0, arg1, 300.0f);
}

void func_80BBBCBC(Actor *arg0, GlobalContext *arg1) {
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->flags &= 0xFFFEFFFF;
        func_80BBAE84((EnZos *) arg0, 5, 0U);
        func_801518B0(arg1, 0x124DU, arg0);
        arg0->unk2C0 = func_80BBB574;
        return;
    }
    func_800B8500(arg0, arg1, 1000.0f, 1000.0f, -1);
}

void func_80BBBD5C(EnZos *arg0, GlobalContext *arg1) {
    func_80BBB414(arg0, arg1);
    if (func_800EE29C(arg1, 0x1F5U) == 0) {
        arg0->actionFunc = (void (*)(EnZos *, GlobalContext *)) func_80BBBCBC;
        arg0->actor.flags |= 0x10000;
        func_800B8500(&arg0->actor, arg1, 1000.0f, 1000.0f, -1);
    }
}

void func_80BBBDE0(EnZos *arg0, GlobalContext *arg1) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 *temp_a1;

    if ((arg0->unk2B6 & 1) != 0) {
        Math_SmoothStepToS(&arg0->actor.shape.rot.y, arg0->actor.home.rot.y, 2, 0x1000, (s16) 0x200);
        arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
        if (arg0->actor.shape.rot.y == arg0->actor.home.rot.y) {
            func_80BBAE84(arg0, 0, 2U);
            arg0->unk2B6 &= 0xFFFE;
        }
    }
    func_80BBB0D4(arg0, arg1);
    if (arg1->msgCtx.unk1202A == 0x2A) {
        arg1->msgCtx.unk1202A = 4;
        arg0->actionFunc = (void (*)(EnZos *, GlobalContext *)) func_80BBBB84;
        arg0->actor.flags |= 0x10000;
        func_800B8614(&arg0->actor, arg1, 120.0f);
        return;
    }
    if (func_800B84D0(&arg0->actor, arg1) != 0) {
        arg0->actionFunc = func_80BBB8AC;
        func_80BBB15C(arg0, arg1);
    } else if (func_800EE29C(arg1, 0x1F5U) != 0) {
        arg0->actionFunc = func_80BBBD5C;
    } else if (func_80BBAF5C(&arg0->actor, arg1) != 0) {
        func_800B8614(&arg0->actor, arg1, 120.0f);
    }
    if ((Actor_IsActorFacingLink(&arg0->actor, 0x4000) == 0) && (arg0->actor.xzDistToPlayer < 100.0f)) {
        gSaveContext.weekEventReg[52] |= 0x10;
    } else {
        gSaveContext.weekEventReg[52] &= 0xEF;
    }
    temp_a1 = &sp28;
    sp28 = arg0->actor.projectedPos.x;
    sp2C = arg0->actor.projectedPos.y;
    sp30 = arg0->actor.projectedPos.z;
    func_801A1FB4(3, temp_a1, 0x6E, 0x447A0000);
}

void func_80BBBFBC(EnZos *arg0, GlobalContext *arg1) {
    u16 sp1E;
    u8 temp_v0;
    u16 phi_a3;

    if (gSaveContext.playerForm == 2) {
        if ((gSaveContext.weekEventReg[79] & 1) != 0) {
            phi_a3 = 0x125BU;
        } else {
            temp_v0 = gSaveContext.weekEventReg[78];
            phi_a3 = 0x1259U;
            if ((temp_v0 & 0x80) != 0) {
                phi_a3 = 0x125AU;
            } else {
                gSaveContext.weekEventReg[78] = temp_v0 | 0x80;
            }
        }
        sp1E = phi_a3;
        func_80BBAE84(arg0, 5, 0U, (EnZos *) phi_a3);
    } else {
        sp1E = 0x1258;
        func_80BBAE84(arg0, 6, 0U, (EnZos *) 0x1258U);
    }
    func_801518B0(arg1, sp1E & 0xFFFF, &arg0->actor);
}

void func_80BBC070(EnZos *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x21C);
    Math_SmoothStepToS(arg0 + 0xBE, arg0->actor.yawTowardsPlayer, 2, 0x1000, (s16) 0x200);
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    temp_v0 = func_80152498(arg1 + 0x4908);
    if (temp_v0 != 2) {
        if ((temp_v0 == 5) && (func_80147624(arg1) != 0)) {
            func_80BBAE84(arg0, 2, 0U);
            func_801477B4(arg1);
            arg0->actionFunc = func_80BBC14C;
            arg0->unk2B6 |= 1;
            return;
        }
        // Duplicate return node #5. Try simplifying control flow for better match
        return;
    }
    func_80BBAE84(arg0, 2, 0U);
    arg0->actionFunc = func_80BBC14C;
    arg0->unk2B6 |= 1;
}

void func_80BBC14C(EnZos *arg0, GlobalContext *arg1) {
    if ((arg0->unk2B6 & 1) != 0) {
        Math_SmoothStepToS(&arg0->actor.shape.rot.y, arg0->actor.home.rot.y, 2, 0x1000, (s16) 0x200);
        arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
        if (arg0->actor.shape.rot.y == arg0->actor.home.rot.y) {
            func_80BBAE84(arg0, 0, 2U);
            arg0->unk2B6 &= 0xFFFE;
        }
    }
    func_80BBB0D4(arg0, arg1);
    if (func_800B84D0(&arg0->actor, arg1) != 0) {
        arg0->actionFunc = func_80BBC070;
        func_80BBBFBC(arg0, arg1);
        return;
    }
    if (func_80BBAF5C(&arg0->actor, arg1) != 0) {
        func_800B8614(&arg0->actor, arg1, 120.0f);
    }
}

void func_80BBC22C(void) {
    func_80BBAFFC();
}

void func_80BBC24C(EnZos *arg0, GlobalContext *arg1) {
    func_80BBB0D4();
    if ((gSaveContext.weekEventReg[79] & 1) != 0) {
        arg0->actionFunc = func_80BBC22C;
        func_80BBAE84(arg0, 7, 2U);
    }
}

void func_80BBC298(EnZos *arg0, GlobalContext *arg1) {
    EnZos *temp_a0;
    EnZos *temp_a2;
    s16 temp_v1;

    temp_a2 = arg0;
    temp_a0 = temp_a2;
    arg0 = temp_a2;
    func_80BBAFFC(temp_a0, arg1, temp_a2);
    temp_v1 = arg0->unk2BC;
    if ((s32) temp_v1 < 0x31F) {
        arg0->unk2BC = temp_v1 + 0xC8;
    } else {
        arg0->unk2BC = temp_v1 + 0x1E;
    }
    if ((s32) arg0->unk2BC >= 0x3E8) {
        arg0->unk2BC = 0x3E7;
    }
    arg0 = arg0;
    if (func_800EE29C(arg1, 0x203U) != 0) {
        arg0 = arg0;
        if (arg1->csCtx.npcActions[func_800EE200(arg1, 0x203U)]->unk0 == 1) {
            arg0->actionFunc = func_80BBC37C;
            arg0->unk2BC = -1;
            return;
        }
        // Duplicate return node #9. Try simplifying control flow for better match
        return;
    }
    arg0->actionFunc = func_80BBC37C;
    arg0->unk2BC = -1;
}

void func_80BBC37C(EnZos *arg0, GlobalContext *arg1) {
    func_80BBAFFC(arg0, arg1);
    if ((func_800EE29C(arg1, 0x203U) != 0) && (arg1->csCtx.npcActions[func_800EE200(arg1, 0x203U)]->unk0 == 3)) {
        arg0->actionFunc = func_80BBC298;
    }
}

void EnZos_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnZos *this = (EnZos *) thisx;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a2;
    s16 temp_v1;
    s16 phi_v0;
    s16 phi_v1;

    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    temp_a2 = &this->unk260;
    sp28 = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 10.0f, 10.0f, 30.0f, 4U);
    this->actionFunc(this, globalCtx);
    temp_v1 = this->unk2AE;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        this->unk2AE = temp_v1 - 1;
        phi_v0 = this->unk2AE;
    }
    phi_v1 = this->unk2AE;
    if (phi_v0 == 0) {
        this->unk2AE = Rand_S16Offset(0x3C, 0x3C);
        phi_v1 = this->unk2AE;
    }
    this->unk2AC = phi_v1;
    if ((s32) this->unk2AC >= 3) {
        this->unk2AC = 0;
    }
}

s32 func_80BBC4E4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    return 0;
}

void func_80BBC500(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 9) {
        SysMatrix_MultiplyVector3fByState(&D_80BBC750, arg4 + 0x3C);
    }
}

void EnZos_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnZos *this = (EnZos *) thisx;
    Gfx *temp_s0;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s2 = temp_a0;
    func_8012C28C(temp_a0);
    if ((this->unk2B6 & 0x40) != 0) {
        temp_s2->polyOpa.p = Gfx_SetFog(temp_s2->polyOpa.p, 0, 0, 0, 0, (s32) this->unk2BC, 0x3E8);
    }
    temp_s0 = temp_s2->polyOpa.p;
    temp_s0->words.w0 = 0xDB060020;
    temp_s0->words.w1 = Lib_SegmentedToVirtual(*(&D_80BBC75C + (this->unk2AC * 4)));
    SysMatrix_StatePush();
    Matrix_RotateY((s16) (this->actor.home.rot.y - this->actor.shape.rot.y), 1U);
    SysMatrix_InsertTranslation(0.0f, 0.0f, -974.4f, 1);
    temp_s0->unk8 = 0xDA380003;
    temp_s0->unkC = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_s0->unk14 = &D_060136E0;
    temp_s0->unk10 = 0xDE000000;
    temp_s0->unk1C = &D_06013088;
    temp_s0->unk18 = 0xDE000000;
    temp_s2->polyOpa.p = temp_s0 + 0x20;
    SysMatrix_StatePop();
    SkelAnime_DrawSV(globalCtx, this->unk21C.skeleton, this->unk21C.limbDrawTbl, (s32) this->unk21C.dListCount, func_80BBC4E4, func_80BBC500, &this->actor);
    if ((this->unk2B6 & 0x40) != 0) {
        temp_s2->polyOpa.p = func_801660B8(globalCtx, temp_s2->polyOpa.p);
    }
}

