f32 func_800C3FA0(CollisionContext *, CollisionPoly **, f32 *); /* extern */
s32 func_800C4C74(CollisionContext *, EffectSs *, f32 *, f32 *, f32, CollisionPoly **, f32); /* extern */
? func_801822C4(MtxF *, s16 *, ?);                  /* extern */



s32 EffectSsDeadDs_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    this->pos.x = initParamsx->unk0;
    this->pos.y = initParamsx->unk4;
    this->pos.z = initParamsx->unk8;
    this->velocity.x = initParamsx->unkC;
    this->velocity.y = initParamsx->unk10;
    this->velocity.z = initParamsx->unk14;
    this->accel.x = initParamsx->unk18;
    this->accel.y = initParamsx->unk1C;
    this->accel.z = initParamsx->unk20;
    this->life = (s16) initParamsx->unk2C;
    this->regs[9] = initParamsx->unk26;
    this->regs[11] = (s16) ((s32) initParamsx->unk2C / 2);
    this->draw = EffectSsDeadDs_Draw;
    this->update = EffectSsDeadDs_Update;
    this->regs[10] = (s16) ((s32) initParamsx->unk28 / (s32) this->regs[11]);
    this->regs[0] = initParamsx->unk24;
    this->regs[1] = 0;
    this->regs[5] = initParamsx->unk28;
    return 1;
}

void EffectSsDeadDs_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 spC0;
    MtxF sp78;
    f32 sp6C;
    f32 sp68;
    CollisionPoly *sp64;
    s16 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    CollisionContext *sp30;
    CollisionContext *temp_a0_2;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    spC0 = (f32) this->regs[0] * 0.01f;
    func_8012C974(temp_a0);
    temp_v0 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xFA000000;
    temp_v0->words.w1 = this->regs[5] & 0xFF;
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0;
    temp_v0_2->words.w0 = 0xFB000000;
    sp68.unk0 = this->pos.x;
    sp68.unk4 = (f32) this->pos.y;
    sp68.unk8 = (f32) this->pos.z;
    if (this->regs[1] == 0) {
        sp40 = sp68 - this->velocity.x;
        temp_a0_2 = &globalCtx->colCtx;
        sp44 = sp6C - this->velocity.y;
        sp30 = temp_a0_2;
        sp48 = sp70 - this->velocity.z;
        if (func_800C4C74(temp_a0_2, this, &sp68, &sp40, 1.5f, &sp64, 1.0f) != 0) {
            func_800C0094(sp64, this->pos.x, this->pos.y, this->pos.z, &sp78);
            SysMatrix_SetCurrentState(&sp78);
        } else {
            sp6C += 1.0f;
            if (sp64 != 0) {
                func_800C0094(sp64, this->pos.x, func_800C3FA0(temp_a0_2, &sp64, &sp68) + 1.5f, this->pos.z, &sp78);
                SysMatrix_SetCurrentState(&sp78);
            } else {
                SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
                SysMatrix_CopyCurrentState(&sp78);
            }
        }
        func_801822C4(&sp78, &sp4C, 0);
        this->regs[2] = sp4C;
        this->regs[3] = sp4E;
        this->regs[4] = sp50;
        this->regs[1] += 1;
        this->pos.y = sp78.mf[3][1];
    }
    SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
    SysMatrix_InsertRotation(this->regs[2], this->regs[3], this->regs[4], 1);
    SysMatrix_RotateStateAroundXAxis(1.57f);
    Matrix_Scale(spC0, spC0, spC0, 1);
    temp_v0_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    temp_v0_3->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_4 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xFCFF97FF;
    temp_v0_4->words.w1 = 0xFF2DFEFF;
    temp_v0_5 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDE000000;
    temp_v0_5->words.w1 = (u32) &D_04054940;
}

void EffectSsDeadDs_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    if ((s32) this->life < (s32) this->regs[11]) {
        this->regs[0] += this->regs[9];
        if ((s32) this->regs[0] < 0) {
            this->regs[0] = 0;
        }
        this->regs[5] -= this->regs[10];
        if ((s32) this->regs[5] < 0) {
            this->regs[5] = 0;
        }
    }
}

