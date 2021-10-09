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

