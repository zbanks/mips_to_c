struct _mips2c_stack_EffectSsSbn_Init {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad4C[0xC];                     /* maybe part of sp48[4]? */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad64[0x14];                    /* maybe part of sp60[6]? */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ char pad84[0x14];                    /* maybe part of sp80[6]? */
    /* 0x98 */ void *sp98;                          /* inferred */
    /* 0x9C */ char pad9C[0x4];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_EffectSsSbn_Update {};         /* size 0x0 */

struct _mips2c_stack_func_80AC8ECC {
    /* 0x00 */ char pad0[0x48];
    /* 0x48 */ Gfx *sp48;                           /* inferred */
    /* 0x4C */ Gfx *sp4C;                           /* inferred */
    /* 0x50 */ Gfx *sp50;                           /* inferred */
    /* 0x54 */ char pad54[0xC];                     /* maybe part of sp50[4]? */
    /* 0x60 */ Gfx *sp60;                           /* inferred */
    /* 0x64 */ char pad64[0xC];                     /* maybe part of sp60[4]? */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ ? sp74;                              /* inferred */
    /* 0x74 */ char pad74[0x44];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_80AC9164 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad38[0xC];                     /* maybe part of sp34[4]? */
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad48[0x8];                     /* maybe part of sp44[3]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad54[0x44];
};                                                  /* size = 0x98 */

extern ? D_04071230;
extern ? D_04074330;
static ? D_80AC93B8;                                /* unable to generate initializer */
static ? D_80AC93E8;                                /* unable to generate initializer */

s32 EffectSsSbn_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    void *sp98;
    f32 sp58;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 *temp_a1;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0;
    void *temp_v0_2;
    f32 phi_f14;

    Math_Vec3f_Copy((Vec3f *) this, (Vec3f *) initParamsx);
    Math_Vec3f_Copy(&this->velocity, &D_801D15B0);
    Math_Vec3f_Copy(&this->accel, &D_801D15B0);
    this->flags = 0;
    this->regs[1] = 0;
    this->regs[0] = 7;
    this->regs[2] = 0;
    this->regs[3] = 0xC8;
    this->regs[4] = 0xFA;
    this->regs[5] = 0x1E;
    this->gfx = initParamsx->unkC;
    this->regs[7] = (s16) (s32) (randPlusMinusPoint5Scaled(100.0f) + (initParamsx->unk10 * 120.0f));
    temp_v0 = this->regs[7];
    if ((s32) temp_v0 < 0x258) {
        this->regs[7] = 0x258;
    } else if ((s32) temp_v0 >= 0x5DD) {
        this->regs[7] = 0x5DC;
    }
    temp_v0_2 = this->gfx;
    this->regs[8] = 0x3E8;
    this->regs[6] = 0;
    this->life = 0x5D;
    this->draw = func_80AC8ECC;
    this->update = EffectSsSbn_Update;
    if (temp_v0_2 != 0) {
        sp98 = temp_v0_2;
        func_800C0094((CollisionPoly *) temp_v0_2, this->pos.x, this->pos.y, this->pos.z, (MtxF *) &sp58);
        temp_f2 = (f32) sp98->unk8 * 0.00003051851f;
        temp_f12 = (f32) sp98->unkA * 0.00003051851f;
        temp_f14 = (f32) sp98->unkC * 0.00003051851f;
        if ((temp_f12 > 0.95f) || (temp_f12 < -0.95f)) {
            this->draw = func_80AC9164;
            return 1;
        }
        if (temp_f12 > 0.05f) {
            sp40 = temp_f2 * 10.0f;
            sp48 = temp_f14 * 10.0f;
            sp44 = (-((temp_f2 * temp_f2) + (temp_f14 * temp_f14)) * 10.0f) / temp_f12;
        } else if (temp_f12 < -0.05f) {
            sp40 = -temp_f2 * 10.0f;
            sp48 = -temp_f14 * 10.0f;
            sp44 = (-((temp_f2 * temp_f2) + (temp_f14 * temp_f14)) * 10.0f) / -temp_f12;
        } else {
            sp44 = -10.0f;
            sp40 = 0.0f;
            sp48 = 0.0f;
        }
        temp_a1 = &sp34;
        sp34 = -sp78 * 10.0f;
        sp38 = -sp7C * 10.0f;
        sp3C = -sp80 * 10.0f;
        Math3D_AngleBetweenVectors((Vec3f *) &sp40, (Vec3f *) temp_a1, &sp30);
        temp_f2_2 = sp30 * sp30;
        if (temp_f2_2 >= 1.0f) {
            phi_f14 = 0.0f;
        } else {
            phi_f14 = sqrtf(1.0f - temp_f2_2);
        }
        if (((sp60 * sp48) + ((sp58 * sp40) + (sp5C * sp44))) < 0.0f) {
            this->regs[6] = Math_FAtan2F(sp30, phi_f14);
        } else {
            this->regs[6] = (s16) -Math_FAtan2F(sp30, phi_f14);
        }
        goto block_19;
    }
block_19:
    return 1;
}

void func_80AC8ECC(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    ? sp74;
    f32 sp70;
    Gfx *sp60;
    Gfx *sp50;
    Gfx *sp4C;
    Gfx *sp48;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s1;
    s16 temp_v0_4;
    s16 temp_v0_7;

    temp_s1 = globalCtx->state.gfxCtx;
    sp70 = (f32) this->regs[7] * 0.001f;
    func_800C0094((CollisionPoly *) this->gfx, this->pos.x, this->pos.y, this->pos.z, (MtxF *) &sp74);
    SkinMatrix_MulYRotation((MtxF *) &sp74, this->regs[6]);
    SysMatrix_InsertMatrix((MtxF *) &sp74, 0);
    Matrix_Scale(sp70, sp70, sp70, 1);
    Matrix_Scale(0.05f, 0.05f, 0.05f, 1);
    temp_v0 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp60 = temp_v0;
    sp60->words.w1 = Matrix_NewMtx(temp_s1);
    func_8012C2DC(temp_s1);
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xE200001C;
    temp_v0_2->words.w1 = 0xC8104E50;
    temp_v0_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xFA000080;
    temp_v0_3->words.w1 = (this->regs[3] & 0xFF) | ~0xFF;
    temp_v0_4 = this->regs[2];
    if ((s32) temp_v0_4 < 0xC) {
        temp_v0_5 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDB060020;
        sp50 = temp_v0_5;
        sp50->words.w1 = Lib_SegmentedToVirtual(*(&D_80AC93B8 + (temp_v0_4 * 4)));
        this->regs[2] += 1;
        this->regs[1] += this->regs[0];
    } else {
        temp_v0_6 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDB060020;
        sp4C = temp_v0_6;
        sp4C->words.w1 = Lib_SegmentedToVirtual((void *) &D_04073F00);
        temp_v0_7 = this->regs[0];
        if (((s32) temp_v0_7 >= 2) && ((globalCtx->state.frames & 1) == 0)) {
            this->regs[0] = temp_v0_7 - 1;
        }
        this->regs[1] += this->regs[0];
    }
    temp_v0_8 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_8 + 8;
    temp_v0_8->words.w0 = 0xDB060024;
    sp48 = temp_v0_8;
    sp48->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, (u32) this->regs[1], 0x20, 0x20);
    temp_v0_9 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_9 + 8;
    temp_v0_9->words.w1 = (u32) &D_04071230;
    temp_v0_9->words.w0 = 0xDE000000;
}

void func_80AC9164(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    ? sp54;
    f32 sp50;
    Gfx *sp44;
    Gfx *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_s0;
    s16 temp_v0_4;

    temp_s0 = globalCtx->state.gfxCtx;
    sp50 = (f32) this->regs[7] * 0.001f;
    func_800C0094((CollisionPoly *) this->gfx, this->pos.x, this->pos.y, this->pos.z, (MtxF *) &sp54);
    SkinMatrix_MulYRotation((MtxF *) &sp54, this->regs[6]);
    SysMatrix_InsertMatrix((MtxF *) &sp54, 0);
    Matrix_Scale(sp50, sp50, sp50, 1);
    Matrix_Scale(0.05f, 0.05f, 0.05f, 1);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp44 = temp_v0;
    sp44->words.w1 = Matrix_NewMtx(temp_s0);
    func_8012C2DC(temp_s0);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xE200001C;
    temp_v0_2->words.w1 = 0xC8104E50;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xFA000080;
    temp_v0_3->words.w1 = (this->regs[3] & 0xFF) | ~0xFF;
    temp_v0_4 = this->regs[2];
    if ((s32) temp_v0_4 < 5) {
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDB060020;
        sp34 = temp_v0_5;
        sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_80AC93E8 + (temp_v0_4 * 4)));
        this->regs[2] += 1;
    } else {
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDB060020;
        temp_v0_6->words.w1 = Lib_SegmentedToVirtual((void *) &D_04075400);
    }
    temp_v0_7 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w0 = 0xDE000000;
    temp_v0_7->words.w1 = (u32) &D_04074330;
}

void EffectSsSbn_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    s16 temp_v0;

    temp_v0 = this->life;
    if ((s32) temp_v0 < 0xA) {
        this->regs[3] += -0x14;
        return;
    }
    if ((s32) temp_v0 >= 0x2D) {
        if ((s32) temp_v0 < 0x55) {
            this->regs[8] += 0xC;
            this->regs[4] -= this->regs[5];
            return;
        }
        this->regs[8] = 0x3E8;
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}
