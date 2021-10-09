struct _mips2c_stack_func_80163C90 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80163D80 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? func_80165288(void *, void *);                    /* extern */
? func_8016537C(void *, void *);                    /* extern */
void func_80163C90(void *arg0);                     /* static */
void func_80163D80(void *arg0);                     /* static */
static ? D_801D0BB0;                                /* unable to generate initializer */

void func_80163C90(void *arg0) {
    void *sp24;
    void *sp1C;
    s32 temp_v1;
    void *temp_a0;
    void *temp_a1;
    void *temp_v0;

    temp_a1 = arg0;
    temp_a0 = (temp_a1->unk_2 * 0x1C) + &D_801D0BB0;
    sp24 = temp_a0;
    arg0 = temp_a1;
    func_80165288(temp_a0, temp_a1);
    temp_v0 = Lib_PhysicalToVirtualNull((void *) (sp24->unk_0 & 0xFFFFFF));
    sp1C = NULL;
    temp_v1 = sp24->unk_14;
    if (temp_v1 != 0) {
        sp1C = temp_v1 + (temp_v0 - sp24->unk_4);
    } else {
        sp1C = NULL;
    }
    arg0->unk_230 = (s32) sp1C->unk_0;
    arg0->unk_234 = (s32) sp1C->unk_4;
    arg0->unk_240 = (s32) sp1C->unk_10;
    arg0->unk_250 = (s32) sp1C->unk_20;
    arg0->unk_23C = (s32) sp1C->unk_C;
    arg0->unk_238 = (s32) sp1C->unk_8;
    arg0->unk_244 = (s32) sp1C->unk_14;
    arg0->unk_248 = (s32) sp1C->unk_18;
    arg0->unk_24C = (s32) sp1C->unk_1C;
}

void func_80163D80(void *arg0) {
    func_8016537C((arg0->unk_2 * 0x1C) + &D_801D0BB0, arg0);
}
