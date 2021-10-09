struct _mips2c_stack_guScale {};                    /* size 0x0 */

void guScale(void *arg0, f32 arg1, f32 arg2, f32 arg3) {
    s32 temp_f10;
    s32 temp_f10_2;
    s32 temp_f10_3;

    arg0->unk_4 = 0;
    arg0->unk_C = 0;
    arg0->unk_10 = 0;
    arg0->unk_18 = 0;
    arg0->unk_24 = 0;
    arg0->unk_2C = 0;
    arg0->unk_30 = 0;
    temp_f10 = (s32) (arg1 * 65536.0f);
    arg0->unk_38 = 0;
    arg0->unk_3C = 0;
    temp_f10_2 = (s32) (arg2 * 65536.0f);
    arg0->unk_0 = (s32) (((u32) temp_f10 >> 0x10) << 0x10);
    arg0->unk_20 = (s32) (temp_f10 << 0x10);
    temp_f10_3 = (s32) (arg3 * 65536.0f);
    arg0->unk_28 = (s32) (temp_f10_2 & 0xFFFF);
    arg0->unk_8 = (u32) ((u32) temp_f10_2 >> 0x10);
    arg0->unk_14 = (s32) (((u32) temp_f10_3 >> 0x10) << 0x10);
    arg0->unk_34 = (s32) (temp_f10_3 << 0x10);
    arg0->unk_1C = 1;
}
