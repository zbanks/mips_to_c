struct _mips2c_stack_func_80122660 {};              /* size 0x0 */

struct _mips2c_stack_func_80122670 {};              /* size 0x0 */

void func_80122660(void *arg0);                     /* static */
? func_80122670(void *arg0, void *arg1);            /* static */

void func_80122660(void *arg0) {
    arg0->unk_4 = 0;
    arg0->unk_0 = 0;
}

? func_80122670(void *arg0, void *arg1) {
    s32 temp_t2;
    u16 temp_v0;

    if ((arg0->unk_0 == 0) || ((temp_v0 = arg1->unk_0, (~(temp_v0 | ~0x2000) == 0)) && ((~(arg1->unk_C | ~0x10) == 0) || ((~(temp_v0 | ~0x10) == 0) && (temp_t2 = arg0->unk_4 + 1, arg0->unk_4 = temp_t2, ((temp_t2 < 9) == 0)))))) {
        arg0->unk_4 = 0;
        return 1;
    }
    return 0;
}
