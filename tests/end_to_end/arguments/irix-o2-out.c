extern s32 D_4100E0;
extern f32 D_4100E4;

struct _mips2c_stack_test {};                       /* size 0x0 */
void test(f32 arg0, s32 arg1, f32 arg2, s32 arg3, f32 arg4, s32 arg5) {
    D_4100E4 = arg0 + arg2 + arg4;
    D_4100E0 = arg1 + arg3 + arg5;
}
