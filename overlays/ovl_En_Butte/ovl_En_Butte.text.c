typedef struct EnButte {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderJntSph unk_144;             /* inferred */
    /* 0x164 */ ColliderJntSphElement unk_164;      /* inferred */
    /* 0x1A4 */ SkelAnime unk_1A4;                  /* inferred */
    /* 0x1E8 */ Vec3s unk_1E8;                      /* inferred */
    /* 0x1EE */ char pad_1EE[0x2A];                 /* maybe part of unk_1E8[8]? */
    /* 0x218 */ Vec3s unk_218;                      /* inferred */
    /* 0x21E */ char pad_21E[0x2A];                 /* maybe part of unk_218[8]? */
    /* 0x248 */ void (*actionFunc)(EnButte *, GlobalContext *);
    /* 0x24C */ s16 unk_24C;                        /* inferred */
    /* 0x24E */ u8 unk_24E;                         /* inferred */
    /* 0x24F */ u8 unk_24F;                         /* inferred */
    /* 0x250 */ u8 unk_250;                         /* inferred */
    /* 0x251 */ char pad_251[0x1];
    /* 0x252 */ s16 unk_252;                        /* inferred */
    /* 0x254 */ s16 unk_254;                        /* inferred */
    /* 0x256 */ s16 unk_256;                        /* inferred */
    /* 0x258 */ s16 unk_258;                        /* inferred */
    /* 0x25A */ char pad_25A[0x2];
    /* 0x25C */ f32 unk_25C;                        /* inferred */
} EnButte;                                          /* size = 0x260 */

struct _mips2c_stack_EnButte_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnButte_Draw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnButte_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ ColliderJntSph *sp30;                /* inferred */
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnButte_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8091C0A0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8091C124 {};              /* size 0x0 */

struct _mips2c_stack_func_8091C140 {};              /* size 0x0 */

struct _mips2c_stack_func_8091C178 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x8];                    /* maybe part of sp34[3]? */
    /* 0x40 */ s16 sp40;                            /* inferred */
    /* 0x42 */ s16 sp42;                            /* inferred */
    /* 0x44 */ s16 sp44;                            /* inferred */
    /* 0x46 */ char pad_46[0x2];
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_8091C524 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8091C5EC {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8091C6B4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8091C748 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8091C794 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x2];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];                    /* maybe part of sp32[3]? */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ Actor *sp44;                         /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ void *sp4C;                          /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_8091CB68 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8091CBB4 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ s16 sp38;                            /* inferred */
    /* 0x3A */ char pad_3A[0x6];                    /* maybe part of sp38[4]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x8];                    /* maybe part of sp50[3]? */
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_8091CF64 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8091CFB4 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8091D070 {};              /* size 0x0 */

struct _mips2c_stack_func_8091D090 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? func_800DFC90(s16 *, s32);                        /* extern */
void func_8091C0A0(EnButte *arg0, void *arg1);      /* static */
void func_8091C124();                               /* static */
void func_8091C140();                               /* static */
void func_8091C178(EnButte *arg0, GlobalContext *arg1); /* static */
void func_8091C524(EnButte *arg0);                  /* static */
void func_8091C5EC(EnButte *arg0);                  /* static */
void func_8091C6B4(EnButte *arg0);                  /* static */
void func_8091C748(EnButte *arg0);                  /* static */
void func_8091CB68(EnButte *arg0);                  /* static */
void func_8091CF64(EnButte *arg0);                  /* static */
void func_8091D070(EnButte *arg0, GlobalContext *); /* static */
extern SkeletonHeader D_05002FA0;
static ColliderJntSphElementInit D_8091D2D0 = {{0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1}, {0, {{0, 0, 0}, 5}, 0x64}};
static ColliderJntSphInit D_8091D2F4 = {{0xA, 0, 0, 0x19, 0x10, 0}, 1, &D_8091D2D0};
static ? D_8091D324;                                /* unable to generate initializer */
static ? D_8091D360;                                /* unable to generate initializer */
static f32 D_8091D39C = 0.0f;
static s16 D_8091D3A0 = 0;
static Vec3f D_8091D3A4 = {0.0f, 0.0f, -3.0f};
static InitChainEntry D_8091D3B0[4];                /* unable to generate initializer */
static ? D_8091D3C0;                                /* unable to generate initializer */
static ? D_8091D3CC;                                /* unable to generate initializer */
static ? D_8091D3D8;                                /* unable to generate initializer */
static ? D_8091D3E4;                                /* unable to generate initializer */
static s32 D_8091D3F0 = 0x5DC;

void func_8091C0A0(EnButte *arg0, void *arg1) {
    if (arg0->unk_24E == 0) {
        arg0 = arg0;
        arg1 = arg1;
        if (Rand_ZeroOne() < 0.6f) {
            arg0->unk_24E = 1;
        } else {
            arg0->unk_24E = 2;
        }
    } else {
        arg0->unk_24E = 0;
    }
    arg0 = arg0;
    arg0->unk_24C = Rand_S16Offset(*arg1, arg1->unk_2);
}

void func_8091C124(void) {
    D_8091D39C = 0.0f;
    D_8091D3A0 = 0;
}

void func_8091C140(void) {
    D_8091D3A0 += 0xFA0;
    D_8091D39C += 0.003f;
}

void func_8091C178(EnButte *arg0, GlobalContext *arg1) {
    f32 sp4C;
    s32 sp48;
    s16 sp40;
    Gfx *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    s32 temp_f8;
    s32 phi_v1;

    temp_a0 = arg1->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C240(temp_a0);
    temp_f8 = (s32) (Math_SinS(D_8091D3A0) * 250.0f);
    if (temp_f8 < 0) {
        sp48 = 0;
    } else {
        phi_v1 = temp_f8;
        if (temp_f8 >= 0x100) {
            phi_v1 = 0xFF;
        }
        sp48 = phi_v1;
    }
    func_800DFC90(&sp40, (arg1 + (arg1->activeCamera * 4))->unk_800);
    Matrix_RotateY(sp42, 0U);
    SysMatrix_InsertXRotation_s(sp40, 1);
    SysMatrix_InsertZRotation_s(sp44, 1);
    SysMatrix_MultiplyVector3fByState(&D_8091D3A4, (Vec3f *) &sp4C);
    SysMatrix_SetStateRotationAndTranslation(arg0->actor.focus.pos.x + sp4C, arg0->actor.focus.pos.y + sp50, arg0->actor.focus.pos.z + sp54, (Vec3s *) &sp40);
    temp_f12 = D_8091D39C;
    Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp34 = temp_v0;
    sp34->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xFA008080;
    temp_v0_2->words.w1 = (sp48 & 0xFF) | 0xC8C8B400;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_3[1];
    temp_v0_3->words.w1 = 0xC8C8D2FF;
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_4[1];
    temp_v0_4->words.w1 = (u32) D_04023210;
    temp_v0_4->words.w0 = 0xDE000000;
}

void EnButte_Init(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    ColliderJntSph *sp30;
    ColliderJntSph *temp_a1_2;
    ColliderJntSphElement *temp_v1_2;
    SkelAnime *temp_a1;
    s16 temp_v1;
    EnButte *this = (EnButte *) thisx;

    if (this->actor.params == -1) {
        this->actor.params = 0;
    }
    this->actor.world.rot.y = Rand_Next();
    temp_v1 = this->actor.world.rot.y;
    this->actor.home.rot.y = temp_v1;
    this->actor.shape.rot.y = temp_v1;
    Actor_ProcessInitChain((Actor *) this, D_8091D3B0);
    temp_a1 = &this->unk_1A4;
    if ((this->actor.params & 1) == 1) {
        this->actor.uncullZoneScale = 200.0f;
    }
    sp34 = temp_a1;
    SkelAnime_Init(globalCtx, temp_a1, &D_05002FA0, (AnimationHeader *) &D_05001D20, &this->unk_1E8, &this->unk_218, 8);
    temp_a1_2 = &this->unk_144;
    sp30 = temp_a1_2;
    Collider_InitJntSph(globalCtx, temp_a1_2);
    Collider_SetJntSph(globalCtx, temp_a1_2, (Actor *) this, &D_8091D2F4, &this->unk_164);
    temp_v1_2 = this->unk_144.elements;
    temp_v1_2->dim.worldSphere.radius = (s16) (s32) ((f32) temp_v1_2->dim.modelSphere.radius * temp_v1_2->dim.scale);
    this->actor.colChkInfo.mass = 0;
    this->unk_254 = (s16) (s32) (Rand_ZeroOne() * 65535.0f);
    this->unk_256 = (s16) (s32) (Rand_ZeroOne() * 65535.0f);
    this->unk_258 = (s16) (s32) (Rand_ZeroOne() * 65535.0f);
    SkelAnime_ChangeAnim(sp34, (AnimationHeader *) &D_05001D20, 1.0f, 0.0f, 0.0f, (u8) 1, 0.0f);
    func_8091C748(this);
    this->unk_250 = 1;
    this->actor.shape.rot.x += -0x2320;
}

void EnButte_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnButte *this = (EnButte *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk_144);
}

void func_8091C524(EnButte *arg0) {
    f32 sp18;
    f32 temp_f2;
    s16 temp_a0;
    s32 temp_v0;
    f32 phi_f0;

    temp_a0 = arg0->unk_256;
    arg0 = arg0;
    sp18 = Math_SinS(temp_a0);
    temp_v0 = arg0->unk_24E * 4;
    arg0->actor.shape.yOffset += (Math_SinS(arg0->unk_254) * *(&D_8091D3C0 + temp_v0)) + (sp18 * *(&D_8091D3CC + temp_v0));
    temp_f2 = arg0->actor.shape.yOffset;
    if (temp_f2 < -2000.0f) {
        arg0->actor.shape.yOffset = -2000.0f;
        return;
    }
    if (temp_f2 > 2000.0f) {
        phi_f0 = 2000.0f;
    } else {
        phi_f0 = temp_f2;
    }
    arg0->actor.shape.yOffset = phi_f0;
}

void func_8091C5EC(EnButte *arg0) {
    f32 sp18;
    f32 temp_f2;
    s16 temp_a0;
    s32 temp_v0;
    f32 phi_f0;

    temp_a0 = arg0->unk_256;
    arg0 = arg0;
    sp18 = Math_SinS(temp_a0);
    temp_v0 = arg0->unk_24E * 4;
    arg0->actor.shape.yOffset += (Math_SinS(arg0->unk_254) * *(&D_8091D3D8 + temp_v0)) + (sp18 * *(&D_8091D3E4 + temp_v0));
    temp_f2 = arg0->actor.shape.yOffset;
    if (temp_f2 < -500.0f) {
        arg0->actor.shape.yOffset = -500.0f;
        return;
    }
    if (temp_f2 > 500.0f) {
        phi_f0 = 500.0f;
    } else {
        phi_f0 = temp_f2;
    }
    arg0->actor.shape.yOffset = phi_f0;
}

void func_8091C6B4(EnButte *arg0) {
    s16 *temp_a0;
    s16 temp_a1;
    s16 temp_v0;
    s32 phi_v1;

    temp_a1 = arg0->actor.world.rot.y + 0x8000;
    temp_v0 = temp_a1 - arg0->actor.shape.rot.y;
    temp_a0 = arg0 + 0xBE;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    } else {
        phi_v1 = (s32) temp_v0;
    }
    arg0 = arg0;
    Math_ScaledStepToS(temp_a0, temp_a1, (s16) (phi_v1 >> 3));
    arg0->actor.shape.rot.x = (s32) (Math_SinS(arg0->unk_258) * 600.0f) - 0x2320;
}

void func_8091C748(EnButte *arg0) {
    func_8091C0A0((arg0->unk_24E * 0x14) + &D_8091D324);
    arg0->actionFunc = func_8091C794;
}

void func_8091C794(EnButte *this, GlobalContext *globalCtx) {
    void *sp4C;
    Actor *sp44;
    f32 sp40;
    f32 sp38;
    s16 sp32;
    f32 sp2C;
    f32 sp28;
    Actor *temp_v0;
    f32 temp_f12;
    u8 temp_v1;
    f32 phi_f0;
    s16 phi_a2;
    f32 phi_f2;

    sp4C = (this->unk_24E * 0x14) + &D_8091D324;
    sp44 = globalCtx->actorCtx.actorList[2].first;
    sp40 = Math3D_XZDistanceSquared(this->actor.world.pos.x, this->actor.world.pos.z, this->actor.home.pos.x, this->actor.home.pos.z);
    func_8091C524(this);
    Math_SmoothStepToF(&this->actor.speedXZ, sp4C->unk_4, sp4C->unk_8, sp4C->unk_C, 0.0f);
    if (this->unk_24F == 1) {
        phi_f0 = 10000.0f;
        phi_a2 = 0x3E8;
    } else {
        phi_f0 = 1225.0f;
        phi_a2 = 0x258;
    }
    sp38 = 0.0f;
    this->unk_25C = this->actor.home.pos.y;
    if ((this->unk_24E != 0) && ((phi_f0 < sp40) || ((s32) this->unk_24C < 4))) {
        if (Math_ScaledStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw((Vec3f *) &this->actor.world, (Vec3f *) &this->actor.home), sp4C->unk_10) == 0) {
            sp38 = 0.5f;
        }
    } else {
        temp_v1 = this->unk_24F;
        if ((temp_v1 == 0) && (temp_v0 = this->actor.child, (temp_v0 != 0)) && (this != temp_v0)) {
            sp32 = phi_a2;
            if (Math_ScaledStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw((Vec3f *) &this->actor.world, (Vec3f *) &temp_v0->world), phi_a2) == 0) {
                sp38 = 0.3f;
            }
        } else if (temp_v1 == 1) {
            sp32 = phi_a2;
            if (Math_ScaledStepToS(&this->actor.world.rot.y, (s16) ((s32) ((Rand_ZeroOne() - 0.5f) * 24576.0f) + this->actor.yawTowardsPlayer + 0x8000), phi_a2) == 0) {
                sp38 = 0.4f;
            }
        } else {
            this->actor.world.rot.y += (s32) (Math_SinS(this->unk_254) * 100.0f);
        }
    }
    func_8091C6B4(this);
    sp28 = Math_SinS(this->unk_258);
    sp2C = Rand_ZeroOne();
    temp_f12 = ((1.0f - Math_SinS(this->unk_256)) * 0.3f) + ((this->actor.speedXZ * 0.5f) + (sp2C * 0.2f) + ((1.0f - sp28) * 0.15f)) + sp38;
    if (temp_f12 < 0.2f) {
        this->unk_1A4.animPlaybackSpeed = 0.2f;
    } else {
        if (temp_f12 > 1.5f) {
            phi_f2 = 1.5f;
        } else {
            phi_f2 = temp_f12;
        }
        this->unk_1A4.animPlaybackSpeed = phi_f2;
    }
    SkelAnime_FrameUpdateMatrix(&this->unk_1A4);
    if ((s32) this->unk_24C <= 0) {
        func_8091C0A0(this, (this->unk_24E * 0x14) + &D_8091D324);
    }
    if (((this->actor.params & 1) == 1) && (sp44[1].room == 7) && ((s32) this->unk_252 <= 0) && ((Math3D_XZDistanceSquared(sp44->world.pos.x, sp44->world.pos.z, this->actor.home.pos.x, this->actor.home.pos.z) < 14400.0f) || (this->actor.xzDistToPlayer < 60.0f))) {
        func_8091CB68(this);
        this->unk_24F = 2;
        return;
    }
    if (this->actor.xzDistToPlayer < 120.0f) {
        this->unk_24F = 1;
        return;
    }
    this->unk_24F = 0;
}

void func_8091CB68(EnButte *arg0) {
    func_8091C0A0((arg0->unk_24E * 0x14) + &D_8091D360);
    arg0->actionFunc = func_8091CBB4;
}

void func_8091CBB4(EnButte *this, GlobalContext *globalCtx) {
    void *sp5C;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp40;
    s16 sp38;
    f32 sp34;
    f32 sp30;
    Actor *temp_s1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    void *temp_v0;
    f32 phi_f2;

    temp_v0 = (this->unk_24E * 0x14) + &D_8091D360;
    temp_s1 = globalCtx->actorCtx.actorList[2].first;
    sp5C = temp_v0;
    func_8091C5EC(this);
    Math_SmoothStepToF(&this->actor.speedXZ, temp_v0->unk_4, temp_v0->unk_8, temp_v0->unk_C, 0.0f);
    sp40 = 0.0f;
    if ((this->unk_24E != 0) && ((s32) this->unk_24C < 0xC)) {
        sp48 = (Math_SinS(temp_s1->shape.rot.y) * 10.0f) + temp_s1->unk_B9C;
        sp4C = temp_s1[9].focus.pos.x;
        sp50 = (Math_CosS(temp_s1->shape.rot.y) * 10.0f) + temp_s1[9].focus.pos.y;
        sp38 = Math_Vec3f_Yaw((Vec3f *) &this->actor.world, (Vec3f *) &sp48);
        if (Math_ScaledStepToS(&this->actor.world.rot.y, (s16) ((s32) (Rand_ZeroOne() * (f32) D_8091D3F0) + sp38), 0x7D0) != 0) {
            if ((globalCtx->gameplayFrames & 0x30) == 0x30) {
                this->actor.world.rot.y += (s32) (Math_SinS(this->unk_254) * 60.0f);
            }
        } else {
            sp40 = 0.3f;
        }
    }
    temp_f0 = temp_s1[9].focus.pos.x;
    temp_f2 = temp_s1->world.pos.y + 30.0f;
    if (temp_f0 < temp_f2) {
        this->unk_25C = temp_f2;
    } else {
        this->unk_25C = temp_f0;
    }
    func_8091C6B4(this);
    sp30 = Math_SinS(this->unk_258);
    sp34 = Rand_ZeroOne();
    temp_f12 = ((1.0f - Math_SinS(this->unk_256)) * 0.3f) + ((this->actor.speedXZ * 0.5f) + (sp34 * 0.2f) + ((1.0f - sp30) * 0.15f)) + sp40;
    if (temp_f12 < 0.2f) {
        this->unk_1A4.animPlaybackSpeed = 0.2f;
    } else {
        if (temp_f12 > 1.5f) {
            phi_f2 = 1.5f;
        } else {
            phi_f2 = temp_f12;
        }
        this->unk_1A4.animPlaybackSpeed = phi_f2;
    }
    SkelAnime_FrameUpdateMatrix(&this->unk_1A4);
    if ((s32) this->unk_24C <= 0) {
        func_8091C0A0(this, (this->unk_24E * 0x14) + &D_8091D360);
        D_8091D3F0 = -(s32) D_8091D3F0;
    }
    temp_f0_2 = Math3D_XZDistanceSquared(this->actor.world.pos.x, this->actor.world.pos.z, this->actor.home.pos.x, this->actor.home.pos.z);
    if ((temp_s1[1].room != 7) || !(fabsf(temp_s1->speedXZ) < 1.8f) || ((s32) this->unk_252 > 0) || !(temp_f0_2 < 102400.0f)) {
        func_8091C748(this);
        return;
    }
    if ((temp_f0_2 > 57600.0f) && (Math3D_XZDistanceSquared(temp_s1->unk_B9C, temp_s1[9].focus.pos.y, this->actor.world.pos.x, this->actor.world.pos.z) < 3600.0f)) {
        func_8091CF64(this);
    }
}

void func_8091CF64(EnButte *arg0) {
    arg0->unk_24C = 9;
    arg0->actor.flags |= 0x10;
    arg0->unk_1A4.animPlaybackSpeed = 1.0f;
    func_8091C124();
    arg0->actionFunc = func_8091CFB4;
}

void func_8091CFB4(EnButte *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    SkelAnime_FrameUpdateMatrix(&this->unk_1A4);
    func_8091C140();
    temp_v0 = this->unk_24C;
    if (temp_v0 == 5) {
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x3C, 0x28E7U);
        return;
    }
    if (temp_v0 == 4) {
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x10, this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z, (s16) 0, (s16) (s32) this->actor.shape.rot.y, (s16) 0, (s16) 2);
        this->unk_250 = 0;
        return;
    }
    if ((s32) temp_v0 <= 0) {
        func_8091D070(this, globalCtx);
    }
}

void func_8091D070(EnButte *arg0) {
    arg0->unk_24C = 0x40;
    arg0->actionFunc = func_8091D090;
    arg0->actor.draw = NULL;
}

void func_8091D090(EnButte *this, GlobalContext *globalCtx) {
    if ((s32) this->unk_24C <= 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void EnButte_Update(Actor *thisx, GlobalContext *globalCtx) {
    Actor *temp_v0;
    ColliderJntSphElement *temp_v0_4;
    s16 temp_v0_2;
    s16 temp_v0_3;
    EnButte *this = (EnButte *) thisx;

    temp_v0 = this->actor.child;
    if ((temp_v0 != 0) && (temp_v0->update == 0) && (this != temp_v0)) {
        this->actor.child = NULL;
    }
    temp_v0_2 = this->unk_24C;
    if ((s32) temp_v0_2 > 0) {
        this->unk_24C = temp_v0_2 - 1;
    }
    this->unk_254 += 0x222;
    this->unk_256 += 0x1000;
    this->unk_258 += 0x600;
    if ((this->actor.params & 1) == 1) {
        if ((s8) globalCtx->actorCtx.actorList[2].first[8].colChkInfo.acHitEffect == 0) {
            temp_v0_3 = this->unk_252;
            if ((s32) temp_v0_3 > 0) {
                this->unk_252 = temp_v0_3 - 1;
            }
        } else {
            this->unk_252 = 0x50;
        }
    }
    this->actionFunc(this, globalCtx);
    if (this->actor.update != 0) {
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        Math_StepToF(&this->actor.world.pos.y, this->unk_25C, 0.6f);
        if (this->actor.xyzDistToPlayerSq < 5000.0f) {
            temp_v0_4 = this->unk_144.elements;
            temp_v0_4->dim.worldSphere.center.x = (s16) (s32) this->actor.world.pos.x;
            temp_v0_4->dim.worldSphere.center.y = (s16) (s32) this->actor.world.pos.y;
            temp_v0_4->dim.worldSphere.center.z = (s16) (s32) this->actor.world.pos.z;
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_144);
        }
        Actor_SetHeight((Actor *) this, this->actor.shape.yOffset * this->actor.scale.y);
    }
}

void EnButte_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnButte *this = (EnButte *) thisx;
    if (this->unk_250 != 0) {
        func_8012C28C(globalCtx->state.gfxCtx);
        SkelAnime_Draw(globalCtx, this->unk_1A4.skeleton, this->unk_1A4.limbDrawTbl, NULL, NULL, NULL);
    }
    if (((this->actor.params & 1) == 1) && (func_8091CFB4 == this->actionFunc)) {
        func_8091C178(this, globalCtx);
    }
}
