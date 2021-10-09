void func_800F0590(GlobalContext *arg0, Vec3f *arg1, u8 arg2, s32 arg3); /* static */

typedef struct {
    /* 0x0000 */ u16 countdown;
    /* 0x0002 */ u16 unk2;                          /* inferred */
    /* 0x0004 */ Vec3f originPos;
    /* 0x0010 */ Vec3f relativePos;
} SoundSource;                                      /* size 0x1C */

void func_800F0390(GlobalContext *globalCtx) {
    s32 temp_v0;
    SoundSource *phi_v1;
    s32 phi_v0;

    phi_v1 = globalCtx->soundSources;
    phi_v0 = 0;
    do {
        temp_v0 = phi_v0 + 4;
        phi_v1->unk0 = 0;
        phi_v1->unk1C = 0;
        phi_v1->unk38 = 0;
        phi_v1->unk54 = 0;
        phi_v1 += 0x70;
        phi_v0 = temp_v0;
    } while (temp_v0 != 0x10);
}

void func_800F03C0(GlobalContext *globalCtx) {
    Vec3f *temp_s1;
    s32 temp_s2;
    u8 temp_t6;
    u8 temp_v0;
    SoundSource *phi_s0;
    s32 phi_v1;
    s32 phi_s2;

    phi_s0 = globalCtx->soundSources;
    phi_s2 = 0;
    do {
        temp_v0 = phi_s0->unk0;
        if (temp_v0 != 0) {
            temp_t6 = temp_v0 - 1;
            if (temp_v0 == 0) {
                phi_v1 = 0;
            } else {
                phi_s0->unk0 = temp_t6;
                phi_v1 = temp_t6 & 0xFF;
            }
            if (phi_v1 == 0) {
                func_801A72CC(phi_s0 + 0x10);
            } else {
                temp_s1 = phi_s0 + 0x10;
                SkinMatrix_Vec3fMtxFMultXYZ(&globalCtx->projectionMatrix, phi_s0 + 4, temp_s1);
                if (phi_s0->unk1 != 0) {
                    func_8019F1C0(temp_s1, phi_s0->unk2);
                }
            }
        }
        temp_s2 = phi_s2 + 1;
        phi_s0 += 0x1C;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x10);
}

void func_800F048C(GlobalContext *globalCtx, Vec3f *param_2, u8 param_3, u16 param_4, u8 param_5) {
    SoundSource *sp28;
    Vec3f *sp18;
    SoundSource *temp_t0;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    s32 temp_t1;
    u8 temp_v0;
    SoundSource *phi_t0;
    s32 phi_t2;
    s32 phi_t1;
    s32 phi_t1_2;
    SoundSource *phi_t3;
    SoundSource *phi_t0_2;
    SoundSource *phi_t3_2;
    SoundSource *phi_t3_3;

    phi_t0 = globalCtx->soundSources;
    phi_t2 = 0xFFFF;
    phi_t1 = 0;
    phi_t3_2 = NULL;
loop_1:
    temp_v0 = *phi_t0;
    phi_t1_2 = phi_t1;
    phi_t3 = phi_t3_2;
    phi_t3_3 = phi_t3_2;
    phi_t0_2 = phi_t0;
    if (temp_v0 != 0) {
        temp_t1 = phi_t1 + 1;
        phi_t1 = temp_t1;
        phi_t1_2 = temp_t1;
        if ((s32) temp_v0 < phi_t2) {
            phi_t2 = (s32) temp_v0;
            phi_t3_3 = phi_t0;
        }
        temp_t0 = phi_t0 + 0x1C;
        phi_t0 = temp_t0;
        phi_t3 = phi_t3_3;
        phi_t3_2 = phi_t3_3;
        phi_t0_2 = temp_t0;
        if (temp_t1 != 0x10) {
            goto loop_1;
        }
    }
    if (phi_t1_2 >= 0x10) {
        sp28 = phi_t3;
        func_801A72CC(phi_t3 + 0x10);
        phi_t0_2 = sp28;
    }
    temp_a1 = phi_t0_2 + 4;
    temp_a2 = phi_t0_2 + 0x10;
    temp_a1->x = param_2->x;
    temp_a1->y = param_2->y;
    temp_a1->z = param_2->z;
    phi_t0_2->unk0 = (s8) (s32) param_3;
    phi_t0_2->unk1 = (s8) (s32) param_5;
    phi_t0_2->unk2 = param_4;
    sp18 = temp_a2;
    SkinMatrix_Vec3fMtxFMultXYZ(&globalCtx->projectionMatrix, temp_a1, temp_a2);
    func_8019F1C0(sp18, param_4);
}

void Audio_PlaySoundAtPosition(GlobalContext *globalCtx, Vec3f *position, s32 param_3, u16 sfxId) {
    func_800F048C(globalCtx, position, (u8) param_3, sfxId & 0xFFFF, (u8) 0);
}

void func_800F0590(GlobalContext *arg0, Vec3f *arg1, u8 arg2, s32 arg3) {
    func_800F048C(arg0, arg1, arg2, arg3 & 0xFFFF, (u8) 1);
}

