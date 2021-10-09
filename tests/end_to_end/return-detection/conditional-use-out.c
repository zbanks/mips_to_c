? foo(?);                                           /* extern */

struct _mips2c_stack_test {
    char pad0[0x30];
};                                                  /* size 0x30 */
void test(void) {
    if ((1 != 0) && (1 != 0)) {
        foo(4);
    }
}
