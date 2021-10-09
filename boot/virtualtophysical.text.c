

u32 osVirtualToPhysical(void *vaddr) {
    if (((u32) vaddr >= 0x80000000U) && ((u32) vaddr < 0xA0000000U)) {
        return (s32) vaddr & 0x1FFFFFFF;
    }
    if (((u32) vaddr >= 0xA0000000U) && ((u32) vaddr < 0xC0000000U)) {
        return (s32) vaddr & 0x1FFFFFFF;
    }
    return __osProbeTLB(vaddr);
}

