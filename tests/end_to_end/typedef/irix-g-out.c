void test(s32 arg0, s32 *arg1) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = func_00400090(arg0, arg1);
    temp_v0 = func_00400090(arg0, &arg0);
    func_00400090(*arg1, arg1);
}
