struct _mips2c_stack_TransitionWipe4_Destroy {};    /* size 0x0 */

struct _mips2c_stack_TransitionWipe4_Draw {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x8];                    /* maybe part of sp18[3]? */
    /* 0x24 */ Gfx *sp24;                           /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_TransitionWipe4_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_TransitionWipe4_IsDone {};     /* size 0x0 */

struct _mips2c_stack_TransitionWipe4_SetColor {};   /* size 0x0 */

struct _mips2c_stack_TransitionWipe4_SetEnvColor {}; /* size 0x0 */

struct _mips2c_stack_TransitionWipe4_SetType {};    /* size 0x0 */

struct _mips2c_stack_TransitionWipe4_Start {};      /* size 0x0 */

struct _mips2c_stack_TransitionWipe4_Update {};     /* size 0x0 */

? func_80141778(void *, Gfx **, s32);               /* extern */
s32 get_zbuffer();                                  /* extern */

void TransitionWipe4_Start(void *thisx) {
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = thisx->unk_12;
    thisx->unk_13 = 0;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            thisx->unk_8 = 0.2f;
        } else {
            thisx->unk_8 = 0.05f;
        }
    } else {
        thisx->unk_8 = 0.1f;
    }
    temp_v0_2 = thisx->unk_11;
    if (temp_v0_2 != 0) {
        if (temp_v0_2 != 1) {
            thisx->unk_0 = 0xA0A0A0FF;
            return;
        }
        thisx->unk_0 = 0xA0A0A0FF;
        return;
    }
    thisx->unk_0 = 0xFF;
}

void *TransitionWipe4_Init(void *thisx) {
    bzero(thisx, 0x28);
    return thisx;
}

void TransitionWipe4_Destroy(void *thisx) {

}

void TransitionWipe4_Update(void *thisx, s32 updateRate) {
    thisx->unk_C = (f32) (thisx->unk_C + ((thisx->unk_8 * 3.0f) / (f32) updateRate));
    if (thisx->unk_C >= 1.0f) {
        thisx->unk_C = 1.0f;
        thisx->unk_13 = 1;
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
    thisx->unk_20 = (s32) thisx->unk_0;
    phi_a3 = temp_a3;
    if (thisx->unk_10 != 0) {
        temp_a3->unk_4 = (f32) thisx->unk_C;
        temp_a3->unk_8 = (f32) (1.0f - thisx->unk_C);
    } else {
        temp_a3_2 = thisx + 0x14;
        temp_a3_2->unk_4 = (f32) (1.0f - thisx->unk_C);
        temp_a3_2->unk_8 = (f32) thisx->unk_C;
        phi_a3 = temp_a3_2;
    }
    sp18 = phi_a3;
    func_80141778(sp18, &sp24, get_zbuffer());
    *gfxP = sp24;
}

s32 TransitionWipe4_IsDone(void *thisx) {
    return (s32) thisx->unk_13;
}

void TransitionWipe4_SetType(void *thisx, s32 type) {
    if ((type & 0x80) != 0) {
        thisx->unk_11 = (s8) ((type >> 1) & 3);
        thisx->unk_12 = (s8) (type & 1);
        return;
    }
    if (type == 1) {
        thisx->unk_10 = 1;
        return;
    }
    thisx->unk_10 = 0;
}

void TransitionWipe4_SetColor(void *thisx, u32 color) {
    *thisx = color;
}

void TransitionWipe4_SetEnvColor(void *thisx, u32 color) {
    thisx->unk_4 = color;
}
