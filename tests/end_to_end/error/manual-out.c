missing reg at 0.15 (24): $t0 (invalid) `badinstr $t0, $t0`
missing reg at 0.16 (25): $t1 (invalid) `badinstr2 $t1, $t1`
missing reg at 0.17 (26): $t2 (invalid) `badinstr3 $v0, $t2`
missing reg at 0.20 (29): $v1 (invalid) `addiu $v1, $v1, 0x2`
? test(s32 arg0) {
    s32 temp_t1;

    MIPS2C_BREAK();
    MIPS2C_BREAK(2);
    MIPS2C_SYNC();
    MIPS2C_TRAP_IF(arg0 == 0);
    MIPS2C_TRAP_IF(arg0 != 0);
    MIPS2C_TRAP_IF(arg0 > 0);
    MIPS2C_TRAP_IF((u32) arg0 > 0U);
    MIPS2C_TRAP_IF(arg0 <= 0);
    MIPS2C_TRAP_IF((u32) arg0 <= 0U);
    MIPS2C_TRAP_IF(arg0 == 1);
    MIPS2C_TRAP_IF(arg0 != 2);
    MIPS2C_TRAP_IF(arg0 < 3);
    MIPS2C_TRAP_IF((u32) arg0 < 4U);
    MIPS2C_TRAP_IF(arg0 >= 5);
    MIPS2C_TRAP_IF((u32) arg0 >= 6U);
    MIPS2C_ERROR(unknown instruction: badinstr $t0, $t0);
    temp_t1 = MIPS2C_ERROR(unknown instruction: badinstr2 $t1, $t1);
    *NULL = temp_t1 << temp_t1;
    *NULL = (s32) (MIPS2C_ERROR(Read from unset register $v1) + 2);
    return MIPS2C_ERROR(unknown instruction: badinstr3 $v0, $t2);
}
