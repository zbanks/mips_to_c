struct _mips2c_stack_test {};                       /* size 0x0 */
void test(void) {
    *NULL = 0;
    *(s32 *)1 = 0;
}
