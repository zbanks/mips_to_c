struct _mips2c_stack_test {
    char pad0[0x28];
};                                                  /* size 0x28 */
void test(s32 x, s16 *y, s32 z, s8 *r, s16 *s, s32 *t, s32 *u) {
    s32 *phi_s0;

    phi_s0 = NULL;
loop_1:
    phi_s0 = foo(phi_s0, y, t);
    goto loop_1;
}
