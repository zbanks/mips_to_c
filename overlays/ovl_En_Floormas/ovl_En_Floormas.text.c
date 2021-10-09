typedef struct EnFloormas {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ void (*actionFunc)(EnFloormas *, GlobalContext *);
    /* 0x18C */ u8 unk18C;                          /* inferred */
    /* 0x18D */ char pad18D[0x1];
    /* 0x18E */ s16 unk18E;                         /* inferred */
    /* 0x190 */ s16 unk190;                         /* inferred */
    /* 0x192 */ s16 unk192;                         /* inferred */
    /* 0x194 */ s16 unk194;                         /* inferred */
    /* 0x196 */ Vec3s unk196;                       /* inferred */
    /* 0x19C */ char pad19C[0x90];                  /* maybe part of unk196[25]? */
    /* 0x22C */ Vec3s unk22C;                       /* inferred */
    /* 0x232 */ char pad232[0x92];                  /* maybe part of unk22C[25]? */
    /* 0x2C4 */ f32 unk2C4;                         /* inferred */
    /* 0x2C8 */ f32 unk2C8;                         /* inferred */
    /* 0x2CC */ f32 unk2CC;                         /* inferred */
    /* 0x2D0 */ Vec3f unk2D0;                       /* inferred */
    /* 0x2DC */ char pad2DC[0x78];                  /* maybe part of unk2D0[11]? */
    /* 0x354 */ ColliderCylinder unk354;            /* inferred */
} EnFloormas;                                       /* size = 0x3A0 */

struct _mips2c_stack_EnFloormas_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnFloormas_Draw {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnFloormas_Init {
    /* 0x00 */ char pad0[0x48];
    /* 0x48 */ ActorContext *sp48;                  /* inferred */
    /* 0x4C */ s32 sp4C;                            /* inferred */
    /* 0x50 */ char pad50[0x10];
};                                                  /* size = 0x60 */

struct _mips2c_stack_EnFloormas_Update {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ void (*sp2C)(EnFloormas *, GlobalContext *); /* inferred */
    /* 0x30 */ void (*sp30)(EnFloormas *, GlobalContext *); /* inferred */
    /* 0x34 */ char pad34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808D08D0 {};              /* size 0x0 */

struct _mips2c_stack_func_808D0908 {};              /* size 0x0 */

struct _mips2c_stack_func_808D0930 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808D09CC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808D0A48 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808D0B08 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D0B50 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808D0C14 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D0C58 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D0CE4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D0D70 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D0ECC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D0F14 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D0F50 {};              /* size 0x0 */

struct _mips2c_stack_func_808D0F80 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D108C {
    /* 0x00 */ char pad0[0x36];
    /* 0x36 */ s16 sp36;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808D11BC {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808D1380 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808D1458 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808D14DC {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808D161C {};              /* size 0x0 */

struct _mips2c_stack_func_808D1650 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808D1740 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808D17EC {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D19D4 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808D1B44 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808D1BCC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D1C1C {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D1D0C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D1D6C {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad24[0x8];                     /* maybe part of sp20[3]? */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808D1ED4 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808D1F7C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D1FD4 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D2040 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D217C {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ char pad34[0x7];                     /* maybe part of sp30[2]? */
    /* 0x3B */ u8 sp3B;                             /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808D22C8 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D2484 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D24F0 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808D2700 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D2764 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ void (*sp28)(EnFloormas *, GlobalContext *); /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ Actor *sp38;                         /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808D2A20 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808D2AA8 {};              /* size 0x0 */

struct _mips2c_stack_func_808D2AB8 {};              /* size 0x0 */

struct _mips2c_stack_func_808D2AF4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D2B18 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D2C08 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D2CDC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D2D30 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D2D6C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D2DC0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D2E34 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808D3488 {};              /* size 0x0 */

struct _mips2c_stack_func_808D34C4 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ s8 *sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0x4];
    /* 0x20 */ s32 *sp20;                           /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D3754 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

? func_800AE2A0(GlobalContext *, ? *, s16, ?);      /* extern */
? func_800AE5E4(GlobalContext *, ? *, s16, ?);      /* extern */
void func_808D08D0(Actor *arg0);                    /* static */
void func_808D0908(EnFloormas *arg0);               /* static */
void func_808D0930(Actor *arg0, GlobalContext *arg1); /* static */
void func_808D09CC(Actor *arg0);                    /* static */
void func_808D0A48(Actor *arg0, GlobalContext *arg1); /* static */
void func_808D0B08(EnFloormas *arg0);               /* static */
void func_808D0C14(EnFloormas *arg0);               /* static */
void func_808D0CE4(EnFloormas *arg0, EnFloormas *); /* static */
void func_808D0ECC(EnFloormas *arg0);               /* static */
void func_808D0F50(EnFloormas *arg0);               /* static */
void func_808D108C(EnFloormas *arg0);               /* static */
void func_808D1380(EnFloormas *arg0, GlobalContext *arg1); /* static */
void func_808D14DC(Actor *arg0, GlobalContext *arg1); /* static */
void func_808D161C(EnFloormas *arg0);               /* static */
void func_808D1740(EnFloormas *arg0, Actor *);      /* static */
void func_808D19D4(Actor *arg0, Actor *, Vec3f *);  /* static */
void func_808D1BCC(EnFloormas *arg0, EnFloormas *); /* static */
void func_808D1D0C(EnFloormas *arg0, EnFloormas *); /* static */
void func_808D1ED4(Actor *arg0, GlobalContext *arg1, s32, Actor *); /* static */
void func_808D1FD4(EnFloormas *arg0);               /* static */
void func_808D217C(EnFloormas *arg0, Actor *arg1);  /* static */
void func_808D2484(EnFloormas *arg0);               /* static */
void func_808D2700(EnFloormas *arg0);               /* static */
void func_808D2A20(EnFloormas *arg0);               /* static */
void func_808D2AB8(void *arg0, Actor *, void *, void *); /* static */
void func_808D2B18(Actor *arg0);                    /* static */
void func_808D2CDC(EnFloormas *arg0);               /* static */
void func_808D2D6C(Actor *arg0);                    /* static */
void func_808D2E34(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_808D3488(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor, Gfx **gfx); /* static */
void func_808D34C4(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, s32 **arg5); /* static */
void func_808D3754(Actor *thisx, GlobalContext *globalCtx); /* static */
extern AnimationHeader D_06000590;
extern AnimationHeader D_06000EA4;
extern AnimationHeader D_060019CC;
extern AnimationHeader D_06002158;
extern AnimationHeader D_060039B0;
extern AnimationHeader D_060041F4;
extern ? D_06008688;
extern FlexSkeletonHeader D_06008FB0;
extern AnimationHeader D_06009244;
extern AnimationHeaderCommon D_06009520;
extern AnimationHeader D_06009DB0;
extern AnimationHeader D_0600A054;
static ColliderCylinderInit D_808D38A0 = {
    {0, 0x11, 9, 0x39, 0x10, 1},
    {0, {0xF7CFFFFF, 4, 0x10}, {0xF7EFFFFF, 0, 0}, 9, 5, 1},
    {0x19, 0x28, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit D_808D38CC = {3, 0x1E, 0x28, 0x96};
static DamageTable D_808D38D4 = {
    {
        0x10,
        1,
        1,
        1,
        1,
        1,
        0,
        0xF0,
        1,
        1,
        1,
        0x22,
        0x31,
        0x42,
        1,
        0x10,
        1,
        2,
        0x10,
        0x50,
        0,
        0xE0,
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
static InitChainEntry D_808D38F4[3];                /* unable to generate initializer */
static ? D_808D3900;                                /* unable to generate initializer */
static ? D_808D393C;                                /* unable to generate initializer */
static ? D_808D393E;                                /* unable to generate initializer */
static ? D_808D394F;                                /* unable to generate initializer */
static ? D_808D3958;                                /* unable to generate initializer */

void EnFloormas_Init(EnFloormas *this, GlobalContext *globalCtx) {
    s32 sp4C;
    ActorContext *sp48;
    Actor *temp_v0_2;
    Actor *temp_v0_3;
    ActorContext *temp_a0;
    s16 temp_v0;
    s32 temp_t0;
    s32 temp_v1;
    EnFloormas *this = (EnFloormas *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_808D38F4);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 50.0f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_06008FB0, &D_06009DB0, &this->unk196, &this->unk22C, 0x19);
    Collider_InitAndSetCylinder(globalCtx, &this->unk354, (Actor *) this, &D_808D38A0);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_808D38D4, &D_808D38CC);
    temp_v0 = this->actor.params;
    this->unk192 = -0x640;
    temp_v1 = temp_v0 & 0x8000;
    this->actor.params = temp_v0 & 0x7FFF;
    if (temp_v1 != 0) {
        this->actor.flags |= 0x80;
        this->actor.draw = func_808D3754;
    }
    temp_a0 = &globalCtx->actorCtx;
    if (this->actor.params == 0x10) {
        this->actor.draw = NULL;
        this->actor.flags &= -2;
        this->actionFunc = func_808D2AA8;
        return;
    }
    temp_t0 = temp_v1 + 0x10;
    sp4C = temp_t0;
    sp48 = temp_a0;
    temp_v0_2 = Actor_SpawnAsChildAndCutscene(temp_a0, globalCtx, 0x4A, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, temp_t0, -1U, (s32) this->actor.unk20, NULL);
    this->actor.parent = temp_v0_2;
    if (temp_v0_2 == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_v0_3 = Actor_SpawnAsChildAndCutscene(temp_a0, globalCtx, 0x4A, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, temp_t0, -1U, (s32) this->actor.unk20, NULL);
    this->actor.child = temp_v0_3;
    if (temp_v0_3 == 0) {
        Actor_MarkForDeath(this->actor.parent);
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actor.parent->child = (Actor *) this;
    this->actor.parent->parent = this->actor.child;
    this->actor.child->parent = (Actor *) this;
    this->actor.child->child = this->actor.parent;
    func_808D0B08(this);
}

void EnFloormas_Destroy(EnFloormas *this, GlobalContext *globalCtx) {
    EnFloormas *this = (EnFloormas *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk354);
}

void func_808D08D0(Actor *arg0) {
    arg0->unk368 = 0xC;
    arg0->unk365 = (u8) (arg0->unk365 | 4);
    arg0->unk374 = (s32) (arg0->unk374 & 0xFFFF7FFF);
    arg0->unk190 = 0x28;
}

void func_808D0908(EnFloormas *arg0) {
    arg0->unk354.base.colType = 0;
    arg0->unk354.base.acFlags &= 0xFFFB;
    arg0->unk354.info.bumper.dmgFlags |= 0x8000;
    arg0->unk190 = 0;
}

void func_808D0930(Actor *arg0, GlobalContext *arg1) {
    Vec3f *temp_a2;

    temp_a2 = arg0 + 0x24;
    if (arg0->scale.x > 0.009f) {
        arg0->shape.rot.y = arg0->yawTowardsPlayer + 0x8000;
        func_808D19D4(arg0->child, arg0, temp_a2);
        func_808D19D4(arg0->parent);
        func_808D19D4(arg0);
        Audio_PlayActorSound2(arg0, 0x3935U);
        return;
    }
    Item_DropCollectibleRandom(arg1, arg0, temp_a2, 0x90);
    func_808D1ED4(arg0, arg1);
}

void func_808D09CC(Actor *arg0) {
    arg0->unk18C = 0xA;
    arg0->unk2C8 = 0.55f;
    arg0->unk368 = 3;
    arg0->unk18E = 0x50;
    arg0->flags &= -0x601;
    arg0->unk2CC = 0.82500005f;
    arg0->unk2C4 = 1.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x50);
}

void func_808D0A48(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;

    if (arg0->unk18C == 0xA) {
        arg0->unk18C = 0U;
        arg0->unk368 = 0;
        arg0->unk2C4 = 0.0f;
        temp_f0 = arg0->scale.x;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x2D0), 0xB, 2, temp_f0 * 30.000002f, temp_f0 * 20.0f);
        if (arg0->scale.x > 0.009f) {
            arg0->flags |= 0x400;
            return;
        }
        arg0->flags |= 0x200;
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_808D0B08(EnFloormas *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06009DB0);
    arg0->actionFunc = func_808D0B50;
    arg0->actor.speedXZ = 0.0f;
}

void func_808D0B50(EnFloormas *this, GlobalContext *globalCtx) {
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        if ((this->actor.xzDistToPlayer < 400.0f) && (Actor_IsActorFacingLink((Actor *) this, 0x4000) == 0)) {
            this->unk190 = this->actor.yawTowardsPlayer;
            func_808D108C(this);
            return;
        }
        if ((this->actor.xzDistToPlayer < 280.0f) && (Actor_IsActorFacingLink((Actor *) this, 0x2000) != 0)) {
            func_808D1380(this, globalCtx);
            return;
        }
        func_808D0C14(this);
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_808D0C14(EnFloormas *arg0) {
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_0600A054, -3.0f);
    arg0->actionFunc = func_808D0C58;
}

void func_808D0C58(EnFloormas *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;

    temp_a0 = &this->unk144;
    this = this;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        if (this->actor.scale.x > 0.009f) {
            func_808D0CE4(this, this);
            return;
        }
        if (this->actor.params == 0x20) {
            func_808D1D0C(this, this);
            return;
        }
        func_808D1BCC(this, this);
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_808D0CE4(EnFloormas *arg0) {
    SkelAnime *temp_a0;

    if (func_808D0F80 != arg0->actionFunc) {
        temp_a0 = arg0 + 0x144;
        arg0 = arg0;
        SkelAnime_ChangeAnimPlaybackRepeat(temp_a0, &D_060041F4, 1.5f);
    } else {
        arg0->unk144.animPlaybackSpeed = 1.5f;
    }
    arg0 = arg0;
    arg0->unk18E = Rand_S16Offset(2, 4);
    arg0->actionFunc = func_808D0D70;
    arg0->actor.speedXZ = 1.5f;
}

void func_808D0D70(EnFloormas *this, GlobalContext *globalCtx) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    s16 temp_v1;
    s32 temp_v0;

    temp_a0 = &this->unk144;
    sp20 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v0 = func_801378B8(temp_a0, 0.0f);
    if (temp_v0 != 0) {
        temp_v1 = this->unk18E;
        if (temp_v1 != 0) {
            this->unk18E = temp_v1 - 1;
        }
    }
    if ((temp_v0 != 0) || (func_801378B8(sp20, 12.0f) != 0) || (func_801378B8(sp20, 24.0f) != 0) || (func_801378B8(sp20, 36.0f) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x3894U);
    }
    if ((this->actor.xzDistToPlayer < 320.0f) && (Actor_IsActorFacingLink((Actor *) this, 0x4000) != 0)) {
        func_808D0F50(this);
        return;
    }
    if ((this->actor.bgCheckFlags & 8) != 0) {
        this->unk190 = this->actor.wallYaw;
        func_808D108C(this);
        return;
    }
    if ((this->actor.xzDistToPlayer < 400.0f) && (Actor_IsActorFacingLink((Actor *) this, 0x4000) == 0)) {
        this->unk190 = this->actor.yawTowardsPlayer;
        func_808D108C(this);
        return;
    }
    if (this->unk18E == 0) {
        func_808D0ECC(this);
    }
}

void func_808D0ECC(EnFloormas *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06009244);
    arg0->actionFunc = func_808D0F14;
    arg0->actor.speedXZ = 0.0f;
}

void func_808D0F14(EnFloormas *this, GlobalContext *globalCtx) {
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        func_808D0B08(this);
    }
}

void func_808D0F50(EnFloormas *arg0) {
    arg0->unk18E = 0;
    arg0->actionFunc = func_808D0F80;
    arg0->actor.speedXZ = 5.0f;
    arg0->unk144.animPlaybackSpeed = 3.0f;
}

void func_808D0F80(EnFloormas *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk144;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if ((func_801378B8(temp_a0, 0.0f) != 0) || (func_801378B8(temp_a0, 12.0f) != 0) || (func_801378B8(sp24, 24.0f) != 0) || (func_801378B8(sp24, 36.0f) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x3894U);
    }
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0x71C);
    if ((this->actor.xzDistToPlayer < 280.0f) && (Actor_IsActorFacingLink((Actor *) this, 0x2000) != 0) && ((this->actor.bgCheckFlags & 8) == 0)) {
        func_808D1380(this, globalCtx);
        return;
    }
    if (this->actor.xzDistToPlayer > 400.0f) {
        func_808D0CE4(this);
    }
}

void func_808D108C(EnFloormas *arg0) {
    s16 sp36;
    s16 temp_v1;

    temp_v1 = arg0->unk190 - arg0->actor.shape.rot.y;
    arg0->actor.speedXZ = 0.0f;
    if ((s32) temp_v1 > 0) {
        sp36 = temp_v1;
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_06002158, -3.0f);
    } else {
        sp36 = temp_v1;
        SkelAnime_ChangeAnim(arg0 + 0x144, &D_06002158, -1.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06002158), 0.0f, (u8) 2, -3.0f);
    }
    if (arg0->actor.scale.x > 0.009f) {
        arg0->unk190 = (s16) (s32) ((f32) sp36 * 0.06666667f);
    } else {
        arg0->unk144.animPlaybackSpeed *= 2.0f;
        arg0->unk190 = (s16) (s32) ((f32) sp36 * 0.13333334f);
    }
    arg0->actionFunc = func_808D11BC;
}

void func_808D11BC(EnFloormas *this, GlobalContext *globalCtx) {
    f32 sp30;
    f32 sp2C;
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    f32 temp_f0;

    temp_a0 = &this->unk144;
    sp24 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        func_808D0C14(this);
    }
    if (this->unk144.animPlaybackSpeed > 0.0f) {
        if (func_801378B8(sp24, 21.0f) == 0) {
            goto block_5;
        }
        goto block_7;
    }
block_5:
    if ((this->unk144.animPlaybackSpeed < 0.0f) && (func_801378B8(sp24, 6.0f) != 0)) {
block_7:
        if (this->actor.scale.x > 0.009f) {
            Audio_PlayActorSound2((Actor *) this, 0x3894U);
        } else {
            Audio_PlayActorSound2((Actor *) this, 0x3931U);
        }
    }
    temp_f0 = this->unk144.animCurrentFrame;
    if ((temp_f0 >= 7.0f) && (temp_f0 < 22.0f)) {
        sp30 = Math_SinS((s16) (this->actor.shape.rot.y + 0x4268));
        sp2C = Math_CosS((s16) (this->actor.shape.rot.y + 0x4268));
        this->actor.shape.rot.y += this->unk190;
        this->actor.world.pos.x -= this->actor.scale.x * 2700.0f * (Math_SinS((s16) (this->actor.shape.rot.y + 0x4268)) - sp30);
        this->actor.world.pos.z -= this->actor.scale.x * 2700.0f * (Math_CosS((s16) (this->actor.shape.rot.y + 0x4268)) - sp2C);
    }
}

void func_808D1380(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_06009520, 3.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06009520), (u8) 2, -3.0f);
    arg0->speedXZ = 0.0f;
    arg0->gravity = 0.0f;
    func_808D08D0(arg0);
    func_800BBDAC(arg1, arg0, arg0 + 0x24, 15.0f, 6, 20.0f, (s16) 0x12C, (s16) 0x64, (u8) 1);
    Audio_PlayActorSound2(arg0, 0x3930U);
    arg0->unk188 = func_808D1458;
}

void func_808D1458(EnFloormas *this, GlobalContext *globalCtx) {
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        func_808D161C(this);
    }
    this->actor.shape.rot.x += 0x140;
    this->actor.world.pos.y += 10.0f;
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0xAAA);
    Math_StepToS(&this->unk192, 0x4B0, 0x64);
}

void func_808D14DC(Actor *arg0, GlobalContext *arg1) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;

    sp34 = arg0->world.pos.x;
    sp3C = arg0->world.pos.z;
    sp2C = 2.0f;
    sp38 = arg0->floorHeight;
    sp28 = Math_SinS((s16) (arg0->shape.rot.y + 0x6000)) * 7.0f;
    sp30 = Math_CosS((s16) (arg0->shape.rot.y + 0x6000)) * 7.0f;
    func_800B1210(arg1, (Vec3f *) &sp34, (Vec3f *) &sp28, &D_801D15B0, (s16) 0x1C2, (s16) 0x64);
    sp28 = Math_SinS((s16) (arg0->shape.rot.y - 0x6000)) * 7.0f;
    sp30 = Math_CosS((s16) (arg0->shape.rot.y - 0x6000)) * 7.0f;
    func_800B1210(arg1, (Vec3f *) &sp34, (Vec3f *) &sp28, &D_801D15B0, (s16) 0x1C2, (s16) 0x64);
    func_800B9010(arg0, 0x3034U);
}

void func_808D161C(EnFloormas *arg0) {
    arg0->unk18E = 0x19;
    arg0->actionFunc = func_808D1650;
    arg0->actor.gravity = -0.15f;
    arg0->actor.speedXZ = 0.5f;
}

void func_808D1650(EnFloormas *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s16 temp_v0;

    temp_v0 = this->unk18E;
    if (temp_v0 != 0) {
        this->unk18E = temp_v0 - 1;
    }
    temp_f0 = this->actor.speedXZ;
    Math_StepToF(&this->actor.speedXZ, 15.0f, temp_f0 * temp_f0 * 0.33333334f);
    Math_ScaledStepToS((s16 *) &this->actor.shape, -0x1680, 0x140);
    temp_f2 = this->actor.floorHeight;
    temp_f0_2 = this->actor.world.pos.y - temp_f2;
    if (temp_f0_2 < 10.0f) {
        this->actor.world.pos.y = temp_f2 + 10.0f;
        this->actor.gravity = 0.0f;
        this->actor.velocity.y = 0.0f;
    }
    if (temp_f0_2 < 12.0f) {
        func_808D14DC((Actor *) this, globalCtx);
    }
    if (((this->actor.bgCheckFlags & 8) != 0) || (this->unk18E == 0)) {
        func_808D1740(this);
    }
}

void func_808D1740(EnFloormas *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_060019CC, 1.0f, 41.0f, 42.0f, (u8) 2, 5.0f);
    if ((arg0->actor.speedXZ < 0.0f) || (func_808D1650 != arg0->actionFunc)) {
        arg0->unk18E = 0x1E;
    } else {
        arg0->unk18E = 0x2D;
    }
    arg0->actor.gravity = -1.0f;
    arg0->actionFunc = func_808D17EC;
}

void func_808D17EC(EnFloormas *this, GlobalContext *globalCtx) {
    s32 sp24;
    s16 temp_v0_2;
    u16 temp_v0;

    temp_v0 = this->actor.bgCheckFlags;
    sp24 = temp_v0 & 1;
    if ((temp_v0 & 2) != 0) {
        if (this->actor.params != 0x40) {
            func_808D0908(this);
        }
        if (this->actor.velocity.y < -4.0f) {
            if (this->actor.scale.x > 0.009f) {
                Audio_PlayActorSound2((Actor *) this, 0x3893U);
            } else {
                Audio_PlayActorSound2((Actor *) this, 0x3937U);
            }
        }
    }
    if ((this->actor.bgCheckFlags & 8) != 0) {
        this->actor.speedXZ = 0.0f;
    }
    if (sp24 != 0) {
        Math_StepToF(&this->actor.speedXZ, 0.0f, 2.0f);
    }
    if ((this->actor.speedXZ > 0.0f) && ((this->actor.world.pos.y - this->actor.floorHeight) < 12.0f)) {
        func_808D14DC((Actor *) this, globalCtx);
    }
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        temp_v0_2 = this->unk18E;
        if (temp_v0_2 != 0) {
            this->unk18E = temp_v0_2 - 1;
        }
        if ((this->unk18E == 0) && (sp24 != 0)) {
            if (this->unk144.animFrameCount < 45.0f) {
                this->unk144.animFrameCount = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060019CC);
            } else if (this->actor.params == 0x40) {
                func_808D2700(this);
            } else {
                func_808D0C14(this);
                this->unk194 = 0x32;
            }
        }
    }
    Math_ScaledStepToS((s16 *) &this->actor.shape, 0, 0x140);
    Math_StepToS(&this->unk192, -0x640, 0x64);
}

void func_808D19D4(Actor *arg0) {
    Actor *temp_v0;
    u32 temp_t5;
    u32 temp_t7;
    u32 temp_t7_2;

    arg0->colorFilterTimer = 0;
    arg0->unk2C4 = 0.0f;
    Actor_SetScale(arg0, 0.004f);
    temp_t7 = arg0->flags | 0x10;
    arg0->flags = temp_t7;
    if ((temp_t7 & 0x80) == 0x80) {
        arg0->draw = func_808D3754;
    } else {
        arg0->draw = EnFloormas_Draw;
    }
    temp_v0 = arg0->parent;
    arg0->shape.rot.y = temp_v0->shape.rot.y + 0x5555;
    arg0->world.pos.x = temp_v0->world.pos.x;
    arg0->world.pos.y = temp_v0->world.pos.y;
    arg0->params = 0x10;
    arg0->world.pos.z = temp_v0->world.pos.z;
    SkelAnime_ChangeAnim((SkelAnime *) (arg0 + 0x144), &D_060019CC, 1.0f, 41.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060019CC), (u8) 2, 0.0f);
    temp_t5 = arg0->flags & ~0x400;
    temp_t7_2 = temp_t5 | 0x200;
    arg0->unk394 = (s16) (s32) ((f32) D_808D38A0.dim.radius * 0.6f);
    arg0->flags = temp_t5;
    arg0->flags = temp_t7_2;
    arg0->colChkInfo.health = 1;
    arg0->unk188 = func_808D1B44;
    arg0->speedXZ = 4.0f;
    arg0->velocity.y = 7.0f;
    arg0->unk396 = (s16) (s32) ((f32) D_808D38A0.dim.height * 0.6f);
}

void func_808D1B44(EnFloormas *this, GlobalContext *globalCtx) {
    if ((this->actor.bgCheckFlags & 1) != 0) {
        if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
            this->unk194 = 0x32;
            this->actor.flags |= 1;
            func_808D0C14(this);
        }
        Math_StepToF(&this->actor.speedXZ, 0.0f, 1.0f);
    }
    if ((this->actor.bgCheckFlags & 2) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x3937U);
    }
}

void func_808D1BCC(EnFloormas *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimPlaybackRepeat(temp_a0, &D_060041F4, 4.5f);
    arg0->actionFunc = func_808D1C1C;
    arg0->actor.speedXZ = 5.0f;
}

void func_808D1C1C(EnFloormas *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_v1;

    temp_a0 = &this->unk144;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v1 = this->unk194;
    if (temp_v1 != 0) {
        this->unk194 = temp_v1 - 1;
    }
    if ((func_801378B8(sp24, 0.0f) != 0) || (func_801378B8(sp24, 18.0f) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x3931U);
    }
    if (this->unk194 == 0) {
        func_808D1D0C(this);
        return;
    }
    if ((this->actor.bgCheckFlags & 8) != 0) {
        this->unk190 = this->actor.wallYaw;
        func_808D108C(this);
        return;
    }
    if (this->actor.xzDistToPlayer < 120.0f) {
        Math_ScaledStepToS(&this->actor.shape.rot.y, (s16) (this->actor.yawTowardsPlayer + 0x8000), 0x38E);
    }
}

void func_808D1D0C(EnFloormas *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    if (func_808D1C1C != arg0->actionFunc) {
        arg0 = arg0;
        SkelAnime_ChangeAnimPlaybackRepeat(temp_a0, &D_060041F4, 4.5f);
    }
    arg0->actionFunc = func_808D1D6C;
    arg0->actor.speedXZ = 5.0f;
}

void func_808D1D6C(EnFloormas *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    SkelAnime *sp20;
    Actor *temp_v0;
    Actor *temp_v0_2;
    SkelAnime *temp_a0;
    Actor *phi_a3;

    temp_a0 = &this->unk144;
    sp20 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if ((func_801378B8(temp_a0, 0.0f) != 0) || (func_801378B8(temp_a0, 18.0f) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x3931U);
    }
    if ((this->actor.bgCheckFlags & 8) != 0) {
        this->unk190 = this->actor.wallYaw;
        func_808D108C(this);
        return;
    }
    if (this->actor.params == 0x20) {
        temp_v0 = this->actor.parent;
        if (temp_v0->params == 0x40) {
            phi_a3 = temp_v0;
            goto block_11;
        }
        temp_v0_2 = this->actor.child;
        if (temp_v0_2->params == 0x40) {
            phi_a3 = temp_v0_2;
block_11:
            sp2C = phi_a3;
            Math_ScaledStepToS(&this->actor.shape.rot.y, Actor_YawBetweenActors((Actor *) this, phi_a3), 0x38E);
            if (Actor_XZDistanceBetweenActors((Actor *) this, sp2C) < 80.0f) {
                func_808D2484(this);
                return;
            }
            /* Duplicate return node #15. Try simplifying control flow for better match */
            return;
        }
        this->actor.params = 0x10;
        return;
    }
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0x71C);
    if (this->actor.xzDistToPlayer < 80.0f) {
        func_808D1FD4(this);
    }
}

void func_808D1ED4(Actor *arg0, GlobalContext *arg1) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;

    arg0->speedXZ = 0.0f;
    arg0->velocity.y = 0.0f;
    sp34 = arg0->world.pos.x;
    sp38 = arg0->world.pos.y + 15.0f;
    sp3C = arg0->world.pos.z;
    func_800B3030(arg1, (Vec3f *) &sp34, &D_801D15B0, &D_801D15B0, (s16) 0x96, (s16) -0xA, 2);
    Audio_PlaySoundAtPosition(arg1, arg0 + 0x24, 0xB, 0x3878U);
    arg0->unk188 = func_808D1F7C;
}

void func_808D1F7C(EnFloormas *this, GlobalContext *globalCtx) {
    EnFloormas *temp_a0_2;
    Vec3f *temp_a0;
    f32 temp_f0;

    temp_a0 = &this->actor.scale;
    this = this;
    if (Math_StepToF((f32 *) temp_a0, 0.0f, 0.0015f) != 0) {
        temp_a0_2 = this;
        this = this;
        func_808D2A20(temp_a0_2);
    }
    temp_f0 = this->actor.scale.x;
    this->actor.scale.z = temp_f0;
    this->actor.scale.y = temp_f0;
}

void func_808D1FD4(EnFloormas *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_060019CC, 2.0f, 0.0f, 41.0f, (u8) 2, 0.0f);
    arg0->actionFunc = func_808D2040;
    arg0->actor.speedXZ = 0.0f;
}

void func_808D2040(EnFloormas *this, GlobalContext *globalCtx) {
    Actor *sp24;
    SkelAnime *sp20;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk144;
    sp20 = temp_a0;
    sp24 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (this->unk144.animCurrentFrame < 20.0f) {
        Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 2, 0xE38);
        return;
    }
    if (func_801378B8(temp_a0, 20.0f) != 0) {
        this->actor.speedXZ = 5.0f;
        this->actor.velocity.y = 7.0f;
        return;
    }
    if ((this->actor.bgCheckFlags & 2) != 0) {
        this->unk18E = 0x32;
        this->actor.speedXZ = 0.0f;
        Audio_PlayActorSound2((Actor *) this, 0x3937U);
        func_808D1740(this);
        return;
    }
    if ((this->actor.yDistToPlayer < -10.0f) && ((this->unk354.base.ocFlags1 & 2) != 0) && (sp24 == this->unk354.base.oc)) {
        globalCtx->grabPlayer(globalCtx, (Player *) sp24);
        func_808D217C(this, sp24);
    }
}

void func_808D217C(Actor *arg0, Actor *arg1) {
    u8 sp3B;
    void *sp30;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    void *temp_v0;
    f32 phi_f0;

    SkelAnime_ChangeAnim(arg0 + 0x144, &D_060019CC, 1.0f, 36.0f, 45.0f, (u8) 2, -3.0f);
    arg0->flags &= -2;
    arg0->speedXZ = 0.0f;
    arg0->velocity.y = 0.0f;
    func_808D08D0(arg0);
    sp3B = gSaveContext.playerForm;
    temp_v0 = (sp3B * 0xC) + &D_808D3900;
    temp_f2 = -arg0->yDistToPlayer;
    arg0->home.pos.x = Math_SinS(arg0->shape.rot.y) * temp_v0->unk8;
    temp_f12 = temp_v0->unk0;
    if (temp_f2 < temp_f12) {
        arg0->home.pos.y = temp_f12;
    } else {
        temp_f12_2 = temp_v0->unk4;
        if (temp_f12_2 < temp_f2) {
            phi_f0 = temp_f12_2;
        } else {
            phi_f0 = temp_f2;
        }
        arg0->home.pos.y = phi_f0;
    }
    sp30 = temp_v0;
    arg0->home.pos.z = Math_CosS(arg0->shape.rot.y) * temp_v0->unk8;
    Math_Vec3f_Sum(arg1 + 0x24, (Vec3f *) &arg0->home, (Vec3f *) &arg0->world);
    arg0->shape.rot.x = -0x4CE0;
    arg0->unk188 = func_808D22C8;
}

void func_808D22C8(EnFloormas *this, GlobalContext *globalCtx) {
    Actor *sp24;
    Actor *temp_a0;
    Actor *temp_a1;
    Actor *temp_a3;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_a3 = globalCtx->actorCtx.actorList[2].first;
    sp24 = temp_a3;
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        if (this->unk144.animPlaybackSpeed > 0.0f) {
            this->unk144.animPlaybackSpeed = -1.0f;
            this->unk144.animFrameCount = 36.0f;
            this->unk144.initialFrame = 45.0f;
        } else {
            this->unk144.animPlaybackSpeed = 1.0f;
            this->unk144.animFrameCount = 45.0f;
            this->unk144.initialFrame = 36.0f;
        }
    }
    sp24 = temp_a3;
    Math_Vec3f_Sum((Vec3f *) &temp_a3->world, (Vec3f *) &this->actor.home, (Vec3f *) &this->actor.world);
    if (((temp_a3->unkA70 & 0x80) == 0) || ((s32) temp_a3->unkD5C < 0)) {
        temp_a0 = this->actor.parent;
        temp_v1 = temp_a0->unk188;
        temp_a1 = this->actor.child;
        if (((func_808D22C8 == temp_v1) || (func_808D2AA8 == temp_v1)) && ((temp_v1_2 = temp_a1->unk188, (func_808D22C8 == temp_v1_2)) || (func_808D2AA8 == temp_v1_2))) {
            temp_a0->params = 0x20;
            temp_a1->params = 0x20;
            this->actor.params = 0x40;
        }
        this->actor.shape.rot.x = 0;
        this->actor.velocity.y = 6.0f;
        this->actor.flags |= 1;
        this->actor.speedXZ = -3.0f;
        func_808D1740(this, temp_a1);
    } else if (((s32) this->unk190 % 0x14) == 0) {
        func_800B8E58(temp_a3, (temp_a3->unkA68->unk92 + 0x6805) & 0xFFFF);
        globalCtx->damagePlayer(globalCtx, -4);
    }
    Audio_PlayActorSound2((Actor *) this, 0x3136U);
}

void func_808D2484(EnFloormas *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_060019CC, 2.0f, 0.0f, 41.0f, (u8) 2, 0.0f);
    arg0->actionFunc = func_808D24F0;
    arg0->actor.speedXZ = 0.0f;
}

void func_808D24F0(EnFloormas *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    Actor *temp_v0;
    Actor *temp_v1;
    SkelAnime *temp_a0;
    Actor *phi_s1;

    temp_a0 = &this->unk144;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v1 = this->actor.parent;
    if (temp_v1->params == (Actor *)0x40) {
        phi_s1 = temp_v1;
        goto block_6;
    }
    temp_v0 = this->actor.child;
    if (temp_v0->params == (Actor *)0x40) {
        phi_s1 = temp_v0;
block_6:
        if (func_801378B8(temp_a0, 20.0f) != 0) {
            this->actor.speedXZ = 5.0f;
            this->actor.velocity.y = 7.0f;
        } else if (this->unk144.animCurrentFrame < 20.0f) {
            Math_ApproachS(&this->actor.shape.rot.y, Actor_YawBetweenActors((Actor *) this, phi_s1), 2, 0xE38);
        } else if (((phi_s1->world.pos.y - this->actor.world.pos.y) < -10.0f) && (fabsf(this->actor.world.pos.x - phi_s1->world.pos.x) < 10.0f) && (fabsf(this->actor.world.pos.z - phi_s1->world.pos.z) < 10.0f)) {
            func_808D2A20(this);
            this->unk354.base.ocFlags1 |= 1;
        } else if ((this->actor.bgCheckFlags & 2) != 0) {
            this->actor.speedXZ = 0.0f;
            Audio_PlayActorSound2((Actor *) this, 0x3937U);
            func_808D1740(this);
        }
        if ((fabsf(this->actor.world.pos.x - phi_s1->world.pos.x) < 5.0f) && (fabsf(this->actor.world.pos.z - phi_s1->world.pos.z) < 5.0f)) {
            Math_StepToF(&this->actor.speedXZ, 0.0f, 2.0f);
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return;
    }
    if ((this->actor.bgCheckFlags & 2) != 0) {
        this->actor.params = 0x10;
        func_808D1740(this, (Actor *)0x40);
    }
}

void func_808D2700(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06009DB0);
    arg0->unk18E = 0;
    arg0->unk194 = 0x5DC;
    arg0->params = 0x40;
    arg0->speedXZ = 0.0f;
    func_808D08D0(arg0);
    arg0->unk188 = func_808D2764;
}

void func_808D2764(EnFloormas *this, GlobalContext *globalCtx) {
    Actor *sp38;
    s32 sp34;
    f32 sp30;
    void (*sp28)(EnFloormas *, GlobalContext *);
    SkelAnime *sp24;
    Actor *temp_a0;
    Actor *temp_a3;
    SkelAnime *temp_a0_2;
    f32 temp_f2;
    s16 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    u32 temp_t0;
    s32 phi_a2;
    f32 phi_f12;
    f32 phi_f2;
    s32 phi_a2_2;

    temp_v0 = this->unk194;
    phi_a2_2 = 0;
    if (temp_v0 != 0) {
        this->unk194 = temp_v0 - 1;
    }
    temp_a0 = this->actor.parent;
    temp_a3 = this->actor.child;
    if (this->unk194 == 0) {
        if (func_808D2AA8 != temp_a0->unk188) {
            sp28 = func_808D2AA8;
            sp34 = 0;
            sp38 = temp_a3;
            func_808D1ED4(temp_a0, globalCtx, 0, temp_a3);
        }
        phi_a2 = 0;
        if (func_808D2AA8 != this->actor.child->unk188) {
            sp34 = 0;
            func_808D1ED4(this->actor.child, globalCtx, 0, this->actor.child);
            phi_a2 = 0;
        }
    } else {
        temp_v1 = temp_a0->unk188;
        if ((func_808D2AA8 != temp_v1) && (func_808D1F7C != temp_v1)) {
            phi_a2_2 = 1;
        }
        temp_v1_2 = temp_a3->unk188;
        phi_a2 = phi_a2_2;
        if ((func_808D2AA8 != temp_v1_2) && (func_808D1F7C != temp_v1_2)) {
            phi_a2 = phi_a2_2 + 1;
        }
    }
    temp_f2 = this->actor.scale.x;
    phi_f12 = temp_f2;
    if (phi_a2 == 1) {
        sp30 = temp_f2;
        Math_StepToF((f32 *) &this->actor.scale, 0.007f, 0.0005f);
        goto block_17;
    }
    if (phi_a2 == 0) {
        sp30 = temp_f2;
        Math_StepToF((f32 *) &this->actor.scale, 0.01f, 0.0005f);
block_17:
        phi_f12 = this->actor.scale.x;
    }
    this->actor.scale.z = this->actor.scale.x;
    this->actor.scale.y = this->actor.scale.x;
    phi_f2 = this->actor.scale.x;
    if (((phi_f12 == 0.007f) || (phi_f12 == 0.004f)) && (phi_f12 != this->actor.scale.x)) {
        Audio_PlayActorSound2((Actor *) this, 0x3934U);
        phi_f2 = this->actor.scale.x;
    }
    temp_a0_2 = &this->unk144;
    this->unk354.dim.radius = (s16) (s32) ((f32) D_808D38A0.dim.radius * 100.0f * phi_f2);
    this->unk354.dim.height = (s16) (s32) ((f32) D_808D38A0.dim.height * 100.0f * phi_f2);
    sp24 = temp_a0_2;
    if (SkelAnime_FrameUpdateMatrix(temp_a0_2) != 0) {
        if (this->actor.scale.x >= 0.01f) {
            this->actor.flags &= -0x11;
            func_808D0908(this);
            this->actor.params = 0;
            temp_t0 = this->actor.flags & ~0x200;
            this->actor.flags = temp_t0;
            this->actor.flags = temp_t0 | 0x400;
            this->actor.colChkInfo.health = D_808D38CC.health;
            func_808D0C14(this);
        } else if (this->unk18E == 0) {
            SkelAnime_ChangeAnimDefaultStop(temp_a0_2, &D_060039B0);
            this->unk18E = 1;
        } else {
            SkelAnime_ChangeAnimDefaultStop(temp_a0_2, &D_06009DB0);
            this->unk18E = 0;
        }
    }
    func_800B9010((Actor *) this, 0x3133U);
}

void func_808D2A20(Actor *arg0) {
    void *sp18;
    Actor *temp_a1;
    void *temp_a0;
    void *temp_a2;
    void *temp_a3;

    temp_a1 = arg0;
    temp_a2 = temp_a1->parent;
    temp_a1->unk2C4 = 0.0f;
    temp_a3 = temp_a1->child;
    if ((func_808D2AA8 == temp_a2->unk188) && (temp_a0 = temp_a2, (func_808D2AA8 == temp_a3->unk188))) {
        arg0 = temp_a1;
        sp18 = temp_a3;
        func_808D2AB8(temp_a0, temp_a1, temp_a2, temp_a3);
        func_808D2AB8(sp18);
        Actor_MarkForDeath(arg0);
        return;
    }
    temp_a1->draw = NULL;
    temp_a1->unk188 = func_808D2AA8;
    temp_a1->flags &= -0x12;
}

void func_808D2AA8(EnFloormas *this, GlobalContext *globalCtx) {

}

void func_808D2AB8(Actor *arg0) {
    arg0->unk364 = (u8) (arg0->unk364 & ~3);
    arg0->unk365 = (u8) (arg0->unk365 & ~3);
    arg0->unk366 = (u8) (arg0->unk366 & ~3);
    arg0->unk188 = func_808D2AF4;
}

void func_808D2AF4(EnFloormas *this, GlobalContext *globalCtx) {
    Actor_MarkForDeath((Actor *) this);
}

void func_808D2B18(Actor *arg0) {
    Actor *temp_a0;
    Actor *temp_a0_2;

    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_06000590, -3.0f);
    func_800BE504(arg0, arg0 + 0x354);
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x14);
    arg0->speedXZ = 5.0f;
    arg0->velocity.y = 5.5f;
    if (arg0->params == 0x40) {
        temp_a0 = arg0->parent;
        if ((func_808D2AA8 != temp_a0->unk188) && ((s32) temp_a0->colChkInfo.health > 0)) {
            func_808D2700((EnFloormas *) temp_a0);
        } else {
            temp_a0_2 = arg0->child;
            if ((func_808D2AA8 != temp_a0_2->unk188) && ((s32) temp_a0_2->colChkInfo.health > 0)) {
                func_808D2700((EnFloormas *) temp_a0_2);
            }
        }
        arg0->params = 0x20;
    }
    arg0->unk188 = func_808D2C08;
}

void func_808D2C08(EnFloormas *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk144;
    sp24 = temp_a0;
    if ((SkelAnime_FrameUpdateMatrix(temp_a0) != 0) && ((this->actor.bgCheckFlags & 1) != 0)) {
        if (this->actor.colChkInfo.health == 0) {
            func_808D0930((Actor *) this, globalCtx);
        } else {
            func_808D2CDC(this);
        }
    }
    if (func_801378B8(sp24, 13.0f) != 0) {
        if (this->actor.scale.x > 0.009f) {
            Audio_PlayActorSound2((Actor *) this, 0x387BU);
        } else {
            Audio_PlayActorSound2((Actor *) this, 0x387BU);
        }
    }
    Math_StepToF(&this->actor.speedXZ, 0.0f, 0.2f);
}

void func_808D2CDC(EnFloormas *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06000EA4);
    arg0->actionFunc = func_808D2D30;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.velocity.y = 0.0f;
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
}

void func_808D2D30(EnFloormas *this, GlobalContext *globalCtx) {
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        func_808D0C14(this);
    }
}

void func_808D2D6C(Actor *arg0) {
    arg0->speedXZ = 0.0f;
    if (arg0->velocity.y > 0.0f) {
        arg0->velocity.y = 0.0f;
    }
    func_800BE504(arg0, arg0 + 0x354);
    arg0->unk188 = func_808D2DC0;
}

void func_808D2DC0(EnFloormas *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk18E;
    if (temp_v0 != 0) {
        this->unk18E = temp_v0 - 1;
    }
    if (this->unk18E == 0) {
        func_808D0A48((Actor *) globalCtx);
        if (this->actor.colChkInfo.health == 0) {
            this->unk354.base.acFlags |= 1;
            func_808D0930((Actor *) this, globalCtx);
            return;
        }
        func_808D0C14(this);
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_808D2E34(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u8 temp_v0_2;
    s32 phi_v0;

    temp_v0 = arg0->unk365;
    if (((temp_v0 & 2) != 0) && ((arg0->unk365 = (u8) (temp_v0 & 0xFFFD), func_800BE258(arg0, arg0 + 0x36C), (arg0->unk18C != 0xA)) || ((*arg0->unk390 & 0xDB0B3) == 0))) {
        if (arg0->colChkInfo.damageEffect == 0xE) {
            func_808D0908((EnFloormas *) arg0);
            arg0->colorFilterTimer = 0;
            arg0->colChkInfo.damage = 4;
            arg0->unk192 = -0x640;
            arg0->gravity = -1.0f;
            arg0->unk2C4 = 4.0f;
            arg0->unk18C = 0x14U;
            arg0->unk2C8 = 0.55f;
        }
        if (arg0->unk368 != 0xC) {
            if (Actor_ApplyDamage(arg0) == 0) {
                if (arg0->scale.x > 0.009f) {
                    Audio_PlayActorSound2(arg0, 0x3896U);
                } else {
                    Audio_PlayActorSound2(arg0, 0x3932U);
                }
                Enemy_StartFinishingBlow(arg1, arg0);
                arg0->flags &= -2;
            } else if (arg0->colChkInfo.damage != 0) {
                Audio_PlayActorSound2(arg0, 0x3895U);
            }
            func_808D0A48(arg0, arg1);
            temp_v0_2 = arg0->colChkInfo.damageEffect;
            if (temp_v0_2 != 0xF) {
                if (temp_v0_2 == 3) {
                    func_808D09CC(arg0);
                    if (arg0->colChkInfo.health == 0) {
                        arg0->unk18E = 3;
                        arg0->unk365 = (u8) (arg0->unk365 & 0xFFFE);
                    }
                    func_808D2D6C(arg0);
                    return;
                }
                if (temp_v0_2 == 1) {
                    arg0->unk18E = 0x28;
                    func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
                    Audio_PlayActorSound2(arg0, 0x389EU);
                    func_808D2D6C(arg0);
                    return;
                }
                if (temp_v0_2 == 5) {
                    arg0->unk18E = 0x28;
                    func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
                    Audio_PlayActorSound2(arg0, 0x389EU);
                    arg0->unk18C = 0x1FU;
                    arg0->unk2C8 = 0.55f;
                    arg0->unk2C4 = 2.0f;
                    func_808D2D6C(arg0);
                    return;
                }
                if (temp_v0_2 == 2) {
                    arg0->unk2C4 = 4.0f;
                    arg0->unk18C = 0U;
                    arg0->unk2C8 = 0.55f;
                } else if (temp_v0_2 == 4) {
                    arg0->unk2C4 = 4.0f;
                    arg0->unk18C = 0x14U;
                    arg0->unk2C8 = 0.55f;
                    phi_v0 = 3;
                    if (arg0->scale.x > 0.009f) {
                        phi_v0 = 4;
                    }
                    Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0->unk37A, (f32) arg0->unk37C, (f32) arg0->unk37E, (s16) 0, (s16) 0, (s16) 0, (s16) phi_v0);
                }
                func_808D2B18(arg0);
                /* Duplicate return node #29. Try simplifying control flow for better match */
                return;
            }
            /* Duplicate return node #29. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #29. Try simplifying control flow for better match */
    }
}

void EnFloormas_Update(EnFloormas *this, GlobalContext *globalCtx) {
    void (*sp30)(EnFloormas *, GlobalContext *);
    void (*sp2C)(EnFloormas *, GlobalContext *);
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_v0_2;
    u8 temp_v0;
    void (*temp_v1)(EnFloormas *, GlobalContext *);
    void (*phi_v1)(EnFloormas *, GlobalContext *);
    EnFloormas *this = (EnFloormas *) thisx;

    if (func_808D2AA8 != this->actionFunc) {
        temp_v0 = this->unk354.base.atFlags;
        if ((temp_v0 & 2) != 0) {
            this->unk354.base.atFlags = temp_v0 & 0xFFFD;
            this->actor.speedXZ *= -0.5f;
            temp_f0 = this->actor.speedXZ;
            if (temp_f0 > -5.0f) {
                this->actor.speedXZ = -5.0f;
            } else {
                this->actor.speedXZ = temp_f0;
            }
            this->actor.velocity.y = 5.0f;
            func_808D1740(this);
        }
        func_808D2E34((Actor *) this, globalCtx);
        this->actionFunc(this, globalCtx);
        temp_v1 = this->actionFunc;
        if (func_808D2AF4 != temp_v1) {
            sp30 = func_808D2C08;
            if (func_808D2C08 != temp_v1) {
                this->actor.world.rot.y = this->actor.shape.rot.y;
            }
            sp2C = func_808D22C8;
            if (func_808D22C8 != this->actionFunc) {
                Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
            }
            Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, this->actor.scale.x * 3000.0f, 0.0f, 0x1DU);
            temp_a1 = &this->unk354;
            sp28 = temp_a1;
            Collider_UpdateCylinder((Actor *) this, temp_a1);
            if (func_808D1650 == this->actionFunc) {
                this->actor.flags |= 0x1000000;
                CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) sp28);
            }
            phi_v1 = this->actionFunc;
            if (sp2C != this->actionFunc) {
                if ((func_808D1B44 != this->actionFunc) && (sp30 != this->actionFunc) && (func_808D1F7C != this->actionFunc)) {
                    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp28);
                    phi_v1 = this->actionFunc;
                }
                if ((func_808D24F0 != phi_v1) || (this->unk144.animCurrentFrame < 20.0f)) {
                    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp28);
                }
            }
            Actor_SetHeight((Actor *) this, this->actor.scale.x * 2500.0f);
            if (this->unk354.base.colType == 0xC) {
                temp_v0_2 = this->unk190;
                if (temp_v0_2 != 0) {
                    this->unk190 = temp_v0_2 - 1;
                }
                if (this->unk190 == 0) {
                    this->unk190 = 0x28;
                }
            }
            if (this->unk2C4 > 0.0f) {
                if (this->unk18C != 0xA) {
                    Math_StepToF(&this->unk2C4, 0.0f, 0.05f);
                    temp_f0_2 = (this->unk2C4 + 1.0f) * 0.275f;
                    this->unk2C8 = temp_f0_2;
                    if (temp_f0_2 > 0.55f) {
                        this->unk2C8 = 0.55f;
                        return;
                    }
                    this->unk2C8 = this->unk2C8;
                    return;
                }
                if (Math_StepToF(&this->unk2CC, 0.55f, 0.01375f) == 0) {
                    func_800B9010((Actor *) this, 0x20B2U);
                }
                /* Duplicate return node #33. Try simplifying control flow for better match */
                return;
            }
            /* Duplicate return node #33. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #33. Try simplifying control flow for better match */
    }
}

s32 func_808D3488(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 1) {
        arg3->z += (f32) arg5->unk192;
    }
    return 0;
}

void func_808D34C4(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, s32 **arg5) {
    s32 *sp20;
    s8 *sp18;
    s32 *temp_v0_2;
    s32 *temp_v0_3;
    s8 *temp_v0;
    s8 temp_v1;

    temp_v0 = arg1 + &D_808D393C;
    temp_v1 = *temp_v0;
    if (temp_v1 != -1) {
        sp18 = temp_v0;
        SysMatrix_GetStateTranslation(arg4 + (temp_v1 * 0xC) + 0x2D0);
    }
    if ((arg1 + &D_808D393C) == &D_808D394F) {
        SysMatrix_GetStateTranslationAndScaledX(1000.0f, arg4 + 0x33C);
        SysMatrix_GetStateTranslationAndScaledX(-1000.0f, arg4 + 0x348);
        return;
    }
    if ((arg1 + &D_808D393C) == &D_808D393E) {
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(1600.0f, -700.0f, -1700.0f, 1);
        SysMatrix_InsertYRotation_f(1.0471976f, 1);
        SysMatrix_InsertZRotation_f(0.2617994f, 1);
        Matrix_Scale(2.0f, 2.0f, 2.0f, 1);
        temp_v0_2 = *arg5;
        *arg5 = temp_v0_2 + 8;
        *temp_v0_2 = 0xDA380003;
        sp20 = temp_v0_2;
        sp20->unk4 = Matrix_NewMtx(*arg0);
        temp_v0_3 = *arg5;
        *arg5 = temp_v0_3 + 8;
        temp_v0_3->unk4 = &D_06008688;
        temp_v0_3->unk0 = 0xDE000000;
        SysMatrix_StatePop();
    }
}

void EnFloormas_Draw(EnFloormas *this, GlobalContext *globalCtx) {
    GraphicsContext *sp30;
    GraphicsContext *temp_a0;
    f32 temp_f0;
    EnFloormas *this = (EnFloormas *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C28C(temp_a0);
    if (this->unk354.base.colType == 0xC) {
        func_800AE2A0(globalCtx, &D_808D3958, (s16) ((s32) this->unk190 % 0x28), 0x28);
    }
    sp30->polyOpa.p = SkelAnime_DrawSV2(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_808D3488, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *, Gfx **)) func_808D34C4, (Actor *) this, sp30->polyOpa.p);
    if (this->unk354.base.colType == 0xC) {
        func_800AE5A0(globalCtx);
    }
    temp_f0 = this->actor.scale.x;
    func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk2D0, 0xB, this->unk2C8 * temp_f0 * 100.0f, this->unk2CC * temp_f0 * 100.0f, this->unk2C4, (u8) (s32) this->unk18C);
}

void func_808D3754(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp30;
    GraphicsContext *temp_a0;
    f32 temp_f0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C2DC(temp_a0);
    if (thisx->unk368 == 0xC) {
        func_800AE5E4(globalCtx, &D_808D3958, (s16) ((s32) thisx->unk190 % 0x28), 0x28);
    }
    sp30->polyXlu.p = SkelAnime_DrawSV2(globalCtx, thisx->unk148, thisx->unk164, (s32) thisx->unk146, func_808D3488, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *, Gfx **)) func_808D34C4, thisx, sp30->polyXlu.p);
    if (thisx->unk368 == 0xC) {
        func_800AE8EC(globalCtx);
    }
    temp_f0 = thisx->scale.x;
    func_800BE680(globalCtx, thisx, (Vec3f []) (thisx + 0x2D0), 0xB, thisx->unk2C8 * temp_f0 * 100.0f, thisx->unk2CC * temp_f0 * 100.0f, thisx->unk2C4, (u8) (s32) thisx->unk18C);
}
