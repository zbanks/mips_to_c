struct _mips2c_stack_EnClearTag_CreateDebrisEffect {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnClearTag_CreateFlashEffect {}; /* size 0x0 */

struct _mips2c_stack_EnClearTag_CreateIsolatedLightRayEffect {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnClearTag_CreateIsolatedSmokeEffect {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnClearTag_CreateLightRayEffect {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnClearTag_CreateShockwaveEffect {}; /* size 0x0 */

struct _mips2c_stack_EnClearTag_CreateSmokeEffect {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnClearTag_CreateSplashEffect {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnClearTag_Destroy {};         /* size 0x0 */

struct _mips2c_stack_EnClearTag_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnClearTag_DrawEffects {
    /* 0x000 */ char pad0[0x90];
    /* 0x090 */ EnClearTagEffect *sp90;             /* inferred */
    /* 0x094 */ char pad94[0xC8];                   /* maybe part of sp90[51]? */
    /* 0x15C */ ? sp15C;                            /* inferred */
    /* 0x15C */ char pad15C[0x40];
    /* 0x19C */ f32 sp19C;                          /* inferred */
    /* 0x1A0 */ WaterBox *sp1A0;                    /* inferred */
    /* 0x1A4 */ f32 sp1A4;                          /* inferred */
    /* 0x1A8 */ char pad1A8[0x4];
    /* 0x1AC */ f32 sp1AC;                          /* inferred */
    /* 0x1B0 */ char pad1B0[0x4];
    /* 0x1B4 */ s16 sp1B4;                          /* inferred */
    /* 0x1B6 */ char pad1B6[0x1];
    /* 0x1B7 */ u8 sp1B7;                           /* inferred */
};                                                  /* size = 0x1B8 */

struct _mips2c_stack_EnClearTag_Init {
    /* 0x00 */ char pad0[0x8C];
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ ? spA4;                              /* inferred */
    /* 0xA4 */ char padA4[0x4];
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ char padAC[0x1C];
};                                                  /* size = 0xC8 */

struct _mips2c_stack_EnClearTag_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnClearTag_UpdateCamera {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ CutsceneContext *sp24;               /* inferred */
    /* 0x28 */ char pad28[0xC];                     /* maybe part of sp24[4]? */
    /* 0x34 */ void *sp34;                          /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnClearTag_UpdateEffects {
    /* 0x00 */ char pad0[0x60];
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad60[0x4];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad68[0x4];
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ char pad70[0x8];
};                                                  /* size = 0x78 */

void EnClearTag_CreateDebrisEffect(EnClearTag *arg0, ? *arg1, f32 *arg2, f32 *arg3, f32 arg4, f32 arg5); /* static */
void EnClearTag_CreateFlashEffect(EnClearTag *arg0, ? *arg1, f32 arg2, f32 arg3); /* static */
void EnClearTag_CreateIsolatedLightRayEffect(EnClearTag *arg0, ? *arg1, f32 *arg2, f32 *arg3, f32 arg4, f32 arg5, s16 arg6, s16 arg7); /* static */
void EnClearTag_CreateIsolatedSmokeEffect(EnClearTag *arg0, ? *arg1, f32 arg2); /* static */
void EnClearTag_CreateLightRayEffect(EnClearTag *arg0, ? *arg1, f32 *arg2, f32 *arg3, f32 arg4, f32 arg5, s16 arg6); /* static */
void EnClearTag_CreateShockwaveEffect(EnClearTag *arg0, ? *arg1, ?32 arg2, s16 arg3); /* static */
void EnClearTag_CreateSmokeEffect(EnClearTag *arg0, ? *arg1, f32 arg2); /* static */
void EnClearTag_CreateSplashEffect(EnClearTag *arg0, ? *arg1, s16 arg2); /* static */
void EnClearTag_UpdateCamera(Actor *arg0, GlobalContext *arg1); /* static */
static ? D_8094AD60;                                /* unable to generate initializer */
static ? D_8094AD6C;                                /* unable to generate initializer */
static ? D_8094AD9C;                                /* unable to generate initializer */
static ? D_8094ADCC;                                /* unable to generate initializer */
static ? D_8094ADD8;                                /* unable to generate initializer */
static ? D_8094ADE0;                                /* unable to generate initializer */
static ? D_8094ADEC;                                /* unable to generate initializer */
static ? D_8094ADF8;                                /* unable to generate initializer */
static ? D_8094AE0C;                                /* unable to generate initializer */
static ? D_8094AE20;                                /* unable to generate initializer */
static ? D_8094AE34;                                /* unable to generate initializer */
static ? D_8094B090;                                /* unable to generate initializer */
static ? D_8094B110;                                /* unable to generate initializer */
static ? D_8094B758;                                /* unable to generate initializer */
static ? D_8094B800;                                /* unable to generate initializer */
static ? D_8094C860;                                /* unable to generate initializer */
static ? D_8094CB10;                                /* unable to generate initializer */
static ? D_8094DBD8;                                /* unable to generate initializer */
static ? D_8094DC48;                                /* unable to generate initializer */

void EnClearTag_CreateDebrisEffect(EnClearTag *arg0, ? *arg1, f32 *arg2, f32 *arg3, f32 arg4, f32 arg5) {
    f32 temp_f0;
    s16 temp_v0;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0 + 0x144;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->unk0 == 0) {
        phi_s0->unk0 = 1U;
        phi_s0->unk4 = (s32) arg1->unk0;
        phi_s0->unk8 = (s32) arg1->unk4;
        phi_s0->unkC = (s32) arg1->unk8;
        phi_s0->unk10 = (s32) arg2->unk0;
        phi_s0->unk14 = (s32) arg2->unk4;
        phi_s0->unk18 = (s32) arg2->unk8;
        phi_s0->unk1C = (s32) arg3->unk0;
        phi_s0->unk20 = (s32) arg3->unk4;
        phi_s0->unk24 = (s32) arg3->unk8;
        phi_s0->unk50 = arg4;
        phi_s0->unk58 = Rand_ZeroFloat(6.2831855f);
        temp_f0 = Rand_ZeroFloat(6.2831855f);
        phi_s0->unk48 = 0;
        phi_s0->unk5C = temp_f0;
        phi_s0->unk4A = (s16) phi_s0->unk48;
        phi_s0->unk60 = arg5;
        phi_s0->unk1 = (s8) (u32) Rand_ZeroFloat(10.0f);
        return;
    }
    phi_s0 += 0x70;
    if ((s32) temp_v0 >= 0x66) {
        return;
    }
    goto loop_1;
}

void EnClearTag_CreateSmokeEffect(EnClearTag *arg0, ? *arg1, f32 arg2) {
    void *sp18;
    f32 temp_f0;
    s16 temp_v1;
    s32 temp_f4;
    void *phi_v0;
    s8 phi_t8;
    s16 phi_v1;

    phi_v0 = arg0 + 0x144;
    phi_v1 = 0;
loop_1:
    temp_v1 = phi_v1 + 1;
    phi_v1 = temp_v1;
    if (phi_v0->unk0 == 0) {
        sp18 = phi_v0;
        arg2 = arg2;
        temp_f0 = Rand_ZeroFloat(100.0f);
        temp_f4 = (s32) temp_f0;
        if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
            if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
                phi_t8 = (s32) (temp_f0 - 2.1474836e9f) | 0x80000000;
            } else {
                goto block_5;
            }
        } else {
            phi_t8 = (s8) temp_f4;
            if (temp_f4 < 0) {
block_5:
                phi_t8 = -1;
            }
        }
        phi_v0->unk1 = phi_t8;
        phi_v0->unk0 = 3U;
        phi_v0->unk4 = (s32) arg1->unk0;
        phi_v0->unk8 = (s32) arg1->unk4;
        phi_v0->unkC = (s32) arg1->unk8;
        phi_v0->unk10 = (s32) D_8094AD60.unk0;
        phi_v0->unk14 = (s32) D_8094AD60.unk4;
        phi_v0->unk18 = (s32) D_8094AD60.unk8;
        phi_v0->unk1C = (s32) D_8094AD60.unk0;
        phi_v0->unk20 = (s32) D_8094AD60.unk4;
        phi_v0->unk50 = arg2;
        phi_v0->unk54 = (f32) (2.0f * arg2);
        phi_v0->unk6C = 1.0f;
        phi_v0->unk68 = 1.0f;
        phi_v0->unk34 = 255.0f;
        phi_v0->unk38 = 255.0f;
        phi_v0->unk40 = 255.0f;
        phi_v0->unk28 = 200.0f;
        phi_v0->unk2C = 20.0f;
        phi_v0->unk30 = 0.0f;
        phi_v0->unk3C = 215.0f;
        phi_v0->unk24 = (s32) D_8094AD60.unk8;
        return;
    }
    phi_v0 += 0x70;
    if ((s32) temp_v1 >= 0x67) {
        return;
    }
    goto loop_1;
}

void EnClearTag_CreateIsolatedSmokeEffect(EnClearTag *arg0, ? *arg1, f32 arg2) {
    void *sp18;
    f32 temp_f0;
    s16 temp_v1;
    s32 temp_f4;
    void *phi_v0;
    s8 phi_t8;
    s16 phi_v1;

    phi_v0 = arg0 + 0x144;
    phi_v1 = 0;
loop_1:
    temp_v1 = phi_v1 + 1;
    phi_v1 = temp_v1;
    if (phi_v0->unk0 == 0) {
        sp18 = phi_v0;
        arg2 = arg2;
        temp_f0 = Rand_ZeroFloat(100.0f);
        temp_f4 = (s32) temp_f0;
        if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
            if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
                phi_t8 = (s32) (temp_f0 - 2.1474836e9f) | 0x80000000;
            } else {
                goto block_5;
            }
        } else {
            phi_t8 = (s8) temp_f4;
            if (temp_f4 < 0) {
block_5:
                phi_t8 = -1;
            }
        }
        phi_v0->unk1 = phi_t8;
        phi_v0->unk0 = 8U;
        phi_v0->unk4 = (s32) arg1->unk0;
        phi_v0->unk8 = (s32) arg1->unk4;
        phi_v0->unkC = (s32) arg1->unk8;
        phi_v0->unk10 = (s32) D_8094AD60.unk0;
        phi_v0->unk14 = (s32) D_8094AD60.unk4;
        phi_v0->unk18 = (s32) D_8094AD60.unk8;
        phi_v0->unk1C = (s32) D_8094AD60.unk0;
        phi_v0->unk20 = (s32) D_8094AD60.unk4;
        phi_v0->unk50 = arg2;
        phi_v0->unk54 = (f32) (2.0f * arg2);
        phi_v0->unk6C = 1.0f;
        phi_v0->unk68 = 1.0f;
        phi_v0->unk24 = (s32) D_8094AD60.unk8;
        if (arg2 <= 1.1f) {
            phi_v0->unk50 = (f32) ((((f32) gGameInfo->data[1271] * 0.1f) + 1.0f) * arg2);
            phi_v0->unk34 = (f32) ((f32) gGameInfo->data[1264] + 150.0f);
            phi_v0->unk28 = (f32) gGameInfo->data[1265];
            phi_v0->unk2C = (f32) gGameInfo->data[1266];
            phi_v0->unk30 = (f32) gGameInfo->data[1267];
            phi_v0->unk38 = (f32) gGameInfo->data[1268];
            phi_v0->unk3C = (f32) gGameInfo->data[1269];
            phi_v0->unk40 = (f32) gGameInfo->data[1270];
            return;
        }
        phi_v0->unk40 = 0.0f;
        phi_v0->unk3C = 0.0f;
        phi_v0->unk38 = 0.0f;
        phi_v0->unk30 = 0.0f;
        phi_v0->unk2C = 0.0f;
        phi_v0->unk28 = 0.0f;
        phi_v0->unk34 = 255.0f;
        return;
    }
    phi_v0 += 0x70;
    if ((s32) temp_v1 >= 0x67) {
        return;
    }
    goto loop_1;
}

void EnClearTag_CreateFlashEffect(EnClearTag *arg0, ? *arg1, f32 arg2, f32 arg3) {
    s16 temp_v1;
    void *phi_v0;
    s16 phi_v1;

    phi_v0 = arg0 + 0x144;
    phi_v1 = 0;
loop_1:
    if (phi_v0->unk0 == 0) {
        phi_v0->unk0 = 4U;
        phi_v0->unk4 = (s32) arg1->unk0;
        phi_v0->unk8 = (s32) arg1->unk4;
        phi_v0->unkC = (s32) arg1->unk8;
        phi_v0->unk10 = (s32) D_8094AD60.unk0;
        phi_v0->unk14 = (s32) D_8094AD60.unk4;
        phi_v0->unk18 = (s32) D_8094AD60.unk8;
        phi_v0->unk1C = (s32) D_8094AD60.unk0;
        phi_v0->unk20 = (s32) D_8094AD60.unk4;
        phi_v0->unk54 = (f32) (arg2 * 3.0f);
        phi_v0->unk60 = arg3;
        phi_v0->unk50 = 0.0f;
        phi_v0->unk34 = 255.0f;
        phi_v0->unk24 = (s32) D_8094AD60.unk8;
        return;
    }
    temp_v1 = phi_v1 + 1;
    phi_v0 += 0x70;
    phi_v1 = temp_v1;
    if ((s32) temp_v1 >= 0x66) {
        return;
    }
    goto loop_1;
}

void EnClearTag_CreateLightRayEffect(EnClearTag *arg0, ? *arg1, f32 *arg2, f32 *arg3, f32 arg4, f32 arg5, s16 arg6) {
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f6;
    s16 temp_v0;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0 + 0x144;
    phi_v0 = 0;
loop_1:
    if (phi_s0->unk0 == 0) {
        phi_s0->unk0 = 5U;
        phi_s0->unk4 = (s32) arg1->unk0;
        phi_s0->unk8 = (s32) arg1->unk4;
        phi_s0->unkC = (s32) arg1->unk8;
        phi_s0->unk10 = (f32) arg2->unk0;
        phi_s0->unk14 = (f32) arg2->unk4;
        phi_s0->unk18 = (f32) arg2->unk8;
        phi_s0->unk1C = (s32) arg3->unk0;
        phi_s0->unk20 = (s32) arg3->unk4;
        phi_s0->unk24 = (s32) arg3->unk8;
        phi_s0->unk54 = 1.0f;
        phi_s0->unk50 = (f32) (arg4 / 1000.0f);
        phi_s0->unk64 = arg5;
        phi_s0->unk4C = (s16) (s32) (Rand_ZeroFloat(100.0f) + 200.0f);
        phi_s0->unk4E = arg6;
        phi_s0->unk1 = (s8) (u32) Rand_ZeroFloat(10.0f);
        temp_f16 = phi_s0->unk10;
        temp_f2 = phi_s0->unk18;
        phi_s0->unk58 = Math_Acot2F(phi_s0->unk18, phi_s0->unk10);
        temp_f6 = -Math_Acot2F(sqrtf((temp_f16 * temp_f16) + (temp_f2 * temp_f2)), phi_s0->unk14);
        phi_s0->unk38 = 255.0f;
        phi_s0->unk5C = temp_f6;
        phi_s0->unk3C = 255.0f;
        phi_s0->unk28 = 255.0f;
        phi_s0->unk2C = 255.0f;
        phi_s0->unk30 = 255.0f;
        phi_s0->unk40 = 0.0f;
        return;
    }
    temp_v0 = phi_v0 + 1;
    phi_s0 += 0x70;
    phi_v0 = temp_v0;
    if ((s32) temp_v0 >= 0x66) {
        return;
    }
    goto loop_1;
}

void EnClearTag_CreateIsolatedLightRayEffect(EnClearTag *arg0, ? *arg1, f32 *arg2, f32 *arg3, f32 arg4, f32 arg5, s16 arg6, s16 arg7) {
    f32 temp_f16;
    f32 temp_f2;
    s16 temp_v0_2;
    s32 temp_a0;
    void *temp_v0;
    void *temp_v1;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0 + 0x144;
    phi_v0 = 0;
loop_1:
    if (phi_s0->unk0 == 0) {
        phi_s0->unk0 = 5U;
        phi_s0->unk4 = (s32) arg1->unk0;
        phi_s0->unk8 = (s32) arg1->unk4;
        phi_s0->unkC = (s32) arg1->unk8;
        phi_s0->unk10 = (f32) arg2->unk0;
        phi_s0->unk14 = (f32) arg2->unk4;
        phi_s0->unk18 = (f32) arg2->unk8;
        phi_s0->unk1C = (s32) arg3->unk0;
        phi_s0->unk20 = (s32) arg3->unk4;
        phi_s0->unk24 = (s32) arg3->unk8;
        phi_s0->unk54 = 1.0f;
        phi_s0->unk50 = (f32) (arg4 / 1000.0f);
        phi_s0->unk64 = arg5;
        phi_s0->unk4C = (s16) (s32) (Rand_ZeroFloat(100.0f) + 200.0f);
        phi_s0->unk4E = arg7;
        phi_s0->unk1 = (s8) (u32) Rand_ZeroFloat(10.0f);
        temp_f16 = phi_s0->unk10;
        temp_f2 = phi_s0->unk18;
        phi_s0->unk58 = Math_Acot2F(phi_s0->unk18, phi_s0->unk10);
        phi_s0->unk5C = (f32) -Math_Acot2F(sqrtf((temp_f16 * temp_f16) + (temp_f2 * temp_f2)), phi_s0->unk14);
        temp_a0 = arg6 * 0xC;
        temp_v0 = temp_a0 + &D_8094AD6C;
        temp_v1 = temp_a0 + &D_8094AD9C;
        phi_s0->unk38 = (f32) temp_v0->unk0;
        phi_s0->unk3C = (f32) temp_v0->unk4;
        phi_s0->unk40 = (f32) temp_v0->unk8;
        phi_s0->unk28 = (f32) temp_v1->unk0;
        phi_s0->unk2C = (f32) temp_v1->unk4;
        phi_s0->unk30 = (f32) temp_v1->unk8;
        return;
    }
    temp_v0_2 = phi_v0 + 1;
    phi_s0 += 0x70;
    phi_v0 = temp_v0_2;
    if ((s32) temp_v0_2 >= 0x66) {
        return;
    }
    goto loop_1;
}

void EnClearTag_CreateShockwaveEffect(EnClearTag *arg0, ? *arg1, ?32 arg2, s16 arg3) {
    s16 temp_v1;
    void *phi_v0;
    s16 phi_v1;

    phi_v0 = arg0 + 0x144;
    phi_v1 = 0;
loop_1:
    if (phi_v0->unk0 == 0) {
        phi_v0->unk0 = 6U;
        phi_v0->unk4 = (s32) arg1->unk0;
        phi_v0->unk8 = (s32) arg1->unk4;
        phi_v0->unkC = (s32) arg1->unk8;
        phi_v0->unk10 = (s32) D_8094AD60.unk0;
        phi_v0->unk14 = (s32) D_8094AD60.unk4;
        phi_v0->unk18 = (s32) D_8094AD60.unk8;
        phi_v0->unk1C = (s32) D_8094AD60.unk0;
        phi_v0->unk20 = (s32) D_8094AD60.unk4;
        phi_v0->unk54 = arg2;
        phi_v0->unk1 = (s8) arg3;
        phi_v0->unk50 = 0.0f;
        phi_v0->unk34 = 200.0f;
        phi_v0->unk24 = (s32) D_8094AD60.unk8;
        return;
    }
    temp_v1 = phi_v1 + 1;
    phi_v0 += 0x70;
    phi_v1 = temp_v1;
    if ((s32) temp_v1 >= 0x66) {
        return;
    }
    goto loop_1;
}

void EnClearTag_CreateSplashEffect(EnClearTag *arg0, ? *arg1, s16 arg2) {
    void *sp18;
    f32 temp_f0;
    s16 temp_v1;
    s32 temp_f4;
    void *phi_v0;
    s8 phi_t8;
    s16 phi_v1;

    phi_v0 = arg0 + 0x144;
    phi_v1 = 0;
loop_1:
    if (phi_v0->unk0 == 0) {
        sp18 = phi_v0;
        temp_f0 = Rand_ZeroFloat(100.0f);
        temp_f4 = (s32) temp_f0;
        if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
            if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
                phi_t8 = (s32) (temp_f0 - 2.1474836e9f) | 0x80000000;
            } else {
                goto block_5;
            }
        } else {
            phi_t8 = (s8) temp_f4;
            if (temp_f4 < 0) {
block_5:
                phi_t8 = -1;
            }
        }
        phi_v0->unk1 = phi_t8;
        phi_v0->unk0 = 7U;
        phi_v0->unk4 = (s32) arg1->unk0;
        phi_v0->unk8 = (s32) arg1->unk4;
        phi_v0->unkC = (s32) arg1->unk8;
        phi_v0->unk10 = (s32) D_8094AD60.unk0;
        phi_v0->unk14 = (s32) D_8094AD60.unk4;
        phi_v0->unk18 = (s32) D_8094AD60.unk8;
        phi_v0->unk1C = (s32) D_8094AD60.unk0;
        phi_v0->unk20 = (s32) D_8094AD60.unk4;
        phi_v0->unk50 = 0.0f;
        phi_v0->unk54 = 0.0f;
        phi_v0->unk1 = 0;
        phi_v0->unk24 = (s32) D_8094AD60.unk8;
        phi_v0->unk4A = arg2;
        phi_v0->unk5C = 0.78f;
        return;
    }
    temp_v1 = phi_v1 + 1;
    phi_v0 += 0x70;
    phi_v1 = temp_v1;
    if ((s32) temp_v1 >= 0x66) {
        return;
    }
    goto loop_1;
}

void EnClearTag_Destroy(EnClearTag *this, GlobalContext *globalCtx) {
    EnClearTag *this = (EnClearTag *) thisx;

}

void EnClearTag_Init(EnClearTag *this, GlobalContext *globalCtx) {
    f32 spA8;
    ? spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    PosRot *temp_s3;
    f32 *temp_s4;
    f32 *temp_s6;
    f32 *temp_s6_2;
    f32 *temp_s6_3;
    f32 temp_f10;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f20_5;
    f32 temp_f22;
    s16 temp_s0;
    s16 temp_s0_2;
    s16 temp_s0_3;
    s16 temp_v0;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 phi_s0;
    f32 phi_f20;
    s32 phi_s0_2;
    s32 phi_s0_3;
    EnClearTag *this = (EnClearTag *) thisx;

    this->actor.flags &= -2;
    if ((s32) this->actor.params >= 0) {
        temp_s3 = &this->actor.world;
        this->activeTimer = 0x46;
        Math_Vec3f_Copy((Vec3f *) &spA4, (Vec3f *) temp_s3);
        temp_s0 = this->actor.params;
        if (temp_s0 == 0xC8) {
            EnClearTag_CreateIsolatedSmokeEffect(this, &spA4, (f32) this->actor.world.rot.z);
            return;
        }
        if (temp_s0 != 0x23) {
            temp_s6 = &sp8C;
            if ((temp_s0 == 3) || (temp_s0 == 4)) {
                phi_s0_3 = 0;
                do {
                    temp_f20_4 = Rand_ZeroFloat(*(&D_8094AE20 + (this->actor.params * 4))) + *(&D_8094AE20 + (this->actor.params * 4));
                    SysMatrix_InsertYRotation_f(Rand_ZeroFloat(6.2831855f), 0);
                    SysMatrix_RotateStateAroundXAxis(Rand_ZeroFloat(6.2831855f));
                    SysMatrix_GetStateTranslationAndScaledZ(temp_f20_4, (Vec3f *) &sp98);
                    sp8C = sp98 * -0.03f;
                    sp90 = sp9C * -0.03f;
                    sp94 = spA0 * -0.03f;
                    temp_f20_5 = Rand_ZeroFloat(*(&D_8094ADF8 + (this->actor.params * 4)) * 0.5f);
                    temp_v0_3 = this->actor.params * 4;
                    EnClearTag_CreateIsolatedLightRayEffect(this, &spA4, &sp98, temp_s6, temp_f20_5 + *(&D_8094ADF8 + temp_v0_3), *(&D_8094AE0C + temp_v0_3), (s16) (s32) this->actor.world.rot.z, (s16) (s32) (Rand_ZeroFloat(10.0f) + 20.0f));
                    temp_s0_6 = (phi_s0_3 + 1) & 0xFF;
                    phi_s0_3 = temp_s0_6;
                } while (temp_s0_6 < 0x36);
                return;
            }
            temp_v0 = this->actor.world.rot.x;
            if ((temp_v0 != 0) || (this->actor.world.rot.y != 0) || (this->actor.world.rot.z != 0)) {
                this->flashEnvColor.r = (u8) temp_v0;
                this->flashEnvColor.g = (u8) this->actor.world.rot.y;
                this->flashEnvColor.b = (u8) this->actor.world.rot.z;
            } else {
                this->flashEnvColor.r = 0xFF;
                this->flashEnvColor.g = 0;
            }
            Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 50.0f, 30.0f, 100.0f, 4U);
            spA4.unk0 = (f32) temp_s3->pos.x;
            spA4.unk4 = (f32) temp_s3->pos.y;
            spA4.unk8 = (f32) temp_s3->pos.z;
            EnClearTag_CreateFlashEffect(this, &spA4, *(&D_8094ADCC + (this->actor.params * 4)), this->actor.floorHeight);
            if ((this->actor.bgCheckFlags & 0x20) == 0) {
                if ((s32) this->actor.params < 0xA) {
                    spA8 = this->actor.world.pos.y - 40.0f;
                    temp_s0_2 = this->actor.params;
                    if (temp_s0_2 != 2) {
                        EnClearTag_CreateSmokeEffect(this, &spA4, *(&D_8094ADD8 + (temp_s0_2 * 4)));
                    }
                    spA8 = this->actor.floorHeight + 3.0f;
                    EnClearTag_CreateShockwaveEffect(this, &spA4, *(&D_8094ADE0 + (this->actor.params * 4)), 0);
                    EnClearTag_CreateShockwaveEffect(this, &spA4, *(&D_8094ADE0 + (this->actor.params * 4)), 3);
                    temp_s0_3 = this->actor.params;
                    if (temp_s0_3 == 1) {
                        EnClearTag_CreateShockwaveEffect(this, &spA4, *(&D_8094ADE0 + (temp_s0_3 * 4)), 6);
                    }
                }
                temp_s6_2 = &sp8C;
                if (this->actor.params != 2) {
                    temp_s4 = &sp98;
                    spA8 = this->actor.world.pos.y;
                    phi_s0 = 0;
                    do {
                        temp_f20 = (f32) phi_s0;
                        phi_f20 = temp_f20;
                        if (phi_s0 < 0) {
                            phi_f20 = temp_f20 + 4294967296.0f;
                        }
                        temp_f22 = phi_f20 * 0.825f;
                        sp98 = __sinf(temp_f22) * phi_f20 * 0.5f;
                        spA0 = __cosf(temp_f22) * phi_f20 * 0.5f;
                        sp9C = Rand_ZeroFloat(8.0f) + 7.0f;
                        sp98 += randPlusMinusPoint5Scaled(0.5f);
                        temp_f10 = spA0 + randPlusMinusPoint5Scaled(0.5f);
                        sp8C = 0.0f;
                        sp94 = 0.0f;
                        sp90 = -1.0f;
                        spA0 = temp_f10;
                        EnClearTag_CreateDebrisEffect(this, &spA4, temp_s4, temp_s6_2, Rand_ZeroFloat(*(&D_8094ADEC + (this->actor.params * 4))) + *(&D_8094ADEC + (this->actor.params * 4)), this->actor.floorHeight);
                        temp_s0_4 = (phi_s0 + 1) & 0xFF;
                        phi_s0 = temp_s0_4;
                    } while (temp_s0_4 < 0x12);
                }
            }
            spA4.unk0 = (f32) temp_s3->pos.x;
            spA4.unk4 = (f32) temp_s3->pos.y;
            spA4.unk8 = (f32) temp_s3->pos.z;
            temp_s6_3 = &sp8C;
            phi_s0_2 = 0;
            do {
                temp_f20_2 = Rand_ZeroFloat(*(&D_8094AE20 + (this->actor.params * 4))) + *(&D_8094AE20 + (this->actor.params * 4));
                SysMatrix_InsertYRotation_f(Rand_ZeroFloat(6.2831855f), 0);
                SysMatrix_RotateStateAroundXAxis(Rand_ZeroFloat(6.2831855f));
                SysMatrix_GetStateTranslationAndScaledZ(temp_f20_2, (Vec3f *) &sp98);
                sp8C = sp98 * -0.03f;
                sp90 = sp9C * -0.03f;
                sp94 = spA0 * -0.03f;
                temp_f20_3 = Rand_ZeroFloat(*(&D_8094ADF8 + (this->actor.params * 4)) * 0.5f);
                temp_v0_2 = this->actor.params * 4;
                EnClearTag_CreateLightRayEffect(this, &spA4, &sp98, temp_s6_3, temp_f20_3 + *(&D_8094ADF8 + temp_v0_2), *(&D_8094AE0C + temp_v0_2), (s16) (s32) (Rand_ZeroFloat(10.0f) + 20.0f));
                temp_s0_5 = (phi_s0_2 + 1) & 0xFF;
                phi_s0_2 = temp_s0_5;
            } while (temp_s0_5 < 0x2C);
            goto block_27;
        }
block_27:
        EnClearTag_CreateSplashEffect(this, &spA4, 0);
        EnClearTag_CreateSplashEffect(this, &spA4, 2);
        /* Duplicate return node #28. Try simplifying control flow for better match */
    }
}

void EnClearTag_UpdateCamera(Actor *arg0, GlobalContext *arg1) {
    void *sp34;
    CutsceneContext *sp24;
    Camera *temp_v0_2;
    Camera *temp_v0_3;
    f32 temp_f2;
    s16 temp_a1;
    u8 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = arg0->unk2E54;
    temp_v1 = arg1->actorCtx.actorList[2].first;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {

            } else {
                goto block_16;
            }
        } else {
            sp34 = temp_v1;
            func_800EA0D4(arg1, arg1 + 0x1F24);
            arg0->unk2E64 = func_801694DC(arg1);
            func_80169590(arg1, 0, 1);
            func_80169590(arg1, arg0->unk2E64, 7);
            func_800B7298(arg1, arg0, 4U);
            temp_v0_2 = Play_GetCamera(arg1, 0);
            arg0->unk2E6C = (f32) temp_v0_2->eye.x;
            arg0->unk2E70 = (f32) temp_v0_2->eye.y;
            arg0->unk2E74 = (f32) temp_v0_2->eye.z;
            arg0->unk2E78 = (f32) temp_v0_2->at.x;
            arg0->unk2E7C = (f32) temp_v0_2->at.y;
            arg0->unk2E80 = (f32) temp_v0_2->at.z;
            func_801518B0(arg1, 0xFU, NULL);
            arg0->unk2E54 = 2U;
            func_8019FDC8((void *) &D_801DB4A4, 0x6873U, 0x20);
block_16:
            if (arg1->actorCtx.actorList[2].first->world.pos.z > 0.0f) {
                arg1->actorCtx.actorList[2].first->world.pos.z = 290.0f;
            } else {
                arg1->actorCtx.actorList[2].first->world.pos.z = -950.0f;
            }
            arg1->actorCtx.actorList[2].first->speedXZ = 0.0f;
            if (func_80152498(&arg1->msgCtx) == 0) {
                sp24 = &arg1->csCtx;
                temp_v0_3 = Play_GetCamera(arg1, 0);
                temp_v1_2 = arg0 + 0x2E6C;
                temp_v0_3->eye.x = temp_v1_2->unk0;
                temp_v0_3->eye.y = temp_v1_2->unk4;
                temp_v0_3->eye.z = temp_v1_2->unk8;
                temp_v0_3->eyeNext.x = temp_v1_2->unk0;
                temp_v0_3->eyeNext.y = temp_v1_2->unk4;
                temp_v0_3->eyeNext.z = temp_v1_2->unk8;
                temp_v0_3->at.x = arg0->unk2E78;
                temp_v0_3->at.y = arg0->unk2E7C;
                temp_v0_3->at.z = arg0->unk2E80;
                func_80169AFC(arg1, arg0->unk2E64, 0);
                func_800EA0EC(arg1, sp24);
                func_800B7298(arg1, arg0, 6U);
                arg0->unk2E54 = 0U;
                arg0->unk2E64 = 0;
                arg0->unk2E56 = 0x14;
            }
        }
    } else {
        temp_f2 = temp_v1->world.pos.z;
        if (((temp_f2 > 0.0f) && (temp_f2 > 290.0f) && (fabsf(temp_v1->world.pos.x) < 60.0f)) || ((temp_f2 < 0.0f) && (temp_f2 < -950.0f) && (fabsf(temp_v1->world.pos.x) < 103.0f))) {
            if (temp_f2 > 0.0f) {
                temp_v1->world.pos.z = 290.0f;
            } else {
                temp_v1->world.pos.z = -950.0f;
            }
            temp_v1->speedXZ = 0.0f;
            if (arg0->unk2E56 == 0) {
                arg0->unk2E54 = 1U;
            }
        }
    }
    temp_a1 = arg0->unk2E64;
    if (temp_a1 != 0) {
        Play_CameraSetAtEye(arg1, temp_a1, arg0 + 0x2E78, arg0 + 0x2E6C);
    }
}

void EnClearTag_Update(EnClearTag *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    EnClearTag *this = (EnClearTag *) thisx;

    temp_v0 = this->activeTimer;
    if (temp_v0 != 0) {
        this->activeTimer = temp_v0 - 1;
    }
    if ((s32) this->actor.params < 0) {
        EnClearTag_UpdateCamera();
        return;
    }
    if (this->activeTimer != 0) {
        EnClearTag_UpdateEffects(this, globalCtx);
        return;
    }
    Actor_MarkForDeath((Actor *) this);
}

void EnClearTag_Draw(EnClearTag *this, GlobalContext *globalCtx) {
    EnClearTag *this = (EnClearTag *) thisx;
    EnClearTag_DrawEffects((Actor *) this, globalCtx);
}

void EnClearTag_UpdateEffects(EnClearTag *this, GlobalContext *globalCtx) {
    f32 sp6C;
    f32 sp64;
    ? sp60;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f18_2;
    s16 temp_s1;
    s16 temp_v0_2;
    s16 temp_v0_3;
    u8 temp_v0;
    EnClearTagEffect *phi_s0;
    s16 phi_s1;

    phi_s0 = this->effect;
    phi_s1 = 0;
    do {
        if (phi_s0->type != 0) {
            temp_f18 = phi_s0->velocity.x;
            temp_f16 = phi_s0->position.y;
            temp_f12 = phi_s0->velocity.y;
            temp_f10 = phi_s0->velocity.z;
            temp_v0 = phi_s0->type;
            phi_s0->position.x += temp_f18;
            phi_s0->actionTimer += 1;
            phi_s0->position.y = temp_f16 + temp_f12;
            phi_s0->position.z += temp_f10;
            phi_s0->velocity.x = temp_f18 + phi_s0->acceleration.x;
            phi_s0->velocity.y = temp_f12 + phi_s0->acceleration.y;
            phi_s0->velocity.z = temp_f10 + phi_s0->acceleration.z;
            if (temp_v0 == 1) {
                if (phi_s0->velocity.y < -5.0f) {
                    phi_s0->velocity.y = -5.0f;
                }
                if (phi_s0->velocity.y < 0.0f) {
                    sp60.unk0 = (f32) phi_s0->position.x;
                    sp60.unk4 = (f32) phi_s0->position.y;
                    sp60.unk8 = (f32) phi_s0->position.z;
                    sp6C = temp_f16;
                    sp64 += 5.0f;
                    if (func_800C5A20(&globalCtx->colCtx, (Vec3f *) &sp60, 11.0f) != 0) {
                        temp_v0_2 = phi_s0->bounces;
                        phi_s0->position.y = temp_f16;
                        if ((s32) temp_v0_2 <= 0) {
                            phi_s0->bounces = temp_v0_2 + 1;
                            phi_s0->velocity.y *= -0.5f;
                            phi_s0->effectsTimer = (s16) (s32) (Rand_ZeroFloat(20.0f) + 25.0f);
                        } else {
                            phi_s0->velocity.y = 0.0f;
                            phi_s0->acceleration.y = 0.0f;
                            phi_s0->velocity.z = 0.0f;
                            phi_s0->velocity.x = 0.0f;
                        }
                    }
                }
                if (phi_s0->acceleration.y != 0.0f) {
                    phi_s0->rotationY += 0.5f;
                    phi_s0->rotationX += 0.35f;
                }
                if (phi_s0->effectsTimer == 1) {
                    phi_s0->type = 0;
                }
            } else if (temp_v0 == 2) {
                Math_ApproachZeroF(phi_s0 + 0x34, 1.0f, 15.0f);
                if (phi_s0->primColor.a <= 0.0f) {
                    phi_s0->type = 0;
                }
            } else if (temp_v0 == 6) {
                if ((s32) phi_s0->actionTimer >= 4) {
                    temp_f0 = phi_s0->maxScale;
                    Math_ApproachF(phi_s0 + 0x50, temp_f0, 0.2f, temp_f0 * 0.6666666f);
                    Math_ApproachZeroF(phi_s0 + 0x34, 1.0f, 15.0f);
                    if (phi_s0->primColor.a <= 0.0f) {
                        phi_s0->type = 0;
                    }
                }
            } else if (temp_v0 == 3) {
                Math_ApproachZeroF(phi_s0 + 0x28, 1.0f, 20.0f);
                Math_ApproachZeroF(phi_s0 + 0x2C, 1.0f, 2.0f);
                Math_ApproachZeroF(phi_s0 + 0x38, 1.0f, 25.5f);
                Math_ApproachZeroF(phi_s0 + 0x3C, 1.0f, 21.5f);
                Math_ApproachZeroF(phi_s0 + 0x40, 1.0f, 25.5f);
                Math_ApproachF(phi_s0 + 0x50, phi_s0->maxScale, 0.05f, 0.1f);
                if (phi_s0->primColor.r == 0.0f) {
                    Math_ApproachF(phi_s0 + 0x6C, 3.0f, 0.1f, 0.01f);
                    Math_ApproachF(phi_s0 + 0x68, 3.0f, 0.1f, 0.02f);
                    Math_ApproachZeroF(phi_s0 + 0x34, 1.0f, 5.0f);
                    if (phi_s0->primColor.a <= 0.0f) {
                        phi_s0->type = 0;
                    }
                }
            } else if (temp_v0 == 8) {
                Math_ApproachF(phi_s0 + 0x50, phi_s0->maxScale, 0.05f, 0.1f);
                if ((s32) phi_s0->actionTimer >= 0xB) {
                    Math_ApproachF(phi_s0 + 0x6C, 3.0f, 0.1f, 0.01f);
                    Math_ApproachF(phi_s0 + 0x68, 3.0f, 0.1f, 0.02f);
                    Math_ApproachZeroF(phi_s0 + 0x34, 1.0f, 5.0f);
                    if (phi_s0->primColor.a <= 0.0f) {
                        phi_s0->type = 0;
                    }
                }
            } else if (temp_v0 == 4) {
                Math_ApproachF(phi_s0 + 0x50, phi_s0->maxScale, 0.5f, 6.0f);
                Math_ApproachZeroF(phi_s0 + 0x34, 1.0f, 15.0f);
                if (phi_s0->primColor.a <= 0.0f) {
                    phi_s0->type = 0;
                }
            } else if (temp_v0 == 5) {
                temp_f18_2 = Rand_ZeroFloat(1.5707964f) + 1.5707964f;
                phi_s0->lightRayAlpha -= phi_s0->lightRayAlphaDecrementSpeed;
                phi_s0->rotationZ += temp_f18_2;
                if ((s32) phi_s0->lightRayAlpha <= 0) {
                    phi_s0->lightRayAlpha = 0;
                    phi_s0->type = 0;
                }
                temp_f0_2 = (f32) phi_s0->lightRayAlpha;
                phi_s0->primColor.a = temp_f0_2;
                if (temp_f0_2 > 255.0f) {
                    phi_s0->primColor.a = 255.0f;
                }
                temp_f0_3 = phi_s0->maxScaleTarget;
                Math_ApproachF(phi_s0 + 0x54, temp_f0_3, 1.0f, (temp_f0_3 / 15.0f) * 4.0f);
            } else if (temp_v0 == 7) {
                if (phi_s0->effectsTimer == 0) {
                    phi_s0->scale = 7.0f;
                    Math_ApproachF(phi_s0 + 0x54, 500.0f, 1.0f, 50.0f);
                    Math_ApproachF(phi_s0 + 0x5C, 1.5f, 1.0f, 0.12f);
                    if ((s32) phi_s0->actionTimer >= 8) {
                        phi_s0->type = 0;
                    }
                } else {
                    phi_s0->actionTimer = 0;
                }
            }
            temp_v0_3 = phi_s0->effectsTimer;
            if (temp_v0_3 != 0) {
                phi_s0->effectsTimer = temp_v0_3 - 1;
            }
        }
        temp_s1 = phi_s1 + 1;
        phi_s0 += 0x70;
        phi_s1 = temp_s1;
    } while ((s32) temp_s1 < 0x67);
}

void EnClearTag_DrawEffects(EnClearTag *this, GlobalContext *globalCtx) {
    u8 sp1B7;
    s16 sp1B4;
    f32 sp1A4;
    WaterBox *sp1A0;
    f32 sp19C;
    ? sp15C;
    EnClearTagEffect *sp90;
    CollisionContext *temp_s5;
    EnClearTagEffect *temp_s3;
    EnClearTagEffect *temp_v0;
    Gfx *temp_s0;
    Gfx *temp_s0_10;
    Gfx *temp_s0_2;
    Gfx *temp_s0_3;
    Gfx *temp_s0_4;
    Gfx *temp_s0_5;
    Gfx *temp_s0_6;
    Gfx *temp_s0_7;
    Gfx *temp_s0_8;
    Gfx *temp_s0_9;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v1;
    Gfx *temp_v1_10;
    Gfx *temp_v1_11;
    Gfx *temp_v1_12;
    Gfx *temp_v1_13;
    Gfx *temp_v1_14;
    Gfx *temp_v1_15;
    Gfx *temp_v1_16;
    Gfx *temp_v1_17;
    Gfx *temp_v1_18;
    Gfx *temp_v1_19;
    Gfx *temp_v1_20;
    Gfx *temp_v1_21;
    Gfx *temp_v1_22;
    Gfx *temp_v1_23;
    Gfx *temp_v1_24;
    Gfx *temp_v1_25;
    Gfx *temp_v1_26;
    Gfx *temp_v1_27;
    Gfx *temp_v1_28;
    Gfx *temp_v1_29;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    Gfx *temp_v1_8;
    Gfx *temp_v1_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s4;
    MtxF *temp_s1;
    MtxF *temp_s1_2;
    MtxF *temp_s1_3;
    f32 *temp_s7;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f20_5;
    f32 temp_f20_6;
    f32 temp_f20_7;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_a1_3;
    s16 temp_s1_4;
    s16 temp_t0;
    s16 temp_t0_2;
    s16 temp_t1;
    s16 temp_t4;
    s16 temp_t5;
    u8 temp_v0_5;
    EnClearTagEffect *phi_s3;
    s16 phi_a1;
    EnClearTagEffect *phi_s3_2;
    s16 phi_t0;
    EnClearTagEffect *phi_s3_3;
    s16 phi_t0_2;
    EnClearTagEffect *phi_s3_4;
    s16 phi_a1_2;
    EnClearTagEffect *phi_s3_5;
    s16 phi_a1_3;
    EnClearTagEffect *phi_s3_6;
    EnClearTagEffect *phi_s3_7;
    EnClearTagEffect *phi_s3_8;
    s16 phi_s1;
    EnClearTag *this = (EnClearTag *) thisx;

    sp1B7 = 0;
    temp_v0 = this->effect;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s3 = temp_v0;
    temp_s4 = temp_a0;
    sp90 = temp_v0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    phi_s3 = temp_s3;
    phi_a1 = 0;
    phi_a1_2 = 0;
    phi_a1_3 = 0;
    do {
        if (phi_s3->type == 1) {
            if (sp1B7 == 0) {
                sp1B7 += 1;
                temp_v0_2 = temp_s4->polyOpa.p;
                temp_s4->polyOpa.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = (u32) &D_8094B090;
                temp_v0_2->words.w0 = 0xDE000000;
            }
            sp1B4 = phi_a1;
            SysMatrix_InsertTranslation(phi_s3->position.x, phi_s3->position.y, phi_s3->position.z, 0);
            temp_f20 = phi_s3->scale;
            Matrix_Scale(temp_f20, temp_f20, temp_f20, 1);
            SysMatrix_InsertYRotation_f(phi_s3->rotationY, 1);
            SysMatrix_RotateStateAroundXAxis(phi_s3->rotationX);
            temp_v0_3 = temp_s4->polyOpa.p;
            temp_s4->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDA380003;
            temp_v0_3->words.w1 = Matrix_NewMtx(temp_s4);
            temp_v0_4 = temp_s4->polyOpa.p;
            temp_s4->polyOpa.p = temp_v0_4 + 8;
            temp_v0_4->words.w1 = (u32) &D_8094B110;
            temp_v0_4->words.w0 = 0xDE000000;
        }
        temp_a1 = phi_a1 + 1;
        phi_s3 += 0x70;
        phi_a1 = temp_a1;
    } while ((s32) temp_a1 < 0x67);
    sp1B7 = 0;
    phi_s3_2 = sp90;
    phi_t0 = 0;
    phi_t0_2 = 0;
    if (this->actor.floorPoly != 0) {
        do {
            if (phi_s3_2->type == 6) {
                temp_v1 = temp_s4->polyXlu.p;
                temp_s4->polyXlu.p = temp_v1 + 8;
                temp_v1->words.w1 = 0;
                temp_v1->words.w0 = 0xE7000000;
                temp_v1_2 = temp_s4->polyXlu.p;
                temp_s4->polyXlu.p = temp_v1_2 + 8;
                temp_v1_2->words.w0 = 0xFB000000;
                temp_v1_2->words.w1 = ((s32) phi_s3_2->primColor.a & 0xFF) | ~0xFF;
                temp_v1_3 = temp_s4->polyXlu.p;
                temp_s4->polyXlu.p = temp_v1_3 + 8;
                temp_v1_3->words.w0 = 0xFA000000;
                temp_v1_3->words.w1 = ((s32) phi_s3_2->primColor.a & 0xFF) | ~0xFF;
                sp1B4 = phi_t0;
                func_800C0094(this->actor.floorPoly, phi_s3_2->position.x, phi_s3_2->position.y, phi_s3_2->position.z, (MtxF *) &sp15C);
                SysMatrix_SetCurrentState((MtxF *) &sp15C);
                temp_f20_2 = phi_s3_2->scale;
                Matrix_Scale(temp_f20_2, 1.0f, temp_f20_2, 1);
                temp_s0 = temp_s4->polyXlu.p;
                temp_s4->polyXlu.p = temp_s0 + 8;
                temp_s0->words.w0 = 0xDA380003;
                temp_s0->words.w1 = Matrix_NewMtx(temp_s4);
                temp_v1_4 = temp_s4->polyXlu.p;
                temp_s4->polyXlu.p = temp_v1_4 + 8;
                temp_v1_4->words.w1 = (u32) D_04030100;
                temp_v1_4->words.w0 = 0xDE000000;
            }
            temp_t0 = phi_t0 + 1;
            phi_s3_2 += 0x70;
            phi_t0 = temp_t0;
        } while ((s32) temp_t0 < 0x67);
    }
    phi_s3_3 = sp90;
    phi_s3_4 = sp90;
    if (this->actor.floorPoly != 0) {
        do {
            if (phi_s3_3->type == 4) {
                if (sp1B7 == 0) {
                    temp_v1_5 = temp_s4->polyXlu.p;
                    temp_s4->polyXlu.p = temp_v1_5 + 8;
                    temp_v1_5->words.w1 = 0;
                    temp_v1_5->words.w0 = 0xE7000000;
                    temp_v1_6 = temp_s4->polyXlu.p;
                    temp_s4->polyXlu.p = temp_v1_6 + 8;
                    temp_v1_6->words.w1 = -0x3800;
                    temp_v1_6->words.w0 = 0xFB000000;
                    sp1B7 += 1;
                }
                temp_v1_7 = temp_s4->polyXlu.p;
                temp_s4->polyXlu.p = temp_v1_7 + 8;
                temp_v1_7->words.w0 = 0xFA000000;
                temp_v1_7->words.w1 = ((s32) (phi_s3_3->primColor.a * 0.7f) & 0xFF) | ~0x37FF;
                sp1B4 = phi_t0_2;
                func_800C0094(this->actor.floorPoly, phi_s3_3->position.x, this->actor.floorHeight, phi_s3_3->position.z, (MtxF *) &sp15C);
                SysMatrix_SetCurrentState((MtxF *) &sp15C);
                temp_f12 = phi_s3_3->scale * 3.0f;
                Matrix_Scale(temp_f12, 1.0f, temp_f12, 1);
                temp_s0_2 = temp_s4->polyXlu.p;
                temp_s4->polyXlu.p = temp_s0_2 + 8;
                temp_s0_2->words.w0 = 0xDA380003;
                temp_s0_2->words.w1 = Matrix_NewMtx(temp_s4);
                temp_v1_8 = temp_s4->polyXlu.p;
                temp_s4->polyXlu.p = temp_v1_8 + 8;
                temp_v1_8->words.w1 = (u32) &D_8094CB10;
                temp_v1_8->words.w0 = 0xDE000000;
            }
            temp_t0_2 = phi_t0_2 + 1;
            phi_s3_3 += 0x70;
            phi_t0_2 = temp_t0_2;
        } while ((s32) temp_t0_2 < 0x67);
        sp1B7 = 0;
        phi_s3_4 = sp90;
    }
    do {
        temp_v0_5 = phi_s3_4->type;
        if ((temp_v0_5 == 3) || (temp_v0_5 == 8)) {
            temp_s1 = &globalCtx->mf_187FC;
            if (sp1B7 == 0) {
                temp_v1_9 = temp_s4->polyXlu.p;
                temp_s4->polyXlu.p = temp_v1_9 + 8;
                temp_v1_9->words.w1 = (u32) &D_8094B758;
                temp_v1_9->words.w0 = 0xDE000000;
                sp1B7 += 1;
            }
            temp_v1_10 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_v1_10 + 8;
            temp_v1_10->words.w1 = 0;
            temp_v1_10->words.w0 = 0xE7000000;
            temp_v1_11 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_v1_11 + 8;
            temp_v1_11->words.w0 = 0xFB000000;
            temp_v1_11->words.w1 = ((s32) phi_s3_4->envColor.r << 0x18) | (((s32) phi_s3_4->envColor.g & 0xFF) << 0x10) | (((s32) phi_s3_4->envColor.b & 0xFF) << 8) | 0x80;
            temp_v1_12 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_v1_12 + 8;
            temp_v1_12->words.w0 = 0xFA000000;
            temp_v1_12->words.w1 = ((s32) phi_s3_4->primColor.r << 0x18) | (((s32) phi_s3_4->primColor.g & 0xFF) << 0x10) | (((s32) phi_s3_4->primColor.b & 0xFF) << 8) | ((s32) phi_s3_4->primColor.a & 0xFF);
            sp1B4 = phi_a1_2;
            temp_s0_3 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_s0_3 + 8;
            temp_s0_3->words.w0 = 0xDB060020;
            temp_s0_3->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, (s32) phi_s3_4->actionTimer * -5, 0x20, 0x40, 1, 0U, 0U, 0x20, 0x20);
            SysMatrix_InsertTranslation(phi_s3_4->position.x, phi_s3_4->position.y, phi_s3_4->position.z, 0);
            SysMatrix_NormalizeXYZ(temp_s1);
            temp_f20_3 = phi_s3_4->scale;
            Matrix_Scale(phi_s3_4->smokeScaleX * temp_f20_3, phi_s3_4->smokeScaleY * temp_f20_3, 1.0f, 1);
            SysMatrix_InsertTranslation(0.0f, 20.0f, 0.0f, 1);
            temp_s0_4 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_s0_4 + 8;
            temp_s0_4->words.w0 = 0xDA380003;
            temp_s0_4->words.w1 = Matrix_NewMtx(temp_s4);
            temp_v1_13 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_v1_13 + 8;
            temp_v1_13->words.w1 = (u32) &D_8094B800;
            temp_v1_13->words.w0 = 0xDE000000;
        }
        temp_a1_2 = phi_a1_2 + 1;
        phi_s3_4 += 0x70;
        phi_a1_2 = temp_a1_2;
    } while ((s32) temp_a1_2 < 0x67);
    sp1B7 = 0;
    phi_s3_5 = sp90;
    do {
        if (phi_s3_5->type == 2) {
            temp_s1_2 = &globalCtx->mf_187FC;
            if (sp1B7 == 0) {
                temp_v1_14 = temp_s4->polyXlu.p;
                temp_s4->polyXlu.p = temp_v1_14 + 8;
                temp_v1_14->words.w1 = (u32) &D_8094B758;
                temp_v1_14->words.w0 = 0xDE000000;
                temp_v1_15 = temp_s4->polyXlu.p;
                temp_s4->polyXlu.p = temp_v1_15 + 8;
                temp_v1_15->words.w1 = 0xFFD7FF80;
                temp_v1_15->words.w0 = 0xFB000000;
                sp1B7 += 1;
            }
            temp_v1_16 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_v1_16 + 8;
            temp_v1_16->words.w0 = 0xFA000000;
            temp_v1_16->words.w1 = ((s32) phi_s3_5->primColor.a & 0xFF) | 0xC8140000;
            sp1B4 = phi_a1_3;
            temp_s0_5 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_s0_5 + 8;
            temp_s0_5->words.w0 = 0xDB060020;
            temp_s0_5->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, (s32) phi_s3_5->actionTimer * -0xF, 0x20, 0x40, 1, 0U, 0U, 0x20, 0x20);
            SysMatrix_InsertTranslation(phi_s3_5->position.x, phi_s3_5->position.y, phi_s3_5->position.z, 0);
            SysMatrix_NormalizeXYZ(temp_s1_2);
            temp_f20_4 = phi_s3_5->scale;
            Matrix_Scale(temp_f20_4, temp_f20_4, 1.0f, 1);
            temp_s0_6 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_s0_6 + 8;
            temp_s0_6->words.w0 = 0xDA380003;
            temp_s0_6->words.w1 = Matrix_NewMtx(temp_s4);
            temp_v1_17 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_v1_17 + 8;
            temp_v1_17->words.w1 = (u32) &D_8094B800;
            temp_v1_17->words.w0 = 0xDE000000;
        }
        temp_a1_3 = phi_a1_3 + 1;
        phi_s3_5 += 0x70;
        phi_a1_3 = temp_a1_3;
    } while ((s32) temp_a1_3 < 0x67);
    sp1B7 = 0;
    sp1B4 = 0;
    phi_s3_6 = sp90;
    do {
        if (phi_s3_6->type == 4) {
            temp_s1_3 = &globalCtx->mf_187FC;
            if (sp1B7 == 0) {
                temp_v1_18 = temp_s4->polyXlu.p;
                temp_s4->polyXlu.p = temp_v1_18 + 8;
                temp_v1_18->words.w1 = 0;
                temp_v1_18->words.w0 = 0xE7000000;
                temp_v1_19 = temp_s4->polyXlu.p;
                temp_s4->polyXlu.p = temp_v1_19 + 8;
                temp_v1_19->words.w0 = 0xFB000000;
                temp_v1_19->words.w1 = (this->flashEnvColor.r << 0x18) | (this->flashEnvColor.g << 0x10) | (this->flashEnvColor.b << 8);
                sp1B7 += 1;
            }
            temp_v1_20 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_v1_20 + 8;
            temp_v1_20->words.w0 = 0xFA000000;
            temp_v1_20->words.w1 = ((s32) phi_s3_6->primColor.a & 0xFF) | ~0x37FF;
            SysMatrix_InsertTranslation(phi_s3_6->position.x, phi_s3_6->position.y, phi_s3_6->position.z, 0);
            SysMatrix_NormalizeXYZ(temp_s1_3);
            temp_f12_2 = 2.0f * phi_s3_6->scale;
            Matrix_Scale(temp_f12_2, temp_f12_2, 1.0f, 1);
            temp_s0_7 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_s0_7 + 8;
            temp_s0_7->words.w0 = 0xDA380003;
            temp_s0_7->words.w1 = Matrix_NewMtx(temp_s4);
            temp_v1_21 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_v1_21 + 8;
            temp_v1_21->words.w1 = (u32) &D_8094C860;
            temp_v1_21->words.w0 = 0xDE000000;
        }
        temp_t4 = sp1B4 + 1;
        sp1B4 = temp_t4;
        phi_s3_6 += 0x70;
    } while ((s32) temp_t4 < 0x67);
    sp1B7 = 0;
    sp1B4 = 0;
    phi_s3_7 = sp90;
    do {
        if (phi_s3_7->type == 5) {
            if (sp1B7 == 0) {
                temp_v1_22 = temp_s4->polyXlu.p;
                temp_s4->polyXlu.p = temp_v1_22 + 8;
                temp_v1_22->words.w1 = 0;
                temp_v1_22->words.w0 = 0xE7000000;
                temp_v0_6 = temp_s4->polyXlu.p;
                temp_s4->polyXlu.p = temp_v0_6 + 8;
                temp_v0_6->words.w0 = 0xFB000000;
                temp_v0_6->words.w1 = ((u32) phi_s3_7->envColor.r << 0x18) | (((u32) phi_s3_7->envColor.g & 0xFF) << 0x10) | (((u32) phi_s3_7->envColor.b & 0xFF) << 8);
                temp_v1_23 = temp_s4->polyXlu.p;
                temp_s4->polyXlu.p = temp_v1_23 + 8;
                temp_v1_23->words.w1 = (u32) &D_8094DBD8;
                temp_v1_23->words.w0 = 0xDE000000;
                sp1B7 += 1;
            }
            temp_v0_7 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w0 = 0xFA000000;
            temp_v0_7->words.w1 = ((u32) phi_s3_7->primColor.r << 0x18) | (((u32) phi_s3_7->primColor.g & 0xFF) << 0x10) | (((u32) phi_s3_7->primColor.b & 0xFF) << 8) | ((u32) phi_s3_7->primColor.a & 0xFF);
            SysMatrix_InsertTranslation(phi_s3_7->position.x, phi_s3_7->position.y, phi_s3_7->position.z, 0);
            SysMatrix_InsertYRotation_f(phi_s3_7->rotationY, 1);
            SysMatrix_RotateStateAroundXAxis(phi_s3_7->rotationX);
            SysMatrix_InsertZRotation_f(phi_s3_7->rotationZ, 1);
            temp_f20_5 = phi_s3_7->scale;
            temp_f12_3 = temp_f20_5 * 0.5f;
            Matrix_Scale(temp_f12_3, temp_f12_3, phi_s3_7->maxScale * temp_f20_5, 1);
            SysMatrix_RotateStateAroundXAxis(1.5707964f);
            temp_s0_8 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_s0_8 + 8;
            temp_s0_8->words.w0 = 0xDA380003;
            temp_s0_8->words.w1 = Matrix_NewMtx(temp_s4);
            temp_v1_24 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_v1_24 + 8;
            temp_v1_24->words.w1 = (u32) &D_8094DC48;
            temp_v1_24->words.w0 = 0xDE000000;
        }
        temp_t1 = sp1B4 + 1;
        sp1B4 = temp_t1;
        phi_s3_7 += 0x70;
    } while ((s32) temp_t1 < 0x67);
    sp1B4 = 0;
    temp_s7 = &sp19C;
    phi_s3_8 = sp90;
    do {
        temp_s5 = &globalCtx->colCtx;
        if (phi_s3_8->type == 7) {
            temp_v1_25 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_v1_25 + 8;
            temp_v1_25->words.w1 = 0;
            temp_v1_25->words.w0 = 0xE7000000;
            temp_v1_26 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_v1_26 + 8;
            temp_v1_26->words.w1 = -0x38;
            temp_v1_26->words.w0 = 0xFB000000;
            temp_v1_27 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_v1_27 + 8;
            temp_v1_27->words.w1 = -0x38;
            temp_v1_27->words.w0 = 0xFA000000;
            temp_s0_9 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_s0_9 + 8;
            temp_s0_9->words.w0 = 0xDB060020;
            temp_s0_9->words.w1 = Lib_SegmentedToVirtual(*(&D_8094AE34 + (phi_s3_8->actionTimer * 4)));
            func_8012C9BC(temp_s4);
            temp_v1_28 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = temp_v1_28 + 8;
            temp_v1_28->words.w1 = 0;
            temp_v1_28->words.w0 = 0xD9FFFBFF;
            sp1B7 += 1;
            phi_s1 = 0;
            do {
                temp_f20_6 = 2.0f * ((f32) phi_s1 * 3.1415927f) * 0.0625f;
                SysMatrix_InsertYRotation_f(temp_f20_6, 0);
                SysMatrix_GetStateTranslationAndScaledZ(phi_s3_8->maxScale, (Vec3f *) &sp1A4);
                sp19C = phi_s3_8->position.y;
                if ((func_800CA1AC(globalCtx, temp_s5, phi_s3_8->position.x + sp1A4, phi_s3_8->position.z + sp1AC, temp_s7, &sp1A0) != 0) && ((phi_s3_8->position.y - sp19C) < 200.0f)) {
                    SysMatrix_InsertTranslation(phi_s3_8->position.x + sp1A4, sp19C, phi_s3_8->position.z + sp1AC, 0);
                    SysMatrix_InsertYRotation_f(temp_f20_6, 1);
                    SysMatrix_RotateStateAroundXAxis(phi_s3_8->rotationX);
                    temp_f20_7 = phi_s3_8->scale;
                    Matrix_Scale(temp_f20_7, temp_f20_7, temp_f20_7, 1);
                    temp_s0_10 = temp_s4->polyXlu.p;
                    temp_s4->polyXlu.p = temp_s0_10 + 8;
                    temp_s0_10->words.w0 = 0xDA380003;
                    temp_s0_10->words.w1 = Matrix_NewMtx(temp_s4);
                    temp_v1_29 = temp_s4->polyXlu.p;
                    temp_s4->polyXlu.p = temp_v1_29 + 8;
                    temp_v1_29->words.w1 = (u32) D_0403A0F0;
                    temp_v1_29->words.w0 = 0xDE000000;
                }
                temp_s1_4 = phi_s1 + 1;
                phi_s1 = temp_s1_4;
            } while ((s32) temp_s1_4 < 0x10);
        }
        temp_t5 = sp1B4 + 1;
        sp1B4 = temp_t5;
        phi_s3_8 += 0x70;
    } while ((s32) temp_t5 < 0x67);
}
