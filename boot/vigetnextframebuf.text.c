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

