typedef struct EnHanabi {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s16 unk144;                        /* inferred */
    /* 0x0146 */ char pad146[0x2];
    /* 0x0148 */ ? unk148;                          /* inferred */
    /* 0x0148 */ char pad148[0x44C0];
    /* 0x4608 */ LightInfo unk4608;                 /* inferred */
    /* 0x4616 */ char pad4616[0x3E];                /* maybe part of unk4608[5]? */
    /* 0x4654 */ void (*actionFunc)(EnHanabi *, GlobalContext *);
} EnHanabi;                                         /* size = 0x4658 */

struct _mips2c_stack_EnHanabi_Destroy {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnHanabi_Init {
    /* 0x00 */ char pad0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnHanabi_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B22C00 {};              /* size 0x0 */

struct _mips2c_stack_func_80B22C2C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B22C80 {
    /* 0x00 */ char pad0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80B22E0C {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B22F34 {};              /* size 0x0 */

struct _mips2c_stack_func_80B22FA8 {
    /* 0x00 */ char pad0[0x53];
    /* 0x53 */ u8 sp53;                             /* inferred */
    /* 0x54 */ char pad54[0xC];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80B234C8 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B235CC {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ Actor *sp28;                         /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B236C8 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B23894 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B238D4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B23910 {};              /* size 0x0 */

struct _mips2c_stack_func_80B23934 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B23A38 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void func_80B22C00(? *);                            /* static */
void func_80B22C2C(void *arg0, s32 arg1);           /* static */
s32 func_80B22C80(Vec3f *arg0, void *arg1, f32 arg2); /* static */
void func_80B22E0C(? *arg0);                        /* static */
s32 func_80B22F34(? *);                             /* static */
void func_80B22FA8(void *arg0, GraphicsContext **arg1); /* static */
void func_80B234C8(Actor *arg0);                    /* static */
void func_80B235CC(Actor *arg0, f32 *arg1, s32 arg2); /* static */
void func_80B236C8(Actor *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_80B23A38(s32 arg0, GraphicsContext **arg1); /* static */
static ? D_80B23AA0;                                /* unable to generate initializer */
static ? D_80B23C2C;                                /* unable to generate initializer */
static ? D_80B23C40;                                /* unable to generate initializer */

void func_80B22C00(void *arg0) {
    s32 temp_v0;
    void *temp_a0;
    void *phi_a0;
    s32 phi_v0;

    phi_a0 = arg0;
    phi_v0 = 0;
    do {
        temp_v0 = phi_v0 + 4;
        phi_a0->unk2C = 0;
        phi_a0->unk58 = 0;
        phi_a0->unk84 = 0;
        temp_a0 = phi_a0 + 0xB0;
        temp_a0->unk-B0 = 0;
        phi_a0 = temp_a0;
        phi_v0 = temp_v0;
    } while (temp_v0 != 0x190);
}

void func_80B22C2C(void *arg0, s32 arg1) {
    arg0->unk1 = (s8) ((s32) Rand_ZeroFloat(20.0f) + 0x3C);
    arg0->unk2 = (s8) arg1;
    arg0->unk14 = 0.7f;
}

s32 func_80B22C80(Vec3f *arg0, void *arg1, f32 arg2) {
    f32 temp_f22;
    s32 temp_s2;
    s32 temp_s6;
    void *phi_s0;
    ? *phi_s1;
    s32 phi_s3;
    s32 phi_s2;
    s32 phi_s3_2;

    temp_f22 = (Rand_ZeroFloat(0.2f) + 0.6f) * arg2;
    temp_s6 = (s32) Rand_ZeroFloat(6.0f) * 3;
    phi_s0 = arg1;
    phi_s1 = &D_80B23AA0;
    phi_s2 = 0;
    phi_s3_2 = 0;
loop_1:
    phi_s3 = phi_s3_2;
    if ((s32) phi_s0->unk0 <= 0) {
        phi_s0->unk0 = 1U;
        Math_Vec3f_Copy(phi_s0 + 8, arg0);
        phi_s0->unk20 = (f32) ((f32) phi_s1->unk0 * temp_f22);
        phi_s0->unk24 = (f32) (((f32) phi_s1->unk2 * temp_f22) + 50.0f);
        phi_s0->unk4 = (f32) (1.5f * arg2);
        phi_s0->unk28 = (f32) ((f32) phi_s1->unk4 * temp_f22);
        func_80B22C2C(phi_s0, temp_s6);
        phi_s3 = phi_s3_2 + 1;
        phi_s1 += 6;
    }
    temp_s2 = phi_s2 + 1;
    phi_s0 += 0x2C;
    phi_s2 = temp_s2;
    phi_s3_2 = phi_s3;
    if ((phi_s3 < 0x42) && (temp_s2 != 0x190)) {
        goto loop_1;
    }
    return temp_s6;
}

void func_80B22E0C(? *arg0) {
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f18;
    s32 temp_s1;
    u8 temp_v0;
    ? *phi_s0;
    s32 phi_s1;

    phi_s0 = arg0;
    phi_s1 = 0;
    do {
        if (phi_s0->unk0 == 1) {
            temp_f12 = phi_s0->unk24;
            temp_f0 = phi_s0->unk14;
            temp_f18 = phi_s0->unk20;
            temp_f10 = phi_s0->unk28;
            phi_s0->unk24 = (f32) (temp_f12 * temp_f0);
            phi_s0->unk8 = (f32) (phi_s0->unk8 + temp_f18);
            phi_s0->unk10 = (f32) (phi_s0->unk10 + temp_f10);
            phi_s0->unkC = (f32) (phi_s0->unkC + temp_f12);
            phi_s0->unk20 = (f32) (temp_f18 * temp_f0);
            phi_s0->unk28 = (f32) (temp_f10 * temp_f0);
            phi_s0->unk24 = (f32) (phi_s0->unk24 - 1.0f);
            phi_s0->unk20 = (f32) (phi_s0->unk20 + randPlusMinusPoint5Scaled(0.8f));
            phi_s0->unk24 = (f32) (phi_s0->unk24 + randPlusMinusPoint5Scaled(0.8f));
            temp_v0 = phi_s0->unk1;
            phi_s0->unk28 = (f32) (phi_s0->unk28 + randPlusMinusPoint5Scaled(0.8f));
            if ((s32) temp_v0 > 0) {
                phi_s0->unk1 = (u8) (temp_v0 - 1);
            } else {
                phi_s0->unk0 = 0U;
            }
        }
        temp_s1 = phi_s1 + 1;
        phi_s0 += 0x2C;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x190);
}

s32 func_80B22F34(void *arg0) {
    s32 temp_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *phi_a0;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v1_4;
    s32 phi_v1_5;

    phi_a0 = arg0;
    phi_v0 = 0;
    phi_v1_5 = 0;
    do {
        temp_v0 = phi_v0 + 4;
        phi_v0 = temp_v0;
        phi_v1_4 = phi_v1_5;
        if (phi_a0->unk0 == 1) {
            phi_v1_4 = phi_v1_5 + 1;
        }
        temp_a0 = phi_a0 + 0x2C;
        phi_v1_3 = phi_v1_4;
        if (phi_a0->unk2C == 1) {
            phi_v1_3 = phi_v1_4 + 1;
        }
        temp_a0_2 = temp_a0 + 0x2C;
        phi_v1_2 = phi_v1_3;
        if (temp_a0->unk2C == 1) {
            phi_v1_2 = phi_v1_3 + 1;
        }
        phi_v1 = phi_v1_2;
        if (temp_a0_2->unk2C == 1) {
            phi_v1 = phi_v1_2 + 1;
        }
        phi_a0 = temp_a0_2 + 0x2C + 0x2C;
        phi_v1_5 = phi_v1;
    } while (temp_v0 != 0x190);
    return phi_v1;
}

void func_80B22FA8(void *arg0, GraphicsContext **arg1) {
    u8 sp53;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    s32 temp_s7;
    u8 temp_v0_3;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *phi_s0;
    f32 phi_f10;
    s32 phi_s7;

    temp_a0 = arg1->unk0;
    temp_s2 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_s2->polyXlu.p = Gfx_CallSetupDL(temp_s2->polyXlu.p, 0x14U);
    temp_v0 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    temp_v0->words.w1 = Lib_SegmentedToVirtual((void *) &D_04079B10);
    temp_v0_2 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) D_0407AB10;
    sp53 = 0xFF;
    phi_s0 = arg0;
    phi_s7 = 0;
    do {
        if (phi_s0->unk0 == 1) {
            SysMatrix_InsertTranslation(phi_s0->unk8, phi_s0->unkC, phi_s0->unk10, 0);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            temp_v0_3 = phi_s0->unk1;
            if ((s32) temp_v0_3 < 0x28) {
                temp_f10 = (f32) temp_v0_3;
                phi_f10 = temp_f10;
                if ((s32) temp_v0_3 < 0) {
                    phi_f10 = temp_f10 + 4294967296.0f;
                }
                temp_f12 = phi_s0->unk4 * 0.025f * phi_f10;
                Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            } else {
                temp_f12_2 = phi_s0->unk4;
                Matrix_Scale(temp_f12_2, temp_f12_2, 1.0f, 1);
            }
            SysMatrix_InsertZRotation_s((s16) (arg1->unk18840 * 0x1300), 1);
            temp_v0_4 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDA380003;
            temp_v0_4->words.w1 = Matrix_NewMtx(arg1->unk0);
            if (phi_s0->unk2 != sp53) {
                temp_v0_5 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_5 + 8;
                temp_v0_5->words.w1 = 0;
                temp_v0_5->words.w0 = 0xE7000000;
                temp_v0_6 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_6 + 8;
                temp_v0_6->words.w0 = 0xFB000000;
                temp_v1 = phi_s0->unk2;
                temp_a1 = temp_v1 + &D_80B23C40;
                temp_v0_6->words.w1 = (temp_a1->unk2 << 8) | (*(temp_v1 + &D_80B23C40) << 0x18) | (temp_a1->unk1 << 0x10) | 0xFF;
                sp53 = phi_s0->unk2;
            }
            if ((s32) phi_s0->unk1 < 6) {
                temp_v0_7 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_7 + 8;
                temp_v0_7->words.w0 = 0xFA000000;
                temp_v1_2 = phi_s0->unk2;
                temp_a1_2 = &D_80B23C2C + temp_v1_2;
                temp_v0_7->words.w1 = (temp_a1_2->unk2 << 8) | (*(&D_80B23C2C + temp_v1_2) << 0x18) | (temp_a1_2->unk1 << 0x10) | ((phi_s0->unk1 * 0x32) & 0xFF);
            } else {
                temp_v0_8 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_8 + 8;
                temp_v0_8->words.w0 = 0xFA000000;
                temp_v1_3 = phi_s0->unk2;
                temp_a1_3 = &D_80B23C2C + temp_v1_3;
                temp_v0_8->words.w1 = (temp_a1_3->unk2 << 8) | (*(&D_80B23C2C + temp_v1_3) << 0x18) | (temp_a1_3->unk1 << 0x10) | 0xFF;
            }
            temp_v0_9 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_9 + 8;
            temp_v0_9->words.w1 = (u32) D_0407AB58;
            temp_v0_9->words.w0 = 0xDE000000;
        }
        temp_s7 = phi_s7 + 1;
        phi_s0 += 0x2C;
        phi_s7 = temp_s7;
    } while (temp_s7 != 0x190);
}

void EnHanabi_Init(EnHanabi *this, GlobalContext *globalCtx) {
    EnHanabi *temp_s3;
    LightContext *temp_s5;
    s32 temp_s2;
    LightInfo *phi_s0;
    EnHanabi *phi_s3;
    s32 phi_s2;
    EnHanabi *this = (EnHanabi *) thisx;

    Actor_SetScale((Actor *) this, 1.0f);
    this->actionFunc = func_80B23910;
    this->unk144 = 0;
    func_80B22C00(&this->unk148);
    temp_s5 = &globalCtx->lightCtx;
    phi_s0 = &this->unk4608;
    phi_s3 = this;
    phi_s2 = 0;
    do {
        Lights_PointNoGlowSetInfo(phi_s0, (s16) (s32) this->actor.world.pos.x, (s16) (s32) this->actor.world.pos.y, (s16) (s32) this->actor.world.pos.z, (u8) 0xFF, (u8) 0xFF, (u8) 0xFF, (s16) -1);
        temp_s2 = phi_s2 + 0xE;
        temp_s3 = phi_s3 + 4;
        temp_s3->unk4630 = LightContext_InsertLight(globalCtx, temp_s5, phi_s0);
        phi_s0 += 0xE;
        phi_s3 = temp_s3;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x2A);
    if ((this->actor.params & 0x1F) == 1) {
        this->actionFunc = func_80B23934;
        this->actor.home.rot.x = 0x384;
    }
}

void EnHanabi_Destroy(EnHanabi *this, GlobalContext *globalCtx) {
    s32 temp_s0;
    EnHanabi *phi_s1;
    s32 phi_s0;
    EnHanabi *this = (EnHanabi *) thisx;

    phi_s1 = this;
    phi_s0 = 0;
    do {
        LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, phi_s1->unk4634);
        temp_s0 = phi_s0 + 4;
        phi_s1 += 4;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0xC);
}

void func_80B234C8(Actor *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_s0;
    void *temp_v0_3;
    Actor *phi_s1;
    s32 phi_s0;
    s32 phi_v1;
    s32 phi_v1_2;

    phi_s1 = arg0;
    phi_s0 = 0;
    do {
        temp_v0 = phi_s1->unk4640;
        if ((s32) temp_v0 > 0) {
            phi_s1->unk4640 = (s16) (temp_v0 - 1);
            temp_v0_2 = phi_s1->unk4640;
            if (temp_v0_2 == 0) {
                phi_v1 = -1;
            } else {
                if ((s32) temp_v0_2 >= 0xA) {
                    phi_v1_2 = 0x3E8;
                } else {
                    phi_v1_2 = (s32) (s16) (temp_v0_2 * 0x64);
                }
                phi_v1 = phi_v1_2;
                if ((s32) arg0->home.rot.x >= 0x259) {
                    phi_v1 = (s32) (s16) (phi_v1_2 * 2);
                }
            }
            temp_v0_3 = &D_80B23C2C + (arg0 + (phi_s0 * 4))->unk4648;
            Lights_PointSetColorAndRadius(arg0 + (phi_s0 * 0xE) + 0x4608, temp_v0_3->unk0, temp_v0_3->unk1, temp_v0_3->unk2, (s16) phi_v1);
        }
        temp_s0 = phi_s0 + 1;
        phi_s1 += 2;
        phi_s0 = temp_s0;
    } while (temp_s0 != 3);
}

void func_80B235CC(Actor *arg0, f32 *arg1, s32 arg2) {
    Actor *sp28;
    s32 temp_v0;
    void *temp_t0;
    Actor *phi_v1;
    s32 phi_v0;

    phi_v1 = arg0;
    phi_v0 = 0;
loop_1:
    if (phi_v1->unk4640 == 0) {
        (arg0 + (phi_v0 * 4))->unk4648 = arg2;
        temp_t0 = arg2 + &D_80B23C2C;
        sp28 = phi_v1;
        Lights_PointNoGlowSetInfo(arg0 + (phi_v0 * 0xE) + 0x4608, (s16) (s32) arg1->unk0, (s16) (s32) arg1->unk4, (s16) (s32) arg1->unk8, (u8) (s32) temp_t0->unk0, (u8) (s32) temp_t0->unk1, (u8) (s32) temp_t0->unk2, (s16) 0x3E8);
        phi_v1->unk4640 = 0x14;
        return;
    }
    temp_v0 = phi_v0 + 1;
    phi_v1 += 2;
    phi_v0 = temp_v0;
    if (temp_v0 == 3) {
        return;
    }
    goto loop_1;
}

void func_80B236C8(Actor *arg0, GlobalContext *arg1) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s32 sp28;
    s16 temp_v0;
    s32 phi_v0;

    arg0->draw = func_80B23A38;
    func_80B234C8(arg0);
    if (arg0->home.rot.x != 0) {
        temp_v0 = arg0->unk144;
        if ((s32) temp_v0 > 0) {
            arg0->unk144 = (s16) (temp_v0 - 1);
            return;
        }
        Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x24);
        if (arg0->home.rot.x != 0) {
            sp30 = Rand_ZeroFloat(200.0f) + (f32) arg0->home.rot.x;
        } else {
            sp30 = Rand_ZeroFloat(200.0f) + 300.0f;
        }
        sp34 += sp30 * Math_SinS(arg0->home.rot.y);
        sp38 += randPlusMinusPoint5Scaled(300.0f);
        sp3C += sp30 * Math_CosS(arg0->home.rot.y);
        if ((s32) arg0->home.rot.x >= 0x259) {
            phi_v0 = func_80B22C80((Vec3f *) &sp34, arg0 + 0x148, 2.0f);
        } else {
            phi_v0 = func_80B22C80((Vec3f *) &sp34, arg0 + 0x148, 1.0f);
        }
        sp28 = phi_v0;
        arg0->home.rot.y += (s32) ((Rand_ZeroFloat(40.0f) + 80.0f) * 256.0f);
        arg0->unk144 = (s16) ((s32) Rand_ZeroFloat(5.0f) + 0x14);
        Audio_PlayActorSound2(arg0, 0x580AU);
        func_80B235CC(arg0, &sp34, sp28);
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

void func_80B23894(EnHanabi *this, GlobalContext *globalCtx) {
    func_80B236C8((Actor *) this);
    if (func_80B22F34(&this->unk148) == 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_80B238D4(EnHanabi *this, GlobalContext *globalCtx) {
    func_80B236C8();
    if (this->actor.home.rot.x == 0) {
        this->actionFunc = func_80B23894;
    }
}

void func_80B23910(EnHanabi *this, GlobalContext *globalCtx) {
    if (this->actor.home.rot.x != 0) {
        this->actionFunc = func_80B238D4;
    }
}

void func_80B23934(EnHanabi *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a1;
    GlobalContext *temp_a2;
    GlobalContext *phi_a2;

    temp_a2 = globalCtx;
    phi_a2 = temp_a2;
    if ((gSaveContext.entranceIndex == 0x5410) && (gSaveContext.sceneSetupIndex == 7)) {
        temp_a1 = temp_a2;
        if ((s32) temp_a2->csCtx.frames >= 0x673) {
            globalCtx = temp_a2;
            func_80B236C8((Actor *) this, temp_a1, temp_a2);
            func_800B8FE8((Actor *) this, 0x21B9U);
            phi_a2 = globalCtx;
        }
    }
    if ((phi_a2->sceneNum == 0x2D) && (gSaveContext.sceneSetupIndex == 7) && (phi_a2->csCtx.unk_12 == 0) && (phi_a2->csCtx.frames == 0x262)) {
        Audio_PlayActorSound2((Actor *) this, 0x29B4U);
    }
}

void EnHanabi_Update(EnHanabi *this, GlobalContext *globalCtx) {
    EnHanabi *temp_a2;
    EnHanabi *this = (EnHanabi *) thisx;

    temp_a2 = this;
    this = temp_a2;
    temp_a2->actionFunc(temp_a2, globalCtx);
    func_80B22E0C(&this->unk148);
}

void func_80B23A38(Actor *arg0, GraphicsContext **arg1) {
    SysMatrix_StatePush();
    func_80B22FA8(arg0 + 0x148, arg1);
    SysMatrix_StatePop();
}
