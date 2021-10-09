typedef struct EnPst {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ void (*actionFunc)(EnPst *, GlobalContext *);
    /* 0x18C */ ColliderCylinder unk18C;            /* inferred */
    /* 0x1D8 */ u8 unk1D8;                          /* inferred */
    /* 0x1D9 */ char pad1D9[0x3];                   /* maybe part of unk1D8[4]? */
    /* 0x1DC */ s32 *unk1DC;                        /* inferred */
    /* 0x1E0 */ s32 unk1E0;                         /* inferred */
    /* 0x1E4 */ Vec3s unk1E4;                       /* inferred */
    /* 0x1EA */ char pad1EA[0xC];                   /* maybe part of unk1E4[3]? */
    /* 0x1F6 */ Vec3s unk1F6;                       /* inferred */
    /* 0x1FC */ char pad1FC[0xC];                   /* maybe part of unk1F6[3]? */
    /* 0x208 */ u16 unk208;                         /* inferred */
    /* 0x20A */ char pad20A[0x6];                   /* maybe part of unk208[4]? */
    /* 0x210 */ void *unk210;                       /* inferred */
    /* 0x214 */ s32 unk214;                         /* inferred */
    /* 0x218 */ char pad218[0x4];
    /* 0x21C */ s32 unk21C;                         /* inferred */
} EnPst;                                            /* size = 0x220 */

struct _mips2c_stack_EnPst_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnPst_Draw {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnPst_Init {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnPst_Update {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B2B830 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B2B874 {};              /* size 0x0 */

struct _mips2c_stack_func_80B2B8F4 {};              /* size 0x0 */

struct _mips2c_stack_func_80B2B974 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B2BAA4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2BBFC {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B2BCF8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2BD30 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2BD88 {};              /* size 0x0 */

struct _mips2c_stack_func_80B2BD98 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ u8 sp1C;                             /* inferred */
    /* 0x1D */ char pad1D[0x13];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B2BE54 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B2C11C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void func_80B2B830(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B2B874(Actor *arg0);                     /* static */
s32 func_80B2B8F4(EnPst *arg0);                     /* static */
s32 func_80B2B974(void *arg0, GlobalContext *arg1); /* static */
? *func_80B2BAA4(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B2BBFC(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B2BCF8(s32 arg0, ? arg1, ? arg2);        /* static */
s32 func_80B2BD30(EnPst *arg0, u8 *arg2, u8 *, EnPst *); /* static */
void func_80B2BD88(EnPst *arg0, GlobalContext *arg1); /* static */
s32 func_80B2C11C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
extern FlexSkeletonHeader D_06001A80;
static ? D_80B2C23C;                                /* unable to generate initializer */
static ? D_80B2C288;                                /* unable to generate initializer */
static ? D_80B2C2D4;                                /* unable to generate initializer */
static ? D_80B2C320;                                /* unable to generate initializer */
static ? D_80B2C36C;                                /* unable to generate initializer */
static ? D_80B2C3B8;                                /* unable to generate initializer */
static ? D_80B2C3E8;                                /* unable to generate initializer */
static ? D_80B2C408;                                /* unable to generate initializer */
static ? D_80B2C428;                                /* unable to generate initializer */
static ? D_80B2C448;                                /* unable to generate initializer */
static ? D_80B2C468;                                /* unable to generate initializer */
static ? D_80B2C488;                                /* unable to generate initializer */
static ? D_80B2C490;                                /* unable to generate initializer */
static ColliderCylinderInit D_80B2C4B8 = {
    {1, 0, 0, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0x1C, 0x48, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80B2C4E4 = {1, 0, 0, 0, 0xFF};
static ActorAnimationEntryS D_80B2C4F0 = {(AnimationHeader *)0x6000018, 1.0f, 0, 0xFFFF, 2, 0};
static ? D_80B2C500;                                /* unable to generate initializer */

void func_80B2B830(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x18C;
    sp1C = temp_a2;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, (Collider *) temp_a2);
}

s32 func_80B2B874(Actor *arg0) {
    u16 temp_t6;

    temp_t6 = arg0->params;
    switch (temp_t6) {
    case 0:
        return gSaveContext.weekEventReg[27] & 2;
    case 1:
        return gSaveContext.weekEventReg[27] & 4;
    case 2:
        return gSaveContext.weekEventReg[27] & 8;
    case 3:
        return gSaveContext.weekEventReg[27] & 0x10;
    case 4:
        return gSaveContext.weekEventReg[27] & 0x20;
    default:
        return 0;
    }
}

s32 func_80B2B8F4(EnPst *arg0) {
    u16 temp_t6;

    temp_t6 = arg0->actor.params;
    switch (temp_t6) {
    case 0:
        return gSaveContext.weekEventReg[27] & 0x40;
    case 1:
        return gSaveContext.weekEventReg[27] & 0x80;
    case 2:
        return gSaveContext.weekEventReg[28] & 1;
    case 3:
        return gSaveContext.weekEventReg[28] & 2;
    case 4:
        return gSaveContext.weekEventReg[28] & 4;
    default:
        return 0;
    }
}

s32 func_80B2B974(void *arg0, GlobalContext *arg1) {
    s32 sp18;
    s16 temp_v0;
    s32 temp_v0_3;
    u8 temp_v0_2;
    s32 phi_a3;

    temp_v0 = arg0->unk20E;
    phi_a3 = 0;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {

        } else if (arg0->unk218 == 0x2D) {
            phi_a3 = 1;
        }
    } else {
        arg0 = arg0;
        sp18 = 0;
        temp_v0_2 = func_80152498(arg1 + 0x4908);
        if ((temp_v0_2 != 4) && (temp_v0_2 != 5)) {
            if (temp_v0_2 != 0x10) {

            } else {
                goto block_8;
            }
        } else {
            arg0 = arg0;
            sp18 = 0;
            if (func_80147624(arg1) != 0) {
block_8:
                arg0 = arg0;
                sp18 = 0;
                temp_v0_3 = func_80123810(arg1);
                phi_a3 = 0;
                if ((temp_v0_3 == 0x2D) || (temp_v0_3 == 0x33)) {
                    arg0->unk218 = temp_v0_3;
                    arg0->unk20E = (s16) (arg0->unk20E + 1);
                    phi_a3 = 1;
                } else if (temp_v0_3 < 0) {
                    arg0->unk20E = (s16) (arg0->unk20E + 1);
                    phi_a3 = 3;
                } else if (temp_v0_3 != 0) {
                    arg0->unk20E = (s16) (arg0->unk20E + 1);
                    phi_a3 = 2;
                }
            }
        }
    }
    return phi_a3;
}

? *func_80B2BAA4(Actor *arg0, GlobalContext *arg1) {
    u16 temp_t1;
    u16 temp_t7;
    u16 temp_v0;

    arg0 = arg0;
    if (Player_GetMask(arg1) == 9) {
        return &D_80B2C3B8;
    }
    temp_v0 = arg0->unk208;
    if ((temp_v0 & 0x10) != 0) {
        temp_t7 = arg0->params;
        switch (temp_t7) {                          /* switch 1 */
        case 0:                                     /* switch 1 */
            return &D_80B2C3E8;
        case 1:                                     /* switch 1 */
            return &D_80B2C408;
        case 2:                                     /* switch 1 */
            return &D_80B2C428;
        case 3:                                     /* switch 1 */
            return &D_80B2C448;
        case 4:                                     /* switch 1 */
            return &D_80B2C468;
        default:                                    /* switch 1 */
            goto block_22;
        }
    } else {
        if ((temp_v0 & 0x20) != 0) {
            if (arg0->unk218 == 0x33) {
                return &D_80B2C488;
            }
            return &D_80B2C490;
        }
        temp_t1 = arg0->params;
        arg0->unk210 = func_80B2B974;
        switch (temp_t1) {                          /* switch 2 */
        case 0:                                     /* switch 2 */
            return &D_80B2C23C;
        case 1:                                     /* switch 2 */
            return &D_80B2C288;
        case 2:                                     /* switch 2 */
            return &D_80B2C2D4;
        case 3:                                     /* switch 2 */
            return &D_80B2C320;
        case 4:                                     /* switch 2 */
            return &D_80B2C36C;
        default:                                    /* switch 2 */
block_22:
            return NULL;
        }
    }
}

s32 func_80B2BBFC(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    s32 sp20;
    s8 temp_v0;
    u16 temp_t9;
    void *temp_a2;
    s32 phi_v1;

    temp_a2 = arg1->actorCtx.actorList[2].first;
    phi_v1 = 0;
    if ((arg0->unk208 & 7) != 0) {
        sp20 = 0;
        sp24 = temp_a2;
        phi_v1 = sp20;
        if (func_800B84D0(arg0, arg1) != 0) {
            temp_t9 = arg0->unk208 & ~0x30;
            arg0->unk208 = temp_t9;
            temp_v0 = temp_a2->unkA87;
            if (temp_v0 == 0x2D) {
                arg0->unk208 = (u16) (temp_t9 | 0x10);
                arg0->unk218 = (s32) temp_a2->unkA87;
            } else if (temp_v0 != 0) {
                arg0->unk208 = (u16) (arg0->unk208 | 0x20);
                arg0->unk218 = (s32) temp_a2->unkA87;
            }
            arg0->unk21C = func_80B2B874(arg0);
            func_8013AED4(arg0 + 0x208, 0U, 7U);
            arg0->unk20E = 0;
            arg0->unk210 = 0;
            arg0->unk208 = (u16) (arg0->unk208 | 0x40);
            arg0->unk1DC = func_80B2BAA4(arg0, arg1);
            arg0->unk188 = func_80B2BE54;
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

s32 func_80B2BCF8(s32 arg0, ? arg1, ? arg2) {
    func_8013AED4(arg0 + 0x208, 3U, 7U);
    return 1;
}

s32 func_80B2BD30(EnPst *arg0, u8 *arg2) {
    u8 temp_v0;
    s32 phi_v1;

    arg0->unk208 = 0;
    temp_v0 = *arg2;
    phi_v1 = 0;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {

        } else {
            phi_v1 = 1;
        }
    } else {
        phi_v1 = func_80B2BCF8();
    }
    return phi_v1;
}

void func_80B2BD88(EnPst *arg0, GlobalContext *arg1) {

}

void func_80B2BD98(EnPst *this, GlobalContext *globalCtx) {
    u8 sp1C;
    EnPst *temp_a0;
    EnPst *temp_a3;
    s16 temp_v0;
    EnPst *phi_a3;
    EnPst *phi_a3_2;
    EnPst *phi_a3_3;

    temp_v0 = this->actor.params;
    this = this;
    temp_a3 = this;
    phi_a3 = temp_a3;
    phi_a3_2 = temp_a3;
    if ((func_80133038(globalCtx, *(&D_80B2C500 + (temp_v0 * 4)), (struct_80133038_arg2 *) &sp1C) == 0) || ((temp_a0 = temp_a3, (sp1C != temp_a3->unk1D8)) && (this = temp_a3, phi_a3 = this, phi_a3_2 = this, (func_80B2BD30(temp_a0, (u8 *) globalCtx, &sp1C, temp_a3) == 0)))) {
        phi_a3_2->actor.shape.shadowDraw = NULL;
        phi_a3_2->actor.flags &= -2;
        sp1C = 0;
        phi_a3_3 = phi_a3_2;
    } else {
        phi_a3->actor.shape.shadowDraw = func_800B3FC0;
        phi_a3->actor.flags |= 1;
        phi_a3_3 = phi_a3;
    }
    phi_a3_3->unk1D8 = sp1C;
    func_80B2BD88(phi_a3_3, globalCtx);
}

void func_80B2BE54(EnPst *this, GlobalContext *globalCtx) {
    s32 temp_v0;

    if (func_8010BF58((Actor *) this, globalCtx, this->unk1DC, this->unk210, &this->unk1E0) != 0) {
        if (func_80B2B874((Actor *) this) != this->unk21C) {
            temp_v0 = gSaveContext.day;
            if (temp_v0 != 1) {
                if (temp_v0 != 2) {
                    gSaveContext.weekEventReg[91] |= 8;
                } else if (func_80B2B8F4(this) != 0) {
                    gSaveContext.weekEventReg[91] |= 8;
                } else {
                    gSaveContext.weekEventReg[91] |= 4;
                }
            } else {
                gSaveContext.weekEventReg[91] |= 4;
            }
        }
        func_8013AED4(&this->unk208, 3U, 7U);
        this->unk1E0 = 0;
        this->actionFunc = func_80B2BD98;
    }
}

void EnPst_Init(EnPst *this, GlobalContext *globalCtx) {
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    EnPst *this = (EnPst *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 18.0f);
    temp_a1 = &this->unk144;
    sp30 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06001A80, NULL, &this->unk1E4, &this->unk1F6, 3);
    Collider_InitAndSetCylinder(globalCtx, &this->unk18C, (Actor *) this, &D_80B2C4B8);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80B2C4E4);
    func_8013AED4(&this->unk208, 3U, 7U);
    func_8013BC6C(sp30, &D_80B2C4F0, 0);
    this->actor.targetMode = 0;
    Actor_SetScale((Actor *) this, 0.02f);
    this->actionFunc = func_80B2BD98;
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
}

void EnPst_Destroy(EnPst *this, GlobalContext *globalCtx) {
    EnPst *this = (EnPst *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk18C);
}

void EnPst_Update(EnPst *this, GlobalContext *globalCtx) {
    EnPst *this = (EnPst *) thisx;
    func_80B2BBFC((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    if (this->unk1D8 != 0) {
        if (Actor_IsActorFacingLink((Actor *) this, 0x1FFE) != 0) {
            this->unk214 = 0;
            func_8013C964((Actor *) this, globalCtx, 60.0f, 20.0f, 0, (s16) (this->unk208 & 7));
        }
        Actor_SetHeight((Actor *) this, 20.0f);
        func_80B2B830((Actor *) this, globalCtx);
    }
}

s32 func_80B2C11C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    f32 phi_f14;

    if (arg1 == 2) {
        if ((arg5->unk208 & 0x40) != 0) {
            phi_f14 = -100.0f;
        } else {
            phi_f14 = 0.0f;
        }
        SysMatrix_InsertTranslation(0.0f, phi_f14, 0.0f, 1);
    }
    return 0;
}

void EnPst_Draw(EnPst *this, GlobalContext *globalCtx) {
    EnPst *this = (EnPst *) thisx;
    if (this->unk1D8 != 0) {
        func_8012C28C(globalCtx->state.gfxCtx);
        SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80B2C11C, NULL, (Actor *) this);
    }
}
