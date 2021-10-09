typedef struct DoorWarp1 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ SkelAnime unk15C;                   /* inferred */
    /* 0x1A0 */ Actor *unk1A0;                      /* inferred */
    /* 0x1A4 */ f32 unk1A4;                         /* inferred */
    /* 0x1A8 */ f32 unk1A8;                         /* inferred */
    /* 0x1AC */ f32 unk1AC;                         /* inferred */
    /* 0x1B0 */ f32 unk1B0;                         /* inferred */
    /* 0x1B4 */ f32 unk1B4;                         /* inferred */
    /* 0x1B8 */ f32 unk1B8;                         /* inferred */
    /* 0x1BC */ f32 unk1BC;                         /* inferred */
    /* 0x1C0 */ f32 unk1C0;                         /* inferred */
    /* 0x1C4 */ s16 unk1C4;                         /* inferred */
    /* 0x1C6 */ s16 unk1C6;                         /* inferred */
    /* 0x1C8 */ s16 unk1C8;                         /* inferred */
    /* 0x1CA */ s16 unk1CA;                         /* inferred */
    /* 0x1CC */ s16 unk1CC;                         /* inferred */
    /* 0x1CE */ s16 unk1CE;                         /* inferred */
    /* 0x1D0 */ u16 unk1D0;                         /* inferred */
    /* 0x1D2 */ char pad1D2[0x1];
    /* 0x1D3 */ u8 unk1D3;                          /* inferred */
    /* 0x1D4 */ s8 unk1D4;                          /* inferred */
    /* 0x1D5 */ char pad1D5[0x3];                   /* maybe part of unk1D4[4]? */
    /* 0x1D8 */ void (*actionFunc)(DoorWarp1 *, GlobalContext *);
    /* 0x1DC */ LightNode *unk1DC;                  /* inferred */
    /* 0x1E0 */ LightInfo unk1E0;                   /* inferred */
    /* 0x1EE */ char pad1EE[0x2];
    /* 0x1F0 */ LightNode *unk1F0;                  /* inferred */
    /* 0x1F4 */ LightInfo unk1F4;                   /* inferred */
    /* 0x202 */ s8 unk202;                          /* inferred */
    /* 0x203 */ u8 unk203;                          /* inferred */
    /* 0x204 */ f32 unk204;                         /* inferred */
    /* 0x208 */ char pad208[0x4];
} DoorWarp1;                                        /* size = 0x20C */

struct _mips2c_stack_DoorWarp1_Destroy {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ LightContext *sp18;                  /* inferred */
    /* 0x1C */ char pad1C[0xC];
};                                                  /* size = 0x28 */

struct _mips2c_stack_DoorWarp1_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_DoorWarp1_Init {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_DoorWarp1_SetupAction {};      /* size 0x0 */

struct _mips2c_stack_DoorWarp1_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B849C {};              /* size 0x0 */

struct _mips2c_stack_func_808B8568 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ LightContext *sp30;                  /* inferred */
    /* 0x34 */ LightInfo *sp34;                     /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808B866C {};              /* size 0x0 */

struct _mips2c_stack_func_808B8924 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808B8A7C {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808B8C48 {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808B8E78 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808B900C {
    /* 0x00 */ char pad0[0x1B];
    /* 0x1B */ u8 sp1B;                             /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808B9094 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B90CC {
    /* 0x00 */ char pad0[0x2E];
    /* 0x2E */ s16 sp2E;                            /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808B921C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808B93A0 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808B94A4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B9524 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808B958C {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808B96A0 {};              /* size 0x0 */

struct _mips2c_stack_func_808B96B0 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808B977C {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808B9840 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808B98A8 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808B9B30 {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808B9BE8 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808B9CE8 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808B9E94 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B9ED8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B9F10 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808B9FD0 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ s16 sp34;                            /* inferred */
    /* 0x36 */ char pad36[0x2];
    /* 0x38 */ Actor *sp38;                         /* inferred */
    /* 0x3C */ Actor *sp3C;                         /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808BA10C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808BA550 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ Actor *sp30;                         /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808BAAF4 {
    /* 0x00 */ char pad0[0x1A];
    /* 0x1A */ s16 sp1A;                            /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808BABF4 {};              /* size 0x0 */

struct _mips2c_stack_func_808BACCC {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808BAE9C {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ u32 sp44;                            /* inferred */
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ ? *sp4C;                             /* inferred */
    /* 0x50 */ char pad50[0x8];                     /* maybe part of sp4C[3]? */
    /* 0x58 */ Gfx *sp58;                           /* inferred */
    /* 0x5C */ char pad5C[0xC];                     /* maybe part of sp58[4]? */
    /* 0x68 */ Gfx *sp68;                           /* inferred */
    /* 0x6C */ Gfx *sp6C;                           /* inferred */
    /* 0x70 */ Gfx *sp70;                           /* inferred */
    /* 0x74 */ char pad74[0x10];                    /* maybe part of sp70[5]? */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ char pad88[0x4];
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ s32 sp94;                            /* inferred */
    /* 0x98 */ char pad98[0x8];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_808BB4C4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808BB4F4 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ char pad2C[0x18];                    /* maybe part of sp28[7]? */
    /* 0x44 */ GraphicsContext *sp44;               /* inferred */
    /* 0x48 */ char pad48[0x4];
    /* 0x4C */ Gfx *sp4C;                           /* inferred */
    /* 0x50 */ char pad50[0xC];                     /* maybe part of sp4C[4]? */
    /* 0x5C */ GraphicsContext *sp5C;               /* inferred */
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad64[0x14];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_808BB8D4 {
    /* 0x00 */ char pad0[0x94];
    /* 0x94 */ s8 sp94;                             /* inferred */
    /* 0x95 */ s8 sp95;                             /* inferred */
    /* 0x96 */ s8 sp96;                             /* inferred */
    /* 0x97 */ char pad97[0x1];
    /* 0x98 */ s8 sp98;                             /* inferred */
    /* 0x99 */ s8 sp99;                             /* inferred */
    /* 0x9A */ s8 sp9A;                             /* inferred */
    /* 0x9B */ char pad9B[0x1];
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
};                                                  /* size = 0xA8 */

? func_80169FDC(GlobalContext *, s32);              /* extern */
s32 func_808B849C(DoorWarp1 *arg0, GlobalContext *arg1, u32, s32); /* static */
void func_808B8568(DoorWarp1 *arg0, GlobalContext *arg1); /* static */
s32 func_808B866C(DoorWarp1 *arg0, GlobalContext *arg1); /* static */
void func_808B8924(DoorWarp1 *arg0, GlobalContext *arg1); /* static */
void func_808B8A7C(DoorWarp1 *arg0, GlobalContext *arg1); /* static */
void func_808B8C48(DoorWarp1 *arg0, GlobalContext *arg1); /* static */
void func_808B8E78(DoorWarp1 *arg0, GlobalContext *arg1); /* static */
u8 func_808B900C(DoorWarp1 *arg0, GlobalContext *arg1); /* static */
void func_808B9094(DoorWarp1 *this, GlobalContext *globalCtx); /* static */
void func_808B90CC(DoorWarp1 *this, GlobalContext *globalCtx); /* static */
void func_808B96A0(DoorWarp1 *this, GlobalContext *globalCtx); /* static */
void func_808B977C(DoorWarp1 *this, GlobalContext *globalCtx); /* static */
void func_808B9ED8(DoorWarp1 *this, GlobalContext *globalCtx); /* static */
void func_808B9F10(DoorWarp1 *this, GlobalContext *globalCtx); /* static */
void func_808BA10C(DoorWarp1 *arg0, GlobalContext *arg1); /* static */
void func_808BACCC(Actor *arg0, GlobalContext *arg1); /* static */
void func_808BAE9C(DoorWarp1 *arg0, GlobalContext *arg1); /* static */
void func_808BB4C4(s32 arg0, GlobalContext *arg1);  /* static */
void func_808BB4F4(void *arg0, GlobalContext *arg1); /* static */
void func_808BB8D4(DoorWarp1 *arg0, GlobalContext *arg1, s32 arg2); /* static */
extern ? D_060001A0;
extern AnimationHeader D_06001374;
extern SkeletonHeader D_06002CA8;
extern Gfx D_06003230;
extern void D_060044D8;
extern ? D_06004690;
extern void D_060057D8;
extern ? D_060058C8;
extern void D_06007238;
extern Gfx D_060076C0;
extern CollisionHeader D_06008BD4;
extern s16 D_801F4DE2;
static InitChainEntry D_808BBB40[4];                /* unable to generate initializer */
static ? D_808BBB50;                                /* unable to generate initializer */
static Vec3f D_808BBB5C;                            /* type too large by 4; unable to generate initializer */
static f32 D_808BBB64 = 0.0f;
static Vec3f D_808BBB68;                            /* type too large by 8; unable to generate initializer */
static f32 D_808BBB6C[5] = {0.25f, 0.0f, 0.0f, 0.0f, 0.0f};
static s16 D_808BC000;
static f32 D_808BC004;

void DoorWarp1_SetupAction(DoorWarp1 *this, void (*actionFunc)(DoorWarp1 *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

s32 func_808B849C(DoorWarp1 *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 phi_v1;

    temp_v0 = arg1->sceneNum;
    phi_v1 = 0;
    if ((temp_v0 == 0x1F) && ((gBitFlags->unk0 & gSaveContext.inventory.questItems) == 0)) {
        phi_v1 = 1;
    } else if ((temp_v0 == 0x44) && ((gBitFlags->unk4 & gSaveContext.inventory.questItems) == 0)) {
        phi_v1 = 2;
    } else if ((temp_v0 == 0x5F) && ((gBitFlags->unk8 & gSaveContext.inventory.questItems) == 0)) {
        phi_v1 = 3;
    } else if ((temp_v0 == 0x36) && ((gBitFlags->unkC & gSaveContext.inventory.questItems) == 0)) {
        phi_v1 = 4;
    }
    return phi_v1;
}

void func_808B8568(DoorWarp1 *arg0, GlobalContext *arg1) {
    LightInfo *sp34;
    LightContext *sp30;
    LightContext *temp_a1;
    LightInfo *temp_a0;
    LightInfo *temp_a0_2;

    temp_a0 = arg0 + 0x1E0;
    sp34 = temp_a0;
    Lights_PointNoGlowSetInfo(temp_a0, (s16) (s32) arg0->actor.world.pos.x, (s16) (s32) arg0->actor.world.pos.y, (s16) (s32) arg0->actor.world.pos.z, (u8) 0, (u8) 0, (u8) 0, (s16) 0);
    temp_a1 = arg1 + 0x818;
    sp30 = temp_a1;
    arg0->unk1DC = LightContext_InsertLight(arg1, temp_a1, sp34);
    temp_a0_2 = arg0 + 0x1F4;
    sp34 = temp_a0_2;
    Lights_PointNoGlowSetInfo(temp_a0_2, (s16) (s32) arg0->actor.world.pos.x, (s16) (s32) arg0->actor.world.pos.y, (s16) (s32) arg0->actor.world.pos.z, (u8) 0, (u8) 0, (u8) 0, (s16) 0);
    arg0->unk1F0 = LightContext_InsertLight(arg1, temp_a1, sp34);
}

s32 func_808B866C(DoorWarp1 *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f2;
    s32 phi_v1;

    phi_v1 = 0;
    if (fabsf(arg0->actor.xzDistToPlayer) < 60.0f) {
        temp_f0 = arg1->actorCtx.actorList[2].first->unk28;
        temp_f2 = arg0->actor.world.pos.y;
        if (((temp_f0 - 20.0f) < temp_f2) && (temp_f2 < (temp_f0 + 20.0f))) {
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

void DoorWarp1_Init(DoorWarp1 *this, GlobalContext *globalCtx) {
    s16 temp_v0_2;
    u32 temp_v0;
    u32 phi_v0;
    DoorWarp1 *this = (DoorWarp1 *) thisx;

    this->unk1CC = 0;
    this->unk202 = 0;
    this->unk203 = 0;
    this->unk1A0 = NULL;
    this->unk1C0 = 0.0f;
    Actor_ProcessInitChain((Actor *) this, D_808BBB40);
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    temp_v0 = this->actor.params & 0xFF;
    this->unk1D3 = 0;
    this->unk1D4 = 0;
    this->unk203 = 0;
    this->unk204 = 1.0f;
    phi_v0 = temp_v0;
    switch (temp_v0) {                              /* switch 1 */
        func_808B8568(this, globalCtx);
        phi_v0 = this->actor.params & 0xFF;
        break;
    }
    switch (phi_v0) {                               /* switch 2 */
    case 0:                                         /* switch 2 */
        func_808B8924(this, globalCtx);
        break;
    case 1:                                         /* switch 2 */
        func_808B8A7C(this, globalCtx);
        break;
    case 2:                                         /* switch 2 */
    case 3:                                         /* switch 2 */
    case 4:                                         /* switch 2 */
    case 5:                                         /* switch 2 */
        this->unk1D3 = 1;
        BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06008BD4);
        func_808B8C48(this, globalCtx);
        break;
    case 6:                                         /* switch 2 */
        func_808B8E78(this, globalCtx);
        break;
    }
    temp_v0_2 = globalCtx->sceneNum;
    if ((temp_v0_2 == 0x1F) || (temp_v0_2 == 0x44) || (temp_v0_2 == 0x36) || (temp_v0_2 == 0x5F)) {
        func_800FE484();
        globalCtx->interfaceCtx.restrictions.unk_312 = 1;
        globalCtx->interfaceCtx.restrictions.songOfSoaring = 1;
    }
}

void DoorWarp1_Destroy(DoorWarp1 *this, GlobalContext *globalCtx) {
    LightContext *sp18;
    GlobalContext *temp_a0;
    LightContext *temp_a1;
    s16 temp_a0_2;
    s16 temp_v1;
    s16 phi_a0;
    DoorWarp1 *this = (DoorWarp1 *) thisx;

    temp_a1 = &globalCtx->lightCtx;
    temp_a0 = globalCtx;
    globalCtx = globalCtx;
    sp18 = temp_a1;
    LightContext_RemoveLight(temp_a0, temp_a1, this->unk1DC);
    LightContext_RemoveLight(globalCtx, temp_a1, this->unk1F0);
    phi_a0 = 0;
    do {
        temp_a0_2 = phi_a0 + 1;
        globalCtx->envCtx.unk_8C.diffuseColor1[phi_a0] = 0;
        temp_v1 = globalCtx->envCtx.unk_8C.diffuseColor1[phi_a0];
        globalCtx->envCtx.unk_8C.fogColor[phi_a0] = temp_v1;
        globalCtx->envCtx.unk_8C.ambientColor[phi_a0] = temp_v1;
        phi_a0 = temp_a0_2;
    } while ((s32) temp_a0_2 < 3);
    if (this->unk1D3 != 0) {
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
    }
}

void func_808B8924(DoorWarp1 *arg0, GlobalContext *arg1) {
    arg0->unk1C4 = 0;
    arg0->unk1C6 = -0x8C;
    arg0->unk1C8 = -0x50;
    arg0->unk1BC = 1.0f;
    arg0->unk1B0 = 0.0f;
    arg0->unk1B4 = 0.0f;
    arg0->unk1B8 = 0.0f;
    arg0->unk1A4 = 0.3f;
    arg0->unk1A8 = 0.3f;
    arg0->unk1AC = 0.0f;
    arg0->actor.shape.yOffset = 1.0f;
    arg0->unk1D0 = 0;
    D_808BC000 = 0x64;
    Lights_PointNoGlowSetInfo(arg0 + 0x1E0, (s16) (s32) arg0->actor.world.pos.x, (s16) (s32) arg0->actor.world.pos.y, (s16) (s32) arg0->actor.world.pos.z, (u8) 0xC8, (u8) 0xFF, (u8) 0xFF, (s16) 0xFF);
    Lights_PointNoGlowSetInfo(arg0 + 0x1F4, (s16) (s32) arg0->actor.world.pos.x, (s16) (s32) arg0->actor.world.pos.y, (s16) (s32) arg0->actor.world.pos.z, (u8) 0xC8, (u8) 0xFF, (u8) 0xFF, (s16) 0xFF);
    DoorWarp1_SetupAction(arg0, func_808B96B0);
}

void func_808B8A7C(DoorWarp1 *arg0, GlobalContext *arg1) {
    SkelAnime *sp34;
    SkelAnime *temp_a1;

    temp_a1 = arg0 + 0x15C;
    sp34 = temp_a1;
    SkelAnime_Init(arg1, temp_a1, &D_06002CA8, &D_06001374, NULL, NULL, 0);
    SkelAnime_ChangeAnimImpl(sp34, &D_06001374, 1.0f, 1.0f, 1.0f, (u8) 2, 40.0f, (s8) 1);
    arg0->unk1C4 = 0;
    arg0->unk1C6 = -0x8C;
    arg0->unk1C8 = -0x50;
    arg0->unk1D0 = 0;
    arg0->unk1BC = 1.0f;
    arg0->unk1A4 = 0.3f;
    arg0->unk1A8 = 0.3f;
    arg0->unk1B0 = 0.0f;
    arg0->unk1B4 = 0.0f;
    arg0->unk1B8 = 0.0f;
    arg0->unk1AC = 0.0f;
    arg0->actor.shape.yOffset = -400.0f;
    D_808BC000 = 0xA0;
    Lights_PointNoGlowSetInfo(arg0 + 0x1E0, (s16) (s32) arg0->actor.world.pos.x, (s16) (s32) arg0->actor.world.pos.y, (s16) (s32) arg0->actor.world.pos.z, (u8) 0xC8, (u8) 0xFF, (u8) 0xFF, (s16) 0xFF);
    Lights_PointNoGlowSetInfo(arg0 + 0x1F4, (s16) (s32) arg0->actor.world.pos.x, (s16) (s32) arg0->actor.world.pos.y, (s16) (s32) arg0->actor.world.pos.z, (u8) 0xC8, (u8) 0xFF, (u8) 0xFF, (s16) 0xFF);
    DoorWarp1_SetupAction(arg0, func_808B9B30);
}

void func_808B8C48(Actor *arg0, GlobalContext *arg1) {
    s16 temp_t0;
    s32 temp_v1;

    arg0->shape.yOffset = 0.0f;
    Actor_SetScale(arg0, 0.1f);
    Lights_PointNoGlowSetInfo(arg0 + 0x1E0, (s16) (s32) arg0->world.pos.x, (s16) (s32) arg0->world.pos.y, (s16) (s32) arg0->world.pos.z, (u8) 0xC8, (u8) 0xFF, (u8) 0xFF, (s16) 0xFF);
    Lights_PointNoGlowSetInfo(arg0 + 0x1F4, (s16) (s32) arg0->world.pos.x, (s16) (s32) arg0->world.pos.y, (s16) (s32) arg0->world.pos.z, (u8) 0xC8, (u8) 0xFF, (u8) 0xFF, (s16) 0xFF);
    temp_t0 = arg0->params;
    temp_v1 = temp_t0 & 0xFF;
    if (((temp_v1 == 2) && ((gBitFlags->unk0 & gSaveContext.inventory.questItems) != 0)) || ((temp_v1 == 3) && ((gBitFlags->unk4 & gSaveContext.inventory.questItems) != 0)) || ((temp_v1 == 4) && ((gBitFlags->unk8 & gSaveContext.inventory.questItems) != 0)) || ((temp_v1 == 5) && ((gBitFlags->unkC & gSaveContext.inventory.questItems) != 0))) {
        Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, 0x38, arg0->world.pos.x, arg0->world.pos.y + 10.0f, arg0->world.pos.z, (s16) (s32) arg0->world.rot.x, (s16) (s32) arg0->world.rot.y, (s16) (s32) arg0->world.rot.z, (s32) (s16) ((s16) (temp_t0 & 0xFF00) | 6));
        DoorWarp1_SetupAction((DoorWarp1 *) arg0, func_808BAAF4);
        return;
    }
    DoorWarp1_SetupAction((DoorWarp1 *) arg0, func_808BABF4);
}

void func_808B8E78(Actor *arg0, GlobalContext *arg1) {
    Actor_SetScale(arg0, 0.1f);
    Lights_PointNoGlowSetInfo(arg0 + 0x1E0, (s16) (s32) arg0->world.pos.x, (s16) (s32) arg0->world.pos.y, (s16) (s32) arg0->world.pos.z, (u8) 0xC8, (u8) 0xFF, (u8) 0xFF, (s16) 0);
    Lights_PointNoGlowSetInfo(arg0 + 0x1F4, (s16) (s32) arg0->world.pos.x, (s16) (s32) arg0->world.pos.y, (s16) (s32) arg0->world.pos.z, (u8) 0xC8, (u8) 0xFF, (u8) 0xFF, (s16) 0);
    Actor_SetScale(arg0, 3.0f);
    arg0->unk1D4 = 1;
    arg0->unk1D0 = 0;
    arg0->unk1A8 = 0.0f;
    arg0->unk1AC = 0.0f;
    arg0->unk1A4 = 700.0f;
    if (arg1->sceneNum == 0x16) {
        DoorWarp1_SetupAction((DoorWarp1 *) arg0, func_808B96A0);
        return;
    }
    if ((gSaveContext.weekEventReg[86] & 0x80) != 0) {
        arg0->unk1D4 = 0;
        DoorWarp1_SetupAction((DoorWarp1 *) arg0, func_808B921C);
        return;
    }
    DoorWarp1_SetupAction((DoorWarp1 *) arg0, func_808B9094);
}

u8 func_808B900C(DoorWarp1 *arg0, GlobalContext *arg1) {
    u8 sp1B;
    u16 temp_a0;
    u32 temp_v0;
    void *temp_v1;

    sp1B = 0;
    if (func_800EE29C(arg1, 0x239U) != 0) {
        temp_v0 = func_800EE200(arg1, 0x239U);
        temp_v1 = arg1 + (temp_v0 * 4);
        temp_a0 = arg1->csCtx.npcActions[temp_v0]->unk0;
        if (arg0->unk208 != temp_a0) {
            arg0->unk208 = (u8) temp_a0;
            if (*temp_v1->unk1F4C == 2) {
                sp1B = 1;
            }
        }
    }
    return sp1B;
}

void func_808B9094(DoorWarp1 *this, GlobalContext *globalCtx) {
    if (func_808B900C(this) != 0) {
        DoorWarp1_SetupAction(this, func_808B90CC);
    }
}

void func_808B90CC(DoorWarp1 *this, GlobalContext *globalCtx) {
    s16 sp2E;
    f32 temp_f0;
    s16 temp_v0;
    s16 phi_v1;
    f32 phi_f0;

    temp_v0 = globalCtx->sceneNum;
    phi_v1 = 0;
    phi_f0 = 0.0f;
    if (temp_v0 == 0x1B) {
        phi_v1 = -0xA;
        phi_f0 = -5.0f;
    } else {
        if (temp_v0 == 0x21) {
            goto block_5;
        }
        if (temp_v0 == 0x49) {
block_5:
            phi_v1 = -0x14;
        }
    }
    sp2E = phi_v1;
    Math_SmoothStepToF(&this->unk1AC, 40.0f, 0.5f, 1.2f + phi_f0, 0.01f);
    Math_SmoothStepToF(&this->unk1A4, 0.0f, 0.5f, 12.0f, 0.1f);
    temp_f0 = this->unk1A4;
    if ((temp_f0 < 460.0f) && (temp_f0 > 100.0f)) {
        sp2E = phi_v1;
        func_808BB8D4(this, globalCtx, 6);
    }
    if (this->unk1A4 < 0.1f) {
        this->unk1D0 = phi_v1 + 0x1E;
        this->unk1D4 = 0;
        DoorWarp1_SetupAction(this, func_808B921C);
    }
    Audio_PlayActorSound2((Actor *) this, 0x21B7U);
}

void func_808B921C(DoorWarp1 *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    u16 temp_v0;

    temp_v0 = this->unk1D0;
    if (temp_v0 != 0) {
        this->unk1D0 = temp_v0 - 1;
        return;
    }
    Math_SmoothStepToF(&this->unk1A8, 1.0f, 0.2f, 0.05f, 0.01f);
    temp_f0 = this->unk1A8;
    this->unk203 = (u8) (u32) (temp_f0 * 200.0f);
    if (temp_f0 > 0.8f) {
        func_808BB8D4(this, globalCtx, 1);
    }
    if ((func_808B866C(this, globalCtx) != 0) && (func_801690CC(globalCtx) == 0)) {
        func_800B7298(globalCtx, (Actor *) this, 7U);
        func_801518B0(globalCtx, 0xF2U, (Actor *) this);
        DoorWarp1_SetupAction(this, func_808B93A0);
    }
    Audio_PlayActorSound2((Actor *) this, 0x21B8U);
}

void func_808B93A0(DoorWarp1 *this, GlobalContext *globalCtx) {
    Actor *sp20;

    sp20 = globalCtx->actorCtx.actorList[2].first;
    if ((func_80152498(&globalCtx->msgCtx) == 4) && (func_80147624(globalCtx) != 0)) {
        func_801477B4(globalCtx);
        if (globalCtx->msgCtx.choiceIndex == 0) {
            func_8019F208();
            func_800B7298(globalCtx, (Actor *) this, 9U);
            sp20->unk3A0 = (f32) this->actor.world.pos.x;
            sp20->unk3A8 = (f32) this->actor.world.pos.z;
            this->unk1CA = 1;
            DoorWarp1_SetupAction(this, func_808B9524);
        } else {
            func_8019F230();
            func_800B7298(globalCtx, (Actor *) this, 6U);
            DoorWarp1_SetupAction(this, func_808B94A4);
        }
    }
    func_808BB8D4(this, globalCtx, 1);
    Audio_PlayActorSound2((Actor *) this, 0x21B8U);
}

void func_808B94A4(DoorWarp1 *this, GlobalContext *globalCtx) {
    if ((func_808B866C(this, globalCtx) == 0) && (ActorCutscene_GetCurrentIndex() != globalCtx->unk_1879C[8])) {
        DoorWarp1_SetupAction(this, func_808B921C);
    }
    func_808BB8D4(this, globalCtx, 1);
    Audio_PlayActorSound2((Actor *) this, 0x21B8U);
}

void func_808B9524(DoorWarp1 *this, GlobalContext *globalCtx) {
    void *sp1C;

    sp1C = globalCtx + 0x18000;
    if (ActorCutscene_GetCanPlayNext(globalCtx->unk_1879C[9]) == 0) {
        ActorCutscene_SetIntentToPlay(globalCtx->unk_1879C[9]);
        return;
    }
    ActorCutscene_Start(globalCtx->unk_1879C[9], NULL);
    DoorWarp1_SetupAction(this, func_808B958C);
}

void func_808B958C(DoorWarp1 *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    Actor *temp_v0;
    s16 temp_v1;
    u16 temp_t8;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    sp2C = temp_v0;
    func_808BB8D4(this, (GlobalContext *)1);
    temp_v1 = this->unk1CA;
    if ((s32) temp_v1 >= 0x65) {
        if (temp_v0->velocity.y < 10.0f) {
            temp_v0->gravity = 0.1f;
        } else {
            temp_v0->gravity = 0.0f;
        }
    } else {
        this->unk1CA = temp_v1 + 1;
    }
    temp_t8 = this->unk1D0 + 1;
    this->unk1D0 = temp_t8;
    if (((temp_t8 & 0xFFFF) >= 0x79) && (gSaveContext.nextCutsceneIndex == 0xFFEF)) {
        func_808BA10C(this, globalCtx);
        globalCtx->unk_1887F = 3;
        gSaveContext.nextTransition = 3;
    }
    Math_SmoothStepToF(&this->unk1A8, 6.0f, 0.2f, 0.02f, 0.01f);
    Audio_PlayActorSound2((Actor *) this, 0x2026U);
}

void func_808B96A0(DoorWarp1 *this, GlobalContext *globalCtx) {

}

void func_808B96B0(DoorWarp1 *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;

    Audio_PlayActorSound2((Actor *) this, 0x2025U);
    Math_SmoothStepToF(&this->unk1B0, 255.0f, 0.4f, 10.0f, 0.01f);
    Math_SmoothStepToF(&this->unk1B4, 255.0f, 0.4f, 10.0f, 0.01f);
    temp_v0 = this->unk1C4;
    if ((s32) temp_v0 < 0x64) {
        this->unk1C4 = temp_v0 + 2;
    }
    temp_v0_2 = this->unk1C6;
    if ((s32) temp_v0_2 < 0x78) {
        this->unk1C6 = temp_v0_2 + 4;
    }
    temp_v0_3 = this->unk1C8;
    if ((s32) temp_v0_3 < 0xE6) {
        this->unk1C8 = temp_v0_3 + 4;
        return;
    }
    DoorWarp1_SetupAction(this, func_808B977C);
}

void func_808B977C(DoorWarp1 *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    Actor *temp_v1;

    Audio_PlayActorSound2((Actor *) this, 0x2025U);
    if ((func_808B866C(this, globalCtx) != 0) && (func_801690CC(globalCtx) == 0)) {
        temp_v1 = globalCtx->actorCtx.actorList[2].first;
        sp2C = temp_v1;
        func_801A5CFC(0x2826U, &temp_v1->projectedPos, 4U, &D_801DB4B0, &D_801DB4B0, &D_801DB4B8);
        func_800B7298(globalCtx, (Actor *) this, 9U);
        temp_v1->unk3A0 = (f32) this->actor.world.pos.x;
        temp_v1->unk3A8 = (f32) this->actor.world.pos.z;
        this->unk1CA = 1;
        DoorWarp1_SetupAction(this, func_808B9840);
    }
}

void func_808B9840(DoorWarp1 *this, GlobalContext *globalCtx) {
    void *sp1C;

    sp1C = globalCtx + 0x18000;
    if (ActorCutscene_GetCanPlayNext(globalCtx->unk_1879C[9]) == 0) {
        ActorCutscene_SetIntentToPlay(globalCtx->unk_1879C[9]);
        return;
    }
    ActorCutscene_Start(globalCtx->unk_1879C[9], NULL);
    DoorWarp1_SetupAction(this, func_808B98A8);
}

void func_808B98A8(DoorWarp1 *this, GlobalContext *globalCtx) {
    Actor *temp_s1;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    u16 temp_a0;
    u16 temp_t8;

    temp_v0 = this->unk1CA;
    temp_s1 = globalCtx->actorCtx.actorList[2].first;
    if ((s32) temp_v0 >= 0x65) {
        if (temp_s1->velocity.y < 10.0f) {
            temp_s1->gravity = 0.1f;
        } else {
            temp_s1->gravity = 0.0f;
        }
    } else {
        this->unk1CA = temp_v0 + 1;
    }
    Math_SmoothStepToF(&this->unk1B0, 0.0f, 0.2f, 6.0f, 0.01f);
    temp_t8 = this->unk1D0 + 1;
    this->unk1D0 = temp_t8;
    temp_v0_2 = D_808BC000;
    temp_v1 = temp_t8 & 0xFFFF;
    if ((s32) temp_v0_2 < temp_v1) {
        temp_a0 = gSaveContext.nextCutsceneIndex;
        if ((temp_a0 == 0xFFEF) && ((s32) temp_v0_2 < temp_v1) && (temp_a0 == 0xFFEF)) {
            temp_v0_3 = (s32) this->actor.params >> 8;
            if ((temp_v0_3 & 0xFF) != 0xFF) {
                globalCtx->nextEntranceIndex = globalCtx->setupExitList[temp_v0_3];
                Scene_SetExitFade(globalCtx);
                globalCtx->sceneLoadFlag = 0x14;
            } else {
                func_80169FDC(globalCtx, 0xFFEF);
            }
        }
    }
    Math_StepToF(&this->unk1A4, 2.0f, 0.01f);
    Math_StepToF(&this->unk1A8, 10.0f, 0.02f);
    Lights_PointNoGlowSetInfo(&this->unk1E0, (s16) (s32) (temp_s1->world.pos.x + 10.0f), (s16) (s32) (temp_s1->world.pos.y + 10.0f), (s16) (s32) (temp_s1->world.pos.z + 10.0f), (u8) 0xEB, (u8) 0xFF, (u8) 0xFF, (s16) 0xFF);
    Lights_PointNoGlowSetInfo(&this->unk1F4, (s16) (s32) (temp_s1->world.pos.x - 10.0f), (s16) (s32) (temp_s1->world.pos.y - 10.0f), (s16) (s32) (temp_s1->world.pos.z - 10.0f), (u8) 0xEB, (u8) 0xFF, (u8) 0xFF, (s16) 0xFF);
    Math_SmoothStepToF(&this->actor.shape.yOffset, 0.0f, 0.5f, 2.0f, 0.1f);
}

void func_808B9B30(DoorWarp1 *this, GlobalContext *globalCtx) {
    if (fabsf(this->actor.xzDistToPlayer) >= 60.0f) {
        if (func_808B849C(this, globalCtx) != 0) {
            this->unk1A0 = Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x140, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, func_808B849C(this, globalCtx) - 1);
        }
        DoorWarp1_SetupAction(this, func_808B9BE8);
    }
}

void func_808B9BE8(DoorWarp1 *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;

    Audio_PlayActorSound2((Actor *) this, 0x2025U);
    Math_SmoothStepToF(&this->unk1B0, 255.0f, 0.2f, 2.0f, 0.1f);
    Math_SmoothStepToF(&this->unk1B4, 255.0f, 0.2f, 2.0f, 0.1f);
    temp_v0 = this->unk1C4;
    if ((s32) temp_v0 < 0xA) {
        this->unk1C4 = temp_v0 + 2;
    }
    temp_v0_2 = this->unk1C6;
    if ((s32) temp_v0_2 < 0x78) {
        this->unk1C6 = temp_v0_2 + 4;
    }
    temp_v0_3 = this->unk1C8;
    if ((s32) temp_v0_3 < 0xE6) {
        this->unk1C8 = temp_v0_3 + 4;
        return;
    }
    this->actor.parent = NULL;
    if (func_808B849C(this, globalCtx) != 0) {
        this->unk202 = 1;
        DoorWarp1_SetupAction(this, func_808B9CE8);
        return;
    }
    DoorWarp1_SetupAction(this, func_808B9F10);
}

void func_808B9CE8(DoorWarp1 *this, GlobalContext *globalCtx) {
    s16 temp_v1;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    u32 temp_a2;
    u32 temp_a2_2;
    u32 temp_a2_3;
    u32 temp_a2_4;
    u32 temp_a2_5;
    s32 phi_a3;
    u32 phi_a2;

    if (this->unk203 == 0) {
        if (Actor_HasParent((Actor *) this, globalCtx) == 0) {
            func_800B8A1C((Actor *) this, globalCtx, func_808B849C(this, globalCtx) + 0x54, 30.0f, 80.0f);
            return;
        }
        temp_v1 = globalCtx->sceneNum;
        if (temp_v1 != 0x1F) {
            if (temp_v1 != 0x36) {
                if (temp_v1 != 0x44) {
                    if (temp_v1 != 0x5F) {
                        temp_a2 = gSaveContext.roomInf[126][4];
                        phi_a3 = temp_a2 & 0xFF;
                        phi_a2 = temp_a2;
                    } else {
                        temp_a2_2 = gSaveContext.roomInf[126][4];
                        temp_a3 = temp_a2_2 & 0xFF;
                        gSaveContext.roomInf[126][3] = (temp_a3 << 0x18) | (gSaveContext.roomInf[126][3] & 0xFFFFFF);
                        phi_a3 = temp_a3;
                        phi_a2 = temp_a2_2;
                    }
                } else {
                    temp_a2_3 = gSaveContext.roomInf[126][4];
                    temp_a3_2 = temp_a2_3 & 0xFF;
                    gSaveContext.roomInf[126][3] = ((temp_a3_2 & 0xFF) << 8) | (gSaveContext.roomInf[126][3] & 0xFFFF00FF);
                    phi_a3 = temp_a3_2;
                    phi_a2 = temp_a2_3;
                }
            } else {
                temp_a2_4 = gSaveContext.roomInf[126][4];
                temp_a3_3 = temp_a2_4 & 0xFF;
                gSaveContext.roomInf[126][3] = ((temp_a3_3 & 0xFF) << 0x10) | (gSaveContext.roomInf[126][3] & 0xFF00FFFF);
                phi_a3 = temp_a3_3;
                phi_a2 = temp_a2_4;
            }
        } else {
            temp_a2_5 = gSaveContext.roomInf[126][4];
            temp_a3_4 = temp_a2_5 & 0xFF;
            gSaveContext.roomInf[126][3] = (temp_a3_4 & 0xFF) | (gSaveContext.roomInf[126][3] & ~0xFF);
            phi_a3 = temp_a3_4;
            phi_a2 = temp_a2_5;
        }
        gSaveContext.roomInf[126][4] = ((phi_a3 + 1) & 0xFF) | (phi_a2 & ~0xFF);
        Item_Give(globalCtx, (func_808B849C(this, globalCtx, phi_a2, phi_a3) + 0x5C) & 0xFF);
        DoorWarp1_SetupAction(this, func_808B9E94);
        /* Duplicate return node #13. Try simplifying control flow for better match */
    }
}

void func_808B9E94(DoorWarp1 *this, GlobalContext *globalCtx) {
    if (func_80152498(&globalCtx->msgCtx) == 2) {
        this->unk1CE = 0x6E;
        DoorWarp1_SetupAction(this, func_808B9ED8);
    }
}

void func_808B9ED8(DoorWarp1 *this, GlobalContext *globalCtx) {
    this->unk1CE += -1;
    if ((s32) this->unk1CE <= 0) {
        func_808BA10C();
    }
}

void func_808B9F10(DoorWarp1 *this, GlobalContext *globalCtx) {
    Actor *sp24;

    Audio_PlayActorSound2((Actor *) this, 0x2025U);
    if ((this->unk203 == 0) && (func_808B866C(this, globalCtx) != 0) && (func_801690CC(globalCtx) == 0) && (this->unk203 == 0)) {
        sp24 = globalCtx->actorCtx.actorList[2].first;
        Interface_ChangeAlpha(1U);
        func_800B7298(globalCtx, (Actor *) this, 9U);
        sp24->unk3A0 = (f32) this->actor.world.pos.x;
        sp24->unk3A8 = (f32) this->actor.world.pos.z;
        this->unk1CA = 0x14;
        DoorWarp1_SetupAction(this, func_808B9FD0);
    }
}

void func_808B9FD0(DoorWarp1 *this, GlobalContext *globalCtx) {
    Actor *sp3C;
    Actor *sp38;
    s16 sp34;
    void *sp30;
    Actor *temp_v0;
    s16 temp_v1;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    sp3C = temp_v0;
    sp38 = temp_v0;
    temp_v1 = this->unk1CA;
    if (temp_v1 != 0) {
        this->unk1CA = temp_v1 - 1;
        return;
    }
    sp30 = globalCtx + 0x18000;
    if (ActorCutscene_GetCanPlayNext(globalCtx->unk_1879C[9]) == 0) {
        ActorCutscene_SetIntentToPlay(globalCtx->unk_1879C[9]);
        return;
    }
    ActorCutscene_Start(globalCtx->unk_1879C[9], NULL);
    func_801A5CFC(0x2826U, &sp3C->projectedPos, 4U, &D_801DB4B0, &D_801DB4B0, &D_801DB4B8);
    sp34 = SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06001374);
    SkelAnime_ChangeAnimImpl(&this->unk15C, &D_06001374, 1.0f, (f32) sp34, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06001374), (u8) 2, 40.0f, (s8) 1);
    this->unk1CA = 0x32;
    D_808BC004 = sp38->world.pos.y;
    DoorWarp1_SetupAction(this, func_808BA550);
}

void func_808BA10C(DoorWarp1 *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v1;
    s32 temp_v0_2;
    u8 temp_a0;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_a0;
    s32 phi_v0_3;
    u32 phi_a0_2;

    temp_v0 = arg1->sceneNum;
    if ((temp_v0 == 0x1F) || (temp_v0 == 0x44) || (temp_v0 == 0x36) || (temp_v0 == 0x5F)) {
        D_801F4DE2 = temp_v0;
        temp_v0_3 = arg1->sceneNum;
        if (temp_v0_3 == 0x1F) {
            goto block_12;
        }
        if (temp_v0_3 == 0x44) {
            phi_v0_2 = 1;
        } else if (temp_v0_3 == 0x36) {
            phi_v0_2 = 2;
        } else if (temp_v0_3 == 0x5F) {
            phi_v0_2 = 3;
        } else {
block_12:
            phi_v0_2 = 0;
        }
        if (arg0->unk202 != 0) {
            if (phi_v0_2 > 0) {
                gSaveContext.weekEventReg[7] |= 0x80;
            }
            if (phi_v0_2 != 0) {
                if (phi_v0_2 != 1) {
                    if (phi_v0_2 != 2) {
                        if (phi_v0_2 != 3) {
                            phi_a0 = 0;
                        } else {
                            phi_a0_2 = (u32) (gSaveContext.roomInf[126][3] & 0xFF000000) >> 0x18;
                            goto block_25;
                        }
                    } else {
                        phi_a0_2 = (u32) (gSaveContext.roomInf[126][3] & 0xFF0000) >> 0x10;
                        goto block_25;
                    }
                } else {
                    phi_a0_2 = (u32) (gSaveContext.roomInf[126][3] & 0xFF00) >> 8;
                    goto block_25;
                }
            } else {
                phi_a0_2 = gSaveContext.roomInf[126][3];
block_25:
                phi_a0 = phi_a0_2 & 0xFF;
            }
            if (phi_a0 != 0) {
                if (phi_a0 != 1) {
                    if (phi_a0 != 2) {
                        phi_v0_3 = 2;
                        if (phi_a0 != 3) {
                            phi_v0_3 = 0xA;
                        }
                    } else {
                        phi_v0_3 = 1;
                    }
                } else {
                    phi_v0_3 = 0;
                }
            } else {
                phi_v0_3 = 0xA;
            }
            arg1->nextEntranceIndex = 0xCC00;
            if (phi_v0_3 < 0xA) {
                gSaveContext.nextCutsceneIndex = phi_v0_3 + 0xFFF0;
            }
            arg1->sceneLoadFlag = 0x14;
            arg1->unk_1887F = 3;
            gSaveContext.nextTransition = 3;
            return;
        }
        if (phi_v0_2 != 0) {
            if (phi_v0_2 != 1) {
                if (phi_v0_2 != 2) {
                    if (phi_v0_2 != 3) {
                        return;
                    }
                    temp_a0 = gSaveContext.weekEventReg[55];
                    if ((temp_a0 & 0x80) != 0) {
                        arg1->nextEntranceIndex = 0x6A90;
                        gSaveContext.nextCutsceneIndex = 0xFFF0;
                        arg1->sceneLoadFlag = 0x14;
                        arg1->unk_1887F = 3;
                        gSaveContext.nextTransition = 3;
                        return;
                    }
                    gSaveContext.weekEventReg[55] = temp_a0 | 0x80;
                    arg1->nextEntranceIndex = 0x6A80;
                    gSaveContext.nextCutsceneIndex = 0xFFF0;
                    arg1->sceneLoadFlag = 0x14;
                    arg1->unk_1887F = 3;
                    gSaveContext.nextTransition = 3;
                    return;
                }
                gSaveContext.weekEventReg[52] |= 0x20;
                arg1->nextEntranceIndex = 0x20F0;
                gSaveContext.nextCutsceneIndex = 0xFFF2;
                arg1->sceneLoadFlag = 0x14;
                arg1->unk_1887F = 3;
                gSaveContext.nextTransition = 3;
                return;
            }
            gSaveContext.weekEventReg[33] |= 0x80;
            arg1->nextEntranceIndex = 0xAE70;
            arg1->sceneLoadFlag = 0x14;
            arg1->unk_1887F = 3;
            gSaveContext.nextTransition = 3;
            return;
        }
        if ((gSaveContext.weekEventReg[20] & 2) != 0) {
            gSaveContext.weekEventReg[7] |= 0x80;
            arg1->nextEntranceIndex = 0x3010;
            arg1->sceneLoadFlag = 0x14;
            arg1->unk_1887F = 3;
            gSaveContext.nextTransition = 3;
            return;
        }
        arg1->nextEntranceIndex = 0x8600;
        gSaveContext.nextCutsceneIndex = 0xFFF0;
        arg1->sceneLoadFlag = 0x14;
        arg1->unk_1887F = 3;
        gSaveContext.nextTransition = 3;
        return;
    }
    temp_v1 = arg0->actor.params;
    temp_v0_2 = (s32) temp_v1 >> 8;
    phi_v0 = temp_v0_2;
    if ((temp_v0_2 & 0xFF) != 0xFF) {
        if ((temp_v1 & 0xFF) == 6) {
            gSaveContext.respawnFlag = -2;
            phi_v0 = (s32) arg0->actor.params >> 8;
        }
        arg1->nextEntranceIndex = *(arg1->setupExitList + (phi_v0 * 2));
        Scene_SetExitFade(arg1);
        arg1->sceneLoadFlag = 0x14;
        return;
    }
    func_80169FDC(arg1);
}

void func_808BA550(DoorWarp1 *this, GlobalContext *globalCtx) {
    Actor *sp30;
    Actor *temp_v1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s16 temp_a2;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v1_2;
    s32 temp_f16;
    s32 temp_v0_2;
    u16 temp_t5;
    u8 temp_t7;
    f32 phi_f0;
    s32 phi_a2;
    s32 phi_v0;
    f32 phi_f0_2;
    s16 phi_v1;

    temp_a2 = this->unk1CA;
    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if (temp_a2 != 0) {
        this->unk1CA = temp_a2 - 1;
    }
    phi_a2 = (s32) this->unk1CA;
    if ((s32) this->unk1CA < 0x1F) {
        temp_t7 = temp_v1->unk14B;
        phi_f0 = 0.0f;
        switch (temp_t7) {
        case 0:
            phi_f0 = -37.0f;
            break;
        case 1:
            phi_f0 = -37.0f;
            break;
        case 2:
            phi_f0 = -37.0f;
            break;
        case 3:
            phi_f0 = -20.0f;
            break;
        case 4:
            phi_f0 = -25.0f;
            break;
        }
        temp_f2 = this->actor.world.pos.y + (this->actor.shape.yOffset * 0.1f) + phi_f0;
        if (D_808BC004 < temp_f2) {
            temp_v1->world.pos.y = temp_f2;
            phi_a2 = (s32) this->unk1CA;
        }
        if (phi_a2 <= 0) {
            temp_v0 = this->unk1CC;
            if ((s32) temp_v0 < 0xFA0) {
                this->unk1CC = temp_v0 + 0x28;
            }
            temp_v1->world.rot.y -= this->unk1CC;
            temp_v1->shape.rot.y -= this->unk1CC;
        }
        sp30 = temp_v1;
        Math_SmoothStepToF((f32 *) &temp_v1->world, this->actor.world.pos.x, 0.5f, 0.1f, 0.01f);
        Math_SmoothStepToF(&temp_v1->world.pos.z, this->actor.world.pos.z, 0.5f, 0.1f, 0.01f);
    }
    temp_t5 = this->unk1D0 + 1;
    this->unk1D0 = temp_t5;
    temp_v0_2 = temp_t5 & 0xFFFF;
    phi_v0 = temp_v0_2;
    if (((s32) D_808BC000 < temp_v0_2) && (gSaveContext.nextCutsceneIndex == 0xFFEF)) {
        sp30 = globalCtx->actorCtx.actorList[2].first;
        func_808BA10C(this, globalCtx);
        phi_v0 = (s32) this->unk1D0;
    }
    if (phi_v0 >= 0x8D) {
        globalCtx->envCtx.unk_E5 = 1;
        temp_f0 = (f32) (this->unk1D0 - 0x8C) / 20.0f;
        phi_f0_2 = temp_f0;
        if (temp_f0 > 1.0f) {
            phi_f0_2 = 1.0f;
        }
        globalCtx->envCtx.unk_E6[0] = 0xA0;
        globalCtx->envCtx.unk_E6[1] = 0xA0;
        globalCtx->envCtx.unk_E6[2] = 0xA0;
        globalCtx->envCtx.unk_E6[3] = (u8) (u32) (255.0f * phi_f0_2);
    }
    sp30 = globalCtx->actorCtx.actorList[2].first;
    Lights_PointNoGlowSetInfo(&this->unk1E0, (s16) (s32) (globalCtx->actorCtx.actorList[2].first->world.pos.x + 10.0f), (s16) (s32) (globalCtx->actorCtx.actorList[2].first->world.pos.y + 10.0f), (s16) (s32) (globalCtx->actorCtx.actorList[2].first->world.pos.z + 10.0f), (u8) 0xEB, (u8) 0xFF, (u8) 0xFF, (s16) 0xFF);
    Lights_PointNoGlowSetInfo(&this->unk1F4, (s16) (s32) (globalCtx->actorCtx.actorList[2].first->world.pos.x - 10.0f), (s16) (s32) (globalCtx->actorCtx.actorList[2].first->world.pos.y - 10.0f), (s16) (s32) (globalCtx->actorCtx.actorList[2].first->world.pos.z - 10.0f), (u8) 0xEB, (u8) 0xFF, (u8) 0xFF, (s16) 0xFF);
    Math_SmoothStepToF(&this->actor.shape.yOffset, 800.0f, 0.2f, 15.0f, 0.01f);
    this->actor.shape.rot.y += 0x320;
    Math_SmoothStepToF(&this->unk1BC, 1.13f, 0.2f, 0.1f, 0.01f);
    Math_StepToF(&this->unk1A4, 2.0f, 0.003f);
    Math_StepToF(&this->unk1A8, 10.0f, 0.006f);
    Math_SmoothStepToF(&this->unk1B0, 0.0f, 0.2f, 3.0f, 0.01f);
    Math_SmoothStepToF(&this->unk1B4, 0.0f, 0.2f, 2.0f, 0.01f);
    Math_SmoothStepToF(&this->unk1B8, 255.0f, 0.1f, 1.0f, 0.01f);
    temp_v0_3 = D_808BC000;
    temp_f0_2 = 1.0f - ((f32) (temp_v0_3 - this->unk1D0) / (f32) ((temp_v0_3 * 0) + 0x64));
    if (temp_f0_2 > 0.0f) {
        temp_f16 = (s32) (-255.0f * temp_f0_2);
        phi_v1 = 0;
        do {
            temp_v1_2 = phi_v1 + 1;
            globalCtx->envCtx.unk_8C.diffuseColor1[phi_v1] = (s16) temp_f16;
            globalCtx->envCtx.unk_8C.fogColor[phi_v1] = (s16) temp_f16;
            globalCtx->envCtx.unk_8C.ambientColor[phi_v1] = (s16) temp_f16;
            phi_v1 = temp_v1_2;
        } while ((s32) temp_v1_2 < 3);
        globalCtx->envCtx.unk_8C.fogNear = (s16) (s32) (-500.0f * temp_f0_2);
        if ((s32) globalCtx->envCtx.unk_8C.fogNear < -0x12C) {
            globalCtx->roomCtx.currRoom.segment = NULL;
        }
    }
}

void func_808BAAF4(DoorWarp1 *this, GlobalContext *globalCtx) {
    s16 sp1A;
    DoorWarp1 *temp_a1;
    f32 temp_f0;
    f32 temp_f2;
    s8 temp_a0;
    f32 phi_f2;

    phi_f2 = 200.0f;
    if (globalCtx->sceneNum == 0x49) {
        phi_f2 = 85.0f;
    }
    if (((gSaveContext.weekEventReg[86] & 0x80) == 0) && (fabsf(this->actor.xzDistToPlayer) < phi_f2) && (temp_f0 = globalCtx->actorCtx.actorList[2].first->world.pos.y, temp_f2 = this->actor.world.pos.y, ((temp_f0 - 20.0f) < temp_f2)) && (temp_f2 < (temp_f0 + 20.0f))) {
        temp_a0 = this->actor.cutscene;
        this = this;
        sp1A = (s16) temp_a0;
        if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
            temp_a1 = this;
            this = this;
            ActorCutscene_Start((s16) temp_a0, (Actor *) temp_a1);
            gSaveContext.weekEventReg[86] |= 0x80;
            DoorWarp1_SetupAction(this, func_808BABF4);
            return;
        }
        ActorCutscene_SetIntentToPlay((s16) temp_a0);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_808BABF4(DoorWarp1 *this, GlobalContext *globalCtx) {

}

void DoorWarp1_Update(DoorWarp1 *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    DoorWarp1 *this = (DoorWarp1 *) thisx;

    if (this->unk203 == 0) {
        this->unk204 = 1.0f;
    }
    temp_v0 = this->unk1A0;
    if ((temp_v0 != 0) && (this->unk204 != temp_v0->unk15C)) {
        temp_v0->world.pos.y = this->actor.world.pos.y;
        this->unk1A0->unk158 = (f32) this->actor.world.pos.y;
        this->unk1A0->unk15C = (f32) this->unk204;
    }
    this->actionFunc(this, globalCtx);
    if ((this->actor.params & 0xFF) < 2) {
        Actor_SetScale((Actor *) this, (f32) this->unk1C4 / 100.0f);
    }
}

void func_808BACCC(Actor *arg0, GlobalContext *arg1) {
    GraphicsContext *sp30;
    Gfx *temp_t3;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    temp_a0 = arg1->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = sp30->polyXlu.p;
    sp30->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xFA00FFFF;
    temp_v0->words.w1 = ((u32) arg0->unk1B8 & 0xFF) | 0xC8FFFF00;
    temp_v0_2 = sp30->polyXlu.p;
    sp30->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFB000000;
    temp_v0_2->words.w1 = ((u32) arg0->unk1B8 & 0xFF) | 0x64FF00;
    temp_t3 = sp30->polyXlu.p;
    sp30 = sp30;
    sp30->polyXlu.p = SkelAnime_Draw2(arg1, arg0->unk160, arg0->unk17C, NULL, NULL, arg0, temp_t3);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x15C);
}

void func_808BAE9C(DoorWarp1 *arg0, GlobalContext *arg1) {
    s32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp84;
    Gfx *sp70;
    Gfx *sp6C;
    Gfx *sp68;
    Gfx *sp58;
    ? *sp4C;
    s32 sp48;
    u32 sp44;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_a3_2;
    u32 temp_a2;
    u32 temp_a2_2;
    u32 temp_t0;
    f32 phi_f12;

    sp94 = arg1->state.frames * 0xA;
    temp_f2 = arg0->unk1A4;
    phi_f12 = 1.0f;
    if (temp_f2 >= 1.0f) {
        sp90 = 0.0f;
    } else {
        sp90 = 1.0f - temp_f2;
    }
    temp_f0 = arg0->unk1A8;
    if (temp_f0 >= 1.0f) {
        sp8C = 0.0f;
    } else {
        sp8C = 1.0f - temp_f0;
    }
    temp_s0 = arg1->state.gfxCtx;
    temp_f0_2 = 1.0f - ((2.0f - temp_f2) / 1.7f);
    arg0->unk1AC += temp_f0_2 * 15.0f;
    sp84 = temp_f0_2;
    func_8012C2DC(arg1->state.gfxCtx);
    temp_v1 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xFA000080;
    temp_a0 = (u32) (255.0f * temp_f0_2) & 0xFF;
    temp_a1 = (temp_a0 << 0x18) | 0xFF0000 | 0xFF00;
    temp_v1->words.w1 = temp_a1 | ((u32) arg0->unk1B4 & 0xFF);
    temp_v0 = temp_s0->polyXlu.p;
    temp_t0 = (temp_a0 << 0x10) | 0xFF00 | 0xFF;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w1 = temp_t0;
    temp_v0->words.w0 = 0xFB000000;
    sp44 = temp_t0;
    sp48 = temp_a1;
    SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y + 1.0f, arg0->actor.world.pos.z, 0);
    if (arg0->unk203 != 0) {
        phi_f12 = arg0->unk204 * 1.0f;
    }
    Matrix_Scale(phi_f12, phi_f12, phi_f12, 1);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060028;
    sp70 = temp_v0_2;
    sp70->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    SysMatrix_StatePush();
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060020;
    temp_a2 = sp94 & 0xFF;
    temp_a3 = -(s32) ((s16) (s32) (2.0f * arg0->unk1AC) & 0x1FF);
    sp6C = temp_v0_3;
    sp6C->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, temp_a2, (u32) temp_a3, 0x100, 0x100, 1, temp_a2, (u32) temp_a3, 0x100, 0x100);
    SysMatrix_InsertTranslation(0.0f, arg0->unk1A4 * 230.0f, 0.0f, 1);
    temp_f12 = (((f32) arg0->unk1C6 * sp90) / 100.0f) + 1.0f;
    Matrix_Scale(temp_f12, 1.0f, temp_f12, 1);
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDB060024;
    sp68 = temp_v0_4;
    sp68->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) &D_060001A0;
    temp_v0_5->words.w0 = 0xDE000000;
    sp4C = &D_060001A0;
    SysMatrix_StatePop();
    if (arg0->unk1B0 > 0.0f) {
        temp_v1_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1_2 + 8;
        temp_v1_2->words.w0 = 0xFA000080;
        temp_v1_2->words.w1 = sp48 | ((u32) arg0->unk1B0 & 0xFF);
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xFB000000;
        temp_v0_6->words.w1 = sp44;
        sp94 *= 2;
        temp_v0_7 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xDB060020;
        temp_a2_2 = sp94 & 0xFF;
        temp_a3_2 = -(s32) ((s16) (s32) arg0->unk1AC & 0x1FF);
        sp58 = temp_v0_7;
        sp58->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, temp_a2_2, (u32) temp_a3_2, 0x100, 0x100, 1, temp_a2_2, (u32) temp_a3_2, 0x100, 0x100);
        SysMatrix_InsertTranslation(0.0f, arg0->unk1A8 * 60.0f, 0.0f, 1);
        temp_f12_2 = (((f32) arg0->unk1C8 * sp8C) / 100.0f) + 1.0f;
        Matrix_Scale(temp_f12_2, 1.0f, temp_f12_2, 1);
        temp_v0_8 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_8 + 8;
        temp_v0_8->words.w0 = 0xDB060024;
        temp_v0_8->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_9 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_9 + 8;
        temp_v0_9->words.w0 = 0xDE000000;
        temp_v0_9->words.w1 = (u32) sp4C;
    }
}

void func_808BB4C4(s32 arg0, GlobalContext *arg1) {
    func_800BDFC0(arg1, &D_060076C0);
}

void func_808BB4F4(void *arg0, GlobalContext *arg1) {
    ? sp64;
    s32 sp60;
    GraphicsContext *sp5C;
    Gfx *sp4C;
    GraphicsContext *sp44;
    void *sp28;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    s16 temp_v0;
    void *temp_a2;
    s32 phi_v1;

    sp64.unk0 = (s32) D_808BBB50.unk0;
    sp64.unk4 = (s32) D_808BBB50.unk4;
    sp64.unk8 = (s32) D_808BBB50.unk8;
    phi_v1 = 0;
    if (arg0->unk1D4 != 0) {
        SysMatrix_InsertTranslation(arg0->unk24, arg0->unk28 + arg0->unk1A4, arg0->unk2C, 0);
        Matrix_Scale(4.0f, arg0->unk1AC, 4.0f, 1);
        AnimatedMat_Draw(arg1, Lib_SegmentedToVirtual(&D_060044D8));
        func_800BE03C(arg1, &D_06003230);
        return;
    }
    temp_v0 = arg1->sceneNum;
    if (temp_v0 != 0x1B) {
        if (temp_v0 == 0x21) {
            phi_v1 = 1;
        } else if (temp_v0 == 0x49) {
            phi_v1 = 2;
        } else if (temp_v0 == 0x18) {
            phi_v1 = 3;
        }
    }
    sp60 = phi_v1;
    SysMatrix_InsertTranslation(arg0->unk24, arg0->unk28, arg0->unk2C, 0);
    Matrix_RotateY(arg0->unk32, 1U);
    Matrix_Scale(1.0f, arg0->unk1A8, 1.0f, 1);
    AnimatedMat_Draw(arg1, Lib_SegmentedToVirtual(&D_060057D8));
    temp_a0 = arg1->state.gfxCtx;
    sp5C = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0_2 = sp5C->polyXlu.p;
    sp5C->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFB000000;
    temp_a2 = (sp60 * 3) + &sp64;
    temp_v0_2->words.w1 = (temp_a2->unk2 << 8) | (temp_a2->unk0 << 0x18) | (temp_a2->unk1 << 0x10) | 0xFF;
    temp_v0_3 = sp5C->polyXlu.p;
    sp5C->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = -1;
    temp_v0_3->words.w0 = 0xFA000080;
    temp_v0_4 = sp5C->polyXlu.p;
    sp5C->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDA380003;
    sp28 = temp_a2;
    sp5C = sp5C;
    sp4C = temp_v0_4;
    sp4C->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    temp_v0_5 = sp5C->polyXlu.p;
    sp5C->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) &D_06004690;
    temp_v0_5->words.w0 = 0xDE000000;
    sp44 = arg1->state.gfxCtx;
    AnimatedMat_Draw(arg1, Lib_SegmentedToVirtual(&D_06007238));
    SysMatrix_InsertTranslation(arg0->unk24, arg0->unk28, arg0->unk2C, 0);
    Matrix_RotateY(arg0->unk32, 1U);
    Matrix_Scale(1.0f, 0.0f, 1.0f, 1);
    func_8012C2DC(arg1->state.gfxCtx);
    temp_v0_6 = sp44->polyXlu.p;
    sp44->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xFB000000;
    temp_v0_6->words.w1 = (sp28->unk2 << 8) | (sp28->unk0 << 0x18) | (sp28->unk1 << 0x10) | 0xFF;
    temp_v0_7 = sp44->polyXlu.p;
    sp44->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w0 = 0xFA000080;
    temp_v0_7->words.w1 = arg0->unk203 | ~0xFF;
    temp_v0_8 = sp44->polyXlu.p;
    sp44->polyXlu.p = temp_v0_8 + 8;
    temp_v0_8->words.w0 = 0xDA380003;
    temp_v0_8->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    temp_v0_9 = sp44->polyXlu.p;
    sp44->polyXlu.p = temp_v0_9 + 8;
    temp_v0_9->words.w1 = (u32) &D_060058C8;
    temp_v0_9->words.w0 = 0xDE000000;
}

void DoorWarp1_Draw(DoorWarp1 *this, GlobalContext *globalCtx) {
    u32 temp_t7;
    DoorWarp1 *this = (DoorWarp1 *) thisx;

    temp_t7 = this->actor.params & 0xFF;
    switch (temp_t7) {
    case 0:
        func_808BAE9C();
        return;
    case 1:
        func_808BACCC();
        func_808BAE9C(this, globalCtx);
        return;
    case 2:
    case 3:
    case 4:
    case 5:
        func_808BB4C4();
        return;
    case 6:
        func_808BB4F4();
        /* fallthrough */
    default:
        return;
    }
}

void func_808BB8D4(DoorWarp1 *arg0, GlobalContext *arg1, s32 arg2) {
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    s8 sp9A;
    s8 sp99;
    s8 sp98;
    s8 sp96;
    s8 sp95;
    s8 sp94;
    f32 *temp_s7;
    f32 temp_f6;
    s16 temp_s0;
    s32 temp_s1;
    s32 temp_s3;
    s32 phi_s2;
    s32 phi_s3;

    phi_s3 = 0;
    if (arg2 > 0) {
        temp_s7 = &sp9C;
        do {
            temp_s1 = (s32) (Rand_ZeroOne() * 65536.0f);
            temp_s0 = temp_s1 - 0x8000;
            sp9C = (-Math_SinS((s16) (temp_s1 - 0x8000)) * 35.0f) + arg0->actor.world.pos.x;
            spA0 = arg0->actor.world.pos.y;
            temp_f6 = Math_CosS(temp_s0) * 35.0f;
            *D_808BBB6C = 0.25f;
            D_808BBB5C.x = 0.0f;
            spA4 = temp_f6 + arg0->actor.world.pos.z;
            sp98 = 0xFF;
            sp99 = 0xFF;
            sp9A = 0xFF;
            sp94 = 0xC8;
            sp95 = 0xC8;
            sp96 = 0xFF;
            D_808BBB64 = 0.0f;
            phi_s2 = 0x1B;
            if (arg2 >= 2) {
                *D_808BBB6C = 1.8f;
                D_808BBB5C.x = -Math_SinS(temp_s0) * 5.0f;
                D_808BBB64 = Math_CosS(temp_s0) * 5.0f;
                phi_s2 = 8;
            }
            EffectSsKiraKira_SpawnDispersed(arg1, (Vec3f *) temp_s7, &D_808BBB5C, &D_808BBB68, (Color_RGBA8 *) &sp98, (Color_RGBA8 *) &sp94, (s16) (s32) (s16) (s32) ((Rand_ZeroOne() * 1000.0f) + 800.0f), phi_s2);
            temp_s3 = phi_s3 + 1;
            phi_s3 = temp_s3;
        } while (temp_s3 != arg2);
    }
}
