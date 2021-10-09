typedef struct EnKarebaba {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ void (*actionFunc)(EnKarebaba *, GlobalContext *);
    /* 0x18C */ Vec3s unk18C;                       /* inferred */
    /* 0x192 */ char pad192[0x2A];                  /* maybe part of unk18C[8]? */
    /* 0x1BC */ Vec3s unk1BC;                       /* inferred */
    /* 0x1C2 */ char pad1C2[0x2A];                  /* maybe part of unk1BC[8]? */
    /* 0x1EC */ u8 unk1EC;                          /* inferred */
    /* 0x1ED */ char pad1ED[0x1];
    /* 0x1EE */ s16 unk1EE;                         /* inferred */
    /* 0x1F0 */ f32 unk1F0;                         /* inferred */
    /* 0x1F4 */ f32 unk1F4;                         /* inferred */
    /* 0x1F8 */ f32 unk1F8;                         /* inferred */
    /* 0x1FC */ Vec3f unk1FC;                       /* inferred */
    /* 0x208 */ Vec3f unk208;                       /* inferred */
    /* 0x214 */ char pad214[0xC];
    /* 0x220 */ Vec3f unk220;                       /* inferred */
    /* 0x22C */ CollisionPoly *unk22C;              /* inferred */
    /* 0x230 */ ColliderCylinder unk230;            /* inferred */
    /* 0x27C */ ColliderCylinder unk27C;            /* inferred */
} EnKarebaba;                                       /* size = 0x2C8 */

struct _mips2c_stack_EnKarebaba_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnKarebaba_Draw {
    /* 0x00 */ char pad0[0x50];
    /* 0x50 */ Vec3f *sp50;                         /* inferred */
    /* 0x54 */ char pad54[0x4];
    /* 0x58 */ void *sp58;                          /* inferred */
    /* 0x5C */ char pad5C[0x30];                    /* maybe part of sp58[13]? */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ char pad90[0x4];
    /* 0x94 */ s32 sp94;                            /* inferred */
    /* 0x98 */ char pad98[0x8];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_EnKarebaba_Init {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnKarebaba_Update {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ void (*sp2C)(EnKarebaba *, GlobalContext *); /* inferred */
    /* 0x30 */ CollisionCheckContext *sp30;         /* inferred */
    /* 0x34 */ char pad34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808F1374 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808F13FC {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808F152C {};              /* size 0x0 */

struct _mips2c_stack_func_808F155C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F15B0 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808F1648 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F169C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F16FC {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808F1778 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808F1878 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F190C {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808F1A3C {};              /* size 0x0 */

struct _mips2c_stack_func_808F1A58 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad24[0x4];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808F1BF8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F1C84 {
    /* 0x00 */ char pad0[0x68];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad6C[0xC];                     /* maybe part of sp68[4]? */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ char pad84[0x4];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_808F1FAC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F200C {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808F20FC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F21A4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F220C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808F228C {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808F238C {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808F241C {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808F24F8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F254C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F280C {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad34[0xC];                     /* maybe part of sp30[4]? */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad40[0x40];
};                                                  /* size = 0x80 */

? func_800AE2A0(GlobalContext *, ? *, ?, ?);        /* extern */
? func_800B8B84(EnKarebaba *, GlobalContext *, ?);  /* extern */
void func_808F1374(Actor *arg0, GlobalContext *arg1); /* static */
void func_808F13FC(EnKarebaba *arg0, GlobalContext *arg1); /* static */
void func_808F152C(EnKarebaba *arg0);               /* static */
void func_808F155C(EnKarebaba *arg0);               /* static */
void func_808F1648(EnKarebaba *arg0);               /* static */
void func_808F16FC(Actor *arg0);                    /* static */
void func_808F1878(EnKarebaba *arg0);               /* static */
void func_808F1A3C(EnKarebaba *arg0);               /* static */
void func_808F1BF8(EnKarebaba *arg0);               /* static */
void func_808F1FAC(EnKarebaba *arg0);               /* static */
void func_808F20FC(EnKarebaba *arg0, GlobalContext *arg1); /* static */
void func_808F220C(EnKarebaba *arg0);               /* static */
void func_808F238C(EnKarebaba *arg0);               /* static */
void func_808F24F8(Actor *arg0, EnKarebaba *);      /* static */
void func_808F280C(EnKarebaba *arg0, GraphicsContext **arg1); /* static */
extern AnimationHeader D_060002B8;
extern ? D_060010F0;
extern ? D_06001828;
extern SkeletonHeader D_06002A40;
extern ? D_06003070;
static ColliderCylinderInit D_808F2DA0 = {
    {0xC, 0, 9, 0, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0},
    {7, 0x19, 0, {0, 0, 0}},
};
static ColliderCylinderInit D_808F2DCC;             /* type too large by 12; unable to generate initializer */
static s16 D_808F2DEC[6] = {4, 0x19, 0, 0, 0, 0};
static CollisionCheckInfoInit D_808F2DF8 = {1, 0xF, 0x50, 0xFE};
static DamageTable D_808F2E00 = {
    {
        0,
        3,
        1,
        1,
        1,
        1,
        0,
        1,
        2,
        1,
        1,
        0x21,
        0x32,
        0x42,
        1,
        1,
        1,
        2,
        0,
        0x51,
        0,
        0,
        1,
        1,
        1,
        0,
        0,
        0,
        0,
        0,
        0,
        1,
    },
};
static InitChainEntry D_808F2E20[2];                /* unable to generate initializer */
static ? D_808F2E28;                                /* unable to generate initializer */
static u32 D_808F2E2C[5] = {0x6001330, 0x6001628, 0x6001828, 0, 0};

void EnKarebaba_Init(EnKarebaba *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a1_2;
    EnKarebaba *this = (EnKarebaba *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_808F2E20);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 22.0f);
    SkelAnime_Init(globalCtx, &this->unk144, &D_06002A40, &D_060002B8, &this->unk18C, &this->unk1BC, 8);
    temp_a1 = &this->unk27C;
    sp30 = temp_a1;
    Collider_InitAndSetCylinder(globalCtx, temp_a1, (Actor *) this, &D_808F2DA0);
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    temp_a1_2 = &this->unk230;
    sp30 = temp_a1_2;
    Collider_InitAndSetCylinder(globalCtx, temp_a1_2, (Actor *) this, &D_808F2DCC);
    Collider_UpdateCylinder((Actor *) this, temp_a1_2);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_808F2E00, &D_808F2DF8);
    this->unk22C = NULL;
    if (this->actor.params == 2) {
        this->actor.hintId = 2;
    } else {
        this->actor.hintId = 9;
    }
    if (this->actor.params == 0) {
        func_808F155C(this);
        return;
    }
    func_808F1648(this);
}

void EnKarebaba_Destroy(EnKarebaba *this, GlobalContext *globalCtx) {
    EnKarebaba *this = (EnKarebaba *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk27C);
    Collider_DestroyCylinder(globalCtx, &this->unk230);
}

void func_808F1374(Actor *arg0, GlobalContext *arg1) {
    s32 phi_a3;

    if (arg0->unk1EC == 0xA) {
        arg0->unk1EC = 0U;
        arg0->unk1F0 = 0.0f;
        if (arg0->params == 2) {
            phi_a3 = 1;
        } else {
            phi_a3 = 4;
        }
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x1FC), phi_a3, 4, 0.3f, 0.2f);
    }
}

void func_808F13FC(EnKarebaba *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    temp_v0 = arg0->actor.colChkInfo.damageEffect;
    if (temp_v0 == 2) {
        arg0->unk1EC = 0;
        arg0->unk1F4 = 0.75f;
        goto block_8;
    }
    if (temp_v0 == 4) {
        arg0->unk1F4 = 0.75f;
        arg0->unk1EC = 0x14;
        arg0->unk1F0 = 3.0f;
        Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, (f32) arg0->unk27C.info.bumper.hitPos.x, (f32) arg0->unk27C.info.bumper.hitPos.y, (f32) arg0->unk27C.info.bumper.hitPos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 3);
        return;
    }
    if (temp_v0 == 3) {
        arg0->unk1EC = 0xA;
        arg0->unk1F4 = 0.75f;
        arg0->unk1F0 = 1.0f;
        arg0->unk1F8 = 1.125f;
        return;
    }
    if (temp_v0 == 5) {
        arg0->unk1EC = 0x1F;
        arg0->unk1F4 = 0.75f;
block_8:
        arg0->unk1F0 = 3.0f;
    }
}

void func_808F152C(EnKarebaba *arg0) {
    arg0->unk27C.dim.radius = 7;
    arg0->unk27C.dim.height = 0x19;
    arg0->unk27C.base.colType = 0xC;
    arg0->unk27C.base.acFlags |= 4;
    arg0->unk230.dim.height = 0x19;
}

void func_808F155C(Actor *arg0) {
    Actor_SetScale(arg0, 0.0f);
    arg0->shape.rot.x = -0x4000;
    arg0->unk1EE = 0;
    arg0->world.pos.y = arg0->home.pos.y + 14.0f;
    arg0->unk188 = func_808F15B0;
}

void func_808F15B0(EnKarebaba *this, GlobalContext *globalCtx) {
    f32 sp1C;
    f32 temp_f0;

    this->unk1EE += 1;
    temp_f0 = (f32) this->unk1EE * 0.05f;
    sp1C = temp_f0;
    Actor_SetScale((Actor *) this, 0.005f * temp_f0);
    this->actor.world.pos.y = this->actor.home.pos.y + (14.0f * temp_f0);
    if (this->unk1EE == 0x14) {
        func_808F1648(this);
    }
}

void func_808F1648(Actor *arg0) {
    Actor_SetScale(arg0, 0.005f);
    arg0->shape.rot.x = -0x4000;
    arg0->unk188 = func_808F169C;
    arg0->world.pos.y = arg0->home.pos.y + 14.0f;
}

void func_808F169C(EnKarebaba *this, GlobalContext *globalCtx) {
    if ((this->actor.xzDistToPlayer < 200.0f) && (fabsf(this->actor.yDistToPlayer) < 30.0f)) {
        func_808F16FC();
    }
}

void func_808F16FC(Actor *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_060002B8, 4.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060002B8), (u8) 0, -3.0f);
    Audio_PlayActorSound2(arg0, 0x39E2U);
    arg0->unk188 = func_808F1778;
}

void func_808F1778(EnKarebaba *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    SkelAnime_FrameUpdateMatrix(&this->unk144);
    if ((Math_StepToF((f32 *) &this->actor.scale, 0.01f, 0.0005f) != 0) && (this->actor.params == 2)) {
        func_808F1878(this);
    }
    temp_f0 = this->actor.scale.x;
    this->actor.scale.z = temp_f0;
    this->actor.scale.y = temp_f0;
    if ((this->actor.params == 1) && (Math_StepToF(&this->actor.world.pos.y, this->actor.home.pos.y + 60.0f, 5.0f) != 0)) {
        func_808F1878(this);
    }
    this->actor.shape.rot.y += 0x1999;
    EffectSsHahen_SpawnBurst(globalCtx, (Vec3f *) &this->actor.home, 3.0f, 0, (s16) 0xC, (s16) 5, (s16) 1, (s16) -1, (s16) 0xA, NULL);
}

void func_808F1878(Actor *arg0) {
    s16 phi_v0;

    if (func_808F1A58 != arg0->unk188) {
        Actor_SetScale(arg0, 0.01f);
        arg0->unk290 = 6;
        arg0->unk28D = (u8) (arg0->unk28D & 0xFFFB);
        arg0->unk2BC = 0xF;
        if (arg0->params == 1) {
            arg0->unk2BE = 0x50;
            phi_v0 = 0x50;
        } else {
            arg0->unk2BE = 0x23;
            phi_v0 = 0x23;
        }
        arg0->unk272 = phi_v0;
    }
    arg0->unk1EE = 0x28;
    arg0->unk188 = func_808F190C;
}

void func_808F190C(EnKarebaba *this, GlobalContext *globalCtx) {
    Actor *sp24;
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    s16 temp_v1;

    temp_a0 = &this->unk144;
    sp20 = temp_a0;
    sp24 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v1 = this->unk1EE;
    if (temp_v1 != 0) {
        this->unk1EE = temp_v1 - 1;
    }
    if ((func_801378B8(sp20, 0.0f) != 0) || (func_801378B8(sp20, 12.0f) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x3860U);
    }
    if ((this->unk27C.base.acFlags & 2) != 0) {
        func_808F13FC(this, globalCtx);
        if (this->actor.params == 1) {
            func_808F1BF8(this);
        } else {
            func_808F1FAC(this);
        }
        Enemy_StartFinishingBlow(globalCtx, (Actor *) this);
        return;
    }
    if (Math_Vec3f_DistXZ((Vec3f *) &this->actor.home, (Vec3f *) &sp24->world) > 240.0f) {
        func_808F220C(this);
        return;
    }
    if ((this->unk1EE == 0) && (this->actor.params == 1)) {
        func_808F1A3C(this);
    }
}

void func_808F1A3C(EnKarebaba *arg0) {
    arg0->unk1EE = 0x28;
    arg0->actionFunc = func_808F1A58;
}

void func_808F1A58(EnKarebaba *this, GlobalContext *globalCtx) {
    f32 sp28;
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    s16 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 phi_a0;
    s32 phi_v0;

    temp_v0 = this->unk1EE;
    temp_a0 = &this->unk144;
    if (temp_v0 != 0) {
        this->unk1EE = temp_v0 - 1;
    }
    sp20 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if ((func_801378B8(temp_a0, 0.0f) != 0) || (func_801378B8(temp_a0, 12.0f) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x3860U);
    }
    temp_v0_2 = 0x14 - this->unk1EE;
    if (temp_v0_2 < 0) {
        phi_a0 = -temp_v0_2;
    } else {
        phi_a0 = temp_v0_2;
    }
    temp_v0_3 = 0x14 - phi_a0;
    phi_v0 = temp_v0_3;
    if (temp_v0_3 >= 0xB) {
        phi_v0 = 0xA;
    }
    this->actor.shape.rot.x = 0xC000 - (phi_v0 << 8);
    this->unk230.dim.radius = *D_808F2DEC + (phi_v0 * 2);
    this->actor.shape.rot.y += phi_v0 * 0x2C0;
    this->actor.world.pos.y = (Math_SinS(this->actor.shape.rot.x) * -60.0f) + this->actor.home.pos.y;
    sp28 = Math_CosS(this->actor.shape.rot.x) * 60.0f;
    this->actor.world.pos.x = (Math_SinS(this->actor.shape.rot.y) * sp28) + this->actor.home.pos.x;
    this->actor.world.pos.z = (Math_CosS(this->actor.shape.rot.y) * sp28) + this->actor.home.pos.z;
    if ((this->unk27C.base.acFlags & 2) != 0) {
        func_808F13FC(this, globalCtx);
        func_808F1BF8(this);
        Enemy_StartFinishingBlow(globalCtx, (Actor *) this);
        return;
    }
    if (this->unk1EE == 0) {
        func_808F1878(this);
    }
}

void func_808F1BF8(Actor *arg0) {
    if (arg0->unk1EC != 0xA) {
        arg0->unk1EE = 0;
        arg0->world.rot.y = arg0->shape.rot.y + 0x8000;
        arg0->gravity = -0.8f;
        arg0->velocity.y = 4.0f;
        arg0->speedXZ = 3.0f;
    } else {
        arg0->unk1EE = 3;
    }
    Audio_PlayActorSound2(arg0, 0x3862U);
    arg0->unk188 = func_808F1C84;
    arg0->flags |= 0x30;
}

void func_808F1C84(EnKarebaba *this, GlobalContext *globalCtx) {
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp68;
    PosRot *temp_s0;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    s16 temp_v0;
    s32 temp_s0_2;
    u16 temp_v0_2;
    s32 phi_s0;

    if (this->unk1EC == 0xA) {
        this->unk1EE += -1;
        if (this->unk1EE == 0) {
            this->actor.world.rot.y = this->actor.shape.rot.y + 0x8000;
            this->actor.speedXZ = 3.0f;
            this->actor.gravity = -0.8f;
            this->actor.velocity.y = 4.0f;
            func_808F1374((Actor *) this, globalCtx);
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return;
    }
    Math_StepToF(&this->actor.speedXZ, 0.0f, 0.1f);
    temp_v0 = this->unk1EE;
    if (temp_v0 == 0) {
        Math_ScaledStepToS((s16 *) &this->actor.shape, 0x4800, 0x71C);
        temp_s0 = &this->actor.world;
        EffectSsHahen_SpawnBurst(globalCtx, (Vec3f *) temp_s0, 3.0f, 0, (s16) 0xC, (s16) 5, (s16) 1, (s16) -1, (s16) 0xA, NULL);
        if ((this->actor.scale.x > 0.005f) && ((temp_v0_2 = this->actor.bgCheckFlags, ((temp_v0_2 & 2) != 0)) || ((temp_v0_2 & 8) != 0))) {
            this->actor.scale.z = 0.0f;
            this->actor.scale.y = 0.0f;
            this->actor.scale.x = 0.0f;
            this->actor.speedXZ = 0.0f;
            this->actor.flags &= -6;
            EffectSsHahen_SpawnBurst(globalCtx, (Vec3f *) temp_s0, 3.0f, 0, (s16) 0xC, (s16) 5, (s16) 0xF, (s16) -1, (s16) 0xA, NULL);
        }
        if ((this->actor.bgCheckFlags & 2) != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x387BU);
            this->unk1EE = 1;
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return;
    }
    if (temp_v0 == 1) {
        Math_Vec3f_Copy((Vec3f *) &sp78, (Vec3f *) &this->actor.world);
        temp_f24 = Math_SinS(this->actor.shape.rot.x) * 20.0f;
        sp68 = Math_CosS(this->actor.shape.rot.x);
        temp_f20 = Math_SinS(this->actor.shape.rot.y) * (-20.0f * sp68);
        sp68 = Math_CosS(this->actor.shape.rot.x);
        temp_f22 = Math_CosS(this->actor.shape.rot.y) * (-20.0f * sp68);
        phi_s0 = 0;
        do {
            func_800B1210(globalCtx, (Vec3f *) &sp78, &D_801D15B0, &D_801D15B0, (s16) 0x1F4, (s16) 0x32);
            temp_s0_2 = phi_s0 + 1;
            sp78 += temp_f20;
            sp7C += temp_f24;
            sp80 += temp_f22;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 4);
        func_800B1210(globalCtx, (Vec3f *) &this->actor.home, &D_801D15B0, &D_801D15B0, (s16) 0x1F4, (s16) 0x64);
        func_808F20FC(this, globalCtx);
    }
}

void func_808F1FAC(Actor *arg0) {
    u32 temp_t7;
    u32 temp_t9;

    Audio_PlayActorSound2(arg0, 0x3862U);
    temp_t7 = arg0->flags | 0x30;
    temp_t9 = temp_t7 & ~1;
    arg0->flags = temp_t7;
    arg0->flags = temp_t9;
    if (arg0->unk1EC == 0xA) {
        arg0->unk1EE = 3;
    }
    arg0->unk188 = func_808F200C;
}

void func_808F200C(EnKarebaba *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    if (this->unk1EC == 0xA) {
        this->unk1EE += -1;
        if (this->unk1EE == 0) {
            func_808F1374((Actor *) this, globalCtx);
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    if (Math_StepToF((f32 *) &this->actor.scale, 0.0f, 0.0005f) != 0) {
        Item_DropCollectible(globalCtx, (Vec3f *) &this->actor.world, 0xCU);
        func_808F238C(this);
    } else {
        EffectSsHahen_SpawnBurst(globalCtx, (Vec3f *) &this->actor.world, 3.0f, 0, (s16) 0xC, (s16) 5, (s16) 1, (s16) -1, (s16) 0xA, NULL);
        Math_StepToF(&this->actor.world.pos.y, this->actor.home.pos.y, 1.0f);
    }
    temp_f0 = this->actor.scale.x;
    this->actor.scale.y = temp_f0;
    this->actor.scale.z = temp_f0;
}

void func_808F20FC(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;

    temp_a0 = arg0;
    arg0 = arg0;
    Actor_SetScale(temp_a0, 0.03f);
    arg0->shape.rot.x += -0x4000;
    arg0->shape.yOffset = 1000.0f;
    arg0->gravity = 0.0f;
    arg0->velocity.y = 0.0f;
    arg0->shape.shadowScale = 3.0f;
    func_800BC154(arg1, arg1 + 0x1CA0, arg0, 8U);
    arg0->unk1EE = 0xC8;
    arg0->flags &= -0x21;
    arg0->unk188 = func_808F21A4;
    arg0->unk1F0 = 0.0f;
}

void func_808F21A4(EnKarebaba *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk1EE;
    if (temp_v0 != 0) {
        this->unk1EE = temp_v0 - 1;
    }
    if ((Actor_HasParent((Actor *) this, globalCtx) != 0) || (this->unk1EE == 0)) {
        func_808F238C(this);
        return;
    }
    func_800B8B84(this, globalCtx, 0x19);
}

void func_808F220C(EnKarebaba *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_060002B8, -3.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060002B8), 0.0f, (u8) 2, -3.0f);
    func_808F152C(arg0);
    arg0->actionFunc = func_808F228C;
}

void func_808F228C(EnKarebaba *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    SkelAnime_FrameUpdateMatrix(&this->unk144);
    if ((Math_StepToF((f32 *) &this->actor.scale, 0.005f, 0.0005f) != 0) && (this->actor.params == 2)) {
        func_808F1648(this);
    }
    temp_f0 = this->actor.scale.x;
    this->actor.scale.z = temp_f0;
    this->actor.scale.y = temp_f0;
    if ((this->actor.params == 1) && (Math_StepToF(&this->actor.world.pos.y, this->actor.home.pos.y + 14.0f, 5.0f) != 0)) {
        func_808F1648(this);
    }
    this->actor.shape.rot.y += 0x1999;
    EffectSsHahen_SpawnBurst(globalCtx, (Vec3f *) &this->actor.home, 3.0f, 0, (s16) 0xC, (s16) 5, (s16) 1, (s16) -1, (s16) 0xA, NULL);
}

void func_808F238C(EnKarebaba *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_060002B8, 0.0f, 0.0f, 0.0f, (u8) 2, 0.0f);
    func_808F152C(arg0);
    arg0->actor.shape.rot.x = -0x4000;
    arg0->unk1EE = 0xC8;
    arg0->actor.parent = NULL;
    arg0->actor.shape.shadowScale = 0.0f;
    arg0->unk1F0 = 0.0f;
    Math_Vec3f_Copy((Vec3f *) &arg0->actor.world, (Vec3f *) &arg0->actor.home);
    arg0->actionFunc = func_808F254C;
}

void func_808F241C(EnKarebaba *this, GlobalContext *globalCtx) {
    f32 sp1C;
    EnKarebaba *temp_a0;
    EnKarebaba *temp_a2;
    f32 temp_f0;
    s16 temp_f4;
    u32 temp_t1;
    EnKarebaba *phi_a2;

    temp_a0 = this;
    this->unk1EE += 1;
    temp_f4 = this->unk1EE;
    this = this;
    temp_f0 = (f32) temp_f4 * 0.05f;
    sp1C = temp_f0;
    Actor_SetScale((Actor *) temp_a0, 0.005f * temp_f0);
    temp_a2 = this;
    temp_a2->actor.world.pos.y = temp_a2->actor.home.pos.y + (14.0f * temp_f0);
    phi_a2 = temp_a2;
    if (temp_a2->unk1EE == 0x14) {
        temp_t1 = temp_a2->actor.flags & ~0x10;
        temp_a2->actor.flags = temp_t1;
        temp_a2->actor.flags = temp_t1 | 5;
        if (temp_a2->actor.params == 1) {
            this = temp_a2;
            func_800BC154(globalCtx, &globalCtx->actorCtx, (Actor *) temp_a2, 5U);
            phi_a2 = this;
        }
        func_808F1648(phi_a2);
    }
}

void func_808F24F8(Actor *arg0) {
    arg0->shape.yOffset = 0.0f;
    arg0->shape.shadowScale = 22.0f;
    arg0->unk270 = (s16) *D_808F2DEC;
    Actor_SetScale(arg0, 0.0f);
    arg0->unk188 = func_808F241C;
}

void func_808F254C(EnKarebaba *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_a0 = &this->unk144;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v0 = this->unk1EE;
    if (temp_v0 != 0) {
        this->unk1EE = temp_v0 - 1;
    }
    if (this->unk1EE == 0) {
        func_808F24F8((Actor *) this, this);
    }
}

void EnKarebaba_Update(EnKarebaba *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp30;
    void (*sp2C)(EnKarebaba *, GlobalContext *);
    CollisionCheckContext *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    void (*temp_v0)(EnKarebaba *, GlobalContext *);
    void (*temp_v0_2)(EnKarebaba *, GlobalContext *);
    EnKarebaba *this = (EnKarebaba *) thisx;

    this->actionFunc(this, globalCtx);
    if (this->unk1F0 > 0.0f) {
        if (this->unk1EC != 0xA) {
            Math_StepToF(&this->unk1F0, 0.0f, 0.05f);
            temp_f0 = (this->unk1F0 + 1.0f) * 0.375f;
            this->unk1F4 = temp_f0;
            if (temp_f0 > 0.75f) {
                this->unk1F4 = 0.75f;
            } else {
                this->unk1F4 = this->unk1F4;
            }
        } else if (Math_StepToF(&this->unk1F8, 0.75f, 0.01875f) == 0) {
            func_800B9010((Actor *) this, 0x20B2U);
        }
    }
    temp_v0 = this->actionFunc;
    if (func_808F254C != temp_v0) {
        sp2C = func_808F1C84;
        if (func_808F1C84 == temp_v0) {
            Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
            Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, 15.0f, 10.0f, 5U);
        } else {
            Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
            if (this->unk22C == 0) {
                this->unk22C = this->actor.floorPoly;
            }
        }
        temp_v0_2 = this->actionFunc;
        if ((sp2C != temp_v0_2) && (func_808F200C != temp_v0_2) && (func_808F21A4 != temp_v0_2)) {
            if ((func_808F241C != temp_v0_2) && (func_808F15B0 != temp_v0_2)) {
                temp_a1 = &globalCtx->colChkCtx;
                sp30 = temp_a1;
                CollisionCheck_SetAT(globalCtx, temp_a1, (Collider *) &this->unk230);
                CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) &this->unk27C);
            }
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk230);
            Actor_SetHeight((Actor *) this, (this->actor.scale.x * 10.0f) / 0.01f);
            temp_f2 = this->actor.focus.pos.y;
            temp_f0_2 = this->actor.home.pos.y + 40.0f;
            this->actor.focus.pos.x = this->actor.home.pos.x;
            if (temp_f0_2 < temp_f2) {
                this->actor.focus.pos.y = temp_f0_2;
            } else {
                this->actor.focus.pos.y = temp_f2;
            }
            this->actor.focus.pos.z = this->actor.home.pos.z;
        }
    }
}

void func_808F280C(EnKarebaba *arg0, GraphicsContext **arg1) {
    ? sp40;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    temp_a0 = *arg1;
    temp_s0 = temp_a0;
    func_8012C448(temp_a0);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w1 = 0xFF;
    temp_v0->words.w0 = 0xFA000000;
    func_800C0094(arg0->unk22C, arg0->actor.home.pos.x, arg0->actor.home.pos.y, arg0->actor.home.pos.z, (MtxF *) &sp40);
    SysMatrix_InsertMatrix((MtxF *) &sp40, 0);
    Matrix_Scale(0.15f, 1.0f, 0.15f, 1);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp30 = temp_v0_2;
    sp30->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) D_04076BC0;
    temp_v0_3->words.w0 = 0xDE000000;
}

void EnKarebaba_Draw(EnKarebaba *this, GlobalContext *globalCtx) {
    s32 sp94;
    f32 sp8C;
    void *sp58;
    Vec3f *sp50;
    Gfx *temp_s0;
    Gfx *temp_s0_2;
    Gfx *temp_s0_3;
    Gfx *temp_s0_4;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s5;
    Vec3f *temp_a0_2;
    Vec3f *temp_s1;
    s16 temp_v0_2;
    void (*temp_v0)(EnKarebaba *, GlobalContext *);
    void (*temp_v0_3)(EnKarebaba *, GlobalContext *);
    u32 *phi_s2;
    Vec3f *phi_s1;
    s32 phi_s3;
    s16 phi_a3;
    EnKarebaba *this = (EnKarebaba *) thisx;

    sp8C = 0.01f;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s5 = temp_a0;
    func_8012C28C(temp_a0);
    temp_a0_2 = &this->unk1FC;
    sp50 = temp_a0_2;
    Math_Vec3f_Copy(temp_a0_2, (Vec3f *) &this->actor.world);
    temp_v0 = this->actionFunc;
    if (func_808F21A4 == temp_v0) {
        temp_v0_2 = this->unk1EE;
        if (((s32) temp_v0_2 >= 0x29) || ((temp_v0_2 & 1) != 0)) {
            SysMatrix_InsertTranslation(0.0f, 0.0f, 200.0f, 1);
            temp_s0 = temp_s5->polyOpa.p;
            temp_s5->polyOpa.p = temp_s0 + 8;
            temp_s0->words.w0 = 0xDA380003;
            temp_s0->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v1 = temp_s5->polyOpa.p;
            temp_s5->polyOpa.p = temp_v1 + 8;
            temp_v1->words.w0 = 0xDE000000;
            temp_v1->words.w1 = (u32) &D_06003070;
        }
    } else if (func_808F254C != temp_v0) {
        func_800AE2A0(globalCtx, &D_808F2E28, 1, 2);
        SkelAnime_Draw(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, NULL, NULL, NULL);
        SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
        temp_v0_3 = this->actionFunc;
        if ((func_808F241C == temp_v0_3) || (func_808F200C == temp_v0_3) || (func_808F15B0 == temp_v0_3)) {
            sp8C = (f32) this->unk1EE * 0.0005f;
        }
        Matrix_Scale(sp8C, sp8C, sp8C, 1);
        SysMatrix_InsertRotation(this->actor.shape.rot.x, this->actor.shape.rot.y, 0, 1);
        if (this->actor.params == 2) {
            sp94 = 1;
        } else if (func_808F1C84 == this->actionFunc) {
            sp94 = 2;
        } else {
            sp94 = 3;
        }
        phi_s2 = D_808F2E2C;
        phi_s3 = 0;
        if (sp94 > 0) {
            sp58 = (sp94 * 0xC) + this + 0x208;
            phi_s1 = &this->unk208;
            do {
                SysMatrix_InsertTranslation(0.0f, 0.0f, -2000.0f, 1);
                temp_s0_2 = temp_s5->polyOpa.p;
                temp_s5->polyOpa.p = temp_s0_2 + 8;
                temp_s0_2->words.w0 = 0xDA380003;
                temp_s0_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                temp_v1_2 = temp_s5->polyOpa.p;
                temp_s5->polyOpa.p = temp_v1_2 + 8;
                temp_v1_2->words.w0 = 0xDE000000;
                temp_v1_2->words.w1 = *phi_s2;
                SysMatrix_GetStateTranslation(phi_s1);
                if ((phi_s3 == 0) && (func_808F1C84 == this->actionFunc)) {
                    SysMatrix_GetStateTranslation((Vec3f *) &this->actor.focus);
                }
                temp_s1 = phi_s1 + 0xC;
                phi_s2 += 4;
                phi_s1 = temp_s1;
                phi_s3 += 0xC;
            } while (temp_s1 != sp58);
        }
        func_800AE5A0(globalCtx);
    }
    func_800AE2A0(globalCtx, &D_808F2E28, 1, 2);
    SysMatrix_InsertTranslation(this->actor.home.pos.x, this->actor.home.pos.y, this->actor.home.pos.z, 0);
    if (func_808F15B0 != this->actionFunc) {
        sp8C = 0.01f;
    }
    Matrix_Scale(sp8C, sp8C, sp8C, 1);
    Matrix_RotateY(this->actor.home.rot.y, 1U);
    temp_s0_3 = temp_s5->polyOpa.p;
    temp_s5->polyOpa.p = temp_s0_3 + 8;
    temp_s0_3->words.w0 = 0xDA380003;
    temp_s0_3->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v1_3 = temp_s5->polyOpa.p;
    temp_s5->polyOpa.p = temp_v1_3 + 8;
    temp_v1_3->words.w0 = 0xDE000000;
    temp_v1_3->words.w1 = (u32) &D_060010F0;
    if (func_808F1C84 == this->actionFunc) {
        SysMatrix_InsertRotation(-0x4000, (s16) (this->actor.shape.rot.y - this->actor.home.rot.y), 0, 1);
        temp_s0_4 = temp_s5->polyOpa.p;
        temp_s5->polyOpa.p = temp_s0_4 + 8;
        temp_s0_4->words.w0 = 0xDA380003;
        temp_s0_4->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v1_4 = temp_s5->polyOpa.p;
        temp_s5->polyOpa.p = temp_v1_4 + 8;
        temp_v1_4->words.w0 = 0xDE000000;
        temp_v1_4->words.w1 = (u32) &D_06001828;
        SysMatrix_GetStateTranslation(&this->unk220);
    }
    func_800AE5A0(globalCtx);
    phi_a3 = 4;
    if (this->actor.params == 2) {
        phi_a3 = 1;
    }
    func_800BE680(globalCtx, (Actor *) this, (Vec3f []) sp50, phi_a3, this->unk1F4, this->unk1F8, this->unk1F0, (u8) (s32) this->unk1EC);
    if (this->unk22C != 0) {
        func_808F280C(this, (GraphicsContext **) globalCtx);
    }
}
