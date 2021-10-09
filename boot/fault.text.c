struct _mips2c_stack_Fault_AddAddrConvClient {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Fault_AddClient {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Fault_AddHungupAndCrash {
    /* 0x000 */ char pad_0[0x14];
    /* 0x014 */ s32 sp14;                           /* inferred */
    /* 0x018 */ s8 sp18;                            /* inferred */
    /* 0x019 */ char pad_19[0xFF];
};                                                  /* size = 0x118 */

struct _mips2c_stack_Fault_AddHungupAndCrashImpl {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
    /* 0x18 */ char pad_18[0x8];                    /* maybe part of sp14[3]? */
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0x10];
};                                                  /* size = 0x30 */

struct _mips2c_stack_Fault_CommitFB {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
    /* 0x18 */ char pad_18[0x4];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Fault_ConvertAddress {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Fault_DrawCornerRec {
    /* 0x00 */ char pad_0[0x10];
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ char pad_14[0x8];                    /* maybe part of sp10[3]? */
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Fault_DrawMemDump {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_Fault_DrawMemDumpPage {
    /* 0x00 */ char pad_0[0x10];
    /* 0x10 */ u32 sp10;                            /* inferred */
    /* 0x14 */ char pad_14[0xC];                    /* maybe part of sp10[4]? */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_Fault_DrawRec {
    /* 0x00 */ char pad_0[0x10];
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ char pad_14[0x8];                    /* maybe part of sp10[3]? */
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Fault_DrawStackTrace {
    /* 0x00 */ char pad_0[0x10];
    /* 0x10 */ u32 sp10;                            /* inferred */
    /* 0x14 */ char pad_14[0xC];                    /* maybe part of sp10[4]? */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x18];                   /* maybe part of sp44[7]? */
    /* 0x60 */ u32 sp60;                            /* inferred */
    /* 0x64 */ u32 *sp64;                           /* inferred */
    /* 0x68 */ u32 *sp68;                           /* inferred */
    /* 0x6C */ char pad_6C[0x4];
};                                                  /* size = 0x70 */

struct _mips2c_stack_Fault_FillScreenBlack {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_Fault_FillScreenRed {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_Fault_FindFaultedThread {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_Fault_FindNextStackCall {
    /* 0x00 */ char pad_0[0x8];
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_Fault_HangupFaultClient {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_Fault_PadCallback {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_Fault_PrintFPCR {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
    /* 0x18 */ u32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Fault_PrintFReg {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_Fault_PrintThreadContext {
    /* 0x00 */ char pad_0[0x10];
    /* 0x10 */ f64 sp10;                            /* inferred */
    /* 0x18 */ char pad_18[0x8];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_Fault_ProcessClients {
    /* 0x00 */ char pad_0[0x10];
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ char pad_14[0xC];                    /* maybe part of sp10[4]? */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_Fault_RemoveAddrConvClient {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ FaultAddrConvClient *sp20;           /* inferred */
    /* 0x24 */ FaultAddrConvClient *sp24;           /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_Fault_RemoveClient {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ FaultClient *sp20;                   /* inferred */
    /* 0x24 */ FaultClient *sp24;                   /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_Fault_ResumeThread {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_Fault_SetFB {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_Fault_SetOptions {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_Fault_SetOptionsFromController3 {
    /* 0x00 */ char pad_0[0x10];
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ s32 sp14;                            /* inferred */
    /* 0x18 */ char pad_18[0x4];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ u32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ Input *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_Fault_Sleep {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_Fault_SleepImpl {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_Fault_Start {
    /* 0x00 */ char pad_0[0x10];
    /* 0x10 */ StackEntry *sp10;                    /* inferred */
    /* 0x14 */ s8 *sp14;                            /* inferred */
    /* 0x18 */ char pad_18[0x8];                    /* maybe part of sp14[3]? */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_Fault_ThreadEntry {
    /* 0x00 */ char pad_0[0x54];
    /* 0x54 */ void *sp54;                          /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_Fault_UpdatePadImpl {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_Fault_Wait5Seconds {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ u32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Fault_WaitForButtonCombo {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_Fault_WaitForInput {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_Fault_WaitForInputImpl {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ Input *sp44;                         /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_osSyncPrintfFPCR {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
    /* 0x18 */ u32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_osSyncPrintfFReg {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_osSyncPrintfStackTrace {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x10];                   /* maybe part of sp3C[5]? */
    /* 0x50 */ u32 sp50;                            /* inferred */
    /* 0x54 */ u32 *sp54;                           /* inferred */
    /* 0x58 */ u32 *sp58;                           /* inferred */
    /* 0x5C */ char pad_5C[0x4];
};                                                  /* size = 0x60 */

struct _mips2c_stack_osSyncPrintfThreadContext {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

s8 *D_80096B80[18] = {
    "Interrupt",
    "TLB modification",
    "TLB exception on load",
    "TLB exception on store",
    "Address error on load",
    "Address error on store",
    "Bus error on inst.",
    "Bus error on data",
    "System call exception",
    "Breakpoint exception",
    "Reserved instruction",
    "Coprocessor unusable",
    "Arithmetic overflow",
    "Trap exception",
    "Virtual coherency on inst.",
    "Floating point exception",
    "Watchpoint exception",
    "Virtual coherency on data",
};
f32 D_8009BE54;
u32 faultCopyToLog;
u32 faultCustomOptions;
FaultThreadStruct gFaultStruct;
OSViMode osViModeNtscLan1 = {
    2,
    {0x311E, 0x140, 0x3E52239, 0x20D, 0xC15, 0xC150C15, 0x6C02EC, 0x200, 0},
    {{0x280, 0x400, 0x2501FF, 0xE0204, 2}, {0x280, 0x400, 0x2501FF, 0xE0204, 2}},
};
s8 *sExceptionNames[6] = {
    "Unimplemented operation",
    "Invalid operation",
    "Division by zero",
    "Overflow",
    "Underflow",
    "Inexact operation",
};
FaultThreadStruct *sFaultContext;
u8 sFaultStack[1536];
StackEntry sFaultThreadInfo;

void Fault_SleepImpl(u32 duration) {
    s64 temp_ret;
    u64 temp_ret_2;
    void *temp_t8;
    void *phi_t8;

    phi_t8 = sp;
    do {
        temp_t8 = phi_t8 - 8;
        temp_t8->unk_0 = 0xFFFA5A5A;
        temp_t8->unk_4 = 0xFFFA5A5A;
        phi_t8 = temp_t8;
    } while (temp_t8 != sp);
    temp_ret = __ll_mul(0, (s64) duration, 0, 0x2CB4178);
    temp_ret_2 = __ull_div(temp_ret, (u64) (u32) (u64) temp_ret, 0U, 0x3E8U);
    Sleep_Cycles(temp_ret_2, (u64) (u32) temp_ret_2);
}

void Fault_AddClient(FaultClient *client, void (*callback)(void *, void *), void *param0, void *param1) {
    s32 sp20;
    FaultClient *temp_v1;
    FaultClient *temp_v1_2;
    void *temp_t6;
    void *phi_t6;
    FaultClient *phi_v1;

    phi_t6 = sp;
    do {
        temp_t6 = phi_t6 - 8;
        temp_t6->unk_0 = 0xFFFA5A5A;
        temp_t6->unk_4 = 0xFFFA5A5A;
        phi_t6 = temp_t6;
    } while (temp_t6 != sp);
    sp20 = 0;
    temp_v1 = sFaultContext->clients;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
loop_3:
        if (phi_v1 == client) {
            sp20 = 1;
        } else {
            temp_v1_2 = phi_v1->next;
            phi_v1 = temp_v1_2;
            if (temp_v1_2 == 0) {
                goto block_6;
            }
            goto loop_3;
        }
    } else {
block_6:
        client->callback = callback;
        client->param0 = param0;
        client->param1 = param1;
        client->next = sFaultContext->clients;
        sFaultContext->clients = client;
    }
    osSetIntMask(osSetIntMask(1U));
    if (sp20 != 0) {
        osSyncPrintf("\x1b[41;37mfault_AddClient: %08x は既にリスト中にある\n\x1b[m", client);
    }
}

void Fault_RemoveClient(FaultClient *client) {
    FaultClient *sp24;
    FaultClient *sp20;
    s32 sp18;
    FaultClient *temp_v1;
    FaultClient *temp_v1_2;
    FaultThreadStruct *temp_v0;
    u32 temp_a0;
    void *temp_t4;
    void *phi_t4;
    FaultClient *phi_v1;
    FaultClient *phi_a1;

    phi_t4 = sp;
    do {
        temp_t4 = phi_t4 - 8;
        temp_t4->unk_0 = 0xFFFA5A5A;
        temp_t4->unk_4 = 0xFFFA5A5A;
        phi_t4 = temp_t4;
    } while (temp_t4 != sp);
    temp_v1 = sFaultContext->clients;
    sp18 = 0;
    client = client;
    sp20 = NULL;
    sp24 = temp_v1;
    temp_a0 = osSetIntMask(1U);
    phi_v1 = temp_v1;
    phi_a1 = sp20;
    if (temp_v1 != 0) {
loop_3:
        if (phi_v1 == client) {
            if (phi_a1 != 0) {
                phi_a1->next = client->next;
            } else {
                sFaultContext->clients = client;
                temp_v0 = sFaultContext;
                if (temp_v0->clients != 0) {
                    temp_v0->clients = client->next;
                } else {
                    sp18 = 1;
                }
            }
        } else {
            temp_v1_2 = phi_v1->next;
            phi_v1 = temp_v1_2;
            phi_a1 = phi_v1;
            if (temp_v1_2 != 0) {
                goto loop_3;
            }
        }
    }
    client = client;
    osSetIntMask(temp_a0);
    if (sp18 != 0) {
        osSyncPrintf("\x1b[41;37mfault_RemoveClient: %08x リスト不整合です\n\x1b[m", client, client);
    }
}

void Fault_AddAddrConvClient(FaultAddrConvClient *client, void *(*callback)(void *, void *), void *param) {
    s32 sp18;
    FaultAddrConvClient *temp_v1;
    FaultAddrConvClient *temp_v1_2;
    u32 temp_a0;
    void *temp_t5;
    void *phi_t5;
    FaultAddrConvClient *phi_v1;

    phi_t5 = sp;
    do {
        temp_t5 = phi_t5 - 8;
        temp_t5->unk_0 = 0xFFFA5A5A;
        temp_t5->unk_4 = 0xFFFA5A5A;
        phi_t5 = temp_t5;
    } while (temp_t5 != sp);
    sp18 = 0;
    client = client;
    temp_a0 = osSetIntMask(1U);
    temp_v1 = sFaultContext->addrConvClients;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
loop_3:
        if (phi_v1 == client) {
            sp18 = 1;
        } else {
            temp_v1_2 = phi_v1->next;
            phi_v1 = temp_v1_2;
            if (temp_v1_2 == 0) {
                goto block_6;
            }
            goto loop_3;
        }
    } else {
block_6:
        client->callback = callback;
        client->param = param;
        client->next = sFaultContext->addrConvClients;
        sFaultContext->addrConvClients = client;
    }
    client = client;
    osSetIntMask(temp_a0);
    if (sp18 != 0) {
        osSyncPrintf("\x1b[41;37mfault_AddressConverterAddClient: %08x は既にリスト中にある\n\x1b[m", client);
    }
}

void Fault_RemoveAddrConvClient(FaultAddrConvClient *client) {
    FaultAddrConvClient *sp24;
    FaultAddrConvClient *sp20;
    s32 sp18;
    FaultAddrConvClient *temp_v1;
    FaultAddrConvClient *temp_v1_2;
    FaultThreadStruct *temp_v0;
    u32 temp_a0;
    void *temp_t4;
    void *phi_t4;
    FaultAddrConvClient *phi_v1;
    FaultAddrConvClient *phi_a1;

    phi_t4 = sp;
    do {
        temp_t4 = phi_t4 - 8;
        temp_t4->unk_0 = 0xFFFA5A5A;
        temp_t4->unk_4 = 0xFFFA5A5A;
        phi_t4 = temp_t4;
    } while (temp_t4 != sp);
    temp_v1 = sFaultContext->addrConvClients;
    sp18 = 0;
    client = client;
    sp20 = NULL;
    sp24 = temp_v1;
    temp_a0 = osSetIntMask(1U);
    phi_v1 = temp_v1;
    phi_a1 = sp20;
    if (temp_v1 != 0) {
loop_3:
        if (phi_v1 == client) {
            if (phi_a1 != 0) {
                phi_a1->next = client->next;
            } else {
                sFaultContext->addrConvClients = client;
                temp_v0 = sFaultContext;
                if (temp_v0->addrConvClients != 0) {
                    temp_v0->addrConvClients = client->next;
                } else {
                    sp18 = 1;
                }
            }
        } else {
            temp_v1_2 = phi_v1->next;
            phi_v1 = temp_v1_2;
            phi_a1 = phi_v1;
            if (temp_v1_2 != 0) {
                goto loop_3;
            }
        }
    }
    client = client;
    osSetIntMask(temp_a0);
    if (sp18 != 0) {
        osSyncPrintf("\x1b[41;37mfault_AddressConverterRemoveClient: %08x は既にリスト中にある\n\x1b[m", client, client);
    }
}

void *Fault_ConvertAddress(void *addr) {
    FaultAddrConvClient *temp_s0;
    FaultAddrConvClient *temp_s0_2;
    void *(*temp_v0_2)(void *, s32);
    void *temp_t8;
    void *temp_v0;
    void *phi_t8;
    FaultAddrConvClient *phi_s0;

    phi_t8 = sp;
    do {
        temp_t8 = phi_t8 - 8;
        temp_t8->unk_0 = 0xFFFA5A5A;
        temp_t8->unk_4 = 0xFFFA5A5A;
        phi_t8 = temp_t8;
    } while (temp_t8 != sp);
    temp_s0 = sFaultContext->addrConvClients;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
loop_3:
        temp_v0_2 = phi_s0->callback;
        if ((temp_v0_2 != 0) && (temp_v0 = temp_v0_2(addr, phi_s0->param), (temp_v0 != 0))) {
            return temp_v0;
        }
        temp_s0_2 = phi_s0->next;
        phi_s0 = temp_s0_2;
        if (temp_s0_2 == 0) {
            goto block_7;
        }
        goto loop_3;
    }
block_7:
    return NULL;
}

void Fault_Sleep(u32 duration) {
    void *temp_t7;
    void *phi_t7;

    phi_t7 = sp;
    do {
        temp_t7 = phi_t7 - 8;
        temp_t7->unk_0 = 0xFFFA5A5A;
        temp_t7->unk_4 = 0xFFFA5A5A;
        phi_t7 = temp_t7;
    } while (temp_t7 != sp);
    Fault_SleepImpl(duration);
}

void Fault_PadCallback(Input *input) {
    void *temp_t7;
    void *phi_t7;

    phi_t7 = sp;
    do {
        temp_t7 = phi_t7 - 8;
        temp_t7->unk_0 = 0xFFFA5A5A;
        temp_t7->unk_4 = 0xFFFA5A5A;
        phi_t7 = temp_t7;
    } while (temp_t7 != sp);
    Padmgr_GetInput2(input, 0);
}

void Fault_UpdatePadImpl(void) {
    FaultThreadStruct *temp_v0;
    void *temp_t7;
    void *phi_t7;

    phi_t7 = sp;
    do {
        temp_t7 = phi_t7 - 8;
        temp_t7->unk_0 = 0xFFFA5A5A;
        temp_t7->unk_4 = 0xFFFA5A5A;
        phi_t7 = temp_t7;
    } while (temp_t7 != sp);
    temp_v0 = sFaultContext;
    temp_v0->padCallback(temp_v0->padInput);
}

u32 Fault_WaitForInputImpl(void) {
    Input *sp44;
    FaultThreadStruct *temp_v0;
    u16 temp_s0;
    void *temp_t2;
    void *phi_t2;
    s32 phi_s1;

    phi_t2 = sp;
    do {
        temp_t2 = phi_t2 - 8;
        temp_t2->unk_0 = 0xFFFA5A5A;
        temp_t2->unk_4 = 0xFFFA5A5A;
        phi_t2 = temp_t2;
    } while (temp_t2 != sp);
    sp44 = sFaultContext->padInput;
    phi_s1 = 0x258;
loop_3:
    Fault_Sleep(0x10U);
    Fault_UpdatePadImpl();
    temp_s0 = sp44->press.button;
    if (temp_s0 == 0x20) {
        temp_v0 = sFaultContext;
        temp_v0->faultActive = temp_v0->faultActive == 0;
    }
    if (sFaultContext->faultActive != 0) {
        phi_s1 += -1;
        if (phi_s1 < 1) {
            return 0U;
        }
        goto loop_3;
    }
    if ((temp_s0 == 0x8000) || (temp_s0 == 0x100)) {
        return 0U;
    }
    if (temp_s0 == 0x200) {
        return 1U;
    }
    if (temp_s0 == 0x800) {
        FaultDrawer_SetOsSyncPrintfEnabled(1U);
    }
    if (temp_s0 == 0x400) {
        FaultDrawer_SetOsSyncPrintfEnabled(0U);
    }
    goto loop_3;
}

void Fault_WaitForInput(void) {
    void *temp_t7;
    void *phi_t7;

    phi_t7 = sp;
    do {
        temp_t7 = phi_t7 - 8;
        temp_t7->unk_0 = 0xFFFA5A5A;
        temp_t7->unk_4 = 0xFFFA5A5A;
        phi_t7 = temp_t7;
    } while (temp_t7 != sp);
    Fault_WaitForInputImpl();
}

void Fault_DrawRec(s32 x, s32 y, s32 w, s32 h, u16 color) {
    s32 sp10;
    void *temp_t0;
    void *phi_t0;

    phi_t0 = sp;
    do {
        temp_t0 = phi_t0 - 8;
        temp_t0->unk_0 = 0xFFFA5A5A;
        temp_t0->unk_4 = 0xFFFA5A5A;
        phi_t0 = temp_t0;
    } while (temp_t0 != sp);
    sp10 = (s32) color;
    FaultDrawer_DrawRecImpl(x, y, (x + w) - 1, (y + h) - 1);
}

void Fault_FillScreenBlack(void) {
    void *temp_t7;
    void *phi_t7;

    phi_t7 = sp;
    do {
        temp_t7 = phi_t7 - 8;
        temp_t7->unk_0 = 0xFFFA5A5A;
        temp_t7->unk_4 = 0xFFFA5A5A;
        phi_t7 = temp_t7;
    } while (temp_t7 != sp);
    FaultDrawer_SetForeColor(0xFFFFU);
    FaultDrawer_SetBackColor(1U);
    FaultDrawer_FillScreen();
    FaultDrawer_SetBackColor(0U);
}

void Fault_FillScreenRed(void) {
    void *temp_t7;
    void *phi_t7;

    phi_t7 = sp;
    do {
        temp_t7 = phi_t7 - 8;
        temp_t7->unk_0 = 0xFFFA5A5A;
        temp_t7->unk_4 = 0xFFFA5A5A;
        phi_t7 = temp_t7;
    } while (temp_t7 != sp);
    FaultDrawer_SetForeColor(0xFFFFU);
    FaultDrawer_SetBackColor(0xF001U);
    FaultDrawer_FillScreen();
    FaultDrawer_SetBackColor(0U);
}

void Fault_DrawCornerRec(u16 color) {
    s32 sp10;
    void *temp_t8;
    void *phi_t8;

    phi_t8 = sp;
    do {
        temp_t8 = phi_t8 - 8;
        temp_t8->unk_0 = 0xFFFA5A5A;
        temp_t8->unk_4 = 0xFFFA5A5A;
        phi_t8 = temp_t8;
    } while (temp_t8 != sp);
    sp10 = (s32) color;
    Fault_DrawRec(0x16, 0x10, 8, 1);
}

void Fault_PrintFReg(s32 idx, f32 *value) {
    f32 temp_a2;
    s32 temp_v0;
    void *temp_t9;
    void *phi_t9;

    phi_t9 = sp;
    do {
        temp_t9 = phi_t9 - 8;
        temp_t9->unk_0 = 0xFFFA5A5A;
        temp_t9->unk_4 = 0xFFFA5A5A;
        phi_t9 = temp_t9;
    } while (temp_t9 != sp);
    temp_a2 = *value;
    temp_v0 = ((u32) ((bitwise s32) temp_a2 & 0x7F800000) >> 0x17) - 0x7F;
    if (((temp_v0 >= -0x7E) && (temp_v0 < 0x80)) || ((bitwise s32) temp_a2 == 0)) {
        FaultDrawer_Printf("F%02d:%14.7e ", idx, second half of f64, (f64) *value);
        return;
    }
    FaultDrawer_Printf("F%02d:  %08x(16) ", idx, temp_a2);
}

void osSyncPrintfFReg(s32 idx, f32 *value) {
    f32 temp_a2;
    s32 temp_v1;
    void *temp_t9;
    void *phi_t9;

    phi_t9 = sp;
    do {
        temp_t9 = phi_t9 - 8;
        temp_t9->unk_0 = 0xFFFA5A5A;
        temp_t9->unk_4 = 0xFFFA5A5A;
        phi_t9 = temp_t9;
    } while (temp_t9 != sp);
    temp_a2 = *value;
    temp_v1 = ((u32) ((bitwise s32) temp_a2 & 0x7F800000) >> 0x17) - 0x7F;
    if (((temp_v1 >= -0x7E) && (temp_v1 < 0x80)) || ((bitwise s32) temp_a2 == 0)) {
        osSyncPrintf("F%02d:%14.7e ", idx, second half of f64, (f64) *value);
        return;
    }
    osSyncPrintf("F%02d:  %08x(16) ", idx, temp_a2);
}

void Fault_PrintFPCR(u32 value) {
    u32 sp18;
    s32 temp_v0;
    u32 temp_a1;
    void *temp_t9;
    void *phi_t9;
    u32 phi_v1;
    s32 phi_v0;

    phi_t9 = sp;
    do {
        temp_t9 = phi_t9 - 8;
        temp_t9->unk_0 = 0xFFFA5A5A;
        temp_t9->unk_4 = 0xFFFA5A5A;
        phi_t9 = temp_t9;
    } while (temp_t9 != sp);
    temp_a1 = value;
    sp18 = 0x20000;
    value = temp_a1;
    FaultDrawer_Printf("FPCSR:%08xH ", temp_a1);
    phi_v1 = 0x20000U;
    phi_v0 = 0;
loop_3:
    if ((value & phi_v1) != 0) {
        FaultDrawer_Printf("(%s)", sExceptionNames[phi_v0]);
    } else {
        temp_v0 = phi_v0 + 1;
        phi_v1 = phi_v1 >> 1;
        phi_v0 = temp_v0;
        if (temp_v0 != 6) {
            goto loop_3;
        }
    }
    FaultDrawer_Printf("\n");
}

void osSyncPrintfFPCR(u32 value) {
    u32 sp18;
    s32 temp_v0;
    u32 temp_a1;
    void *temp_t9;
    void *phi_t9;
    u32 phi_v1;
    s32 phi_v0;

    phi_t9 = sp;
    do {
        temp_t9 = phi_t9 - 8;
        temp_t9->unk_0 = 0xFFFA5A5A;
        temp_t9->unk_4 = 0xFFFA5A5A;
        phi_t9 = temp_t9;
    } while (temp_t9 != sp);
    temp_a1 = value;
    sp18 = 0x20000;
    value = temp_a1;
    osSyncPrintf("FPCSR:%08xH  ", temp_a1);
    phi_v1 = 0x20000U;
    phi_v0 = 0;
loop_3:
    if ((value & phi_v1) != 0) {
        osSyncPrintf("(%s)\n", sExceptionNames[phi_v0]);
        return;
    }
    temp_v0 = phi_v0 + 1;
    phi_v1 = phi_v1 >> 1;
    phi_v0 = temp_v0;
    if (temp_v0 == 6) {
        return;
    }
    goto loop_3;
}

void Fault_PrintThreadContext(OSThread *t) {
    f64 sp10;
    __OSThreadContext *temp_s0_2;
    f32 temp_f0;
    s16 temp_s0;
    void *temp_t1;
    void *phi_t1;
    s16 phi_s0;
    s16 phi_s0_2;

    phi_t1 = sp;
    do {
        temp_t1 = phi_t1 - 8;
        temp_t1->unk_0 = 0xFFFA5A5A;
        temp_t1->unk_4 = 0xFFFA5A5A;
        phi_t1 = temp_t1;
    } while (temp_t1 != sp);
    temp_s0 = ((u32) t->context.cause >> 2) & 0x1F;
    phi_s0 = temp_s0;
    if (temp_s0 == 0x17) {
        phi_s0 = 0x10;
    }
    phi_s0_2 = phi_s0;
    if (phi_s0 == 0x1F) {
        phi_s0_2 = 0x11;
    }
    FaultDrawer_FillScreen();
    FaultDrawer_SetCharPad(-2, 4);
    FaultDrawer_SetCursor(0x16, 0x14);
    FaultDrawer_Printf("THREAD:%d (%d:%s)\n", t->id, phi_s0_2, D_80096B80[phi_s0_2]);
    FaultDrawer_SetCharPad(-1, 0);
    temp_s0_2 = &t->context;
    FaultDrawer_Printf("PC:%08xH SR:%08xH VA:%08xH\n", temp_s0_2->pc, temp_s0_2->sr, temp_s0_2->badvaddr);
    FaultDrawer_Printf("AT:%08xH V0:%08xH V1:%08xH\n", temp_s0_2->unk_4, temp_s0_2->unk_C, temp_s0_2->unk_14);
    FaultDrawer_Printf("A0:%08xH A1:%08xH A2:%08xH\n", temp_s0_2->unk_1C, temp_s0_2->unk_24, temp_s0_2->unk_2C);
    FaultDrawer_Printf("A3:%08xH T0:%08xH T1:%08xH\n", temp_s0_2->unk_34, temp_s0_2->unk_3C, temp_s0_2->unk_44);
    FaultDrawer_Printf("T2:%08xH T3:%08xH T4:%08xH\n", temp_s0_2->unk_4C, temp_s0_2->unk_54, temp_s0_2->unk_5C);
    FaultDrawer_Printf("T5:%08xH T6:%08xH T7:%08xH\n", temp_s0_2->unk_64, temp_s0_2->unk_6C, temp_s0_2->unk_74);
    FaultDrawer_Printf("S0:%08xH S1:%08xH S2:%08xH\n", temp_s0_2->unk_7C, temp_s0_2->unk_84, temp_s0_2->unk_8C);
    FaultDrawer_Printf("S3:%08xH S4:%08xH S5:%08xH\n", temp_s0_2->unk_94, temp_s0_2->unk_9C, temp_s0_2->unk_A4);
    FaultDrawer_Printf("S6:%08xH S7:%08xH T8:%08xH\n", temp_s0_2->unk_AC, temp_s0_2->unk_B4, temp_s0_2->unk_BC);
    FaultDrawer_Printf("T9:%08xH GP:%08xH SP:%08xH\n", temp_s0_2->unk_C4, temp_s0_2->unk_CC, temp_s0_2->unk_D4);
    FaultDrawer_Printf("S8:%08xH RA:%08xH LO:%08xH\n\n", temp_s0_2->unk_DC, temp_s0_2->unk_E4, temp_s0_2->unk_EC);
    Fault_PrintFPCR(temp_s0_2->fpcsr);
    FaultDrawer_Printf("\n");
    Fault_PrintFReg(0, &temp_s0_2->fp0.f.f_even);
    Fault_PrintFReg(2, &temp_s0_2->fp2.f.f_even);
    FaultDrawer_Printf("\n");
    Fault_PrintFReg(4, &temp_s0_2->fp4.f.f_even);
    Fault_PrintFReg(6, &temp_s0_2->fp6.f.f_even);
    FaultDrawer_Printf("\n");
    Fault_PrintFReg(8, &temp_s0_2->fp8.f.f_even);
    Fault_PrintFReg(0xA, &temp_s0_2->fp10.f.f_even);
    FaultDrawer_Printf("\n");
    Fault_PrintFReg(0xC, &temp_s0_2->fp12.f.f_even);
    Fault_PrintFReg(0xE, &temp_s0_2->fp14.f.f_even);
    FaultDrawer_Printf("\n");
    Fault_PrintFReg(0x10, &temp_s0_2->fp16.f.f_even);
    Fault_PrintFReg(0x12, &temp_s0_2->fp18.f.f_even);
    FaultDrawer_Printf("\n");
    Fault_PrintFReg(0x14, &temp_s0_2->fp20.f.f_even);
    Fault_PrintFReg(0x16, &temp_s0_2->fp22.f.f_even);
    FaultDrawer_Printf("\n");
    Fault_PrintFReg(0x18, &temp_s0_2->fp24.f.f_even);
    Fault_PrintFReg(0x1A, &temp_s0_2->fp26.f.f_even);
    FaultDrawer_Printf("\n");
    Fault_PrintFReg(0x1C, &temp_s0_2->fp28.f.f_even);
    Fault_PrintFReg(0x1E, &temp_s0_2->fp30.f.f_even);
    FaultDrawer_Printf("\n");
    FaultDrawer_SetCharPad(0, 0);
    temp_f0 = D_8009BE54;
    if (temp_f0 != 0.0f) {
        sp10 = (f64) temp_f0;
        FaultDrawer_DrawText(0xA0, 0xD8, "%5.2f sec\n");
    }
}

void osSyncPrintfThreadContext(OSThread *t) {
    __OSThreadContext *temp_s0_2;
    s16 temp_s0;
    void *temp_t1;
    void *phi_t1;
    s16 phi_s0;
    s16 phi_s0_2;

    phi_t1 = sp;
    do {
        temp_t1 = phi_t1 - 8;
        temp_t1->unk_0 = 0xFFFA5A5A;
        temp_t1->unk_4 = 0xFFFA5A5A;
        phi_t1 = temp_t1;
    } while (temp_t1 != sp);
    temp_s0 = ((u32) t->context.cause >> 2) & 0x1F;
    phi_s0 = temp_s0;
    if (temp_s0 == 0x17) {
        phi_s0 = 0x10;
    }
    phi_s0_2 = phi_s0;
    if (phi_s0 == 0x1F) {
        phi_s0_2 = 0x11;
    }
    osSyncPrintf("\n");
    osSyncPrintf("THREAD ID:%d (%d:%s)\n", t->id, phi_s0_2, D_80096B80[phi_s0_2]);
    temp_s0_2 = &t->context;
    osSyncPrintf("PC:%08xH   SR:%08xH   VA:%08xH\n", temp_s0_2->pc, temp_s0_2->sr, temp_s0_2->badvaddr);
    osSyncPrintf("AT:%08xH   V0:%08xH   V1:%08xH\n", temp_s0_2->unk_4, temp_s0_2->unk_C, temp_s0_2->unk_14);
    osSyncPrintf("A0:%08xH   A1:%08xH   A2:%08xH\n", temp_s0_2->unk_1C, temp_s0_2->unk_24, temp_s0_2->unk_2C);
    osSyncPrintf("A3:%08xH   T0:%08xH   T1:%08xH\n", temp_s0_2->unk_34, temp_s0_2->unk_3C, temp_s0_2->unk_44);
    osSyncPrintf("T2:%08xH   T3:%08xH   T4:%08xH\n", temp_s0_2->unk_4C, temp_s0_2->unk_54, temp_s0_2->unk_5C);
    osSyncPrintf("T5:%08xH   T6:%08xH   T7:%08xH\n", temp_s0_2->unk_64, temp_s0_2->unk_6C, temp_s0_2->unk_74);
    osSyncPrintf("S0:%08xH   S1:%08xH   S2:%08xH\n", temp_s0_2->unk_7C, temp_s0_2->unk_84, temp_s0_2->unk_8C);
    osSyncPrintf("S3:%08xH   S4:%08xH   S5:%08xH\n", temp_s0_2->unk_94, temp_s0_2->unk_9C, temp_s0_2->unk_A4);
    osSyncPrintf("S6:%08xH   S7:%08xH   T8:%08xH\n", temp_s0_2->unk_AC, temp_s0_2->unk_B4, temp_s0_2->unk_BC);
    osSyncPrintf("T9:%08xH   GP:%08xH   SP:%08xH\n", temp_s0_2->unk_C4, temp_s0_2->unk_CC, temp_s0_2->unk_D4);
    osSyncPrintf("S8:%08xH   RA:%08xH   LO:%08xH\n", temp_s0_2->unk_DC, temp_s0_2->unk_E4, temp_s0_2->unk_EC);
    osSyncPrintf("\n");
    osSyncPrintfFPCR(temp_s0_2->fpcsr);
    osSyncPrintf("\n");
    osSyncPrintfFReg(0, &temp_s0_2->fp0.f.f_even);
    osSyncPrintfFReg(2, &temp_s0_2->fp2.f.f_even);
    osSyncPrintf("\n");
    osSyncPrintfFReg(4, &temp_s0_2->fp4.f.f_even);
    osSyncPrintfFReg(6, &temp_s0_2->fp6.f.f_even);
    osSyncPrintf("\n");
    osSyncPrintfFReg(8, &temp_s0_2->fp8.f.f_even);
    osSyncPrintfFReg(0xA, &temp_s0_2->fp10.f.f_even);
    osSyncPrintf("\n");
    osSyncPrintfFReg(0xC, &temp_s0_2->fp12.f.f_even);
    osSyncPrintfFReg(0xE, &temp_s0_2->fp14.f.f_even);
    osSyncPrintf("\n");
    osSyncPrintfFReg(0x10, &temp_s0_2->fp16.f.f_even);
    osSyncPrintfFReg(0x12, &temp_s0_2->fp18.f.f_even);
    osSyncPrintf("\n");
    osSyncPrintfFReg(0x14, &temp_s0_2->fp20.f.f_even);
    osSyncPrintfFReg(0x16, &temp_s0_2->fp22.f.f_even);
    osSyncPrintf("\n");
    osSyncPrintfFReg(0x18, &temp_s0_2->fp24.f.f_even);
    osSyncPrintfFReg(0x1A, &temp_s0_2->fp26.f.f_even);
    osSyncPrintf("\n");
    osSyncPrintfFReg(0x1C, &temp_s0_2->fp28.f.f_even);
    osSyncPrintfFReg(0x1E, &temp_s0_2->fp30.f.f_even);
    osSyncPrintf("\n");
}

OSThread *Fault_FindFaultedThread(void) {
    OSThread *temp_v0;
    OSThread *temp_v1;
    s32 temp_v0_2;
    void *temp_t0;
    void *phi_t0;
    s32 phi_v0;
    OSThread *phi_v1;

    phi_t0 = sp;
    do {
        temp_t0 = phi_t0 - 8;
        temp_t0->unk_0 = 0xFFFA5A5A;
        temp_t0->unk_4 = 0xFFFA5A5A;
        phi_t0 = temp_t0;
    } while (temp_t0 != sp);
    temp_v0 = __osGetActiveQueue();
    phi_v1 = temp_v0;
    if (temp_v0->priority != -1) {
        phi_v0 = temp_v0->priority;
loop_4:
        if ((phi_v0 > 0) && (phi_v0 < 0x7F) && ((phi_v1->flags & 3) != 0)) {
            return phi_v1;
        }
        temp_v1 = phi_v1->tlnext;
        temp_v0_2 = temp_v1->priority;
        phi_v0 = temp_v0_2;
        phi_v1 = temp_v1;
        if (temp_v0_2 == -1) {
            goto block_9;
        }
        goto loop_4;
    }
block_9:
    return NULL;
}

void Fault_Wait5Seconds(void) {
    u32 sp1C;
    s32 sp18;
    u32 temp_v1;
    u32 temp_v1_2;
    u64 temp_ret;
    u64 temp_ret_2;
    void *temp_t3;
    void *phi_t3;

    phi_t3 = sp;
    do {
        temp_t3 = phi_t3 - 8;
        temp_t3->unk_0 = 0xFFFA5A5A;
        temp_t3->unk_4 = 0xFFFA5A5A;
        phi_t3 = temp_t3;
    } while (temp_t3 != sp);
    temp_ret = osGetTime();
    temp_v1 = (u32) temp_ret;
    sp18 = temp_ret;
    sp1C = temp_v1;
loop_3:
    Fault_Sleep(0x10U);
    temp_ret_2 = osGetTime();
    temp_v1_2 = (u32) temp_ret_2;
    if (((temp_ret_2 - sp18) - (temp_v1_2 < sp1C)) == 0) {
        if ((u32) (temp_v1_2 - sp1C) < 0xDF84759U) {
            goto loop_3;
        }
    }
    sFaultContext->faultActive = 1;
}

void Fault_WaitForButtonCombo(void) {
    Input *temp_s0;
    void *temp_t1;
    void *phi_t1;

    phi_t1 = sp;
    do {
        temp_t1 = phi_t1 - 8;
        temp_t1->unk_0 = 0xFFFA5A5A;
        temp_t1->unk_4 = 0xFFFA5A5A;
        phi_t1 = temp_t1;
    } while (temp_t1 != sp);
    temp_s0 = sFaultContext->padInput;
    FaultDrawer_SetForeColor(0xFFFFU);
    FaultDrawer_SetBackColor(1U);
    do {
loop_3:
        Fault_Sleep(0x10U);
        Fault_UpdatePadImpl();
        if (~(temp_s0->press.button | ~0x80) != 0) {
            goto loop_3;
        }
    } while (~(temp_s0->cur.button | ~0x231) != 0);
}

void Fault_DrawMemDumpPage(s8 *title, u32 *addr, u32 param_3) {
    u32 sp10;
    s32 *temp_s1;
    s32 temp_s0_2;
    s32 temp_s2;
    u32 temp_s0;
    void *temp_t7;
    void *phi_t7;
    u32 phi_s0;
    u32 phi_s0_2;
    s8 *phi_a3;
    s32 phi_s2;
    u32 phi_s1;
    s32 phi_s0_3;
    s32 *phi_s1_2;

    phi_t7 = sp;
    do {
        temp_t7 = phi_t7 - 8;
        temp_t7->unk_0 = 0xFFFA5A5A;
        temp_t7->unk_4 = 0xFFFA5A5A;
        phi_t7 = temp_t7;
    } while (temp_t7 != sp);
    phi_s0 = (u32) addr;
    if ((u32) addr < 0x80000000U) {
        phi_s0 = 0x80000000U;
    }
    phi_s0_2 = phi_s0;
    if (phi_s0 >= 0x807FFF01U) {
        phi_s0_2 = 0x807FFF00U;
    }
    temp_s0 = phi_s0_2 & ~3;
    Fault_FillScreenBlack();
    FaultDrawer_SetCharPad(-2, 0);
    phi_s1 = temp_s0;
    if (title != 0) {
        phi_a3 = title;
    } else {
        phi_a3 = "PrintDump";
    }
    sp10 = temp_s0;
    FaultDrawer_DrawText(0x24, 0x12, "%s %08x", phi_a3);
    if (temp_s0 >= 0x80000000U) {
        phi_s2 = 0x1C;
        if (temp_s0 < 0xC0000000U) {
            do {
                FaultDrawer_DrawText(0x18, phi_s2, "%06x", phi_s1);
                phi_s0_3 = 0x52;
                phi_s1_2 = (s32 *) phi_s1;
loop_13:
                temp_s1 = phi_s1_2 + 4;
                FaultDrawer_DrawText(phi_s0_3, phi_s2, "%08x", *phi_s1_2);
                temp_s0_2 = phi_s0_3 + 0x34;
                phi_s1 = (u32) temp_s1;
                phi_s0_3 = temp_s0_2;
                phi_s1_2 = temp_s1;
                if (temp_s0_2 != 0x122) {
                    goto loop_13;
                }
                temp_s2 = phi_s2 + 9;
                phi_s2 = temp_s2;
            } while (temp_s2 != 0xE2);
        }
    }
    FaultDrawer_SetCharPad(0, 0);
}

void Fault_DrawMemDump(u32 pc, u32 sp, u32 unk0, u32 unk1) {
    Input *temp_s1;
    u16 temp_a0;
    u16 temp_v0;
    u32 temp_s3;
    void *temp_t6;
    void *phi_t6;
    u32 phi_s3;
    u32 phi_s3_2;
    u32 phi_s3_3;
    s32 phi_s0;
    u32 phi_s3_4;
    s32 phi_v1;
    s32 phi_v1_2;

    phi_t6 = sp;
    do {
        temp_t6 = phi_t6 - 8;
        temp_t6->unk_0 = 0xFFFA5A5A;
        temp_t6->unk_4 = 0xFFFA5A5A;
        phi_t6 = temp_t6;
    } while (temp_t6 != sp);
    temp_s1 = sFaultContext->padInput;
    phi_s3 = pc;
loop_3:
    phi_s3_2 = phi_s3;
    if (phi_s3 < 0x80000000U) {
        phi_s3_2 = 0x80000000U;
    }
    phi_s3_3 = phi_s3_2;
    if (phi_s3_2 >= 0x807FFF01U) {
        phi_s3_3 = 0x807FFF00U;
    }
    temp_s3 = phi_s3_3 & ~0xF;
    Fault_DrawMemDumpPage("Dump", (u32 *) temp_s3, 0U);
    phi_s0 = 0x258;
    phi_s3_4 = temp_s3;
    if (sFaultContext->faultActive != 0) {
loop_8:
        if (phi_s0 != 0) {
            Fault_Sleep(0x10U);
            Fault_UpdatePadImpl();
            phi_s0 += -1;
            if (~(temp_s1->press.button | ~0x20) == 0) {
                sFaultContext->faultActive = 0;
            }
            if (sFaultContext->faultActive == 0) {
                goto loop_12;
            }
            goto loop_8;
        }
    } else {
        do {
loop_12:
            Fault_Sleep(0x10U);
            Fault_UpdatePadImpl();
            temp_v0 = temp_s1->press.button;
        } while (temp_v0 == 0);
        if (~(temp_v0 | ~0x1000) != 0) {
            temp_a0 = temp_s1->cur.button;
            phi_v1_2 = 0x10;
            if (~(temp_a0 | 0xFFFF7FFF) == 0) {
                phi_v1_2 = 0x100;
            }
            phi_v1 = phi_v1_2;
            if (~(temp_a0 | ~0x4000) == 0) {
                phi_v1 = phi_v1_2 << 8;
            }
            if (~(temp_v0 | ~0x800) == 0) {
                phi_s3_4 = temp_s3 - phi_v1;
            }
            phi_s3 = phi_s3_4;
            if (~(temp_v0 | ~0x400) == 0) {
                phi_s3 = phi_s3_4 + phi_v1;
            }
            if (~(temp_v0 | ~8) == 0) {
                phi_s3 = pc;
            }
            if (~(temp_v0 | ~4) == 0) {
                phi_s3 = sp;
            }
            if (~(temp_v0 | ~2) == 0) {
                phi_s3 = unk0;
            }
            if (~(temp_v0 | ~1) == 0) {
                phi_s3 = unk1;
            }
            if (~(temp_v0 | ~0x20) == 0) {
                sFaultContext->faultActive = 1;
            } else {
                goto loop_3;
            }
        }
    }
}

void Fault_FindNextStackCall(u32 **sp, u32 **pc, u32 **ra) {
    s32 temp_t4;
    u32 *temp_a3;
    u32 *temp_v0;
    u32 *temp_v1;
    u32 temp_t2;
    void *temp_t9;
    void *phi_t9;
    u32 *phi_v1;
    u32 phi_t0;
    u32 *phi_v0;
    u32 *phi_v1_2;
    u32 *phi_a3;
    u32 *phi_v0_2;
    u32 *phi_a3_2;
    u32 *phi_v0_3;

    phi_t9 = sp;
    do {
        temp_t9 = phi_t9 - 8;
        temp_t9->unk_0 = 0xFFFA5A5A;
        temp_t9->unk_4 = 0xFFFA5A5A;
        phi_t9 = temp_t9;
    } while (temp_t9 != sp);
    temp_v0 = *sp;
    temp_v1 = *pc;
    temp_a3 = *ra;
    phi_v1 = temp_v1;
    phi_v0_3 = temp_v0;
    phi_a3_2 = temp_a3;
    if ((((s32) temp_v0 & 3) != 0) || ((u32) temp_v0 < 0x80000000U) || ((u32) temp_v0 >= 0xC0000000U) || (((s32) temp_a3 & 3) != 0) || ((u32) temp_a3 < 0x80000000U) || ((u32) temp_a3 >= 0xC0000000U)) {
        *sp = NULL;
        *pc = NULL;
        *ra = NULL;
        return;
    }
    if ((((s32) temp_v1 & 3) != 0) || ((u32) temp_v1 < 0x80000000U) || (phi_t0 = 0U, (((u32) temp_v1 < 0xC0000000U) == 0))) {
        *pc = temp_a3;
        return;
    }
loop_14:
    temp_t2 = *phi_v1;
    temp_t4 = (temp_t2 >> 0x10) & 0xFFFF;
    phi_v0_2 = phi_v0_3;
    if (temp_t4 == 0x8FBF) {
        phi_a3_2 = *(phi_v0_3 + (s16) temp_t2);
        goto block_20;
    }
    if (temp_t4 == 0x27BD) {
        phi_v0_2 = phi_v0_3 + (s16) temp_t2;
        goto block_20;
    }
    if (temp_t2 == 0x42000018) {
        phi_v0 = NULL;
        phi_v1_2 = NULL;
        phi_a3 = NULL;
    } else {
block_20:
        phi_v0 = phi_v0_2;
        phi_a3 = phi_a3_2;
        phi_v0_3 = phi_v0_2;
        if (phi_t0 == 0x3E00008) {
            phi_v1_2 = phi_a3_2;
        } else if ((phi_t0 >> 0x1A) == 2) {
            phi_v1_2 = (u32 *) ((((u32) phi_v1 >> 0x1C) << 0x1C) | ((u32) (phi_t0 << 6) >> 4));
        } else {
            phi_v1 += 4;
            phi_t0 = temp_t2;
            goto loop_14;
        }
    }
    *sp = phi_v0;
    *pc = phi_v1_2;
    *ra = phi_a3;
}

void Fault_DrawStackTrace(OSThread *t, u32 flags) {
    u32 *sp68;
    u32 *sp64;
    u32 sp60;
    u32 sp10;
    s32 temp_s0;
    void *temp_t8;
    void *temp_v0;
    void *phi_t8;
    s32 phi_s0;

    phi_t8 = sp;
    do {
        temp_t8 = phi_t8 - 8;
        temp_t8->unk_0 = 0xFFFA5A5A;
        temp_t8->unk_4 = 0xFFFA5A5A;
        phi_t8 = temp_t8;
    } while (temp_t8 != sp);
    sp68 = t->unk_F4;
    sp64 = t->unk_104;
    sp60 = t->context.pc;
    Fault_FillScreenBlack();
    FaultDrawer_DrawText(0x78, 0x10, "STACK TRACE");
    FaultDrawer_DrawText(0x24, 0x18, "SP       PC       (VPC)");
    if (((sp64 != 0) || (sp68 != 0)) && (sp60 != __osCleanupThread)) {
        phi_s0 = (1 * 8) + 0x18;
loop_6:
        sp10 = sp60;
        FaultDrawer_DrawText(0x24, phi_s0, "%08x %08x", sp68);
        if ((flags & 1) != 0) {
            temp_v0 = Fault_ConvertAddress((void *) sp60);
            if (temp_v0 != 0) {
                FaultDrawer_Printf(" -> %08x", temp_v0);
            }
        } else {
            FaultDrawer_Printf(" -> ????????");
        }
        Fault_FindNextStackCall(&sp68, (u32 **) &sp60, &sp64);
        temp_s0 = phi_s0 + 8;
        phi_s0 = temp_s0;
        if ((temp_s0 < 0xC8) && ((sp64 != 0) || (sp68 != 0)) && (sp60 != __osCleanupThread)) {
            goto loop_6;
        }
    }
}

void osSyncPrintfStackTrace(OSThread *t, u32 flags) {
    u32 *sp58;
    u32 *sp54;
    u32 sp50;
    s32 temp_s0;
    void *temp_t8;
    void *temp_v0;
    void *phi_t8;
    s32 phi_s0;

    phi_t8 = sp;
    do {
        temp_t8 = phi_t8 - 8;
        temp_t8->unk_0 = 0xFFFA5A5A;
        temp_t8->unk_4 = 0xFFFA5A5A;
        phi_t8 = temp_t8;
    } while (temp_t8 != sp);
    sp58 = t->unk_F4;
    sp54 = t->unk_104;
    sp50 = t->context.pc;
    osSyncPrintf("STACK TRACE", t);
    osSyncPrintf("SP       PC       (VPC)\n");
    phi_s0 = 1;
    if (((sp54 != 0) || (sp58 != 0)) && (sp50 != __osCleanupThread)) {
loop_6:
        osSyncPrintf("%08x %08x", sp58, sp50);
        if ((flags & 1) != 0) {
            temp_v0 = Fault_ConvertAddress((void *) sp50);
            if (temp_v0 != 0) {
                osSyncPrintf(" -> %08x", temp_v0);
            }
        } else {
            osSyncPrintf(" -> ????????");
        }
        osSyncPrintf("\n");
        Fault_FindNextStackCall(&sp58, (u32 **) &sp50, &sp54);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
        if ((temp_s0 < 0x16) && ((sp54 != 0) || (sp58 != 0)) && (sp50 != __osCleanupThread)) {
            goto loop_6;
        }
    }
}

void Fault_ResumeThread(OSThread *t) {
    u32 temp_a0;
    u32 temp_t7;
    void *temp_t1;
    void *phi_t1;

    phi_t1 = sp;
    do {
        temp_t1 = phi_t1 - 8;
        temp_t1->unk_0 = 0xFFFA5A5A;
        temp_t1->unk_4 = 0xFFFA5A5A;
        phi_t1 = temp_t1;
    } while (temp_t1 != sp);
    t->context.cause = 0;
    t->context.fpcsr = 0;
    temp_t7 = t->context.pc + 4;
    t->context.pc = temp_t7;
    *temp_t7 = 0xD;
    temp_a0 = t->context.pc;
    t = t;
    osWritebackDCache((void *) temp_a0, 4);
    osInvalICache((void *) t->context.pc, 4);
    osStartThread(t);
}

void Fault_CommitFB(void) {
    void *sp1C;
    void *temp_t9;
    void *temp_v0;
    void *temp_v0_2;
    void *phi_t9;
    void *phi_a0;

    phi_t9 = sp;
    do {
        temp_t9 = phi_t9 - 8;
        temp_t9->unk_0 = 0xFFFA5A5A;
        temp_t9->unk_4 = 0xFFFA5A5A;
        phi_t9 = temp_t9;
    } while (temp_t9 != sp);
    osViSetYScale(1.0f);
    osViSetMode(&osViModeNtscLan1);
    osViSetSpecialFeatures(0x42U);
    osViBlack(0U);
    temp_v0 = sFaultContext->fb;
    if (temp_v0 != 0) {
        phi_a0 = temp_v0;
    } else {
        temp_v0_2 = osViGetNextFramebuffer();
        phi_a0 = temp_v0_2;
        if (temp_v0_2 == 0x80000000) {
            phi_a0 = (osMemSize | 0x80000000) + 0xFFFDA800;
        }
    }
    sp1C = phi_a0;
    osViSwapBuffer(phi_a0);
    FaultDrawer_SetDrawerFB(phi_a0, 0x140U, 0xF0U);
}

void Fault_ProcessClients(void) {
    s32 sp10;
    FaultClient *temp_s0;
    FaultClient *temp_s0_2;
    void *temp_t1;
    void *phi_t1;
    FaultClient *phi_s0;
    s32 phi_s1;

    phi_t1 = sp;
    do {
        temp_t1 = phi_t1 - 8;
        temp_t1->unk_0 = 0xFFFA5A5A;
        temp_t1->unk_4 = 0xFFFA5A5A;
        phi_t1 = temp_t1;
    } while (temp_t1 != sp);
    temp_s0 = sFaultContext->clients;
    phi_s0 = temp_s0;
    phi_s1 = 0;
    if (temp_s0 != 0) {
        do {
            if (phi_s0->callback != 0) {
                Fault_FillScreenBlack();
                FaultDrawer_SetCharPad(-2, 0);
                sp10 = phi_s0->param1;
                FaultDrawer_Printf("\x1a8CallBack (%d) %08x %08x %08x\n\x1a7", phi_s1, phi_s0, phi_s0->param0);
                FaultDrawer_SetCharPad(0, 0);
                phi_s0->callback(phi_s0->param0, phi_s0->param1);
                Fault_WaitForInput();
                Fault_CommitFB();
                phi_s1 += 1;
            }
            temp_s0_2 = phi_s0->next;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 0);
    }
}

void Fault_SetOptionsFromController3(void) {
    Input *sp34;
    u32 sp2C;
    s32 sp28;
    s32 sp24;
    s32 sp14;
    s32 sp10;
    FaultThreadStruct *temp_t0;
    Input *temp_t0_2;
    u16 temp_v0;
    u32 temp_a0;
    void *temp_t7;
    void *phi_t7;
    u16 phi_v0;
    u16 phi_v0_2;

    phi_t7 = sp;
    do {
        temp_t7 = phi_t7 - 8;
        temp_t7->unk_0 = 0xFFFA5A5A;
        temp_t7->unk_4 = 0xFFFA5A5A;
        phi_t7 = temp_t7;
    } while (temp_t7 != sp);
    temp_t0 = sFaultContext;
    temp_t0_2 = &temp_t0->padInput[3];
    if (~(temp_t0->padInput[3].press.button | ~0x80) == 0) {
        faultCustomOptions = faultCustomOptions == 0;
    }
    if (faultCustomOptions != 0) {
        sp2C = graphOSThread.context.pc;
        sp28 = graphOSThread.unk_104;
        sp24 = graphOSThread.unk_F4;
        temp_v0 = temp_t0_2->cur.button;
        phi_v0 = temp_v0;
        if (~(temp_v0 | ~0x10) == 0) {
            temp_a0 = faultCopyToLog == 0;
            faultCopyToLog = temp_a0;
            sp34 = temp_t0_2;
            FaultDrawer_SetOsSyncPrintfEnabled(temp_a0);
            phi_v0 = temp_t0_2->cur.button;
        }
        phi_v0_2 = phi_v0;
        if (~(phi_v0 | 0xFFFF7FFF) == 0) {
            sp34 = &temp_t0->padInput[3];
            osSyncPrintf("GRAPH PC=%08x RA=%08x STACK=%08x\n", sp2C, sp28, sp24);
            phi_v0_2 = temp_t0->padInput[3].cur.button;
        }
        if (~(phi_v0_2 | ~0x4000) == 0) {
            FaultDrawer_SetDrawerFB(osViGetNextFramebuffer(), 0x140U, 0xF0U);
            sp10 = 1;
            Fault_DrawRec(0, 0xD7, 0x140, 9);
            FaultDrawer_SetCharPad(-2, 0);
            sp10 = sp28;
            sp14 = sp24;
            FaultDrawer_DrawText(0x20, 0xD8, "GRAPH PC %08x RA %08x SP %08x", sp2C);
        }
    }
}

void Fault_SetOptions(void) {
    void *temp_t7;
    void *phi_t7;

    phi_t7 = sp;
    do {
        temp_t7 = phi_t7 - 8;
        temp_t7->unk_0 = 0xFFFA5A5A;
        temp_t7->unk_4 = 0xFFFA5A5A;
        phi_t7 = temp_t7;
    } while (temp_t7 != sp);
    Fault_UpdatePadImpl();
    Fault_SetOptionsFromController3();
}

void Fault_ThreadEntry(void *arg) {
    void *sp54;
    OSThread *temp_s0;
    OSThread *temp_s0_2;
    OSThread *temp_v0;
    OSThread *temp_v0_2;
    u8 temp_v0_3;
    void *temp_t3;
    void *phi_t3;
    OSThread *phi_s0;

    phi_t3 = sp;
    do {
        temp_t3 = phi_t3 - 8;
        temp_t3->unk_0 = 0xFFFA5A5A;
        temp_t3->unk_4 = 0xFFFA5A5A;
        phi_t3 = temp_t3;
    } while (temp_t3 != sp);
    osSetEventMesg(0xAU, &sFaultContext->queue, (void *)1);
    osSetEventMesg(0xCU, &sFaultContext->queue, (void *)2);
loop_3:
    osRecvMesg(&sFaultContext->queue, &sp54, 1);
    if (sp54 == 1) {
        sFaultContext->msgId = 1;
        osSyncPrintf("フォルトマネージャ:OS_EVENT_CPU_BREAKを受信しました\n");
        goto block_10;
    }
    if (sp54 == 2) {
        sFaultContext->msgId = 2;
        osSyncPrintf("フォルトマネージャ:OS_EVENT_FAULTを受信しました\n");
        goto block_10;
    }
    if (sp54 == 3) {
        Fault_SetOptions();
        phi_s0 = NULL;
    } else {
        sFaultContext->msgId = 3;
        osSyncPrintf("フォルトマネージャ:不明なメッセージを受信しました\n");
block_10:
        temp_v0 = __osGetCurrFaultedThread();
        temp_s0 = temp_v0;
        osSyncPrintf("__osGetCurrFaultedThread()=%08x\n", temp_v0);
        phi_s0 = temp_s0;
        if (temp_s0 == 0) {
            temp_v0_2 = Fault_FindFaultedThread();
            temp_s0_2 = temp_v0_2;
            osSyncPrintf("FindFaultedThread()=%08x\n", temp_v0_2);
            phi_s0 = temp_s0_2;
        }
    }
    if (phi_s0 == 0) {
        goto loop_3;
    }
    __osSetFpcCsr(__osGetFpcCsr() & ~0xF80);
    sFaultContext->faultedThread = phi_s0;
    if (sFaultContext->faultHandlerEnabled == 0) {
        do {
            Fault_Sleep(0x3E8U);
        } while (sFaultContext->faultHandlerEnabled == 0);
    }
    Fault_Sleep(0x1F4U);
    Fault_CommitFB();
    if (sFaultContext->faultActive != 0) {
        Fault_Wait5Seconds();
    } else {
        Fault_DrawCornerRec(0xF801U);
        Fault_WaitForButtonCombo();
    }
    sFaultContext->faultActive = 1;
    FaultDrawer_SetForeColor(0xFFFFU);
    FaultDrawer_SetBackColor(0U);
    do {
        Fault_PrintThreadContext(phi_s0);
        osSyncPrintfThreadContext(phi_s0);
        Fault_WaitForInput();
        Fault_DrawStackTrace(phi_s0, 0U);
        osSyncPrintfStackTrace(phi_s0, 0U);
        Fault_WaitForInput();
        Fault_ProcessClients();
        Fault_DrawMemDump(phi_s0->context.pc - 0x100, phi_s0->unk_F4, 0U, 0U);
        Fault_DrawStackTrace(phi_s0, (u32) 1U);
        osSyncPrintfStackTrace(phi_s0, (u32) 1U);
        Fault_WaitForInput();
        Fault_FillScreenRed();
        FaultDrawer_DrawText(0x40, 0x50, "    CONGRATURATIONS!    ");
        FaultDrawer_DrawText(0x40, 0x5A, "All Pages are displayed.");
        FaultDrawer_DrawText(0x40, 0x64, "       THANK YOU!       ");
        FaultDrawer_DrawText(0x40, 0x6E, " You are great debugger!");
        Fault_WaitForInput();
        temp_v0_3 = sFaultContext->exitDebugger;
    } while (temp_v0_3 == 0);
    if (temp_v0_3 == 0) {
        do {

        } while (temp_v0_3 == 0);
    }
    Fault_ResumeThread(phi_s0);
    goto loop_3;
}

void Fault_SetFB(void *fb, u16 w, u16 h) {
    void *temp_t8;
    void *phi_t8;

    phi_t8 = sp;
    do {
        temp_t8 = phi_t8 - 8;
        temp_t8->unk_0 = 0xFFFA5A5A;
        temp_t8->unk_4 = 0xFFFA5A5A;
        phi_t8 = temp_t8;
    } while (temp_t8 != sp);
    sFaultContext->fb = fb;
    FaultDrawer_SetDrawerFB(fb, w & 0xFFFF, h & 0xFFFF);
}

void Fault_Start(void) {
    s8 *sp14;
    StackEntry *sp10;
    FaultThreadStruct *temp_v0;
    void *temp_t1;
    void *phi_t1;

    phi_t1 = sp;
    do {
        temp_t1 = phi_t1 - 8;
        temp_t1->unk_0 = 0xFFFA5A5A;
        temp_t1->unk_4 = 0xFFFA5A5A;
        phi_t1 = temp_t1;
    } while (temp_t1 != sp);
    sFaultContext = &gFaultStruct;
    bzero((void *) &gFaultStruct, 0x848);
    FaultDrawer_Init();
    FaultDrawer_SetInputCallback(Fault_WaitForInput);
    sFaultContext->exitDebugger = 0;
    sFaultContext->msgId = 0;
    sFaultContext->faultHandlerEnabled = 0;
    sFaultContext->faultedThread = NULL;
    sFaultContext->padCallback = Fault_PadCallback;
    sFaultContext->clients = NULL;
    sFaultContext->faultActive = 0;
    gFaultStruct.faultHandlerEnabled = 1;
    temp_v0 = sFaultContext;
    osCreateMesgQueue(&temp_v0->queue, temp_v0->msg, 1);
    sp10 = (StackEntry *)0x100;
    sp14 = "fault";
    StackCheck_Init(&sFaultThreadInfo, (void *) sFaultStack, (void *) &sFaultThreadInfo, 0U);
    sp14 = (s8 *)0x7F;
    sp10 = &sFaultThreadInfo;
    osCreateThread((OSThread *) sFaultContext, 2, (void *) Fault_ThreadEntry, NULL);
    osStartThread((OSThread *) sFaultContext);
}

void Fault_HangupFaultClient(s8 *arg0, s8 *arg1) {
    void *temp_t9;
    void *phi_t9;
    s8 *phi_a1;
    s8 *phi_a1_2;
    s8 *phi_a1_3;
    s8 *phi_a1_4;

    phi_t9 = sp;
    do {
        temp_t9 = phi_t9 - 8;
        temp_t9->unk_0 = 0xFFFA5A5A;
        temp_t9->unk_4 = 0xFFFA5A5A;
        phi_t9 = temp_t9;
    } while (temp_t9 != sp);
    osSyncPrintf("HungUp on Thread %d\n", osGetThreadId(NULL));
    phi_a1 = "(NULL)";
    if (arg0 != 0) {
        phi_a1 = arg0;
    }
    osSyncPrintf("%s\n", phi_a1);
    phi_a1_2 = "(NULL)";
    if (arg1 != 0) {
        phi_a1_2 = arg1;
    }
    osSyncPrintf("%s\n", phi_a1_2);
    FaultDrawer_Printf("HungUp on Thread %d\n", osGetThreadId(NULL));
    phi_a1_3 = "(NULL)";
    if (arg0 != 0) {
        phi_a1_3 = arg0;
    }
    FaultDrawer_Printf("%s\n", phi_a1_3);
    phi_a1_4 = "(NULL)";
    if (arg1 != 0) {
        phi_a1_4 = arg1;
    }
    FaultDrawer_Printf("%s\n", phi_a1_4);
}

void Fault_AddHungupAndCrashImpl(s8 *arg0, s8 *arg1) {
    ? sp20;
    void *temp_t8;
    void *phi_t8;

    phi_t8 = sp;
    do {
        temp_t8 = phi_t8 - 8;
        temp_t8->unk_0 = 0xFFFA5A5A;
        temp_t8->unk_4 = 0xFFFA5A5A;
        phi_t8 = temp_t8;
    } while (temp_t8 != sp);
    Fault_AddClient((FaultClient *) &sp20, (void (*)(void *, void *)) Fault_HangupFaultClient, (void *) arg0, (void *) arg1);
    *(? *)0x11111111 = (unaligned s32) 0;
}

void Fault_AddHungupAndCrash(s8 *filename, u32 line) {
    s8 sp18;
    void *temp_t7;
    void *phi_t7;

    phi_t7 = sp;
    do {
        temp_t7 = phi_t7 - 8;
        temp_t7->unk_0 = 0xFFFA5A5A;
        temp_t7->unk_4 = 0xFFFA5A5A;
        phi_t7 = temp_t7;
    } while (temp_t7 != sp);
    sprintf(&sp18, "HungUp %s:%d", filename, line);
    Fault_AddHungupAndCrashImpl(&sp18, NULL);
}
