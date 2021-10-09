struct _mips2c_stack_osMapTLBRdb {};                /* size 0x0 */

void osMapTLBRdb(void) {
    MIPS2C_ERROR(unknown instruction: mfc0 $t0, EntryHi);
    MIPS2C_ERROR(unknown instruction: mtc0 $t1, Index);
    MIPS2C_ERROR(unknown instruction: mtc0 $zero, PageMask);
    MIPS2C_ERROR(unknown instruction: mtc0 $t1, EntryHi);
    MIPS2C_ERROR(unknown instruction: mtc0 $t3, EntryLo0);
    MIPS2C_ERROR(unknown instruction: mtc0 $t1, EntryLo1);
    MIPS2C_ERROR(unknown instruction: tlbwi );
    MIPS2C_ERROR(unknown instruction: mtc0 $t0, EntryHi);
}
