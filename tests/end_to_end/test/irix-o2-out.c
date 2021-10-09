? func_004000B0();                                  /* static */
void test();                                        /* static */
extern s32 D_4100E0;

struct _mips2c_stack_test {
    char pad0[0x18];
};                                                  /* size 0x18 */
void test(void) {
    func_004000B0();
    D_4100E0 = 4;
}
