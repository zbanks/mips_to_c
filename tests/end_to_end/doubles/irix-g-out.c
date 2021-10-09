extern f64 D_410180;

struct _mips2c_stack_test {
    f64 sp0;                                        /* +0x0; inferred */
    f64 sp8;                                        /* +0x8; inferred */
};                                                  /* size 0x10 */
f64 test(f64 arg0, s32 arg2, f64 arg4) {
    f64 sp8;
    f64 sp0;

    sp8 = ((f64) arg2 * arg0) + (arg0 / arg4);
    sp8 -= 7.0;
    if ((sp8 < arg4) || (sp8 == arg4) || (sp8 > 9.0)) {
        sp0 = 5.0;
    } else {
        sp0 = 6.0;
    }
    D_410180 = sp0;
    return sp0;
}
