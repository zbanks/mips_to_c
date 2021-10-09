struct _mips2c_stack_osWritebackDCache {};          /* size 0x0 */

extern ? D_80000010;

void osWritebackDCache(void *vaddr, s32 nbytes) {
    void *temp_t1;
    u32 phi_t0;
    u32 phi_t0_2;

    if (nbytes > 0) {
        if ((u32) nbytes < 0x2000U) {
            temp_t1 = vaddr + nbytes;
            if ((u32) vaddr < (u32) temp_t1) {
                phi_t0 = vaddr - ((s32) vaddr & 0xF);
                do {
                    MIPS2C_ERROR(unknown instruction: cache 0x19, ($t0));
                    phi_t0 += 0x10;
                } while (phi_t0 < (u32) (temp_t1 - 0x10));
            }
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return;
        }
        phi_t0_2 = (u32) &D_80000010;
        do {
            MIPS2C_ERROR(unknown instruction: cache 0x1, ($t0));
        } while (phi_t0_2 < (u32) ((&D_80000010 + 0x2000U) - 0x10));
    }
}
