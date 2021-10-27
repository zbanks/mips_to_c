typedef struct EnTanron1 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ u8 unk_144;                        /* inferred */
    /* 0x0145 */ char pad_145[0x3];                 /* maybe part of unk_144[4]? */
    /* 0x0148 */ s16 unk_148;                       /* inferred */
    /* 0x014A */ char pad_14A[0x2];
    /* 0x014C */ f32 unk_14C;                       /* inferred */
    /* 0x0150 */ f32 unk_150;                       /* inferred */
    /* 0x0154 */ f32 unk_154;                       /* inferred */
    /* 0x0158 */ s16 unk_158;                       /* inferred */
    /* 0x015A */ char pad_15A[0x2];
    /* 0x015C */ f32 unk_15C;                       /* inferred */
    /* 0x0160 */ ? unk_160;                         /* inferred */
    /* 0x0160 */ char pad_160[0x320C];
} EnTanron1;                                        /* size = 0x336C */

struct _mips2c_stack_EnTanron1_Destroy {};          /* size 0x0 */

struct _mips2c_stack_EnTanron1_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTanron1_Init {};             /* size 0x0 */

struct _mips2c_stack_EnTanron1_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ PosRot *sp28;                        /* inferred */
    /* 0x2C */ ? *sp2C;                             /* inferred */
    /* 0x30 */ char pad_30[0x24];                   /* maybe part of sp2C[10]? */
    /* 0x54 */ Actor *sp54;                         /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ EnTanron1 *sp5C;                     /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80BB4E50 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BB5318 {
    /* 0x00 */ char pad_0[0x80];
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ char pad_88[0x10];                   /* maybe part of sp84[5]? */
    /* 0x98 */ ? sp98;                              /* inferred */
    /* 0x98 */ char pad_98[0x4];
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ WaterBox *spA0;                      /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ char pad_A8[0x4];
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ Vec3f *spB4;                         /* inferred */
    /* 0xB8 */ s16 spB8;                            /* inferred */
    /* 0xBA */ s16 spBA;                            /* inferred */
    /* 0xBC */ char pad_BC[0x1C];
};                                                  /* size = 0xD8 */

struct _mips2c_stack_func_80BB5AAC {
    /* 0x00 */ char pad_0[0x4C];
    /* 0x4C */ void *sp4C;                          /* inferred */
    /* 0x50 */ char pad_50[0x48];
};                                                  /* size = 0x98 */

? func_800B8D10(GlobalContext *, EnTanron1 *, f32, ?, f32, s32, s32); /* extern */
f32 func_800C3FA0(CollisionContext *, ? *, Vec3f *); /* extern */
void func_80BB4E50(? *arg0, PosRot *arg1, s16 arg2, s32); /* static */
void func_80BB5318(EnTanron1 *arg0, GlobalContext *arg1); /* static */
void func_80BB5AAC(void *arg0, GraphicsContext **arg1); /* static */
static ? D_80BB6228;                                /* unable to generate initializer */
static ? D_80BB6688;                                /* unable to generate initializer */
static ? D_80BB6700;                                /* unable to generate initializer */

void EnTanron1_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnTanron1 *this = (EnTanron1 *) thisx;
    this->actor.flags &= -2;
    if ((this->actor.params & 0x100) == 0) {
        this->unk_144 = 0;
        return;
    }
    this->actor.params = 0xC8;
    this->unk_144 = 1;
}

void EnTanron1_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTanron1 *this = (EnTanron1 *) thisx;

}

void func_80BB4E50(? *arg0, PosRot *arg1, s16 arg2) {
    s16 temp_v0;
    s32 temp_t2;
    ? *phi_a0;
    s16 phi_v0;

    phi_a0 = arg0;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_a0->unk_24 == 0) {
        phi_a0->unk_24 = 1U;
        phi_a0->unk_2C = 0.0f;
        phi_a0->unk_0 = (s32) arg1->pos.x;
        phi_a0->unk_4 = (s32) arg1->pos.y;
        phi_a0->unk_1C = 0;
        phi_a0->unk_1A = arg2;
        phi_a0->unk_8 = (s32) arg1->pos.z;
        phi_a0->unk_18 = (s16) phi_a0->unk_1C;
        arg0 = phi_a0;
        temp_t2 = (s32) Rand_ZeroFloat(100.0f);
        arg0->unk_28 = 0;
        arg0->unk_26 = (s16) temp_t2;
        if (Rand_ZeroOne() < 0.5f) {
            arg0->unk_2A = 0xC00;
            return;
        }
        arg0->unk_2A = -0xC00;
        return;
    }
    phi_a0 += 0x40;
    if ((s32) temp_v0 >= 0xC8) {
        return;
    }
    goto loop_1;
}

void EnTanron1_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnTanron1 *sp5C;
    Actor *sp54;
    ? *sp2C;
    PosRot *sp28;
    ? *temp_v0;
    Actor *temp_a0;
    Actor *temp_t0;
    Actor *temp_v0_2;
    Actor *temp_v0_3;
    Actor *temp_v0_4;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    s16 temp_s1;
    s16 temp_s1_2;
    s16 temp_v1;
    u8 temp_v1_2;
    ? *phi_v0;
    s16 phi_s1;
    Actor *phi_v0_2;
    f32 phi_f18;
    s16 phi_s1_2;
    Actor *phi_t0;
    s32 phi_a3;
    Actor *phi_v0_3;
    EnTanron1 *this = (EnTanron1 *) thisx;

    sp5C = this;
    temp_v0 = &this->unk_160;
    temp_t0 = globalCtx->actorCtx.actorList[2].first;
    sp2C = temp_v0;
    temp_v1 = this->unk_148;
    phi_v0 = temp_v0;
    phi_t0 = temp_t0;
    phi_a3 = 1;
    phi_t0 = temp_t0;
    if (temp_v1 != 0) {
        this->unk_148 = temp_v1 - 1;
    }
    temp_v1_2 = this->unk_144;
    if (temp_v1_2 != 0) {
        if (temp_v1_2 != 1) {
            if (temp_v1_2 != 0x64) {
                if (temp_v1_2 != 0xC8) {
                    phi_s1 = 0;
                    if (temp_v1_2 != 0xFA) {

                    } else {
                        do {
                            temp_s1 = phi_s1 + 1;
                            phi_s1 = temp_s1;
                            if ((phi_v0->unk_24 != 0) && ((s32) phi_v0->unk_28 < 8)) {
                                phi_v0->unk_28 = 8;
                                phi_v0->unk_24 = 2U;
                            }
                            phi_v0 += 0x40;
                        } while ((s32) temp_s1 < 0xC8);
                        this->unk_144 = 1;
                    }
                } else {
                    this->unk_14C = this->actor.world.pos.x;
                    this->unk_158 = 0x5000;
                    this->unk_15C = 50.0f;
                    this->unk_154 = this->actor.world.pos.z;
                    this->unk_150 = this->actor.world.pos.y;
                }
            } else {
                phi_f18 = 10.0f;
                if (10.0f < 1000.0f) {
                    temp_a0 = globalCtx->actorCtx.actorList[6].first;
loop_18:
                    phi_v0_2 = temp_a0;
                    if (temp_a0 != 0) {
loop_19:
                        if (phi_v0_2->id != 0x39) {
                            goto block_23;
                        }
                        temp_f16 = phi_v0_2->world.pos.x;
                        temp_f2 = this->unk_14C - temp_f16;
                        temp_f12 = (this->unk_150 - phi_v0_2->world.pos.y) + 70.0f;
                        temp_f14 = this->unk_154 - phi_v0_2->world.pos.z;
                        if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14)) < phi_f18) {
                            this->unk_14C = temp_f16;
                            this->unk_150 = phi_v0_2->world.pos.y + 70.0f;
                            this->unk_154 = phi_v0_2->world.pos.z;
                        } else {
block_23:
                            temp_v0_2 = phi_v0_2->next;
                            phi_v0_2 = temp_v0_2;
                            if (temp_v0_2 == 0) {
                                goto block_24;
                            }
                            goto loop_19;
                        }
                    } else {
block_24:
                        temp_f18 = phi_f18 + 20.0f;
                        phi_f18 = temp_f18;
                        if (!(temp_f18 < 1000.0f)) {
                            goto block_25;
                        }
                        goto loop_18;
                    }
                } else {
block_25:
                }
            }
        } else {
            this->unk_14C = temp_t0->world.pos.x;
            this->unk_150 = temp_t0->world.pos.y + 60.0f;
            this->unk_154 = temp_t0->world.pos.z;
            if (this->unk_148 != 0) {
                sp54 = temp_t0;
                func_80BB4E50(sp2C, &this->actor.world, this->actor.world.rot.y, 1);
            }
            this->unk_158 = 0x1000;
            this->unk_15C = 150.0f;
            phi_t0 = globalCtx->actorCtx.actorList[2].first;
            phi_a3 = 1;
        }
    } else {
        phi_s1_2 = 0;
        if ((s32) this->actor.params > 0) {
            sp28 = &this->actor.world;
            sp54 = temp_t0;
            do {
                func_80BB4E50(sp2C, sp28, (s16) (s32) Rand_ZeroFloat(65536.0f));
                temp_s1_2 = phi_s1_2 + 1;
                phi_s1_2 = temp_s1_2;
            } while ((s32) temp_s1_2 < (s32) sp5C->actor.params);
            phi_t0 = sp54;
        }
        this->unk_144 = 0xC8;
    }
    if ((phi_t0[1].room == 7) && (phi_t0->unk_B28 != 0)) {
        this->unk_14C = phi_t0->unk_B9C;
        this->unk_150 = phi_t0[9].focus.pos.x;
        this->unk_158 = 0x5000;
        this->unk_15C = 50.0f;
        this->unk_154 = phi_t0[9].focus.pos.y;
        if (phi_a3 != this->unk_144) {
            this->unk_144 = 0x64;
        }
    } else {
        temp_v0_3 = globalCtx->actorCtx.actorList[3].first;
        phi_v0_3 = temp_v0_3;
        if (temp_v0_3 != 0) {
loop_38:
            if (phi_a3 == phi_v0_3->params) {
                temp_v0_4 = phi_v0_3->next;
                phi_v0_3 = temp_v0_4;
                if (temp_v0_4 != 0) {
                    goto loop_38;
                }
            } else {
                this->unk_14C = phi_v0_3->world.pos.x;
                this->unk_150 = phi_v0_3->world.pos.y + 50.0f;
                this->unk_158 = 0x1000;
                this->unk_15C = 150.0f;
                this->unk_154 = phi_v0_3->world.pos.z;
                if (phi_a3 != this->unk_144) {
                    this->unk_144 = 0x64;
                }
            }
        }
    }
    func_80BB5318(this, globalCtx);
}

void EnTanron1_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnTanron1 *this = (EnTanron1 *) thisx;
    func_80BB5AAC();
}

void func_80BB5318(EnTanron1 *arg0, GlobalContext *arg1) {
    s16 spBA;
    s16 spB8;
    Vec3f *spB4;
    f32 spB0;
    f32 spA4;
    WaterBox *spA0;
    f32 sp9C;
    ? sp98;
    f32 sp84;
    f32 sp80;
    CollisionContext *temp_s1_2;
    Vec3f *temp_s0;
    Vec3f *temp_s1;
    f32 *temp_t9;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f22_4;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f24_3;
    f32 temp_f24_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    s16 temp_s5;
    s16 temp_v0_4;
    u8 temp_v0_3;
    void *temp_s4;
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;
    Vec3f *phi_s0;
    void *phi_s2;
    f32 phi_f28;
    s16 phi_s5;

    temp_s4 = arg1->actorCtx.actorList[2].first;
    spBA = 0;
    spB8 = 0;
    spB4 = NULL;
    temp_f30 = arg0->unk_15C;
    phi_s2 = NULL;
    phi_f28 = 0.0f;
    if (temp_s4->unk_ADC != 0) {
        phi_s2 = temp_s4 + 0xB9C;
        if ((s32) temp_s4[8].colChkInfo.atHitEffect >= 0x1E) {
            phi_f28 = 2500.0f;
        } else {
            phi_f28 = 400.0f;
        }
    }
    temp_v0 = arg1->actorCtx.actorList[3].first;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
loop_5:
        if (phi_v0->params != 1) {
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
            if (temp_v0_2 != 0) {
                goto loop_5;
            }
        } else {
            phi_s2 = phi_v0 + 0x24;
            phi_f28 = 40000.0f;
        }
    }
    phi_s0 = arg0 + 0x160;
    phi_s5 = 0;
    if ((s32) arg0->actor.params > 0) {
        do {
            temp_v0_3 = phi_s0->unk_24;
            if (temp_v0_3 != 0) {
                phi_s0->unk_26 = (s16) (phi_s0->unk_26 + 1);
                phi_s0->x += phi_s0[1].x;
                phi_s0->y += phi_s0[1].y;
                phi_s0->z += phi_s0[1].z;
                if (temp_v0_3 != 0) {
                    spB4 = phi_s0;
                    temp_v0_4 = phi_s0->unk_28;
                    if (temp_v0_4 == 0) {
                        spBA += 1;
                        phi_s0[3].z = Math_SinS((s16) (phi_s0->unk_26 * 0x5000)) * 1.2f;
                        if ((phi_s0->unk_26 & 3) == 0) {
                            temp_f20 = phi_s0[4].x + (arg0->unk_14C - phi_s0->x);
                            temp_f24 = phi_s0[4].y + (arg0->unk_150 - phi_s0->y);
                            temp_f22 = phi_s0[4].z + (arg0->unk_154 - phi_s0->z);
                            phi_s0->unk_20 = Math_Atan2S(temp_f20, temp_f22);
                            phi_s0->unk_1E = Math_Atan2S(temp_f24, sqrtf((temp_f20 * temp_f20) + (temp_f22 * temp_f22)));
                            if ((phi_s0->unk_26 & 0xF) == 0) {
                                phi_s0[4].x = randPlusMinusPoint5Scaled(temp_f30);
                                phi_s0[4].y = randPlusMinusPoint5Scaled(temp_f30 * 0.5f);
                                phi_s0[4].z = randPlusMinusPoint5Scaled(temp_f30);
                            }
                            temp_f20_2 = temp_s4->world.pos.x - phi_s0->x;
                            temp_f24_2 = (temp_s4->world.pos.y + 40.0f) - phi_s0->y;
                            temp_f22_2 = temp_s4->world.pos.z - phi_s0->z;
                            if ((((temp_f20_2 * temp_f20_2) + (temp_f24_2 * temp_f24_2) + (temp_f22_2 * temp_f22_2)) < 400.0f) && (temp_s4->unk_14B != 3)) {
                                func_800B8D10(arg1, arg0, 0.0f, 0, 0.0f, 1, 1);
                            }
                        }
                        Math_ApproachS(phi_s0 + 0x1A, phi_s0->unk_20, 2, arg0->unk_158);
                        Math_ApproachS(phi_s0 + 0x18, phi_s0->unk_1E, 2, arg0->unk_158);
                        Matrix_RotateY(phi_s0->unk_1A, 0U);
                        SysMatrix_InsertXRotation_s((s16) ((s32) phi_s0->unk_18 * -1), 1);
                        temp_s1 = phi_s0 + 0xC;
                        SysMatrix_GetStateTranslationAndScaledZ(6.0f, temp_s1);
                        if (phi_s2 != 0) {
                            temp_f20_3 = phi_s2->unk_0 - phi_s0->x;
                            temp_f22_3 = phi_s2->unk_8 - phi_s0->z;
                            temp_f2 = temp_f20_3 * temp_f20_3;
                            temp_f24_3 = phi_s2->unk_4 - phi_s0->y;
                            temp_f16 = temp_f22_3 * temp_f22_3;
                            if ((temp_f2 + (temp_f24_3 * temp_f24_3) + temp_f16) < phi_f28) {
                                sp84 = temp_f2;
                                sp80 = temp_f16;
                                phi_s0->unk_20 = Math_Atan2S(temp_f20_3, temp_f22_3);
                                phi_s0->unk_1E = Math_Atan2S(temp_f24_3, sqrtf(temp_f2 + temp_f16));
                                Matrix_RotateY(phi_s0->unk_20, 0U);
                                SysMatrix_InsertXRotation_s((s16) ((s32) phi_s0->unk_1E * -1), 1);
                                SysMatrix_GetStateTranslationAndScaledZ(-20.0f, temp_s1);
                                if (phi_f28 >= 100000.0f) {
                                    phi_s0->unk_28 = 1;
                                } else {
                                    phi_s0->unk_28 = 6;
                                }
                                phi_s0->unk_24 = 2U;
                                spB8 += 1;
                            }
                        }
                    } else if ((s32) temp_v0_4 < 9) {
                        phi_s0->unk_18 = (s16) (phi_s0->unk_18 + 0x3000);
                        phi_s0->unk_1A = (s16) (phi_s0->unk_1A + 0x5000);
                        phi_s0[4].x = 0.0f;
                        phi_s0[4].y = 0.0f;
                        phi_s0->unk_28 = (s16) (temp_v0_4 + 1);
                    } else {
                        phi_s0->unk_1A = (s16) (phi_s0->unk_1A + phi_s0->unk_2A);
                        Math_ApproachS(phi_s0 + 0x18, 0, 0xA, 0x1000);
                        Matrix_RotateY(phi_s0->unk_1A, 0U);
                        SysMatrix_GetStateTranslationAndScaledZ(phi_s0[4].x, (Vec3f *) &spA4);
                        phi_s0[1].x = spA4;
                        phi_s0[1].y = -2.0f;
                        phi_s0[1].z = spAC;
                        if (phi_s2 != 0) {
                            temp_f20_4 = phi_s2->unk_0 - phi_s0->x;
                            temp_f22_4 = phi_s2->unk_8 - phi_s0->z;
                            temp_f2_2 = temp_f20_4 * temp_f20_4;
                            temp_f24_4 = phi_s2->unk_4 - phi_s0->y;
                            temp_f16_2 = temp_f22_4 * temp_f22_4;
                            if ((temp_f2_2 + (temp_f24_4 * temp_f24_4) + temp_f16_2) < phi_f28) {
                                sp84 = temp_f2_2;
                                sp80 = temp_f16_2;
                                phi_s0->unk_20 = Math_Atan2S(temp_f20_4, temp_f22_4);
                                phi_s0->unk_1E = Math_Atan2S(temp_f24_4, sqrtf(temp_f2_2 + temp_f16_2));
                                Matrix_RotateY(phi_s0->unk_20, 0U);
                                SysMatrix_InsertXRotation_s((s16) ((s32) phi_s0->unk_1E * -1), 1);
                                SysMatrix_GetStateTranslationAndScaledZ(-20.0f, phi_s0 + 0xC);
                                phi_s0[4].x = 5.0f;
                                phi_s0[5].x = phi_s0->y - 1000.0f;
                            }
                        }
                        temp_f0 = phi_s0[5].x + 5.0f;
                        if (phi_s0->y <= temp_f0) {
                            phi_s0->y = temp_f0;
                            Math_ApproachZeroF(phi_s0 + 0x30, 1.0f, 0.3f);
                            Math_ApproachS(phi_s0 + 0x2A, 0, 1, 0x100);
                            phi_s0->unk_28 = (s16) (phi_s0->unk_28 + 1);
                            if ((s32) phi_s0->unk_28 >= 0x33) {
                                phi_s0->unk_24 = 0U;
                            }
                        } else {
                            Math_ApproachF(phi_s0 + 0x30, phi_s0[4].y, 1.0f, 0.5f);
                            if ((phi_s0->unk_26 & 0xF) == 0) {
                                temp_s1_2 = arg1 + 0x830;
                                if (Rand_ZeroOne() < 0.5f) {
                                    phi_s0[4].y = randPlusMinusPoint5Scaled(12.0f);
                                }
                                phi_s0[5].x = func_800C3FA0(temp_s1_2, &sp98, phi_s0);
                                temp_t9 = &sp9C;
                                sp9C = phi_s0->y;
                                func_800CA1AC(arg1, temp_s1_2, phi_s0->x, phi_s0->z, temp_t9, &spA0);
                                if ((sp9C < phi_s0->y) && (phi_s0[5].x < sp9C)) {
                                    phi_s0[5].x = sp9C;
                                }
                            }
                        }
                    }
                }
            }
            temp_s5 = phi_s5 + 1;
            phi_s0 += 0x40;
            phi_s5 = temp_s5;
        } while ((s32) temp_s5 < (s32) arg0->actor.params);
    }
    if (spB4 != 0) {
        temp_s0 = arg0 + 0x3360;
        SkinMatrix_Vec3fMtxFMultXYZW(&arg1->projectionMatrix, spB4, temp_s0, &spB0);
        if ((s32) spB8 >= (s32) (s16) (gGameInfo->data[1287] + 0x14)) {
            func_8019F1C0(temp_s0, 0x399CU);
            return;
        }
        if ((s32) spBA >= 0x14) {
            func_8019F1C0(temp_s0, 0x319BU);
        }
        /* Duplicate return node #45. Try simplifying control flow for better match */
    }
}

void func_80BB5AAC(void *arg0, GraphicsContext **arg1) {
    void *sp4C;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s16 temp_a0_2;
    s16 temp_s4;
    s16 temp_s4_2;
    void *temp_v0;
    void *phi_s2;
    s32 phi_s3;
    s16 phi_s4;
    s32 phi_a0;
    s32 phi_a0_2;
    void *phi_s2_2;
    s32 phi_s3_2;
    s16 phi_s4_2;
    s32 phi_a0_3;

    temp_v0 = arg0 + 0x160;
    temp_a0 = *arg1;
    sp4C = temp_v0;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_a0_2 = arg0->unk_1C;
    phi_s2 = temp_v0;
    phi_s3 = 0;
    phi_s4 = 0;
    phi_a0_2 = (s32) temp_a0_2;
    phi_a0 = (s32) temp_a0_2;
    phi_s2_2 = temp_v0;
    if ((s32) temp_a0_2 > 0) {
        do {
            if (phi_s2->unk_24 == 1) {
                if (phi_s3 == 0) {
                    temp_v0_2 = temp_s0->polyOpa.p;
                    temp_s0->polyOpa.p = &temp_v0_2[1];
                    temp_v0_2->words.w1 = (u32) &D_80BB6688;
                    temp_v0_2->words.w0 = 0xDE000000;
                    phi_s3 = (phi_s3 + 1) & 0xFF;
                }
                SysMatrix_InsertTranslation(phi_s2->unk_0, phi_s2->unk_4, phi_s2->unk_8, 0);
                Matrix_RotateY(phi_s2->unk_1A, 1U);
                SysMatrix_InsertXRotation_s((s16) ((s32) phi_s2->unk_18 * -1), 1);
                Matrix_Scale(1.2f, phi_s2->unk_2C, 1.2f, 1);
                temp_v0_3 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = &temp_v0_3[1];
                temp_v0_3->words.w0 = 0xDA380003;
                temp_v0_3->words.w1 = Matrix_NewMtx(*arg1);
                temp_v0_4 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = &temp_v0_4[1];
                temp_v0_4->words.w1 = (u32) &D_80BB6700;
                temp_v0_4->words.w0 = 0xDE000000;
                phi_a0 = (s32) arg0->unk_1C;
            }
            temp_s4 = phi_s4 + 1;
            phi_s2 += 0x40;
            phi_s4 = temp_s4;
            phi_a0_2 = phi_a0;
        } while ((s32) temp_s4 < phi_a0);
        phi_s2_2 = sp4C;
    }
    phi_s3_2 = 0;
    phi_s4_2 = 0;
    phi_a0_3 = phi_a0_2;
    if (phi_a0_2 > 0) {
        do {
            if (phi_s2_2->unk_24 == 2) {
                if (phi_s3_2 == 0) {
                    temp_v0_5 = temp_s0->polyOpa.p;
                    temp_s0->polyOpa.p = &temp_v0_5[1];
                    temp_v0_5->words.w1 = (u32) &D_80BB6688;
                    temp_v0_5->words.w0 = 0xDE000000;
                    temp_v0_6 = temp_s0->polyOpa.p;
                    temp_s0->polyOpa.p = &temp_v0_6[1];
                    temp_v0_6->words.w1 = (u32) &D_80BB6228;
                    temp_v0_6->words.w0 = 0xFD100000;
                    temp_v0_7 = temp_s0->polyOpa.p;
                    temp_s0->polyOpa.p = &temp_v0_7[1];
                    temp_v0_7->words.w1 = 0x7094240;
                    temp_v0_7->words.w0 = 0xF5100000;
                    temp_v0_8 = temp_s0->polyOpa.p;
                    temp_s0->polyOpa.p = &temp_v0_8[1];
                    temp_v0_8->words.w1 = 0;
                    temp_v0_8->words.w0 = 0xE6000000;
                    temp_v0_9 = temp_s0->polyOpa.p;
                    temp_s0->polyOpa.p = &temp_v0_9[1];
                    temp_v0_9->words.w1 = 0x71FF200;
                    temp_v0_9->words.w0 = 0xF3000000;
                    temp_v0_10 = temp_s0->polyOpa.p;
                    temp_s0->polyOpa.p = &temp_v0_10[1];
                    temp_v0_10->words.w1 = 0;
                    temp_v0_10->words.w0 = 0xE7000000;
                    temp_v0_11 = temp_s0->polyOpa.p;
                    temp_s0->polyOpa.p = &temp_v0_11[1];
                    temp_v0_11->words.w1 = 0x94240;
                    temp_v0_11->words.w0 = 0xF5100800;
                    temp_v0_12 = temp_s0->polyOpa.p;
                    temp_s0->polyOpa.p = &temp_v0_12[1];
                    temp_v0_12->words.w0 = 0xF2000000;
                    temp_v0_12->words.w1 = 0x3C07C;
                    phi_s3_2 = (phi_s3_2 + 1) & 0xFF;
                }
                SysMatrix_InsertTranslation(phi_s2_2->unk_0, phi_s2_2->unk_4, phi_s2_2->unk_8, 0);
                Matrix_RotateY(phi_s2_2->unk_1A, 1U);
                SysMatrix_InsertXRotation_s((s16) ((s32) phi_s2_2->unk_18 * -1), 1);
                Matrix_Scale(1.0f, phi_s2_2->unk_2C, 1.0f, 1);
                temp_v0_13 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = &temp_v0_13[1];
                temp_v0_13->words.w0 = 0xDA380003;
                temp_v0_13->words.w1 = Matrix_NewMtx(*arg1);
                temp_v0_14 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = &temp_v0_14[1];
                temp_v0_14->words.w1 = (u32) &D_80BB6700;
                temp_v0_14->words.w0 = 0xDE000000;
                phi_a0_3 = (s32) arg0->unk_1C;
            }
            temp_s4_2 = phi_s4_2 + 1;
            phi_s2_2 += 0x40;
            phi_s4_2 = temp_s4_2;
        } while ((s32) temp_s4_2 < phi_a0_3);
    }
}
