typedef struct EnWf {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ Vec3s unk188;                       /* inferred */
    /* 0x18E */ char pad18E[0x7E];                  /* maybe part of unk188[22]? */
    /* 0x20C */ Vec3s unk20C;                       /* inferred */
    /* 0x212 */ char pad212[0x7E];                  /* maybe part of unk20C[22]? */
    /* 0x290 */ void (*actionFunc)(EnWf *, GlobalContext *);
    /* 0x294 */ u8 unk294;                          /* inferred */
    /* 0x295 */ u8 unk295;                          /* inferred */
    /* 0x296 */ u8 unk296;                          /* inferred */
    /* 0x297 */ char pad297[0x1];
    /* 0x298 */ s16 unk298;                         /* inferred */
    /* 0x29A */ s16 unk29A;                         /* inferred */
    /* 0x29C */ s16 unk29C;                         /* inferred */
    /* 0x29E */ s16 unk29E;                         /* inferred */
    /* 0x2A0 */ s16 unk2A0;                         /* inferred */
    /* 0x2A2 */ u16 unk2A2;                         /* inferred */
    /* 0x2A4 */ f32 unk2A4;                         /* inferred */
    /* 0x2A8 */ f32 unk2A8;                         /* inferred */
    /* 0x2AC */ f32 unk2AC;                         /* inferred */
    /* 0x2B0 */ f32 unk2B0;                         /* inferred */
    /* 0x2B4 */ f32 unk2B4;                         /* inferred */
    /* 0x2B8 */ Vec3f unk2B8;                       /* inferred */
    /* 0x2C4 */ char pad2C4[0x6C];                  /* maybe part of unk2B8[10]? */
    /* 0x330 */ ColliderJntSph unk330;              /* inferred */
    /* 0x350 */ ColliderJntSphElement unk350;       /* inferred */
    /* 0x390 */ char pad390[0xC0];                  /* maybe part of unk350[4]? */
    /* 0x450 */ ColliderCylinder unk450;            /* inferred */
    /* 0x49C */ ColliderCylinder unk49C;            /* inferred */
} EnWf;                                             /* size = 0x4E8 */

struct _mips2c_stack_EnWf_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnWf_Draw {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnWf_Init {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnWf_Update {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ CollisionCheckContext *sp2C;         /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809907D4 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80990854 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809908E0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80990948 {
    /* 0x00 */ char pad0[0x2E];
    /* 0x2E */ s16 sp2E;                            /* inferred */
    /* 0x30 */ char pad30[0x8];                     /* maybe part of sp2E[5]? */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80990C6C {
    /* 0x00 */ char pad0[0x88];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad94[0x4];
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_80990E4C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80990EAC {};              /* size 0x0 */

struct _mips2c_stack_func_80990ED4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80990F0C {};              /* size 0x0 */

struct _mips2c_stack_func_80990F50 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80990FC8 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80991040 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809910F0 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80991174 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80991200 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80991280 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80991438 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8099149C {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ char pad24[0x4];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80991738 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8099177C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80991948 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809919F4 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ char pad24[0x2];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80991C04 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80991C80 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad24[0x6];                     /* maybe part of sp20[2]? */
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80991FD8 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80992068 {
    /* 0x00 */ char pad0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8099223C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809922B4 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809923B0 {};              /* size 0x0 */

struct _mips2c_stack_func_809923E4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8099245C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809924EC {
    /* 0x00 */ char pad0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809926D0 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80992784 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8099282C {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809928CC {
    /* 0x00 */ char pad0[0x2A];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80992A74 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80992B8C {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
    /* 0x28 */ char pad28[0x4];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80992D6C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80992E0C {
    /* 0x00 */ char pad0[0x60];
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad6C[0x4];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80992FD4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80993018 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80993148 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80993194 {
    /* 0x00 */ char pad0[0x32];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ s16 sp34;                            /* inferred */
    /* 0x36 */ s16 sp36;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80993350 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809933A0 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ s16 sp2C;                            /* inferred */
    /* 0x2E */ s16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80993524 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8099357C {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ PosRot *sp28;                        /* inferred */
    /* 0x2C */ char pad2C[0x2];
    /* 0x2E */ s16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80993738 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8099386C {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80993E50 {};              /* size 0x0 */

struct _mips2c_stack_func_80993E94 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s8 *sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8099408C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

s32 func_800BC5B8(GlobalContext *, EnWf *);         /* extern */
s32 func_800BE184(GlobalContext *, Actor *, ?, ?, s32, s32); /* extern */
? func_800BE3D0(EnWf *, s16, ActorShape *);         /* extern */
? func_800F0590(GlobalContext *, PosRot *, ?, ?);   /* extern */
void func_809907D4(Actor *arg0);                    /* static */
void func_80990854(Actor *arg0, GlobalContext *arg1); /* static */
void func_809908E0(EnWf *arg0);                     /* static */
s32 func_80990948(GlobalContext *arg0, Actor *arg1, s16 arg2, EnWf *); /* static */
void func_80990C6C(Actor *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_80990E4C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80990EAC(EnWf *arg0);                      /* static */
void func_80990ED4(Actor *arg0, EnWf *);            /* static */
void func_80990F0C(EnWf *arg0);                     /* static */
void func_80990FC8(f32 arg0);                       /* static */
void func_809910F0(EnWf *arg0);                     /* static */
void func_80991200(EnWf *arg0);                     /* static */
void func_80991438(Actor *arg0);                    /* static */
void func_80991738(EnWf *arg0, s16);                /* static */
void func_80991948(Actor *arg0);                    /* static */
void func_80991C04(Actor *arg0);                    /* static */
void func_80991FD8(EnWf *arg0);                     /* static */
void func_8099223C(Actor *arg0);                    /* static */
void func_809923B0(Actor *arg0);                    /* static */
void func_8099245C(Actor *arg0);                    /* static */
void func_809926D0(Actor *arg0);                    /* static */
void func_8099282C(Actor *arg0);                    /* static */
void func_80992A74(Actor *arg0, GlobalContext *arg1); /* static */
void func_80992D6C(EnWf *arg0, EnWf *);             /* static */
void func_80992FD4(EnWf *arg0, s16);                /* static */
void func_80993148(EnWf *arg0);                     /* static */
void func_80993350(EnWf *arg0, EnWf *);             /* static */
void func_80993524(Actor *arg0);                    /* static */
void func_80993738(EnWf *arg0, GlobalContext *arg1); /* static */
void func_8099386C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80993E50(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80993E94(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
s32 func_8099408C(GlobalContext *arg0, EnWf *arg1, GlobalContext *); /* static */
extern FlexSkeletonHeader D_06003BC0;
extern AnimationHeader D_06004638;
extern AnimationHeader D_06004A90;
extern AnimationHeaderCommon D_06004C44;
extern AnimationHeader D_060053D0;
extern AnimationHeader D_06005700;
extern FlexSkeletonHeader D_060095D0;
extern AnimationHeader D_06009808;
extern AnimationHeader D_06009A50;
extern AnimationHeader D_0600A3CC;
static ColliderJntSphElementInit D_80994170[4] = {
    {{0, {0xF7CFFFFF, 0, 0x10}, {0, 0, 0}, 1, 0, 0}, {0xF, {{0, 0, 0}, 0xF}, 0x64}},
    {
        {0, {0xF7CFFFFF, 0, 0x10}, {0, 0, 0}, 1, 0, 0},
        {0x15, {{0, 0, 0}, 0xF}, 0x64},
    },
    {
        {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 5, 1},
        {0x11, {{0x320, 0, 0}, 0x19}, 0x64},
    },
    {{1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 5, 1}, {0xC, {{0, 0, 0}, 0x1E}, 0x64}},
};
static ColliderJntSphInit D_80994200 = {{9, 0x10, 0xD, 0x39, 0x10, 0}, 4, &D_80994170};
static ColliderCylinderInit D_80994210 = {
    {5, 0, 9, 0, 0, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0},
    {0x14, 0x32, 0, {0, 0, 0}},
};
static ColliderCylinderInit D_8099423C = {
    {5, 0, 9, 0, 0, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0},
    {0xF, 0x14, 0xFFF1, {0, 0, 0}},
};
static DamageTable D_80994268 = {
    {
        0x10,
        1,
        1,
        1,
        1,
        1,
        0,
        0xF0,
        2,
        1,
        3,
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
static DamageTable D_80994288 = {
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
        3,
        0x22,
        0x32,
        0x42,
        1,
        0x10,
        1,
        2,
        0x10,
        0x50,
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
static CollisionCheckInfoInit D_809942A8 = {8, 0x32, 0x64, 0xFE};
static void *D_809942B0[4] = {(void *)0x6007AA8, (void *)0x60082A8, (void *)0x60084A8, (void *)0x60082A8};
static void *D_809942C0[4] = {(void *)0x6000300, (void *)0x60027D8, (void *)0x60029D8, (void *)0x60027D8};
static InitChainEntry D_809942D0[2];                /* unable to generate initializer */
static s32 D_809942D8 = 0;
static Vec3f D_809942DC = {0.0f, 0.1f, 0.0f};
static Color_RGBA8 D_809942E8 = {0xB9, 0x8C, 0x46, 0xFF};
static Color_RGBA8 D_809942EC = {0xFF, 0xFF, 0xFF, 0xFF};
static Vec3f D_809942F0 = {0.0f, 0.5f, 0.0f};
static ? D_809942FC;                                /* unable to generate initializer */
static ? D_80994302;                                /* unable to generate initializer */

void EnWf_Init(EnWf *this, GlobalContext *globalCtx) {
    Actor *temp_s1;
    Actor *temp_v0_2;
    ActorContext *temp_s0_2;
    f32 temp_f2;
    s16 temp_v0;
    s32 temp_s0;
    void **temp_s0_3;
    s32 phi_s0;
    void **phi_s1;
    void **phi_s0_2;
    s32 phi_v0;
    EnWf *this = (EnWf *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_809942D0);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 70.0f);
    this->actor.shape.shadowAlpha = 0x96;
    Collider_InitAndSetJntSph(globalCtx, &this->unk330, (Actor *) this, &D_80994200, &this->unk350);
    Collider_InitAndSetCylinder(globalCtx, &this->unk450, (Actor *) this, &D_80994210);
    Collider_InitAndSetCylinder(globalCtx, &this->unk49C, (Actor *) this, &D_8099423C);
    Math_Vec3f_Copy((Vec3f *) &this->actor.focus, (Vec3f *) &this->actor.world);
    temp_v0 = this->actor.shape.rot.x;
    if ((s32) temp_v0 <= 0) {
        this->unk2A8 = 10000.0f;
    } else {
        this->unk2A8 = (f32) temp_v0 * 40.0f;
    }
    this->actor.shape.rot.x = 0;
    this->actor.world.rot.x = 0;
    if ((this->actor.params & 0x80) != 0) {
        this->unk295 = 1;
    } else {
        this->unk295 = 0;
    }
    if (this->unk295 != 0) {
        temp_s0 = this->actor.shape.rot.z + 0x64;
        if (temp_s0 <= 0) {
            phi_s0 = 1;
        } else {
            phi_v0 = temp_s0;
            if (temp_s0 >= 0x100) {
                phi_v0 = 0xFF;
            }
            phi_s0 = phi_v0;
        }
        this->actor.shape.rot.z = 0;
        this->actor.world.rot.z = 0;
        temp_v0_2 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x8E, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) (s32) this->actor.shape.rot.y, (s16) 0, (s16) (phi_s0 | 0xFF00));
        this->actor.child = temp_v0_2;
        if (temp_v0_2 != 0) {
            temp_s1 = globalCtx->actorCtx.actorList[2].first;
            this->actor.child->xzDistToPlayer = Actor_XZDistanceBetweenActors((Actor *) this, temp_s1);
            temp_f2 = ((f32) phi_s0 * 0.5f) + 45.0f;
            this->unk2A4 = temp_f2;
            this->unk29C = (s16) (s32) (204800.0f / temp_f2);
            this->actor.shape.rot.y = Actor_YawBetweenActors((Actor *) this, temp_s1);
            this->actor.world.pos.x -= this->unk2A4 * Math_SinS(this->actor.shape.rot.y);
            this->actor.world.pos.z -= this->unk2A4 * Math_CosS(this->actor.shape.rot.y);
        }
    }
    if (Actor_GetRoomCleared(globalCtx, (u32) this->actor.room) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actor.params &= 0x3F;
    temp_s0_2 = &globalCtx->actorCtx;
    Actor_SetScale((Actor *) this, 0.0075f);
    if (this->actor.params == 0) {
        SkelAnime_InitSV(globalCtx, &this->unk144, &D_060095D0, &D_0600A3CC, &this->unk188, &this->unk20C, 0x16);
        this->actor.hintId = 0x4C;
        CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80994288, &D_809942A8);
        this->unk330.elements->info.toucher.damage = 8;
        this->unk330.elements->unk45 = 8U;
        this->actor.colChkInfo.health = 6;
    } else {
        SkelAnime_InitSV(globalCtx, &this->unk144, &D_06003BC0, &D_0600A3CC, &this->unk188, &this->unk20C, 0x16);
        this->actor.hintId = 0x57;
        CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80994268, &D_809942A8);
    }
    if (this->actor.child == 0) {
        func_80990F0C(this);
        this->unk2A0 = 0;
    } else {
        func_80992FD4(this);
    }
    func_800BC154(globalCtx, temp_s0_2, (Actor *) this, 5U);
    phi_s1 = D_809942B0;
    if (D_809942D8 == 0) {
        phi_s0_2 = D_809942C0;
        do {
            *phi_s1 = Lib_SegmentedToVirtual(*phi_s1);
            temp_s0_3 = phi_s0_2 + 4;
            temp_s0_3->unk-4 = Lib_SegmentedToVirtual(*phi_s0_2);
            phi_s1 += 4;
            phi_s0_2 = temp_s0_3;
        } while (temp_s0_3 != D_809942D0);
        D_809942D8 = 1;
    }
    this->unk2A2 = (u16) (u32) Rand_ZeroFloat(96.0f);
}

void EnWf_Destroy(EnWf *this, GlobalContext *globalCtx) {
    EnWf *this = (EnWf *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk330);
    Collider_DestroyCylinder(globalCtx, &this->unk450);
    Collider_DestroyCylinder(globalCtx, &this->unk49C);
}

void func_809907D4(Actor *arg0) {
    arg0->unk296 = 0xA;
    arg0->unk464 = 3;
    arg0->unk4B0 = 3;
    arg0->unk2A0 = 0x50;
    arg0->flags &= -0x401;
    arg0->unk2B0 = 0.75f;
    arg0->unk2B4 = 1.125f;
    arg0->unk2AC = 1.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x50);
}

void func_80990854(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk296 == 0xA) {
        arg0->unk296 = 0U;
        arg0->unk464 = 5;
        arg0->unk4B0 = 5;
        arg0->unk2AC = 0.0f;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x2B8), 0xA, 2, 0.3f, 0.2f);
        arg0->flags |= 0x400;
    }
}

void func_809908E0(EnWf *arg0) {
    u8 temp_t6;
    u8 temp_v0;

    temp_v0 = arg0->unk294;
    temp_t6 = temp_v0 + 1;
    if (temp_v0 != 0) {
        arg0->unk294 = temp_t6;
        if ((temp_t6 & 0xFF) == 4) {
            arg0->unk294 = 0;
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return;
    }
    if (Rand_ZeroOne() < 0.05f) {
        arg0->unk294 = 1;
    }
}

s32 func_80990948(GlobalContext *arg0, Actor *arg1, s16 arg2) {
    void *sp3C;
    s32 sp38;
    s16 sp2E;
    Actor *temp_v0_4;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    u8 temp_v0_2;
    void *temp_v0_3;
    s32 phi_v0;

    sp3C = arg0->actorCtx.actorList[2].first;
    temp_v0 = arg1->wallYaw - arg1->shape.rot.y;
    if ((s32) temp_v0 < 0) {
        sp38 = -(s32) temp_v0;
    } else {
        sp38 = (s32) temp_v0;
    }
    temp_v0_2 = arg1->unk295;
    if (((temp_v0_2 == 0) || ((temp_v0_2 == 1) && (temp_v0_3 = arg1->child, (temp_v0_3 != 0)) && (temp_v0_3->update != 0))) && (arg1->xzDistToPlayer > 160.0f) && (arg1->unk2A8 < Actor_XZDistanceToPoint(arg1, arg1 + 8))) {
        func_80993524(arg1);
        return 1;
    }
    if ((func_800BE184(arg0, arg1, 0x42C80000, 0x2710, 0x2EE0, (s32) arg1->shape.rot.y) != 0) && ((sp3C->unkADA == 0x11) || ((arg0->gameplayFrames & 1) != 0))) {
        func_8099282C(arg1);
        return 1;
    }
    if (func_800BE184(arg0, arg1, 0x42C80000, 0x5DC0, 0x2AA8, (s32) arg1->shape.rot.y) != 0) {
        temp_v1 = arg1->yawTowardsPlayer;
        arg1->shape.rot.y = temp_v1;
        arg1->world.rot.y = temp_v1;
        if (((arg1->bgCheckFlags & 8) != 0) && (sp38 < 0x2EE0)) {
            func_809926D0(arg1);
            return 1;
        }
        if ((sp3C->unkADA == 0x11) || ((arg0->gameplayFrames & 1) != 0)) {
            func_8099282C(arg1);
            return 1;
        }
        func_8099223C(arg1);
        return 1;
    }
    temp_v0_4 = func_800BC444(arg0, arg1, 80.0f);
    if ((temp_v0_4 != 0) && (temp_v0_4->id == 0x6A)) {
        temp_v1_2 = arg1->yawTowardsPlayer;
        arg1->shape.rot.y = temp_v1_2;
        arg1->world.rot.y = temp_v1_2;
        if ((s32) (s16) ((arg1->shape.rot.y - temp_v0_4->world.rot.y) + 0x8000) < 0x3E80) {
            func_809926D0(arg1);
        }
        return 1;
    }
    if (arg2 != 0) {
        if (Actor_IsActorFacingLink(arg1, 0x1B58) == 0) {
            func_80992A74(arg1, arg0);
            return 1;
        }
        temp_v1_3 = sp3C->shape.rot.y - arg1->shape.rot.y;
        if ((arg1->xzDistToPlayer <= 80.0f) && (sp2E = temp_v1_3, (func_800BC5EC(arg0, arg1) == 0))) {
            if ((arg0->gameplayFrames & 7) == 0) {
                phi_v0 = (s32) temp_v1_3;
                if ((s32) temp_v1_3 < 0) {
                    phi_v0 = -(s32) temp_v1_3;
                }
                if (phi_v0 < 0x38E0) {
                    goto block_36;
                }
                goto block_37;
            }
block_36:
            func_80991C04(arg1);
            return 1;
        }
block_37:
        func_80991948(arg1);
        return 1;
    }
    return 0;
}

void func_80990C6C(Actor *arg0, GlobalContext *arg1, s32 arg2) {
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    CollisionPoly *temp_a3;
    f32 *temp_s3;
    s32 temp_s0;
    u32 temp_v0;
    s32 phi_s7;
    Color_RGBA8 *phi_s1;
    s32 phi_s6;
    s32 phi_s0;

    temp_a3 = arg0->floorPoly;
    phi_s7 = arg2;
    if (temp_a3 != 0) {
        temp_v0 = func_800C99D4(arg1 + 0x830, temp_a3, (s32) arg0->floorBgId);
        if (temp_v0 != 5) {
            if ((temp_v0 == 0xF) || (temp_v0 == 0xE)) {
                phi_s7 = arg2 + 2;
                phi_s1 = &D_809942EC;
                phi_s6 = (s32) (Rand_ZeroFloat(150.0f) + 350.0f) << 0x10;
            } else {
                phi_s1 = &D_809942E8;
                phi_s6 = (s32) (Rand_ZeroFloat(100.0f) + 250.0f) << 0x10;
            }
            phi_s0 = 0;
            if (phi_s7 > 0) {
                temp_s3 = &sp88;
                do {
                    sp88 = randPlusMinusPoint5Scaled(50.0f) + arg0->world.pos.x;
                    sp8C = Rand_ZeroFloat(5.0f) + arg0->world.pos.y;
                    sp90 = randPlusMinusPoint5Scaled(50.0f) + arg0->world.pos.z;
                    func_800B0F18(arg1, (Vec3f *) temp_s3, &D_801D15B0, &D_809942DC, phi_s1, phi_s1, (s16) (phi_s6 >> 0x10), (s16) 5, (s16) (s32) (Rand_ZeroFloat(5.0f) + 14.0f));
                    temp_s0 = phi_s0 + 1;
                    phi_s0 = temp_s0;
                } while (temp_s0 != phi_s7);
            }
        }
    }
}

void func_80990E4C(Actor *arg0, GlobalContext *arg1) {
    if ((func_801378B8(arg0 + 0x144, 1.0f) != 0) && ((arg0->bgCheckFlags & 1) != 0)) {
        func_80990C6C(arg0, arg1, 2);
        Audio_PlayActorSound2(arg0, 0x385AU);
    }
}

s32 func_80990EAC(EnWf *arg0) {
    if ((s32) arg0->actor.child->unk148 < 0xC8) {
        return 1;
    }
    return 0;
}

void func_80990ED4(Actor *arg0) {
    arg0->child = NULL;
    arg0->shape.rot.y = arg0->yawTowardsPlayer;
    Audio_PlayActorSound2(arg0, 0x383CU);
    func_80991438(arg0);
}

void func_80990F0C(EnWf *arg0) {
    arg0->unk450.base.acFlags &= 0xFFFE;
    arg0->actor.shape.shadowScale = 0.0f;
    arg0->actor.scale.y = 0.0f;
    arg0->actor.flags &= -2;
    arg0->unk2A0 = 0x3C;
    arg0->actionFunc = func_80990F50;
}

void func_80990F50(EnWf *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s16 temp_v0;
    f32 phi_f2;

    temp_v0 = this->unk2A0;
    phi_f2 = 240.0f;
    if (temp_v0 != 0) {
        this->unk2A0 = temp_v0 - 1;
    }
    if ((s32) this->unk2A0 <= 0) {
        temp_f0 = this->unk2A8;
        if (temp_f0 < 240.0f) {
            phi_f2 = temp_f0;
        }
        if (this->actor.xzDistToPlayer < phi_f2) {
            func_80990FC8(240.0f);
        }
    }
}

void func_80990FC8(void *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_060053D0, 0.5f, 0.0f, 7.0f, (u8) 3, 0.0f);
    arg0->unk2A0 = 5;
    arg0->unk4 = (s32) (arg0->unk4 | 1);
    arg0->unk290 = func_80991040;
}

void func_80991040(EnWf *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;
    f32 *temp_a0_2;

    temp_a0 = &this->unk144;
    if (this->unk2A0 != 0) {
        temp_a0_2 = &this->actor.shape.shadowScale;
        this->actor.scale.y += this->actor.scale.x * 0.2f;
        this = this;
        Math_StepToF(temp_a0_2, 70.0f, 14.0f);
        this->unk2A0 += -1;
        if (this->unk2A0 == 0) {
            Audio_PlayActorSound2((Actor *) this, 0x383CU);
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return;
    }
    this = this;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        this->actor.scale.y = this->actor.scale.x;
        func_80991200(this);
    }
}

void func_809910F0(EnWf *arg0) {
    arg0->unk450.base.acFlags &= 0xFFFE;
    arg0->actor.speedXZ = 0.0f;
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_060053D0, 0.5f, 0.0f, 7.0f, (u8) 3, -5.0f);
    arg0->unk2A0 = 5;
    arg0->actionFunc = func_80991174;
}

void func_80991174(EnWf *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;
    f32 *temp_a0_2;

    temp_a0 = &this->unk144;
    this = this;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        if ((s32) this->unk2A0 > 0) {
            temp_a0_2 = &this->actor.shape.shadowScale;
            this->actor.scale.y -= this->actor.scale.x * 0.2f;
            this = this;
            Math_StepToF(temp_a0_2, 0.0f, 14.0f);
            this->unk2A0 += -1;
            return;
        }
        func_80990F0C(this);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80991200(EnWf *arg0) {
    EnWf *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk450.base.acFlags |= 1;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x144, &D_0600A3CC, -4.0f);
    arg0->unk2A0 = (s32) Rand_ZeroFloat(10.0f) + 2;
    arg0->actionFunc = func_80991280;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
}

void func_80991280(EnWf *this, GlobalContext *globalCtx) {
    Actor *sp24;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 phi_v1;
    s32 phi_v1_2;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    temp_a0 = this->unk298;
    if (temp_a0 != 0) {
        temp_v0 = (this->actor.yawTowardsPlayer - this->actor.shape.rot.y) - this->unk29E;
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if (phi_v1 >= 0x2001) {
            this->unk298 = temp_a0 - 1;
            return;
        }
        this->unk298 = 0;
        goto block_6;
    }
block_6:
    if ((func_8099408C(globalCtx, this) == 0) && (func_80990948(globalCtx, (Actor *) this, 0) == 0)) {
        temp_v0_2 = sp24->shape.rot.y - this->actor.shape.rot.y;
        phi_v1_2 = (s32) temp_v0_2;
        if ((s32) temp_v0_2 < 0) {
            phi_v1_2 = -(s32) temp_v0_2;
        }
        if ((this->actor.xzDistToPlayer < 80.0f) && (sp24->unkADB != 0) && (phi_v1_2 >= 0x1F40)) {
            temp_v0_3 = this->actor.yawTowardsPlayer;
            this->actor.shape.rot.y = temp_v0_3;
            this->actor.world.rot.y = temp_v0_3;
            func_80991948((Actor *) this);
            return;
        }
        this->unk2A0 += -1;
        if (this->unk2A0 == 0) {
            if (Actor_IsActorFacingLink((Actor *) this, 0x1555) != 0) {
                if (Rand_ZeroOne() > 0.3f) {
                    func_80991438((Actor *) this);
                } else {
                    func_80991948((Actor *) this);
                }
            } else {
                func_80991738(this);
            }
            if (this->unk2A2 == 0) {
                Audio_PlayActorSound2((Actor *) this, 0x383EU);
            }
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
    }
}

void func_80991438(Actor *arg0) {
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk461 = (u8) (temp_a3->unk461 | 1);
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x144, &D_06005700, -4.0f);
    arg0->unk290 = func_8099149C;
    arg0->world.rot.y = arg0->shape.rot.y;
    arg0->speedXZ = 8.0f;
}

void func_8099149C(EnWf *this, GlobalContext *globalCtx) {
    f32 sp2C;
    s32 sp28;
    Actor *sp20;
    Actor *temp_t6;
    GlobalContext *temp_a2;
    s16 temp_v0;
    s16 temp_v0_2;

    temp_a2 = globalCtx;
    temp_t6 = temp_a2->actorCtx.actorList[2].first;
    globalCtx = temp_a2;
    sp20 = temp_t6;
    if (func_8099408C(temp_a2, this, temp_a2) == 0) {
        Math_ScaledStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0x1F4);
        this->actor.world.rot.y = this->actor.shape.rot.y;
        if (func_800BC5EC(globalCtx, (Actor *) this) != 0) {
            sp2C = 150.0f;
        } else {
            sp2C = 0.0f;
        }
        temp_v0 = sp20->shape.rot.y - this->actor.shape.rot.y;
        if ((s32) temp_v0 < 0) {
            sp28 = -(s32) temp_v0;
        } else {
            sp28 = (s32) temp_v0;
        }
        if ((this->actor.xzDistToPlayer < (150.0f + sp2C)) && (sp20->unkADB != 0) && (sp28 >= 0x1F40) && (temp_v0_2 = this->actor.yawTowardsPlayer, this->actor.shape.rot.y = temp_v0_2, this->actor.world.rot.y = temp_v0_2, (Rand_ZeroOne() > 0.7f))) {
            func_80991948((Actor *) this);
            return;
        }
        SkelAnime_FrameUpdateMatrix(&this->unk144);
        if (func_80990948(globalCtx, (Actor *) this, 0) == 0) {
            if (Actor_IsActorFacingLink((Actor *) this, 0x11C7) == 0) {
                if (Rand_ZeroOne() > 0.5f) {
                    func_80991948((Actor *) this);
                } else {
                    func_80991200(this);
                }
            } else if (this->actor.xzDistToPlayer < (90.0f + sp2C)) {
                if ((func_800BC5EC(globalCtx, (Actor *) this) == 0) && ((Rand_ZeroOne() > 0.03f) || ((this->actor.xzDistToPlayer <= 80.0f) && (sp28 < 0x38E0)))) {
                    func_80991C04((Actor *) this);
                } else if ((func_800BC5EC(globalCtx, (Actor *) this) != 0) && (Rand_ZeroOne() > 0.5f)) {
                    func_8099223C((Actor *) this);
                } else {
                    func_80991948((Actor *) this);
                }
            }
            if (this->unk2A2 == 0) {
                Audio_PlayActorSound2((Actor *) this, 0x383EU);
            }
            func_80990E4C((Actor *) this, globalCtx);
        }
        /* Duplicate return node #30. Try simplifying control flow for better match */
    }
}

void func_80991738(EnWf *arg0) {
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x144, &D_06009808, -4.0f);
    arg0->actionFunc = func_8099177C;
}

void func_8099177C(EnWf *this, GlobalContext *globalCtx) {
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_a0;
    s16 temp_v0;
    s32 temp_v1;
    s32 phi_v1;
    f32 phi_f2;
    f32 phi_f12;

    if ((func_8099408C(globalCtx, this) == 0) && (func_80990948(globalCtx, (Actor *) this, 0) == 0)) {
        temp_a0 = this->actor.shape.rot.y;
        temp_v0 = this->actor.yawTowardsPlayer - temp_a0;
        if ((s32) temp_v0 > 0) {
            phi_v1 = (s32) (((f32) temp_v0 * 0.25f) + 2000.0f) << 0x10;
        } else {
            phi_v1 = (s32) (((f32) temp_v0 * 0.25f) - 2000.0f) << 0x10;
        }
        temp_v1 = phi_v1 >> 0x10;
        this->actor.shape.rot.y = temp_a0 + temp_v1;
        this->actor.world.rot.y = this->actor.shape.rot.y;
        if ((s32) temp_v0 > 0) {
            temp_f2 = (f32) temp_v1 * 0.5f;
            phi_f2 = temp_f2;
            phi_f12 = 1.0f;
            if (temp_f2 > 1.0f) {
                goto block_9;
            }
        } else {
            temp_f2_2 = (f32) temp_v1 * 0.5f;
            phi_f2 = temp_f2_2;
            phi_f12 = -1.0f;
            if (temp_f2_2 < -1.0f) {
block_9:
                phi_f2 = phi_f12;
            }
        }
        this->unk144.animPlaybackSpeed = -phi_f2;
        SkelAnime_FrameUpdateMatrix(&this->unk144);
        if (Actor_IsActorFacingLink((Actor *) this, 0x1555) != 0) {
            if (Rand_ZeroOne() > 0.8f) {
                func_80991948((Actor *) this);
            } else {
                func_80991438((Actor *) this);
            }
        }
        if (this->unk2A2 == 0) {
            Audio_PlayActorSound2((Actor *) this, 0x383EU);
        }
    }
}

void func_80991948(Actor *arg0) {
    s32 temp_f8;

    arg0->unk461 = (u8) (arg0->unk461 | 1);
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x144, &D_06005700, -4.0f);
    if (Rand_ZeroOne() > 0.5f) {
        arg0->unk29A = 0x3E80;
    } else {
        arg0->unk29A = -0x3E80;
    }
    arg0->speedXZ = 6.0f;
    arg0->world.rot.y = arg0->shape.rot.y;
    temp_f8 = (s32) Rand_ZeroFloat(30.0f);
    arg0->unk290 = func_809919F4;
    arg0->unk2A0 = (s16) (temp_f8 + 0x1E);
}

void func_809919F4(EnWf *this, GlobalContext *globalCtx) {
    s16 sp26;
    Actor *sp20;
    s16 temp_a0;
    s16 temp_v0;
    s32 phi_v1;

    sp20 = globalCtx->actorCtx.actorList[2].first;
    Math_ScaledStepToS(&this->actor.shape.rot.y, (s16) (this->actor.yawTowardsPlayer + this->unk29A), 0x9C4);
    if ((func_8099408C(globalCtx, this) == 0) && (func_80990948(globalCtx, (Actor *) this, 0) == 0)) {
        temp_a0 = this->unk29A;
        this->actor.world.rot.y = this->actor.shape.rot.y;
        sp26 = sp20->shape.rot.y + temp_a0 + 0x8000;
        if ((this->actor.bgCheckFlags & 8) != 0) {
            temp_v0 = (this->actor.wallYaw - this->actor.yawTowardsPlayer) - temp_a0;
            phi_v1 = (s32) temp_v0;
            if ((s32) temp_v0 < 0) {
                phi_v1 = -(s32) temp_v0;
            }
            if (phi_v1 >= 0x2EE1) {
                this->unk29A = (s16) -(s32) temp_a0;
            }
        }
        SkelAnime_FrameUpdateMatrix(&this->unk144);
        func_80990E4C((Actor *) this, globalCtx);
        if (this->unk2A2 == 0) {
            Audio_PlayActorSound2((Actor *) this, 0x383EU);
        }
        if ((Math_CosS((s16) (sp26 - this->actor.shape.rot.y)) < -0.85f) && (func_800BC5EC(globalCtx, (Actor *) this) == 0) && (this->actor.xzDistToPlayer <= 80.0f)) {
            func_80991C04((Actor *) this);
            return;
        }
        this->unk2A0 += -1;
        if (this->unk2A0 == 0) {
            if ((func_800BC5EC(globalCtx, (Actor *) this) != 0) && (Rand_ZeroOne() > 0.5f)) {
                func_8099223C((Actor *) this);
                return;
            }
            func_80991200(this);
            this->unk2A0 = (s32) Rand_ZeroFloat(3.0f) + 1;
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #18. Try simplifying control flow for better match */
    }
}

void func_80991C04(Actor *arg0) {
    Actor *temp_a2;

    temp_a2 = arg0;
    temp_a2->unk461 = (u8) (temp_a2->unk461 | 1);
    arg0 = temp_a2;
    SkelAnime_ChangeAnimDefaultStop(temp_a2 + 0x144, &D_06004638);
    arg0->unk340 = (u8) (arg0->unk340 & 0xFFFB);
    arg0->unk2A0 = 7;
    arg0->unk290 = func_80991C80;
    arg0->unk154 = 20.0f;
    arg0->shape.rot.y = arg0->yawTowardsPlayer;
    arg0->speedXZ = 0.0f;
}

void func_80991C80(EnWf *this, GlobalContext *globalCtx) {
    s32 sp30;
    s32 sp2C;
    s16 sp2A;
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s16 temp_a2;
    s16 temp_v0;
    s16 temp_v0_3;
    s32 temp_v0_2;
    s32 phi_v0;

    temp_v0 = this->actor.shape.rot.y;
    sp2A = globalCtx->actorCtx.actorList[2].first->shape.rot.y - temp_v0;
    temp_a2 = this->actor.yawTowardsPlayer - temp_v0;
    if ((s32) temp_a2 < 0) {
        sp30 = -(s32) temp_a2;
    } else {
        sp30 = (s32) temp_a2;
    }
    temp_f0 = this->unk144.animCurrentFrame;
    this->actor.speedXZ = 0.0f;
    if (((temp_f0 >= 9.0f) && (temp_f0 < 13.0f)) || ((temp_f0 >= 17.0f) && (temp_f0 < 20.0f))) {
        if ((this->unk330.base.atFlags & 1) == 0) {
            Audio_PlayActorSound2((Actor *) this, 0x383FU);
        }
        this->unk330.base.atFlags |= 1;
    } else {
        this->unk330.base.atFlags &= 0xFFFE;
    }
    temp_a0 = &this->unk144;
    sp20 = temp_a0;
    temp_v0_2 = func_801378B8(temp_a0, 15.0f);
    sp2C = temp_v0_2;
    if (((temp_v0_2 != 0) && (func_800BC5B8(globalCtx, this) == 0) && ((Actor_IsActorFacingLink((Actor *) this, 0x2000) == 0) || (this->actor.xzDistToPlayer >= 100.0f))) || (SkelAnime_FrameUpdateMatrix(sp20) != 0)) {
        if ((sp2C == 0) && (temp_v0_3 = this->unk2A0, (temp_v0_3 != 0))) {
            this->actor.shape.rot.y += (s32) (3276.0f * (1.5f + ((f32) (temp_v0_3 - 4) * 0.4f)));
            func_80990C6C((Actor *) this, globalCtx, 1);
            this->unk2A0 += -1;
            return;
        }
        if ((Actor_IsActorFacingLink((Actor *) this, 0x1554) == 0) && (sp2C == 0)) {
            func_80991200(this);
            this->unk2A0 = (s32) Rand_ZeroFloat(5.0f) + 5;
            if (sp30 >= 0x32C9) {
                this->unk298 = 7;
                return;
            }
            /* Duplicate return node #35. Try simplifying control flow for better match */
            return;
        }
        if ((Rand_ZeroOne() > 0.7f) || (this->actor.xzDistToPlayer >= 120.0f)) {
            func_80991200(this);
            this->unk2A0 = (s32) Rand_ZeroFloat(5.0f) + 5;
            return;
        }
        this->actor.world.rot.y = this->actor.yawTowardsPlayer;
        if (Rand_ZeroOne() > 0.7f) {
            func_80992A74((Actor *) this, globalCtx);
            return;
        }
        phi_v0 = (s32) sp2A;
        if ((s32) sp2A < 0) {
            phi_v0 = -(s32) sp2A;
        }
        if (phi_v0 < 0x2711) {
            if (sp30 >= 0x3E81) {
                this->actor.world.rot.y = this->actor.yawTowardsPlayer;
                func_80991948((Actor *) this);
                return;
            }
            func_80990948(globalCtx, (Actor *) this, 1);
            return;
        }
        func_80991948((Actor *) this);
        /* Duplicate return node #35. Try simplifying control flow for better match */
    }
}

void func_80991FD8(EnWf *arg0) {
    f32 temp_f2;
    f32 phi_f0;

    temp_f2 = arg0->unk144.animCurrentFrame;
    phi_f0 = 1.0f;
    if (temp_f2 > 15.0f) {
        phi_f0 = 15.0f;
    }
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06004638, -0.5f, temp_f2 - 1.0f, phi_f0, (u8) 3, 0.0f);
    arg0->unk330.base.atFlags &= 0xFFFE;
    arg0->actionFunc = func_80992068;
}

void func_80992068(EnWf *this, GlobalContext *globalCtx) {
    s32 sp28;
    s16 sp26;
    s16 temp_a2;
    s16 temp_v0;
    s32 phi_v0;

    temp_v0 = this->actor.shape.rot.y;
    sp26 = globalCtx->actorCtx.actorList[2].first->shape.rot.y - temp_v0;
    temp_a2 = this->actor.yawTowardsPlayer - temp_v0;
    if ((s32) temp_a2 < 0) {
        sp28 = -(s32) temp_a2;
    } else {
        sp28 = (s32) temp_a2;
    }
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        if (Actor_IsActorFacingLink((Actor *) this, 0x1554) == 0) {
            func_80991200(this);
            this->unk2A0 = (s32) Rand_ZeroFloat(5.0f) + 5;
            if (sp28 >= 0x32C9) {
                this->unk298 = 0x1E;
                return;
            }
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return;
        }
        if ((Rand_ZeroOne() > 0.7f) || (this->actor.xzDistToPlayer >= 120.0f)) {
            func_80991200(this);
            this->unk2A0 = (s32) Rand_ZeroFloat(5.0f) + 5;
            return;
        }
        this->actor.world.rot.y = this->actor.yawTowardsPlayer;
        if (Rand_ZeroOne() > 0.7f) {
            func_80992A74((Actor *) this, globalCtx);
            return;
        }
        phi_v0 = (s32) sp26;
        if ((s32) sp26 < 0) {
            phi_v0 = -(s32) sp26;
        }
        if (phi_v0 < 0x2711) {
            if (sp28 >= 0x3E81) {
                this->actor.world.rot.y = this->actor.yawTowardsPlayer;
                func_80991948((Actor *) this);
                return;
            }
            func_80990948(globalCtx, (Actor *) this, 1);
            return;
        }
        func_80991948((Actor *) this);
        /* Duplicate return node #19. Try simplifying control flow for better match */
    }
}

void func_8099223C(Actor *arg0) {
    Actor *temp_a3;
    s16 temp_v0;

    temp_a3 = arg0;
    temp_a3->unk461 = (u8) (temp_a3->unk461 & 0xFFFE);
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x144, &D_06004A90, -3.0f);
    temp_v0 = arg0->yawTowardsPlayer;
    arg0->unk2A0 = 0;
    arg0->speedXZ = -6.0f;
    arg0->shape.rot.y = temp_v0;
    arg0->world.rot.y = temp_v0;
    Audio_PlayActorSound2(arg0, 0x386CU);
    arg0->unk290 = func_809922B4;
}

void func_809922B4(EnWf *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        if ((func_800BC5EC(globalCtx, (Actor *) this) == 0) && (temp_f0 = this->actor.xzDistToPlayer, (temp_f0 < 170.0f)) && (temp_f0 > 140.0f) && (Rand_ZeroOne() < 0.2f)) {
            func_80991438((Actor *) this);
        } else if ((globalCtx->gameplayFrames & 1) != 0) {
            func_80992A74((Actor *) this, globalCtx);
        } else {
            func_80991200(this);
        }
    }
    if (this->unk2A2 == 0) {
        Audio_PlayActorSound2((Actor *) this, 0x383EU);
    }
}

void func_809923B0(Actor *arg0) {
    arg0->speedXZ = 0.0f;
    if (arg0->velocity.y > 0.0f) {
        arg0->velocity.y = 0.0f;
    }
    arg0->unk290 = func_809923E4;
}

void func_809923E4(EnWf *this, GlobalContext *globalCtx) {
    EnWf *temp_a0;
    s16 temp_v0;

    temp_v0 = this->unk2A0;
    temp_a0 = this;
    if (temp_v0 != 0) {
        this->unk2A0 = temp_v0 - 1;
    }
    if (this->unk2A0 == 0) {
        this = this;
        func_80990854((Actor *) temp_a0, globalCtx);
        if (this->actor.colChkInfo.health == 0) {
            func_80992D6C(this, this);
            return;
        }
        func_80990948(globalCtx, (Actor *) this, 1, this);
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_8099245C(Actor *arg0) {
    Actor *temp_a0;
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk461 = (u8) (temp_a3->unk461 & 0xFFFE);
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x144, &D_06009A50, -4.0f);
    temp_a0 = arg0;
    if ((arg0->bgCheckFlags & 1) != 0) {
        arg0->speedXZ = -4.0f;
    }
    arg0->unk298 = 0;
    arg0->world.rot.y = arg0->yawTowardsPlayer;
    arg0 = arg0;
    Audio_PlayActorSound2(temp_a0, 0x3843U);
    arg0->unk290 = func_809924EC;
}

void func_809924EC(EnWf *this, GlobalContext *globalCtx) {
    s16 sp26;
    f32 temp_f0;
    s16 temp_v1;
    s32 temp_f10;
    s32 phi_v0;

    if ((this->actor.bgCheckFlags & 2) != 0) {
        this->actor.speedXZ = 0.0f;
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        temp_f0 = this->actor.speedXZ;
        if (temp_f0 < 0.0f) {
            this->actor.speedXZ = temp_f0 + 0.05f;
        }
    }
    Math_ScaledStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xBB8);
    if ((SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) && (temp_v1 = this->actor.wallYaw - this->actor.shape.rot.y, sp26 = temp_v1, (func_80990948(globalCtx, (Actor *) this, 0) == 0))) {
        if ((this->actor.bgCheckFlags & 8) != 0) {
            phi_v0 = (s32) temp_v1;
            if ((s32) temp_v1 < 0) {
                phi_v0 = -(s32) temp_v1;
            }
            if ((phi_v0 < 0x2EE0) && (this->actor.xzDistToPlayer < 120.0f)) {
                func_809926D0((Actor *) this);
                return;
            }
            goto block_13;
        }
block_13:
        if (func_8099408C(globalCtx, this) == 0) {
            if ((this->actor.xzDistToPlayer <= 80.0f) && (func_800BC5EC(globalCtx, (Actor *) this) == 0) && ((globalCtx->gameplayFrames & 7) != 0)) {
                func_80991C04((Actor *) this);
                return;
            }
            if (Rand_ZeroOne() > 0.5f) {
                func_80991200(this);
                temp_f10 = (s32) Rand_ZeroFloat(5.0f);
                this->unk298 = 0x1E;
                this->unk2A0 = temp_f10 + 5;
                return;
            }
            func_8099223C((Actor *) this);
            /* Duplicate return node #21. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #21. Try simplifying control flow for better match */
    }
}

void func_809926D0(Actor *arg0) {
    arg0->unk461 = (u8) (arg0->unk461 & 0xFFFE);
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06004A90, -1.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06004A90), 0.0f, (u8) 2, -3.0f);
    arg0->unk2A0 = 0;
    arg0->speedXZ = 6.5f;
    arg0->velocity.y = 15.0f;
    Audio_PlayActorSound2(arg0, 0x386CU);
    arg0->unk290 = func_80992784;
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_80992784(EnWf *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    Math_ScaledStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0x9C4);
    if ((SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) && ((this->actor.bgCheckFlags & 3) != 0)) {
        temp_v0 = this->actor.yawTowardsPlayer;
        this->actor.shape.rot.x = 0;
        this->actor.world.rot.y = temp_v0;
        this->actor.shape.rot.y = temp_v0;
        this->actor.velocity.y = 0.0f;
        this->actor.speedXZ = 0.0f;
        this->actor.world.pos.y = this->actor.floorHeight;
        if (func_800BC5EC(globalCtx, (Actor *) this) == 0) {
            func_80991C04((Actor *) this);
            return;
        }
        func_80991200(this);
        /* Duplicate return node #5. Try simplifying control flow for better match */
    }
}

void func_8099282C(Actor *arg0) {
    arg0->unk461 = (u8) (arg0->unk461 | 1);
    arg0->unk340 = (u8) (arg0->unk340 & 0xFFFE);
    arg0->unk2A0 = 0xA;
    arg0->speedXZ = 0.0f;
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_06004C44, -1.0f, (f32) SkelAnime_GetFrameCount(&D_06004C44), 0.0f, (u8) 2, -2.0f);
    arg0->unk290 = func_809928CC;
}

void func_809928CC(EnWf *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    s16 sp2A;
    s16 temp_v0;
    s16 temp_v1;
    s32 phi_v0;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        temp_v0 = this->unk2A0;
        if (temp_v0 != 0) {
            this->unk2A0 = temp_v0 - 1;
            return;
        }
        if (func_800BE184(globalCtx, (Actor *) this, 0x42C80000, 0x2710, 0x4000, (s32) this->actor.shape.rot.y) != 0) {
            if ((sp2C->unkADA != 0x11) || ((globalCtx->gameplayFrames & 1) != 0)) {
                this->unk2A0 = 0xA;
                return;
            }
            func_8099223C((Actor *) this);
            return;
        }
        if ((Actor_IsActorFacingLink((Actor *) this, 0x4000) != 0) && (this->actor.xzDistToPlayer < 60.0f) && (fabsf(this->actor.yDistToPlayer) < 50.0f)) {
            temp_v1 = sp2C->shape.rot.y - this->actor.shape.rot.y;
            sp2A = temp_v1;
            if (func_800BC5EC(globalCtx, (Actor *) this) == 0) {
                if ((globalCtx->gameplayFrames & 1) == 0) {
                    phi_v0 = (s32) temp_v1;
                    if ((s32) temp_v1 < 0) {
                        phi_v0 = -(s32) temp_v1;
                    }
                    if (phi_v0 < 0x38E0) {
                        goto block_16;
                    }
                    goto block_17;
                }
block_16:
                func_80991C04((Actor *) this);
                return;
            }
block_17:
            func_80991948((Actor *) this);
            return;
        }
        func_80991948((Actor *) this);
        /* Duplicate return node #19. Try simplifying control flow for better match */
    }
}

void func_80992A74(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    s32 temp_f8;

    arg0->unk461 = (u8) (arg0->unk461 | 1);
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x144, &D_06005700, -4.0f);
    temp_f0 = Math_SinS((s16) ((arg1->actorCtx.actorList[2].first->unkBE + arg0->unk29A) - arg0->yawTowardsPlayer));
    if (temp_f0 > 0.0f) {
        arg0->unk29A = 0x3E80;
    } else if (temp_f0 < 0.0f) {
        arg0->unk29A = -0x3E80;
    } else if (Rand_ZeroOne() > 0.5f) {
        arg0->unk29A = 0x3E80;
    } else {
        arg0->unk29A = -0x3E80;
    }
    arg0->speedXZ = 6.0f;
    arg0->world.rot.y = arg0->shape.rot.y;
    temp_f8 = (s32) Rand_ZeroFloat(10.0f);
    arg0->unk290 = func_80992B8C;
    arg0->unk2A0 = (s16) (temp_f8 + 5);
}

void func_80992B8C(EnWf *this, GlobalContext *globalCtx) {
    s32 sp2C;
    Actor *sp24;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s32 phi_a0;
    s32 phi_v1;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    Math_ScaledStepToS(&this->actor.shape.rot.y, (s16) (this->actor.yawTowardsPlayer + this->unk29A), 0x7D0);
    if ((this->actor.bgCheckFlags & 8) != 0) {
        temp_v1 = this->unk29A;
        temp_v0 = (this->actor.wallYaw - this->actor.yawTowardsPlayer) - temp_v1;
        phi_a0 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_a0 = -(s32) temp_v0;
        }
        if (phi_a0 >= 0x2EE1) {
            this->unk29A = (s16) -(s32) temp_v1;
        }
    }
    this->actor.world.rot.y = this->actor.shape.rot.y;
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    if (func_80990948(globalCtx, (Actor *) this, 0) == 0) {
        this->unk2A0 += -1;
        if (this->unk2A0 == 0) {
            temp_v0_2 = sp24->shape.rot.y - this->actor.yawTowardsPlayer;
            phi_v1 = (s32) temp_v0_2;
            if ((s32) temp_v0_2 < 0) {
                phi_v1 = -(s32) temp_v0_2;
            }
            if (phi_v1 >= 0x3A98) {
                func_80991200(this);
                this->unk2A0 = (s32) Rand_ZeroFloat(3.0f) + 1;
            } else {
                this->actor.world.rot.y = this->actor.shape.rot.y;
                if ((this->actor.xzDistToPlayer <= 80.0f) && (sp2C = phi_v1, (func_800BC5EC(globalCtx, (Actor *) this) == 0)) && (((globalCtx->gameplayFrames & 3) == 0) || (phi_v1 < 0x38E0))) {
                    func_80991C04((Actor *) this);
                } else {
                    func_80991438((Actor *) this);
                }
            }
        }
        func_80990E4C((Actor *) this, globalCtx);
        if (this->unk2A2 == 0) {
            Audio_PlayActorSound2((Actor *) this, 0x383EU);
        }
    }
}

void func_80992D6C(Actor *arg0) {
    Actor *temp_a0;
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk461 = (u8) (temp_a3->unk461 & 0xFFFE);
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x144, &D_060053D0, -4.0f);
    temp_a0 = arg0;
    arg0->world.rot.y = arg0->yawTowardsPlayer;
    if ((arg0->bgCheckFlags & 1) != 0) {
        arg0->speedXZ = -6.0f;
    }
    arg0->unk2A0 = 0x19;
    arg0->flags &= -2;
    arg0 = arg0;
    Audio_PlayActorSound2(temp_a0, 0x384BU);
    arg0->unk290 = func_80992E0C;
}

void func_80992E0C(EnWf *this, GlobalContext *globalCtx) {
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 *temp_s3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 phi_s0;

    if ((this->actor.bgCheckFlags & 2) != 0) {
        this->actor.speedXZ = 0.0f;
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        Math_StepToF(&this->actor.speedXZ, 0.0f, 0.5f);
    }
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        if (this->unk295 != 0) {
            Item_DropCollectibleRandom(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, 0x70);
        } else {
            Item_DropCollectibleRandom(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, 0x60);
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (this->unk2A0 == 0x19) {
        func_800F0590(globalCtx, &this->actor.world, 0x24, 0x321F);
    }
    this->unk2A0 += -1;
    temp_s3 = &sp60;
    temp_s0 = (s32) (0x19 - this->unk2A0) >> 1;
    phi_s0 = temp_s0;
    if (temp_s0 >= 0) {
        do {
            sp60 = randPlusMinusPoint5Scaled(60.0f) + this->actor.world.pos.x;
            sp68 = randPlusMinusPoint5Scaled(60.0f) + this->actor.world.pos.z;
            sp64 = randPlusMinusPoint5Scaled(50.0f) + (this->actor.world.pos.y + 20.0f);
            func_800B3030(globalCtx, (Vec3f *) temp_s3, &D_809942F0, &D_809942F0, (s16) 0x64, (s16) 0, 2);
            temp_s0_2 = phi_s0 - 1;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 >= 0);
    }
    func_800B9010((Actor *) this, 0x321FU);
}

void func_80992FD4(EnWf *arg0) {
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x144, &D_0600A3CC, -4.0f);
    arg0->actionFunc = func_80993018;
}

void func_80993018(EnWf *this, GlobalContext *globalCtx) {
    Actor *temp_a0_2;
    Actor *temp_a0_4;
    EnWf *temp_a0_3;
    EnWf *temp_a1;
    SkelAnime *temp_a0;
    s16 temp_v0;
    s16 temp_v1;
    s32 phi_v0;

    temp_a0 = &this->unk144;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_a0_2 = this->actor.child;
    if ((temp_a0_2 != 0) && (temp_a0_3 = this, (temp_a0_2->update != 0))) {
        this = this;
        if (func_80990EAC(temp_a0_3) != 0) {
            func_80990ED4((Actor *) this);
            return;
        }
        temp_a0_4 = this->actor.child;
        temp_a1 = this;
        if (temp_a0_4->xzDistToPlayer < (80.0f + this->unk2A4)) {
            func_80993350(this, temp_a1);
            return;
        }
        this = this;
        temp_v0 = Actor_YawBetweenActors(temp_a0_4, (Actor *) temp_a1);
        temp_v1 = (temp_v0 - this->actor.child->yawTowardsPlayer) - 0x8000;
        phi_v0 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_v0 = -(s32) temp_v1;
        }
        if (phi_v0 >= 0x801) {
            func_80993148(this);
            return;
        }
        Math_ScaledStepToS(&this->actor.shape.rot.y, (s16) (temp_v0 + 0x8000), 0x800);
        return;
    }
    func_80990ED4((Actor *) this);
}

void func_80993148(EnWf *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06005700, -4.0f);
    arg0->actionFunc = func_80993194;
    arg0->actor.speedXZ = 0.0f;
}

void func_80993194(EnWf *this, GlobalContext *globalCtx) {
    s16 sp36;
    s16 sp34;
    s16 sp32;
    Actor *temp_a0;
    Actor *temp_a0_2;
    s16 temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_a1;

    SkelAnime_FrameUpdateMatrix(&this->unk144);
    func_80990E4C((Actor *) this, globalCtx);
    temp_a0 = this->actor.child;
    if ((temp_a0 != 0) && (temp_a0->update != 0)) {
        if (func_80990EAC(this) != 0) {
            func_80990ED4((Actor *) this);
        } else {
            temp_a0_2 = this->actor.child;
            if (temp_a0_2->xzDistToPlayer < (80.0f + this->unk2A4)) {
                func_80993350(this);
            } else {
                sp36 = Actor_YawBetweenActors(temp_a0_2, (Actor *) this);
                temp_v0 = Math_SmoothStepToS(&sp36, (s16) (this->actor.child->yawTowardsPlayer + 0x8000), 0xA, this->unk29C, (s16) 0x10);
                sp34 = temp_v0;
                this->actor.world.pos.x = (Math_SinS(sp36) * this->unk2A4) + this->actor.child->world.pos.x;
                temp_v0_2 = temp_v0;
                this->actor.world.pos.z = (Math_CosS(sp36) * this->unk2A4) + this->actor.child->world.pos.z;
                if ((s32) temp_v0_2 < -0x800) {
                    phi_a1 = (s16) (sp36 - 0x4000);
                } else if ((s32) temp_v0_2 >= 0x801) {
                    phi_a1 = (s16) (sp36 + 0x4000);
                } else {
                    temp_a1 = sp36 + 0x8000;
                    sp32 = temp_a1;
                    func_80992FD4(this, temp_a1);
                    phi_a1 = temp_a1;
                }
                Math_ScaledStepToS(&this->actor.shape.rot.y, phi_a1, 0x800);
            }
        }
    } else {
        func_80990ED4((Actor *) this);
    }
    if (this->unk2A2 == 0) {
        Audio_PlayActorSound2((Actor *) this, 0x383EU);
    }
}

void func_80993350(Actor *arg0) {
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x144, &D_06005700, -4.0f);
    Audio_PlayActorSound2(arg0, 0x383CU);
    arg0->unk290 = func_809933A0;
}

void func_809933A0(EnWf *this, GlobalContext *globalCtx) {
    s16 sp2E;
    s16 sp2C;
    Actor *temp_v0;
    s16 temp_v1;
    s32 phi_a1;
    s32 phi_v0;

    SkelAnime_FrameUpdateMatrix(&this->unk144);
    func_80990E4C((Actor *) this, globalCtx);
    temp_v0 = this->actor.child;
    if ((temp_v0 != 0) && (temp_v0->update != 0)) {
        if (func_80990EAC(this) != 0) {
            func_80990ED4((Actor *) this, this);
        } else {
            sp2E = Actor_YawBetweenActors(this->actor.child, (Actor *) this);
            Math_ScaledStepToS(&sp2E, this->actor.child->yawTowardsPlayer, (s16) ((s32) this->unk29C >> 2));
            temp_v1 = sp2E - this->actor.child->yawTowardsPlayer;
            sp2C = temp_v1;
            this->actor.world.pos.x = (Math_SinS(sp2E) * this->unk2A4) + this->actor.child->world.pos.x;
            this->actor.world.pos.z = (Math_CosS(sp2E) * this->unk2A4) + this->actor.child->world.pos.z;
            if ((s32) temp_v1 > 0) {
                phi_a1 = (sp2E - 0x4000) << 0x10;
            } else {
                phi_a1 = (sp2E + 0x4000) << 0x10;
            }
            sp2C = temp_v1;
            Math_ScaledStepToS(&this->actor.shape.rot.y, (s16) (phi_a1 >> 0x10), 0x800);
            phi_v0 = (s32) temp_v1;
            if ((s32) temp_v1 < 0) {
                phi_v0 = -(s32) temp_v1;
            }
            if (phi_v0 < 0x3000) {
                func_80991438((Actor *) this);
            }
        }
    } else {
        func_80990ED4((Actor *) this);
    }
    if (this->unk2A2 == 0) {
        Audio_PlayActorSound2((Actor *) this, 0x383EU);
    }
}

void func_80993524(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06005700, -4.0f);
    arg0->unk290 = func_8099357C;
    arg0->speedXZ = 6.0f;
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_8099357C(EnWf *this, GlobalContext *globalCtx) {
    s16 sp2E;
    PosRot *sp28;
    Actor *temp_a1_2;
    PosRot *temp_a1;
    s16 temp_v0;
    s16 phi_a1;
    s32 phi_a1_2;

    SkelAnime_FrameUpdateMatrix(&this->unk144);
    func_80990E4C((Actor *) this, globalCtx);
    temp_a1 = &this->actor.home;
    if (this->unk295 != 0) {
        temp_a1_2 = this->actor.child;
        if ((temp_a1_2 != 0) && (temp_a1_2->update != 0)) {
            sp2E = Actor_YawBetweenActors((Actor *) this, temp_a1_2);
            phi_a1 = sp2E;
            if (func_80990EAC(this) != 0) {
                this->actor.child = NULL;
                func_80991738(this, sp2E);
                return;
            }
            if ((this->actor.bgCheckFlags & 8) != 0) {
                temp_v0 = this->actor.wallYaw;
                if ((s32) (s16) (sp2E - temp_v0) > 0) {
                    phi_a1_2 = (temp_v0 - 0x4000) << 0x10;
                } else {
                    phi_a1_2 = (temp_v0 + 0x4000) << 0x10;
                }
                phi_a1 = (s16) (phi_a1_2 >> 0x10);
            }
            Math_SmoothStepToS(&this->actor.shape.rot.y, phi_a1, 0xA, 0x800, (s16) 0x10);
            this->actor.world.rot.y = this->actor.shape.rot.y;
            if (Actor_XZDistanceBetweenActors((Actor *) this, this->actor.child) < (this->unk2A4 + 10.0f)) {
                func_80993148(this);
            }
            goto block_15;
        }
        this->actor.child = NULL;
        func_80991738(this, (s16) temp_a1_2);
        goto block_15;
    }
    sp28 = temp_a1;
    Math_SmoothStepToS(&this->actor.shape.rot.y, Actor_YawToPoint((Actor *) this, (Vec3f *) temp_a1), 0xA, 0x800, (s16) 0x10);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if (Actor_XZDistanceToPoint((Actor *) this, (Vec3f *) temp_a1) < 40.0f) {
        func_809910F0(this);
    }
block_15:
    if (this->unk2A2 == 0) {
        Audio_PlayActorSound2((Actor *) this, 0x383EU);
    }
}

void func_80993738(EnWf *arg0, GlobalContext *arg1) {
    s16 *temp_a0_2;
    s16 temp_a0;
    s16 temp_t4;
    s16 temp_t5;
    s16 temp_v0_2;
    s16 temp_v1;
    s32 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->actionFunc;
    if ((func_80991280 == temp_v0) && (temp_v1 = arg0->unk298, (temp_v1 != 0))) {
        temp_a0 = temp_v1 * 0x1068;
        arg0 = arg0;
        arg0->unk29E = (s16) (s32) (Math_SinS(temp_a0) * 8920.0f);
        return;
    }
    if ((func_80991C80 == temp_v0) || (func_8099357C == temp_v0) || (func_80991040 == temp_v0) || (func_80991174 == temp_v0)) {
        Math_ScaledStepToS(arg0 + 0x29E, 0, 0x3E8);
        return;
    }
    temp_a0_2 = arg0 + 0x29E;
    if (func_809923E4 != temp_v0) {
        temp_t4 = arg0->actor.yawTowardsPlayer;
        temp_t5 = arg0->actor.shape.rot.y;
        arg0 = arg0;
        Math_ScaledStepToS(temp_a0_2, (s16) (temp_t4 - temp_t5), 0x3E8);
        temp_v0_2 = arg0->unk29E;
        if ((s32) temp_v0_2 < -0x3127) {
            arg0->unk29E = -0x3127;
            return;
        }
        phi_v1 = temp_v0_2;
        if ((s32) temp_v0_2 >= 0x3128) {
            phi_v1 = 0x3127;
        }
        arg0->unk29E = phi_v1;
        /* Duplicate return node #14. Try simplifying control flow for better match */
    }
}

void func_8099386C(Actor *arg0, GlobalContext *arg1) {
    void *sp38;
    s32 temp_v0_2;
    u8 temp_v0;
    u8 temp_v0_3;
    void *phi_v1;

    temp_v0 = arg0->unk341;
    if ((temp_v0 & 0x80) != 0) {
        arg0->unk341 = (u8) (temp_v0 & 0xFF7D);
        arg0->unk461 = (u8) (arg0->unk461 & 0xFFFD);
        arg0->unk4AD = (u8) (arg0->unk4AD & 0xFFFD);
        return;
    }
    temp_v0_2 = arg0->unk461 & 2;
    if ((temp_v0_2 != 0) || ((arg0->unk4AD & 2) != 0)) {
        if (((temp_v0_2 == 0) && ((arg0->unk4AD & 2) != 0)) || (Actor_IsActorFacingLink(arg0, 0x4A38) == 0)) {
            arg0->colChkInfo.damage *= 4;
        }
        if ((arg0->unk461 & 2) != 0) {
            func_800BE258(arg0, arg0 + 0x468);
            phi_v1 = arg0 + 0x450;
        } else {
            func_800BE258(arg0, arg0 + 0x4B4);
            phi_v1 = arg0 + 0x49C;
        }
        arg0->unk461 = (u8) (arg0->unk461 & 0xFFFD);
        arg0->unk4AD = (u8) (arg0->unk4AD & 0xFFFD);
        arg0->unk340 = (u8) (arg0->unk340 & 0xFFFE);
        if (((arg0->unk296 != 0xA) || ((*phi_v1->unk3C & 0xDB0B3) == 0)) && (arg0->colChkInfo.damageEffect != 0xF)) {
            sp38 = phi_v1;
            if (Actor_ApplyDamage(arg0) == 0) {
                sp38 = phi_v1;
                Enemy_StartFinishingBlow(arg1, arg0);
            }
            sp38 = phi_v1;
            func_80990854(arg0, arg1);
            temp_v0_3 = arg0->colChkInfo.damageEffect;
            if (temp_v0_3 == 1) {
                arg0->unk2A0 = 0x28;
                func_800BCB70(arg0, 0, 0x78, 0, (s16) 0x28);
                Audio_PlayActorSound2(arg0, 0x389EU);
                func_809923B0(arg0);
                return;
            }
            if (temp_v0_3 == 5) {
                arg0->unk2A0 = 0x28;
                func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
                arg0->unk296 = 0x1EU;
                arg0->unk2B0 = 0.75f;
                arg0->unk2AC = 2.0f;
                Audio_PlayActorSound2(arg0, 0x389EU);
                func_809923B0(arg0);
                return;
            }
            if (temp_v0_3 == 3) {
                func_809907D4(arg0);
                if (arg0->colChkInfo.health == 0) {
                    arg0->unk2A0 = 3;
                    arg0->unk461 = (u8) (arg0->unk461 & 0xFFFE);
                }
                func_809923B0(arg0);
                return;
            }
            if (temp_v0_3 == 2) {
                arg0->unk296 = 0U;
                arg0->unk2B0 = 0.75f;
                arg0->unk2AC = 4.0f;
            } else if (temp_v0_3 == 4) {
                arg0->unk296 = 0x14U;
                arg0->unk2B0 = 0.75f;
                arg0->unk2AC = 4.0f;
                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) phi_v1->unk26, (f32) phi_v1->unk28, (f32) phi_v1->unk2A, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
            }
            func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 8);
            if (arg0->colChkInfo.health == 0) {
                func_80992D6C((EnWf *) arg0);
                return;
            }
            func_8099245C(arg0);
            /* Duplicate return node #31. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #31. Try simplifying control flow for better match */
    }
}

void EnWf_Update(EnWf *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp2C;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a1;
    f32 temp_f0;
    u16 temp_v0;
    u8 temp_v0_2;
    EnWf *this = (EnWf *) thisx;

    temp_v0 = this->unk2A2;
    if (temp_v0 == 0) {
        this->unk2A2 = 0x60;
    } else {
        this->unk2A2 = temp_v0 - 1;
    }
    func_8099386C((Actor *) this, globalCtx);
    if (func_809923E4 != this->actionFunc) {
        func_809908E0(this);
    }
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 32.0f, 30.0f, 60.0f, 0x1DU);
    func_80993738(this, globalCtx);
    if ((this->actor.bgCheckFlags & 3) != 0) {
        func_800BE3D0(this, this->actor.shape.rot.y, &this->actor.shape);
    } else {
        Math_ScaledStepToS((s16 *) &this->actor.shape, 0, 0x258);
        Math_ScaledStepToS(&this->actor.shape.rot.z, 0, 0x258);
    }
    if (func_80990F50 != this->actionFunc) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk330);
    }
    temp_a1 = &this->unk450;
    if ((this->unk450.base.acFlags & 1) != 0) {
        sp2C = &globalCtx->colChkCtx;
        sp28 = temp_a1;
        Collider_UpdateCylinder((Actor *) this, temp_a1);
        CollisionCheck_SetAC(globalCtx, sp2C, (Collider *) &this->unk49C);
        CollisionCheck_SetAC(globalCtx, sp2C, (Collider *) sp28);
    }
    if (func_809928CC == this->actionFunc) {
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk330);
    }
    temp_v0_2 = this->unk330.base.atFlags;
    if ((temp_v0_2 & 1) != 0) {
        if ((temp_v0_2 & 4) == 0) {
            CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk330);
        } else {
            func_80991FD8(this);
        }
    }
    Actor_SetHeight((Actor *) this, 25.0f);
    if (this->unk2AC > 0.0f) {
        if (this->unk296 != 0xA) {
            Math_StepToF(&this->unk2AC, 0.0f, 0.05f);
            temp_f0 = (this->unk2AC + 1.0f) * 0.375f;
            this->unk2B0 = temp_f0;
            if (temp_f0 > 0.75f) {
                this->unk2B0 = 0.75f;
                return;
            }
            this->unk2B0 = this->unk2B0;
            return;
        }
        if (Math_StepToF(&this->unk2B4, 0.75f, 0.01875f) == 0) {
            func_800B9010((Actor *) this, 0x20B2U);
        }
        /* Duplicate return node #25. Try simplifying control flow for better match */
    }
}

s32 func_80993E50(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if ((arg1 == 0x11) || (arg1 == 0x12)) {
        arg4->y -= arg5->unk29E;
    }
    return 0;
}

void func_80993E94(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    f32 sp20;
    s8 *sp1C;
    s8 *temp_v0;
    s8 temp_v1;

    Collider_UpdateSpheres(arg1, arg4 + 0x330);
    temp_v0 = arg1 + &D_809942FC;
    temp_v1 = *temp_v0;
    if (temp_v1 != -1) {
        sp1C = temp_v0;
        SysMatrix_GetStateTranslation(arg4 + (temp_v1 * 0xC) + 0x2B8);
    }
    if ((arg1 + &D_809942FC) == &D_80994302) {
        SysMatrix_GetStateTranslationAndScaledX(1200.0f, (Vec3f *) &sp20);
        arg4->unk4E2 = (s16) (s32) sp20;
        arg4->unk4E4 = (s16) (s32) sp24;
        arg4->unk4E6 = (s16) (s32) sp28;
    }
}

void EnWf_Draw(EnWf *this, GlobalContext *globalCtx) {
    GraphicsContext *sp30;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a0;
    EnWf *this = (EnWf *) thisx;

    if (func_80990F50 != this->actionFunc) {
        temp_a0 = globalCtx->state.gfxCtx;
        sp30 = temp_a0;
        func_8012C28C(temp_a0);
        if (this->actor.params == 0) {
            temp_v1 = sp30->polyOpa.p;
            sp30->polyOpa.p = temp_v1 + 8;
            temp_v1->words.w0 = 0xDB060020;
            temp_v1->words.w1 = (u32) D_809942B0[this->unk294];
        } else {
            temp_v1_2 = sp30->polyOpa.p;
            sp30->polyOpa.p = temp_v1_2 + 8;
            temp_v1_2->words.w0 = 0xDB060020;
            temp_v1_2->words.w1 = (u32) D_809942C0[this->unk294];
        }
        SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80993E50, func_80993E94, (Actor *) this);
        func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk2B8, 0xA, this->unk2B0, this->unk2B4, this->unk2AC, (u8) (s32) this->unk296);
    }
}

s32 func_8099408C(GlobalContext *arg0, Actor *arg1) {
    Actor *temp_v0;
    s16 temp_v1;
    s32 phi_v0;

    temp_v0 = func_800BC270(arg0, arg1, 80.0f, 0x138B0);
    if (temp_v0 != 0) {
        temp_v1 = (Actor_YawBetweenActors(arg1, temp_v0) - arg1->shape.rot.y) - arg1->unk29E;
        phi_v0 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_v0 = -(s32) temp_v1;
        }
        if (phi_v0 < 0x3000) {
            if (Rand_ZeroOne() < 0.5f) {
                func_8099223C(arg1);
                return 1;
            }
            func_8099282C(arg1);
            return 1;
        }
        goto block_7;
    }
block_7:
    return 0;
}
