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

