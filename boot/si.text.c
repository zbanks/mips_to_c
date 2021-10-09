

s32 __osSiDeviceBusy(void) {
    if ((*(s32 *)0xA4800018 & 3) != 0) {
        return 1;
    }
    return 0;
}

