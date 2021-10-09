extern s32 D_410100;

struct _mips2c_stack_test {};                       /* size 0x0 */
void test(s32 arg0, s32 arg1, s32 arg2) {
    D_410100 = arg0 == arg1;
    D_410100 = arg0 != arg2;
    D_410100 = arg0 < arg1;
    D_410100 = (arg1 < arg0) ^ 1;
    D_410100 = arg0 == 0;
    D_410100 = arg1 != 0;
}
