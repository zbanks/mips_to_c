struct _mips2c_stack_EffectSsKakera_Draw {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0x8];                    /* maybe part of sp20[3]? */
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ char pad_30[0x10];                   /* maybe part of sp2C[5]? */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EffectSsKakera_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EffectSsKakera_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8097DE30 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8097E130 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ObjectContext *sp1C;                 /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8097E19C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_8097E34C {};              /* size 0x0 */

struct _mips2c_stack_func_8097E368 {};              /* size 0x0 */

struct _mips2c_stack_func_8097E384 {};              /* size 0x0 */

struct _mips2c_stack_func_8097E3C0 {};              /* size 0x0 */

struct _mips2c_stack_func_8097E400 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8097E420 {};              /* size 0x0 */

struct _mips2c_stack_func_8097E4B0 {};              /* size 0x0 */

struct _mips2c_stack_func_8097E4F0 {};              /* size 0x0 */

struct _mips2c_stack_func_8097E584 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8097E660 {};              /* size 0x0 */

struct _mips2c_stack_func_8097E698 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8097E7E0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

f32 func_8097DE30(f32 arg0, f32 arg1, EffectSs *);  /* static */
void func_8097E130(EffectSs *arg0, GlobalContext *arg1, s16); /* static */
void func_8097E19C(EffectSs *arg0);                 /* static */
void func_8097E34C(EffectSs *arg0);                 /* static */
? func_8097E368(f32 arg0, ? arg1);                  /* static */
f32 func_8097E384(f32 arg0, s32 arg1);              /* static */
f32 func_8097E3C0(f32 arg0, s32 arg1);              /* static */
void func_8097E400();                               /* static */
s32 func_8097E420(EffectSs *arg0, f32 *arg1, f32 arg2); /* static */
s32 func_8097E4B0(EffectSs *arg0, f32 *arg1, f32 arg2); /* static */
s32 func_8097E4F0(EffectSs *arg0, f32 *arg1, f32 arg2); /* static */
s32 func_8097E584(EffectSs *arg0, f32 *arg1, f32 arg2); /* static */
s32 func_8097E660(EffectSs *arg0, f32 *arg1, f32 arg2); /* static */
s32 func_8097E698(EffectSs *arg0);                  /* static */
void func_8097E7E0(Vec3f *arg0, GlobalContext *arg1); /* static */
static ? D_8097EAD8;                                /* unable to generate initializer */
static ? D_8097EAE4;                                /* unable to generate initializer */
static ? D_8097EB0C;                                /* unable to generate initializer */
static ? D_8097EB14;                                /* unable to generate initializer */
static ? D_8097EB30;                                /* unable to generate initializer */
static ? D_8097EB3C;                                /* unable to generate initializer */
static ? D_8097EB64;                                /* unable to generate initializer */

s32 EffectSsKakera_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    s16 temp_a2;
    void *temp_v1;

    this->pos.x = initParamsx->unk_0;
    this->pos.y = initParamsx->unk_4;
    this->pos.z = initParamsx->unk_8;
    this->velocity.x = initParamsx->unk_C;
    this->velocity.y = initParamsx->unk_10;
    this->velocity.z = initParamsx->unk_14;
    this->priority = 0x65;
    this->life = (s16) initParamsx->unk_34;
    temp_v1 = initParamsx->unk_3C;
    if (temp_v1 != 0) {
        this->gfx = temp_v1;
        temp_a2 = initParamsx->unk_3A;
        if ((temp_a2 == 1) || (temp_a2 == 2) || (temp_a2 == 3)) {
            this->regs[10] = -1;
        } else {
            this->regs[10] = temp_a2;
            func_8097E130(this, globalCtx, temp_a2);
        }
    } else {
        __assert("../z_eff_kakera.c", 0xC1U);
    }
    this->draw = EffectSsKakera_Draw;
    this->update = EffectSsKakera_Update;
    this->vec.x = initParamsx->unk_18;
    this->vec.y = initParamsx->unk_1C;
    this->vec.z = initParamsx->unk_20;
    this->regs[0] = initParamsx->unk_2C;
    this->regs[1] = initParamsx->unk_24;
    this->regs[2] = (s16) (s32) (Rand_ZeroOne() * 32768.0f);
    this->regs[3] = (s16) (s32) (Rand_ZeroOne() * 32768.0f);
    this->regs[4] = initParamsx->unk_26;
    this->regs[5] = initParamsx->unk_28;
    this->regs[6] = initParamsx->unk_2A;
    this->regs[7] = initParamsx->unk_2E;
    this->regs[8] = initParamsx->unk_30;
    this->regs[9] = initParamsx->unk_32;
    this->regs[12] = initParamsx->unk_38;
    return 1;
}

f32 func_8097DE30(f32 arg0, f32 arg1) {
    return ((2.0f * (Rand_ZeroOne() * arg1)) - arg1) + arg0;
}

void EffectSsKakera_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 sp44;
    s32 sp40;
    Gfx *sp2C;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_s0;
    void *temp_v1;
    void *temp_v1_2;

    temp_s0 = globalCtx->state.gfxCtx;
    sp44 = (f32) this->regs[7] * 0.00390625f;
    sp40 = (s32) this->regs[12];
    if (this->regs[10] != -1) {
        if (((((s32) this->regs[4] >> 7) & 1) << 7) == 0x80) {
            temp_v0 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0[1];
            temp_v0->words.w0 = 0xDB060018;
            temp_v0->words.w1 = (u32) globalCtx->objectCtx.status[this->regs[11]].segment;
        } else {
            temp_v0_2 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_2[1];
            temp_v0_2->words.w0 = 0xDB060018;
            temp_v0_2->words.w1 = (u32) globalCtx->objectCtx.status[this->regs[11]].segment;
        }
    }
    SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
    Matrix_RotateY(this->regs[3], 1U);
    SysMatrix_InsertXRotation_s(this->regs[2], 1);
    Matrix_Scale(sp44, sp44, sp44, 1);
    if (((((s32) this->regs[4] >> 7) & 1) << 7) == 0x80) {
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xDA380003;
        sp2C = temp_v0_3;
        sp2C->words.w1 = Matrix_NewMtx(temp_s0);
        func_8012C2DC(globalCtx->state.gfxCtx);
        if (sp40 >= 0) {
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_v1 = (sp40 * 4) + &D_8097EAD8;
            temp_s0->polyXlu.p = &temp_v0_4[1];
            temp_v0_4->words.w0 = temp_v1->unk_0 | 0xFA000000;
            temp_v0_4->words.w1 = (temp_v1->unk_3 << 8) | (temp_v1->unk_1 << 0x18) | (temp_v1->unk_2 << 0x10) | 0xFF;
        }
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xDE000000;
        temp_v0_5->words.w1 = (u32) this->gfx;
        return;
    }
    temp_v0_6 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_6[1];
    temp_v0_6->words.w0 = 0xDA380003;
    sp20 = temp_v0_6;
    sp20->words.w1 = Matrix_NewMtx(temp_s0);
    func_8012C28C(globalCtx->state.gfxCtx);
    if (sp40 >= 0) {
        temp_v0_7 = temp_s0->polyOpa.p;
        temp_v1_2 = (sp40 * 4) + &D_8097EAD8;
        temp_s0->polyOpa.p = &temp_v0_7[1];
        temp_v0_7->words.w0 = temp_v1_2->unk_0 | 0xFA000000;
        temp_v0_7->words.w1 = (temp_v1_2->unk_3 << 8) | (temp_v1_2->unk_1 << 0x18) | (temp_v1_2->unk_2 << 0x10) | 0xFF;
    }
    temp_v0_8 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_8[1];
    temp_v0_8->words.w0 = 0xDE000000;
    temp_v0_8->words.w1 = (u32) this->gfx;
}

void func_8097E130(EffectSs *arg0, GlobalContext *arg1) {
    ObjectContext *sp1C;
    ObjectContext *temp_a0;
    s16 temp_a1;
    s16 temp_a1_2;

    temp_a0 = arg1 + 0x17D88;
    temp_a1 = arg0->regs[10];
    arg0 = arg0;
    sp1C = temp_a0;
    arg0->regs[11] = Object_GetIndex(temp_a0, temp_a1);
    temp_a1_2 = arg0->regs[11];
    if (((s32) temp_a1_2 < 0) || (arg0 = arg0, (Object_IsLoaded(temp_a0, (s32) temp_a1_2) == 0))) {
        arg0->life = 0;
        arg0->draw = NULL;
    }
}

void func_8097E19C(EffectSs *arg0) {
    f32 sp44;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 phi_f6;
    f32 phi_f0;
    f32 phi_f2;

    temp_f18 = (f32) arg0->regs[5] * 0.0009765625f;
    temp_f20 = (f32) arg0->regs[6] * 0.0009765625f;
    sp34 = temp_f18;
    temp_f14 = (f32) arg0->regs[9] * 0.0009765625f * 4.0f;
    sp44 = temp_f14;
    temp_f2 = arg0->velocity.x - func_8097DE30(0.0f, temp_f14);
    sp38 = temp_f2;
    temp_f16 = arg0->velocity.y - func_8097DE30(0.0f, temp_f14);
    sp3C = temp_f16;
    temp_f12 = arg0->velocity.z - func_8097DE30(0.0f, temp_f14);
    if (temp_f2 > 0.0f) {
        arg0->velocity.x -= (temp_f2 * temp_f18) + (temp_f2 * temp_f2 * temp_f20);
    } else {
        arg0->velocity.x -= (temp_f2 * temp_f18) - (temp_f2 * temp_f2 * temp_f20);
    }
    if (temp_f16 > 0.0f) {
        temp_f0 = temp_f16 * temp_f18;
        temp_f2_2 = temp_f16 * temp_f16 * temp_f20;
        phi_f6 = arg0->velocity.y - (temp_f0 + temp_f2_2);
        phi_f0 = temp_f0;
        phi_f2 = temp_f2_2;
    } else {
        temp_f0_2 = temp_f16 * temp_f18;
        temp_f2_3 = temp_f16 * temp_f16 * temp_f20;
        phi_f6 = arg0->velocity.y - (temp_f0_2 - temp_f2_3);
        phi_f0 = temp_f0_2;
        phi_f2 = temp_f2_3;
    }
    arg0->velocity.y = phi_f6;
    if (temp_f12 > 0.0f) {
        arg0->velocity.z -= phi_f0 + phi_f2;
        return;
    }
    arg0->velocity.z -= phi_f0 - phi_f2;
}

void func_8097E34C(EffectSs *arg0) {
    arg0->accel.z = 0.0f;
    arg0->accel.y = 0.0f;
    arg0->accel.x = 0.0f;
}

? func_8097E368(f32 arg0, ? arg1) {
    return 0x3F800000;
}

f32 func_8097E384(f32 arg0, s32 arg1) {
    f32 temp_f2;

    temp_f2 = *(&D_8097EAE4 + (arg1 * 4));
    if (temp_f2 < arg0) {
        return temp_f2 / arg0;
    }
    return 1.0f;
}

f32 func_8097E3C0(f32 arg0, s32 arg1) {
    f32 temp_f14;
    f32 temp_f2;

    temp_f2 = arg0 * arg0;
    temp_f14 = *(&D_8097EAE4 + (arg1 * 4));
    if (temp_f14 < temp_f2) {
        return temp_f14 / temp_f2;
    }
    return 1.0f;
}

void func_8097E400(void) {
    func_8097E3C0();
}

s32 func_8097E420(EffectSs *arg0, f32 *arg1, f32 arg2) {
    s32 temp_v0;
    void *temp_v1;
    f32 phi_f0;

    temp_v0 = arg0->regs[0] & 3;
    if (temp_v0 != 0) {
        temp_v1 = (temp_v0 * 4) + &D_8097EB0C;
        if (arg2 > 1.0f) {
            phi_f0 = 1.0f / arg2;
        } else {
            phi_f0 = 1.0f;
        }
        arg0->accel.x += temp_v1->unk_-4 * arg1[2] * phi_f0;
        arg0->accel.z -= temp_v1->unk_-4 * arg1->unk_0 * phi_f0;
    }
    return 1;
}

s32 func_8097E4B0(EffectSs *arg0, f32 *arg1, f32 arg2) {
    s32 temp_v0;

    temp_v0 = ((s32) arg0->regs[0] >> 2) & 7;
    if (temp_v0 != 0) {
        arg0->accel.y += *(&D_8097EB14 + (temp_v0 * 4));
    }
    return 1;
}

s32 func_8097E4F0(EffectSs *arg0, f32 *arg1, f32 arg2) {
    s32 temp_v0;
    void *temp_v1;
    f32 phi_f0;

    temp_v0 = ((s32) arg0->regs[0] >> 5) & 3;
    if (temp_v0 != 0) {
        temp_v1 = (temp_v0 * 4) + &D_8097EB30;
        if (arg2 > 1.0f) {
            phi_f0 = 1.0f / arg2;
        } else {
            phi_f0 = 1.0f;
        }
        arg0->accel.x -= arg1->unk_0 * temp_v1->unk_-4 * phi_f0;
        arg0->accel.z -= arg1[2] * temp_v1->unk_-4 * phi_f0;
    }
    return 1;
}

s32 func_8097E584(EffectSs *arg0, f32 *arg1, f32 arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f2;
    f32 temp_f6;
    s32 temp_a1;

    temp_a1 = ((s32) arg0->regs[0] >> 7) & 0xF;
    temp_f0 = *(&D_8097EB3C + (temp_a1 * 4))(arg2, temp_a1);
    temp_f0_2 = func_8097DE30(temp_f0, (f32) arg0->regs[9] * temp_f0 * 0.0009765625f, arg0);
    temp_f6 = arg0->accel.y * temp_f0_2;
    temp_f10 = arg0->accel.z * temp_f0_2;
    arg0->accel.x *= temp_f0_2;
    arg0->accel.y = temp_f6;
    arg0->accel.z = temp_f10;
    temp_f2 = temp_f0_2 * 0.01f;
    arg0->accel.x += temp_f2;
    arg0->accel.y += temp_f2;
    arg0->accel.z += temp_f2;
    return 1;
}

s32 func_8097E660(EffectSs *arg0, f32 *arg1, f32 arg2) {
    arg0->accel.y += (f32) arg0->regs[1] * 0.00390625f;
    return 1;
}

s32 func_8097E698(EffectSs *arg0) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f8;

    func_8097E34C(arg0);
    sp2C = arg0->pos.x - arg0->vec.x;
    temp_f18 = arg0->pos.y - arg0->vec.y;
    sp30 = temp_f18;
    temp_f8 = arg0->pos.z - arg0->vec.z;
    sp34 = temp_f8;
    temp_f20 = sqrtf((sp2C * sp2C) + (temp_f18 * temp_f18) + (temp_f8 * temp_f8));
    if (temp_f20 > 1000.0f) {
        return 0;
    }
    if (arg0->regs[0] != 0) {
        if (func_8097E420(arg0, &sp2C, temp_f20) == 0) {
            return 0;
        }
        if (func_8097E4B0(arg0, &sp2C, temp_f20) == 0) {
            return 0;
        }
        if (func_8097E4F0(arg0, &sp2C, temp_f20) == 0) {
            return 0;
        }
        if (func_8097E584(arg0, &sp2C, temp_f20) == 0) {
            return 0;
        }
        goto block_11;
    }
block_11:
    if (func_8097E660(arg0, &sp2C, temp_f20) == 0) {
        return 0;
    }
    return 1;
}

void func_8097E7E0(Vec3f *arg0, GlobalContext *arg1) {
    s16 temp_v0_2;
    s16 temp_v0_4;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_v0_3;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    if (arg0->unk_50 == 0) {
        temp_v1 = arg0->unk_48;
        if (((((s32) temp_v1 >> 4) & 1) * 0x10) == 0x10) {
            if (arg0->y <= (temp_v0->floorHeight - (f32) (((s32) temp_v1 >> 2) & 3))) {
                arg0->unk_52 = 0;
                temp_v0_2 = arg0->unk_52;
                arg0->unk_40 = 0;
                arg0->unk_48 = (s16) (temp_v1 & 0xFF9F);
                arg0[2].z = 0.0f;
                arg0[2].y = 0.0f;
                arg0[2].x = 0.0f;
                arg0[1].z = 0.0f;
                arg0[1].y = 0.0f;
                arg0[1].x = 0.0f;
                arg0->unk_4A = temp_v0_2;
                arg0->unk_42 = temp_v0_2;
                return;
            }
            /* Duplicate return node #17. Try simplifying control flow for better match */
            return;
        }
        if (arg0->y <= ((temp_v0->floorHeight - (f32) (((s32) temp_v1 >> 2) & 3)) - 600.0f)) {
            arg0->unk_5C = 0;
            return;
        }
        /* Duplicate return node #17. Try simplifying control flow for better match */
        return;
    }
    temp_v1_2 = arg0->unk_48;
    temp_v0_3 = temp_v1_2 & 3;
    if (temp_v0_3 != 0) {
        if (temp_v0_3 != 1) {
            if (temp_v0_3 != 2) {
                return;
            }
            if (func_800C5A20(arg1 + 0x830, arg0, *(&D_8097EB64 + ((((s32) temp_v1_2 >> 2) & 3) * 4))) != 0) {
                goto block_16;
            }
            /* Duplicate return node #17. Try simplifying control flow for better match */
            return;
        }
        if ((arg0[1].y < 0.0f) && (func_800C5A20(arg1 + 0x830, arg0, *(&D_8097EB64 + ((((s32) temp_v1_2 >> 2) & 3) * 4))) != 0) && (arg0[1].x *= func_8097DE30(0.9f, 0.2f), arg0[1].y *= -0.8f, temp_v0_4 = arg0->unk_50, arg0[1].z *= func_8097DE30(0.9f, 0.2f), ((s32) temp_v0_4 > 0))) {
            arg0->unk_50 = (s16) (temp_v0_4 - 1);
            return;
        }
        /* Duplicate return node #17. Try simplifying control flow for better match */
        return;
    }
block_16:
    arg0->unk_50 = 0;
}

void EffectSsKakera_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    s32 temp_v0;

    temp_v0 = (((s32) this->regs[4] >> 5) & 3) << 5;
    if (temp_v0 != 0x20) {
        if (temp_v0 != 0x40) {
            if (temp_v0 != 0x60) {

            } else {
                this->regs[2] += 0x3F27;
                this->regs[3] += 0xCA1;
            }
        } else {
            this->regs[2] += 0x1A7C;
            this->regs[3] += 0x47B;
        }
    } else {
        this->regs[2] += 0x47B;
        this->regs[3] += 0x139;
    }
    func_8097E19C(this);
    if (func_8097E698(this) == 0) {
        this->life = 0;
    }
    func_8097E7E0((Vec3f *) this, globalCtx);
    if (this->regs[10] != -1) {
        func_8097E130(this, globalCtx);
    }
}
