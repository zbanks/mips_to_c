struct _mips2c_stack_osPiRawStartDma {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

extern u32 D_A4600000;
extern s32 D_A4600004;
extern s32 D_A4600008;
extern s32 D_A460000C;

s32 osPiRawStartDma(s32 direction, u32 devAddr, void *dramAddr, u32 size) {
    if ((*(s32 *)0xA4600010 & 3) != 0) {
        do {

        } while ((*(s32 *)0xA4600010 & 3) != 0);
    }
    D_A4600000 = osVirtualToPhysical(dramAddr);
    D_A4600004 = (osRomBase | devAddr) & 0x1FFFFFFF;
    if (direction != 0) {
        if (direction != 1) {
            return -1;
        }
        D_A4600008 = size - 1;
        goto block_8;
    }
    D_A460000C = size - 1;
block_8:
    return 0;
}
