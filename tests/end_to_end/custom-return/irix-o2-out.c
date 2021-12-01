s32 func_0040010C(?);                               /* static */
extern s32 D_410120;

s32 test(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    temp_v0_4 = func_0040010C(1);
    if (temp_v0_4 != 0) {
        temp_v0_3 = temp_v0_4 & 0xFFFF;
        return temp_v0_3;
    }
    if (D_410120 != 0x7B) {
        temp_v0_2 = func_0040010C(2);
        return temp_v0_2;
    }
    temp_v0 = func_0040010C(3);
    return temp_v0;
}
