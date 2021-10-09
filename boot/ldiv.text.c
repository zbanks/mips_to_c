struct _mips2c_stack_ldiv {
    /* 0x0 */ s32 sp0;                              /* inferred */
    /* 0x4 */ s32 sp4;                              /* inferred */
};                                                  /* size = 0x8 */

struct _mips2c_stack_lldiv {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ u32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ u32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

ldiv_t ldiv(ldiv_t *__return__, s32 numer, s32 denom) {
    s32 sp4;
    s32 sp0;
    s32 temp_lo;
    s32 temp_v1;

    temp_lo = numer / denom;
    sp0 = temp_lo;
    temp_v1 = numer - (denom * temp_lo);
    sp4 = temp_v1;
    if (temp_lo < 0) {
        sp0 = temp_lo;
        sp4 = temp_v1;
        if (temp_v1 > 0) {
            sp4 = temp_v1 - denom;
            sp0 = temp_lo + 1;
        }
    }
    __return__->quot = sp->unk_0;
    __return__->rem = sp->unk_4;
    return (ldiv_t) __return__;
}

lldiv_t lldiv(lldiv_t *__return__, s64 numer, s64 numer_unk4, s64 denom, s64 denom_unk4) {
    u32 sp2C;
    s32 sp28;
    u32 sp24;
    s32 sp20;
    s32 temp_t8;
    s32 temp_v0;
    s64 temp_ret;
    s64 temp_ret_2;
    u32 temp_t3;
    u32 temp_t9;
    u32 temp_v1;
    u32 temp_v1_2;

    temp_ret = __ll_div(numer, numer_unk4, (s64) (s32) denom, (s64) (s32) denom_unk4);
    temp_v0 = temp_ret;
    temp_v1 = (u32) (u64) temp_ret;
    sp20 = temp_v0;
    sp24 = temp_v1;
    temp_ret_2 = __ll_mul((s64) (s32) denom, (s64) (s32) denom_unk4, (s64) temp_v0, (s64) temp_v1);
    temp_v1_2 = (u32) (u64) temp_ret_2;
    temp_t8 = ((s32) numer - temp_ret_2) - ((u32) numer_unk4 < temp_v1_2);
    temp_t9 = (u32) numer_unk4 - temp_v1_2;
    sp2C = temp_t9;
    sp28 = temp_t8;
    if (sp20 <= 0) {
        if (sp20 >= 0) {

        } else if ((temp_t8 >= 0) && ((temp_t3 = sp24 + 1, (temp_t8 > 0)) || (temp_t9 != 0))) {
            sp20 += temp_t3 == 0;
            sp24 = temp_t3;
            sp2C = temp_t9 - (u32) denom_unk4;
            sp28 = (temp_t8 - (s32) denom) - (temp_t9 < (u32) denom_unk4);
        }
    }
    __return__->unk_0 = (s32) sp20.unk_0;
    __return__->unk_4 = (s32) sp20.unk_4;
    __return__->unk_8 = (s32) sp20.unk_8;
    __return__->unk_C = (s32) sp20.unk_C;
    return (lldiv_t) __return__;
}
