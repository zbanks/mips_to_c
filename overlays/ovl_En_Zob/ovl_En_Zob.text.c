typedef struct EnZob {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ Vec3s unk188;                       /* inferred */
    /* 0x18E */ char pad18E[0x8A];                  /* maybe part of unk188[24]? */
    /* 0x218 */ Vec3s unk218;                       /* inferred */
    /* 0x21E */ char pad21E[0x8A];                  /* maybe part of unk218[24]? */
    /* 0x2A8 */ ColliderCylinder unk2A8;            /* inferred */
    /* 0x2F4 */ u16 unk2F4;                         /* inferred */
    /* 0x2F6 */ Vec3s unk2F6;                       /* inferred */
    /* 0x2FC */ Vec3s unk2FC;                       /* inferred */
    /* 0x302 */ s16 unk302;                         /* inferred */
    /* 0x304 */ s16 unk304;                         /* inferred */
    /* 0x306 */ s16 unk306;                         /* inferred */
    /* 0x308 */ char pad308[0x6];                   /* maybe part of unk306[4]? */
    /* 0x30E */ s16 unk30E;                         /* inferred */
    /* 0x310 */ s16 unk310;                         /* inferred */
    /* 0x312 */ s16 unk312;                         /* inferred */
    /* 0x314 */ void (*actionFunc)(EnZob *, GlobalContext *);
} EnZob;                                            /* size = 0x318 */

struct _mips2c_stack_EnZob_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnZob_Draw {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnZob_Init {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnZob_Update {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ char pad34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B9F7E4 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ AnimationHeaderCommon **sp28;        /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B9F86C {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ SkelAnime *sp1C;                     /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B9FA3C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B9FC0C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B9FC70 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B9FCA0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B9FD24 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B9FDDC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B9FE1C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B9FE5C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B9FF20 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B9FF80 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BA005C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA00BC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BA0318 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA0374 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ char pad28[0x4];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BA0610 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BA06BC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA0728 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BA08E8 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BA09E0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA0A04 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BA0AD8 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BA0BB4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA0C14 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA0CF4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA0F64 {};              /* size 0x0 */

struct _mips2c_stack_func_80BA0FAC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

s32 func_800B8718(EnZob *, GlobalContext *);        /* extern */
? func_800B874C(EnZob *, GlobalContext *, ?, ?);    /* extern */
? func_801A1FB4(?, f32 *, ?, ?);                    /* extern */
void func_80B9F7E4(EnZob *arg0, s16 arg1, u8 arg2, EnZob *); /* static */
void func_80B9F86C(EnZob *arg0, EnZob *);           /* static */
void func_80B9FA3C(EnZob *arg0, GlobalContext *arg1); /* static */
void func_80B9FC0C(EnZob *arg0);                    /* static */
void func_80B9FC70(EnZob *arg0, s16 arg1);          /* static */
void func_80B9FCA0(EnZob *arg0, GlobalContext *arg1); /* static */
void func_80B9FE5C(EnZob *this, GlobalContext *globalCtx); /* static */
void func_80B9FF80(EnZob *this, GlobalContext *globalCtx); /* static */
void func_80BA08E8(EnZob *arg0, GlobalContext *arg1); /* static */
s32 func_80BA0F64(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80BA0FAC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06006998;
extern FlexSkeletonHeader D_06010810;
static ColliderCylinderInit D_80BA10D0 = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x1E, 0x28, 0, {0, 0, 0}},
};
static ? D_80BA10FC;                                /* unable to generate initializer */
static Vec3f D_80BA1120 = {300.0f, 900.0f, 0.0f};

void EnZob_Init(EnZob *this, GlobalContext *globalCtx) {
    SkelAnime *temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s16 phi_s0;
    EnZob *phi_s2;
    s32 phi_s1;
    EnZob *this = (EnZob *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    this->actor.colChkInfo.mass = 0xFF;
    Actor_SetScale((Actor *) this, 0.0115f);
    temp_s0 = &this->unk144;
    SkelAnime_InitSV(globalCtx, temp_s0, &D_06010810, &D_06006998, &this->unk188, &this->unk218, 0x18);
    SkelAnime_ChangeAnimDefaultRepeat(temp_s0, &D_06006998);
    Collider_InitAndSetCylinder(globalCtx, &this->unk2A8, (Actor *) this, &D_80BA10D0);
    this->unk2F4 = 0;
    this->unk30E = -1;
    this->unk310 = 0;
    this->unk302 = 9;
    this->unk304 = 0;
    this->actor.minVelocityY = -4.0f;
    this->actor.gravity = -4.0f;
    func_80B9F7E4(this, 6, 2U);
    this->actionFunc = func_80BA0728;
    this->actor.textId = 0;
    phi_s0 = (s16) this->actor.cutscene;
    phi_s2 = this;
    phi_s1 = 0;
    do {
        phi_s2->unk306 = phi_s0;
        if (phi_s0 != -1) {
            this->actor.cutscene = (s8) phi_s0;
            phi_s0 = ActorCutscene_GetAdditionalCutscene((s16) this->actor.cutscene);
        }
        temp_s1 = phi_s1 + 2;
        phi_s2 += 2;
        phi_s1 = temp_s1;
    } while (temp_s1 != 8);
    temp_v0 = this->actor.params & 0xF;
    this->actor.flags |= 0x2000000;
    this->actor.cutscene = (s8) this->unk306;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if ((gSaveContext.weekEventReg[55] & 0x80) != 0) {
                Actor_MarkForDeath((Actor *) this);
            }
            this->actor.flags |= 0x10;
            /* Duplicate return node #16. Try simplifying control flow for better match */
            return;
        }
        this->actionFunc = func_80BA0CF4;
        this->unk2F4 |= 0x20;
        this->unk312 = -1;
        func_80B9F7E4(this, 0, 2U);
        this->unk304 = 5;
        return;
    }
    if ((gSaveContext.weekEventReg[78] & 1) != 0) {
        this->actionFunc = func_80BA0BB4;
    } else {
        this->actionFunc = func_80BA0AD8;
    }
    if ((gSaveContext.weekEventReg[55] & 0x80) == 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void EnZob_Destroy(EnZob *this, GlobalContext *globalCtx) {
    EnZob *this = (EnZob *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk2A8);
}

void func_80B9F7E4(EnZob *arg0, s16 arg1, u8 arg2) {
    AnimationHeaderCommon **sp28;
    AnimationHeaderCommon **temp_v1;

    temp_v1 = (arg1 * 4) + &D_80BA10FC;
    sp28 = temp_v1;
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_v1, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*temp_v1), (u8) (s32) arg2, -5.0f);
    arg0->unk302 = arg1;
}

void func_80B9F86C(EnZob *arg0) {
    SkelAnime *sp1C;
    SkelAnime *temp_a0;
    u16 temp_t6;

    temp_a0 = arg0 + 0x144;
    sp1C = temp_a0;
    arg0 = arg0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        temp_t6 = arg0->unk304;
        switch (temp_t6) {
        case 0:
            arg0 = arg0;
            if (Rand_ZeroFloat(1.0f) > 0.7f) {
                if (arg0->unk302 == 6) {
                    func_80B9F7E4(arg0, 7, 2U, arg0);
                } else {
                    func_80B9F7E4(arg0, 6, 2U, arg0);
                }
            } else {
                func_80B9F7E4(arg0, arg0->unk302, 2U, arg0);
            }
            break;
        case 1:
            func_80B9F7E4(arg0, 3, 0U, arg0);
            break;
        case 2:
            func_80B9F7E4(arg0, 4, 0U, arg0);
            break;
        case 3:
            func_80B9F7E4(arg0, 5, 0U, arg0);
            break;
        case 4:
            if (arg0->unk302 == 3) {
                func_80B9F7E4(arg0, 0, 0U, arg0);
            } else {
                func_80B9F7E4(arg0, 3, 2U, arg0);
            }
            break;
        case 5:
            arg0 = arg0;
            if (Rand_ZeroFloat(1.0f) < 0.8f) {
                func_80B9F7E4(arg0, arg0->unk302, 2U, arg0);
            } else if (arg0->unk302 == 0) {
                func_80B9F7E4(arg0, 1, 2U, arg0);
            } else {
                func_80B9F7E4(arg0, 0, 2U, arg0);
            }
            break;
        }
        SkelAnime_FrameUpdateMatrix(sp1C);
    }
}

void func_80B9FA3C(EnZob *arg0, GlobalContext *arg1) {
    u16 temp_v0;
    u8 temp_v0_2;
    s32 phi_s1;

    arg0->unk2F4 |= 1;
    if (gSaveContext.playerForm != 2) {
        phi_s1 = 0x11F8;
        if ((gSaveContext.weekEventReg[30] & 2) != 0) {
            phi_s1 = 0x11F9;
        }
        arg0->unk304 = 3;
        func_80B9F7E4(arg0, 5, 0U);
    } else {
        temp_v0 = arg0->unk2F4;
        phi_s1 = 0x1210;
        if ((temp_v0 & 0x10) != 0) {
            arg0->unk304 = 3;
            func_80B9F7E4(arg0, 5, 2U);
        } else {
            phi_s1 = 0x1205;
            if ((gSaveContext.weekEventReg[31] & 8) != 0) {
                arg0->unk304 = 1;
                func_80B9F7E4(arg0, 3, 0U);
            } else if ((temp_v0 & 8) != 0) {
                arg0->unk304 = 3;
                func_80B9F7E4(arg0, 5, 2U);
                phi_s1 = 0x1215;
            } else {
                phi_s1 = 0x1203;
                if ((temp_v0 & 2) != 0) {
                    arg0->unk304 = 1;
                    func_80B9F7E4(arg0, 2, 2U);
                } else {
                    temp_v0_2 = gSaveContext.weekEventReg[30];
                    phi_s1 = 0x11FA;
                    if ((temp_v0_2 & 8) != 0) {
                        arg0->unk304 = 1;
                        func_80B9F7E4(arg0, 2, 2U);
                    } else {
                        phi_s1 = 0x1201;
                        if ((temp_v0_2 & 4) == 0) {
                            gSaveContext.weekEventReg[30] = temp_v0_2 | 4;
                            arg0->unk304 = 1;
                            func_80B9F7E4(arg0, 2, 2U);
                            phi_s1 = 0x11FB;
                        } else {
                            arg0->unk304 = 3;
                            func_80B9F7E4(arg0, 4, 2U);
                        }
                    }
                }
            }
        }
    }
    func_801518B0(arg1, phi_s1 & 0xFFFF, (Actor *) arg0);
}

void func_80B9FC0C(EnZob *arg0) {
    s16 temp_a0;

    if (arg0->unk30E != -1) {
        arg0 = arg0;
        temp_a0 = (arg0 + (arg0->unk30E * 2))->unk306;
        if (ActorCutscene_GetCurrentIndex() == temp_a0) {
            arg0 = arg0;
            ActorCutscene_Stop(temp_a0);
        }
        arg0->unk30E = -1;
    }
}

void func_80B9FC70(EnZob *arg0, s16 arg1) {
    func_80B9FC0C(arg0);
    arg0->unk30E = arg1;
}

void func_80B9FCA0(EnZob *arg0, GlobalContext *arg1) {
    func_801477B4(arg1);
    arg1->msgCtx.unk1202A = 4;
    func_80B9FC0C(arg0);
    arg0->unk2F4 &= 0xFFFE;
    arg0->actionFunc = func_80BA0728;
    arg0->unk304 = 0;
    func_80B9F7E4(arg0, 6, 2U);
    func_800B8718(arg0, arg1);
}

void func_80B9FD24(EnZob *this, GlobalContext *globalCtx) {
    s16 temp_v1;

    func_80B9F86C(this);
    if ((func_800EE29C(globalCtx, 0x1F4U) != 0) && (this->unk30E = -1, temp_v1 = (s16) globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x1F4U)]->unk0, (temp_v1 != this->unk310))) {
        this->unk310 = temp_v1;
        if (temp_v1 != 1) {
            if (temp_v1 != 2) {
                return;
            }
            func_80B9F7E4(this, 7, 0U);
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return;
        }
        func_80B9F7E4(this, 8, 0U);
    }
}

void func_80B9FDDC(EnZob *this, GlobalContext *globalCtx) {
    func_801518B0(globalCtx, 0x120CU, (Actor *) this);
    this->actionFunc = func_80BA00BC;
}

void func_80B9FE1C(EnZob *this, GlobalContext *globalCtx) {
    func_801518B0(globalCtx, 0x1211U, (Actor *) this);
    this->actionFunc = func_80BA00BC;
}

void func_80B9FE5C(EnZob *arg0, GlobalContext *arg1) {
    func_80B9F86C(arg0);
    if (arg1->msgCtx.unk1202A == 3) {
        arg1->msgCtx.unk11F10 = 0;
        arg0->actionFunc = func_80B9FDDC;
        func_80B9FC70(arg0, 0);
        return;
    }
    if (func_80152498(arg1 + 0x4908) == 0xB) {
        arg1->msgCtx.unk11F10 = 0;
        arg0->actionFunc = func_80B9FE1C;
        arg0->unk304 = 3;
        func_80B9F7E4(arg0, 5, 2U);
        func_80B9FC70(arg0, 0);
    }
}

void func_80B9FF20(EnZob *this, GlobalContext *globalCtx) {
    func_80B9F86C(this);
    if (func_80152498(&globalCtx->msgCtx) == 7) {
        func_80152434(globalCtx, 0x42U);
        this->actionFunc = func_80B9FE5C;
        func_80B9FC70(this, 2);
    }
}

void func_80B9FF80(EnZob *arg0, GlobalContext *arg1) {
    func_80B9F86C(arg0);
    if (arg1->msgCtx.unk1202A == 3) {
        arg0->actionFunc = func_80B9FF20;
        arg0->unk304 = 6;
        func_80B9F7E4(arg0, 1, 0U);
        func_80152434(arg1, 0x3EU);
        func_80B9FC70(arg0, 1);
        return;
    }
    if (func_80152498(&arg1->msgCtx) == 0xB) {
        arg1->msgCtx.unk11F10 = 0;
        arg0->actionFunc = func_80B9FE1C;
        arg0->unk304 = 3;
        func_80B9F7E4(arg0, 5, 2U);
        func_80B9FC70(arg0, 0);
    }
}

void func_80BA005C(EnZob *this, GlobalContext *globalCtx) {
    func_80B9F86C(this);
    if (func_80152498(&globalCtx->msgCtx) == 7) {
        func_80152434(globalCtx, 0x41U);
        this->actionFunc = func_80B9FF80;
        func_80B9FC70(this, 2);
    }
}

void func_80BA00BC(EnZob *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    u16 temp_v0_2;
    u8 temp_v0;
    u8 temp_v0_3;

    arg1 = arg1;
    func_80B9F86C(arg0);
    temp_v0 = func_80152498(&arg1->msgCtx);
    if (temp_v0 != 4) {
        temp_a0 = arg1;
        if (temp_v0 != 5) {
            return;
        }
        arg1 = arg1;
        if (func_80147624(temp_a0) != 0) {
            temp_v0_2 = arg1->msgCtx.unk11F04;
            switch (temp_v0_2) {
            case 4616:
            case 4622:
            case 4630:
                func_80151938(arg1, (temp_v0_2 + 1) & 0xFFFF);
                return;
            case 4620:
                arg1->msgCtx.unk11F10 = 0;
                arg0->actionFunc = func_80B9FD24;
                func_80B9F7E4(arg0, 8, 0U, (EnZob *) arg1);
                func_80B9FC70(arg0, 3);
                return;
            case 4621:
            case 4625:
            case 4627:
            case 4631:
                func_80151938(arg1, (temp_v0_2 + 1) & 0xFFFF);
                arg0->unk304 = 3;
                func_80B9F7E4(arg0, 4, 2U);
                return;
            case 4632:
                func_80B9FCA0(arg0, arg1);
                return;
            case 4628:
                arg0->unk2F4 |= 8;
                func_80B9FCA0(arg0, arg1);
                return;
            case 4623:
                gSaveContext.weekEventReg[31] |= 8;
                arg0->unk2F4 |= 0x10;
                func_80B9FCA0(arg0, arg1);
                return;
            case 4617:
                func_80152434(arg1, 0x3DU);
                arg0->unk304 = 4;
                func_80B9F7E4(arg0, 0, 0U);
                arg0->actionFunc = func_80BA005C;
                func_80B9FC70(arg0, 1);
                /* Duplicate return node #19. Try simplifying control flow for better match */
                return;
            }
        } else {
            /* Duplicate return node #19. Try simplifying control flow for better match */
        }
    } else {
        temp_a0_2 = arg1;
        arg1 = arg1;
        if ((func_80147624(temp_a0_2) != 0) && (arg1->msgCtx.unk11F04 == 0x1212)) {
            temp_v0_3 = arg1->msgCtx.choiceIndex;
            if (temp_v0_3 != 0) {
                if (temp_v0_3 == 1) {
                    arg1 = arg1;
                    func_8019F208();
                    func_80151938(arg1, 0x1209U);
                    arg0->unk304 = 1;
                    func_80B9F7E4(arg0, 2, 2U);
                    return;
                }
                /* Duplicate return node #19. Try simplifying control flow for better match */
                return;
            }
            arg1 = arg1;
            func_8019F230();
            func_80151938(arg1, 0x1213U);
            return;
        }
    default:
    }
}

void func_80BA0318(EnZob *this, GlobalContext *globalCtx) {
    func_80152434(globalCtx, 0x3DU);
    this->unk304 = 4;
    func_80B9F7E4(this, 0, 0U);
    this->actionFunc = func_80BA005C;
    func_80B9FC70(this, 1);
}

void func_80BA0374(EnZob *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    void *sp24;
    Actor *temp_t6;
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    GlobalContext *temp_a3;
    u16 temp_t9;
    u16 temp_v1;
    u8 temp_v0;
    u8 temp_v1_2;
    void *temp_v0_2;

    temp_t6 = globalCtx->actorCtx.actorList[2].first;
    globalCtx = globalCtx;
    sp2C = temp_t6;
    func_80B9F86C(this);
    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 != 4) {
        temp_a0 = globalCtx;
        if (temp_v0 != 5) {
            return;
        }
        globalCtx = globalCtx;
        temp_a3 = globalCtx;
        if (func_80147624(temp_a0) != 0) {
            temp_v0_2 = temp_a3 + 0x10000;
            temp_v1 = temp_a3->msgCtx.unk11F04;
            switch (temp_v1) {
            case 4600:
                gSaveContext.weekEventReg[30] |= 2;
                func_80151938(temp_a3, 0x11F9U);
                return;
            case 4601:
                func_801477B4(temp_a3);
                this->actionFunc = func_80BA0728;
                this->unk304 = 0;
                func_80B9F7E4(this, 6, 2U);
                this->unk2F4 &= 0xFFFE;
                return;
            case 4603:
            case 4604:
            case 4607:
            case 4609:
            case 4611:
                func_80151938(temp_a3, (temp_v1 + 1) & 0xFFFF);
                return;
            case 4605:
                this->unk304 = 3;
                globalCtx = temp_a3;
                sp24 = temp_v0_2;
                func_80B9F7E4(this, 4, 2U, (EnZob *) temp_a3);
                func_80151938(globalCtx, (temp_v0_2->unk680C + 1) & 0xFFFF);
                return;
            case 4606:
                this->unk304 = 1;
                globalCtx = temp_a3;
                sp24 = temp_v0_2;
                func_80B9F7E4(this, 3, 0U, (EnZob *) temp_a3);
                func_80151938(globalCtx, (temp_v0_2->unk680C + 1) & 0xFFFF);
                return;
            case 4602:
            case 4608:
            case 4610:
            case 4612:
            case 4614:
            case 4623:
            case 4624:
            case 4629:
                func_801477B4(temp_a3);
                this->actionFunc = func_80BA0728;
                this->unk304 = 0;
                func_80B9F7E4(this, 6, 2U);
                temp_t9 = this->unk2F4 & 0xFFFE;
                this->unk2F4 = temp_t9;
                this->unk2F4 = temp_t9 | 2;
                return;
            case 4615:
                func_801477B4(temp_a3);
                this->actionFunc = func_80BA0318;
                sp2C->unkA90 = this;
                sp2C->unkA74 = (s32) (sp2C->unkA74 | 0x20);
                /* Duplicate return node #20. Try simplifying control flow for better match */
                return;
            }
        } else {
            /* Duplicate return node #20. Try simplifying control flow for better match */
        }
    } else {
        temp_a0_2 = globalCtx;
        globalCtx = globalCtx;
        if ((func_80147624(temp_a0_2) != 0) && (globalCtx->msgCtx.unk11F04 == 0x1205)) {
            temp_v1_2 = globalCtx->msgCtx.choiceIndex;
            if (temp_v1_2 != 0) {
                if (temp_v1_2 != 1) {
                    return;
                }
                globalCtx = globalCtx;
                func_8019F230();
                func_80151938(globalCtx, 0x1206U);
                return;
            }
            globalCtx = globalCtx;
            func_8019F208();
            func_80151938(globalCtx, 0x1207U);
            func_80B9F7E4(this, 2, 2U);
            return;
        }
    default:
    }
}

void func_80BA0610(EnZob *this, GlobalContext *globalCtx) {
    func_80B9F86C(this);
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actor.flags &= 0xFFFEFFFF;
        func_801518B0(globalCtx, 0x120DU, (Actor *) this);
        this->unk304 = 3;
        func_80B9F7E4(this, 5, 2U);
        func_80B9FC70(this, 0);
        this->actionFunc = func_80BA00BC;
        return;
    }
    func_800B8614((Actor *) this, globalCtx, 500.0f);
}

void func_80BA06BC(EnZob *this, GlobalContext *globalCtx) {
    EnZob *temp_a0;

    temp_a0 = this;
    this = this;
    func_80B9FD24(temp_a0, globalCtx);
    if (func_800EE29C(globalCtx, 0x1F4U) == 0) {
        this->actionFunc = func_80BA0610;
        this->actor.flags |= 0x10000;
        func_80BA0610(this, globalCtx);
    }
}

void func_80BA0728(EnZob *this, GlobalContext *globalCtx) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 *temp_a1;
    f32 temp_f0;

    func_80B9F86C(this);
    if (func_800B8718(this, globalCtx) != 0) {
        if (gSaveContext.playerForm == 2) {
            func_801518B0(globalCtx, 0x1208U, NULL);
            gSaveContext.weekEventReg[30] |= 8;
        } else {
            func_801518B0(globalCtx, 0x1216U, NULL);
        }
        this->actionFunc = func_80BA00BC;
        this->unk304 = 1;
        func_80B9F7E4(this, 2, 2U);
        this->unk30E = 0;
        this->unk2F4 |= 1;
    } else if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_80BA0374;
        func_80B9FA3C(this, globalCtx);
    } else if (func_800EE29C(globalCtx, 0x1F4U) != 0) {
        this->actionFunc = func_80BA06BC;
    } else {
        temp_f0 = this->actor.xzDistToPlayer;
        if ((temp_f0 < 180.0f) && (temp_f0 > 60.0f) && (Actor_IsLinkFacingActor((Actor *) this, 0x3000, globalCtx) != 0) && (Actor_IsActorFacingLink((Actor *) this, 0x3000) != 0)) {
            func_800B8614((Actor *) this, globalCtx, 150.0f);
            func_800B874C(this, globalCtx, 0x43480000, 0x43160000);
        }
    }
    temp_a1 = &sp28;
    sp28 = this->actor.projectedPos.x;
    sp2C = this->actor.projectedPos.y;
    sp30 = this->actor.projectedPos.z;
    func_801A1FB4(3, temp_a1, 0x6C, 0x447A0000);
}

void func_80BA08E8(EnZob *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    s32 phi_s1;

    phi_s1 = 0x1254;
    if (gSaveContext.playerForm == 2) {
        phi_s1 = 0x1257;
        if ((gSaveContext.weekEventReg[79] & 1) != 0) {
            arg0->unk304 = 3;
            func_80B9F7E4(arg0, 4, 2U);
        } else {
            temp_v0 = gSaveContext.weekEventReg[78];
            phi_s1 = 0x1255;
            if ((temp_v0 & 0x40) != 0) {
                arg0->unk304 = 1;
                func_80B9F7E4(arg0, 2, 2U);
                phi_s1 = 0x1256;
            } else {
                gSaveContext.weekEventReg[78] = temp_v0 | 0x40;
                arg0->unk304 = 1;
                func_80B9F7E4(arg0, 2, 2U);
            }
        }
    } else {
        arg0->unk304 = 3;
        func_80B9F7E4(arg0, 5, 2U);
    }
    func_801518B0(arg1, phi_s1 & 0xFFFF, (Actor *) arg0);
}

void func_80BA09E0(EnZob *this, GlobalContext *globalCtx) {
    func_80B9F86C();
}

void func_80BA0A04(EnZob *this, GlobalContext *globalCtx) {
    u8 temp_v0;

    func_80B9F86C(this);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 2, 0x1000, (s16) 0x200);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 != 2) {
        if ((temp_v0 == 5) && (func_80147624(globalCtx) != 0)) {
            func_801477B4(globalCtx);
            this->actionFunc = func_80BA0AD8;
            this->unk304 = 0;
            func_80B9F7E4(this, 6, 2U);
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return;
    }
    this->actionFunc = func_80BA0AD8;
    this->unk304 = 0;
    func_80B9F7E4(this, 6, 2U);
}

void func_80BA0AD8(EnZob *this, GlobalContext *globalCtx) {
    s16 temp_a1;

    func_80B9F86C(this);
    temp_a1 = this->actor.home.rot.y;
    if (this->actor.shape.rot.y != temp_a1) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, temp_a1, 2, 0x1000, (s16) 0x200);
        this->actor.world.rot.y = this->actor.shape.rot.y;
    }
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_80BA0A04;
        func_80BA08E8(this, globalCtx);
        return;
    }
    if ((this->actor.xzDistToPlayer < 120.0f) && (Actor_IsLinkFacingActor((Actor *) this, 0x3000, globalCtx) != 0) && (Actor_IsActorFacingLink((Actor *) this, 0x3000) != 0)) {
        func_800B8614((Actor *) this, globalCtx, 120.0f);
    }
}

void func_80BA0BB4(EnZob *this, GlobalContext *globalCtx) {
    func_80B9F86C(this);
    if ((gSaveContext.weekEventReg[79] & 1) != 0) {
        this->actionFunc = func_80BA09E0;
        func_80B9F7E4(this, 0, 2U);
        this->unk304 = 5;
    }
}

void func_80BA0C14(EnZob *this, GlobalContext *globalCtx) {
    EnZob *temp_a0;
    EnZob *temp_a2;
    s16 temp_v0;

    temp_a2 = this;
    temp_a0 = temp_a2;
    this = temp_a2;
    func_80B9F86C(temp_a0, temp_a2);
    temp_v0 = this->unk312;
    if ((s32) temp_v0 < 0x31F) {
        this->unk312 = temp_v0 + 0xC8;
    } else {
        this->unk312 = temp_v0 + 0x1E;
    }
    if ((s32) this->unk312 >= 0x3E8) {
        this->unk312 = 0x3E7;
    }
    this = this;
    if (func_800EE29C(globalCtx, 0x203U) != 0) {
        this = this;
        if (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x203U)]->unk0 == 1) {
            this->actionFunc = func_80BA0CF4;
            this->unk312 = -1;
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    this->actionFunc = func_80BA0CF4;
    this->unk312 = -1;
}

void func_80BA0CF4(EnZob *this, GlobalContext *globalCtx) {
    func_80B9F86C(this);
    if ((func_800EE29C(globalCtx, 0x203U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x203U)]->unk0 == 2)) {
        this->actionFunc = func_80BA0C14;
    }
}

void EnZob_Update(EnZob *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a2;
    EnZob *this = (EnZob *) thisx;

    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    temp_a2 = &this->unk2A8;
    sp30 = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, 10.0f, 10.0f, 4U);
    this->actionFunc(this, globalCtx);
    if ((this->unk30E != -1) && (ActorCutscene_GetCurrentIndex() != (this + (this->unk30E * 2))->unk306)) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay((this + (this->unk30E * 2))->unk306);
        } else if (ActorCutscene_GetCanPlayNext((this + (this->unk30E * 2))->unk306) != 0) {
            ActorCutscene_Start((this + (this->unk30E * 2))->unk306, (Actor *) this);
        } else {
            ActorCutscene_SetIntentToPlay((this + (this->unk30E * 2))->unk306);
        }
    }
    if ((this->unk2F4 & 1) != 0) {
        func_800E9250(globalCtx, (Actor *) this, &this->unk2F6, &this->unk2FC, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
        return;
    }
    Math_SmoothStepToS((s16 *) &this->unk2F6, 0, 6, 0x1838, (s16) 0x64);
    Math_SmoothStepToS(&this->unk2F6.y, 0, 6, 0x1838, (s16) 0x64);
    Math_SmoothStepToS((s16 *) &this->unk2FC, 0, 6, 0x1838, (s16) 0x64);
    Math_SmoothStepToS(&this->unk2FC.y, 0, 6, 0x1838, (s16) 0x64);
}

s32 func_80BA0F64(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 9) {
        arg4->x += arg5->unk2F8;
        arg4->y += arg5->unk2F6;
    }
    return 0;
}

void func_80BA0FAC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 9) {
        SysMatrix_MultiplyVector3fByState(&D_80BA1120, arg4 + 0x3C);
    }
}

void EnZob_Draw(EnZob *this, GlobalContext *globalCtx) {
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    EnZob *this = (EnZob *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    if ((this->unk2F4 & 0x20) != 0) {
        temp_s1->polyOpa.p = Gfx_SetFog(temp_s1->polyOpa.p, 0, 0, 0, 0, (s32) this->unk312, 0x3E8);
    }
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80BA0F64, func_80BA0FAC, (Actor *) this);
    if ((this->unk2F4 & 0x20) != 0) {
        temp_s1->polyOpa.p = func_801660B8(globalCtx, temp_s1->polyOpa.p);
    }
}
