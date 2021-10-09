extern s32 D_A430000C;
s32 __OSGlobalIntMask = 0x3FFF01;



s32 osGetIntMask(void) {
    s32 temp_t1;
    s32 phi_t1;

    temp_t1 = D_A430000C;
    phi_t1 = temp_t1;
    if (temp_t1 != 0) {
        phi_t1 = temp_t1 | ((((u32) __OSGlobalIntMask >> 0x10) ^ -1) & 0x3F);
    }
    return (MIPS2C_ERROR(unknown instruction: mfc0 $v0, Status) & 0xFF01) | ((__OSGlobalIntMask ^ -1) & 0xFF00) | (phi_t1 << 0x10);
}

