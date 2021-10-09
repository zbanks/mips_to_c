struct _mips2c_stack_osStopThread {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

OSThread *__osRunningThread = NULL;

void osStopThread(OSThread *t) {
    u16 phi_s1;

    if (t == 0) {
        phi_s1 = 4U;
    } else {
        phi_s1 = t->state;
    }
    if (phi_s1 != 2) {
        if (phi_s1 != 4) {
            if (phi_s1 != 8) {

            } else {
                goto block_8;
            }
        } else {
            __osRunningThread->state = 1;
            __osEnqueueAndYield(NULL);
        }
    } else {
block_8:
        t->state = 1;
        __osDequeueThread(t->queue, t);
    }
    __osRestoreInt(__osDisableInt());
}
