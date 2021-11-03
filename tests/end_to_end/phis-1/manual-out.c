void *foo();                                        /* extern */

void test(void) {
    void *sp10C;
    void *temp_s5;

    temp_s5 = foo();
    if (*NULL == 0) {
        sp10C = temp_s5;
    }
    temp_s5->unk3 = 0;
    temp_s5->unk4 = 0;
}
