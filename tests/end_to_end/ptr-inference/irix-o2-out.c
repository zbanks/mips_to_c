struct _mips2c_stack_test {
    char pad0[0x18];
    struct A *sp18;                                 /* +0x18; inferred */
    s32 *sp1C;                                      /* +0x1C; inferred */
};                                                  /* size 0x20 */
void test(void) {
    s32 *sp1C;
    struct A *sp18;

    foo(&sp1C, &sp18);
}
