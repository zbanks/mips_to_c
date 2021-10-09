void test(s32 arg0, s32 *arg1);                     /* static */

struct _mips2c_stack_test {
    char pad0[0x18];
    s32 sp18;                                       /* +0x18; inferred */
    s32 sp1C;                                       /* +0x1C; inferred */
};                                                  /* size 0x20 */
void test(s32 arg0, s32 *arg1) {
    s32 sp1C;
    s32 sp18;

    sp18 = func_00400090(arg0, arg1);
    sp1C = func_00400090(arg0, &arg0);
    func_00400090(*arg1, arg1);
}
