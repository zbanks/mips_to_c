struct _mips2c_stack___osGetFpcCsr {};              /* size 0x0 */

u32 __osGetFpcCsr(void) {
    return MIPS2C_ERROR(cfc1);
}
