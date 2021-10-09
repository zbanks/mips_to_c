struct _mips2c_stack___osPiCreateAccessQueue {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack___osPiGetAccess {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack___osPiRelAccess {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void *D_8009E3F0[1];
OSMesgQueue __osPiAccessQueue;
s32 __osPiAccessQueueEnabled = 0;

void __osPiCreateAccessQueue(void) {
    __osPiAccessQueueEnabled = 1;
    osCreateMesgQueue(&__osPiAccessQueue, D_8009E3F0, 1);
    osSendMesg(&__osPiAccessQueue, NULL, 0);
}

void __osPiGetAccess(void) {
    void *sp1C;

    if (__osPiAccessQueueEnabled == 0) {
        __osPiCreateAccessQueue();
    }
    osRecvMesg(&__osPiAccessQueue, &sp1C, 1);
}

void __osPiRelAccess(void) {
    osSendMesg(&__osPiAccessQueue, NULL, 0);
}
