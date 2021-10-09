typedef struct EnAnd {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x154 */ f32 unk154;                         /* overlap; inferred */
    /* 0x158 */ char pad158[0x30];                  /* maybe part of unk154[13]? */
    /* 0x188 */ void (*actionFunc)(EnAnd *, GlobalContext *);
    /* 0x18C */ u8 unk18C;                          /* inferred */
    /* 0x18D */ char pad18D[0x2B];                  /* maybe part of unk18C[44]? */
    /* 0x1B8 */ Vec3s unk1B8;                       /* inferred */
    /* 0x1BE */ char pad1BE[0x96];                  /* maybe part of unk1B8[26]? */
    /* 0x254 */ Vec3s unk254;                       /* inferred */
    /* 0x25A */ char pad25A[0x96];                  /* maybe part of unk254[26]? */
    /* 0x2F0 */ u16 unk2F0;                         /* inferred */
    /* 0x2F2 */ char pad2F2[0x10];                  /* maybe part of unk2F0[9]? */
    /* 0x302 */ s16 unk302;                         /* inferred */
    /* 0x304 */ s32 unk304;                         /* inferred */
    /* 0x308 */ s32 unk308;                         /* inferred */
    /* 0x30C */ s32 unk30C;                         /* inferred */
    /* 0x310 */ char pad310[0x4];
} EnAnd;                                            /* size = 0x314 */

struct _mips2c_stack_EnAnd_Destroy {};              /* size 0x0 */

struct _mips2c_stack_EnAnd_Draw {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad3C[0x4];
    /* 0x40 */ GraphicsContext *sp40;               /* inferred */
    /* 0x44 */ char pad44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnAnd_Init {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnAnd_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C18B90 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C18BD8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C18C50 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ u32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad30[0x18];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80C18ED0 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

? func_8013AD9C(s16, s16, void *, void *, s32, s32); /* extern */
s32 func_80C18B90(EnAnd *arg0, s32 arg1, GlobalContext *); /* static */
void func_80C18BD8(EnAnd *arg0);                    /* static */
void func_80C18ED0(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern FlexSkeletonHeader D_0600B380;
static ActorAnimationEntryS D_80C19180[8] = {
    {(AnimationHeader *)0x60000C8, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60122D0, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600DA58, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600FE64, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x601067C, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600EE00, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600F6C4, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6011AFC, 1.0f, 0, 0xFFFF, 2, 0},
};
static ? D_80C19200;                                /* unable to generate initializer */
static void *D_80C19218[2] = {(void *)0x6009DF0, (void *)0x600A1F0};
static ? D_80C19220;                                /* unable to generate initializer */

s32 func_80C18B90(EnAnd *arg0, s32 arg1) {
    s32 phi_v1;

    phi_v1 = 0;
    if (arg1 != arg0->unk304) {
        arg0->unk304 = arg1;
        phi_v1 = func_8013BC6C(arg0 + 0x144, D_80C19180, arg1);
    }
    return phi_v1;
}

void func_80C18BD8(EnAnd *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk300;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk300 = temp_v0 - 1;
        phi_v1 = arg0->unk300;
    }
    if (phi_v1 == 0) {
        arg0->unk302 += 1;
        if ((s32) arg0->unk302 >= 4) {
            arg0 = arg0;
            arg0->unk300 = Rand_S16Offset(0x1E, 0x1E);
            arg0->unk302 = 0;
        }
    }
}

void func_80C18C50(EnAnd *this, GlobalContext *globalCtx) {
    ? sp30;
    u32 sp28;
    GlobalContext *temp_a0;
    s32 temp_t6;
    s32 temp_v0_2;
    u16 temp_v1;
    u32 temp_v0;

    sp30.unk0 = (s32) D_80C19200.unk0;
    sp30.unk4 = (s32) D_80C19200.unk4;
    temp_a0 = globalCtx;
    sp30.unkC = (s32) D_80C19200.unkC;
    sp30.unk8 = (s32) D_80C19200.unk8;
    sp30.unk10 = (s32) D_80C19200.unk10;
    sp30.unk14 = (s32) D_80C19200.unk14;
    if (globalCtx->csCtx.state != 0) {
        if (this->unk30C == 0) {
            this->unk18C = 0xFF;
            this->unk30C = 1;
            this->unk308 = this->unk304;
        }
        globalCtx = globalCtx;
        if (func_800EE29C(temp_a0, 0x235U) != 0) {
            temp_v0 = func_800EE200(globalCtx, 0x235U);
            temp_t6 = temp_v0 * 4;
            sp28 = temp_v0;
            temp_v1 = *(globalCtx + temp_t6)->unk1F4C;
            if ((temp_v1 & 0xFF) != this->unk18C) {
                this->unk18C = (u8) temp_v1;
                func_80C18B90(this, (sp + (temp_v1 * 4))->unk30);
            }
            if (((this->unk18C == 3) || (this->unk18C == 4)) && ((temp_v0_2 = this->unk304, (temp_v0_2 == 3)) || (temp_v0_2 == 5)) && (func_801378B8(&this->unk144, this->unk154) != 0)) {
                func_80C18B90(this, this->unk304 + 1);
            }
            func_800EDF24((Actor *) this, globalCtx, sp28);
            return;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return;
    }
    if (this->unk30C != 0) {
        this->unk30C = 0;
        func_80C18B90(this, this->unk308, globalCtx);
    }
}

void EnAnd_Init(EnAnd *this, GlobalContext *globalCtx) {
    EnAnd *this = (EnAnd *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 14.0f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_0600B380, NULL, &this->unk1B8, &this->unk254, 0x1A);
    this->unk304 = -1;
    func_80C18B90(this, 0);
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.flags &= -2;
    this->unk2F0 |= 8;
    this->actionFunc = func_80C18C50;
}

void EnAnd_Destroy(EnAnd *this, GlobalContext *globalCtx) {
    EnAnd *this = (EnAnd *) thisx;

}

void EnAnd_Update(EnAnd *this, GlobalContext *globalCtx) {
    EnAnd *this = (EnAnd *) thisx;
    this->actionFunc(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    func_80C18BD8(this);
}

void func_80C18ED0(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    u16 temp_v0;
    s32 phi_v1;
    s32 phi_v0;

    temp_v0 = arg2->unk2F0;
    phi_v1 = 1;
    if ((temp_v0 & 8) != 0) {
        phi_v1 = 0;
    }
    phi_v0 = 0;
    phi_v0 = 0;
    if ((temp_v0 & 2) != 0) {
        phi_v0 = 1;
    }
    if (phi_v1 == 0) {

    }
    if (arg1 != 2) {
        if (arg1 == 0x12) {
            func_8013AD9C((s16) (arg2->unk2F6 + arg2->unk2FA + 0x4000), (s16) (arg2->unk2F8 + arg2->unk2FC + arg2->shape.rot.y + 0x4000), arg2 + 0x194, arg2 + 0x1AC, phi_v1, phi_v0);
            SysMatrix_StatePop();
            SysMatrix_InsertTranslation(arg2->unk194, arg2->unk198, arg2->unk19C, 0);
            Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
            Matrix_RotateY(arg2->unk1AE, 1U);
            SysMatrix_InsertXRotation_s(arg2->unk1AC, 1);
            SysMatrix_InsertZRotation_s(arg2->unk1B0, 1);
            SysMatrix_StatePush();
            return;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return;
    }
    func_8013AD9C((s16) (arg2->unk2FA + 0x4000), (s16) (arg2->unk2FC + arg2->shape.rot.y + 0x4000), arg2 + 0x1A0, arg2 + 0x1B2, phi_v1, phi_v0);
    SysMatrix_StatePop();
    SysMatrix_InsertTranslation(arg2->unk1A0, arg2->unk1A4, arg2->unk1A8, 0);
    Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
    Matrix_RotateY(arg2->unk1B4, 1U);
    SysMatrix_InsertXRotation_s(arg2->unk1B2, 1);
    SysMatrix_InsertZRotation_s(arg2->unk1B6, 1);
    SysMatrix_StatePush();
}

void EnAnd_Draw(EnAnd *this, GlobalContext *globalCtx) {
    GraphicsContext *sp40;
    Gfx *sp38;
    Gfx *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    EnAnd *this = (EnAnd *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp40 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp40->polyOpa.p;
    sp40->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp40 = sp40;
    sp38 = temp_v0;
    sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_80C19220 + (this->unk302 * 4)));
    temp_v0_2 = sp40->polyOpa.p;
    sp40->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp34 = temp_v0_2;
    sp34->words.w1 = Lib_SegmentedToVirtual(*D_80C19218);
    func_801343C0(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, NULL, NULL, func_80C18ED0, (Actor *) this);
}
