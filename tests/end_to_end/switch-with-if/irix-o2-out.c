void test(s32 arg0) {
    u32 temp_t1;
    u32 temp_t6;

    temp_t6 = arg0 - 1;
    if (temp_t6 < 6U) {
        switch (temp_t6) { // switch 1
        case 0: // switch 1
            D_4101D0 = 1;
            if (arg0 == 1) {
                D_4101D0 = 2;
            }
            break;
        case 1: // switch 1
            if (arg0 == 1) {
                D_4101D0 = 1;
            } else {
                D_4101D0 = 2;
            }
            break;
        }
    }
    temp_t1 = arg0 - 1;
    // This is likely the default case for the next switch
    if (temp_t1 < 6U) {
        goto block_14;
    }
    switch (temp_t1) { // switch 2
    case 0: // switch 2
        D_4101D0 = 1;
        if (arg0 == 1) {
            D_4101D0 = 2;
            return;
        }
    default: // switch 2
block_14:
        return;
    case 1: // switch 2
        if (arg0 == 1) {
            D_4101D0 = 1;
            return;
        }
        D_4101D0 = 2;
        return;
    }
}
