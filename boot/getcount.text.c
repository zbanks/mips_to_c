struct _mips2c_stack_osGetCount {};                 /* size 0x0 */

u32 osGetCount(void) {
    return MIPS2C_ERROR(unknown instruction: mfc0 $v0, Count);
}
