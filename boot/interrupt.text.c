s32 __OSGlobalIntMask = 0x3FFF01;
OSThread *__osRunningThread = NULL;



u32 __osDisableInt(void) {
    MIPS2C_ERROR(unknown instruction: mtc0 $t1, Status);
    if ((__OSGlobalIntMask & 0xFF00) != (__OSGlobalIntMask & 0xFF00)) {
        MIPS2C_ERROR(unknown instruction: mtc0 $t1, Status);
    }
    return MIPS2C_ERROR(unknown instruction: mfc0 $t0, Status) & 1;
}

void __osRestoreInt(u32 im) {
    MIPS2C_ERROR(unknown instruction: mfc0 $t0, Status);
    MIPS2C_ERROR(unknown instruction: mtc0 $t0, Status);
}

