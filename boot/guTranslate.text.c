struct _mips2c_stack_guTranslate {};                /* size 0x0 */

void guTranslate(void *arg0, f32 arg1, f32 arg2, f32 arg3) {
    s32 temp_f10;
    s32 temp_f10_2;
    s32 temp_f10_3;

    arg0->unk_0 = 0;
    arg0->unk_14 = 0;
    arg0->unk_8 = 0;
    arg0->unk_4 = 0;
    arg0->unk_C = 0;
    arg0->unk_10 = 0;
    arg0->unk_20 = 0;
    temp_f10 = (s32) (arg1 * 65536.0f);
    arg0->unk_24 = 0;
    arg0->unk_28 = 0;
    arg0->unk_2C = 0;
    temp_f10_2 = (s32) (arg2 * 65536.0f);
    arg0->unk_30 = 0;
    arg0->unk_34 = 0;
    temp_f10_3 = (s32) (arg3 * 65536.0f);
    arg0->unk_18 = (s32) ((((u32) temp_f10 >> 0x10) << 0x10) | ((u32) temp_f10_2 >> 0x10));
    arg0->unk_38 = (s32) ((temp_f10 << 0x10) | ((u32) (temp_f10_2 << 0x10) >> 0x10));
    arg0->unk_1C = (s32) ((((u32) temp_f10_3 >> 0x10) << 0x10) + 1);
    arg0->unk_0 = 0x10000;
    arg0->unk_14 = 0x10000;
    arg0->unk_3C = (s32) (temp_f10_3 << 0x10);
    arg0->unk_8 = 1;
}
