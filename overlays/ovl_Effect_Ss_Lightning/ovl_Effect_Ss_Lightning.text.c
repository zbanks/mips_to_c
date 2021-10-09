struct _mips2c_stack_EffectSsLightning_Draw {
    /* 0x000 */ char pad0[0x48];
    /* 0x048 */ s32 sp48;                           /* inferred */
    /* 0x04C */ f32 sp4C;                           /* inferred */
    /* 0x050 */ char pad50[0x4];
    /* 0x054 */ ? sp54;                             /* inferred */
    /* 0x054 */ char pad54[0x40];
    /* 0x094 */ ? sp94;                             /* inferred */
    /* 0x094 */ char pad94[0x40];
    /* 0x0D4 */ ? spD4;                             /* inferred */
    /* 0x0D4 */ char padD4[0x40];
    /* 0x114 */ ? sp114;                            /* inferred */
    /* 0x114 */ char pad114[0x40];
    /* 0x154 */ ? sp154;                            /* inferred */
    /* 0x154 */ char pad154[0x40];
    /* 0x194 */ ? sp194;                            /* inferred */
    /* 0x194 */ char pad194[0x44];
};                                                  /* size = 0x1D8 */

struct _mips2c_stack_EffectSsLightning_Init {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EffectSsLightning_Update {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad38[0x4];
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_8097A794 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ ? sp18;                              /* inferred */
    /* 0x18 */ char pad18[0x50];
    /* 0x68 */ s16 sp68;                            /* inferred */
    /* 0x6A */ char pad6A[0x2];
    /* 0x6C */ s16 sp6C;                            /* inferred */
    /* 0x6E */ s16 sp6E;                            /* inferred */
    /* 0x70 */ char pad70[0x4];                     /* maybe part of sp6E[3]? */
    /* 0x74 */ s16 sp74;                            /* inferred */
    /* 0x76 */ char pad76[0x2];
};                                                  /* size = 0x78 */

void func_8097A794(GlobalContext *arg0, f32 *arg1, s32 arg2, s32 *arg3); /* static */
static void *D_8097AC80[8] = {
    (void *)0x403C230,
    (void *)0x403C830,
    (void *)0x403CE30,
    (void *)0x403D430,
    (void *)0x403DA30,
    (void *)0x403E030,
    (void *)0x403E630,
    (void *)0x403EC30,
};
static s32 D_8097ACA8 = 0;
EffectSsInit Effect_Ss_Lightning_InitVars = {
    0xD,
    ((u32 (*)(GlobalContext *, u32, EffectSs *, void *)) EffectSsLightning_Init),
};

s32 EffectSsLightning_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    void **temp_s0;
    void **phi_s0;

    this->pos.x = initParamsx->unk0;
    this->pos.y = initParamsx->unk4;
    this->gfx = (void *) &D_0403F230;
    this->pos.z = initParamsx->unk8;
    this->draw = EffectSsLightning_Draw;
    this->update = EffectSsLightning_Update;
    this->life = initParamsx->unk18;
    this->regs[0] = (s16) initParamsx->unkC;
    this->regs[1] = (s16) initParamsx->unkD;
    this->regs[2] = (s16) initParamsx->unkE;
    this->regs[3] = (s16) initParamsx->unkF;
    this->regs[4] = (s16) initParamsx->unk10;
    this->regs[5] = (s16) initParamsx->unk11;
    this->regs[6] = (s16) initParamsx->unk12;
    this->regs[7] = (s16) initParamsx->unk13;
    this->regs[8] = initParamsx->unk1A;
    this->regs[9] = initParamsx->unk14;
    this->regs[10] = initParamsx->unk16;
    this->regs[11] = initParamsx->unk18;
    phi_s0 = D_8097AC80;
    if (D_8097ACA8 == 0) {
        do {
            temp_s0 = phi_s0 + 4;
            temp_s0->unk-4 = Lib_SegmentedToVirtual(*phi_s0);
            phi_s0 = temp_s0;
        } while (temp_s0 != &Effect_Ss_Lightning_InitVars);
        D_8097ACA8 = 1;
    }
    return 1;
}

void func_8097A794(GlobalContext *arg0, f32 *arg1, s32 arg2, s32 *arg3) {
    s16 sp74;
    s16 sp6C;
    s16 sp68;
    ? sp18;
    ? *temp_t9;
    s32 *temp_t6;
    s32 *phi_t6;
    ? *phi_t9;

    EffectSS_Delete((EffectSs *) &sp18);
    phi_t6 = arg3;
    phi_t9 = &sp18;
    do {
        temp_t6 = phi_t6 + 0xC;
        temp_t9 = phi_t9 + 0xC;
        temp_t9->unk-C = (s32) *phi_t6;
        temp_t9->unk-8 = (s32) temp_t6->unk-8;
        temp_t9->unk-4 = (s32) temp_t6->unk-4;
        phi_t6 = temp_t6;
        phi_t9 = temp_t9;
    } while (temp_t6 != (arg3 + 0x60));
    sp18.unk0 = (s32) arg1->unk0;
    sp18.unk4 = (s32) arg1->unk4;
    sp18.unk8 = (s32) arg1->unk8;
    sp68 += -1;
    sp6C = (s16) arg2;
    sp74 = sp6E;
    EffectSS_Copy(arg0, (EffectSs *) &sp18);
}

void EffectSsLightning_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    ? sp194;
    ? sp154;
    ? sp114;
    ? spD4;
    ? sp94;
    ? sp54;
    f32 sp4C;
    s32 sp48;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    GraphicsContext *temp_s1;
    Mtx *temp_v0_2;
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_v0;
    s32 phi_v0;

    temp_s1 = globalCtx->state.gfxCtx;
    temp_v0 = this->regs[11] - this->life;
    temp_f2 = (f32) this->regs[9] * 0.01f;
    phi_v0 = temp_v0;
    if (temp_v0 >= 8) {
        phi_v0 = 7;
    }
    sp4C = temp_f2;
    sp48 = phi_v0;
    SkinMatrix_SetTranslate((MtxF *) &sp154, this->pos.x, this->pos.y, this->pos.z);
    temp_f0 = temp_f2 * 0.6f;
    SkinMatrix_SetScale((MtxF *) &sp114, temp_f0, temp_f2, temp_f0);
    SkinMatrix_SetRotateRPY((MtxF *) &spD4, (s16) (s32) this->vec.x, (s16) (s32) this->vec.y, this->regs[10]);
    SkinMatrix_MtxFMtxFMult((MtxF *) &sp154, &globalCtx->mf_187FC, (MtxF *) &sp94);
    SkinMatrix_MtxFMtxFMult((MtxF *) &sp94, (MtxF *) &spD4, (MtxF *) &sp54);
    SkinMatrix_MtxFMtxFMult((MtxF *) &sp54, (MtxF *) &sp114, (MtxF *) &sp194);
    temp_v1 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDA380003;
    temp_v1->words.w1 = (u32) &D_801D1DE0;
    temp_v0_2 = SkinMatrix_MtxFToNewMtx(temp_s1, (MtxF *) &sp194);
    if (temp_v0_2 != 0) {
        temp_v1_2 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v1_2 + 8;
        temp_v1_2->words.w1 = (u32) temp_v0_2;
        temp_v1_2->words.w0 = 0xDA380003;
        func_8012C9BC(temp_s1);
        temp_v1_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v1_3 + 8;
        temp_v1_3->words.w0 = 0xDB060020;
        temp_v1_3->words.w1 = (u32) D_8097AC80[sp48];
        temp_v1_4 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v1_4 + 8;
        temp_v1_4->words.w0 = 0xFA000000;
        temp_v1_4->words.w1 = (this->regs[3] & 0xFF) | (this->regs[0] << 0x18) | ((this->regs[1] & 0xFF) << 0x10) | ((this->regs[2] & 0xFF) << 8);
        temp_v1_5 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v1_5 + 8;
        temp_v1_5->words.w0 = 0xFB000000;
        temp_v1_5->words.w1 = (this->regs[7] & 0xFF) | (this->regs[4] << 0x18) | ((this->regs[5] & 0xFF) << 0x10) | ((this->regs[6] & 0xFF) << 8);
        temp_v1_6 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v1_6 + 8;
        temp_v1_6->words.w0 = 0xDE000000;
        temp_v1_6->words.w1 = (u32) this->gfx;
    }
}

void EffectSsLightning_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s32 sp3C;
    s32 sp34;
    f32 temp_f20;
    f32 temp_f20_2;
    s16 temp_v0;
    s32 phi_v1;

    if ((this->regs[8] != 0) && ((this->life + 1) == this->regs[11])) {
        phi_v1 = 1;
        if (Rand_ZeroOne() < 0.5f) {
            phi_v1 = -1;
        }
        sp34 = phi_v1;
        temp_v0 = this->regs[10];
        sp3C = (((s32) (Rand_ZeroOne() * 3640.0f) + 0xE38) * phi_v1) + temp_v0;
        temp_f20 = (f32) this->regs[9] * 0.01f * 80.0f;
        sp44 = (Math_SinS((s16) (temp_v0 - 0x4000)) * temp_f20) + this->pos.y;
        temp_f20_2 = Math_CosS((s16) (this->regs[10] - 0x4000)) * temp_f20;
        sp40 = this->pos.x - (Math_CosS(func_800DFC68(globalCtx->cameraPtrs[globalCtx->activeCamera])) * temp_f20_2);
        sp48 = (Math_SinS(func_800DFC68(globalCtx->cameraPtrs[globalCtx->activeCamera])) * temp_f20_2) + this->pos.z;
        func_8097A794(globalCtx, &sp40, sp3C, (s32 *) this);
        if (Rand_ZeroOne() < 0.1f) {
            func_8097A794(globalCtx, &sp40, (this->regs[10] * 2) - sp3C, (s32 *) this);
        }
    }
}
