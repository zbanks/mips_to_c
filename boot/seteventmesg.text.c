s32 D_80097F10 = 0;
__OSEventState __osEventStateTab[16];
s32 __osShutdown = 0;



void osSetEventMesg(u32 e, OSMesgQueue *mq, void *m) {
    __OSEventState *sp20;
    __OSEventState *temp_t9;
    u32 temp_v0;

    temp_v0 = __osDisableInt();
    temp_t9 = &__osEventStateTab[e];
    sp20 = temp_t9;
    temp_t9->messageQueue = mq;
    sp20->message = m;
    if (e == 0xE) {
        if ((__osShutdown != 0) && (D_80097F10 == 0)) {
            osSendMesg(mq, m, 0);
        }
        D_80097F10 = 1;
    }
    __osRestoreInt(temp_v0);
}

