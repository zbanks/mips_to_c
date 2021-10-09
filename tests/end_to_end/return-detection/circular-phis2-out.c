? bar();                                            /* extern */

struct _mips2c_stack_test {
    char pad0[0x30];
};                                                  /* size 0x30 */
void test(void) {
    bar();
    do {
        if (1 != 0) {
            bar();
        }
    } while ((1 < 1) < 0);
}
