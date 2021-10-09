typedef struct BgBreakwall {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad144[0x18];
    /* 0x15C */ s8 unk15C;                          /* inferred */
    /* 0x15D */ s8 unk15D;                          /* inferred */
    /* 0x15E */ char pad15E[0x2];                   /* maybe part of unk15D[3]? */
    /* 0x160 */ void (*actionFunc)(BgBreakwall *, GlobalContext *);
} BgBreakwall;                                      /* size = 0x164 */

struct _mips2c_stack_BgBreakwall_Init {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgBreakwall_SetupAction {};    /* size 0x0 */

struct _mips2c_stack_BgBreakwall_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B736C {};              /* size 0x0 */

struct _mips2c_stack_func_808B7380 {};              /* size 0x0 */

struct _mips2c_stack_func_808B73C4 {};              /* size 0x0 */

struct _mips2c_stack_func_808B73FC {};              /* size 0x0 */

struct _mips2c_stack_func_808B7410 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B7460 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B74A8 {};              /* size 0x0 */

struct _mips2c_stack_func_808B74D8 {};              /* size 0x0 */

struct _mips2c_stack_func_808B751C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B767C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B76CC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808B77D0 {};              /* size 0x0 */

struct _mips2c_stack_func_808B77E0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B782C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808B78A4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B78DC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B7914 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808B7A10 {};              /* size 0x0 */

struct _mips2c_stack_func_808B7A90 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ u8 sp28;                             /* inferred */
    /* 0x29 */ u8 sp29;                             /* inferred */
    /* 0x2A */ u8 sp2A;                             /* inferred */
    /* 0x2B */ char pad2B[0x1];
    /* 0x2C */ u8 sp2C;                             /* inferred */
    /* 0x2D */ u8 sp2D;                             /* inferred */
    /* 0x2E */ u8 sp2E;                             /* inferred */
    /* 0x2F */ char pad2F[0x1];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808B7B54 {
    /* 0x00 */ char pad0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad44[0x8];                     /* maybe part of sp40[3]? */
    /* 0x4C */ u8 sp4C;                             /* inferred */
    /* 0x4D */ u8 sp4D;                             /* inferred */
    /* 0x4E */ u8 sp4E;                             /* inferred */
    /* 0x4F */ char pad4F[0x1];
    /* 0x50 */ u8 sp50;                             /* inferred */
    /* 0x51 */ u8 sp51;                             /* inferred */
    /* 0x52 */ u8 sp52;                             /* inferred */
    /* 0x53 */ char pad53[0x5];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_808B7D34 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ GraphicsContext *sp38;               /* inferred */
    /* 0x3C */ char pad3C[0xC];                     /* maybe part of sp38[4]? */
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ char pad4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_808B7FE4 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad34[0x14];
};                                                  /* size = 0x48 */

? func_800FE7A8(? *, u8 *, void *, void **);        /* extern */
? func_800FEA50(GlobalContext *);                   /* extern */
? func_808B736C(s32 arg0, ? arg1);                  /* static */
? func_808B7380(s32 arg0, ? arg1);                  /* static */
s32 func_808B73C4(s32 arg0, ? arg1);                /* static */
? func_808B73FC(s32 arg0, ? arg1);                  /* static */
? func_808B7410(Actor *arg0, GlobalContext *arg1);  /* static */
? func_808B7460(void *arg0, GlobalContext *arg1);   /* static */
? func_808B74A8(s32 arg0, ? arg1);                  /* static */
? func_808B74D8(s32 arg0, ? arg1);                  /* static */
? func_808B751C(Actor *arg0, GlobalContext *arg1);  /* static */
void func_808B767C(Actor *arg0, GlobalContext *arg1); /* static */
void func_808B76CC(BgBreakwall *, GlobalContext *); /* static */
void func_808B77D0(s32 arg0, ? arg1);               /* static */
void func_808B77E0(void *arg0, GlobalContext *arg1); /* static */
void func_808B782C(void *arg0, GlobalContext *arg1); /* static */
void func_808B78A4(Actor *arg0, ? arg1);            /* static */
void func_808B78DC(Actor *arg0, ? arg1);            /* static */
void func_808B7914(void *arg0, GlobalContext *arg1); /* static */
void func_808B7A10(void *arg0, ? arg1);             /* static */
void func_808B7A90(s32 arg0, void **arg1);          /* static */
void func_808B7B54(s32 arg0, GraphicsContext **arg1); /* static */
void func_808B7D34(void *arg0, GraphicsContext **arg1); /* static */
void func_808B7FE4(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_06000A50;
extern ? D_06000C98;
static ? D_808B8140;                                /* unable to generate initializer */
static InitChainEntry D_808B82E0[4];                /* unable to generate initializer */
static ? D_808B82F0;                                /* unable to generate initializer */
static ? D_808B8300;                                /* unable to generate initializer */
static ? D_808B8310;                                /* unable to generate initializer */
static ? D_808B8320;                                /* unable to generate initializer */
static ? D_808B8330;                                /* unable to generate initializer */
static ? D_808B8340;                                /* unable to generate initializer */

void BgBreakwall_SetupAction(BgBreakwall *this, void (*actionFunc)(BgBreakwall *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

? func_808B736C(s32 arg0, ? arg1) {
    return 1;
}

? func_808B7380(s32 arg0, ? arg1) {
    if ((gSaveContext.day >= 2) && ((gSaveContext.weekEventReg[22] & 1) == 0)) {
        return 0;
    }
    return 1;
}

s32 func_808B73C4(s32 arg0, ? arg1) {
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = (gSaveContext.weekEventReg[33] & 0x80) != 0;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        phi_v0 = (gSaveContext.weekEventReg[21] & 1) != 0;
    }
    return phi_v0;
}

? func_808B73FC(s32 arg0, ? arg1) {
    return 1;
}

? func_808B7410(Actor *arg0, GlobalContext *arg1) {
    u8 temp_a1;

    temp_a1 = arg0->unk15D;
    arg0 = arg0;
    if (Flags_GetSwitch(arg1, (s32) temp_a1) != 0) {
        arg0->draw = NULL;
    }
    Actor_SetScale(arg0, 0.1f);
    return 1;
}

? func_808B7460(void *arg0, GlobalContext *arg1) {
    if (Flags_GetSwitch(arg1, (s32) arg0->unk15D) == 0) {
        arg0->unk58 = 0.1f;
    }
    return 1;
}

? func_808B74A8(s32 arg0, ? arg1) {
    if ((gSaveContext.weekEventReg[55] & 0x80) != 0) {
        return 0;
    }
    return 1;
}

? func_808B74D8(s32 arg0, ? arg1) {
    if (((gSaveContext.weekEventReg[9] & 0x80) == 0) || ((gSaveContext.weekEventReg[23] & 0x20) != 0)) {
        return 0;
    }
    return 1;
}

? func_808B751C(Actor *arg0, GlobalContext *arg1) {
    s32 temp_a1;

    Actor_SetScale(arg0, 0.1f);
    temp_a1 = (s32) (arg0->params & 0xFE00) >> 9;
    if ((temp_a1 != 0x7F) && (Flags_GetSwitch(arg1, temp_a1) == 0)) {
        return 0;
    }
    func_800FEA50(arg1);
    if (gSaveContext.isNight != 0) {
        arg0->unk15E = 0;
        return 1;
    }
    arg0->unk15E = 0xFF;
    return 1;
}

void BgBreakwall_Init(BgBreakwall *this, GlobalContext *globalCtx) {
    void *sp24;
    BgBreakwall *this = (BgBreakwall *) thisx;

    sp24 = ((this->actor.params & 0xF) << 5) + &D_808B8140;
    Actor_ProcessInitChain((Actor *) this, D_808B82E0);
    this->unk15C = Object_GetIndex(&globalCtx->objectCtx, sp24->unk0);
    if (((s32) this->unk15C < 0) || (sp24->unk14(this, globalCtx) == 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    BgBreakwall_SetupAction(this, func_808B76CC);
    this->unk15D = (s8) ((s32) (this->actor.params & 0xFE00) >> 9);
}

void func_808B767C(Actor *arg0, GlobalContext *arg1) {
    if ((((arg0->params & 0xF) << 5) + &D_808B8140)->unk10 != 0) {
        BgCheck_RemoveActorMesh(arg1, arg1 + 0x880, arg0->unk144);
    }
}

void func_808B76CC(BgBreakwall *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    void *temp_a0;
    void *temp_s1;

    if (Object_IsLoaded(&arg1->objectCtx, (s32) arg0->unk15C) != 0) {
        temp_v0 = arg0->actor.params & 0xF;
        temp_s1 = (temp_v0 << 5) + &D_808B8140;
        arg0->actor.draw = func_808B7FE4;
        arg0->actor.objBankIndex = arg0->unk15C;
        if ((temp_v0 != 7) && (temp_v0 != 9) && (temp_v0 != 0xB)) {
            arg0->actor.flags &= -0x11;
        }
        Actor_SetObjectSegment(arg1, (Actor *) arg0);
        temp_a0 = temp_s1->unkC;
        if (temp_a0 != 0) {
            temp_s1->unkC = Lib_SegmentedToVirtual(temp_a0);
        }
        if (temp_s1->unk10 != 0) {
            BcCheck3_BgActorInit((DynaPolyActor *) arg0, 0);
            BgCheck3_LoadMesh(arg1, (DynaPolyActor *) arg0, temp_s1->unk10);
        }
        BgBreakwall_SetupAction(arg0, temp_s1->unk18);
        arg0->actor.destroy = func_808B767C;
    }
}

void func_808B77D0(s32 arg0, ? arg1) {

}

void func_808B77E0(void *arg0, GlobalContext *arg1) {
    u8 temp_a1;

    temp_a1 = arg0->unk15D;
    arg0 = arg0;
    if (Flags_GetSwitch(arg1, (s32) temp_a1) == 0) {
        arg0->unk13C = func_808B7FE4;
        return;
    }
    arg0->unk13C = NULL;
}

void func_808B782C(void *arg0, GlobalContext *arg1) {
    f32 phi_f0;

    if (Flags_GetSwitch(arg1, (s32) arg0->unk15D) != 0) {
        phi_f0 = 1.0f;
    } else {
        phi_f0 = 0.1f;
    }
    Math_SmoothStepToF(arg0 + 0x58, phi_f0, 0.2f, 0.3f, 0.06f);
}

void func_808B78A4(Actor *arg0, ? arg1) {
    if ((gSaveContext.weekEventReg[55] & 0x80) != 0) {
        Actor_MarkForDeath(arg0);
    }
}

void func_808B78DC(Actor *arg0, ? arg1) {
    Actor_SetScale(arg0, 3.5f);
    func_800B9010(arg0, 0x217DU);
}

void func_808B7914(void *arg0, GlobalContext *arg1) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 temp_f0;

    if ((arg1->gameplayFrames & 7) == 0) {
        sp30 = Rand_ZeroFloat(80.0f) + (arg0->unk24 - 55.0f);
        sp34 = arg0->unk28 + 70.0f;
        temp_f0 = Rand_ZeroFloat(80.0f);
        sp24 = 0.0f;
        sp2C = 0.0f;
        sp28 = 0.5f;
        sp38 = temp_f0 + (arg0->unk2C - 130.0f);
        EffectSsIceSmoke_Spawn(arg1, (Vec3f *) &sp30, (Vec3f *) &sp24, &D_801D15B0, (s16) (-0xC8 - (s32) (Rand_ZeroOne() * 50.0f)));
    }
}

void func_808B7A10(void *arg0, ? arg1) {
    u8 temp_v0;
    u8 temp_v0_2;

    if (gSaveContext.isNight != 0) {
        temp_v0 = arg0->unk15E;
        if ((s32) temp_v0 < 0xF5) {
            arg0->unk15E = (u8) (temp_v0 + 0xA);
            return;
        }
        arg0->unk15E = 0xFFU;
        return;
    }
    temp_v0_2 = arg0->unk15E;
    if ((s32) temp_v0_2 >= 0xB) {
        arg0->unk15E = (u8) (temp_v0_2 - 0xA);
        return;
    }
    arg0->unk15E = 0U;
}

void BgBreakwall_Update(BgBreakwall *this, GlobalContext *globalCtx) {
    BgBreakwall *this = (BgBreakwall *) thisx;
    this->actionFunc(this, globalCtx);
}

void func_808B7A90(s32 arg0, void **arg1) {
    u8 sp2C;
    u8 sp28;
    void *sp24;
    void *temp_a2;
    void *temp_v1;
    void *temp_v1_2;

    temp_a2 = *arg1;
    sp24 = temp_a2;
    func_800FE7A8(&D_808B82F0, &sp2C, temp_a2, arg1);
    func_800FE7A8(&D_808B8300, &sp28);
    temp_v1 = temp_a2->unk2C0;
    temp_a2->unk2C0 = (void *) (temp_v1 + 8);
    temp_v1->unk0 = 0xFA000080;
    temp_v1->unk4 = (s32) ((sp2C << 0x18) | (sp2D << 0x10) | (sp2E << 8) | 0xFF);
    temp_v1_2 = temp_a2->unk2C0;
    temp_a2->unk2C0 = (void *) (temp_v1_2 + 8);
    temp_v1_2->unk0 = 0xFB000000;
    temp_v1_2->unk4 = (s32) ((sp28 << 0x18) | (sp29 << 0x10) | (sp2A << 8) | 0xFF);
}

void func_808B7B54(s32 arg0, GraphicsContext **arg1) {
    u8 sp50;
    u8 sp4C;
    Gfx *sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    temp_a0 = *arg1;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp40 = temp_v0;
    sp40->words.w1 = Matrix_NewMtx(*arg1);
    func_800FE7A8(&D_808B8310, &sp50);
    func_800FE7A8(&D_808B8330, &sp4C);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFA000080;
    temp_v0_2->words.w1 = (sp50 << 0x18) | (sp51 << 0x10) | (sp52 << 8) | 0xFF;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v0_3->words.w1 = (sp4C << 0x18) | (sp4D << 0x10) | (sp4E << 8) | 0xFF;
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_4->words.w1 = (u32) &D_06000A50;
    func_800FE7A8(&D_808B8320, &sp50);
    func_800FE7A8(&D_808B8340, &sp4C);
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xFA000080;
    temp_v0_5->words.w1 = (sp50 << 0x18) | (sp51 << 0x10) | (sp52 << 8) | 0xFF;
    temp_v0_6 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xFB000000;
    temp_v0_6->words.w1 = (sp4C << 0x18) | (sp4D << 0x10) | (sp4E << 8) | 0xFF;
    temp_v0_7 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w0 = 0xDE000000;
    temp_v0_7->words.w1 = (u32) &D_06000C98;
}

void func_808B7D34(void *arg0, GraphicsContext **arg1) {
    s32 sp48;
    GraphicsContext *sp38;
    Gfx *sp30;
    Gfx *sp2C;
    Gfx *sp28;
    Gfx *temp_v0_2;
    Gfx *temp_v0_4;
    Gfx *temp_v0_6;
    GraphicsContext *temp_t0;
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_t1;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 temp_v0_5;

    temp_v0 = arg0->unk15E;
    temp_t0 = *arg1;
    temp_t1 = 0xFF - temp_v0;
    temp_v0_2 = temp_t0->polyXlu.p;
    temp_t0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp48 = temp_t1;
    sp38 = temp_t0;
    sp30 = temp_v0_2;
    sp30->words.w1 = Gfx_PrimColor(*arg1, 0xFF, 0xFF, (s32) (((temp_t1 * 0xF5) + (temp_v0 * 0xFF)) & 0xFF00) >> 8, (s32) (((temp_t1 * 0x91) + (temp_v0 * 0x55)) & 0xFF00) >> 8, (s32) (((temp_t1 * 0x87) + (temp_v0 * 0x37)) & 0xFF00) >> 8);
    temp_lo = temp_t1 * 0xFF;
    temp_v0_3 = arg0->unk15E;
    temp_s0 = (s32) ((temp_lo + (temp_v0_3 * 0x96)) & 0xFF00) >> 8;
    temp_v0_4 = temp_t0->polyXlu.p;
    temp_t0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDB060028;
    sp48 = temp_t1;
    sp38 = temp_t0;
    sp2C = temp_v0_4;
    sp2C->words.w1 = Gfx_PrimColor(*arg1, 0xFF, temp_s0, temp_s0, (s32) ((temp_lo + (temp_v0_3 * 0x64)) & 0xFF00) >> 8, (s32) ((temp_lo + (temp_v0_3 * 0x4B)) & 0xFF00) >> 8);
    temp_v0_5 = arg0->unk15E;
    temp_v0_6 = temp_t0->polyXlu.p;
    temp_t0->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xDB06002C;
    sp28 = temp_v0_6;
    sp28->words.w1 = Gfx_PrimColor(*arg1, 0xFF, 0xFF, 0xFF, (s32) (((temp_t1 * 0xB9) + (temp_v0_5 * 0x8C)) & 0xFF00) >> 8, (s32) (((temp_t1 * 0xEB) + (temp_v0_5 * 0x2D)) & 0xFF00) >> 8);
}

void func_808B7FE4(Actor *this, GlobalContext *globalCtx) {
    Gfx *sp30;
    Gfx *sp28;
    ? (*temp_v0)(Actor *, GlobalContext *);
    AnimatedMaterial *temp_a1;
    AnimatedMaterial *temp_a2;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s0;
    void *temp_s2;

    temp_s2 = ((this->params & 0xF) << 5) + &D_808B8140;
    temp_a2 = temp_s2->unkC;
    temp_s0 = globalCtx->state.gfxCtx;
    temp_a1 = temp_a2;
    if (temp_a2 != 0) {
        this = this;
        AnimatedMat_Draw(globalCtx, temp_a1);
    }
    temp_v0 = temp_s2->unk1C;
    if (temp_v0 != 0) {
        temp_v0(this, globalCtx);
    }
    if (temp_s2->unk4 != 0) {
        func_8012C28C(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDA380003;
        sp30 = temp_v0_2;
        sp30->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDE000000;
        temp_v0_3->words.w1 = temp_s2->unk4;
    }
    if (temp_s2->unk8 != 0) {
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDA380003;
        sp28 = temp_v0_4;
        sp28->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDE000000;
        temp_v0_5->words.w1 = temp_s2->unk8;
    }
}
