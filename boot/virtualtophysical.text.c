struct _mips2c_stack_osVirtualToPhysical {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

u32 osVirtualToPhysical(void *vaddr) {
    if (((u32) vaddr >= 0x80000000U) && ((u32) vaddr < 0xA0000000U)) {
        return (s32) vaddr & 0x1FFFFFFF;
    }
    if (((u32) vaddr >= 0xA0000000U) && ((u32) vaddr < 0xC0000000U)) {
        return (s32) vaddr & 0x1FFFFFFF;
    }
    return __osProbeTLB(vaddr);
}
