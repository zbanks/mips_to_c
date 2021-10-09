extern s32 D_4100F0;

struct _mips2c_stack_test {};                       /* size 0x0 */
void test(void) {
    D_4100F0 = 1;
loop_1:
    goto loop_1;
}
