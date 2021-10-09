struct _mips2c_stack_osGetThreadId {};              /* size 0x0 */

OSThread *__osRunningThread = NULL;

s32 osGetThreadId(OSThread *t) {
    OSThread *phi_a0;

    phi_a0 = t;
    if (t == 0) {
        phi_a0 = __osRunningThread;
    }
    return phi_a0->id;
}
