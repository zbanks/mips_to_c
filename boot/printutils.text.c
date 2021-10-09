

s32 PrintUtils_VPrintf(void *(**pfn)(void *, s8 *, u32), s8 *fmt, s8 *args) {
    return _Printf(*pfn, (void *) pfn, fmt, args);
}

s32 PrintUtils_Printf(void *(**pfn)(void *, s8 *, u32), s8 *fmt, s8 arg2, ? arg3, ...) {
    return PrintUtils_VPrintf(pfn, fmt, &arg2);
}

