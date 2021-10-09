extern s8 D_410140;
extern u8 D_410141;
extern s16 D_410142;
extern u16 D_410144;
extern s32 D_410148;
extern s32 D_41014C;
extern ? D_410150;

struct _mips2c_stack_test {};                       /* size 0x0 */
void test(void) {
    D_410150.unk0 = (s32) D_410140;
    D_410150.unk4 = (s32) D_410141;
    D_410150.unk8 = (s32) D_410142;
    D_410150.unkC = (s32) D_410144;
    D_410150.unk10 = (s32) D_410148;
    D_410150.unk14 = (s32) D_41014C;
}
