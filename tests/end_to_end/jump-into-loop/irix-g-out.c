? func_0040010C(s32);                               /* static */
s32 test(s32 arg0);                                 /* static */

struct _mips2c_stack_test {
    char pad0[0x18];
};                                                  /* size 0x18 */
s32 test(s32 arg0) {
loop_3:
    func_0040010C(arg0);
    arg0 *= 2;
    if (arg0 < 4) {
        func_0040010C(arg0);
        arg0 += 1;
        goto loop_3;
    }
    return arg0;
}
