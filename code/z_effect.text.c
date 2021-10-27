struct _mips2c_stack_Effect_Add {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Effect_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Effect_DestroyAll {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Effect_DrawAll {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Effect_GetContext {};          /* size 0x0 */

struct _mips2c_stack_Effect_GetParams {};           /* size 0x0 */

struct _mips2c_stack_Effect_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Effect_InitCommon {};          /* size 0x0 */

struct _mips2c_stack_Effect_UpdateAll {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

static ? D_801E4514;
static ? D_801E4E08;
static ? D_801E531C;
static ? D_801E69E0;
static ? D_801E9AA0;
static ? D_801ED890;
static ? D_801ED894;
EffInfo sEffInfoTable[5] = {
    {
        0x4C4,
        ((void (*)(void *, void *)) EffectSpark_Init),
        ((void (*)(void *)) EffectSpark_Destroy),
        ((s32 (*)(void *)) EffectSpark_Update),
        ((void (*)(void *, GraphicsContext *)) EffectSpark_Draw),
    },
    {
        0x1AC,
        ((void (*)(void *, void *)) EffectBlure_Init1),
        ((void (*)(void *)) EffectBlure_Destroy),
        ((s32 (*)(void *)) EffectBlure_Update),
        ((void (*)(void *, GraphicsContext *)) EffectBlure_Draw),
    },
    {
        0x1AC,
        ((void (*)(void *, void *)) EffectBlure_Init2),
        ((void (*)(void *)) EffectBlure_Destroy),
        ((s32 (*)(void *)) EffectBlure_Update),
        ((void (*)(void *, GraphicsContext *)) EffectBlure_Draw),
    },
    {
        0x1C8,
        ((void (*)(void *, void *)) EffectShieldParticle_Init),
        ((void (*)(void *)) EffectShieldParticle_Destroy),
        ((s32 (*)(void *)) EffectShieldParticle_Update),
        ((void (*)(void *, GraphicsContext *)) EffectShieldParticle_Draw),
    },
    {
        0x60C,
        ((void (*)(void *, void *)) EffectTireMark_Init),
        ((void (*)(void *)) EffectTireMark_Destroy),
        ((s32 (*)(void *)) EffectTireMark_Update),
        ((void (*)(void *, GraphicsContext *)) EffectTireMark_Draw),
    },
};
EffTables sEffTable;

GlobalContext *Effect_GetContext(void) {
    return sEffTable.globalCtx;
}

void *Effect_GetParams(s32 index) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;

    if (index == 0x2E) {
        return NULL;
    }
    if (index < 3) {
        if (sEffTable.sparks[index].base.active == 1) {
            return (void *) &sEffTable.sparks[index].params;
        }
        return NULL;
    }
    temp_a0_3 = index - 3;
    if (temp_a0_3 < 0x19) {
        if (sEffTable.blures[temp_a0_3].base.active == 1) {
            return (void *) &sEffTable.blures[temp_a0_3].params;
        }
        return NULL;
    }
    temp_a0_2 = temp_a0_3 - 0x19;
    if (temp_a0_2 < 3) {
        if (sEffTable.shieldParticles[temp_a0_2].base.active == 1) {
            return (void *) &sEffTable.shieldParticles[temp_a0_2].params;
        }
        return NULL;
    }
    temp_a0 = temp_a0_2 - 3;
    if (temp_a0 < 0xF) {
        if (sEffTable.tireMarks[temp_a0].base.active == 1) {
            return (void *) &sEffTable.tireMarks[temp_a0].params;
        }
        return NULL;
    }
    return NULL;
}

void Effect_InitCommon(EffCommon *common) {
    common->active = 0;
    common->unk1 = 0;
    common->unk2 = 0;
}

void Effect_Init(GlobalContext *globalCtx) {
    EffBlure *temp_s1;
    EffCommon *temp_s0;
    EffCommon *temp_s0_2;
    EffCommon *temp_s0_3;
    EffCommon *temp_s0_4;
    EffShieldParticle *temp_s1_2;
    EffCommon *phi_s0;
    EffCommon *phi_s0_2;
    EffCommon *phi_s0_3;
    EffCommon *phi_s0_4;

    temp_s1 = sEffTable.blures;
    phi_s0 = (EffCommon *) sEffTable.sparks;
    do {
        Effect_InitCommon(phi_s0);
        temp_s0 = &phi_s0[306];
        phi_s0 = temp_s0;
    } while ((u32) temp_s0 < (u32) temp_s1);
    temp_s1_2 = sEffTable.shieldParticles;
    phi_s0_2 = (EffCommon *) sEffTable.blures;
    do {
        Effect_InitCommon(phi_s0_2);
        temp_s0_2 = &phi_s0_2[108];
        phi_s0_2 = temp_s0_2;
    } while ((u32) temp_s0_2 < (u32) temp_s1_2);
    phi_s0_3 = (EffCommon *) sEffTable.blures;
    do {
        Effect_InitCommon(phi_s0_3);
        temp_s0_3 = &phi_s0_3[108];
        phi_s0_3 = temp_s0_3;
    } while ((u32) temp_s0_3 < (u32) &D_801E531C);
    phi_s0_4 = (EffCommon *) sEffTable.tireMarks;
    do {
        Effect_InitCommon(phi_s0_4);
        temp_s0_4 = &phi_s0_4[388];
        phi_s0_4 = temp_s0_4;
    } while (temp_s0_4 != &D_801ED890);
    sEffTable.globalCtx = globalCtx;
}

void Effect_Add(GlobalContext *globalCtx, s32 *index, s32 type, u8 param_4, u8 param_5, void *initParams) {
    void *sp1C;
    void *sp18;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    EffTables *phi_v1;
    s32 phi_v0;
    EffTables *phi_v1_2;
    s32 phi_v0_2;
    EffTables *phi_v1_3;
    s32 phi_v0_3;
    EffTables *phi_v1_4;
    s32 phi_v0_4;
    s32 phi_a2;
    void *phi_t0;
    void *phi_a3;

    sp1C = NULL;
    *index = 0x2E;
    sp18 = NULL;
    phi_t0 = sp18;
    phi_a3 = sp1C;
    if (FrameAdvance_IsEnabled(globalCtx) != 1) {
        phi_a2 = 0;
        switch (type) {
        case 0:
            phi_v1 = &sEffTable;
            phi_v0 = 0;
loop_4:
            if (phi_v1->sparks[0].base.active == 0) {
                *index = phi_v0;
                phi_a2 = 1;
                phi_t0 = phi_v1 + 4;
                phi_a3 = phi_v1 + 8;
            } else {
                temp_v0 = phi_v0 + 1;
                phi_v1 += 0x4C8;
                phi_v0 = temp_v0;
                if (temp_v0 == 3) {

                } else {
                    goto loop_4;
                }
            }
            break;
        case 1:
        case 2:
            phi_v1_2 = &sEffTable;
            phi_v0_2 = 0;
loop_9:
            if (phi_v1_2->blures[0].base.active == 0) {
                *index = phi_v0_2 + 3;
                phi_a2 = 1;
                phi_t0 = phi_v1_2 + 0xE5C;
                phi_a3 = phi_v1_2 + 0xE60;
            } else {
                temp_v0_2 = phi_v0_2 + 1;
                phi_v1_2 += 0x1B0;
                phi_v0_2 = temp_v0_2;
                if (temp_v0_2 == 0x19) {

                } else {
                    goto loop_9;
                }
            }
            break;
        case 3:
            phi_v1_3 = &sEffTable;
            phi_v0_3 = 0;
loop_14:
            if (phi_v1_3->shieldParticles[0].base.active == 0) {
                *index = phi_v0_3 + 0x1C;
                phi_a2 = 1;
                phi_t0 = phi_v1_3 + 0x388C;
                phi_a3 = phi_v1_3 + 0x3890;
            } else {
                temp_v0_3 = phi_v0_3 + 1;
                phi_v1_3 += 0x1CC;
                phi_v0_3 = temp_v0_3;
                if (temp_v0_3 == 3) {

                } else {
                    goto loop_14;
                }
            }
            break;
        case 4:
            phi_v1_4 = &sEffTable;
            phi_v0_4 = 0;
loop_19:
            if (phi_v1_4->tireMarks[0].base.active == 0) {
                *index = phi_v0_4 + 0x1F;
                phi_a2 = 1;
                phi_t0 = phi_v1_4 + 0x3DF0;
                phi_a3 = phi_v1_4 + 0x3DF4;
            } else {
                temp_v0_4 = phi_v0_4 + 1;
                phi_v1_4 += 0x610;
                phi_v0_4 = temp_v0_4;
                if (temp_v0_4 != 0xF) {
                    goto loop_19;
                }
            }
            break;
        }
        if (phi_a2 != 0) {
            sp18 = phi_t0;
            *(&sEffInfoTable->init + (type * 0x14))(phi_a3, initParams, phi_a2, phi_a3);
            phi_t0->unk_2 = param_4;
            phi_t0->unk_0 = 1;
            phi_t0->unk_1 = param_5;
        }
    }
}

void Effect_DrawAll(GraphicsContext *gfxCtx) {
    EffTables *temp_s0;
    EffTables *temp_s0_2;
    EffTables *temp_s0_3;
    EffTables *temp_s0_4;
    EffTables *phi_s0;
    EffTables *phi_s0_2;
    EffTables *phi_s0_3;
    EffTables *phi_s0_4;

    phi_s0 = &sEffTable;
    do {
        if (phi_s0->sparks[0].base.active != 0) {
            sEffInfoTable->draw(phi_s0 + 8, gfxCtx);
        }
        temp_s0 = phi_s0 + 0x4C8;
        phi_s0 = temp_s0;
    } while ((u32) temp_s0 < (u32) &D_801E4E08);
    phi_s0_2 = &sEffTable;
    do {
        if (phi_s0_2->blures[0].base.active != 0) {
            sEffInfoTable[1].draw(phi_s0_2 + 0xE60, gfxCtx);
        }
        temp_s0_2 = phi_s0_2 + 0x1B0;
        phi_s0_2 = temp_s0_2;
    } while ((u32) temp_s0_2 < (u32) &D_801E69E0);
    phi_s0_3 = &sEffTable;
    do {
        if (phi_s0_3->shieldParticles[0].base.active != 0) {
            sEffInfoTable[3].draw(phi_s0_3 + 0x3890, gfxCtx);
        }
        temp_s0_3 = phi_s0_3 + 0x1CC;
        phi_s0_3 = temp_s0_3;
    } while ((u32) temp_s0_3 < (u32) &D_801E4514);
    phi_s0_4 = &sEffTable;
    do {
        if (phi_s0_4->tireMarks[0].base.active != 0) {
            sEffInfoTable[4].draw(phi_s0_4 + 0x3DF4, gfxCtx);
        }
        temp_s0_4 = phi_s0_4 + 0x610;
        phi_s0_4 = temp_s0_4;
    } while (temp_s0_4 != &D_801E9AA0);
}

void Effect_UpdateAll(GlobalContext *globalCtx) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    EffTables *phi_s1;
    s32 phi_s0;
    EffTables *phi_s1_2;
    s32 phi_s0_2;
    EffTables *phi_s1_3;
    s32 phi_s0_3;
    EffTables *phi_s1_4;
    s32 phi_s0_4;

    phi_s1 = &sEffTable;
    phi_s0 = 0;
    phi_s0_2 = 0;
    phi_s0_3 = 0;
    phi_s0_4 = 0;
    do {
        if ((phi_s1->sparks[0].base.active != 0) && (sEffInfoTable->update(phi_s1 + 8) == 1)) {
            Effect_Destroy(globalCtx, phi_s0);
        }
        temp_s0 = phi_s0 + 1;
        phi_s1 += 0x4C8;
        phi_s0 = temp_s0;
    } while (temp_s0 < 3);
    phi_s1_2 = &sEffTable;
    do {
        if ((phi_s1_2->blures[0].base.active != 0) && (sEffInfoTable[1].update(phi_s1_2 + 0xE60) == 1)) {
            Effect_Destroy(globalCtx, phi_s0_2 + 3);
        }
        temp_s0_2 = phi_s0_2 + 1;
        phi_s1_2 += 0x1B0;
        phi_s0_2 = temp_s0_2;
    } while (temp_s0_2 < 0x19);
    phi_s1_3 = &sEffTable;
    do {
        if ((phi_s1_3->shieldParticles[0].base.active != 0) && (sEffInfoTable[3].update(phi_s1_3 + 0x3890) == 1)) {
            Effect_Destroy(globalCtx, phi_s0_3 + 0x1C);
        }
        temp_s0_3 = phi_s0_3 + 1;
        phi_s1_3 += 0x1CC;
        phi_s0_3 = temp_s0_3;
    } while (temp_s0_3 < 3);
    phi_s1_4 = &sEffTable;
    do {
        if ((phi_s1_4->tireMarks[0].base.active != 0) && (sEffInfoTable[4].update(phi_s1_4 + 0x3DF4) == 1)) {
            Effect_Destroy(globalCtx, phi_s0_4 + 0x1F);
        }
        temp_s0_4 = phi_s0_4 + 1;
        phi_s1_4 += 0x610;
        phi_s0_4 = temp_s0_4;
    } while (temp_s0_4 != 0xF);
}

void Effect_Destroy(GlobalContext *globalCtx, s32 index) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;

    if (index != 0x2E) {
        if (index < 3) {
            sEffTable.sparks[index].base.active = 0;
            sEffInfoTable->destroy((void *) &sEffTable.sparks[index].params);
            return;
        }
        temp_a1 = index - 3;
        if (temp_a1 < 0x19) {
            sEffTable.blures[temp_a1].base.active = 0;
            sEffInfoTable[1].destroy((void *) &sEffTable.blures[temp_a1].params);
            return;
        }
        temp_a1_2 = temp_a1 - 0x19;
        if (temp_a1_2 < 3) {
            sEffTable.shieldParticles[temp_a1_2].base.active = 0;
            sEffInfoTable[3].destroy((void *) &sEffTable.shieldParticles[temp_a1_2].params);
            return;
        }
        temp_a1_3 = temp_a1_2 - 3;
        if (temp_a1_3 < 0xF) {
            sEffTable.tireMarks[temp_a1_3].base.active = 0;
            sEffInfoTable[4].destroy((void *) &sEffTable.tireMarks[temp_a1_3].params);
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void Effect_DestroyAll(GlobalContext *globalCtx) {
    EffShieldParticleParams *temp_s3_2;
    EffTireMarkParams *temp_s3_3;
    EffectBlure *temp_s3;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    EffTables *phi_s1;
    void *phi_s0;
    EffTables *phi_s1_2;
    void *phi_s0_2;
    EffTables *phi_s1_3;
    void *phi_s0_3;
    EffTables *phi_s1_4;
    void *phi_s0_4;

    temp_s3 = &sEffTable.blures[0].params;
    phi_s1 = &sEffTable;
    phi_s0 = (void *) &sEffTable.sparks[0].params;
    do {
        phi_s1->sparks[0].base.active = 0;
        sEffInfoTable->destroy(phi_s0);
        temp_s0 = phi_s0 + 0x4C8;
        phi_s1 += 0x4C8;
        phi_s0 = temp_s0;
    } while ((u32) temp_s0 < (u32) temp_s3);
    temp_s3_2 = &sEffTable.shieldParticles[0].params;
    phi_s1_2 = &sEffTable;
    phi_s0_2 = (void *) &sEffTable.blures[0].params;
    do {
        phi_s1_2->blures[0].base.active = 0;
        sEffInfoTable[1].destroy(phi_s0_2);
        temp_s0_2 = phi_s0_2 + 0x1B0;
        phi_s1_2 += 0x1B0;
        phi_s0_2 = temp_s0_2;
    } while ((u32) temp_s0_2 < (u32) temp_s3_2);
    temp_s3_3 = &sEffTable.tireMarks[0].params;
    phi_s1_3 = &sEffTable;
    phi_s0_3 = (void *) &sEffTable.shieldParticles[0].params;
    do {
        phi_s1_3->shieldParticles[0].base.active = 0;
        sEffInfoTable[3].destroy(phi_s0_3);
        temp_s0_3 = phi_s0_3 + 0x1CC;
        phi_s1_3 += 0x1CC;
        phi_s0_3 = temp_s0_3;
    } while ((u32) temp_s0_3 < (u32) temp_s3_3);
    phi_s1_4 = &sEffTable;
    phi_s0_4 = (void *) &sEffTable.tireMarks[0].params;
    do {
        phi_s1_4->tireMarks[0].base.active = 0;
        sEffInfoTable[4].destroy(phi_s0_4);
        temp_s0_4 = phi_s0_4 + 0x610;
        phi_s1_4 += 0x610;
        phi_s0_4 = temp_s0_4;
    } while (temp_s0_4 != &D_801ED894);
}
