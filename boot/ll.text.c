struct _mips2c_stack___ll_div {};                   /* size 0x0 */

struct _mips2c_stack___ll_lshift {};                /* size 0x0 */

struct _mips2c_stack___ll_mod {
    /* 0x0 */ s64 sp0;                              /* inferred */
};                                                  /* size = 0x8 */

struct _mips2c_stack___ll_mul {};                   /* size 0x0 */

struct _mips2c_stack___ll_rem {};                   /* size 0x0 */

struct _mips2c_stack___ll_rshift {};                /* size 0x0 */

struct _mips2c_stack___ull_div {};                  /* size 0x0 */

struct _mips2c_stack___ull_divremi {};              /* size 0x0 */

struct _mips2c_stack___ull_rem {};                  /* size 0x0 */

struct _mips2c_stack___ull_rshift {};               /* size 0x0 */

s64 __ull_rshift(u64 left, u64 left_unk4, u64 right, u64 right_unk4) {
    return (s64) (left >> right) >> 0x20;
}

u64 __ull_rem(u64 left, u64 left_unk4, u64 right, u64 right_unk4) {
    return (u64) ((s64) (left % right) >> 0x20);
}

u64 __ull_div(u64 left, u64 left_unk4, u64 right, u64 right_unk4) {
    return (u64) ((s64) (left / right) >> 0x20);
}

s64 __ll_lshift(s64 left, s64 left_unk4, s64 right, s64 right_unk4) {
    return (s64) (left << right) >> 0x20;
}

s64 __ll_rem(s64 left, s64 left_unk4, u64 right, u64 right_unk4) {
    return (s64) ((u64) left % right) >> 0x20;
}

s64 __ll_div(s64 left, s64 left_unk4, s64 right, s64 right_unk4) {
    if ((right == -1) && (left == (1 << 0x3F))) {
        MIPS2C_BREAK(6);
    }
    return (s64) (left / right) >> 0x20;
}

s64 __ll_mul(s64 left, s64 left_unk4, s64 right, s64 right_unk4) {
    return (s64) (left * right) >> 0x20;
}

void __ull_divremi(u64 *quotient, u64 *remainder, u64 dividend, u64 dividend_unk4, u16 divisor) {
    *quotient = dividend / (u64) (s16) divisor;
    *remainder = dividend % (u64) (s16) divisor;
}

s64 __ll_mod(s64 left, s64 left_unk4, s64 right, s64 right_unk4) {
    s64 sp0;
    s64 temp_hi;

    temp_hi = left % right;
    if ((right == -1) && (left == (1 << 0x3F))) {
        MIPS2C_BREAK(6);
    }
    sp0 = temp_hi;
    if ((((s32) temp_hi < 0) && ((s32) right > 0)) || (((s32) sp0 > 0) && ((s32) right < 0))) {
        sp0 += right;
    }
    return (s64) (s32) sp0;
}

s64 __ll_rshift(s64 left, s64 left_unk4, s64 right, s64 right_unk4) {
    return (s64) (left >> right) >> 0x20;
}
