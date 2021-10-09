? func_00400090(? *, ? *);                          /* static */
void test(? *arg0, ? *arg1);                        /* static */

struct _mips2c_stack_test {
    char pad0[0x18];
};                                                  /* size 0x18 */
void test(? *arg0, ? *arg1) {
    arg0 = &arg0;
    arg1 = &arg1;
    func_00400090(arg0, arg1);
    arg0 = (? *) arg1;
    func_00400090(arg0, arg1);
}
