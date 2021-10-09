struct _mips2c_stack___osSiCreateAccessQueue {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack___osSiGetAccess {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack___osSiRelAccess {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

static OSMesgQueue __osSiAccessQueue;
static void *siAccessBuf;
u32 __osSiAccessQueueEnabled = 0;

void __osSiCreateAccessQueue(void) {
    __osSiAccessQueueEnabled = 1;
    osCreateMesgQueue(&__osSiAccessQueue, &siAccessBuf, 1);
    osSendMesg(&__osSiAccessQueue, NULL, 0);
}

void __osSiGetAccess(void) {
    void *sp1C;

    if (__osSiAccessQueueEnabled == 0) {
        __osSiCreateAccessQueue();
    }
    osRecvMesg(&__osSiAccessQueue, &sp1C, 1);
}

void __osSiRelAccess(void) {
    osSendMesg(&__osSiAccessQueue, NULL, 0);
}
