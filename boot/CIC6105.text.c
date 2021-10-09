struct _mips2c_stack_CIC6105_AddRomInfoFaultPage {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CIC6105_Nop80081820 {};        /* size 0x0 */

struct _mips2c_stack_CIC6105_Nop80081828 {};        /* size 0x0 */

struct _mips2c_stack_CIC6105_PrintRomInfo {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CIC6105_RemoveRomInfoFaultPage {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800818F4 {};              /* size 0x0 */

extern s32 D_A4040010;
static s32 D_8009BE30;
static s32 D_8009BE34;
static FaultClient romInfoFaultClient;

void CIC6105_Nop80081820(void) {

}

void CIC6105_Nop80081828(void) {

}

void CIC6105_PrintRomInfo(void) {
    FaultDrawer_DrawText(0x50, 0xC8, "SP_STATUS %08x", D_A4040010);
    FaultDrawer_DrawText(0x28, 0xB8, "ROM_F [Creator:%s]", "zelda@srd44");
    FaultDrawer_DrawText(0x38, 0xC0, "[Date:%s]", "00-07-31 17:04:16");
}

void CIC6105_AddRomInfoFaultPage(void) {
    Fault_AddClient(&romInfoFaultClient, (void (*)(void *, void *)) CIC6105_PrintRomInfo, NULL, NULL);
}

void CIC6105_RemoveRomInfoFaultPage(void) {
    Fault_RemoveClient(&romInfoFaultClient);
}

void func_800818F4(void) {
    D_8009BE30 = *(s32 *)0xA02FB1F4;
    D_8009BE34 = *(s32 *)0xA02FE1C0;
}
