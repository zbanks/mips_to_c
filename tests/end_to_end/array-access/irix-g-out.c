extern s32 *D_410140;

struct _mips2c_stack_test {};                       /* size 0x0 */
void test(struct A *a, s32 b) {
    D_410140 = a->array[b];
    D_410140 = (s32 *) &a->array[b];
    D_410140 = (s32 *) a->array2[b].x;
    D_410140 = &a->array2[b].x;
    D_410140 = (s32 *) a[b].y;
    D_410140 = (s32 *) a->array2[3].x;
    D_410140 = &a->array2[3].x;
}
