s32 bar(f32 x);                                     /* extern */
extern s32 (*glob2)(f32);

struct _mips2c_stack_test {};                       /* size 0x0 */
void test(void) {
    glob = foo;
    glob = bar;
    glob2 = foo;
    glob2 = bar;
}
