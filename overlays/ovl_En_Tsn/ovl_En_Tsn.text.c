typedef struct EnTsn {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ char pad_188[0x8];
    /* 0x190 */ SkelAnime unk_190;                  /* inferred */
    /* 0x1D4 */ void (*actionFunc)(EnTsn *, GlobalContext *);
    /* 0x1D8 */ char pad_1D8[0x48];                 /* maybe part of actionFunc[19]? */
    /* 0x220 */ u16 unk_220;                        /* inferred */
    /* 0x222 */ Vec3s unk_222;                      /* inferred */
    /* 0x228 */ Vec3s unk_228;                      /* inferred */
    /* 0x22E */ s16 unk_22E;                        /* inferred */
    /* 0x230 */ s16 unk_230;                        /* inferred */
    /* 0x232 */ char pad_232[0x2];
} EnTsn;                                            /* size = 0x234 */

struct _mips2c_stack_EnTsn_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTsn_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ GraphicsContext *sp3C;               /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnTsn_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnTsn_Update {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80ADFCA0 {};              /* size 0x0 */

struct _mips2c_stack_func_80ADFCEC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ADFF84 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE0010 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AE0304 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AE0418 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE0460 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AE04C4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE04FC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AE0698 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE0704 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ char pad_30[0xC];                    /* maybe part of sp2C[4]? */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80AE0C88 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE0D10 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE0D78 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE0F84 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE0FA8 {};              /* size 0x0 */

struct _mips2c_stack_func_80AE1024 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ? sp18;                              /* inferred */
    /* 0x18 */ char pad_18[0x10];
};                                                  /* size = 0x28 */

void *func_80ADFCA0(GlobalContext *arg0, Actor *);  /* static */
void func_80ADFCEC(Actor *arg0, GlobalContext *arg1, void (*)(Actor *, Lights *, GlobalContext *)); /* static */
void func_80ADFF84(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AE0010(EnTsn *arg0, GlobalContext *arg1); /* static */
void func_80AE0304(EnTsn *arg0, GlobalContext *arg1); /* static */
void func_80AE0418(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AE0460(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AE04C4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AE04FC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AE0698(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AE0704(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AE0C88(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AE0D10(void *arg0, GlobalContext *arg1); /* static */
void func_80AE0D78(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AE0F84(void *arg0);                     /* static */
s32 func_80AE0FA8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80AE1024(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06000964;
extern AnimationHeader D_06001198;
extern FlexSkeletonHeader D_06008AB8;
extern AnimationHeader D_060092FC;
static ColliderCylinderInit D_80AE1190 = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x1E, 0x28, 0, {0, 0, 0}},
};
static ? D_80AE11BC;                                /* unable to generate initializer */
static ? D_80AE11C8;                                /* unable to generate initializer */

void *func_80ADFCA0(GlobalContext *arg0) {
    void *temp_v1;
    void *temp_v1_2;
    void *phi_v1;

    temp_v1 = arg0->actorCtx.actorList[4].first;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
loop_1:
        if ((phi_v1->id == 0x1C2) && ((phi_v1->params & 0x100) == 0)) {
            return phi_v1;
        }
        temp_v1_2 = phi_v1->next;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 == 0) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_1;
    }
    return NULL;
}

void func_80ADFCEC(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;
    Actor *temp_v0_2;
    s32 temp_v0;

    temp_a2 = arg0;
    temp_v0 = temp_a2->params & 0xF;
    temp_a2->unk_1D4 = func_80AE0C88;
    temp_a2->update = func_80AE0F84;
    temp_a2->destroy = NULL;
    temp_a2->draw = NULL;
    temp_a2->targetMode = 7;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {

        } else if ((gSaveContext.weekEventReg[26] & 4) != 0) {
            temp_a2->textId = 0x1091;
        } else {
            temp_a2->textId = 0x108A;
        }
        goto block_9;
    }
    if ((gSaveContext.weekEventReg[26] & 8) != 0) {
        Actor_MarkForDeath(temp_a2);
        return;
    }
    temp_a2->textId = 0x106E;
block_9:
    if ((gSaveContext.weekEventReg[55] & 0x80) != 0) {
        if ((temp_a2->params & 0xF) == 0) {
            temp_a2->unk_1D4 = func_80AE0D78;
            return;
        }
        Actor_MarkForDeath(temp_a2);
        return;
    }
    arg0 = temp_a2;
    temp_v0_2 = func_80ADFCA0(arg1, temp_a2);
    arg0->unk_1D8 = temp_v0_2;
    arg0->unk_220 = 0;
    if (temp_v0_2 == 0) {
        Actor_MarkForDeath(arg0);
        return;
    }
    if ((arg0->params & 0xF) == 1) {
        func_800BC154(arg1, arg1 + 0x1CA0, arg0, 6U);
    }
}

void EnTsn_Init(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    SkelAnime *temp_a1_2;
    EnTsn *this = (EnTsn *) thisx;

    if ((this->actor.params & 0x100) != 0) {
        func_80ADFCEC((Actor *) this, globalCtx, func_800B3FC0);
        return;
    }
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    temp_a1 = &this->unk_190;
    sp30 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06008AB8, &D_060092FC, NULL, NULL, 0);
    SkelAnime_ChangeAnimDefaultRepeat(sp30, &D_060092FC);
    temp_a1_2 = &this->unk_144;
    sp30 = temp_a1_2;
    Collider_InitCylinder(globalCtx, (ColliderCylinder *) temp_a1_2);
    Collider_SetCylinder(globalCtx, (ColliderCylinder *) temp_a1_2, (Actor *) this, &D_80AE1190);
    this->actor.colChkInfo.mass = 0xFF;
    this->unk_220 = 0;
    this->actionFunc = func_80AE0304;
    this->actor.textId = 0;
    this->actor.minVelocityY = -9.0f;
    this->actor.velocity.y = 0.0f;
    this->actor.gravity = -1.0f;
    if ((gSaveContext.weekEventReg[55] & 0x80) != 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void EnTsn_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTsn *this = (EnTsn *) thisx;
    Collider_DestroyCylinder(globalCtx, (ColliderCylinder *) &this->unk_144);
}

void func_80ADFF84(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u16 phi_a1;

    temp_v0 = gSaveContext.weekEventReg[26];
    if ((temp_v0 & 8) != 0) {
        phi_a1 = 0x107EU;
    } else if (gSaveContext.playerForm == 2) {
        if ((gSaveContext.weekEventReg[25] & 0x80) != 0) {
            phi_a1 = 0x1083U;
        } else {
            phi_a1 = 0x107FU;
        }
    } else {
        phi_a1 = 0x1084U;
        if ((temp_v0 & 1) != 0) {
            phi_a1 = 0x1089U;
        }
    }
    func_801518B0(arg1, phi_a1, arg0);
}

void func_80AE0010(EnTsn *arg0, GlobalContext *arg1) {
    void *sp2C;
    u16 temp_t8;
    u16 temp_v0;

    sp2C = arg1 + 0x10000;
    temp_t8 = arg1->msgCtx.unk11F04;
    switch (temp_t8) {                              /* switch 1 */
    case 4223:                                      /* switch 1 */
    case 4224:                                      /* switch 1 */
    case 4225:                                      /* switch 1 */
    case 4226:                                      /* switch 1 */
    case 4227:                                      /* switch 1 */
    case 4228:                                      /* switch 1 */
    case 4229:                                      /* switch 1 */
    case 4230:                                      /* switch 1 */
    case 4231:                                      /* switch 1 */
    case 4232:                                      /* switch 1 */
    case 4233:                                      /* switch 1 */
    case 4243:                                      /* switch 1 */
        Math_SmoothStepToS(arg0 + 0x32, arg0->actor.yawTowardsPlayer, 6, 0x1838, (s16) 0x64);
        arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
        break;
    }
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        temp_v0 = sp2C->unk_680C;
        switch (temp_v0) {                          /* switch 2 */
        case 4223:                                  /* switch 2 */
        case 4225:                                  /* switch 2 */
            func_80151938(arg1, (temp_v0 + 1) & 0xFFFF);
            return;
        case 4224:                                  /* switch 2 */
            func_80151938(arg1, (temp_v0 + 1) & 0xFFFF);
            SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x190, &D_06001198, -10.0f);
            return;
        case 4226:                                  /* switch 2 */
            SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x190, &D_060092FC, -10.0f);
            gSaveContext.weekEventReg[25] |= 0x80;
            func_801477B4(arg1);
            arg0->actionFunc = func_80AE0304;
block_19:
            arg0->actor.textId = 0;
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return;
        case 4227:                                  /* switch 2 */
            gSaveContext.weekEventReg[25] |= 0x80;
            func_801477B4(arg1);
            arg0->actionFunc = func_80AE0304;
            goto block_19;
        case 4228:                                  /* switch 2 */
            func_80151938(arg1, (temp_v0 + 1) & 0xFFFF);
            SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x190, &D_06000964, -10.0f);
            return;
        case 4229:                                  /* switch 2 */
        case 4230:                                  /* switch 2 */
            func_80151938(arg1, (temp_v0 + 1) & 0xFFFF);
            return;
        case 4233:                                  /* switch 2 */
        case 4243:                                  /* switch 2 */
            gSaveContext.weekEventReg[26] |= 1;
            func_801477B4(arg1);
            SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x190, &D_060092FC, -10.0f);
            arg0->actionFunc = func_80AE0304;
            goto block_19;
        case 4231:                                  /* switch 2 */
            SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x190, &D_06001198, -10.0f);
            func_80151938(arg1, (sp2C->unk_680C + 1) & 0xFFFF);
            return;
        case 4232:                                  /* switch 2 */
            gSaveContext.weekEventReg[26] |= 1;
            if (gSaveContext.inventory.items[gItemSlots[0x34]] == 0x34) {
                func_801477B4(arg1);
                SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x190, &D_060092FC, -10.0f);
                arg0->actionFunc = func_80AE0304;
                goto block_19;
            }
            func_80151938(arg1, 0x1093U);
            SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x190, &D_060092FC, -10.0f);
            return;
        case 4222:                                  /* switch 2 */
            func_801477B4(arg1);
            arg0->actionFunc = func_80AE0304;
            goto block_19;
        }
    } else {
    default:                                        /* switch 2 */
    }
}

void func_80AE0304(EnTsn *arg0, GlobalContext *arg1) {
    if (func_800B84D0((Actor *) arg0, arg1) != 0) {
        arg0->actionFunc = func_80AE0010;
        arg0->unk_220 |= 1;
        if (arg0->actor.textId == 0) {
            func_80ADFF84((Actor *) arg0, arg1);
        }
    } else if ((arg0->actor.xzDistToPlayer < 150.0f) && (Actor_IsLinkFacingActor((Actor *) arg0, 0x3000, arg1) != 0)) {
        func_800B8614((Actor *) arg0, arg1, 160.0f);
        arg0->unk_220 |= 1;
    } else {
        arg0->unk_220 &= 0xFFFE;
    }
    if (arg0->actor.home.rot.z != 0) {
        Math_SmoothStepToS(&arg0->actor.world.rot.y, arg0->actor.yawTowardsPlayer, 6, 0x1838, (s16) 0x64);
    } else {
        Math_SmoothStepToS(&arg0->actor.world.rot.y, arg0->actor.home.rot.y, 6, 0x1838, (s16) 0x64);
    }
    arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
}

void func_80AE0418(Actor *arg0, GlobalContext *arg1) {
    if (func_800B867C(arg0, arg1) != 0) {
        func_801518B0(arg1, 0x107DU, NULL);
        Actor_MarkForDeath(arg0);
    }
}

void func_80AE0460(Actor *arg0, GlobalContext *arg1) {
    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->unk_1D8->unk_18 = 0;
        arg0->unk_1D4 = func_80AE0418;
        return;
    }
    func_800B8A1C(arg0, arg1, 0x95, 2000.0f, 1000.0f);
}

void func_80AE04C4(Actor *arg0, GlobalContext *arg1) {
    if (func_800B867C(arg0, arg1) != 0) {
        arg0->unk_1D4 = func_80AE0C88;
    }
}

void func_80AE04FC(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    void *sp20;
    GlobalContext *temp_a0;
    GlobalContext *temp_a2;
    s32 temp_v0;
    void *temp_v1;

    temp_a2 = arg1;
    temp_v1 = temp_a2->actorCtx.actorList[2].first;
    arg1 = temp_a2;
    sp20 = temp_v1;
    if (func_80152498(temp_a2 + 0x4908) == 0x10) {
        temp_a0 = arg1;
        sp20 = temp_v1;
        arg1 = arg1;
        temp_v0 = func_80123810(temp_a0);
        if (temp_v0 != 0) {
            gSaveContext.weekEventReg[26] = gSaveContext.weekEventReg[26] | 2;
        }
        if (temp_v0 > 0) {
            sp20 = temp_v1;
            sp24 = temp_v0;
            func_801477B4(arg1);
            arg0->unk_1D4 = func_80AE0704;
            if (temp_v0 == 0x13) {
                if ((*(gBitFlags + 0x64) & gSaveContext.inventory.questItems) != 0) {
                    sp20 = temp_v1;
                    if (func_8013A4C4(9) != 0) {
                        temp_v1->textId = 0x107B;
                        return;
                    }
                    sp20 = temp_v1;
                    if (func_8013A4C4(0xB) != 0) {
                        temp_v1->textId = 0x10A9;
                        return;
                    }
                    temp_v1->textId = 0x1078;
                    arg0->unk_220 = (u16) (arg0->unk_220 | 8);
                    return;
                }
                temp_v1->textId = 0x1078;
                arg0->unk_220 = (u16) (arg0->unk_220 | 8);
                return;
            }
            if (temp_v0 == 0xD) {
                temp_v1->textId = 0x1075;
                return;
            }
            temp_v1->textId = 0x1078;
            arg0->unk_220 = (u16) (arg0->unk_220 | 8);
            return;
        }
        if (temp_v0 < 0) {
            func_80151938(arg1, 0x1078U);
            SkelAnime_ChangeAnimTransitionRepeat(arg0->unk_1D8 + 0x190, &D_06001198, -10.0f);
            arg0->unk_1D4 = func_80AE0704;
        }
        /* Duplicate return node #17. Try simplifying control flow for better match */
    }
}

void func_80AE0698(Actor *arg0, GlobalContext *arg1) {
    arg0 = arg0;
    func_801477B4(arg1);
    arg0->focus.pos.x = arg0->world.pos.x;
    arg0->unk_1D4 = func_80AE0C88;
    arg0->unk_220 = (u16) (arg0->unk_220 & 0xFFFD);
    arg0->focus.pos.y = arg0->world.pos.y;
    arg0->focus.pos.z = arg0->world.pos.z;
    ActorCutscene_Stop((s16) arg0->cutscene);
    arg0->unk_1D8->unk_18 = 0;
}

void func_80AE0704(Actor *arg0, GlobalContext *arg1) {
    void *sp3C;
    void *sp2C;
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    u16 temp_v0;
    u16 temp_v1;
    u8 temp_v0_2;
    void *temp_v0_3;
    void *temp_v1_2;

    sp3C = arg1->actorCtx.actorList[2].first;
    temp_v0 = arg0->unk_220;
    if (((temp_v0 & 8) != 0) && (arg1->msgCtx.unk11F04 == 0x1078)) {
        arg0->unk_220 = (u16) (temp_v0 & 0xFFF7);
        arg1 = arg1;
        SkelAnime_ChangeAnimTransitionRepeat(arg0->unk_1D8 + 0x190, &D_06001198, -10.0f);
    }
    arg1 = arg1;
    temp_v0_2 = func_80152498(arg1 + 0x4908);
    if (temp_v0_2 != 2) {
        temp_a0 = arg1;
        if (temp_v0_2 == 5) {
            arg1 = arg1;
            if (func_80147624(temp_a0) != 0) {
                temp_v0_3 = arg1 + 0x10000;
                temp_v1 = arg1->msgCtx.unk11F04;
                switch (temp_v1) {
                case 4206:
                    if ((gSaveContext.weekEventReg[25] & 0x40) != 0) {
                        func_80151938(arg1, 0x1074U);
                    } else {
                        func_80151938(arg1, 0x106FU);
                    }
                    arg0->unk_220 = (u16) (arg0->unk_220 | 2);
                    gSaveContext.weekEventReg[25] |= 0x40;
                    arg0->unk_1D8->unk_18 = 1;
                    arg0->unk_220 = (u16) (arg0->unk_220 | 4);
                    break;
                case 4207:
                case 4208:
                case 4209:
                case 4210:
                    func_80151938(arg1, (temp_v1 + 1) & 0xFFFF);
                    break;
                case 4214:
                case 4217:
                    arg1 = arg1;
                    sp2C = temp_v0_3;
                    SkelAnime_ChangeAnimTransitionRepeat(arg0->unk_1D8 + 0x190, &D_06000964, -10.0f);
                    func_80151938(arg1, (temp_v0_3->unk_680C + 1) & 0xFFFF);
                    break;
                case 4218:
                    func_80151938(arg1, 0x10A6U);
                    break;
                case 4213:
                case 4216:
                    sp3C->unk_A87 = 0;
                    func_80151938(arg1, (temp_v0_3->unk_680C + 1) & 0xFFFF);
                    SkelAnime_ChangeAnimTransitionRepeat(arg0->unk_1D8 + 0x190, &D_060092FC, -10.0f);
                    break;
                case 4220:
                    arg1 = arg1;
                    if (func_80114E90() != 0) {
                        temp_a0_2 = arg1;
                        arg1 = arg1;
                        gSaveContext.weekEventReg[26] |= 8;
                        func_801477B4(temp_a0_2);
                        arg0->unk_1D4 = func_80AE0460;
                        func_80AE0460(arg0, arg1);
                        arg0->focus.pos.x = arg0->world.pos.x;
                        arg0->unk_220 = (u16) (arg0->unk_220 & 0xFFFD);
                        arg0->focus.pos.y = arg0->world.pos.y;
                        arg0->focus.pos.z = arg0->world.pos.z;
                        ActorCutscene_Stop((s16) arg0->cutscene);
                        arg0->flags &= -0x101;
                        gSaveContext.inventory.questItems = (-1 - *(gBitFlags + 0x64)) & gSaveContext.inventory.questItems;
                    } else {
                        func_80151938(arg1, 0x10A8U);
                    }
                    break;
                case 4211:
                case 4212:
                    func_80151938(arg1, 0xFFU);
                    arg0->unk_1D4 = func_80AE04FC;
                    break;
                case 4219:
                    sp3C->unk_A87 = 0;
                    func_80151938(arg1, (temp_v0_3->unk_680C + 1) & 0xFFFF);
                    SkelAnime_ChangeAnimTransitionRepeat(arg0->unk_1D8 + 0x190, &D_060092FC, -10.0f);
                    break;
                case 4215:
                case 4262:
                case 4264:
                    arg1 = arg1;
                    SkelAnime_ChangeAnimTransitionRepeat(arg0->unk_1D8 + 0x190, &D_060092FC, -10.0f);
                    func_80AE0698(arg0, arg1);
                    arg0->flags &= -0x101;
block_30:
                    arg0->unk_1D4 = func_80AE04C4;
                    break;
                case 4234:
                case 4241:
                    gSaveContext.weekEventReg[26] |= 4;
                    func_80151938(arg1, (temp_v0_3->unk_680C + 1) & 0xFFFF);
                    arg0->textId = 0x1091;
                    arg0->unk_220 = (u16) (arg0->unk_220 | 2);
                    break;
                case 4235:
                case 4236:
                case 4237:
                case 4238:
                case 4239:
                    func_80151938(arg1, (temp_v1 + 1) & 0xFFFF);
                    break;
                case 4242:
                    if ((gSaveContext.weekEventReg[26] & 8) != 0) {
                        func_80AE0698(arg0, arg1);
                    } else {
                        func_80151938(arg1, 0x10A7U);
                        SkelAnime_ChangeAnimTransitionRepeat(arg0->unk_1D8 + 0x190, &D_06000964, -10.0f);
                    }
                    break;
                case 4263:
                    arg1 = arg1;
                    SkelAnime_ChangeAnimTransitionRepeat(arg0->unk_1D8 + 0x190, &D_060092FC, -10.0f);
                    func_80AE0698(arg0, arg1);
                    break;
                case 4240:
                    func_80AE0698(arg0, arg1);
                    break;
                case 4265:
                    func_80AE0698(arg0, arg1);
                    arg0->flags &= -0x101;
                    goto block_30;
                }
            }
        }
    }
    if ((arg0->unk_220 & 2) != 0) {
        temp_v1_2 = arg0->unk_1D8;
        if (temp_v1_2 != 0) {
            Math_SmoothStepToF((f32 *) &arg0->focus, temp_v1_2->unk_3C, 0.8f, 100.0f, 5.0f);
            Math_SmoothStepToF(&arg0->focus.pos.y, arg0->unk_1D8->unk_40, 0.8f, 100.0f, 5.0f);
            Math_SmoothStepToF(&arg0->focus.pos.z, arg0->unk_1D8->unk_44, 0.8f, 100.0f, 5.0f);
        }
    }
    if ((arg0->unk_220 & 4) != 0) {
        if (arg0->cutscene == -1) {
            arg0->unk_220 = (u16) (arg0->unk_220 & 0xFFFB);
            return;
        }
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
            return;
        }
        if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
            arg0->unk_220 = (u16) (arg0->unk_220 & 0xFFFB);
            return;
        }
        ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        /* Duplicate return node #42. Try simplifying control flow for better match */
    }
}

void func_80AE0C88(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    if (func_800B84D0(arg0, arg1) != 0) {
        temp_v0 = arg0->textId;
        arg0->unk_1D4 = func_80AE0704;
        if ((temp_v0 == 0x108A) || (temp_v0 == 0x1091)) {
            arg0->unk_220 = (u16) (arg0->unk_220 | 4);
            arg0->unk_1D8->unk_18 = 1;
            return;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return;
    }
    if (arg0->isTargeted != 0) {
        func_800B8614(arg0, arg1, 1000.0f);
    }
}

void func_80AE0D10(void *arg0, GlobalContext *arg1) {
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        func_801477B4(arg1);
        arg0->unk_1D4 = func_80AE0D78;
        ActorCutscene_Stop((s16) arg0->unk_38);
    }
}

void func_80AE0D78(Actor *arg0, GlobalContext *arg1) {
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk_1D4 = func_80AE0D10;
        arg0->unk_220 = (u16) (arg0->unk_220 | 4);
        return;
    }
    if (arg0->isTargeted != 0) {
        func_800B8614(arg0, arg1, 1000.0f);
    }
}

void EnTsn_Update(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp30;
    SkelAnime *temp_a2;
    s16 temp_v1;
    s16 phi_v0;
    s16 phi_v1;
    EnTsn *this = (EnTsn *) thisx;

    this->actionFunc(this, globalCtx);
    temp_a2 = &this->unk_144;
    sp30 = temp_a2;
    Collider_UpdateCylinder((Actor *) this, (ColliderCylinder *) temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 25.0f, 0.0f, 4U);
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    if ((this->unk_220 & 1) != 0) {
        func_800E9250(globalCtx, (Actor *) this, &this->unk_222, &this->unk_228, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
    } else {
        Math_SmoothStepToS((s16 *) &this->unk_222, 0, 6, 0x1838, (s16) 0x64);
        Math_SmoothStepToS(&this->unk_222.y, 0, 6, 0x1838, (s16) 0x64);
        Math_SmoothStepToS((s16 *) &this->unk_228, 0, 6, 0x1838, (s16) 0x64);
        Math_SmoothStepToS(&this->unk_228.y, 0, 6, 0x1838, (s16) 0x64);
    }
    temp_v1 = this->unk_230;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        this->unk_230 = temp_v1 - 1;
        phi_v0 = this->unk_230;
    }
    phi_v1 = this->unk_230;
    if (phi_v0 == 0) {
        this->unk_230 = Rand_S16Offset(0x3C, 0x3C);
        phi_v1 = this->unk_230;
    }
    if ((phi_v1 == 1) || (phi_v1 == 3)) {
        this->unk_22E = 1;
        return;
    }
    this->unk_22E = 0;
}

void func_80AE0F84(Actor *arg0) {
    arg0->unk_1D4();
}

s32 func_80AE0FA8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    s32 temp_v0;

    temp_v0 = (s32) arg5->unk_222 >> 1;
    if (arg1 == 0xF) {
        arg4->x += arg5->unk_224;
        arg4->z += (s16) temp_v0;
    }
    if (arg1 == 8) {
        arg4->x += arg5->unk_22A;
        arg4->z += (s16) temp_v0;
    }
    return 0;
}

void func_80AE1024(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp18;

    sp18.unk_0 = (s32) D_80AE11BC.unk_0;
    sp18.unk_4 = (s32) D_80AE11BC.unk_4;
    sp18.unk_8 = (s32) D_80AE11BC.unk_8;
    if (arg1 == 0xF) {
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp18, arg4 + 0x3C);
    }
}

void EnTsn_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp3C;
    Gfx *sp34;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    EnTsn *this = (EnTsn *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp3C = temp_a0;
    func_8012C5B0(temp_a0);
    temp_v0 = sp3C->polyOpa.p;
    sp3C->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp3C = sp3C;
    sp34 = temp_v0;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_80AE11C8 + (this->unk_22E * 4)));
    temp_v0_2 = sp3C->polyOpa.p;
    sp3C->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp30 = temp_v0_2;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80AE11C8 + (this->unk_22E * 4)));
    SkelAnime_DrawSV(globalCtx, this->unk_190.skeleton, this->unk_190.limbDrawTbl, (s32) this->unk_190.dListCount, func_80AE0FA8, func_80AE1024, (Actor *) this);
}
