typedef struct EffKamejimaWave {
    /* 0x000 */ Actor actor;
    /* 0x144 */ f32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x4];
    /* 0x14C */ void (*actionFunc)(EffKamejimaWave *, GlobalContext *);
} EffKamejimaWave;                                  /* size = 0x150 */

struct _mips2c_stack_EffKamejimaWave_Destroy {};    /* size 0x0 */

struct _mips2c_stack_EffKamejimaWave_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EffKamejimaWave_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BCEBC0 {};              /* size 0x0 */

struct _mips2c_stack_func_80BCEC6C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BCED34 {};              /* size 0x0 */

struct _mips2c_stack_func_80BCEDE0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BCEEBC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BCEF0C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ char pad_30[0x8];                    /* maybe part of sp2C[3]? */
    /* 0x38 */ u8 sp38;                             /* inferred */
    /* 0x39 */ u8 sp39;                             /* inferred */
    /* 0x3A */ u8 sp3A;                             /* inferred */
    /* 0x3B */ char pad_3B[0x1];
    /* 0x3C */ u8 sp3C;                             /* inferred */
    /* 0x3D */ u8 sp3D;                             /* inferred */
    /* 0x3E */ u8 sp3E;                             /* inferred */
    /* 0x3F */ char pad_3F[0x1];
};                                                  /* size = 0x40 */

? func_800FE7A8(? *, u8 *);                         /* extern */
void func_80BCEBC0(EffKamejimaWave *arg0, GlobalContext *arg1); /* static */
void func_80BCEC6C(EffKamejimaWave *arg0, GlobalContext *arg1); /* static */
void func_80BCED34(EffKamejimaWave *arg0, GlobalContext *arg1); /* static */
void func_80BCEDE0(EffKamejimaWave *arg0, GlobalContext *arg1); /* static */
void func_80BCEEBC(u8 arg0);                        /* static */
void func_80BCEF0C(Actor *this, GlobalContext *globalCtx); /* static */
extern void D_06000000;
extern ? D_06000140;
extern void D_06001AF0;
static ? D_80BCF090;                                /* unable to generate initializer */
static ? D_80BCF0A0;                                /* unable to generate initializer */
static s16 D_80BCF1C0;                              /* type too large by 1 */
static u8 D_80BCF1C1;
static void *D_80BCF1C4;

void EffKamejimaWave_Init(Actor *thisx, GlobalContext *globalCtx) {
    EffKamejimaWave *this = (EffKamejimaWave *) thisx;
    Actor_SetScale((Actor *) this, 0.2f);
    this->actor.scale.y = 0.0f;
    if ((this->actor.params & 0xF) == 1) {
        this->actionFunc = func_80BCEDE0;
        D_80BCF1C0 = 0xFF;
    } else {
        this->actionFunc = func_80BCEC6C;
        D_80BCF1C0 = 0xFF;
    }
    D_80BCF1C4 = Lib_SegmentedToVirtual(&D_06001AF0);
}

void EffKamejimaWave_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EffKamejimaWave *this = (EffKamejimaWave *) thisx;

}

void func_80BCEBC0(EffKamejimaWave *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f6;

    temp_f0 = arg0->unk_144;
    temp_f6 = arg0->actor.scale.y + temp_f0;
    arg0->unk_144 = temp_f0 - 0.003f;
    arg0->actor.shape.rot.x += 0x64;
    arg0->actor.scale.y = temp_f6;
    if (arg0->unk_144 < 0.0f) {
        arg0->actor.scale.x += 0.003f;
    }
    if (arg0->unk_144 < -0.01f) {
        arg0->unk_144 = -0.01f;
    }
    if (arg0->actor.scale.y < 0.0f) {
        arg0->actor.scale.y = 0.0f;
        arg0->actionFunc = func_80BCEC6C;
        arg0->actor.draw = NULL;
        arg0->actor.scale.x = 0.2f;
    }
}

void func_80BCEC6C(EffKamejimaWave *arg0, GlobalContext *arg1) {
    if (func_800EE29C(arg1, 0x1E0U) != 0) {
        func_800EDF24((Actor *) arg0, arg1, func_800EE200(arg1, 0x1E0U));
        if (arg1->csCtx.npcActions[func_800EE200(arg1, 0x1E0U)]->unk0 == 2) {
            arg0->actionFunc = func_80BCEBC0;
            arg0->actor.draw = func_80BCEF0C;
            arg0->unk_144 = 0.05f;
            D_80BCF1C0 = 0xFF;
            arg0->actor.shape.rot.x = 0;
            Audio_PlayActorSound2((Actor *) arg0, 0x28D7U);
            return;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return;
    }
    arg0->actor.draw = NULL;
}

void func_80BCED34(EffKamejimaWave *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f6;
    s16 temp_v0;

    temp_f0 = arg0->unk_144;
    temp_f6 = arg0->actor.scale.y + temp_f0;
    arg0->unk_144 = temp_f0 - 0.002f;
    arg0->actor.shape.rot.x += 0x8C;
    arg0->actor.scale.y = temp_f6;
    if (arg0->unk_144 < 0.0f) {
        arg0->actor.scale.x += 0.002f;
    }
    if (arg0->unk_144 < 0.0f) {
        arg0->unk_144 = 0.0f;
    }
    temp_v0 = D_80BCF1C0;
    if ((s32) temp_v0 >= 4) {
        D_80BCF1C0 = temp_v0 - 4;
        return;
    }
    arg0->actor.scale.y = 0.0f;
    arg0->actionFunc = func_80BCEDE0;
    arg0->actor.draw = NULL;
}

void func_80BCEDE0(EffKamejimaWave *arg0, GlobalContext *arg1) {
    if (func_800EE29C(arg1, 0x1F6U) != 0) {
        func_800EDF24((Actor *) arg0, arg1, func_800EE200(arg1, 0x1F6U));
        if (arg1->csCtx.npcActions[func_800EE200(arg1, 0x1F6U)]->unk0 == 2) {
            arg0->unk_144 = 0.03f;
            arg0->actionFunc = func_80BCED34;
            arg0->actor.draw = func_80BCEF0C;
            arg0->actor.shape.rot.x = 0;
            arg0->actor.scale.x = 0.35f;
            return;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return;
    }
    arg0->actor.draw = NULL;
}

void EffKamejimaWave_Update(Actor *thisx, GlobalContext *globalCtx) {
    EffKamejimaWave *this = (EffKamejimaWave *) thisx;
    this->actionFunc(this, globalCtx);
}

void func_80BCEEBC(u8 arg0) {
    void *temp_v0;

    arg0 &= 0xFF;
    temp_v0 = Lib_SegmentedToVirtual(&D_06000000);
    temp_v0->unk_2F = arg0;
    temp_v0->unk_6F = arg0;
    temp_v0->unk_8F = arg0;
    temp_v0->unk_9F = arg0;
    temp_v0->unk_CF = arg0;
    temp_v0->unk_10F = arg0;
    temp_v0->unk_12F = arg0;
    temp_v0->unk_13F = arg0;
}

void func_80BCEF0C(Actor *this, GlobalContext *globalCtx) {
    u8 sp3C;
    u8 sp38;
    Gfx *sp2C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    func_800FE7A8(&D_80BCF090, &sp3C);
    func_800FE7A8(&D_80BCF0A0, &sp38);
    func_80BCEEBC(D_80BCF1C1);
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    Matrix_Scale(6.0f, 5.0f, 5.0f, 1);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp2C = temp_v0;
    sp2C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    AnimatedMat_Draw(globalCtx, (AnimatedMaterial *) D_80BCF1C4);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xFA000080;
    temp_v0_2->words.w1 = (sp3C << 0x18) | (sp3D << 0x10) | (sp3E << 8) | 0xFF;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v0_3->words.w1 = (sp38 << 0x18) | (sp39 << 0x10) | (sp3A << 8) | 0xFF;
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_4[1];
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_4->words.w1 = (u32) &D_06000140;
}
