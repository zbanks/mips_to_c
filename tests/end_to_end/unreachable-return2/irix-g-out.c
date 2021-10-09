extern s32 D_4100F0;

struct _mips2c_stack_test {};                       /* size 0x0 */
void test(void) {
loop_0:
    if (D_4100F0 != 2) {
        D_4100F0 = 1;
        goto loop_0;
    }
}
