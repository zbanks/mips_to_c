s32 __osPfsRWInode(void *, ? *, ?, s32);            /* extern */
s32 __osPfsSelectBank(void *, ?);                   /* extern */
s32 osPfsFindFile(void *, s32, s32, s32 *);         /* extern */
s32 __osPfsReleasePages(void *arg0, ? *arg1, s32 arg2, s32 arg3, u16 *arg4); /* static */
s32 osPfsDeleteFile(void *arg0, s32 arg1, s32 arg2, s32 arg4); /* static */



s32 osPfsDeleteFile(void *arg0, s32 arg1, s32 arg2, s32 arg4) {
    s32 sp16C;
    ? sp68;
    u8 sp48;
    u16 sp44;
    s32 temp_t6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    u8 phi_s0;
    u8 phi_s3;
    s32 phi_s0_2;

    temp_t6 = arg1 & 0xFFFF;
    if ((temp_t6 == 0) || (arg2 == 0)) {
        return 5;
    }
    temp_v0_6 = osPfsFindFile(arg0, temp_t6, arg4, &sp16C);
    if (temp_v0_6 != 0) {
        return temp_v0_6;
    }
    if ((arg0->unk65 != 0) && (temp_v0_5 = __osPfsSelectBank(arg0, 0), (temp_v0_5 != 0))) {
        return temp_v0_5;
    }
    temp_v0_4 = __osContRamRead(arg0->unk4, arg0->unk8, (arg0->unk5C + sp16C) & 0xFFFF, &sp48);
    phi_s0 = sp4E;
    phi_s0_2 = (s32) sp4E;
    if (temp_v0_4 != 0) {
        return temp_v0_4;
    }
    phi_s3 = sp4F;
    if ((s32) sp4E < (s32) arg0->unk64) {
loop_12:
        temp_v0_3 = __osPfsRWInode(arg0, &sp68, 0, phi_s0 & 0xFF);
        phi_s0_2 = (s32) phi_s0;
        if (temp_v0_3 != 0) {
            return temp_v0_3;
        }
        temp_v0_2 = __osPfsReleasePages(arg0, &sp68, phi_s3 & 0xFF, phi_s0 & 0xFF, &sp44);
        if (temp_v0_2 != 0) {
            return temp_v0_2;
        }
        temp_v0 = __osPfsRWInode(arg0, &sp68, 1, phi_s0 & 0xFF);
        if (temp_v0 != 0) {
            return temp_v0;
        }
        if (sp44 == 1) {
            goto block_21;
        }
        phi_s0 = (u8) sp44;
        phi_s3 = sp45;
        phi_s0_2 = (s32) (u8) sp44;
        if ((s32) (u8) sp44 >= (s32) arg0->unk64) {
            goto block_21;
        }
        goto loop_12;
    }
block_21:
    if (phi_s0_2 >= (s32) arg0->unk64) {
        return 3;
    }
    bzero((void *) &sp48, 0x20);
    return __osContRamWrite(arg0->unk4, arg0->unk8, (arg0->unk5C + sp16C) & 0xFFFF, &sp48, 0);
}

s32 __osPfsReleasePages(void *arg0, ? *arg1, s32 arg2, s32 arg3, u16 *arg4) {
    u16 spC;
    u16 sp8;
    s32 temp_v0;

    temp_v0 = arg3 & 0xFF;
    spC = (temp_v0 << 8) + (arg2 & 0xFF);
loop_1:
    sp8 = spC;
    spC = *(arg1 + (spD * 2));
    *(arg1 + (sp9 * 2)) = 3;
    if ((s32) spC >= arg0->unk60) {
        if (temp_v0 == (u8) spC) {
            goto loop_1;
        }
    }
    *arg4 = spC;
    return 0;
}

