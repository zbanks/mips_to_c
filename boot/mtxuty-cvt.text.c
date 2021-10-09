void MtxConv_F2L(void *arg0, f32 *arg1);            /* static */
void MtxConv_L2F(MtxF *arg0, Mtx *arg1);            /* static */



void MtxConv_F2L(void *arg0, f32 *arg1) {
    f32 *temp_a2;
    f32 temp_f18;
    f32 temp_f18_2;
    s32 temp_f16;
    s32 temp_f16_2;
    s32 temp_f16_3;
    s32 temp_f16_4;
    s32 temp_f16_5;
    s32 temp_f16_6;
    s32 temp_f16_7;
    s32 temp_f16_8;
    s32 temp_v0;
    void *temp_a2_2;
    void *temp_a3;
    void *temp_a3_2;
    f32 phi_f18;
    void *phi_a3;
    f32 *phi_a2;
    s32 phi_v0;
    f32 phi_f18_2;
    void *phi_a3_2;
    f32 *phi_a2_2;

    temp_f18 = *arg1 * 65536.0f;
    phi_f18 = temp_f18;
    phi_a3 = arg0;
    phi_a2 = arg1;
    phi_v0 = 1;
    phi_f18_2 = temp_f18;
    phi_a3_2 = arg0;
    phi_a2_2 = arg1;
    if (1 != 4) {
        do {
            temp_f16 = (s32) phi_f18;
            temp_v0 = phi_v0 + 1;
            temp_a2 = phi_a2 + 0x10;
            temp_a3 = phi_a3 + 8;
            temp_a3->unk-8 = (s16) (temp_f16 >> 0x10);
            temp_a3->unk18 = (s16) temp_f16;
            temp_f16_2 = (s32) (temp_a2->unk-C * 65536.0f);
            temp_a3->unk-6 = (s16) (temp_f16_2 >> 0x10);
            temp_a3->unk1A = (s16) temp_f16_2;
            temp_f16_3 = (s32) (temp_a2->unk-8 * 65536.0f);
            temp_a3->unk-4 = (s16) (temp_f16_3 >> 0x10);
            temp_a3->unk1C = (s16) temp_f16_3;
            temp_f16_4 = (s32) (temp_a2->unk-4 * 65536.0f);
            temp_a3->unk-2 = (s16) (temp_f16_4 >> 0x10);
            temp_a3->unk1E = (s16) temp_f16_4;
            temp_f18_2 = temp_a2->unk0 * 65536.0f;
            phi_f18 = temp_f18_2;
            phi_a3 = temp_a3;
            phi_a2 = temp_a2;
            phi_v0 = temp_v0;
            phi_f18_2 = temp_f18_2;
            phi_a3_2 = temp_a3;
            phi_a2_2 = temp_a2;
        } while (temp_v0 != 4);
    }
    temp_f16_5 = (s32) phi_f18_2;
    temp_a2_2 = phi_a2_2 + 0x10;
    temp_a3_2 = phi_a3_2 + 8;
    temp_a3_2->unk-8 = (s16) (temp_f16_5 >> 0x10);
    temp_a3_2->unk18 = (s16) temp_f16_5;
    temp_f16_6 = (s32) (temp_a2_2->unk-C * 65536.0f);
    temp_a3_2->unk-6 = (s16) (temp_f16_6 >> 0x10);
    temp_a3_2->unk1A = (s16) temp_f16_6;
    temp_f16_7 = (s32) (temp_a2_2->unk-8 * 65536.0f);
    temp_a3_2->unk-4 = (s16) (temp_f16_7 >> 0x10);
    temp_a3_2->unk1C = (s16) temp_f16_7;
    temp_f16_8 = (s32) (temp_a2_2->unk-4 * 65536.0f);
    temp_a3_2->unk-2 = (s16) (temp_f16_8 >> 0x10);
    temp_a3_2->unk1E = (s16) temp_f16_8;
}

void MtxConv_L2F(MtxF *arg0, Mtx *arg1) {
    guMtxL2F(arg0, arg1);
}

