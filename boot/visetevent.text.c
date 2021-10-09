struct _mips2c_stack_osViSetEvent {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

extern __OSViContext D_80098060 + 0x30;
__OSViContext *__osViNext = &D_80098060 + 0x30;

void osViSetEvent(OSMesgQueue *mq, void *m, u32 retraceCount) {
    u32 temp_a0;

    temp_a0 = __osDisableInt();
    __osViNext->msgq = mq;
    __osViNext->msg = m;
    __osViNext->retraceCount = (u16) retraceCount;
    __osRestoreInt(temp_a0);
}
