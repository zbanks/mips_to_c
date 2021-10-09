void *foo();                                        /* extern */

struct _mips2c_stack_test {
    char pad0[0x3C];
    s32 sp3C;                                       /* +0x3C; inferred */
    char pad40[0xCC];
    void *sp10C;                                    /* +0x10C; inferred */
};                                                  /* size 0x110 */
void test(void) {
    void *sp10C;
    void *temp_ret;

    temp_ret = foo();
    if (*NULL == 0) {
        sp10C = temp_ret;
    }
    temp_ret->unk3 = 0;
    temp_ret->unk4 = 0;
}
