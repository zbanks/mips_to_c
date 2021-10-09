struct _mips2c_stack_osViSetMode {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

extern __OSViContext D_80098060 + 0x30;
__OSViContext *__osViNext = &D_80098060 + 0x30;

void osViSetMode(OSViMode *modep) {
    __OSViContext *temp_v1;
    u32 temp_a0;

    temp_a0 = __osDisableInt();
    __osViNext->modep = modep;
    __osViNext->state = 1;
    temp_v1 = __osViNext;
    temp_v1->control = temp_v1->modep->comRegs.ctrl;
    __osRestoreInt(temp_a0);
}
