OSThread *__osActiveQueue = (OSThread *) &__osThreadTail;
OSThread *__osThreadTail = NULL;



OSThread *__osGetActiveQueue(void) {
    return __osActiveQueue;
}

