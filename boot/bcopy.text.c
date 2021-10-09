struct _mips2c_stack_bcopy {};                      /* size 0x0 */

void bcopy(void *__src, void *__dest, u32 __n) {
    s16 *temp_a1_2;
    s32 *temp_a1_6;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    s8 *temp_a0_2;
    s8 *temp_a0_3;
    void *temp_a0_4;
    void *temp_a1_10;
    void *temp_a1_11;
    void *temp_a1_12;
    void *temp_a1_13;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_a1_5;
    void *temp_a1_7;
    void *temp_a1_8;
    void *temp_a1_9;
    s32 phi_a2;
    void *phi_a0;
    s32 phi_a1;
    s32 phi_a2_2;
    void *phi_a0_2;
    s32 phi_a1_2;
    s32 phi_a2_3;
    void *phi_a0_3;
    s32 phi_a1_3;
    u32 phi_a2_4;
    s8 *phi_a0_4;
    s8 *phi_a1_4;
    s32 phi_a0_5;
    s32 phi_a2_5;
    void *phi_a0_6;
    void *phi_a1_5;
    s32 phi_a2_6;
    void *phi_a0_7;
    void *phi_a1_6;
    s32 phi_a2_7;
    void *phi_a0_8;
    void *phi_a1_7;
    u32 phi_a2_8;
    void *phi_a0_9;
    void *phi_a1_8;
    void *phi_a0_10;
    s32 phi_a1_9;

    phi_a2 = (s32) __n;
    phi_a2_4 = __n;
    phi_a2_5 = (s32) __n;
    phi_a0_6 = __src;
    phi_a1_5 = __dest;
    phi_a2_8 = __n;
    phi_a0_10 = __src;
    phi_a1_8 = __dest;
    if ((__n != 0) && (__src != __dest)) {
        if (((s32) __dest >= (s32) __src) && ((s32) __dest < MIPS2C_ERROR(unknown instruction: add $v0, $a0, $a2))) {
            temp_a0 = MIPS2C_ERROR(unknown instruction: add $a0, $a0, $a2);
            temp_a1 = MIPS2C_ERROR(unknown instruction: add $a1, $a1, $a2);
            phi_a0 = (void *) temp_a0;
            phi_a1 = temp_a1;
            phi_a0_5 = temp_a0;
            phi_a1_9 = temp_a1;
            if ((s32) __n >= 0x10) {
                temp_v0 = temp_a0 & 3;
                if (temp_v0 == (temp_a1 & 3)) {
                    if (temp_v0 != 0) {
                        if (temp_v0 != 3) {
                            if (temp_v0 != 2) {
                                temp_a1->unk_-1 = (s8) temp_a0->unk_-1;
                                phi_a2 = __n - 1;
                                phi_a0 = temp_a0 - 1;
                                phi_a1 = temp_a1 - 1;
                            } else {
                                temp_a1_2 = temp_a1 - 2;
                                *temp_a1_2 = temp_a0->unk_-2;
                                phi_a2 = __n - 2;
                                phi_a0 = temp_a0 - 2;
                                phi_a1 = (s32) temp_a1_2;
                            }
                        } else {
                            temp_a1_3 = temp_a1 - 3;
                            temp_a1_3->unk_2 = (s8) temp_a0->unk_-1;
                            temp_a1_3->unk_0 = (s16) temp_a0->unk_-3;
                            phi_a2 = __n - 3;
                            phi_a0 = temp_a0 - 3;
                            phi_a1 = (s32) temp_a1_3;
                        }
                    }
loop_35:
                    phi_a2_2 = phi_a2;
                    phi_a0_2 = phi_a0;
                    phi_a1_2 = phi_a1;
                    if (phi_a2 >= 0x20) {
                        temp_a1_4 = phi_a1 - 0x20;
                        temp_a1_4->unk_1C = (s32) phi_a0->unk_-4;
                        temp_a1_4->unk_18 = (s32) phi_a0->unk_-8;
                        temp_a1_4->unk_14 = (s32) phi_a0->unk_-C;
                        temp_a1_4->unk_10 = (s32) phi_a0->unk_-10;
                        temp_a1_4->unk_C = (s32) phi_a0->unk_-14;
                        temp_a1_4->unk_8 = (s32) phi_a0->unk_-18;
                        temp_a1_4->unk_4 = (s32) phi_a0->unk_-1C;
                        temp_a1_4->unk_0 = (s32) phi_a0->unk_-20;
                        phi_a2 += -0x20;
                        phi_a0 += -0x20;
                        phi_a1 = (s32) temp_a1_4;
                        goto loop_35;
                    }
loop_37:
                    phi_a2_3 = phi_a2_2;
                    phi_a0_3 = phi_a0_2;
                    phi_a1_3 = phi_a1_2;
                    if (phi_a2_2 >= 0x10) {
                        temp_a1_5 = phi_a1_2 - 0x10;
                        temp_a1_5->unk_C = (s32) phi_a0_2->unk_-4;
                        temp_a1_5->unk_8 = (s32) phi_a0_2->unk_-8;
                        temp_a1_5->unk_4 = (s32) phi_a0_2->unk_-C;
                        temp_a1_5->unk_0 = (s32) phi_a0_2->unk_-10;
                        phi_a2_2 += -0x10;
                        phi_a0_2 += -0x10;
                        phi_a1_2 = (s32) temp_a1_5;
                        goto loop_37;
                    }
loop_39:
                    phi_a2_4 = (u32) phi_a2_3;
                    phi_a0_5 = (s32) phi_a0_3;
                    phi_a1_9 = phi_a1_3;
                    if (phi_a2_3 >= 4) {
                        temp_a1_6 = phi_a1_3 - 4;
                        *temp_a1_6 = phi_a0_3->unk_-4;
                        phi_a2_3 += -4;
                        phi_a0_3 += -4;
                        phi_a1_3 = (s32) temp_a1_6;
                        goto loop_39;
                    }
                }
            }
            if (phi_a2_4 != 0) {
                temp_a0_2 = phi_a0_5 - 1;
                phi_a0_4 = temp_a0_2;
                phi_a1_4 = phi_a1_9 - 1;
                do {
                    temp_a0_3 = phi_a0_4 - 1;
                    *phi_a1_4 = *phi_a0_4;
                    phi_a0_4 = temp_a0_3;
                    phi_a1_4 += -1;
                } while (temp_a0_3 != (temp_a0_2 - phi_a2_4));
                return;
            }
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return;
        }
        if ((s32) __n >= 0x10) {
            temp_v0_2 = (s32) __src & 3;
            if (temp_v0_2 == ((s32) __dest & 3)) {
                if (temp_v0_2 != 0) {
                    if (temp_v0_2 != 1) {
                        if (temp_v0_2 != 2) {
                            temp_a1_7 = __dest + 1;
                            temp_a1_7->unk_-1 = (s8) __src->unk_0;
                            phi_a2_5 = __n - 1;
                            phi_a0_6 = __src + 1;
                            phi_a1_5 = temp_a1_7;
                        } else {
                            temp_a1_8 = __dest + 2;
                            temp_a1_8->unk_-2 = (s16) __src->unk_0;
                            phi_a2_5 = __n - 2;
                            phi_a0_6 = __src + 2;
                            phi_a1_5 = temp_a1_8;
                        }
                    } else {
                        temp_a1_9 = __dest + 3;
                        temp_a1_9->unk_-3 = (s8) __src->unk_0;
                        temp_a1_9->unk_-2 = (s16) __src->unk_1;
                        phi_a2_5 = __n - 3;
                        phi_a0_6 = __src + 3;
                        phi_a1_5 = temp_a1_9;
                    }
                }
loop_17:
                phi_a2_6 = phi_a2_5;
                phi_a0_7 = phi_a0_6;
                phi_a1_6 = phi_a1_5;
                if (phi_a2_5 >= 0x20) {
                    temp_a1_10 = phi_a1_5 + 0x20;
                    temp_a1_10->unk_-20 = (s32) phi_a0_6->unk_0;
                    temp_a1_10->unk_-1C = (s32) phi_a0_6->unk_4;
                    temp_a1_10->unk_-18 = (s32) phi_a0_6->unk_8;
                    temp_a1_10->unk_-14 = (s32) phi_a0_6->unk_C;
                    temp_a1_10->unk_-10 = (s32) phi_a0_6->unk_10;
                    temp_a1_10->unk_-C = (s32) phi_a0_6->unk_14;
                    temp_a1_10->unk_-8 = (s32) phi_a0_6->unk_18;
                    temp_a1_10->unk_-4 = (s32) phi_a0_6->unk_1C;
                    phi_a2_5 += -0x20;
                    phi_a0_6 += 0x20;
                    phi_a1_5 = temp_a1_10;
                    goto loop_17;
                }
loop_19:
                phi_a2_7 = phi_a2_6;
                phi_a0_8 = phi_a0_7;
                phi_a1_7 = phi_a1_6;
                if (phi_a2_6 >= 0x10) {
                    temp_a1_11 = phi_a1_6 + 0x10;
                    temp_a1_11->unk_-10 = (s32) phi_a0_7->unk_0;
                    temp_a1_11->unk_-C = (s32) phi_a0_7->unk_4;
                    temp_a1_11->unk_-8 = (s32) phi_a0_7->unk_8;
                    temp_a1_11->unk_-4 = (s32) phi_a0_7->unk_C;
                    phi_a2_6 += -0x10;
                    phi_a0_7 += 0x10;
                    phi_a1_6 = temp_a1_11;
                    goto loop_19;
                }
loop_21:
                phi_a2_8 = (u32) phi_a2_7;
                phi_a0_10 = phi_a0_8;
                phi_a1_8 = phi_a1_7;
                if (phi_a2_7 >= 4) {
                    temp_a1_12 = phi_a1_7 + 4;
                    temp_a1_12->unk_-4 = (s32) *phi_a0_8;
                    phi_a2_7 += -4;
                    phi_a0_8 += 4;
                    phi_a1_7 = temp_a1_12;
                    goto loop_21;
                }
            }
        }
        phi_a0_9 = phi_a0_10;
        if (phi_a2_8 != 0) {
            do {
                temp_a0_4 = phi_a0_9 + 1;
                temp_a1_13 = phi_a1_8 + 1;
                temp_a1_13->unk_-1 = (s8) *phi_a0_9;
                phi_a0_9 = temp_a0_4;
                phi_a1_8 = temp_a1_13;
            } while (temp_a0_4 != (phi_a0_10 + phi_a2_8));
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}
