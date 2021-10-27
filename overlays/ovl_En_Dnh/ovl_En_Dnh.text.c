typedef struct EnDnh {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnDnh *, GlobalContext *);
    /* 0x148 */ SkelAnime unk_148;                  /* inferred */
    /* 0x18C */ u16 unk_18C;                        /* inferred */
    /* 0x18E */ char pad_18E[0x2];
    /* 0x190 */ s32 *unk_190;                       /* inferred */
    /* 0x194 */ s32 unk_194;                        /* inferred */
    /* 0x198 */ s16 unk_198;                        /* inferred */
    /* 0x19A */ char pad_19A[0x4];                  /* maybe part of unk_198[3]? */
    /* 0x19E */ s16 unk_19E;                        /* inferred */
    /* 0x1A0 */ void *unk_1A0;                      /* inferred */
    /* 0x1A4 */ Vec3s unk_1A4;                      /* inferred */
    /* 0x1AA */ char pad_1AA[0x6];
    /* 0x1B0 */ Vec3s unk_1B0;                      /* inferred */
    /* 0x1B6 */ char pad_1B6[0x6];
} EnDnh;                                            /* size = 0x1BC */

struct _mips2c_stack_EnDnh_Destroy {};              /* size 0x0 */

struct _mips2c_stack_EnDnh_Draw {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ GraphicsContext *sp28;               /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnDnh_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnDnh_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A50D40 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A50DF8 {};              /* size 0x0 */

struct _mips2c_stack_func_80A50E40 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A50EC0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A50F38 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A50F9C {};              /* size 0x0 */

struct _mips2c_stack_func_80A51168 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? func_80A50D40(Actor *arg0, GlobalContext *arg1);  /* static */
? *func_80A50DF8(Actor *arg0, GlobalContext *arg1); /* static */
? func_80A50E40(Actor *arg0, GlobalContext *arg1);  /* static */
void func_80A50EC0(EnDnh *arg0);                    /* static */
s32 func_80A51168(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
extern SkeletonHeader D_06002950;
static ? D_80A51250;                                /* unable to generate initializer */
static ? D_80A51384;                                /* unable to generate initializer */
static ? D_80A5138C;                                /* unable to generate initializer */
static ActorAnimationEntryS D_80A5142C = {(AnimationHeader *)0x60000A0, 1.0f, 0, 0xFFFF, 0, 0};
static ? D_80A5143C;                                /* unable to generate initializer */

? func_80A50D40(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;

    temp_a0 = arg1;
    arg1 = arg1;
    func_800B7298(temp_a0, arg0, 7U);
    if ((gSaveContext.eventInf[3] & 0x20) != 0) {
        arg1->nextEntranceIndex = 0xC60;
    } else {
        arg1->nextEntranceIndex = 0x8460;
    }
    gSaveContext.nextCutsceneIndex = 0;
    arg1->sceneLoadFlag = 0x14;
    arg1->unk_1887F = 3;
    gSaveContext.nextTransition = 7;
    gSaveContext.weekEventReg[90] &= 0xBF;
    gSaveContext.eventInf[5] &= 0xFE;
    return 1;
}

? *func_80A50DF8(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk_198;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            return &D_80A51250;
        }
        return &D_80A5138C;
    }
    return &D_80A51384;
}

? func_80A50E40(Actor *arg0, GlobalContext *arg1) {
    if (((arg0[1].focus.rot.x & 7) == 0) || (func_800B84D0(arg0, arg1) == 0)) {
        return 0;
    }
    func_8013AED4((u16 *) &arg0[1].focus.rot, 0U, 7U);
    arg0->unk_190 = func_80A50DF8(arg0, arg1);
    arg0->unk_144 = func_80A50F38;
    return 1;
}

void func_80A50EC0(EnDnh *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk_19C;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_19C = temp_v0 - 1;
        phi_v1 = arg0->unk_19C;
    }
    if (phi_v1 == 0) {
        arg0->unk_19E += 1;
        if ((s32) arg0->unk_19E >= 4) {
            arg0 = arg0;
            arg0->unk_19C = Rand_S16Offset(0x1E, 0x1E);
            arg0->unk_19E = 0;
        }
    }
}

void func_80A50F38(EnDnh *this, GlobalContext *globalCtx) {
    if (func_8010BF58((Actor *) this, globalCtx, this->unk_190, this->unk_1A0, &this->unk_194) != 0) {
        func_8013AED4(&this->unk_18C, 3U, 7U);
        this->unk_194 = 0;
        this->unk_198 = 0;
        this->actionFunc = func_80A50F9C;
    }
}

void func_80A50F9C(EnDnh *this, GlobalContext *globalCtx) {

}

void EnDnh_Init(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    EnDnh *this = (EnDnh *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    temp_a1 = &this->unk_148;
    sp30 = temp_a1;
    SkelAnime_Init(globalCtx, temp_a1, &D_06002950, NULL, &this->unk_1A4, &this->unk_1B0, 2);
    func_8013BC6C(sp30, &D_80A5142C, 0);
    this->actor.shape.yOffset = 1100.0f;
    if (gSaveContext.entranceIndex != 0xA810) {
        func_8013AED4(&this->unk_18C, 3U, 7U);
        this->unk_198 = 0;
    } else {
        func_8013AED4(&this->unk_18C, 4U, 7U);
        if ((gSaveContext.eventInf[3] & 0x20) != 0) {
            this->unk_198 = 2;
        } else {
            this->unk_198 = 1;
        }
    }
    if ((gSaveContext.weekEventReg[12] & 8) == 0) {
        this->actor.draw = NULL;
    }
    this->unk_1A0 = (void *) func_80A50D40;
    this->unk_194 = 0;
    this->actionFunc = func_80A50F9C;
}

void EnDnh_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDnh *this = (EnDnh *) thisx;

}

void EnDnh_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnDnh *this = (EnDnh *) thisx;
    func_80A50E40((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    func_80A50EC0(this);
    SkelAnime_FrameUpdateMatrix(&this->unk_148);
    func_8013C964((Actor *) this, globalCtx, 60.0f, 30.0f, 0, (s16) (this->unk_18C & 7));
    Actor_SetHeight((Actor *) this, 26.0f);
}

s32 func_80A51168(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 1) {
        SysMatrix_InsertTranslation(0.0f, arg5->unk_C4, 0.0f, 1);
    }
    return 0;
}

void EnDnh_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp28;
    Gfx *sp20;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;
    EnDnh *this = (EnDnh *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp28 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp28->polyOpa.p;
    sp28->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDB060020;
    sp20 = temp_v0;
    sp20->words.w1 = Lib_SegmentedToVirtual(*(&D_80A5143C + (this->unk_19E * 4)));
    SkelAnime_Draw(globalCtx, this->unk_148.skeleton, this->unk_148.limbDrawTbl, func_80A51168, NULL, (Actor *) this);
}
