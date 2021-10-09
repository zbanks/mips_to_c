struct _mips2c_stack_osRecvMesg {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

OSThread *__osRunningThread = NULL;

s32 osRecvMesg(OSMesgQueue *mq, void **msg, s32 flags) {
    u32 temp_s0;

    temp_s0 = __osDisableInt();
    if (mq->validCount == 0) {
loop_1:
        if (flags == 0) {
            __osRestoreInt(temp_s0);
            return -1;
        }
        __osRunningThread->state = 8;
        __osEnqueueAndYield((OSThread **) mq);
        if (mq->validCount != 0) {
            goto block_4;
        }
        goto loop_1;
    }
block_4:
    if (msg != 0) {
        *msg = mq->msg[mq->first];
    }
    mq->first = (s32) (mq->first + 1) % (s32) mq->msgCount;
    mq->validCount += -1;
    if (mq->fullQueue->next != 0) {
        osStartThread(__osPopThread(&mq->fullQueue));
    }
    __osRestoreInt(temp_s0);
    return 0;
}
