extern s32 D_4100E0;

struct _mips2c_stack_test {};                       /* size 0x0 */
void test(void) {
loop_0:
    D_4100E0 = 1;
    goto loop_0;
}
