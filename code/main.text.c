? Check_ExpansionPak();                             /* extern */
? Check_RegionIsSupported();                        /* extern */
? Nmi_Init();                                       /* extern */
? Nmi_SetPrenmiStart();                             /* extern */
? static_context_init();                            /* extern */
extern IrqMgr gIrqMgr;
static u32 startHeapSize = 0;
AudioMgr audioContext;
u8 audioStack[2048];
StackEntry audioStackEntry;
GameInfo *gGameInfo;
s32 gScreenHeight = 0xF0;
s32 gScreenWidth = 0x140;
u8 gSystemHeap[1];
OSThread graphOSThread;
u8 graphStack[6144];
StackEntry graphStackEntry;
void *mainIrqCallbackBuffer[60];
IrqMgrClient mainIrqmgrCallbackNode;
OSMesgQueue mainIrqmgrCallbackQueue;
u8 padmgrStack[1280];
StackEntry padmgrStackEntry;
SchedContext schedContext;
u8 schedStack[1536];
StackEntry schedStackEntry;
void *siEventCallbackBuffer[1];
OSMesgQueue siEventCallbackQueue;



void Main(void *arg) {
    void *sp38;
    s16 temp_v0;
    u32 temp_a1;
    s32 phi_s0;

    gScreenWidth = 0x140;
    gScreenHeight = 0xF0;
    Nmi_Init();
    Fault_Start();
    Check_RegionIsSupported();
    Check_ExpansionPak();
    temp_a1 = 0x80780000 - gSystemHeap;
    startHeapSize = temp_a1;
    SystemArena_Init((u32) gSystemHeap, temp_a1);
    static_context_init();
    gGameInfo->data[96] = 0;
    osCreateMesgQueue(&siEventCallbackQueue, siEventCallbackBuffer, 1);
    osSetEventMesg(5U, &siEventCallbackQueue, NULL);
    osCreateMesgQueue(&mainIrqmgrCallbackQueue, mainIrqCallbackBuffer, 0x3C);
    StackCheck_Init(&schedStackEntry, (void *) schedStack, (void *) audioStack, 0U, 0x100, "sched");
    Sched_Init(&schedContext, (void *) audioStack, 0x10, (s32) D_8009B290, 1, &gIrqMgr);
    CIC6105_AddRomInfoFaultPage();
    IrqMgr_AddClient(&gIrqMgr, &mainIrqmgrCallbackNode, &mainIrqmgrCallbackQueue);
    StackCheck_Init(&audioStackEntry, (void *) audioStack, (void *) padmgrStack, 0U, 0x100, "audio");
    AudioMgr_Init(&audioContext, (void *) padmgrStack, 0xB, 0xA, &schedContext, &gIrqMgr);
    StackCheck_Init(&padmgrStackEntry, (void *) padmgrStack, (void *) &graphStackEntry, 0U, 0x100, "padmgr");
    Padmgr_Start(&siEventCallbackQueue, &gIrqMgr, 7, 0xF, (void *) &graphStackEntry);
    AudioMgr_Unlock(&audioContext);
    StackCheck_Init(&graphStackEntry, (void *) graphStack, (void *) schedStack, 0U, 0x100, "graph");
    osCreateThread(&graphOSThread, 4, (void *) Graph_ThreadEntry, arg, (void *) schedStack, 9);
    osStartThread(&graphOSThread);
    phi_s0 = 0;
loop_1:
    sp38 = NULL;
    osRecvMesg(&mainIrqmgrCallbackQueue, &sp38, 1);
    if (sp38 != 0) {
        temp_v0 = *sp38;
        if (temp_v0 != 3) {
            if (temp_v0 == 4) {
                Nmi_SetPrenmiStart();
            }
        } else {
            phi_s0 = 1;
        }
        if (phi_s0 == 0) {
            goto loop_1;
        }
    }
    IrqMgr_RemoveClient(&gIrqMgr, &mainIrqmgrCallbackNode);
    osDestroyThread(&graphOSThread);
}

