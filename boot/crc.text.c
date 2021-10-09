

u8 __osContAddressCrc(u16 addr) {
    s32 temp_t0;
    s32 temp_t3_2;
    s32 temp_t4;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_t7_2;
    u32 temp_t3;
    u32 phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v1_4;
    s32 phi_v1_5;
    s32 phi_v1_6;
    s32 phi_v1_7;

    phi_v0 = 0x400U;
    phi_v1 = 0;
    do {
        temp_t7 = phi_v1 * 2;
        phi_v1_2 = temp_t7;
        if ((addr & 0xFFFF & phi_v0) != 0) {
            if ((temp_t7 & 0x20) != 0) {
                phi_v1_2 = temp_t7 ^ 0x14;
            } else {
                phi_v1_2 = temp_t7 + 1;
            }
        } else if ((temp_t7 & 0x20) != 0) {
            phi_v1_2 = temp_t7 ^ 0x15;
        }
        temp_t3 = phi_v0 >> 1;
        phi_v0 = temp_t3;
        phi_v1 = phi_v1_2;
    } while (temp_t3 != 0);
    temp_t4 = phi_v1_2 * 2;
    phi_v1_3 = temp_t4;
    if ((temp_t4 & 0x20) != 0) {
        phi_v1_3 = temp_t4 ^ 0x15;
    }
    temp_t7_2 = phi_v1_3 * 2;
    phi_v1_4 = temp_t7_2;
    if ((temp_t7_2 & 0x20) != 0) {
        phi_v1_4 = temp_t7_2 ^ 0x15;
    }
    temp_t0 = phi_v1_4 * 2;
    phi_v1_5 = temp_t0;
    if ((temp_t0 & 0x20) != 0) {
        phi_v1_5 = temp_t0 ^ 0x15;
    }
    temp_t3_2 = phi_v1_5 * 2;
    phi_v1_6 = temp_t3_2;
    if ((temp_t3_2 & 0x20) != 0) {
        phi_v1_6 = temp_t3_2 ^ 0x15;
    }
    temp_t6 = phi_v1_6 * 2;
    phi_v1_7 = temp_t6;
    if ((temp_t6 & 0x20) != 0) {
        phi_v1_7 = temp_t6 ^ 0x15;
    }
    return phi_v1_7 & 0x1F;
}

u8 __osContDataCrc(u8 *data) {
    s32 temp_t3;
    s32 temp_t6;
    u32 temp_t2;
    u32 temp_v0;
    u32 temp_v0_2;
    u8 *phi_a1;
    u32 phi_a0;
    s32 phi_v1;
    u32 phi_v0;
    s32 phi_v1_2;
    u32 phi_v0_2;
    s32 phi_v1_3;
    s32 phi_v1_4;

    phi_a1 = data;
    phi_v0 = 0x20U;
    phi_v1 = 0;
    do {
        phi_a0 = 0x80U;
loop_2:
        temp_t6 = phi_v1 * 2;
        phi_v1_4 = temp_t6;
        if ((*phi_a1 & phi_a0) != 0) {
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
        phi_a1 += 1;
        phi_v0 = temp_v0;
        phi_v0_2 = temp_v0;
    } while (temp_v0 != 0);
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

