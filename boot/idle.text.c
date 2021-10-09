CRASHED

struct _mips2c_stack_Idle_ClearMemory {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Idle_InitCodeAndMemory {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ u32 sp28;                            /* inferred */
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x18];
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x20];
};                                                  /* size = 0x68 */

struct _mips2c_stack_Idle_InitMemory {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ u32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Idle_InitScreen {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Idle_InitVideo {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Idle_ThreadEntry {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Main_ThreadEntry {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

void Idle_ClearMemory(u32 arg0, u32 arg1);          /* static */
void Idle_InitCodeAndMemory();                      /* static */
? Idle_InitFramebuffer(u16 (*)[320], ?, ?);         /* static */
void Idle_InitMemory();                             /* static */
void Idle_InitScreen();                             /* static */
void Idle_InitVideo();                              /* static */
void Main_ThreadEntry(void *arg0);                  /* static */
extern ? D_801E3FA0;
static IrqMgr gIrqMgr;
static OSThread gMainThread;
static OSMesgQueue gPiMgrCmdQ;
static void sIrqMgrStack;
static StackEntry sIrqMgrStackInfo;
static void sMainStack;
static StackEntry sMainStackInfo;
static void *sPiMgrCmdBuff[50];
u8 D_80096B20 = 1;
u8 D_8009B290;
u32 gViConfigFeatures = 0x42;
OSViMode gViConfigMode;
f32 gViConfigXScale = 1.0f;
f32 gViConfigYScale = 1.0f;
OSViMode osViModeFpalLan1 = {
    0x2C,
    {0x311E, 0x140, 0x4541E3A, 0x271, 0x170C69, 0xC6F0C6D, 0x800300, 0x200, 0},
    {{0x280, 0x400, 0x2F0269, 0x9026B, 2}, {0x280, 0x400, 0x2F0269, 0x9026B, 2}},
};
OSViMode osViModeMpalLan1 = {
    0x1E,
    {0x311E, 0x140, 0x4651E39, 0x20D, 0x40C11, 0xC190C1A, 0x6C02EC, 0x200, 0},
    {{0x280, 0x400, 0x2501FF, 0xE0204, 2}, {0x280, 0x400, 0x2501FF, 0xE0204, 2}},
};
OSViMode osViModeNtscLan1 = {
    2,
    {0x311E, 0x140, 0x3E52239, 0x20D, 0xC15, 0xC150C15, 0x6C02EC, 0x200, 0},
    {{0x280, 0x400, 0x2501FF, 0xE0204, 2}, {0x280, 0x400, 0x2501FF, 0xE0204, 2}},
};
u32 sDmaMgrDmaBuffSize = 0x2000;

void Idle_ClearMemory(u32 arg0, u32 arg1) {
    if (arg0 < arg1) {
        bzero((void *) arg0, arg1 - arg0);
    }
}

/*
Failed to decompile function Idle_InitFramebuffer:

Label L80080184 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void Idle_InitScreen(void) {
    Idle_InitFramebuffer(gFramebuffer1, 0x25800, 0x10001);
    ViConfig_UpdateVi(0U);
    osViSwapBuffer((void *) gFramebuffer1);
    osViBlack(0U);
}

void Idle_InitMemory(void) {
    u32 sp18;

    sp18 = osMemSize + 0x80000000;
    Idle_ClearMemory(0x80000400U, (u32) gFramebuffer1);
    Idle_ClearMemory((u32) D_80025D00, (u32) bootproc);
    Idle_ClearMemory((u32) gGfxSPTaskYieldBuffer, sp18);
}

void Idle_InitCodeAndMemory(void) {
    ? sp48;
    ? sp30;
    void *sp2C;
    u32 sp28;
    u32 temp_t6;

    osCreateMesgQueue((OSMesgQueue *) &sp30, &sp2C, 1);
    temp_t6 = sDmaMgrDmaBuffSize;
    sDmaMgrDmaBuffSize = 0;
    sp28 = temp_t6;
    DmaMgr_SendRequestImpl((DmaRequest *) &sp48, (void *) EnAObj_Init, (u32) _codeSegmentRomStart, _ovl_titleSegmentRomStart - _codeSegmentRomStart, 0, (OSMesgQueue *) &sp30, NULL);
    Idle_InitScreen();
    Idle_InitMemory();
    osRecvMesg((OSMesgQueue *) &sp30, NULL, 1);
    sDmaMgrDmaBuffSize = sp28;
    Idle_ClearMemory((u32) &D_801E3FA0, (u32) gGfxSPTaskYieldBuffer);
}

void Main_ThreadEntry(void *arg0) {
    StackCheck_Init(&sIrqMgrStackInfo, &sIrqMgrStack, (void *) &sIrqMgrStackInfo, 0U, 0x100, "irqmgr");
    IrqMgr_Init(&gIrqMgr, (void *) &sIrqMgrStackInfo, 0x12, 1U);
    DmaMgr_Start();
    Idle_InitCodeAndMemory();
    Main(arg0);
    DmaMgr_Stop();
}

void Idle_InitVideo(void) {
    OSViMode *temp_t0;
    OSViMode *temp_t4;
    OSViMode *temp_t5;
    OSViMode *temp_t8;
    OSViMode *temp_t8_2;
    OSViMode *temp_t9;
    u32 temp_v0;
    OSViMode *phi_t5;
    OSViMode *phi_t4;
    OSViMode *phi_t9;
    OSViMode *phi_t8;
    OSViMode *phi_t0;
    OSViMode *phi_t8_2;

    osCreateViManager(0xFE);
    gViConfigFeatures = 0x42;
    gViConfigXScale = 1.0f;
    gViConfigYScale = 1.0f;
    temp_v0 = osTvType;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {

            } else {
                D_8009B290 = 0x1E;
                phi_t5 = &osViModeMpalLan1;
                phi_t4 = &gViConfigMode;
                do {
                    temp_t5 = phi_t5 + 0xC;
                    temp_t4 = phi_t4 + 0xC;
                    temp_t4->unk_-C = (s32) *phi_t5;
                    temp_t4->unk_-8 = (s32) temp_t5->unk_-8;
                    temp_t4->unk_-4 = (s32) temp_t5->unk_-4;
                    phi_t5 = temp_t5;
                    phi_t4 = temp_t4;
                } while (temp_t5 != &osViModeMpalLan1.fldRegs[1].vBurst);
                temp_t4->unk_0 = (s32) temp_t5->unk_0;
                temp_t4->comRegs.ctrl = temp_t5->comRegs.ctrl;
            }
        } else {
            D_8009B290 = 2;
            phi_t9 = &osViModeNtscLan1;
            phi_t8 = &gViConfigMode;
            do {
                temp_t9 = phi_t9 + 0xC;
                temp_t8 = phi_t8 + 0xC;
                temp_t8->unk_-C = (s32) *phi_t9;
                temp_t8->unk_-8 = (s32) temp_t9->unk_-8;
                temp_t8->unk_-4 = (s32) temp_t9->unk_-4;
                phi_t9 = temp_t9;
                phi_t8 = temp_t8;
            } while (temp_t9 != &osViModeNtscLan1.fldRegs[1].vBurst);
            temp_t8->unk_0 = (s32) temp_t9->unk_0;
            temp_t8->comRegs.ctrl = temp_t9->comRegs.ctrl;
        }
    } else {
        D_8009B290 = 0x2C;
        phi_t0 = &osViModeFpalLan1;
        phi_t8_2 = &gViConfigMode;
        do {
            temp_t0 = phi_t0 + 0xC;
            temp_t8_2 = phi_t8_2 + 0xC;
            temp_t8_2->unk_-C = (s32) *phi_t0;
            temp_t8_2->unk_-8 = (s32) temp_t0->unk_-8;
            temp_t8_2->unk_-4 = (s32) temp_t0->unk_-4;
            phi_t0 = temp_t0;
            phi_t8_2 = temp_t8_2;
        } while (temp_t0 != &osViModeFpalLan1.fldRegs[1].vBurst);
        temp_t8_2->unk_0 = (s32) temp_t0->unk_0;
        temp_t8_2->comRegs.ctrl = temp_t0->comRegs.ctrl;
        gViConfigYScale = 0.833f;
    }
    D_80096B20 = 1;
}

void Idle_ThreadEntry(void *arg) {
    Idle_InitVideo();
    osCreatePiManager(0x96, &gPiMgrCmdQ, sPiMgrCmdBuff, 0x32);
    StackCheck_Init(&sMainStackInfo, &sMainStack, (void *) &sMainStackInfo, 0U, 0x400, "main");
    osCreateThread(&gMainThread, 3, (void *) Main_ThreadEntry, arg, (void *) &sMainStackInfo, 0xC);
    osStartThread(&gMainThread);
    osSetThreadPri(NULL, 0);
loop_1:
    goto loop_1;
}
