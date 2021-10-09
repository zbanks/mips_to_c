struct _mips2c_stack_Load2_AllocateAndLoad {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_Load2_LoadOverlay {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ u32 sp20;                            /* inferred */
    /* 0x24 */ OverlayRelocationSection *sp24;      /* inferred */
    /* 0x28 */ char pad_28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_Load2_Relocate {
    /* 0x000 */ char pad_0[0x4C];
    /* 0x04C */ ? sp4C;                             /* inferred */
    /* 0x04C */ char pad_4C[0x80];
    /* 0x0CC */ ? spCC;                             /* inferred */
    /* 0x0CC */ char pad_CC[0x9C];
    /* 0x168 */ s32 sp168;                          /* inferred */
    /* 0x16C */ u32 sp16C;                          /* inferred */
    /* 0x170 */ s32 sp170;                          /* inferred */
    /* 0x174 */ s32 sp174;                          /* inferred */
};                                                  /* size = 0x178 */

s32 D_80096C30 = 2;

void Load2_Relocate(u32 allocatedVRamAddr, OverlayRelocationSection *overlayInfo, u32 vRamStart) {
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
                } else if (D_80096C30 >= 3) {

                }
            }
            phi_t3 += 4;
        } while (temp_t2 < phi_t1);
    }
}

s32 Load2_LoadOverlay(u32 vRomStart, u32 vRomEnd, u32 vRamStart, u32 vRamEnd, u32 allocatedVRamAddr) {
    OverlayRelocationSection *sp24;
    u32 sp20;
    void *sp18;
    OverlayRelocationSection *temp_a1;
    u32 temp_a1_2;
    u32 temp_a2;
    u32 temp_v0;
    void *temp_a3;

    temp_a2 = vRomEnd - vRomStart;
    sp20 = temp_a2;
    DmaMgr_SendRequest0((void *) allocatedVRamAddr, vRomStart, temp_a2);
    temp_a3 = allocatedVRamAddr + temp_a2;
    sp18 = temp_a3;
    temp_a1 = temp_a3 - temp_a3->unk_-4;
    sp24 = temp_a1;
    Load2_Relocate(allocatedVRamAddr, temp_a1, vRamStart);
    temp_v0 = temp_a1->bssSize;
    if (temp_v0 != 0) {
        bzero(temp_a3, (s32) temp_v0);
    }
    temp_a1_2 = vRamEnd - vRamStart;
    sp20 = temp_a1_2;
    osWritebackDCache((void *) allocatedVRamAddr, (s32) temp_a1_2);
    osInvalICache((void *) allocatedVRamAddr, (s32) temp_a1_2);
    return (s32) sp20;
}

void *Load2_AllocateAndLoad(u32 vRomStart, u32 vRomEnd, u32 vRamStart, u32 vRamEnd) {
    void *sp24;
    void *temp_v0;
    void *phi_v1;

    temp_v0 = SystemArena_MallocR(vRamEnd - vRamStart);
    phi_v1 = temp_v0;
    if (temp_v0 != 0) {
        sp24 = temp_v0;
        Load2_LoadOverlay(vRomStart, vRomEnd, vRamStart, vRamEnd, (u32) temp_v0);
        phi_v1 = sp24;
    }
    return phi_v1;
}
