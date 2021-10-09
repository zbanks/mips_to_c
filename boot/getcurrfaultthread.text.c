struct _mips2c_stack___osGetCurrFaultedThread {};   /* size 0x0 */

OSThread *__osFaultedThread = NULL;

OSThread *__osGetCurrFaultedThread(void) {
    return __osFaultedThread;
}
