extern ? D_80000010;



void osWritebackDCacheAll(void) {
    u32 phi_t0;

    phi_t0 = (u32) &D_80000010;
    do {
        MIPS2C_ERROR(unknown instruction: cache 0x1, ($t0));
    } while (phi_t0 < (u32) ((&D_80000010 + 0x2000) - 0x10));
}

