typedef struct EnRecepgirl {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ Vec3s unk188;                       /* inferred */
    /* 0x18E */ char pad18E[0x8A];                  /* maybe part of unk188[24]? */
    /* 0x218 */ Vec3s unk218;                       /* inferred */
    /* 0x21E */ char pad21E[0x8A];                  /* maybe part of unk218[24]? */
    /* 0x2A8 */ void (*actionFunc)(EnRecepgirl *, GlobalContext *);
    /* 0x2AC */ u8 unk2AC;                          /* inferred */
    /* 0x2AD */ char pad2AD[0x1];
    /* 0x2AE */ Vec3s unk2AE;                       /* inferred */
} EnRecepgirl;                                      /* size = 0x2B4 */

struct _mips2c_stack_EnRecepgirl_Destroy {};        /* size 0x0 */

struct _mips2c_stack_EnRecepgirl_Draw {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnRecepgirl_Init {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnRecepgirl_Update {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad30[0x10];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80C100DC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C10148 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C1019C {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C10290 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C102D4 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C10558 {};              /* size 0x0 */

struct _mips2c_stack_func_80C10590 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void func_80C100DC(EnRecepgirl *arg0);              /* static */
void func_80C10148(EnRecepgirl *arg0);              /* static */
void func_80C1019C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C10290(Actor *arg0);                    /* static */
void func_80C102D4(EnRecepgirl *arg0, GlobalContext *arg1); /* static */
s32 func_80C10558(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, s16 *arg4, Actor *arg5); /* static */
void func_80C10590(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern AnimationHeader D_06000968;
extern AnimationHeader D_06001384;
extern AnimationHeader D_06009890;
extern AnimationHeader D_0600A280;
extern AnimationHeader D_0600AD98;
extern FlexSkeletonHeader D_06011B60;
static void *D_80C106B0[4] = {(void *)0x600F8F0, (void *)0x600FCF0, (void *)0x60100F0, (void *)0x600FCF0};
static InitChainEntry D_80C106C0[2];                /* unable to generate initializer */
static s32 D_80C106C8 = 0;

void EnRecepgirl_Init(EnRecepgirl *this, GlobalContext *globalCtx) {
    void **temp_s0;
    void **phi_s0;
    EnRecepgirl *this = (EnRecepgirl *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80C106C0);
    ActorShape_Init(&this->actor.shape, -60.0f, NULL, 0.0f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_06011B60, &D_06009890, &this->unk188, &this->unk218, 0x18);
    phi_s0 = D_80C106B0;
    if (D_80C106C8 == 0) {
        do {
            temp_s0 = phi_s0 + 4;
            temp_s0->unk-4 = Lib_SegmentedToVirtual(*phi_s0);
            phi_s0 = temp_s0;
        } while (temp_s0 != D_80C106C0);
        D_80C106C8 = 1;
    }
    this->unk2AC = 2;
    if (Flags_GetSwitch(globalCtx, (s32) this->actor.params) != 0) {
        this->actor.textId = 0x2ADC;
    } else {
        this->actor.textId = 0x2AD9;
    }
    func_80C10148(this);
}

void EnRecepgirl_Destroy(EnRecepgirl *this, GlobalContext *globalCtx) {
    EnRecepgirl *this = (EnRecepgirl *) thisx;

}

void func_80C100DC(EnRecepgirl *arg0) {
    u8 temp_t6;
    u8 temp_v0;

    temp_v0 = arg0->unk2AC;
    temp_t6 = temp_v0 + 1;
    if (temp_v0 != 0) {
        arg0->unk2AC = temp_t6;
        if ((temp_t6 & 0xFF) == 4) {
            arg0->unk2AC = 0;
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return;
    }
    if (Rand_ZeroOne() < 0.02f) {
        arg0->unk2AC += 1;
    }
}

void func_80C10148(EnRecepgirl *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    if (&D_06001384 == arg0->unk144.animCurrentSeg) {
        arg0 = arg0;
        SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_0600AD98, 5.0f);
    }
    arg0->actionFunc = func_80C1019C;
}

void func_80C1019C(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    sp24 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        if (&D_0600A280 == arg0->unk14C) {
            SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_0600AD98, 5.0f);
        } else {
            SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06009890, -4.0f);
        }
    }
    if (func_800B84D0(arg0, arg1) != 0) {
        func_80C10290(arg0);
        return;
    }
    if (Actor_IsActorFacingLink(arg0, 0x2000) != 0) {
        func_800B8614(arg0, arg1, 60.0f);
        if (Player_GetMask(arg1) == 2) {
            arg0->textId = 0x2367;
            return;
        }
        if (Flags_GetSwitch(arg1, (s32) arg0->params) != 0) {
            arg0->textId = 0x2ADC;
            return;
        }
        arg0->textId = 0x2AD9;
        /* Duplicate return node #12. Try simplifying control flow for better match */
    }
}

void func_80C10290(Actor *arg0) {
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_0600A280, -4.0f);
    arg0->unk2A8 = func_80C102D4;
}

void func_80C102D4(EnRecepgirl *arg0, GlobalContext *arg1) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    s32 temp_v0;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u8 temp_v0_2;

    temp_a0 = arg0 + 0x144;
    sp20 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        temp_v0 = arg0->unk144.animCurrentSeg;
        if (&D_0600A280 == temp_v0) {
            SkelAnime_ChangeAnimDefaultRepeat(sp20, &D_06001384);
        } else if (&D_0600AD98 == temp_v0) {
            if (arg0->actor.textId == 0x2ADA) {
                SkelAnime_ChangeAnimTransitionStop(sp20, &D_06000968, 10.0f);
            } else {
                SkelAnime_ChangeAnimTransitionRepeat(sp20, &D_06009890, 10.0f);
            }
        } else if (arg0->actor.textId == 0x2ADA) {
            SkelAnime_ChangeAnimTransitionRepeat(sp20, &D_06009890, 10.0f);
        } else {
            SkelAnime_ChangeAnimTransitionStop(sp20, &D_0600A280, -4.0f);
        }
    }
    temp_v0_2 = func_80152498(arg1 + 0x4908);
    if (temp_v0_2 == 2) {
        arg0->actor.textId = 0x2ADC;
        func_80C10148(arg0);
        return;
    }
    if (((temp_v0_2 & 0xFF) == 5) && (func_80147624(arg1) != 0)) {
        temp_v0_3 = arg0->actor.textId;
        if (temp_v0_3 == 0x2AD9) {
            Actor_SetSwitchFlag(arg1, (s32) arg0->actor.params);
            SkelAnime_ChangeAnimTransitionStop(sp20, &D_0600AD98, 10.0f);
            if ((gSaveContext.weekEventReg[63] & 0x80) != 0) {
                arg0->actor.textId = 0x2ADF;
            } else {
                arg0->actor.textId = 0x2ADA;
            }
        } else if (temp_v0_3 == 0x2ADC) {
            SkelAnime_ChangeAnimTransitionStop(sp20, &D_0600AD98, 10.0f);
            arg0->actor.textId = 0x2ADD;
        } else {
            SkelAnime_ChangeAnimTransitionStop(sp20, &D_06000968, 10.0f);
            temp_v0_4 = arg0->actor.textId;
            if (temp_v0_4 == 0x2ADD) {
                arg0->actor.textId = 0x2ADE;
            } else if (temp_v0_4 == 0x2ADA) {
                arg0->actor.textId = 0x2ADB;
            } else {
                arg0->actor.textId = 0x2AE0;
            }
        }
        func_80151938(arg1, arg0->actor.textId);
    }
}

void EnRecepgirl_Update(EnRecepgirl *this, GlobalContext *globalCtx) {
    ? sp30;
    EnRecepgirl *this = (EnRecepgirl *) thisx;

    this->actionFunc(this, globalCtx);
    func_800E9250(globalCtx, (Actor *) this, &this->unk2AE, (Vec3s *) &sp30, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
    func_80C100DC(this);
}

s32 func_80C10558(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, s16 *arg4, Actor *arg5) {
    if (arg1 == 5) {
        *arg4 += arg5->unk2B0;
    }
    return 0;
}

void func_80C10590(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    if (arg1 == 5) {
        Matrix_RotateY((s16) (0x400 - arg2->unk2AE), 1U);
        SysMatrix_GetStateTranslationAndScaledX(500.0f, arg2 + 0x3C);
    }
}

void EnRecepgirl_Draw(EnRecepgirl *this, GlobalContext *globalCtx) {
    GraphicsContext *sp30;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    EnRecepgirl *this = (EnRecepgirl *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v1 = sp30->polyOpa.p;
    sp30->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDB060020;
    temp_v1->words.w1 = (u32) D_80C106B0[this->unk2AC];
    func_801343C0(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *)) func_80C10558, NULL, func_80C10590, (Actor *) this);
}
