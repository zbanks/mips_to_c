s32 func_004000F0();                                /* static */
? func_00400108(s32);                               /* static */
void test();                                        /* static */
extern s32 D_410120;

struct _mips2c_stack_test {
    char pad0[0x1C];
    s32 sp1C;                                       /* +0x1C; inferred */
};                                                  /* size 0x20 */
void test(void) {
    s32 sp1C;

    sp1C = func_004000F0();
    D_410120 = 1;
    func_00400108(sp1C);
}
