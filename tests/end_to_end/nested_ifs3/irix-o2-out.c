? func_00400114(?, s32);                            /* static */
void test(s32 arg0);                                /* static */

struct _mips2c_stack_test {
    char pad0[0x18];
};                                                  /* size 0x18 */
void test(s32 arg0) {
    s32 temp_a1;

    temp_a1 = arg0;
    if (arg0 == 7) {
        arg0 = temp_a1;
        func_00400114(1, temp_a1);
        if (arg0 == 8) {
            func_00400114(2, arg0);
        }
        func_00400114(3);
        return;
    }
    arg0 = temp_a1;
    func_00400114(4, temp_a1);
    if (arg0 == 9) {
        func_00400114(5, arg0);
    }
    func_00400114(6);
}
