s32 func_00400090(? *, ?);                          /* static */
? func_004000A0(s32, ? *, s32);                     /* static */

void test(s32 arg1) {
    ? sp120000;
    ? sp20;
    s32 temp_a2;
    s32 temp_v0;
    void *temp_v0_2;

    sp120000.unk347C = arg1;
    temp_v0 = func_00400090(&sp20, 0x123456);
    temp_a2 = temp_v0;
    if (temp_v0 < 0) {
        return;
    }
    temp_v0_2 = &sp20 + temp_a2;
    unksp20 ^= 0x55;
    temp_v0_2->unk-1 = (s8) (temp_v0_2->unk-1 ^ 0x55);
    func_004000A0(sp120000.unk347C, &sp20, temp_a2);
}
