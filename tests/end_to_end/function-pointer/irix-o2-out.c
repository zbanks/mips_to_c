s32 test(s32 (*arg0)(?, ?), ? arg1) {
    s32 temp_v0;

    temp_v0 = arg0(arg1, arg0);
    return temp_v0 + 1;
}
