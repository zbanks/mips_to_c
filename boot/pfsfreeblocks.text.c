struct _mips2c_stack_osPfsFreeBlocks {
    /* 0x000 */ char pad0[0x48];
    /* 0x048 */ ? sp48;                             /* inferred */
    /* 0x048 */ char pad48[0x100];
    /* 0x148 */ ? sp148;                            /* inferred */
    /* 0x148 */ char pad148[0x8];
};                                                  /* size = 0x150 */

s32 __osCheckId(void *);                            /* extern */
s32 __osPfsRWInode(void *, ? *, ?, s32);            /* extern */

s32 osPfsFreeBlocks(void *arg0, s32 *arg1) {
    ? sp148;
    ? sp48;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    void *temp_v0_3;
    s32 phi_s3;
    s32 phi_a1;
    u16 *phi_v0;
    s32 phi_v1;
    void *phi_v0_2;
    s32 phi_s0;
    s32 phi_v1_2;
    s32 phi_s0_2;
    s32 phi_s0_3;
    s32 phi_s0_4;
    s32 phi_s0_5;
    s32 phi_s0_6;
    s32 phi_s0_7;
    s32 phi_s0_8;
    s32 phi_s0_9;
    s32 phi_s0_10;

    phi_s0 = 0;
    phi_s0_3 = 0;
    if ((arg0->unk0 & 1) == 0) {
        return 5;
    }
    temp_v0_2 = __osCheckId(arg0);
    if (temp_v0_2 != 0) {
        return temp_v0_2;
    }
    phi_s3 = 0;
    if ((s32) arg0->unk64 > 0) {
loop_6:
        temp_v0 = __osPfsRWInode(arg0, &sp48, 0, phi_s3 & 0xFF);
        phi_s0_2 = phi_s0_3;
        phi_s0_6 = phi_s0_3;
        phi_s0_10 = phi_s0_3;
        if (temp_v0 != 0) {
            return temp_v0;
        }
        if (phi_s3 > 0) {
            phi_a1 = 1;
        } else {
            phi_a1 = arg0->unk60;
        }
        phi_v1 = phi_a1;
        phi_v1_2 = phi_a1;
        if (phi_a1 < 0x80) {
            temp_t9 = (0x80 - phi_a1) & 3;
            if (temp_t9 != 0) {
                phi_v0 = (phi_a1 * 2) + &sp48;
                do {
                    temp_v1 = phi_v1 + 1;
                    phi_v1 = temp_v1;
                    phi_v1_2 = temp_v1;
                    phi_s0_4 = phi_s0_6;
                    if (*phi_v0 == 3) {
                        phi_s0_4 = phi_s0_6 + 1;
                    }
                    phi_v0 += 2;
                    phi_s0_2 = phi_s0_4;
                    phi_s0_6 = phi_s0_4;
                    phi_s0_10 = phi_s0_4;
                } while ((temp_t9 + phi_a1) != temp_v1);
                if (temp_v1 != 0x80) {
                    goto block_18;
                }
            } else {
block_18:
                phi_v0_2 = (phi_v1_2 * 2) + &sp48;
                do {
                    phi_s0_9 = phi_s0_10;
                    if (phi_v0_2->unk0 == 3) {
                        phi_s0_9 = phi_s0_10 + 1;
                    }
                    phi_s0_8 = phi_s0_9;
                    if (phi_v0_2->unk2 == 3) {
                        phi_s0_8 = phi_s0_9 + 1;
                    }
                    phi_s0_7 = phi_s0_8;
                    if (phi_v0_2->unk4 == 3) {
                        phi_s0_7 = phi_s0_8 + 1;
                    }
                    temp_v0_3 = phi_v0_2 + 8;
                    phi_v0_2 = temp_v0_3;
                    phi_s0_5 = phi_s0_7;
                    if (phi_v0_2->unk6 == 3) {
                        phi_s0_5 = phi_s0_7 + 1;
                    }
                    phi_s0_2 = phi_s0_5;
                    phi_s0_10 = phi_s0_5;
                } while (temp_v0_3 != &sp148);
            }
        }
        temp_t9_2 = (phi_s3 + 1) & 0xFF;
        phi_s3 = temp_t9_2;
        phi_s0 = phi_s0_2;
        phi_s0_3 = phi_s0_2;
        if (temp_t9_2 >= (s32) arg0->unk64) {
            goto block_29;
        }
        goto loop_6;
    }
block_29:
    *arg1 = phi_s0 << 8;
    return 0;
}
