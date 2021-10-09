struct _mips2c_stack_osSendMesg {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

OSThread *__osRunningThread = NULL;

s32 osSendMesg(OSMesgQueue *mq, void *msg, s32 flags) {
    u32 temp_s0;

    temp_s0 = __osDisableInt();
    if (mq->validCount >= mq->msgCount) {
loop_1:
        if (flags == 1) {
            __osRunningThread->state = 8;
            __osEnqueueAndYield(&mq->fullQueue);
            if (mq->validCount < mq->msgCount) {
                goto block_5;
            }
            goto loop_1;
        }
        __osRestoreInt(temp_s0);
        return -1;
    }
block_5:
    mq->msg[(s32) (mq->first + mq->validCount) % (s32) mq->msgCount] = msg;
    mq->validCount += 1;
    if (mq->mtQueue->next != 0) {
        osStartThread(__osPopThread((OSThread **) mq));
    }
    __osRestoreInt(temp_s0);
    return 0;
}
