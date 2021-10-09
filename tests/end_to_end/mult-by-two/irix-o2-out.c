extern f32 D_4100E0;
extern f64 D_4100E8;

struct _mips2c_stack_test {};                       /* size 0x0 */
void test(void) {
    D_4100E0 *= 2.0f;
    D_4100E8 *= 2.0;
}
