struct _mips2c_stack_osCreateViManager {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ u32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_viMgrMain {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ void *sp44;                          /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

s32 __additional_scanline = 0;
u32 __osBaseCounter;
u64 __osCurrentTime;
OSDevMgr __osViDevMgr = {0, NULL, NULL, NULL, NULL, NULL, NULL};
u32 __osViIntrCount;
OSIoMesg viCounterMsg;
void *viEventBuf[5];
OSMesgQueue viEventQueue;
u16 viRetrace;
OSIoMesg viRetraceMsg;
OSThread viThread;

void osCreateViManager(s32 pri) {
    u32 sp2C;
    s32 sp28;
    s32 temp_v0;

    if (__osViDevMgr.active == 0) {
        __osTimerServicesInit();
        __additional_scanline = 0;
        osCreateMesgQueue(&viEventQueue, viEventBuf, 5);
        viRetraceMsg.hdr.type = 0xD;
        viRetraceMsg.hdr.pri = 0;
        viRetraceMsg.hdr.retQueue = NULL;
        viCounterMsg.hdr.type = 0xE;
        viCounterMsg.hdr.pri = 0;
        viCounterMsg.hdr.retQueue = NULL;
        osSetEventMesg(7U, &viEventQueue, (void *) &viRetraceMsg);
        osSetEventMesg(3U, &viEventQueue, (void *) &viCounterMsg);
        sp28 = -1;
        temp_v0 = osGetThreadPri(NULL);
        if (temp_v0 < pri) {
            sp28 = temp_v0;
            osSetThreadPri(NULL, pri);
        }
        sp2C = __osDisableInt();
        __osViDevMgr.active = 1;
        __osViDevMgr.thread = &viThread;
        __osViDevMgr.cmdQueue = &viEventQueue;
        __osViDevMgr.evtQueue = &viEventQueue;
        __osViDevMgr.acsQueue = NULL;
        __osViDevMgr.piDmaCallback = NULL;
        __osViDevMgr.epiDmaCallback = NULL;
        osCreateThread(&viThread, 0, (void *) viMgrMain, (void *) &__osViDevMgr, (void *) &viEventQueue, pri);
        __osViInit();
        osStartThread(&viThread);
        __osRestoreInt(sp2C);
        if (sp28 != -1) {
            osSetThreadPri(NULL, sp28);
        }
    }
}

void viMgrMain(OSDevMgr *iParm1) {
    void *sp44;
    __OSViContext *temp_v0;
    s32 temp_t6;
    u16 temp_t7;
    u16 temp_v1;
    u16 temp_v1_2;
    u32 temp_s0;
    u32 temp_t5;
    u32 temp_t7_2;
    u32 temp_v0_2;

    sp44 = NULL;
    temp_v1 = __osViGetCurrentContext()->retraceCount;
    viRetrace = temp_v1;
    if (temp_v1 == 0) {
        viRetrace = 1;
    }
loop_3:
    osRecvMesg(iParm1->evtQueue, &sp44, 1);
    temp_v1_2 = *sp44;
    if (temp_v1_2 == 0xD) {
        __osViSwapContext();
        temp_t7 = (viRetrace - 1) & 0xFFFF;
        viRetrace = temp_t7;
        if (temp_t7 == 0) {
            temp_v0 = __osViGetCurrentContext();
            if (temp_v0->msgq != 0) {
                osSendMesg(temp_v0->msgq, temp_v0->msg, 0);
            }
            viRetrace = temp_v0->retraceCount;
        }
        temp_s0 = __osBaseCounter;
        __osViIntrCount += 1;
        temp_v0_2 = osGetCount();
        temp_t5 = __osCurrentTime.unk_4;
        temp_t7_2 = (temp_v0_2 - temp_s0) + temp_t5;
        temp_t6 = (temp_t7_2 < temp_t5) + __osCurrentTime.unk_0;
        __osBaseCounter = temp_v0_2;
        __osCurrentTime.unk_0 = temp_t6;
        __osCurrentTime.unk_4 = temp_t7_2;
        goto loop_3;
    }
    if (temp_v1_2 != 0xE) {
        goto loop_3;
    }
    __osTimerInterrupt();
    goto loop_3;
}
