struct _mips2c_stack_osVoiceGetReadData {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ u8 sp38;                             /* inferred */
    /* 0x39 */ char pad_39[0x3];                    /* maybe part of sp38[4]? */
    /* 0x3C */ u8 sp3C;                             /* inferred */
    /* 0x3D */ u8 sp3D;                             /* inferred */
    /* 0x3E */ u8 sp3E;                             /* inferred */
    /* 0x3F */ char pad_3F[0x1];
    /* 0x40 */ u8 sp40;                             /* inferred */
    /* 0x41 */ u8 sp41;                             /* inferred */
    /* 0x42 */ u8 sp42;                             /* inferred */
    /* 0x43 */ u8 sp43;                             /* inferred */
    /* 0x44 */ u8 sp44;                             /* inferred */
    /* 0x45 */ u8 sp45;                             /* inferred */
    /* 0x46 */ u8 sp46;                             /* inferred */
    /* 0x47 */ u8 sp47;                             /* inferred */
    /* 0x48 */ u8 sp48;                             /* inferred */
    /* 0x49 */ u8 sp49;                             /* inferred */
    /* 0x4A */ char pad_4A[0x10];                   /* maybe part of sp49[17]? */
    /* 0x5A */ u8 sp5A;                             /* inferred */
    /* 0x5B */ char pad_5B[0x4];                    /* maybe part of sp5A[5]? */
    /* 0x5F */ u8 sp5F;                             /* inferred */
    /* 0x60 */ char pad_60[0x8];
};                                                  /* size = 0x68 */

s32 __osVoiceContRead2(OSMesgQueue *, s32, ?, u8 *); /* extern */
s32 __osVoiceContRead36(OSMesgQueue *, s32, ?, u8 *); /* extern */
s32 __osVoiceContWrite4(OSMesgQueue *, s32, ?, u8 *); /* extern */
s8 D_8009CF60;

s32 osVoiceGetReadData(void *arg0, void *arg1) {
    u8 sp5F;
    u8 sp38;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s8 temp_t3;
    s8 temp_t9;
    void *temp_a0;
    void *temp_a1;
    void *temp_a2;
    void *temp_v0_10;
    void *temp_v1;
    s32 phi_t0;

    temp_v0_9 = arg0->unk_8;
    if (temp_v0_9 != 1) {
        if (temp_v0_9 != 2) {
            if (temp_v0_9 != 3) {
                if (temp_v0_9 != 4) {
                    return 5;
                }
                goto block_30;
            }
            goto block_20;
        }
        goto block_14;
    }
    temp_v0_8 = __osVoiceGetStatus(arg0->unk_0, arg0->unk_4, &sp5F);
    if (temp_v0_8 != 0) {
        return temp_v0_8;
    }
    if ((sp5F & 1) != 0) {
        return 0xC;
    }
    temp_v0_7 = __osVoiceContRead2(arg0->unk_0, arg0->unk_4, 0, &sp38);
    if (temp_v0_7 != 0) {
        return temp_v0_7;
    }
    temp_t9 = sp38 & 7;
    arg0->unk_C = temp_t9;
    D_8009CF60 = temp_t9;
    if ((temp_t9 != 0) && (temp_t9 != 7)) {
        return 0xC;
    }
block_14:
    arg0->unk_8 = 2;
    temp_v0_6 = __osVoiceGetStatus(arg0->unk_0, arg0->unk_4, &sp5F);
    if (temp_v0_6 != 0) {
        return temp_v0_6;
    }
    if ((sp5F & 2) != 0) {
        return 0xF;
    }
    sp38 = 0x600;
    temp_v0_5 = __osVoiceContWrite4(arg0->unk_0, arg0->unk_4, 0, &sp38);
    if (temp_v0_5 != 0) {
        return temp_v0_5;
    }
block_20:
    arg0->unk_8 = 3;
    temp_v0_4 = __osVoiceGetStatus(arg0->unk_0, arg0->unk_4, &sp5F);
    if (temp_v0_4 != 0) {
        return temp_v0_4;
    }
    if ((sp5F & 1) != 0) {
        return 0xF;
    }
    temp_v0_3 = __osVoiceContRead36(arg0->unk_0, arg0->unk_4, 0, &sp38);
    temp_t0 = temp_v0_3;
    phi_t0 = temp_t0;
    if (temp_v0_3 != 0) {
        return temp_v0_3;
    }
    arg1->unk_0 = (s16) ((sp3D << 8) + sp3C);
    arg1->unk_2 = (s16) sp3E;
    arg1->unk_4 = (s16) ((sp41 << 8) + sp40);
    arg1->unk_6 = (s16) ((sp43 << 8) + sp42);
    arg1->unk_8 = (s16) ((sp45 << 8) + sp44);
    arg1->unk_A = (u16) ((sp47 << 8) + sp46);
    arg1->unk_14 = (s16) ((sp49 << 8) + sp48);
    temp_v1 = &sp38 + (1 * 4);
    temp_v0_10 = arg1 + (1 * 2);
    temp_v0_10->unk_A = (s16) ((temp_v1->unk_F << 8) + temp_v1->unk_E);
    temp_a0 = &sp38 + (2 * 4);
    temp_v0_10->unk_14 = (s16) ((temp_v1->unk_11 << 8) + temp_v1->unk_10);
    temp_v0_10->unk_C = (s16) ((temp_a0->unk_F << 8) + temp_a0->unk_E);
    temp_v0_10->unk_16 = (s16) ((temp_a0->unk_11 << 8) + temp_a0->unk_10);
    temp_a1 = &sp38 + (3 * 4);
    temp_v0_10->unk_E = (s16) ((temp_a1->unk_F << 8) + temp_a1->unk_E);
    temp_v0_10->unk_18 = (s16) ((temp_a1->unk_11 << 8) + temp_a1->unk_10);
    temp_a2 = &sp38 + (4 * 4);
    temp_v0_10->unk_10 = (s16) ((temp_a2->unk_F << 8) + temp_a2->unk_E);
    temp_v0_10->unk_1A = (s16) ((temp_a2->unk_11 << 8) + temp_a2->unk_10);
    if (arg1->unk_A == 0x7FFF) {
        arg1->unk_2 = 0;
    }
    temp_t3 = sp5A & 7;
    arg0->unk_C = temp_t3;
    if (((u8) D_8009CF60 != 0) && ((temp_t3 & 0xFF) != 0)) {
block_30:
        arg0->unk_8 = 4;
        temp_v0_2 = __osVoiceGetStatus(arg0->unk_0, arg0->unk_4, &sp5F);
        if (temp_v0_2 != 0) {
            return temp_v0_2;
        }
        if ((sp5F & 1) != 0) {
            return 0xF;
        }
        temp_v0 = __osVoiceContRead2(arg0->unk_0, arg0->unk_4, 0, &sp38);
        temp_t0_2 = temp_v0;
        phi_t0 = temp_t0_2;
        if (temp_v0 != 0) {
            return temp_v0;
        }
        arg0->unk_C = (s8) (sp38 & 7);
        if ((sp38 & 7) != 0) {
            return 0xF;
        }
        goto block_39;
    }
block_39:
    arg0->unk_8 = 0;
    return phi_t0;
}
