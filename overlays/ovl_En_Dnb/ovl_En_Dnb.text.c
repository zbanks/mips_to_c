void func_80A4FDD0(EnDnbParticle *arg0, EnDnb *arg1, void *arg2, s32 arg3); /* static */
? func_80A4FEBC(EnDnbParticle *arg0, f32 arg1);     /* static */
void func_80A4FFE8(EnDnbParticle *arg0, s16 arg1);  /* static */
s32 func_80A500F8(EnDnb *arg0);                     /* static */
void func_80A50510(EnDnb *arg0, GraphicsContext **arg1); /* static */
void func_80A5063C(EnDnb *arg0, GraphicsContext **arg1); /* static */
extern ? D_06000000;
extern ? D_06000020;
extern void D_06004638;
extern void D_06004710;
extern CollisionHeader D_06004D8C;
static Vec3f D_80A50CB0 = {0.0f, 0.0f, 1000.0f};
static ? D_80A50CBC;                                /* unable to generate initializer */



void func_80A4FDD0(EnDnbParticle *arg0, EnDnb *arg1, void *arg2, s32 arg3) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 *temp_a1;
    void *temp_v0;

    temp_a1 = &sp1C;
    temp_v0 = arg2 + (arg3 * 6);
    sp1C = (f32) temp_v0->unk0 + arg1->dyna.actor.world.pos.x;
    sp20 = (f32) temp_v0->unk2 + arg1->dyna.actor.world.pos.y;
    sp24 = (f32) temp_v0->unk4 + arg1->dyna.actor.world.pos.z;
    arg0->unk_00.x = temp_a1->unk0;
    arg0->unk_00.y = temp_a1->unk4;
    arg0->unk_00.z = temp_a1->unk8;
    arg0->unk_0C.x = temp_a1->unk0;
    arg0->unk_0C.y = temp_a1->unk4;
    arg0->unk_0C.z = temp_a1->unk8;
    arg0->unk_24 = Math_Vec3f_Yaw(arg1 + 0x24, (Vec3f *) temp_a1);
    arg0->unk18 = (unaligned s32) D_801D15BC.unk0;
    arg0->unk_18.z = (u16) D_801D15BC.z;
}

? func_80A4FEBC(EnDnbParticle *arg0, f32 arg1) {
    f32 temp_f4;
    s16 temp_v0;
    s16 phi_v1;
    ? phi_a1;

    temp_v0 = arg0->unk_26;
    phi_a1 = 0;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_26 = temp_v0 - 1;
        phi_v1 = arg0->unk_26;
    }
    if ((phi_v1 == 0) && (arg1 < arg0->unk_0C.y)) {
        Math_ApproachF(arg0 + 0x30, 1.0f, 0.4f, 1.0f);
        arg0->unk_2C += arg0->unk_34;
        arg0->unk_0C.x += arg0->unk_30 * Math_SinS(arg0->unk_24);
        temp_f4 = arg0->unk_30 * Math_CosS(arg0->unk_24);
        arg0->unk_0C.y += arg0->unk_2C;
        arg0->unk_0C.z += temp_f4;
        phi_a1 = 1;
        if (arg0->unk_0C.y <= arg1) {
            arg0->unk_0C.y = arg1;
        }
        arg0->unk_18.x += arg0->unk_1E.x;
        arg0->unk_18.y += arg0->unk_1E.y;
        arg0->unk_18.z += arg0->unk_1E.z;
    }
    return phi_a1;
}

void func_80A4FFE8(EnDnbParticle *arg0, s16 arg1) {
    arg0->unk_0C.x = arg0->unk_00.x;
    arg0->unk_0C.y = arg0->unk_00.y;
    arg0->unk_0C.z = arg0->unk_00.z;
    arg0->unk_1E.x = (s16) (s32) ((Rand_ZeroOne() - 0.5f) * 400.0f);
    arg0->unk_1E.y = (s16) (s32) ((Rand_ZeroOne() - 0.5f) * 400.0f);
    arg0->unk_1E.z = (s16) (s32) ((Rand_ZeroOne() - 0.5f) * 400.0f);
    arg0->unk18 = (unaligned s32) D_801D15BC.unk0;
    arg0->unk_30 = 40.0f;
    arg0->unk_2C = 0.0f;
    arg0->unk_18.z = (u16) D_801D15BC.z;
    arg0->unk_26 = arg1;
    arg0->unk_34 = (Rand_ZeroOne() * -2.0f) - 2.0f;
}

s32 func_80A500F8(EnDnb *arg0) {
    Vec3f spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 *temp_fp;
    f32 temp_f20;
    s32 temp_s2;
    s16 phi_s1;
    s32 phi_s2;

    spA8.x = D_801D15B0.x;
    spA8.y = D_801D15B0.y;
    temp_fp = &sp9C;
    spA8.z = D_801D15B0.z;
    phi_s1 = 0;
    phi_s2 = 0;
    do {
        Lib_Vec3f_TranslateAndRotateY(arg0 + 0x24, phi_s1, &D_80A50CB0, &spA8);
        temp_f20 = Rand_ZeroOne() * 240.0f;
        sp9C = Math_SinS(phi_s1) * temp_f20;
        spA4 = Math_CosS(phi_s1) * temp_f20;
        spA0 = Rand_ZeroOne() * 180.0f;
        func_80A507C0(arg0 + 0xD38, (Vec3f) subroutine_arg1, (bitwise Vec3f) spA8.y, (u8) (bitwise Vec3f) spA8.z, temp_fp->unk0, temp_fp->unk4, temp_fp->unk8, 0x10, 50.0f, 30.0f);
        temp_s2 = phi_s2 + 1;
        phi_s1 += 0x1000;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x10);
    return temp_s2;
}

void EnDnb_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnDnb *this = (EnDnb *) thisx;
    s32 temp_s0;
    EnDnbParticle *phi_s1;
    s32 phi_s0;

    BcCheck3_BgActorInit(&this->dyna, 1);
    BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_06004D8C);
    phi_s1 = this->particles;
    phi_s0 = 0;
    do {
        func_80A4FDD0(phi_s1, this, Lib_SegmentedToVirtual(&D_06004710), phi_s0);
        temp_s0 = phi_s0 + 1;
        phi_s1 += 0x38;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x36);
    Actor_SetScale(&this->dyna.actor, 1.0f);
}

void EnDnb_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDnb *this = (EnDnb *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void EnDnb_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnDnb *this = (EnDnb *) thisx;
    EnDnb *temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    EnDnbParticle *phi_s1;
    s32 phi_s0;
    EnDnb *phi_v0;
    s32 phi_s0_2;
    s16 phi_v0_2;
    s16 phi_v0_3;
    EnDnbParticle *phi_s1_2;
    s32 phi_s2;

    phi_s1 = this->particles;
    phi_s0 = 0;
    phi_s0_2 = 0;
    if (this->unk_0D30 == 0) {
        do {
            func_80A4FFE8(phi_s1, (s16) (((s32) (0x35 - phi_s0) / 0x12) * 4));
            temp_s0 = phi_s0 + 1;
            phi_s1 += 0x38;
            phi_s0 = temp_s0;
        } while (temp_s0 < 0x36);
        phi_v0 = this;
        do {
            temp_s0_2 = phi_s0_2 + 4;
            phi_v0->unk_0D38[1].isEnabled = 0;
            phi_v0->unk_0D38[2].isEnabled = 0;
            phi_v0->unk_0D38[3].isEnabled = 0;
            temp_v0 = phi_v0 + 0xA0;
            temp_v0->unkC98 = 0;
            phi_v0 = temp_v0;
            phi_s0_2 = temp_s0_2;
        } while (temp_s0_2 != 0x100);
        this->unk_0D32 = 0x14;
        this->unk_0D30 = 0x64;
    } else {
        temp_v1 = this->unk_0D32;
        if (temp_v1 == 0) {
            phi_v0_2 = 0;
        } else {
            this->unk_0D32 = temp_v1 - 1;
            phi_v0_2 = this->unk_0D32;
        }
        if (phi_v0_2 == 0) {
            temp_v1_2 = this->unk_0D34;
            if (temp_v1_2 == 0) {
                phi_v0_3 = 0;
            } else {
                this->unk_0D34 = temp_v1_2 - 1;
                phi_v0_3 = this->unk_0D34;
            }
            if ((phi_v0_3 == 0) && ((s32) this->unk_0D30 >= 0x15)) {
                this->unk_0D34 = 5;
                func_80A500F8(this);
            }
            phi_s1_2 = this->particles;
            phi_s2 = 0;
            do {
                func_80A4FEBC(phi_s1_2, this->dyna.actor.world.pos.y);
                temp_s2 = phi_s2 + 0x38;
                phi_s1_2 += 0x38;
                phi_s2 = temp_s2;
            } while (temp_s2 != 0xBD0);
            this->unk_0D30 += -1;
        }
    }
    func_80A5086C(this->unk_0D38);
}

void func_80A50510(EnDnb *arg0, GraphicsContext **arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    s32 temp_s3;
    void *temp_s1;
    EnDnb *phi_s0;
    void *phi_s4;
    s32 phi_s3;

    temp_s1 = Lib_SegmentedToVirtual(&D_06004638);
    temp_a0 = *arg1;
    temp_s2 = temp_a0;
    func_8012C2DC(temp_a0);
    phi_s0 = arg0;
    phi_s4 = temp_s1;
    phi_s3 = 0;
    do {
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(phi_s0->particles[0].unk_0C.x, phi_s0->particles[0].unk_0C.y, phi_s0->particles[0].unk_0C.z, 0);
        SysMatrix_InsertXRotation_s(phi_s0->particles[0].unk_18.x, 1);
        Matrix_RotateY(phi_s0->particles[0].unk_18.y, 1U);
        SysMatrix_InsertZRotation_s(phi_s0->particles[0].unk_18.z, 1);
        temp_v0 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        temp_v0->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_2 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = *phi_s4;
        SysMatrix_StatePop();
        temp_s3 = phi_s3 + 4;
        phi_s0 += 0x38;
        phi_s4 += 4;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0xD8);
}

void func_80A5063C(EnDnb *arg0, GraphicsContext **arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    s32 temp_s3;
    void *temp_s1;
    EnDnb *phi_s0;
    void *phi_s4;
    s32 phi_s3;

    temp_s1 = Lib_SegmentedToVirtual(&D_06004638);
    temp_a0 = *arg1;
    temp_s2 = temp_a0;
    func_8012C28C(temp_a0);
    phi_s0 = arg0;
    phi_s4 = temp_s1;
    phi_s3 = 0;
    do {
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(phi_s0->particles[0].unk_0C.x, phi_s0->particles[0].unk_0C.y, phi_s0->particles[0].unk_0C.z, 0);
        SysMatrix_InsertXRotation_s(phi_s0->particles[0].unk_18.x, 1);
        Matrix_RotateY(phi_s0->particles[0].unk_18.y, 1U);
        SysMatrix_InsertZRotation_s(phi_s0->particles[0].unk_18.z, 1);
        temp_v0 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        temp_v0->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_2 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = *phi_s4;
        SysMatrix_StatePop();
        temp_s3 = phi_s3 + 4;
        phi_s0 += 0x38;
        phi_s4 += 4;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0xD8);
}

void EnDnb_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnDnb *this = (EnDnb *) thisx;
    if (globalCtx->actorCtx.unk4 != 0) {
        func_80A50510(this);
    } else {
        func_80A5063C(this);
    }
    func_80A50950(this->unk_0D38, globalCtx);
}

s32 func_80A507C0(EnDnbUnkStruct *arg0, ? arg1, ? arg1_unk4, ? arg1_unk8, ? arg2, ? arg2_unk4, ? arg2_unk8, u8 arg3, f32 arg4, f32 arg5) {
    s32 temp_v0;
    EnDnbUnkStruct *phi_a0;
    s32 phi_v0;
    s32 phi_v1;

    phi_a0 = arg0;
    phi_v0 = 0;
    phi_v1 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_a0->isEnabled == 0) {
        phi_a0->isEnabled = 1;
        phi_a0->unk_01 = arg3;
        phi_a0->unk_02 = arg3;
        phi_a0->unk_0C.x = arg1.unk0;
        phi_a0->unk_0C.y = arg1.unk4;
        phi_a0->unk_0C.z = arg1.unk8;
        phi_a0->unk_18.x = arg2.unk0;
        phi_a0->unk_18.y = arg2.unk4;
        phi_a0->unk_18.z = arg2.unk8;
        phi_a0->unk_04 = arg4;
        phi_a0->unk_24 = 255.0f;
        phi_a0->unk_08 = arg5;
        phi_v1 = 1;
    } else {
        phi_a0 += 0x28;
        if (temp_v0 != 0x100) {
            goto loop_1;
        }
    }
    return phi_v1;
}

s32 func_80A5086C(EnDnbUnkStruct *arg0) {
    s32 temp_v0;
    u8 temp_a1;
    u8 temp_a1_2;
    void *temp_a0;
    EnDnbUnkStruct *phi_a0;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;

    phi_a0 = arg0;
    phi_v0 = 0;
    phi_v1_3 = 0;
    do {
        temp_v0 = phi_v0 + 2;
        phi_v0 = temp_v0;
        phi_v1_2 = phi_v1_3;
        if (phi_a0->isEnabled == 1) {
            temp_a1 = phi_a0->unk_01;
            phi_v1_2 = phi_v1_3 + 1;
            if (temp_a1 != 0) {
                phi_a0->unk_0C.x += phi_a0->unk_18.x;
                phi_a0->unk_0C.y += phi_a0->unk_18.y;
                phi_a0->unk_01 = temp_a1 - 1;
                phi_a0->unk_0C.z += phi_a0->unk_18.z;
            } else {
                phi_a0->isEnabled = 0;
            }
        }
        temp_a0 = phi_a0 + 0x28;
        phi_v1 = phi_v1_2;
        if (phi_a0->unk28 == 1) {
            temp_a1_2 = temp_a0->unk1;
            phi_v1 = phi_v1_2 + 1;
            if (temp_a1_2 != 0) {
                temp_a0->unkC = (f32) (temp_a0->unkC + temp_a0->unk18);
                temp_a0->unk1 = (u8) (temp_a1_2 - 1);
                temp_a0->unk10 = (f32) (temp_a0->unk10 + temp_a0->unk1C);
                temp_a0->unk14 = (f32) (temp_a0->unk14 + temp_a0->unk20);
            } else {
                temp_a0->unk0 = 0;
            }
        }
        phi_a0 = temp_a0 + 0x28;
        phi_v1_3 = phi_v1;
    } while (temp_v0 != 0x100);
    return phi_v1;
}

s32 func_80A50950(EnDnbUnkStruct *arg0, GlobalContext *globalCtx) {
    s32 sp5C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    MtxF *temp_s3;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f16;
    s32 temp_s5;
    u8 temp_t2;
    u8 temp_t3;
    EnDnbUnkStruct *phi_s1;
    s32 phi_s7;
    f32 phi_f16;
    f32 phi_f10;
    s32 phi_s5;

    sp5C = 0;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    phi_s1 = arg0;
    phi_s7 = 0;
    phi_s5 = 0;
    do {
        if (phi_s1->isEnabled == 1) {
            temp_s3 = &globalCtx->mf_187FC;
            if (phi_s7 == 0) {
                temp_s0->polyXlu.p = Gfx_CallSetupDL(temp_s0->polyXlu.p, 0U);
                temp_v0 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0 + 8;
                temp_v0->words.w1 = (u32) &D_06000000;
                temp_v0->words.w0 = 0xDE000000;
                temp_v0_2 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = -0x100;
                temp_v0_2->words.w0 = 0xFB000000;
                phi_s7 = 1;
            }
            SysMatrix_StatePush();
            temp_t2 = phi_s1->unk_02;
            temp_f16 = (f32) temp_t2;
            phi_f16 = temp_f16;
            if ((s32) temp_t2 < 0) {
                phi_f16 = temp_f16 + 4294967296.0f;
            }
            phi_s1->unk_24 = ((f32) phi_s1->unk_01 / phi_f16) * 255.0f;
            temp_v1 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v1 + 8;
            temp_v1->words.w0 = 0xFA000000;
            temp_v1->words.w1 = ((u32) phi_s1->unk_24 & 0xFF) | ~0xFF;
            SysMatrix_InsertTranslation(phi_s1->unk_0C.x, phi_s1->unk_0C.y, phi_s1->unk_0C.z, 0);
            temp_f12 = phi_s1->unk_04;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            SysMatrix_NormalizeXYZ(temp_s3);
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDA380003;
            temp_v0_3->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_t3 = phi_s1->unk_02;
            temp_f10 = (f32) temp_t3;
            phi_f10 = temp_f10;
            if ((s32) temp_t3 < 0) {
                phi_f10 = temp_f10 + 4294967296.0f;
            }
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDB060020;
            temp_v0_4->words.w1 = Lib_SegmentedToVirtual(*(&D_80A50CBC + ((s32) (((f32) phi_s1->unk_01 / phi_f10) * 8.0f) * 4)));
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w1 = (u32) &D_06000020;
            temp_v0_5->words.w0 = 0xDE000000;
            SysMatrix_StatePop();
            sp5C += 1;
        }
        temp_s5 = phi_s5 + 1;
        phi_s1 += 0x28;
        phi_s5 = temp_s5;
    } while (temp_s5 != 0x100);
    return sp5C;
}

