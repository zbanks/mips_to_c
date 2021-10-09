typedef struct {
    /* 0x00000 */ View view;
    /* 0x00168 */ Font font;
    /* 0x11EF4 */ char pad11EF4[0x10];
    /* 0x11F04 */ u16 unk11F04;
    /* 0x11F06 */ u16 unk11F06;                     /* inferred */
    /* 0x11F08 */ char pad11F08[0x2];
    /* 0x11F0A */ u8 unk11F0A;
    /* 0x11F0B */ char pad11F0B[0x5];               /* maybe part of unk11F0A[6]? */
    /* 0x11F10 */ s32 unk11F10;
    /* 0x11F14 */ char pad11F14[0xE];               /* maybe part of unk11F10[4]? */
    /* 0x11F22 */ u8 unk11F22;
    /* 0x11F23 */ char pad11F23[0xC9];              /* maybe part of unk11F22[202]? */
    /* 0x11FEC */ s16 unk11FEC;                     /* inferred */
    /* 0x11FEE */ u16 unk11FEE;                     /* inferred */
    /* 0x11FF0 */ char pad11FF0[0x2];
    /* 0x11FF2 */ s16 unk11FF2;                     /* inferred */
    /* 0x11FF4 */ s16 unk11FF4;                     /* inferred */
    /* 0x11FF6 */ s16 unk11FF6;                     /* inferred */
    /* 0x11FF8 */ s16 unk11FF8;                     /* inferred */
    /* 0x11FFA */ s16 unk11FFA;                     /* inferred */
    /* 0x11FFC */ char pad11FFC[0x1E];              /* maybe part of unk11FFA[16]? */
    /* 0x1201A */ s16 unk1201A;                     /* inferred */
    /* 0x1201C */ s16 unk1201C;                     /* inferred */
    /* 0x1201E */ char pad1201E[0x2];
    /* 0x12020 */ u8 unk12020;
    /* 0x12021 */ u8 choiceIndex;
    /* 0x12022 */ char pad12022[0x1];
    /* 0x12023 */ s8 unk12023;
    /* 0x12024 */ u16 unk12024;                     /* inferred */
    /* 0x12026 */ s16 unk12026;                     /* inferred */
    /* 0x12028 */ char pad12028[0x2];
    /* 0x1202A */ u16 unk1202A;
    /* 0x1202C */ char pad1202C[0x2];
    /* 0x1202E */ u16 unk1202E;
    /* 0x12030 */ char pad12030[0x14];              /* maybe part of unk1202E[11]? */
    /* 0x12044 */ s16 unk12044;
    /* 0x12046 */ char pad12046[0x24];              /* maybe part of unk12044[19]? */
    /* 0x1206A */ s16 unk1206A;
    /* 0x1206C */ s32 unk1206C;
    /* 0x12070 */ char pad12070[0x8];               /* maybe part of unk1206C[3]? */
    /* 0x12078 */ s32 bankRupeesSelected;
    /* 0x1207C */ s32 bankRupees;
    /* 0x12080 */ char pad12080[0x10];              /* maybe part of bankRupees[5]? */
    /* 0x12090 */ s16 unk12090;                     /* inferred */
    /* 0x12092 */ s16 unk12092;                     /* inferred */
    /* 0x12094 */ char pad12094[0x1D];              /* maybe part of unk12092[15]? */
    /* 0x120B1 */ u8 unk120B1;
    /* 0x120B2 */ char pad120B2[0x2E];              /* maybe part of unk120B1[47]? */
} MessageContext;                                   /* size = 0x120E0 */

struct _mips2c_stack_func_8015E750 {};              /* size 0x0 */

struct _mips2c_stack_func_8015E7EC {
    /* 0x000 */ char pad0[0x40];
    /* 0x040 */ void *sp40;                         /* inferred */
    /* 0x044 */ char pad44[0x4];
    /* 0x048 */ s32 sp48;                           /* inferred */
    /* 0x04C */ char pad4C[0x4];
    /* 0x050 */ Font *sp50;                         /* inferred */
    /* 0x054 */ char pad54[0xC4];                   /* maybe part of sp50[50]? */
    /* 0x118 */ void *sp118;                        /* inferred */
    /* 0x11C */ char pad11C[0x4];
    /* 0x120 */ u16 sp120;                          /* inferred */
    /* 0x122 */ char pad122[0x4];                   /* maybe part of sp120[3]? */
    /* 0x126 */ u16 sp126;                          /* inferred */
    /* 0x128 */ char pad128[0x8];
};                                                  /* size = 0x130 */

struct _mips2c_stack_func_8015F8A8 {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ void *sp44;                          /* inferred */
    /* 0x48 */ char pad48[0x4];
    /* 0x4C */ void *sp4C;                          /* inferred */
    /* 0x50 */ char pad50[0x1C];                    /* maybe part of sp4C[8]? */
    /* 0x6C */ s16 sp6C;                            /* inferred */
    /* 0x6E */ s16 sp6E;                            /* inferred */
    /* 0x70 */ s16 sp70;                            /* inferred */
    /* 0x72 */ s16 sp72;                            /* inferred */
    /* 0x74 */ char pad74[0x2];
    /* 0x76 */ s16 sp76;                            /* inferred */
    /* 0x78 */ char pad78[0x10];
};                                                  /* size = 0x88 */

? func_8014995C(GlobalContext *, s32, void **, Font *); /* extern */
? func_8014AAD0(GlobalContext *);                   /* extern */
? func_8014C70C(GlobalContext *, u8, s16, s16);     /* extern */
void func_8015E750(void *arg0, s32 arg1);           /* static */
void func_8015F8A8(GlobalContext *arg0);            /* static */
static ? D_801D0890;                                /* unable to generate initializer */
SaveContext gSaveContext;

void func_8015E750(void *arg0, s32 arg1) {
    s32 temp_a1;
    u16 temp_v0;
    u16 temp_v0_3;
    void *temp_v0_2;
    void *temp_v1;
    u16 phi_v0;
    void *phi_v1;

    temp_v1 = arg0->unk16994;
    temp_v0 = temp_v1->unk0;
    phi_v0 = temp_v0;
    phi_v1 = temp_v1;
    if (temp_v0 != 0xFFFF) {
loop_1:
        temp_v0_2 = arg0 + 0x4A70;
        if ((arg1 & 0xFFFF) == phi_v0) {
            temp_a1 = phi_v1->unk4;
            *(temp_v0_2 + (temp_v0_2->unk11D88 * 0x3C00)) = phi_v1->unk2;
            temp_v0_2->unk11D80 = (s32) (temp_a1 - temp_v1->unk4);
            temp_v0_2->unk11D84 = (s32) (phi_v1->unkC - temp_a1);
            return;
        }
        temp_v0_3 = phi_v1->unk8;
        phi_v0 = temp_v0_3;
        phi_v1 += 8;
        if (temp_v0_3 == 0xFFFF) {
            /* Duplicate return node #4. Try simplifying control flow for better match */
            return;
        }
        goto loop_1;
    }
}

void func_8015E7EC(GlobalContext *globalCtx, void *puParm2) {
    u16 sp126;
    u16 sp120;
    void *sp118;
    Font *sp50;
    s32 sp48;
    void *sp40;
    Font *temp_a3;
    MessageContext *temp_s1;
    s32 temp_t0;
    s32 temp_t7_2;
    s32 temp_v0_17;
    s32 temp_v0_3;
    s32 temp_v0_6;
    u16 temp_v0_18;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_4;
    u8 temp_v0_5;
    void *temp_t6;
    void *temp_t6_2;
    void *temp_t6_3;
    void *temp_t6_4;
    void *temp_t7;
    void *temp_t7_10;
    void *temp_t7_11;
    void *temp_t7_12;
    void *temp_t7_13;
    void *temp_t7_14;
    void *temp_t7_15;
    void *temp_t7_3;
    void *temp_t7_4;
    void *temp_t7_5;
    void *temp_t7_6;
    void *temp_t7_7;
    void *temp_t7_8;
    void *temp_t7_9;
    void *temp_t8;
    void *temp_t8_10;
    void *temp_t8_11;
    void *temp_t8_12;
    void *temp_t8_13;
    void *temp_t8_14;
    void *temp_t8_2;
    void *temp_t8_3;
    void *temp_t8_4;
    void *temp_t8_5;
    void *temp_t8_6;
    void *temp_t8_7;
    void *temp_t8_8;
    void *temp_t8_9;
    void *temp_t9;
    void *temp_t9_2;
    void *temp_t9_3;
    void *temp_t9_4;
    void *temp_t9_5;
    void *temp_t9_6;
    void *temp_t9_7;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_15;
    void *temp_v0_16;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *phi_s0;
    void *phi_at;
    s32 phi_t0;
    s32 phi_a0;
    s32 phi_t1;
    s32 phi_t2;
    s32 phi_t3;
    s32 phi_t4;
    s32 phi_t5;
    s32 phi_t0_2;
    s32 phi_v1;
    s32 phi_t0_3;
    s32 phi_t5_2;
    void *phi_s3;
    s32 phi_a1;

    temp_s1 = &globalCtx->msgCtx;
    sp118 = *puParm2;
    globalCtx->msgCtx.unk11FF4 = globalCtx->msgCtx.unk11FF8;
    phi_s0 = temp_s1 + 0x10000;
    if (globalCtx->msgCtx.unk12090 == 0) {
        temp_s1->unk11FF6 = temp_s1->unk11FFA;
        phi_s0 = temp_s1 + 0x10000;
    } else {
        temp_s1->unk11FF6 = 0x30;
    }
    if (phi_s0->unk1F0A == 5) {
        temp_s1->unk1201C = 0;
        temp_s1->unk1201A = phi_s0->unk201C;
        phi_at = temp_s1 + 0x10000;
    } else {
        temp_s1->unk1201C = 0xFF;
        temp_s1->unk1201A = phi_s0->unk201C;
        phi_at = temp_s1 + 0x10000;
    }
    phi_at->unk2018 = phi_s0->unk201C;
    sp120 = 0;
    phi_t0 = 0;
    phi_t0_3 = 0;
    if ((s32) phi_s0->unk1FEE > 0) {
        phi_t1 = 0xB;
        phi_t2 = 0xC;
        phi_t3 = 0xD;
        phi_t4 = 4;
        phi_t5 = 0xE7000000;
        phi_t5_2 = 0xE7000000;
        phi_t1 = 0xB;
        phi_t2 = 0xC;
        phi_t3 = 0xD;
        phi_t4 = 4;
        phi_t1 = 0xB;
        phi_t1 = 0xB;
        phi_t1 = 0xB;
        phi_t1 = 0xB;
        phi_t2 = 0xC;
        phi_t2 = 0xC;
        phi_t2 = 0xC;
        phi_t2 = 0xC;
        phi_t3 = 0xD;
        phi_t3 = 0xD;
        phi_t3 = 0xD;
        phi_t3 = 0xD;
        phi_t4 = 4;
        phi_t4 = 4;
        phi_t4 = 4;
        phi_t4 = 4;
        phi_t5_2 = 0xE7000000;
        phi_t5_2 = 0xE7000000;
        phi_t5_2 = 0xE7000000;
        phi_t5_2 = 0xE7000000;
loop_8:
        temp_t7 = temp_s1 + phi_t0;
        temp_v0 = temp_t7->unk11F24;
        phi_t5 = phi_t5_2;
        phi_t0_2 = phi_t0;
        phi_t0_2 = phi_t0;
        phi_t0_2 = phi_t0;
        switch (temp_v0) {
        case 1:
            temp_s1->unk11FF4 = phi_s0->unk1FF8;
            temp_v0_2 = phi_s0->unk2022;
            phi_s3 = temp_s1 + 0x10000;
            if ((temp_v0_2 == 1) || (temp_v0_2 == 3)) {
                temp_s1->unk11FF4 = phi_s0->unk1FF4 + 0x20;
            }
            if ((phi_s0->unk2022 == 2) && (phi_s0->unk1FFA != phi_s0->unk1FF6)) {
                temp_s1->unk11FF4 = phi_s0->unk1FF4 + 0x20;
            }
            temp_s1->unk11FF6 = phi_s0->unk1FF6 + phi_s0->unk1FFC;
block_94:
            phi_v1 = (s32) phi_s3->unk1FEE;
block_95:
            temp_t0 = (phi_t0_2 + 1) & 0xFFFF;
            phi_t0 = temp_t0;
            phi_t0_3 = temp_t0;
            if (temp_t0 >= phi_v1) {
                goto block_96;
            }
            goto loop_8;
        case 5:
            phi_v1 = (s32) temp_s1->unk11FEE;
            goto block_95;
        case 32:
            temp_s1->unk11FF4 = phi_s0->unk1FF4 + 6;
            phi_v1 = (s32) temp_s1->unk11FEE;
            goto block_95;
        case 4:
            if (phi_s0->unk1F22 == 6) {
                if (phi_s0->unk2094 == 0) {
                    sp50 = &globalCtx->msgCtx.font;
                    play_sound(0U);
                    temp_s1->unk11F22 = 0x41;
                    Font_LoadMessageBoxEndIcon(sp50, 0U);
                } else {
                    temp_s1->unk11F22 = 4;
                    temp_s1->unk11FF2 = 0;
                    temp_s1->unk11FEC = phi_s0->unk1FEC + 1;
                }
            }
            *puParm2 = sp118;
            return;
        case 6:
            temp_v0_3 = phi_t0 + 1;
            temp_s1->unk11FF4 = phi_s0->unk1FF4 + (temp_s1 + (temp_v0_3 & 0xFFFF))->unk11F24;
            phi_t0_2 = temp_v0_3 & 0xFFFF;
            phi_v1 = (s32) temp_s1->unk11FEE;
            goto block_95;
        case 7:
            temp_s1->unk12020 = 0x20;
            if (phi_s0->unk1F22 == 6) {
                sp50 = &globalCtx->msgCtx.font;
                play_sound(0U);
                temp_s1->unk11F22 = 0x42;
                Font_LoadMessageBoxEndIcon(sp50, 0U);
            }
            *puParm2 = sp118;
            return;
        case 8:
            if ((phi_s0->unk1FEE == (phi_t0 + 1)) && ((temp_v0_4 = phi_s0->unk1F22, phi_a0 = phi_t0 & 0xFFFF, (temp_v0_4 == 6)) || (((s32) temp_v0_4 >= 0xA) && ((s32) temp_v0_4 < 0x27)))) {
loop_32:
                temp_v0_5 = (temp_s1 + phi_a0)->unk11F24;
                if (temp_v0_5 == 6) {
                    phi_a0 = (phi_a0 + 2) & 0xFFFF;
                    goto loop_32;
                }
                if ((temp_v0_5 != 9) && (temp_v0_5 != 0xA) && (phi_t1 != temp_v0_5) && (phi_t2 != temp_v0_5) && (phi_t3 != temp_v0_5) && (phi_t4 != temp_v0_5) && (temp_v0_5 != 2)) {
                    phi_a0 = (phi_a0 + 1) & 0xFFFF;
                    goto loop_32;
                }
                temp_t7_2 = phi_a0 - 1;
                temp_s1->unk11FEE = temp_t7_2 + 1;
                phi_t0_2 = temp_t7_2 & 0xFFFF;
            }
            /* fallthrough */
        case 9:
            phi_v1 = (s32) temp_s1->unk11FEE;
            goto block_95;
        case 13:
            if (phi_s0->unk1FEE == (phi_t0 + 1)) {
                if (phi_s0->unk1F22 == 6) {
                    temp_s1->unk11F22 = 7;
                    Font_LoadMessageBoxEndIcon(&globalCtx->msgCtx.font, 0U);
                }
                *puParm2 = sp118;
                return;
            }
            phi_v1 = (s32) temp_s1->unk11FEE;
            goto block_95;
        case 12:
            if (phi_s0->unk1F22 == 6) {
                temp_s1->unk12023 = (s8) (temp_s1 + ((phi_t0 + 1) & 0xFFFF))->unk11F24;
                temp_s1->unk11F22 = 8;
            }
            *puParm2 = sp118;
            return;
        case 17:
            if (phi_s0->unk1F22 == 6) {
                temp_s1->unk11F22 = 0x42;
                temp_v0_6 = phi_t0 + 1;
                temp_s1->unk12020 = 0x50;
                temp_s1->unk12023 = (temp_s1 + (temp_v0_6 & 0xFFFF))->unk11F24 << 8;
                temp_s1->unk12023 = phi_s0->unk2023 | (temp_s1 + ((temp_v0_6 + 1) & 0xFFFF))->unk11F24;
            }
            *puParm2 = sp118;
            return;
        case 18:
            phi_s3 = temp_s1 + 0x10000;
            phi_a1 = phi_t0;
            if ((phi_s0->unk1F22 == 6) && (phi_s0->unk2092 == 0)) {
                temp_t7_3 = temp_s1 + phi_t0;
                temp_s1->unk12092 = 1;
                sp48 = phi_t0;
                play_sound((temp_t7_3->unk11F26 | (temp_t7_3->unk11F25 << 8)) & 0xFFFF);
                phi_a1 = sp48;
            }
            phi_t0_2 = (phi_a1 + 2) & 0xFFFF;
            goto block_94;
        case 19:
            phi_v1 = (s32) temp_s1->unk11FEE;
            goto block_95;
        case 21:
            phi_s3 = temp_s1 + 0x10000;
            if (phi_s0->unk1F22 == 6) {
                sp126 = (u16) phi_t0;
                play_sound(0U);
            }
            temp_t7_4 = sp118;
            sp118 = temp_t7_4 + 8;
            temp_t7_4->unk4 = 0;
            temp_t7_4->unk0 = phi_t5;
            temp_t9 = sp118;
            sp118 = temp_t9 + 8;
            temp_t9->unk0 = 0xFC119623;
            temp_t9->unk4 = 0xFF2FFFFF;
            temp_v0_7 = sp118;
            sp118 = temp_v0_7 + 8;
            temp_v0_7->unk0 = 0xFA000000;
            temp_v0_7->unk4 = (s32) (phi_s0->unk201E & 0xFF);
            temp_v0_8 = sp118;
            temp_t7_5 = temp_v0_8 + 8;
            sp118 = temp_t7_5;
            temp_v0_8->unk0 = 0xFD900000;
            temp_v0_8->unk4 = (s32) (phi_s0->unk1EF8 + 0x1000);
            sp118 = temp_t7_5 + 8;
            temp_t7_5->unk4 = 0x7000000;
            temp_t7_5->unk0 = 0xF5900000;
            temp_t7_6 = sp118;
            sp118 = temp_t7_6 + 8;
            temp_t7_6->unk4 = 0;
            temp_t7_6->unk0 = 0xE6000000;
            temp_t6 = sp118;
            sp118 = temp_t6 + 8;
            temp_t6->unk0 = 0xF3000000;
            temp_t6->unk4 = 0x747F156;
            temp_t6_2 = sp118;
            sp118 = temp_t6_2 + 8;
            temp_t6_2->unk4 = 0;
            temp_t6_2->unk0 = phi_t5;
            temp_t8 = sp118;
            sp118 = temp_t8 + 8;
            temp_t8->unk4 = 0;
            temp_t8->unk0 = 0xF5800C00;
            temp_t7_7 = sp118;
            sp118 = temp_t7_7 + 8;
            temp_t7_7->unk0 = 0xF2000000;
            temp_t7_7->unk4 = 0x17C0BC;
            temp_v0_9 = sp118;
            temp_t8_2 = temp_v0_9 + 8;
            sp118 = temp_t8_2;
            temp_v0_9->unk0 = (s32) (((((phi_s0->unk1FF4 + 0x61) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((phi_s0->unk2012 + 0x31) * 4) & 0xFFF));
            temp_v0_9->unk4 = (s32) (((((phi_s0->unk1FF4 + 1) * 4) & 0xFFF) << 0xC) | (((phi_s0->unk2012 + 1) * 4) & 0xFFF));
            sp118 = temp_t8_2 + 8;
            temp_t8_2->unk0 = 0xE1000000;
            temp_t8_2->unk4 = 0;
            temp_t7_8 = sp118;
            sp118 = temp_t7_8 + 8;
            temp_t7_8->unk0 = 0xF1000000;
            temp_t7_8->unk4 = 0x4000400;
            temp_v0_10 = sp118;
            temp_t8_3 = temp_v0_10 + 8;
            sp118 = temp_t8_3;
            temp_v0_10->unk0 = 0xFD900000;
            temp_v0_10->unk4 = (s32) (phi_s0->unk1EF8 + 0x1900);
            sp118 = temp_t8_3 + 8;
            temp_t8_3->unk4 = 0x7000000;
            temp_t8_3->unk0 = 0xF5900000;
            temp_t8_4 = sp118;
            sp118 = temp_t8_4 + 8;
            temp_t8_4->unk4 = 0;
            temp_t8_4->unk0 = 0xE6000000;
            temp_t7_9 = sp118;
            sp118 = temp_t7_9 + 8;
            temp_t7_9->unk0 = 0xF3000000;
            temp_t7_9->unk4 = 0x747F156;
            temp_t7_10 = sp118;
            sp118 = temp_t7_10 + 8;
            temp_t7_10->unk4 = 0;
            temp_t7_10->unk0 = phi_t5;
            temp_t9_2 = sp118;
            sp118 = temp_t9_2 + 8;
            temp_t9_2->unk4 = 0;
            temp_t9_2->unk0 = 0xF5800C00;
            temp_t8_5 = sp118;
            sp118 = temp_t8_5 + 8;
            temp_t8_5->unk0 = 0xF2000000;
            temp_t8_5->unk4 = 0x17C0BC;
            temp_v0_11 = sp118;
            temp_t9_3 = temp_v0_11 + 8;
            sp118 = temp_t9_3;
            temp_v0_11->unk0 = (s32) (((((phi_s0->unk1FF4 + 0xC2) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((phi_s0->unk2012 + 0x31) * 4) & 0xFFF));
            temp_v0_11->unk4 = (s32) (((((phi_s0->unk1FF4 + 0x61) * 4) & 0xFFF) << 0xC) | (((phi_s0->unk2012 + 1) * 4) & 0xFFF));
            sp118 = temp_t9_3 + 8;
            temp_t9_3->unk0 = 0xE1000000;
            temp_t9_3->unk4 = 0;
            temp_t8_6 = sp118;
            sp118 = temp_t8_6 + 8;
            temp_t8_6->unk0 = 0xF1000000;
            temp_t8_6->unk4 = 0x4000400;
            temp_t8_7 = sp118;
            sp118 = temp_t8_7 + 8;
            temp_t8_7->unk4 = 0;
            temp_t8_7->unk0 = phi_t5;
            temp_v0_12 = sp118;
            sp118 = temp_v0_12 + 8;
            temp_v0_12->unk0 = 0xFA000000;
            temp_v0_12->unk4 = (s32) ((phi_s0->unk201E & 0xFF) | 0xFF3C0000);
            temp_v0_13 = sp118;
            temp_t9_4 = temp_v0_13 + 8;
            sp118 = temp_t9_4;
            temp_v0_13->unk0 = 0xFD900000;
            temp_v0_13->unk4 = (s32) (phi_s0->unk1EF8 + 0x1000);
            sp118 = temp_t9_4 + 8;
            temp_t9_4->unk4 = 0x7000000;
            temp_t9_4->unk0 = 0xF5900000;
            temp_t9_5 = sp118;
            sp118 = temp_t9_5 + 8;
            temp_t9_5->unk4 = 0;
            temp_t9_5->unk0 = 0xE6000000;
            temp_t8_8 = sp118;
            sp118 = temp_t8_8 + 8;
            temp_t8_8->unk0 = 0xF3000000;
            temp_t8_8->unk4 = 0x747F156;
            temp_t8_9 = sp118;
            sp118 = temp_t8_9 + 8;
            temp_t8_9->unk4 = 0;
            temp_t8_9->unk0 = phi_t5;
            temp_t6_3 = sp118;
            sp118 = temp_t6_3 + 8;
            temp_t6_3->unk4 = 0;
            temp_t6_3->unk0 = 0xF5800C00;
            temp_t9_6 = sp118;
            sp118 = temp_t9_6 + 8;
            temp_t9_6->unk0 = 0xF2000000;
            temp_t9_6->unk4 = 0x17C0BC;
            temp_v0_14 = sp118;
            sp118 = temp_v0_14 + 8;
            temp_v0_14->unk0 = (s32) (((((phi_s0->unk1FF4 + 0x60) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((phi_s0->unk2012 + 0x30) * 4) & 0xFFF));
            temp_v0_14->unk4 = (s32) ((((phi_s0->unk1FF4 * 4) & 0xFFF) << 0xC) | ((phi_s0->unk2012 * 4) & 0xFFF));
            temp_t8_10 = sp118;
            sp118 = temp_t8_10 + 8;
            temp_t8_10->unk0 = 0xE1000000;
            temp_t8_10->unk4 = 0;
            temp_t7_11 = sp118;
            sp118 = temp_t7_11 + 8;
            temp_t7_11->unk0 = 0xF1000000;
            temp_t7_11->unk4 = 0x4000400;
            temp_v0_15 = sp118;
            temp_t8_11 = temp_v0_15 + 8;
            sp118 = temp_t8_11;
            temp_v0_15->unk0 = 0xFD900000;
            temp_v0_15->unk4 = (s32) (phi_s0->unk1EF8 + 0x1900);
            sp118 = temp_t8_11 + 8;
            temp_t8_11->unk4 = 0x7000000;
            temp_t8_11->unk0 = 0xF5900000;
            temp_t8_12 = sp118;
            sp118 = temp_t8_12 + 8;
            temp_t8_12->unk4 = 0;
            temp_t8_12->unk0 = 0xE6000000;
            temp_t7_12 = sp118;
            sp118 = temp_t7_12 + 8;
            temp_t7_12->unk0 = 0xF3000000;
            temp_t7_12->unk4 = 0x747F156;
            temp_t7_13 = sp118;
            sp118 = temp_t7_13 + 8;
            temp_t7_13->unk4 = 0;
            temp_t7_13->unk0 = phi_t5;
            temp_t6_4 = sp118;
            sp118 = temp_t6_4 + 8;
            temp_t6_4->unk4 = 0;
            temp_t6_4->unk0 = 0xF5800C00;
            temp_t8_13 = sp118;
            sp118 = temp_t8_13 + 8;
            temp_t8_13->unk0 = 0xF2000000;
            temp_t8_13->unk4 = 0x17C0BC;
            temp_v0_16 = sp118;
            sp118 = temp_v0_16 + 8;
            temp_v0_16->unk0 = (s32) (((((phi_s0->unk1FF4 + 0xC0) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((phi_s0->unk2012 + 0x30) * 4) & 0xFFF));
            temp_v0_16->unk4 = (s32) (((((phi_s0->unk1FF4 + 0x60) * 4) & 0xFFF) << 0xC) | ((phi_s0->unk2012 * 4) & 0xFFF));
            temp_t8_14 = sp118;
            sp118 = temp_t8_14 + 8;
            temp_t8_14->unk0 = 0xE1000000;
            temp_t8_14->unk4 = 0;
            temp_t7_14 = sp118;
            sp118 = temp_t7_14 + 8;
            temp_t7_14->unk0 = 0xF1000000;
            temp_t7_14->unk4 = 0x4000400;
            temp_t7_15 = sp118;
            sp118 = temp_t7_15 + 8;
            temp_t7_15->unk4 = 0;
            temp_t7_15->unk0 = phi_t5;
            temp_t9_7 = sp118;
            sp118 = temp_t9_7 + 8;
            temp_t9_7->unk0 = 0xFCFF97FF;
            temp_t9_7->unk4 = 0xFF2DFEFF;
            temp_s1->unk11FF4 = phi_s0->unk1FF4 + 0x20;
            phi_t0_2 = phi_t0;
            phi_t5_2 = phi_t5;
            goto block_94;
        case 20:
            temp_v0_17 = phi_t0 + 1;
            temp_s1->unk12026 = (s16) (temp_s1 + (temp_v0_17 & 0xFFFF))->unk11F24;
            phi_t0_2 = temp_v0_17 & 0xFFFF;
            phi_v1 = (s32) temp_s1->unk11FEE;
            goto block_95;
        case 26:
            temp_s1->unk11FF2 = 1;
            phi_v1 = (s32) temp_s1->unk11FEE;
            goto block_95;
        case 27:
            temp_s1->unk12020 = 0x10;
            phi_s3 = temp_s1 + 0x10000;
            if (phi_s0->unk1F22 == 6) {
                temp_s1->unk11F06 = phi_s0->unk1F04;
                temp_s1->unk12023 = 4;
                temp_s1->choiceIndex = 0;
                sp126 = (u16) phi_t0;
                Font_LoadMessageBoxEndIcon(&globalCtx->msgCtx.font, 2U);
            }
            phi_t0_2 = phi_t0;
            goto block_94;
        case 28:
            temp_s1->unk12020 = 0x11;
            phi_s3 = temp_s1 + 0x10000;
            if (phi_s0->unk1F22 == 6) {
                temp_s1->unk11F06 = phi_s0->unk1F04;
                temp_s1->unk12023 = 4;
                temp_s1->choiceIndex = 0;
                sp126 = (u16) phi_t0;
                Font_LoadMessageBoxEndIcon(&globalCtx->msgCtx.font, 2U);
            }
            phi_t0_2 = phi_t0;
            goto block_94;
        case 2:
            if (phi_s0->unk1F22 == 6) {
                temp_s1->unk11F22 = 0x42;
                if (phi_s0->unk2020 == 0) {
                    sp50 = &globalCtx->msgCtx.font;
                    play_sound(0x482EU);
                    Font_LoadMessageBoxEndIcon(sp50, 1U);
                    if (globalCtx->csCtx.state == 0) {
                        func_8011552C(globalCtx, 3);
                    }
                }
            }
            *puParm2 = sp118;
            return;
        case 16:
            if (phi_s0->unk1FEE == (phi_t0 + 1)) {
                func_8014AAD0(globalCtx);
                *puParm2 = sp118;
                return;
            }
            phi_v1 = (s32) temp_s1->unk11FEE;
            goto block_95;
        case 14:
            if (phi_s0->unk1F22 == 6) {
                temp_s1->unk11F22 = 0x42;
                temp_s1->unk12020 = 0x50;
                temp_s1->unk12023 = (s8) (temp_s1 + ((phi_t0 + 1) & 0xFFFF))->unk11F24;
                Font_LoadMessageBoxEndIcon(&globalCtx->msgCtx.font, 1U);
                if (globalCtx->csCtx.state == 0) {
                    func_8011552C(globalCtx, 3);
                }
            }
            *puParm2 = sp118;
            return;
        case 10:
            if (phi_s0->unk1F22 == 6) {
                play_sound(0U);
                temp_s1->unk11F22 = 0x42;
                temp_s1->unk12020 = 0x30;
            }
            *puParm2 = sp118;
            return;
        case 11:
            if (phi_s0->unk1F22 == 6) {
                temp_s1->unk11F22 = 0x42;
                temp_s1->unk12020 = 0x40;
                Font_LoadMessageBoxEndIcon(&globalCtx->msgCtx.font, 0U);
                play_sound(0x482EU);
            }
            *puParm2 = sp118;
            return;
        default:
            temp_a3 = &globalCtx->msgCtx.font;
            phi_s3 = temp_s1 + 0x10000;
            if ((phi_s0->unk1F22 == 6) && (phi_s0->unk1FEE == (phi_t0 + 1)) && (phi_s0->unk2026 == phi_s0->unk2024)) {
                sp48 = (s32) temp_v0;
                sp40 = temp_a3 + 0x10000;
                sp50 = temp_a3;
                sp126 = (u16) phi_t0;
                play_sound(0U);
            }
            sp126 = (u16) phi_t0;
            sp48 = (s32) temp_t7->unk11F24;
            func_8014995C(globalCtx, &globalCtx->msgCtx.font + ((temp_a3 + 0x10000)->unk1D88 * 0x3C00) + sp120, &sp118, &globalCtx->msgCtx.font);
            sp120 += 0x80;
            temp_s1->unk11FF4 = phi_s0->unk1FF4 + (s32) (*(&D_801D0890 + ((s32) temp_t7->unk11F24 * 4)) * phi_s0->unk2098);
            phi_t0_2 = (s32) (u16) phi_t0;
            goto block_94;
        }
    } else {
block_96:
        temp_v0_18 = phi_s0->unk2024;
        if (temp_v0_18 == 0) {
            temp_s1->unk11FEE = phi_t0_3 + 1;
            temp_s1->unk12024 = phi_s0->unk2026;
        } else {
            temp_s1->unk12024 = temp_v0_18 - 1;
        }
        *puParm2 = sp118;
    }
}

void func_8015F8A8(GlobalContext *arg0) {
    s16 sp76;
    s16 sp72;
    s16 sp70;
    s16 sp6E;
    s16 sp6C;
    void *sp4C;
    void *sp44;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f8;
    s16 *temp_fp;
    s16 *temp_s0_3;
    s16 *temp_s0_4;
    s16 *temp_s0_5;
    s16 *temp_s0_6;
    s16 *temp_s0_7;
    s16 *temp_s0_9;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_a1_3;
    s16 temp_a1_4;
    s16 temp_a1_5;
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_a3_3;
    s16 temp_a3_4;
    s16 temp_a3_5;
    s16 temp_a3_6;
    s16 temp_a3_7;
    s16 temp_a3_8;
    s16 temp_s2;
    s16 temp_s2_2;
    s16 temp_s2_3;
    s16 temp_s2_4;
    s16 temp_s2_5;
    s16 temp_s2_6;
    s16 temp_s2_7;
    s16 temp_s3;
    s16 temp_s5;
    s16 temp_s5_2;
    s16 temp_s5_3;
    s16 temp_s5_4;
    s16 temp_v0;
    s16 temp_v0_10;
    s16 temp_v0_12;
    s16 temp_v0_13;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s16 temp_v1;
    s16 temp_v1_10;
    s16 temp_v1_11;
    s16 temp_v1_12;
    s16 temp_v1_13;
    s16 temp_v1_14;
    s16 temp_v1_15;
    s16 temp_v1_16;
    s16 temp_v1_17;
    s16 temp_v1_18;
    s16 temp_v1_19;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s16 temp_v1_7;
    s16 temp_v1_8;
    s16 temp_v1_9;
    s32 temp_f6;
    s32 temp_hi;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_s4_3;
    s32 temp_v0_11;
    u16 temp_t3;
    u8 *temp_s0_8;
    u8 temp_a2_2;
    u8 temp_s0;
    u8 temp_s0_2;
    u8 temp_v1_4;
    void *temp_s6;
    s16 phi_s5;
    s16 phi_s3;
    s32 phi_s3_2;
    s16 phi_s2;
    u8 phi_v0;
    s32 phi_s4;
    u8 phi_s0;
    s16 phi_s5_2;
    s16 phi_v0_2;
    s16 phi_a0;
    s32 phi_v0_3;
    s32 phi_v0_4;
    s16 phi_v1;
    s32 phi_v0_5;
    s32 phi_v0_6;
    s16 phi_a1;
    s16 phi_s2_2;
    s32 phi_s3_3;
    s32 phi_s4_2;
    s16 phi_s5_3;
    s16 phi_v1_2;
    s16 phi_a0_2;
    s16 phi_s2_3;
    s32 phi_s4_3;
    s16 phi_s5_4;
    s32 phi_v0_7;
    s16 phi_a2;
    s16 phi_v0_8;
    s16 phi_a0_3;
    s32 phi_v0_9;
    s32 phi_v0_10;
    s16 phi_v1_3;
    s32 phi_v0_11;
    s32 phi_v0_12;
    s16 phi_a1_2;
    s16 phi_s2_4;
    s32 phi_s3_4;
    s32 phi_s4_4;
    s16 phi_s5_5;
    s16 phi_v1_4;
    s16 phi_v0_13;
    s16 phi_a0_4;
    s16 phi_v1_5;
    s32 phi_v0_14;
    s32 phi_v0_15;
    s16 phi_a1_3;
    s16 phi_s2_5;
    s32 phi_s4_5;
    s16 phi_s5_6;
    f32 phi_f8;
    s16 phi_v1_6;
    s16 phi_a0_5;
    s16 phi_v0_16;
    s16 phi_a1_4;
    s16 phi_s2_6;
    s32 phi_s4_6;
    s16 phi_s5_7;
    s32 phi_s4_7;
    s32 phi_v0_17;
    s16 phi_v1_7;
    s32 phi_v0_18;
    s16 phi_a0_6;
    s16 phi_v1_8;
    s32 phi_v0_19;
    s32 phi_v0_20;
    s16 phi_a1_5;
    s16 phi_s2_7;
    s32 phi_s4_8;
    s16 phi_s5_8;
    s16 phi_s5_9;
    s16 phi_s5_10;
    s16 phi_s5_11;
    u8 phi_s0_2;
    s32 phi_s4_9;
    s32 phi_s4_10;
    s16 phi_s5_12;
    s32 phi_s4_11;
    s16 phi_s5_13;
    s32 phi_a2_2;
    s32 phi_s4_12;
    s16 phi_s5_14;
    s16 phi_a0_7;
    s32 phi_s4_13;
    s16 phi_s5_15;
    s32 phi_s4_14;
    s16 phi_s5_16;
    s16 phi_a0_8;
    s32 phi_s4_15;
    s16 phi_s5_17;
    s16 phi_s5_18;

    sp76 = 0;
    arg0->msgCtx.unk11F14 = 0xFFFF;
    temp_s6 = arg0 + 0x4908;
    sp4C = arg0 + 0x4A70;
    sp44 = temp_s6 + 0x10000;
    temp_fp = &sp6C;
    phi_s5 = 0;
    phi_s4_7 = 0;
loop_1:
    temp_s0 = (sp4C + sp44->unk1FEC)->unk11880;
    (temp_s6 + phi_s5)->unk11F24 = temp_s0;
    phi_s4 = phi_s4_7;
    phi_s5_2 = phi_s5;
    phi_s4_2 = phi_s4_7;
    phi_s5_3 = phi_s5;
    phi_s4_3 = phi_s4_7;
    phi_s5_4 = phi_s5;
    phi_s4_4 = phi_s4_7;
    phi_s5_5 = phi_s5;
    phi_s4_5 = phi_s4_7;
    phi_s5_6 = phi_s5;
    phi_s4_6 = phi_s4_7;
    phi_s5_7 = phi_s5;
    phi_s4_8 = phi_s4_7;
    phi_s5_8 = phi_s5;
    phi_s5_9 = phi_s5;
    phi_s5_11 = phi_s5;
    phi_s5_18 = phi_s5;
    if ((temp_s0 != 4) && (temp_s0 != 7) && (temp_s0 != 0xC)) {
        phi_s3 = 8;
        if (temp_s0 != 0xB) {
            phi_s2 = 0;
            phi_s2_2 = 0;
            phi_s2_3 = 0;
            phi_s2_4 = 0;
            phi_s2_5 = 0;
            phi_s2_6 = 0;
            phi_s2_7 = 0;
            if (temp_s0 != 2) {
                if (temp_s0 == 0xF) {
loop_20:
                    phi_s3_2 = (s32) phi_s3;
                    if (*(&gSaveContext + 0x2B + phi_s3) == 0x3E) {
                        temp_s3 = phi_s3 - 1;
                        phi_s3 = temp_s3;
                        phi_s3_2 = (s32) temp_s3;
                        if ((s32) temp_s3 > 0) {
                            goto loop_20;
                        }
                    }
                    if (phi_s3_2 > 0) {
                        do {
                            temp_s0_2 = (u8) gSaveContext.playerName[phi_s2];
                            phi_v0 = temp_s0_2;
                            phi_s0 = temp_s0_2;
                            phi_s4_9 = phi_s4;
                            if (temp_s0_2 == 0x3E) {
                                phi_v0 = 0x20U;
                                phi_s0 = 0x20U;
                            } else if (temp_s0_2 == 0x40) {
                                phi_v0 = 0x2EU;
                                phi_s0 = 0x2EU;
                            } else if (temp_s0_2 == 0x3F) {
                                phi_v0 = 0x2DU;
                                phi_s0 = 0x2DU;
                            } else {
                                if ((s32) temp_s0_2 < 0xA) {
                                    phi_s0_2 = (temp_s0_2 + 0x30) & 0xFFFF;
                                    goto block_35;
                                }
                                if ((s32) temp_s0_2 < 0x24) {
                                    phi_s0_2 = (temp_s0_2 + 0x37) & 0xFFFF;
                                    goto block_35;
                                }
                                if ((s32) temp_s0_2 < 0x3E) {
                                    phi_s0_2 = (temp_s0_2 + 0x3D) & 0xFFFF;
block_35:
                                    phi_v0 = phi_s0_2;
                                    phi_s0 = phi_s0_2;
                                }
                            }
                            if (phi_v0 != 0x20) {
                                Font_LoadCharNES(arg0, (phi_v0 - 0x20) & 0xFF, phi_s4);
                                phi_s4_9 = phi_s4 + 0x80;
                            }
                            temp_s2 = phi_s2 + 1;
                            temp_s5 = phi_s5_2 + 1;
                            (temp_s6 + phi_s5_2)->unk11F24 = phi_s0;
                            phi_s2 = temp_s2;
                            phi_s4 = phi_s4_9;
                            phi_s5_2 = temp_s5;
                            phi_s5_18 = temp_s5;
                            phi_s4_7 = phi_s4_9;
                        } while ((s32) temp_s2 < phi_s3_2);
                    }
                    phi_s5_11 = (s16) (phi_s5_18 - 1);
                } else {
                    phi_a1 = 0;
                    phi_a1_2 = 0;
                    phi_a1_3 = 0;
                    phi_a1_4 = 0;
                    phi_a1_5 = 0;
                    if ((temp_s0 == 0x16) || (temp_s0 == 0x17)) {
                        phi_v1_7 = 0;
                        phi_a0_8 = 0;
                        if (temp_s0 == 0x17) {
                            phi_v0_17 = *(&gSaveContext + 0x3E04) << 0x10;
                        } else {
                            phi_v0_17 = *(&gSaveContext + 0x3E14) << 0x10;
                        }
                        temp_v0_11 = phi_v0_17 >> 0x10;
                        sp6E = 0;
                        sp6C = 0;
                        phi_v0_18 = temp_v0_11;
                        phi_v0_19 = temp_v0_11;
                        if (temp_v0_11 >= 0x3C) {
                            do {
                                temp_v1_16 = phi_v1_7 + 1;
                                temp_v0_12 = phi_v0_18 - 0x3C;
                                phi_a0_6 = phi_a0_8;
                                phi_v1_8 = temp_v1_16;
                                if ((s32) temp_v1_16 >= 0xA) {
                                    phi_a0_6 = (s16) (phi_a0_8 + 1);
                                    phi_v1_8 = (s16) (temp_v1_16 - 0xA);
                                }
                                phi_v1_7 = phi_v1_8;
                                phi_v0_18 = (s32) temp_v0_12;
                                phi_v0_19 = (s32) temp_v0_12;
                                phi_a0_8 = phi_a0_6;
                            } while ((s32) temp_v0_12 >= 0x3C);
                            sp6C = phi_a0_6;
                            sp6E = phi_v1_8;
                        }
                        sp72 = (s16) phi_v0_19;
                        sp70 = 0;
                        phi_v0_20 = phi_v0_19;
                        if (phi_v0_19 >= 0xA) {
                            do {
                                temp_v0_13 = phi_v0_20 - 0xA;
                                temp_a1_5 = phi_a1_5 + 1;
                                phi_v0_20 = (s32) temp_v0_13;
                                phi_a1_5 = temp_a1_5;
                            } while ((s32) temp_v0_13 >= 0xA);
                            sp70 = temp_a1_5;
                            sp72 = temp_v0_13;
                        }
                        do {
                            temp_s0_9 = &temp_fp[phi_s2_7];
                            Font_LoadCharNES(arg0, (*temp_s0_9 + 0x10) & 0xFF, phi_s4_8);
                            temp_s5_4 = phi_s5_8 + 1;
                            temp_s4_3 = phi_s4_8 + 0x80;
                            (temp_s6 + phi_s5_8)->unk11F24 = (s8) (*temp_s0_9 + 0x30);
                            phi_s4_15 = temp_s4_3;
                            phi_s5_17 = temp_s5_4;
                            if (phi_s2_7 == 1) {
                                Font_LoadCharNES(arg0, 2U, temp_s4_3);
                                (temp_s6 + temp_s5_4)->unk11F24 = 0x22;
                                phi_s4_15 = temp_s4_3 + 0x80;
                                phi_s5_17 = (s16) (temp_s5_4 + 1);
                            } else if (phi_s2_7 == 3) {
                                Font_LoadCharNES(arg0, 2U, temp_s4_3);
                                (temp_s6 + temp_s5_4)->unk11F24 = 0x22;
                                phi_s4_15 = temp_s4_3 + 0x80;
                            }
                            temp_s2_7 = phi_s2_7 + 1;
                            phi_s2_7 = temp_s2_7;
                            phi_s4_8 = phi_s4_15;
                            phi_s5_8 = phi_s5_17;
                            phi_s5_11 = phi_s5_17;
                            phi_s4_7 = phi_s4_15;
                        } while ((s32) temp_s2_7 < 4);
                    } else if (temp_s0 == 0x18) {
                        temp_v0 = (s16) gSaveContext.minigameScore;
                        sp6C = 0;
                        phi_v0_2 = temp_v0;
                        phi_a0 = 0;
                        phi_v0_3 = (s32) temp_v0;
                        phi_v1 = 0;
                        phi_s3_3 = 0;
                        if ((s32) temp_v0 >= 0x3E8) {
                            do {
                                temp_v0_2 = phi_v0_2 - 0x3E8;
                                temp_a0 = phi_a0 + 1;
                                phi_v0_2 = temp_v0_2;
                                phi_a0 = temp_a0;
                                phi_v0_3 = (s32) temp_v0_2;
                            } while ((s32) temp_v0_2 >= 0x3E8);
                            sp6C = temp_a0;
                        }
                        sp6E = 0;
                        phi_v0_4 = phi_v0_3;
                        phi_v0_5 = phi_v0_3;
                        if (phi_v0_3 >= 0x64) {
                            do {
                                temp_v0_3 = phi_v0_4 - 0x64;
                                temp_v1 = phi_v1 + 1;
                                phi_v0_4 = (s32) temp_v0_3;
                                phi_v1 = temp_v1;
                                phi_v0_5 = (s32) temp_v0_3;
                            } while ((s32) temp_v0_3 >= 0x64);
                            sp6E = temp_v1;
                        }
                        sp72 = (s16) phi_v0_5;
                        sp70 = 0;
                        phi_v0_6 = phi_v0_5;
                        if (phi_v0_5 >= 0xA) {
                            do {
                                temp_v0_4 = phi_v0_6 - 0xA;
                                temp_a1 = phi_a1 + 1;
                                phi_v0_6 = (s32) temp_v0_4;
                                phi_a1 = temp_a1;
                            } while ((s32) temp_v0_4 >= 0xA);
                            sp70 = temp_a1;
                            sp72 = temp_v0_4;
                        }
                        do {
                            phi_s4_10 = phi_s4_2;
                            phi_s5_12 = phi_s5_3;
                            if ((phi_s2_2 == 3) || (temp_fp[phi_s2_2] != 0)) {
                                phi_s3_3 = 1;
                            }
                            if (phi_s3_3 != 0) {
                                temp_s0_3 = &temp_fp[phi_s2_2];
                                Font_LoadCharNES(arg0, (*temp_s0_3 + 0x10) & 0xFF, phi_s4_2);
                                (temp_s6 + phi_s5_3)->unk11F24 = (s8) (*temp_s0_3 + 0x30);
                                phi_s4_10 = phi_s4_2 + 0x80;
                                phi_s5_12 = (s16) (phi_s5_3 + 1);
                            }
                            temp_s2_2 = phi_s2_2 + 1;
                            phi_s2_2 = temp_s2_2;
                            phi_s4_2 = phi_s4_10;
                            phi_s5_3 = phi_s5_12;
                            phi_s4_7 = phi_s4_10;
                        } while ((s32) temp_s2_2 < 4);
                        phi_s5_11 = (s16) (phi_s5_12 - 1);
                    } else if (temp_s0 != 0x19) {
                        phi_a0_2 = 0;
                        phi_a0_3 = 0;
                        phi_a0_5 = 0;
                        phi_a0_7 = 0;
                        if (temp_s0 == 0x1D) {
                            temp_v1_2 = (s16) gSaveContext.minigameScore;
                            sp6C = 0;
                            sp6E = temp_v1_2;
                            phi_v1_2 = temp_v1_2;
                            if ((s32) temp_v1_2 >= 0xA) {
                                do {
                                    temp_v1_3 = phi_v1_2 - 0xA;
                                    temp_a0_2 = phi_a0_2 + 1;
                                    phi_v1_2 = temp_v1_3;
                                    phi_a0_2 = temp_a0_2;
                                } while ((s32) temp_v1_3 >= 0xA);
                                sp6C = temp_a0_2;
                                sp6E = temp_v1_3;
                            }
                            do {
                                phi_s4_11 = phi_s4_3;
                                phi_s5_13 = phi_s5_4;
                                if ((phi_s2_3 == 1) || (temp_fp[phi_s2_3] != 0)) {
                                    temp_s0_4 = &temp_fp[phi_s2_3];
                                    Font_LoadCharNES(arg0, (*temp_s0_4 + 0x10) & 0xFF, phi_s4_3);
                                    (temp_s6 + phi_s5_4)->unk11F24 = (s8) (*temp_s0_4 + 0x30);
                                    phi_s4_11 = phi_s4_3 + 0x80;
                                    phi_s5_13 = (s16) (phi_s5_4 + 1);
                                }
                                temp_s2_3 = phi_s2_3 + 1;
                                phi_s2_3 = temp_s2_3;
                                phi_s4_3 = phi_s4_11;
                                phi_s5_4 = phi_s5_13;
                                phi_s4_7 = phi_s4_11;
                            } while ((s32) temp_s2_3 < 2);
                            phi_s5_11 = (s16) (phi_s5_13 - 1);
                        } else if (temp_s0 == 0x1E) {
                            temp_a3 = (sp44->unk1FEC + 1) & 0xFFFF;
                            temp_s6->unk11FEC = temp_a3;
                            temp_v1_4 = (sp4C + sp44->unk1FEC)->unk11880;
                            temp_a2 = *(&gSaveContext + 0xEDE + ((sp4C + temp_a3)->unk11880 * 4));
                            phi_a2 = temp_a2;
                            if (temp_v1_4 == 2) {
                                phi_v0_7 = 0x11;
                                if (gSaveContext.linkAge != 0) {
                                    phi_v0_7 = 5;
                                }
                                if (phi_v0_7 == 5) {
                                    phi_a2_2 = (temp_a2 & 0x7F) << 0x10;
                                } else {
                                    phi_a2_2 = ((s16) ((u32) (gSaveContext.roomInf[127][temp_v1_4] & 0xFF000000) >> 0x18) & 0x7F) << 0x10;
                                }
                                temp_f0 = (f32) (phi_a2_2 >> 0x10);
                                phi_a2 = (s16) (s32) ((temp_f0 * temp_f0 * 0.0036f) + 0.5f);
                            }
                            switch (temp_v1_4) {
                            case 0:
                            case 1:
                            case 2:
                                sp6C = 0;
                                phi_v0_8 = phi_a2;
                                phi_v0_9 = (s32) phi_a2;
                                phi_v1_3 = 0;
                                phi_s3_4 = 0;
                                if ((s32) phi_a2 >= 0x3E8) {
                                    do {
                                        temp_v0_5 = phi_v0_8 - 0x3E8;
                                        temp_a0_3 = phi_a0_3 + 1;
                                        phi_v0_8 = temp_v0_5;
                                        phi_a0_3 = temp_a0_3;
                                        phi_v0_9 = (s32) temp_v0_5;
                                    } while ((s32) temp_v0_5 >= 0x3E8);
                                    sp6C = temp_a0_3;
                                }
                                sp6E = 0;
                                phi_v0_10 = phi_v0_9;
                                phi_v0_11 = phi_v0_9;
                                if (phi_v0_9 >= 0x64) {
                                    do {
                                        temp_v0_6 = phi_v0_10 - 0x64;
                                        temp_v1_5 = phi_v1_3 + 1;
                                        phi_v0_10 = (s32) temp_v0_6;
                                        phi_v1_3 = temp_v1_5;
                                        phi_v0_11 = (s32) temp_v0_6;
                                    } while ((s32) temp_v0_6 >= 0x64);
                                    sp6E = temp_v1_5;
                                }
                                sp72 = (s16) phi_v0_11;
                                sp70 = 0;
                                phi_v0_12 = phi_v0_11;
                                if (phi_v0_11 >= 0xA) {
                                    do {
                                        temp_v0_7 = phi_v0_12 - 0xA;
                                        temp_a1_2 = phi_a1_2 + 1;
                                        phi_v0_12 = (s32) temp_v0_7;
                                        phi_a1_2 = temp_a1_2;
                                    } while ((s32) temp_v0_7 >= 0xA);
                                    sp70 = temp_a1_2;
                                    sp72 = temp_v0_7;
                                }
                                do {
                                    phi_s4_12 = phi_s4_4;
                                    phi_s5_14 = phi_s5_5;
                                    if ((phi_s2_4 == 3) || (temp_fp[phi_s2_4] != 0)) {
                                        phi_s3_4 = 1;
                                    }
                                    if (phi_s3_4 != 0) {
                                        temp_s0_5 = &temp_fp[phi_s2_4];
                                        Font_LoadCharNES(arg0, (*temp_s0_5 + 0x10) & 0xFF, phi_s4_4);
                                        (temp_s6 + phi_s5_5)->unk11F24 = (s8) (*temp_s0_5 + 0x30);
                                        phi_s4_12 = phi_s4_4 + 0x80;
                                        phi_s5_14 = (s16) (phi_s5_5 + 1);
                                    }
                                    temp_s2_4 = phi_s2_4 + 1;
                                    phi_s2_4 = temp_s2_4;
                                    phi_s4_4 = phi_s4_12;
                                    phi_s5_5 = phi_s5_14;
                                    phi_s4_7 = phi_s4_12;
                                } while ((s32) temp_s2_4 < 4);
                                phi_s5_11 = (s16) (phi_s5_14 - 1);
                                break;
                            case 3:
                            case 4:
                            case 6:
                                sp6E = 0;
                                sp6C = 0;
                                phi_v1_4 = 0;
                                phi_v0_13 = phi_a2;
                                phi_v0_14 = (s32) phi_a2;
                                if ((s32) phi_a2 >= 0x3C) {
                                    do {
                                        temp_v1_6 = phi_v1_4 + 1;
                                        temp_v0_8 = phi_v0_13 - 0x3C;
                                        phi_a0_4 = phi_a0_7;
                                        phi_v1_5 = temp_v1_6;
                                        if ((s32) temp_v1_6 >= 0xA) {
                                            phi_a0_4 = (s16) (phi_a0_7 + 1);
                                            phi_v1_5 = (s16) (temp_v1_6 - 0xA);
                                        }
                                        phi_v1_4 = phi_v1_5;
                                        phi_v0_13 = temp_v0_8;
                                        phi_v0_14 = (s32) temp_v0_8;
                                        phi_a0_7 = phi_a0_4;
                                    } while ((s32) temp_v0_8 >= 0x3C);
                                    sp6C = phi_a0_4;
                                    sp6E = phi_v1_5;
                                }
                                sp72 = (s16) phi_v0_14;
                                sp70 = 0;
                                phi_v0_15 = phi_v0_14;
                                if (phi_v0_14 >= 0xA) {
                                    do {
                                        temp_v0_9 = phi_v0_15 - 0xA;
                                        temp_a1_3 = phi_a1_3 + 1;
                                        phi_v0_15 = (s32) temp_v0_9;
                                        phi_a1_3 = temp_a1_3;
                                    } while ((s32) temp_v0_9 >= 0xA);
                                    sp70 = temp_a1_3;
                                    sp72 = temp_v0_9;
                                }
                                do {
                                    temp_s0_6 = &temp_fp[phi_s2_5];
                                    Font_LoadCharNES(arg0, (*temp_s0_6 + 0x10) & 0xFF, phi_s4_5);
                                    temp_s5_2 = phi_s5_6 + 1;
                                    temp_s4 = phi_s4_5 + 0x80;
                                    (temp_s6 + phi_s5_6)->unk11F24 = (s8) (*temp_s0_6 + 0x30);
                                    phi_s4_13 = temp_s4;
                                    phi_s5_15 = temp_s5_2;
                                    if (phi_s2_5 == 1) {
                                        Font_LoadCharNES(arg0, 2U, temp_s4);
                                        (temp_s6 + temp_s5_2)->unk11F24 = 0x22;
                                        phi_s4_13 = temp_s4 + 0x80;
                                        phi_s5_15 = (s16) (temp_s5_2 + 1);
                                    } else if (phi_s2_5 == 3) {
                                        Font_LoadCharNES(arg0, 2U, temp_s4);
                                        (temp_s6 + temp_s5_2)->unk11F24 = 0x22;
                                        phi_s4_13 = temp_s4 + 0x80;
                                    }
                                    temp_s2_5 = phi_s2_5 + 1;
                                    phi_s2_5 = temp_s2_5;
                                    phi_s4_5 = phi_s4_13;
                                    phi_s5_6 = phi_s5_15;
                                    phi_s5_11 = phi_s5_15;
                                    phi_s4_7 = phi_s4_13;
                                } while ((s32) temp_s2_5 < 4);
                                break;
                            }
                        } else if (temp_s0 == 0x1F) {
                            temp_t3 = gSaveContext.time;
                            temp_f8 = (f32) temp_t3;
                            phi_f8 = temp_f8;
                            if ((s32) temp_t3 < 0) {
                                phi_f8 = temp_f8 + 4294967296.0f;
                            }
                            temp_f0_2 = phi_f8 * 0.021972656f;
                            sp6C = 0;
                            temp_f6 = (s32) (temp_f0_2 / 60.0f);
                            sp6E = (s16) temp_f6;
                            phi_v1_6 = (s16) temp_f6;
                            if ((s32) (s16) temp_f6 >= 0xA) {
                                do {
                                    temp_v1_7 = phi_v1_6 - 0xA;
                                    temp_a0_4 = phi_a0_5 + 1;
                                    phi_v1_6 = temp_v1_7;
                                    phi_a0_5 = temp_a0_4;
                                } while ((s32) temp_v1_7 >= 0xA);
                                sp6C = temp_a0_4;
                                sp6E = temp_v1_7;
                            }
                            temp_hi = (s32) temp_f0_2 % 0x3C;
                            sp72 = (s16) temp_hi;
                            sp70 = 0;
                            phi_v0_16 = (s16) temp_hi;
                            if ((s32) (s16) temp_hi >= 0xA) {
                                do {
                                    temp_v0_10 = phi_v0_16 - 0xA;
                                    temp_a1_4 = phi_a1_4 + 1;
                                    phi_v0_16 = temp_v0_10;
                                    phi_a1_4 = temp_a1_4;
                                } while ((s32) temp_v0_10 >= 0xA);
                                sp70 = temp_a1_4;
                                sp72 = temp_v0_10;
                            }
                            do {
                                temp_s0_7 = &temp_fp[phi_s2_6];
                                Font_LoadCharNES(arg0, (*temp_s0_7 + 0x10) & 0xFF, phi_s4_6);
                                temp_s5_3 = phi_s5_7 + 1;
                                temp_s4_2 = phi_s4_6 + 0x80;
                                (temp_s6 + phi_s5_7)->unk11F24 = (s8) (*temp_s0_7 + 0x30);
                                phi_s4_14 = temp_s4_2;
                                phi_s5_16 = temp_s5_3;
                                if (phi_s2_6 == 1) {
                                    Font_LoadCharNES(arg0, 0x1AU, temp_s4_2);
                                    (temp_s6 + temp_s5_3)->unk11F24 = 0x3A;
                                    phi_s4_14 = temp_s4_2 + 0x80;
                                    phi_s5_16 = (s16) (temp_s5_3 + 1);
                                }
                                temp_s2_6 = phi_s2_6 + 1;
                                phi_s2_6 = temp_s2_6;
                                phi_s4_6 = phi_s4_14;
                                phi_s5_7 = phi_s5_16;
                                phi_s4_7 = phi_s4_14;
                            } while ((s32) temp_s2_6 < 4);
                            phi_s5_11 = (s16) (phi_s5_16 - 1);
                        } else if (temp_s0 == 0x13) {
                            temp_v1_8 = phi_s5 + 1;
                            (temp_s6 + temp_v1_8)->unk11F24 = (u8) (sp4C + sp44->unk1FEC)->unk11881;
                            func_8014C70C(arg0, (sp4C + sp44->unk1FEC)->unk11881, (s16) (sp44->unk206A + 0xA), temp_v1_8);
                            phi_s5_11 = temp_v1_8;
                        } else if (temp_s0 == 0x15) {
                            temp_s0_8 = _message_texture_staticSegmentRomStart + 0x900;
                            sp76 = 2;
                            DmaMgr_SendRequest0(sp44->unk1EF8 + 0x1000, (u32) temp_s0_8, 0x900U);
                            DmaMgr_SendRequest0(sp44->unk1EF8 + 0x1900, (u32) temp_s0_8, 0x900U);
                            temp_s6->unk11FEC = (s16) (sp44->unk1FEC + 3);
                            temp_s6->unk12012 = (s16) (sp44->unk206A + 8);
                        } else {
                            temp_v1_9 = phi_s5 + 1;
                            if (temp_s0 == 5) {
                                temp_a3_2 = (sp44->unk1FEC + 1) & 0xFFFF;
                                temp_s6->unk11FEC = temp_a3_2;
                                (temp_s6 + temp_v1_9)->unk11F24 = (u8) (sp4C + temp_a3_2)->unk11880;
                                phi_s5_11 = temp_v1_9;
                            } else if (temp_s0 == 1) {
                                sp76 += 1;
                            } else if ((temp_s0 != 8) && (temp_s0 != 9) && (temp_s0 != 0xD) && (temp_s0 != 0x10) && (temp_s0 != 0xA) && (temp_s0 != 0x1A)) {
                                if (temp_s0 == 0xE) {
                                    temp_s6->unk1209C = 1;
                                    temp_v1_10 = phi_s5 + 1;
                                    temp_a3_3 = (sp44->unk1FEC + 1) & 0xFFFF;
                                    temp_s6->unk11FEC = temp_a3_3;
                                    (temp_s6 + temp_v1_10)->unk11F24 = (u8) (sp4C + temp_a3_3)->unk11880;
                                    phi_s5_11 = temp_v1_10;
                                } else if (temp_s0 == 0x11) {
                                    temp_s6->unk1209C = 1;
                                    temp_a3_4 = (sp44->unk1FEC + 1) & 0xFFFF;
                                    temp_v1_11 = phi_s5 + 1;
                                    temp_s6->unk11FEC = temp_a3_4;
                                    (temp_s6 + temp_v1_11)->unk11F24 = (u8) (sp4C + temp_a3_4)->unk11880;
                                    temp_a3_5 = (sp44->unk1FEC + 1) & 0xFFFF;
                                    temp_v1_12 = temp_v1_11 + 1;
                                    temp_s6->unk11FEC = temp_a3_5;
                                    (temp_s6 + temp_v1_12)->unk11F24 = (u8) (sp4C + temp_a3_5)->unk11880;
                                    phi_s5_11 = temp_v1_12;
                                } else {
                                    temp_v1_13 = phi_s5 + 1;
                                    if ((temp_s0 == 6) || (temp_s0 == 0x14)) {
                                        temp_a3_8 = (sp44->unk1FEC + 1) & 0xFFFF;
                                        temp_s6->unk11FEC = temp_a3_8;
                                        (temp_s6 + temp_v1_13)->unk11F24 = (u8) (sp4C + temp_a3_8)->unk11880;
                                        phi_s5_11 = temp_v1_13;
                                    } else {
                                        temp_v1_14 = phi_s5 + 1;
                                        if (temp_s0 == 0x12) {
                                            temp_a3_6 = (sp44->unk1FEC + 1) & 0xFFFF;
                                            temp_s6->unk11FEC = temp_a3_6;
                                            (temp_s6 + temp_v1_14)->unk11F24 = (u8) (sp4C + temp_a3_6)->unk11880;
                                            temp_v1_15 = temp_v1_14 + 1;
                                            temp_a3_7 = (sp44->unk1FEC + 1) & 0xFFFF;
                                            temp_s6->unk11FEC = temp_a3_7;
                                            (temp_s6 + temp_v1_15)->unk11F24 = (u8) (sp4C + temp_a3_7)->unk11880;
                                            phi_s5_11 = temp_v1_15;
                                        } else if (temp_s0 == 0x1B) {
                                            temp_s6->unk12022 = 2;
                                        } else if (temp_s0 == 0x1C) {
                                            temp_s6->unk12022 = 3;
                                        } else if (temp_s0 != 0x20) {
                                            Font_LoadCharNES(arg0, temp_s0 & 0xFF, phi_s4_7);
                                            phi_s4_7 += 0x80;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                temp_s6->unk11FEC = (s16) (sp44->unk1FEC + 1);
                phi_s5 = (s16) (phi_s5_11 + 1);
                goto loop_1;
            }
        }
    }
    temp_s6->unk11F22 = 6;
    temp_s6->unk11FEE = 1;
    temp_s6->unk11FFA = (s16) (sp44->unk206A + 8);
    if (sp44->unk1F0A != 4) {
        if (sp76 == 0) {
            temp_s6->unk11FFA = (s16) (sp44->unk206A + 0x1A);
        } else if (sp76 == 1) {
            temp_s6->unk11FFA = (s16) (sp44->unk206A + 0x14);
        } else if (sp76 == 2) {
            temp_s6->unk11FFA = (s16) (sp44->unk206A + 0x10);
        }
    }
    if (temp_s0 == 7) {
        temp_v1_17 = phi_s5 + 1;
        temp_a2_2 = (sp4C + sp44->unk1FEC)->unk11881;
        (temp_s6 + temp_v1_17)->unk11F24 = temp_a2_2;
        temp_v1_18 = temp_v1_17 + 1;
        (temp_s6 + temp_v1_18)->unk11F24 = (u8) (sp4C + sp44->unk1FEC)->unk11882;
        temp_s6->unk11F14 = (s16) ((temp_s6 + temp_v1_18)->unk11F24 | ((s32) (temp_a2_2 << 0x18) >> 0x10));
        phi_s5_9 = temp_v1_18;
    }
    phi_s5_10 = phi_s5_9;
    if (temp_s0 == 0xC) {
        temp_v1_19 = phi_s5_9 + 1;
        (temp_s6 + temp_v1_19)->unk11F24 = (u8) (sp4C + sp44->unk1FEC)->unk11881;
        temp_s6->unk11FEC = (s16) (sp44->unk1FEC + 2);
        phi_s5_10 = temp_v1_19;
    }
    temp_s6->unk11FF0 = phi_s5_10;
    if (sp44->unk2094 != 0) {
        temp_s6->unk11FEE = (u16) sp44->unk1FF0;
    }
}
