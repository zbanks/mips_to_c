struct _mips2c_stack_osInvalDCache {};              /* size 0x0 */

extern ? D_80000010;

void osInvalDCache(void *vaddr, s32 nbytes) {
    s32 temp_t2;
    s32 temp_t2_2;
    u32 temp_t0;
    u32 temp_t1_3;
    void *temp_t1;
    void *temp_t1_2;
    u32 phi_t0;
    u32 phi_t0_2;
    u32 phi_t1;
    u32 phi_t0_3;

    if (nbytes > 0) {
        if ((u32) nbytes < 0x2000U) {
            temp_t1 = vaddr + nbytes;
            phi_t0 = (u32) vaddr;
            if ((u32) vaddr < (u32) temp_t1) {
                temp_t2 = (s32) vaddr & 0xF;
                temp_t1_2 = temp_t1 - 0x10;
                phi_t1 = (u32) temp_t1_2;
                if (temp_t2 != 0) {
                    temp_t0 = vaddr - temp_t2;
                    MIPS2C_ERROR(unknown instruction: cache 0x15, ($t0));
                    if (temp_t0 < (u32) temp_t1_2) {
                        phi_t0 = temp_t0 + 0x10;
                        goto block_6;
                    }
                } else {
block_6:
                    temp_t2_2 = (s32) temp_t1_2 & 0xF;
                    phi_t0_2 = phi_t0;
                    if ((temp_t2_2 == 0) || (temp_t1_3 = temp_t1_2 - temp_t2_2, MIPS2C_ERROR(unknown instruction: cache 0x15, 0x10($t1)), phi_t1 = temp_t1_3, ((temp_t1_3 < phi_t0) == 0))) {
                        do {
                            MIPS2C_ERROR(unknown instruction: cache 0x11, ($t0));
                            phi_t0_2 += 0x10;
                        } while (phi_t0_2 < phi_t1);
                    }
                }
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return;
        }
        phi_t0_3 = (u32) &D_80000010;
        do {
            MIPS2C_ERROR(unknown instruction: cache 0x1, ($t0));
        } while (phi_t0_3 < (u32) ((&D_80000010 + 0x2000U) - 0x10));
    }
}
