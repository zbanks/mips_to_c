struct _mips2c_stack_EffectSsBomb2_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EffectSsBomb2_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80978138 {
    /* 0x000 */ char pad_0[0x28];
    /* 0x028 */ Gfx *sp28;                          /* inferred */
    /* 0x02C */ char pad_2C[0x14];                  /* maybe part of sp28[6]? */
    /* 0x040 */ f32 sp40;                           /* inferred */
    /* 0x044 */ char pad_44[0x8];                   /* maybe part of sp40[3]? */
    /* 0x04C */ ? sp4C;                             /* inferred */
    /* 0x04C */ char pad_4C[0x40];
    /* 0x08C */ ? sp8C;                             /* inferred */
    /* 0x08C */ char pad_8C[0x40];
    /* 0x0CC */ ? spCC;                             /* inferred */
    /* 0x0CC */ char pad_CC[0x40];
    /* 0x10C */ ? sp10C;                            /* inferred */
    /* 0x10C */ char pad_10C[0x44];
};                                                  /* size = 0x150 */

struct _mips2c_stack_func_80978304 {
    /* 0x000 */ char pad_0[0xBC];
    /* 0x0BC */ ? spBC;                             /* inferred */
    /* 0x0BC */ char pad_BC[0x40];
    /* 0x0FC */ ? spFC;                             /* inferred */
    /* 0x0FC */ char pad_FC[0x40];
    /* 0x13C */ ? sp13C;                            /* inferred */
    /* 0x13C */ char pad_13C[0x40];
    /* 0x17C */ ? sp17C;                            /* inferred */
    /* 0x17C */ char pad_17C[0x40];
    /* 0x1BC */ ? sp1BC;                            /* inferred */
    /* 0x1BC */ char pad_1BC[0x44];
};                                                  /* size = 0x200 */

extern ? D_0401A590;
static ? D_809787F8;                                /* unable to generate initializer */
static ? D_80978800;                                /* unable to generate initializer */
static ? D_80978820;                                /* unable to generate initializer */

s32 EffectSsBomb2_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    Math_Vec3f_Copy((Vec3f *) this, (Vec3f *) initParamsx);
    Math_Vec3f_Copy(&this->velocity, initParamsx + 0xC);
    Math_Vec3f_Copy(&this->accel, initParamsx + 0x18);
    this->gfx = (void *) &D_0401A4D0;
    this->life = 0x18;
    this->update = EffectSsBomb2_Update;
    this->draw = *(&D_809787F8 + (initParamsx->unk_28 * 4));
    this->regs[0] = initParamsx->unk_24;
    this->regs[2] = 0xFF;
    this->regs[3] = 0xFF;
    this->regs[4] = 0xFF;
    this->regs[5] = 0xFF;
    this->regs[6] = 0;
    this->regs[7] = 0;
    this->regs[8] = 0xC8;
    this->regs[9] = initParamsx->unk_26;
    return 1;
}

void func_80978138(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    ? sp10C;
    ? spCC;
    ? sp8C;
    ? sp4C;
    f32 sp40;
    Gfx *sp28;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    GraphicsContext *temp_s0;
    Mtx *temp_v0;
    f32 temp_f0;

    temp_s0 = globalCtx->state.gfxCtx;
    temp_f0 = (f32) this->regs[0] * 0.01f;
    sp40 = temp_f0;
    SkinMatrix_SetTranslate((MtxF *) &sp10C, this->pos.x, this->pos.y, this->pos.z);
    SkinMatrix_SetScale((MtxF *) &spCC, temp_f0, temp_f0, 1.0f);
    SkinMatrix_MtxFMtxFMult((MtxF *) &sp10C, &globalCtx->mf_187FC, (MtxF *) &sp4C);
    SkinMatrix_MtxFMtxFMult((MtxF *) &sp4C, (MtxF *) &spCC, (MtxF *) &sp8C);
    temp_v0 = SkinMatrix_MtxFToNewMtx(temp_s0, (MtxF *) &sp8C);
    if (temp_v0 != 0) {
        temp_v1 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1 + 8;
        temp_v1->words.w1 = (u32) temp_v0;
        temp_v1->words.w0 = 0xDA380003;
        func_8012C974(temp_s0);
        temp_v1_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1_2 + 8;
        temp_v1_2->words.w0 = 0xFA000000;
        temp_v1_2->words.w1 = (this->regs[5] & 0xFF) | (this->regs[2] << 0x18) | ((this->regs[3] & 0xFF) << 0x10) | ((this->regs[4] & 0xFF) << 8);
        temp_v1_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1_3 + 8;
        temp_v1_3->words.w0 = 0xFB000000;
        temp_v1_3->words.w1 = ((this->regs[8] & 0xFF) << 8) | (this->regs[6] << 0x18) | ((this->regs[7] & 0xFF) << 0x10);
        temp_v1_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1_4 + 8;
        temp_v1_4->words.w0 = 0xDB060020;
        sp28 = temp_v1_4;
        sp28->words.w1 = Lib_SegmentedToVirtual(*(&D_80978800 + (this->regs[1] * 4)));
        temp_v1_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1_5 + 8;
        temp_v1_5->words.w0 = 0xDE000000;
        temp_v1_5->words.w1 = (u32) this->gfx;
    }
}

void func_80978304(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    ? sp1BC;
    ? sp17C;
    ? sp13C;
    ? spFC;
    ? spBC;
    Gfx *temp_s0;
    Gfx *temp_s0_2;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    GraphicsContext *temp_s2;
    Mtx *temp_s1;
    Mtx *temp_v0;
    Mtx *temp_v0_2;
    f32 temp_f20;
    f32 temp_f30;
    s32 temp_s1_2;
    f32 phi_f22;
    s32 phi_s1;

    temp_s2 = globalCtx->state.gfxCtx;
    temp_f30 = (f32) this->regs[10];
    temp_f20 = (f32) this->regs[0] * 0.01f;
    SkinMatrix_SetTranslate((MtxF *) &sp1BC, this->pos.x, this->pos.y, this->pos.z);
    SkinMatrix_SetScale((MtxF *) &sp17C, temp_f20, temp_f20, 1.0f);
    SkinMatrix_MtxFMtxFMult((MtxF *) &sp1BC, &globalCtx->mf_187FC, (MtxF *) &spFC);
    SkinMatrix_MtxFMtxFMult((MtxF *) &spFC, (MtxF *) &sp17C, (MtxF *) &sp13C);
    temp_v0 = SkinMatrix_MtxFToNewMtx(temp_s2, (MtxF *) &sp13C);
    phi_f22 = 0.925f;
    if (temp_v0 != 0) {
        temp_v1 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v1 + 8;
        temp_v1->words.w1 = (u32) temp_v0;
        temp_v1->words.w0 = 0xDA380003;
        temp_v0_2 = SkinMatrix_MtxFToNewMtx(temp_s2, (MtxF *) &sp13C);
        temp_s1 = temp_v0_2;
        if (temp_v0_2 != 0) {
            func_8012C974(temp_s2);
            temp_v1_2 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v1_2 + 8;
            temp_v1_2->words.w0 = 0xFA000000;
            temp_v1_2->words.w1 = (this->regs[5] & 0xFF) | (this->regs[2] << 0x18) | ((this->regs[3] & 0xFF) << 0x10) | ((this->regs[4] & 0xFF) << 8);
            temp_v1_3 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v1_3 + 8;
            temp_v1_3->words.w0 = 0xFB000000;
            temp_v1_3->words.w1 = ((this->regs[8] & 0xFF) << 8) | (this->regs[6] << 0x18) | ((this->regs[7] & 0xFF) << 0x10);
            temp_s0 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_s0 + 8;
            temp_s0->words.w0 = 0xDB060020;
            temp_s0->words.w1 = Lib_SegmentedToVirtual(*(&D_80978820 + (this->regs[1] * 4)));
            temp_v1_4 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v1_4 + 8;
            temp_v1_4->words.w1 = (u32) &D_0401A538;
            temp_v1_4->words.w0 = 0xDE000000;
            temp_v1_5 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v1_5 + 8;
            temp_v1_5->words.w1 = (u32) &D_0401A590;
            temp_v1_5->words.w0 = 0xDE000000;
            SysMatrix_FromRSPMatrix((RSPMatrix *) temp_s1, (MtxF *) &spBC);
            SysMatrix_SetCurrentState((MtxF *) &spBC);
            phi_s1 = 1;
            do {
                SysMatrix_InsertTranslation(0.0f, 0.0f, temp_f30, 1);
                SysMatrix_InsertZRotation_f(((f32) this->life * 0.02f) + 180.0f, 1);
                Matrix_Scale(phi_f22, phi_f22, phi_f22, 1);
                temp_s0_2 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_s0_2 + 8;
                temp_s0_2->words.w0 = 0xDA380003;
                temp_s0_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                temp_v1_6 = temp_s2->polyXlu.p;
                temp_s1_2 = phi_s1 - 1;
                temp_s2->polyXlu.p = temp_v1_6 + 8;
                temp_v1_6->words.w1 = (u32) &D_0401A590;
                temp_v1_6->words.w0 = 0xDE000000;
                phi_f22 -= 0.15f;
                phi_s1 = temp_s1_2;
            } while (temp_s1_2 >= 0);
        }
    }
}

void EffectSsBomb2_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s16 phi_v0;

    temp_v0 = this->regs[9];
    this->regs[1] = (s16) ((s32) (0x17 - this->life) / 3);
    this->regs[0] += temp_v0;
    if (temp_v0 == 0x1E) {
        this->regs[10] += 4;
    } else {
        this->regs[10] += 2;
    }
    temp_v0_2 = this->life;
    if (((s32) temp_v0_2 < 0x17) && (temp_s1 = temp_v0_2 - 0xD, (((s32) temp_v0_2 < 0xE) == 0))) {
        this->regs[2] = func_800B096C(this->regs[2], 0xFF, temp_s1);
        this->regs[3] = func_800B096C(this->regs[3], 0xFF, temp_s1);
        this->regs[4] = func_800B096C(this->regs[4], 0x96, temp_s1);
        this->regs[5] = func_800B096C(this->regs[5], 0xFF, temp_s1);
        this->regs[6] = func_800B096C(this->regs[6], 0x96, temp_s1);
        this->regs[7] = func_800B096C(this->regs[7], 0, temp_s1);
        phi_v0 = func_800B096C(this->regs[8], 0, temp_s1);
        goto block_9;
    }
    if ((s32) temp_v0_2 < 0xE) {
        temp_s1_2 = temp_v0_2 + 1;
        if ((s32) temp_v0_2 >= 0) {
            this->regs[2] = func_800B096C(this->regs[2], 0x32, temp_s1_2);
            this->regs[3] = func_800B096C(this->regs[3], 0x32, temp_s1_2);
            this->regs[4] = func_800B096C(this->regs[4], 0x32, temp_s1_2);
            this->regs[5] = func_800B096C(this->regs[5], 0x96, temp_s1_2);
            this->regs[6] = func_800B096C(this->regs[6], 0xA, temp_s1_2);
            this->regs[7] = func_800B096C(this->regs[7], 0xA, temp_s1_2);
            phi_v0 = func_800B096C(this->regs[8], 0xA, temp_s1_2);
block_9:
            this->regs[8] = phi_v0;
        }
    }
}
