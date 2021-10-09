struct _mips2c_stack_osPfsFindFile {
    /* 0x00 */ char pad0[0x50];
    /* 0x50 */ u8 sp50;                             /* inferred */
    /* 0x51 */ char pad51[0x3];                     /* maybe part of sp50[4]? */
    /* 0x54 */ u16 sp54;                            /* inferred */
    /* 0x56 */ char pad56[0xA];                     /* maybe part of sp54[6]? */
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad60[0x18];
};                                                  /* size = 0x78 */

s32 __osCheckId(void *);                            /* extern */
s32 __osPfsGetStatus(OSMesgQueue *, s32);           /* extern */

s32 osPfsFindFile(void *arg0, s32 arg1, s32 arg2, u8 *arg3, u8 *arg4, s32 *arg5) {
    ? sp60;
    u16 sp54;
    u8 sp50;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    u8 *temp_v0_5;
    u8 *temp_v0_6;
    s32 phi_s3;
    u8 *phi_v0;
    u8 *phi_v1;
    s32 phi_a0;
    u8 *phi_v0_2;
    u8 *phi_v1_2;
    s32 phi_a0_2;

    if ((arg0->unk0 & 1) == 0) {
        return 5;
    }
    temp_v0_4 = __osCheckId(arg0);
    if (temp_v0_4 != 0) {
        return temp_v0_4;
    }
    phi_s3 = 0;
    if (arg0->unk50 > 0) {
loop_6:
        temp_v0_3 = __osContRamRead(arg0->unk4, arg0->unk8, (arg0->unk5C + phi_s3) & 0xFFFF, &sp50);
        if (temp_v0_3 != 0) {
            return temp_v0_3;
        }
        temp_v0_2 = __osPfsGetStatus(arg0->unk4, arg0->unk8);
        if (temp_v0_2 != 0) {
            return temp_v0_2;
        }
        if (((arg1 & 0xFFFF) == sp54) && ((s32) sp50 == arg2)) {
            phi_a0 = 0;
            if (arg3 != 0) {
                phi_v0 = &sp50;
                phi_v1 = arg3;
loop_14:
                temp_v0_5 = phi_v0 + 1;
                phi_v0 = temp_v0_5;
                if (phi_v0->unk10 != *phi_v1) {
                    phi_a0 = 1;
                } else {
                    phi_v1 += 1;
                    if (temp_v0_5 != &sp60) {
                        goto loop_14;
                    }
                }
            }
            phi_a0_2 = phi_a0;
            if (arg4 != 0) {
                phi_v0_2 = &sp50;
                if (phi_a0 == 0) {
                    phi_v1_2 = arg4;
loop_20:
                    temp_v0_6 = phi_v0_2 + 1;
                    phi_v0_2 = temp_v0_6;
                    if (phi_v0_2->unkC != *phi_v1_2) {
                        phi_a0_2 = 1;
                    } else {
                        phi_v1_2 += 1;
                        if (temp_v0_6 != &sp54) {
                            goto loop_20;
                        }
                    }
                }
            }
            if (phi_a0_2 == 0) {
                temp_v0 = temp_v0_2;
                *arg5 = phi_s3;
                return temp_v0;
            }
            goto block_25;
        }
block_25:
        temp_s3 = phi_s3 + 1;
        phi_s3 = temp_s3;
        if (temp_s3 >= arg0->unk50) {
            goto block_26;
        }
        goto loop_6;
    }
block_26:
    *arg5 = -1;
    return 5;
}
