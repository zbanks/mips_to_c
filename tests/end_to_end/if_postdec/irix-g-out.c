extern s32 D_4100F0;

struct _mips2c_stack_test {
    char pad0[0x8];
};                                                  /* size 0x8 */
? test(void) {
    s32 temp_t6;

    temp_t6 = D_4100F0;
    D_4100F0 = temp_t6 - 1;
    if (temp_t6 < 1) {
        return 4;
    }
    return 6;
}
