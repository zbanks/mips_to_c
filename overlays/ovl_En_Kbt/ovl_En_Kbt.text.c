typedef struct EnKbt {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ Vec3s unk188;                       /* inferred */
    /* 0x18E */ char pad18E[0x72];                  /* maybe part of unk188[20]? */
    /* 0x200 */ Vec3s unk200;                       /* inferred */
    /* 0x206 */ char pad206[0x72];                  /* maybe part of unk200[20]? */
    /* 0x278 */ Actor *unk278;                      /* inferred */
    /* 0x27C */ u16 unk27C;                         /* inferred */
    /* 0x27E */ u8 unk27E;                          /* inferred */
    /* 0x27F */ u8 unk27F;                          /* inferred */
    /* 0x280 */ s16 unk280;                         /* inferred */
    /* 0x282 */ s16 unk282;                         /* inferred */
    /* 0x284 */ s16 unk284;                         /* inferred */
    /* 0x286 */ char pad286[0x2];
    /* 0x288 */ void (*actionFunc)(EnKbt *, GlobalContext *);
} EnKbt;                                            /* size = 0x28C */

struct _mips2c_stack_EnKbt_Destroy {};              /* size 0x0 */

struct _mips2c_stack_EnKbt_Draw {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnKbt_Init {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnKbt_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B33E64 {};              /* size 0x0 */

struct _mips2c_stack_func_80B33E8C {};              /* size 0x0 */

struct _mips2c_stack_func_80B33EF0 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ AnimationHeaderCommon **sp30;        /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad38[0x10];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B3403C {};              /* size 0x0 */

struct _mips2c_stack_func_80B34078 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B3415C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B34314 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B34574 {};              /* size 0x0 */

struct _mips2c_stack_func_80B34598 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B349C8 {};              /* size 0x0 */

struct _mips2c_stack_func_80B34A00 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

s32 func_80B33E64(GlobalContext *arg0);             /* static */
s32 func_80B33E8C(GlobalContext *arg0, u16, s32, EnKbt *); /* static */
void func_80B33EF0(EnKbt *arg0, s16 arg1);          /* static */
Actor *func_80B3403C(GlobalContext *arg0);          /* static */
void func_80B34078(EnKbt *arg0);                    /* static */
void func_80B3415C(EnKbt *arg0);                    /* static */
void func_80B34574(EnKbt *arg0);                    /* static */
s32 func_80B349C8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80B34A00(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06004274;
extern FlexSkeletonHeader D_0600DEE8;
static ? D_80B34B40;                                /* unable to generate initializer */
static ? D_80B34B50;                                /* unable to generate initializer */
static Vec3f D_80B34B84 = {500.0f, 500.0f, 0.0f};
static ? D_80B34B90;                                /* unable to generate initializer */
static ? D_80B34B98;                                /* unable to generate initializer */

void EnKbt_Init(EnKbt *this, GlobalContext *globalCtx) {
    EnKbt *this = (EnKbt *) thisx;
    Actor_SetScale((Actor *) this, 0.01f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_0600DEE8, &D_06004274, &this->unk188, &this->unk200, 0x14);
    this->unk27C = 0;
    this->actor.home.rot.z = 0;
    this->unk27E = 4;
    this->unk27F = 0;
    this->unk280 = 0xD;
    this->unk282 = 0xD;
    this->unk278 = func_80B3403C(globalCtx);
    this->unk284 = 0;
    this->actor.textId = 0;
    if (func_80B33E64(globalCtx) != 0) {
        func_80B33EF0(this, 6);
        this->unk282 = 0xB;
        if (func_80B33E8C(globalCtx) != 0) {
            this->actor.textId = 0xC50;
        } else {
            this->actor.textId = 0xC4E;
            this->unk27C |= 1;
        }
        this->actionFunc = func_80B34314;
    } else {
        func_80B33EF0(this, 0);
        this->unk282 = 0;
        this->actionFunc = func_80B34598;
    }
    this->actor.flags &= -2;
}

void EnKbt_Destroy(EnKbt *this, GlobalContext *globalCtx) {
    EnKbt *this = (EnKbt *) thisx;

}

s32 func_80B33E64(GlobalContext *arg0) {
    return *(&gSaveContext.roomInf[0][5] + (arg0->sceneNum * 0x1C)) & 1;
}

s32 func_80B33E8C(GlobalContext *arg0) {
    s32 temp_hi;

    temp_hi = (s32) gSaveContext.day % 5;
    if ((temp_hi == 3) || ((temp_hi == 2) && (((&gSaveContext + (arg0->sceneNum * 0x1C))->unk10C & 2) != 0))) {
        return 1;
    }
    return 0;
}

void func_80B33EF0(EnKbt *arg0, s16 arg1) {
    ? sp38;
    AnimationHeaderCommon **sp30;
    AnimationHeaderCommon **temp_v1;
    AnimationHeaderCommon **temp_v1_2;

    sp38.unk0 = (s32) D_80B34B40.unk0;
    sp38.unk4 = (s32) D_80B34B40.unk4;
    sp38.unk8 = (s32) D_80B34B40.unk8;
    sp38.unkC = (u8) D_80B34B40.unkC;
    if (arg1 != arg0->unk280) {
        if ((s32) arg1 >= 0xC) {
            temp_v1 = (arg1 * 4) + &D_80B34B50;
            sp30 = temp_v1;
            SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_v1, -1.0f, (f32) SkelAnime_GetFrameCount(*temp_v1) - 1.0f, 0.0f, (u8) (s32) (sp + arg1)->unk38, -5.0f);
        } else {
            temp_v1_2 = (arg1 * 4) + &D_80B34B50;
            sp30 = temp_v1_2;
            SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_v1_2, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*temp_v1_2), (u8) (s32) (sp + arg1)->unk38, -5.0f);
        }
        arg0->unk280 = arg1;
    }
}

Actor *func_80B3403C(GlobalContext *arg0) {
    Actor *temp_v1;
    Actor *temp_v1_2;
    Actor *phi_v1;

    temp_v1 = arg0->actorCtx.actorList[4].first;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
loop_1:
        if (phi_v1->id == 0x1FF) {
            return phi_v1;
        }
        temp_v1_2 = phi_v1->next;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 == 0) {
            /* Duplicate return node #4. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_1;
    }
    return NULL;
}

void func_80B34078(EnKbt *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;

    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x144) != 0) {
        temp_v0 = arg0->unk284;
        if ((s32) temp_v0 > 0) {
            arg0->unk284 = temp_v0 - 1;
            return;
        }
        temp_v0_2 = arg0->unk280;
        if (temp_v0_2 != 2) {
            if (temp_v0_2 != 4) {
                if (temp_v0_2 != 0xC) {
                    return;
                }
                func_80B33EF0(arg0, 0);
                goto block_15;
            }
            func_80B33EF0(arg0, 1);
            arg0->unk27E = 2;
            goto block_15;
        }
        temp_v0_3 = arg0->unk282;
        if (temp_v0_3 != 0) {
            if (temp_v0_3 != 5) {
                func_80B33EF0(arg0, 5);
                return;
            }
block_15:
            arg0->actor.home.rot.z = 0;
            /* Duplicate return node #16. Try simplifying control flow for better match */
            return;
        }
        func_80B33EF0(arg0, 0xC);
    }
}

void func_80B3415C(EnKbt *arg0) {
    s16 temp_v0_2;
    s16 temp_v1;
    u16 temp_t0;
    u16 temp_v0;

    temp_v0 = arg0->unk27C;
    if ((temp_v0 & 2) != 0) {
        temp_v1 = arg0->unk284;
        if ((s32) temp_v1 > 0) {
            arg0->unk284 = temp_v1 - 1;
        } else {
            arg0->unk27F = 0;
            arg0->unk282 = 3;
            arg0->unk27C = temp_v0 & 0xFFFD;
        }
    }
    temp_t0 = arg0->unk282;
    switch (temp_t0) {
    case 0:
        temp_v0_2 = arg0->unk280;
        if ((temp_v0_2 != 2) && (temp_v0_2 != 0xC)) {
            func_80B33EF0(NULL);
            return;
        }
    default:
        return;
    case 1:
        func_80B33EF0((EnKbt *)2);
        arg0->unk282 = 0;
        return;
    case 2:
        if (arg0->unk280 != 0xC) {
            func_80B33EF0((EnKbt *)3);
            return;
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
        return;
    case 3:
        if (arg0->unk280 != 1) {
            func_80B33EF0((EnKbt *)4);
            return;
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
        return;
    case 10:
        func_80B33EF0((EnKbt *)0xB);
        return;
    case 4:
        func_80B33EF0((EnKbt *)2);
        arg0->unk282 = 6;
        return;
    case 6:
        if (arg0->unk280 != 2) {
            func_80B33EF0((EnKbt *)5);
            return;
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
        return;
    case 11:
        func_80B33EF0((EnKbt *)6);
        return;
    case 7:
        if (arg0->unk280 != 2) {
            func_80B33EF0((EnKbt *)7);
            return;
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
        return;
    case 8:
        if (arg0->unk280 != 2) {
            func_80B33EF0((EnKbt *)8);
            return;
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
        return;
    case 9:
        if (arg0->unk280 != 2) {
            func_80B33EF0((EnKbt *)9);
            return;
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
        return;
    case 12:
        func_80B33EF0((EnKbt *)0xA);
        /* Duplicate return node #26. Try simplifying control flow for better match */
        return;
    }
}

void func_80B34314(EnKbt *this, GlobalContext *globalCtx) {
    Actor *temp_a2;
    Actor *temp_v0;
    EnKbt *temp_a0;
    EnKbt *temp_a3;
    u16 temp_a1;
    u16 temp_t0;
    u16 temp_v0_2;
    u8 temp_v1;
    u8 phi_v0;
    u8 phi_v0_2;
    u8 phi_v0_3;
    EnKbt *phi_a3;
    EnKbt *phi_a3_2;

    temp_a0 = this;
    this = this;
    func_80B34078(temp_a0);
    temp_a3 = this;
    phi_a3 = temp_a3;
    phi_a3_2 = temp_a3;
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        temp_a3->actionFunc = func_80B34598;
        temp_a2 = temp_a3->unk278;
        this = temp_a3;
        func_800B86C8((Actor *) temp_a3, globalCtx, temp_a2);
        this->unk278->textId = this->actor.textId;
        temp_t0 = this->unk27C & ~4;
        this->unk27C = temp_t0;
        phi_a3_2 = this;
        if (this->actor.textId == 0xC4E) {
            this->unk27C = temp_t0 | 0x10;
        }
    } else if (temp_a3->actor.xzDistToPlayer < 250.0f) {
        temp_v0 = temp_a3->unk278;
        if ((temp_v0 != 0) && (temp_v0->xzDistToPlayer < 250.0f)) {
            temp_a1 = temp_a3->unk27C;
            if ((temp_a1 & 4) != 0) {
                temp_v1 = gSaveContext.playerForm;
                if (temp_v1 == 4) {
                    phi_v0 = temp_v1;
                    if (temp_v1 == 4) {
                        phi_v0 = 0U;
                    }
                    if ((&gSaveContext + (phi_v0 * 4))->unk4C != 0x4D) {
                        phi_v0_2 = temp_v1;
                        if (temp_v1 == 4) {
                            phi_v0_2 = 0U;
                        }
                        if ((&gSaveContext + (phi_v0_2 * 4))->unk4C != 0x4E) {
                            phi_v0_3 = temp_v1;
                            if (temp_v1 == 4) {
                                phi_v0_3 = 0U;
                            }
                            if ((&gSaveContext + (phi_v0_3 * 4))->unk4C != 0x4F) {
                                goto block_17;
                            }
                            goto block_18;
                        }
                        goto block_18;
                    }
block_18:
                    if (((s32) gSaveContext.day % 5) == 3) {
                        temp_a3->actor.textId = 0xC39;
                    } else if ((temp_a1 & 8) != 0) {
                        temp_a3->actor.textId = 0xC3E;
                    } else {
                        temp_a3->actor.textId = 0xC3A;
                    }
                } else {
block_17:
                    temp_a3->actor.textId = 0xC38;
                }
            }
            temp_v0_2 = temp_a3->actor.textId;
            if (temp_v0_2 != 0xC37) {
                if (((temp_v0_2 == 0xC4E) || (temp_v0_2 == 0xC4F) || (temp_v0_2 == 0xC50)) && (gSaveContext.playerForm != 4)) {
                    temp_a3->actor.textId = 0xC37;
                }
            } else if (gSaveContext.playerForm == 4) {
                this = temp_a3;
                phi_a3 = this;
                if (func_80B33E8C(globalCtx, temp_a1, 4, temp_a3) != 0) {
                    this->actor.textId = 0xC50;
                } else {
                    this->actor.textId = 0xC4E;
                }
            }
            this = phi_a3;
            func_800B8614((Actor *) phi_a3, globalCtx, 260.0f);
            phi_a3_2 = this;
        }
    }
    func_80B3415C(phi_a3_2);
}

void func_80B34574(EnKbt *arg0) {
    arg0->unk27E = 0;
    arg0->unk27F = 0;
    arg0->unk282 = 6;
    arg0->actionFunc = func_80B34314;
}

void func_80B34598(EnKbt *this, GlobalContext *globalCtx) {
    u16 temp_t2;
    u16 temp_v0;
    s16 phi_t9;

    func_80B34078(this);
    temp_v0 = this->actor.textId;
    if ((s32) temp_v0 >= 9) {
        switch (temp_v0) {                          /* switch 1 */
        case 3102:                                  /* switch 1 */
            this->unk27E = 2;
            this->unk27F = 1;
            break;
        case 3103:                                  /* switch 1 */
        case 3118:                                  /* switch 1 */
            this->unk27E = 2;
            this->unk27F = 1;
            this->unk282 = 1;
            this->unk284 = 0x14;
            break;
        case 3104:                                  /* switch 1 */
        case 3107:                                  /* switch 1 */
        case 3119:                                  /* switch 1 */
            this->unk27E = 0;
            this->unk282 = 2;
            break;
        case 3105:                                  /* switch 1 */
        case 3113:                                  /* switch 1 */
            this->unk284 = 0xA;
            this->unk27C |= 2;
            break;
        case 3106:                                  /* switch 1 */
        case 3114:                                  /* switch 1 */
            this->unk27F = 1;
            break;
        case 3116:                                  /* switch 1 */
            this->unk27E = 0;
            this->unk27F = 0;
            this->unk282 = 2;
            break;
        case 3121:                                  /* switch 1 */
            this->unk27E = 2;
            this->unk27F = 1;
            phi_t9 = 4;
block_45:
            this->unk282 = phi_t9;
            break;
        case 3122:                                  /* switch 1 */
            this->unk27E = 1;
            this->unk282 = 7;
            break;
        case 3124:                                  /* switch 1 */
            this->unk27E = 0;
            this->unk282 = 8;
            break;
        case 3125:                                  /* switch 1 */
            this->unk27E = 4;
            this->unk27F = 0;
            func_80B33EF0(this, 2);
            this->unk282 = 5;
            break;
        case 3126:                                  /* switch 1 */
            this->unk27E = 1;
            this->unk27F = 1;
            func_80B33EF0(this, 7);
            this->unk282 = 7;
            break;
        case 3127:                                  /* switch 1 */
            func_80B33EF0(this, 0xA);
            this->unk27E = 0;
            this->unk27F = 1;
            break;
        case 3128:                                  /* switch 1 */
        case 3129:                                  /* switch 1 */
            func_80B33EF0(this, 7);
            this->unk27E = 0;
            this->unk27F = 1;
            break;
        case 3130:                                  /* switch 1 */
        case 3149:                                  /* switch 1 */
        case 3160:                                  /* switch 1 */
            this->unk27E = 0;
            this->unk27F = 1;
            this->unk282 = 8;
            break;
        case 3132:                                  /* switch 1 */
        case 3159:                                  /* switch 1 */
            this->unk27E = 1;
            this->unk282 = 7;
            break;
        case 3133:                                  /* switch 1 */
            this->unk27E = 0;
            break;
        case 3134:                                  /* switch 1 */
            this->unk27F = 1;
            this->unk282 = 8;
            break;
        case 3135:                                  /* switch 1 */
        case 3143:                                  /* switch 1 */
        case 3148:                                  /* switch 1 */
            this->unk27E = 1;
            this->unk27F = 1;
            this->unk282 = 7;
            break;
        case 3136:                                  /* switch 1 */
            this->unk27E = 3;
            this->unk282 = 6;
            break;
        case 3141:                                  /* switch 1 */
        case 3147:                                  /* switch 1 */
        case 3158:                                  /* switch 1 */
            this->unk27E = 0;
            this->unk27F = 1;
            this->unk282 = 7;
            break;
        case 3142:                                  /* switch 1 */
            this->unk27E = 1;
            this->unk27F = 1;
            this->unk282 = 9;
            break;
        case 3144:                                  /* switch 1 */
            this->unk27E = 2;
            this->unk27F = 0;
            this->unk282 = 0xA;
            break;
        case 3145:                                  /* switch 1 */
            this->unk27F = 1;
            break;
        case 3146:                                  /* switch 1 */
            this->unk27E = 0;
            this->unk282 = 7;
            break;
        case 3150:                                  /* switch 1 */
            this->unk27E = 1;
            this->unk27F = 1;
            this->unk282 = 0xC;
            break;
        case 3151:                                  /* switch 1 */
            this->unk27E = 2;
            this->unk27F = 1;
            this->unk282 = 0xC;
            break;
        case 3152:                                  /* switch 1 */
            this->unk27E = 0;
            this->unk27F = 1;
            phi_t9 = 0xC;
            goto block_45;
        }
        goto block_46;
    }
    switch (temp_v0) {                              /* switch 2 */
    case 1:                                         /* switch 2 */
        this->unk27E = 4;
        this->unk27F = 0;
        this->unk282 = 0;
    default:                                        /* switch 2 */
block_46:
        this->actor.textId = 0;
        func_80B3415C(this);
        return;
    case 2:                                         /* switch 2 */
        func_80B34574(this);
        this->actor.textId = 0xC3E;
        temp_t2 = this->unk27C | 4;
        this->unk27C = temp_t2;
        this->unk27C = temp_t2 | 8;
        return;
    case 3:                                         /* switch 2 */
        func_80B34574(this);
        this->actor.textId = 0xC58;
        return;
    case 4:                                         /* switch 2 */
        func_80B34574(this);
        this->actor.textId = 0xC4B;
        return;
    case 5:                                         /* switch 2 */
        this->unk27E = 4;
        this->unk27F = 0;
        this->unk282 = 0;
        func_80B33EF0(this, 0xC);
        goto block_46;
    case 6:                                         /* switch 2 */
        func_80B34574(this);
        this->actor.textId = 0xC3A;
        this->unk27C |= 4;
        return;
    case 7:                                         /* switch 2 */
        this->unk27E = 4;
        this->unk27F = 0;
        this->unk282 = 0xB;
        if (func_80B33E8C(globalCtx) != 0) {
            this->actor.textId = 0xC50;
        } else if ((this->unk27C & 0x10) != 0) {
            this->actor.textId = 0xC4F;
        } else {
            this->actor.textId = 0xC4E;
        }
        this->actionFunc = func_80B34314;
        return;
    case 8:                                         /* switch 2 */
        func_80B34574(this);
        this->actor.textId = 0xC56;
        return;
    }
}

void EnKbt_Update(EnKbt *this, GlobalContext *globalCtx) {
    EnKbt *this = (EnKbt *) thisx;
    this->actionFunc(this, globalCtx);
}

s32 func_80B349C8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (((arg5->unk27C & 1) == 0) && (arg1 == 0xE)) {
        *arg2 = NULL;
    }
    return 0;
}

void func_80B34A00(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 9) {
        SysMatrix_MultiplyVector3fByState(&D_80B34B84, arg4 + 0x3C);
    }
}

void EnKbt_Draw(EnKbt *this, GlobalContext *globalCtx) {
    Gfx *sp38;
    GraphicsContext *sp30;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    EnKbt *this = (EnKbt *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v1 = sp30->polyOpa.p;
    sp38 = temp_v1;
    temp_v0 = Lib_SegmentedToVirtual(*(&D_80B34B98 + (this->unk27E * 4)));
    temp_v1->words.w0 = 0xDB060020;
    temp_v1->words.w1 = (u32) temp_v0;
    sp38 = temp_v1;
    temp_v0_2 = Lib_SegmentedToVirtual(*(&D_80B34B90 + (this->unk27F * 4)));
    temp_v1->unk8 = 0xDB060024;
    temp_v1->unkC = temp_v0_2;
    sp30->polyOpa.p = temp_v1 + 0x10;
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80B349C8, func_80B34A00, (Actor *) this);
}
