extern s32 D_410110;

struct _mips2c_stack_test {};                       /* size 0x0 */
void test(s8 arg0) {
    s8 temp_v0;

    temp_v0 = arg0 * 2;
    D_410110 = (s32) arg0;
    D_410110 = (s32) temp_v0;
    D_410110 = (s32) (s8) (arg0 * 3);
    D_410110 = (s32) (s16) arg0;
    D_410110 = (s32) (s16) temp_v0;
    D_410110 = (s32) (s16) (arg0 * 3);
}
