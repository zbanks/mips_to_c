extern ? symbol;

struct _mips2c_stack_test {};                       /* size 0x0 */
s32 test(void) {
    s32 temp_a1;

    temp_a1 = symbol.unk4;
    symbol.unk0 = temp_a1;
    return symbol.unk0 + 4 + (&symbol + 8)->unk4 + temp_a1;
}
