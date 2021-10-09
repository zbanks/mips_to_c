

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
        temp_v0_2->unk-3 = temp_s0;
        temp_v0_2->unk-2 = temp_s0;
        temp_v0_2->unk-1 = temp_s0;
        temp_v0_2->unk-4 = temp_s0;
        phi_v0 = temp_v0_2;
    } while (temp_v0_2 != &arg0);
    temp_v0 = __osContRamWrite(arg0->unk4, arg0->unk8, 0x400U, &sp38, 0);
    if (temp_v0 == 0) {
        arg0->unk65 = temp_s0;
    }
    return temp_v0;
}

