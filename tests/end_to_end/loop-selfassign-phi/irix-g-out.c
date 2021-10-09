s32 func_004000D8(s32);                             /* static */
void test(s32 arg0);                                /* static */

struct _mips2c_stack_test {
    char pad0[0x18];
};                                                  /* size 0x18 */
void test(s32 arg0) {
loop_1:
    if (arg0 >= 3) {
        arg0 = func_004000D8(arg0);
    }
    goto loop_1;
}
