OSThread *__osRunQueue = (OSThread *) &__osThreadTail;
OSThread *__osRunningThread = NULL;
OSThread *__osThreadTail = NULL;



void osSetThreadPri(OSThread *t, s32 pri) {
    OSThread *temp_t5;

    if (t == 0) {
        t = __osRunningThread;
    }
    if (t->priority != pri) {
        t->priority = pri;
        if ((t != __osRunningThread) && (t->state != 1)) {
            __osDequeueThread(t->queue, t);
            __osEnqueueThread(t->queue, t);
        }
        temp_t5 = __osRunningThread;
        if (temp_t5->priority < __osRunQueue->priority) {
            temp_t5->state = 2;
            __osEnqueueAndYield(&__osRunQueue);
        }
    }
    __osRestoreInt(__osDisableInt());
}

