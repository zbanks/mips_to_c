struct _mips2c_stack___osSiDeviceBusy {};           /* size 0x0 */

s32 __osSiDeviceBusy(void) {
    if ((*(s32 *)0xA4800018 & 3) != 0) {
        return 1;
    }
    return 0;
}
