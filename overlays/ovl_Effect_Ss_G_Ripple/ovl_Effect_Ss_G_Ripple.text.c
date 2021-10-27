struct _mips2c_stack_EffectSsGRipple_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EffectSsGRipple_Init {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EffectSsGRipple_Update {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80979C38 {
    /* 0x000 */ char pad_0[0x24];
    /* 0x024 */ CollisionContext *sp24;             /* inferred */
    /* 0x028 */ char pad_28[0x2C];                  /* maybe part of sp24[12]? */
    /* 0x054 */ ? sp54;                             /* inferred */
    /* 0x054 */ char pad_54[0x40];
    /* 0x094 */ ? sp94;                             /* inferred */
    /* 0x094 */ char pad_94[0x40];
    /* 0x0D4 */ ? spD4;                             /* inferred */
    /* 0x0D4 */ char pad_D4[0x44];
    /* 0x118 */ f32 sp118;                          /* inferred */
    /* 0x11C */ char pad_11C[0x4];
};                                                  /* size = 0x120 */

s16 func_800CA22C(GlobalContext *, CollisionContext *, void *, ? *, s32 *, s32 *); /* extern */
f32 func_800CA568(CollisionContext *, s16, s16);    /* extern */
void func_80979C38(GraphicsContext **arg0, s32 *arg1, ? arg2); /* static */

s32 EffectSsGRipple_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    s32 sp30;
    s32 sp28;

    sp30 = 0;
    Math_Vec3f_Copy(&this->velocity, &D_801D15B0);
    Math_Vec3f_Copy(&this->accel, &D_801D15B0);
    Math_Vec3f_Copy((Vec3f *) this, (Vec3f *) initParamsx);
    this->gfx = (void *) &D_040377B0;
    this->life = initParamsx->unk_10 + 0x14;
    this->flags = 0;
    this->draw = EffectSsGRipple_Draw;
    this->update = EffectSsGRipple_Update;
    this->regs[1] = initParamsx->unk_C;
    this->regs[2] = initParamsx->unk_E;
    this->regs[3] = 0xFF;
    this->regs[4] = 0xFF;
    this->regs[5] = 0xFF;
    this->regs[6] = 0xFF;
    this->regs[7] = 0xFF;
    this->regs[8] = 0xFF;
    this->regs[9] = 0xFF;
    this->regs[10] = 0xFF;
    this->regs[11] = initParamsx->unk_10;
    this->regs[0] = func_800CA22C(globalCtx, &globalCtx->colCtx, initParamsx, (? *)0x40400000, &sp30, &sp28);
    this->regs[12] = (s16) sp28;
    return 1;
}

void func_80979C38(GraphicsContext **arg0, s32 *arg1, ? arg2) {
    f32 sp118;
    ? spD4;
    ? sp94;
    ? sp54;
    CollisionContext *sp24;
    CollisionContext *temp_a0;
    CollisionHeader *temp_v0;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    GraphicsContext *temp_s1;
    Mtx *temp_v0_2;
    s16 temp_a1;
    f32 phi_f2;

    temp_s1 = *arg0;
    temp_a0 = arg0 + 0x830;
    sp118 = (f32) arg1->unk_42 * 0.0025f;
    arg0 = arg0;
    sp24 = temp_a0;
    temp_v0 = BgCheck_GetActorMeshHeader(temp_a0, (s32) arg1->unk_58);
    temp_a1 = arg1->unk_40;
    if ((temp_a1 != -1) && (temp_v0 != 0) && ((s32) temp_a1 < (s32) temp_v0->numWaterBoxes)) {
        phi_f2 = func_800CA568(temp_a0, temp_a1, arg1->unk_58);
    } else {
        phi_f2 = arg1[1];
    }
    SkinMatrix_SetTranslate((MtxF *) &spD4, arg1->unk_0, phi_f2, arg1[2]);
    SkinMatrix_SetScale((MtxF *) &sp94, sp118, sp118, sp118);
    SkinMatrix_MtxFMtxFMult((MtxF *) &spD4, (MtxF *) &sp94, (MtxF *) &sp54);
    temp_v0_2 = SkinMatrix_MtxFToNewMtx(temp_s1, (MtxF *) &sp54);
    if (temp_v0_2 != 0) {
        temp_v1 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v1[1];
        temp_v1->words.w1 = (u32) temp_v0_2;
        temp_v1->words.w0 = 0xDA380003;
        func_8012C974(temp_s1);
        temp_v1_2 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v1_2[1];
        temp_v1_2->words.w0 = 0xFA000000;
        temp_v1_2->words.w1 = (arg1->unk_4C & 0xFF) | (arg1->unk_46 << 0x18) | ((arg1->unk_48 & 0xFF) << 0x10) | ((arg1->unk_4A & 0xFF) << 8);
        temp_v1_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v1_3[1];
        temp_v1_3->words.w0 = 0xFB000000;
        temp_v1_3->words.w1 = (arg1->unk_54 & 0xFF) | (arg1->unk_4E << 0x18) | ((arg1->unk_50 & 0xFF) << 0x10) | ((arg1->unk_52 & 0xFF) << 8);
        temp_v1_4 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v1_4[1];
        temp_v1_4->words.w1 = 0x20;
        temp_v1_4->words.w0 = 0xE3001A01;
        temp_v1_5 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v1_5[1];
        temp_v1_5->words.w1 = 0x80;
        temp_v1_5->words.w0 = 0xE3001801;
        temp_v1_6 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v1_6[1];
        temp_v1_6->words.w0 = 0xDE000000;
        temp_v1_6->words.w1 = arg1[14];
    }
}

void EffectSsGRipple_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    if (this->regs[11] == 0) {
        func_80979C38((GraphicsContext **) this, &D_040367B0);
    }
}

void EffectSsGRipple_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    ? sp38;
    s32 sp34;
    f32 *temp_a0;
    f32 *temp_a0_2;
    s16 temp_v1;
    s16 phi_v0;

    temp_v1 = this->regs[11];
    this->regs[0] = func_800CA22C((GlobalContext *) &globalCtx->colCtx, (CollisionContext *) this, (void *)0x40400000, &sp38, &sp34);
    this->regs[12] = (s16) sp34;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        this->regs[11] = temp_v1 - 1;
        phi_v0 = this->regs[11];
    }
    if (phi_v0 == 0) {
        temp_a0 = &sp44;
        sp44 = (f32) this->regs[1];
        Math_SmoothStepToF(temp_a0, (f32) this->regs[2], 0.2f, 30.0f, 1.0f);
        temp_a0_2 = &sp40;
        this->regs[1] = (s16) (s32) sp44;
        sp40 = (f32) this->regs[6];
        sp3C = (f32) this->regs[10];
        Math_SmoothStepToF(temp_a0_2, 0.0f, 0.2f, 15.0f, 7.0f);
        Math_SmoothStepToF(&sp3C, 0.0f, 0.2f, 15.0f, 7.0f);
        this->regs[6] = (s16) (s32) sp40;
        this->regs[10] = (s16) (s32) sp3C;
    }
}
