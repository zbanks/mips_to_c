struct _mips2c_stack___osViGetCurrentContext {};    /* size 0x0 */

__OSViContext D_80098060[2] = {
    {0, 0, NULL, NULL, 0, NULL, NULL, {0.0f, 0, 0}, {0.0f, 0, 0}},
    {0, 0, NULL, NULL, 0, NULL, NULL, {0.0f, 0, 0}, {0.0f, 0, 0}},
};
__OSViContext *__osViCurr = D_80098060;

__OSViContext *__osViGetCurrentContext(void) {
    return __osViCurr;
}
