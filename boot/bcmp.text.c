struct _mips2c_stack_bcmp {};                       /* size 0x0 */

s32 bcmp(void *__s1, void *__s2, u32 __n) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_t8;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *phi_a0;
    void *phi_a1;
    void *phi_a0_2;
    void *phi_a0_3;
    void *phi_a1_2;
    void *phi_a0_4;
    void *phi_a1_3;
    void *phi_a0_5;
    s32 phi_a2;
    void *phi_a0_6;
    void *phi_a1_4;
    void *phi_a0_7;
    void *phi_a1_5;
    void *phi_a1_6;

    phi_a0_2 = __s1;
    phi_a0_3 = __s1;
    phi_a1_2 = __s2;
    phi_a0_5 = __s1;
    phi_a2 = (s32) __n;
    phi_a0_7 = __s1;
    phi_a1_5 = __s2;
    phi_a1_6 = __s2;
    phi_a1_4 = __s2;
    if ((s32) __n >= 0x10) {
        if ((((s32) __s1 ^ (s32) __s2) & 3) == 0) {
            temp_t8 = -(s32) __s1 & 3;
            temp_a2 = __n - temp_t8;
            if ((temp_t8 == 0) || (phi_a0_2 = __s1 + temp_t8, phi_a1_5 = __s2 + temp_t8, (MIPS2C_LWL(*__s1) == MIPS2C_LWL(*__s2)))) {
                temp_a3 = temp_a2 & ~3;
                phi_a0 = phi_a0_2;
                phi_a1 = phi_a1_5;
                phi_a2 = temp_a2 - temp_a3;
                phi_a0_7 = phi_a0_2;
                phi_a1_4 = phi_a1_5;
                if (temp_a3 != 0) {
loop_6:
                    temp_a0 = phi_a0 + 4;
                    temp_a1 = phi_a1 + 4;
                    phi_a0 = temp_a0;
                    phi_a1 = temp_a1;
                    phi_a0_7 = temp_a0;
                    phi_a1_4 = temp_a1;
                    if (*phi_a0 == *phi_a1) {
                        if (temp_a0 == (temp_a3 + phi_a0_2)) {
                            goto block_17;
                        }
                        goto loop_6;
                    }
                    /* Duplicate return node #21. Try simplifying control flow for better match */
                    return 1;
                }
                goto block_17;
            }
            /* Duplicate return node #21. Try simplifying control flow for better match */
            return 1;
        }
        temp_a3_2 = -(s32) __s2 & 3;
        temp_a2_2 = __n - temp_a3_2;
        if (temp_a3_2 != 0) {
loop_11:
            temp_a0_2 = phi_a0_3 + 1;
            temp_a1_2 = phi_a1_2 + 1;
            phi_a0_3 = temp_a0_2;
            phi_a1_2 = temp_a1_2;
            phi_a0_5 = temp_a0_2;
            phi_a1_6 = temp_a1_2;
            if (*phi_a0_3 == *phi_a1_2) {
                if (temp_a0_2 == (temp_a3_2 + __s1)) {
                    goto block_13;
                }
                goto loop_11;
            }
            /* Duplicate return node #21. Try simplifying control flow for better match */
            return 1;
        }
block_13:
        temp_a3_3 = temp_a2_2 & ~3;
        phi_a0_4 = phi_a0_5;
        phi_a1_3 = phi_a1_6;
        phi_a2 = temp_a2_2 - temp_a3_3;
        phi_a0_7 = phi_a0_5;
        phi_a1_4 = phi_a1_6;
        if (temp_a3_3 != 0) {
loop_15:
            temp_a0_3 = phi_a0_4 + 4;
            temp_a1_3 = phi_a1_3 + 4;
            phi_a0_4 = temp_a0_3;
            phi_a1_3 = temp_a1_3;
            phi_a0_7 = temp_a0_3;
            phi_a1_4 = temp_a1_3;
            if ((unaligned s32) *phi_a0_4 == *phi_a1_3) {
                if (temp_a0_3 == (temp_a3_3 + phi_a0_5)) {
                    goto block_17;
                }
                goto loop_15;
            }
            /* Duplicate return node #21. Try simplifying control flow for better match */
            return 1;
        }
        goto block_17;
    }
block_17:
    phi_a0_6 = phi_a0_7;
    if (phi_a2 > 0) {
loop_18:
        temp_a0_4 = phi_a0_6 + 1;
        phi_a0_6 = temp_a0_4;
        phi_a1_4 += 1;
        if (*phi_a0_6 == *phi_a1_4) {
            if (temp_a0_4 == (phi_a2 + phi_a0_7)) {
                /* Duplicate return node #20. Try simplifying control flow for better match */
                return 0;
            }
            goto loop_18;
        }
        return 1;
    }
    return 0;
}
