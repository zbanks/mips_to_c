struct _mips2c_stack___osSetFpcCsr {};              /* size 0x0 */

u32 __osSetFpcCsr(u32 value) {
    return MIPS2C_ERROR(cfc1);
}
