? foo(s8 *);                                        /* extern */

struct _mips2c_stack_test {};                       /* size 0x0 */
void test(struct A *a) {
    foo(&a->b);
}
