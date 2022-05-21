struct _m2c_stack_test {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x2F */ s8 sp2F;                             /* overlap; inferred */
};                                                  /* size = 0x30 */

? func_00400090(s32 *);                             /* static */

s32 test(void *arg0) {
    s8 sp2F;
    s32 sp2C;                                       /* compiler-managed */
    s32 sp28;
    s32 sp24;                                       /* compiler-managed */
    s32 sp20;
    s32 sp1C;
    s32 sp18;

    func_00400090((s32 *) &sp2F);
    func_00400090(&sp2C);
    func_00400090(&sp28);
    func_00400090(&sp24);
    func_00400090(&sp18);
    sp2F = arg0->unk0 + arg0->unk4;
    unksp2C = arg0->unk0 + arg0->unk8;
    sp28 = arg0->unk4 + arg0->unk8;
    sp18 = arg0->unk0 * sp2F;
    sp1C = arg0->unk4 * unksp2C;
    sp20 = arg0->unk8 * sp28;
    if (sp2F != 0) {
        sp24 = (s32) arg0;
    } else {
        sp24 = &sp18;
    }
    return sp2F + unksp2C + sp28 + *sp24 + sp1C;
}
