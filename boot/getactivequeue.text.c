struct _mips2c_stack___osGetActiveQueue {};         /* size 0x0 */

OSThread *__osActiveQueue = (OSThread *) &__osThreadTail;
OSThread *__osThreadTail = NULL;

OSThread *__osGetActiveQueue(void) {
    return __osActiveQueue;
}
