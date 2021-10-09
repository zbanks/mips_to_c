struct _mips2c_stack_osJamMesg {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

OSThread *__osRunningThread = NULL;

s32 osJamMesg(OSMesgQueue *mq, void *msg, s32 flag) {
    s32 temp_t7;
    u32 temp_s0;

    temp_s0 = __osDisableInt();
    if (mq->validCount >= mq->msgCount) {
loop_1:
        if (flag == 1) {
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
    temp_t7 = mq->msgCount;
    mq->first = (s32) ((mq->first + temp_t7) - 1) % temp_t7;
    mq->msg[mq->first] = msg;
    mq->validCount += 1;
    if (mq->mtQueue->next != 0) {
        osStartThread(__osPopThread((OSThread **) mq));
    }
    __osRestoreInt(temp_s0);
    return 0;
}
