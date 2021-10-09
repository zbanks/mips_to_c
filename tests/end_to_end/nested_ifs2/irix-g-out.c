? func_004000FC(?);                                 /* static */
void test(s32 arg0);                                /* static */

struct _mips2c_stack_test {
    char pad0[0x18];
};                                                  /* size 0x18 */
void test(s32 arg0) {
    if (arg0 == 7) {
        func_004000FC(1);
        if (arg0 == 8) {
            func_004000FC(2);
        }
        func_004000FC(3);
    } else {
        func_004000FC(4);
    }
}
