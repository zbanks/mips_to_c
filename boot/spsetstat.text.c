struct _mips2c_stack___osSpSetStatus {};            /* size 0x0 */

extern u32 D_A4040010;

void __osSpSetStatus(u32 value) {
    D_A4040010 = value;
}
