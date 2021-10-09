

u32 __osSetFpcCsr(u32 value) {
    return MIPS2C_ERROR(cfc1);
}

