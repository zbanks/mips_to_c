struct _mips2c_stack_test {};                       /* size 0x0 */
void test(struct A *a, s32 b, s16 c) {
    a->x = 2;
    a->y = (s16) b;
    a->z = c;
    a->w = c + b;
}
