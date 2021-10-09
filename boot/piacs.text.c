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

