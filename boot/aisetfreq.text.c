struct _mips2c_stack_osAiSetFrequency {};           /* size 0x0 */

extern s32 D_A4500014;
s32 osViClock = 0x2E6D354;

s32 osAiSetFrequency(u32 frequency) {
    f32 temp_f10;
    u32 temp_lo;
    u32 temp_v1;
    f32 phi_f10;
    s32 phi_a0;

    temp_f10 = (f32) frequency;
    phi_f10 = temp_f10;
    if ((s32) frequency < 0) {
        phi_f10 = temp_f10 + 4294967296.0f;
    }
    temp_v1 = (u32) (((f32) osViClock / phi_f10) + 0.5f);
    if (temp_v1 < 0x84U) {
        return -1;
    }
    temp_lo = temp_v1 / 0x42U;
    phi_a0 = temp_lo & 0xFF;
    if ((temp_lo & 0xFF) >= 0x11) {
        phi_a0 = 0x10;
    }
    *(s32 *)0xA4500010 = temp_v1 - 1;
    D_A4500014 = phi_a0 - 1;
    return (s32) osViClock / (s32) temp_v1;
}
