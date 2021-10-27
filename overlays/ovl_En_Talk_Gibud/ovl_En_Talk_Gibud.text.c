CRASHED

typedef struct Actor {
    /* 0x000 */ s16 id;
    /* 0x002 */ u8 category;
    /* 0x003 */ s8 room;
    /* 0x004 */ u32 flags;
    /* 0x008 */ PosRot home;
    /* 0x01C */ s16 params;
    /* 0x01E */ s8 objBankIndex;
    /* 0x01F */ s8 targetMode;
    /* 0x020 */ s16 unk20;
    /* 0x022 */ s16 unk_22;                         /* inferred */
    /* 0x024 */ PosRot world;
    /* 0x038 */ s8 cutscene;
    /* 0x039 */ s8 unk39;
    /* 0x03A */ char pad_3A[0x2];                   /* maybe part of unk39[3]? */
    /* 0x03C */ PosRot focus;
    /* 0x050 */ u16 sfx;
    /* 0x052 */ char pad_52[0x2];
    /* 0x054 */ f32 targetArrowOffset;
    /* 0x058 */ Vec3f scale;
    /* 0x064 */ Vec3f velocity;
    /* 0x070 */ f32 speedXZ;
    /* 0x074 */ f32 gravity;
    /* 0x078 */ f32 minVelocityY;
    /* 0x07C */ CollisionPoly *wallPoly;
    /* 0x080 */ CollisionPoly *floorPoly;
    /* 0x084 */ u8 wallBgId;
    /* 0x085 */ u8 floorBgId;
    /* 0x086 */ s16 wallYaw;
    /* 0x088 */ f32 floorHeight;
    /* 0x08C */ f32 yDistToWater;
    /* 0x090 */ u16 bgCheckFlags;
    /* 0x092 */ s16 yawTowardsPlayer;
    /* 0x094 */ f32 xyzDistToPlayerSq;
    /* 0x098 */ f32 xzDistToPlayer;
    /* 0x09C */ f32 yDistToPlayer;
    /* 0x0A0 */ CollisionCheckInfo colChkInfo;
    /* 0x0BC */ ActorShape shape;
    /* 0x0EC */ Vec3f projectedPos;
    /* 0x0F8 */ f32 projectedW;
    /* 0x0FC */ f32 uncullZoneForward;
    /* 0x100 */ f32 uncullZoneScale;
    /* 0x104 */ f32 uncullZoneDownward;
    /* 0x108 */ Vec3f prevPos;
    /* 0x114 */ u8 isTargeted;
    /* 0x115 */ u8 targetPriority;
    /* 0x116 */ u16 textId;
    /* 0x118 */ u16 freezeTimer;
    /* 0x11A */ u16 colorFilterParams;
    /* 0x11C */ u8 colorFilterTimer;
    /* 0x11D */ u8 isDrawn;
    /* 0x11E */ u8 dropFlag;
    /* 0x11F */ u8 hintId;
    /* 0x120 */ Actor *parent;
    /* 0x124 */ Actor *child;
    /* 0x128 */ Actor *prev;
    /* 0x12C */ Actor *next;
    /* 0x130 */ void (*init)(Actor *, GlobalContext *);
    /* 0x134 */ void (*destroy)(Actor *, GlobalContext *);
    /* 0x138 */ void (*update)(Actor *, GlobalContext *);
    /* 0x13C */ void (*draw)(Actor *, GlobalContext *);
    /* 0x140 */ ActorOverlay *overlayEntry;
} Actor;                                            /* size = 0x144 */

typedef struct EnTalkGibud {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ SkelAnime unk_190;                  /* inferred */
    /* 0x1D4 */ void (*actionFunc)(EnTalkGibud *, GlobalContext *);
    /* 0x1D8 */ f32 unk_1D8;                        /* inferred */
    /* 0x1DC */ f32 unk_1DC;                        /* inferred */
    /* 0x1E0 */ f32 unk_1E0;                        /* inferred */
    /* 0x1E4 */ f32 unk_1E4;                        /* inferred */
    /* 0x1E8 */ f32 unk_1E8;                        /* inferred */
    /* 0x1EC */ f32 unk_1EC;                        /* inferred */
    /* 0x1F0 */ f32 unk_1F0;                        /* inferred */
    /* 0x1F4 */ f32 unk_1F4;                        /* inferred */
    /* 0x1F8 */ f32 unk_1F8;                        /* inferred */
    /* 0x1FC */ char pad_1FC[0x90];                 /* maybe part of unk_1F8[37]? */
    /* 0x28C */ s32 unk_28C;                        /* inferred */
    /* 0x290 */ s32 unk_290;                        /* inferred */
    /* 0x294 */ s32 unk_294;                        /* inferred */
    /* 0x298 */ s32 unk_298;                        /* inferred */
    /* 0x29C */ f32 unk_29C;                        /* inferred */
    /* 0x2A0 */ f32 unk_2A0;                        /* inferred */
    /* 0x2A4 */ Vec3s unk_2A4;                      /* inferred */
    /* 0x2AA */ char pad_2AA[0x96];                 /* maybe part of unk_2A4[26]? */
    /* 0x340 */ Vec3s unk_340;                      /* inferred */
    /* 0x346 */ char pad_346[0xA4];                 /* maybe part of unk_340[28]? */
    /* 0x3EA */ s16 unk_3EA;                        /* inferred */
    /* 0x3EC */ s16 unk_3EC;                        /* inferred */
    /* 0x3EE */ s16 unk_3EE;                        /* inferred */
    /* 0x3F0 */ s16 unk_3F0;                        /* inferred */
    /* 0x3F2 */ s16 unk_3F2;                        /* inferred */
    /* 0x3F4 */ s16 unk_3F4;                        /* inferred */
    /* 0x3F6 */ u8 unk_3F6;                         /* inferred */
    /* 0x3F7 */ char pad_3F7[0x1];
} EnTalkGibud;                                      /* size = 0x3F8 */

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ Vec3s rot;
    /* 0x12 */ s16 unk_12;                          /* inferred */
} PosRot;                                           /* size = 0x14 */

struct _mips2c_stack_EnTalkGibud_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTalkGibud_Draw {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnTalkGibud_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnTalkGibud_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AFEB38 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFEB7C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AFEC08 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFEC4C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AFED08 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFED7C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s16 *sp2C;                           /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ void *sp34;                          /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AFEFD4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFF030 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s16 *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0x6];                    /* maybe part of sp28[2]? */
    /* 0x32 */ u16 sp32;                            /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80AFF22C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFF288 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AFF330 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFF378 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AFF45C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFF4AC {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AFF618 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AFF6A0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFF700 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFF76C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AFF880 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFF8E4 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AFF9CC {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AFFA68 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFFAB0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AFFC10 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFFC9C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFFD3C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AFFE3C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFFE94 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AFFFA4 {};              /* size 0x0 */

struct _mips2c_stack_func_80AFFFBC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Player *sp24;                        /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B000FC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B00158 {
    /* 0x00 */ char pad_0[0x78];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ ? sp84;                              /* inferred */
    /* 0x84 */ char pad_84[0xC];
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad_94[0x4];
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ char pad_9C[0x4];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_80B00384 {
    /* 0x00 */ char pad_0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B0040C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B00484 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B004D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B005EC {};              /* size 0x0 */

struct _mips2c_stack_func_80B00760 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80B008BC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B008FC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B0094C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B00C94 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ void *sp34;                          /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B00D9C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B00F08 {};              /* size 0x0 */

struct _mips2c_stack_func_80B00F64 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_80AFEB38(EnTalkGibud *arg0);              /* static */
void func_80AFEB7C(void *arg0, GlobalContext *arg1); /* static */
void func_80AFEC08(void *arg0);                     /* static */
void func_80AFEC4C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AFED08(Actor *arg0);                    /* static */
void func_80AFED7C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AFEFD4(Actor *arg0);                    /* static */
void func_80AFF030(Actor *arg0, void *arg1);        /* static */
void func_80AFF22C(Actor *arg0, void *);            /* static */
void func_80AFF288(void *arg0, ? arg1);             /* static */
void func_80AFF330(void *arg0);                     /* static */
void func_80AFF378(Actor *arg0, ? arg1);            /* static */
void func_80AFF45C(Actor *arg0);                    /* static */
void func_80AFF4AC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AFF618(Actor *arg0);                    /* static */
void func_80AFF6A0(void *arg0, ? arg1);             /* static */
void func_80AFF700(Actor *arg0);                    /* static */
void func_80AFF76C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AFF880(Actor *arg0);                    /* static */
void func_80AFF8E4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AFF9CC(Actor *arg0, s16, s16);          /* static */
void func_80AFFA68(EnTalkGibud *arg0, ? arg1);      /* static */
void func_80AFFAB0(Actor *arg0, GlobalContext *arg1, Actor *, GlobalContext *); /* static */
void func_80AFFC10(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80AFFC9C(Actor *arg0, GlobalContext *arg1, s32 arg2, Actor *); /* static */
void func_80AFFD3C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AFFE3C(Actor *arg0);                    /* static */
void func_80AFFE94(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AFFFA4(Actor *arg0);                    /* static */
void func_80AFFFBC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B000FC(Actor *arg0);                    /* static */
void func_80B00158(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B00384(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B0040C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B00484(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B004D0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B005EC(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B00760(Actor *arg0, void *arg1, void *); /* static */
void func_80B008BC(EnTalkGibud *arg0, GlobalContext *arg1); /* static */
void func_80B008FC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B0094C(Actor *arg0, GlobalContext *arg1); /* static */
? func_80B00B8C(EnTalkGibud *, GlobalContext *);    /* static */
void func_80B00C94(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B00D9C(EnTalkGibud *arg0, GlobalContext *arg1); /* static */
s32 func_80B00F08(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5, Gfx **gfx); /* static */
void func_80B00F64(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **gfx); /* static */
extern FlexSkeletonHeader D_060053E8;
extern AnimationHeaderCommon D_06009298;
extern AnimationHeader D_0600ABE0;
extern FlexSkeletonHeader D_06010B88;
static ActorAnimationEntry D_80B01200[14] = {
    {(AnimationHeader *)0x6006678, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x6006B08, 0.5f, 0.0f, 0.0f, 3, 0.0f},
    {(AnimationHeader *)0x6006EEC, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x60073A4, 0.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x6007BBC, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x60081A8, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x6009298, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x6009900, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x600A450, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x600ABE0, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x60113EC, 0.4f, 0.0f, 0.0f, 1, -8.0f},
    {(AnimationHeader *)0x601216C, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x60118D8, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x6011DB8, 1.0f, 0.0f, 0.0f, 0, -8.0f},
};
static ColliderCylinderInit D_80B01350 = {
    {0, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7EFFFFF, 0, 0}, 0, 5, 1},
    {0x14, 0x46, 0, {0, 0, 0}},
};
static DamageTable D_80B0137C = {
    {
        0,
        0xF2,
        0,
        0xF1,
        0xD0,
        0xD0,
        0xF2,
        0xD0,
        0xF1,
        0xF1,
        0xF1,
        0x21,
        0xD0,
        0x42,
        0xF1,
        0x10,
        0xD0,
        0xF2,
        0,
        0xC0,
        0,
        0xE0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static CollisionCheckInfoInit2 D_80B0139C = {8, 0, 0, 0, 0xFE};
static ? D_80B013A8;                                /* unable to generate initializer */
static InitChainEntry D_80B01448[3];                /* unable to generate initializer */
static ? D_80B01454;                                /* unable to generate initializer */
static ? D_80B01460;                                /* unable to generate initializer */

void EnTalkGibud_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1;
    PosRot *temp_t0;
    Vec3s *temp_a0;
    f32 *temp_a1_2;
    f32 *temp_a3;
    s16 *temp_a2;
    s32 temp_a1_3;
    s32 temp_v0;
    s32 temp_v1;
    Vec3s *phi_a0;
    f32 *phi_a1;
    s16 *phi_a2;
    f32 *phi_a3;
    s32 phi_v1;
    s32 phi_v0;
    s32 phi_a1_2;
    EnTalkGibud *this = (EnTalkGibud *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80B01448);
    this->actor.targetMode = 0;
    this->actor.hintId = 0x2D;
    this->actor.textId = 0;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 28.0f);
    SkelAnime_InitSV(globalCtx, &this->unk_190, &D_060053E8, &D_0600ABE0, &this->unk_2A4, &this->unk_340, 0x1A);
    temp_a1 = &this->unk_144;
    sp30 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80B01350);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80B0137C, &D_80B0139C);
    this->unk_3EA = 0;
    this->unk_3EC = 0;
    this->unk_3EE = 0;
    this->unk_294 = 0;
    this->unk_3F0 = 0;
    this->unk_3F6 = 0;
    this->unk_3F4 = 0;
    this->unk_3F2 = 0;
    this->unk_290 = this->actor.params & 0xF;
    this->unk_298 = (s32) (this->actor.params & 0xFF0) >> 4;
    this->unk_29C = 0.0f;
    this->unk_2A0 = 0.0f;
    temp_t0 = &this->actor.world;
    this->unk_1D8 = D_801D15B0.x;
    this->unk_1DC = D_801D15B0.y;
    this->unk_1E0 = D_801D15B0.z;
    this->unk_1E4 = D_801D15B0.x;
    this->unk_1E8 = D_801D15B0.y;
    this->unk_1EC = D_801D15B0.z;
    this->unk_1F0 = D_801D15B0.x;
    this->unk_1F4 = D_801D15B0.y;
    this->unk_1F8 = D_801D15B0.z;
    phi_a0 = &temp_t0[23].rot;
    phi_a1 = &temp_t0[24].pos.y;
    phi_a2 = &temp_t0[24].rot.z;
    phi_a3 = &temp_t0[25].pos.z;
    phi_v1 = 3;
    do {
        temp_v1 = phi_v1 + 4;
        temp_a0 = phi_a0 + 0x30;
        temp_a0->unk_-30 = (f32) D_801D15B0.x;
        temp_a1_2 = phi_a1 + 0x30;
        temp_a2 = phi_a2 + 0x30;
        temp_a0->unk_-2C = (f32) D_801D15B0.y;
        temp_a3 = phi_a3 + 0x30;
        temp_a0->unk_-28 = (f32) D_801D15B0.z;
        temp_a1_2->unk_-30 = (f32) D_801D15B0.x;
        temp_a1_2->unk_-2C = (f32) D_801D15B0.y;
        temp_a1_2->unk_-28 = (f32) D_801D15B0.z;
        temp_a2->unk_-30 = (f32) D_801D15B0.x;
        temp_a2->unk_-2C = (f32) D_801D15B0.y;
        temp_a2->unk_-28 = (f32) D_801D15B0.z;
        temp_a3->unk_-30 = (f32) D_801D15B0.x;
        temp_a3->unk_-2C = (f32) D_801D15B0.y;
        temp_a3->unk_-28 = (f32) D_801D15B0.z;
        phi_a0 = temp_a0;
        phi_a1 = temp_a1_2;
        phi_a2 = temp_a2;
        phi_a3 = temp_a3;
        phi_v1 = temp_v1;
    } while (temp_v1 != 0xF);
    temp_v0 = this->unk_290;
    phi_v0 = temp_v0;
    if (temp_v0 < 0) {
        this->unk_290 = 0;
        phi_v0 = 0;
    }
    if (phi_v0 >= 0xA) {
        this->unk_290 = 9;
    }
    temp_a1_3 = this->unk_298;
    phi_a1_2 = temp_a1_3;
    if (temp_a1_3 == 0xFF) {
        this->unk_298 = -1;
        phi_a1_2 = -1;
    }
    if ((phi_a1_2 != -1) && (Flags_GetSwitch(globalCtx, phi_a1_2) != 0)) {
        Actor_MarkForDeath((Actor *) this);
    }
    func_80AFEB38(this);
}

void EnTalkGibud_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTalkGibud *this = (EnTalkGibud *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
}

void func_80AFEB38(EnTalkGibud *arg0) {
    func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B01200, 9);
    arg0->actionFunc = func_80AFEB7C;
}

void func_80AFEB7C(EnTalkGibud *arg0, GlobalContext *arg1) {
    if ((arg0->actor.xzDistToPlayer <= 150.0f) && (func_800B715C(arg1) != 0)) {
        func_80AFEC08(arg0);
    }
    Math_SmoothStepToS(arg0 + 0x3E0, 0, 1, 0x64, (s16) 0);
    Math_SmoothStepToS(arg0 + 0x3E6, 0, 1, 0x64, (s16) 0);
}

void func_80AFEC08(EnTalkGibud *arg0) {
    func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B01200, 9);
    arg0->actionFunc = func_80AFEC4C;
}

void func_80AFEC4C(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    s32 phi_v0;

    temp_v1 = arg0->yawTowardsPlayer - (s16) (arg0->shape.rot.y + arg0[3].home.rot.x + arg0[3].home.unk_12);
    if ((s32) temp_v1 < 0) {
        phi_v0 = -(s32) temp_v1;
    } else {
        phi_v0 = (s32) temp_v1;
    }
    if (phi_v0 < 0x2008) {
        arg1->actorCtx.actorList[2].first->unk_118 = 0x3C;
        func_8013ECE0(arg0->xzDistToPlayer, 0xFFU, 0x14U, 0x96U);
        func_80123E90(arg1, arg0);
        Audio_PlayActorSound2(arg0, 0x38E5U);
        func_80AFED08(arg0);
    }
    func_80B005EC(arg0, arg1);
}

void func_80AFED08(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x190;
    arg0 = arg0;
    func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80B01200, 0xA);
    arg0->speedXZ = 0.4f;
    if (func_80AFEC4C == arg0->unk_1D4) {
        arg0->unk_3EA = 0x50;
    } else {
        arg0->unk_3EA = 0x14;
    }
    arg0->unk_1D4 = func_80AFED7C;
}

void func_80AFED7C(Actor *arg0, GlobalContext *arg1) {
    void *sp34;
    s16 *sp2C;
    s16 *temp_a0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    u8 temp_v0;

    sp34 = arg1->actorCtx.actorList[2].first;
    Math_ScaledStepToS(arg0 + 0xBE, arg0->yawTowardsPlayer, 0xFA);
    arg0->unk_30 = (unaligned s32) arg0->unk_BC;
    arg0->world.rot.z = arg0->shape.rot.z;
    Math_SmoothStepToS(arg0 + 0x3E0, 0, 1, 0x64, (s16) 0);
    Math_SmoothStepToS(arg0 + 0x3E6, 0, 1, 0x64, (s16) 0);
    if ((func_80B0040C(arg0, arg1) != 0) && (Actor_IsActorFacingLink(arg0, 0x38E3) != 0)) {
        if ((arg0[3].unk_22 == 0) && (arg0->xzDistToPlayer <= 45.0f)) {
            sp34->freezeTimer = 0;
            temp_v0 = gSaveContext.playerForm;
            if ((temp_v0 == 1) || (temp_v0 == 3)) {
                func_80AFF22C(arg0, sp34);
            } else if (arg1->grabPlayer(arg1, sp34) != 0) {
                func_80AFEFD4(arg0);
            }
        } else {
            temp_v0_2 = arg0->unk_3EA;
            if (temp_v0_2 == 0) {
                sp34->freezeTimer = 0x28;
                arg0->unk_3EA = 0x3C;
                func_8013ECE0(arg0->xzDistToPlayer, 0xFFU, 0x14U, 0x96U);
                func_80123E90(arg1, arg0);
                Audio_PlayActorSound2(arg0, 0x38E5U);
            } else {
                arg0->unk_3EA = (s16) (temp_v0_2 - 1);
            }
        }
    } else if ((arg0[3].unk_22 == 0) && (arg0->xzDistToPlayer <= 45.0f)) {
        func_80AFF45C(arg0);
    } else if (func_80B00484(arg0, arg1) != 0) {
        func_80AFF45C(arg0);
    }
    temp_v0_3 = arg0[3].unk_22;
    temp_a0 = &arg0[1].focus.rot.z;
    if ((s32) temp_v0_3 > 0) {
        arg0[3].unk_22 = temp_v0_3 - 1;
    }
    sp2C = temp_a0;
    if ((func_801378B8((SkelAnime *) temp_a0, 10.0f) != 0) || (func_801378B8((SkelAnime *) temp_a0, 22.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x382EU);
        return;
    }
    if ((arg1->gameplayFrames & 0x5F) == 0) {
        Audio_PlayActorSound2(arg0, 0x38E4U);
    }
}

void func_80AFEFD4(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x190;
    arg0 = arg0;
    func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80B01200, 2);
    arg0->unk_3EA = 0;
    arg0->flags &= -2;
    arg0[3].unk20 = 0;
    arg0->unk_1D4 = func_80AFF030;
}

void func_80AFF030(Actor *arg0, void *arg1) {
    u16 sp32;
    s16 *sp28;
    Actor *temp_s1;
    s16 *temp_a3;
    s16 *temp_a3_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_s1_2;
    s32 temp_v0_3;
    s32 temp_v1;

    temp_v0 = arg0[3].unk20;
    temp_s1 = arg1->unk_1CCC;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                return;
            }
            if (func_801378B8(arg0 + 0x190, arg0[1].scale.y) != 0) {
                arg0[3].unk_22 = 0x14;
                arg0->shape.yOffset = 0.0f;
                func_80AFED08(arg0);
                return;
            }
            Math_SmoothStepToF(arg0 + 0xC4, 0.0f, 1.0f, 400.0f, 0.0f);
            /* Duplicate return node #21. Try simplifying control flow for better match */
            return;
        }
        temp_v0_2 = arg0->unk_3EA;
        if (temp_v0_2 == 0x14) {
            sp32 = temp_s1->unk_A68->unk_92 + 0x6805;
            arg1->unk_18784(arg1, -8, arg1);
            func_800B8E58(temp_s1, sp32);
            func_8013ECE0(arg0->xzDistToPlayer, 0xF0U, 1U, 0xCU);
            arg0->unk_3EA = 0;
        } else {
            arg0->unk_3EA = (s16) (temp_v0_2 + 1);
        }
        temp_a3 = &arg0[1].focus.rot.z;
        sp28 = temp_a3;
        if (func_801378B8((SkelAnime *) temp_a3, 0.0f) != 0) {
            sp28 = temp_a3;
            Audio_PlayActorSound2(arg0, 0x38E8U);
        }
        temp_v1 = temp_s1->unk_A70;
        temp_v0_3 = temp_v1 & 0x80;
        if ((temp_v0_3 == 0) || (temp_s1->unk_B62 != 0)) {
            if ((temp_s1->unk_B62 != 0) && (temp_v0_3 != 0)) {
                temp_s1->unk_A70 = (s32) (temp_v1 & ~0x80);
                temp_s1->unk_AE8 = 0x64;
            }
            func_800BDC5C((SkelAnime *) &arg0[1].focus.rot.z, (ActorAnimationEntry []) D_80B01200, 1);
            arg0[3].unk20 = 2;
            arg0->flags |= 1;
            arg0->unk_3EA = 0;
            return;
        }
        /* Duplicate return node #21. Try simplifying control flow for better match */
        return;
    }
    temp_a3_2 = &arg0[1].focus.rot.z;
    temp_s1_2 = func_80B00760(arg0, arg1, arg1);
    sp28 = temp_a3_2;
    if ((func_801378B8((SkelAnime *) temp_a3_2, arg0[1].scale.y) != 0) && (temp_s1_2 == 1)) {
        arg0[3].unk20 = 1;
        func_800BDC5C((SkelAnime *) temp_a3_2, (ActorAnimationEntry []) D_80B01200, 0);
    }
}

void func_80AFF22C(Actor *arg0) {
    func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B01200, 7);
    Audio_PlayActorSound2(arg0, 0x38E6U);
    arg0->unk_1D4 = func_80AFF288;
    arg0->speedXZ = -2.0f;
}

void func_80AFF288(void *arg0, ? arg1) {
    f32 temp_f0;

    temp_f0 = arg0->unk_70;
    if (temp_f0 < 0.0f) {
        arg0->unk_70 = (f32) (temp_f0 + 0.15f);
    }
    arg0->unk_32 = (s16) arg0->unk_92;
    Math_SmoothStepToS(arg0 + 0x3E0, 0, 1, 0x12C, (s16) 0);
    Math_SmoothStepToS(arg0 + 0x3E6, 0, 1, 0x12C, (s16) 0);
    if (func_801378B8(arg0 + 0x190, arg0->unk_1A0) != 0) {
        arg0->unk_32 = (s16) arg0->unk_BE;
        func_80AFF330(arg0);
    }
}

void func_80AFF330(void *arg0) {
    void *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk_3EA = 0;
    arg0 = temp_a3;
    func_800BDC5C(temp_a3 + 0x190, (ActorAnimationEntry []) D_80B01200, 0xA);
    arg0->unk_1D4 = func_80AFF378;
}

void func_80AFF378(Actor *arg0, ? arg1) {
    f32 temp_f0;
    f32 temp_f6;
    s16 temp_v0;
    s16 temp_v0_2;

    Math_SmoothStepToS(arg0 + 0x32, (s16) (arg0->yawTowardsPlayer + 0x8000), 5, 0xDAC, (s16) 0xC8);
    temp_v0 = arg0->unk_3EA;
    arg0->shape.rot.y = arg0->world.rot.y;
    if ((s32) temp_v0 >= 0x3D) {
        func_80AFF45C(arg0);
        arg0->unk_3EA = 0;
        return;
    }
    temp_f0 = Math_SinS((s16) (temp_v0 * 0xFA0));
    temp_v0_2 = arg0->unk_3EA;
    temp_f6 = (f32) (0x3C - temp_v0_2);
    arg0->unk_3EA = (s16) (temp_v0_2 + 1);
    arg0[3].home.rot.x = (s16) (s32) (temp_f0 * (9583.0f * (temp_f6 / 60.0f)));
}

void func_80AFF45C(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x190;
    arg0 = arg0;
    func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80B01200, 0xA);
    arg0->unk_1D4 = func_80AFF4AC;
    arg0->speedXZ = 0.4f;
}

void func_80AFF4AC(Actor *arg0, GlobalContext *arg1) {
    Vec3f *sp28;
    Vec3f *temp_a1;
    f32 temp_f0;
    u8 temp_v0;

    Math_SmoothStepToS(arg0 + 0x3E0, 0, 1, 0x64, (s16) 0);
    Math_SmoothStepToS(arg0 + 0x3E6, 0, 1, 0x64, (s16) 0);
    temp_a1 = arg0 + 8;
    sp28 = temp_a1;
    if (Actor_XZDistanceToPoint(arg0, temp_a1) < 5.0f) {
        temp_f0 = arg0->speedXZ;
        if (temp_f0 > 0.2f) {
            arg0->speedXZ = temp_f0 - 0.2f;
        } else {
            arg0->speedXZ = 0.0f;
        }
        Math_SmoothStepToS(&arg0->shape.rot.y, arg0->home.rot.y, 1, 0xC8, (s16) 0xA);
        arg0->world.rot.y = arg0->shape.rot.y;
        if (arg0->home.rot.y == arg0->world.rot.y) {
            func_80AFEB38((EnTalkGibud *) arg0);
        }
    } else {
        Math_ScaledStepToS(&arg0->shape.rot.y, Actor_YawToPoint(arg0, temp_a1), 0x1C2);
        arg0->unk_30 = (unaligned s32) arg0->unk_BC;
        arg0->world.rot.z = (s16) (u16) arg0->shape.rot.z;
    }
    if (func_80B0040C(arg0, arg1) != 0) {
        temp_v0 = gSaveContext.playerForm;
        if ((temp_v0 != 1) && (temp_v0 != 3) && (Actor_IsActorFacingLink(arg0, 0x38E3) != 0)) {
            func_80AFED08(arg0);
        }
    }
}

void func_80AFF618(Actor *arg0) {
    arg0->unk_3EA = 0xA;
    arg0->speedXZ = 0.0f;
    arg0->world.rot.y = arg0->shape.rot.y;
    if (arg0->unk_3F0 != 0) {
        func_800BCB70(arg0, 0, 0xC8, 0, (s16) 0x28);
    } else {
        func_800BCB70(arg0, 0, 0xC8, 0, (s16) 0x28);
    }
    arg0->unk_1D4 = func_80AFF6A0;
}

void func_80AFF6A0(void *arg0, ? arg1) {
    s16 temp_v0;

    if (arg0->unk_11C == 0) {
        if (arg0->unk_B7 == 0) {
            func_80AFF880();
        } else {
            func_80AFF700();
        }
    }
    temp_v0 = arg0->unk_3EA;
    if (temp_v0 != 0) {
        arg0->unk_3EA = (s16) (temp_v0 - 1);
    }
}

void func_80AFF700(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x190;
    arg0 = arg0;
    func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80B01200, 7);
    Audio_PlayActorSound2(arg0, 0x38E6U);
    arg0->unk_3EA = 0;
    arg0[3].unk_22 = 0;
    arg0->unk_1D4 = func_80AFF76C;
    arg0->world.rot.y = arg0->yawTowardsPlayer;
    arg0->speedXZ = -2.0f;
}

void func_80AFF76C(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp34;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s32 temp_t3;

    temp_f0 = arg0->speedXZ;
    temp_a0 = arg0 + 0x190;
    if (temp_f0 < 0.0f) {
        arg0->speedXZ = temp_f0 + 0.15f;
    }
    sp34 = temp_a0;
    if (func_801378B8(temp_a0, arg0[1].scale.y) != 0) {
        arg0->unk_3F7 = -1;
        arg0->world.rot.y = arg0->shape.rot.y;
        if (((s32) arg0->unk_3F0 > 0) && (arg0->unk_3F6 == 0) && (arg0->unk_3F2 == 0)) {
            arg0->hintId = 0x2A;
            temp_t3 = arg0->flags & ~9;
            arg0->flags = temp_t3;
            arg0->flags = temp_t3 | 5;
            SkelAnime_InitSV(arg1, sp34, &D_06010B88, NULL, arg0 + 0x2A4, arg0 + 0x340, 0x1A);
            arg0->unk_3F2 = 1;
        }
        if (func_80B00484(arg0, arg1) != 0) {
            func_80AFF45C(arg0);
            return;
        }
        func_80AFED08(arg0);
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

void func_80AFF880(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x190;
    arg0 = arg0;
    func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80B01200, 6);
    arg0->flags &= -2;
    Audio_PlayActorSound2(arg0, 0x38E7U);
    arg0->unk_3EA = 0;
    arg0->unk_1D4 = func_80AFF8E4;
}

void func_80AFF8E4(Actor *arg0, GlobalContext *arg1) {
    if ((s32) arg0->unk_3EA >= 0x12D) {
        func_80AFF9CC(arg0, 0, 1);
    } else {
        Math_SmoothStepToS(arg0 + 0x3E0, 0, 1, 0xFA, (s16) 0);
        Math_SmoothStepToS(arg0 + 0x3E6, 0, 1, 0xFA, (s16) 0);
        arg0->unk_3EA = (s16) (arg0->unk_3EA + 1);
    }
    if ((arg0->unk_3EA == 0x14) && ((s32) arg0->unk_3F0 > 0) && (arg0->unk_3F6 == 0) && (arg0->unk_3F2 == 0)) {
        SkelAnime_InitSV(arg1, arg0 + 0x190, &D_06010B88, NULL, arg0 + 0x2A4, arg0 + 0x340, 0x1A);
        arg0->unk_3F2 = 1;
    }
}

void func_80AFF9CC(Actor *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x190, (AnimationHeader *) &D_06009298, -1.0f, (f32) SkelAnime_GetFrameCount(&D_06009298), 0.0f, (u8) 2, -8.0f);
    arg0->flags |= 1;
    Audio_PlayActorSound2(arg0, 0x3ADBU);
    arg0->unk_3EA = 0;
    arg0->unk_1D4 = func_80AFFA68;
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_80AFFA68(EnTalkGibud *arg0, ? arg1) {
    EnTalkGibud *temp_a2;
    f32 temp_a1;

    temp_a2 = arg0;
    temp_a1 = temp_a2->unk_190.animFrameCount;
    arg0 = temp_a2;
    if (func_801378B8(temp_a2 + 0x190, temp_a1) != 0) {
        arg0->actor.colChkInfo.health = 8;
        func_80AFEB38(arg0);
    }
}

void func_80AFFAB0(Actor *arg0, GlobalContext *arg1) {
    u32 temp_t6;

    temp_t6 = arg0[2].home.pos.x;
    switch (temp_t6) {
    case 0:
        func_801518B0(arg1, 0x138CU, arg0);
        arg0->unk_3DC = 0x138C;
        return;
    case 1:
        func_801518B0(arg1, 0x138DU, arg0);
        arg0->unk_3DC = 0x138D;
        return;
    case 2:
        func_801518B0(arg1, 0x138EU, arg0);
        arg0->unk_3DC = 0x138E;
        return;
    case 3:
        func_801518B0(arg1, 0x138FU, arg0);
        arg0->unk_3DC = 0x138F;
        return;
    case 4:
        func_801518B0(arg1, 0x1390U, arg0);
        arg0->unk_3DC = 0x1390;
        return;
    case 5:
        func_801518B0(arg1, 0x1391U, arg0);
        arg0->unk_3DC = 0x1391;
        return;
    case 6:
        func_801518B0(arg1, 0x1392U, arg0);
        arg0->unk_3DC = 0x1392;
        return;
    case 7:
        func_801518B0(arg1, 0x1393U, arg0);
        arg0->unk_3DC = 0x1393;
        return;
    case 8:
        func_801518B0(arg1, 0x1394U, arg0);
        arg0->unk_3DC = 0x1394;
        return;
    case 9:
        func_801518B0(arg1, 0x1395U, arg0);
        arg0->unk_3DC = 0x1395;
        /* fallthrough */
    default:
        return;
    }
}

void func_80AFFC10(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;
    s16 temp_t6;

    temp_a0 = arg1;
    arg1 = arg1;
    if (func_80147624(temp_a0) != 0) {
        temp_t6 = arg0->unk_3DC;
        switch (temp_t6) {
        case 5000:
            func_80AFFAB0(arg0, arg1, arg0, arg1);
            return;
        case 5004:
        case 5005:
        case 5006:
        case 5007:
        case 5008:
        case 5009:
        case 5010:
        case 5011:
        case 5012:
        case 5013:
            func_801518B0(arg1, 0xFFU, arg0);
            arg0->unk_3DC = 0xFF;
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return;
        }
    } else {
    default:
    }
}

s32 func_80AFFC9C(Actor *arg0, GlobalContext *arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = (arg0[2].home.pos.x * 0x10) + &D_80B013A8;
    if (arg2 == temp_v0->unk_0) {
        if (temp_v0->unk_C == 0) {
            if ((s32) gSaveContext.inventory.ammo[gItemSlots[temp_v0->unk_4]] >= temp_v0->unk_8) {
                return 0;
            }
            return 1;
        }
        if (func_80114F2C((s32) temp_v0->unk_7) != 0) {
            return 0;
        }
        goto block_7;
    }
block_7:
    return 2;
}

void func_80AFFD3C(Actor *arg0, GlobalContext *arg1) {
    void *sp1C;
    Actor *temp_a0;
    Actor *temp_a3;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    if (arg0[2].home.pos.y == 0) {
        sp1C = temp_v1;
        arg0 = arg0;
        temp_v0 = func_80123810(arg1);
        temp_a3 = arg0;
        if (temp_v0 != 0) {
            temp_a3[2].home.pos.y = temp_v0;
        }
        temp_a2 = temp_a3[2].home.pos.y;
        temp_a0 = temp_a3;
        if (temp_a2 > 0) {
            sp1C = temp_v1;
            arg0 = temp_a3;
            temp_v0_2 = func_80AFFC9C(temp_a0, arg1, temp_a2, temp_a3);
            if (temp_v0_2 != 0) {
                if (temp_v0_2 != 1) {
                    if (temp_v0_2 != 2) {

                    } else {
                        temp_v1->textId = 0x1389;
                        arg0->unk_3DC = 0x1389;
                    }
                } else {
                    temp_v1->textId = 0x138B;
                    arg0->unk_3DC = 0x138B;
                }
            } else {
                temp_v1->textId = 0x138A;
                arg0->unk_3DC = 0x138A;
            }
            func_801477B4(arg1);
            return;
        }
        if (temp_a2 < 0) {
            arg0 = temp_a3;
            func_801518B0(arg1, 0x1389U, temp_a3);
            arg0->unk_3DC = 0x1389;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
    }
}

void func_80AFFE3C(Actor *arg0) {
    SkelAnime *temp_a0;

    arg0->unk_3F4 = 0;
    if (func_80AFFFBC != arg0->unk_1D4) {
        temp_a0 = arg0 + 0x190;
        arg0 = arg0;
        func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80B01200, 9);
    }
    arg0->unk_1D4 = func_80AFFE94;
}

void func_80AFFE94(Actor *arg0, GlobalContext *arg1) {
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk_3F4 = 1;
        func_801518B0(arg1, 0x1388U, arg0);
        arg0->unk_3DC = 0x1388;
        Audio_PlayActorSound2(arg0, 0x38E5U);
        func_80AFFFA4(arg0);
        return;
    }
    if ((arg0->xzDistToPlayer < 100.0f) && ((arg0->unk_155 & 2) == 0)) {
        func_800E9250(arg1, arg0, arg0 + 0x3DE, (Vec3s *) &arg0[3].home.rot.z, (bitwise Vec3f) arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z);
        func_800B8614(arg0, arg1, 100.0f);
        return;
    }
    Math_SmoothStepToS((s16 *) &arg0[3].home.rot, 0, 1, 0x64, (s16) 0);
    Math_SmoothStepToS(&arg0[3].home.unk_12, 0, 1, 0x64, (s16) 0);
}

void func_80AFFFA4(Actor *arg0) {
    arg0[2].home.pos.y = 0.0f;
    arg0->unk_1D4 = func_80AFFFBC;
}

void func_80AFFFBC(Actor *arg0, GlobalContext *arg1) {
    Player *sp24;
    u32 temp_t4;
    u32 temp_t6;
    u32 temp_v0;
    void *temp_v0_2;

    sp24 = arg1->actorCtx.actorList[2].first;
    temp_v0 = func_80152498(arg1 + 0x4908);
    switch (temp_v0) {
    case 5:
        func_80AFFC10(arg0, arg1);
        break;
    case 6:
        if (func_80147624(arg1) != 0) {
            if (arg0->unk_3DC == 0x138A) {
                temp_v0_2 = ((bitwise s32) arg0[2].home.pos.x * 0x10) + &D_80B013A8;
                if (temp_v0_2->unk_C == 0) {
                    func_80115A14((s32) temp_v0_2->unk_6, (s16) ((s32) temp_v0_2->unk_8 * -1));
                } else {
                    func_80123D50(arg1, sp24, 0x12, 0x15);
                }
                temp_t4 = sp24->stateFlags1 | 0x20;
                temp_t6 = temp_t4 | 0x20000000;
                sp24->stateFlags1 = temp_t4;
                sp24->stateFlags1 = temp_t6;
                arg0->flags |= 0x100000;
                func_80B000FC(arg0);
            } else {
                func_80AFFE3C(arg0);
            }
        }
        break;
    case 16:
        func_80AFFD3C(arg0, arg1);
        break;
    }
    func_80B00384(arg0, arg1);
}

void func_80B000FC(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x190;
    arg0 = arg0;
    func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80B01200, 9);
    arg0->flags &= -2;
    arg0->unk_3EA = 0x28;
    arg0->unk_1D4 = func_80B00158;
}

void func_80B00158(Actor *arg0, GlobalContext *arg1) {
    f32 sp98;
    f32 sp90;
    ? sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 *temp_s1;
    f32 *temp_s4;
    f32 temp_a1;
    s16 temp_v0;
    s32 temp_s0;
    s32 temp_t1;
    void *temp_s2;
    void *temp_s7;
    s32 phi_s3;
    s32 phi_s0;

    temp_s4 = &sp90;
    temp_s7 = arg1->actorCtx.actorList[2].first;
    temp_s4->unk_0 = D_80B01454.unk_0;
    temp_s4[1] = D_80B01454.unk_4;
    temp_s4[2] = D_80B01454.unk_8;
    sp84.unk_0 = (s32) D_80B01460.unk_0;
    sp84.unk_4 = (s32) D_80B01460.unk_4;
    sp84.unk_8 = (s32) D_80B01460.unk_8;
    temp_v0 = arg0->unk_3EA;
    if ((s32) temp_v0 > 0) {
        phi_s3 = (s32) temp_v0;
        if ((s32) temp_v0 >= 4) {
            phi_s3 = 3;
        }
        phi_s0 = 0;
        if (phi_s3 > 0) {
            temp_s2 = arg0 + 0x24;
            temp_s1 = &sp78;
            do {
                temp_s1->unk_0 = temp_s2->unk_0;
                temp_s1[1] = temp_s2->unk_4;
                temp_s1[2] = temp_s2->unk_8;
                sp78 += Rand_Centered() * 20.0f;
                sp7C += 50.0f + (Rand_Centered() * 50.0f);
                sp80 += Rand_Centered() * 20.0f;
                sp90 += Rand_Centered() * 1.5f;
                sp98 += Rand_Centered() * 1.5f;
                func_800B3030(arg1, (Vec3f *) temp_s1, (Vec3f *) temp_s4, (Vec3f *) &sp84, (s16) 0x64, (s16) 0, 1);
                temp_s0 = phi_s0 + 1;
                phi_s0 = temp_s0;
            } while (temp_s0 != phi_s3);
        }
        func_800B9010(arg0, 0x321FU);
        temp_s7->unk_A6C = (s32) (temp_s7->unk_A6C | 0x20000000);
        arg0->unk_3EA = (s16) (arg0->unk_3EA - 1);
        return;
    }
    temp_a1 = arg0[2].home.pos.z;
    if ((bitwise s32) temp_a1 != -1) {
        Actor_SetSwitchFlag(arg1, (bitwise s32) temp_a1);
    }
    temp_t1 = temp_s7->unk_A6C & ~0x20;
    temp_s7->unk_A6C = temp_t1;
    temp_s7->unk_A6C = (s32) (temp_t1 & 0xDFFFFFFF);
    Actor_MarkForDeath(arg0);
}

void func_80B00384(Actor *arg0, GlobalContext *arg1) {
    s16 sp1E;
    Actor *temp_a3;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_v0;

    temp_a3 = arg0;
    temp_a1 = temp_a3->yawTowardsPlayer;
    arg0 = temp_a3;
    sp1E = temp_a1;
    Math_ScaledStepToS(temp_a3 + 0xBE, temp_a1, 0x320);
    temp_v0 = arg0->shape.rot.y;
    temp_a1_2 = temp_a1 - temp_v0;
    arg0->world.rot.y = temp_v0;
    sp1E = temp_a1_2;
    Math_ScaledStepToS(arg0 + 0x3E6, temp_a1_2, 0x258);
    Math_ScaledStepToS(arg0 + 0x3E0, (s16) (temp_a1_2 - arg0[3].home.unk_12), 0x190);
}

s32 func_80B0040C(Actor *arg0, GlobalContext *arg1) {
    Actor *sp1C;
    Actor *temp_a0;
    s32 phi_v0;

    temp_a0 = arg1->actorCtx.actorList[2].first;
    sp1C = temp_a0;
    phi_v0 = 0;
    if ((Actor_DistanceToPoint(temp_a0, arg0 + 8) < 150.0f) && ((temp_a0->unk_A6C & 0x2C6080) == 0) && ((temp_a0->unk_A70 & 0x4080) == 0)) {
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 func_80B00484(Actor *arg0, GlobalContext *arg1) {
    s32 phi_v0;

    phi_v0 = 0;
    if (Actor_DistanceToPoint(arg1->actorCtx.actorList[2].first, arg0 + 8) >= 150.0f) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_80B004D0(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    u32 temp_t4;
    u32 temp_t9;

    temp_v0 = arg0->unk_1D4;
    if ((func_80AFF030 != temp_v0) && (func_80AFF8E4 != temp_v0) && (func_80B00158 != temp_v0) && (func_80AFFA68 != temp_v0) && (func_80AFF76C != temp_v0) && (func_80AFFFBC != temp_v0)) {
        if (func_80AFFE94 != temp_v0) {
            arg0 = arg0;
            if (Player_GetMask(arg1) == 0xC) {
                temp_t4 = arg0->flags & ~5;
                arg0->flags = temp_t4;
                arg0->flags = temp_t4 | 9;
                arg0->hintId = 0xFF;
                arg0->textId = 0;
                func_80AFFE3C(arg0);
                return;
            }
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return;
        }
        arg0 = arg0;
        if (Player_GetMask(arg1) != 0xC) {
            temp_t9 = arg0->flags & ~9;
            arg0->flags = temp_t9;
            arg0->flags = temp_t9 | 5;
            if (arg0->unk_3F2 == 1) {
                arg0->hintId = 0x2A;
            } else {
                arg0->hintId = 0x2D;
            }
            arg0->textId = 0;
            func_80AFF45C(arg0);
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
    }
}

void func_80B005EC(Actor *arg0, GlobalContext *arg1) {
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1;
    s32 phi_a2;
    s32 phi_a3;
    s32 phi_v0;
    s32 phi_a3_2;
    s32 phi_a3_3;
    s32 phi_a3_4;
    s16 phi_a3_5;
    s16 phi_a3_6;
    s16 phi_a3_7;
    s16 phi_a3_8;

    temp_a1 = arg0[3].home.unk_12;
    temp_v1 = arg0->yawTowardsPlayer - arg0->shape.rot.y;
    temp_v0 = temp_v1 - temp_a1;
    if ((s32) temp_v0 < -0x1F4) {
        phi_a2 = -0x1F4;
    } else {
        phi_a3_7 = temp_v0;
        if ((s32) temp_v0 >= 0x1F5) {
            phi_a3_7 = 0x1F4;
        }
        phi_a2 = (s32) phi_a3_7;
    }
    temp_v0_2 = temp_v0 - arg0[3].home.rot.x;
    if ((s32) temp_v0_2 < -0x1F4) {
        phi_v0 = -0x1F4;
    } else {
        phi_a3_8 = temp_v0_2;
        if ((s32) temp_v0_2 >= 0x1F5) {
            phi_a3_8 = 0x1F4;
        }
        phi_v0 = (s32) phi_a3_8;
    }
    if ((s32) temp_v1 >= 0) {
        phi_a3 = phi_a2;
        if (phi_a2 < 0) {
            phi_a3 = -phi_a2;
        }
        arg0[3].home.unk_12 = temp_a1 + phi_a3;
        if (phi_v0 < 0) {
            phi_a3_2 = -phi_v0;
        } else {
            phi_a3_2 = phi_v0;
        }
        arg0[3].home.rot.x += phi_a3_2;
    } else {
        phi_a3_3 = phi_a2;
        if (phi_a2 < 0) {
            phi_a3_3 = -phi_a2;
        }
        arg0[3].home.unk_12 = temp_a1 - phi_a3_3;
        if (phi_v0 < 0) {
            phi_a3_4 = -phi_v0;
        } else {
            phi_a3_4 = phi_v0;
        }
        arg0[3].home.rot.x -= phi_a3_4;
    }
    temp_a1_2 = arg0[3].home.unk_12;
    if ((s32) temp_a1_2 < -0x495F) {
        arg0[3].home.unk_12 = -0x495F;
    } else {
        phi_a3_5 = temp_a1_2;
        if ((s32) temp_a1_2 >= 0x4960) {
            phi_a3_5 = 0x495F;
        }
        arg0[3].home.unk_12 = phi_a3_5;
    }
    temp_v0_3 = arg0[3].home.rot.x;
    if ((s32) temp_v0_3 < -0x256F) {
        arg0[3].home.rot.x = -0x256F;
        return;
    }
    phi_a3_6 = temp_v0_3;
    if ((s32) temp_v0_3 >= 0x2570) {
        phi_a3_6 = 0x256F;
    }
    arg0[3].home.rot.x = phi_a3_6;
}

s32 func_80B00760(Actor *arg0, void *arg1) {
    f32 sp48;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s32 temp_s0_2;
    s32 temp_s0_3;
    void *temp_s0;
    s32 phi_v0;

    temp_s0 = arg1->unk_1CCC;
    sp38 = 0.0f;
    sp40.unk_0 = temp_s0->unk_24;
    (&sp40)[1] = temp_s0->unk_28;
    (&sp40)[2] = temp_s0->unk_2C;
    sp40 -= 25.0f * Math_SinS(temp_s0->unk_BE);
    sp48 -= 25.0f * Math_CosS(temp_s0->unk_BE);
    sp3C = Math_Vec3f_StepTo(arg0 + 0x24, (Vec3f *) &sp40, 10.0f);
    temp_s0_2 = Math_SmoothStepToS(arg0 + 0xBE, temp_s0->unk_BE, 1, 0x1770, (s16) 0x64) << 0x10;
    arg0->world.rot.y = arg0->shape.rot.y;
    temp_s0_3 = temp_s0_2 >> 0x10;
    if (gSaveContext.playerForm == 4) {
        sp38 = Math_SmoothStepToF(arg0 + 0xC4, -1500.0f, 1.0f, 150.0f, 0.0f);
    }
    if (sp3C == 0.0f) {
        phi_v0 = temp_s0_3;
        if (temp_s0_3 < 0) {
            phi_v0 = -temp_s0_3;
        }
        if ((phi_v0 < 0x64) && (sp38 == 0.0f)) {
            return 1;
        }
        goto block_8;
    }
block_8:
    return 0;
}

void func_80B008BC(EnTalkGibud *arg0, GlobalContext *arg1) {
    if (func_80AFF6A0 != arg0->actionFunc) {
        SkelAnime_FrameUpdateMatrix(arg0 + 0x190);
    }
}

void func_80B008FC(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk_1D4;
    if ((func_80AFED7C == temp_v0) || (func_80AFF4AC == temp_v0) || (func_80AFF76C == temp_v0)) {
        Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    }
}

void func_80B0094C(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    s32 temp_v0_2;
    u8 temp_t8;
    u8 temp_v0;
    void *temp_v1;

    temp_v0 = arg0->unk_155;
    temp_v1 = arg1->actorCtx.actorList[2].first;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_155 = (u8) (temp_v0 & 0xFFFD);
        sp2C = temp_v1;
        Actor_ApplyDamage(arg0);
        temp_t8 = arg0->colChkInfo.damageEffect;
        switch (temp_t8) {
        case 15:
            sp2C = temp_v1;
            func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 8);
            if (temp_v1->unk_ADC != 0) {
                arg0->unk_3F7 = (s8) temp_v1->unk_ADD;
            }
            arg0->shape.yOffset = 0.0f;
            if (arg0->colChkInfo.health == 0) {
                func_80AFF880(arg0);
                return;
            }
            func_80AFF700(arg0);
            return;
        case 14:
            if (arg0->unk_3F2 == 1) {
                arg0->colChkInfo.health = 0;
                arg0->shape.yOffset = 0.0f;
                func_80AFF880(arg0);
                return;
            }
            /* Duplicate return node #25. Try simplifying control flow for better match */
            return;
        case 2:
            func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 8);
            if (arg0->colChkInfo.health == 0) {
                func_80AFF880(arg0);
            } else {
                func_80AFF700(arg0);
            }
            arg0->unk_3F0 = 0xB4;
            arg0->unk_3F6 = 0;
            arg0->unk_29C = 1.0f;
            return;
        case 4:
            func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 8);
            if (arg0->colChkInfo.health == 0) {
                func_80AFF880(arg0);
            } else {
                func_80AFF700(arg0);
            }
            arg0->unk_3F0 = 0x3C;
            arg0->unk_3F6 = 0x14;
            arg0->unk_29C = 1.0f;
            return;
        case 12:
            temp_v0_2 = arg0->unk_1D4;
            if ((func_80AFF030 != temp_v0_2) && ((func_80AFF6A0 != temp_v0_2) || (arg0->unk_3EA == 0))) {
                arg0->unk_3F0 = 0x28;
                arg0->unk_3F6 = 0x1E;
                arg0->unk_29C = 1.0f;
                func_80AFF618(arg0);
                return;
            }
            /* Duplicate return node #25. Try simplifying control flow for better match */
            return;
        case 1:
            if ((func_80AFF6A0 != arg0->unk_1D4) || (arg0->unk_3EA == 0)) {
                func_80AFF618(arg0);
            }
            /* Duplicate return node #25. Try simplifying control flow for better match */
            return;
        }
    } else {
    default:
    }
}

/*
Failed to decompile function func_80B00B8C:

Label L80B00C64 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void func_80B00C94(Actor *arg0, GlobalContext *arg1) {
    void *sp34;
    f32 sp30;
    f32 sp28;
    Vec3f *sp20;
    Actor *temp_a1;
    Vec3f *temp_v0;
    s16 temp_a0;

    temp_a1 = arg0;
    arg0 = temp_a1;
    sp34 = arg1->actorCtx.actorList[2].first;
    Actor_UpdateBgCheckInfo(arg1, temp_a1, 30.0f, 20.0f, 35.0f, 0x1DU);
    if ((func_80AFF030 == arg0->unk_1D4) && (arg0[3].unk20 == 0) && ((arg0->bgCheckFlags & 8) != 0)) {
        temp_v0 = sp34 + 0x24;
        sp28.unk_0 = sp34->world.pos.x;
        (&sp28)[1] = temp_v0->y;
        (&sp28)[2] = temp_v0->z;
        temp_a0 = arg0->wallYaw;
        arg0 = arg0;
        sp20 = temp_v0;
        sp28 += 10.0f * Math_SinS(temp_a0);
        sp30 += 10.0f * Math_CosS(arg0->wallYaw);
        Math_Vec3f_StepTo(sp20, (Vec3f *) &sp28, 5.0f);
    }
}

void func_80B00D9C(EnTalkGibud *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk_3F0;
    if ((s32) temp_v0 > 0) {
        arg0->unk_3F0 = temp_v0 - 1;
    }
    if ((s32) arg0->unk_3F0 < 0x14) {
        Math_SmoothStepToF(arg0 + 0x2A0, 0.0f, 0.5f, 0.03f, 0.0f);
        arg0->unk_29C = (f32) arg0->unk_3F0 * 0.05f;
        return;
    }
    Math_SmoothStepToF(arg0 + 0x2A0, 0.5f, 0.1f, 0.02f, 0.0f);
}

void EnTalkGibud_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnTalkGibud *this = (EnTalkGibud *) thisx;
    func_80B004D0((Actor *) this, globalCtx);
    func_80B0094C((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    func_80B008BC(this, globalCtx);
    func_80B008FC((Actor *) this, globalCtx);
    func_80B00B8C(this, globalCtx);
    func_80B00C94((Actor *) this, globalCtx);
    func_80B00D9C(this, globalCtx);
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    this->actor.focus.pos.y += 50.0f;
}

s32 func_80B00F08(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xC) {
        arg4->y += arg5[3].home.unk_12;
    } else if (arg1 == 0x17) {
        arg4->y += arg5[3].home.rot.x;
    }
    return 0;
}

void func_80B00F64(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if ((arg4->unk_3F0 != 0) && ((arg1 == 3) || (arg1 == 4) || (arg1 == 6) || (arg1 == 8) || (arg1 == 9) || (arg1 == 0xB) || (arg1 == 0xE) || (arg1 == 0x10) || (arg1 == 0x11) || (arg1 == 0x12) || (arg1 == 0x14) || (arg1 == 0x15) || (arg1 == 0x16) || (arg1 == 0x18) || (arg1 == 0x19))) {
        SysMatrix_GetStateTranslation(arg4 + (arg4[2].flags * 0xC) + 0x1D8);
        arg4[2].flags += 1;
    }
}

void EnTalkGibud_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    GraphicsContext *temp_s1;
    EnTalkGibud *this = (EnTalkGibud *) thisx;

    temp_s1 = globalCtx->state.gfxCtx;
    this->unk_28C = 0;
    if (this->actor.shape.shadowAlpha == 0xFF) {
        func_8012C28C(globalCtx->state.gfxCtx);
        temp_v1 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v1[1];
        temp_v1->words.w0 = 0xFB000000;
        temp_v1->words.w1 = (u32) this->actor.shape.shadowAlpha;
        temp_v1_2 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v1_2[1];
        temp_v1_2->words.w1 = (u32) D_801AEFA0;
        temp_v1_2->words.w0 = 0xDB060020;
        temp_s1->polyOpa.p = SkelAnime_DrawSV2(globalCtx, this->unk_190.skeleton, this->unk_190.limbDrawTbl, (s32) this->unk_190.dListCount, func_80B00F08, func_80B00F64, (Actor *) this, temp_s1->polyOpa.p);
    } else {
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v1_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v1_3[1];
        temp_v1_3->words.w0 = 0xFB000000;
        temp_v1_3->words.w1 = (u32) this->actor.shape.shadowAlpha;
        temp_v1_4 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v1_4[1];
        temp_v1_4->words.w1 = (u32) D_801AEF88;
        temp_v1_4->words.w0 = 0xDB060020;
        temp_s1->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk_190.skeleton, this->unk_190.limbDrawTbl, (s32) this->unk_190.dListCount, func_80B00F08, func_80B00F64, (Actor *) this, temp_s1->polyXlu.p);
    }
    if ((s32) this->unk_3F0 > 0) {
        func_800BE680(globalCtx, (Actor *) this, (Vec3f []) (Vec3f *) &this->unk_1D8, 0xF, this->unk_2A0, 0.5f, this->unk_29C, (u8) (s32) this->unk_3F6);
    }
}
