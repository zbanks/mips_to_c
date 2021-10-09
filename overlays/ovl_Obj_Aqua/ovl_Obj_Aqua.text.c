typedef struct ObjAqua {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ void (*actionFunc)(ObjAqua *, GlobalContext *);
    /* 0x194 */ s16 unk_194;                        /* inferred */
    /* 0x196 */ u8 unk_196;                         /* inferred */
    /* 0x197 */ char pad_197[0x1];
    /* 0x198 */ s16 unk_198;                        /* inferred */
    /* 0x19A */ char pad_19A[0x2];
} ObjAqua;                                          /* size = 0x19C */

struct _mips2c_stack_ObjAqua_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjAqua_Draw {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad_44[0x2];
    /* 0x46 */ s16 sp46;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];                    /* maybe part of sp46[5]? */
    /* 0x50 */ Gfx *sp50;                           /* inferred */
    /* 0x54 */ char pad_54[0x8];                    /* maybe part of sp50[3]? */
    /* 0x5C */ s32 sp5C;                            /* inferred */
    /* 0x60 */ char pad_60[0x2];
    /* 0x62 */ s16 sp62;                            /* inferred */
    /* 0x64 */ char pad_64[0xC];
};                                                  /* size = 0x70 */

struct _mips2c_stack_ObjAqua_Init {
    /* 0x00 */ char pad_0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_ObjAqua_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80ACB6A0 {
    /* 0x00 */ char pad_0[0x58];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80ACB7F4 {
    /* 0x00 */ char pad_0[0x58];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80ACB940 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80ACBA10 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x44];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80ACBA60 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80ACBC70 {};              /* size 0x0 */

struct _mips2c_stack_func_80ACBC8C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80ACBD34 {};              /* size 0x0 */

struct _mips2c_stack_func_80ACBD48 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ACBDCC {};              /* size 0x0 */

struct _mips2c_stack_func_80ACBDFC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

s32 func_800C9EBC(GlobalContext *, s32, s32, s32, f32 *, ? *, ? *); /* extern */
void func_80ACB6A0(ObjAqua *arg0, GlobalContext *arg1); /* static */
void func_80ACB7F4(ObjAqua *arg0, GlobalContext *arg1); /* static */
void func_80ACB940(void *arg0, GlobalContext *arg1); /* static */
void func_80ACBA10(ObjAqua *arg0);                  /* static */
s32 func_80ACBA60(ObjAqua *arg0, GlobalContext *arg1); /* static */
void func_80ACBC70(ObjAqua *arg0);                  /* static */
void func_80ACBD34(ObjAqua *arg0);                  /* static */
void func_80ACBDCC(ObjAqua *arg0);                  /* static */
static ColliderCylinderInit D_80ACC2C0 = {
    {0xA, 0x21, 0, 0, 0, 1},
    {0, {0xF7CFFFFF, 0, 0}, {0, 0, 0}, 0x19, 0, 0},
    {6, 0xA, 0, {0, 0, 0}},
};
static InitChainEntry D_80ACC2EC[7];                /* unable to generate initializer */
static Vec3f D_80ACC308 = {0.001f, 0.0007f, 0.001f};
static Vec3f D_80ACC314 = {0.0086f, 0.0008f, 0.0086f};
static Vec3f D_80ACC320 = {0.01f, 0.0026f, 0.01f};

void func_80ACB6A0(ObjAqua *arg0, GlobalContext *arg1) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 *temp_s4;
    s32 temp_s1;
    s32 phi_s0;
    s32 phi_s1;

    sp5C = arg0->actor.world.pos.y + arg0->actor.yDistToWater;
    temp_s4 = &sp58;
    phi_s0 = 0;
    phi_s1 = 0;
    do {
        sp58 = (Math_SinS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s0)) * 8.0f) + arg0->actor.world.pos.x;
        sp60 = (Math_CosS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s0)) * 8.0f) + arg0->actor.world.pos.z;
        EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s4, NULL, NULL, (s16) 0, (s16) 0x78);
        temp_s1 = phi_s1 + 1;
        phi_s0 += 0x4000;
        phi_s1 = temp_s1;
    } while (temp_s1 != 4);
    sp58 = arg0->actor.world.pos.x;
    sp60 = arg0->actor.world.pos.z;
    EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s4, NULL, NULL, (s16) 0, (s16) 0x12C);
}

void func_80ACB7F4(ObjAqua *arg0, GlobalContext *arg1) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 *temp_s4;
    s32 temp_s1;
    s32 phi_s0;
    s32 phi_s1;

    temp_s4 = &sp58;
    sp5C = arg0->actor.floorHeight;
    phi_s0 = 0;
    phi_s1 = 0;
    do {
        sp58 = (Math_SinS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s0)) * 8.0f) + arg0->actor.world.pos.x;
        sp60 = (Math_CosS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s0)) * 8.0f) + arg0->actor.world.pos.z;
        EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s4, NULL, NULL, (s16) 0, (s16) 0x78);
        temp_s1 = phi_s1 + 1;
        phi_s0 += 0x4000;
        phi_s1 = temp_s1;
    } while (temp_s1 != 4);
    sp58 = arg0->actor.world.pos.x;
    sp60 = arg0->actor.world.pos.z;
    EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s4, NULL, NULL, (s16) 0, (s16) 0x12C);
}

void func_80ACB940(void *arg0, GlobalContext *arg1) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 temp_f6;

    temp_f6 = Rand_ZeroOne() - 0.5f;
    sp28 = 2.0f;
    sp24 = temp_f6;
    sp2C = Rand_ZeroOne() - 0.5f;
    sp30 = arg0->unk_24 + (sp24 * 40.0f);
    sp34 = arg0->unk_28;
    sp38 = arg0->unk_2C + (sp2C * 40.0f);
    EffectSsIceSmoke_Spawn(arg1, (Vec3f *) &sp30, (Vec3f *) &sp24, &D_801D15B0, (s16) ((s32) (Rand_ZeroOne() * 24.0f) + 0x46));
}

void func_80ACBA10(ObjAqua *arg0) {
    ? sp2C;

    func_800C0094(arg0->actor.floorPoly, arg0->actor.world.pos.x, arg0->actor.floorHeight, arg0->actor.world.pos.z, (MtxF *) &sp2C);
    func_8018219C((MtxF *) &sp2C, arg0 + 0xBC, 0);
}

s32 func_80ACBA60(ObjAqua *arg0, GlobalContext *arg1) {
    ? sp30;
    f32 sp2C;
    ? sp28;

    if ((func_800C9EBC(arg1, arg1 + 0x830, arg0->actor.world.pos.x, arg0->actor.world.pos.z, &sp2C, &sp30, &sp28) != 0) && (arg0->actor.world.pos.y < sp2C)) {
        return 1;
    }
    return 0;
}

void ObjAqua_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *temp_s0;
    PosRot *temp_s1;
    s32 temp_s0_2;
    s32 phi_s0;
    ObjAqua *this = (ObjAqua *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80ACC2EC);
    temp_s0 = &this->unk_144;
    this->actor.scale.x = 0.0009f;
    this->actor.scale.z = 0.0009f;
    this->actor.scale.y = 0.0005f;
    Collider_InitCylinder(globalCtx, temp_s0);
    Collider_SetCylinder(globalCtx, temp_s0, (Actor *) this, &D_80ACC2C0);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 60.0f);
    this->actor.shape.shadowAlpha = 0x8C;
    this->unk_196 = 0xFF;
    phi_s0 = 0;
    if (func_80ACBA60(this, globalCtx) != 0) {
        temp_s1 = &this->actor.world;
        do {
            EffectSsBubble_Spawn(globalCtx, (Vec3f *) temp_s1, -4.0f, 4.0f, 4.0f, (Rand_ZeroOne() * 0.09f) + 0.03f);
            temp_s0_2 = phi_s0 + 1;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 8);
        func_80ACBDCC(this);
        return;
    }
    func_80ACBC70(this);
}

void ObjAqua_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjAqua *this = (ObjAqua *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
}

void func_80ACBC70(ObjAqua *arg0) {
    arg0->unk_194 = 0xC8;
    arg0->actionFunc = func_80ACBC8C;
}

void func_80ACBC8C(ObjAqua *this, GlobalContext *globalCtx) {
    u16 temp_v0;

    temp_v0 = this->actor.bgCheckFlags;
    if ((temp_v0 & 0x21) != 0) {
        if ((temp_v0 & 1) != 0) {
            func_80ACB7F4(this);
            func_80ACBA10(this);
            Audio_PlayActorSound2((Actor *) this, 0x2920U);
            func_80ACBD34(this);
            return;
        }
        func_80ACB6A0(this);
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x28, 0x2817U);
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((s32) this->unk_194 <= 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_80ACBD34(ObjAqua *arg0) {
    arg0->actionFunc = func_80ACBD48;
}

void func_80ACBD48(ObjAqua *this, GlobalContext *globalCtx) {
    u8 temp_v0;
    u8 temp_v0_2;

    if (((this->actor.params & 1) == 1) && ((s32) this->unk_196 >= 0x5B)) {
        func_80ACB940();
    }
    temp_v0 = (Actor *) this->unk_196;
    if ((s32) temp_v0 >= 6) {
        (Actor *) this->unk_196 = (u8) (temp_v0 - 5);
    } else {
        (Actor *) this->unk_196 = 0U;
    }
    temp_v0_2 = (Actor *) this->shape.shadowAlpha;
    if ((s32) temp_v0_2 >= 3) {
        (Actor *) this->shape.shadowAlpha = temp_v0_2 - 2;
        return;
    }
    Actor_MarkForDeath((Actor *) this);
}

void func_80ACBDCC(ObjAqua *arg0) {
    arg0->unk_194 = 0x28;
    arg0->unk_196 = 0x8C;
    arg0->actionFunc = func_80ACBDFC;
    arg0->actor.gravity = -0.1f;
}

void func_80ACBDFC(ObjAqua *this, GlobalContext *globalCtx) {
    f32 sp2C;
    f32 temp_f2;
    u8 temp_t9;

    this->unk_198 += 0x3E8;
    temp_t9 = (s32) ((f32) this->unk_194 * 3.25f) + 0xA;
    this->unk_196 = temp_t9;
    this->actor.shape.shadowAlpha = temp_t9;
    if ((this->actor.params & 1) == 1) {
        temp_f2 = this->actor.scale.x * 10000.0f;
        sp2C = temp_f2;
        EffectSsBubble_Spawn(globalCtx, (Vec3f *) &this->actor.world, temp_f2 * -0.5f, temp_f2, temp_f2, (Rand_ZeroOne() * 0.1f) + 0.03f);
    }
    if ((s32) this->unk_194 <= 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void ObjAqua_Update(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    s16 temp_v0;
    void (*temp_v0_2)(ObjAqua *, GlobalContext *);
    ObjAqua *this = (ObjAqua *) thisx;

    temp_v0 = this->unk_194;
    if ((s32) temp_v0 > 0) {
        this->unk_194 = temp_v0 - 1;
    }
    this->actionFunc(this, globalCtx);
    if (this->actor.update != 0) {
        temp_v0_2 = this->actionFunc;
        if (func_80ACBC8C == temp_v0_2) {
            Math_Vec3f_StepTo(&this->actor.scale, &D_80ACC308, 0.00006f);
        } else if (func_80ACBD48 == temp_v0_2) {
            Math_Vec3f_StepTo(&this->actor.scale, &D_80ACC314, 0.00095f);
        } else {
            Math_Vec3f_StepTo(&this->actor.scale, &D_80ACC320, 0.0004f);
        }
        this->actor.velocity.y *= 0.9f;
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 12.0f, 4.0f, 0.0f, 5U);
        if (func_80ACBDFC != this->actionFunc) {
            temp_a2 = &this->unk_144;
            sp2C = temp_a2;
            Collider_UpdateCylinder((Actor *) this, temp_a2);
            this->unk_144.dim.radius = (s16) (s32) (this->actor.scale.x * 3000.0f);
            CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
        }
    }
}

void ObjAqua_Draw(Actor *thisx, GlobalContext *globalCtx) {
    s16 sp62;
    s32 sp5C;
    Gfx *sp50;
    s16 sp46;
    Gfx *sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s16 temp_a0_2;
    s32 temp_f8;
    s32 temp_v1;
    u32 phi_v1;
    ObjAqua *this = (ObjAqua *) thisx;

    sp62 = func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000;
    sp5C = (s32) func_80ACBDFC == (s32) this->actionFunc;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v1 = ((s32) (globalCtx->gameplayFrames & 0x7FFFFFFF) * -0xA) & 0x1FF;
    phi_v1 = (u32) temp_v1;
    if (sp5C != 0) {
        phi_v1 = (u32) (temp_v1 >> 1);
    }
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp50 = temp_v0;
    sp50->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, phi_v1, 0x20, 0x80);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFA008080;
    temp_v0_2->words.w1 = this->unk_196 | 0xAAFFFF00;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0x96FF00;
    temp_v0_3->words.w0 = 0xFB000000;
    if (sp5C != 0) {
        temp_f8 = (s32) (Math_SinS(this->unk_198) * 8000.0f);
        temp_a0_2 = (s16) temp_f8;
        sp46 = (s16) temp_f8;
        SysMatrix_InsertZRotation_s(temp_a0_2, 1);
        Matrix_Scale(1.3f, 1.0f, 1.0f, 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) sp46 * -1), 1);
        Matrix_Scale(0.7692308f, 1.0f, 1.0f, 1);
    }
    Matrix_RotateY(sp62, 1U);
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDA380003;
    sp40 = temp_v0_4;
    sp40->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) D_0407D590;
    temp_v0_5->words.w0 = 0xDE000000;
}
