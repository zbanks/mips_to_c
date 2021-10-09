struct _mips2c_stack_osVoiceControlGain {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

s32 __osVoiceSetADConverter(s32, s32, s32, void *); /* extern */
static ? D_80098180;                                /* unable to generate initializer */

s32 osVoiceControlGain(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a3;
    s32 phi_a2;

    temp_a3 = arg0;
    if (arg1 == 0) {
        phi_a2 = 0x18;
    } else {
        phi_a2 = 0x98;
    }
    temp_a0 = temp_a3->unk_0;
    temp_a1 = temp_a3->unk_4;
    arg0 = temp_a3;
    temp_v0_2 = __osVoiceSetADConverter(temp_a0, temp_a1, phi_a2, temp_a3);
    if (temp_v0_2 != 0) {
        return temp_v0_2;
    }
    if ((arg2 < 8) && (arg2 >= 0)) {
        temp_v0 = __osVoiceSetADConverter(arg0->unk_0, arg0->unk_4, (*(&D_80098180 + arg2) + 2) & 0xFF, arg0);
        if (temp_v0 != 0) {
            return temp_v0;
        }
        return temp_v0;
    }
    return 5;
}
