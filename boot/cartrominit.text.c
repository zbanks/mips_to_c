struct _mips2c_stack_osCartRomInit {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

static s32 D_800980D0 = 1;
OSPiHandle CartRomHandle;
OSPiHandle *__osPiTable = NULL;

OSPiHandle *osCartRomInit(void) {
    OSPiHandle *temp_t8;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v1;
    u32 temp_v0;
    u32 temp_v0_2;

    __osPiGetAccess();
    if (D_800980D0 == 0) {
        __osPiRelAccess();
        return &CartRomHandle;
    }
    D_800980D0 = 0;
    CartRomHandle.type = 0;
    CartRomHandle.baseAddress = 0xB0000000;
    CartRomHandle.domain = 0;
    CartRomHandle.speed = 0;
    bzero((void *) &CartRomHandle.transferInfo, 0x60);
    if ((*(s32 *)0xA4600010 & 3) != 0) {
        do {

        } while ((*(s32 *)0xA4600010 & 3) != 0);
    }
    temp_v1 = *(s32 *)0xA4600014;
    temp_a0 = *(s32 *)0xA460001C;
    temp_a1 = *(s32 *)0xA4600020;
    temp_a2 = *(s32 *)0xA4600018;
    *(s32 *)0xA4600014 = 0xFF;
    *(s32 *)0xA460001C = 0;
    *(s32 *)0xA4600020 = 3;
    *(s32 *)0xA4600018 = 0xFF;
    temp_v0 = *(CartRomHandle.baseAddress | 0xA0000000);
    CartRomHandle.pageSize = (temp_v0 >> 0x10) & 0xF;
    CartRomHandle.relDuration = (temp_v0 >> 0x14) & 0xF;
    CartRomHandle.pulse = (u8) (temp_v0 >> 8);
    CartRomHandle.latency = (u8) temp_v0;
    *(s32 *)0xA4600014 = temp_v1;
    *(s32 *)0xA460001C = temp_a0;
    *(s32 *)0xA4600020 = temp_a1;
    *(s32 *)0xA4600018 = temp_a2;
    temp_v0_2 = __osDisableInt();
    temp_t8 = __osPiTable;
    __osPiTable = &CartRomHandle;
    CartRomHandle.next = temp_t8;
    __osRestoreInt(temp_v0_2);
    __osPiRelAccess();
    return &CartRomHandle;
}
