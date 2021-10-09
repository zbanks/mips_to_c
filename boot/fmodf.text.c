struct _mips2c_stack_fmodf {};                      /* size 0x0 */

f32 fmodf(f32 dividend, f32 divisor) {
    if (divisor == 0.0f) {
        return 0.0f;
    }
    return dividend - ((f32) (s32) (dividend / divisor) * divisor);
}
