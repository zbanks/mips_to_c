extern void func_809791B0;
extern void func_8097B270;
extern void func_8099FA40;
extern void func_80A22D40;
extern void func_80A23090;
extern void func_80AC94C0;
EffectSsInfo EffectSS2Info = {NULL, 0, 0};
EffectSsOverlay particleOverlayTable[39] = {
    {
        (u32) _ovl_Effect_Ss_DustSegmentRomStart,
        (u32) _ovl_Effect_Ss_KirakiraSegmentRomStart,
        (void *) EffectSsDust_Init,
        (void *) EffectSsKirakira_Init,
        NULL,
        &Effect_Ss_Dust_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_KirakiraSegmentRomStart,
        (u32) _ovl_Effect_Ss_Bomb2SegmentRomStart,
        (void *) EffectSsKirakira_Init,
        (void *) EffectSsBomb2_Init,
        NULL,
        &Effect_Ss_Kirakira_InitVars,
        0x1000000,
    },
    {0, 0, NULL, NULL, NULL, NULL, 0},
    {
        (u32) _ovl_Effect_Ss_Bomb2SegmentRomStart,
        (u32) _ovl_Effect_Ss_BlastSegmentRomStart,
        (void *) EffectSsBomb2_Init,
        (void *) EffectSsBlast_Init,
        NULL,
        &Effect_Ss_Bomb2_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_BlastSegmentRomStart,
        (u32) _ovl_Effect_Ss_G_SpkSegmentRomStart,
        (void *) EffectSsBlast_Init,
        (void *) EffectSsGSpk_Init,
        NULL,
        &Effect_Ss_Blast_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_G_SpkSegmentRomStart,
        (u32) _ovl_Effect_Ss_D_FireSegmentRomStart,
        (void *) EffectSsGSpk_Init,
        &func_809791B0,
        NULL,
        &Effect_Ss_G_Spk_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_D_FireSegmentRomStart,
        (u32) _ovl_Effect_Ss_BubbleSegmentRomStart,
        &func_809791B0,
        (void *) EffectSsBubble_Init,
        NULL,
        &Effect_Ss_D_Fire_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_BubbleSegmentRomStart,
        (u32) _ovl_Effect_Ss_G_RippleSegmentRomStart,
        (void *) EffectSsBubble_Init,
        (void *) EffectSsGRipple_Init,
        NULL,
        &Effect_Ss_Bubble_InitVars,
        0x1000000,
    },
    {0, 0, NULL, NULL, NULL, NULL, 0},
    {
        (u32) _ovl_Effect_Ss_G_RippleSegmentRomStart,
        (u32) _ovl_Effect_Ss_G_SplashSegmentRomStart,
        (void *) EffectSsGRipple_Init,
        (void *) EffectSsGSplash_Init,
        NULL,
        &Effect_Ss_G_Ripple_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_G_SplashSegmentRomStart,
        (u32) _ovl_Effect_Ss_G_FireSegmentRomStart,
        (void *) EffectSsGSplash_Init,
        (void *) EffectSsGFire_Init,
        NULL,
        &Effect_Ss_G_Splash_InitVars,
        0x1000000,
    },
    {0, 0, NULL, NULL, NULL, NULL, 0},
    {
        (u32) _ovl_Effect_Ss_G_FireSegmentRomStart,
        (u32) _ovl_Effect_Ss_LightningSegmentRomStart,
        (void *) EffectSsGFire_Init,
        (void *) EffectSsLightning_Init,
        NULL,
        &Effect_Ss_G_Fire_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_LightningSegmentRomStart,
        (u32) _ovl_Effect_Ss_Dt_BubbleSegmentRomStart,
        (void *) EffectSsLightning_Init,
        (void *) EffectSsDtBubble_Init,
        NULL,
        &Effect_Ss_Lightning_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_Dt_BubbleSegmentRomStart,
        (u32) _ovl_Effect_Ss_HahenSegmentRomStart,
        (void *) EffectSsDtBubble_Init,
        &func_8097B270,
        NULL,
        &Effect_Ss_Dt_Bubble_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_HahenSegmentRomStart,
        (u32) _ovl_Effect_Ss_StickSegmentRomStart,
        &func_8097B270,
        (void *) EffectSsStick_Init,
        NULL,
        &Effect_Ss_Hahen_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_StickSegmentRomStart,
        (u32) _ovl_Effect_Ss_SibukiSegmentRomStart,
        (void *) EffectSsStick_Init,
        (void *) EffectSsSibuki_Init,
        NULL,
        &Effect_Ss_Stick_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_SibukiSegmentRomStart,
        (u32) _ovl_Effect_Ss_Stone1SegmentRomStart,
        (void *) EffectSsSibuki_Init,
        (void *) EffectSsStone1_Init,
        NULL,
        &Effect_Ss_Sibuki_InitVars,
        0x1000000,
    },
    {0, 0, NULL, NULL, NULL, NULL, 0},
    {0, 0, NULL, NULL, NULL, NULL, 0},
    {
        (u32) _ovl_Effect_Ss_Stone1SegmentRomStart,
        (u32) _ovl_Effect_Ss_HitmarkSegmentRomStart,
        (void *) EffectSsStone1_Init,
        (void *) EffectSsHitmark_Init,
        NULL,
        &Effect_Ss_Stone1_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_HitmarkSegmentRomStart,
        (u32) _ovl_Effect_Ss_Fhg_FlashSegmentRomStart,
        (void *) EffectSsHitmark_Init,
        (void *) EffectSsFhgFlash_Init,
        NULL,
        &Effect_Ss_Hitmark_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_Fhg_FlashSegmentRomStart,
        (u32) _ovl_Effect_Ss_K_FireSegmentRomStart,
        (void *) EffectSsFhgFlash_Init,
        (void *) EffectSsKFire_Init,
        NULL,
        &Effect_Ss_Fhg_Flash_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_K_FireSegmentRomStart,
        (u32) _ovl_Effect_Ss_Solder_Srch_BallSegmentRomStart,
        (void *) EffectSsKFire_Init,
        (void *) EffectSsSolderSrchBall_Init,
        NULL,
        &Effect_Ss_K_Fire_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_Solder_Srch_BallSegmentRomStart,
        (u32) _ovl_Effect_Ss_KakeraSegmentRomStart,
        (void *) EffectSsSolderSrchBall_Init,
        (void *) EffectSsKakera_Init,
        NULL,
        &Effect_Ss_Solder_Srch_Ball_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_KakeraSegmentRomStart,
        (u32) _ovl_Effect_Ss_Ice_PieceSegmentRomStart,
        (void *) EffectSsKakera_Init,
        (void *) EffectSsIcePiece_Init,
        NULL,
        &Effect_Ss_Kakera_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_Ice_PieceSegmentRomStart,
        (u32) _ovl_Effect_Ss_En_IceSegmentRomStart,
        (void *) EffectSsIcePiece_Init,
        (void *) EffectSsEnIce_Init,
        NULL,
        &Effect_Ss_Ice_Piece_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_En_IceSegmentRomStart,
        (u32) _ovl_Effect_Ss_Fire_TailSegmentRomStart,
        (void *) EffectSsEnIce_Init,
        (void *) EffectSsFireTail_Init,
        NULL,
        &Effect_Ss_En_Ice_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_Fire_TailSegmentRomStart,
        (u32) _ovl_Effect_Ss_En_FireSegmentRomStart,
        (void *) EffectSsFireTail_Init,
        (void *) EffectSsEnFire_Init,
        NULL,
        &Effect_Ss_Fire_Tail_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_En_FireSegmentRomStart,
        (u32) _ovl_Effect_Ss_ExtraSegmentRomStart,
        (void *) EffectSsEnFire_Init,
        (void *) EffectSsExtra_Init,
        NULL,
        &Effect_Ss_En_Fire_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_ExtraSegmentRomStart,
        (u32) _ovl_Effect_Ss_Dead_DbSegmentRomStart,
        (void *) EffectSsExtra_Init,
        (void *) EffectSsDeadDb_Init,
        NULL,
        &Effect_Ss_Extra_InitVars,
        0x1000000,
    },
    {0, 0, NULL, NULL, NULL, NULL, 0},
    {
        (u32) _ovl_Effect_Ss_Dead_DbSegmentRomStart,
        (u32) _ovl_Effect_Ss_Dead_DdSegmentRomStart,
        (void *) EffectSsDeadDb_Init,
        (void *) EffectSsDeadDd_Init,
        NULL,
        &Effect_Ss_Dead_Db_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_Dead_DdSegmentRomStart,
        (u32) _ovl_Effect_Ss_Dead_DsSegmentRomStart,
        (void *) EffectSsDeadDd_Init,
        (void *) EffectSsDeadDs_Init,
        NULL,
        &Effect_Ss_Dead_Dd_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_Dead_DsSegmentRomStart,
        (u32) _ovl_Oceff_StormSegmentRomStart,
        (void *) EffectSsDeadDs_Init,
        (void *) OceffStorm_SetupAction,
        NULL,
        &Effect_Ss_Dead_Ds_InitVars,
        0x1000000,
    },
    {0, 0, NULL, NULL, NULL, NULL, 0},
    {
        (u32) _ovl_Effect_Ss_Ice_SmokeSegmentRomStart,
        (u32) _ovl_Obj_MakekinsutaSegmentRomStart,
        (void *) EffectSsIceSmoke_Init,
        &func_8099FA40,
        NULL,
        &Effect_Ss_Ice_Smoke_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_En_Ice_BlockSegmentRomStart,
        (u32) _ovl_Obj_IceblockSegmentRomStart,
        &func_80A22D40,
        &func_80A23090,
        NULL,
        &Effect_En_Ice_Block_InitVars,
        0x1000000,
    },
    {
        (u32) _ovl_Effect_Ss_SbnSegmentRomStart,
        (u32) _ovl_Obj_OcarinaliftSegmentRomStart,
        (void *) EffectSsSbn_Init,
        &func_80AC94C0,
        NULL,
        &Effect_Ss_Sbn_InitVars,
        0x1000000,
    },
};



void EffectSS_Init(GlobalContext *globalCtx, s32 numEntries) {
    EffectSs *temp_s0;
    EffectSs *temp_v0;
    EffectSsOverlay *temp_v0_2;
    EffectSsOverlay *temp_v0_3;
    s32 temp_v1;
    EffectSs *phi_s0;
    EffectSsOverlay *phi_v0;
    s32 phi_v1;

    temp_v0 = THA_AllocEndAlign16(&globalCtx->state.heap, numEntries * 0x60);
    EffectSS2Info.data_table = temp_v0;
    EffectSS2Info.searchIndex = 0;
    EffectSS2Info.size = numEntries;
    phi_s0 = temp_v0;
    if ((u32) temp_v0 < (u32) &temp_v0[numEntries]) {
        do {
            EffectSS_ResetEntry(phi_s0);
            temp_s0 = phi_s0 + 0x60;
            phi_s0 = temp_s0;
        } while ((u32) temp_s0 < (u32) &EffectSS2Info.data_table[EffectSS2Info.size]);
    }
    temp_v0_2 = particleOverlayTable + 0x1C;
    particleOverlayTable->loadedRamAddr = NULL;
    temp_v0_2->unk2C = 0;
    temp_v0_2->loadedRamAddr = NULL;
    phi_v0 = temp_v0_2 + 0x38;
    phi_v1 = 3;
    do {
        temp_v1 = phi_v1 + 4;
        phi_v0->unk2C = 0;
        phi_v0->unk48 = 0;
        phi_v0->unk64 = 0;
        temp_v0_3 = phi_v0 + 0x70;
        temp_v0_3->unk-60 = 0;
        phi_v0 = temp_v0_3;
        phi_v1 = temp_v1;
    } while (temp_v1 != 0x27);
}

void EffectSS_Clear(GlobalContext *globalCtx) {
    EffectSs *temp_s0;
    s32 temp_s1;
    void *temp_a0;
    EffectSs *phi_s0;
    EffectSsOverlay *phi_s0_2;
    s32 phi_s1;

    EffectSS2Info.data_table = NULL;
    EffectSS2Info.searchIndex = 0;
    EffectSS2Info.size = 0;
    phi_s0 = NULL;
    if ((0 * 0x60) != 0) {
        do {
            EffectSS_Delete(phi_s0);
            temp_s0 = phi_s0 + 0x60;
            phi_s0 = temp_s0;
        } while ((u32) temp_s0 < (u32) &EffectSS2Info.data_table[EffectSS2Info.size]);
    }
    phi_s0_2 = particleOverlayTable;
    phi_s1 = 0;
    do {
        temp_a0 = phi_s0_2->loadedRamAddr;
        if (temp_a0 != 0) {
            zelda_free(temp_a0);
        }
        temp_s1 = phi_s1 + 1;
        phi_s0_2->loadedRamAddr = NULL;
        phi_s0_2 += 0x1C;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x27);
}

EffectSs *EffectSS_GetTable(void) {
    return EffectSS2Info.data_table;
}

void EffectSS_Delete(EffectSs *param_1) {
    EffectSs *temp_a0;
    u16 temp_v0;
    u16 phi_v0;
    EffectSs *phi_a1;

    temp_v0 = param_1->flags;
    temp_a0 = param_1;
    phi_v0 = temp_v0;
    if ((temp_v0 & 2) != 0) {
        param_1 = param_1;
        func_801A72CC(&temp_a0->pos);
        phi_v0 = param_1->flags;
    }
    phi_a1 = param_1;
    if ((phi_v0 & 4) != 0) {
        param_1 = param_1;
        func_801A72CC(param_1 + 0x2C);
        phi_a1 = param_1;
    }
    EffectSS_ResetEntry(phi_a1);
}

void EffectSS_ResetEntry(EffectSs *particle) {
    s32 temp_v0;
    void *temp_v1;
    void *phi_v1;
    s32 phi_v0;

    particle->type = 0x27;
    particle->accel.z = 0.0f;
    particle->accel.y = 0.0f;
    particle->accel.x = 0.0f;
    particle->velocity.z = 0.0f;
    particle->velocity.y = 0.0f;
    particle->velocity.x = 0.0f;
    particle->vec.z = 0.0f;
    particle->vec.y = 0.0f;
    particle->vec.x = 0.0f;
    particle->pos.z = 0.0f;
    particle->pos.y = 0.0f;
    particle->pos.x = 0.0f;
    particle->life = -1;
    particle->flags = 0;
    particle->priority = 0x80;
    particle->draw = NULL;
    particle->update = NULL;
    particle->gfx = NULL;
    particle->actor = NULL;
    particle->regs[0] = 0;
    phi_v1 = particle + 2;
    phi_v0 = 1;
    do {
        temp_v0 = phi_v0 + 4;
        phi_v1->unk42 = 0;
        phi_v1->unk44 = 0;
        phi_v1->unk46 = 0;
        temp_v1 = phi_v1 + 8;
        temp_v1->unk38 = 0;
        phi_v1 = temp_v1;
        phi_v0 = temp_v0;
    } while (temp_v0 != 0xD);
}

s32 EffectSS_FindFreeSpace(s32 priority, s32 *tableEntry) {
    EffectSs *temp_a2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v1;
    u8 temp_a1;
    EffectSs *phi_a3;
    s32 phi_a0;
    s32 phi_a0_2;
    s32 phi_v0;
    s32 phi_a1;
    s32 phi_a0_3;
    EffectSs *phi_a3_2;
    s32 phi_a0_4;
    s32 phi_a0_5;

    temp_v0 = EffectSS2Info.searchIndex;
    temp_v1 = EffectSS2Info.size;
    phi_v0 = temp_v0;
    phi_a1 = 0;
    if (temp_v0 >= temp_v1) {
        EffectSS2Info.searchIndex = 0;
        phi_v0 = 0;
    }
    temp_a2 = EffectSS2Info.data_table;
    phi_a3 = &temp_a2[phi_v0];
    phi_a0 = phi_v0;
loop_3:
    phi_a0_3 = phi_a0;
    if (phi_a3->life == -1) {
        phi_a1 = 1;
    } else {
        temp_a0 = phi_a0 + 1;
        phi_a0_2 = temp_a0;
        if (temp_a0 >= temp_v1) {
            phi_a0_2 = 0;
        }
        phi_a0 = phi_a0_2;
        phi_a0_3 = phi_a0_2;
        if (phi_a0_2 != phi_v0) {
            phi_a3 = &temp_a2[phi_a0_2];
            goto loop_3;
        }
    }
    if (phi_a1 == 1) {
        *tableEntry = phi_a0_3;
        return 0;
    }
    phi_a3_2 = &temp_a2[phi_v0];
    phi_a0_4 = phi_v0;
loop_12:
    temp_a1 = phi_a3_2->priority;
    if (((s32) temp_a1 < priority) || ((priority == temp_a1) && ((phi_a3_2->flags & 1) != 0))) {
        temp_a0_2 = phi_a0_4 + 1;
        phi_a0_5 = temp_a0_2;
        if (temp_a0_2 >= temp_v1) {
            phi_a0_5 = 0;
        }
        phi_a0_4 = phi_a0_5;
        if (phi_a0_5 == phi_v0) {
            return 1;
        }
        phi_a3_2 = &temp_a2[phi_a0_5];
        goto loop_12;
    }
    *tableEntry = phi_a0_4;
    return 0;
}

void EffectSS_Copy(GlobalContext *globalCtx, EffectSs *particle) {
    s32 sp1C;
    EffectSs *temp_t2;
    EffectSs *temp_t3;
    EffectSs *phi_t3;
    EffectSs *phi_t2;

    if ((FrameAdvance_IsEnabled(globalCtx) != 1) && (EffectSS_FindFreeSpace((s32) particle->priority, &sp1C) == 0)) {
        EffectSS2Info.searchIndex = sp1C + 1;
        phi_t3 = particle;
        phi_t2 = &EffectSS2Info.data_table[sp1C];
        do {
            temp_t3 = phi_t3 + 0xC;
            temp_t2 = phi_t2 + 0xC;
            temp_t2->unk-C = (s32) phi_t3->pos.x;
            temp_t2->unk-8 = (s32) temp_t3->unk-8;
            temp_t2->unk-4 = (s32) temp_t3->unk-4;
            phi_t3 = temp_t3;
            phi_t2 = temp_t2;
        } while (temp_t3 != (particle + 0x60));
    }
}

void EffectSs_Spawn(GlobalContext *globalCtx, s32 type, s32 priority, void *initParams) {
    EffectSs *self = (EffectSs *) globalCtx;
    s32 sp3C;
    EffectSsInit *sp30;
    EffectSsOverlay *sp28;
    EffectSsOverlay *temp_v1;
    s32 temp_v0_3;
    void *temp_v0;
    void *temp_v0_2;
    EffectSsInit *phi_v0;
    EffectSsInit *phi_a0;

    if (EffectSS_FindFreeSpace(priority, &sp3C) == 0) {
        EffectSS2Info.searchIndex = sp3C + 1;
        temp_v1 = &particleOverlayTable[type];
        temp_v0 = temp_v1->vramStart;
        if (temp_v0 == 0) {
            phi_v0 = temp_v1->initInfo;
            goto block_9;
        }
        if (temp_v1->loadedRamAddr == 0) {
            sp28 = temp_v1;
            temp_v0_2 = zelda_mallocR(temp_v1->vramEnd - temp_v0);
            temp_v1->loadedRamAddr = temp_v0_2;
            if (temp_v0_2 != 0) {
                sp28 = temp_v1;
                Load2_LoadOverlay(temp_v1->vromStart, temp_v1->vromEnd, (u32) temp_v1->vramStart, (u32) temp_v1->vramEnd, (u32) temp_v0_2);
                goto block_6;
            }
        } else {
block_6:
            temp_v0_3 = particleOverlayTable[type].initInfo;
            phi_a0 = NULL;
            if (temp_v0_3 != 0) {
                phi_a0 = temp_v0_3 - (particleOverlayTable[type].vramStart - particleOverlayTable[type].loadedRamAddr);
            }
            phi_v0 = phi_a0;
block_9:
            if (phi_v0->init != 0) {
                sp30 = phi_v0;
                EffectSS_Delete(&EffectSS2Info.data_table[sp3C]);
                EffectSS2Info.data_table[sp3C].type = (u8) type;
                EffectSS2Info.data_table[sp3C].priority = (u8) priority;
                if (phi_v0->init(self, sp3C, &EffectSS2Info.data_table[sp3C], initParams) == 0) {
                    EffectSS_ResetEntry(&EffectSS2Info.data_table[sp3C]);
                }
            }
        }
    }
}

void EffectSS_UpdateParticle(GlobalContext *globalCtx, s32 index) {
    EffectSs *temp_a2;
    void (*temp_v0)(GlobalContext *, u32, EffectSs *);

    temp_a2 = &EffectSS2Info.data_table[index];
    temp_v0 = temp_a2->update;
    if (temp_v0 != 0) {
        temp_a2->velocity.x += temp_a2->accel.x;
        temp_a2->velocity.y += temp_a2->accel.y;
        temp_a2->velocity.z += temp_a2->accel.z;
        temp_a2->pos.x += temp_a2->velocity.x;
        temp_a2->pos.y += temp_a2->velocity.y;
        temp_a2->pos.z += temp_a2->velocity.z;
        temp_v0(globalCtx, (u32) index, temp_a2);
    }
}

void EffectSS_UpdateAllParticles(GlobalContext *globalCtx) {
    EffectSs *temp_v1;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_s1;
    void *temp_a0;
    s32 phi_s0;
    s32 phi_v0;
    s32 phi_s1;

    phi_s0 = 0;
    phi_s1 = 0;
    if (EffectSS2Info.size > 0) {
        do {
            temp_a0 = EffectSS2Info.data_table + phi_s0;
            temp_v0 = temp_a0->unk5C;
            phi_v0 = (s32) temp_v0;
            if ((s32) temp_v0 >= 0) {
                temp_a0->unk5C = (s16) (temp_v0 - 1);
                temp_v1 = EffectSS2Info.data_table;
                temp_v0_2 = (temp_v1 + phi_s0)->unk5C;
                phi_v0 = (s32) temp_v0_2;
                if ((s32) temp_v0_2 < 0) {
                    EffectSS_Delete(phi_s0 + temp_v1);
                    phi_v0 = (s32) (EffectSS2Info.data_table + phi_s0)->unk5C;
                }
            }
            if (phi_v0 >= 0) {
                EffectSS_UpdateParticle(globalCtx, phi_s1);
            }
            temp_s1 = phi_s1 + 1;
            phi_s0 += 0x60;
            phi_s1 = temp_s1;
        } while (temp_s1 < EffectSS2Info.size);
    }
}

void EffectSS_DrawParticle(GlobalContext *globalCtx, s32 index) {
    EffectSs *temp_a2;
    void (*temp_v0)(GlobalContext *, u32, EffectSs *);

    temp_a2 = &EffectSS2Info.data_table[index];
    temp_v0 = temp_a2->draw;
    if (temp_v0 != 0) {
        temp_v0(globalCtx, (u32) index, temp_a2);
    }
}

void EffectSS_DrawAllParticles(GlobalContext *globalCtx) {
    EffectSs *temp_a1;
    Lights *temp_s0;
    Lights *temp_v0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    s32 temp_s0_2;
    s32 temp_v1;
    void *temp_v0_2;
    s32 phi_s1;
    s32 phi_s0;
    s32 phi_v1;

    temp_v0 = LightContext_NewLights(&globalCtx->lightCtx, globalCtx->state.gfxCtx);
    temp_s0 = temp_v0;
    Lights_BindAll(temp_v0, globalCtx->lightCtx.listHead, NULL, globalCtx);
    Lights_Draw(temp_s0, globalCtx->state.gfxCtx);
    temp_v1 = EffectSS2Info.size;
    phi_s0 = 0;
    phi_v1 = temp_v1;
    if (temp_v1 > 0) {
        phi_s1 = 0;
        do {
            temp_a1 = EffectSS2Info.data_table;
            temp_v0_2 = temp_a1 + phi_s1;
            if ((s32) temp_v0_2->unk5C >= 0) {
                temp_f0 = temp_v0_2->unk0;
                if ((temp_f0 > 32000.0f) || (temp_f0 < -32000.0f) || (temp_f0_2 = temp_v0_2->unk4, (temp_f0_2 > 32000.0f)) || (temp_f0_2 < -32000.0f) || (temp_f0_3 = temp_v0_2->unk8, (temp_f0_3 > 32000.0f)) || (temp_f0_3 < -32000.0f)) {
                    EffectSS_Delete(phi_s1 + temp_a1);
                } else {
                    EffectSS_DrawParticle(globalCtx, phi_s0);
                }
                phi_v1 = EffectSS2Info.size;
            }
            temp_s0_2 = phi_s0 + 1;
            phi_s1 += 0x60;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 < phi_v1);
    }
}

s16 func_800B096C(s16 param_1, s16 param_2, s32 param_3) {
    s32 phi_v1;

    if (param_3 == 0) {
        phi_v1 = param_2 << 0x10;
    } else {
        phi_v1 = (param_1 + (s32) ((f32) (param_2 - param_1) / (f32) param_3)) << 0x10;
    }
    return (s16) (phi_v1 >> 0x10);
}

s16 func_800B09D0(s16 a0, s16 a1, f32 a2) {
    return (s16) (s32) (((f32) (a1 - a0) * a2) + (f32) a0);
}

u8 func_800B0A24(u8 a0, u8 a1, f32 a2) {
    f32 temp_f0;

    temp_f0 = (f32) (a0 & 0xFF);
    return (u32) ((((f32) (a1 & 0xFF) - temp_f0) * a2) + temp_f0) & 0xFF;
}

