struct _mips2c_stack_osPiGetCmdQueue {};            /* size 0x0 */

OSDevMgr __osPiDevMgr = {0, NULL, NULL, NULL, NULL, NULL, NULL};

OSMesgQueue *osPiGetCmdQueue(void) {
    if (__osPiDevMgr.active == 0) {
        return NULL;
    }
    return __osPiDevMgr.cmdQueue;
}
