s32 test(s32 *x) {
    s8 sp2F;
    s32 *sp28;
    s32 sp24;
    s32 temp_t6;
    s8 temp_t3;

    sp2F = (s8) x->unk0;
    sp28 = x + 0x28;
    sp24 = x->unk190;
    temp_t3 = *func_00400090(&sp2F);
    sp2F += temp_t3;
    sp28 = func_00400090(&sp28);
    temp_t6 = *func_00400090(&sp24);
    sp24 += temp_t6;
    return *sp28 + sp2F + sp24;
}
