struct _mips2c_stack___osSetGlobalIntMask {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

s32 __OSGlobalIntMask = 0x3FFF01;

void __osSetGlobalIntMask(u32 mask) {
    u32 temp_s0;

    temp_s0 = __osDisableInt();
    __OSGlobalIntMask = __OSGlobalIntMask | mask;
    __osRestoreInt(temp_s0);
}
