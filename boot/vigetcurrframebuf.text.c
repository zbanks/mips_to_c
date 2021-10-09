struct _mips2c_stack_osViGetCurrentFramebuffer {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

__OSViContext D_80098060[2] = {
    {0, 0, NULL, NULL, 0, NULL, NULL, {0.0f, 0, 0}, {0.0f, 0, 0}},
    {0, 0, NULL, NULL, 0, NULL, NULL, {0.0f, 0, 0}, {0.0f, 0, 0}},
};
__OSViContext *__osViCurr = D_80098060;

void *osViGetCurrentFramebuffer(void) {
    void *sp18;
    u32 temp_a0;

    temp_a0 = __osDisableInt();
    sp18 = __osViCurr->framep;
    __osRestoreInt(temp_a0);
    return sp18;
}
