struct _mips2c_stack_test {};                       /* size 0x0 */
void test(u32 arg0) {
    *NULL = arg0 >> 1;
    *NULL = 5;
}
