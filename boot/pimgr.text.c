struct _mips2c_stack_osCreatePiManager {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ u32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

static OSThread D_8009D220;
static OSMesgQueue D_8009E3D0;
static void *D_8009E3E8;
OSMesgQueue __osPiAccessQueue;
s32 __osPiAccessQueueEnabled = 0;
OSDevMgr __osPiDevMgr = {0, NULL, NULL, NULL, NULL, NULL, NULL};

void osCreatePiManager(s32 pri, OSMesgQueue *cmdQ, void **cmdBuf, s32 cmdMsgCnt) {
    u32 sp2C;
    s32 sp28;
    s32 temp_v0;

    if (__osPiDevMgr.active == 0) {
        osCreateMesgQueue(cmdQ, cmdBuf, cmdMsgCnt);
        osCreateMesgQueue(&D_8009E3D0, &D_8009E3E8, 1);
        if (__osPiAccessQueueEnabled == 0) {
            __osPiCreateAccessQueue();
        }
        osSetEventMesg(8U, &D_8009E3D0, (void *)0x22222222);
        sp28 = -1;
        temp_v0 = osGetThreadPri(NULL);
        if (temp_v0 < pri) {
            sp28 = temp_v0;
            osSetThreadPri(NULL, pri);
        }
        sp2C = __osDisableInt();
        __osPiDevMgr.active = 1;
        __osPiDevMgr.thread = &D_8009D220;
        __osPiDevMgr.evtQueue = &D_8009E3D0;
        __osPiDevMgr.acsQueue = &__osPiAccessQueue;
        __osPiDevMgr.piDmaCallback = osPiRawStartDma;
        __osPiDevMgr.epiDmaCallback = osEPiRawStartDma;
        __osPiDevMgr.cmdQueue = cmdQ;
        osCreateThread(&D_8009D220, 0, (void *) __osDevMgrMain, (void *) &__osPiDevMgr, (void *) &D_8009E3D0, pri);
        osStartThread(&D_8009D220);
        __osRestoreInt(sp2C);
        if (sp28 != -1) {
            osSetThreadPri(NULL, sp28);
        }
    }
}
