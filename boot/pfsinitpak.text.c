struct _mips2c_stack___osPfsCheckRamArea {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ u8 sp30;                             /* inferred */
    /* 0x31 */ char pad_31[0x1F];                   /* maybe part of sp30[32]? */
    /* 0x50 */ u8 sp50;                             /* inferred */
    /* 0x51 */ char pad_51[0x1F];                   /* maybe part of sp50[32]? */
    /* 0x70 */ u8 sp70;                             /* inferred */
    /* 0x71 */ char pad_71[0x27];
};                                                  /* size = 0x98 */

struct _mips2c_stack_osPfsInitPak {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ u8 sp20;                             /* inferred */
    /* 0x21 */ char pad_21[0x17];                   /* maybe part of sp20[24]? */
    /* 0x38 */ u16 sp38;                            /* inferred */
    /* 0x3A */ char pad_3A[0xA];                    /* maybe part of sp38[6]? */
    /* 0x44 */ u8 *sp44;                            /* inferred */
    /* 0x48 */ u8 sp48;                             /* inferred */
    /* 0x49 */ char pad_49[0x17];                   /* maybe part of sp48[24]? */
    /* 0x60 */ u16 sp60;                            /* inferred */
    /* 0x62 */ char pad_62[0x2];
    /* 0x64 */ u16 sp64;                            /* inferred */
    /* 0x66 */ u16 sp66;                            /* inferred */
    /* 0x68 */ u16 sp68;                            /* inferred */
    /* 0x6A */ u16 sp6A;                            /* inferred */
    /* 0x6C */ s32 sp6C;                            /* inferred */
};                                                  /* size = 0x70 */

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
    arg1->unk_4 = arg0;
    arg1->unk_0 = 0;
    arg1->unk_8 = arg2;
    temp_v0_5 = __osPfsCheckRamArea(arg1);
    if (temp_v0_5 != 0) {
        return temp_v0_5;
    }
    temp_v0_4 = __osPfsSelectBank(arg1, 0);
    if (temp_v0_4 != 0) {
        return temp_v0_4;
    }
    temp_v0_3 = __osContRamRead(arg1->unk_4, arg1->unk_8, 1U, &sp48);
    if (temp_v0_3 != 0) {
        return temp_v0_3;
    }
    __osIdCheckSum(&sp48, &sp6A, &sp68);
    sp44 = &sp48;
    if (((sp6A != sp64) || (sp68 != sp66)) && (temp_v0_6 = __osCheckPackId(arg1, &sp48), phi_v0 = temp_v0_6, (temp_v0_6 != 0))) {
        phi_t4 = arg1->unk_0 | 4;
        goto block_22;
    }
    if ((sp60 & 1) == 0) {
        temp_v0_2 = __osRepairPackId(arg1, &sp48, &sp20);
        if (temp_v0_2 != 0) {
            if (temp_v0_2 == 0xA) {
                arg1->unk_0 = (s32) (arg1->unk_0 | 4);
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
    arg1->unk_4C = (s32) sp44->unk_1B;
    temp_t6 = sp44->unk_1A;
    arg1->unk_50 = 0x10;
    arg1->unk_54 = 8;
    temp_v0_7 = temp_t6 & 0xFF;
    temp_v1 = temp_v0_7 * 8;
    temp_t0 = temp_v1 + 8;
    arg1->unk_60 = (s32) ((temp_v0_7 * 2) + 3);
    arg1->unk_58 = temp_t0;
    arg1->unk_5C = (s32) (temp_t0 + temp_v1);
    arg1->unk_64 = temp_t6;
    temp_v0 = __osContRamRead(arg1->unk_4, arg1->unk_8, 7U, arg1 + 0x2C);
    if (temp_v0 != 0) {
        return temp_v0;
    }
    phi_t4 = arg1->unk_0 | 1;
    phi_v0 = osPfsChecker(arg1);
block_22:
    arg1->unk_0 = phi_t4;
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
    temp_v0_3 = __osContRamRead(arg0->unk_4, arg0->unk_8, 0U, &sp30);
    phi_v1 = &sp70;
    if (temp_v0_3 != 0) {
        return temp_v0_3;
    }
    phi_v0 = 0;
    do {
        phi_v1->unk_0 = phi_v0;
        temp_v0_5 = phi_v0 + 4;
        phi_v1->unk_3 = (s8) (phi_v0 + 3);
        phi_v1->unk_2 = (s8) (phi_v0 + 2);
        phi_v1->unk_1 = (s8) (phi_v0 + 1);
        phi_v0 = temp_v0_5;
        phi_v1 += 4;
    } while (temp_v0_5 != 0x20);
    temp_v0_2 = __osContRamWrite(arg0->unk_4, arg0->unk_8, 0U, &sp70, 0);
    if (temp_v0_2 != 0) {
        return temp_v0_2;
    }
    temp_v0 = __osContRamRead(arg0->unk_4, arg0->unk_8, 0U, &sp50);
    if (temp_v0 != 0) {
        return temp_v0;
    }
    if (bcmp((void *) &sp70, (void *) &sp50, 0x20U) != 0) {
        return 0xB;
    }
    return __osContRamWrite(arg0->unk_4, arg0->unk_8, 0U, &sp30, 0);
}
