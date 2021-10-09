OSThread *__osFaultedThread = NULL;



OSThread *__osGetCurrFaultedThread(void) {
    return __osFaultedThread;
}

