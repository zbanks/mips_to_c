typedef struct DemoKankyo {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ char pad_144[0x1500];              /* maybe part of actor[17]? */
    /* 0x1644 */ void (*actionFunc)(DemoKankyo *, GlobalContext *);
    /* 0x1648 */ s32 unk_1648;                      /* inferred */
    /* 0x164C */ s8 unk_164C;                       /* inferred */
    /* 0x164D */ char pad_164D[0x3];                /* maybe part of unk_164C[4]? */
} DemoKankyo;                                       /* size = 0x1650 */

struct _mips2c_stack_DemoKankyo_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_DemoKankyo_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_DemoKankyo_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_DemoKankyo_SetupAction {};     /* size 0x0 */

struct _mips2c_stack_DemoKankyo_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808CE45C {
    /* 0x00 */ char pad_0[0x7C];
    /* 0x7C */ f32 *sp7C;                           /* inferred */
    /* 0x80 */ char pad_80[0x4];
    /* 0x84 */ f32 *sp84;                           /* inferred */
    /* 0x88 */ f32 *sp88;                           /* inferred */
    /* 0x8C */ f32 *sp8C;                           /* inferred */
    /* 0x90 */ f32 *sp90;                           /* inferred */
    /* 0x94 */ char pad_94[0x10];                   /* maybe part of sp90[5]? */
    /* 0xA4 */ void *spA4;                          /* inferred */
    /* 0xA8 */ char pad_A8[0xC];                    /* maybe part of spA4[4]? */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ char pad_C0[0x4];
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ char pad_D0[0x10];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_func_808CF06C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808CF0CC {
    /* 0x00 */ char pad_0[0xA4];
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ char pad_B0[0x24];                   /* maybe part of spAC[10]? */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ f32 spDC;                            /* inferred */
    /* 0xE0 */ char pad_E0[0x10];
};                                                  /* size = 0xF0 */

struct _mips2c_stack_func_808CF970 {
    /* 0x00 */ char pad_0[0x64];
    /* 0x64 */ void *sp64;                          /* inferred */
    /* 0x68 */ char pad_68[0x30];                   /* maybe part of sp64[13]? */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x4];
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ char pad_B0[0x10];
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_808CFE04 {
    /* 0x00 */ char pad_0[0x54];
    /* 0x54 */ MtxF *sp54;                          /* inferred */
    /* 0x58 */ char pad_58[0x10];                   /* maybe part of sp54[5]? */
    /* 0x68 */ void *sp68;                          /* inferred */
    /* 0x6C */ char pad_6C[0x3C];                   /* maybe part of sp68[16]? */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ char pad_B0[0x4];
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ char pad_C0[0x10];
};                                                  /* size = 0xD0 */

void func_808CE45C(Actor *arg0, GlobalContext *arg1); /* static */
void func_808CF970(s32 arg0, GlobalContext *arg1);  /* static */
void func_808CFE04(void *arg0, GlobalContext *arg1); /* static */
extern ? D_04023428;
extern ? D_06001000;
static u8 D_808D03C0 = 0;
static s16 D_808D03C4 = 0;
static s16 D_808D03EA = 0xE;

void DemoKankyo_SetupAction(DemoKankyo *this, void (*actionFunc)(DemoKankyo *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

void func_808CE45C(Actor *arg0, GlobalContext *arg1) {
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    void *spA4;
    f32 *sp90;
    f32 *sp8C;
    f32 *sp88;
    f32 *sp84;
    f32 *sp7C;
    f32 *temp_s1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f6;
    f32 temp_f8;
    f32 temp_f8_2;
    s32 temp_s4;
    s32 temp_v0_4;
    u16 temp_t3;
    u16 temp_t5;
    u16 temp_t8;
    u16 temp_t9_2;
    u8 temp_t9;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v1;
    s32 phi_v1;
    Actor *phi_s0;
    s32 phi_s4;
    f32 phi_f4;
    f32 phi_f8;
    f32 phi_f10;
    f32 phi_f6;
    f32 phi_f10_2;
    f32 phi_f2;
    f32 phi_f0;
    f32 phi_f0_2;
    s32 phi_v1_2;
    void *phi_fp;

    spA4 = arg1->actorCtx.actorList[2].first;
    phi_fp = arg1 + 0x10000;
    if (arg1->roomCtx.unk_7C != 0) {
        temp_v0 = arg1->envCtx.unk_F2[3];
        phi_fp = arg1 + 0x10000;
        if (temp_v0 != 0) {
            arg1->envCtx.unk_F2[3] = temp_v0 - 1;
        } else {
            Actor_MarkForDeath(arg0);
        }
        phi_v1 = (s32) arg1->envCtx.unk_F2[3];
    } else {
        temp_v1 = arg1->envCtx.unk_F2[3];
        temp_t9 = temp_v1 + 0x10;
        phi_v1 = (s32) temp_v1;
        if ((s32) temp_v1 < 0x40) {
            arg1->envCtx.unk_F2[3] = temp_t9;
            phi_v1 = temp_t9 & 0xFF;
        }
    }
    phi_s4 = 0;
    phi_v1_2 = phi_v1;
    if (phi_v1 > 0) {
        phi_s0 = arg0;
        do {
            temp_f16 = arg1->view.eye.x;
            temp_f2 = arg1->view.at.x - temp_f16;
            temp_f12 = arg1->view.at.y - arg1->view.eye.y;
            temp_f14 = arg1->view.at.z - arg1->view.eye.z;
            temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
            temp_f18 = temp_f2 / temp_f0;
            temp_f20 = temp_f12 / temp_f0;
            spCC = temp_f18;
            temp_f22 = temp_f14 / temp_f0;
            spC8 = temp_f20;
            spC4 = temp_f22;
            temp_v0_2 = phi_s0->unk_144;
            if (temp_v0_2 != 0) {
                if ((temp_v0_2 != 1) && (temp_v0_2 != 2)) {
                    if (temp_v0_2 != 3) {

                    } else {
                        phi_s0->unk_144 = 0U;
                        goto block_74;
                    }
                } else {
                    phi_s0->unk_180 = (u16) (phi_s0->unk_180 + 1);
                    spBC = arg1->view.eye.x + (temp_f18 * 80.0f);
                    spB8 = arg1->view.eye.y + (temp_f20 * 80.0f);
                    spB4 = arg1->view.eye.z + (temp_f22 * 80.0f);
                    temp_v0_3 = phi_s0->unk_144;
                    phi_s0[1].home.pos.z = phi_s0[1].flags;
                    phi_s0->unk_158 = (f32) phi_s0[1].home.pos.x;
                    phi_s0->unk_15C = (f32) phi_s0[1].home.pos.y;
                    if (temp_v0_3 == 1) {
                        if (phi_s4 < 0x20) {
                            if (Rand_ZeroOne() < 0.5f) {
                                phi_s0[1].focus.rot.x = (s32) (Rand_ZeroOne() * 200.0f) + 0xC8;
                            } else {
                                phi_s0[1].focus.rot.x = -0xC8 - (s32) (Rand_ZeroOne() * 200.0f);
                            }
                            phi_s0[1].focus.rot.y = (s32) (Rand_ZeroOne() * 50.0f) + 0xF;
                            phi_s0->unk_190 = (f32) (((Rand_ZeroOne() * 10.0f) + 10.0f) * 0.01f);
                            temp_f0_2 = Rand_ZeroOne();
                            if (temp_f0_2 < 0.2f) {
                                D_808D03C4 = 1;
                            } else if (temp_f0_2 < 0.2f) {
                                D_808D03C4 = 3;
                            } else if (temp_f0_2 < 0.4f) {
                                D_808D03C4 = 7;
                            } else {
                                D_808D03C4 = 0xF;
                            }
                            if ((D_808D03C4 & phi_s4) == 0) {
                                phi_s0[1].home.pos.x = 0.0f;
                            }
                            phi_s0->unk_144 = 2U;
                            phi_s0->unk_17C = 0.0f;
                        }
                        Math_SmoothStepToF(phi_s0 + 0x188, 0.1f, 0.1f, 0.001f, 0.00001f);
                        Math_SmoothStepToF(phi_s0 + 0x178, phi_s0->unk_17C, 0.5f, 0.2f, 0.02f);
                        phi_s0[1].flags += __sinf(phi_s0[1].world.pos.y) * phi_s0->unk_178;
                        phi_s0[1].home.pos.x += __sinf(phi_s0[1].world.pos.z) * phi_s0->unk_178;
                        temp_v0_4 = (phi_s4 >> 1) & 3;
                        phi_s0[1].home.pos.y += __sinf(phi_s0->unk_174) * phi_s0->unk_178;
                        if (temp_v0_4 != 0) {
                            if (temp_v0_4 != 1) {
                                if (temp_v0_4 != 2) {
                                    if (temp_v0_4 != 3) {

                                    } else {
                                        phi_s0[1].world.pos.y += 0.01f * Rand_ZeroOne();
                                        phi_s0[1].world.pos.z += 0.08f * Rand_ZeroOne();
                                        phi_f4 = phi_s0->unk_174 + (0.05f * Rand_ZeroOne());
                                        goto block_39;
                                    }
                                } else {
                                    phi_s0[1].world.pos.y += 0.01f * Rand_ZeroOne();
                                    phi_s0[1].world.pos.z += 0.4f * Rand_ZeroOne();
                                    phi_f4 = phi_s0->unk_174 + (0.004f * Rand_ZeroOne());
                                    goto block_39;
                                }
                            } else {
                                phi_s0[1].world.pos.y += 0.01f * Rand_ZeroOne();
                                phi_s0[1].world.pos.z += 0.05f * Rand_ZeroOne();
                                phi_f4 = phi_s0->unk_174 + (0.005f * Rand_ZeroOne());
                                goto block_39;
                            }
                        } else {
                            phi_s0[1].world.pos.y += 0.008f;
                            phi_s0[1].world.pos.z += 0.05f * Rand_ZeroOne();
                            phi_f4 = phi_s0->unk_174 + 0.015f;
block_39:
                            phi_s0->unk_174 = phi_f4;
                        }
                    } else if (temp_v0_3 == 2) {
                        temp_s1 = phi_s0 + 0x188;
                        if ((D_808D03C4 & phi_s4) == 0) {
                            sp7C = phi_s0 + 0x150;
                            sp84 = phi_s0 + 0x148;
                            sp88 = phi_s0 + 0x168;
                            sp8C = phi_s0 + 0x164;
                            sp90 = phi_s0 + 0x160;
                            Math_SmoothStepToF(temp_s1, 0.25f, 0.1f, 0.001f, 0.00001f);
                            Math_SmoothStepToF(sp90, spA4->world.pos.x, 0.5f, 1.0f, 0.2f);
                            Math_SmoothStepToF(sp8C, spA4->world.pos.y + 50.0f, 0.5f, 1.0f, 0.2f);
                            Math_SmoothStepToF(sp88, spA4->world.pos.z, 0.5f, 1.0f, 0.2f);
                            temp_t8 = phi_s0[1].focus.rot.y;
                            temp_f8 = (f32) temp_t8;
                            phi_f8 = temp_f8;
                            if ((s32) temp_t8 < 0) {
                                phi_f8 = temp_f8 + 4294967296.0f;
                            }
                            Math_SmoothStepToF(sp84, phi_f8 * Math_SinS((s16) (phi_s0->unk_182 - 0x8000)), 0.5f, 2.0f, 0.2f);
                            temp_t9_2 = phi_s0[1].focus.rot.y;
                            temp_f10 = (f32) temp_t9_2;
                            phi_f10 = temp_f10;
                            if ((s32) temp_t9_2 < 0) {
                                phi_f10 = temp_f10 + 4294967296.0f;
                            }
                            Math_SmoothStepToF(sp7C, phi_f10 * Math_CosS((s16) (phi_s0->unk_182 - 0x8000)), 0.5f, 2.0f, 0.2f);
                            phi_s0->unk_182 = (u16) (phi_s0->unk_182 + phi_s0[1].focus.rot.x);
                            phi_s0[1].home.pos.x += __sinf(phi_s0[1].world.pos.z);
                            phi_s0[1].world.pos.y += 0.2f * Rand_ZeroOne();
                            phi_s0[1].world.pos.z += phi_s0->unk_190;
                            phi_s0->unk_174 = (f32) (phi_s0->unk_174 + (0.1f * Rand_ZeroOne()));
                            temp_t3 = phi_s0[1].focus.rot.y;
                            temp_f6 = (f32) temp_t3;
                            phi_f6 = temp_f6;
                            if ((s32) temp_t3 < 0) {
                                phi_f6 = temp_f6 + 4294967296.0f;
                            }
                            phi_s0[1].flags = phi_f6 * Math_SinS((s16) (phi_s0->unk_182 - 0x8000));
                            temp_t5 = phi_s0[1].focus.rot.y;
                            temp_f10_2 = (f32) temp_t5;
                            phi_f10_2 = temp_f10_2;
                            if ((s32) temp_t5 < 0) {
                                phi_f10_2 = temp_f10_2 + 4294967296.0f;
                            }
                            phi_s0[1].home.pos.y = phi_f10_2 * Math_CosS((s16) (phi_s0->unk_182 - 0x8000));
                        } else {
                            Math_SmoothStepToF(temp_s1, 0.1f, 0.1f, 0.001f, 0.00001f);
                            Math_SmoothStepToF(phi_s0 + 0x178, 1.5f, 0.5f, 0.1f, 0.0002f);
                            phi_s0[1].flags = (phi_s0->prevPos.y - phi_s0->unk_160) + phi_s0->uncullZoneScale;
                            phi_s0[1].home.pos.x = (phi_s0->prevPos.z - phi_s0->unk_164) + phi_s0->uncullZoneDownward;
                            phi_s0[1].home.pos.y = (phi_s0->unk_114 - phi_s0[1].world.pos.x) + phi_s0->prevPos.x;
                        }
                    }
                    if ((phi_s0->unk_144 != 2) && ((temp_f12_2 = -130.0f, temp_f2_2 = (phi_s0[1].flags + phi_s0->unk_160) - spBC, phi_f2 = temp_f2_2, (temp_f2_2 > 130.0f)) || (temp_f2_2 < temp_f12_2) || (temp_f0_3 = (phi_s0[1].home.pos.x + phi_s0->unk_164) - spB8, (temp_f0_3 > 130.0f)) || (temp_f0_3 < temp_f12_2) || (temp_f0_4 = (phi_s0[1].home.pos.y + phi_s0[1].world.pos.x) - spB4, (temp_f0_4 > 130.0f)) || (temp_f0_4 < temp_f12_2))) {
                        if (temp_f2_2 > 130.0f) {
                            phi_s0[1].flags = 0.0f;
                            phi_s0->unk_160 = (f32) (spBC - 130.0f);
                            phi_f2 = (phi_s0[1].flags + phi_s0->unk_160) - spBC;
                        }
                        if (phi_f2 < temp_f12_2) {
                            phi_s0[1].flags = 0.0f;
                            phi_s0->unk_160 = (f32) (spBC + 130.0f);
                        }
                        temp_f0_5 = (phi_s0[1].home.pos.x + phi_s0->unk_164) - spB8;
                        phi_f0 = temp_f0_5;
                        if (temp_f0_5 > 50.0f) {
                            phi_s0[1].home.pos.x = 0.0f;
                            phi_s0->unk_164 = (f32) (spB8 - 50.0f);
                            phi_f0 = (phi_s0[1].home.pos.x + phi_s0->unk_164) - spB8;
                        }
                        if (phi_f0 < -50.0f) {
                            phi_s0[1].home.pos.x = 0.0f;
                            phi_s0->unk_164 = (f32) (spB8 + 50.0f);
                        }
                        temp_f0_6 = (phi_s0[1].home.pos.y + phi_s0[1].world.pos.x) - spB4;
                        phi_f0_2 = temp_f0_6;
                        if (temp_f0_6 > 130.0f) {
                            phi_s0[1].home.pos.y = 0.0f;
                            phi_s0[1].world.pos.x = spB4 - 130.0f;
                            phi_f0_2 = (phi_s0[1].home.pos.y + phi_s0[1].world.pos.x) - spB4;
                        }
                        if (phi_f0_2 < temp_f12_2) {
                            phi_s0[1].home.pos.y = 0.0f;
                            phi_s0[1].world.pos.x = spB4 + 130.0f;
                        }
                    }
                    goto block_74;
                }
            } else {
                phi_s0->unk_160 = (f32) (temp_f16 + (spCC * 80.0f));
                phi_s0->unk_164 = (f32) (arg1->view.eye.y + (spC8 * 80.0f));
                phi_s0[1].world.pos.x = arg1->view.eye.z + (spC4 * 80.0f);
                temp_f8_2 = (Rand_ZeroOne() - 0.5f) * 160.0f;
                phi_s0[1].home.pos.x = 30.0f;
                phi_s0[1].flags = temp_f8_2;
                phi_s0[1].home.pos.y = (Rand_ZeroOne() - 0.5f) * 160.0f;
                temp_f0_7 = Rand_ZeroOne();
                phi_s0->unk_184 = 0;
                phi_s0->unk_17C = (f32) ((temp_f0_7 * 1.6f) + 0.5f);
                phi_s0->unk_180 = (u16) (u32) (Rand_ZeroOne() * 65535.0f);
                phi_s0[1].focus.pos.z = 0.1f;
                phi_s0[1].world.pos.y = Rand_ZeroOne() * 360.0f;
                phi_s0[1].world.pos.z = Rand_ZeroOne() * 360.0f;
                temp_f0_8 = Rand_ZeroOne();
                phi_s0[1].sfx = 0;
                phi_s0->unk_144 = (u8) (phi_s0->unk_144 + 1);
                phi_s0->unk_174 = (f32) (temp_f0_8 * 360.0f);
block_74:
                phi_v1_2 = (s32) phi_fp->unk_70F9;
            }
            temp_s4 = phi_s4 + 1;
            phi_s0 += 0x54;
            phi_s4 = temp_s4;
        } while (temp_s4 < phi_v1_2);
    }
}

void func_808CF06C(DemoKankyo *this, GlobalContext *globalCtx) {
    s32 temp_a1;

    temp_a1 = this->unk_1648;
    this = this;
    if (Object_IsLoaded(&globalCtx->objectCtx, temp_a1) != 0) {
        this->unk_164C = 1;
        this->actor.objBankIndex = (s8) this->unk_1648;
        DemoKankyo_SetupAction(this, func_808CF0CC);
    }
}

void func_808CF0CC(DemoKankyo *this, GlobalContext *globalCtx) {
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    Vec3f *temp_s4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f30;
    s32 temp_s3;
    s32 temp_v0_2;
    u8 temp_t6;
    u8 temp_v0;
    u8 temp_v1;
    s32 phi_v1;
    DemoKankyo *phi_s0;
    s32 phi_s3;
    f32 phi_f4;
    f32 phi_f2;
    f32 phi_f0;
    f32 phi_f12;
    f32 phi_f2_2;
    f32 phi_f0_2;
    s32 phi_v1_2;
    f32 phi_f0_3;

    temp_v1 = globalCtx->envCtx.unk_F2[3];
    temp_t6 = temp_v1 + 0x10;
    phi_v1 = (s32) temp_v1;
    if ((s32) temp_v1 < 0x40) {
        globalCtx->envCtx.unk_F2[3] = temp_t6;
        phi_v1 = temp_t6 & 0xFF;
    }
    temp_f2 = globalCtx->view.at.x - globalCtx->view.eye.x;
    temp_f12 = globalCtx->view.at.y - globalCtx->view.eye.y;
    temp_f14 = globalCtx->view.at.z - globalCtx->view.eye.z;
    temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
    temp_f18 = temp_f12 / temp_f0;
    spDC = temp_f2 / temp_f0;
    spD8 = temp_f18;
    spD4 = temp_f14 / temp_f0;
    phi_s0 = this;
    phi_s3 = 0;
    phi_v1_2 = phi_v1;
    if (phi_v1 > 0) {
        do {
            temp_v0 = phi_s0->unk_144;
            if (temp_v0 != 0) {
                if ((temp_v0 != 1) && (temp_v0 != 2)) {
                    if (temp_v0 != 3) {

                    } else {
                        phi_s0->unk_144 = 0;
                        goto block_42;
                    }
                } else {
                    temp_s4 = &globalCtx->view.eye;
                    phi_s0->unk_180 += 1;
                    temp_f0_2 = spD8 * 120.0f;
                    temp_f30 = -120.0f;
                    if (this->actor.params == 2) {
                        phi_s0->unk_164 = globalCtx->view.eye.y + temp_f0_2 + 80.0f;
                    }
                    temp_f20 = globalCtx->view.eye.x + (spDC * 120.0f);
                    temp_f24 = globalCtx->view.eye.y + temp_f0_2;
                    temp_f26 = globalCtx->view.eye.z + (spD4 * 120.0f);
                    Math_SmoothStepToF(phi_s0 + 0x188, 0.2f, 0.1f, 0.001f, 0.00001f);
                    Math_SmoothStepToF(phi_s0 + 0x178, phi_s0->unk_17C, 0.5f, 0.2f, 0.02f);
                    phi_s0->unk_148 += __sinf(phi_s0->unk_16C) * phi_s0->unk_178;
                    phi_s0->unk_14C += __sinf(phi_s0->unk_170) * phi_s0->unk_178;
                    temp_v0_2 = (phi_s3 >> 1) & 3;
                    phi_s0->unk_150 += __sinf(phi_s0->unk_174) * phi_s0->unk_178;
                    if (temp_v0_2 != 0) {
                        if (temp_v0_2 != 1) {
                            if (temp_v0_2 != 2) {
                                if (temp_v0_2 != 3) {

                                } else {
                                    phi_s0->unk_16C += 0.01f * Rand_ZeroOne();
                                    phi_s0->unk_170 += 0.08f * Rand_ZeroOne();
                                    phi_f4 = phi_s0->unk_174 + (0.05f * Rand_ZeroOne());
                                    goto block_21;
                                }
                            } else {
                                phi_s0->unk_16C += 0.01f * Rand_ZeroOne();
                                phi_s0->unk_170 += 0.4f * Rand_ZeroOne();
                                phi_s0->unk_174 += 0.004f * Rand_ZeroOne();
                            }
                        } else {
                            phi_s0->unk_16C += 0.01f * Rand_ZeroOne();
                            phi_s0->unk_170 += 0.05f * Rand_ZeroOne();
                            phi_f4 = phi_s0->unk_174 + (0.005f * Rand_ZeroOne());
block_21:
                            phi_s0->unk_174 = phi_f4;
                        }
                    } else {
                        phi_s0->unk_16C += 0.008f;
                        phi_s0->unk_170 += 0.05f * Rand_ZeroOne();
                        phi_s0->unk_174 += 0.015f;
                    }
                    temp_f0_3 = phi_s0->unk_148 + phi_s0->unk_160;
                    temp_f2_2 = temp_f0_3 - temp_f20;
                    phi_f2 = temp_f2_2;
                    phi_f0 = temp_f0_3;
                    if (temp_f2_2 > 120.0f) {
                        phi_s0->unk_160 = temp_f20 - 120.0f;
                        temp_f0_4 = phi_s0->unk_148 + phi_s0->unk_160;
                        phi_f2 = temp_f0_4 - temp_f20;
                        phi_f0 = temp_f0_4;
                    }
                    if (phi_f2 < temp_f30) {
                        phi_s0->unk_160 = temp_f20 + 120.0f;
                        phi_f0 = phi_s0->unk_148 + phi_s0->unk_160;
                    }
                    spA4 = phi_f0;
                    spA8 = phi_s0->unk_14C + phi_s0->unk_164;
                    spAC = phi_s0->unk_150 + phi_s0->unk_168;
                    temp_f2_3 = Math_Vec3f_DistXZ((Vec3f *) &spA4, temp_s4) / 200.0f;
                    if (temp_f2_3 < 0.0f) {
                        phi_f12 = 0.0f;
                    } else {
                        if (temp_f2_3 > 1.0f) {
                            phi_f0_3 = 1.0f;
                        } else {
                            phi_f0_3 = temp_f2_3;
                        }
                        phi_f12 = phi_f0_3;
                    }
                    temp_f0_5 = 100.0f + phi_f12 + 60.0f;
                    temp_f2_4 = (phi_s0->unk_14C + phi_s0->unk_164) - temp_f24;
                    phi_f2_2 = temp_f2_4;
                    if (temp_f0_5 < temp_f2_4) {
                        phi_s0->unk_164 = temp_f24 - temp_f0_5;
                        phi_f2_2 = (phi_s0->unk_14C + phi_s0->unk_164) - temp_f24;
                    }
                    if (phi_f2_2 < -temp_f0_5) {
                        phi_s0->unk_164 = temp_f24 + temp_f0_5;
                    }
                    temp_f0_6 = (phi_s0->unk_150 + phi_s0->unk_168) - temp_f26;
                    phi_f0_2 = temp_f0_6;
                    if (temp_f0_6 > 120.0f) {
                        phi_s0->unk_168 = temp_f26 - 120.0f;
                        phi_f0_2 = (phi_s0->unk_150 + phi_s0->unk_168) - temp_f26;
                    }
                    if (phi_f0_2 < temp_f30) {
                        phi_s0->unk_168 = temp_f26 + 120.0f;
                    }
                    goto block_42;
                }
            } else {
                temp_f20_2 = 2.0f * 120.0f;
                phi_s0->unk_160 = globalCtx->view.eye.x + (spDC * 120.0f);
                phi_s0->unk_164 = globalCtx->view.eye.y + (spD8 * 120.0f);
                phi_s0->unk_168 = globalCtx->view.eye.z + (spD4 * 120.0f);
                phi_s0->unk_148 = (Rand_ZeroOne() - 0.5f) * temp_f20_2;
                phi_s0->unk_14C = (Rand_ZeroOne() - 0.5f) * temp_f20_2;
                phi_s0->unk_150 = (Rand_ZeroOne() - 0.5f) * temp_f20_2;
                temp_f0_7 = Rand_ZeroOne();
                phi_s0->unk_184 = 0;
                phi_s0->unk_17C = (temp_f0_7 * 1.6f) + 0.5f;
                phi_s0->unk_180 = (u16) (u32) (Rand_ZeroOne() * 65535.0f);
                phi_s0->unk_188 = 0.2f;
                phi_s0->unk_16C = Rand_ZeroOne() * 360.0f;
                phi_s0->unk_170 = Rand_ZeroOne() * 360.0f;
                temp_f0_8 = Rand_ZeroOne();
                phi_s0->unk_194 = 0;
                phi_s0->unk_144 += 1;
                phi_s0->unk_174 = temp_f0_8 * 360.0f;
block_42:
                phi_v1_2 = (s32) globalCtx->envCtx.unk_F2[3];
            }
            temp_s3 = phi_s3 + 1;
            phi_s0 += 0x54;
            phi_s3 = temp_s3;
        } while (temp_s3 < phi_v1_2);
    }
}

void DemoKankyo_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp20;
    s16 temp_v0;
    s32 temp_v1;
    DemoKankyo *phi_v0;
    s32 phi_v1;
    s32 phi_v0_2;
    DemoKankyo *this = (DemoKankyo *) thisx;

    phi_v0 = this;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 4;
        phi_v0->unk_144 = 0;
        phi_v0->unk_198 = 0;
        phi_v0->unk_1EC = 0;
        phi_v0->unk_240 = 0;
        phi_v0 += 0x150;
        phi_v1 = temp_v1;
    } while (temp_v1 != 0x40);
    temp_v0 = this->actor.params;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                phi_v0_2 = -1;
            } else {
                sp20 = 0;
                this->unk_164C = 1;
                DemoKankyo_SetupAction(this, func_808CF0CC);
                goto block_12;
            }
        } else {
            this->unk_164C = 0;
            sp20 = Object_GetIndex(&globalCtx->objectCtx, D_808D03EA);
            DemoKankyo_SetupAction(this, func_808CF06C);
            goto block_12;
        }
    } else {
        sp20 = 0;
        this->actor.room = -1;
        if (D_808D03C0 == 0) {
            DemoKankyo_SetupAction(this, (void (*)(DemoKankyo *, GlobalContext *)) func_808CE45C);
            D_808D03C0 = 1;
        } else {
            Actor_MarkForDeath((Actor *) this);
        }
block_12:
        phi_v0_2 = sp20;
    }
    if (phi_v0_2 >= 0) {
        this->unk_1648 = phi_v0_2;
    }
}

void DemoKankyo_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DemoKankyo *this = (DemoKankyo *) thisx;
    Actor_MarkForDeath((Actor *) this);
}

void DemoKankyo_Update(Actor *thisx, GlobalContext *globalCtx) {
    DemoKankyo *this = (DemoKankyo *) thisx;
    this->actionFunc(this, globalCtx);
}

void func_808CF970(s32 arg0, GlobalContext *arg1) {
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 sp98;
    void *sp64;
    Gfx *temp_v0;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_2;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s2;
    MtxF *temp_s5;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f4;
    s16 temp_s3;
    s32 temp_v0_10;
    u32 temp_t0;
    u8 temp_t7;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    void *temp_s0;
    s32 phi_s3;
    f32 phi_f4;
    f32 phi_f0;
    u8 phi_t9;
    f32 phi_f18;

    if ((arg1->cameraPtrs[0]->unk_14C & 0x100) == 0) {
        temp_s2 = arg1->state.gfxCtx;
        temp_s2->polyXlu.p = Gfx_CallSetupDL(temp_s2->polyXlu.p, 0x14U);
        temp_v0 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDB060020;
        temp_v0->words.w1 = Lib_SegmentedToVirtual((void *) &D_04079B10);
        temp_v0_2 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = (u32) D_0407AB10;
        phi_s3 = 0;
        if ((s32) arg1->envCtx.unk_F2[3] > 0) {
            sp64 = arg1 + 0x10000;
            do {
                temp_s0 = arg0 + (phi_s3 * 0x54);
                temp_a1 = &spA4;
                spA4 = temp_s0->unk_148 + temp_s0->unk_160;
                spA8 = temp_s0->unk_14C + temp_s0->unk_164;
                spAC = temp_s0->unk_150 + temp_s0->unk_168;
                func_80169474(arg1, (Vec3f *) temp_a1, (Vec3f *) &sp98);
                if ((sp98 >= 0.0f) && (sp98 < 320.0f) && (sp9C >= 0.0f) && (sp9C < 240.0f)) {
                    temp_s5 = &arg1->mf_187FC;
                    SysMatrix_InsertTranslation(spA4, spA8, spAC, 0);
                    temp_t7 = temp_s0->unk_184;
                    temp_f4 = (f32) temp_t7;
                    phi_f4 = temp_f4;
                    if ((s32) temp_t7 < 0) {
                        phi_f4 = temp_f4 + 4294967296.0f;
                    }
                    temp_f0 = phi_f4 / 50.0f;
                    phi_f0 = temp_f0;
                    if (temp_f0 > 1.0f) {
                        phi_f0 = 1.0f;
                    }
                    temp_f12 = temp_s0->unk_188 * phi_f0;
                    Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
                    if (phi_s3 < 0x20) {
                        if (temp_s0->unk_144 != 2) {
                            temp_v0_3 = temp_s0->unk_184;
                            phi_t9 = temp_v0_3 - 1;
                            if ((s32) temp_v0_3 > 0) {
                                goto block_27;
                            }
                        } else {
                            temp_v0_4 = temp_s0->unk_184;
                            if ((s32) temp_v0_4 < 0x64) {
                                temp_s0->unk_184 = (u8) (temp_v0_4 + 1);
                            }
                        }
                    } else if (temp_s0->unk_144 != 2) {
                        if ((temp_s0->unk_180 & 0x1F) < 0x10) {
                            temp_v0_5 = temp_s0->unk_184;
                            if ((s32) temp_v0_5 < 0xEB) {
                                temp_s0->unk_184 = (u8) (temp_v0_5 + 0x14);
                            }
                        } else {
                            temp_v0_6 = temp_s0->unk_184;
                            if ((s32) temp_v0_6 >= 0x15) {
                                temp_s0->unk_184 = (u8) (temp_v0_6 - 0x14);
                            }
                        }
                    } else if ((temp_s0->unk_180 & 0xF) < 8) {
                        temp_v0_7 = temp_s0->unk_184;
                        if ((s32) temp_v0_7 < 0xFF) {
                            temp_s0->unk_184 = (u8) (temp_v0_7 + 0x64);
                        }
                    } else {
                        temp_v0_8 = temp_s0->unk_184;
                        phi_t9 = temp_v0_8 - 0xA;
                        if ((s32) temp_v0_8 >= 0xB) {
block_27:
                            temp_s0->unk_184 = phi_t9;
                        }
                    }
                    temp_v0_9 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = &temp_v0_9[1];
                    temp_v0_9->words.w1 = 0;
                    temp_v0_9->words.w0 = 0xE7000000;
                    temp_v0_10 = phi_s3 & 1;
                    if (temp_v0_10 != 0) {
                        if (temp_v0_10 != 1) {

                        } else {
                            temp_v0_11 = temp_s2->polyXlu.p;
                            temp_s2->polyXlu.p = &temp_v0_11[1];
                            temp_v0_11->words.w0 = 0xFA000000;
                            temp_v0_11->words.w1 = temp_s0->unk_184 | ~0xFF;
                            temp_v0_12 = temp_s2->polyXlu.p;
                            temp_s2->polyXlu.p = &temp_v0_12[1];
                            temp_v0_12->words.w0 = 0xFB000000;
                            temp_v0_12->words.w1 = temp_s0->unk_184 | 0x64FF00;
                        }
                    } else {
                        temp_v0_13 = temp_s2->polyXlu.p;
                        temp_s2->polyXlu.p = &temp_v0_13[1];
                        temp_v0_13->words.w0 = 0xFA000000;
                        temp_v0_13->words.w1 = temp_s0->unk_184 | ~0x64FF;
                        temp_v0_14 = temp_s2->polyXlu.p;
                        temp_s2->polyXlu.p = &temp_v0_14[1];
                        temp_v0_14->words.w0 = 0xFB000000;
                        temp_v0_14->words.w1 = temp_s0->unk_184 | 0xFAB40000;
                    }
                    SysMatrix_InsertMatrix(temp_s5, 1);
                    temp_t0 = arg1->state.frames;
                    temp_f18 = (f32) temp_t0;
                    phi_f18 = temp_f18;
                    if ((s32) temp_t0 < 0) {
                        phi_f18 = temp_f18 + 4294967296.0f;
                    }
                    SysMatrix_InsertZRotation_f(phi_f18 * 20.0f * 0.017453292f, 1);
                    temp_v0_15 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = &temp_v0_15[1];
                    temp_v0_15->words.w0 = 0xDA380003;
                    temp_v0_15->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
                    temp_v0_16 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = &temp_v0_16[1];
                    temp_v0_16->words.w1 = (u32) D_0407AB58;
                    temp_v0_16->words.w0 = 0xDE000000;
                }
                temp_s3 = phi_s3 + 1;
                phi_s3 = (s32) temp_s3;
            } while ((s32) temp_s3 < (s32) sp64->unk_70F9);
        }
    }
}

void func_808CFE04(void *arg0, GlobalContext *arg1) {
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spA8;
    void *sp68;
    MtxF *sp54;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s1;
    Vec3f *temp_s2;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    s16 temp_s5;
    s32 temp_v0_2;
    u32 temp_t0;
    u8 temp_t1;
    void *temp_s0;
    s16 phi_s5;
    f32 phi_f4;
    f32 phi_f0;
    f32 phi_f0_2;
    f32 phi_f6;
    f32 phi_f2;

    if (arg0->unk_164C != 0) {
        temp_s1 = arg1->state.gfxCtx;
        func_8012C2DC(temp_s1);
        phi_s5 = 0;
        if ((s32) arg1->envCtx.unk_F2[3] > 0) {
            sp68 = arg1 + 0x10000;
            do {
                temp_s0 = arg0 + (phi_s5 * 0x54);
                temp_a1 = &spB4;
                spB4 = temp_s0->unk_148 + temp_s0->unk_160;
                spB8 = temp_s0->unk_14C + temp_s0->unk_164;
                spBC = temp_s0->unk_150 + temp_s0->unk_168;
                func_80169474(arg1, (Vec3f *) temp_a1, (Vec3f *) &spA8);
                if ((spA8 >= 0.0f) && (spA8 < 320.0f) && (spAC >= 0.0f) && (spAC < 240.0f)) {
                    sp54 = &arg1->mf_187FC;
                    temp_s2 = &arg1->view.eye;
                    SysMatrix_InsertTranslation(spB4, spB8, spBC, 0);
                    temp_t1 = temp_s0->unk_184;
                    temp_f4 = (f32) temp_t1;
                    phi_f4 = temp_f4;
                    if ((s32) temp_t1 < 0) {
                        phi_f4 = temp_f4 + 4294967296.0f;
                    }
                    temp_f0 = phi_f4 / 50.0f;
                    phi_f0 = temp_f0;
                    if (temp_f0 > 1.0f) {
                        phi_f0 = 1.0f;
                    }
                    temp_f12 = temp_s0->unk_188 * phi_f0;
                    Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
                    temp_f2 = Math_Vec3f_DistXYZ((Vec3f *) &spB4, temp_s2) / 300.0f;
                    if (temp_f2 > 1.0f) {
                        phi_f0_2 = 0.0f;
                    } else {
                        temp_f0_2 = 1.0f - temp_f2;
                        if (temp_f0_2 > 1.0f) {
                            phi_f2 = 1.0f;
                        } else {
                            phi_f2 = temp_f0_2;
                        }
                        phi_f0_2 = phi_f2;
                    }
                    if (arg0->unk_1C == 1) {
                        temp_s0->unk_184 = (u8) (u32) (255.0f * phi_f0_2);
                    } else {
                        temp_s0->unk_184 = (u8) (u32) (160.0f * phi_f0_2);
                    }
                    temp_v0 = temp_s1->polyXlu.p;
                    temp_s1->polyXlu.p = &temp_v0[1];
                    temp_v0->words.w1 = 0;
                    temp_v0->words.w0 = 0xE7000000;
                    temp_v0_2 = phi_s5 & 1;
                    if (temp_v0_2 != 0) {
                        if (temp_v0_2 != 1) {

                        } else {
                            temp_v0_3 = temp_s1->polyXlu.p;
                            temp_s1->polyXlu.p = &temp_v0_3[1];
                            temp_v0_3->words.w0 = 0xFA000000;
                            temp_v0_3->words.w1 = temp_s0->unk_184 | 0xC8C8BE00;
                            temp_v0_4 = temp_s1->polyXlu.p;
                            temp_s1->polyXlu.p = &temp_v0_4[1];
                            temp_v0_4->words.w0 = 0xFB000000;
                            temp_v0_4->words.w1 = temp_s0->unk_184 | 0xC8C81E00;
                        }
                    } else {
                        temp_v0_5 = temp_s1->polyXlu.p;
                        temp_s1->polyXlu.p = &temp_v0_5[1];
                        temp_v0_5->words.w0 = 0xFA000000;
                        temp_v0_5->words.w1 = temp_s0->unk_184 | 0xE6E6DC00;
                        temp_v0_6 = temp_s1->polyXlu.p;
                        temp_s1->polyXlu.p = &temp_v0_6[1];
                        temp_v0_6->words.w0 = 0xFB000000;
                        temp_v0_6->words.w1 = temp_s0->unk_184 | 0xE6E61E00;
                    }
                    temp_v0_7 = temp_s1->polyXlu.p;
                    temp_s1->polyXlu.p = &temp_v0_7[1];
                    temp_v0_7->words.w1 = (u32) &D_04023348;
                    temp_v0_7->words.w0 = 0xDE000000;
                    SysMatrix_InsertMatrix(sp54, 1);
                    temp_t0 = arg1->state.frames;
                    temp_f6 = (f32) temp_t0;
                    phi_f6 = temp_f6;
                    if ((s32) temp_t0 < 0) {
                        phi_f6 = temp_f6 + 4294967296.0f;
                    }
                    SysMatrix_InsertZRotation_f(phi_f6 * 20.0f * 0.017453292f, 1);
                    temp_v0_8 = temp_s1->polyXlu.p;
                    temp_s1->polyXlu.p = &temp_v0_8[1];
                    temp_v0_8->words.w0 = 0xDA380003;
                    temp_v0_8->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
                    if (arg0->unk_1C == 1) {
                        temp_v0_9 = temp_s1->polyXlu.p;
                        temp_s1->polyXlu.p = &temp_v0_9[1];
                        temp_v0_9->words.w1 = (u32) &D_06001000;
                        temp_v0_9->words.w0 = 0xDE000000;
                    } else {
                        temp_v0_10 = temp_s1->polyXlu.p;
                        temp_s1->polyXlu.p = &temp_v0_10[1];
                        temp_v0_10->words.w1 = (u32) &D_04023428;
                        temp_v0_10->words.w0 = 0xDE000000;
                    }
                }
                temp_s5 = phi_s5 + 1;
                phi_s5 = temp_s5;
            } while ((s32) temp_s5 < (s32) sp68->unk_70F9);
        }
    }
}

void DemoKankyo_Draw(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    DemoKankyo *this = (DemoKankyo *) thisx;

    temp_v0 = this->actor.params;
    if (temp_v0 != 0) {
        if ((temp_v0 != 1) && (temp_v0 != 2)) {
            return;
        }
        func_808CFE04();
        return;
    }
    func_808CF970();
}
