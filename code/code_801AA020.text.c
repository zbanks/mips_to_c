struct _mips2c_stack_func_801AA020 {
    /* 0x00 */ char pad_0[0x58];
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];
    /* 0x60 */ s16 sp60;                            /* inferred */
    /* 0x62 */ s16 sp62;                            /* inferred */
    /* 0x64 */ s16 sp64;                            /* inferred */
    /* 0x66 */ char pad_66[0x2];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_801AA248 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ s16 sp34;                            /* inferred */
    /* 0x36 */ s16 sp36;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_801AA3E4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ u16 sp24;                            /* inferred */
    /* 0x26 */ u8 sp26;                             /* inferred */
    /* 0x27 */ char pad_27[0x1];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_801AA520 {};              /* size 0x0 */

? func_801AA020(void *arg0, s16 *arg1, s32 arg2, s32 arg3, void *arg4); /* static */
s32 func_801AA248(s16 *arg1, s16 *arg2, s16 *arg3, s16 *); /* static */
s32 func_801AA3E4(s16 *arg0, s16 *arg1, s16 *arg2); /* static */
s32 func_801AA520(u8 arg0, s32, s32, s32);          /* static */
static s32 D_80208E90;
static s32 D_80208E94;
static u8 D_80208E98;
static u8 D_80208E99;
static s32 D_80208E9C;

? func_801AA020(void *arg0, s16 *arg1, s32 arg2, s32 arg3, void *arg4) {
    s16 sp64;
    s16 sp62;
    s16 sp60;
    s32 sp58;
    s16 *temp_fp;
    s16 *temp_s1;
    s16 *temp_s1_2;
    s16 *temp_s7;
    s32 temp_s0;
    s32 temp_s6;
    s32 phi_v0;
    s16 *phi_s1;
    s32 phi_s0;
    s16 *phi_s1_2;
    s32 phi_s6;
    s16 *phi_s1_3;

    sp58 = 0;
    D_80208E90 = arg0->unk_0;
    phi_s6 = arg2;
    phi_s1_3 = arg1;
    if (arg0->unk_4 == 0) {
        phi_v0 = 2;
    } else {
        phi_v0 = 4;
        if (arg0->unk_5 == 1) {
            sp58 = 0x80;
        }
    }
    temp_s7 = arg0->unk_10;
    temp_fp = arg0->unk_14;
    if ((arg3 & 0xFF) == 0) {
        D_80208E94 = 0;
        D_80208E98 = 0x20;
        D_80208E9C = 0;
        D_80208E99 = 0;
        sp64 = 0;
        sp62 = 0;
        sp60 = 0;
    } else {
        D_80208E94 = arg4->unk_0;
        D_80208E98 = arg4->unk_4;
        D_80208E9C = arg4->unk_8;
        D_80208E99 = arg4->unk_5;
        sp64 = arg4->unk_C;
        sp62 = arg4->unk_E;
        sp60 = arg4->unk_10;
    }
    if (arg2 != 0) {
loop_9:
        phi_s1 = phi_s1_3;
        phi_s0 = 0;
        phi_s1_2 = phi_s1_3;
        if (phi_v0 != 0) {
loop_10:
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
            if (func_801AA248(arg0->unk_8, arg0->unk_C, phi_s1, &sp64) != 0) {
                return 2;
            }
            temp_s1 = phi_s1 + 0x80;
            phi_s1 = temp_s1;
            phi_s1_2 = temp_s1;
            if (temp_s0 == phi_v0) {
                goto block_13;
            }
            goto loop_10;
        }
block_13:
        temp_s1_2 = phi_s1_2 + 0x80;
        if (func_801AA248(temp_s7, temp_fp, phi_s1_2, &sp62) != 0) {
            return 2;
        }
        if (func_801AA248(temp_s7, temp_fp, temp_s1_2, &sp60) != 0) {
            return 2;
        }
        temp_s6 = phi_s6 - 1;
        phi_s6 = temp_s6;
        phi_s1_3 = temp_s1_2 + 0x80 + (sp58 * 2);
        if (temp_s6 == 0) {
            goto block_18;
        }
        goto loop_9;
    }
block_18:
    arg4->unk_0 = (s32) D_80208E94;
    arg4->unk_4 = (u8) D_80208E98;
    arg4->unk_8 = (s32) D_80208E9C;
    arg4->unk_5 = (u8) D_80208E99;
    arg4->unk_C = sp64;
    arg4->unk_E = sp62;
    arg4->unk_10 = sp60;
    return 0;
}

s32 func_801AA248(s16 *arg1, s16 *arg2, s16 *arg3) {
    s16 sp36;
    s16 sp34;
    s32 temp_v0;
    s8 temp_s0;
    s8 temp_s0_2;
    s8 temp_s0_3;
    s8 temp_t7;
    s32 phi_s0;
    s32 phi_s0_2;
    s32 phi_s0_3;
    s32 phi_s0_4;
    s32 phi_s0_5;
    s32 phi_s0_6;

    if (func_801AA3E4(&sp34, &sp36) != 0) {
        return 1;
    }
    *arg3 += sp34;
    *arg2 = *arg3;
    phi_s0_2 = 1;
    if (1 < 0x40) {
loop_3:
        phi_s0 = phi_s0_2;
        phi_s0_3 = phi_s0_2;
        phi_s0_4 = phi_s0_2;
        phi_s0_5 = phi_s0_2;
        phi_s0_6 = phi_s0_2;
        if (func_801AA3E4(arg1, &sp34, &sp36) != 0) {
            return 1;
        }
        if (sp34 == 0) {
            if ((s8) sp36 == 0xF) {
                sp36 = (s8) sp36 - 1;
                if ((s32) (s8) sp36 >= 0) {
                    do {
                        *(arg2 + (phi_s0 * 2)) = 0;
                        temp_t7 = (s8) sp36;
                        temp_s0 = phi_s0 + 1;
                        sp36 = temp_t7 - 1;
                        phi_s0 = (s32) temp_s0;
                        phi_s0_6 = (s32) temp_s0;
                    } while ((s32) temp_t7 >= 0);
                }
                goto block_16;
            }
            if (phi_s0_2 < 0x40) {
                do {
                    temp_s0_2 = phi_s0_3 + 1;
                    *(arg2 + (phi_s0_3 * 2)) = 0;
                    phi_s0_3 = (s32) temp_s0_2;
                } while ((s32) temp_s0_2 < 0x40);
            }
            goto block_17;
        }
        sp36 = (s8) sp36 - 1;
        if ((s32) (s8) sp36 > 0) {
            do {
                *(arg2 + (phi_s0_4 * 2)) = 0;
                temp_s0_3 = phi_s0_4 + 1;
                temp_v0 = (s32) (s8) sp36 > 0;
                sp36 = (s8) sp36 - 1;
                phi_s0_4 = (s32) temp_s0_3;
                phi_s0_5 = (s32) temp_s0_3;
            } while (temp_v0 != 0);
        }
        *(arg2 + (phi_s0_5 * 2)) = sp34;
        phi_s0_6 = (s32) (s8) (phi_s0_5 + 1);
block_16:
        phi_s0_2 = phi_s0_6;
        if (phi_s0_6 >= 0x40) {
            goto block_17;
        }
        goto loop_3;
    }
block_17:
    return 0;
}

s32 func_801AA3E4(s16 *arg0, s16 *arg1, s16 *arg2) {
    u8 sp26;
    u16 sp24;
    s16 temp_a1_2;
    s32 temp_a1;
    s32 temp_v1;
    u16 temp_a0;
    u16 temp_t1;
    u8 temp_a0_2;
    u8 temp_t6;
    s32 phi_a2;
    s32 phi_a1;
    s32 phi_a2_2;
    u16 phi_t1;
    u16 phi_t1_2;

    sp24 = 0;
    phi_a2 = 0;
    phi_t1_2 = sp24;
loop_1:
    temp_a0 = (arg0 + (phi_a2 * 2))->unk_30;
    temp_v1 = func_801AA520(0x10U) >> (0xF - phi_a2);
    phi_a1 = phi_a2;
    phi_a2_2 = phi_a2;
    if ((temp_a0 == 0xFFFF) || (temp_t1 = temp_v1 & 0xFFFF, phi_t1 = temp_t1, phi_t1_2 = temp_t1, (((s32) temp_a0 < (temp_v1 & 0xFFFF)) != 0))) {
        temp_a1 = (phi_a2 + 1) & 0xFF;
        phi_a2 = temp_a1;
        phi_a1 = temp_a1;
        phi_a2_2 = temp_a1;
        phi_t1 = phi_t1_2;
        if (temp_a1 < 0x10) {
            goto loop_1;
        }
    }
    if (phi_a1 >= 0x10) {
        return 1;
    }
    temp_a0_2 = *(((*(arg0 + phi_a2_2) + phi_t1) - (arg0 + (phi_a2_2 * 2))->unk_10) + arg0->unk_50);
    *arg2 = (s8) ((s32) temp_a0_2 >> 4);
    temp_t6 = temp_a0_2 & 0xF;
    D_80208E98 = (D_80208E98 + phi_a1) - 0xF;
    *arg1 = 0;
    if (temp_t6 != 0) {
        sp26 = temp_t6;
        *arg1 = func_801AA520(temp_t6, phi_a1, phi_a2_2, 0xFFFF);
        temp_a1_2 = *arg1;
        if ((s32) temp_a1_2 < (1 << (sp26 + 0x1F))) {
            *arg1 = temp_a1_2 + (-1 << sp26) + 1;
        }
    }
    return 0;
}

s32 func_801AA520(u8 arg0) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t6;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_t9_2;
    u8 temp_a1;
    u8 temp_t8_2;
    u8 temp_v1;
    u8 phi_v1;
    s32 phi_v0;
    u8 phi_a1;

    temp_a1 = D_80208E98;
    temp_a3 = arg0 & 0xFF;
    temp_t6 = ((s32) temp_a1 >> 3) & 0xFF;
    phi_v0 = temp_t6;
    phi_a1 = temp_a1;
    if (temp_t6 > 0) {
        temp_a2 = D_80208E90;
        do {
            temp_a0 = D_80208E94;
            temp_v1 = *(temp_a0 + temp_a2);
            temp_t8 = temp_a0 + 1;
            D_80208E94 = temp_t8;
            phi_v1 = temp_v1;
            if (D_80208E99 != 0) {
                phi_v1 = temp_v1;
                if (temp_v1 == 0) {
                    D_80208E94 = temp_t8 + 1;
                    phi_v1 = *(temp_t8 + temp_a2);
                }
            }
            if (phi_v1 == 0xFF) {
                D_80208E99 = 1;
            } else {
                D_80208E99 = 0;
            }
            temp_t9 = D_80208E9C << 8;
            D_80208E9C = temp_t9;
            temp_t9_2 = (phi_v0 - 1) & 0xFF;
            temp_t8_2 = D_80208E98 - 8;
            D_80208E9C = temp_t9 | phi_v1;
            D_80208E98 = temp_t8_2;
            phi_v0 = temp_t9_2;
        } while (temp_t9_2 > 0);
        phi_a1 = temp_t8_2 & 0xFF;
    }
    D_80208E98 = phi_a1 + temp_a3;
    return ((u32) (D_80208E9C << phi_a1) >> -temp_a3) & 0xFFFF;
}
