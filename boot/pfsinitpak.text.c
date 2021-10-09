s32 __osCheckPackId(void *, u8 *);                  /* extern */
? __osIdCheckSum(u8 *, u16 *, u16 *);               /* extern */
s32 __osPfsGetStatus(OSMesgQueue *, s32);           /* extern */
s32 __osPfsSelectBank(void *, ?);                   /* extern */
s32 __osRepairPackId(void *, u8 *, u8 *);           /* extern */
s32 osPfsChecker(void *);                           /* extern */
s32 __osPfsCheckRamArea(void *arg0);                /* static */
s32 osPfsInitPak(OSMesgQueue *arg0, void *arg1, s32 arg2); /* static */



s32 osPfsInitPak(OSMesgQueue *arg0, void *arg1, s32 arg2) {
    s32 sp6C;
    u16 sp6A;
    u16 sp68;
    u8 sp48;
    u8 *sp44;
    u8 sp20;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v1;
    u8 temp_t6;
    s32 phi_t4;
    s32 phi_v0;

    __osSiGetAccess();
    sp6C = __osPfsGetStatus(arg0, arg2);
    __osSiRelAccess();
    if (sp6C != 0) {
        return sp6C;
    }
    arg1->unk4 = arg0;
    arg1->unk0 = 0;
    arg1->unk8 = arg2;
    temp_v0_5 = __osPfsCheckRamArea(arg1);
    if (temp_v0_5 != 0) {
        return temp_v0_5;
    }
    temp_v0_4 = __osPfsSelectBank(arg1, 0);
    if (temp_v0_4 != 0) {
        return temp_v0_4;
    }
    temp_v0_3 = __osContRamRead(arg1->unk4, arg1->unk8, 1U, &sp48);
    if (temp_v0_3 != 0) {
        return temp_v0_3;
    }
    __osIdCheckSum(&sp48, &sp6A, &sp68);
    sp44 = &sp48;
    if (((sp6A != sp64) || (sp68 != sp66)) && (temp_v0_6 = __osCheckPackId(arg1, &sp48), phi_v0 = temp_v0_6, (temp_v0_6 != 0))) {
        phi_t4 = arg1->unk0 | 4;
        goto block_22;
    }
    if ((sp60 & 1) == 0) {
        temp_v0_2 = __osRepairPackId(arg1, &sp48, &sp20);
        if (temp_v0_2 != 0) {
            if (temp_v0_2 == 0xA) {
                arg1->unk0 = (s32) (arg1->unk0 | 4);
            }
            return temp_v0_2;
        }
        sp44 = &sp20;
        if ((sp38 & 1) == 0) {
            return 0xB;
        }
        goto block_19;
    }
block_19:
    bcopy((void *) sp44, arg1 + 0xC, 0x20U);
    arg1->unk4C = (s32) sp44->unk1B;
    temp_t6 = sp44->unk1A;
    arg1->unk50 = 0x10;
    arg1->unk54 = 8;
    temp_v0_7 = temp_t6 & 0xFF;
    temp_v1 = temp_v0_7 * 8;
    temp_t0 = temp_v1 + 8;
    arg1->unk60 = (s32) ((temp_v0_7 * 2) + 3);
    arg1->unk58 = temp_t0;
    arg1->unk5C = (s32) (temp_t0 + temp_v1);
    arg1->unk64 = temp_t6;
    temp_v0 = __osContRamRead(arg1->unk4, arg1->unk8, 7U, arg1 + 0x2C);
    if (temp_v0 != 0) {
        return temp_v0;
    }
    phi_t4 = arg1->unk0 | 1;
    phi_v0 = osPfsChecker(arg1);
block_22:
    arg1->unk0 = phi_t4;
    return phi_v0;
}

s32 __osPfsCheckRamArea(void *arg0) {
    u8 sp70;
    u8 sp50;
    u8 sp30;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s8 temp_v0_5;
    s8 phi_v0;
    u8 *phi_v1;

    temp_v0_4 = __osPfsSelectBank(NULL);
    if (temp_v0_4 != 0) {
        return temp_v0_4;
    }
    temp_v0_3 = __osContRamRead(arg0->unk4, arg0->unk8, 0U, &sp30);
    phi_v1 = &sp70;
    if (temp_v0_3 != 0) {
        return temp_v0_3;
    }
    phi_v0 = 0;
    do {
        phi_v1->unk0 = phi_v0;
        temp_v0_5 = phi_v0 + 4;
        phi_v1->unk3 = (s8) (phi_v0 + 3);
        phi_v1->unk2 = (s8) (phi_v0 + 2);
        phi_v1->unk1 = (s8) (phi_v0 + 1);
        phi_v0 = temp_v0_5;
        phi_v1 += 4;
    } while (temp_v0_5 != 0x20);
    temp_v0_2 = __osContRamWrite(arg0->unk4, arg0->unk8, 0U, &sp70, 0);
    if (temp_v0_2 != 0) {
        return temp_v0_2;
    }
    temp_v0 = __osContRamRead(arg0->unk4, arg0->unk8, 0U, &sp50);
    if (temp_v0 != 0) {
        return temp_v0;
    }
    if (bcmp((void *) &sp70, (void *) &sp50, 0x20U) != 0) {
        return 0xB;
    }
    return __osContRamWrite(arg0->unk4, arg0->unk8, 0U, &sp30, 0);
}

