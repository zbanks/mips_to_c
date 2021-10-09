? func_0040012C(?);                                 /* static */
void test(s32 arg0);                                /* static */

struct _mips2c_stack_test {
    char pad0[0x18];
};                                                  /* size 0x18 */
void test(s32 arg0) {
    if (arg0 == 7) {
        func_0040012C(1);
        if (arg0 == 8) {
            func_0040012C(2);
        }
        func_0040012C(3);
        return;
    }
    func_0040012C(4);
    if (arg0 == 9) {
        func_0040012C(5);
    }
    func_0040012C(6);
}
