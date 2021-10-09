typedef struct EnElforg {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ Vec3s unk188;                       /* inferred */
    /* 0x18E */ char pad18E[0x36];                  /* maybe part of unk188[10]? */
    /* 0x1C4 */ ColliderCylinder unk1C4;            /* inferred */
    /* 0x210 */ void *unk210;                       /* inferred */
    /* 0x214 */ u16 unk214;                         /* inferred */
    /* 0x216 */ s16 unk216;                         /* inferred */
    /* 0x218 */ s16 unk218;                         /* inferred */
    /* 0x21A */ char pad21A[0x2];
    /* 0x21C */ s32 unk21C;                         /* inferred */
    /* 0x220 */ s32 unk220;                         /* inferred */
    /* 0x224 */ f32 unk224;                         /* inferred */
    /* 0x228 */ f32 unk228;                         /* inferred */
    /* 0x22C */ void (*actionFunc)(EnElforg *, GlobalContext *);
} EnElforg;                                         /* size = 0x230 */

struct _mips2c_stack_EnElforg_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnElforg_Draw {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ GraphicsContext *sp34;               /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnElforg_Init {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ ColliderCylinder *sp34;              /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnElforg_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ACC470 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80ACC7E4 {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80ACC8D4 {};              /* size 0x0 */

struct _mips2c_stack_func_80ACC934 {};              /* size 0x0 */

struct _mips2c_stack_func_80ACC994 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80ACCAC0 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80ACCBB8 {};              /* size 0x0 */

struct _mips2c_stack_func_80ACCBD0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80ACCC98 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ s16 sp34;                            /* inferred */
    /* 0x36 */ s16 sp36;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ Actor *sp3C;                         /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80ACCE4C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ACCEB0 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ PosRot *sp20;                        /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80ACD088 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80ACD164 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ACD1B0 {};              /* size 0x0 */

struct _mips2c_stack_func_80ACD1F0 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80ACD2E4 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ Actor *sp34;                         /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80ACD59C {};              /* size 0x0 */

struct _mips2c_stack_func_80ACD610 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ACD6A8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ACD6EC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80ACD878 {};              /* size 0x0 */

s32 func_8010A074(GlobalContext *);                 /* extern */
void func_80ACC470(EnElforg *arg0);                 /* static */
void func_80ACC7E4(EnElforg *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_80ACC8D4(Actor *arg0, PosRot *arg1);      /* static */
void func_80ACC934(Actor *arg0);                    /* static */
void func_80ACC994(Actor *arg0, PosRot *arg1);      /* static */
void func_80ACCAC0(Actor *arg0, PosRot *arg1);      /* static */
void func_80ACCBB8(EnElforg *arg0, GlobalContext *arg1); /* static */
void func_80ACCBD0(EnElforg *arg0, GlobalContext *arg1); /* static */
void func_80ACCC98(EnElforg *arg0, GlobalContext *arg1); /* static */
void func_80ACCE4C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80ACCEB0(EnElforg *arg0, GlobalContext *arg1); /* static */
void func_80ACD088(EnElforg *arg0, GlobalContext *arg1); /* static */
void func_80ACD164(Actor *arg0);                    /* static */
void func_80ACD1B0(EnElforg *arg0, GlobalContext *arg1); /* static */
void func_80ACD1F0(EnElforg *arg0, GlobalContext *arg1); /* static */
void func_80ACD2E4(EnElforg *arg0, GlobalContext *arg1); /* static */
void *func_80ACD59C(void *arg0, void *arg1);        /* static */
void func_80ACD610(Actor *arg0, GlobalContext *arg1); /* static */
void func_80ACD6A8(EnElforg *arg0, GlobalContext *arg1); /* static */
void func_80ACD6EC(EnElforg *arg0, GlobalContext *arg1); /* static */
s32 func_80ACD878(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor, Gfx **gfx); /* static */
extern void D_0402C818;
extern void D_0402C890;
extern void D_0402C980;
extern void D_0402C9F8;
extern FlexSkeletonHeader D_0402CA98;
static ColliderCylinderInit D_80ACDA30 = {
    {0xA, 0, 9, 9, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0},
    {0x10, 0x20, 0, {0, 0, 0}},
};
static Vec3f D_80ACDA5C = {0.0f, -0.05f, 0.0f};
static Vec3f D_80ACDA68 = {0.0f, -0.025f, 0.0f};
static ? D_80ACDA74;                                /* unable to generate initializer */
static ? D_80ACDA88;                                /* unable to generate initializer */

void func_80ACC470(EnElforg *arg0) {
    s32 temp_f6;
    s32 temp_t9;

    arg0->actor.speedXZ = 1.0f;
    arg0->unk224 = 1.0f;
    arg0->actor.velocity.y = 0.0f;
    temp_f6 = (s32) randPlusMinusPoint5Scaled(65536.0f);
    arg0->unk21C = 0;
    arg0->actor.world.rot.y = (s16) temp_f6;
    temp_t9 = (s32) Rand_ZeroFloat(100.0f);
    arg0->actor.shape.yOffset = 0.0f;
    arg0->unk220 = temp_t9;
    arg0->unk144.animCurrentFrame = (f32) (s32) Rand_ZeroFloat(5.0f);
}

void EnElforg_Init(EnElforg *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp34;
    ColliderCylinder *temp_a1;
    Vec3s *temp_v0;
    s16 temp_v0_2;
    s32 temp_t8;
    s32 temp_t8_2;
    EnElforg *this = (EnElforg *) thisx;

    Actor_SetScale((Actor *) this, 0.01f);
    this->unk214 = 0;
    this->unk216 = 0;
    temp_v0 = &this->unk188;
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_0402CA98, (AnimationHeader *) &D_0402B494, temp_v0, temp_v0, 0xA);
    this->unk144.animPlaybackSpeed = 1.0f;
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    temp_v0_2 = this->actor.params;
    this->actor.shape.shadowAlpha = 0xFF;
    temp_t8 = temp_v0_2 & 0xF;
    switch (temp_t8) {                              /* switch 1 */
    case 3:                                         /* switch 1 */
        if ((gSaveContext.weekEventReg[8] & 0x80) != 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
    case 1:                                         /* switch 1 */
    case 2:                                         /* switch 1 */
    case 6:                                         /* switch 1 */
    case 8:                                         /* switch 1 */
block_8:
        if (func_8010A074(globalCtx) != 0) {
            this->unk218 = gSaveContext.unk_48C8 + 1;
        } else {
            this->unk218 = (s16) ((s32) (this->actor.params & 0x1C0) >> 6);
        }
        temp_t8_2 = this->actor.params & 0xF;
        switch (temp_t8_2) {                        /* switch 2 */
        case 1:                                     /* switch 2 */
            func_80ACC470(this);
            this->actionFunc = func_80ACCEB0;
            this->unk224 = Rand_ZeroFloat(2.0f) + 1.0f;
            this->unk228 = Rand_ZeroFloat(100.0f) + 50.0f;
            break;
        case 8:                                     /* switch 2 */
            func_80ACC470(this);
            this->actionFunc = func_80ACCC98;
            this->unk220 = 0x3C;
            break;
        case 2:                                     /* switch 2 */
            this->unk21C = 0;
            this->actionFunc = func_80ACCBD0;
            break;
        case 4:                                     /* switch 2 */
            this->actionFunc = func_80ACD6A8;
            func_80ACD6A8(this, globalCtx);
            this->actor.draw = NULL;
            break;
        case 5:                                     /* switch 2 */
            this->actionFunc = func_80ACD6EC;
            this->actor.draw = NULL;
            temp_a1 = &this->unk1C4;
            sp34 = temp_a1;
            Collider_InitAndSetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80ACDA30);
            Collider_UpdateCylinder((Actor *) this, temp_a1);
            break;
        default:                                    /* switch 2 */
            func_80ACC470(this);
            this->actionFunc = func_80ACD2E4;
            break;
        }
        this->actor.shape.rot.y = 0;
        return;
    case 7:                                         /* switch 1 */
        if (Actor_GetCollectibleFlag(globalCtx, (s32) (temp_v0_2 & 0xFE00) >> 9) != 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        goto block_8;
    default:                                        /* switch 1 */
        if (Flags_GetSwitch(globalCtx, (s32) (temp_v0_2 & 0xFE00) >> 9) != 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        goto block_8;
    }
}

void EnElforg_Destroy(EnElforg *this, GlobalContext *globalCtx) {
    EnElforg *this = (EnElforg *) thisx;
    if ((this->actor.params & 0xF) == 5) {
        Collider_DestroyCylinder(globalCtx, &this->unk1C4);
    }
}

void func_80ACC7E4(EnElforg *arg0, GlobalContext *arg1, s32 arg2) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    s16 temp_v0;
    s32 temp_v0_2;
    s16 phi_v1;

    sp3C = randPlusMinusPoint5Scaled(6.0f) + arg0->actor.world.pos.x;
    sp40 = (Rand_ZeroOne() * 6.0f) + arg0->actor.world.pos.y + (arg0->actor.shape.yOffset * arg0->actor.scale.y);
    sp44 = randPlusMinusPoint5Scaled(6.0f) + arg0->actor.world.pos.z;
    temp_v0 = arg0->unk218;
    if (((s32) temp_v0 < 0) || (phi_v1 = temp_v0, (((s32) temp_v0 < 5) == 0))) {
        phi_v1 = 0;
    }
    temp_v0_2 = phi_v1 * 4;
    EffectSsKiraKira_SpawnDispersed(arg1, (Vec3f *) &sp3C, &D_80ACDA5C, &D_80ACDA68, temp_v0_2 + &D_80ACDA74, temp_v0_2 + &D_80ACDA88, (s16) 0x3E8, arg2);
}

void func_80ACC8D4(Actor *arg0, PosRot *arg1) {
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;

    temp_f12 = arg1->pos.y;
    temp_f14 = arg0->world.pos.y;
    temp_f16 = arg0->speedXZ;
    temp_f2 = temp_f12 - temp_f14;
    if (fabsf(temp_f2) < temp_f16) {
        arg0->world.pos.y = temp_f12;
        return;
    }
    if (temp_f2 > 0.0f) {
        arg0->world.pos.y = temp_f14 + temp_f16;
        return;
    }
    arg0->world.pos.y = temp_f14 - temp_f16;
}

void func_80ACC934(Actor *arg0) {
    f32 temp_f0;
    f32 temp_f2;

    temp_f0 = arg0->unk224;
    temp_f2 = arg0->speedXZ;
    if (temp_f0 < temp_f2) {
        arg0->speedXZ = temp_f2 * 0.9f;
        return;
    }
    if (temp_f2 < (temp_f0 - 0.1f)) {
        arg0->speedXZ = temp_f2 + 0.1f;
        return;
    }
    arg0->speedXZ = temp_f0;
}

void func_80ACC994(Actor *arg0, PosRot *arg1) {
    f32 sp30;
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    s32 phi_v0;

    arg0->shape.yOffset += 100.0f * Math_SinS((s16) (arg0->unk21C << 9));
    func_80ACC8D4(arg0, arg1);
    temp_f2 = arg0->world.pos.x - arg1->pos.x;
    temp_f16 = arg0->world.pos.z - arg1->pos.z;
    sp2C = temp_f2;
    sp30 = temp_f16;
    temp_f12 = arg0->unk228;
    temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f16 * temp_f16));
    if ((temp_f12 + 10.0f) < temp_f0) {
        phi_v0 = 0x1000;
    } else {
        phi_v0 = 0x4000;
        if (temp_f0 < (temp_f12 - 10.0f)) {
            phi_v0 = 0x6000;
        }
    }
    Math_SmoothStepToS(arg0 + 0x32, (s16) (Math_FAtan2F(-temp_f16, -temp_f2) + phi_v0), 2, 0xFA0, (s16) 0x3E8);
    func_80ACC934(arg0);
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
}

void func_80ACCAC0(Actor *arg0, PosRot *arg1) {
    s16 temp_v0;

    arg0->shape.yOffset += 100.0f * Math_SinS((s16) (arg0->unk21C << 9));
    func_80ACC8D4(arg0, arg1);
    temp_v0 = Math_FAtan2F(-(arg0->world.pos.z - arg1->pos.z), -(arg0->world.pos.x - arg1->pos.x));
    if (arg0->unk224 > 2.0f) {
        Math_SmoothStepToS(&arg0->world.rot.y, temp_v0, 2, 0x400, (s16) 0x100);
    } else {
        Math_SmoothStepToS(&arg0->world.rot.y, (s16) (temp_v0 + 0x2000), 0xA, 0x200, (s16) 0x80);
    }
    func_80ACC934(arg0);
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
}

void func_80ACCBB8(EnElforg *arg0, GlobalContext *arg1) {
    arg1->actorCtx.unk5 |= 8;
}

void func_80ACCBD0(EnElforg *arg0, GlobalContext *arg1) {
    Actor *temp_t8;
    Actor *temp_v0;

    SkelAnime_FrameUpdateMatrix(&arg0->unk144);
    temp_v0 = arg0->actor.parent;
    if ((temp_v0 == 0) || (temp_v0->update == 0)) {
        func_80ACC470(arg0);
        arg0->actionFunc = func_80ACD2E4;
    } else {
        temp_t8 = arg0->actor.parent;
        arg0->actor.shape.yOffset += 10.0f * Math_SinS((s16) (arg0->unk21C << 9));
        arg0->actor.world.pos.x = temp_t8->world.pos.x;
        arg0->actor.world.pos.y = temp_t8->world.pos.y;
        arg0->actor.world.pos.z = temp_t8->world.pos.z;
        arg0->actor.world.pos.y += 12.0f;
    }
    func_80ACCBB8(arg0, arg1);
}

void func_80ACCC98(EnElforg *arg0, GlobalContext *arg1) {
    Actor *sp3C;
    f32 sp38;
    s16 sp36;
    s16 sp34;
    s16 temp_a0;
    s32 temp_t8;
    s32 temp_v0;

    sp3C = arg1->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(&arg0->unk144);
    arg0->actor.speedXZ = 5.0f;
    arg0->actor.shape.yOffset *= 0.9f;
    func_80ACC8D4((Actor *) arg0, sp3C + 0xBEC);
    sp38 = arg0->actor.xzDistToPlayer;
    if (sp38 < 0.0f) {
        sp38 = 10.0f;
    }
    sp34 = (s16) (s32) (163840.0f / sp38);
    Math_SmoothStepToF(&sp38, 40.0f, 0.2f, 100.0f, 1.0f);
    temp_a0 = arg0->actor.yawTowardsPlayer - sp34;
    sp36 = temp_a0;
    arg0->actor.world.pos.x = sp3C->world.pos.x - (Math_SinS(temp_a0) * sp38);
    arg0->actor.world.pos.z = sp3C->world.pos.z - (Math_CosS(temp_a0) * sp38);
    func_80ACC7E4(arg0, arg1, 0x10);
    temp_v0 = arg0->unk220;
    if (temp_v0 > 0) {
        arg0->unk220 = temp_v0 - 1;
        return;
    }
    arg0->actor.world.rot.y = sp36 + 0x4000;
    arg0->unk21C = 0;
    temp_t8 = (s32) Rand_ZeroFloat(100.0f);
    arg0->actionFunc = func_80ACCEB0;
    arg0->unk214 &= 0xFFFB;
    arg0->unk224 = 3.0f;
    arg0->unk220 = temp_t8;
    arg0->actor.shape.yOffset = 0.0f;
    arg0->unk228 = 50.0f;
}

void func_80ACCE4C(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    func_80ACC994(arg0, arg0 + 8);
    if (arg0->unk220 < 0x1F) {
        arg0->unk22C = func_80ACCC98;
    }
    arg0->unk220 = (s32) (arg0->unk220 - 1);
}

void func_80ACCEB0(EnElforg *arg0, GlobalContext *arg1) {
    PosRot *sp20;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 phi_f18;

    if ((arg0->unk214 & 1) != 0) {
        temp_f0 = arg0->unk224;
        if (temp_f0 < 8.0f) {
            arg0->unk224 = temp_f0 + 0.1f;
        }
        temp_f0_2 = arg0->unk228;
        if (temp_f0_2 > 0.0f) {
            phi_f18 = temp_f0_2 - 2.0f;
            goto block_10;
        }
    } else if ((arg0->unk21C & 0x7F) == 0x7F) {
        if (Math_Vec3f_DistXZ((Vec3f *) &arg0->actor.world, (Vec3f *) &arg0->actor.home) > 150.0f) {
            arg0->unk224 = 5.0f;
        } else {
            arg0->unk224 = Rand_ZeroFloat(2.0f) + 1.0f;
        }
        phi_f18 = Rand_ZeroFloat(100.0f) + 50.0f;
block_10:
        arg0->unk228 = phi_f18;
    }
    sp20 = &arg0->actor.home;
    SkelAnime_FrameUpdateMatrix(&arg0->unk144);
    func_80ACC994((Actor *) arg0, sp20);
    if ((arg0->unk214 & 4) != 0) {
        arg0->actionFunc = (void (*)(EnElforg *, GlobalContext *)) func_80ACCE4C;
    }
    if ((arg0->unk214 & 2) != 0) {
        if ((s32) arg0->actor.home.rot.x > 0) {
            func_80ACC7E4(arg0, arg1, 0xA);
            arg0->actor.home.rot.x += -1;
        }
        Actor_SetScale((Actor *) arg0, arg0->actor.scale.x * 0.9f);
        if (arg0->actor.scale.x < 0.001f) {
            Actor_MarkForDeath((Actor *) arg0);
        }
    }
}

void func_80ACD088(EnElforg *arg0, GlobalContext *arg1) {
    void *sp20;
    void *sp1C;
    f32 sp18;
    s32 temp_a0;
    void *temp_v0;
    f32 phi_f2;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    sp20 = temp_v0;
    sp1C = temp_v0;
    if (gSaveContext.playerForm == 1) {
        phi_f2 = 40.0f;
    } else {
        phi_f2 = 20.0f;
    }
    temp_a0 = arg0->unk21C;
    sp18 = phi_f2;
    arg0 = arg0;
    arg0->actor.world.pos.x = (Math_SinS((s16) (temp_a0 << 0xC)) * phi_f2) + sp20->world.pos.x;
    arg0->actor.world.pos.z = (Math_CosS((s16) (arg0->unk21C << 0xC)) * phi_f2) + sp20->world.pos.z;
    arg0->actor.world.pos.y = sp1C->unkBF0;
    func_80ACC7E4(arg0, arg1, 0x10);
}

void func_80ACD164(Actor *arg0) {
    func_80ACD088();
    if (arg0->unk21C >= 0x51) {
        Actor_MarkForDeath(arg0);
        return;
    }
    func_800B9010(arg0, 0xCFU);
}

void func_80ACD1B0(EnElforg *arg0, GlobalContext *arg1) {
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    arg0->actor.world.pos.x = temp_v1->world.pos.x;
    arg0->actor.world.pos.y = temp_v1->unkBF0;
    arg0->actionFunc = func_80ACD164;
    arg0->unk21C = 0;
    arg0->unk220 = 0;
    arg0->actor.shape.yOffset = 0.0f;
    arg0->actor.world.pos.z = temp_v1->world.pos.z;
}

void func_80ACD1F0(EnElforg *arg0, GlobalContext *arg1) {
    void *sp24;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    sp24 = temp_v1;
    func_80ACD088(arg0);
    temp_v1->freezeTimer = 0x64;
    temp_v1->unkA6C = (s32) (temp_v1->unkA6C | 0x20000000);
    if (func_800B867C((Actor *) arg0, arg1) != 0) {
        temp_v1->freezeTimer = 0;
        temp_v1->unkA6C = (s32) (temp_v1->unkA6C & 0xDFFFFFFF);
        Actor_MarkForDeath((Actor *) arg0);
        gSaveContext.weekEventReg[8] |= 0x80;
        ActorCutscene_Stop(0x7C);
        return;
    }
    func_800B9010((Actor *) arg0, 0xCFU);
    if (ActorCutscene_GetCurrentIndex() != 0x7C) {
        if (ActorCutscene_GetCanPlayNext(0x7C) != 0) {
            ActorCutscene_Start(0x7C, (Actor *) arg0);
            return;
        }
        ActorCutscene_SetIntentToPlay(0x7C);
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_80ACD2E4(EnElforg *arg0, GlobalContext *arg1) {
    ? sp3C;
    f32 sp38;
    Actor *sp34;
    f32 temp_f0;
    s16 temp_v1;
    s32 temp_a0;
    u16 temp_t6;

    sp34 = arg1->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(&arg0->unk144);
    if (Player_GetMask(arg1) == 0xB) {
        sp3C.unk0 = (s32) sp34->unkBEC;
        sp3C.unk4 = (s32) sp34->unkBF0;
        sp3C.unk8 = (s32) sp34->unkBF4;
        arg0->unk224 = 5.0f;
        func_80ACCAC0((Actor *) arg0, (PosRot *) &sp3C);
    } else {
        arg0->unk224 = 1.0f;
        func_80ACCAC0((Actor *) arg0, &arg0->actor.home);
    }
    temp_f0 = arg0->actor.yDistToPlayer - (arg0->actor.shape.yOffset * arg0->actor.scale.y);
    sp38 = temp_f0;
    if (func_801233E4(arg1) == 0) {
        if ((arg0->actor.xzDistToPlayer < 30.0f) && (temp_f0 < 12.0f) && (temp_f0 > -68.0f)) {
            func_80ACD1B0(arg0, arg1);
            func_80115908(arg1, 0x30U);
            temp_v1 = arg0->actor.params;
            temp_a0 = temp_v1 & 0xF;
            if (temp_a0 != 6) {
                if (temp_a0 == 7) {
                    Actor_SetCollectibleFlag(arg1, (s32) (temp_v1 & 0xFE00) >> 9);
                } else {
                    Actor_SetSwitchFlag(arg1, (s32) (temp_v1 & 0xFE00) >> 9);
                }
            } else {
                Actor_SetChestFlag(arg1, (u32) ((s32) (temp_v1 & 0xFE00) >> 9));
            }
            if ((arg0->actor.params & 0xF) == 3) {
                sp34->freezeTimer = 0x64;
                sp34->unkA6C = (s32) (sp34->unkA6C | 0x20000000);
                func_801518B0(arg1, 0x579U, NULL);
                arg0->actionFunc = func_80ACD1F0;
                ActorCutscene_SetIntentToPlay(0x7C);
                return;
            }
            if (func_8010A074(arg1) != 0) {
                temp_t6 = gSaveContext.unk_48C8;
                gSaveContext.inventory.strayFairies[temp_t6] += 1;
                func_801518B0(arg1, 0x11U, NULL);
                if ((s32) gSaveContext.inventory.strayFairies[gSaveContext.unk_48C8] >= 0xF) {
                    func_801A3098(0x922U);
                }
            }
            goto block_17;
        }
block_17:
        Actor_UpdateBgCheckInfo(arg1, (Actor *) arg0, 20.0f, 20.0f, 20.0f, 7U);
        func_80ACCBB8(arg0, arg1);
        if (Player_GetMask(arg1) == 0xB) {
            if ((arg0->unk214 & 8) == 0) {
                play_sound(0x4854U);
            }
            arg0->unk214 |= 8;
            return;
        }
        arg0->unk214 &= 0xFFF7;
        /* Duplicate return node #22. Try simplifying control flow for better match */
    }
}

void *func_80ACD59C(void *arg0, void *arg1) {
    void *temp_v1;
    void *temp_v1_2;
    void *phi_v1;

    temp_v1 = arg1->unk1CF0;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
loop_2:
        if ((arg0->unk8 == phi_v1->unk8) && (arg0->unkC == phi_v1->unkC) && (arg0->unk10 == phi_v1->unk10)) {
            return phi_v1;
        }
        temp_v1_2 = phi_v1->unk12C;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 == 0) {
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_2;
    }
    return NULL;
}

void func_80ACD610(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    void *temp_v0;

    temp_v0 = arg0->unk210;
    if (temp_v0->unk138 == 0) {
        func_80ACC470();
        arg0->unk22C = func_80ACD2E4;
        arg0->draw = EnElforg_Draw;
        Audio_PlayActorSound2(arg0, 0x288EU);
    } else {
        temp_f0 = temp_v0->unk24;
        arg0->world.pos.x = temp_f0;
        arg0->home.pos.x = temp_f0;
        temp_f0_2 = temp_v0->unk28 + 30.0f;
        arg0->world.pos.y = temp_f0_2;
        arg0->home.pos.y = temp_f0_2;
        temp_f0_3 = temp_v0->unk2C;
        arg0->world.pos.z = temp_f0_3;
        arg0->home.pos.z = temp_f0_3;
    }
    func_80ACCBB8((EnElforg *) arg0, arg1);
}

void func_80ACD6A8(EnElforg *arg0, GlobalContext *arg1) {
    void *temp_v0;

    temp_v0 = func_80ACD59C();
    if ((temp_v0 != 0) && (temp_v0->unk138 != 0)) {
        arg0->actionFunc = (void (*)(EnElforg *, GlobalContext *)) func_80ACD610;
        arg0->unk210 = temp_v0;
    }
}

void func_80ACD6EC(EnElforg *arg0, GlobalContext *arg1) {
    if ((arg0->unk1C4.base.acFlags & 2) != 0) {
        func_80ACC470(arg0);
        arg0->actionFunc = func_80ACD2E4;
        arg0->actor.draw = EnElforg_Draw;
        arg0->actor.world.pos.y += 40.0f;
        arg0->actor.home.pos.y += 40.0f;
        Audio_PlayActorSound2((Actor *) arg0, 0x288EU);
    } else {
        CollisionCheck_SetAC(arg1, &arg1->colChkCtx, (Collider *) &arg0->unk1C4);
    }
    func_80ACCBB8(arg0, arg1);
}

void EnElforg_Update(EnElforg *this, GlobalContext *globalCtx) {
    s16 temp_v0_2;
    s32 temp_v0;
    s32 temp_v1;
    EnElforg *this = (EnElforg *) thisx;

    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk21C;
    if ((temp_v0 == 0) && (temp_v1 = this->unk220, (temp_v1 > 0))) {
        this->unk220 = temp_v1 - 1;
    } else {
        this->unk21C = temp_v0 + 1;
    }
    temp_v0_2 = this->unk216;
    if ((s32) temp_v0_2 < 0) {
        this->unk216 = temp_v0_2 + 1;
        if (this->unk216 == 0) {
            this = this;
            this->unk216 = (s16) (s32) (Rand_ZeroFloat(20.0f) + 20.0f);
            return;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return;
    }
    if ((s32) temp_v0_2 > 0) {
        this->unk216 = temp_v0_2 - 1;
        return;
    }
    this = this;
    this->unk216 = (s16) (s32) (-Rand_ZeroFloat(20.0f) - 20.0f);
}

s32 func_80ACD878(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if ((s32) arg5->unk216 < 0) {
        if (arg1 == 9) {
            goto block_4;
        }
    } else if (arg1 == 1) {
block_4:
        *arg2 = NULL;
    }
    return 0;
}

void EnElforg_Draw(EnElforg *this, GlobalContext *globalCtx) {
    GraphicsContext *sp34;
    GraphicsContext *temp_a0;
    s16 temp_v0;
    EnElforg *this = (EnElforg *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp34 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = this->unk218;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                if (temp_v0 != 4) {
                    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_0402C818));
                } else {
                    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_0402C9F8));
                }
            } else {
                AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_0402C980));
            }
        } else {
            AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_0402C890));
        }
    } else {
        AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual((void *) &D_0402C908));
    }
    SysMatrix_InsertMatrix(&globalCtx->mf_187FC, 1);
    sp34->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80ACD878, NULL, (Actor *) this, sp34->polyXlu.p);
}
