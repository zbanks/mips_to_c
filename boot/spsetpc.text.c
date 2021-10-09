struct _mips2c_stack___osSpSetPc {};                /* size 0x0 */

extern s32 D_A4040010;
extern void *D_A4080000;

s32 __osSpSetPc(void *data) {
    if ((D_A4040010 & 1) == 0) {
        return -1;
    }
    D_A4080000 = data;
    return 0;
}
