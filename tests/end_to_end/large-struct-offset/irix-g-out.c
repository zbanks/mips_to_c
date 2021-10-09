extern s32 D_4100F0;

struct _mips2c_stack_test {};                       /* size 0x0 */
void *test(void *arg0) {
    D_4100F0 = arg0->unk12348;
    return arg0 + 0x12348;
}
