OSThread *__osRunningThread = NULL;



s32 osGetThreadPri(OSThread *t) {
    OSThread *phi_a0;

    phi_a0 = t;
    if (t == 0) {
        phi_a0 = __osRunningThread;
    }
    return phi_a0->priority;
}

