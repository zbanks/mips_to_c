struct _mips2c_stack_Load_AllocateAndLoad {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ u32 sp24;                            /* inferred */
    /* 0x28 */ u32 sp28;                            /* inferred */
    /* 0x2C */ OverlayRelocationSection *sp2C;      /* inferred */
    /* 0x30 */ s32 *sp30;                           /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_Load_LoadOverlay {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad20[0x4];
    /* 0x24 */ u32 sp24;                            /* inferred */
    /* 0x28 */ OverlayRelocationSection *sp28;      /* inferred */
    /* 0x2C */ char pad2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_Load_Relocate {
    /* 0x000 */ char pad0[0x4C];
    /* 0x04C */ ? sp4C;                             /* inferred */
    /* 0x04C */ char pad4C[0x80];
    /* 0x0CC */ ? spCC;                             /* inferred */
    /* 0x0CC */ char padCC[0x9C];
    /* 0x168 */ s32 sp168;                          /* inferred */
    /* 0x16C */ u32 sp16C;                          /* inferred */
    /* 0x170 */ s32 sp170;                          /* inferred */
    /* 0x174 */ s32 sp174;                          /* inferred */
};                                                  /* size = 0x178 */

static s32 D_80096C20 = 2;

void Load_Relocate(u32 allocatedVRamAddr, OverlayRelocationSection *overlayInfo, u32 vRamStart) {
    s32 sp174;
    s32 sp170;
    u32 sp16C;
    s32 sp168;
    ? spCC;
    ? sp4C;
    s32 *temp_a1;
    s32 temp_a3;
    s32 temp_t7;
    s32 temp_v1;
    s32 temp_v1_2;
    u32 *temp_a0;
    u32 temp_t1;
    u32 temp_t2;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 temp_v0_4;
    u32 temp_v0_5;
    u32 temp_v0_6;
    OverlayRelocationSection *phi_t3;
    s32 phi_v1;
    u32 phi_t2;
    u32 phi_t1;

    sp168 = 0;
    sp16C = allocatedVRamAddr;
    temp_t7 = overlayInfo->textSize + allocatedVRamAddr;
    sp170 = temp_t7;
    sp174 = temp_t7 + overlayInfo->dataSize;
    temp_t1 = overlayInfo->nRelocations;
    phi_t3 = overlayInfo;
    phi_t2 = 0U;
    phi_t1 = temp_t1;
    if (temp_t1 != 0) {
        do {
            temp_v0 = phi_t3->relocations[0];
            temp_t2 = phi_t2 + 1;
            temp_v1 = temp_v0 & 0x3F000000;
            temp_a0 = (&sp168)[temp_v0 >> 0x1E] + (temp_v0 & 0xFFFFFF);
            phi_t2 = temp_t2;
            if (temp_v1 != 0x2000000) {
                if (temp_v1 != 0x4000000) {
                    if (temp_v1 != 0x5000000) {
                        if (temp_v1 != 0x6000000) {

                        } else {
                            temp_v0_2 = *temp_a0;
                            temp_v1_2 = ((temp_v0_2 >> 0x15) & 0x1F) * 4;
                            temp_a1 = *(&spCC + temp_v1_2);
                            temp_a3 = *temp_a1;
                            if ((((s16) temp_v0_2 + (temp_a3 << 0x10)) & 0xF000000) == 0) {
                                temp_v0_3 = (((s16) temp_v0_2 + (*(&sp4C + temp_v1_2) << 0x10)) - vRamStart) + allocatedVRamAddr;
                                phi_v1 = 0;
                                if ((temp_v0_3 & 0x8000) != 0) {
                                    phi_v1 = 1;
                                }
                                *temp_a1 = (temp_a3 & 0xFFFF0000) | (((temp_v0_3 >> 0x10) & 0xFFFF) + phi_v1);
                                *temp_a0 = (*temp_a0 & 0xFFFF0000) | (temp_v0_3 & 0xFFFF);
                                goto block_17;
                            }
                        }
                    } else {
                        *(&spCC + ((((u32) *temp_a0 >> 0x10) & 0x1F) * 4)) = temp_a0;
                        temp_v0_4 = *temp_a0;
                        *(&sp4C + (((temp_v0_4 >> 0x10) & 0x1F) * 4)) = temp_v0_4;
                        goto block_17;
                    }
                } else {
                    temp_v0_5 = *temp_a0;
                    *temp_a0 = ((u32) ((((((temp_v0_5 & 0x3FFFFFF) * 4) | 0x80000000) - vRamStart) + allocatedVRamAddr) & 0xFFFFFFF) >> 2) | (temp_v0_5 & 0xFC000000);
                    goto block_17;
                }
            } else {
                temp_v0_6 = *temp_a0;
                if ((temp_v0_6 & 0xF000000) == 0) {
                    *temp_a0 = (temp_v0_6 - vRamStart) + allocatedVRamAddr;
block_17:
                    phi_t1 = overlayInfo->nRelocations;
                } else if (D_80096C20 >= 3) {

                }
            }
            phi_t3 += 4;
        } while (temp_t2 < phi_t1);
    }
}

s32 Load_LoadOverlay(u32 vRomStart, u32 vRomEnd, u32 vRamStart, u32 allocatedVRamAddr, u32 allocatedBytes) {
    OverlayRelocationSection *sp28;
    u32 sp24;
    void *sp1C;
    OverlayRelocationSection *temp_a1;
    u32 temp_a2;
    u32 temp_v0;
    u32 temp_v1;
    void *temp_a3;

    temp_a2 = vRomEnd - vRomStart;
    sp24 = temp_a2;
    DmaMgr_SendRequest0((void *) allocatedVRamAddr, vRomStart, temp_a2);
    temp_a3 = allocatedVRamAddr + temp_a2;
    temp_a1 = temp_a3 - temp_a3->unk-4;
    temp_v1 = temp_a1->bssSize + temp_a2;
    if (allocatedBytes < temp_v1) {
        return 0;
    }
    allocatedBytes = temp_v1;
    sp28 = temp_a1;
    sp1C = temp_a3;
    Load_Relocate(allocatedVRamAddr, temp_a1, vRamStart);
    temp_v0 = temp_a1->bssSize;
    if (temp_v0 != 0) {
        bzero(temp_a3, (s32) temp_v0);
    }
    osWritebackDCache((void *) allocatedVRamAddr, (s32) allocatedBytes);
    osInvalICache((void *) allocatedVRamAddr, (s32) allocatedBytes);
    return (s32) allocatedBytes;
}

void *Load_AllocateAndLoad(u32 vRomStart, u32 vRomEnd, u32 vRamStart) {
    void *sp38;
    s32 *sp30;
    OverlayRelocationSection *sp2C;
    u32 sp28;
    u32 sp24;
    OverlayRelocationSection *temp_a1_2;
    s32 *temp_a2;
    u32 temp_a0;
    u32 temp_a1;
    u32 temp_v0_3;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_a0 = vRomEnd - vRomStart;
    sp24 = temp_a0;
    temp_v0_2 = SystemArena_MallocR(temp_a0);
    temp_s0 = temp_v0_2;
    temp_a0_2 = temp_v0_2;
    temp_v1 = temp_v0_2 + sp24;
    sp38 = temp_v1;
    DmaMgr_SendRequest0(temp_a0_2, vRomStart, sp24);
    temp_a2 = temp_v1 - 4;
    sp30 = temp_a2;
    temp_a1 = (temp_v1 - temp_v1->unk-4)->unkC + sp24;
    sp28 = temp_a1;
    temp_v0 = SystemArena_Realloc(temp_s0, temp_a1);
    if (temp_v0 == 0) {

    } else {
        temp_a1_2 = (temp_v0 + sp24) - *temp_a2;
        sp2C = temp_a1_2;
        Load_Relocate((u32) temp_v0, temp_a1_2, vRamStart);
        temp_v0_3 = sp2C->bssSize;
        if (temp_v0_3 != 0) {
            bzero(temp_v0 + sp24, (s32) temp_v0_3);
        }
        osInvalICache(temp_v0, (s32) sp28);
    }
    return temp_v0;
}
