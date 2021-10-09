

void osUnmapTLBAll(void) {
    MIPS2C_ERROR(unknown instruction: mfc0 $t0, EntryHi);
    MIPS2C_ERROR(unknown instruction: mtc0 $t2, EntryHi);
    MIPS2C_ERROR(unknown instruction: mtc0 $zero, EntryLo0);
    MIPS2C_ERROR(unknown instruction: mtc0 $zero, EntryLo1);
    do {
        MIPS2C_ERROR(unknown instruction: tlbwi );
    } while ((MIPS2C_ERROR(unknown instruction: mtc0 $t1, Index) - 1) >= 0);
    MIPS2C_ERROR(unknown instruction: mtc0 $t0, EntryHi);
}

