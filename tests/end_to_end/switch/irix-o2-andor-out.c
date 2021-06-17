s32 test(s32 arg0) {
    u32 temp_t6;
    s32 phi_a0;
    s32 phi_a0_2;

    temp_t6 = arg0 - 1;
    // This is likely the default case for the next switch
    if (temp_t6 < 7U) {
        goto block_7;
    }
    phi_a0_2 = arg0;
    switch (temp_t6) {
    case 0:
        return arg0 * arg0;
    case 1:
        phi_a0_2 = arg0 - 1;
    case 2:
        return phi_a0_2 * 2;
    case 3:
        phi_a0 = arg0 + 1;
        D_410150 = phi_a0;
        return 2;
    default:
block_7:
        phi_a0 = arg0 / 2;
        D_410150 = phi_a0;
        return 2;
    case 5:
    case 6:
        phi_a0 = arg0 * 2;
        D_410150 = phi_a0;
        return 2;
    }
}
