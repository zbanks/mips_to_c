struct _mips2c_stack_EffectSsGFire_Draw {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad20[0x20];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EffectSsGFire_Init {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EffectSsGFire_Update {};       /* size 0x0 */

static ? D_8097A618;                                /* unable to generate initializer */

s32 EffectSsGFire_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    Math_Vec3f_Copy(&this->velocity, &D_801D15B0);
    Math_Vec3f_Copy(&this->accel, &D_801D15B0);
    Math_Vec3f_Copy((Vec3f *) this, (Vec3f *) initParamsx);
    this->draw = EffectSsGFire_Draw;
    this->update = EffectSsGFire_Update;
    this->gfx = (void *) &D_04032270;
    this->life = 8;
    this->flags = 0;
    this->regs[1] = 0xC8;
    this->regs[0] = 0;
    this->regs[2] = 0x32;
    this->regs[3] = 0xFF;
    this->regs[4] = 0xDC;
    this->regs[5] = 0x50;
    this->regs[6] = 0xFF;
    this->regs[7] = 0x82;
    this->regs[8] = 0x1E;
    this->regs[9] = 0;
    this->regs[10] = 0;
    return 1;
}

void EffectSsGFire_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    ? sp20;

    sp20.unk0 = (s32) D_8097A618.unk0;
    sp20.unk4 = (s32) D_8097A618.unk4;
    sp20.unk8 = (s32) D_8097A618.unk8;
    sp20.unkC = (s32) D_8097A618.unkC;
    sp20.unk10 = (s32) D_8097A618.unk10;
    sp20.unk14 = (s32) D_8097A618.unk14;
    sp20.unk18 = (s32) D_8097A618.unk18;
    sp20.unk1C = (s32) D_8097A618.unk1C;
    EffectSs_DrawGEffect(globalCtx, this, *(&sp20 + ((s16) ((s32) ((s32) this->regs[0] / 0x64) % 7) * 4)));
}

void EffectSsGFire_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    this->regs[0] += this->regs[2];
}
