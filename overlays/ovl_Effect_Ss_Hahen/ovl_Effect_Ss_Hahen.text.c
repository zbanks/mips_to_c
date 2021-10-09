struct _mips2c_stack_EffectSsHahen_Draw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EffectSsHahen_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EffectSsHahen_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8097B270 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ObjectContext *sp18;                 /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8097B424 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Gfx *sp18;                           /* inferred */
    /* 0x1C */ char pad_1C[0x10];                   /* maybe part of sp18[5]? */
    /* 0x2C */ GraphicsContext *sp2C;               /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8097B504 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Gfx *sp18;                           /* inferred */
    /* 0x1C */ char pad_1C[0x10];                   /* maybe part of sp18[5]? */
    /* 0x2C */ GraphicsContext *sp2C;               /* inferred */
};                                                  /* size = 0x30 */

void func_8097B270(EffectSs *arg0, GlobalContext *arg1); /* static */
void func_8097B424(GraphicsContext **arg0, EffectSs *arg1); /* static */
void func_8097B504(GraphicsContext **arg0, EffectSs *arg1); /* static */

void func_8097B270(EffectSs *arg0, GlobalContext *arg1) {
    ObjectContext *sp18;
    ObjectContext *temp_a0;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_v0;

    temp_a0 = arg1 + 0x17D88;
    temp_a1 = arg0->regs[4];
    arg0 = arg0;
    sp18 = temp_a0;
    temp_v0 = Object_GetIndex(temp_a0, temp_a1);
    arg0->regs[5] = temp_v0;
    if (((s32) temp_v0 < 0) || (temp_a1_2 = arg0->regs[5], arg0 = arg0, (Object_IsLoaded(temp_a0, (s32) temp_a1_2) == 0))) {
        arg0->life = -1;
        arg0->draw = NULL;
    }
}

s32 EffectSsHahen_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    void *temp_v0;

    this->pos.x = initParamsx->unk_0;
    this->pos.y = initParamsx->unk_4;
    this->pos.z = initParamsx->unk_8;
    this->velocity.x = initParamsx->unk_C;
    this->velocity.y = initParamsx->unk_10;
    this->velocity.z = initParamsx->unk_14;
    this->accel.x = initParamsx->unk_18;
    this->accel.y = initParamsx->unk_1C;
    this->life = 0xC8;
    this->accel.z = initParamsx->unk_20;
    temp_v0 = initParamsx->unk_24;
    if (temp_v0 != 0) {
        this->gfx = temp_v0;
        this->regs[4] = initParamsx->unk_2C;
        func_8097B270(this, globalCtx);
    } else {
        this->gfx = (void *) &D_0401A620;
        this->regs[4] = -1;
    }
    this->draw = EffectSsHahen_Draw;
    this->update = EffectSsHahen_Update;
    this->regs[2] = initParamsx->unk_28;
    this->regs[3] = initParamsx->unk_2A;
    this->regs[0] = (s16) (s32) (Rand_ZeroOne() * 314.0f);
    this->regs[1] = (s16) (s32) (Rand_ZeroOne() * 314.0f);
    this->regs[6] = 0xC8 - initParamsx->unk_2E;
    return 1;
}

void func_8097B424(GraphicsContext **arg0, EffectSs *arg1) {
    GraphicsContext *sp2C;
    Gfx *sp18;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a2;

    temp_a2 = *arg0;
    if (arg1->regs[4] != -1) {
        temp_v0 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060018;
        temp_v0->words.w1 = (arg0 + (arg1->regs[5] * 0x44))->unk_17D98;
    }
    temp_v0_2 = temp_a2->polyOpa.p;
    temp_a2->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    arg0 = arg0;
    sp2C = temp_a2;
    sp18 = temp_v0_2;
    sp18->words.w1 = Matrix_NewMtx(temp_a2);
    sp2C = temp_a2;
    arg1 = arg1;
    func_8012C28C(*arg0);
    temp_v0_3 = temp_a2->polyOpa.p;
    temp_a2->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = arg1->gfx;
}

void func_8097B504(GraphicsContext **arg0, EffectSs *arg1) {
    GraphicsContext *sp2C;
    Gfx *sp18;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a2;

    temp_a2 = *arg0;
    if (arg1->regs[4] != -1) {
        temp_v0 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060018;
        temp_v0->words.w1 = (arg0 + (arg1->regs[5] * 0x44))->unk_17D98;
    }
    temp_v0_2 = temp_a2->polyXlu.p;
    temp_a2->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    arg0 = arg0;
    sp2C = temp_a2;
    sp18 = temp_v0_2;
    sp18->words.w1 = Matrix_NewMtx(temp_a2);
    sp2C = temp_a2;
    arg1 = arg1;
    func_8012C2DC(*arg0);
    temp_v0_3 = temp_a2->polyXlu.p;
    temp_a2->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = arg1->gfx;
}

void EffectSsHahen_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 phi_f20;

    if ((this->regs[2] & 1) != 0) {
        phi_f20 = (f32) this->regs[3] * 0.000100000005f;
    } else {
        phi_f20 = (f32) this->regs[3] * 0.001f;
    }
    SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
    SysMatrix_InsertYRotation_f((f32) this->regs[1] * 0.01f, 1);
    SysMatrix_RotateStateAroundXAxis((f32) this->regs[0] * 0.01f);
    Matrix_Scale(phi_f20, phi_f20, phi_f20, 1);
    if ((this->regs[2] & 2) != 0) {
        func_8097B504((GraphicsContext **) globalCtx, this);
        return;
    }
    func_8097B424((GraphicsContext **) globalCtx, this);
}

void EffectSsHahen_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    this->regs[0] += 0x37;
    this->regs[1] += 0xA;
    if ((this->pos.y <= globalCtx->actorCtx.actorList[2].first->floorHeight) && ((s32) this->life < (s32) this->regs[6])) {
        this->life = 0;
    }
    if (this->regs[4] != -1) {
        func_8097B270(this, globalCtx);
    }
}
