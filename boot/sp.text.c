struct _mips2c_stack___osSpDeviceBusy {};           /* size 0x0 */

extern s32 D_A4040010;

s32 __osSpDeviceBusy(void) {
    if ((D_A4040010 & 0x1C) != 0) {
        return 1;
    }
    return 0;
}
