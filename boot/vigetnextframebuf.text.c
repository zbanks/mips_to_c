struct _mips2c_stack_osViGetNextFramebuffer {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

extern __OSViContext D_80098060 + 0x30;
__OSViContext *__osViNext = &D_80098060 + 0x30;

void *osViGetNextFramebuffer(void) {
    void *sp18;
    u32 temp_a0;

    temp_a0 = __osDisableInt();
    sp18 = __osViNext->framep;
    __osRestoreInt(temp_a0);
    return sp18;
}
