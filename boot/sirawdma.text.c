

s32 __osSiRawStartDma(s32 direction, void *dramAddr) {
    if ((*(s32 *)0xA4800018 & 3) != 0) {
        return -1;
    }
    if (direction == 1) {
        direction = direction;
        osWritebackDCache(dramAddr, 0x40);
    }
    direction = direction;
    *(u32 *)0xA4800000 = osVirtualToPhysical(dramAddr);
    if (direction == 0) {
        *(s32 *)0xA4800004 = 0x1FC007C0;
    } else {
        *(s32 *)0xA4800010 = 0x1FC007C0;
    }
    if (direction == 0) {
        osInvalDCache(dramAddr, 0x40);
    }
    return 0;
}

