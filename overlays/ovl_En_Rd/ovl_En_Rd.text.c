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
    /* 0x022 */ char pad_22[0x1];
    /* 0x023 */ u8 unk_23;                          /* inferred */
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

typedef struct EnRd {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*actionFunc)(EnRd *, GlobalContext *);
    /* 0x18C */ void (*unk_18C)(EnRd *);            /* inferred */
    /* 0x190 */ ColliderCylinder unk_190;           /* inferred */
    /* 0x1DC */ Vec3f unk_1DC;                      /* inferred */
    /* 0x1E8 */ char pad_1E8[0xA8];                 /* maybe part of unk_1DC[15]? */
    /* 0x290 */ s32 unk_290;                        /* inferred */
    /* 0x294 */ f32 unk_294;                        /* inferred */
    /* 0x298 */ f32 unk_298;                        /* inferred */
    /* 0x29C */ Vec3s unk_29C;                      /* inferred */
    /* 0x2A2 */ char pad_2A2[0x96];                 /* maybe part of unk_29C[26]? */
    /* 0x338 */ Vec3s unk_338;                      /* inferred */
    /* 0x33E */ char pad_33E[0x96];                 /* maybe part of unk_338[26]? */
    /* 0x3D4 */ s16 unk_3D4;                        /* inferred */
    /* 0x3D6 */ s16 unk_3D6;                        /* inferred */
    /* 0x3D8 */ s16 unk_3D8;                        /* inferred */
    /* 0x3DA */ s16 unk_3DA;                        /* inferred */
    /* 0x3DC */ s16 unk_3DC;                        /* inferred */
    /* 0x3DE */ s16 unk_3DE;                        /* inferred */
    /* 0x3E0 */ s16 unk_3E0;                        /* inferred */
    /* 0x3E2 */ char pad_3E2[0x2];
    /* 0x3E4 */ s16 unk_3E4;                        /* inferred */
    /* 0x3E6 */ s16 unk_3E6;                        /* inferred */
    /* 0x3E8 */ u8 unk_3E8;                         /* inferred */
    /* 0x3E9 */ u8 unk_3E9;                         /* inferred */
    /* 0x3EA */ u8 unk_3EA;                         /* inferred */
    /* 0x3EB */ u8 unk_3EB;                         /* inferred */
    /* 0x3EC */ u8 unk_3EC;                         /* inferred */
    /* 0x3ED */ u8 unk_3ED;                         /* inferred */
    /* 0x3EE */ u8 unk_3EE;                         /* inferred */
    /* 0x3EF */ u8 unk_3EF;                         /* inferred */
    /* 0x3F0 */ u8 unk_3F0;                         /* inferred */
    /* 0x3F1 */ s8 unk_3F1;                         /* inferred */
    /* 0x3F2 */ char pad_3F2[0x2];                  /* maybe part of unk_3F1[3]? */
} EnRd;                                             /* size = 0x3F4 */

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ Vec3s rot;
    /* 0x12 */ s16 unk_12;                          /* inferred */
} PosRot;                                           /* size = 0x14 */

struct _mips2c_stack_EnRd_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnRd_Draw {
    /* 0x00 */ char pad_0[0x54];
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad_54[0x14];
};                                                  /* size = 0x68 */

struct _mips2c_stack_EnRd_Init {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ SkelAnime *sp40;                     /* inferred */
    /* 0x44 */ ColliderCylinder *sp44;              /* inferred */
    /* 0x48 */ char pad_48[0x10];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnRd_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D4190 {};              /* size 0x0 */

struct _mips2c_stack_func_808D41FC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D4260 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D4308 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808D43AC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808D45D4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D4660 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808D47DC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D4868 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808D49E4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808D4A90 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D4B20 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808D4CA8 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808D4DC4 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808D4E60 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D4FE0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D506C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ PosRot *sp28;                        /* inferred */
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ char pad_30[0x6];                    /* maybe part of sp2C[2]? */
    /* 0x36 */ s16 sp36;                            /* inferred */
    /* 0x38 */ char pad_38[0x4];                    /* maybe part of sp36[3]? */
    /* 0x3C */ Actor *sp3C;                         /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808D53C0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D5440 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ char pad_34[0x2];
    /* 0x36 */ s16 sp36;                            /* inferred */
    /* 0x38 */ char pad_38[0x4];                    /* maybe part of sp36[3]? */
    /* 0x3C */ Actor *sp3C;                         /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808D5660 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D56E4 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x14];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808D586C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D58CC {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x10];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808D5C54 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D5CCC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808D5D88 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D5DF4 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D5E98 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D5F18 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D6008 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D6054 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D60B0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D6130 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D616C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D6200 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808D6310 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D6388 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808D64D0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D65BC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D66A0 {};              /* size 0x0 */

struct _mips2c_stack_func_808D6814 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808D6A94 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ CollisionCheckContext *sp1C;         /* inferred */
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D6B64 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D6DA0 {};              /* size 0x0 */

struct _mips2c_stack_func_808D6DFC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_808D4190(GlobalContext *arg0, EnRd *arg1, s32 arg2); /* static */
s32 func_808D41FC(GlobalContext *arg0, EnRd *);     /* static */
void func_808D4260(EnRd *arg0, GlobalContext *arg1); /* static */
void func_808D4308(EnRd *arg0);                     /* static */
void func_808D45D4(EnRd *arg0);                     /* static */
void func_808D47DC(EnRd *arg0);                     /* static */
void func_808D4A90(EnRd *arg0);                     /* static */
void func_808D4DC4(EnRd *arg0);                     /* static */
void func_808D4FE0(EnRd *arg0, GlobalContext *arg1); /* static */
void func_808D53C0(EnRd *arg0, GlobalContext *arg1); /* static */
void func_808D5660(EnRd *arg0, EnRd *);             /* static */
void func_808D586C(EnRd *arg0);                     /* static */
void func_808D5C54(EnRd *arg0, EnRd *);             /* static */
void func_808D5D88(EnRd *arg0);                     /* static */
void func_808D5E98(EnRd *arg0);                     /* static */
void func_808D6008(EnRd *arg0);                     /* static */
void func_808D60B0(EnRd *arg0);                     /* static */
void func_808D616C(Actor *arg0, EnRd *);            /* static */
void func_808D6310(Actor *arg0);                    /* static */
void func_808D64D0(Actor *arg0);                    /* static */
void func_808D66A0(EnRd *arg0, GlobalContext *arg1); /* static */
void func_808D6814(Actor *arg0, GlobalContext *arg1); /* static */
void func_808D6A94(Actor *arg0, GlobalContext *arg1); /* static */
void func_808D6B64(EnRd *arg0, GlobalContext *arg1); /* static */
s32 func_808D6DA0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5, Gfx **gfx); /* static */
void func_808D6DFC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **gfx); /* static */
extern FlexSkeletonHeader D_060053E8;
extern AnimationHeader D_06006678;
extern AnimationHeaderCommon D_06006B08;
extern AnimationHeader D_06006EEC;
extern AnimationHeader D_060073A4;
extern AnimationHeader D_06007BBC;
extern AnimationHeader D_060081A8;
extern AnimationHeader D_06009298;
extern AnimationHeader D_06009900;
extern AnimationHeader D_0600A450;
extern AnimationHeader D_0600ABE0;
extern FlexSkeletonHeader D_06010B88;
extern AnimationHeaderCommon D_060113EC;
extern AnimationHeader D_060118D8;
extern AnimationHeader D_06011DB8;
extern AnimationHeader D_0601216C;
static ColliderCylinderInit D_808D70E0 = {
    {0, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7EFFFFF, 0, 0}, 0, 5, 1},
    {0x14, 0x46, 0, {0, 0, 0}},
};
static DamageTable D_808D710C = {
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
static InitChainEntry D_808D712C[3];                /* unable to generate initializer */
static Vec3f D_808D7138 = {0.25f, 0.25f, 0.25f};

void EnRd_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp44;
    SkelAnime *sp40;
    ColliderCylinder *temp_a1_3;
    SkelAnime *temp_a1;
    SkelAnime *temp_a1_2;
    s16 temp_v1;
    s16 temp_v1_2;
    EnRd *this = (EnRd *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_808D712C);
    this->actor.targetMode = 0;
    this->actor.colChkInfo.damageTable = &D_808D710C;
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->unk_3D8 = 0;
    temp_v1 = this->actor.params;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->unk_3DA = this->unk_3D8;
    this->actor.focus.pos.y += 50.0f;
    this->actor.colChkInfo.mass = 0xFE;
    this->actor.colChkInfo.health = 8;
    this->unk_3DE = 0xFF;
    this->unk_3F1 = -1;
    this->unk_3DC = (s16) ((s32) (this->actor.params & 0xFF00) >> 8);
    this->actor.focus.pos.z = this->actor.world.pos.z;
    if ((temp_v1 & 0x80) != 0) {
        this->actor.params = temp_v1 | 0xFF00;
    } else {
        this->actor.params = temp_v1 & 0xFF;
    }
    temp_a1 = &this->unk_144;
    if ((s32) this->actor.params >= -1) {
        temp_a1_2 = &this->unk_144;
        sp40 = temp_a1_2;
        SkelAnime_InitSV(globalCtx, temp_a1_2, &D_06010B88, &D_0600ABE0, &this->unk_29C, &this->unk_338, 0x1A);
    } else {
        sp40 = temp_a1;
        SkelAnime_InitSV(globalCtx, temp_a1, &D_060053E8, &D_0600ABE0, &this->unk_29C, &this->unk_338, 0x1A);
    }
    temp_a1_3 = &this->unk_190;
    sp44 = temp_a1_3;
    Collider_InitCylinder(globalCtx, temp_a1_3);
    Collider_SetCylinder(globalCtx, temp_a1_3, (Actor *) this, &D_808D70E0);
    temp_v1_2 = this->actor.params;
    if ((s32) temp_v1_2 >= -2) {
        if (temp_v1_2 != 5) {
            if (temp_v1_2 != 6) {
                if (temp_v1_2 != 7) {
                    if (temp_v1_2 == -2) {
                        this->actor.hintId = 0x2D;
                    } else {
                        this->actor.hintId = 0x2A;
                    }
                    func_808D4308(this);
                    this->unk_18C = func_808D4308;
                } else {
                    if (func_808D41FC(globalCtx) == 0) {
                        func_808D4A90(this);
                    } else {
                        this->actor.hintId = 0x2A;
                        func_808D4308(this);
                    }
                    this->unk_18C = func_808D4A90;
                }
            } else {
                if (func_808D41FC(globalCtx) == 0) {
                    func_808D47DC(this);
                } else {
                    this->actor.hintId = 0x2A;
                    func_808D4308(this);
                }
                this->unk_18C = func_808D47DC;
            }
        } else {
            if (func_808D41FC(globalCtx) == 0) {
                func_808D45D4(this);
            } else {
                this->actor.hintId = 0x2A;
                func_808D4308(this);
            }
            this->unk_18C = func_808D45D4;
        }
    } else {
        func_808D4DC4(this);
    }
    SkelAnime_FrameUpdateMatrix(sp40);
    if (this->actor.params == 3) {
        this->actor.flags |= 0x80;
    }
    if (this->actor.params == 4) {
        Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x8E, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.world.rot.x, (s16) (s32) this->actor.world.rot.y, (s16) (s32) this->actor.world.rot.z, 0xFF4B);
    }
}

void EnRd_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnRd *this = (EnRd *) thisx;
    if (gSaveContext.unk_3F58 != 0) {
        gSaveContext.unk_3F58 = 0;
    }
    Collider_DestroyCylinder(globalCtx, &this->unk_190);
}

void func_808D4190(GlobalContext *arg0, EnRd *arg1, s32 arg2) {
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;

    temp_v0 = arg0->actorCtx.actorList[5].first;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        do {
            if ((phi_v0->id != 0x4C) || (phi_v0 == arg1) || ((s32) phi_v0->params < 0)) {

            } else if (arg2 != 0) {
                phi_v0->parent = arg1;
            } else if (arg1 == phi_v0->parent) {
                phi_v0->parent = NULL;
            }
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
        } while (temp_v0_2 != 0);
    }
}

s32 func_808D41FC(GlobalContext *arg0) {
    if ((Player_GetMask(arg0) == 0xC) || (Player_GetMask(arg0) == 0xF) || (Player_GetMask(arg0) == 6)) {
        return 0;
    }
    return 1;
}

void func_808D4260(EnRd *arg0, GlobalContext *arg1) {
    EnRd *temp_a2;
    s32 temp_v0;

    temp_a2 = arg0;
    if ((s32) temp_a2->actor.params >= 5) {
        temp_v0 = temp_a2->actionFunc;
        if ((func_808D4660 != temp_v0) && (func_808D4868 != temp_v0) && (func_808D4B20 != temp_v0) && (func_808D65BC != temp_v0) && (func_808D58CC != temp_v0) && (func_808D6200 != temp_v0) && (func_808D6388 != temp_v0)) {
            arg0 = temp_a2;
            if (func_808D41FC(arg1, temp_a2) == 0) {
                arg0->unk_18C(arg0);
            }
        }
    }
}

void func_808D4308(EnRd *arg0) {
    f32 temp_f6;

    if (arg0->actor.params != 2) {
        SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x144, &D_0600ABE0, -6.0f);
    } else {
        SkelAnime_ChangeAnimDefaultRepeat(arg0 + 0x144, &D_060081A8);
    }
    arg0->unk_3EF = 0;
    temp_f6 = Rand_ZeroOne() * 10.0f;
    arg0->actionFunc = func_808D43AC;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    arg0->unk_3D6 = (s16) (s32) (temp_f6 + 5.0f);
}

void func_808D43AC(EnRd *this, GlobalContext *globalCtx) {
    SkelAnime *sp2C;
    SkelAnime *temp_a0;
    f32 temp_f6;

    temp_a0 = &this->unk_144;
    sp2C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    Math_SmoothStepToS(&this->unk_3D8, 0, 1, 0x64, (s16) 0);
    Math_SmoothStepToS(&this->unk_3DA, 0, 1, 0x64, (s16) 0);
    if ((this->actor.params == 2) && (func_801378B8(temp_a0, 0.0f) != 0)) {
        if (Rand_ZeroOne() >= 0.5f) {
            SkelAnime_ChangeAnimDefaultRepeat(sp2C, &D_060081A8);
        } else {
            SkelAnime_ChangeAnimDefaultRepeat(sp2C, &D_06007BBC);
        }
    } else {
        this->unk_3D6 += -1;
        if (this->unk_3D6 == 0) {
            temp_f6 = Rand_ZeroOne() * 10.0f;
            this->unk_144.animCurrentFrame = 0.0f;
            this->unk_3D6 = (s16) (s32) (temp_f6 + 10.0f);
        }
    }
    if (this->actor.parent != 0) {
        if (this->unk_3EC == 0) {
            if (this->actor.params != 2) {
                func_808D5660(this);
            } else {
                func_808D6008(this);
            }
        }
    } else {
        if (this->unk_3EC != 0) {
            if (this->actor.params != 2) {
                func_808D5C54(this);
            } else {
                func_808D6008(this);
            }
        }
        this->unk_3EC = 0;
        if ((this->actor.xzDistToPlayer <= 150.0f) && (func_800B715C(globalCtx) != 0)) {
            if ((this->actor.params != 2) && (this->unk_3EC == 0)) {
                func_808D5C54(this);
            } else {
                func_808D6008(this);
            }
        }
    }
    if ((globalCtx->gameplayFrames & 0x5F) == 0) {
        Audio_PlayActorSound2((Actor *) this, 0x38E4U);
    }
}

void func_808D45D4(EnRd *arg0) {
    SkelAnime *temp_a0;
    f32 temp_f6;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_0601216C, -6.0f);
    arg0->unk_3EF = 0xE;
    temp_f6 = Rand_ZeroOne() * 10.0f;
    arg0->unk_3E4 = 0;
    arg0->actionFunc = func_808D4660;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    arg0->unk_3D6 = (s16) (s32) (temp_f6 + 5.0f);
}

void func_808D4660(EnRd *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk_144;
    sp34 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    Math_SmoothStepToS(&this->unk_3D8, 0, 1, 0x64, (s16) 0);
    Math_SmoothStepToS(&this->unk_3DA, 0, 1, 0x64, (s16) 0);
    if (this->unk_3EC != 0) {
        func_808D5C54(this);
    }
    this->unk_3EC = 0;
    if ((this->actor.xzDistToPlayer <= 150.0f) && (func_808D41FC(globalCtx) != 0) && (func_800B715C(globalCtx) != 0)) {
        if (this->actor.params == -2) {
            this->actor.hintId = 0x2D;
        } else {
            this->actor.hintId = 0x2A;
        }
        SkelAnime_ChangeAnim(sp34, &D_060073A4, 0.0f, 0.0f, 19.0f, (u8) 2, -10.0f);
        this->actionFunc = func_808D49E4;
    }
    if (func_808D41FC(globalCtx) != 0) {
        if (this->actor.params == -2) {
            this->actor.hintId = 0x2D;
        } else {
            this->actor.hintId = 0x2A;
        }
        func_808D4308(this);
    }
    if ((globalCtx->gameplayFrames & 0x5F) == 0) {
        Audio_PlayActorSound2((Actor *) this, 0x38E4U);
    }
}

void func_808D47DC(EnRd *arg0) {
    SkelAnime *temp_a0;
    f32 temp_f6;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06011DB8, -6.0f);
    arg0->unk_3EF = 0xF;
    temp_f6 = Rand_ZeroOne() * 10.0f;
    arg0->unk_3E4 = 0;
    arg0->actionFunc = func_808D4868;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    arg0->unk_3D6 = (s16) (s32) (temp_f6 + 5.0f);
}

void func_808D4868(EnRd *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk_144;
    sp34 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    Math_SmoothStepToS(&this->unk_3D8, 0, 1, 0x64, (s16) 0);
    Math_SmoothStepToS(&this->unk_3DA, 0, 1, 0x64, (s16) 0);
    if (this->unk_3EC != 0) {
        func_808D5C54(this);
    }
    this->unk_3EC = 0;
    if ((this->actor.xzDistToPlayer <= 150.0f) && (func_808D41FC(globalCtx) != 0) && (func_800B715C(globalCtx) != 0)) {
        if (this->actor.params == -2) {
            this->actor.hintId = 0x2D;
        } else {
            this->actor.hintId = 0x2A;
        }
        SkelAnime_ChangeAnim(sp34, &D_060073A4, 0.0f, 0.0f, 19.0f, (u8) 2, -10.0f);
        this->actionFunc = func_808D49E4;
    }
    if (func_808D41FC(globalCtx) != 0) {
        if (this->actor.params == -2) {
            this->actor.hintId = 0x2D;
        } else {
            this->actor.hintId = 0x2A;
        }
        func_808D4308(this);
    }
    if ((globalCtx->gameplayFrames & 0x5F) == 0) {
        Audio_PlayActorSound2((Actor *) this, 0x38E4U);
    }
}

void func_808D49E4(EnRd *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    if ((globalCtx->gameplayFrames & 0x5F) == 0) {
        Audio_PlayActorSound2((Actor *) this, 0x38E4U);
    }
    this->unk_3E4 += 1;
    if ((s32) this->unk_3E4 >= 0xB) {
        if ((this->actor.params != 2) && (this->unk_3EC == 0)) {
            func_808D5C54(this);
        } else {
            func_808D6008(this);
        }
        this->unk_3E4 = 0;
    }
}

void func_808D4A90(EnRd *arg0) {
    SkelAnime *temp_a0;
    f32 temp_f10;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_060118D8, -6.0f);
    arg0->unk_3EF = 0x10;
    temp_f10 = (Rand_ZeroOne() * 10.0f) + 5.0f;
    arg0->unk_3E4 = 0x1112;
    arg0->actionFunc = func_808D4B20;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    arg0->unk_3D6 = (s16) (s32) temp_f10;
}

void func_808D4B20(EnRd *this, GlobalContext *globalCtx) {
    SkelAnime *sp2C;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk_144;
    sp2C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    Math_SmoothStepToS(&this->unk_3D8, 0, 1, 0x64, (s16) 0);
    Math_SmoothStepToS(&this->unk_3DA, 0, 1, 0x64, (s16) 0);
    if (this->unk_3EC != 0) {
        func_808D5C54(this);
    }
    this->unk_3EC = 0;
    if ((this->actor.xzDistToPlayer <= 150.0f) && (func_808D41FC(globalCtx) != 0) && (func_800B715C(globalCtx) != 0)) {
        if (this->actor.params == -2) {
            this->actor.hintId = 0x2D;
        } else {
            this->actor.hintId = 0x2A;
        }
        this->actionFunc = func_808D4CA8;
    }
    if (func_808D41FC(globalCtx) != 0) {
        if (this->actor.params == -2) {
            this->actor.hintId = 0x2D;
        } else {
            this->actor.hintId = 0x2A;
        }
        func_808D4308(this);
    }
    if ((globalCtx->gameplayFrames & 0x5F) == 0) {
        Audio_PlayActorSound2((Actor *) this, 0x38E4U);
    }
    if (func_801378B8(sp2C, this->unk_144.animFrameCount) != 0) {
        this->unk_3E4 = 0x1112;
    } else if (func_801378B8(sp2C, 15.0f) != 0) {
        this->unk_3E4 = 0x199A;
    }
    this->actor.world.rot.y -= this->unk_3E4;
    this->actor.shape.rot.y = this->actor.world.rot.y;
}

void func_808D4CA8(EnRd *this, GlobalContext *globalCtx) {
    SkelAnime *sp2C;
    EnRd *temp_a0_2;
    SkelAnime *temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;

    temp_a0 = &this->unk_144;
    sp2C = temp_a0;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_a0_2 = this;
    if ((globalCtx->gameplayFrames & 0x5F) == 0) {
        this = this;
        Audio_PlayActorSound2((Actor *) temp_a0_2, 0x38E4U);
    }
    temp_v0 = this->unk_3E4;
    this->unk_3E4 = temp_v0 - 0x64;
    temp_v0_2 = this->unk_3E4;
    this->actor.world.rot.y -= temp_v0;
    this->actor.shape.rot.y = this->actor.world.rot.y;
    if (((s32) temp_v0_2 < 0x834) && ((s32) temp_v0_2 >= 0x7D0)) {
        SkelAnime_ChangeAnim(sp2C, &D_060073A4, 0.0f, 0.0f, 19.0f, (u8) 2, -10.0f);
        return;
    }
    if ((s32) temp_v0_2 < 0x3E8) {
        if ((this->actor.params != 2) && (this->unk_3EC == 0)) {
            func_808D5C54(this);
            return;
        }
        func_808D6008(this);
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

void func_808D4DC4(EnRd *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_0600ABE0, 0.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0600ABE0), (u8) 0, -6.0f);
    arg0->unk_3EF = 0xD;
    arg0->unk_3D6 = 6;
    arg0->actor.shape.rot.x = -0x4000;
    arg0->actionFunc = func_808D4E60;
    arg0->actor.gravity = 0.0f;
    arg0->actor.shape.yOffset = 0.0f;
    arg0->actor.speedXZ = 0.0f;
}

void func_808D4E60(EnRd *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    if (this->actor.shape.rot.x != -0x4000) {
        Math_SmoothStepToS((s16 *) &this->actor.shape, 0, 1, 0x7D0, (s16) 0);
        if (Math_SmoothStepToF(&this->actor.world.pos.y, this->actor.home.pos.y, 0.3f, 2.0f, 0.3f) == 0.0f) {
            this->actor.gravity = -3.5f;
            func_808D4308(this);
            return;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return;
    }
    if (this->actor.home.pos.y == this->actor.world.pos.y) {
        Audio_PlayActorSound2((Actor *) this, 0x38E4U);
    }
    if (Math_SmoothStepToF(&this->actor.world.pos.y, this->actor.home.pos.y + 50.0f, 0.3f, 2.0f, 0.3f) == 0.0f) {
        temp_v0 = this->unk_3D6;
        if (temp_v0 != 0) {
            this->unk_3D6 = temp_v0 - 1;
            Math_SmoothStepToF(&this->actor.speedXZ, 6.0f, 0.3f, 1.0f, 0.3f);
            return;
        }
        if (Math_SmoothStepToF(&this->actor.speedXZ, 0.0f, 0.3f, 1.0f, 0.3f) == 0.0f) {
            Math_SmoothStepToS((s16 *) &this->actor.shape, 0, 1, 0x7D0, (s16) 0);
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

void func_808D4FE0(EnRd *arg0, GlobalContext *arg1) {
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_060113EC, 1.0f, 4.0f, (f32) SkelAnime_GetFrameCount(&D_060113EC), (u8) 1, -4.0f);
    arg0->unk_3EF = 4;
    arg0->actionFunc = func_808D506C;
    arg0->actor.speedXZ = 0.4f;
}

void func_808D506C(EnRd *this, GlobalContext *globalCtx) {
    Actor *sp3C;
    s16 sp36;
    SkelAnime *sp2C;
    PosRot *sp28;
    PosRot *temp_a1_2;
    SkelAnime *temp_a0;
    s16 temp_a1;
    u8 temp_t8;
    u8 temp_v0;
    u8 temp_v0_2;
    s32 phi_v0;
    u8 phi_v0_2;

    sp3C = globalCtx->actorCtx.actorList[2].first;
    temp_a1 = this->actor.yawTowardsPlayer;
    sp36 = ((temp_a1 - this->actor.shape.rot.y) - this->unk_3D8) - this->unk_3DA;
    this->unk_144.animPlaybackSpeed = this->actor.speedXZ;
    Math_SmoothStepToS(&this->actor.shape.rot.y, temp_a1, 1, 0xFA, (s16) 0);
    Math_SmoothStepToS(&this->unk_3D8, 0, 1, 0x64, (s16) 0);
    Math_SmoothStepToS(&this->unk_3DA, 0, 1, 0x64, (s16) 0);
    temp_a0 = &this->unk_144;
    this->actor.world.rot.y = this->actor.shape.rot.y;
    sp2C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_a1_2 = &this->actor.home;
    sp28 = temp_a1_2;
    if (Actor_DistanceToPoint(sp3C, (Vec3f *) temp_a1_2) >= 150.0f) {
        func_808D53C0(this, globalCtx);
    }
    phi_v0 = (s32) sp36;
    if ((s32) sp36 < 0) {
        phi_v0 = -(s32) sp36;
    }
    if ((phi_v0 < 0x1554) && (Actor_DistanceBetweenActors((Actor *) this, sp3C) <= 150.0f)) {
        if (((sp3C->unk_A6C & 0x2C6080) == 0) && ((sp3C->unk_A70 & 0x4080) == 0)) {
            if (this->unk_3ED == 0) {
                if ((this->unk_3DC & 0x80) == 0) {
                    sp3C->freezeTimer = 0x28;
                    func_80123E90(globalCtx, (Actor *) this);
                    globalCtx->actorCtx.actorList[2].first[8].scale.x = (bitwise f32) this;
                    func_8013ECE0(this->actor.xzDistToPlayer, 0xFFU, 0x14U, 0x96U);
                }
                this->unk_3ED = 0x3C;
                Audio_PlayActorSound2((Actor *) this, 0x38E5U);
            }
        } else {
            func_808D53C0(this, globalCtx);
        }
    }
    temp_v0 = this->unk_3EE;
    temp_t8 = temp_v0 - 1;
    phi_v0_2 = temp_v0;
    if (temp_v0 != 0) {
        this->unk_3EE = temp_t8;
        phi_v0_2 = temp_t8 & 0xFF;
    }
    if ((phi_v0_2 == 0) && (Actor_DistanceBetweenActors((Actor *) this, sp3C) <= 45.0f) && (Actor_IsActorFacingLink((Actor *) this, 0x38E3) != 0)) {
        sp3C->freezeTimer = 0;
        temp_v0_2 = sp3C->unk_14B;
        if ((temp_v0_2 == 1) || (temp_v0_2 == 3)) {
            if (Actor_DistanceToPoint((Actor *) this, (Vec3f *) sp28) < 150.0f) {
                func_808D5D88(this);
            } else {
                func_808D53C0(this, globalCtx);
            }
        } else if (globalCtx->grabPlayer(globalCtx, (Player *) sp3C) != 0) {
            this->actor.flags &= -2;
            func_808D586C(this);
        }
    } else if ((s32) this->actor.params > 0) {
        if (this->actor.parent != 0) {
            func_808D5660(this);
        } else {
            this->unk_3EC = 0;
        }
    }
    if ((func_801378B8(sp2C, 10.0f) != 0) || (func_801378B8(sp2C, 22.0f) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x382EU);
        return;
    }
    if ((globalCtx->gameplayFrames & 0x5F) == 0) {
        Audio_PlayActorSound2((Actor *) this, 0x38E4U);
    }
}

void func_808D53C0(EnRd *arg0, GlobalContext *arg1) {
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_060113EC, 0.5f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_060113EC), (u8) 1, -4.0f);
    arg0->unk_3EF = 2;
    arg0->actionFunc = func_808D5440;
}

void func_808D5440(EnRd *this, GlobalContext *globalCtx) {
    Actor *sp3C;
    s16 sp36;
    PosRot *sp30;
    SkelAnime *sp2C;
    PosRot *temp_a1;
    SkelAnime *temp_a0;
    u8 temp_v0;

    temp_a1 = &this->actor.home;
    sp30 = temp_a1;
    sp3C = globalCtx->actorCtx.actorList[2].first;
    sp36 = Actor_YawToPoint((Actor *) this, (Vec3f *) temp_a1);
    if (Actor_DistanceToPoint((Actor *) this, (Vec3f *) temp_a1) >= 5.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, sp36, 1, 0x1C2, (s16) 0);
    } else {
        this->actor.speedXZ = 0.0f;
        if (Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.home.rot.y, 1, 0x1C2, (s16) 0) == 0) {
            if (this->actor.params != 2) {
                func_808D4308(this);
            } else {
                func_808D60B0(this);
            }
        }
    }
    Math_SmoothStepToS(&this->unk_3D8, 0, 1, 0x64, (s16) 0);
    Math_SmoothStepToS(&this->unk_3DA, 0, 1, 0x64, (s16) 0);
    temp_a0 = &this->unk_144;
    this->actor.world.rot.y = this->actor.shape.rot.y;
    sp2C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (((sp3C->unk_A6C & 0x2C6080) == 0) && ((sp3C->unk_A70 & 0x4080) == 0) && (temp_v0 = sp3C->unk_14B, (temp_v0 != 1)) && (temp_v0 != 3) && (Actor_DistanceToPoint(sp3C, (Vec3f *) sp30) < 150.0f)) {
        this->actor.targetMode = 0;
        func_808D4FE0(this, globalCtx);
    } else if ((s32) this->actor.params > 0) {
        if (this->actor.parent != 0) {
            func_808D5660(this);
        } else {
            this->unk_3EC = 0;
        }
    }
    if ((func_801378B8(sp2C, 10.0f) != 0) || (func_801378B8(sp2C, 22.0f) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x382EU);
        return;
    }
    if ((globalCtx->gameplayFrames & 0x5F) == 0) {
        Audio_PlayActorSound2((Actor *) this, 0x38E4U);
    }
}

void func_808D5660(EnRd *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_060113EC, 0.5f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_060113EC), (u8) 1, -4.0f);
    arg0->unk_3EF = 3;
    arg0->unk_3EC = 1;
    arg0->actionFunc = func_808D56E4;
}

void func_808D56E4(EnRd *this, GlobalContext *globalCtx) {
    ? sp2C;
    SkelAnime *sp28;
    Actor *temp_v0;
    SkelAnime *temp_a0;

    temp_v0 = this->actor.parent;
    if (temp_v0 != 0) {
        sp2C.unk_0 = (f32) temp_v0->world.pos.x;
        sp2C.unk_4 = (f32) temp_v0->world.pos.y;
        sp2C.unk_8 = (f32) temp_v0->world.pos.z;
        Math_SmoothStepToS(&this->actor.shape.rot.y, Actor_YawToPoint((Actor *) this, (Vec3f *) &sp2C), 1, 0xFA, (s16) 0);
        if (Actor_DistanceToPoint((Actor *) this, (Vec3f *) &sp2C) >= 45.0f) {
            this->actor.speedXZ = 0.4f;
        } else {
            this->actor.speedXZ = 0.0f;
            if (this->actor.params != 2) {
                func_808D4308(this);
            } else {
                func_808D60B0(this);
            }
        }
        Math_SmoothStepToS(&this->unk_3D8, 0, 1, 0x64, (s16) 0);
        Math_SmoothStepToS(&this->unk_3DA, 0, 1, 0x64, (s16) 0);
    } else {
        func_808D4FE0(this, globalCtx);
    }
    temp_a0 = &this->unk_144;
    this->actor.world.rot.y = this->actor.shape.rot.y;
    sp28 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if ((func_801378B8(temp_a0, 10.0f) != 0) || (func_801378B8(temp_a0, 22.0f) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x382EU);
        return;
    }
    if ((globalCtx->gameplayFrames & 0x5F) == 0) {
        Audio_PlayActorSound2((Actor *) this, 0x38E4U);
    }
}

void func_808D586C(EnRd *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06006EEC);
    arg0->unk_3D6 = 0;
    arg0->unk_3EB = 0;
    arg0->unk_3EA = 0xC8;
    arg0->unk_3EF = 0xA;
    arg0->actionFunc = func_808D58CC;
    arg0->actor.speedXZ = 0.0f;
}

void func_808D58CC(EnRd *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    Actor *temp_s1;
    SkelAnime *temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    u8 temp_t3;
    u8 temp_t9;
    u8 temp_t9_2;

    temp_a0 = &this->unk_144;
    temp_s1 = globalCtx->actorCtx.actorList[2].first;
    sp34 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        this->unk_3EB += 1;
    }
    temp_t9 = this->unk_3EB;
    switch (temp_t9) {                              /* switch 1 */
    case 1:                                         /* switch 1 */
        SkelAnime_ChangeAnimDefaultRepeat(sp34, &D_06006678);
        this->unk_3EB += 1;
        globalCtx->damagePlayer(globalCtx, -8);
        func_8013ECE0(this->actor.xzDistToPlayer, 0xFFU, 1U, 0xCU);
        this->unk_3EA = 0x14;
        /* fallthrough */
    case 0:                                         /* switch 1 */
        Math_SmoothStepToS(&this->unk_3D8, 0, 1, 0x5DC, (s16) 0);
        Math_SmoothStepToS(&this->unk_3DA, 0, 1, 0x5DC, (s16) 0);
        /* fallthrough */
    case 2:                                         /* switch 1 */
        temp_v1 = temp_s1->unk_A70;
        temp_v0 = temp_v1 & 0x80;
        if ((temp_v0 == 0) || (temp_s1->unk_B62 != 0)) {
            if ((temp_s1->unk_B62 != 0) && (temp_v0 != 0)) {
                temp_s1->unk_A70 = (s32) (temp_v1 & ~0x80);
                temp_s1->unk_AE8 = 0x64;
            }
            SkelAnime_ChangeAnim(sp34, (AnimationHeader *) &D_06006B08, 0.5f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06006B08), (u8) 3, 0.0f);
            this->unk_3EF = 4;
            this->unk_3EB += 1;
            return;
        }
        temp_t9_2 = temp_s1->unk_14B;
        switch (temp_t9_2) {                        /* switch 2 */
        case 4:                                     /* switch 2 */
            Math_SmoothStepToF(&this->actor.shape.yOffset, -1500.0f, 1.0f, 150.0f, 0.0f);
            break;
        }
        Math_SmoothStepToF((f32 *) &this->actor.world, (Math_SinS(temp_s1->shape.rot.y) * -25.0f) + temp_s1->world.pos.x, 1.0f, 10.0f, 0.0f);
        Math_SmoothStepToF(&this->actor.world.pos.y, temp_s1->world.pos.y, 1.0f, 10.0f, 0.0f);
        Math_SmoothStepToF(&this->actor.world.pos.z, (Math_CosS(temp_s1->shape.rot.y) * -25.0f) + temp_s1->world.pos.z, 1.0f, 10.0f, 0.0f);
        Math_SmoothStepToS(&this->actor.shape.rot.y, temp_s1->shape.rot.y, 1, 0x1770, (s16) 0);
        if (func_801378B8(sp34, 0.0f) != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x38E8U);
        }
        temp_t3 = this->unk_3EA - 1;
        this->unk_3EA = temp_t3;
        if ((temp_t3 & 0xFF) == 0) {
            globalCtx->damagePlayer(globalCtx, -8);
            func_8013ECE0(this->actor.xzDistToPlayer, 0xF0U, 1U, 0xCU);
            this->unk_3EA = 0x14;
            func_800B8E58(temp_s1, (temp_s1->unk_A68->unk_92 + 0x6805) & 0xFFFF);
            return;
        }
    default:                                        /* switch 1 */
        return;
    case 3:                                         /* switch 1 */
        if (temp_s1->unk_14B != 0) {
            Math_SmoothStepToF(&this->actor.shape.yOffset, 0.0f, 1.0f, 400.0f, 0.0f);
            return;
        }
        /* Duplicate return node #24. Try simplifying control flow for better match */
        return;
    case 4:                                         /* switch 1 */
        if (temp_s1->unk_14B != 0) {
            Math_SmoothStepToF(&this->actor.shape.yOffset, 0.0f, 1.0f, 400.0f, 0.0f);
        }
        this->actor.targetMode = 0;
        this->actor.flags |= 1;
        this->unk_3ED = 0xA;
        this->unk_3EE = 0xF;
        func_808D4FE0(this, globalCtx);
        /* Duplicate return node #24. Try simplifying control flow for better match */
        return;
    }
}

void func_808D5C54(EnRd *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_060073A4, 0.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060073A4), (u8) 2, 0.0f);
    arg0->unk_3EF = 7;
    arg0->actionFunc = func_808D5CCC;
}

void func_808D5CCC(EnRd *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s32 phi_v1;

    temp_v0 = ((this->actor.yawTowardsPlayer - this->actor.shape.rot.y) - this->unk_3D8) - this->unk_3DA;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    } else {
        phi_v1 = (s32) temp_v0;
    }
    if (phi_v1 < 0x2008) {
        if ((this->unk_3DC & 0x80) == 0) {
            globalCtx->actorCtx.actorList[2].first->freezeTimer = 0x3C;
            func_8013ECE0(this->actor.xzDistToPlayer, 0xFFU, 0x14U, 0x96U);
            func_80123E90(globalCtx, (Actor *) this);
        }
        Audio_PlayActorSound2((Actor *) this, 0x38E5U);
        func_808D4FE0(this, globalCtx);
    }
}

void func_808D5D88(Actor *arg0) {
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3[3].unk_23 = 8;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x144, &D_06009900, -6.0f);
    arg0->speedXZ = -2.0f;
    Audio_PlayActorSound2(arg0, 0x38E6U);
    arg0[3].unk_23 = 8;
    arg0[1].focus.pos.z = (bitwise f32) func_808D5DF4;
}

void func_808D5DF4(EnRd *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    temp_f0 = this->actor.speedXZ;
    if (temp_f0 < 0.0f) {
        this->actor.speedXZ = temp_f0 + 0.15f;
    }
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    Math_SmoothStepToS(&this->unk_3D8, 0, 1, 0x12C, (s16) 0);
    Math_SmoothStepToS(&this->unk_3DA, 0, 1, 0x12C, (s16) 0);
    if (SkelAnime_FrameUpdateMatrix(&this->unk_144) != 0) {
        this->actor.world.rot.y = this->actor.shape.rot.y;
        func_808D5E98(this);
    }
}

void func_808D5E98(EnRd *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_060113EC, 0.5f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_060113EC), (u8) 1, -4.0f);
    arg0->unk_3EF = 9;
    arg0->unk_3D4 = 0;
    arg0->actionFunc = func_808D5F18;
}

void func_808D5F18(EnRd *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    Math_SmoothStepToS(&this->actor.world.rot.y, (s16) (this->actor.yawTowardsPlayer + 0x8000), 5, 0xDAC, (s16) 0xC8);
    temp_v0 = this->unk_3D4;
    this->actor.shape.rot.y = this->actor.world.rot.y;
    if ((s32) temp_v0 >= 0x3D) {
        func_808D53C0(this, globalCtx);
        this->unk_3D4 = 0;
        return;
    }
    this->unk_3D8 = (s16) (s32) (Math_SinS((s16) (temp_v0 * 0xFA0)) * (9583.0f * ((f32) (0x3C - this->unk_3D4) / 60.0f)));
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    this->unk_3D4 += 1;
}

void func_808D6008(EnRd *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_0600A450, -4.0f);
    arg0->unk_3EF = 5;
    arg0->actionFunc = func_808D6054;
}

void func_808D6054(EnRd *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;

    temp_a0 = &this->unk_144;
    this = this;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        if (this->actor.parent != 0) {
            func_808D5660(this, this);
            return;
        }
        func_808D5C54(this, this);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_808D60B0(EnRd *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_0600A450, -1.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0600A450), 0.0f, (u8) 2, -4.0f);
    arg0->unk_3EF = 6;
    arg0->actionFunc = func_808D6130;
}

void func_808D6130(EnRd *this, GlobalContext *globalCtx) {
    if (SkelAnime_FrameUpdateMatrix(&this->unk_144) != 0) {
        func_808D4308(this);
    }
}

void func_808D616C(Actor *arg0) {
    Actor *temp_a0;
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->shape.yOffset = 0.0f;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x144, &D_06009900, -6.0f);
    if ((arg0->bgCheckFlags & 1) != 0) {
        arg0->speedXZ = -2.0f;
    }
    temp_a0 = arg0;
    arg0->flags |= 1;
    arg0 = arg0;
    Audio_PlayActorSound2(temp_a0, 0x38E6U);
    arg0[3].unk_23 = 0xB;
    arg0[1].focus.pos.z = (bitwise f32) func_808D6200;
}

void func_808D6200(EnRd *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    PosRot *temp_a1;
    f32 temp_f0;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    temp_f0 = this->actor.speedXZ;
    if (temp_f0 < 0.0f) {
        this->actor.speedXZ = temp_f0 + 0.15f;
    }
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    Math_SmoothStepToS(&this->unk_3D8, 0, 1, 0x12C, (s16) 0);
    Math_SmoothStepToS(&this->unk_3DA, 0, 1, 0x12C, (s16) 0);
    if (SkelAnime_FrameUpdateMatrix(&this->unk_144) != 0) {
        temp_a1 = &this->actor.home;
        this->actor.world.rot.y = this->actor.shape.rot.y;
        if (this->actor.parent != 0) {
            func_808D5660(this, (EnRd *) temp_a1);
        } else if (Actor_DistanceToPoint(sp2C, (Vec3f *) temp_a1) >= 150.0f) {
            func_808D53C0(this, globalCtx);
        } else {
            func_808D4FE0(this, globalCtx);
        }
        this->unk_3F1 = -1;
    }
}

void func_808D6310(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_06009298, -1.0f);
    arg0[3].unk_23 = 0xC;
    arg0->unk_3D6 = 0x12C;
    arg0->flags &= -2;
    arg0->speedXZ = 0.0f;
    Audio_PlayActorSound2(arg0, 0x38E7U);
    arg0[1].focus.pos.z = (bitwise f32) func_808D6388;
}

void func_808D6388(EnRd *this, GlobalContext *globalCtx) {
    SkelAnime *sp2C;
    SkelAnime *temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;

    if (this->actor.category != 6) {
        func_800BC154(globalCtx, &globalCtx->actorCtx, (Actor *) this, 6U);
    }
    Math_SmoothStepToS(&this->unk_3D8, 0, 1, 0x7D0, (s16) 0);
    Math_SmoothStepToS(&this->unk_3DA, 0, 1, 0x7D0, (s16) 0);
    temp_a0 = &this->unk_144;
    sp2C = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        temp_v0 = this->unk_3D6;
        if (temp_v0 == 0) {
            if (Flags_GetSwitch(globalCtx, this->unk_3DC & 0x7F) == 0) {
                Actor_SetSwitchFlag(globalCtx, this->unk_3DC & 0x7F);
            }
            temp_v0_2 = this->unk_3DE;
            if (temp_v0_2 != 0) {
                if (temp_v0_2 == 0xB4) {
                    func_808D4190(globalCtx, this, 0);
                }
                this->unk_3DE += -5;
                this->actor.scale.y -= 0.000075f;
                return;
            }
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->unk_3D6 = temp_v0 - 1;
        return;
    }
    if ((func_801378B8(temp_a0, 33.0f) != 0) || (func_801378B8(sp2C, 40.0f) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x387AU);
    }
}

void func_808D64D0(Actor *arg0) {
    u8 temp_v0;

    arg0[3].unk_23 = 1;
    arg0->unk_3D6 = 0xA;
    arg0->speedXZ = 0.0f;
    arg0->world.rot.y = arg0->shape.rot.y;
    if (gSaveContext.unk_3F58 != 0) {
        arg0->unk_3E9 = 1U;
        arg0[3].home.rot.x = 0x258;
        Audio_PlayActorSound2(arg0, 0x3836U);
        func_800BCB70(arg0, 0x8000, 0x80C8, 0, (s16) 0xFF);
    } else {
        temp_v0 = arg0->unk_3F0;
        if (temp_v0 == 1) {
            func_800BCB70(arg0, 0, 0xC8, 0, (s16) 0x28);
        } else if (temp_v0 == 0xC) {
            func_800BCB70(arg0, 0, 0xC8, 0, (s16) 0x28);
        }
    }
    arg0[1].focus.pos.z = (bitwise f32) func_808D65BC;
}

void func_808D65BC(EnRd *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = this->unk_3D6;
    if ((s32) temp_v0 > 0) {
        this->unk_3D6 = temp_v0 - 1;
    }
    if (this->unk_3E9 != 0) {
        temp_v0_2 = this->unk_3E0;
        if (temp_v0_2 != 0) {
            this->unk_3E0 = temp_v0_2 - 1;
            if ((s32) this->unk_3E0 >= 0xFF) {
                func_800BCB70((Actor *) this, 0x8000, 0x80C8, 0, (s16) 0xFF);
            }
            if (this->unk_3E0 == 0) {
                this->unk_3E9 = 0;
                gSaveContext.unk_3F58 = 0;
            }
        }
    }
    if (this->actor.colorFilterTimer == 0) {
        if (this->actor.colChkInfo.health == 0) {
            func_808D4190(globalCtx, this, 1);
            func_808D6310((Actor *) this);
            Item_DropCollectibleRandom(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, 0x90);
            return;
        }
        func_808D616C((Actor *) this, this);
        /* Duplicate return node #12. Try simplifying control flow for better match */
    }
}

void func_808D66A0(EnRd *arg0, GlobalContext *arg1) {
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

    temp_a1 = arg0->unk_3DA;
    temp_v1 = arg0->actor.yawTowardsPlayer - arg0->actor.shape.rot.y;
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
    temp_v0_2 = temp_v0 - arg0->unk_3D8;
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
        arg0->unk_3DA = temp_a1 + phi_a3;
        if (phi_v0 < 0) {
            phi_a3_2 = -phi_v0;
        } else {
            phi_a3_2 = phi_v0;
        }
        arg0->unk_3D8 += phi_a3_2;
    } else {
        phi_a3_3 = phi_a2;
        if (phi_a2 < 0) {
            phi_a3_3 = -phi_a2;
        }
        arg0->unk_3DA = temp_a1 - phi_a3_3;
        if (phi_v0 < 0) {
            phi_a3_4 = -phi_v0;
        } else {
            phi_a3_4 = phi_v0;
        }
        arg0->unk_3D8 -= phi_a3_4;
    }
    temp_a1_2 = arg0->unk_3DA;
    if ((s32) temp_a1_2 < -0x495F) {
        arg0->unk_3DA = -0x495F;
    } else {
        phi_a3_5 = temp_a1_2;
        if ((s32) temp_a1_2 >= 0x4960) {
            phi_a3_5 = 0x495F;
        }
        arg0->unk_3DA = phi_a3_5;
    }
    temp_v0_3 = arg0->unk_3D8;
    if ((s32) temp_v0_3 < -0x256F) {
        arg0->unk_3D8 = -0x256F;
        return;
    }
    phi_a3_6 = temp_v0_3;
    if ((s32) temp_v0_3 >= 0x2570) {
        phi_a3_6 = 0x256F;
    }
    arg0->unk_3D8 = phi_a3_6;
}

void func_808D6814(Actor *arg0, GlobalContext *arg1) {
    void *sp28;
    f32 temp_v0_3;
    u8 temp_t6;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    if ((gSaveContext.unk_3F58 != 0) && (arg0->shape.rot.x == 0) && (arg0->unk_3E9 == 0) && (temp_v0 = arg0[3].unk_23, (temp_v0 != 0xB)) && (temp_v0 != 0xC) && (temp_v0 != 1)) {
        func_808D64D0(arg0);
        return;
    }
    temp_v0_2 = arg0->unk_1A1;
    if (((temp_v0_2 & 2) != 0) && (arg0->unk_1A1 = (u8) (temp_v0_2 & 0xFFFD), arg0->unk_3F0 = (u8) arg0->colChkInfo.damageEffect, (arg0[3].unk_23 != 0xD))) {
        sp28 = temp_v1;
        func_800BE258(arg0, (void *) &arg0[1].velocity);
        if (temp_v1->unk_ADC != 0) {
            arg0->unk_3F1 = (s8) temp_v1->unk_ADD;
        }
        temp_t6 = arg0->unk_3F0;
        switch (temp_t6) {
        case 12:
            temp_v0_3 = arg0[1].focus.pos.z;
            if ((func_808D58CC != (bitwise s32) temp_v0_3) && ((func_808D65BC != (bitwise s32) temp_v0_3) || (arg0->unk_3D6 == 0))) {
                arg0[3].home.unk_12 = 0x28;
                arg0->unk_3E8 = 0x1E;
                arg0[2].home.pos.y = 1.0f;
                func_808D64D0(arg0);
                return;
            }
            /* Duplicate return node #25. Try simplifying control flow for better match */
            return;
        case 1:
            func_808D64D0(arg0);
            return;
        case 2:
            func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x28);
            arg0[3].home.unk_12 = 0xB4;
            arg0->unk_3E8 = 0;
            arg0->unk_3E9 = 0U;
            arg0[3].home.rot.x = 0;
            arg0[2].home.pos.y = 1.0f;
block_22:
            Actor_ApplyDamage(arg0);
            if (arg0->colChkInfo.health == 0) {
                func_808D4190(arg1, (EnRd *) arg0, 1);
                func_808D6310(arg0);
                Item_DropCollectibleRandom(arg1, NULL, (Vec3f *) &arg0->world, 0x90);
                return;
            }
            func_808D616C(arg0, (EnRd *) arg0);
            /* Duplicate return node #25. Try simplifying control flow for better match */
            return;
        case 4:
            func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x28);
            arg0[3].home.unk_12 = 0x3C;
            arg0->unk_3E8 = 0x14;
            arg0->unk_3E9 = 0U;
            arg0[3].home.rot.x = 0;
            arg0[2].home.pos.y = 1.0f;
            goto block_22;
        case 15:
            func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 8);
            arg0->unk_3E9 = 0U;
            arg0[3].home.rot.x = 0;
            goto block_22;
        case 14:
            func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 8);
            arg0->unk_3E9 = 0U;
            arg0[3].home.rot.x = 0;
            arg0->colChkInfo.health = 0;
            goto block_22;
        }
    } else {
    default:
    }
}

void func_808D6A94(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    ColliderCylinder *sp20;
    CollisionCheckContext *sp1C;
    Actor *temp_a0;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    if ((s32) arg0->colChkInfo.health > 0) {
        temp_a0 = arg0;
        temp_a1 = arg0 + 0x190;
        if ((arg0[3].unk_23 != 0xA) && ((sp24 = temp_v0, sp20 = temp_a1, arg0 = arg0, Collider_UpdateCylinder(temp_a0, temp_a1), temp_a1_2 = arg1 + 0x18884, sp1C = temp_a1_2, CollisionCheck_SetOC(arg1, temp_a1_2, (Collider *) sp20), (arg0[3].unk_23 != 0xB)) || ((temp_v0->unk_ADC != 0) && (arg0->unk_3F1 != temp_v0->unk_ADD))) && ((func_808D65BC != (bitwise s32) arg0[1].focus.pos.z) || (arg0->unk_3D6 == 0))) {
            CollisionCheck_SetAC(arg1, temp_a1_2, (Collider *) sp20);
        }
    }
}

void func_808D6B64(EnRd *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk_3E6;
    if ((s32) temp_v0 > 0) {
        arg0->unk_3E6 = temp_v0 - 1;
    }
    if ((s32) arg0->unk_3E6 < 0x14) {
        Math_SmoothStepToF(arg0 + 0x298, 0.0f, 0.5f, 0.03f, 0.0f);
        arg0->unk_294 = (f32) arg0->unk_3E6 * 0.05f;
        return;
    }
    Math_SmoothStepToF(arg0 + 0x298, 0.5f, 0.1f, 0.02f, 0.0f);
}

void EnRd_Update(Actor *thisx, GlobalContext *globalCtx) {
    u8 temp_v0;
    u8 temp_v0_2;
    u8 phi_v0;
    EnRd *this = (EnRd *) thisx;

    func_808D6814((Actor *) this, globalCtx);
    if ((gSaveContext.unk_3F58 != 0) && (this->unk_3E9 == 0)) {
        gSaveContext.unk_3F58 = 0;
    }
    temp_v0 = this->unk_3F0;
    if ((temp_v0 != 6) && ((this->unk_3EF != 0xD) || (temp_v0 != 2))) {
        temp_v0_2 = this->unk_3ED;
        if (temp_v0_2 != 0) {
            this->unk_3ED = temp_v0_2 - 1;
        }
        this->actionFunc(this, globalCtx);
        if ((this->unk_3EF != 0xA) && (this->actor.speedXZ != 0.0f)) {
            Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        }
        phi_v0 = this->unk_3EF;
        if ((this->actor.shape.rot.x == 0) && (this->unk_3EF != 0xA) && (this->actor.speedXZ != 0.0f)) {
            Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 20.0f, 35.0f, 0x1DU);
            phi_v0 = this->unk_3EF;
        }
        if (phi_v0 == 7) {
            func_808D66A0(this, globalCtx);
        }
    }
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    this->actor.focus.pos.y += 50.0f;
    func_808D6A94((Actor *) this, globalCtx);
    func_808D4260(this, globalCtx);
    func_808D6B64(this, globalCtx);
}

s32 func_808D6DA0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0x17) {
        arg4->y += arg5->unk_3D8;
    } else if (arg1 == 0xC) {
        arg4->y += arg5->unk_3DA;
    }
    return 0;
}

void func_808D6DFC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if ((arg4[3].home.unk_12 != 0) && ((arg1 == 3) || (arg1 == 4) || (arg1 == 6) || (arg1 == 8) || (arg1 == 9) || (arg1 == 0xB) || (arg1 == 0xE) || (arg1 == 0x10) || (arg1 == 0x11) || (arg1 == 0x12) || (arg1 == 0x14) || (arg1 == 0x15) || (arg1 == 0x16) || (arg1 == 0x18) || (arg1 == 0x19))) {
        SysMatrix_GetStateTranslation(arg4 + (arg4[2].home.pos.x * 0xC) + 0x1DC);
        arg4[2].home.pos.x += 1;
    }
}

void EnRd_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ? sp54;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    GraphicsContext *temp_s1;
    EnRd *this = (EnRd *) thisx;

    sp54.unk_0 = (f32) this->actor.world.pos.x;
    sp54.unk_4 = (f32) this->actor.world.pos.y;
    sp54.unk_8 = (f32) this->actor.world.pos.z;
    temp_s1 = globalCtx->state.gfxCtx;
    this->unk_290 = 0;
    if (this->unk_3DE == 0xFF) {
        func_8012C28C(globalCtx->state.gfxCtx);
        temp_v1 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v1[1];
        temp_v1->words.w0 = 0xFB000000;
        temp_v1->words.w1 = this->unk_3DE & 0xFF;
        temp_v1_2 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v1_2[1];
        temp_v1_2->words.w1 = (u32) D_801AEFA0;
        temp_v1_2->words.w0 = 0xDB060020;
        temp_s1->polyOpa.p = SkelAnime_DrawSV2(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_808D6DA0, func_808D6DFC, (Actor *) this, temp_s1->polyOpa.p);
        func_800BC620((Vec3f *) &sp54, &D_808D7138, 0xFF, globalCtx);
    } else {
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v1_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v1_3[1];
        temp_v1_3->words.w0 = 0xFB000000;
        temp_v1_3->words.w1 = this->unk_3DE & 0xFF;
        temp_v1_4 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v1_4[1];
        temp_v1_4->words.w1 = (u32) D_801AEF88;
        temp_v1_4->words.w0 = 0xDB060020;
        temp_s1->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_808D6DA0, NULL, (Actor *) this, temp_s1->polyXlu.p);
        func_800BC620((Vec3f *) &sp54, &D_808D7138, (s32) this->unk_3DF, globalCtx);
    }
    if ((s32) this->unk_3E6 > 0) {
        func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk_1DC, 0xF, this->unk_298, 0.5f, this->unk_294, (u8) (s32) this->unk_3E8);
    }
}
