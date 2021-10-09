OSThread *__osRunQueue = (OSThread *) &__osThreadTail;
OSThread *__osRunningThread = NULL;
OSThread *__osThreadTail = NULL;



void osStartThread(OSThread *param_1) {
    OSThread **temp_t0;
    OSThread *temp_t9;
    u16 temp_s1;

    temp_s1 = param_1->state;
    if (temp_s1 != 1) {
        if (temp_s1 == 8) {
            param_1->state = 2;
            __osEnqueueThread(&__osRunQueue, param_1);
        }
    } else {
        temp_t0 = param_1->queue;
        if ((temp_t0 == 0) || (temp_t0 == &__osRunQueue)) {
            param_1->state = 2;
            __osEnqueueThread(&__osRunQueue, param_1);
        } else {
            param_1->state = 8;
            __osEnqueueThread(param_1->queue, param_1);
            __osEnqueueThread(&__osRunQueue, __osPopThread(param_1->queue));
        }
    }
    if (__osRunningThread == 0) {
        __osDispatchThread();
    } else {
        temp_t9 = __osRunningThread;
        if (temp_t9->priority < __osRunQueue->priority) {
            temp_t9->state = 2;
            __osEnqueueAndYield(&__osRunQueue);
        }
    }
    __osRestoreInt(__osDisableInt());
}

