typedef struct EnZog {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk144;            /* inferred */
    /* 0x190 */ SkelAnime unk190;                   /* inferred */
    /* 0x1D4 */ Vec3s unk1D4;                       /* inferred */
    /* 0x1DA */ char pad1DA[0x84];                  /* maybe part of unk1D4[23]? */
    /* 0x25E */ Vec3s unk25E;                       /* inferred */
    /* 0x264 */ char pad264[0x84];                  /* maybe part of unk25E[23]? */
    /* 0x2E8 */ void *unk2E8;                       /* inferred */
    /* 0x2EC */ s32 unk2EC;                         /* inferred */
    /* 0x2F0 */ Vec3f unk2F0;                       /* inferred */
    /* 0x2FC */ s16 unk2FC;                         /* inferred */
    /* 0x2FE */ s16 unk2FE;                         /* inferred */
    /* 0x300 */ s16 unk300;                         /* inferred */
    /* 0x302 */ s16 unk302;                         /* inferred */
    /* 0x304 */ s16 unk304;                         /* inferred */
    /* 0x306 */ s16 unk306;                         /* inferred */
    /* 0x308 */ s16 unk308;                         /* inferred */
    /* 0x30A */ u16 unk30A;                         /* inferred */
    /* 0x30C */ char pad30C[0xE];                   /* maybe part of unk30A[8]? */
    /* 0x31A */ s16 unk31A;                         /* inferred */
    /* 0x31C */ s16 unk31C;                         /* inferred */
    /* 0x31E */ s16 unk31E;                         /* inferred */
    /* 0x320 */ s16 unk320;                         /* inferred */
    /* 0x322 */ s16 unk322;                         /* inferred */
    /* 0x324 */ s16 unk324;                         /* inferred */
    /* 0x326 */ char pad326[0x2];
    /* 0x328 */ void (*actionFunc)(EnZog *, GlobalContext *);
} EnZog;                                            /* size = 0x32C */

struct _mips2c_stack_EnZog_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnZog_Draw {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnZog_Init {
    /* 0x00 */ char pad0[0x4C];
    /* 0x4C */ EnZog *sp4C;                         /* inferred */
    /* 0x50 */ SkelAnime *sp50;                     /* inferred */
    /* 0x54 */ s32 sp54;                            /* inferred */
    /* 0x58 */ char pad58[0x4];
    /* 0x5C */ s32 sp5C;                            /* inferred */
    /* 0x60 */ char pad60[0x8];
};                                                  /* size = 0x68 */

struct _mips2c_stack_EnZog_Update {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B93310 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B93468 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B939C0 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ AnimationHeaderCommon **sp28;        /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B93A48 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ SkelAnime *sp18;                     /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B93B44 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B93BA8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B93BE0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B93D2C {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B93DE8 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B93EA0 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad38[0x6];                     /* maybe part of sp34[2]? */
    /* 0x3E */ u16 sp3E;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B943A0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B943C0 {};              /* size 0x0 */

struct _mips2c_stack_func_80B943EC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B94470 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B9451C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B9461C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B946B4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B946FC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B948A8 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B94A00 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B94C5C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B94D0C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B94E34 {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ WaterBox *sp44;                      /* inferred */
    /* 0x48 */ Actor *sp48;                         /* inferred */
    /* 0x4C */ char pad4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80B95128 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B95240 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B954C4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B95598 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void func_80B93310(Actor *arg0, Lights *arg1, GlobalContext *arg2); /* static */
void func_80B93468(EnZog *arg0, GlobalContext *arg1); /* static */
void func_80B939C0(Actor *arg0, s16 arg1, u8 arg2); /* static */
void func_80B93A48(EnZog *arg0, GlobalContext *arg1, EnZog *); /* static */
void func_80B93B44(EnZog *arg0, s16);               /* static */
void func_80B93BA8(EnZog *arg0, s16 arg1);          /* static */
s32 func_80B93BE0(EnZog *arg0, GlobalContext *arg1); /* static */
void func_80B93D2C(EnZog *arg0, GlobalContext *arg1); /* static */
void func_80B93DE8(PosRot *arg0, GlobalContext *arg1, s32 arg2); /* static */
s32 func_80B93EA0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B943EC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B954C4(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80B95598(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **arg5); /* static */
extern AnimationHeader D_0600FC0C;
extern ? D_060280A8;
extern FlexSkeletonHeader D_06029170;
static ColliderCylinderInit D_80B95880 = {
    {0xA, 0, 0x11, 9, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x1E, 0x28, 0, {0, 0, 0}},
};
static void *D_80B958AC[3] = {(void *)0x6024750, (void *)0x6024F50, (void *)0x6025750};
static void *D_80B958B8[2] = {(void *)0x6025F50, (void *)0x6026750};
static ? D_80B958C0;                                /* unable to generate initializer */
static AnimationHeader *D_80B958DC[2] = {(AnimationHeader *)0x600CA94, (AnimationHeader *)0x600F110};
static AnimationHeader *D_80B958E4[3] = {
    (AnimationHeader *)0x601579C,
    (AnimationHeader *)0x6015B80,
    (AnimationHeader *)0x600ECBC,
};
static AnimationHeader *D_80B958F0[2] = {(AnimationHeader *)0x6008EB8, (AnimationHeader *)0x60099A4};
static AnimationHeader *D_80B958F8[3] = {
    (AnimationHeader *)0x600931C,
    (AnimationHeader *)0x6009EC4,
    (AnimationHeader *)0x600B01C,
};
static AnimationHeader *D_80B95904[5] = {
    (AnimationHeader *)0x600BF38,
    (AnimationHeader *)0x601A990,
    (AnimationHeader *)0x601AD58,
    (AnimationHeader *)0x601B72C,
    (AnimationHeader *)0x601BC88,
};
static AnimationHeader *D_80B95918 = (AnimationHeader *)0x6001000;
static AnimationHeader *D_80B9591C = (AnimationHeader *)0x6001970;
static AnimationHeader *D_80B95920 = (AnimationHeader *)0x6002344;
static AnimationHeader *D_80B95924 = (AnimationHeader *)0x6002894;
static AnimationHeader *D_80B95928 = (AnimationHeader *)0x60030E0;
static AnimationHeader *D_80B9592C = (AnimationHeader *)0x60037F8;
static AnimationHeader *D_80B95930 = (AnimationHeader *)0x60041D0;
static AnimationHeader *D_80B95934 = (AnimationHeader *)0x6004BDC;
static AnimationHeader *D_80B95938 = (AnimationHeader *)0x60055B4;
static ? D_80B95974;                                /* unable to generate initializer */
static ? D_80B95984;                                /* unable to generate initializer */
static Vec3f D_80B9598C = {0.0f, -0.05f, 0.0f};
static Vec3f D_80B95998 = {0.0f, -0.025f, 0.0f};
static Color_RGBA8 D_80B959A4 = {0xDC, 0xDC, 0xFF, 0xFF};
static Color_RGBA8 D_80B959A8 = {0x50, 0x50, 0xDC, 0xFF};
static Vec3f D_80B959AC = {0.0f, 0.0f, 15.0f};
static Vec3f D_80B959B8;                            /* type too large by 8; unable to generate initializer */
static f32 D_80B959BC = 0.0f;
static Vec3f D_80B959C4;                            /* type too large by 8; unable to generate initializer */
static f32 D_80B959C8 = 0.0f;
static u8 D_80B95E10;

void func_80B93310(Actor *arg0, Lights *arg1, GlobalContext *arg2) {
    ? sp34;
    f32 sp2C;
    Vec3f *sp28;
    Vec3f *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0;
    f32 phi_f14;

    temp_v0 = arg0->unk322;
    temp_a1 = arg0 + 0x24;
    if ((s32) temp_v0 > 0) {
        if ((arg0->unk30A & 8) != 0) {
            arg0->shape.shadowAlpha = (u8) temp_v0;
        } else {
            arg0->shape.shadowAlpha = 0xFF;
        }
        sp28 = temp_a1;
        Math_Vec3f_Copy((Vec3f *) &sp34, temp_a1);
        temp_f2 = arg0->focus.pos.x - arg0->unk2F0;
        temp_f12 = arg0->focus.pos.z - arg0->unk2F8;
        temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
        phi_f14 = temp_f0;
        if (temp_f0 < 12.0f) {
            phi_f14 = 12.0f;
        } else if (temp_f0 > 60.0f) {
            phi_f14 = 60.0f;
        }
        sp2C = phi_f14;
        Math_Vec3f_Copy(sp28, arg0 + 0x2F0);
        func_800B4AEC(arg2, arg0, 50.0f);
        temp_f0_2 = arg0->floorHeight;
        if (sp38 < temp_f0_2) {
            arg0->world.pos.y = temp_f0_2;
        } else {
            arg0->world.pos.y = sp38;
        }
        arg0->scale.z *= phi_f14 * 0.083333336f;
        func_800B3FC0(arg0, arg1, arg2);
        arg0->scale.z = arg0->scale.x;
        Math_Vec3f_Copy(sp28, (Vec3f *) &sp34);
    }
}

void func_80B93468(EnZog *arg0, GlobalContext *arg1) {
    s16 *temp_v1;
    void *temp_t1;
    void *temp_v1_2;

    temp_t1 = arg1->setupPathList + (((s32) (arg0->actor.params & 0xFC00) >> 0xA) * 8);
    arg0->unk2E8 = temp_t1;
    if (temp_t1 != 0) {
        arg0 = arg0;
        temp_v1 = Lib_SegmentedToVirtual(temp_t1->unk4) + (arg0->unk2EC * 6);
        temp_v1_2 = temp_v1 + 6;
        arg0->actor.world.pos.x = (f32) *temp_v1;
        arg0->actor.world.pos.z = (f32) temp_v1_2->unk-2;
        arg0->actor.world.rot.y = Math_Atan2S((f32) temp_v1_2->unk0 - arg0->actor.world.pos.x, (f32) temp_v1_2->unk4 - arg0->actor.world.pos.z);
        arg0->actor.speedXZ = 0.0f;
    }
}

void EnZog_Init(EnZog *this, GlobalContext *globalCtx) {
    s32 sp5C;
    s32 sp54;
    SkelAnime *sp50;
    EnZog *sp4C;
    SkelAnime *temp_a1;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v1;
    u32 temp_t7;
    void **temp_s0;
    void **temp_s0_2;
    void **phi_s0;
    void **phi_s0_2;
    s16 phi_s0_3;
    EnZog *phi_a1;
    s32 phi_v1;
    s32 phi_t0;
    s32 phi_v0;
    EnZog *this = (EnZog *) thisx;

    phi_s0 = D_80B958AC;
    if (D_80B95E10 == 0) {
        do {
            temp_s0 = phi_s0 + 4;
            temp_s0->unk-4 = Lib_SegmentedToVirtual(*phi_s0);
            phi_s0 = temp_s0;
        } while ((u32) temp_s0 < (u32) D_80B958B8);
        phi_s0_2 = D_80B958B8;
        do {
            temp_s0_2 = phi_s0_2 + 4;
            temp_s0_2->unk-4 = Lib_SegmentedToVirtual(*phi_s0_2);
            phi_s0_2 = temp_s0_2;
        } while (temp_s0_2 != &D_80B958C0);
        D_80B95E10 = 1;
    }
    ActorShape_Init(&this->actor.shape, 0.0f, func_80B93310, 24.0f);
    Actor_SetScale((Actor *) this, 0.01f);
    this->actionFunc = func_80B95128;
    this->actor.textId = 0x1004;
    temp_a1 = &this->unk190;
    sp50 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06029170, &D_0600FC0C, &this->unk1D4, &this->unk25E, 0x17);
    SkelAnime_ChangeAnimDefaultStop(sp50, &D_0600FC0C);
    Collider_InitAndSetCylinder(globalCtx, &this->unk144, (Actor *) this, &D_80B95880);
    this->actor.colChkInfo.mass = 0xFF;
    if (((this->actor.params & 0xF) != 2) && (gSaveContext.inventory.items[gItemSlots[0x34]] == 0x34) && ((globalCtx->csCtx.unk_12 != 2) || (gSaveContext.sceneSetupIndex != 0) || (globalCtx->sceneNum != 0x37))) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actor.minVelocityY = -4.0f;
    this->actor.gravity = -1.0f;
    this->unk308 = 0;
    this->unk30A = 0;
    this->unk31C = 2;
    this->unk31E = 0;
    this->unk31A = -1;
    this->unk322 = 0x64;
    this->actor.uncullZoneScale = 3000.0f;
    this->actor.shape.yOffset = 1000.0f;
    Math_Vec3f_Copy(&this->unk2F0, (Vec3f *) &this->actor.world);
    if ((this->actor.params & 0xF) == 2) {
        this->actionFunc = func_80B95240;
        this->unk322 = 0xFF;
        this->unk31C = 0;
        this->unk31E = 0;
        this->actor.shape.yOffset = 0.0f;
    }
    this->unk2EC = 0;
    if (((s32) (this->actor.params & 0xFC00) >> 0xA) != 0x3F) {
        func_80B93468(this, globalCtx);
    } else {
        this->unk2E8 = NULL;
    }
    this->unk2FC = 0;
    this->unk302 = 0;
    this->unk2EC += 1;
    this->unk304 = 0;
    this->unk2FE = this->unk2FC;
    this->unk300 = this->unk302;
    phi_s0_3 = (s16) this->actor.cutscene;
    phi_a1 = this;
    phi_v1 = 0;
    do {
        phi_a1->unk30C = phi_s0_3;
        if (phi_s0_3 != -1) {
            this->actor.cutscene = (s8) phi_s0_3;
            sp4C = phi_a1;
            sp54 = phi_v1;
            phi_s0_3 = ActorCutscene_GetAdditionalCutscene((s16) this->actor.cutscene);
        }
        temp_v1 = phi_v1 + 2;
        phi_a1 += 2;
        phi_v1 = temp_v1;
    } while (temp_v1 < 0xE);
    temp_v0 = this->actor.params & 0xF;
    this->actor.flags |= 0x10000;
    this->actor.home.rot.z = 0;
    phi_v0 = temp_v0;
    if (temp_v0 != 2) {
        phi_t0 = 0;
        do {
            sp5C = phi_t0;
            Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x267, this->actor.world.pos.x, this->actor.world.pos.y + 500.0f, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, 0x64);
            temp_t0 = phi_t0 + 1;
            phi_t0 = temp_t0;
        } while (temp_t0 != 5);
        phi_v0 = this->actor.params & 0xF;
    }
    if ((phi_v0 != 2) && ((gSaveContext.weekEventReg[88] & 0x10) != 0)) {
        this->unk300 = 0;
        this->unk2FE = 3;
        temp_t7 = this->actor.flags | 0x2000000;
        this->actor.flags = temp_t7;
        this->actor.flags = temp_t7 & 0xFFFEFFFF;
        this->unk31C = 2;
        this->unk31E = 0;
        this->unk302 = this->unk300;
        this->unk2FC = this->unk2FE;
        SkelAnime_ChangeAnimDefaultRepeat(sp50, *D_80B958DC);
        this->actor.textId = 0x1009;
        if ((gSaveContext.weekEventReg[91] & 2) != 0) {
            this->actor.textId = 0x103C;
            this->actionFunc = func_80B9451C;
        } else {
            this->actionFunc = func_80B948A8;
        }
        this->actor.shape.rot.y = 0x4000;
        this->actor.world.rot.y = 0x4000;
        this->actor.world.pos.x = -376.0f;
        this->actor.world.pos.y = 80.0f;
        this->actor.world.pos.z = 4793.0f;
        this->actor.shape.yOffset = 0.0f;
    }
}

void EnZog_Destroy(EnZog *this, GlobalContext *globalCtx) {
    EnZog *this = (EnZog *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk144);
}

void func_80B939C0(Actor *arg0, s16 arg1, u8 arg2) {
    AnimationHeaderCommon **sp28;
    AnimationHeaderCommon **temp_v1;

    temp_v1 = (arg1 * 4) + &D_80B958C0;
    sp28 = temp_v1;
    SkelAnime_ChangeAnim(arg0 + 0x190, (AnimationHeader *) *temp_v1, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*temp_v1), (u8) (s32) arg2, -5.0f);
    arg0->unk304 = arg1;
}

void func_80B93A48(EnZog *arg0, GlobalContext *arg1) {
    SkelAnime *sp18;
    SkelAnime *temp_a0;
    s16 temp_a0_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;

    temp_a0 = arg0 + 0x190;
    sp18 = temp_a0;
    arg0 = arg0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        temp_a0_2 = arg0->unk302;
        if (arg0->unk300 != temp_a0_2) {
            arg0->unk302 = temp_a0_2 + 1;
            goto block_6;
        }
        if (temp_a0_2 == 0) {
            temp_v0 = arg0->unk2FE;
            if (temp_v0 != arg0->unk2FC) {
                arg0->unk2FC = temp_v0;
block_6:
            }
        }
        temp_v1 = arg0->unk2FC;
        if ((s32) arg0->unk302 >= (s32) *(&D_80B95984 + (temp_v1 * 2))) {
            temp_v0_2 = arg0->unk2FE;
            arg0->unk302 = 0;
            arg0->unk300 = 0;
            if (temp_v0_2 != temp_v1) {
                arg0->unk2FC = temp_v0_2;
            }
        }
        arg0->unk304 = *(*(&D_80B95974 + (arg0->unk2FC * 4)) + (arg0->unk302 * 2));
        SkelAnime_ChangeAnimDefaultStop(sp18, *(&D_80B958C0 + (arg0->unk304 * 4)));
        SkelAnime_FrameUpdateMatrix(sp18);
    }
}

void func_80B93B44(EnZog *arg0) {
    s16 temp_a0;
    s16 temp_v1;
    u16 temp_v0;
    u16 phi_v0;

    temp_v0 = arg0->unk30A;
    phi_v0 = temp_v0;
    if ((temp_v0 & 4) == 0) {
        temp_v1 = arg0->unk31A;
        if (temp_v1 != -1) {
            temp_a0 = (arg0 + (temp_v1 * 2))->unk30C;
            arg0 = arg0;
            ActorCutscene_Stop(temp_a0);
            phi_v0 = arg0->unk30A;
        }
    }
    arg0->unk31A = -1;
    arg0->unk30A = phi_v0 & 0xFFFB;
}

void func_80B93BA8(EnZog *arg0, s16 arg1) {
    func_80B93B44();
    arg0->unk31A = arg1;
    arg0->unk30A |= 4;
}

s32 func_80B93BE0(EnZog *arg0, GlobalContext *arg1) {
    s16 *temp_v1_2;
    s16 temp_a0;
    s16 temp_v0;
    void *temp_v1;
    s32 phi_a1;
    s16 phi_v1;

    temp_v1 = arg0->unk2E8;
    if (temp_v1 == 0) {
        goto block_10;
    }
    temp_v1_2 = Lib_SegmentedToVirtual(temp_v1->unk4) + (arg0->unk2EC * 6);
    if ((arg0->unk30A & 1) != 0) {
        arg0->actor.world.pos.x = (f32) temp_v1_2->unk0;
        arg0->actor.world.pos.z = (f32) temp_v1_2->unk4;
        return 1;
    }
    temp_v0 = Math_Atan2S((f32) temp_v1_2->unk6 - arg0->actor.world.pos.x, (f32) temp_v1_2->unkA - arg0->actor.world.pos.z);
    temp_a0 = arg0->actor.world.rot.y;
    phi_a1 = temp_v0 - temp_a0;
    phi_v1 = temp_v0;
    if ((temp_v0 - temp_a0) < 0) {
        phi_a1 = -(s32) (temp_v0 - temp_a0);
        phi_v1 = temp_v0;
    }
    if (phi_a1 >= 0x4001) {
        arg0->unk2EC += 1;
        func_80B93468(arg0, arg1);
        if ((arg0->unk2EC + 1) >= (s32) arg0->unk2E8->unk0) {
            arg0->unk30A |= 1;
            return 1;
        }
        goto block_10;
    }
    arg0->actor.world.rot.y = phi_v1;
block_10:
    return 0;
}

void func_80B93D2C(EnZog *arg0, GlobalContext *arg1) {
    f32 sp2C;
    ? sp28;
    f32 temp_f6;
    s16 temp_a0;

    sp28.unk0 = (s32) arg0->actor.world.pos.x;
    sp28.unk4 = (f32) arg0->actor.world.pos.y;
    sp28.unk8 = (s32) arg0->actor.world.pos.z;
    sp2C += arg0->actor.yDistToWater;
    temp_a0 = arg0->unk308;
    arg0 = arg0;
    temp_f6 = (arg0->actor.yDistToWater - 10.0f) + (2.0f * Math_SinS(temp_a0));
    arg0->unk308 += 0x200;
    arg0->actor.world.pos.y += temp_f6;
    if ((arg1->gameplayFrames & 0xF) == 0) {
        EffectSsGRipple_Spawn(arg1, (Vec3f *) &sp28, 0x96, 0x1F4, (s16) 0);
    }
}

void func_80B93DE8(PosRot *arg0, GlobalContext *arg1, s32 arg2) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;

    sp2C = randPlusMinusPoint5Scaled(30.0f) + arg0->pos.x;
    sp30 = arg0->pos.y + 3.0f;
    sp34 = randPlusMinusPoint5Scaled(30.0f) + arg0->pos.z;
    EffectSsKiraKira_SpawnDispersed(arg1, (Vec3f *) &sp2C, &D_80B9598C, &D_80B95998, &D_80B959A4, &D_80B959A8, (s16) 0x3E8, arg2);
}

s32 func_80B93EA0(Actor *arg0, GlobalContext *arg1) {
    u16 sp3E;
    SkelAnime *sp34;
    SkelAnime *temp_a0;
    s16 temp_t6;
    s16 temp_t7;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1;

    temp_a0 = arg0 + 0x190;
    sp34 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        temp_t6 = arg0->unk306;
        switch (temp_t6) {                          /* switch 1 */
        case 2:                                     /* switch 1 */
        case 3:                                     /* switch 1 */
            SkelAnime_ChangeAnimDefaultRepeat(sp34, *D_80B958F0);
            arg0->unk31C = 0;
            arg0->unk31E = 1;
            break;
        case 4:                                     /* switch 1 */
            SkelAnime_ChangeAnimDefaultRepeat(sp34, *D_80B958F8);
            arg0->unk31C = 2;
            arg0->unk31E = 1;
            break;
        case 5:                                     /* switch 1 */
            temp_v0 = arg0->unk304;
            if (temp_v0 != 0x10) {
                if (temp_v0 != 0x11) {

                } else {
                    SkelAnime_ChangeAnim(sp34, *D_80B958DC, 0.0f, 0.0f, 0.0f, (u8) 0, 0.0f);
                }
            } else {
                SkelAnime_ChangeAnimDefaultStop(sp34, *D_80B95904);
                arg0->unk304 = 0x11;
                arg0->unk31C = 2;
                arg0->unk31E = 0;
            }
            break;
        case 6:                                     /* switch 1 */
            SkelAnime_ChangeAnimDefaultRepeat(sp34, *D_80B958E4);
            arg0->unk31C = 1;
            arg0->unk31E = 1;
            break;
        case 12:                                    /* switch 1 */
            SkelAnime_ChangeAnimDefaultRepeat(sp34, D_80B95930);
            break;
        case 13:                                    /* switch 1 */
            SkelAnime_ChangeAnimDefaultRepeat(sp34, D_80B95938);
            break;
        case 14:                                    /* switch 1 */
            SkelAnime_ChangeAnimDefaultRepeat(sp34, D_80B95928);
            break;
        case 15:                                    /* switch 1 */
            SkelAnime_ChangeAnimDefaultRepeat(sp34, D_80B9591C);
            break;
        }
        SkelAnime_FrameUpdateMatrix(sp34);
    }
    if (func_800EE29C(arg1, 0x1D7U) != 0) {
        sp3E = arg1->csCtx.npcActions[func_800EE200(arg1, 0x1D7U)]->unk0;
        func_800EDF24(arg0, arg1, func_800EE200(arg1, 0x1D7U));
        temp_v1 = arg0->unk306;
        if (temp_v1 != 2) {
            if (temp_v1 != 8) {
                if ((temp_v1 != 9) && (temp_v1 != 0xA)) {
                    arg0->unk30A = (u16) (arg0->unk30A & 0xFFF7);
                } else {
                    temp_v0_2 = arg0->unk322;
                    if ((s32) temp_v0_2 < 0x96) {
                        arg0->unk322 = (s16) (temp_v0_2 + 0xF);
                    } else {
                        arg0->unk322 = 0x96;
                    }
                    goto block_33;
                }
            } else {
                temp_v0_3 = arg0->unk322;
                if ((s32) temp_v0_3 >= 5) {
                    arg0->unk322 = (s16) (temp_v0_3 - 4);
                } else {
                    arg0->unk322 = 0;
                }
                if ((s32) arg0->unk322 > 0) {
                    func_80B93DE8(arg0 + 0x2F0, arg1, 0x14);
                    func_80B93DE8(&arg0->world, arg1, 0x14);
                    func_80B93DE8(&arg0->focus, arg1, 0x14);
                }
                goto block_33;
            }
        } else if (arg1->csCtx.frames == 0x3C) {
            Audio_PlayActorSound2(arg0, 0x2996U);
block_33:
        }
        if ((s16) sp3E != arg0->unk306) {
            arg0->unk306 = (s16) sp3E;
            temp_t7 = arg0->unk306;
            switch (temp_t7) {                      /* switch 2 */
            case 1:                                 /* switch 2 */
                func_80B939C0(arg0, 7, 0U);
                arg0->unk31C = 2;
                arg0->unk31E = 0;
                return 1;
            case 2:                                 /* switch 2 */
                func_80B939C0(arg0, 0xB, 2U);
                arg0->unk31C = 1;
                arg0->unk31E = 0;
                return 1;
            case 3:                                 /* switch 2 */
                func_80B939C0(arg0, 0xF, 2U);
                arg0->unk31C = 0;
                arg0->unk31E = 1;
                return 1;
            case 4:                                 /* switch 2 */
                func_80B939C0(arg0, 0xD, 2U);
                arg0->unk31C = 2;
                arg0->unk31E = 1;
                return 1;
            case 5:                                 /* switch 2 */
                func_80B939C0(arg0, 0x10, 2U);
                arg0->unk31C = 2;
                arg0->unk31E = 1;
                return 1;
            case 6:                                 /* switch 2 */
                func_80B939C0(arg0, 8, 2U);
                arg0->unk31C = 1;
                arg0->unk31E = 0;
                return 1;
            case 8:                                 /* switch 2 */
                arg0->unk322 = 0xFA;
                arg0->unk30A = (u16) (arg0->unk30A | 8);
                return 1;
            case 9:                                 /* switch 2 */
                arg0->unk322 = 0;
                arg0->unk30A = (u16) (arg0->unk30A | 8);
                func_80B939C0(arg0, 0x12, 0U);
                arg0->unk31C = 0;
                arg0->unk31E = 0;
                arg0->unk30A = (u16) (arg0->unk30A & 0xFFFD);
                return 1;
            case 10:                                /* switch 2 */
                func_80B939C0(arg0, 0xE, 0U);
                arg0->unk31C = 0;
                arg0->unk30A = (u16) (arg0->unk30A | 2);
                arg0->unk31E = 1;
                return 1;
            case 11:                                /* switch 2 */
                SkelAnime_ChangeAnimDefaultRepeat(sp34, D_80B95920);
                return 1;
            case 12:                                /* switch 2 */
                SkelAnime_ChangeAnimDefaultStop(sp34, D_80B9592C);
                return 1;
            case 13:                                /* switch 2 */
                SkelAnime_ChangeAnimDefaultStop(sp34, D_80B95934);
                return 1;
            case 14:                                /* switch 2 */
                arg0->unk30A = (u16) (arg0->unk30A | 2);
                SkelAnime_ChangeAnimDefaultStop(sp34, D_80B95924);
                return 1;
            case 15:                                /* switch 2 */
                SkelAnime_ChangeAnimDefaultStop(sp34, D_80B95918);
                goto block_51;
            }
        } else {
        default:                                    /* switch 2 */
block_51:
            return 1;
        }
    } else {
        return 0;
    }
}

void func_80B943A0(EnZog *this, GlobalContext *globalCtx) {
    func_80B93EA0();
}

void func_80B943C0(EnZog *this, GlobalContext *globalCtx) {
    if ((this->unk30A & 4) == 0) {
        this->actionFunc = func_80B943A0;
        this->unk306 = -1;
    }
}

void func_80B943EC(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v1;
    void *temp_v0;

    temp_v1 = arg0->unk30A;
    temp_v0 = arg1->actorCtx.actorList[2].first;
    if ((temp_v1 & 0x10) != 0) {
        if ((temp_v0->unkA70 * 0x10) >= 0) {
            arg0->unk30A = (u16) (temp_v1 & 0xFFEF);
            return;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return;
    }
    if (((temp_v0->unkA70 * 0x10) < 0) && (arg0->xzDistToPlayer < 120.0f)) {
        arg0->unk30A = (u16) (temp_v1 | 0x10);
        Audio_PlayActorSound2(arg0, 0x4807U);
    }
}

void func_80B94470(EnZog *this, GlobalContext *globalCtx) {
    this = this;
    if (func_80152498(&globalCtx->msgCtx) == 5) {
        this = this;
        if ((func_80147624(globalCtx) != 0) && (globalCtx->msgCtx.unk11F04 == 0x103C)) {
            this = this;
            func_801477B4(globalCtx);
            this->unk302 = 0;
            this->actionFunc = func_80B9451C;
            this->unk31C = 2;
            this->unk31E = 0;
            this->unk300 = this->unk302;
        }
    }
    func_80B93A48(this, globalCtx, this);
}

void func_80B9451C(EnZog *this, GlobalContext *globalCtx) {
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->unk300 = 2;
        this->actionFunc = func_80B94470;
    } else if ((globalCtx->msgCtx.unk1202A == 3) && (this->actor.xzDistToPlayer < 120.0f)) {
        if ((globalCtx->msgCtx.unk1202E == 7) && (gSaveContext.playerForm == 4)) {
            func_80B93BA8(this, 2);
            this->actionFunc = func_80B943C0;
            this->actor.shape.shadowDraw = NULL;
        }
    } else if (this->actor.xzDistToPlayer < 120.0f) {
        func_800B8614((Actor *) this, globalCtx, 150.0f);
    }
    func_80B943EC((Actor *) this, globalCtx);
}

void func_80B9461C(EnZog *this, GlobalContext *globalCtx) {
    if (func_80B93EA0() == 0) {
        this->actor.textId = 0x103C;
        this->actionFunc = func_80B9451C;
        this->actor.flags |= 0x2000000;
        gSaveContext.weekEventReg[91] |= 2;
    }
    if ((this->unk304 == 0xB) && ((s32) this->unk190.animCurrentFrame >= 0x37)) {
        this->unk30A |= 2;
    }
}

void func_80B946B4(EnZog *this, GlobalContext *globalCtx) {
    func_80B93A48();
    if ((this->unk30A & 4) == 0) {
        this->actionFunc = func_80B9461C;
        this->unk306 = -1;
    }
}

void func_80B946FC(EnZog *this, GlobalContext *globalCtx) {
    u16 temp_v1;
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 != 4) {
        if (temp_v0 != 5) {
            goto block_19;
        }
        if (func_80147624(globalCtx) != 0) {
            temp_v1 = globalCtx->msgCtx.unk11F04;
            if (temp_v1 != 0x1008) {
                if (temp_v1 != 0x1009) {
                    if (temp_v1 != 0x1014) {
                        if (temp_v1 != 0x1015) {
                            goto block_19;
                        }
                        func_801477B4(globalCtx);
                        this->unk302 = 0;
                        this->actionFunc = func_80B948A8;
                        this->unk31C = 2;
                        this->unk31E = 0;
                        this->unk300 = this->unk302;
                        return;
                    }
                    func_80151938(globalCtx, (temp_v1 + 1) & 0xFFFF);
                    goto block_19;
                }
                this->unk300 = 4;
                func_80151938(globalCtx, (globalCtx->msgCtx.unk11F04 + 1) & 0xFFFF);
                goto block_19;
            }
            func_80151938(globalCtx, (temp_v1 + 1) & 0xFFFF);
            goto block_19;
        }
        goto block_19;
    }
    if (func_80147624(globalCtx) != 0) {
        temp_v0_2 = globalCtx->msgCtx.choiceIndex;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 != 1) {

            } else {
                func_8019F230();
                func_80151938(globalCtx, 0x1014U);
            }
        } else {
            func_8019F208();
            globalCtx->msgCtx.unk11F10 = 0;
            this->actionFunc = func_80B946B4;
            func_80B93BA8(this, 1);
        }
    }
block_19:
    func_80B93A48(this, globalCtx);
}

void func_80B948A8(EnZog *this, GlobalContext *globalCtx) {
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->unk300 = 2;
        this->actionFunc = func_80B946FC;
        goto block_13;
    }
    if ((globalCtx->msgCtx.unk1202A == 3) && (this->actor.xzDistToPlayer < 120.0f)) {
        if ((globalCtx->msgCtx.unk1202E == 7) && (gSaveContext.playerForm == 4)) {
            func_80B93BA8(this, 2);
            this->actionFunc = func_80B943C0;
            this->actor.shape.shadowDraw = NULL;
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return;
    }
    if ((this->unk302 == 2) && (this->unk2FC == 2)) {
        this->unk300 = 0;
        this->unk2FE = 3;
        this->unk302 = this->unk300;
        this->unk2FC = this->unk2FE;
        func_80B93B44(this, 3);
    }
    if ((this->unk302 == 0) && (this->actor.xzDistToPlayer < 120.0f)) {
        func_800B8614((Actor *) this, globalCtx, 150.0f);
    }
block_13:
    func_80B93A48(this, globalCtx);
    func_80B943EC((Actor *) this, globalCtx);
}

void func_80B94A00(EnZog *this, GlobalContext *globalCtx) {
    f32 sp34;
    ? sp30;
    SkelAnime *sp2C;
    SkelAnime *temp_a0;
    SkelAnime *temp_a0_2;
    f32 temp_f0;
    f32 temp_f0_2;

    if (func_80B93BE0(this, globalCtx) != 0) {
        this->actionFunc = func_80B948A8;
        this->actor.flags |= 0x2000000;
        if ((gSaveContext.weekEventReg[29] & 0x20) != 0) {
            this->actor.textId = 0x1009;
        } else {
            this->actor.textId = 0x1008;
            gSaveContext.weekEventReg[29] |= 0x20;
        }
        this->unk300 = 2;
        this->unk31C = 2;
        this->unk31E = 0;
        return;
    }
    temp_f0 = this->unk190.animCurrentFrame;
    if ((temp_f0 >= 35.0f) || ((temp_f0 >= 10.0f) && (temp_f0 <= 24.0f))) {
        this->actor.speedXZ = 0.0f;
    } else {
        this->actor.speedXZ = 1.5f;
    }
    if ((this->actor.yDistToWater > 0.0f) && ((globalCtx->gameplayFrames & 7) == 0)) {
        sp30.unk0 = (f32) this->actor.world.pos.x;
        sp30.unk4 = (f32) this->actor.world.pos.y;
        sp30.unk8 = (f32) this->actor.world.pos.z;
        sp34 += this->actor.yDistToWater;
        EffectSsGRipple_Spawn(globalCtx, (Vec3f *) &sp30, 0x96, 0x1F4, (s16) 0);
    }
    temp_f0_2 = this->actor.shape.yOffset;
    if (temp_f0_2 > 0.0f) {
        this->actor.shape.yOffset = temp_f0_2 - 20.0f;
    }
    func_80B93A48(this, globalCtx);
    temp_a0 = &this->unk190;
    if ((this->unk304 == 4) && ((sp2C = temp_a0, (func_801378B8(temp_a0, 136.0f) != 0)) || (func_801378B8(temp_a0, 155.0f) != 0))) {
        Audio_PlayActorSound2((Actor *) this, 0x804U);
    }
    temp_a0_2 = &this->unk190;
    if ((this->unk304 == 5) && ((sp2C = temp_a0_2, (func_801378B8(temp_a0_2, 12.0f) != 0)) || (func_801378B8(temp_a0_2, 37.0f) != 0))) {
        if (this->actor.yDistToWater > 0.0f) {
            Audio_PlayActorSound2((Actor *) this, 0x804U);
            return;
        }
        Audio_PlayActorSound2((Actor *) this, 0x801U);
        /* Duplicate return node #25. Try simplifying control flow for better match */
    }
}

void func_80B94C5C(EnZog *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    this->actor.speedXZ = 0.0f;
    if (this->unk304 != 0) {
        temp_f0 = this->actor.shape.yOffset;
        if (temp_f0 > 0.0f) {
            this->actor.shape.yOffset = temp_f0 - 20.0f;
        }
        this->actor.velocity.y = -1.0f;
        this->actor.minVelocityY = -1.0f;
    }
    if ((this->unk2FC == 1) && (this->unk302 == 0)) {
        this->unk2FE = 2;
        this->unk300 = 2;
    }
    if (this->unk304 == 5) {
        this->actionFunc = func_80B94A00;
    }
    func_80B93A48();
}

void func_80B94D0C(EnZog *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    u16 temp_v1;

    func_80B93D2C(this, globalCtx);
    temp_v0 = this->unk320;
    this->actor.speedXZ = 0.0f;
    if ((s32) temp_v0 > 0) {
        this->unk320 = temp_v0 - 1;
        this->unk31C = 1;
        this->unk31E = 1;
    } else {
        this->unk31C = 2;
        this->unk31E = 0;
    }
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        this->unk320 = 5;
        temp_v1 = globalCtx->msgCtx.unk11F04;
        if ((temp_v1 != 0x1004) && (temp_v1 != 0x1005) && (temp_v1 != 0x1006)) {
            if (temp_v1 != 0x1007) {

            } else {
                func_801477B4(globalCtx);
                this->actionFunc = func_80B94E34;
                this->unk300 = 5;
                this->unk320 = 0;
                this->unk31C = 2;
                this->unk31E = 0;
                func_80B93B44(this);
            }
        } else {
            func_80151938(globalCtx, (temp_v1 + 1) & 0xFFFF);
        }
    }
    func_80B93A48(this, globalCtx);
}

void func_80B94E34(EnZog *this, GlobalContext *globalCtx) {
    Actor *sp48;
    WaterBox *sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 temp_a3;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_v0;
    s32 phi_v1;

    sp48 = globalCtx->actorCtx.actorList[2].first;
    func_80B93D2C(this);
    func_80B93BE0(this, globalCtx);
    temp_f0 = this->actor.speedXZ;
    if (temp_f0 < 0.1f) {
        this->actor.speedXZ = 0.0f;
    } else {
        if (temp_f0 > 0.1f) {
            Lib_Vec3f_TranslateAndRotateY((Vec3f *) &this->actor.world, this->actor.shape.rot.y, &D_80B959AC, (Vec3f *) &sp38);
            sp38 += randPlusMinusPoint5Scaled(30.0f);
            sp3C += 20.0f;
            temp_f2 = sp40 + randPlusMinusPoint5Scaled(30.0f);
            temp_a3 = temp_f2;
            sp40 = temp_f2;
            if ((func_800CA1AC(globalCtx, &globalCtx->colCtx, sp38, temp_a3, &sp3C, &sp44) != 0) && (this->actor.world.pos.y < sp3C)) {
                EffectSsGSplash_Spawn(globalCtx, (Vec3f *) &sp38, NULL, NULL, (s16) 1, (s16) (s32) (Rand_ZeroFloat(this->actor.speedXZ * 40.0f) + (this->actor.speedXZ * 60.0f)));
            }
            if ((sp48->speedXZ > 3.0f) && (this->unk324 == 0)) {
                this->unk324 = 0x19;
                func_800B8E58(sp48, (sp48->unkA68->unk92 + 0x6818) & 0xFFFF);
            }
        }
        this->actor.speedXZ *= 0.3f;
    }
    temp_v0 = this->actor.yawTowardsPlayer - this->actor.world.rot.y;
    phi_v1 = temp_v0;
    if (temp_v0 < 0) {
        phi_v1 = -temp_v0;
    }
    if (phi_v1 >= 0x5001) {
        func_800B8A1C((Actor *) this, globalCtx, 0, 60.0f, 40.0f);
    }
    temp_v0_2 = this->unk324;
    if ((s32) temp_v0_2 > 0) {
        this->unk324 = temp_v0_2 - 1;
    }
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_80B94D0C;
        this->actor.speedXZ = 0.0f;
        this->unk300 = 2;
    } else if ((this->actor.bgCheckFlags & 1) != 0) {
        this->actor.home.rot.z = 1;
        this->actionFunc = func_80B94C5C;
        this->actor.speedXZ = 0.0f;
        this->unk2FE = 1;
        this->actor.velocity.y = 0.0f;
        this->actor.minVelocityY = 0.0f;
        this->actor.gravity = 0.0f;
        this->unk31C = 1;
        this->unk31E = 0;
        func_80B93BA8(this, 0);
        gSaveContext.weekEventReg[88] |= 0x10;
    } else {
        temp_v0_3 = this->actor.yawTowardsPlayer;
        if (((s32) temp_v0_3 >= 0x3E81) && ((s32) temp_v0_3 < 0x7D00) && (this->unk302 == 0)) {
            func_800B8614((Actor *) this, globalCtx, 150.0f);
        }
    }
    this->actor.shape.rot.y = this->actor.world.rot.y;
    func_80B93A48(this, globalCtx);
}

void func_80B95128(EnZog *this, GlobalContext *globalCtx) {
    s32 temp_hi;

    func_80B93D2C(this, globalCtx);
    func_80B93BE0(this, globalCtx);
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_80B94D0C;
        this->unk300 = 2;
        this->actor.speedXZ = 0.0f;
        temp_hi = (s32) gSaveContext.day % 5;
        if (temp_hi != 1) {
            if (temp_hi != 2) {
                func_80B93BA8(this, 6);
            } else {
                func_80B93BA8(this, 5);
            }
        } else {
            func_80B93BA8(this, 4);
        }
        this->actor.flags &= 0xFFFEFFFF;
        gSaveContext.weekEventReg[91] = gSaveContext.weekEventReg[91] | 1;
    } else {
        func_800B8614((Actor *) this, globalCtx, 150.0f);
    }
    this->actor.shape.rot.y = this->actor.world.rot.y;
    func_80B93A48(this, globalCtx);
}

void func_80B95240(EnZog *this, GlobalContext *globalCtx) {
    func_80B93EA0();
}

void EnZog_Update(EnZog *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    s16 temp_v0;
    u16 temp_v1;
    EnZog *this = (EnZog *) thisx;

    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, 10.0f, 10.0f, 5U);
    if ((func_800EE29C(globalCtx, 0x1D7U) != 0) && ((this->actor.params & 0xF) != 2)) {
        this->actionFunc = func_80B9461C;
        this->actor.shape.yOffset = 0.0f;
    }
    this->actionFunc(this, globalCtx);
    if (this->unk304 == 6) {
        if (func_801378B8(&this->unk190, 43.0f) == 0) {
            goto block_6;
        }
        goto block_8;
    }
block_6:
    if ((this->unk304 == 0x11) && (func_801378B8(&this->unk190, 14.0f) != 0)) {
block_8:
        Audio_PlayActorSound2((Actor *) this, 0x2995U);
    }
    temp_a2 = &this->unk144;
    if ((this->unk30A & 1) != 0) {
        this->unk144.dim.pos.x = (s16) (s32) this->unk2F0.x;
        this->unk144.dim.pos.y = (s16) (s32) this->actor.world.pos.y;
        this->unk144.dim.pos.z = (s16) (s32) this->unk2F0.z;
    } else {
        sp2C = temp_a2;
        Collider_UpdateCylinder((Actor *) this, temp_a2);
    }
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk144);
    temp_v1 = this->unk30A;
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    this->actor.focus.pos.y += 30.0f;
    if ((temp_v1 & 4) != 0) {
        temp_v0 = this->unk31A;
        if (temp_v0 == -1) {
            this->unk30A = temp_v1 & 0xFFFB;
            return;
        }
        if ((this + (temp_v0 * 2))->unk30C == -1) {
            this->unk30A = temp_v1 & 0xFFFB;
            return;
        }
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay((this + (this->unk31A * 2))->unk30C);
            return;
        }
        if (ActorCutscene_GetCanPlayNext((this + (this->unk31A * 2))->unk30C) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((this + (this->unk31A * 2))->unk30C, (Actor *) this);
            this->unk30A &= 0xFFFB;
            return;
        }
        ActorCutscene_SetIntentToPlay((this + (this->unk31A * 2))->unk30C);
        /* Duplicate return node #22. Try simplifying control flow for better match */
    }
}

void func_80B954C4(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    void *temp_a0;
    void *temp_v1;
    s32 phi_a2;

    D_80B959BC = 1000.0f;
    if (arg1 == 9) {
        arg1 = arg1;
        SysMatrix_MultiplyVector3fByState(&D_80B959B8, arg4 + 0x3C);
    }
    D_80B959BC = 0.0f;
    phi_a2 = arg1;
    if (arg1 == 1) {
        arg1 = arg1;
        SysMatrix_MultiplyVector3fByState(&D_80B959B8, arg4 + 0x2F0);
        phi_a2 = arg1;
    }
    if (((arg4->unk30A & 2) != 0) && (phi_a2 == 0x11)) {
        temp_a0 = *arg0;
        temp_v1 = temp_a0->unk2B0;
        temp_a0->unk2B0 = (void *) (temp_v1 + 8);
        temp_v1->unk0 = 0xDE000000;
        temp_v1->unk4 = &D_060280A8;
    }
}

void func_80B95598(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **arg5) {
    Gfx *temp_v1;
    s32 phi_a2;

    D_80B959C8 = 1000.0f;
    if (arg1 == 9) {
        arg1 = arg1;
        SysMatrix_MultiplyVector3fByState(&D_80B959C4, arg4 + 0x3C);
    }
    D_80B959C8 = 0.0f;
    phi_a2 = arg1;
    if (arg1 == 1) {
        arg1 = arg1;
        SysMatrix_MultiplyVector3fByState(&D_80B959C4, arg4 + 0x2F0);
        phi_a2 = arg1;
    }
    if (((arg4->unk30A & 2) != 0) && (phi_a2 == 0x11)) {
        temp_v1 = *arg5;
        *arg5 = temp_v1 + 8;
        temp_v1->words.w0 = 0xDE000000;
        temp_v1->words.w1 = &D_060280A8;
    }
}

void EnZog_Draw(EnZog *this, GlobalContext *globalCtx) {
    Gfx *temp_a0;
    Gfx *temp_a0_2;
    Gfx *temp_s0;
    Gfx *temp_s0_2;
    Gfx *temp_v0;
    GraphicsContext *temp_a2;
    EnZog *this = (EnZog *) thisx;

    temp_a2 = globalCtx->state.gfxCtx;
    if ((this->unk30A & 8) != 0) {
        if ((s32) this->unk322 >= 0x81) {
            temp_a0 = temp_a2->polyXlu.p;
            temp_a2->polyXlu.p = temp_a0 + 8;
            func_8012C2B4(temp_a0);
            Scene_SetRenderModeXlu(globalCtx, 2, 2U);
        } else {
            temp_a0_2 = temp_a2->polyXlu.p;
            temp_a2->polyXlu.p = temp_a0_2 + 8;
            func_8012C304(temp_a0_2);
            Scene_SetRenderModeXlu(globalCtx, 1, 2U);
        }
        temp_s0 = temp_a2->polyXlu.p;
        temp_s0->words.w0 = 0xDB060020;
        temp_s0->words.w1 = Lib_SegmentedToVirtual(D_80B958AC[this->unk31C]);
        temp_s0->unk8 = 0xDB060024;
        temp_s0->unkC = Lib_SegmentedToVirtual(D_80B958B8[this->unk31E]);
        temp_s0->unk10 = 0xFB000000;
        temp_v0 = temp_s0 + 0x18;
        temp_s0->unk14 = (s32) (this->unk322 & 0xFF);
        temp_a2->polyXlu.p = temp_v0;
        temp_a2->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk190.skeleton, this->unk190.limbDrawTbl, (s32) this->unk190.dListCount, NULL, func_80B95598, (Actor *) this, temp_v0);
        return;
    }
    func_8012C28C(temp_a2);
    Scene_SetRenderModeXlu(globalCtx, 0, 1U);
    temp_s0_2 = temp_a2->polyOpa.p;
    temp_s0_2->words.w0 = 0xDB060020;
    temp_s0_2->words.w1 = Lib_SegmentedToVirtual(D_80B958AC[this->unk31C]);
    temp_s0_2->unk8 = 0xDB060024;
    temp_s0_2->unkC = Lib_SegmentedToVirtual(D_80B958B8[this->unk31E]);
    temp_s0_2->unk14 = 0xFF;
    temp_s0_2->unk10 = 0xFB000000;
    temp_a2->polyOpa.p = temp_s0_2 + 0x18;
    SkelAnime_DrawSV(globalCtx, this->unk190.skeleton, this->unk190.limbDrawTbl, (s32) this->unk190.dListCount, NULL, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80B954C4, (Actor *) this);
}
