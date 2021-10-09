extern s32 D_A4040010;
extern void *D_A4080000;



s32 __osSpSetPc(void *data) {
    if ((D_A4040010 & 1) == 0) {
        return -1;
    }
    D_A4080000 = data;
    return 0;
}

