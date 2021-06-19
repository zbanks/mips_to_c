s32 test(s32 arg0) {
    s32 phi_a0;
    s32 phi_a0_2;

    // This is likely the default case for the next switch
    if ((u32) (arg0 - 1) >= 7U) {
        goto block_7;
    }
    phi_a0_2 = arg0;
    switch (arg0) {
    case 1:
        return arg0 * arg0;
    case 2:
        phi_a0_2 = arg0 - 1;
    case 3:
        return phi_a0_2 * 2;
    case 4:
        phi_a0 = arg0 + 1;
        D_410170 = phi_a0;
        return 2;
    default:
block_7:
        phi_a0 = arg0 / 2;
        D_410170 = phi_a0;
        return 2;
    case 6:
    case 7:
        phi_a0 = arg0 * 2;
        D_410170 = phi_a0;
        return 2;
    }
}
