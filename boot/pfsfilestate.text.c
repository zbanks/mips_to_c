s32 __osCheckId(void *);                            /* extern */
s32 __osPfsGetStatus(OSMesgQueue *, s32);           /* extern */
s32 __osPfsRWInode(void *, ? *, ?, s32);            /* extern */
s32 __osPfsSelectBank(void *, ?);                   /* extern */



s32 osPfsFileState(void *arg0, s32 arg1, void *arg2) {
    ? sp58;
    void sp48;
    void sp44;
    u16 sp3E;
    u8 sp38;
    u16 sp34;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    u16 phi_at;
    u8 phi_s0;
    s32 phi_s2;

    if ((arg1 >= arg0->unk50) || (arg1 < 0)) {
        return 5;
    }
    if ((arg0->unk0 & 1) == 0) {
        return 5;
    }
    temp_v0_4 = __osCheckId(arg0);
    if (temp_v0_4 != 0) {
        return temp_v0_4;
    }
    if ((arg0->unk65 != 0) && (temp_v0_3 = __osPfsSelectBank(arg0, 0), (temp_v0_3 != 0))) {
        return temp_v0_3;
    }
    temp_v0_2 = __osContRamRead(arg0->unk4, arg0->unk8, (arg0->unk5C + arg1) & 0xFFFF, &sp38);
    if (temp_v0_2 != 0) {
        return temp_v0_2;
    }
    if ((sp3C == 0) || ((s32) sp38 == 0)) {
        return 5;
    }
    phi_at = sp3E;
    phi_s0 = 0xFFU;
    phi_s2 = 0;
loop_16:
    sp34 = phi_at;
    if ((s32) sp34 >= arg0->unk60) {
        if ((phi_s0 != (u8) sp34) && (temp_v0 = __osPfsRWInode(arg0, &sp58, 0, (u8) sp34 & 0xFF), phi_s0 = (u8) sp34, (temp_v0 != 0))) {
            return temp_v0;
        }
        phi_at = *(&sp58 + (sp35 * 2));
        phi_s2 += 1;
        goto loop_16;
    }
    if (sp34 != 1) {
        return 3;
    }
    arg2->unk0 = (s32) (phi_s2 << 8);
    arg2->unk8 = sp3C;
    arg2->unk4 = (s32) sp38;
    bcopy(&sp48, arg2 + 0xE, 0x10U);
    bcopy(&sp44, arg2 + 0xA, 4U);
    return __osPfsGetStatus(arg0->unk4, arg0->unk8);
}

