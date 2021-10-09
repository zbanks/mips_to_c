struct _mips2c_stack_bootproc {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

static void gIrqMgr;
static StackEntry sBootThreadInfo;
static void sBootThreadStack;
static OSThread sIdleThread;
static StackEntry sIdleThreadInfo;
static void sIdleThreadStack;
OSPiHandle *gCartHandle = NULL;

void bootproc(void) {
    StackCheck_Init(&sBootThreadInfo, &sBootThreadStack, &gIrqMgr, 0U, -1, "boot");
    osMemSize = osGetMemSize();
    func_800818F4();
    osInitialize();
    osUnmapTLBAll();
    gCartHandle = osCartRomInit();
    StackCheck_Init(&sIdleThreadInfo, &sIdleThreadStack, (void *) &sIdleThreadInfo, 0U, 0x100, "idle");
    osCreateThread(&sIdleThread, 1, (void *) Idle_ThreadEntry, NULL, (void *) &sIdleThreadInfo, 0xC);
    osStartThread(&sIdleThread);
}
