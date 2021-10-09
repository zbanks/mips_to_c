struct _mips2c_stack___osProbeTLB {};               /* size 0x0 */

u32 __osProbeTLB(void *param_1) {
    s32 phi_v0;

    MIPS2C_ERROR(unknown instruction: mfc0 $t0, EntryHi);
    MIPS2C_ERROR(unknown instruction: mtc0 $t1, EntryHi);
    MIPS2C_ERROR(unknown instruction: tlbp );
    if ((MIPS2C_ERROR(unknown instruction: mfc0 $t3, Index) & 0x80000000) == 0) {
        MIPS2C_ERROR(unknown instruction: tlbr );
        if ((((u32) (MIPS2C_ERROR(unknown instruction: mfc0 $t3, PageMask) + 0x2000) >> 1) & (s32) param_1) == 0) {
            phi_v0 = MIPS2C_ERROR(unknown instruction: mfc0 $v0, EntryLo0);
        } else {
            phi_v0 = MIPS2C_ERROR(unknown instruction: mfc0 $v0, EntryLo1);
        }
        if ((phi_v0 & 2) != 0) {
            MIPS2C_ERROR(unknown instruction: mtc0 $t0, EntryHi);
            return MIPS2C_ERROR(unknown instruction: add $v0, $v0, $t5);
        }
        goto block_6;
    }
block_6:
    MIPS2C_ERROR(unknown instruction: mtc0 $t0, EntryHi);
    return -1U;
}
