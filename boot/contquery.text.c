u8 __osContLastCmd;
OSPifRam __osContPifRam;



s32 osContStartQuery(OSMesgQueue *mq) {
    s32 sp1C;
    s32 temp_v0;

    __osSiGetAccess();
    if (__osContLastCmd != 0) {
        __osPackRequestData(0U);
        __osSiRawStartDma(1, (void *) &__osContPifRam);
        osRecvMesg(mq, NULL, 1);
    }
    temp_v0 = __osSiRawStartDma(0, (void *) &__osContPifRam);
    sp1C = temp_v0;
    __osContLastCmd = 0;
    __osSiRelAccess();
    return temp_v0;
}

void osContGetQuery(OSContStatus *data) {
    u8 sp1F;

    __osContGetInitData(&sp1F, data);
}

