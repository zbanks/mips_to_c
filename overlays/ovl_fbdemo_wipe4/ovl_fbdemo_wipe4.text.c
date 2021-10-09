? func_80141778(void *, Gfx **, s32);               /* extern */
s32 get_zbuffer();                                  /* extern */



void TransitionWipe4_Start(void *thisx) {
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = thisx->unk12;
    thisx->unk13 = 0;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            thisx->unk8 = 0.2f;
        } else {
            thisx->unk8 = 0.05f;
        }
    } else {
        thisx->unk8 = 0.1f;
    }
    temp_v0_2 = thisx->unk11;
    if (temp_v0_2 != 0) {
        if (temp_v0_2 != 1) {
            thisx->unk0 = 0xA0A0A0FF;
            return;
        }
        thisx->unk0 = 0xA0A0A0FF;
        return;
    }
    thisx->unk0 = 0xFF;
}

void *TransitionWipe4_Init(void *thisx) {
    bzero(thisx, 0x28);
    return thisx;
}

void TransitionWipe4_Destroy(void *thisx) {

}

void TransitionWipe4_Update(void *thisx, s32 updateRate) {
    thisx->unkC = (f32) (thisx->unkC + ((thisx->unk8 * 3.0f) / (f32) updateRate));
    if (thisx->unkC >= 1.0f) {
        thisx->unkC = 1.0f;
        thisx->unk13 = 1;
    }
}

void TransitionWipe4_Draw(void *thisx, Gfx **gfxP) {
    Gfx *sp24;
    void *sp18;
    void *temp_a3;
    void *temp_a3_2;
    void *phi_a3;

    temp_a3 = thisx + 0x14;
    sp24 = *gfxP;
    thisx->unk20 = (s32) thisx->unk0;
    phi_a3 = temp_a3;
    if (thisx->unk10 != 0) {
        temp_a3->unk4 = (f32) thisx->unkC;
        temp_a3->unk8 = (f32) (1.0f - thisx->unkC);
    } else {
        temp_a3_2 = thisx + 0x14;
        temp_a3_2->unk4 = (f32) (1.0f - thisx->unkC);
        temp_a3_2->unk8 = (f32) thisx->unkC;
        phi_a3 = temp_a3_2;
    }
    sp18 = phi_a3;
    func_80141778(sp18, &sp24, get_zbuffer());
    *gfxP = sp24;
}

s32 TransitionWipe4_IsDone(void *thisx) {
    return (s32) thisx->unk13;
}

void TransitionWipe4_SetType(void *thisx, s32 type) {
    if ((type & 0x80) != 0) {
        thisx->unk11 = (s8) ((type >> 1) & 3);
        thisx->unk12 = (s8) (type & 1);
        return;
    }
    if (type == 1) {
        thisx->unk10 = 1;
        return;
    }
    thisx->unk10 = 0;
}

void TransitionWipe4_SetColor(void *thisx, u32 color) {
    *thisx = color;
}

void TransitionWipe4_SetEnvColor(void *thisx, u32 color) {
    thisx->unk4 = color;
}

