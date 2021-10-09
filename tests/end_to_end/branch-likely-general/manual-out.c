struct _mips2c_stack_test {};                       /* size 0x0 */
void test(s32 arg0) {
    if (arg0 == 0) {
        *NULL = 0;
    } else {
        *NULL = 1;
    }
    *NULL = 2;
}
