struct _mips2c_stack_test {
    char pad0[0x1C];
    s32* sp1C;                                      /* +0x1C; inferred */
};                                                  /* size 0x20 */
void test(s32 x, s16* y, s32 z, s8* r, s16* s, s32* t, s32* u) {
    s32* sp1C;

    sp1C = NULL;
loop_1:
    sp1C = foo(sp1C, y, t);
    goto loop_1;
}
