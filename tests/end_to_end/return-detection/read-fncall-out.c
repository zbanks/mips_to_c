? bar();                                            /* extern */

struct _mips2c_stack_test {
    char pad0[0x30];
};                                                  /* size 0x30 */
void test(void) {
    // Flowgraph is not reducible, falling back to gotos-only mode.
    bar();
    if (4 == 0) {
        goto block_3;
    }
block_1:
    if (1 == 0) {
        goto block_3;
    }
    bar();
block_3:
    if ((1 < 1) < 0) {
        goto block_1;
    }
    return;
}
