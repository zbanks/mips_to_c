struct _mips2c_stack_osDpGetStatus {};              /* size 0x0 */

extern u32 D_A410000C;

u32 osDpGetStatus(void) {
    return D_A410000C;
}
