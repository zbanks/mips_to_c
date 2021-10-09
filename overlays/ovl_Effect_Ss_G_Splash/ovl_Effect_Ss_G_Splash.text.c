struct _mips2c_stack_EffectSsGSplash_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EffectSsGSplash_Init {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EffectSsGSplash_Update {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

static ? D_8097A3E8;                                /* unable to generate initializer */

s32 EffectSsGSplash_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    u8 temp_v0;

    Math_Vec3f_Copy(&this->velocity, &D_801D15B0);
    Math_Vec3f_Copy(&this->accel, &D_801D15B0);
    Math_Vec3f_Copy((Vec3f *) this, (Vec3f *) initParamsx);
    this->draw = EffectSsGSplash_Draw;
    this->update = EffectSsGSplash_Update;
    if (initParamsx->unkE == 0) {
        initParamsx->unkE = 0x258;
    }
    this->gfx = (void *) D_0403A0F0;
    this->life = 8;
    this->regs[0] = 0;
    this->regs[2] = 0x64;
    this->regs[1] = initParamsx->unkE;
    if (initParamsx->unkD != 0) {
        this->regs[3] = (s16) initParamsx->unk10;
        this->regs[4] = (s16) initParamsx->unk11;
        this->regs[5] = (s16) initParamsx->unk12;
        this->regs[6] = (s16) initParamsx->unk13;
        this->regs[7] = (s16) initParamsx->unk14;
        this->regs[8] = (s16) initParamsx->unk15;
        this->regs[9] = (s16) initParamsx->unk16;
        this->regs[10] = (s16) initParamsx->unk17;
        this->regs[11] = (s16) initParamsx->unkC;
    } else {
        temp_v0 = initParamsx->unkC;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {
                if (temp_v0 != 2) {

                } else {
                    this->regs[3] = 0xFF;
                    this->regs[4] = 0xFF;
                    this->regs[5] = 0xFF;
                    this->regs[6] = 0xC8;
                    this->regs[7] = 0xFF;
                    this->regs[8] = 0xFF;
                    this->regs[9] = 0xFF;
                    this->regs[10] = 0xC8;
                    this->regs[11] = 2;
                }
            } else {
                this->regs[3] = 0xFF;
                this->regs[4] = 0xFF;
                this->regs[5] = 0xFF;
                this->regs[6] = 0xFF;
                this->regs[7] = 0xFF;
                this->regs[8] = 0xFF;
                this->regs[9] = 0xFF;
                this->regs[10] = 0xFF;
                this->regs[11] = 1;
            }
        } else {
            this->regs[3] = 0xFF;
            this->regs[4] = 0xFF;
            this->regs[5] = 0xFF;
            this->regs[6] = 0xC8;
            this->regs[7] = 0xFF;
            this->regs[8] = 0xFF;
            this->regs[9] = 0xFF;
            this->regs[10] = 0xC8;
            this->regs[11] = 0;
        }
    }
    return 1;
}

void EffectSsGSplash_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    s16 temp_v0;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s16 phi_v0;
    s16 phi_v0_2;
    s16 phi_v0_3;

    temp_v0 = this->regs[11];
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                return;
            }
            temp_lo = (s32) this->regs[0] / 0x64;
            phi_v0 = (s16) temp_lo;
            if ((s32) (s16) temp_lo >= 8) {
                phi_v0 = 7;
            }
            EffectSs_DrawGEffect(globalCtx, this, *(&D_8097A3E8 + (phi_v0 * 4)));
            return;
        }
        temp_lo_2 = (s32) this->regs[0] / 0x64;
        phi_v0_2 = (s16) temp_lo_2;
        if ((s32) (s16) temp_lo_2 >= 8) {
            phi_v0_2 = 7;
        }
        EffectSs_DrawGEffect(globalCtx, this, *(&D_8097A3E8 + (phi_v0_2 * 4)));
        return;
    }
    temp_lo_3 = (s32) this->regs[0] / 0x64;
    phi_v0_3 = (s16) temp_lo_3;
    if ((s32) (s16) temp_lo_3 >= 8) {
        phi_v0_3 = 7;
    }
    EffectSs_DrawGEffect(globalCtx, this, *(&D_8097A3E8 + (phi_v0_3 * 4)));
}

void EffectSsGSplash_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 sp30;
    ? sp2C;

    if ((this->regs[11] == 1) && (this->life == 5)) {
        sp2C.unk0 = (f32) this->pos.x;
        sp2C.unk4 = (f32) this->pos.y;
        sp2C.unk8 = (f32) this->pos.z;
        sp30 += (f32) (this->regs[1] * 0x14) * 0.002f;
        EffectSsGSplash_Spawn(globalCtx, (Vec3f *) &sp2C, NULL, NULL, (s16) 2, (s16) ((s32) this->regs[1] / 2));
    }
    this->regs[0] += this->regs[2];
}
