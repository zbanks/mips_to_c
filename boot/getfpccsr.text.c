

u32 __osGetFpcCsr(void) {
    return MIPS2C_ERROR(cfc1);
}

