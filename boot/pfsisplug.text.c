void __osPfsGetInitData(s8 *arg0, ? *);             /* static */
void __osPfsRequestData(u8 arg0);                   /* static */
u8 __osContLastCmd;
u8 __osMaxControllers;
OSPifRam __osPfsPifRam;



s32 osPfsIsPlug(OSMesgQueue *queue, u8 *pattern) {
    s32 sp6C;
    void *sp68;
    s8 sp67;
    ? sp54;
    s32 temp_s0;
    s32 temp_s0_2;
    u8 temp_v1;
    ? *phi_v0;
    s32 phi_s0;
    s32 phi_s0_2;
    s32 phi_s1;
    ? *phi_v0_2;
    s32 phi_s0_3;
    u8 phi_s5;
    u8 phi_s5_2;
    s32 phi_s1_2;
    u8 phi_s5_3;

    __osSiGetAccess();
    phi_s0_3 = 0;
    phi_s5 = 0U;
    phi_s1_2 = 3;
    phi_s5_3 = 0U;
    do {
        __osPfsRequestData(0U);
        __osSiRawStartDma(1, (void *) &__osPfsPifRam);
        osRecvMesg(queue, &sp68, 1);
        sp6C = __osSiRawStartDma(0, (void *) &__osPfsPifRam);
        osRecvMesg(queue, &sp68, 1);
        __osPfsGetInitData(&sp67, &sp54);
        temp_v1 = __osMaxControllers;
        phi_v0 = &sp54;
        phi_s0 = 0;
        phi_s0_2 = 0;
        phi_s1 = phi_s1_2;
        if ((s32) temp_v1 > 0) {
loop_2:
            phi_s0_2 = phi_s0;
            if ((phi_v0->unk2 & 4) == 0) {
                phi_s1 = phi_s1_2 - 1;
            } else {
                temp_s0 = phi_s0 + 1;
                phi_v0 += 4;
                phi_s0 = temp_s0;
                phi_s0_2 = temp_s0;
                if (temp_s0 < (s32) temp_v1) {
                    goto loop_2;
                }
            }
        }
        if ((phi_s0_2 ^ temp_v1) == 0) {
            phi_s1 = 0;
        }
        phi_s1_2 = phi_s1;
    } while (phi_s1 > 0);
    phi_v0_2 = &sp54;
    if ((s32) temp_v1 > 0) {
        do {
            phi_s5_2 = phi_s5_3;
            if ((phi_v0_2->unk3 == 0) && ((phi_v0_2->unk2 & 1) != 0)) {
                phi_s5_2 = (phi_s5_3 | (1 << phi_s0_3)) & 0xFF;
            }
            temp_s0_2 = phi_s0_3 + 1;
            phi_v0_2 += 4;
            phi_s0_3 = temp_s0_2;
            phi_s5 = phi_s5_2;
            phi_s5_3 = phi_s5_2;
        } while (temp_s0_2 < (s32) temp_v1);
    }
    __osSiRelAccess();
    *pattern = phi_s5;
    return sp6C;
}

void __osPfsRequestData(u8 arg0) {
    s8 spB;
    s8 spA;
    s8 sp9;
    s8 sp8;
    u8 sp7;
    s8 sp6;
    s8 sp5;
    s8 sp4;
    OSPifRam *temp_v0;
    s32 temp_v1;
    OSPifRam *phi_v0;
    s32 phi_v1;
    OSPifRam *phi_v0_2;

    __osContLastCmd = arg0;
    __osPfsPifRam.pifstatus = 1;
    sp4 = 0xFF;
    sp5 = 1;
    sp6 = 3;
    sp7 = arg0;
    sp8 = 0xFF;
    sp9 = 0xFF;
    spA = 0xFF;
    spB = 0xFF;
    phi_v0 = &__osPfsPifRam;
    phi_v1 = 0;
    phi_v0_2 = &__osPfsPifRam;
    if ((s32) __osMaxControllers > 0) {
        do {
            temp_v1 = phi_v1 + 1;
            temp_v0 = phi_v0 + 8;
            temp_v0->unk-8 = (unaligned s32) sp4.unk0;
            temp_v0->unk-4 = (unaligned s32) sp4.unk4;
            phi_v0 = temp_v0;
            phi_v1 = temp_v1;
            phi_v0_2 = temp_v0;
        } while (temp_v1 < (s32) __osMaxControllers);
    }
    *phi_v0_2 = 0xFE;
}

void __osPfsGetInitData(s8 *arg0, void *arg1) {
    ? spC;
    s32 temp_a2;
    s32 temp_t2;
    OSPifRam *phi_v1;
    void *phi_a1;
    s32 phi_a2;
    s8 phi_v0;
    s8 phi_v0_2;
    s8 phi_v0_3;

    phi_v1 = &__osPfsPifRam;
    phi_a1 = arg1;
    phi_a2 = 0;
    phi_v0 = 0;
    phi_v0_3 = 0;
    if ((s32) __osMaxControllers > 0) {
        do {
            spC.unk0 = (s32) (unaligned s32) phi_v1->unk0;
            spC.unk4 = (s32) (unaligned s32) phi_v1->unk4;
            temp_t2 = (s32) (spE & 0xC0) >> 4;
            phi_a1->unk3 = (s8) temp_t2;
            phi_v0_2 = phi_v0_3;
            if ((temp_t2 & 0xFF) == 0) {
                phi_a1->unk0 = (s16) ((sp11 << 8) | sp10);
                phi_a1->unk2 = sp12;
                phi_v0_2 = (phi_v0_3 | (1 << phi_a2)) & 0xFF;
            }
            temp_a2 = phi_a2 + 1;
            phi_v1 += 8;
            phi_a1 += 4;
            phi_a2 = temp_a2;
            phi_v0 = phi_v0_2;
            phi_v0_3 = phi_v0_2;
        } while (temp_a2 < (s32) __osMaxControllers);
    }
    *arg0 = phi_v0;
}

