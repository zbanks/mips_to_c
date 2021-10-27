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
    /* 0x022 */ char pad_22[0x2];
    /* 0x024 */ PosRot world;
    /* 0x038 */ s8 cutscene;
    /* 0x039 */ s8 unk39;
    /* 0x03A */ s16 unk_3A;                         /* inferred */
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

typedef struct EnFu {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ SkelAnime unk_190;                  /* inferred */
    /* 0x1D4 */ void (*actionFunc)(EnFu *, GlobalContext *);
    /* 0x1D8 */ Vec3s unk_1D8;                      /* inferred */
    /* 0x1DE */ char pad_1DE[0x78];                 /* maybe part of unk_1D8[21]? */
    /* 0x256 */ Vec3s unk_256;                      /* inferred */
    /* 0x25C */ char pad_25C[0x78];                 /* maybe part of unk_256[21]? */
    /* 0x2D4 */ Actor *unk_2D4;                     /* inferred */
    /* 0x2D8 */ ? unk_2D8;                          /* inferred */
    /* 0x2D8 */ char pad_2D8[0x264];
    /* 0x53C */ s16 unk_53C;                        /* inferred */
    /* 0x53E */ s16 unk_53E;                        /* inferred */
    /* 0x540 */ s16 unk_540;                        /* inferred */
    /* 0x542 */ char pad_542[0x4];                  /* maybe part of unk_540[3]? */
    /* 0x546 */ s16 unk_546;                        /* inferred */
    /* 0x548 */ char pad_548[0x2];
    /* 0x54A */ s16 unk_54A;                        /* inferred */
    /* 0x54C */ s16 unk_54C;                        /* inferred */
    /* 0x54E */ s16 unk_54E;                        /* inferred */
    /* 0x550 */ s16 unk_550;                        /* inferred */
    /* 0x552 */ char pad_552[0x2];
} EnFu;                                             /* size = 0x554 */

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ Vec3s rot;
    /* 0x12 */ s16 unk_12;                          /* inferred */
} PosRot;                                           /* size = 0x14 */

struct _mips2c_stack_EnFu_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnFu_Draw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ GraphicsContext *sp44;               /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EnFu_Init {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ ColliderCylinder *sp38;              /* inferred */
    /* 0x3C */ ActorShape *sp3C;                    /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0xC];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnFu_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809616E0 {
    /* 0x00 */ char pad_0[0x74];
    /* 0x74 */ s32 sp74;                            /* inferred */
    /* 0x78 */ s32 sp78;                            /* inferred */
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad_7C[0xC];
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad_88[0xC];
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ s16 spA0;                            /* inferred */
    /* 0xA2 */ char pad_A2[0xE];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_809619D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80961D10 {};              /* size 0x0 */

struct _mips2c_stack_func_80961D7C {
    /* 0x00 */ char pad_0[0x50];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80961E88 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80961EC8 {};              /* size 0x0 */

struct _mips2c_stack_func_80961F00 {};              /* size 0x0 */

struct _mips2c_stack_func_80961F38 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ s16 sp40;                            /* inferred */
    /* 0x42 */ char pad_42[0x6];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_8096209C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809622FC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80962340 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80962588 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80962660 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809628BC {};              /* size 0x0 */

struct _mips2c_stack_func_809628D0 {
    /* 0x00 */ char pad_0[0x27];
    /* 0x27 */ u8 sp27;                             /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809629F8 {};              /* size 0x0 */

struct _mips2c_stack_func_80962A10 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80962BA8 {};              /* size 0x0 */

struct _mips2c_stack_func_80962BCC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80962D48 {};              /* size 0x0 */

struct _mips2c_stack_func_80962D60 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80962EBC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80962F10 {};              /* size 0x0 */

struct _mips2c_stack_func_80962F4C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ u32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0xC];                    /* maybe part of sp2C[4]? */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80963258 {};              /* size 0x0 */

struct _mips2c_stack_func_8096326C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809632D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80963350 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ MessageContext *sp28;                /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80963540 {};              /* size 0x0 */

struct _mips2c_stack_func_80963560 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80963610 {};              /* size 0x0 */

struct _mips2c_stack_func_80963630 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80963810 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Vec3f *sp1C;                         /* inferred */
    /* 0x20 */ char pad_20[0x2];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];                    /* maybe part of sp22[3]? */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809638F8 {};              /* size 0x0 */

struct _mips2c_stack_func_809639D0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80963DE4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80963EAC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80963F44 {
    /* 0x00 */ char pad_0[0x1E];
    /* 0x1E */ u16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80963F88 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80963FF8 {};              /* size 0x0 */

struct _mips2c_stack_func_80964034 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809640D8 {};              /* size 0x0 */

struct _mips2c_stack_func_8096413C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80964190 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8096426C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809642E0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809643FC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8096450C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80964694 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0xC];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809647EC {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80964950 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

? Parameter_AddMagic(GlobalContext *, s16, EnFu *); /* extern */
void func_809616E0(EnFu *arg0, GlobalContext *arg1, EnFu *); /* static */
void func_809619D0(EnFu *arg0, GlobalContext *arg1); /* static */
s32 func_80961D10(Actor *arg0);                     /* static */
void func_80961D7C(GlobalContext *arg0);            /* static */
void func_80961E88(GlobalContext *arg0);            /* static */
void func_80961EC8(GlobalContext *arg0);            /* static */
void func_80961F00(GlobalContext *arg0);            /* static */
void func_80961F38(GlobalContext *arg0, Vec3f *arg1, s16 *arg2, s16 arg3, s16 arg4, s16 arg5); /* static */
void func_8096209C(EnFu *arg0, GlobalContext *arg1); /* static */
void func_809622FC(EnFu *arg0);                     /* static */
void func_80962340(Actor *arg0, GlobalContext *arg1); /* static */
void func_80962588(Actor *arg0, GlobalContext *arg1); /* static */
void func_80962660(Actor *arg0, GlobalContext *arg1); /* static */
void func_809628BC(Actor *arg0);                    /* static */
void func_809628D0(Actor *arg0, GlobalContext *arg1); /* static */
void func_809629F8(Actor *arg0);                    /* static */
void func_80962A10(EnFu *arg0, GlobalContext *arg1); /* static */
void func_80962BA8(Actor *arg0);                    /* static */
void func_80962BCC(EnFu *arg0, GlobalContext *arg1); /* static */
void func_80962D48(Actor *arg0);                    /* static */
void func_80962D60(EnFu *arg0, GlobalContext *arg1); /* static */
void func_80962EBC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80962F10(EnFu *arg0);                     /* static */
void func_80962F4C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80963258(Actor *arg0);                    /* static */
void func_8096326C(EnFu *arg0, GlobalContext *arg1); /* static */
void func_809632D0(Actor *arg0);                    /* static */
void func_80963350(Actor *arg0, GlobalContext *arg1); /* static */
void func_80963540(Actor *arg0);                    /* static */
void func_80963560(Actor *arg0, GlobalContext *arg1); /* static */
void func_80963610(Actor *arg0, GlobalContext *);   /* static */
void func_80963630(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80963810(GlobalContext *arg0, s32 arg1, s32 arg2, s32 arg3); /* static */
s32 func_809638F8(GlobalContext *arg0);             /* static */
void func_809639D0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80963DE4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80963EAC(Actor *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_80963F44(Actor *arg0, GlobalContext *arg1); /* static */
void func_80963F88(Actor *arg0, GlobalContext *arg1); /* static */
void func_80963FF8(EnFu *arg0, GlobalContext *arg1); /* static */
void func_80964034(EnFu *arg0, GlobalContext *arg1); /* static */
void func_809640D8(EnFu *arg0, GlobalContext *arg1); /* static */
void func_8096413C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80964190(Actor *arg0, GlobalContext *arg1); /* static */
void func_8096426C(Actor *arg0, GlobalContext *arg1); /* static */
void func_809642E0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_809643FC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_8096450C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80964694(EnFu *arg0, void *arg1, ? *arg2, s32 arg3); /* static */
void func_809647EC(GlobalContext *arg0, void *arg1, s32 arg2); /* static */
void func_80964950(GlobalContext *arg0, ? *arg1, s32 arg2); /* static */
extern AnimationHeader D_06001F74;
extern ? D_0600B0A0;
extern ? D_0600B0E0;
extern FlexSkeletonHeader D_0600B2B0;
static ? D_80964B00;                                /* unable to generate initializer */
static ? D_80964B0C;                                /* unable to generate initializer */
static ? D_80964B18;                                /* unable to generate initializer */
static ? D_80964B24;                                /* unable to generate initializer */
static ActorAnimationEntry D_80964B30[7] = {
    {(AnimationHeader *)0x60053E0, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6001F74, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6002F64, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6004904, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6005304, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x6005304, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600BAC4, 1.0f, 0.0f, 0.0f, 2, 0.0f},
};
static ColliderCylinderInit D_80964BD8 = {
    {0, 0, 9, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x14, 0x32, 0, {0, 0, 0}},
};
static ? D_80964C04;                                /* unable to generate initializer */
static ? D_80964C10;                                /* unable to generate initializer */
static s32 D_80964C1C = 0xFFFFFFFF;
static s32 D_80964C20 = 0xC6C6C6FF;
static s32 D_80964C24 = 0;
static Vec3f D_80964C28 = {-2500.0f, 0.0f, 0.0f};
static Vec3f D_80964C34 = {-3500.0f, 0.0f, 0.0f};
static ? D_80964C40;                                /* unable to generate initializer */
static ? D_80964C4C;                                /* unable to generate initializer */
static ? D_80964C58;                                /* unable to generate initializer */

void func_809616E0(EnFu *arg0, GlobalContext *arg1) {
    s16 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    ? sp88;
    ? sp7C;
    s32 sp78;
    s32 sp74;
    f32 *temp_a1;
    f32 *temp_fp;
    f32 temp_f20;
    f32 temp_f22;
    s32 temp_s2;
    void *temp_v0;
    void *temp_v0_2;
    s16 phi_a2;
    s32 phi_s1;
    s32 phi_s2;

    temp_fp = &sp94;
    phi_a2 = 0;
    phi_s1 = 0;
    if ((gSaveContext.playerForm == 3) && (((s32) gSaveContext.day % 5) == 3)) {
        phi_a2 = 1;
    }
    arg0->unk_54C = 0;
    phi_s2 = 0;
    if (arg0->unk_520 > 0) {
        spA0 = phi_a2;
        do {
            temp_v0 = arg0->unk_538 + phi_s1;
            temp_f20 = arg0->actor.world.pos.x - (f32) temp_v0->unk_0;
            temp_f22 = arg0->actor.world.pos.z - (f32) temp_v0->unk_4;
            if ((spA0 == 0) || ((phi_s2 & 1) != 0)) {
                temp_v0_2 = arg0->unk_538 + phi_s1;
                Actor_Spawn(arg1 + 0x1CA0, arg1, arg0->unk_544, (f32) temp_v0_2->unk_0, (f32) temp_v0_2->unk_2, (f32) temp_v0_2->unk_4, (s16) 0, (s16) (s32) Math_FAtan2F(temp_f22, temp_f20), (s16) 0, (s16) phi_s2);
                arg0->unk_54C += 1;
            }
            if (arg0->unk_546 == 1) {
                sp88.unk_0 = (s32) D_80964C04.unk_0;
                sp88.unk_4 = (s32) D_80964C04.unk_4;
                sp88.unk_8 = (s32) D_80964C04.unk_8;
                temp_a1 = temp_fp;
                sp7C.unk_0 = (s32) D_80964C10.unk_0;
                sp7C.unk_4 = (s32) D_80964C10.unk_4;
                sp7C.unk_8 = (s32) D_80964C10.unk_8;
                sp78 = D_80964C1C;
                sp74 = D_80964C20;
                sp94 = (f32) *(arg0->unk_538 + phi_s1);
                sp98 = (f32) (arg0->unk_538 + phi_s1)->unk_2;
                sp9C = (f32) (arg0->unk_538 + phi_s1)->unk_4;
                func_800B0EB0(arg1, (Vec3f *) temp_a1, (Vec3f *) &sp88, (Vec3f *) &sp7C, (Color_RGBA8 *) &sp78, (Color_RGBA8 *) &sp74, (s16) 0x64, (s16) 0x96, (s16) 0xA);
                sp94 -= 0.1f * temp_f20;
                sp9C -= 0.1f * temp_f22;
                func_800B3030(arg1, (Vec3f *) temp_fp, (Vec3f *) &sp88, (Vec3f *) &sp7C, (s16) 0x64, (s16) 0, 3);
            }
            temp_s2 = phi_s2 + 1;
            phi_s1 += 6;
            phi_s2 = temp_s2;
        } while (temp_s2 < arg0->unk_520);
    }
}

void func_809619D0(EnFu *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    s32 temp_hi;
    s32 temp_v0;
    void *temp_a2;
    void *temp_a2_2;
    s32 phi_v0;
    void *phi_a2;
    void *phi_a2_2;

    temp_hi = (s32) gSaveContext.day % 5;
    temp_a2 = arg1->setupPathList + ((((s32) arg0->actor.params >> 8) & 0xFF) * 8);
    phi_a2 = temp_a2;
    phi_a2_2 = temp_a2;
    if (temp_hi != 1) {
        if (temp_hi != 2) {
            if (temp_hi != 3) {
                arg0->unk_544 = 0x1B3;
                arg0->unk_542 = 2;
            } else {
                arg0->unk_542 = 0;
                arg0->unk_544 = 0x1B3;
            }
        } else {
            arg0->unk_542 = 1;
            arg0->unk_544 = 0x1B4;
        }
    } else {
        arg0->unk_542 = 2;
        arg0->unk_544 = 0x1B3;
    }
    temp_v1 = arg0->unk_542;
    phi_v0 = 0;
    if ((s32) temp_v1 > 0) {
        do {
            temp_v0 = phi_v0 + 1;
            temp_a2_2 = arg1->setupPathList + (phi_a2_2->unk_1 * 8);
            phi_v0 = temp_v0;
            phi_a2 = temp_a2_2;
            phi_a2_2 = temp_a2_2;
        } while (temp_v0 < (s32) temp_v1);
    }
    arg0->unk_520 = (s32) phi_a2->unk_0;
    arg0 = arg0;
    arg0->unk_538 = Lib_SegmentedToVirtual(phi_a2->unk_4);
    func_809616E0(arg0, arg1);
}

void EnFu_Init(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp40;
    ActorShape *sp3C;
    ColliderCylinder *sp38;
    Actor *temp_t3;
    Actor *temp_v0;
    Actor *temp_v0_2;
    ActorShape *temp_a0;
    ColliderCylinder *temp_a1;
    Actor *phi_v0;
    Actor *phi_v0_2;
    EnFu *this = (EnFu *) thisx;

    temp_v0 = globalCtx->actorCtx.actorList[1].first;
    temp_a0 = &this->actor.shape;
    phi_v0 = temp_v0;
    phi_v0_2 = temp_v0;
    if (temp_v0 != 0) {
loop_1:
        phi_v0_2 = phi_v0;
        if (phi_v0->id == 0x1AE) {
            this->actor.child = phi_v0;
        } else {
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
            phi_v0_2 = temp_v0_2;
            if (temp_v0_2 != 0) {
                goto loop_1;
            }
        }
    }
    if (phi_v0_2 != 0) {
        sp3C = temp_a0;
        ActorShape_Init(temp_a0, 0.0f, func_800B3FC0, 36.0f);
        SkelAnime_InitSV(globalCtx, &this->unk_190, &D_0600B2B0, &D_06001F74, &this->unk_1D8, &this->unk_256, 0x15);
        temp_a1 = &this->unk_144;
        sp38 = temp_a1;
        Collider_InitCylinder(globalCtx, temp_a1);
        Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80964BD8);
        this->actor.colChkInfo.mass = 0xFF;
        Actor_SetScale((Actor *) this, 0.01f);
        this->actor.flags &= -2;
        this->actor.shape.rot.y += 0x4000;
        this->actor.gravity = -0.2f;
        this->unk_30 = (unaligned s32) sp3C->unk_0;
        this->unk_546 = 0;
        this->unk_54A = 1;
        this->unk_54C = 0;
        this->unk_53C = 0;
        this->unk_53E = 0;
        this->unk_540 = 0;
        this->unk_54E = 0;
        this->unk_550 = 0;
        this->actor.world.rot.z = (s16) (u16) sp3C->rot.z;
        func_809622FC(this);
        this->actor.targetMode = 6;
        func_809619D0(this, globalCtx);
        if (((s32) gSaveContext.day % 5) == 2) {
            temp_t3 = this->actor.child;
            sp40.unk_0 = temp_t3->home.pos.x;
            (&sp40)[1] = temp_t3->home.pos.y;
            (&sp40)[2] = temp_t3->home.pos.z;
            this->unk_2D4 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x1BC, sp40, sp44, sp48, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
            return;
        }
        this->unk_2D4 = NULL;
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void EnFu_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnFu *this = (EnFu *) thisx;
    gSaveContext.weekEventReg[63] &= 0xFE;
    gSaveContext.weekEventReg[8] &= 0xFE;
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
}

s32 func_80961D10(Actor *arg0) {
    if (((arg0->unk_155 & 2) != 0) && (arg0[4].world.rot.y == 0)) {
        return 1;
    }
    if (((arg0->unk_156 & 2) != 0) && (arg0[4].world.rot.y == 2) && (*arg0[1].home.pos.y == 0x6A)) {
        return 1;
    }
    return 0;
}

void func_80961D7C(GlobalContext *arg0) {
    DynaPolyActor *temp_v0;
    u8 temp_a1;
    void *temp_s0;
    void *temp_s0_2;
    void *phi_s0;

    temp_s0 = arg0->actorCtx.actorList[3].first;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
        do {
            if ((phi_s0->id == 9) && ((phi_s0->bgCheckFlags & 1) != 0)) {
                temp_a1 = phi_s0->floorBgId;
                if (temp_a1 != 0x32) {
                    temp_v0 = BgCheck_GetActorOfMesh(arg0 + 0x830, (s32) temp_a1);
                    if ((temp_v0 != 0) && (temp_v0->actor.id == 0x1B4)) {
                        Math_SmoothStepToF(phi_s0 + 0x24, temp_v0->actor.world.pos.x, 0.1f, 1.0f, 0.5f);
                        Math_SmoothStepToF(phi_s0 + 0x2C, temp_v0->actor.world.pos.z, 0.1f, 1.0f, 0.5f);
                    }
                }
            }
            temp_s0_2 = phi_s0->next;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 0);
    }
}

void func_80961E88(GlobalContext *arg0) {
    Actor *temp_s0;
    Actor *temp_s0_2;
    Actor *phi_s0;

    temp_s0 = arg0->actorCtx.actorList[3].first;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
        do {
            Actor_MarkForDeath(phi_s0);
            temp_s0_2 = phi_s0->next;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 0);
    }
}

void func_80961EC8(GlobalContext *arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;

    temp_v0 = arg0->actorCtx.actorList[1].first;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        do {
            if (phi_v0->id == 0x1B3) {
                phi_v0->unk_30A = 1;
            }
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
        } while (temp_v0_2 != 0);
    }
}

void func_80961F00(GlobalContext *arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;

    temp_v0 = arg0->actorCtx.actorList[1].first;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        do {
            if (phi_v0->id == 0x1B4) {
                phi_v0[2].colChkInfo.cylYShift = 1;
            }
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
        } while (temp_v0_2 != 0);
    }
}

void func_80961F38(GlobalContext *arg0, Vec3f *arg1, s16 *arg2, s16 arg3, s16 arg4, s16 arg5) {
    s16 sp40;
    ? sp34;
    s16 temp_a0;
    s16 temp_v0_2;
    s16 temp_v1;
    void *temp_v0;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_v0 = arg0->actorCtx.actorList[2].first;
    sp34.unk_0 = (s32) temp_v0->focus.pos.x;
    sp34.unk_4 = (s32) temp_v0->focus.pos.y;
    sp34.unk_8 = (s32) temp_v0->focus.pos.z;
    temp_v1 = Math_Vec3f_Yaw(arg1, (Vec3f *) &sp34) - arg3;
    temp_a0 = temp_v1;
    sp40 = temp_v1;
    if ((s32) temp_a0 < 0) {
        phi_v1 = -(s32) temp_a0;
    } else {
        phi_v1 = (s32) temp_a0;
    }
    if ((s32) arg5 < phi_v1) {
        Math_SmoothStepToS(arg2, 0, 6, 0x1838, (s16) 0x64);
        Math_SmoothStepToS(&arg2[1], 0, 6, 0x1838, (s16) 0x64);
    } else {
        Math_SmoothStepToS(arg2, Math_Vec3f_Pitch(arg1, (Vec3f *) &sp34), 6, 0x1838, (s16) 0x64);
        Math_SmoothStepToS(&arg2[1], sp40, 6, 0x1838, (s16) 0x64);
    }
    temp_v0_2 = arg2[1];
    if ((s32) temp_v0_2 < 0) {
        phi_v1_2 = -(s32) temp_v0_2;
    } else {
        phi_v1_2 = (s32) temp_v0_2;
    }
    if ((s32) arg4 < phi_v1_2) {
        if ((s32) temp_v0_2 > 0) {
            arg2[1] = arg4;
        } else {
            arg2[1] = (s16) -(s32) arg4;
        }
    }
    Math_SmoothStepToS(&arg2[2], 0, 6, 0x7D0, (s16) 0x64);
}

void func_8096209C(EnFu *arg0, GlobalContext *arg1) {
    ? sp34;
    s16 temp_v0;
    s32 temp_v1;

    if ((arg0->unk_53C & 1) != 0) {
        func_80961F38(arg1, arg0 + 0x508, arg0 + 0x524, arg0->actor.shape.rot.y, (s16) 0x38E3, (s16) 0x6AAA);
    } else {
        Math_SmoothStepToS(arg0 + 0x524, 0, 6, 0x1770, (s16) 0x64);
        Math_SmoothStepToS(arg0 + 0x526, 0, 6, 0x1770, (s16) 0x64);
        Math_SmoothStepToS(arg0 + 0x528, 0, 6, 0x1770, (s16) 0x64);
    }
    if ((arg0->unk_53C & 2) != 0) {
        func_80961F38(arg1, arg0 + 0x514, arg0 + 0x52A, (s16) (arg0->actor.shape.rot.y - 0x8000), (s16) 0x38E3, (s16) 0x5555);
    } else {
        Math_SmoothStepToS(arg0 + 0x52A, 0, 6, 0x1770, (s16) 0x64);
        Math_SmoothStepToS(arg0 + 0x52C, 0, 6, 0x1770, (s16) 0x64);
        Math_SmoothStepToS(arg0 + 0x52E, 0, 6, 0x1770, (s16) 0x64);
    }
    temp_v0 = arg0->unk_53C;
    temp_v1 = temp_v0 & 1;
    if ((temp_v1 != 0) && ((temp_v0 & 2) != 0)) {
        sp34.unk_0 = (s32) D_80964B24.unk_0;
        sp34.unk_4 = (s32) D_80964B24.unk_4;
        sp34.unk_8 = (s32) D_80964B24.unk_8;
    } else if (temp_v1 != 0) {
        sp34.unk_0 = (s32) D_80964B0C.unk_0;
        sp34.unk_4 = (s32) D_80964B0C.unk_4;
        sp34.unk_8 = (s32) D_80964B0C.unk_8;
    } else if ((temp_v0 & 2) != 0) {
        sp34.unk_0 = (s32) D_80964B18.unk_0;
        sp34.unk_4 = (s32) D_80964B18.unk_4;
        sp34.unk_8 = (s32) D_80964B18.unk_8;
    } else {
        sp34.unk_0 = (s32) D_80964B24.unk_0;
        sp34.unk_4 = (s32) D_80964B24.unk_4;
        sp34.unk_8 = (s32) D_80964B24.unk_8;
    }
    SysMatrix_StatePush();
    Matrix_RotateY(arg0->actor.shape.rot.y, 0U);
    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp34, arg0 + 0x3C);
    SysMatrix_StatePop();
    arg0->actor.focus.pos.x += arg0->actor.world.pos.x;
    arg0->actor.focus.pos.y += arg0->actor.world.pos.y;
    arg0->actor.focus.pos.z += arg0->actor.world.pos.z;
}

void func_809622FC(EnFu *arg0) {
    func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80964B30, 1);
    arg0->actionFunc = func_80962340;
}

void func_80962340(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    GlobalContext *temp_a1;
    u16 temp_v0;
    u8 temp_v0_2;

    temp_a1 = arg1;
    sp2C = arg1->actorCtx.actorList[2].first;
    if (arg0[4].unk_3A == 2) {
        arg0->flags |= 0x10000;
    }
    arg1 = arg1;
    if (func_800B84D0(arg0, temp_a1) != 0) {
        if (arg0[4].unk_3A == 2) {
            temp_v0 = arg0->unk_552;
            if (temp_v0 == 0x287D) {
                if (gSaveContext.playerForm == 3) {
                    func_801518B0(arg1, 0x287EU, arg0);
                    arg0->unk_552 = 0x287EU;
                } else if ((((s32) gSaveContext.day % 5) == 3) && (temp_v0_2 = gSaveContext.weekEventReg[22], ((temp_v0_2 & 0x10) != 0)) && ((temp_v0_2 & 0x20) != 0)) {
                    if ((temp_v0_2 & 0x40) != 0) {
                        func_801518B0(arg1, 0x2883U, arg0);
                        arg0->unk_552 = 0x2883U;
                    } else {
                        func_801518B0(arg1, 0x2880U, arg0);
                        arg0->unk_552 = 0x2880U;
                    }
                } else {
                    func_801518B0(arg1, 0x287EU, arg0);
                    arg0->unk_552 = 0x287EU;
                }
            } else if ((gSaveContext.unk_3E00 == 0) && (gSaveContext.unk_3E04 == 0) && (temp_v0 != 0x2888)) {
                func_801518B0(arg1, 0x2886U, arg0);
                arg0->unk_552 = 0x2886U;
            } else {
                func_801518B0(arg1, 0x2889U, arg0);
                arg0->unk_552 = 0x2889U;
            }
            arg0->flags &= 0xFFFEFFFF;
            sp2C->unk_A6C = (s32) (sp2C->unk_A6C & ~0x20);
            arg0[4].unk_3A = 1;
        } else {
            func_801518B0(arg1, 0x283CU, arg0);
            arg0->unk_552 = 0x283CU;
        }
        func_809628BC(arg0);
    } else if (arg0[4].unk_3A == 2) {
        func_800B8614(arg0, arg1, 500.0f);
    } else {
        func_800B8614(arg0, arg1, 100.0f);
    }
    Math_SmoothStepToS(&arg0->shape.rot.y, (s16) (arg0->child->shape.rot.y - 0x4000), 0xA, 0xBB8, (s16) 0x64);
}

void func_80962588(Actor *arg0, GlobalContext *arg1) {
    if ((func_80147624(arg1) != 0) && (arg0->unk_552 == 0x2871)) {
        if (arg1->msgCtx.choiceIndex == 0) {
            if ((s32) gSaveContext.rupees >= 0xA) {
                func_8019F208();
                func_801159EC(-0xA);
                func_80963DE4(arg0, arg1);
                return;
            }
            play_sound(0x4806U);
            func_801518B0(arg1, 0x2873U, arg0);
            arg0->unk_552 = 0x2873U;
            return;
        }
        func_8019F230();
        func_801518B0(arg1, 0x2872U, arg0);
        arg0->unk_552 = 0x2872U;
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_80962660(Actor *arg0, GlobalContext *arg1) {
    void *sp1C;
    Actor *temp_a2;
    Actor *temp_a2_2;
    Actor *temp_a2_3;
    s16 temp_v0;
    u16 temp_t7;
    u8 temp_t4;

    arg0 = arg0;
    sp1C = arg1->actorCtx.actorList[2].first;
    if (func_80147624(arg1) != 0) {
        temp_t7 = arg0->unk_552;
        switch (temp_t7) {
        case 10300:
            func_80963F44(arg0, arg1);
            return;
        case 10301:
            func_809639D0(arg0, arg1);
            return;
        case 10302:
        case 10303:
        case 10305:
        case 10307:
        case 10309:
            func_80963F44(arg0, arg1);
            return;
        case 10310:
            temp_a2 = arg0;
            arg0 = arg0;
            func_801518B0(arg1, 0x2849U, temp_a2);
            arg0->unk_552 = 0x2849U;
            return;
        case 10311:
        case 10313:
        case 10315:
        case 10317:
        case 10319:
        case 10321:
        case 10323:
        case 10325:
        case 10327:
        case 10329:
        case 10331:
        case 10333:
        case 10335:
        case 10337:
        case 10339:
        case 10341:
        case 10343:
        case 10345:
        case 10347:
        case 10349:
        case 10351:
        case 10355:
        case 10357:
        case 10359:
        case 10361:
        case 10363:
            func_80963F44(arg0, arg1);
            return;
        case 10312:
        case 10314:
        case 10318:
        case 10320:
        case 10322:
        case 10326:
        case 10328:
        case 10330:
        case 10332:
        case 10334:
        case 10336:
        case 10338:
        case 10340:
        case 10342:
        case 10344:
        case 10346:
        case 10348:
        case 10350:
            temp_a2_2 = arg0;
            arg0 = arg0;
            func_801518B0(arg1, 0x2871U, temp_a2_2);
            arg0->unk_552 = 0x2871U;
            return;
        case 10358:
        case 10360:
        case 10362:
        case 10364:
            temp_a2_3 = arg0;
            arg0 = arg0;
            func_801518B0(arg1, 0x287DU, temp_a2_3);
            arg0->unk_552 = 0x287DU;
            return;
        case 10365:
            arg0 = arg0;
            temp_t4 = gSaveContext.weekEventReg[63] | 1;
            gSaveContext.weekEventReg[63] = temp_t4;
            gSaveContext.weekEventReg[63] = temp_t4 & 0xFD;
            func_801477B4(arg1);
            sp1C->unk_A6C = (s32) (sp1C->unk_A6C | 0x20);
            arg0->unk_53C = 0;
            func_800BDC5C((SkelAnime *) &arg0[1].focus.rot.z, (ActorAnimationEntry []) D_80964B30, 3);
            func_801A2BB8(0x25);
            temp_v0 = arg0[4].world.rot.y;
            if (temp_v0 == 0) {
                if (arg0[4].world.unk_12 == 1) {
                    arg0 = arg0;
                    func_80961EC8(arg1);
                }
                func_809629F8(arg0);
                return;
            }
            if (temp_v0 == 1) {
                if (arg0[4].world.unk_12 == 1) {
                    arg0 = arg0;
                    func_80961F00(arg1);
                }
                func_80962BA8(arg0);
                return;
            }
            if (temp_v0 == 2) {
                if (arg0[4].world.unk_12 == 1) {
                    arg0 = arg0;
                    func_80961EC8(arg1);
                }
                func_80962D48(arg0);
                return;
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return;
        case 10366:
        case 10368:
        case 10371:
            arg0 = arg0;
            func_801477B4(arg1);
            func_80963540(arg0);
            func_80963560(arg0, arg1);
            return;
        case 10374:
        case 10377:
            func_80963F44(arg0, arg1);
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return;
        }
    } else {
    default:
    }
}

void func_809628BC(Actor *arg0) {
    arg0->unk_1D4 = func_809628D0;
}

void func_809628D0(Actor *arg0, GlobalContext *arg1) {
    u8 sp27;
    u16 temp_t8;
    u32 temp_v0;
    u8 temp_t2;

    temp_v0 = func_80152498(arg1 + 0x4908);
    sp27 = (u8) temp_v0;
    switch (temp_v0) {                              /* switch 1 */
    case 4:                                         /* switch 1 */
        func_80962588(arg0, arg1);
        break;
    case 5:                                         /* switch 1 */
        func_80962660(arg0, arg1);
        break;
    case 6:                                         /* switch 1 */
        if (func_80147624(arg1) != 0) {
            temp_t8 = arg0->unk_552;
            arg0[4].unk_3A = 1;
            switch (temp_t8) {                      /* switch 2 */
            case 10367:                             /* switch 2 */
            case 10369:                             /* switch 2 */
            case 10370:                             /* switch 2 */
            case 10372:                             /* switch 2 */
            case 10375:                             /* switch 2 */
            case 10378:                             /* switch 2 */
                temp_t2 = gSaveContext.weekEventReg[63] & 0xFE;
                gSaveContext.weekEventReg[63] = temp_t2;
                gSaveContext.weekEventReg[63] = temp_t2 & 0xFD;
                func_809622FC((EnFu *) arg0);
                break;
            default:                                /* switch 2 */
                func_809622FC((EnFu *) arg0);
                break;
            }
        }
        break;
    }
    if (sp27 != 3) {
        func_80964190(arg0, arg1);
        func_8096426C(arg0, arg1);
    }
    func_8096413C(arg0, arg1);
}

void func_809629F8(Actor *arg0) {
    arg0[4].unk_3A = 0;
    arg0->unk_1D4 = func_80962A10;
}

void func_80962A10(EnFu *arg0, GlobalContext *arg1) {
    void *sp24;
    void *sp20;
    EnFu *temp_a0;
    EnFu *temp_a2;
    void *temp_v0;
    void *temp_v1;
    EnFu *phi_a2;
    EnFu *phi_a2_2;

    temp_v0 = arg0->actor.child;
    temp_v1 = arg1->actorCtx.actorList[2].first;
    arg0->unk_53C = 0;
    if (((s32) temp_v0->unk_168 < 0x12C) || (temp_v0->unk_164 < 40.0f) || ((s32) temp_v0->unk_16A < 0x258)) {
        sp20 = temp_v0;
        Math_SmoothStepToS(temp_v0 + 0x168, 0x12C, 0xA, 5, (s16) 5);
        Math_SmoothStepToS(temp_v0 + 0x16A, 0x258, 0x14, 0xA, (s16) 0xA);
        Math_SmoothStepToF(temp_v0 + 0x164, 40.0f, 0.1f, 1.0f, 1.0f);
        return;
    }
    sp24 = temp_v1;
    arg0 = arg0;
    play_sound(0x482CU);
    temp_v1->unk_A6C = (s32) (temp_v1->unk_A6C & ~0x20);
    func_8010E9F0(4, 0x3C);
    temp_a2 = arg0;
    temp_a0 = temp_a2;
    phi_a2 = temp_a2;
    if (temp_a2->unk_546 == 1) {
        arg0 = temp_a2;
        func_809616E0(temp_a0, arg1, temp_a2);
        phi_a2 = arg0;
    } else {
        temp_a2->unk_546 = 1;
    }
    phi_a2_2 = phi_a2;
    if ((gSaveContext.playerForm == 3) && (gSaveContext.magicAcquired != 0)) {
        arg0 = phi_a2;
        Parameter_AddMagic(arg1, (s16) (gSaveContext.unk_3F30 + (gSaveContext.doubleMagic * 0x30) + 0x30), phi_a2);
        phi_a2_2 = arg0;
    }
    func_80962F10(phi_a2_2);
}

void func_80962BA8(Actor *arg0) {
    arg0[4].unk_3A = 0;
    arg0->unk_2D4->unk_160 = 1;
    arg0->unk_1D4 = func_80962BCC;
}

void func_80962BCC(EnFu *arg0, GlobalContext *arg1) {
    void *sp2C;
    EnFu *temp_a0;
    EnFu *temp_a2;
    void *temp_s0;
    void *temp_v0;
    EnFu *phi_a2;

    temp_s0 = arg0->actor.child;
    temp_v0 = arg1->actorCtx.actorList[2].first;
    if (((s32) temp_s0->unk_168 < 0x64) || (temp_s0->unk_164 < 30.0f) || ((s32) temp_s0->unk_16A < 0x258)) {
        Math_SmoothStepToS(temp_s0 + 0x168, 0x64, 0xA, 5, (s16) 5);
        Math_SmoothStepToS(temp_s0 + 0x16A, 0x258, 0x14, 0xA, (s16) 0xA);
        Math_SmoothStepToF(temp_s0 + 0x160, 10.0f, 0.1f, 1.0f, 1.0f);
        Math_SmoothStepToF(temp_s0 + 0x164, 30.0f, 0.1f, 1.0f, 1.0f);
        return;
    }
    sp2C = temp_v0;
    arg0 = arg0;
    play_sound(0x482CU);
    temp_v0->unk_A6C = (s32) (temp_v0->unk_A6C & ~0x20);
    temp_v0[8].targetArrowOffset |= 0x400000;
    func_8010E9F0(4, 0x3C);
    temp_a2 = arg0;
    temp_a0 = temp_a2;
    phi_a2 = temp_a2;
    if (temp_a2->unk_546 == 1) {
        arg0 = temp_a2;
        func_809616E0(temp_a0, arg1, temp_a2);
        phi_a2 = arg0;
    } else {
        temp_a2->unk_546 = 1;
    }
    arg1->unk_1887E = 0x1E;
    func_80962F10(phi_a2);
}

void func_80962D48(Actor *arg0) {
    arg0[4].unk_3A = 0;
    arg0->unk_1D4 = func_80962D60;
}

void func_80962D60(EnFu *arg0, GlobalContext *arg1) {
    void *sp24;
    void *sp20;
    EnFu *temp_a0;
    EnFu *temp_a2;
    void *temp_v0;
    void *temp_v1;
    EnFu *phi_a2;

    temp_v1 = arg0->actor.child;
    temp_v0 = arg1->actorCtx.actorList[2].first;
    if (((s32) temp_v1->unk_168 < 0x64) || (temp_v1->unk_164 < 40.0f) || ((s32) temp_v1->unk_16A < 0x258)) {
        sp20 = temp_v1;
        Math_SmoothStepToS(temp_v1 + 0x168, 0x64, 0xA, 5, (s16) 5);
        Math_SmoothStepToS(temp_v1 + 0x16A, 0x258, 0x14, 0xA, (s16) 0xA);
        Math_SmoothStepToF(temp_v1 + 0x164, 40.0f, 0.1f, 1.0f, 1.0f);
        return;
    }
    sp24 = temp_v0;
    arg0 = arg0;
    play_sound(0x482CU);
    temp_v0->unk_A6C = (s32) (temp_v0->unk_A6C & ~0x20);
    temp_v0[8].targetArrowOffset |= 0x400000;
    func_8010E9F0(4, 0x3C);
    temp_a2 = arg0;
    temp_a0 = temp_a2;
    phi_a2 = temp_a2;
    if (temp_a2->unk_546 == 1) {
        arg0 = temp_a2;
        func_809616E0(temp_a0, arg1, temp_a2);
        phi_a2 = arg0;
    } else {
        temp_a2->unk_546 = 1;
    }
    arg1->unk_1887D = 0x1E;
    func_80962F10(phi_a2);
}

void func_80962EBC(Actor *arg0, GlobalContext *arg1) {
    s8 temp_a0;

    if (arg0[4].world.rot.y != 0) {
        temp_a0 = arg0->cutscene;
        if (temp_a0 != -1) {
            func_800DFB14(arg1->cameraPtrs[0], (u32) ActorCutscene_GetCutscene((s16) temp_a0)->unk4);
        }
    }
}

void func_80962F10(EnFu *arg0) {
    arg0->unk_548 = 0;
    arg0->actor.flags &= -2;
    gSaveContext.weekEventReg[8] |= 1;
    arg0->actionFunc = func_80962F4C;
}

void func_80962F4C(Actor *arg0, GlobalContext *arg1) {
    void *sp3C;
    u32 sp2C;
    s32 sp28;
    Actor *temp_t0;
    s16 temp_v0;
    s32 temp_t6;
    u32 temp_t7;
    void *temp_v1;

    temp_v0 = arg0[4].world.rot.y;
    temp_t0 = arg0->child;
    temp_v1 = arg1->actorCtx.actorList[2].first;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {

            } else {
                arg1->unk_1887D = 0x1E;
            }
        } else {
            arg1->unk_1887E = 0x1E;
        }
    } else if (gSaveContext.playerForm == 4) {
        temp_v1[8].targetArrowOffset |= 0x400;
    }
    temp_t6 = gSaveContext.unk_3DE0[4];
    temp_t7 = *(&gSaveContext + 0x3E04);
    sp28 = temp_t6;
    sp2C = temp_t7;
    if ((temp_t6 == 0) && (temp_t7 < 0x7D0U)) {
        sp3C = temp_v1;
        Math_SmoothStepToS(temp_t0 + 0x168, (s16) (*(&D_80964B00 + (arg0[4].world.rot.y * 4)) + 0xC8), 0xA, 5, (s16) 5);
    } else if ((sp28 == 0) && (sp2C < 0xFA0U)) {
        sp3C = temp_v1;
        Math_SmoothStepToS(temp_t0 + 0x168, (s16) (*(&D_80964B00 + (arg0[4].world.rot.y * 4)) + 0x64), 0xA, 5, (s16) 5);
    }
    sp3C = arg1->actorCtx.actorList[2].first;
    if (func_80961D10(arg0) != 0) {
        sp3C = arg1->actorCtx.actorList[2].first;
        func_801518B0(arg1, 0x288BU, arg0);
    }
    sp3C = arg1->actorCtx.actorList[2].first;
    if (((func_800CAF94((DynaPolyActor *) arg0->child) == 0) && ((arg1->actorCtx.actorList[2].first->bgCheckFlags & 1) != 0)) || ((gSaveContext.unk_3DE0[4] == 0) && (*(&gSaveContext + 0x3E04) == 0)) || (arg0->unk_54C == arg0->unk_548)) {
        arg1->actorCtx.actorList[2].first[8].targetArrowOffset &= 0xFFBFFFFF;
        sp3C = arg1->actorCtx.actorList[2].first;
        func_80961E88(arg1);
        arg1->actorCtx.actorList[2].first->unk_A6C = (s32) (arg1->actorCtx.actorList[2].first->unk_A6C | 0x20);
        if ((s32) arg0->unk_548 < (s32) arg0->unk_54C) {
            if ((gSaveContext.unk_3DE0[4] == 0) && (*(&gSaveContext + 0x3E04) == 0)) {
                func_801518B0(arg1, 0x2885U, arg0);
                arg0->unk_552 = 0x2885;
            } else {
                func_801518B0(arg1, 0x2888U, arg0);
                arg0->unk_552 = 0x2888;
            }
            func_801A2C20();
            gSaveContext.unk_3DE0[4] = 0;
            *(&gSaveContext + 0x3E04) = 0;
            gSaveContext.unk_3DD0[4] = 5;
            arg0->unk_548 = 0;
            func_809632D0(arg0);
        } else {
            arg0->unk_548 = 0;
            func_801A2C20();
            gSaveContext.unk_3DE0[4] = 0;
            *(&gSaveContext + 0x3E04) = 0;
            gSaveContext.unk_3DD0[4] = 5;
            func_801A3098(0x922U);
            func_8011B4E0(arg1, 1);
            arg0[4].unk_3A = 3;
            func_809632D0(arg0);
        }
    }
    func_80962EBC(arg0, arg1);
}

void func_80963258(Actor *arg0) {
    arg0->unk_1D4 = func_8096326C;
}

void func_8096326C(EnFu *arg0, GlobalContext *arg1) {
    func_80963FF8(arg0, arg1);
    if (func_80963810(arg1, subroutine_arg1, arg0->actor.world.pos.y, arg0->actor.world.pos.z) != 0) {
        func_809622FC(arg0);
    }
}

void func_809632D0(Actor *arg0) {
    void *temp_v1;

    if (gSaveContext.playerForm == 3) {
        arg0 = arg0;
        Interface_ChangeAlpha(0x32U);
    }
    gSaveContext.weekEventReg[8] &= 0xFE;
    temp_v1 = arg0->unk_2D4;
    if (temp_v1 != 0) {
        temp_v1->unk_160 = 0;
    }
    arg0->unk_1D4 = func_80963350;
    arg0->flags |= 1;
}

void func_80963350(Actor *arg0, GlobalContext *arg1) {
    MessageContext *sp28;
    MessageContext *temp_a0;
    void *temp_s0;

    temp_a0 = arg1 + 0x4908;
    temp_s0 = arg0->child;
    if ((arg0[4].unk_3A == 0) && (((sp28 = temp_a0, (func_80152498(temp_a0) == 5)) && (func_80147624(arg1) != 0)) || ((func_80152498(sp28) == 2) && ((u8) arg1->msgCtx.unk12023 == 1)))) {
        func_801477B4(arg1);
        arg0[4].unk_3A = 2;
        D_80964C24 = 1;
    }
    if ((arg0[4].unk_3A == 3) && (arg1->interfaceCtx.unk_286 == 0)) {
        arg0[4].unk_3A = 2;
        D_80964C24 = 1;
    }
    if ((temp_s0->unk_168 != 0) || (temp_s0->unk_16A != 0) || (temp_s0->unk_164 > 0.0f) || (func_809638F8(arg1) == 0)) {
        Math_SmoothStepToS(temp_s0 + 0x168, 0, 0xA, 0xA, (s16) 5);
        Math_SmoothStepToS(temp_s0 + 0x16A, 0, 0xA, 0xF, (s16) 5);
        Math_SmoothStepToF(temp_s0 + 0x164, 0.0f, 0.1f, 1.0f, 1.0f);
        Math_SmoothStepToF(temp_s0 + 0x160, 0.0f, 0.1f, 1.0f, 1.0f);
        func_80962EBC(arg0, arg1);
        return;
    }
    if (D_80964C24 == 1) {
        D_80964C24 = 0;
        temp_s0->unk_16C = 0;
        func_80963F88(arg0, arg1);
        arg1->actorCtx.unk268 = 1;
        func_80963258(arg0);
    }
}

void func_80963540(Actor *arg0) {
    arg0->child->unk_118 = 0xA;
    arg0->unk_1D4 = func_80963560;
}

void func_80963560(Actor *arg0, GlobalContext *arg1) {
    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->parent = NULL;
        func_80963610(arg0, arg1);
    } else if ((arg0->unk_552 == 0x2880) && ((gSaveContext.weekEventReg[22] & 0x80) == 0)) {
        func_800B8A1C(arg0, arg1, 0xC, 500.0f, 100.0f);
    } else {
        func_800B8A1C(arg0, arg1, 5, 500.0f, 100.0f);
    }
    arg0->child->freezeTimer = 0xA;
}

void func_80963610(Actor *arg0) {
    arg0->child->unk_118 = 0xA;
    arg0->unk_1D4 = func_80963630;
}

void func_80963630(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    s32 temp_hi;
    u8 temp_v0;

    sp24 = arg1->actorCtx.actorList[2].first;
    if (func_800B84D0(arg0, arg1) != 0) {
        temp_v0 = gSaveContext.weekEventReg[22];
        if (((temp_v0 & 0x10) != 0) && ((temp_v0 & 0x20) != 0) && (((s32) gSaveContext.day % 5) == 3) && (gSaveContext.playerForm == 4)) {
            if ((temp_v0 & 0x40) != 0) {
                func_801518B0(arg1, 0x2884U, arg0);
                arg0->unk_552 = 0x2884;
            } else if ((temp_v0 & 0x80) == 0) {
                gSaveContext.weekEventReg[22] = temp_v0 | 0x80;
                func_801518B0(arg1, 0x2882U, arg0);
                arg0->unk_552 = 0x2882;
            } else {
                func_801518B0(arg1, 0x2881U, arg0);
                arg0->unk_552 = 0x2881;
            }
        } else {
            func_801518B0(arg1, 0x287FU, arg0);
            arg0->unk_552 = 0x287F;
        }
        arg0->flags &= 0xFFFEFFFF;
        arg0->child->freezeTimer = 0;
        func_809628BC(arg0);
        if (gSaveContext.playerForm == 4) {
            temp_hi = (s32) gSaveContext.day % 5;
            if (temp_hi != 1) {
                if (temp_hi != 2) {
                    if (temp_hi != 3) {

                    } else {
                        gSaveContext.weekEventReg[22] |= 0x40;
                    }
                } else {
                    gSaveContext.weekEventReg[22] |= 0x20;
                }
            } else {
                gSaveContext.weekEventReg[22] |= 0x10;
            }
        }
        sp24->unk_A6C = (s32) (sp24->unk_A6C & ~0x20);
        return;
    }
    arg0->child->freezeTimer = 0xA;
    func_800B85E0(arg0, arg1, 500.0f, -1);
}

s32 func_80963810(GlobalContext *arg0, s32 arg1, f32 arg2, f32 arg3) {
    f32 sp28;
    s16 sp22;
    Vec3f *sp1C;
    Vec3f *temp_a0;
    f32 temp_f0;
    f32 phi_f0;
    s32 phi_v0;

    temp_a0 = arg0->actorCtx.actorList[2].first + 0x24;
    sp1C = temp_a0;
    sp22 = Math_Vec3f_Yaw(temp_a0, (Vec3f *) &arg1);
    temp_f0 = Math_Vec3f_DistXZ(temp_a0, (Vec3f *) &arg1);
    if (temp_f0 < 80.0f) {
        phi_f0 = 10.0f;
    } else if (temp_f0 < 90.0f) {
        phi_f0 = 40.0f;
    } else {
        phi_f0 = 80.0f;
    }
    arg0->actorCtx.unk268 = 1;
    sp28 = temp_f0;
    func_800B6F20(arg0, (s32) (arg0 + 0x1F0C), phi_f0, sp22);
    phi_v0 = 0;
    if (temp_f0 < 80.0f) {
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 func_809638F8(GlobalContext *arg0) {
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_a0_5;
    s16 temp_a1;
    s32 phi_v1;

    temp_a1 = arg0->envCtx.unk_8C.diffuseColor1[0];
    phi_v1 = 1;
    if ((s32) temp_a1 >= 0x1A) {
        arg0->envCtx.unk_8C.diffuseColor1[0] = temp_a1 - 0x19;
        phi_v1 = 0;
    } else {
        arg0->envCtx.unk_8C.diffuseColor1[0] = 0;
    }
    temp_a0 = arg0->envCtx.unk_8C.diffuseColor1[1];
    if ((s32) temp_a0 >= 0x1A) {
        arg0->envCtx.unk_8C.diffuseColor1[1] = temp_a0 - 0x19;
        phi_v1 = 0;
    } else {
        arg0->envCtx.unk_8C.diffuseColor1[1] = 0;
    }
    temp_a0_2 = arg0->envCtx.unk_8C.diffuseColor1[2];
    if ((s32) temp_a0_2 >= 0x1A) {
        arg0->envCtx.unk_8C.diffuseColor1[2] = temp_a0_2 - 0x19;
        phi_v1 = 0;
    } else {
        arg0->envCtx.unk_8C.diffuseColor1[2] = 0;
    }
    temp_a0_3 = arg0->envCtx.unk_8C.ambientColor[0];
    if ((s32) temp_a0_3 >= 0x1A) {
        arg0->envCtx.unk_8C.ambientColor[0] = temp_a0_3 - 0x19;
        phi_v1 = 0;
    } else {
        arg0->envCtx.unk_8C.ambientColor[0] = 0;
    }
    temp_a0_4 = arg0->envCtx.unk_8C.ambientColor[1];
    if ((s32) temp_a0_4 >= 0x1A) {
        arg0->envCtx.unk_8C.ambientColor[1] = temp_a0_4 - 0x19;
        phi_v1 = 0;
    } else {
        arg0->envCtx.unk_8C.ambientColor[1] = 0;
    }
    temp_a0_5 = arg0->envCtx.unk_8C.ambientColor[2];
    if ((s32) temp_a0_5 >= 0x1A) {
        arg0->envCtx.unk_8C.ambientColor[2] = temp_a0_5 - 0x19;
        phi_v1 = 0;
    } else {
        arg0->envCtx.unk_8C.ambientColor[2] = 0;
    }
    return phi_v1;
}

void func_809639D0(Actor *arg0, GlobalContext *arg1) {
    s32 temp_hi;
    s32 temp_v1;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;

    temp_hi = (s32) gSaveContext.day % 5;
    if (temp_hi != 1) {
        if (temp_hi != 2) {
            if (temp_hi != 3) {
                return;
            }
            temp_v0 = gSaveContext.playerForm;
            if (temp_v0 != 4) {
                if (temp_v0 == 3) {
                    func_80963EAC(arg0, arg1, arg1);
                    return;
                }
                func_801518B0(arg1, 0x2841U, arg0);
                arg0->unk_552 = 0x2841;
                return;
            }
            if (((u32) (gSaveContext.inventory.upgrades & *gUpgradeMasks) >> *gUpgradeShifts) == 0) {
                func_801518B0(arg1, 0x284BU, arg0);
                arg0->unk_552 = 0x284B;
                return;
            }
            temp_v0_2 = gSaveContext.weekEventReg[22];
            temp_v1 = temp_v0_2 & 0x10;
            if ((temp_v0_2 & 0x40) != 0) {
                if (((temp_v0_2 & 0x10) != 0) && ((temp_v0_2 & 0x20) != 0)) {
                    func_801518B0(arg1, 0x285FU, arg0);
                    arg0->unk_552 = 0x285F;
                    return;
                }
                func_801518B0(arg1, 0x2861U, arg0);
                arg0->unk_552 = 0x2861;
                return;
            }
            if ((temp_v1 != 0) && ((temp_v0_2 & 0x20) != 0)) {
                if (arg0->unk_53E == 1) {
                    func_801518B0(arg1, 0x2863U, arg0);
                    arg0->unk_552 = 0x2863;
                    return;
                }
                arg0->unk_53E = 1;
                func_801518B0(arg1, 0x2865U, arg0);
                arg0->unk_552 = 0x2865;
                return;
            }
            if ((temp_v1 != 0) || ((temp_v0_2 & 0x20) != 0)) {
                if (arg0->unk_53E == 1) {
                    func_801518B0(arg1, 0x2867U, arg0);
                    arg0->unk_552 = 0x2867;
                    return;
                }
                arg0->unk_53E = 1;
                func_801518B0(arg1, 0x2869U, arg0);
                arg0->unk_552 = 0x2869;
                return;
            }
            if (arg0->unk_53E == 1) {
                func_801518B0(arg1, 0x286BU, arg0);
                arg0->unk_552 = 0x286B;
                return;
            }
            arg0->unk_53E = 1;
            func_801518B0(arg1, 0x286DU, arg0);
            arg0->unk_552 = 0x286D;
            return;
        }
        if (gSaveContext.playerForm != 4) {
            func_801518B0(arg1, 0x286FU, arg0);
            arg0->unk_552 = 0x286F;
            return;
        }
        if (((u32) (gSaveContext.inventory.upgrades & gUpgradeMasks[1]) >> gUpgradeShifts[1]) == 0) {
            func_801518B0(arg1, 0x2853U, arg0);
            arg0->unk_552 = 0x2853;
            return;
        }
        temp_v0_3 = gSaveContext.weekEventReg[22];
        if ((temp_v0_3 & 0x10) == 0) {
            if (arg0->unk_53E == 1) {
                func_801518B0(arg1, 0x285BU, arg0);
                arg0->unk_552 = 0x285B;
                return;
            }
            arg0->unk_53E = 1;
            func_801518B0(arg1, 0x285DU, arg0);
            arg0->unk_552 = 0x285D;
            return;
        }
        if ((temp_v0_3 & 0x20) != 0) {
            func_801518B0(arg1, 0x2855U, arg0);
            arg0->unk_552 = 0x2855;
            return;
        }
        if (arg0->unk_53E == 1) {
            func_801518B0(arg1, 0x2857U, arg0);
            arg0->unk_552 = 0x2857;
            return;
        }
        arg0->unk_53E = 1;
        func_801518B0(arg1, 0x2859U, arg0);
        arg0->unk_552 = 0x2859;
        return;
    }
    if (gSaveContext.playerForm == 4) {
        if (((u32) (gSaveContext.inventory.upgrades & gUpgradeMasks[1]) >> gUpgradeShifts[1]) == 0) {
            func_801518B0(arg1, 0x2853U, arg0);
            arg0->unk_552 = 0x2853;
            return;
        }
        if ((gSaveContext.weekEventReg[22] & 0x10) != 0) {
            func_801518B0(arg1, 0x284DU, arg0);
            arg0->unk_552 = 0x284D;
            return;
        }
        if (arg0->unk_53E == 1) {
            func_801518B0(arg1, 0x284FU, arg0);
            arg0->unk_552 = 0x284F;
            return;
        }
        arg0->unk_53E = 1;
        func_801518B0(arg1, 0x2851U, arg0);
        arg0->unk_552 = 0x2851;
        return;
    }
    func_801518B0(arg1, 0x286FU, arg0);
    arg0->unk_552 = 0x286F;
}

void func_80963DE4(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0[4].world.rot.y;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                return;
            }
            func_801518B0(arg1, 0x287BU, arg0);
            arg0->unk_552 = 0x287B;
            return;
        }
        func_801518B0(arg1, 0x2879U, arg0);
        arg0->unk_552 = 0x2879;
        return;
    }
    if (gSaveContext.playerForm != 4) {
        func_801518B0(arg1, 0x2875U, arg0);
        arg0->unk_552 = 0x2875;
        return;
    }
    func_801518B0(arg1, 0x2877U, arg0);
    arg0->unk_552 = 0x2877;
}

void func_80963EAC(Actor *arg0, GlobalContext *arg1) {
    if (gSaveContext.magicAcquired != 0) {
        if (arg0[4].world.rot.x == 1) {
            func_801518B0(arg1, 0x2847U, arg0);
            arg0->unk_552 = 0x2847;
            return;
        }
        arg0[4].world.rot.x = 1;
        func_801518B0(arg1, 0x2845U, arg0);
        arg0->unk_552 = 0x2845;
        return;
    }
    func_801518B0(arg1, 0x2843U, arg0);
    arg0->unk_552 = 0x2843;
}

void func_80963F44(Actor *arg0, GlobalContext *arg1) {
    u16 sp1E;
    Actor *temp_a2;
    u16 temp_a1;
    u16 temp_a1_2;

    temp_a2 = arg0;
    temp_a1 = temp_a2->unk_552;
    arg0 = temp_a2;
    temp_a1_2 = (temp_a1 + 1) & 0xFFFF;
    sp1E = temp_a1_2;
    func_801518B0(arg1, temp_a1_2, temp_a2);
    arg0->unk_552 = temp_a1_2;
}

void func_80963F88(Actor *arg0, GlobalContext *arg1) {
    Camera *temp_a0;
    s16 temp_v0;

    temp_v0 = arg0[4].world.rot.y;
    if (temp_v0 == 1) {
        temp_a0 = arg1->cameraPtrs[0];
        arg1 = arg1;
        func_800DFAC8(temp_a0, 0x4B);
        arg1->unk_1887E = 0;
        return;
    }
    if (temp_v0 == 2) {
        arg1->unk_1887D = 0;
        func_800DFAC8(arg1->cameraPtrs[0], 0x4B);
    }
}

void func_80963FF8(EnFu *arg0, GlobalContext *arg1) {
    if (arg1->actorCtx.actorList[2].first->unk_A6C & 0x100000) {
        arg1->actorCtx.unk268 = 1;
        arg1->actorCtx.unk278 = 0x8000;
        return;
    }
    arg1->actorCtx.unk268 = 1;
}

void func_80964034(EnFu *arg0, GlobalContext *arg1) {
    f32 sp30;
    ? sp2C;
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk_54E;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_54E = temp_v0 - 1;
        phi_v1 = arg0->unk_54E;
    }
    if (phi_v1 == 0) {
        arg0->unk_54E = 0xC;
        sp2C.unk_0 = (s32) arg0->actor.world.pos.x;
        sp2C.unk_4 = (s32) arg0->actor.world.pos.y;
        sp2C.unk_8 = (s32) arg0->actor.world.pos.z;
        sp30 += 62.0f;
        func_80964694(arg0, arg0 + 0x2D8, &sp2C, 0xA);
    }
    func_809647EC(arg1, arg0 + 0x2D8, 0xA);
}

void func_809640D8(EnFu *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    temp_v0 = arg0->actionFunc;
    if ((func_80962A10 == temp_v0) || (func_80962BCC == temp_v0) || (func_80962D60 == temp_v0) || (func_80962F4C == temp_v0) || (func_80963350 == temp_v0)) {
        arg0->actor.shape.rot.y += 0x400;
        arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    }
}

void func_8096413C(Actor *arg0, GlobalContext *arg1) {
    Math_SmoothStepToS(arg0 + 0xBE, (s16) (arg0->yawTowardsPlayer - 0x4000), 5, 0x3E8, (s16) 0x64);
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_80964190(Actor *arg0, GlobalContext *arg1) {
    u16 temp_t6;

    arg0 = arg0;
    if (func_80147624(arg1) != 0) {
        temp_t6 = arg0->unk_552;
        switch (temp_t6) {
        case 10306:
        case 10308:
        case 10312:
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80964B30, 1);
            return;
        case 10304:
        case 10305:
        case 10307:
        case 10311:
        case 10313:
        case 10315:
        case 10317:
        case 10319:
        case 10321:
        case 10323:
        case 10325:
        case 10327:
        case 10329:
        case 10331:
        case 10333:
        case 10337:
        case 10339:
        case 10341:
        case 10343:
        case 10345:
        case 10347:
        case 10349:
        case 10353:
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80964B30, 4);
            return;
        case 10336:
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80964B30, 5);
            return;
        case 10335:
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80964B30, 6);
            return;
        case 10366:
        case 10368:
        case 10371:
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80964B30, 2);
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return;
        }
    } else {
    default:
    }
}

void func_8096426C(Actor *arg0, GlobalContext *arg1) {
    u16 temp_t6;

    arg0 = arg0;
    if (func_80147624(arg1) != 0) {
        temp_t6 = arg0->unk_552;
        switch (temp_t6) {
        case 10304:
        case 10305:
        case 10307:
        case 10311:
        case 10313:
        case 10317:
        case 10319:
        case 10321:
        case 10323:
        case 10325:
        case 10327:
        case 10329:
        case 10331:
        case 10333:
        case 10337:
        case 10339:
        case 10341:
        case 10343:
        case 10345:
        case 10347:
        case 10349:
        case 10353:
        case 10357:
        case 10359:
        case 10361:
        case 10363:
        case 10365:
            arg0->unk_53C = 1;
            return;
        case 10312:
        case 10314:
        case 10318:
        case 10320:
        case 10322:
        case 10326:
        case 10328:
        case 10330:
        case 10332:
        case 10334:
        case 10336:
        case 10338:
        case 10340:
        case 10342:
        case 10344:
        case 10346:
        case 10348:
        case 10350:
            arg0->unk_53C = 2;
            return;
        default:
            arg0->unk_53C = 0;
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return;
        }
    }
}

void func_809642E0(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a1;

    temp_a1 = arg0 + 0x144;
    sp1C = temp_a1;
    Collider_UpdateCylinder(arg0, temp_a1);
    if (arg0[4].world.rot.y == 0) {
        CollisionCheck_SetAC(arg1, arg1 + 0x18884, (Collider *) sp1C);
    }
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, (Collider *) sp1C);
}

void EnFu_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnFu *this = (EnFu *) thisx;
    this->actionFunc(this, globalCtx);
    func_809642E0((Actor *) this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    func_8096209C(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    func_80961D7C(globalCtx);
    func_809640D8(this, globalCtx);
    func_80964034(this, globalCtx);
}

s32 func_809643FC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 9) {
        SysMatrix_InsertTranslation(1600.0f, 300.0f, 0.0f, 1);
        SysMatrix_InsertXRotation_s(arg5[219].z, 1);
        SysMatrix_InsertZRotation_s(arg5[219].y, 1);
        Matrix_RotateY(arg5[220].x, 1U);
        SysMatrix_InsertTranslation(-1600.0f, -300.0f, 0.0f, 1);
    } else if (arg1 == 0x14) {
        SysMatrix_InsertTranslation(1800.0f, 200.0f, 0.0f, 1);
        SysMatrix_InsertXRotation_s(arg5[220].z, 1);
        SysMatrix_InsertZRotation_s(arg5[220].y, 1);
        Matrix_RotateY(arg5[221].x, 1U);
        SysMatrix_InsertTranslation(-1800.0f, -200.0f, 0.0f, 1);
    }
    return 0;
}

void func_8096450C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 9) {
        SysMatrix_MultiplyVector3fByState(&D_80964C28, arg4 + 0x508);
        return;
    }
    if (arg1 == 0x14) {
        SysMatrix_MultiplyVector3fByState(&D_80964C34, arg4 + 0x514);
    }
}

void EnFu_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp44;
    Gfx *sp38;
    Gfx *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    EnFu *this = (EnFu *) thisx;

    SysMatrix_StatePush();
    func_80964950(globalCtx, &this->unk_2D8, 0xA);
    SysMatrix_StatePop();
    temp_a0 = globalCtx->state.gfxCtx;
    sp44 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp44->polyOpa.p;
    sp44->polyOpa.p = &temp_v0[1];
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0_2 = sp44->polyOpa.p;
    sp44->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDB060020;
    sp44 = sp44;
    sp38 = temp_v0_2;
    sp38->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, 0, 0x32, 0xA0, 0);
    temp_v0_3 = sp44->polyOpa.p;
    sp44->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDB060024;
    sp34 = temp_v0_3;
    sp34->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, 0xFF, 0xFF, 0xFF, 0);
    SkelAnime_DrawSV(globalCtx, this->unk_190.skeleton, this->unk_190.limbDrawTbl, (s32) this->unk_190.dListCount, func_809643FC, func_8096450C, (Actor *) this);
}

void func_80964694(EnFu *arg0, void *arg1, ? *arg2, s32 arg3) {
    ? sp2C;
    ? sp20;
    f32 temp_f8;
    s32 temp_v0;
    void *temp_a1;
    s32 phi_v0;
    void *phi_a1;
    s32 phi_v0_2;
    void *phi_a1_2;

    sp2C.unk_0 = (s32) D_80964C40.unk_0;
    sp2C.unk_4 = (s32) D_80964C40.unk_4;
    sp2C.unk_8 = (s32) D_80964C40.unk_8;
    sp20.unk_0 = (s32) D_80964C4C.unk_0;
    sp20.unk_4 = (s32) D_80964C4C.unk_4;
    sp20.unk_8 = (s32) D_80964C4C.unk_8;
    phi_v0 = 0;
    phi_a1 = arg1;
    phi_v0_2 = 0;
    phi_a1_2 = arg1;
    if ((arg3 > 0) && (arg1->unk_36 != 0)) {
loop_2:
        temp_v0 = phi_v0 + 1;
        temp_a1 = phi_a1 + 0x38;
        phi_v0 = temp_v0;
        phi_a1 = temp_a1;
        phi_v0_2 = temp_v0;
        phi_a1_2 = temp_a1;
        if (temp_v0 < arg3) {
            if (temp_a1->unk_36 != 0) {
                goto loop_2;
            }
        }
    }
    if (phi_v0_2 < arg3) {
        phi_a1_2->unk_36 = 1;
        phi_a1_2->unk_8 = (s32) arg2->unk_0;
        phi_a1_2->unk_C = (s32) arg2->unk_4;
        phi_a1_2->unk_10 = (s32) arg2->unk_8;
        phi_a1_2->unk_20 = (s32) sp2C.unk_0;
        phi_a1_2->unk_24 = (s32) sp2C.unk_4;
        phi_a1_2->unk_28 = (s32) sp2C.unk_8;
        phi_a1_2->unk_14 = (s32) sp20.unk_0;
        phi_a1_2->unk_18 = (s32) sp20.unk_4;
        phi_a1_2->unk_1C = (s32) sp20.unk_8;
        phi_a1_2->unk_0 = 0.01f;
        arg1 = phi_a1_2;
        arg1->unk_8 = (f32) (arg1->unk_8 + (4.0f * Math_SinS(arg0->actor.shape.rot.y)));
        temp_f8 = 4.0f * Math_CosS(arg0->actor.shape.rot.y);
        arg1->unk_37 = 0x10;
        arg1->unk_10 = (f32) (arg1->unk_10 + temp_f8);
    }
}

void func_809647EC(GlobalContext *arg0, void *arg1, s32 arg2) {
    ? sp44;
    s16 temp_s2;
    s32 temp_s1;
    u8 temp_t3;
    u8 temp_v0;
    void *phi_s0;
    s32 phi_v1;
    s32 phi_s1;

    sp44.unk_0 = (s32) D_80964C58.unk_0;
    sp44.unk_4 = (s32) D_80964C58.unk_4;
    sp44.unk_8 = (s32) D_80964C58.unk_8;
    temp_s2 = func_800DFC68((arg0 + (arg0->activeCamera * 4))->unk_800);
    phi_s0 = arg1;
    phi_s1 = 0;
    if (arg2 > 0) {
        do {
            if (phi_s0->unk_36 == 1U) {
                temp_v0 = phi_s0->unk_37;
                temp_t3 = temp_v0 - 1;
                if (temp_v0 == 0) {
                    phi_v1 = 0;
                } else {
                    phi_s0->unk_37 = temp_t3;
                    phi_v1 = temp_t3 & 0xFF;
                }
                if (phi_v1 == 0) {
                    phi_s0->unk_36 = 0U;
                }
                phi_s0->unk_C = (f32) (phi_s0->unk_C + phi_s0->unk_24);
                phi_s0->unk_8 = (f32) (phi_s0->unk_8 + (2.0f * Math_SinS(phi_s0->unk_2C)));
                phi_s0->unk_10 = (f32) (phi_s0->unk_10 + (2.0f * Math_CosS(phi_s0->unk_2C)));
                SysMatrix_StatePush();
                SysMatrix_InsertTranslation(phi_s0->unk_8, phi_s0->unk_C, phi_s0->unk_10, 0);
                Matrix_RotateY(temp_s2, 1U);
                SysMatrix_MultiplyVector3fByState((Vec3f *) &sp44, phi_s0 + 8);
                SysMatrix_StatePop();
                phi_s0->unk_2C = (s16) (phi_s0->unk_2C + 0x1770);
            }
            temp_s1 = phi_s1 + 1;
            phi_s0 += 0x38;
            phi_s1 = temp_s1;
        } while (temp_s1 != arg2);
    }
}

void func_80964950(GlobalContext *arg0, ? *arg1, s32 arg2) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s1;
    MtxF *temp_s0;
    f32 temp_f12;
    s32 temp_s3;
    ? *phi_s2;
    s32 phi_s7;
    s32 phi_s3;

    temp_s1 = arg0->state.gfxCtx;
    temp_v0 = func_801660B8(arg0, temp_s1->polyOpa.p);
    temp_s1->polyOpa.p = temp_v0;
    temp_s1->polyOpa.p = func_8012C724(temp_v0);
    phi_s2 = arg1;
    phi_s7 = 0;
    phi_s3 = 0;
    if (arg2 > 0) {
        do {
            temp_s0 = &arg0->mf_187FC;
            if (phi_s2->unk_36 == 1) {
                if (phi_s7 == 0) {
                    temp_v0_2 = temp_s1->polyOpa.p;
                    temp_s1->polyOpa.p = &temp_v0_2[1];
                    temp_v0_2->words.w1 = (u32) &D_0600B0A0;
                    temp_v0_2->words.w0 = 0xDE000000;
                    phi_s7 = 1;
                }
                SysMatrix_InsertTranslation(phi_s2->unk_8, phi_s2->unk_C, phi_s2->unk_10, 0);
                SysMatrix_NormalizeXYZ(temp_s0);
                temp_f12 = phi_s2->unk_0;
                Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
                temp_v0_3 = temp_s1->polyOpa.p;
                temp_s1->polyOpa.p = &temp_v0_3[1];
                temp_v0_3->words.w0 = 0xDB060020;
                temp_v0_3->words.w1 = Lib_SegmentedToVirtual((void *) &D_0405E6F0);
                temp_v0_4 = temp_s1->polyOpa.p;
                temp_s1->polyOpa.p = &temp_v0_4[1];
                temp_v0_4->words.w0 = 0xDA380003;
                temp_v0_4->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
                temp_v0_5 = temp_s1->polyOpa.p;
                temp_s1->polyOpa.p = &temp_v0_5[1];
                temp_v0_5->words.w1 = (u32) &D_0600B0E0;
                temp_v0_5->words.w0 = 0xDE000000;
            }
            temp_s3 = phi_s3 + 1;
            phi_s2 += 0x38;
            phi_s3 = temp_s3;
        } while (temp_s3 != arg2);
    }
}
