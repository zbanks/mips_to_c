s32 __osPfsSelectBank(void *, s32);                 /* extern */
s32 __osCheckId(void *arg0);                        /* static */
s32 __osCheckPackId(void *arg0, u8 *arg1);          /* static */
s32 __osGetId(void *arg0);                          /* static */
? __osIdCheckSum(u8 *arg0, u16 *arg1, u16 *arg2);   /* static */
s32 __osPfsRWInode(void *arg0, void *arg1, s32 arg2, u8 arg3); /* static */
s32 __osRepairPackId(void *arg0, u8 *arg1, u8 *arg2); /* static */
u8 __osSumcalc(u8 *arg0, s32 arg1);                 /* static */
static s32 D_80097F00 = 0xFFFFFFFF;
static u8 D_80097F04 = 0xFA;
__OSInode __osPfsInodeCache;



u8 __osSumcalc(u8 *arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 *temp_v0;
    s32 phi_a2;
    s32 phi_a2_2;
    s32 phi_v1;
    s32 phi_v1_2;
    u8 *phi_v0;
    s32 phi_v1_3;
    u8 *phi_v0_2;

    phi_a2 = 0;
    phi_a2_2 = 0;
    phi_v1 = 0;
    phi_v1_2 = 0;
    phi_v0 = arg0;
    phi_v1_3 = 0;
    phi_v0_2 = arg0;
    if (arg1 > 0) {
        temp_a3 = arg1 & 3;
        if (temp_a3 != 0) {
            do {
                temp_a2 = phi_a2 + 1;
                temp_v0 = phi_v0 + 1;
                temp_v1 = phi_v1_2 + *phi_v0;
                phi_a2 = temp_a2;
                phi_a2_2 = temp_a2;
                phi_v1 = temp_v1;
                phi_v1_2 = temp_v1;
                phi_v0 = temp_v0;
                phi_v1_3 = temp_v1;
                phi_v0_2 = temp_v0;
            } while (temp_a3 != temp_a2);
            if (temp_a2 != arg1) {
                goto loop_4;
            }
        } else {
            do {
loop_4:
                temp_a2_2 = phi_a2_2 + 4;
                temp_v1_2 = phi_v1_3 + phi_v0_2->unk0 + phi_v0_2->unk1 + phi_v0_2->unk2 + phi_v0_2->unk3;
                phi_a2_2 = temp_a2_2;
                phi_v1 = temp_v1_2;
                phi_v1_3 = temp_v1_2;
                phi_v0_2 += 4;
            } while (temp_a2_2 != arg1);
        }
    }
    return phi_v1 & 0xFFFF;
}

? __osIdCheckSum(u8 *arg0, u16 *arg1, u16 *arg2) {
    s32 temp_v1;
    u16 *temp_a3;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 temp_v0_6;
    void *temp_t1;
    void *temp_t2;
    void *temp_t3;
    u16 *phi_a3;
    void *phi_t1;
    void *phi_t2;
    void *phi_t3;
    s32 phi_v1;

    *arg2 = 0;
    *arg1 = 0;
    temp_v0 = arg0->unk0;
    temp_a3 = arg0 + 4;
    *arg1 = temp_v0;
    *arg2 += ~temp_v0;
    temp_v0_2 = arg0->unk2;
    *arg1 += temp_v0_2;
    *arg2 += ~temp_v0_2;
    phi_a3 = temp_a3;
    phi_t1 = temp_a3 + 2;
    phi_t2 = temp_a3 + 4;
    phi_t3 = temp_a3 + 6;
    phi_v1 = 4;
    do {
        temp_v0_3 = *phi_a3;
        temp_v1 = phi_v1 + 8;
        *arg1 += temp_v0_3;
        temp_t1 = phi_t1 + 8;
        *arg2 += ~temp_v0_3;
        temp_v0_4 = temp_t1->unk-8;
        temp_t2 = phi_t2 + 8;
        temp_t3 = phi_t3 + 8;
        *arg1 += temp_v0_4;
        *arg2 += ~temp_v0_4;
        temp_v0_5 = temp_t2->unk-8;
        *arg1 += temp_v0_5;
        *arg2 += ~temp_v0_5;
        temp_v0_6 = temp_t3->unk-8;
        *arg1 += temp_v0_6;
        *arg2 += ~temp_v0_6;
        phi_a3 += 8;
        phi_t1 = temp_t1;
        phi_t2 = temp_t2;
        phi_t3 = temp_t3;
        phi_v1 = temp_v1;
    } while (temp_v1 != 0x1C);
    return 0;
}

s32 __osRepairPackId(void *arg0, u8 *arg1, u8 *arg2) {
    ? sp9C;
    u8 sp7D;
    u8 sp7C;
    u8 sp5C;
    ? sp50;
    s16 sp4E;
    s16 sp4C;
    s16 sp4A;
    u16 sp48;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    u16 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s5;
    u8 *temp_v0_11;
    u8 *temp_v0_12;
    u8 *temp_v1;
    s32 phi_s3;
    u8 *phi_v0;
    u8 *phi_v1;
    u8 *phi_v0_2;
    u8 *phi_v1_2;
    s32 phi_s3_2;
    s32 phi_v0_3;
    u16 *phi_s0;
    u8 *phi_v0_4;
    u8 *phi_v1_3;

    arg2->unk0 = -1;
    arg2->unk4 = osGetCount();
    arg2->unkC = (s32) arg1->unkC;
    arg2->unk8 = (s32) arg1->unk8;
    arg2->unk14 = (s32) arg1->unk14;
    arg2->unk10 = (s32) arg1->unk10;
    phi_s3 = 0;
    if ((arg0->unk65 != 0) && (temp_v0_10 = __osPfsSelectBank(arg0, 0), (temp_v0_10 != 0))) {
        return temp_v0_10;
    }
    temp_s1 = &sp7C;
    temp_s5 = temp_s1;
loop_4:
    temp_v0_9 = __osPfsSelectBank(arg0, phi_s3 & 0xFF);
    phi_s3_2 = phi_s3;
    if (temp_v0_9 != 0) {
        return temp_v0_9;
    }
    temp_v0_8 = __osContRamRead(arg0->unk4, arg0->unk8, 0U, temp_s5);
    if (temp_v0_8 != 0) {
        return temp_v0_8;
    }
    sp7C = phi_s3 | 0x80;
    phi_v0 = &sp7D;
    do {
        temp_v0_11 = phi_v0 + 1;
        temp_v0_11->unk-1 = (s8) ~*phi_v0;
        phi_v0 = temp_v0_11;
    } while ((u32) temp_v0_11 < (u32) &sp9C);
    temp_v0_7 = __osContRamWrite(arg0->unk4, arg0->unk8, 0U, temp_s5, 0);
    if (temp_v0_7 != 0) {
        return temp_v0_7;
    }
    temp_v0_6 = __osContRamRead(arg0->unk4, arg0->unk8, 0U, &sp5C);
    phi_v1 = &sp5C;
    if (temp_v0_6 != 0) {
        return temp_v0_6;
    }
    phi_v0_2 = &sp7C;
loop_15:
    phi_v1_2 = phi_v1;
    if (*phi_v1 == *phi_v0_2) {
        temp_v1 = phi_v1 + 1;
        phi_v1 = temp_v1;
        phi_v0_2 += 1;
        phi_v1_2 = temp_v1;
        if ((u32) temp_v1 < (u32) temp_s1) {
            goto loop_15;
        }
    }
    if (phi_v1_2 == &sp7C) {
        if (phi_s3 > 0) {
            temp_v0_5 = __osPfsSelectBank(arg0, 0);
            if (temp_v0_5 != 0) {
                return temp_v0_5;
            }
            temp_v0_4 = __osContRamRead(arg0->unk4, arg0->unk8, 0U, temp_s5);
            if (temp_v0_4 != 0) {
                return temp_v0_4;
            }
            if (sp7C == 0x80) {
                goto block_24;
            }
            goto block_25;
        }
block_24:
        temp_s3 = phi_s3 + 1;
        phi_s3 = temp_s3;
        phi_s3_2 = temp_s3;
        if (temp_s3 >= 0x3E) {
            goto block_25;
        }
        goto loop_4;
    }
block_25:
    if ((arg0->unk65 != 0) && (temp_v0_3 = __osPfsSelectBank(arg0, 0), (temp_v0_3 != 0))) {
        return temp_v0_3;
    }
    if (phi_s3_2 > 0) {
        phi_v0_3 = 1;
    } else {
        phi_v0_3 = 0;
    }
    arg2->unk1A = (s8) phi_s3_2;
    arg2->unk18 = (s16) ((arg1->unk18 & 0xFFFE) | phi_v0_3);
    arg2->unk1B = (u8) arg1->unk1B;
    __osIdCheckSum(arg2, arg2 + 0x1C, arg2 + 0x1E);
    sp48 = 1;
    sp4A = 3;
    sp4C = 4;
    sp4E = 6;
    phi_s0 = &sp48;
loop_32:
    temp_v0_2 = __osContRamWrite(arg0->unk4, arg0->unk8, *phi_s0, arg2, 1);
    temp_s0 = phi_s0 + 2;
    phi_s0 = temp_s0;
    if (temp_v0_2 != 0) {
        return temp_v0_2;
    }
    if ((u32) temp_s0 >= (u32) &sp50) {
        temp_v0 = __osContRamRead(arg0->unk4, arg0->unk8, 1U, temp_s5);
        phi_v1_3 = arg2;
        if (temp_v0 != 0) {
            return temp_v0;
        }
        phi_v0_4 = &sp7C;
loop_38:
        if (phi_v0_4->unk0 != phi_v1_3->unk0) {
            return 0xB;
        }
        if (phi_v0_4->unk1 != phi_v1_3->unk1) {
            return 0xB;
        }
        if (phi_v0_4->unk2 != phi_v1_3->unk2) {
            return 0xB;
        }
        temp_v0_12 = phi_v0_4 + 4;
        phi_v0_4 = temp_v0_12;
        if (phi_v0_4->unk3 != phi_v1_3->unk3) {
            return 0xB;
        }
        phi_v1_3 += 4;
        if (temp_v0_12 == &sp9C) {
            return 0;
        }
        goto loop_38;
    }
    goto loop_32;
}

s32 __osCheckPackId(void *arg0, u8 *arg1) {
    s16 sp5E;
    s16 sp5C;
    u16 sp5A;
    u16 sp58;
    u16 sp52;
    u16 sp50;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 *phi_s0;
    s32 phi_s1;
    s32 phi_s1_2;
    s32 phi_s0_2;

    if ((arg0->unk65 != 0) && (temp_v0_3 = __osPfsSelectBank(NULL), (temp_v0_3 != 0))) {
        return temp_v0_3;
    }
    sp58 = 1;
    sp5A = 3;
    sp5C = 4;
    sp5E = 6;
    phi_s0 = &sp5A;
    phi_s1 = 1;
loop_4:
    temp_v0_2 = __osContRamRead(arg0->unk4, arg0->unk8, *phi_s0, arg1);
    phi_s1_2 = phi_s1;
    if (temp_v0_2 != 0) {
        return temp_v0_2;
    }
    __osIdCheckSum(arg1, &sp52, &sp50);
    if (((sp52 == arg1->unk1C) && (sp50 == arg1->unk1E)) || (temp_s1 = phi_s1 + 1, phi_s0 += 2, phi_s1 = temp_s1, phi_s1_2 = temp_s1, (temp_s1 == 4))) {
        phi_s0_2 = 0;
        if (phi_s1_2 == 4) {
            return 0xA;
        }
loop_12:
        if ((phi_s0_2 != phi_s1_2) && (temp_v0 = __osContRamWrite(arg0->unk4, arg0->unk8, (&sp58)[phi_s0_2], arg1, 1), (temp_v0 != 0))) {
            return temp_v0;
        }
        temp_s0 = phi_s0_2 + 1;
        phi_s0_2 = temp_s0;
        if (temp_s0 == 4) {
            return 0;
        }
        goto loop_12;
    }
    goto loop_4;
}

s32 __osGetId(void *arg0) {
    u16 sp6E;
    u16 sp6C;
    u8 sp4C;
    u8 sp28;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v1;
    u8 temp_t7;
    u8 *phi_s1;
    void *phi_s1_2;

    if ((arg0->unk65 != 0) && (temp_v0_6 = __osPfsSelectBank(NULL), (temp_v0_6 != 0))) {
        return temp_v0_6;
    }
    temp_v0_5 = __osContRamRead(arg0->unk4, arg0->unk8, 1U, &sp4C);
    if (temp_v0_5 != 0) {
        return temp_v0_5;
    }
    __osIdCheckSum(&sp4C, &sp6E, &sp6C);
    phi_s1 = &sp4C;
    if ((sp6E != sp68) || (sp6C != sp6A)) {
        temp_v0_3 = __osCheckPackId(arg0, &sp4C);
        if (temp_v0_3 == 0xA) {
            temp_v0_4 = __osRepairPackId(arg0, &sp4C, &sp28);
            if (temp_v0_4 != 0) {
                return temp_v0_4;
            }
            phi_s1 = &sp28;
            goto block_13;
        }
        if (temp_v0_3 != 0) {
            return temp_v0_3;
        }
        goto block_13;
    }
block_13:
    phi_s1_2 = (void *) phi_s1;
    if ((phi_s1->unk18 & 1) == 0) {
        temp_v0_2 = __osRepairPackId(arg0, phi_s1, &sp28);
        if (temp_v0_2 != 0) {
            return temp_v0_2;
        }
        phi_s1_2 = (void *) &sp28;
        if ((sp40 & 1) == 0) {
            return 0xB;
        }
        goto block_18;
    }
block_18:
    bcopy(phi_s1_2, arg0 + 0xC, 0x20U);
    arg0->unk4C = (s32) phi_s1_2->unk1B;
    temp_t7 = phi_s1_2->unk1A;
    arg0->unk50 = 0x10;
    arg0->unk54 = 8;
    temp_v0_7 = temp_t7 & 0xFF;
    temp_v1 = temp_v0_7 * 8;
    temp_t0 = temp_v1 + 8;
    arg0->unk60 = (s32) ((temp_v0_7 * 2) + 3);
    arg0->unk58 = temp_t0;
    arg0->unk5C = (s32) (temp_t0 + temp_v1);
    arg0->unk64 = temp_t7;
    temp_v0 = __osContRamRead(arg0->unk4, arg0->unk8, 7U, arg0 + 0x2C);
    if (temp_v0 != 0) {
        return temp_v0;
    }
    return 0;
}

s32 __osCheckId(void *arg0) {
    u8 sp28;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 phi_v0;
    s32 phi_v1;

    if (arg0->unk65 != 0) {
        temp_v0_3 = __osPfsSelectBank(NULL);
        phi_v0 = temp_v0_3;
        phi_v1 = temp_v0_3;
        if (temp_v0_3 == 2) {
            temp_v0_4 = __osPfsSelectBank(arg0, 0);
            phi_v0 = temp_v0_4;
            phi_v1 = temp_v0_4;
        }
        if (phi_v0 != 0) {
            return phi_v1;
        }
        goto block_5;
    }
block_5:
    temp_v0_2 = __osContRamRead(arg0->unk4, arg0->unk8, 1U, &sp28);
    if (temp_v0_2 != 0) {
        if (temp_v0_2 != 2) {
            return temp_v0_2;
        }
        temp_v0 = __osContRamRead(arg0->unk4, arg0->unk8, 1U, &sp28);
        if (temp_v0 != 0) {
            return temp_v0;
        }
        goto block_10;
    }
block_10:
    if (bcmp(arg0 + 0xC, (void *) &sp28, 0x20U) != 0) {
        return 2;
    }
    return 0;
}

s32 __osPfsRWInode(void *arg0, void *arg1, s32 arg2, u8 arg3) {
    s32 sp48;
    s32 sp3C;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_v0;
    u8 *temp_s4_2;
    s32 phi_s0;
    u8 *phi_s1;
    s32 phi_v0;
    s32 phi_s0_2;
    u8 *phi_s1_2;
    s32 phi_s0_3;
    u8 *phi_s1_3;

    temp_s4 = arg2 & 0xFF;
    if ((temp_s4 == 0) && (D_80097F04 == arg3) && (D_80097F00 == arg0->unk8)) {
        bcopy((void *) &__osPfsInodeCache, arg1, 0x100U);
        return 0;
    }
    if ((arg0->unk65 != 0) && (temp_v0 = __osPfsSelectBank(arg0, 0), (temp_v0 != 0))) {
        return temp_v0;
    }
    if ((s32) arg3 > 0) {
        sp48 = 1;
    } else {
        sp48 = arg0->unk60;
    }
    if (temp_s4 == 1) {
        sp3C = (s32) arg3;
        arg1->unk1 = __osSumcalc(arg1 + (sp48 * 2), (sp48 * -2) + 0x100);
    }
    temp_s3 = arg3 * 8;
    phi_s0 = 0;
    phi_s1 = (u8 *) arg1;
    phi_s0_2 = 0;
    phi_s0_3 = 0;
loop_13:
    temp_a1 = arg0->unk8;
    if (temp_s4 == 1) {
        __osContRamWrite(arg0->unk4, temp_a1, (arg0->unk54 + temp_s3 + phi_s0) & 0xFFFF, phi_s1, 0);
        phi_v0 = __osContRamWrite(arg0->unk4, arg0->unk8, (arg0->unk58 + temp_s3 + phi_s0) & 0xFFFF, phi_s1, 0);
    } else {
        phi_v0 = __osContRamRead(arg0->unk4, temp_a1, (arg0->unk54 + temp_s3 + phi_s0) & 0xFFFF, phi_s1);
    }
    temp_s0 = phi_s0 + 1;
    phi_s0 = temp_s0;
    if (phi_v0 != 0) {
        return phi_v0;
    }
    phi_s1 += 0x20;
    if (temp_s0 >= 8) {
        if ((temp_s4 == 0) && (temp_a1_2 = (sp48 * -2) + 0x100, temp_s4_2 = arg1 + (sp48 * 2), sp3C = temp_a1_2, phi_s1_2 = (u8 *) arg1, ((__osSumcalc(temp_s4_2, temp_a1_2) & 0xFF) != arg1->unk1))) {
            do {
                __osContRamRead(arg0->unk4, arg0->unk8, (arg0->unk58 + temp_s3 + phi_s0_2) & 0xFFFF, phi_s1_2);
                temp_s0_2 = phi_s0_2 + 1;
                phi_s0_2 = temp_s0_2;
                phi_s1_2 += 0x20;
            } while (temp_s0_2 < 8);
            phi_s1_3 = (u8 *) arg1;
            if ((__osSumcalc(temp_s4_2, sp3C) & 0xFF) != arg1->unk1) {
                return 3;
            }
            do {
                __osContRamWrite(arg0->unk4, arg0->unk8, (arg0->unk54 + temp_s3 + phi_s0_3) & 0xFFFF, phi_s1_3, 0);
                temp_s0_3 = phi_s0_3 + 1;
                phi_s0_3 = temp_s0_3;
                phi_s1_3 += 0x20;
            } while (temp_s0_3 != 8);
            goto block_25;
        }
block_25:
        D_80097F04 = arg3;
        bcopy(arg1, (void *) &__osPfsInodeCache, 0x100U);
        D_80097F00 = arg0->unk8;
        return 0;
    }
    goto loop_13;
}

