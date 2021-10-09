s32 func_004000F4(s32);                             /* static */
void test(s32 arg0);                                /* static */

struct _mips2c_stack_test {
    char pad0[0x20];
};                                                  /* size 0x20 */
void test(s32 arg0) {
    s32 phi_s0;

    phi_s0 = arg0;
loop_1:
    if (phi_s0 < 3) {
        goto loop_1;
    }
    phi_s0 = func_004000F4(phi_s0);
    goto loop_1;
}
