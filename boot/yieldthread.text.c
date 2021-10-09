OSThread *__osRunQueue = (OSThread *) &__osThreadTail;
OSThread *__osRunningThread = NULL;
OSThread *__osThreadTail = NULL;



void osYieldThread(void) {
    u32 temp_s0;

    temp_s0 = __osDisableInt();
    __osRunningThread->state = 2;
    __osEnqueueAndYield(&__osRunQueue);
    __osRestoreInt(temp_s0);
}

