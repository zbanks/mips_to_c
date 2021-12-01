u16 func_0040012C(?);                               /* static */
extern s32 D_410150;

u16 test(void) {
    u16 sp1E;
    u16 temp_v0;
    u16 temp_v0_2;

    sp1E = func_0040012C(1);
    if (sp1E != 0) {
        return sp1E;
    }
    if (D_410150 != 0x7B) {
        temp_v0_2 = func_0040012C(2);
        return temp_v0_2;
    }
    temp_v0 = func_0040012C(3);
    return temp_v0;
}
