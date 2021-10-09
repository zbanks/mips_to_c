struct _mips2c_stack_test {
    char pad0[0x10];
    f64 sp10;                                       /* +0x10; inferred */
};                                                  /* size 0x18 */
f32 test(f32 arg0) {
    f64 sp10;

    sp10 = (f64) sqrtf(fabsf(arg0));
    return (f32) sqrt(fabs(sp10));
}
