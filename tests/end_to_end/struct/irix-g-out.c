struct _mips2c_stack_test {
    char pad0[0x4];
    s32 sp4;                                        /* +0x4; inferred */
};                                                  /* size 0x8 */
Blah *test(Blah *b, Blah *b2) {
    s32 sp4;

    sp4 = b->a + b->b;
    b->b = sp4;
    b2->a = b->a;
    b2->b = b->b;
    return b;
}
