

s32 __osVoiceContDataCrc(u8 *arg0, u32 arg1) {
    s32 temp_t3;
    s32 temp_t6;
    u32 temp_t2;
    u32 temp_v0;
    u32 temp_v0_2;
    u8 *phi_a2;
    u32 phi_a0;
    s32 phi_v1;
    u32 phi_v0;
    s32 phi_v1_2;
    u32 phi_v0_2;
    s32 phi_v1_3;
    s32 phi_v1_4;

    phi_a2 = arg0;
    phi_v0 = arg1;
    phi_v1_2 = 0;
    phi_v0_2 = arg1;
    phi_v1 = 0;
    if (arg1 != 0) {
        do {
            phi_a0 = 0x80U;
loop_2:
            temp_t6 = phi_v1 * 2;
            phi_v1_4 = temp_t6;
            if ((*phi_a2 & phi_a0) != 0) {
                if ((temp_t6 & 0x100) != 0) {
                    phi_v1_4 = temp_t6 ^ 0x84;
                } else {
                    phi_v1_4 = temp_t6 + 1;
                }
            } else if ((temp_t6 & 0x100) != 0) {
                phi_v1_4 = temp_t6 ^ 0x85;
            }
            temp_t2 = phi_a0 >> 1;
            phi_a0 = temp_t2;
            phi_v1 = phi_v1_4;
            phi_v1_2 = phi_v1_4;
            phi_v1 = phi_v1_4;
            if (temp_t2 != 0) {
                goto loop_2;
            }
            temp_v0 = phi_v0 - 1;
            phi_a2 += 1;
            phi_v0 = temp_v0;
            phi_v0_2 = temp_v0;
        } while (temp_v0 != 0);
    }
    do {
        temp_t3 = phi_v1_2 * 2;
        phi_v1_3 = temp_t3;
        if ((temp_t3 & 0x100) != 0) {
            phi_v1_3 = temp_t3 ^ 0x85;
        }
        temp_v0_2 = phi_v0_2 + 1;
        phi_v1_2 = phi_v1_3;
        phi_v0_2 = temp_v0_2;
    } while (temp_v0_2 < 8U);
    return phi_v1_3 & 0xFF;
}

