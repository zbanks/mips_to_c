u32 __osBaseCounter;
u64 __osCurrentTime;



u64 osGetTime(void) {
    u32 sp34;
    s32 sp30;
    u32 sp2C;
    s32 sp28;
    u32 temp_s0;

    temp_s0 = __osDisableInt();
    sp34 = osGetCount();
    sp30 = sp34 - __osBaseCounter;
    sp2C = *(&__osCurrentTime + 4);
    sp28 = __osCurrentTime;
    __osRestoreInt(temp_s0);
    return ((u32) (sp30 + sp2C) < sp2C) + sp28;
}

