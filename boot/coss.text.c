struct _mips2c_stack_coss {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

s16 coss(u16 x) {
    return sins((x + 0x4000) & 0xFFFF);
}
