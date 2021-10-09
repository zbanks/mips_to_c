OSThread *__osActiveQueue = (OSThread *) &__osThreadTail;
OSThread *__osRunningThread = NULL;
OSThread *__osThreadTail = NULL;



void osDestroyThread(OSThread *puParm1) {
    OSThread *temp_s1;
    OSThread *temp_s2;
    OSThread *temp_t0;
    OSThread *phi_s1;

    if (puParm1 == 0) {
        puParm1 = __osRunningThread;
    } else if (puParm1->state != 1) {
        __osDequeueThread(puParm1->queue, puParm1);
    }
    temp_t0 = __osActiveQueue;
    if (temp_t0 == puParm1) {
        __osActiveQueue = temp_t0->tlnext;
    } else {
        temp_s1 = __osActiveQueue;
        phi_s1 = temp_s1;
        if (temp_s1->priority != -1) {
loop_7:
            temp_s2 = phi_s1->tlnext;
            if (temp_s2 == puParm1) {
                phi_s1->tlnext = puParm1->tlnext;
            } else {
                phi_s1 = temp_s2;
                if (temp_s2->priority != -1) {
                    goto loop_7;
                }
            }
        }
    }
    if (puParm1 == __osRunningThread) {
        __osDispatchThread();
    }
    __osRestoreInt(__osDisableInt());
}

