struct _mips2c_stack_test {};                       /* size 0x0 */
f32 test(f32 arg0) {
    return (f32) sqrt(fabs((f64) sqrtf(fabsf(arg0))));
}
