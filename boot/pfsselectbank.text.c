struct _mips2c_stack___osPfsSelectBank {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ u8 sp38;                             /* inferred */
    /* 0x39 */ char pad_39[0x1F];
};                                                  /* size = 0x58 */

s32 __osPfsSelectBank(void *arg0, s32 arg1) {
    u8 sp38;
    s32 temp_v0;
    s8 temp_s0;
    u8 *temp_v0_2;
    u8 *phi_v0;

    temp_s0 = arg1 & 0xFF;
    phi_v0 = &sp38;
    do {
        temp_v0_2 = phi_v0 + 4;
        temp_v0_2->unk_-3 = temp_s0;
        temp_v0_2->unk_-2 = temp_s0;
        temp_v0_2->unk_-1 = temp_s0;
        temp_v0_2->unk_-4 = temp_s0;
        phi_v0 = temp_v0_2;
    } while (temp_v0_2 != &arg0);
    temp_v0 = __osContRamWrite(arg0->unk_4, arg0->unk_8, 0x400U, &sp38, 0);
    if (temp_v0 == 0) {
        arg0->unk_65 = temp_s0;
    }
    return temp_v0;
}
