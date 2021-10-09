struct _mips2c_stack___osSpRawStartDma {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

extern void *D_A4040000;
extern u32 D_A4040004;
extern s32 D_A4040008;
extern s32 D_A404000C;

s32 __osSpRawStartDma(s32 direction, void *devAddr, void *dramAddr, u32 size) {
    if (__osSpDeviceBusy() != 0) {
        return -1;
    }
    D_A4040000 = devAddr;
    D_A4040004 = osVirtualToPhysical(dramAddr);
    if (direction == 0) {
        D_A404000C = size - 1;
        return 0;
    }
    D_A4040008 = size - 1;
    return 0;
}
