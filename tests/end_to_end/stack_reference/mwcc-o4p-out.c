s32 test(s32 arg0, s32 arg1) {
    ? spC;
    ? sp8;

    unksp8 = arg0;
    unkspC = arg1;
    return (s32) (&spC - &sp8) / 4;
}
