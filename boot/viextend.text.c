struct _mips2c_stack_osViExtendVStart {};           /* size 0x0 */

s32 __additional_scanline = 0;

void osViExtendVStart(u32 param_1) {
    __additional_scanline = (s32) param_1;
}
