s32 __OSGlobalIntMask = 0x3FFF01;



void __osResetGlobalIntMask(u32 mask) {
    u32 temp_s0;

    temp_s0 = __osDisableInt();
    __OSGlobalIntMask = __OSGlobalIntMask & ~(mask & ~0x401);
    __osRestoreInt(temp_s0);
}

