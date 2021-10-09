extern s32 D_4100E0;

struct _mips2c_stack_test {};                       /* size 0x0 */
void test(void) {
loop_1:
    if (D_4100E0 != 2) {
        D_4100E0 = 1;
        goto loop_1;
    }
}
