struct _mips2c_stack_osDpSetStatus {};              /* size 0x0 */

extern u32 D_A410000C;

void osDpSetStatus(u32 data) {
    D_A410000C = data;
}
