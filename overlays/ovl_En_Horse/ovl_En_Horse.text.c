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
    /* 0x022 */ Vec3s unk_22;                       /* inferred */
    /* 0x024 */ PosRot world;                       /* overlap */
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

typedef struct EnHorse {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ s32 unk_148;                        /* inferred */
    /* 0x14C */ s32 unk_14C;                        /* inferred */
    /* 0x150 */ s32 unk_150;                        /* inferred */
    /* 0x154 */ s8 unk_154;                         /* inferred */
    /* 0x155 */ char pad_155[0x3];                  /* maybe part of unk_154[4]? */
    /* 0x158 */ Vec3s unk_158;                      /* inferred */
    /* 0x15E */ char pad_15E[0x46];                 /* maybe part of unk_158[12]? */
    /* 0x1A4 */ SkelAnime unk_1A4;                  /* inferred */
    /* 0x1E8 */ s32 unk_1E8;                        /* inferred */
    /* 0x1EC */ s32 unk_1EC;                        /* inferred */
    /* 0x1F0 */ s32 unk_1F0;                        /* inferred */
    /* 0x1F4 */ s32 unk_1F4;                        /* inferred */
    /* 0x1F8 */ s32 unk_1F8;                        /* inferred */
    /* 0x1FC */ s16 unk_1FC;                        /* inferred */
    /* 0x1FD */ s8 unk_1FD;                         /* overlap; inferred */
    /* 0x1FE */ char pad_1FE[0x6];                  /* maybe part of unk_1FD[7]? */
    /* 0x204 */ s32 unk_204;                        /* inferred */
    /* 0x208 */ s32 unk_208;                        /* inferred */
    /* 0x20C */ s32 unk_20C;                        /* inferred */
    /* 0x210 */ f32 unk_210;                        /* inferred */
    /* 0x214 */ char pad_214[0x4];
    /* 0x218 */ Vec3f unk_218;                      /* inferred */
    /* 0x224 */ char pad_224[0x10];                 /* maybe part of unk_218[2]? */
    /* 0x234 */ s8 unk_234;                         /* inferred */
    /* 0x235 */ char pad_235[0x3];                  /* maybe part of unk_234[4]? */
    /* 0x238 */ s32 unk_238;                        /* inferred */
    /* 0x23C */ char pad_23C[0x4];
    /* 0x240 */ ? (*unk_240)(EnHorse *, GlobalContext *); /* inferred */
    /* 0x244 */ f32 unk_244;                        /* inferred */
    /* 0x248 */ f32 unk_248;                        /* inferred */
    /* 0x24C */ char pad_24C[0xC];                  /* maybe part of unk_248[4]? */
    /* 0x258 */ f32 unk_258;                        /* inferred */
    /* 0x25C */ f32 unk_25C;                        /* inferred */
    /* 0x260 */ f32 unk_260;                        /* inferred */
    /* 0x264 */ char pad_264[0x14];                 /* maybe part of unk_260[6]? */
    /* 0x278 */ ObjectContext unk_278;              /* inferred */
    /* 0x3AC */ u16 unk_3AC;                        /* overlap; inferred */
    /* 0x3E8 */ f32 unk_3E8;                        /* overlap; inferred */
    /* 0x528 */ f32 unk_528;                        /* overlap; inferred */
    /* 0x52C */ s32 unk_52C;                        /* overlap; inferred */
    /* 0x58C */ s32 unk_58C;                        /* overlap; inferred */
    /* 0x590 */ s32 unk_590;                        /* overlap; inferred */
} EnHorse;                                          /* size = 0x594 */

typedef struct {
    /* 0x00 */ s16 id;
    /* 0x02 */ s16 unk_2;                           /* inferred */
    /* 0x04 */ void *segment;
    /* 0x08 */ DmaRequest dmaReq;
    /* 0x28 */ OSMesgQueue loadQueue;
    /* 0x40 */ void *loadMsg;
} ObjectStatus;                                     /* size = 0x44 */

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ Vec3s rot;
    /* 0x12 */ u8 unk_12;                           /* inferred */
    /* 0x13 */ char pad_13[0x1];
} PosRot;                                           /* size = 0x14 */

struct _mips2c_stack_EnHorse_Destroy {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnHorse_Draw {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnHorse_Init {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ ObjectContext *sp38;                 /* inferred */
    /* 0x3C */ PosRot *sp3C;                        /* inferred */
    /* 0x40 */ Vec3s *sp40;                         /* inferred */
    /* 0x44 */ char pad_44[0x1C];
};                                                  /* size = 0x60 */

struct _mips2c_stack_EnHorse_Update {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ ObjectContext *sp30;                 /* inferred */
    /* 0x34 */ void **sp34;                         /* inferred */
    /* 0x38 */ CollisionCheckContext *sp38;         /* inferred */
    /* 0x3C */ s16 *sp3C;                           /* inferred */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0xC];                    /* maybe part of sp44[4]? */
    /* 0x54 */ Actor *sp54;                         /* inferred */
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0xC];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0x14];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_8087B730 {};              /* size 0x0 */

struct _mips2c_stack_func_8087B784 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8087B7C0 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ Vec3s *sp3C;                         /* inferred */
    /* 0x40 */ char pad_40[0x8];                    /* maybe part of sp3C[3]? */
    /* 0x48 */ s16 sp48;                            /* inferred */
    /* 0x4A */ s16 sp4A;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];                    /* maybe part of sp4A[3]? */
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad_50[0x10];
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ s32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ s32 sp80;                            /* inferred */
    /* 0x84 */ char pad_84[0x4];
    /* 0x88 */ s32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ char pad_90[0x4];
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ char pad_98[0x8];                    /* maybe part of sp94[3]? */
    /* 0xA0 */ void *spA0;                          /* inferred */
    /* 0xA4 */ s32 spA4;                            /* inferred */
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_8087C0AC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8087C178 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8087C1C0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8087C208 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8087C288 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8087C2B8 {};              /* size 0x0 */

struct _mips2c_stack_func_8087C38C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8087C43C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8087C590 {
    /* 0x00 */ char pad_0[0x50];
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x10];                   /* maybe part of sp50[5]? */
    /* 0x64 */ Vec3f *sp64;                         /* inferred */
    /* 0x68 */ char pad_68[0x8];                    /* maybe part of sp64[3]? */
    /* 0x70 */ void *sp70;                          /* inferred */
    /* 0x74 */ s32 sp74;                            /* inferred */
    /* 0x78 */ char pad_78[0x4];
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ Actor *sp88;                         /* inferred */
    /* 0x8C */ char pad_8C[0x4];
    /* 0x90 */ s32 sp90;                            /* inferred */
    /* 0x94 */ char pad_94[0xC];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_8087C8B8 {};              /* size 0x0 */

struct _mips2c_stack_func_8087C8D0 {};              /* size 0x0 */

struct _mips2c_stack_func_8087C8E0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8087C9D4 {};              /* size 0x0 */

struct _mips2c_stack_func_8087C9EC {};              /* size 0x0 */

struct _mips2c_stack_func_8087C9F8 {};              /* size 0x0 */

struct _mips2c_stack_func_8087CA04 {};              /* size 0x0 */

struct _mips2c_stack_func_8087D540 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8087D70C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8087D75C {};              /* size 0x0 */

struct _mips2c_stack_func_8087D814 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8087D988 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x16];                   /* maybe part of sp24[6]? */
    /* 0x3E */ s16 sp3E;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_8087DDEC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8087DE28 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8087DF64 {
    /* 0x00 */ char pad_0[0x22];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8087E080 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8087E0A4 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8087E18C {
    /* 0x00 */ char pad_0[0x22];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8087E2A8 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8087E350 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8087E564 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8087E5B4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8087E5D8 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8087E684 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8087E6D8 {
    /* 0x00 */ char pad_0[0x3A];
    /* 0x3A */ f32 sp3A;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* overlap; inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8087E92C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8087E9D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8087EA1C {
    /* 0x00 */ char pad_0[0x3A];
    /* 0x3A */ f32 sp3A;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* overlap; inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8087EB54 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8087EB78 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8087EC20 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8087EC78 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8087ED10 {
    /* 0x00 */ char pad_0[0x3A];
    /* 0x3A */ f32 sp3A;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* overlap; inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8087EEC4 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8087F078 {
    /* 0x00 */ char pad_0[0x2A];
    /* 0x2A */ f32 sp2A;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* overlap; inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8087F1FC {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8087F39C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8087F590 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8087F5B4 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8087F658 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ char pad_30[0x2];
    /* 0x32 */ f32 sp32;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* overlap; inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8087F9A0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8087F9C4 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8087FB08 {};              /* size 0x0 */

struct _mips2c_stack_func_8087FB14 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x10];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_8087FD94 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8087FDB8 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8087FF08 {};              /* size 0x0 */

struct _mips2c_stack_func_8087FF14 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x10];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_808801A8 {};              /* size 0x0 */

struct _mips2c_stack_func_808801F8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808802D0 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808804A4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808804CC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80880500 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80880534 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808806DC {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80880844 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80880978 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80880D50 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80880DA8 {};              /* size 0x0 */

struct _mips2c_stack_func_80880E00 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80881128 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8088126C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80881290 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80881398 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8088159C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80881634 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8088168C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808819D8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80881BDC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80881C54 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80881DA4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80881DC8 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80881F10 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80881F48 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x10];                   /* maybe part of sp20[5]? */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808821C8 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808822CC {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8088247C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80882564 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808826B4 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80882820 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808829D0 {};              /* size 0x0 */

struct _mips2c_stack_func_808829F4 {};              /* size 0x0 */

struct _mips2c_stack_func_80882A44 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ GlobalContext *sp18;                 /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80882B9C {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80882D8C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80882DC0 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80883104 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80883308 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ s16 *sp34;                           /* inferred */
    /* 0x38 */ PosRot *sp38;                        /* inferred */
    /* 0x3C */ char pad_3C[0xA];                    /* maybe part of sp38[3]? */
    /* 0x46 */ s16 sp46;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];                    /* maybe part of sp46[3]? */
    /* 0x4C */ s32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ Actor *sp5C;                         /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80883B70 {};              /* size 0x0 */

struct _mips2c_stack_func_80883BEC {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80883CB0 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80883D64 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80883DE0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80883E10 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80883EA0 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80883F18 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80883F98 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ SkelAnime *sp18;                     /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80884010 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808840C4 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80884194 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8088424C {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80884314 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808843B4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80884444 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808844E0 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80884564 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80884604 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808846B4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808846DC {};              /* size 0x0 */

struct _mips2c_stack_func_808846F0 {};              /* size 0x0 */

struct _mips2c_stack_func_80884718 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80884868 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808848C8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80884994 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80884A40 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0xC];                    /* maybe part of sp30[4]? */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80884D04 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80884E0C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80885060 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808850DC {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ WaterBox *sp30;                      /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80885220 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808853E0 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ CollisionContext *sp34;              /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ WaterBox *sp3C;                      /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ char pad_60[0x4];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x8];                    /* maybe part of sp64[3]? */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0xA];                    /* maybe part of sp70[3]? */
    /* 0x7E */ s16 sp7E;                            /* inferred */
    /* 0x80 */ s32 sp80;                            /* inferred */
    /* 0x84 */ CollisionPoly *sp84;                 /* inferred */
    /* 0x88 */ CollisionPoly *sp88;                 /* inferred */
    /* 0x8C */ char pad_8C[0x4];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_8088598C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80885A80 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80885AF4 {};              /* size 0x0 */

struct _mips2c_stack_func_80885B4C {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80885C90 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ u32 sp40;                            /* inferred */
    /* 0x44 */ CollisionPoly *sp44;                 /* inferred */
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0xC];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0x4];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x8];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80885DA4 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ CollisionContext *sp40;              /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ s16 *sp48;                           /* inferred */
    /* 0x4C */ char pad_4C[0xC];                    /* maybe part of sp48[4]? */
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ char pad_60[0x4];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0x4];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0xC];                    /* maybe part of sp68[4]? */
    /* 0x78 */ DynaPolyActor *sp78;                 /* inferred */
    /* 0x7C */ char pad_7C[0x2];
    /* 0x7E */ s16 sp7E;                            /* inferred */
    /* 0x80 */ s32 sp80;                            /* inferred */
    /* 0x84 */ char pad_84[0x4];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ u32 sp90;                            /* inferred */
    /* 0x94 */ CollisionPoly *sp94;                 /* inferred */
    /* 0x98 */ CollisionPoly *sp98;                 /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x4];
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ ? spBC;                              /* inferred */
    /* 0xBC */ char pad_BC[0x4];
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ char pad_C4[0xC];
};                                                  /* size = 0xD0 */

struct _mips2c_stack_func_80886C00 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80886DC4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80886FA8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x2];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808870A4 {};              /* size 0x0 */

struct _mips2c_stack_func_808871A0 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ CollisionContext *sp18;              /* inferred */
    /* 0x1C */ CollisionPoly *sp1C;                 /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80887270 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80887D20 {};              /* size 0x0 */

struct _mips2c_stack_func_80887D60 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80887E64 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80887EBC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80887F58 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x8];                    /* maybe part of sp64[3]? */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0x8];                    /* maybe part of sp70[3]? */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ char pad_80[0x10];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_80888C48 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 *sp18;                           /* inferred */
    /* 0x1C */ char pad_1C[0xC];                    /* maybe part of sp18[4]? */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80888D18 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ? sp1C;                              /* inferred */
    /* 0x1C */ char pad_1C[0xC];
};                                                  /* size = 0x28 */

s32 func_800B7128(void *, void *, Actor *);         /* extern */
s32 func_800B8C78(GlobalContext *, EnHorse *);      /* extern */
? func_800B8C9C(GlobalContext *, EnHorse *, s32);   /* extern */
s32 func_800B8CEC(GlobalContext *, EnHorse *);      /* extern */
f32 func_800C3FA0(CollisionContext *, ? *, ? *);    /* extern */
f32 func_800C40B4(CollisionContext *, CollisionPoly **, s32 *, f32 *); /* extern */
f32 func_800C4188(GlobalContext *, s32, s32 *, s32 *, void *, ? *); /* extern */
s32 func_800F3940(void *);                          /* extern */
? func_800F415C(EnHorse *, s16, s16);               /* extern */
? func_80138258(EnHorse *, GlobalContext *, Vec3s *, void (*)(void *, GlobalContext *, s32), s32 (*)(void *, void **, s32, ?), s32); /* extern */
? func_80138300(s32, u8, f32 *, f32 *);             /* extern */
? func_8013835C(s32, ?, ?, void *);                 /* extern */
? func_80138410(Vec3s *);                           /* extern */
? func_8013859C(GlobalContext *, Vec3s *, s32, s32); /* extern */
? func_80138700(GlobalContext *, Vec3s *);          /* extern */
? func_8017D7C0(f32, f32, s32, s32, f32, f32, f32 *); /* extern */
s32 func_801A5100();                                /* extern */
void func_8087B730(s32 arg0, s32 arg1, ? *arg2);    /* static */
void func_8087B784(Actor *arg1, EnHorse *arg2, s16 arg3, ?); /* static */
void func_8087B7C0(Actor *arg0, EnHorse *arg1, void *arg2); /* static */
void func_8087C0AC(Actor *arg0, EnHorse *);         /* static */
void func_8087C178(Actor *arg0);                    /* static */
void func_8087C1C0(Actor *arg0);                    /* static */
f32 func_8087C208(Actor *arg0, Actor *arg1, Actor *); /* static */
void func_8087C288(void *arg0, Vec3f *arg1, Vec3f *arg2, f32 *arg3); /* static */
s32 func_8087C2B8(void *arg0, Actor *arg1, ? *arg2, f32 arg3); /* static */
s32 func_8087C38C(void *arg0, Actor *arg1, Vec3f *arg2); /* static */
void func_8087C43C(Actor *arg0, void *arg1, s32);   /* static */
s32 func_8087C590(Actor *arg0, void *arg1);         /* static */
void func_8087C8B8(EnHorse *arg0, GlobalContext *arg1); /* static */
void func_8087C8D0(EnHorse *arg0, GlobalContext *arg1); /* static */
s32 func_8087C8E0(Actor *arg0, Actor *arg1);        /* static */
void func_8087C9D4(EnHorse *arg0, GlobalContext *arg1); /* static */
void func_8087C9EC(u16 *arg0);                      /* static */
void func_8087C9F8(EnHorse *arg0);                  /* static */
void func_8087CA04(s32 arg0, ? arg1);               /* static */
void func_8087D540(Actor *thisx, GlobalContext *globalCtx); /* static */
void func_8087D70C(Actor *arg0, void *arg1);        /* static */
void func_8087D75C(EnHorse *arg0, GlobalContext *arg1, EnHorse *); /* static */
void func_8087D814(Actor *arg0, void *arg1);        /* static */
void func_8087D988(Actor *arg0, Actor *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s16 arg7); /* static */
void func_8087DDEC(Actor *arg0);                    /* static */
void func_8087DE28(Actor *arg0);                    /* static */
void func_8087DF64(Actor *arg0, Actor *arg1);       /* static */
void func_8087E080(Actor *arg0);                    /* static */
void func_8087E0A4(void *arg0);                     /* static */
void func_8087E18C(Actor *arg0, Actor *arg1);       /* static */
void func_8087E2A8(Actor *arg0);                    /* static */
void func_8087E350(Actor *arg0, Actor *arg1);       /* static */
void func_8087E564(Actor *arg0);                    /* static */
void func_8087E5B4(Actor *arg0);                    /* static */
void func_8087E5D8(Actor *arg0);                    /* static */
void func_8087E684(Actor *arg0);                    /* static */
void func_8087E6D8(Actor *arg0, Actor *arg1);       /* static */
void func_8087E92C(Actor *arg0);                    /* static */
void func_8087E9D0(Actor *arg0);                    /* static */
void func_8087EA1C(Actor *arg0);                    /* static */
void func_8087EB54(Actor *arg0);                    /* static */
void func_8087EB78(Actor *arg0);                    /* static */
void func_8087EC20(Actor *arg0);                    /* static */
void func_8087EC78(void *arg0, GlobalContext *arg1); /* static */
void func_8087ED10(Actor *arg0, Actor *arg1);       /* static */
void func_8087EEC4(Actor *arg0);                    /* static */
void func_8087F078(Actor *arg0, Actor *arg1);       /* static */
void func_8087F1FC(Actor *arg0, Actor *arg1, f32);  /* static */
void func_8087F39C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8087F590(Actor *arg0);                    /* static */
void func_8087F5B4(Actor *arg0);                    /* static */
void func_8087F658(Actor *arg0, Actor *arg1);       /* static */
void func_8087F9A0(void *arg0);                     /* static */
void func_8087F9C4(void *arg0, ? arg1);             /* static */
void func_8087FB08(Actor *arg0);                    /* static */
void func_8087FB14(void *arg0, GlobalContext *arg1); /* static */
void func_8087FD94(void *arg0);                     /* static */
void func_8087FDB8(void *arg0, ? arg1);             /* static */
void func_8087FF08(Actor *arg0, f32, Actor *);      /* static */
void func_8087FF14(void *arg0, GlobalContext *arg1); /* static */
void func_808801A8(EnHorse *arg0);                  /* static */
void func_808801F8(Actor *arg0, void *arg1);        /* static */
void func_808802D0(Actor *arg0, s32 arg1, f32 arg2, f32 arg3); /* static */
void func_808804A4(Actor *arg0, Actor *arg2, f32);  /* static */
void func_808804CC(EnHorse *arg0);                  /* static */
void func_80880500(EnHorse *arg0);                  /* static */
void func_80880534(Actor *arg0, void *arg1);        /* static */
void func_808806DC(Actor *arg0, s32 arg1, f32 arg2, f32 arg3, ?); /* static */
void func_80880844(Actor *arg0, void *arg1);        /* static */
void func_80880978(Actor *arg0, void *arg1);        /* static */
void func_80880D50(EnHorse *arg0);                  /* static */
void func_80880DA8(s32 arg0, f32 arg1, s32 arg2, s16 *arg3); /* static */
void func_80880E00(EnHorse *arg0, EnHorse *);       /* static */
void func_80881128(Actor *arg0);                    /* static */
void func_8088126C(void *arg0);                     /* static */
void func_80881290(void *arg0, ? arg1);             /* static */
void func_80881398(void *arg0, GlobalContext *arg1); /* static */
void func_8088159C(void *arg0, GlobalContext *arg1); /* static */
void func_80881634(EnHorse *arg0);                  /* static */
void func_8088168C(EnHorse *arg0, EnHorse *);       /* static */
void func_808819D8(Actor *arg0, EnHorse *arg1);     /* static */
void func_80881BDC(void *arg0, ? arg1, ? arg2);     /* static */
void func_80881C54(Actor *arg0, EnHorse *arg1, void *arg2); /* static */
void func_80881DA4(void *arg0);                     /* static */
void func_80881DC8(void *arg0, ? arg1);             /* static */
void func_80881F10(void *arg0, ? arg2);             /* static */
void func_80881F48(Actor *arg0, EnHorse *arg1);     /* static */
void func_808821C8(void *arg0, ? arg1, ? arg2);     /* static */
void func_808822CC(void *arg0, ? arg1, ? arg2);     /* static */
void func_8088247C(void *arg0, ? arg1, void *arg2); /* static */
void func_80882564(Actor *arg0, EnHorse *arg1, void *arg2); /* static */
void func_808826B4(void *arg0, ? arg1, void *arg2); /* static */
void func_80882820(void *arg0, ? arg1, ? arg2);     /* static */
void func_808829D0(EnHorse *arg0, GlobalContext *arg1); /* static */
s32 func_808829F4(s32 arg0, GlobalContext *, EnHorse *); /* static */
void func_80882A44(EnHorse *arg0, void *arg1);      /* static */
? func_80882B9C(Actor *arg0, EnHorse *arg1, ? *arg2); /* static */
void func_80882D8C(EnHorse *arg0);                  /* static */
void func_80882DC0(Actor *arg0);                    /* static */
void func_80883104(Actor *arg0, EnHorse *arg1);     /* static */
void func_80883308(EnHorse *arg0, void *arg1);      /* static */
void func_80883B70(Actor *arg0, void *arg1);        /* static */
void func_80883BEC(Actor *arg0, ? arg1, void *arg2); /* static */
void func_80883CB0(Actor *arg0, ? arg2);            /* static */
void func_80883D64(Actor *arg0, ? arg1, void *arg2); /* static */
void func_80883DE0(s32 arg0, ? arg1, ? arg2);       /* static */
void func_80883E10(Actor *arg0, ? arg1, void *arg2); /* static */
void func_80883EA0(s32 arg0, ? arg1, ? arg2);       /* static */
void func_80883F18(Actor *arg0, ? arg1, void *arg2); /* static */
void func_80883F98(s32 arg0, ? arg1, ? arg2);       /* static */
void func_80884010(Actor *arg0, ? arg1, void *arg2); /* static */
void func_808840C4(Actor *arg0, GlobalContext *arg1, ? arg2); /* static */
void func_80884194(Actor *arg0, ? arg1, void *arg2); /* static */
void func_8088424C(Actor *arg0, GlobalContext *arg1, ? arg2); /* static */
void func_80884314(Actor *arg0, ? arg1, void *arg2); /* static */
void func_808843B4(Actor *arg0, GlobalContext *arg1, ? arg2); /* static */
void func_80884444(Actor *arg0, ? arg1, void *arg2); /* static */
void func_808844E0(Actor *arg0, GlobalContext *arg1, ? arg2); /* static */
void func_80884564(Actor *arg0, ? arg1, void *arg2); /* static */
void func_80884604(Actor *arg0, GlobalContext *arg1, ? arg2); /* static */
void func_808846B4(Actor *arg0, ? arg1, ? arg2);    /* static */
void func_808846DC(s32 arg0, ? arg1, ? arg2);       /* static */
void func_808846F0(EnHorse *arg0, GlobalContext *arg1); /* static */
void func_80884718(void *arg0, GlobalContext *arg1); /* static */
void func_80884868(EnHorse *arg0);                  /* static */
void func_808848C8(Actor *arg0, ? arg1);            /* static */
void func_80884994(EnHorse *arg0);                  /* static */
void func_80884A40(Actor *arg0, void *arg1);        /* static */
void func_80884D04(EnHorse *arg0, GlobalContext *arg1); /* static */
void func_80884E0C(void *arg0, GlobalContext *arg1); /* static */
void func_80885060(void *arg0, s16 arg1, f32 arg2, f32 arg3, f32 *arg4); /* static */
s32 func_808850DC(GlobalContext *arg0, GlobalContext *arg1, f32 *arg2, CollisionPoly **arg3, f32 *arg4, s32 *arg5); /* static */
void func_80885220(GlobalContext *arg0, GlobalContext *arg1, GlobalContext *arg2, s32 arg3, s32); /* static */
void func_808853E0(GlobalContext *arg0, GlobalContext *arg1); /* static */
void func_8088598C(EnHorse *arg0, GlobalContext *arg1); /* static */
void func_80885A80(f32 arg0, f32 *arg1, f32 *arg2, s16 *); /* static */
void func_80885AF4(EnHorse *arg0, GlobalContext *arg1); /* static */
void func_80885B4C(Actor *arg0, GlobalContext *arg1, CollisionPoly *arg2); /* static */
void func_80885C90(Actor *arg0, GlobalContext *arg1, s32); /* static */
void func_80885DA4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80886C00(EnHorse *arg0, GlobalContext *arg1); /* static */
void func_80886DC4(EnHorse *arg0, GlobalContext *arg1); /* static */
void func_80886FA8(Actor *arg0, GlobalContext *arg1); /* static */
void func_808870A4(EnHorse *arg0, GlobalContext *arg1); /* static */
? func_808871A0(EnHorse *arg0, GlobalContext *arg1); /* static */
s32 func_80887270(f32 arg0);                        /* static */
s32 func_80887D20(Actor *arg0, s32 arg1, Actor *arg2); /* static */
s32 func_80887D60(Actor *arg0, s32 arg1, Actor *arg2); /* static */
s32 func_80887E64(EnHorse *arg0, GlobalContext *arg1); /* static */
void func_80887EBC(f32 *arg0, f32 arg1, void *arg2); /* static */
void func_80887F58(void *arg0, GlobalContext *arg1, s32 arg2); /* static */
s32 func_80888C48(void *arg0, void **arg1, s32 arg2, ? arg3); /* static */
s32 func_80888D18(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
extern FlexSkeletonHeader D_06008C68;
extern AnimationHeaderCommon D_0600A8DC;
extern AnimationHeaderCommon D_0600AD08;
extern AnimationHeaderCommon D_0600B3E0;
extern AnimationHeaderCommon D_0600BDE0;
extern AnimationHeaderCommon D_0600D178;
extern AnimationHeaderCommon D_0600D4E8;
extern FlexSkeletonHeader D_060150D8;
extern s32 D_801BDAA4;
static ? D_80888F08;                                /* unable to generate initializer */
static ? D_80888F1C;                                /* unable to generate initializer */
static f32 D_80888F34[3] = {1.0f, 0.6666667f, 0.6666667f};
static ? D_80888F40;                                /* unable to generate initializer */
static ColliderCylinderInit D_80888F74 = {
    {0xA, 8, 0, 0x39, 0x12, 1},
    {0, {4, 0, 2}, {0xF7CFFFFF, 0, 0}, 0x19, 0, 1},
    {0x14, 0x46, 0, {0, 0, 0}},
};
static ColliderCylinderInit D_80888FA0 = {
    {0xA, 0, 0, 0x39, 0x12, 1},
    {0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
    {0x14, 0x46, 0, {0, 0, 0}},
};
static ? D_80888FCC;                                /* unable to generate initializer */
static ColliderJntSphInit D_80888FF0;               /* type too large by 4; unable to generate initializer */
static ? *D_80888FFC = &D_80888FCC;
static CollisionCheckInfoInit D_80889000 = {0xA, 0x23, 0x64, 0xFE};
static ? D_80889008;                                /* unable to generate initializer */
static InitChainEntry D_80889010[2];                /* unable to generate initializer */
static ? D_80889018;                                /* unable to generate initializer */
static ? D_80889030;                                /* unable to generate initializer */
static ? D_80889048;                                /* unable to generate initializer */
static ? D_80889052;                                /* unable to generate initializer */
static ? D_80889054;                                /* unable to generate initializer */
static ? D_8088905C;                                /* unable to generate initializer */
static ? D_80889074;                                /* unable to generate initializer */
static ? D_8088908C;                                /* unable to generate initializer */
static ? D_808890E8;                                /* unable to generate initializer */
static ? D_808890F0;                                /* unable to generate initializer */
static ? D_8088911C;                                /* unable to generate initializer */
static ? D_80889148;                                /* unable to generate initializer */
static ? D_80889154;                                /* unable to generate initializer */
static ? D_80889160;                                /* unable to generate initializer */
static ? D_808891C8;                                /* unable to generate initializer */
static ? D_808891D4;                                /* unable to generate initializer */
static ? D_808891E0;                                /* unable to generate initializer */
static ? D_808891EC;                                /* unable to generate initializer */
static ? D_808891F8;                                /* unable to generate initializer */
static ? D_80889204;                                /* unable to generate initializer */
static ? D_80889210;                                /* unable to generate initializer */
static ? D_80889214;                                /* unable to generate initializer */
static void *D_80889268 = (void *)0x416570A4;       /* const */
static void *D_8088926C = (void *)0x416570A4;       /* const */
static void *D_80889270 = (void *)0x41686666;       /* const */

void func_8087B730(s32 arg0, s32 arg1, ? *arg2) {
    void *temp_v0;

    temp_v0 = arg0 + (arg1 * 0xA);
    arg2->unk_0 = (f32) temp_v0->unk_0;
    arg2->unk_4 = (f32) temp_v0->unk_2;
    arg2->unk_8 = (f32) temp_v0->unk_4;
}

void func_8087B784(Actor *arg1, EnHorse *arg2, s16 arg3) {
    func_800F415C(arg2, arg3, arg3);
}

void func_8087B7C0(Actor *arg0, EnHorse *arg1, void *arg2) {
    s32 spA4;
    void *spA0;
    f32 sp8C;
    s32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    s32 sp6C;
    s32 sp68;
    f32 sp64;
    s32 sp60;
    ? sp50;
    s16 sp4A;
    s16 sp48;
    Vec3s *sp3C;
    Vec3f *sp38;
    Actor *temp_a0;
    f32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_11;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f2;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    f32 phi_f12;
    f32 phi_f14;
    s32 phi_a2;
    s32 phi_a3;
    s32 phi_t0;
    s32 phi_v0;
    f32 phi_f2;
    s32 phi_v0_2;
    s32 phi_a3_2;
    u16 phi_t1;

    spA4 = (s32) arg2->unk_0;
    temp_v0 = Lib_SegmentedToVirtual(arg2->unk_4);
    spA0 = temp_v0;
    Math_Vec3s_ToVec3f((Vec3f *) &sp8C, (arg0->unk_200 * 6) + temp_v0);
    temp_a2 = arg0->unk_200;
    if (temp_a2 == 0) {
        phi_f12 = (f32) (spA0->unk_6 - spA0->unk_0);
        phi_f14 = (f32) (spA0->unk_A - spA0->unk_4);
    } else {
        temp_v1 = arg2->unk_0;
        if (temp_v1 == (temp_a2 + 1)) {
            temp_v0_2 = spA0 + (temp_v1 * 6);
            phi_f12 = (f32) (temp_v0_2->unk_-6 - temp_v0_2->unk_-C);
            phi_f14 = (f32) (temp_v0_2->unk_-2 - temp_v0_2->unk_-8);
        } else {
            temp_v0_3 = spA0 + (temp_a2 * 6);
            phi_f12 = (f32) (temp_v0_3->unk_6 - temp_v0_3->unk_-6);
            phi_f14 = (f32) (temp_v0_3->unk_A - temp_v0_3->unk_-2);
        }
    }
    func_8017B7F8((Vec3f *) &sp8C, Math_Atan2S(phi_f12, phi_f14), &sp7C, &sp78, &sp74);
    if (((arg0->world.pos.x * sp7C) + (sp78 * arg0->world.pos.z) + sp74) > 0.0f) {
        temp_a2_2 = arg0->unk_200 + 1;
        arg0->unk_200 = temp_a2_2;
        phi_a2 = temp_a2_2;
        if (temp_a2_2 >= spA4) {
            temp_a2_3 = spA4 - 1;
            arg0->unk_200 = temp_a2_3;
            phi_a2 = temp_a2_3;
        }
        Math_Vec3s_ToVec3f((Vec3f *) &sp8C, (phi_a2 * 6) + spA0);
    }
    temp_a2_4 = arg0->unk_200;
    if (temp_a2_4 == 0) {
        Math_Vec3s_ToVec3f((Vec3f *) &sp80, spA0 + 6);
    } else {
        Math_Vec3s_ToVec3f((Vec3f *) &sp80, ((temp_a2_4 * 6) + spA0) - 6);
    }
    func_8017D7C0(arg0->world.pos.x, arg0->world.pos.z, sp80, sp88, sp8C, sp94, &sp70);
    if (((arg0->bgCheckFlags & 8) != 0) || ((arg0[1].colChkInfo.displacement.y & 4) != 0)) {
        func_8087B784(arg0, arg1, (s16) &sp8C, 0xC80);
        temp_v0_4 = arg0[1].colChkInfo.displacement.y;
        if ((temp_v0_4 & 4) != 0) {
            arg0[1].colChkInfo.displacement.y = temp_v0_4 & ~4;
        }
    } else {
        func_8087B784(arg0, arg1, (s16) &sp8C, 0x320);
        if (sp70 < 10000.0f) {
            temp_f0 = arg0->xzDistToPlayer;
            if ((temp_f0 < 100.0f) || ((arg0[2].colChkInfo.displacement.x->unk_17 & 2) != 0)) {
                if (Math_SinS((s16) (arg0->yawTowardsPlayer - arg0->world.rot.y)) > 0.0f) {
                    arg0->world.rot.y += -0x1E0;
                } else {
                    arg0->world.rot.y += 0x1E0;
                }
            } else if (temp_f0 < 300.0f) {
                if (Math_SinS((s16) (arg0->yawTowardsPlayer - arg0->world.rot.y)) > 0.0f) {
                    arg0->world.rot.y += 0x1E0;
                } else {
                    arg0->world.rot.y += -0x1E0;
                }
            }
            arg0->shape.rot.y = arg0->world.rot.y;
        }
    }
    temp_a3 = arg0->unk_200 - 3;
    phi_a3 = temp_a3;
    if (temp_a3 < 0) {
        phi_a3 = 0;
    }
    temp_v1_2 = arg2->unk_0;
    temp_t0 = phi_a3 + 5;
    phi_t0 = temp_t0;
    phi_f2 = 1e38.0f;
    phi_a3_2 = phi_a3;
    if ((s32) temp_v1_2 < temp_t0) {
        phi_t0 = (s32) temp_v1_2;
    }
    phi_v0 = phi_a3;
    if (phi_a3 < phi_t0) {
        sp3C = (phi_a3 * 6) + spA0;
        sp38 = arg0 + 0x24;
        sp68 = phi_a3;
        sp60 = phi_t0;
        do {
            sp6C = phi_v0;
            sp64 = phi_f2;
            Math_Vec3s_ToVec3f((Vec3f *) &sp50, sp3C);
            temp_f0_2 = Math3D_Distance(sp38, (Vec3f *) &sp50);
            if (temp_f0_2 < phi_f2) {
                temp_f2 = temp_f0_2;
                sp68 = phi_v0;
                phi_f2 = temp_f2;
            }
            temp_v0_5 = phi_v0 + 1;
            sp3C = &sp3C[1];
            phi_v0 = temp_v0_5;
        } while (temp_v0_5 != sp60);
        phi_a3_2 = sp68;
    }
    arg0[2].prevPos.z = (f32) (spA0 + (arg0->unk_200 * 6))->unk_2 * 0.01f;
    if (((arg0[1].colChkInfo.displacement.y & 0x100) != 0) && ((arg0[1].colChkInfo.displacement.x & 4) == 0) && (((arg0->unk_289 & 2) != 0) || ((arg0->unk_2D5 & 2) != 0) || (arg0[4].wallPoly > 0))) {
        temp_v0_6 = arg0[4].wallPoly;
        phi_v0_2 = temp_v0_6;
        if (temp_v0_6 == 0) {
            arg0[4].floorPoly = 0x1F4;
            arg0[4].wallPoly = 0x2B;
            phi_v0_2 = 0x2B;
        }
        temp_f0_3 = arg0->speedXZ;
        arg0[4].wallPoly = phi_v0_2 - 1;
        if (temp_f0_3 > 5.0f) {
            arg0->speedXZ = temp_f0_3 - 0.5f;
            return;
        }
        /* Duplicate return node #90. Try simplifying control flow for better match */
        return;
    }
    temp_v0_7 = arg0[4].floorPoly;
    if (temp_v0_7 > 0) {
        if (temp_v0_7 == 0x1F4) {
            temp_a0 = arg0[2].uncullZoneDownward;
            if (temp_a0 != 0) {
                Audio_PlayActorSound2(temp_a0, 0x6854U);
            }
        }
        temp_f0_4 = arg0->speedXZ;
        arg0[4].floorPoly += -1;
        if (temp_f0_4 < arg0[2].prevPos.z) {
            arg0->speedXZ = temp_f0_4 + 1.0f;
            return;
        }
        arg0->speedXZ = temp_f0_4 - 0.5f;
        return;
    }
    if (arg0->params == 5) {
        if (phi_a3_2 >= arg0->unk_200) {
            temp_f0_5 = arg0->speedXZ;
            if (temp_f0_5 < arg0[2].prevPos.z) {
                arg0->speedXZ = temp_f0_5 + 0.5f;
            } else {
                arg0->speedXZ = temp_f0_5 - 0.5f;
            }
            arg0->unk_394 = (u16) (arg0->unk_394 | 1);
            return;
        }
        temp_a0_2 = Actor_YawBetweenActors(arg0, arg1[5].actor.shape.feetPos[1].z) - arg0->world.rot.y;
        sp4A = temp_a0_2;
        if ((fabsf(Math_SinS(temp_a0_2)) < 0.9f) && (Math_CosS(temp_a0_2) > 0.0f)) {
            temp_f0_6 = arg0->speedXZ;
            if (temp_f0_6 < arg0[2].prevPos.z) {
                arg0->speedXZ = temp_f0_6 + 0.5f;
            } else {
                arg0->speedXZ = temp_f0_6 - 0.25f;
            }
            arg0->unk_394 = (u16) (arg0->unk_394 | 1);
            return;
        }
        temp_f0_7 = arg0->speedXZ;
        if (temp_f0_7 < 13.0f) {
            arg0->speedXZ = temp_f0_7 + 0.4f;
        } else {
            arg0->speedXZ = temp_f0_7 - 0.2f;
        }
        arg0->unk_394 = (u16) (arg0->unk_394 & 0xFFFE);
        return;
    }
    if (phi_a3_2 >= arg0->unk_200) {
        temp_f0_8 = arg0->speedXZ;
        if (temp_f0_8 < arg0[2].prevPos.z) {
            arg0->speedXZ = temp_f0_8 + 0.5f;
        } else {
            arg0->speedXZ = temp_f0_8 - 0.5f;
        }
        phi_t1 = arg0->unk_394 | 1;
        goto block_89;
    }
    if ((phi_a3_2 + 1) == arg0->unk_200) {
        temp_a0_3 = Actor_YawBetweenActors(arg0, arg1[5].actor.shape.feetPos[1].z) - arg0->world.rot.y;
        sp48 = temp_a0_3;
        if ((fabsf(Math_SinS(temp_a0_3)) < 0.9f) && (Math_CosS(temp_a0_3) > 0.0f)) {
            temp_f0_9 = arg0->speedXZ;
            if (temp_f0_9 < arg0[2].prevPos.z) {
                arg0->speedXZ = temp_f0_9 + 0.5f;
            } else {
                arg0->speedXZ = temp_f0_9 - 0.25f;
            }
            arg0->unk_394 = (u16) (arg0->unk_394 | 1);
            return;
        }
        temp_f0_10 = arg0->speedXZ;
        if (temp_f0_10 < 12.0f) {
            arg0->speedXZ = temp_f0_10 + 0.4f;
        } else {
            arg0->speedXZ = temp_f0_10 - 0.2f;
        }
        arg0->unk_394 = (u16) (arg0->unk_394 & 0xFFFE);
        return;
    }
    temp_f0_11 = arg0->speedXZ;
    if (temp_f0_11 < 13.0f) {
        arg0->speedXZ = temp_f0_11 + 0.4f;
    } else {
        arg0->speedXZ = temp_f0_11 - 0.2f;
    }
    phi_t1 = arg0->unk_394 & 0xFFFE;
block_89:
    arg0->unk_394 = phi_t1;
}

void func_8087C0AC(Actor *arg0) {
    Vec3f *temp_a0;
    Vec3f *temp_a0_2;
    f32 temp_f0;
    s32 temp_t2;
    s32 temp_v0;

    temp_v0 = arg0->unk_214;
    temp_f0 = arg0[1].shape.shadowScale;
    if (((f32) *(&D_80889008 + (temp_v0 * 4)) < temp_f0) && ((temp_v0 != 0) || !((f32) D_80889008.unk_4 < temp_f0))) {
        temp_a0 = arg0 + 0xEC;
        if (arg0[1].home.pos.y == 2) {
            temp_a0_2 = arg0 + 0xEC;
            arg0 = arg0;
            func_8019F1C0(temp_a0_2, 0x2842U);
        } else {
            arg0 = arg0;
            func_8019F1C0(temp_a0, 0x2803U);
        }
        temp_t2 = arg0->unk_214 + 1;
        arg0->unk_214 = temp_t2;
        if (temp_t2 >= 2) {
            arg0->unk_214 = 0;
        }
    }
}

void func_8087C178(Actor *arg0) {
    if (arg0[1].home.pos.y == 2) {
        func_8019F1C0(arg0 + 0xEC, 0x2843U);
        return;
    }
    func_8019F1C0(arg0 + 0xEC, 0x2804U);
}

void func_8087C1C0(Actor *arg0) {
    if (arg0[1].home.pos.y == 2) {
        func_8019F1C0(arg0 + 0xEC, 0x2843U);
        return;
    }
    func_8019F1C0(arg0 + 0xEC, 0x2804U);
}

f32 func_8087C208(Actor *arg0, Actor *arg1) {
    f32 sp1C;

    sp1C = 1.0f;
    if ((Math_CosS(arg0->shape.rot.x) < 0.939262f) && (Math_SinS(arg0->shape.rot.x) < 0.0f)) {
        sp1C = 0.7f;
    }
    return sp1C;
}

void func_8087C288(void *arg0, Vec3f *arg1, Vec3f *arg2, f32 *arg3) {
    SkinMatrix_Vec3fMtxFMultXYZW(arg0 + 0x187B0, arg1, arg2, arg3);
}

s32 func_8087C2B8(void *arg0, Actor *arg1, ? *arg2, f32 arg3) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 phi_f14;

    temp_f0 = arg2->unk_8;
    if ((temp_f0 > 0.0f) && (temp_f2 = arg1->uncullZoneScale, (temp_f0 < (arg1->uncullZoneForward + temp_f2)))) {
        if (arg3 < 1.0f) {
            phi_f14 = 1.0f;
        } else {
            phi_f14 = 1.0f / arg3;
        }
        if (((fabsf(arg2->unk_0) * phi_f14) < 1.0f) && (temp_f0_2 = arg2->unk_4, (((temp_f0_2 + arg1->uncullZoneDownward) * phi_f14) > -1.0f)) && (((temp_f0_2 - temp_f2) * phi_f14) < 1.0f)) {
            return 1;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

s32 func_8087C38C(void *arg0, Actor *arg1, Vec3f *arg2) {
    ? sp24;
    f32 sp20;
    f32 sp1C;
    s32 temp_v0;
    s32 phi_v0;

    func_8087C288(arg0, arg2, (Vec3f *) &sp24, &sp20);
    if (fabsf(sp20) < 0.008f) {
        return 0;
    }
    sp1C = Math3D_Distance(arg2, arg0 + 0xE0);
    temp_v0 = func_8087C2B8(arg0, arg1, &sp24, sp20) != 0;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        phi_v0 = 0;
        if (sp1C < 100.0f) {
            phi_v0 = 1;
        }
    }
    return phi_v0;
}

void func_8087C43C(Actor *arg0, void *arg1) {
    f32 temp_f0;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_a1 = arg0[1].shape.shadowDraw;
    if ((temp_a1 == 0) && (((temp_f0 = arg0[1].shape.shadowScale, (temp_f0 > 35.0f)) && (arg0[1].home.pos.y == 0)) || ((temp_f0 > 28.0f) && (arg0[1].home.pos.y == 1)) || ((temp_f0 > 25.0f) && (arg0[1].home.pos.y == 2))) && (temp_v0 = arg0[1].colChkInfo.displacement.x, ((temp_v0 & 0x1000) == 0))) {
        arg0[1].colChkInfo.displacement.x = temp_v0 | 0x1000;
        if (arg0[1].home.pos.y == 2) {
            func_8019F1C0(arg0 + 0xEC, 0x282CU);
            return;
        }
        func_8019F1C0(arg0 + 0xEC, 0x282CU);
        return;
    }
    if ((temp_a1 == 3) && (arg0[1].shape.shadowScale > 25.0f) && (temp_v0_2 = arg0[1].colChkInfo.displacement.x, ((temp_v0_2 & 0x800) == 0))) {
        arg0[1].colChkInfo.displacement.x = temp_v0_2 | 0x800;
        if (arg0[1].home.pos.y == 2) {
            func_8019F1C0(arg0 + 0xEC, 0x282BU);
            return;
        }
        func_8019F1C0(arg0 + 0xEC, 0x282BU);
        /* Duplicate return node #17. Try simplifying control flow for better match */
    }
}

s32 func_8087C590(Actor *arg0, void *arg1) {
    s32 sp90;
    Actor *sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    s32 sp74;
    void *sp70;
    Vec3f *sp64;
    s32 sp50;
    PosRot *temp_s0_2;
    Vec3f *temp_s0;
    Vec3f *temp_s3;
    f32 *temp_a1;
    f32 *temp_a1_2;
    f32 *temp_fp;
    f32 *temp_s4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    s32 temp_s6;
    s32 temp_s6_2;
    s32 temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *phi_s5;
    f32 phi_f22;
    s32 phi_s6;
    void *phi_s5_2;
    f32 phi_f22_2;
    s32 phi_s6_2;
    f32 phi_f22_3;

    sp90 = 0;
    sp88 = arg1->unk_1CCC;
    temp_v0 = func_800F3940(arg1);
    phi_f22 = 1e38.0f;
    phi_f22_2 = 1e38.0f;
    if (temp_v0 == -1) {
        return 0;
    }
    temp_v0_2 = arg1->unk_18864 + (temp_v0 * 8);
    sp74 = (s32) temp_v0_2->unk_0;
    temp_v0_3 = Lib_SegmentedToVirtual(temp_v0_2->unk_4);
    sp70 = temp_v0_3;
    phi_s5 = temp_v0_3;
    phi_s6 = 0;
    phi_s6_2 = 0;
    if (sp74 > 0) {
        sp64 = sp88 + 0x24;
        sp50 = sp74 * 6;
        temp_fp = &sp7C;
        do {
            temp_a1 = temp_fp;
            sp7C = (f32) phi_s5->unk_0;
            sp80 = (f32) phi_s5->unk_2;
            sp84 = (f32) phi_s5->unk_4;
            temp_f0 = Math3D_Distance(sp64, (Vec3f *) temp_a1);
            temp_f20 = temp_f0;
            phi_f22_3 = phi_f22;
            if (!(phi_f22 < temp_f0) && (func_8087C38C(arg1, arg0, (Vec3f *) temp_fp) == 0)) {
                arg0->world.pos.x = sp7C;
                temp_s0 = arg0 + 0x24;
                arg0->world.pos.y = sp80;
                arg0->world.pos.z = sp84;
                arg0->prevPos.x = temp_s0->x;
                arg0->prevPos.y = temp_s0->y;
                arg0->world.rot.y = 0;
                arg0->prevPos.z = temp_s0->z;
                sp90 = 1;
                arg0->shape.rot.y = Actor_YawBetweenActors(arg0, arg1->unk_1CCC);
                SkinMatrix_Vec3fMtxFMultXYZW(arg1 + 0x187B0, temp_s0, arg0 + 0xEC, arg0 + 0xF8);
                phi_f22_3 = temp_f20;
            }
            temp_s6 = phi_s6 + 6;
            phi_s5 += 6;
            phi_f22 = phi_f22_3;
            phi_s6 = temp_s6;
            phi_f22_2 = phi_f22_3;
        } while (temp_s6 != sp50);
    }
    if (sp90 == 1) {
        return 1;
    }
    if (sp74 > 0) {
        sp64 = (Vec3f *) &sp88->world;
        sp50 = sp74 * 6;
        phi_s5_2 = sp70;
        do {
            temp_a1_2 = &sp7C;
            sp7C = (f32) phi_s5_2->unk_0;
            sp80 = (f32) phi_s5_2->unk_2;
            sp84 = (f32) phi_s5_2->unk_4;
            temp_f0_2 = Math3D_Distance(sp64, (Vec3f *) temp_a1_2);
            if (!(phi_f22_2 < temp_f0_2)) {
                arg0->world.pos.x = sp7C;
                temp_s0_2 = &arg0->world;
                arg0->world.pos.y = sp80;
                arg0->world.pos.z = sp84;
                arg0->prevPos.x = temp_s0_2->pos.x;
                temp_s3 = &arg0->projectedPos;
                arg0->prevPos.y = temp_s0_2->pos.y;
                arg0->world.rot.y = 0;
                temp_s4 = &arg0->projectedW;
                arg0->prevPos.z = temp_s0_2->pos.z;
                sp90 = 1;
                arg0->shape.rot.y = Actor_YawBetweenActors(arg0, arg1->unk_1CCC);
                SkinMatrix_Vec3fMtxFMultXYZW(arg1 + 0x187B0, (Vec3f *) temp_s0_2, temp_s3, temp_s4);
                phi_f22_2 = temp_f0_2;
            }
            temp_s6_2 = phi_s6_2 + 6;
            phi_s5_2 += 6;
            phi_s6_2 = temp_s6_2;
        } while (temp_s6_2 != sp50);
    }
    return sp90;
}

void func_8087C8B8(EnHorse *arg0, GlobalContext *arg1) {
    arg0->unk_278.status[3].loadQueue.validCount = -1;
    arg0->unk_384 = 0;
}

void func_8087C8D0(EnHorse *arg0, GlobalContext *arg1) {
    arg0->unk_278.status[3].loadQueue.msgCount = 0;
}

s32 func_8087C8E0(Actor *arg0, Actor *arg1) {
    void *sp1C;
    Actor *temp_a3;
    s32 temp_v0;
    void *temp_a2;
    s32 phi_v0;

    temp_a3 = arg0;
    temp_a2 = arg1[22].projectedPos.z;
    if (((temp_a2->unk_A6C & 1) != 0) || (sp1C = temp_a2, arg0 = temp_a3, (func_800B7128(temp_a2, temp_a2, temp_a3) == 1)) || ((sp1C->unk_A6C << 0xB) < 0) || (((temp_v0 = arg0[1].colChkInfo.displacement.x, ((temp_v0 << 0xC) < 0)) || ((temp_v0 * 4) < 0)) && (arg0[2].uncullZoneScale == 0)) || (arg0->unk_144 == 0x13) || ((sp1C->unk_4 & 0x100) != 0) || (arg1->unk_1F2C != 0) || (sp1C = sp1C, (ActorCutscene_GetCurrentIndex() != -1)) || ((sp1C->unk_A6C & 0x20) != 0) || (phi_v0 = 1, (sp1C->unk_394 != 0))) {
        phi_v0 = 0;
    }
    return phi_v0;
}

void func_8087C9D4(EnHorse *arg0, GlobalContext *arg1) {
    arg0->unk_278.status[4].dmaReq.vromAddr = 0;
    arg0->unk_278.status[4].dmaReq.dramAddr = NULL;
    arg0->unk_278.status[4].dmaReq.size = 0;
}

void func_8087C9EC(u16 *arg0) {
    *arg0 = 0;
}

void func_8087C9F8(EnHorse *arg0) {

}

void func_8087CA04(s32 arg0, ? arg1) {

}

void EnHorse_Init(Actor *thisx, GlobalContext *globalCtx) {
    Vec3s *sp40;
    PosRot *sp3C;
    ObjectContext *sp38;
    OSMesgQueue *temp_v0_6;
    ObjectContext *temp_a0_2;
    ObjectContext *temp_a1;
    PosRot *temp_t6;
    Vec3s *temp_a0;
    s16 temp_v0;
    s16 temp_v0_12;
    s16 temp_v0_9;
    s32 temp_t9;
    s32 temp_v0_4;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s8 temp_v0_2;
    s8 temp_v0_3;
    s8 temp_v0_5;
    void **temp_a1_2;
    void **temp_a1_3;
    void **temp_v0_10;
    void **temp_v0_11;
    SaveContext *phi_v1;
    EnHorse *this = (EnHorse *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80889010);
    func_8087C9EC(&this->unk_3AC);
    temp_a0 = &this->unk_158;
    D_801BDAA4 = 0;
    sp40 = temp_a0;
    func_80138410(temp_a0);
    temp_t6 = &this->actor.world;
    sp3C = temp_t6;
    this->unk_258 = temp_t6->pos.x;
    temp_v0 = this->actor.params;
    this->unk_25C = temp_t6->pos.y;
    this->unk_52C = 0;
    this->unk_148 = 0;
    this->unk_25C += 70.0f;
    this->unk_14C = 0;
    this->unk_1EC = 0;
    this->unk_58C = 0;
    this->unk_590 = 0;
    this->unk_260 = temp_t6->pos.z;
    this->unk_3E8 = 0.0f;
    this->unk_528 = 100.0f;
    if ((temp_v0 & 0x8000) != 0) {
        this->unk_150 = 4;
        this->unk_204 = 0xC;
        this->unk_528 = 80.0f;
        temp_v0_2 = Object_GetIndex(&globalCtx->objectCtx, 0x19D);
        this->unk_154 = temp_v0_2;
        if ((s32) temp_v0_2 < 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->unk_1EC |= 1;
        this->actor.update = func_8087D540;
        goto block_13;
    }
    if ((temp_v0 & 0x4000) != 0) {
        this->unk_150 = 2;
        this->unk_204 = 0xF;
        this->unk_528 = 64.8f;
        temp_a0_2 = &globalCtx->objectCtx;
        sp38 = temp_a0_2;
        temp_v0_3 = Object_GetIndex(temp_a0_2, 0x7D);
        this->unk_154 = temp_v0_3;
        if ((s32) temp_v0_3 < 0) {
            this->actor.objBankIndex = Object_Spawn(temp_a0_2, 0x7D);
            Actor_SetObjectSegment(globalCtx, (Actor *) this);
            temp_v0_4 = this->unk_150 * 4;
            func_8013859C(globalCtx, sp40, *(&D_80888F40 + temp_v0_4), **(&D_80888F08 + temp_v0_4));
            SkelAnime_ChangeAnimDefaultStop(&this->unk_1A4, *(*(&D_80888F08 + (this->unk_150 * 4)) + (this->unk_20C * 4)));
            this->unk_1EC |= 0x200;
        } else {
            this->actor.update = func_8087D540;
        }
        goto block_13;
    }
    if ((temp_v0 & 0x2000) != 0) {
        this->unk_150 = 3;
        this->unk_204 = 0xC;
        temp_v0_5 = Object_GetIndex(&globalCtx->objectCtx, 0x19D);
        this->unk_154 = temp_v0_5;
        if ((s32) temp_v0_5 < 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->unk_1EC |= 1;
        this->actor.update = func_8087D540;
        goto block_13;
    }
    this->unk_150 = 0;
    this->unk_204 = 0xF;
    Actor_MarkForDeath((Actor *) this);
block_13:
    this->actor.params &= 0xFFFF1FFF;
    if (this->actor.params == 0x1FFF) {
        this->actor.params = 1;
    }
    if (this->actor.params == 3) {
        this->unk_1E8 = 0xB0000;
        phi_v1 = &gSaveContext;
    } else if (this->actor.params == 8) {
        this->unk_1E8 = 0xA0000;
        temp_t9 = 0xA0000 & 0xFFFDFFFF;
        phi_v1 = &gSaveContext;
        if ((gBitFlags[14] & gSaveContext.inventory.questItems) != 0) {
            this->unk_1E8 = temp_t9;
            this->unk_1E8 = temp_t9 | 0x4000000;
        }
    } else {
        if (this->actor.params == 0xD) {
            this->unk_1E8 = 0x20000000;
            this->unk_1EC |= 0x10;
            goto block_38;
        }
        if (this->actor.params == 4) {
            this->unk_1E8 = 0x20020000;
            this->actor.flags |= 0x80000000;
            goto block_38;
        }
        if (this->actor.params == 5) {
            this->unk_1E8 = 0x20020000;
            this->actor.flags |= 0x80000000;
            goto block_38;
        }
        if (this->actor.params == 0xF) {
            this->unk_1E8 = 0x10080;
            phi_v1 = &gSaveContext;
        } else if (this->actor.params == 0x11) {
            this->unk_1E8 = 0;
            this->unk_1EC |= 8;
            phi_v1 = &gSaveContext;
        } else {
            if (this->actor.params == 0x12) {
                this->unk_1E8 = 0x20020000;
                this->actor.flags |= 0x80000000;
                goto block_38;
            }
            if (this->actor.params == 1) {
                this->unk_1E8 = 0x80;
                phi_v1 = &gSaveContext;
            } else if ((this->actor.params == 0x13) || (this->actor.params == 0x14)) {
                this->unk_1E8 = 0x30000;
                phi_v1 = &gSaveContext;
            } else {
                this->unk_1E8 = 0;
block_38:
                phi_v1 = &gSaveContext;
            }
        }
    }
    if (((globalCtx->sceneNum == 0x6A) && ((phi_v1->weekEventReg[92] & 7) == 1)) || ((phi_v1->entranceIndex == 0x6400) && (func_800EE1D8(globalCtx) != 0))) {
        this->unk_1E8 |= 0x2000000;
    }
    this->actor.gravity = -3.5f;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B40B8, 20.0f);
    temp_v1 = this->unk_150;
    this->unk_144 = 2;
    this->actor.speedXZ = 0.0f;
    if (temp_v1 == 2) {
        D_80888FFC->unk_18 = 0xD;
    } else if ((temp_v1 == 3) || (temp_v1 == 4)) {
        D_80888FFC->unk_18 = 0xA;
    }
    temp_a1 = &this->unk_278;
    sp38 = temp_a1;
    Collider_InitCylinder(globalCtx, (ColliderCylinder *) temp_a1);
    Collider_SetCylinder(globalCtx, (ColliderCylinder *) temp_a1, (Actor *) this, &D_80888F74);
    temp_a1_2 = &this->unk_278.status[0].loadMsg;
    sp38 = (ObjectContext *) temp_a1_2;
    Collider_InitCylinder(globalCtx, (ColliderCylinder *) temp_a1_2);
    Collider_SetCylinder(globalCtx, (ColliderCylinder *) temp_a1_2, (Actor *) this, &D_80888FA0);
    temp_a1_3 = &this->unk_278.status[2].segment;
    sp38 = (ObjectContext *) temp_a1_3;
    Collider_InitJntSph(globalCtx, (ColliderJntSph *) temp_a1_3);
    Collider_SetJntSph(globalCtx, (ColliderJntSph *) temp_a1_3, (Actor *) this, &D_80888FF0, (ColliderJntSphElement *) &this->unk_278.status[2].dmaReq.notifyMsg);
    temp_v1_2 = this->unk_150;
    if (temp_v1_2 == 2) {
        temp_v0_6 = this->unk_278.status[2].dmaReq.notifyQueue;
        this->unk_2B8 = (s16) (s32) ((f32) this->unk_2B8 * 0.8f);
        this->unk_304 = (s16) (s32) ((f32) this->unk_304 * 0.8f);
        temp_v0_6->unk_2E = (s16) (s32) ((f32) temp_v0_6->unk_2E * 0.6f);
    } else if (temp_v1_2 == 4) {
        this->unk_2B8 = 0x32;
    }
    CollisionCheck_SetInfo(&this->actor.colChkInfo, NULL, &D_80889000);
    temp_v1_3 = this->unk_150;
    if (temp_v1_3 == 2) {
        Actor_SetScale((Actor *) this, 0.00648f);
    } else if (temp_v1_3 == 4) {
        Actor_SetScale((Actor *) this, 0.008f);
    } else {
        Actor_SetScale((Actor *) this, 0.01f);
    }
    temp_v0_7 = this->unk_1EC;
    this->actor.focus.pos.x = sp3C->pos.x;
    this->actor.focus.pos.y = sp3C->pos.y;
    this->unk_208 = 0;
    this->actor.focus.pos.z = sp3C->pos.z;
    this->actor.focus.pos.y += 70.0f;
    if (((temp_v0_7 & 1) == 0) && ((temp_v0_7 & 0x200) == 0) && (EnHorse_Update == this->actor.update)) {
        temp_v0_8 = this->unk_150 * 4;
        func_8013859C(globalCtx, sp40, *(&D_80888F40 + temp_v0_8), **(&D_80888F08 + temp_v0_8));
    }
    this->unk_20C = 0;
    this->unk_234 = 6;
    this->unk_238 = 0;
    this->unk_240 = NULL;
    this->unk_37A = 0;
    func_8087C8B8(this, globalCtx);
    func_8087C8D0(this, globalCtx);
    func_8087C9D4(this, globalCtx);
    temp_v0_9 = this->actor.params;
    if (temp_v0_9 == 2) {
        this->unk_278.status[10].dmaReq.size = 0;
        func_808801A8(this);
    } else if (temp_v0_9 == 3) {
        func_80880D50(this);
        this->unk_278.status[3].loadQueue.msg = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x67, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) 1, (s16) 1);
        this->unk_278.status[4].segment = (void *)0x416570A4;
    } else if (temp_v0_9 == 4) {
        func_80881634(this);
        this->unk_278.status[4].segment = (void *)0x416570A4;
        this->unk_278.status[3].loadQueue.msg = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x67, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) 1, (s16) 1);
        this->unk_1EC |= 0x100;
    } else if (temp_v0_9 == 5) {
        func_80881634(this);
        this->unk_278.status[4].segment = (void *)0x41686666;
        this->unk_278.status[3].loadQueue.msg = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x67, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) 1, (s16) 2);
        this->unk_1EC |= 0x100;
    } else if (temp_v0_9 == 9) {
        func_808829D0(this, globalCtx);
    } else if (temp_v0_9 == 0xA) {
        func_80882D8C(this);
        func_80112AFC(globalCtx);
    } else if (temp_v0_9 == 0xE) {
        func_808846F0(this, globalCtx);
        if ((globalCtx->sceneNum == 0x65) && (func_800EE2F4(globalCtx) == 0)) {
            Actor_MarkForDeath((Actor *) this);
        }
    } else if (temp_v0_9 == 0x10) {
        func_8087C9F8(this);
    } else if (temp_v0_9 == 0xF) {
        func_808804CC(this);
    } else if (temp_v0_9 == 0x12) {
        func_80884994(this);
    } else if (temp_v0_9 == 0x13) {
        func_80884D04(this, globalCtx);
        temp_v0_10 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x67, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) 1, (s16) 1);
        this->unk_278.status[3].loadQueue.msg = temp_v0_10;
        temp_v0_10[299] = (void *) ((s32) temp_v0_10[299] | 0x24);
    } else if (temp_v0_9 == 0x14) {
        func_80884D04(this, globalCtx);
        temp_v0_11 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x67, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) 1, (s16) 1);
        this->unk_278.status[3].loadQueue.msg = temp_v0_11;
        temp_v0_11[299] = (void *) ((s32) temp_v0_11[299] | 0x2C);
    } else {
        func_80880500(this);
    }
    this->actor.shape.rot.z = 0;
    temp_v0_12 = this->actor.shape.rot.z;
    this->unk_278.status[10].dmaReq.dramAddr = NULL;
    this->actor.world.rot.z = temp_v0_12;
    this->actor.home.rot.z = temp_v0_12;
    this->unk_3EC = (s16) this->actor.world.rot.y;
    if ((this->unk_1EC & 0x100) != 0) {
        this->unk_28C = 3;
        this->unk_289 = (u8) (this->unk_289 | 9);
        this->unk_2A6 = (u8) (this->unk_2A6 | 1);
        this->unk_278.status[0].dmaReq.filename = (s8 *)0x13820;
        this->unk_2D8 = 3;
        this->unk_2D5 = (u8) (this->unk_2D5 | 9);
        this->unk_2F2 = (u8) (this->unk_2F2 | 1);
        this->unk_278.status[1].dmaReq.unk14 = (s32) (s8 *)0x13820;
    }
}

void func_8087D540(Actor *this, GlobalContext *globalCtx) {
    f32 *temp_s1;
    f32 *temp_s1_2;
    s32 temp_v0;
    SkelAnime *phi_s1;

    if (Object_IsLoaded(&globalCtx->objectCtx, (s32) this->unk_154) != 0) {
        this->objBankIndex = this->unk_154;
        Actor_SetObjectSegment(globalCtx, this);
        this->update = EnHorse_Update;
        if (((bitwise s32) this[1].colChkInfo.displacement.y & 1) != 0) {
            temp_s1 = &this[1].scale.z;
            phi_s1 = (SkelAnime *) temp_s1;
            if ((bitwise s32) this[1].home.pos.y == 3) {
                temp_s1_2 = &this[1].scale.z;
                SkelAnime_InitSV(globalCtx, (SkelAnime *) temp_s1_2, &D_06008C68, NULL, &this[3].unk_22, (Vec3s *) &this[3].shape.rot.y, 0x1A);
                phi_s1 = (SkelAnime *) temp_s1_2;
            } else {
                SkelAnime_InitSV(globalCtx, (SkelAnime *) temp_s1, &D_060150D8, NULL, &this[3].unk_22, (Vec3s *) &this[3].shape.rot.y, 0x1A);
            }
        } else {
            temp_v0 = (bitwise s32) this[1].home.pos.y * 4;
            func_8013859C(globalCtx, &this[1].home.rot, *(&D_80888F40 + temp_v0), **(&D_80888F08 + temp_v0));
            phi_s1 = (SkelAnime *) &this[1].scale.z;
        }
        SkelAnime_ChangeAnimDefaultStop(phi_s1, *(*(&D_80888F08 + ((bitwise s32) this[1].home.pos.y * 4)) + ((s32) this[1].shape.shadowDraw * 4)));
    }
}

void EnHorse_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnHorse *this = (EnHorse *) thisx;
    if ((this->unk_1E8 * 0x10) < 0) {
        func_801A72CC(&this->unk_218);
    }
    func_80138700(globalCtx, &this->unk_158);
    Collider_DestroyCylinder(globalCtx, (ColliderCylinder *) &this->unk_278);
    Collider_DestroyCylinder(globalCtx, (ColliderCylinder *) &this->unk_278.status[0].loadMsg);
    Collider_DestroyJntSph(globalCtx, (ColliderJntSph *) &this->unk_278.status[2].segment);
}

void func_8087D70C(Actor *arg0, void *arg1) {
    func_8087B784(arg1->unk_1CCC + 0x24, (EnHorse *)0x320);
    if ((arg0[1].colChkInfo.displacement.x & 0x4000) != 0) {
        arg0->world.rot.y += 0x640;
    }
    arg0->shape.rot.y = arg0->world.rot.y;
}

void func_8087D75C(EnHorse *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    s32 temp_v0;
    void *temp_v1_2;

    temp_v0 = arg0->unk_144;
    if ((temp_v0 != 0x12) && (temp_v0 != 0x15) && (temp_v0 != 0x13)) {
        temp_v1 = arg0->actor.params;
        if ((*(&D_80889018 + temp_v1) != 0) && (temp_v1 != 6)) {
            temp_v1_2 = arg1->actorCtx.actorList[2].first;
            arg0->unk_14C = 0;
            arg0->unk_148 = 0;
            temp_v1_2->world.pos.x = arg0->actor.world.pos.x;
            temp_v1_2->world.pos.y = arg0->actor.world.pos.y;
            temp_v1_2->world.pos.z = arg0->actor.world.pos.z;
            temp_v1_2->world.pos.y += 70.0f;
        }
        arg0->unk_254 = arg0->unk_144;
        arg0->unk_144 = 0;
        arg0->unk_28A = (u8) (arg0->unk_28A & 0xFFFE);
        arg0->unk_2D6 = (u8) (arg0->unk_2D6 & 0xFFFE);
        arg0->unk_322 = (u8) (arg0->unk_322 & 0xFFFE);
        arg0->unk_20C = 0;
    }
}

void func_8087D814(Actor *arg0, void *arg1) {
    s16 temp_v0;
    s32 temp_t7;
    s32 temp_v0_2;

    arg0->speedXZ = 0.0f;
    temp_t7 = arg0[1].flags - 1;
    arg0[1].flags = temp_t7;
    if (temp_t7 < 0) {
        arg0[2].category |= 1;
        arg0[2].focus.unk_12 |= 1;
        arg0->unk_322 = (u8) (arg0->unk_322 | 1);
        if (arg0[1].shape.yOffset == 1) {
            temp_v0 = arg0->params;
            arg0[1].colChkInfo.displacement.x &= -0x81;
            if (temp_v0 == 6) {
                func_8087DDEC(arg0);
            } else if (temp_v0 == 0xB) {
                arg0->params = 7;
                if (arg1->unk_1F2C != 0) {
                    func_8087DE28(arg0);
                } else {
                    arg0->speedXZ = 8.0f;
                    func_8087EB78(arg0);
                }
            } else if (arg0[1].prevPos.z == 2) {
                func_8087DE28(arg0);
            } else {
                func_8087DDEC(arg0);
            }
            if (arg0->params != 0) {
                arg0->params = 0;
                return;
            }
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return;
        }
        temp_v0_2 = arg0[1].prevPos.z;
        if (temp_v0_2 == 7) {
            func_808804A4(arg0, NULL, 0.0f);
            return;
        }
        if (temp_v0_2 == 8) {
            func_808804A4(arg0, NULL, 0.0f);
            return;
        }
        func_808804A4(arg0, NULL, 0.0f);
        /* Duplicate return node #18. Try simplifying control flow for better match */
    }
}

void func_8087D988(Actor *arg0, Actor *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s16 arg7) {
    f32 sp40;
    s16 sp3E;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f2_7;
    f32 temp_f4;
    s32 temp_t7;
    s32 temp_t9;
    s32 temp_v0;
    f32 phi_f0;
    s32 phi_v0;
    f32 phi_f0_2;

    if (func_8087C8E0(arg0, arg1) == 0) {
        temp_f2 = arg0->speedXZ;
        if (temp_f2 > 8.0f) {
            arg0->speedXZ = temp_f2 - arg5;
            return;
        }
        if (temp_f2 < 0.0f) {
            arg0->speedXZ = 0.0f;
            return;
        }
        /* Duplicate return node #37. Try simplifying control flow for better match */
        return;
    }
    temp_f12 = arg6 * func_8087C208(arg0, arg1);
    arg6 = temp_f12;
    func_80885A80(temp_f12, arg0 + 0x264, &sp40, &sp3E);
    if (Math_CosS(sp3E) <= arg3) {
        arg0->speedXZ -= arg2;
        temp_f2_2 = arg0->speedXZ;
        if (temp_f2_2 < 0.0f) {
            arg0->speedXZ = 0.0f;
            return;
        }
        arg0->speedXZ = temp_f2_2;
        return;
    }
    if (sp40 < arg4) {
        temp_t7 = arg0[1].colChkInfo.displacement.x & ~1;
        arg0[1].colChkInfo.displacement.x = temp_t7;
        arg0[1].colChkInfo.displacement.x = temp_t7 & ~2;
        arg0->speedXZ -= arg5;
        if (arg0->speedXZ < 0.0f) {
            arg0->speedXZ = 0.0f;
            return;
        }
        /* Duplicate return node #37. Try simplifying control flow for better match */
        return;
    }
    temp_v0 = arg0[1].colChkInfo.displacement.x;
    if ((temp_v0 & 1) != 0) {
        if ((0x10 - arg0[1].projectedW) > 0) {
            temp_f2_3 = arg0->speedXZ;
            arg0->speedXZ = (((func_8087C208((bitwise Actor *) arg6, arg0, arg1) * (f32) arg0->unk_204) - temp_f2_3) / (16.0f - (f32) arg0[1].projectedW)) + temp_f2_3;
        } else {
            arg0->speedXZ = func_8087C208((bitwise Actor *) arg6, arg0, arg1) * (f32) arg0->unk_204;
        }
        if ((func_8087C208(arg0, arg1) * (f32) arg0->unk_204) <= arg0->speedXZ) {
            temp_t9 = arg0[1].colChkInfo.displacement.x & ~1;
            arg0[1].colChkInfo.displacement.x = temp_t9;
            arg0[1].colChkInfo.displacement.x = temp_t9 | 2;
        }
    } else if ((temp_v0 & 2) != 0) {
        temp_f2_4 = arg0->speedXZ;
        if (arg6 < temp_f2_4) {
            arg0->speedXZ = temp_f2_4 - 0.06f;
            goto block_29;
        }
        if (temp_f2_4 < arg6) {
            arg0->speedXZ = arg6;
            arg0[1].colChkInfo.displacement.x = temp_v0 & ~2;
        }
    } else {
        temp_f2_5 = arg0->speedXZ;
        if (temp_f2_5 <= (arg6 * 0.018518519f * sp40)) {
            phi_f0 = 1.0f;
        } else {
            phi_f0 = -1.0f;
        }
        arg0->speedXZ = temp_f2_5 + (phi_f0 * 50.0f * 0.01f);
        temp_f2_6 = arg0->speedXZ;
        if (arg6 < temp_f2_6) {
            arg0->speedXZ = temp_f2_6 - arg5;
            if (arg0->speedXZ < arg6) {
                arg0->speedXZ = arg6;
block_29:
            }
        }
    }
    temp_f0 = (f32) sp3E;
    temp_f12_2 = temp_f0 * 0.00003102122f;
    temp_f14 = 1.0f / (f32) arg0->unk_204;
    temp_f16 = (f32) (s16) (s32) (temp_f0 * temp_f12_2 * temp_f12_2 * (2.2f - (arg0->speedXZ * temp_f14)));
    temp_f18 = 2.2f - (1.7f * arg0->speedXZ * temp_f14);
    temp_f4 = (f32) -(s32) arg7 * temp_f18;
    sp24 = temp_f4;
    if (temp_f16 < temp_f4) {
        phi_v0 = (s32) temp_f4 << 0x10;
    } else {
        temp_f2_7 = (f32) arg7 * temp_f18;
        if (temp_f2_7 < temp_f16) {
            phi_f0_2 = temp_f2_7;
        } else {
            phi_f0_2 = temp_f16;
        }
        phi_v0 = (s32) phi_f0_2 << 0x10;
    }
    arg0->world.rot.y += phi_v0 >> 0x10;
    arg0->shape.rot.y = arg0->world.rot.y;
}

void func_8087DDEC(Actor *arg0) {
    arg0[1].minVelocityY = 0.0f;
    func_8087DE28();
    arg0[1].colChkInfo.displacement.x &= -0x1001;
}

void func_8087DE28(Actor *arg0) {
    f32 sp34;
    f32 temp_f0;
    s32 temp_v0;
    s32 temp_v1;
    s32 phi_v0;

    temp_f0 = arg0[1].shape.shadowScale;
    arg0->unk_144 = 7;
    arg0[1].shape.shadowDraw = 0;
    if (((temp_f0 > 35.0f) && (arg0[1].home.pos.y == 0)) || ((temp_v0 = arg0[1].home.pos.y, phi_v0 = temp_v0, (temp_f0 > 28.0f)) && (temp_v0 == 1))) {
        temp_v1 = arg0[1].colChkInfo.displacement.x;
        phi_v0 = arg0[1].home.pos.y;
        if ((temp_v1 & 0x1000) == 0) {
            arg0[1].colChkInfo.displacement.x = temp_v1 | 0x1000;
            if (arg0[1].home.pos.y == 2) {
                func_8019F1C0(arg0 + 0xEC, 0x282CU);
            } else {
                func_8019F1C0(arg0 + 0xEC, 0x282CU);
            }
            phi_v0 = arg0[1].home.pos.y;
        }
    }
    sp34 = arg0[1].minVelocityY;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4)), 1.0f, sp34, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (phi_v0 * 4)) + (arg0[1].shape.shadowDraw * 4))), (u8) 2, -3.0f);
}

void func_8087DF64(Actor *arg0, Actor *arg1) {
    f32 sp24;
    s16 sp22;

    sp22 = 0;
    arg0->speedXZ = 0.0f;
    func_80885A80((bitwise f32) (arg0 + 0x264), &sp24, (f32 *) &sp22);
    if (sp24 > 10.0f) {
        if (func_8087C8E0(arg0, arg1) == 1) {
            if (Math_CosS(sp22) <= -0.5f) {
                func_8087F590(arg0);
            } else if (Math_CosS(sp22) <= 0.7071f) {
                func_8087E2A8(arg0);
            } else {
                func_8087E564(arg0);
            }
        } else if (arg0->world.rot.y != arg0[3].unk20) {
            func_8087E2A8(arg0);
        }
    }
    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x1A4) != 0) {
        func_8087E080(arg0);
    }
}

void func_8087E080(Actor *arg0) {
    arg0[1].minVelocityY = 0.0f;
    func_8087E0A4();
}

void func_8087E0A4(void *arg0) {
    f32 sp34;

    arg0->unk_144 = 8;
    arg0->unk_20C = 1;
    sp34 = arg0->unk_1BC;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), 1.0f, sp34, (f32) SkelAnime_GetFrameCount((*(&D_80888F08 + (arg0->unk_150 * 4)))->unk_4), (u8) 2, -3.0f);
    if ((arg0->unk_1E8 * 0x10) < 0) {
        if (arg0->unk_150 == 2) {
            func_8019F1C0(arg0 + 0x218, 0x2845U);
            return;
        }
        func_8019F1C0(arg0 + 0x218, 0x2816U);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_8087E18C(Actor *arg0, Actor *arg1) {
    f32 sp24;
    s16 sp22;

    sp22 = 0;
    arg0->speedXZ = 0.0f;
    func_80885A80((bitwise f32) (arg0 + 0x264), &sp24, (f32 *) &sp22);
    if (sp24 > 10.0f) {
        if (func_8087C8E0(arg0, arg1) == 1) {
            if (Math_CosS(sp22) <= -0.5f) {
                func_8087F590(arg0);
            } else if (Math_CosS(sp22) <= 0.7071f) {
                func_8087E2A8(arg0);
            } else {
                func_8087E564(arg0);
            }
        } else if (arg0->world.rot.y != arg0[3].unk20) {
            func_8087E2A8(arg0);
        }
    }
    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x1A4) != 0) {
        func_8087DDEC(arg0);
    }
}

void func_8087E2A8(Actor *arg0) {
    arg0->unk_144 = 9;
    arg0->unk_214 = 0;
    arg0[1].shape.shadowDraw = 4;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((*(&D_80888F08 + (arg0[1].home.pos.y * 4)))->unk_10), (u8) 2, -3.0f);
}

void func_8087E350(Actor *arg0, Actor *arg1) {
    f32 sp2C;
    f32 sp28;
    f32 temp_f0;
    s32 phi_v0;
    f32 phi_f2;

    arg0->speedXZ = 0.0f;
    func_8087C0AC(arg0);
    if (func_8087C8E0(arg0, arg1) == 1) {
        func_80885A80((bitwise f32) (arg0 + 0x264), &sp2C, &sp28);
        if (sp2C > 10.0f) {
            if (func_8087C8E0(arg0, arg1) == 0) {
                func_8087DDEC(arg0);
            } else if (Math_CosS((bitwise s16) sp28) <= -0.5f) {
                func_8087F590(arg0);
            } else if (Math_CosS((bitwise s16) sp28) <= 0.7071f) {
                temp_f0 = (f32) (bitwise s16) sp28;
                if (temp_f0 < -1600.0f) {
                    phi_v0 = (s32) -1600.0f << 0x10;
                } else {
                    if (temp_f0 > 1600.0f) {
                        phi_f2 = 1600.0f;
                    } else {
                        phi_f2 = temp_f0;
                    }
                    phi_v0 = (s32) phi_f2 << 0x10;
                }
                arg0->world.rot.y += phi_v0 >> 0x10;
                arg0->shape.rot.y = arg0->world.rot.y;
            } else {
                func_8087E5B4(arg0);
            }
        }
    }
    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x1A4) != 0) {
        if (func_8087C8E0(arg0, arg1) == 1) {
            if (Math_CosS((bitwise s16) sp28) <= 0.7071f) {
                func_8087E2A8(arg0);
                return;
            }
            func_8087DDEC(arg0);
            return;
        }
        if (arg0->world.rot.y != arg0[3].unk20) {
            func_8087E2A8(arg0);
            return;
        }
        func_8087DDEC(arg0);
        /* Duplicate return node #23. Try simplifying control flow for better match */
    }
}

void func_8087E564(Actor *arg0) {
    s32 temp_v0;

    func_8087E5B4();
    temp_v0 = arg0[1].colChkInfo.displacement.x;
    if (((temp_v0 & 0x100) == 0) && ((temp_v0 & 0x200) == 0)) {
        arg0[1].colChkInfo.displacement.x = temp_v0 | 0x200;
        arg0->unk_37C = 8;
        return;
    }
    arg0->unk_37C = 0;
}

void func_8087E5B4(Actor *arg0) {
    arg0[1].flags = 0;
    arg0[1].home.pos.x = 0.0f;
    func_8087E5D8();
}

void func_8087E5D8(Actor *arg0) {
    arg0->unk_144 = 0xA;
    arg0->unk_214 = 0;
    arg0[1].shape.shadowDraw = 4;
    arg0->unk_37C = 0;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((*(&D_80888F08 + (arg0[1].home.pos.y * 4)))->unk_10), (u8) 2, -3.0f);
}

void func_8087E684(Actor *arg0) {
    arg0->unk_144 = 0xA;
    arg0->unk_214 = 0;
    arg0[1].shape.shadowDraw = (void (*)(Actor *, Lights *, GlobalContext *))4;
    arg0->unk_37C = 0;
    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x1A4, (*(&D_80888F08 + (arg0[1].home.pos.y * 4)))->unk_10);
}

void func_8087E6D8(Actor *arg0, Actor *arg1) {
    f32 sp3C;
    f32 sp3A;
    f32 temp_f0;
    s16 temp_v0_3;
    s32 temp_t2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;

    func_8087C0AC(arg0);
    func_80885A80((bitwise f32) (arg0 + 0x264), &sp3C, &sp3A);
    temp_v1 = arg0[1].home.pos.x;
    if ((temp_v1 == 0) || ((temp_v0 = arg0[1].flags, (temp_v0 > 0)) && (temp_v0 < (temp_v1 - 0x14)))) {
        func_8087D988(arg0, arg1, 0.3f, -0.5f, 10.0f, 0.06f, 3.0f, (s16) 0x320);
    } else {
        arg0->speedXZ = 3.0f;
    }
    temp_f0 = arg0->speedXZ;
    if (temp_f0 == 0.0f) {
        arg0[1].colChkInfo.displacement.x &= -0x201;
        func_8087DDEC(arg0);
        arg0[1].flags = 0;
        goto block_9;
    }
    if (temp_f0 > 3.0f) {
        arg0[1].colChkInfo.displacement.x &= -0x201;
        func_8087E92C(arg0);
        arg0[1].flags = 0;
block_9:
        arg0[1].home.pos.x = 0;
    }
    temp_v0_2 = arg0[1].flags;
    temp_t2 = temp_v0_2 - 1;
    if (temp_v0_2 > 0) {
        arg0[1].flags = temp_t2;
        if (temp_t2 <= 0) {
            arg0[1].home.pos.x = 0;
        }
    }
    temp_v0_3 = arg0->unk_37C;
    if ((s32) temp_v0_3 <= 0) {
        arg0[1].colChkInfo.displacement.x &= -0x201;
        arg0[1].wallPoly = arg0->speedXZ * 0.75f;
        if (((SkelAnime_FrameUpdateMatrix(arg0 + 0x1A4) != 0) || (arg0->speedXZ == 0.0f)) && (arg0[1].flags <= 0)) {
            if (arg0->speedXZ > 3.0f) {
                func_8087E92C(arg0);
                arg0[1].flags = 0;
                arg0[1].home.pos.x = 0;
                return;
            }
            if ((sp3C < 10.0f) || (Math_CosS((bitwise s16) sp3A) <= -0.5f)) {
                func_8087DDEC(arg0);
                arg0[1].flags = 0;
                arg0[1].home.pos.x = 0;
                return;
            }
            func_8087E684(arg0);
            return;
        }
        /* Duplicate return node #24. Try simplifying control flow for better match */
        return;
    }
    arg0->unk_37C = (s16) (temp_v0_3 - 1);
    arg0->speedXZ = 0.0f;
}

void func_8087E92C(Actor *arg0) {
    arg0->unk_144 = 0xB;
    arg0[1].shape.shadowDraw = 5;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((*(&D_80888F08 + (arg0[1].home.pos.y * 4)))->unk_14), (u8) 2, -3.0f);
}

void func_8087E9D0(Actor *arg0) {
    arg0->unk_144 = 0xB;
    arg0[1].shape.shadowDraw = (void (*)(Actor *, Lights *, GlobalContext *))5;
    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x1A4, (*(&D_80888F08 + (arg0[1].home.pos.y * 4)))->unk_14);
}

void func_8087EA1C(Actor *arg0) {
    f32 sp3C;
    f32 sp3A;
    f32 temp_f0;

    func_8087D988(arg0, (Actor *)0x3E99999A, -0.5f, 10.0f, 0.06f, 6.0f, 1.121e-42f);
    func_80885A80((bitwise f32) (arg0 + 0x264), &sp3C, &sp3A);
    if (arg0->speedXZ < 3.0f) {
        func_8087E5B4(arg0);
    }
    arg0[1].wallPoly = arg0->speedXZ * 0.375f;
    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x1A4) != 0) {
        func_8087C178(arg0);
        func_8013ECE0(0.0f, 0x3CU, 8U, 0xFFU);
        temp_f0 = arg0->speedXZ;
        if (temp_f0 >= 6.0f) {
            func_8087EB54(arg0);
            return;
        }
        if (temp_f0 < 3.0f) {
            func_8087E5B4(arg0);
            return;
        }
        func_8087E9D0(arg0);
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_8087EB54(Actor *arg0) {
    arg0[1].flags = 0;
    arg0[1].home.pos.x = 0.0f;
    func_8087EB78();
}

void func_8087EB78(Actor *arg0) {
    arg0->unk_144 = 0xC;
    arg0[1].shape.shadowDraw = 6;
    arg0[1].projectedPos.x = 0.0f;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((*(&D_80888F08 + (arg0[1].home.pos.y * 4)))->unk_18), (u8) 2, -3.0f);
}

void func_8087EC20(Actor *arg0) {
    arg0[1].flags = 0;
    arg0[1].home.pos.x = 0.0f;
    arg0->unk_144 = 0xC;
    arg0[1].shape.shadowDraw = (void (*)(Actor *, Lights *, GlobalContext *))6;
    arg0[1].projectedPos.x = 0.0f;
    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x1A4, (*(&D_80888F08 + (arg0[1].home.pos.y * 4)))->unk_18);
}

void func_8087EC78(void *arg0, GlobalContext *arg1) {
    AnimationHeader *temp_a1;
    SkelAnime *temp_a0;

    arg0->unk_144 = 0xC;
    arg0->unk_20C = 6;
    temp_a0 = arg0 + 0x1A4;
    temp_a1 = (*(&D_80888F08 + (arg0->unk_150 * 4)))->unk_18;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, temp_a1);
    arg0->unk_240 = 0;
    arg0->unk_25C = (f32) (arg0->unk_25C + ((f32) arg0->unk_1C4->unk_2 * 0.01f * arg0->unk_528 * 0.01f));
}

void func_8087ED10(Actor *arg0, Actor *arg1) {
    f32 sp3C;
    f32 sp3A;
    s32 temp_v0;

    func_80885A80((bitwise f32) (arg0 + 0x264), &sp3C, &sp3A);
    temp_v0 = arg0[1].flags;
    if (temp_v0 <= 0) {
        func_8087D988(arg0, arg1, 0.3f, -0.5f, 10.0f, 0.06f, 8.0f, (s16) 0x320);
    } else if (temp_v0 > 0) {
        arg0[1].flags = temp_v0 - 1;
        arg0->speedXZ = 8.0f;
    }
    if (arg0->speedXZ < 6.0f) {
        func_8087E92C(arg0);
    }
    arg0[1].wallPoly = arg0->speedXZ * 0.3f;
    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x1A4) != 0) {
        func_8087C1C0(arg0);
        func_8013ECE0(0.0f, 0x78U, 8U, 0xFFU);
        if (func_8087C8E0(arg0, arg1) == 1) {
            if ((sp3C >= 10.0f) && (Math_CosS((bitwise s16) sp3A) <= -0.5f)) {
                func_8087F1FC(arg0, arg1);
                return;
            }
            if (arg0->speedXZ < 6.0f) {
                func_8087E92C(arg0);
                return;
            }
            func_8087EC20(arg0);
            return;
        }
        func_8087EC20(arg0);
        /* Duplicate return node #15. Try simplifying control flow for better match */
    }
}

void func_8087EEC4(Actor *arg0) {
    Vec3f *temp_a0;
    s32 temp_t8;

    arg0->unk_144 = 0xD;
    arg0[1].shape.shadowDraw = 3;
    if ((*(&D_80888F08 + (arg0[1].home.pos.y * 4)))->unk_C == 0) {
        if (Rand_ZeroOne() > 0.5f) {
            if ((arg0[1].colChkInfo.displacement.x * 0x10) < 0) {
                if (arg0[1].home.pos.y == 2) {
                    func_8019F1C0(arg0 + 0x218, 0x2844U);
                } else {
                    func_8019F1C0(arg0 + 0x218, 0x2805U);
                }
            }
            func_8013ECE0(0.0f, 0xB4U, 0x14U, 0x64U);
            arg0[1].colChkInfo.displacement.x &= -0x401;
        }
        func_8087DDEC(arg0);
    }
    temp_t8 = arg0[1].colChkInfo.displacement.x & ~0x800;
    arg0[1].colChkInfo.displacement.x = temp_t8;
    if ((temp_t8 * 0x10) < 0) {
        temp_a0 = arg0 + 0x218;
        if (arg0[1].home.pos.y == 2) {
            func_8019F1C0(temp_a0, 0x2844U);
        } else {
            func_8019F1C0(temp_a0, 0x2805U);
        }
    }
    func_8013ECE0(0.0f, 0xB4U, 0x14U, 0x64U);
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4))), (u8) 2, -3.0f);
}

void func_8087F078(Actor *arg0, Actor *arg1) {
    f32 sp2C;
    f32 sp2A;
    s32 temp_v0;
    s32 temp_v0_2;

    arg0->speedXZ = 0.0f;
    if (arg0[1].shape.shadowScale > 25.0f) {
        temp_v0 = arg0[1].colChkInfo.displacement.x;
        if ((temp_v0 & 0x800) == 0) {
            arg0[1].colChkInfo.displacement.x = temp_v0 | 0x800;
            if (arg0[1].home.pos.y == 2) {
                func_8019F1C0(arg0 + 0xEC, 0x282BU);
            } else {
                func_8019F1C0(arg0 + 0xEC, 0x282BU);
            }
            func_8013ECE0(0.0f, 0xB4U, 0x14U, 0x64U);
        }
    }
    func_80885A80((bitwise f32) (arg0 + 0x264), &sp2C, &sp2A);
    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x1A4) != 0) {
        if (func_8087C8E0(arg0, arg1) == 1) {
            temp_v0_2 = arg0[1].colChkInfo.displacement.x;
            if ((temp_v0_2 & 0x10) != 0) {
                arg0[1].flags = 0x64;
                arg0[1].home.pos.x = 0x64;
                arg0[1].colChkInfo.displacement.x = temp_v0_2 & ~0x10;
                func_8087F5B4(arg0);
                return;
            }
            if ((temp_v0_2 & 0x20) != 0) {
                arg0[1].flags = 0x64;
                arg0[1].home.pos.x = 0x64;
                arg0[1].colChkInfo.displacement.x = temp_v0_2 & ~0x20;
                func_8087E5D8(arg0);
                return;
            }
            if (Math_CosS((bitwise s16) sp2A) <= -0.5f) {
                func_8087F590(arg0);
                return;
            }
            func_8087DDEC(arg0);
            return;
        }
        func_8087DDEC(arg0);
        /* Duplicate return node #16. Try simplifying control flow for better match */
    }
}

void func_8087F1FC(Actor *arg0, Actor *arg1) {
    s32 temp_t0;

    arg0->unk_144 = 0xE;
    arg0[1].shape.shadowDraw = 2;
    if ((*(&D_80888F08 + (arg0[1].home.pos.y * 4)))->unk_8 == 0) {
        if (Rand_ZeroOne() > 0.5f) {
            if ((arg0[1].colChkInfo.displacement.x * 0x10) < 0) {
                if (arg0[1].home.pos.y == 2) {
                    func_8019F1C0(arg0 + 0x218, 0x2844U);
                } else {
                    func_8019F1C0(arg0 + 0x218, 0x2805U);
                }
            }
            func_8013ECE0(0.0f, 0xB4U, 0x14U, 0x64U);
            arg0[1].colChkInfo.displacement.x &= -0x401;
        }
        func_8087DDEC(arg0);
    }
    if (arg0[1].home.pos.y == 2) {
        func_8019F1C0(arg0 + 0xEC, 0x281AU);
    } else {
        func_8019F1C0(arg0 + 0xEC, 0x281AU);
    }
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4)), 1.5f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4))), (u8) 2, -3.0f);
    temp_t0 = arg0[1].colChkInfo.displacement.x | 0x400;
    arg0[1].colChkInfo.displacement.x = temp_t0;
    arg0[1].colChkInfo.displacement.x = temp_t0 & ~1;
}

void func_8087F39C(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;

    temp_f0 = arg0->speedXZ;
    if (temp_f0 > 0.0f) {
        arg0->speedXZ = temp_f0 - 0.6f;
        if (arg0->speedXZ < 0.0f) {
            arg0->speedXZ = 0.0f;
        }
    }
    if (((arg0[1].colChkInfo.displacement.x & 0x400) != 0) && (arg0[1].minVelocityY > 29.0f)) {
        arg0->speedXZ = 0.0f;
        if ((Rand_ZeroOne() > 0.5f) && ((gSaveContext.entranceIndex != 0x6400) || (func_800EE1D8(arg1) == 0))) {
            if ((arg0[1].colChkInfo.displacement.x * 0x10) < 0) {
                if (arg0[1].home.pos.y == 2) {
                    func_8019F1C0(arg0 + 0x218, 0x2844U);
                } else {
                    func_8019F1C0(arg0 + 0x218, 0x2805U);
                }
            }
            func_8013ECE0(0.0f, 0xB4U, 0x14U, 0x64U);
            arg0[1].colChkInfo.displacement.x &= -0x401;
        } else {
            func_8087DDEC(arg0);
        }
    }
    if (arg0[1].minVelocityY > 29.0f) {
        arg0->speedXZ = 0.0f;
    } else if ((arg0->speedXZ > 3.0f) && ((arg0[1].colChkInfo.displacement.x & 0x10) != 0)) {
        arg0->speedXZ = 3.0f;
    }
    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x1A4) != 0) {
        if ((arg0[1].colChkInfo.displacement.x & 0x10) != 0) {
            arg0[1].flags = 0x64;
            arg0[1].home.pos.x = 0x64;
            func_8087F5B4(arg0);
            arg0[1].colChkInfo.displacement.x &= -0x11;
            return;
        }
        func_8087DDEC(arg0);
        /* Duplicate return node #23. Try simplifying control flow for better match */
    }
}

void func_8087F590(Actor *arg0) {
    arg0[1].flags = 0;
    arg0[1].home.pos.x = 0.0f;
    func_8087F5B4();
}

void func_8087F5B4(Actor *arg0) {
    arg0->unk_144 = 0xF;
    arg0[1].shape.shadowDraw = 4;
    arg0->unk_214 = 0;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((*(&D_80888F08 + (arg0[1].home.pos.y * 4)))->unk_10), (u8) 0, -3.0f);
}

void func_8087F658(Actor *arg0, Actor *arg1) {
    f32 sp34;
    f32 sp32;
    void *sp2C;
    f32 temp_f0;
    s32 temp_t2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 phi_v1;
    f32 phi_f2;

    sp2C = arg1[22].projectedPos.z;
    func_8087C0AC(arg0);
    func_80885A80((bitwise f32) (arg0 + 0x264), &sp34, &sp32);
    if (func_8087C8E0(arg0, arg1) == 1) {
        temp_v1 = arg0[1].home.pos.x;
        if ((temp_v1 == 0) || ((temp_v0 = arg0[1].flags, (temp_v0 > 0)) && (temp_v0 < (temp_v1 - 0x14)))) {
            if ((sp34 < 10.0f) && (arg0[1].flags <= 0)) {
                func_8087DDEC(arg0);
                arg0->speedXZ = 0.0f;
                return;
            }
            if (sp34 < 10.0f) {
                goto block_18;
            }
            if (Math_CosS((bitwise s16) sp32) > -0.5f) {
                arg0[1].home.pos.x = 0;
                func_8087DDEC(arg0);
                arg0->speedXZ = 0.0f;
                return;
            }
            goto block_19;
        }
        if (sp34 < 10.0f) {
            sp32 = -0x7FFF;
        }
        goto block_19;
    }
    if (((sp2C->unk_4 & 0x100) != 0) || (arg1->unk_1F2C != 0) || (ActorCutscene_GetCurrentIndex() != -1) || ((sp2C->unk_A6C & 0x20) != 0)) {
        func_8087DDEC(arg0);
        arg0->speedXZ = 0.0f;
        return;
    }
block_18:
    sp32 = -0x7FFF;
block_19:
    arg0->speedXZ = -2.0f;
    temp_f0 = (f32) (s16) (-0x8000 - (bitwise s16) sp32);
    if (temp_f0 < -2400.0f) {
        phi_v1 = (s32) -2400.0f << 0x10;
    } else {
        if (temp_f0 > 2400.0f) {
            phi_f2 = 2400.0f;
        } else {
            phi_f2 = temp_f0;
        }
        phi_v1 = (s32) phi_f2 << 0x10;
    }
    temp_v0_2 = arg0[1].flags;
    arg0->world.rot.y += phi_v1 >> 0x10;
    arg0->shape.rot.y = arg0->world.rot.y;
    if (temp_v0_2 > 0) {
        temp_t2 = temp_v0_2 - 1;
        arg0[1].flags = temp_t2;
        if (temp_t2 <= 0) {
            arg0[1].home.pos.x = 0;
        }
    }
    arg0[1].wallPoly = arg0->speedXZ * 0.5f * 1.5f;
    if ((SkelAnime_FrameUpdateMatrix(arg0 + 0x1A4) != 0) && (arg0[1].flags <= 0) && (func_8087C8E0(arg0, arg1) == 1)) {
        if ((sp34 > 10.0f) && (Math_CosS((bitwise s16) sp32) <= -0.5f)) {
            arg0[1].home.pos.x = 0;
            func_8087F590(arg0);
            return;
        }
        if (sp34 < 10.0f) {
            arg0[1].home.pos.x = 0;
            func_8087DDEC(arg0);
            return;
        }
        func_8087F5B4(arg0);
        /* Duplicate return node #37. Try simplifying control flow for better match */
    }
}

void func_8087F9A0(void *arg0) {
    arg0->unk_1BC = 0.0f;
    func_8087F9C4();
}

void func_8087F9C4(void *arg0, ? arg1) {
    f32 sp34;

    arg0->unk_144 = 0x10;
    arg0->unk_20C = 7;
    sp34 = arg0->unk_1BC;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), 1.5f, sp34, (f32) SkelAnime_GetFrameCount((*(&D_80888F08 + (arg0->unk_150 * 4)))->unk_1C), (u8) 2, -3.0f);
    arg0->unk_240 = 0;
    arg0->unk_274 = (f32) arg0->unk_28;
    arg0->unk_74 = 0.0f;
    arg0->unk_68 = 0.0f;
    arg0->unk_25C = (f32) (arg0->unk_25C - ((f32) arg0->unk_1C4->unk_2 * 0.01f * arg0->unk_528 * 0.01f));
    if (arg0->unk_150 == 2) {
        func_8019F1C0(arg0 + 0xEC, 0x2818U);
    } else {
        func_8019F1C0(arg0 + 0xEC, 0x2818U);
    }
    func_8013ECE0(0.0f, 0xAAU, 0xAU, 0xAU);
}

void func_8087FB08(Actor *arg0) {

}

void func_8087FB14(void *arg0, GlobalContext *arg1) {
    f32 sp44;
    s32 sp3C;
    s32 sp38;
    f32 sp30;
    ? sp2C;
    f32 temp_f0;
    f32 temp_f12;

    arg0->unk_1E8 = (s32) (arg0->unk_1E8 | 4);
    if (arg0->unk_70 < 12.0f) {
        arg0->unk_70 = 12.0f;
    }
    if (arg0->unk_88 != -32000.0f) {
        sp2C.unk_0 = (s32) arg0->unk_24;
        sp2C.unk_4 = (f32) arg0->unk_28;
        sp2C.unk_8 = (s32) arg0->unk_2C;
        sp30 = arg0->unk_88 - 5.0f;
        temp_f0 = func_800C4188(arg1, arg1 + 0x830, &sp3C, &sp38, arg0, &sp2C);
        if ((arg0->unk_88 - 120.0f) < temp_f0) {
            arg0->unk_88 = temp_f0;
            arg0->unk_80 = sp3C;
            arg0->unk_85 = (s8) sp38;
        }
    }
    temp_f12 = arg0->unk_1BC;
    if (temp_f12 > 17.0f) {
        arg0->unk_74 = -3.5f;
        if (arg0->unk_68 == 0.0f) {
            arg0->unk_68 = -6.0f;
        }
        if (arg0->unk_28 < (arg0->unk_88 + 90.0f)) {
            arg0->unk_1C0 = 1.5f;
        } else {
            arg0->unk_1C0 = 0.0f;
        }
    } else {
        arg0->unk_28 = (f32) (arg0->unk_274 + ((f32) arg0->unk_1C4->unk_2 * 0.01f * arg0->unk_528 * 0.01f));
    }
    sp44 = temp_f12;
    if ((SkelAnime_FrameUpdateMatrix(arg0 + 0x1A4) != 0) || ((temp_f12 > 17.0f) && (arg0->unk_28 < ((arg0->unk_88 - arg0->unk_68) + 80.0f)))) {
        if (arg0->unk_150 == 2) {
            func_8019F1C0(arg0 + 0xEC, 0x2819U);
        } else {
            func_8019F1C0(arg0 + 0xEC, 0x2819U);
        }
        func_8013ECE0(0.0f, 0xFFU, 0xAU, 0x50U);
        arg0->unk_1E8 = (s32) (arg0->unk_1E8 & ~4);
        arg0->unk_28 = (f32) arg0->unk_88;
        arg0->unk_74 = -3.5f;
        func_8087EC78(arg0, arg1);
    }
}

void func_8087FD94(void *arg0) {
    arg0->unk_1BC = 0.0f;
    func_8087FDB8();
}

void func_8087FDB8(void *arg0, ? arg1) {
    f32 sp34;

    arg0->unk_144 = 0x11;
    arg0->unk_20C = 8;
    sp34 = arg0->unk_1BC;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), 1.5f, sp34, (f32) SkelAnime_GetFrameCount((*(&D_80888F08 + (arg0->unk_150 * 4)))->unk_20), (u8) 2, -3.0f);
    arg0->unk_240 = 0;
    arg0->unk_274 = (f32) arg0->unk_28;
    arg0->unk_74 = 0.0f;
    arg0->unk_68 = 0.0f;
    arg0->unk_1E8 = (s32) (arg0->unk_1E8 | 8);
    arg0->unk_25C = (f32) (arg0->unk_25C - ((f32) arg0->unk_1C4->unk_2 * 0.01f * arg0->unk_528 * 0.01f));
    if (arg0->unk_150 == 2) {
        func_8019F1C0(arg0 + 0xEC, 0x2818U);
    } else {
        func_8019F1C0(arg0 + 0xEC, 0x2818U);
    }
    func_8013ECE0(0.0f, 0xAAU, 0xAU, 0xAU);
}

void func_8087FF08(Actor *arg0) {

}

void func_8087FF14(void *arg0, GlobalContext *arg1) {
    f32 sp44;
    s32 sp3C;
    s32 sp38;
    f32 sp30;
    ? sp2C;
    Vec3f *sp28;
    f32 temp_f0;
    f32 temp_f12;

    arg0->unk_1E8 = (s32) (arg0->unk_1E8 | 4);
    if (arg0->unk_70 < 13.0f) {
        arg0->unk_70 = 13.0f;
    }
    if (arg0->unk_88 != -32000.0f) {
        sp2C.unk_0 = (s32) arg0->unk_24;
        sp2C.unk_4 = (f32) arg0->unk_28;
        sp2C.unk_8 = (s32) arg0->unk_2C;
        sp30 = arg0->unk_88 - 5.0f;
        temp_f0 = func_800C4188(arg1, arg1 + 0x830, &sp3C, &sp38, arg0, &sp2C);
        if ((arg0->unk_88 - 120.0f) < temp_f0) {
            arg0->unk_88 = temp_f0;
            arg0->unk_80 = sp3C;
            arg0->unk_85 = (s8) sp38;
        }
    }
    temp_f12 = arg0->unk_1BC;
    if (temp_f12 > 23.0f) {
        arg0->unk_74 = -3.5f;
        if (arg0->unk_68 == 0.0f) {
            arg0->unk_68 = -10.5f;
        }
        if (arg0->unk_28 < (arg0->unk_88 + 90.0f)) {
            arg0->unk_1C0 = 1.5f;
        } else {
            arg0->unk_1C0 = 0.0f;
        }
    } else {
        arg0->unk_28 = (f32) (arg0->unk_274 + ((f32) arg0->unk_1C4->unk_2 * 0.01f * arg0->unk_528 * 0.01f));
    }
    sp44 = temp_f12;
    if ((SkelAnime_FrameUpdateMatrix(arg0 + 0x1A4) != 0) || ((temp_f12 > 23.0f) && (arg0->unk_28 < ((arg0->unk_88 - arg0->unk_68) + 80.0f)))) {
        sp28 = arg0 + 0x24;
        if (arg0->unk_150 == 2) {
            func_8019F1C0(arg0 + 0xEC, 0x2819U);
        } else {
            func_8019F1C0(arg0 + 0xEC, 0x2819U);
        }
        func_8013ECE0(0.0f, 0xFFU, 0xAU, 0x50U);
        arg0->unk_1E8 = (s32) (arg0->unk_1E8 & ~4);
        arg0->unk_28 = (f32) arg0->unk_88;
        arg0->unk_74 = -3.5f;
        func_800B1598(arg1, 25.0f, sp28);
        func_8087EC78(arg0, arg1);
    }
}

void func_808801A8(EnHorse *arg0) {
    arg0->unk_28A = (u8) (arg0->unk_28A & ~1);
    arg0->unk_2D6 = (u8) (arg0->unk_2D6 & ~1);
    arg0->unk_322 = (u8) (arg0->unk_322 & ~1);
    arg0->unk_144 = 1;
    arg0->unk_20C = 4;
    arg0->unk_1E8 |= 0x2000;
    arg0->unk_250 = 0;
}

void func_808801F8(Actor *arg0, void *arg1) {
    if ((D_801BDAA4 != 0) && (arg0[1].home.pos.y == 2)) {
        D_801BDAA4 = 0;
        if (func_8087C590(arg0, arg1) != 0) {
            if ((bitwise s32) arg0[1].home.pos.y == 2) {
                func_8019F1C0(&arg0->projectedPos, 0x2844U);
            }
            arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) arg0[1].colChkInfo.displacement.x & ~0x2000);
        }
    }
    if (((bitwise s32) arg0[1].colChkInfo.displacement.x & 0x2000) == 0) {
        arg0->unk_250 = 0;
        func_80880844(arg0, arg1);
        arg0->params = 0;
        arg0[2].category |= 1;
        arg0[2].focus.unk_12 |= 1;
        arg0->unk_322 = (u8) (arg0->unk_322 | 1);
    }
}

void func_808802D0(Actor *arg0, s32 arg1, f32 arg2, f32 arg3) {
    s32 temp_v0;
    s32 phi_a1;
    s32 phi_a1_2;
    s32 phi_v0;

    arg0->unk_144 = 2;
    arg0->speedXZ = 0.0f;
    phi_a1 = arg1;
    if ((arg1 != 0) && (arg1 != 1) && (arg1 != 3)) {
        phi_a1 = 0;
    }
    phi_a1_2 = phi_a1;
    if (*(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (phi_a1 * 4)) == 0) {
        phi_a1_2 = 0;
    }
    if (phi_a1_2 != arg0[1].shape.shadowDraw) {
        arg0[1].shape.shadowDraw = phi_a1_2;
        if (phi_a1_2 == 0) {
            arg0[1].colChkInfo.displacement.x &= -0x1001;
            phi_v0 = phi_a1_2;
        } else {
            temp_v0 = arg0[1].shape.shadowDraw;
            phi_v0 = temp_v0;
            if (temp_v0 == 1) {
                if ((arg0[1].colChkInfo.displacement.x * 0x10) < 0) {
                    if (arg0[1].home.pos.y == 2) {
                        func_8019F1C0(arg0 + 0x218, 0x2845U);
                    } else {
                        func_8019F1C0(arg0 + 0x218, 0x2816U);
                    }
                    goto block_21;
                }
            } else if (temp_v0 == 3) {
                if ((arg0[1].colChkInfo.displacement.x * 0x10) < 0) {
                    if (arg0[1].home.pos.y == 2) {
                        func_8019F1C0(arg0 + 0x218, 0x2844U);
                    } else {
                        func_8019F1C0(arg0 + 0x218, 0x2805U);
                    }
                }
                arg0[1].colChkInfo.displacement.x &= -0x801;
block_21:
                phi_v0 = arg0[1].shape.shadowDraw;
            }
        }
        SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4)), 1.0f, arg3, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (phi_v0 * 4))), (u8) 2, arg2);
    }
}

void func_808804A4(Actor *arg0, Actor *arg2) {
    func_808802D0(arg2, (s32) arg2, arg0[1].shape.shadowScale);
}

void func_808804CC(EnHorse *arg0) {
    arg0->unk_20C = 4;
    func_808802D0((Actor *)4, 0, (bitwise f32) 0);
}

void func_80880500(EnHorse *arg0) {
    func_808804CC();
    arg0->unk_1E8 &= 0xFFFEFFFF;
}

void func_80880534(Actor *arg0, void *arg1) {
    s32 sp24;
    void (*temp_v0)(Actor *, Lights *, GlobalContext *);
    s32 phi_v1;
    s32 phi_v0;

    arg0->speedXZ = 0.0f;
    func_8087C43C(arg0, arg1);
    if ((D_801BDAA4 != 0) && (arg0[1].home.pos.y == 2)) {
        D_801BDAA4 = 0;
        if (func_8087C38C(arg1, arg0, arg0 + 0x24) == 0) {
            if (func_8087C590(arg0, arg1) != 0) {
                if ((bitwise s32) arg0[1].home.pos.y == 2) {
                    func_8019F1C0(&arg0->projectedPos, 0x2844U);
                } else {
                    func_8019F1C0(&arg0->projectedPos, 0x2805U);
                }
                arg0->unk_250 = 0;
                func_80880844(arg0, arg1);
            }
        } else {
            if ((bitwise s32) arg0[1].home.pos.y == 2) {
                func_8019F1C0(&arg0->projectedPos, 0x2844U);
            } else {
                func_8019F1C0(&arg0->projectedPos, 0x2805U);
            }
            arg0->unk_250 = 0;
            func_808806DC(arg0, 6, -3.0f, 0.0f);
        }
    }
    if (SkelAnime_FrameUpdateMatrix((SkelAnime *) &arg0[1].scale.z) != 0) {
        temp_v0 = arg0[1].shape.shadowDraw;
        phi_v1 = 0;
        if (temp_v0 != 0) {
            if (temp_v0 == 1) {
                phi_v1 = 1;
            } else if (temp_v0 == 3) {
                phi_v1 = 2;
            }
        }
        sp24 = phi_v1;
        phi_v0 = 1;
        if (Rand_ZeroOne() > 0.5f) {
            phi_v0 = 0;
        }
        func_808802D0(arg0, *(&D_80889030 + ((phi_v0 * 4) + (phi_v1 * 8))), 0.0f, 0.0f);
    }
}

void func_808806DC(Actor *arg0, s32 arg1, f32 arg2, f32 arg3) {
    s32 temp_v0;
    s32 phi_a1;

    arg0->unk_144 = 3;
    arg0[1].colChkInfo.displacement.x &= 0xFFFF7FFF;
    phi_a1 = arg1;
    if ((arg1 != 5) && (arg1 != 6) && (arg1 != 4)) {
        phi_a1 = 4;
    }
    temp_v0 = arg0[1].shape.shadowDraw;
    if (phi_a1 != temp_v0) {
        arg0[1].shape.shadowDraw = phi_a1;
        SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4)), 1.0f, arg3, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (phi_a1 * 4))), (u8) 2, arg2);
        return;
    }
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4)), 1.0f, arg3, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (temp_v0 * 4))), (u8) 2, 0.0f);
}

void func_80880844(Actor *arg0, void *arg1) {
    f32 temp_f0;
    void (*temp_v0)(Actor *, Lights *, GlobalContext *);
    f32 phi_s0;

    temp_f0 = Actor_XZDistanceBetweenActors(arg0, arg1->unk_1CCC);
    phi_s0 = 6e-45.0f;
    phi_s0 = 6e-45.0f;
    if (temp_f0 > 400.0f) {
        phi_s0 = 8e-45.0f;
    } else if (!(temp_f0 <= 300.0f) && (temp_f0 <= 400.0f)) {
        phi_s0 = 7e-45.0f;
    }
    temp_v0 = arg0[1].shape.shadowDraw;
    if (temp_v0 == 6) {
        if (temp_f0 > 400.0f) {
            phi_s0 = 8e-45.0f;
        } else {
            phi_s0 = 7e-45.0f;
        }
    } else if (temp_v0 == 5) {
        if (temp_f0 > 400.0f) {
            phi_s0 = 8e-45.0f;
        } else if (temp_f0 < 300.0f) {

        } else {
            phi_s0 = 7e-45.0f;
        }
    } else if ((temp_v0 == 4) && (temp_f0 > 300.0f)) {
        phi_s0 = 7e-45.0f;
    }
    func_808806DC((bitwise Actor *) 300.0f, (s32) arg0, phi_s0, -3.0f, 0);
}

void func_80880978(Actor *arg0, void *arg1) {
    f32 sp2C;
    f32 sp28;
    f32 *sp20;
    f32 *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_v0;
    f32 temp_v0_2;
    f32 temp_v0_3;
    void (*temp_v0_4)(Actor *, Lights *, GlobalContext *);
    void (*temp_v0_5)(Actor *, Lights *, GlobalContext *);
    f32 phi_f0;
    CollisionPoly *phi_f16;

    D_801BDAA4 = 0;
    temp_f0 = Actor_XZDistanceBetweenActors(arg0, arg1->unk_1CCC);
    sp2C = temp_f0;
    temp_v0 = arg0[2].shape.feetPos[1].z;
    if ((((bitwise s32) temp_v0 == 2) || ((bitwise s32) temp_v0 == 3)) && (temp_f0 > 300.0f) && (temp_v0_2 = arg0[1].colChkInfo.displacement.x, (((bitwise s32) temp_v0_2 & 0x8000) == 0))) {
        arg0[1].shape.shadowDraw = (void (*)(Actor *, Lights *, GlobalContext *))3;
        arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) temp_v0_2 | 0x8000);
        arg0->unk_376 = Actor_YawBetweenActors(arg0, arg1->unk_1CCC);
        temp_f0_2 = (f32) arg0->unk_376 - (f32) arg0->world.rot.y;
        phi_f0 = temp_f0_2;
        if (temp_f0_2 > 32767.0f) {
            phi_f0 = temp_f0_2 - 32767.0f;
        } else if (temp_f0_2 < -32767.0f) {
            phi_f0 = temp_f0_2 + 32767.0f;
        }
        sp28 = phi_f0;
        temp_a0 = &arg0[1].scale.z;
        arg0->unk_378 = (s16) (s32) (phi_f0 / (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + ((bitwise s32) arg0[1].home.pos.y * 4)) + ((s32) arg0[1].shape.shadowDraw * 4))));
        sp20 = temp_a0;
        SkelAnime_ChangeAnimDefaultStop((SkelAnime *) temp_a0, *(*(&D_80888F08 + ((bitwise s32) arg0[1].home.pos.y * 4)) + ((s32) arg0[1].shape.shadowDraw * 4)));
        arg0[1].wallPoly = (CollisionPoly *)0x3F800000;
        arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) arg0[1].colChkInfo.displacement.x & ~0x800);
    } else if (((bitwise s32) arg0[1].colChkInfo.displacement.x & 0x8000) != 0) {
        arg0->world.rot.y += arg0->unk_378;
        arg0->shape.rot.y = arg0->world.rot.y;
        if (arg0[1].shape.shadowScale > 25.0f) {
            temp_v0_3 = arg0[1].colChkInfo.displacement.x;
            if (((bitwise s32) temp_v0_3 & 0x800) == 0) {
                arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) temp_v0_3 | 0x800);
                if ((bitwise s32) arg0[1].home.pos.y == 2) {
                    func_8019F1C0(&arg0->projectedPos, 0x282BU);
                } else {
                    func_8019F1C0(&arg0->projectedPos, 0x282BU);
                }
            }
        }
        sp20 = &arg0[1].scale.z;
    } else {
        func_8087D70C(arg0, arg1);
        sp20 = &arg0[1].scale.z;
    }
    temp_v0_4 = arg0[1].shape.shadowDraw;
    if (temp_v0_4 == 6) {
        arg0->speedXZ = 8.0f;
        arg0[1].wallPoly = (bitwise CollisionPoly *) (8.0f * 0.3f);
    } else {
        if (temp_v0_4 == 5) {
            arg0->speedXZ = 6.0f;
            phi_f16 = (bitwise CollisionPoly *) (6.0f * 0.375f);
            goto block_24;
        }
        if (temp_v0_4 == 4) {
            arg0->speedXZ = 3.0f;
            func_8087C0AC(arg0);
            arg0[1].wallPoly = (bitwise CollisionPoly *) (arg0->speedXZ * 0.75f);
        } else {
            arg0->speedXZ = 0.0f;
            phi_f16 = (CollisionPoly *)0x3F800000;
block_24:
            arg0[1].wallPoly = phi_f16;
        }
    }
    if (((bitwise s32) arg0[1].colChkInfo.displacement.x & 0x8000) == 0) {
        arg0->unk_250 = (s16) (arg0->unk_250 + 1);
        if ((s32) arg0->unk_250 >= 0x12D) {
            func_80880500((EnHorse *) arg0);
            if (((bitwise s32) arg0[1].colChkInfo.displacement.x * 0x10) < 0) {
                if ((bitwise s32) arg0[1].home.pos.y == 2) {
                    func_8019F1C0(arg0[1].shape.feetPos, 0x2844U);
                } else {
                    func_8019F1C0(arg0[1].shape.feetPos, 0x2805U);
                }
            }
        }
    }
    if (SkelAnime_FrameUpdateMatrix((SkelAnime *) sp20) != 0) {
        temp_v0_5 = arg0[1].shape.shadowDraw;
        if (temp_v0_5 == 6) {
            func_8087C1C0(arg0);
        } else if (temp_v0_5 == 5) {
            func_8087C178(arg0);
        }
        arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) arg0[1].colChkInfo.displacement.x & 0xFFFF7FFF);
        if (sp2C < 100.0f) {
            func_80880500((EnHorse *) arg0);
            return;
        }
        func_80880844(arg0, arg1);
        /* Duplicate return node #39. Try simplifying control flow for better match */
    }
}

void func_80880D50(EnHorse *arg0) {
    EnHorse *temp_a2;

    temp_a2 = arg0;
    temp_a2->unk_200 = 0;
    temp_a2->unk_214 = 0;
    temp_a2->actor.speedXZ = 0.0f;
    arg0 = temp_a2;
    func_80880E00(temp_a2, temp_a2);
    if ((arg0->unk_1E8 * 0x10) < 0) {
        func_8019F1C0(arg0 + 0x218, 0x1844U);
    }
}

void func_80880DA8(s32 arg0, f32 arg1, s32 arg2, s16 *arg3) {
    s16 *temp_v0;

    temp_v0 = (arg0 * 2) + &D_80889048;
    *arg3 = *temp_v0;
    if (arg2 == 1) {
        if (temp_v0 == &D_80889052) {
            *arg3 = 4;
            return;
        }
        if (temp_v0 == &D_80889054) {
            *arg3 = 3;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
    }
}

void func_80880E00(EnHorse *arg0) {
    s32 sp34;
    f32 sp30;
    f32 temp_f0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_f0 = arg0->actor.speedXZ;
    arg0->unk_144 = 4;
    arg0->unk_1E8 &= -0x1001;
    phi_v1 = 0;
    phi_v1 = 0;
    phi_v1 = 0;
    phi_v1 = 0;
    if (temp_f0 == 0.0f) {
        if (arg0->unk_20C != 0) {
            phi_v1 = 1;
        }
        arg0->unk_20C = 0;
    } else if (temp_f0 <= 3.0f) {
        if (arg0->unk_20C != 4) {
            phi_v1 = 1;
        }
        arg0->unk_20C = 4;
    } else if (temp_f0 <= 6.0f) {
        if (arg0->unk_20C != 5) {
            phi_v1 = 1;
        }
        arg0->unk_20C = 5;
    } else {
        if (arg0->unk_20C != 6) {
            phi_v1 = 1;
        }
        arg0->unk_20C = 6;
    }
    temp_v0 = arg0->unk_20C;
    phi_v1_2 = phi_v1;
    if (temp_v0 == 4) {
        sp30 = arg0->actor.speedXZ * 0.5f;
    } else if (temp_v0 == 5) {
        sp30 = arg0->actor.speedXZ * 0.25f;
        if (arg0->unk_150 == 2) {
            sp34 = phi_v1;
            func_8019F1C0(arg0 + 0xEC, 0x2843U);
        } else {
            sp34 = phi_v1;
            func_8019F1C0(arg0 + 0xEC, 0x2804U);
        }
        phi_v1_2 = sp34;
    } else if (temp_v0 == 6) {
        sp30 = arg0->actor.speedXZ * 0.2f;
        if (arg0->unk_150 == 2) {
            sp34 = phi_v1;
            func_8019F1C0(arg0 + 0xEC, 0x2843U);
        } else {
            sp34 = phi_v1;
            func_8019F1C0(arg0 + 0xEC, 0x2804U);
        }
        phi_v1_2 = sp34;
    } else {
        sp30 = 1.0f;
    }
    if (phi_v1_2 == 1) {
        temp_v1 = arg0->unk_20C * 4;
        SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + temp_v1), *(&D_80888F1C + temp_v1) * sp30 * 1.5f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4))), (u8) 2, -3.0f);
        return;
    }
    temp_v1_2 = arg0->unk_20C * 4;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + temp_v1_2), *(&D_80888F1C + temp_v1_2) * sp30 * 1.5f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4))), (u8) 2, 0.0f);
}

void func_80881128(Actor *arg0) {
    void (*temp_v0)(Actor *, Lights *, GlobalContext *);
    void (*temp_v0_2)(Actor *, Lights *, GlobalContext *);
    CollisionPoly *phi_f0;

    temp_v0 = arg0[1].shape.shadowDraw;
    if ((temp_v0 == 0) || (temp_v0 == 1)) {
        func_8087C43C(arg0);
    } else if (temp_v0 == 4) {
        func_8087C0AC(arg0);
    }
    if ((bitwise s32) arg0[2].uncullZoneScale == 0) {
        arg0->speedXZ = 0.0f;
        arg0[2].uncullZoneDownward->unk_70 = 0.0f;
        if (arg0[1].shape.shadowDraw != 0) {
            func_80880E00((EnHorse *) arg0);
        }
    }
    temp_v0_2 = arg0[1].shape.shadowDraw;
    if (temp_v0_2 == 4) {
        phi_f0 = (bitwise CollisionPoly *) (arg0->speedXZ * 0.5f);
    } else if (temp_v0_2 == 5) {
        phi_f0 = (bitwise CollisionPoly *) (arg0->speedXZ * 0.25f);
    } else if (temp_v0_2 == 6) {
        phi_f0 = (bitwise CollisionPoly *) (arg0->speedXZ * 0.2f);
    } else {
        phi_f0 = (CollisionPoly *)0x3F800000;
    }
    arg0[1].wallPoly = phi_f0;
    if ((SkelAnime_FrameUpdateMatrix((SkelAnime *) &arg0[1].scale.z) != 0) || ((arg0[1].shape.shadowDraw == 0) && (arg0->speedXZ != 0.0f))) {
        func_80880E00((EnHorse *) arg0);
    }
}

void func_8088126C(void *arg0) {
    arg0->unk_1BC = 0.0f;
    func_80881290();
}

void func_80881290(void *arg0, ? arg1) {
    f32 sp34;

    arg0->unk_144 = 6;
    arg0->unk_20C = 8;
    sp34 = arg0->unk_1BC;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), 1.5f, sp34, (f32) SkelAnime_GetFrameCount((*(&D_80888F08 + (arg0->unk_150 * 4)))->unk_20), (u8) 2, -3.0f);
    arg0->unk_240 = 0;
    arg0->unk_74 = 0.0f;
    arg0->unk_68 = 0.0f;
    arg0->unk_274 = (f32) arg0->unk_28;
    if (arg0->unk_150 == 2) {
        func_8019F1C0(arg0 + 0xEC, 0x2818U);
    } else {
        func_8019F1C0(arg0 + 0xEC, 0x2818U);
    }
    func_8013ECE0(0.0f, 0xAAU, 0xAU, 0xAU);
}

void func_80881398(void *arg0, GlobalContext *arg1) {
    f32 temp_f12;
    s32 temp_t1;
    s32 temp_t3;

    arg0->unk_1E8 = (s32) (arg0->unk_1E8 | 4);
    if (arg0->unk_70 < 14.0f) {
        arg0->unk_70 = 14.0f;
    }
    temp_f12 = arg0->unk_1BC;
    if (temp_f12 > 23.0f) {
        arg0->unk_74 = -3.5f;
        if (arg0->unk_68 == 0.0f) {
            arg0->unk_68 = -10.5f;
        }
        if (arg0->unk_28 < (arg0->unk_88 + 90.0f)) {
            arg0->unk_1C0 = 1.5f;
        } else {
            arg0->unk_1C0 = 0.0f;
        }
    } else {
        arg0->unk_28 = (f32) (arg0->unk_274 + ((f32) arg0->unk_1C4->unk_2 * 0.01f * arg0->unk_528 * 0.01f));
    }
    if ((SkelAnime_FrameUpdateMatrix(arg0 + 0x1A4) != 0) || ((temp_f12 > 17.0f) && (arg0->unk_28 < ((arg0->unk_88 - arg0->unk_68) + 80.0f)))) {
        if (arg0->unk_150 == 2) {
            func_8019F1C0(arg0 + 0xEC, 0x2819U);
        } else {
            func_8019F1C0(arg0 + 0xEC, 0x2819U);
        }
        func_8013ECE0(0.0f, 0xFFU, 0xAU, 0x50U);
        temp_t1 = arg0->unk_1E8 & ~4;
        temp_t3 = temp_t1 & 0xBFFFFFFF;
        arg0->unk_1E8 = temp_t1;
        arg0->unk_1E8 = temp_t3;
        arg0->unk_28 = (f32) arg0->unk_88;
        arg0->unk_74 = -3.5f;
        func_800B1598(arg1, 25.0f, arg0 + 0x24);
        func_8088159C(arg0, arg1);
    }
}

void func_8088159C(void *arg0, GlobalContext *arg1) {
    AnimationHeader *temp_a1;
    SkelAnime *temp_a0;

    arg0->unk_144 = 5;
    arg0->unk_20C = 6;
    temp_a0 = arg0 + 0x1A4;
    temp_a1 = (*(&D_80888F08 + (arg0->unk_150 * 4)))->unk_18;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, temp_a1);
    arg0->unk_240 = 0;
    arg0->unk_25C = (f32) (arg0->unk_25C + ((f32) arg0->unk_1C4->unk_2 * 0.01f * arg0->unk_528 * 0.01f));
}

void func_80881634(EnHorse *arg0) {
    EnHorse *temp_a2;

    temp_a2 = arg0;
    temp_a2->unk_200 = 0;
    temp_a2->unk_214 = 0;
    temp_a2->actor.speedXZ = 0.0f;
    arg0 = temp_a2;
    func_8088168C(temp_a2, temp_a2);
    if ((arg0->unk_1E8 * 0x10) < 0) {
        func_8019F1C0(arg0 + 0x218, 0x1844U);
    }
}

void func_8088168C(EnHorse *arg0) {
    s32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 phi_a2;
    f32 phi_f2;
    s32 phi_a2_2;
    f32 phi_f0;

    temp_f0 = arg0->actor.speedXZ;
    arg0->unk_144 = 5;
    arg0->unk_1E8 &= -0x1001;
    phi_a2 = 0;
    phi_a2 = 0;
    phi_a2 = 0;
    phi_a2 = 0;
    if (temp_f0 == 0.0f) {
        if (arg0->unk_20C != 0) {
            phi_a2 = 1;
        }
        arg0->unk_20C = 0;
    } else if (temp_f0 <= 3.0f) {
        if (arg0->unk_20C != 4) {
            phi_a2 = 1;
        }
        arg0->unk_20C = 4;
    } else if (temp_f0 <= 6.0f) {
        if (arg0->unk_20C != 5) {
            phi_a2 = 1;
        }
        arg0->unk_20C = 5;
    } else {
        if (arg0->unk_20C != 6) {
            phi_a2 = 1;
        }
        arg0->unk_20C = 6;
    }
    temp_v0 = arg0->unk_20C;
    phi_a2_2 = phi_a2;
    if (temp_v0 == 4) {
        phi_f2 = arg0->actor.speedXZ * 0.5f;
    } else if (temp_v0 == 5) {
        temp_f2 = arg0->actor.speedXZ * 0.25f;
        if (arg0->unk_150 == 2) {
            sp3C = phi_a2;
            sp38 = temp_f2;
            func_8019F1C0(arg0 + 0xEC, 0x2843U);
        } else {
            sp3C = phi_a2;
            sp38 = temp_f2;
            func_8019F1C0(arg0 + 0xEC, 0x2804U);
        }
        phi_f2 = sp38;
        phi_a2_2 = phi_a2;
    } else if (temp_v0 == 6) {
        temp_f2_2 = arg0->actor.speedXZ * 0.2f;
        if (arg0->unk_150 == 2) {
            sp3C = phi_a2;
            sp38 = temp_f2_2;
            func_8019F1C0(arg0 + 0xEC, 0x2843U);
        } else {
            sp3C = phi_a2;
            sp38 = temp_f2_2;
            func_8019F1C0(arg0 + 0xEC, 0x2804U);
        }
        phi_f2 = sp38;
        phi_a2_2 = phi_a2;
    } else {
        phi_f2 = 1.0f;
    }
    temp_v1 = arg0->unk_20C * 4;
    temp_f0_2 = *(&D_80888F1C + temp_v1) * phi_f2 * 1.5f;
    phi_f0 = temp_f0_2;
    if (temp_f0_2 < 1.0f) {
        phi_f0 = 1.0f;
    }
    if (phi_a2_2 == 1) {
        sp34 = phi_f0;
        SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), phi_f0, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0->unk_150 * 4)) + temp_v1)), (u8) 2, -3.0f);
        return;
    }
    sp34 = phi_f0;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), phi_f0, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0->unk_150 * 4)) + temp_v1)), (u8) 2, 0.0f);
}

void func_808819D8(Actor *arg0, EnHorse *arg1) {
    s16 temp_v0_2;
    void (*temp_v0)(Actor *, Lights *, GlobalContext *);
    EnHorse *phi_a1;
    CollisionPoly *phi_f0;

    temp_v0 = arg0[1].shape.shadowDraw;
    if ((temp_v0 == 0) || (temp_v0 == 1)) {
        func_8087C43C(arg0);
        goto block_5;
    }
    if (temp_v0 == 4) {
        func_8087C0AC(arg0);
block_5:
    }
    phi_a1 = arg1;
    if ((bitwise s32) arg0[2].uncullZoneScale == 0) {
        arg0->speedXZ = 0.0f;
        arg0[2].uncullZoneDownward->unk_70 = 0.0f;
        if (arg0[1].shape.shadowDraw != 0) {
            arg1 = arg1;
            func_80880E00((EnHorse *) arg0, arg1);
            phi_a1 = arg1;
        }
    }
    temp_v0_2 = arg0->params;
    if (temp_v0_2 == 4) {
        func_8087B7C0(arg0, phi_a1, phi_a1[70].unk_1EC);
    } else if (temp_v0_2 == 5) {
        func_8087B7C0(arg0, phi_a1, phi_a1[70].unk_1EC + 8);
    }
    if ((bitwise s32) arg0[2].uncullZoneScale == 0) {
        arg0->speedXZ = 0.0f;
        if (arg0[1].shape.shadowDraw != 0) {
            func_8088168C((EnHorse *) arg0);
        }
    }
    if (arg0[1].shape.shadowDraw == 4) {
        phi_f0 = (bitwise CollisionPoly *) (arg0->speedXZ * 0.5f);
    } else if (arg0[1].shape.shadowDraw == 5) {
        phi_f0 = (bitwise CollisionPoly *) (arg0->speedXZ * 0.25f);
    } else if (arg0[1].shape.shadowDraw == 6) {
        phi_f0 = (bitwise CollisionPoly *) (arg0->speedXZ * 0.2f);
    } else {
        phi_f0 = (CollisionPoly *)0x3F800000;
    }
    arg0[1].wallPoly = phi_f0;
    if ((SkelAnime_FrameUpdateMatrix((SkelAnime *) &arg0[1].scale.z) != 0) || ((arg0[1].shape.shadowDraw == 0) && (arg0->speedXZ != 0.0f))) {
        func_8088168C((EnHorse *) arg0);
    }
    if ((gSaveContext.weekEventReg[92] & 7) == 3) {
        arg0[2].uncullZoneDownward->unk_488 = 7;
        return;
    }
    func_80880DA8((s32) arg0[1].shape.shadowDraw, arg0[1].minVelocityY, arg0->unk_394 & 1, (bitwise s32) arg0[2].uncullZoneDownward + 0x488);
}

void func_80881BDC(void *arg0, ? arg1, ? arg2) {
    arg0->unk_20C = 6;
    arg0->unk_380 = 1;
    SkelAnime_ChangeAnimPlaybackStop(arg0 + 0x1A4, (*(&D_80888F08 + (arg0->unk_150 * 4)))->unk_18, arg0->unk_70 * 0.2f * 1.5f);
}

void func_80881C54(Actor *arg0, EnHorse *arg1, void *arg2) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    Vec3f *sp24;
    Vec3f *temp_a1;
    f32 *temp_a0;
    f32 *temp_a0_2;

    temp_a1 = arg0 + 0x24;
    temp_a0 = &sp2C;
    sp2C = (f32) arg2->unk_18;
    sp30 = (f32) arg2->unk_1C;
    sp24 = temp_a1;
    sp34 = (f32) arg2->unk_20;
    if (Math3D_Distance((Vec3f *) temp_a0, temp_a1) > 8.0f) {
        func_8087B784(arg0, arg1, (s16) &sp2C, 0x320);
        arg0->speedXZ = 8.0f;
        arg0[1].wallPoly = (bitwise CollisionPoly *) (8.0f * 0.3f);
    } else {
        temp_a1->x = sp2C.unk_0;
        temp_a1->y = (&sp2C)[1];
        temp_a1->z = (&sp2C)[2];
        arg0->speedXZ = 0.0f;
    }
    temp_a0_2 = &arg0[1].scale.z;
    sp24 = (Vec3f *) temp_a0_2;
    if (SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0_2) != 0) {
        func_8087C1C0(arg0);
        func_8013ECE0(0.0f, 0x78U, 8U, 0xFFU);
        SkelAnime_ChangeAnimPlaybackStop((SkelAnime *) sp24, *(*(&D_80888F08 + ((bitwise s32) arg0[1].home.pos.y * 4)) + ((s32) arg0[1].shape.shadowDraw * 4)), arg0->speedXZ * 0.3f);
    }
}

void func_80881DA4(void *arg0) {
    arg0->unk_1BC = 0.0f;
    func_80881DC8();
}

void func_80881DC8(void *arg0, ? arg1) {
    f32 sp34;

    arg0->unk_20C = 8;
    sp34 = arg0->unk_1BC;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), 1.5f, sp34, (f32) SkelAnime_GetFrameCount((*(&D_80888F08 + (arg0->unk_150 * 4)))->unk_20), (u8) 2, -3.0f);
    arg0->unk_240 = 0;
    arg0->unk_274 = (f32) arg0->unk_28;
    arg0->unk_74 = 0.0f;
    arg0->unk_68 = 0.0f;
    arg0->unk_1E8 = (s32) (arg0->unk_1E8 | 8);
    arg0->unk_25C = (f32) (arg0->unk_25C - ((f32) arg0->unk_1C4->unk_2 * 0.01f * arg0->unk_528 * 0.01f));
    if (arg0->unk_150 == 2) {
        func_8019F1C0(arg0 + 0xEC, 0x2818U);
    } else {
        func_8019F1C0(arg0 + 0xEC, 0x2818U);
    }
    func_8013ECE0(0.0f, 0xAAU, 0xAU, 0xAU);
}

void func_80881F10(void *arg0, ? arg2) {
    func_80881DA4();
    arg0->unk_380 = 2;
    arg0->unk_384 = (u16) (arg0->unk_384 & 0xFFFE);
}

void func_80881F48(Actor *arg0, EnHorse *arg1) {
    f32 sp34;
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    f32 temp_f2;

    temp_a0 = arg0 + 0x1A4;
    if ((arg0->unk_384 & 1) != 0) {
        func_80881C54(arg0, arg1);
        return;
    }
    temp_f2 = arg0[1].minVelocityY;
    arg0->speedXZ = 13.0f;
    arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) arg0[1].colChkInfo.displacement.x | 4);
    if (temp_f2 > 19.0f) {
        arg0->gravity = -3.5f;
        if (arg0->velocity.y == 0.0f) {
            arg0->velocity.y = -10.5f;
        }
        if (arg0->world.pos.y < (arg0->floorHeight + 90.0f)) {
            arg0[1].wallPoly = (CollisionPoly *)0x3FC00000;
        } else {
            arg0[1].wallPoly = NULL;
        }
    } else {
        arg0->world.pos.y = (bitwise f32) arg0[1].init + ((f32) (s16) arg0[1].floorPoly->vtxData[0] * 0.01f * arg0->unk_528 * 0.01f);
    }
    sp20 = temp_a0;
    sp34 = temp_f2;
    if ((SkelAnime_FrameUpdateMatrix(temp_a0) != 0) || ((temp_f2 > 19.0f) && (arg0->world.pos.y < ((arg0->floorHeight - arg0->velocity.y) + 80.0f)))) {
        arg0->unk_384 = (u16) (arg0->unk_384 | 1);
        if ((bitwise s32) arg0[1].home.pos.y == 2) {
            func_8019F1C0(&arg0->projectedPos, 0x2819U);
        } else {
            func_8019F1C0(&arg0->projectedPos, 0x2819U);
        }
        func_8013ECE0(0.0f, 0xFFU, 0xAU, 0x50U);
        arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) arg0[1].colChkInfo.displacement.x & ~4);
        arg0->velocity.y = 0.0f;
        arg0->gravity = -3.5f;
        arg0->world.pos.y = arg0->floorHeight;
        func_800B1598((GlobalContext *) arg1, 25.0f, (Vec3f *) &arg0->unk_22.y);
        arg0[1].shape.shadowDraw = (void (*)(Actor *, Lights *, GlobalContext *))6;
        SkelAnime_ChangeAnimPlaybackStop(sp20, (*(&D_80888F08 + ((bitwise s32) arg0[1].home.pos.y * 4)))->unk_18, *D_80888F34);
        arg0[1].uncullZoneForward = 0.0f;
        arg0->unk_25C = (f32) (arg0->unk_25C + ((f32) (s16) arg0[1].floorPoly->vtxData[0] * 0.01f * arg0->unk_528 * 0.01f));
    }
}

void func_808821C8(void *arg0, ? arg1, ? arg2) {
    s32 temp_t9;

    temp_t9 = arg0->unk_1E8 & ~0x800;
    arg0->unk_20C = 3;
    arg0->unk_380 = 3;
    arg0->unk_384 = (u16) (arg0->unk_384 & 0xFFFB);
    arg0->unk_1E8 = temp_t9;
    if ((temp_t9 * 0x10) < 0) {
        if (arg0->unk_150 == 2) {
            func_8019F1C0(arg0 + 0x218, 0x2844U);
        } else {
            func_8019F1C0(arg0 + 0x218, 0x2805U);
        }
    }
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4))), (u8) 2, -3.0f);
}

void func_808822CC(void *arg0, ? arg1, ? arg2) {
    SkelAnime *sp30;
    SkelAnime *temp_a0;
    s32 temp_v0;
    u16 temp_v0_2;

    arg0->unk_70 = 0.0f;
    if (arg0->unk_210 > 25.0f) {
        temp_v0 = arg0->unk_1E8;
        if ((temp_v0 & 0x800) == 0) {
            arg0->unk_1E8 = (s32) (temp_v0 | 0x800);
            if (arg0->unk_150 == 2) {
                func_8019F1C0(arg0 + 0xEC, 0x282BU);
            } else {
                func_8019F1C0(arg0 + 0xEC, 0x282BU);
            }
        }
    }
    temp_a0 = arg0 + 0x1A4;
    sp30 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        temp_v0_2 = arg0->unk_384;
        arg0->unk_20C = 0;
        if ((temp_v0_2 & 4) == 0) {
            arg0->unk_384 = (u16) (temp_v0_2 | 4);
            SkelAnime_ChangeAnim(sp30, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0->unk_150 * 4)) + (0 * 4))), (u8) 2, -3.0f);
            return;
        }
        SkelAnime_ChangeAnim(sp30, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4))), (u8) 0, 0.0f);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_8088247C(void *arg0, ? arg1, void *arg2) {
    arg0->unk_24 = (f32) arg2->unk_C;
    arg0->unk_28 = (f32) arg2->unk_10;
    arg0->unk_108 = (f32) arg0->unk_24;
    arg0->unk_10C = (f32) arg0->unk_28;
    arg0->unk_2C = (f32) arg2->unk_14;
    arg0->unk_110 = (f32) arg0->unk_2C;
    arg0->unk_20C = 6;
    arg0->unk_380 = 4;
    arg0->unk_32 = (u16) arg2->unk_8;
    arg0->unk_BC = (unaligned s32) arg0->unk_30;
    arg0->unk_C0 = (u16) arg0->unk_34;
    SkelAnime_ChangeAnimPlaybackStop(arg0 + 0x1A4, (*(&D_80888F08 + (arg0->unk_150 * 4)))->unk_18, arg0->unk_70 * 0.3f);
}

void func_80882564(Actor *arg0, EnHorse *arg1, void *arg2) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    Vec3f *sp24;
    Vec3f *temp_a1;
    f32 *temp_a0;
    f32 *temp_a0_2;

    temp_a1 = arg0 + 0x24;
    temp_a0 = &sp2C;
    sp2C = (f32) arg2->unk_18;
    sp30 = (f32) arg2->unk_1C;
    sp24 = temp_a1;
    sp34 = (f32) arg2->unk_20;
    if (Math3D_Distance((Vec3f *) temp_a0, temp_a1) > 8.0f) {
        func_8087B784(arg0, arg1, (s16) &sp2C, 0x320);
        arg0->speedXZ = 8.0f;
        arg0[1].wallPoly = (bitwise CollisionPoly *) (8.0f * 0.3f);
    } else {
        temp_a1->x = sp2C.unk_0;
        temp_a1->y = (&sp2C)[1];
        temp_a1->z = (&sp2C)[2];
        arg0->speedXZ = 0.0f;
    }
    temp_a0_2 = &arg0[1].scale.z;
    sp24 = (Vec3f *) temp_a0_2;
    if (SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0_2) != 0) {
        func_8087C1C0(arg0);
        func_8013ECE0(0.0f, 0x78U, 8U, 0xFFU);
        SkelAnime_ChangeAnimPlaybackStop((SkelAnime *) sp24, *(*(&D_80888F08 + ((bitwise s32) arg0[1].home.pos.y * 4)) + ((s32) arg0[1].shape.shadowDraw * 4)), arg0->speedXZ * 0.3f);
    }
}

void func_808826B4(void *arg0, ? arg1, void *arg2) {
    s32 temp_t1;
    s32 temp_t9;

    arg0->unk_24 = (f32) arg2->unk_C;
    arg0->unk_28 = (f32) arg2->unk_10;
    arg0->unk_108 = (f32) arg0->unk_24;
    arg0->unk_10C = (f32) arg0->unk_28;
    temp_t9 = arg0->unk_1E8 & ~0x800;
    arg0->unk_2C = (f32) arg2->unk_14;
    arg0->unk_110 = (f32) arg0->unk_2C;
    arg0->unk_20C = 3;
    arg0->unk_380 = 5;
    arg0->unk_32 = (u16) arg2->unk_8;
    temp_t1 = temp_t9 * 0x10;
    arg0->unk_384 = (u16) (arg0->unk_384 & 0xFFFB);
    arg0->unk_BC = (unaligned s32) arg0->unk_30;
    arg0->unk_1E8 = temp_t9;
    arg0->unk_C0 = (u16) arg0->unk_34;
    if (temp_t1 < 0) {
        if (arg0->unk_150 == 2) {
            func_8019F1C0(arg0 + 0x218, 0x2844U);
        } else {
            func_8019F1C0(arg0 + 0x218, 0x2805U);
        }
    }
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4))), (u8) 2, -3.0f);
}

void func_80882820(void *arg0, ? arg1, ? arg2) {
    SkelAnime *sp30;
    SkelAnime *temp_a0;
    s32 temp_v0;
    u16 temp_v0_2;

    arg0->unk_70 = 0.0f;
    if (arg0->unk_210 > 25.0f) {
        temp_v0 = arg0->unk_1E8;
        if ((temp_v0 & 0x800) == 0) {
            arg0->unk_1E8 = (s32) (temp_v0 | 0x800);
            if (arg0->unk_150 == 2) {
                func_8019F1C0(arg0 + 0xEC, 0x282BU);
            } else {
                func_8019F1C0(arg0 + 0xEC, 0x282BU);
            }
        }
    }
    temp_a0 = arg0 + 0x1A4;
    sp30 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        temp_v0_2 = arg0->unk_384;
        arg0->unk_20C = 0;
        if ((temp_v0_2 & 4) == 0) {
            arg0->unk_384 = (u16) (temp_v0_2 | 4);
            SkelAnime_ChangeAnim(sp30, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0->unk_150 * 4)) + (0 * 4))), (u8) 2, -3.0f);
            return;
        }
        SkelAnime_ChangeAnim(sp30, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4))), (u8) 0, 0.0f);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_808829D0(EnHorse *arg0, GlobalContext *arg1) {
    arg0->unk_208 = 0;
    arg0->unk_144 = 0x12;
    arg0->unk_278.status[3].loadQueue.validCount = 0;
    arg0->actor.speedXZ = 0.0f;
}

s32 func_808829F4(s32 arg0) {
    s32 temp_a2;
    s32 temp_v1;
    ? *phi_a1;
    s32 phi_v1;

    phi_a1 = &D_8088908C;
    phi_v1 = 0;
loop_1:
    temp_a2 = phi_a1->unk_0;
    temp_v1 = phi_v1 + 1;
    phi_v1 = temp_v1;
    if (arg0 == temp_a2) {
        return phi_a1->unk_4;
    }
    if (arg0 < temp_a2) {
        return 0;
    }
    phi_a1 += 8;
    if (temp_v1 >= 5) {
        return 0;
    }
    goto loop_1;
}

void func_80882A44(EnHorse *arg0, void *arg1) {
    GlobalContext *sp18;
    EnHorse *temp_a0;
    EnHorse *temp_a3;
    EnHorse *temp_a3_2;
    GlobalContext *temp_a2;
    s32 temp_v0;
    s32 temp_v1;
    void *temp_a1;
    EnHorse *phi_a3;
    void *phi_a1;
    s32 phi_v1;

    temp_a3 = arg0;
    temp_a2 = arg1->unk_1F48;
    if (arg1->unk_1F2C == 3) {
        temp_a3->unk_208 = 1;
        temp_a3->actor.params = 0xC;
        temp_a3->unk_144 = 2;
        func_8087D75C(temp_a3, temp_a2, temp_a3);
        return;
    }
    if (temp_a2 != 0) {
        arg0 = temp_a3;
        sp18 = temp_a2;
        temp_v0 = func_808829F4((s32) temp_a2->unk_0, temp_a2, temp_a3);
        temp_a1 = arg1;
        temp_a3_2 = arg0;
        phi_a3 = temp_a3_2;
        phi_a1 = temp_a1;
        if (temp_v0 != 0) {
            temp_v1 = temp_a3_2->unk_278.status[3].loadQueue.validCount;
            temp_a0 = temp_a3_2;
            phi_v1 = temp_v1;
            if (temp_v0 != temp_v1) {
                if (temp_v1 == 0) {
                    temp_a3_2->actor.world.pos.x = (f32) temp_a2->state.nextGameStateInit;
                    temp_a3_2->actor.world.pos.y = (f32) temp_a2->state.nextGameStateSize;
                    temp_a3_2->actor.world.pos.z = (f32) temp_a2->unk_14;
                    temp_a3_2->actor.prevPos.x = temp_a3_2->actor.world.pos.x;
                    temp_a3_2->actor.world.rot.y = temp_a2->unk_8;
                    temp_a3_2->actor.prevPos.y = temp_a3_2->actor.world.pos.y;
                    temp_a3_2->actor.prevPos.z = temp_a3_2->actor.world.pos.z;
                    temp_a3_2->unk_BC = (unaligned s32) temp_a3_2->unk_30;
                    temp_a3_2->actor.shape.rot.z = temp_a3_2->actor.world.rot.z;
                }
                temp_a3_2->unk_278.status[3].loadQueue.validCount = temp_v0;
                arg0 = temp_a3_2;
                sp18 = temp_a2;
                arg1 = temp_a1;
                *(&D_8088905C + (temp_v0 * 4))(temp_a0, temp_a1, temp_a2, temp_a3_2);
                phi_a3 = arg0;
                phi_a1 = arg1;
                phi_v1 = arg0->unk_278.status[3].loadQueue.validCount;
            }
            *(&D_80889074 + (phi_v1 * 4))(phi_a3, phi_a1, arg1->unk_1F48, phi_a3);
        }
    }
}

? func_80882B9C(Actor *arg0, EnHorse *arg1, ? *arg2) {
    ? sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 temp_f0;
    s32 temp_t9;

    func_8087B730(arg2->unk_4, arg0->unk_200, &sp3C);
    func_8017B7F8((Vec3f *) &sp3C, (arg2->unk_4 + (arg0->unk_200 * 0xA))->unk_8, &sp38, &sp34, &sp30);
    if ((arg0->unk_200 >= (arg2->unk_0 - 1)) && (Math3D_Distance((Vec3f *) &sp3C, arg0 + 0x24) < (f32) gGameInfo->data[680])) {
        arg0->unk_3A4 = (s32) (arg0->unk_3A4 | 2);
    }
    if ((((arg0->world.pos.x * sp38) + (sp34 * arg0->world.pos.z) + sp30) > 0.0f) && (temp_t9 = arg0->unk_200 + 1, arg0->unk_200 = temp_t9, ((temp_t9 < arg2->unk_0) == 0))) {
        arg0->unk_3A4 = (s32) (arg0->unk_3A4 | 1);
        return 1;
    }
    if ((arg0->unk_3A4 & 1) == 0) {
        func_8087B784(arg0, arg1, (s16) &sp3C, 0x640);
    }
    temp_f0 = arg0->speedXZ;
    arg0->shape.rot.y = arg0->world.rot.y;
    if ((temp_f0 < (f32) (arg2->unk_4 + (arg0->unk_200 * 0xA))->unk_6) && ((arg0->unk_3A4 & 1) == 0)) {
        arg0->speedXZ = temp_f0 + 0.4f;
        return 0;
    }
    arg0->speedXZ = temp_f0 - 0.4f;
    if (arg0->speedXZ < 0.0f) {
        arg0->speedXZ = 0.0f;
    }
    return 0;
}

void func_80882D8C(EnHorse *arg0) {
    arg0->unk_278.status[4].dmaReq.dramAddr = NULL;
    arg0->unk_214 = 0;
    arg0->unk_200 = 0;
    arg0->unk_278.status[4].dmaReq.filename = NULL;
    arg0->actor.speedXZ = 0.0f;
    func_80882DC0();
}

void func_80882DC0(Actor *arg0) {
    s32 sp34;
    f32 sp30;
    f32 temp_f0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    sp34 = 0;
    temp_f0 = arg0->speedXZ;
    arg0->unk_144 = 0x13;
    if (temp_f0 == 0.0f) {
        if (arg0[1].shape.shadowDraw != 0) {
            sp34 = 1;
        }
        arg0[1].shape.shadowDraw = 0;
    } else if (temp_f0 <= 3.0f) {
        if (arg0[1].shape.shadowDraw != 4) {
            sp34 = 1;
        }
        arg0[1].shape.shadowDraw = 4;
    } else if (temp_f0 <= 6.0f) {
        if (arg0[1].shape.shadowDraw != 5) {
            sp34 = 1;
        }
        arg0[1].shape.shadowDraw = 5;
    } else {
        if (arg0[1].shape.shadowDraw != 6) {
            sp34 = 1;
        }
        arg0[1].shape.shadowDraw = 6;
    }
    temp_v0 = arg0[1].shape.shadowDraw;
    if (temp_v0 == 4) {
        sp30 = arg0->speedXZ * 0.5f;
    } else if (temp_v0 == 5) {
        sp30 = arg0->speedXZ * 0.25f;
        if (arg0[1].home.pos.y == 2) {
            func_8019F1C0(arg0 + 0xEC, 0x2843U);
        } else {
            func_8019F1C0(arg0 + 0xEC, 0x2804U);
        }
        func_8013ECE0(0.0f, 0x3CU, 8U, 0xFFU);
    } else if (temp_v0 == 6) {
        sp30 = arg0->speedXZ * 0.2f;
        if (arg0[1].home.pos.y == 2) {
            func_8019F1C0(arg0 + 0xEC, 0x2843U);
        } else {
            func_8019F1C0(arg0 + 0xEC, 0x2804U);
        }
        func_8013ECE0(0.0f, 0x78U, 8U, 0xFFU);
    } else {
        sp30 = 1.0f;
    }
    if (sp34 == 1) {
        temp_v1 = arg0[1].shape.shadowDraw * 4;
        SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + temp_v1), *(&D_80888F1C + temp_v1) * sp30 * 1.5f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4))), (u8) 2, -3.0f);
        return;
    }
    temp_v1_2 = arg0[1].shape.shadowDraw * 4;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + temp_v1_2), *(&D_80888F1C + temp_v1_2) * sp30 * 1.5f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4))), (u8) 2, 0.0f);
}

void func_80883104(Actor *arg0, EnHorse *arg1) {
    s32 sp28;
    s32 sp24;
    void (*temp_v0)(Actor *, Lights *, GlobalContext *);
    CollisionPoly *phi_f0;

    if (arg0[1].shape.shadowDraw == 4) {
        func_8087C0AC(arg0);
    }
    if (arg1->unk_16C48 == 0) {
        arg0[2].parent += 1;
    }
    sp24 = arg1 + 0x10000;
    sp28 = func_801A2DE0(0x41);
    func_80882B9C(arg0, arg1, &D_808890E8);
    if ((((arg0->unk_3A4 & 1) != 0) || ((s32) arg0[2].parent >= 0x2E)) && (sp28 != 1) && (gSaveContext.minigameState != 3)) {
        gSaveContext.cutscene = 0;
        arg1[70].unk_1FD = 0x14;
        arg1->unk_1887F = 0x40;
    }
    if (((arg1->unk_16C48 == 0) || ((arg0->unk_3A4 & 2) != 0)) && ((arg0->unk_3A4 & 4) != 0)) {
        arg0->unk_3A4 = (s32) (arg0->unk_3A4 & ~4);
        func_801A89A8(0x8041);
    }
    if (arg0->unk_3A0 == 0) {
        arg0->speedXZ = 0.0f;
        if (arg0[1].shape.shadowDraw != 0) {
            func_80882DC0(arg0);
        }
    }
    temp_v0 = arg0[1].shape.shadowDraw;
    if (temp_v0 == 4) {
        phi_f0 = (bitwise CollisionPoly *) (arg0->speedXZ * 0.5f);
    } else if (temp_v0 == 5) {
        phi_f0 = (bitwise CollisionPoly *) (arg0->speedXZ * 0.25f);
    } else if (temp_v0 == 6) {
        phi_f0 = (bitwise CollisionPoly *) (arg0->speedXZ * 0.2f);
    } else {
        phi_f0 = (CollisionPoly *)0x3F800000;
    }
    arg0[1].wallPoly = phi_f0;
    if ((SkelAnime_FrameUpdateMatrix((SkelAnime *) &arg0[1].scale.z) != 0) || ((arg0[1].shape.shadowDraw == 0) && (arg0->speedXZ != 0.0f))) {
        func_80882DC0(arg0);
    }
}

void func_80883308(EnHorse *arg0, void *arg1) {
    Actor *sp5C;
    f32 sp58;
    f32 sp54;
    s32 sp4C;
    s16 sp46;
    PosRot *sp38;
    s16 *sp34;
    Vec3f *sp30;
    PosRot *temp_a0;
    SkelAnime *temp_a0_3;
    Vec3f *temp_a0_2;
    f32 temp_f0;
    s16 *temp_a1;
    s16 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 phi_a2;
    s32 phi_a2_2;
    s16 phi_v1;
    s32 phi_a2_3;
    s32 phi_a2_4;
    s32 phi_v0;

    sp5C = arg1->unk_1CCC;
    if ((D_801BDAA4 != 0) || (arg0->unk_150 == 1)) {
        func_80880500(arg0);
        if (arg0->unk_150 == 2) {
            func_8019F1C0(&arg0->actor.projectedPos, 0x2844U);
        } else {
            func_8019F1C0(&arg0->actor.projectedPos, 0x2805U);
        }
    }
    temp_a0 = &arg0->actor.home;
    temp_a1 = &arg0->actor.unk_22.y;
    sp34 = temp_a1;
    sp38 = temp_a0;
    sp58 = Math3D_Distance((Vec3f *) temp_a0, (Vec3f *) temp_a1);
    temp_a0_2 = sp5C + 0x24;
    sp30 = temp_a0_2;
    sp54 = Math3D_Distance(temp_a0_2, (Vec3f *) sp38);
    if (sp54 > 300.0f) {
        if (sp58 > 150.0f) {
            arg0->actor.speedXZ += 0.4f;
            if (arg0->actor.speedXZ > 8.0f) {
                arg0->actor.speedXZ = 8.0f;
                goto block_16;
            }
        } else {
            arg0->actor.speedXZ -= 0.5f;
            if (arg0->actor.speedXZ < 0.0f) {
                arg0->actor.speedXZ = 0.0f;
                goto block_16;
            }
        }
    } else if (Math3D_Distance(temp_a0_2, (Vec3f *) temp_a1) < 300.0f) {
        arg0->actor.speedXZ += 0.4f;
        if (arg0->actor.speedXZ > 8.0f) {
            arg0->actor.speedXZ = 8.0f;
            goto block_16;
        }
    } else {
        arg0->actor.speedXZ -= 0.5f;
        if (arg0->actor.speedXZ < 0.0f) {
            arg0->actor.speedXZ = 0.0f;
block_16:
        }
    }
    if (arg0->actor.speedXZ >= 6.0f) {
        arg0->unk_1A4.animPlaybackSpeed = arg0->actor.speedXZ * 0.3f;
        phi_a2_2 = 6;
    } else if (arg0->actor.speedXZ >= 3.0f) {
        arg0->unk_1A4.animPlaybackSpeed = arg0->actor.speedXZ * 0.375f;
        phi_a2_2 = 5;
    } else if (arg0->actor.speedXZ > 0.1f) {
        arg0->unk_1A4.animPlaybackSpeed = arg0->actor.speedXZ * 0.75f;
        sp4C = 4;
        func_8087C0AC((bitwise Actor *) 300.0f, arg0);
        phi_a2_2 = 4;
    } else {
        phi_a2 = 0;
        if (Rand_ZeroOne() > 0.5f) {
            phi_a2 = 1;
        }
        sp4C = phi_a2;
        func_8087C43C((Actor *) arg0, arg1, phi_a2);
        arg0->unk_1A4.animPlaybackSpeed = 1.0f;
        phi_a2_2 = phi_a2;
    }
    phi_a2_3 = phi_a2_2;
    if ((phi_a2_2 == 6) || (phi_a2_2 == 5) || (phi_a2_2 == 4)) {
        if (sp54 < 300.0f) {
            temp_v1 = sp5C->shape.rot.y;
            sp4C = phi_a2_2;
            sp46 = temp_v1;
            if (Actor_YawBetweenActors((Actor *) arg0, sp5C) > 0) {
                phi_v0 = 1;
            } else {
                phi_v0 = -1;
            }
            phi_v1 = (s16) (temp_v1 + (phi_v0 * 0x3FFF));
        } else {
            sp4C = phi_a2_2;
            phi_v1 = (s16) (Math_Vec3f_Yaw((Vec3f *) sp34, (Vec3f *) sp38) - arg0->actor.world.rot.y);
        }
        temp_f0 = (f32) phi_v1;
        phi_a2_3 = phi_a2_2;
        if (temp_f0 > 800.0f) {
            arg0->actor.world.rot.y += 0x320;
        } else if (temp_f0 < -800.0f) {
            arg0->actor.world.rot.y += -0x320;
        } else {
            arg0->actor.world.rot.y += phi_v1;
        }
        arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
    }
    temp_a0_3 = &arg0->unk_1A4;
    sp34 = (s16 *) temp_a0_3;
    sp4C = phi_a2_3;
    temp_v1_2 = arg0->unk_20C;
    phi_a2_4 = phi_a2_3;
    if (((temp_v1_2 == 0) || (temp_v1_2 == 1)) && ((phi_a2_3 == 6) || (phi_a2_3 == 5) || (phi_a2_3 == 4))) {
        arg0->unk_20C = phi_a2_3;
        SkelAnime_ChangeAnim((SkelAnime *) sp34, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0->unk_150 * 4)) + (phi_a2_3 * 4))), (u8) 2, -3.0f);
        temp_v1_3 = arg0->unk_20C;
        if (temp_v1_3 == 6) {
            func_8087C1C0((Actor *) arg0);
            return;
        }
        if (temp_v1_3 == 5) {
            func_8087C178((Actor *) arg0);
            return;
        }
        /* Duplicate return node #74. Try simplifying control flow for better match */
        return;
    }
    if (SkelAnime_FrameUpdateMatrix(temp_a0_3) != 0) {
        if (phi_a2_3 == 6) {
            sp4C = phi_a2_3;
            func_8087C1C0((Actor *) arg0);
            goto block_55;
        }
        if (phi_a2_3 == 5) {
            sp4C = phi_a2_3;
            func_8087C178((Actor *) arg0);
block_55:
            phi_a2_4 = phi_a2_3;
        }
        if ((arg0->unk_20C == 0) || (arg0->unk_20C == 1)) {
            if (phi_a2_4 != arg0->unk_20C) {
                arg0->unk_20C = phi_a2_4;
                SkelAnime_ChangeAnim((SkelAnime *) sp34, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0->unk_150 * 4)) + (phi_a2_4 * 4))), (u8) 2, -3.0f);
                return;
            }
            if (Rand_ZeroOne() > 0.5f) {
                arg0->unk_20C = 0;
                arg0->unk_1E8 &= -0x1001;
            } else {
                arg0->unk_20C = 1;
                if ((arg0->unk_1E8 * 0x10) < 0) {
                    if (arg0->unk_150 == 2) {
                        func_8019F1C0(&arg0->unk_218, 0x2845U);
                    } else {
                        func_8019F1C0(&arg0->unk_218, 0x2816U);
                    }
                }
            }
            SkelAnime_ChangeAnim((SkelAnime *) sp34, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4))), (u8) 2, -3.0f);
            return;
        }
        if (phi_a2_4 != arg0->unk_20C) {
            arg0->unk_20C = phi_a2_4;
            SkelAnime_ChangeAnim((SkelAnime *) sp34, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0->unk_150 * 4)) + (phi_a2_4 * 4))), (u8) 2, -3.0f);
            return;
        }
        SkelAnime_ChangeAnim((SkelAnime *) sp34, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4))), (u8) 2, 0.0f);
        return;
    }
    if ((temp_v1_2 == 4) && ((phi_a2_3 == 0) || (phi_a2_3 == 1))) {
        arg0->unk_20C = phi_a2_3;
        SkelAnime_ChangeAnim((SkelAnime *) sp34, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0->unk_150 * 4)) + (phi_a2_3 * 4))), (u8) 2, -3.0f);
    }
}

void func_80883B70(Actor *arg0, void *arg1) {
    arg0->world.pos.x = (f32) arg1->unk_C;
    arg0->world.pos.y = (f32) arg1->unk_10;
    arg0->world.pos.z = (f32) arg1->unk_14;
    arg0->prevPos.x = arg0->world.pos.x;
    arg0->world.rot.y = arg1->unk_8;
    arg0->prevPos.y = arg0->world.pos.y;
    arg0->prevPos.z = arg0->world.pos.z;
    arg0->unk_BC = (unaligned s32) arg0->unk_30;
    arg0->shape.rot.z = arg0->world.rot.z;
}

void func_80883BEC(Actor *arg0, ? arg1, void *arg2) {
    func_80883B70(arg0, arg2);
    arg0[1].shape.shadowDraw = 0;
    arg0->unk_3E0 = 1;
    arg0[1].colChkInfo.displacement.x &= -0x1001;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(**(&D_80888F08 + (arg0[1].home.pos.y * 4))), (u8) 2, 0.0f);
    arg0[1].colChkInfo.displacement.x |= 0x1000;
}

void func_80883CB0(Actor *arg0, ? arg2) {
    f32 *sp30;
    f32 *temp_a0;

    func_8087C43C(arg0);
    temp_a0 = &arg0[1].scale.z;
    sp30 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0) != 0) {
        arg0[1].shape.shadowDraw = NULL;
        SkelAnime_ChangeAnim((SkelAnime *) sp30, *(*(&D_80888F08 + ((bitwise s32) arg0[1].home.pos.y * 4)) + ((s32) arg0[1].shape.shadowDraw * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(**(&D_80888F08 + ((bitwise s32) arg0[1].home.pos.y * 4))), (u8) 2, 0.0f);
    }
}

void func_80883D64(Actor *arg0, ? arg1, void *arg2) {
    func_80883B70(arg0, arg2);
    arg0->unk_3E0 = 2;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, (AnimationHeader *) &D_0600A8DC, 0.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600A8DC), (u8) 2, 0.0f);
}

void func_80883DE0(s32 arg0, ? arg1, ? arg2) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x1A4);
}

void func_80883E10(Actor *arg0, ? arg1, void *arg2) {
    func_80883B70(arg0, arg2);
    arg0->unk_3E0 = 3;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, (AnimationHeader *) &D_0600A8DC, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600A8DC), (u8) 2, -3.0f);
    func_8019F1C0(arg0 + 0x218, 0x2844U);
}

void func_80883EA0(s32 arg0, ? arg1, ? arg2) {
    SkelAnime *sp28;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x1A4;
    sp28 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        SkelAnime_ChangeAnim(sp28, (AnimationHeader *) &D_0600B3E0, 1.0f, 11.0f, (f32) SkelAnime_GetFrameCount(&D_0600B3E0), (u8) 2, 0.0f);
    }
}

void func_80883F18(Actor *arg0, ? arg1, void *arg2) {
    func_80883B70(arg0, arg2);
    arg0->unk_3E0 = 4;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, (AnimationHeader *) &D_0600AD08, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600AD08), (u8) 2, -3.0f);
}

void func_80883F98(s32 arg0, ? arg1, ? arg2) {
    SkelAnime *sp18;
    SkelAnime *temp_a0;
    f32 temp_f6;

    temp_f6 = (f32) SkelAnime_GetFrameCount(&D_0600AD08);
    temp_a0 = arg0 + 0x1A4;
    sp18 = temp_a0;
    if (func_801378B8(temp_a0, temp_f6 - 1.0f) != 0) {
        func_8019F1C0(arg0 + 0xEC, 0x282BU);
    }
    SkelAnime_FrameUpdateMatrix(sp18);
}

void func_80884010(Actor *arg0, ? arg1, void *arg2) {
    func_80883B70(arg0, arg2);
    arg0->unk_3E0 = 5;
    arg0[1].shape.shadowDraw = 4;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((*(&D_80888F08 + (arg0[1].home.pos.y * 4)))->unk_10), (u8) 2, -3.0f);
}

void func_808840C4(Actor *arg0, GlobalContext *arg1, ? arg2) {
    f32 *sp30;
    f32 *temp_a0;

    func_8087C0AC(arg0);
    func_800EDF24(arg0, arg1, arg0->unk_530);
    temp_a0 = &arg0[1].scale.z;
    sp30 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0) != 0) {
        SkelAnime_ChangeAnim((SkelAnime *) sp30, *(*(&D_80888F08 + ((bitwise s32) arg0[1].home.pos.y * 4)) + ((s32) arg0[1].shape.shadowDraw * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + ((bitwise s32) arg0[1].home.pos.y * 4)) + ((s32) arg0[1].shape.shadowDraw * 4))), (u8) 2, 0.0f);
    }
}

void func_80884194(Actor *arg0, ? arg1, void *arg2) {
    func_80883B70(arg0, arg2);
    arg0->unk_3E0 = 6;
    arg0[1].shape.shadowDraw = 6;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((*(&D_80888F08 + (arg0[1].home.pos.y * 4)))->unk_18), (u8) 2, -3.0f);
    func_8087C1C0(arg0);
}

void func_8088424C(Actor *arg0, GlobalContext *arg1, ? arg2) {
    f32 *sp30;
    f32 *temp_a0;

    func_800EDF24(arg0, arg1, arg0->unk_530);
    temp_a0 = &arg0[1].scale.z;
    sp30 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0) != 0) {
        SkelAnime_ChangeAnim((SkelAnime *) sp30, *(*(&D_80888F08 + ((bitwise s32) arg0[1].home.pos.y * 4)) + ((s32) arg0[1].shape.shadowDraw * 4)), 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + ((bitwise s32) arg0[1].home.pos.y * 4)) + ((s32) arg0[1].shape.shadowDraw * 4))), (u8) 2, 0.0f);
        func_8087C1C0(arg0);
    }
}

void func_80884314(Actor *arg0, ? arg1, void *arg2) {
    ActorShape_Init(arg0 + 0xBC, 0.0f, NULL, 20.0f);
    func_80883B70(arg0, arg2);
    arg0->unk_3E0 = 7;
    SkelAnime_ChangeAnim((SkelAnime *) &arg0[1].scale.z, (AnimationHeader *) &D_0600D178, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600D178), (u8) 2, 0.0f);
    func_8019F1C0(arg0[1].shape.feetPos, 0x2844U);
}

void func_808843B4(Actor *arg0, GlobalContext *arg1, ? arg2) {
    Actor *temp_a0_2;
    SkelAnime *temp_a0;
    f32 temp_f0;

    temp_a0 = arg0 + 0x1A4;
    arg0 = arg0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_f0 = arg0[1].shape.shadowScale;
    if (temp_f0 > 42.0f) {
        temp_a0_2 = arg0;
        if (((s32) temp_f0 % 0xB) == 0) {
            arg0 = arg0;
            func_8087C1C0(temp_a0_2);
        }
        func_800EDF24(arg0, arg1, arg0->unk_530);
    }
}

void func_80884444(Actor *arg0, ? arg1, void *arg2) {
    ActorShape_Init(arg0 + 0xBC, 0.0f, NULL, 20.0f);
    func_80883B70(arg0, arg2);
    arg0[2].projectedW = 1.1e-44f;
    SkelAnime_ChangeAnim((SkelAnime *) &arg0[1].scale.z, (AnimationHeader *) &D_0600D4E8, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600D4E8), (u8) 2, 0.0f);
    func_8087C1C0(arg0);
}

void func_808844E0(Actor *arg0, GlobalContext *arg1, ? arg2) {
    f32 *sp28;
    f32 *temp_a0;

    func_800EDF24(arg0, arg1, arg0->unk_530);
    temp_a0 = &arg0[1].scale.z;
    sp28 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0) != 0) {
        SkelAnime_ChangeAnim((SkelAnime *) sp28, (AnimationHeader *) &D_0600D4E8, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600D4E8), (u8) 2, 0.0f);
        func_8087C1C0(arg0);
    }
}

void func_80884564(Actor *arg0, ? arg1, void *arg2) {
    ActorShape_Init(arg0 + 0xBC, 0.0f, NULL, 20.0f);
    func_80883B70(arg0, arg2);
    arg0[2].projectedW = 1.1e-44f;
    SkelAnime_ChangeAnim((SkelAnime *) &arg0[1].scale.z, (AnimationHeader *) &D_0600BDE0, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600BDE0), (u8) 2, -3.0f);
    func_8087C1C0(arg0);
}

void func_80884604(Actor *arg0, GlobalContext *arg1, ? arg2) {
    f32 *sp30;
    f32 *temp_a0;

    func_800EDF24(arg0, arg1, arg0->unk_530);
    temp_a0 = &arg0[1].scale.z;
    sp30 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0) != 0) {
        SkelAnime_ChangeAnim((SkelAnime *) sp30, (AnimationHeader *) &D_0600BDE0, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600BDE0), (u8) 2, 0.0f);
    }
    if (((s32) arg0[1].shape.shadowScale % 0xB) == 0) {
        func_8087C1C0(arg0);
    }
}

void func_808846B4(Actor *arg0, ? arg1, ? arg2) {
    Actor_MarkForDeath(arg0);
}

void func_808846DC(s32 arg0, ? arg1, ? arg2) {

}

void func_808846F0(EnHorse *arg0, GlobalContext *arg1) {
    arg0->unk_208 = 0;
    arg0->unk_144 = 0x15;
    arg0->unk_278.status[5].dmaReq.vromAddr = -1;
    arg0->actor.speedXZ = 0.0f;
}

void func_80884718(void *arg0, GlobalContext *arg1) {
    void *sp24;
    ? (*temp_v0_2)(void *, GlobalContext *, void *);
    ? (*temp_v0_3)(void *, GlobalContext *, void *);
    s32 temp_t6;
    s32 temp_v1;
    u32 temp_v0;
    void *temp_a2;
    void *temp_t7;
    s32 phi_v1;

    if (func_800EE29C(arg1, 0x70U) != 0) {
        temp_v0 = func_800EE200(arg1, 0x70U);
        temp_t6 = temp_v0 * 4;
        arg0->unk_530 = temp_v0;
        temp_t7 = arg1 + temp_t6;
        temp_a2 = temp_t7->unk_1F4C;
        arg0->unk_1EC = (s32) (arg0->unk_1EC | 0x20);
        temp_v1 = arg0->unk_3E0;
        phi_v1 = temp_v1;
        if (temp_a2->unk_0 != temp_v1) {
            if (temp_v1 == -1) {
                arg0->unk_24 = (f32) temp_a2->unk_C;
                arg0->unk_28 = (f32) temp_a2->unk_10;
                arg0->unk_2C = (f32) temp_a2->unk_14;
                arg0->unk_108 = (f32) arg0->unk_24;
                arg0->unk_32 = (u16) temp_a2->unk_8;
                arg0->unk_10C = (f32) arg0->unk_28;
                arg0->unk_110 = (f32) arg0->unk_2C;
                arg0->unk_BC = (unaligned s32) arg0->unk_30;
                arg0->unk_C0 = (u16) arg0->unk_34;
            }
            arg0->unk_3E0 = (s32) temp_a2->unk_0;
            temp_v0_2 = *(&D_808890F0 + ((s32) temp_a2->unk_0 * 4));
            phi_v1 = (s32) temp_a2->unk_0;
            if (temp_v0_2 != 0) {
                sp24 = temp_a2;
                temp_v0_2(arg0, arg1, temp_a2);
                phi_v1 = arg0->unk_3E0;
            }
        }
        temp_v0_3 = *(&D_8088911C + (phi_v1 * 4));
        if (temp_v0_3 != 0) {
            temp_v0_3(arg0, arg1, temp_t7->unk_1F4C);
        }
    }
}

void func_80884868(EnHorse *arg0) {
    AnimationHeader *temp_a1;
    SkelAnime *temp_a0;

    arg0->unk_144 = 0x17;
    arg0->unk_20C = 4;
    temp_a0 = arg0 + 0x1A4;
    temp_a1 = (*(&D_80888F08 + (arg0->unk_150 * 4)))->unk_10;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, temp_a1);
    arg0->unk_1E8 |= 0x10000;
}

void func_808848C8(Actor *arg0, ? arg1) {
    ? sp24;

    sp24.unk_0 = (s32) D_80889148.unk_0;
    sp24.unk_4 = (s32) D_80889148.unk_4;
    sp24.unk_8 = (s32) D_80889148.unk_8;
    func_8087C0AC(arg0);
    arg0->speedXZ = 4.0f;
    func_800F415C((EnHorse *) arg0, (s16) &sp24, 0x7D0);
    arg0[1].wallPoly = (bitwise CollisionPoly *) (arg0->speedXZ * 0.75f);
    SkelAnime_FrameUpdateMatrix((SkelAnime *) &arg0[1].scale.z);
    if (Math3D_Distance((Vec3f *) &sp24, (Vec3f *) &arg0->unk_22.y) < 30.0f) {
        arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) arg0[1].colChkInfo.displacement.x & 0xFFFEFFFF);
        func_80880500((EnHorse *) arg0);
    }
}

void func_80884994(EnHorse *arg0) {
    arg0->unk_278.status[10].dmaReq.vromAddr = -1;
    arg0->unk_20C = 5;
    arg0->unk_144 = 0x18;
    SkelAnime_ChangeAnim(arg0 + 0x1A4, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4)), 2.0f, 0.0f, (f32) SkelAnime_GetFrameCount((*(&D_80888F08 + (arg0->unk_150 * 4)))->unk_14), (u8) 2, -3.0f);
}

void func_80884A40(Actor *arg0, void *arg1) {
    ? sp44;
    s32 sp40;
    SkelAnime *sp30;
    SkelAnime *temp_a0;
    s32 temp_t7;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 phi_v1;

    sp44.unk_0 = (s32) D_80889154.unk_0;
    sp44.unk_4 = (s32) D_80889154.unk_4;
    sp44.unk_8 = (s32) D_80889154.unk_8;
    temp_v0 = arg0[1].shape.shadowDraw;
    phi_v1 = temp_v0;
    if (temp_v0 == 1) {
        phi_v1 = 0;
    }
    temp_a0 = arg0 + 0x1A4;
    sp30 = temp_a0;
    sp40 = phi_v1 != *(&sp44 + (arg0[4].world.pos.y * 4));
    if ((SkelAnime_FrameUpdateMatrix(temp_a0) != 0) || (sp40 != 0)) {
        temp_t7 = (sp + (arg0[4].world.pos.y * 4))->unk_44;
        arg0[1].shape.shadowDraw = temp_t7;
        if ((temp_t7 == 0) && (Rand_ZeroOne() < 0.5f)) {
            arg0[1].shape.shadowDraw = 1;
        }
        temp_v0_2 = arg0[1].shape.shadowDraw;
        if (sp40 != 0) {
            if (temp_v0_2 == 0) {
                SkelAnime_ChangeAnimTransitionStop(sp30, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (temp_v0_2 * 4)), -3.0f);
            } else {
                SkelAnime_ChangeAnim(sp30, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4)), 2.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (temp_v0_2 * 4))), (u8) 2, -3.0f);
            }
        } else if (temp_v0_2 == 0) {
            SkelAnime_ChangeAnimDefaultStop(sp30, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (temp_v0_2 * 4)));
        } else {
            SkelAnime_ChangeAnim(sp30, *(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (arg0[1].shape.shadowDraw * 4)), 2.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0[1].home.pos.y * 4)) + (temp_v0_2 * 4))), (u8) 2, 0.0f);
        }
        temp_v0_3 = arg0[4].world.pos.y;
        if ((temp_v0_3 == 0) || (temp_v0_3 == 1)) {
            Audio_PlayActorSound2(arg0, 0x2804U);
            return;
        }
        if (temp_v0_3 == 2) {
            temp_v0_4 = arg0[1].shape.shadowDraw;
            if (temp_v0_4 == 0) {
                func_8087C43C(arg0, arg1);
                return;
            }
            if (temp_v0_4 == 1) {
                Audio_PlayActorSound2(arg0, 0x2816U);
            }
            /* Duplicate return node #22. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
    }
}

void func_80884D04(Actor *arg0, GlobalContext *arg1) {
    f32 sp34;
    s32 temp_v1;

    arg0->unk_540 = (s32) arg0->world.pos.x;
    arg0->unk_144 = 0x19;
    arg0->speedXZ = 10.0f;
    arg0->unk_548 = (s32) arg0->world.pos.z;
    arg0->unk_544 = (s32) arg0->world.pos.y;
    Audio_PlayActorSound2(arg0, 0x1844U);
    arg0[1].shape.shadowDraw = (void (*)(Actor *, Lights *, GlobalContext *))6;
    sp34 = arg0->speedXZ * 0.2f;
    temp_v1 = (s32) arg0[1].shape.shadowDraw * 4;
    SkelAnime_ChangeAnim((SkelAnime *) &arg0[1].scale.z, *(*(&D_80888F08 + ((bitwise s32) arg0[1].home.pos.y * 4)) + temp_v1), *(&D_80888F1C + temp_v1) * sp34 * 2.5f, 0.0f, (f32) SkelAnime_GetFrameCount((*(&D_80888F08 + ((bitwise s32) arg0[1].home.pos.y * 4)))->unk_18), (u8) 2, 0.0f);
}

void func_80884E0C(void *arg0, GlobalContext *arg1) {
    f32 sp4C;
    f32 sp44;
    ? sp40;
    ? sp3C;
    SkelAnime *sp34;
    SkelAnime *temp_a0;
    SkelAnime *temp_a0_2;
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_v0;
    s32 temp_v1;

    temp_a0 = arg0 + 0x1A4;
    temp_f0 = (arg0->unk_56C * 0.2f * 0.5f) + 1.0f;
    arg0->unk_1C0 = temp_f0;
    sp4C = temp_f0;
    sp34 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        temp_v1 = arg0->unk_20C * 4;
        SkelAnime_ChangeAnim(sp34, *(*(&D_80888F08 + (arg0->unk_150 * 4)) + temp_v1), *(&D_80888F1C + temp_v1) * sp4C * 2.5f, 0.0f, (f32) SkelAnime_GetFrameCount(*(*(&D_80888F08 + (arg0->unk_150 * 4)) + (arg0->unk_20C * 4))), (u8) 2, 0.0f);
        func_8019F1C0(arg0 + 0xEC, 0x2804U);
    }
    temp_a0_2 = arg0 + 0x24;
    arg0->unk_57C = (s32) temp_a0_2->unk_0;
    arg0->unk_580 = (s32) temp_a0_2->skeleton;
    arg0->unk_24 = (f32) arg0->unk_570;
    arg0->unk_2C = (f32) arg0->unk_578;
    arg0->unk_584 = (s32) temp_a0_2->animCurrentSeg;
    sp34 = temp_a0_2;
    temp_v0 = arg0->unk_550;
    arg0->unk_56C = Math3D_Distance((Vec3f *) temp_a0_2, arg0 + 0x108);
    if (((temp_v0 == 5) || (temp_v0 == 7)) && (Player_GetMask(arg1) != 8)) {
        arg0->unk_38C->unk_488 = 7;
    } else {
        func_80880DA8(arg0->unk_20C, arg0->unk_1BC, arg0->unk_394 & 1, arg0->unk_38C + 0x488);
    }
    sp40.unk_0 = (s32) sp34->unk_0;
    sp40.unk_4 = (void **) sp34->skeleton;
    sp40.unk_8 = (AnimationHeader *) sp34->animCurrentSeg;
    sp44 += 10.0f;
    if (func_800C3FA0(&arg1->colCtx, &sp3C, &sp40) != -32000.0f) {
        temp_f2 = arg0->unk_78;
        arg0->unk_68 = (f32) (arg0->unk_68 + arg0->unk_74);
        if (arg0->unk_68 < temp_f2) {
            arg0->unk_68 = temp_f2;
        }
        arg0->unk_28 = (f32) (arg0->unk_28 + (arg0->unk_68 * 0.5f));
        return;
    }
    arg0->unk_28 = (f32) arg0->unk_574;
}

void func_80885060(void *arg0, s16 arg1, f32 arg2, f32 arg3, f32 *arg4) {
    arg4->unk_0 = (Math_SinS(arg1) * arg2) + arg0->unk_0;
    arg4[1] = arg0->unk_4 + arg3;
    arg4[2] = (Math_CosS(arg1) * arg2) + arg0->unk_8;
}

s32 func_808850DC(GlobalContext *arg0, GlobalContext *arg1, f32 *arg2, CollisionPoly **arg3, f32 *arg4, s32 *arg5) {
    f32 sp34;
    WaterBox *sp30;
    CollisionContext *temp_s0;
    CollisionPoly *temp_a1;
    f32 temp_f0;
    s32 temp_cond;

    *arg3 = NULL;
    temp_s0 = arg1 + 0x830;
    temp_f0 = func_800C40B4(temp_s0, arg3, arg5, arg2);
    temp_cond = temp_f0 == -32000.0f;
    *arg4 = temp_f0;
    if (temp_cond) {
        return 1;
    }
    if ((func_800CA1E8(arg1, temp_s0, arg2->unk_0, arg2[2], &sp34, &sp30) == 1) && (*arg4 < sp34)) {
        return 2;
    }
    temp_a1 = *arg3;
    if ((((f32) temp_a1->normal.y * 0.00003051851f) < 0.81915206f) || (func_800C9B90(temp_s0, temp_a1, *arg5) != 0) || (func_800C99D4(temp_s0, *arg3, *arg5) == 7)) {
        return 3;
    }
    return 0;
}

void func_80885220(GlobalContext *arg0, GlobalContext *arg1, GlobalContext *arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->view.projection.m[2][3];
    if (temp_v0 != 0x12) {
        if ((temp_v0 == 5) || (temp_v0 == 6)) {
            arg0->state.input[1].prev.button += -0x640;
            arg0->unk_24 = (s32) arg0->unk_108;
            arg0->view.quakeScale.x |= 4;
            arg0->unk_2C = (s32) arg0->unk_110;
            arg0->unk_28 = (?32) arg0->unk_10C;
            arg0->unk_70 = 0.0f;
            arg0->unk_BE = (s16) arg0->state.input[1].prev.button;
            return;
        }
        if (temp_v0 == 0x19) {
            arg0->unk_24 = (s32) arg0->unk_108;
            arg0->view.quakeScale.x |= 0x80;
            arg0->unk_28 = (?32) arg0->unk_10C;
            arg0->unk_2C = (s32) arg0->unk_110;
            arg0->unk_70 = 0.0f;
            return;
        }
        if ((arg1->sceneNum != 0x6A) || ((arg0->view.quakeScale.x & 2) != 0)) {
            arg0->unk_24 = (s32) arg0->view.quakeScale.y;
            arg0->view.quakeScale.x &= -3;
            arg0->view.quakeRot.z |= 0x4000;
            arg0->unk_2C = (s32) arg0->view.quakeSpeed;
            arg0->unk_28 = (?32) arg0->view.quakeScale.z;
            if (arg0->view.currQuakeScale.x == 0) {
                if (arg0->view.currQuakeScale.y != 3) {
                    return;
                }
                /* Duplicate return node #22. Try simplifying control flow for better match */
                return;
            }
            if (arg0->view.projection.m[2][3] != 0xD) {
                temp_v0_2 = arg0->view.quakeRot.z;
                if ((temp_v0_2 & 4) != 0) {
                    arg0->view.quakeRot.z = temp_v0_2 & ~4;
                    arg0->state.heap.size = 0xC0600000;
                    arg0->unk_28 = (f32) arg0->state.alloc.base.prev;
                }
                if ((arg2 == 1) || (arg2 == 4)) {
                    arg0->view.quakeRot.z |= 0x10;
                } else if ((arg2 == 2) || (arg2 == 5)) {
                    arg0->view.quakeRot.z |= 0x20;
                }
                if (arg3 == 1) {
                    func_8087EEC4();
                }
            }
            /* Duplicate return node #22. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
    }
}

void func_808853E0(GlobalContext *arg0, GlobalContext *arg1) {
    CollisionPoly *sp88;
    CollisionPoly *sp84;
    s32 sp80;
    s16 sp7E;
    f32 sp70;
    f32 sp64;
    f32 sp5C;
    ? sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    s32 sp48;
    f32 sp40;
    WaterBox *sp3C;
    CollisionContext *sp34;
    void *sp30;
    CollisionContext *temp_a1;
    GameAllocNode *temp_f2_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1_2;
    void *temp_a1_3;
    s32 phi_t6;

    phi_t6 = 0;
    if (arg0->unk_70 > 8.0f) {
        phi_t6 = 1;
    }
    sp48 = phi_t6;
    temp_a1 = arg1 + 0x830;
    sp34 = temp_a1;
    if ((func_800CA1E8(arg1, temp_a1, arg0->unk_24, arg0->unk_2C, &sp40, &sp3C) == 1) && (arg0->state.alloc.base.prev < sp40)) {
        func_80885220(arg0, arg1, (GlobalContext *)1, sp48);
        return;
    }
    temp_a0 = arg0 + 0x24;
    if (arg0->view.projection.m[3][2] != 2) {
        temp_a0_2 = arg0 + 0x24;
        sp30 = temp_a0_2;
        func_80885060(temp_a0_2, arg0->unk_BE, 30.0f, 55.0f, &sp70);
    } else {
        sp30 = temp_a0;
        func_80885060(temp_a0, arg0->unk_BE, 15.0f, 30.0f, &sp70);
    }
    temp_v0 = func_808850DC(arg0, arg1, &sp70, &sp88, arg0 + 0x244, arg0 + 0x24C);
    if (temp_v0 == 1) {
        arg0->unk_BC = 0;
        func_80885220(arg0, arg1, (GlobalContext *)4, sp48);
        return;
    }
    if (temp_v0 == 3) {
        arg0->view.quakeScale.x |= 2;
        func_80885220(arg0, arg1, (GlobalContext *)4, sp48);
        return;
    }
    if (arg0->view.projection.m[3][2] != 2) {
        func_80885060(sp30, arg0->unk_BE, -30.0f, 55.0f, &sp64);
    } else {
        func_80885060(sp30, arg0->unk_BE, -15.0f, 30.0f, &sp64);
    }
    temp_v0_2 = func_808850DC(arg0, arg1, &sp64, &sp84, arg0 + 0x248, &sp80);
    if (temp_v0_2 == 1) {
        arg0->unk_BC = 0;
        func_80885220(arg0, arg1, (GlobalContext *)5, sp48);
        return;
    }
    if (temp_v0_2 == 3) {
        arg0->view.quakeScale.x |= 2;
        func_80885220(arg0, arg1, (GlobalContext *)5, sp48);
        return;
    }
    sp7E = Math_Atan2S(arg0->unk_248 - arg0->unk_244, 60.0f);
    temp_a1_2 = arg0->state.heap.tail;
    if (temp_a1_2 != 0) {
        sp58.unk_0 = (s32) sp70.unk_0;
        sp58.unk_4 = (s32) (&sp70)[1];
        sp58.unk_8 = (s32) (&sp70)[2];
        sp5C = arg0->unk_244;
        temp_f12 = (f32) temp_a1_2->unk_8 * 0.00003051851f;
        temp_f14 = (f32) temp_a1_2->unk_A * 0.00003051851f;
        sp54 = temp_f12;
        sp50 = temp_f14;
        temp_f2 = (f32) temp_a1_2->unk_C * 0.00003051851f;
        sp4C = temp_f2;
        temp_f0 = Math3D_NormalizedSignedDistanceFromPlane(temp_f12, temp_f14, temp_f2, (f32) arg0->state.heap.tail->unk_E, (Vec3f *) &sp58);
        if ((sp88 != arg0->state.heap.tail) && (arg0->unk_70 >= 0.0f) && (((temp_v0_3 = arg0->view.quakeRot.z & 4, (temp_v0_3 == 0)) && (temp_f0 < -40.0f)) || ((temp_v0_3 != 0) && (temp_f0 < -200.0f)))) {
            func_80885220((bitwise GlobalContext *) temp_f12, arg0, arg1, 4, sp48);
            return;
        }
        sp58.unk_0 = (f32) sp64.unk_0;
        sp58.unk_4 = (f32) (&sp64)[1];
        sp58.unk_8 = (f32) (&sp64)[2];
        sp5C = arg0->unk_248;
        temp_f0_2 = Math3D_NormalizedSignedDistanceFromPlane(temp_f12, sp50, temp_f2, (f32) arg0->state.heap.tail->unk_E, (Vec3f *) &sp58);
        temp_a1_3 = arg0->state.heap.tail;
        if ((sp84 != temp_a1_3) && (arg0->unk_70 <= 0.0f) && (((temp_v0_4 = (bitwise s32) arg0->view.quakeRot.z & 4, (temp_v0_4 == 0)) && (temp_f0_2 < -40.0f)) || ((temp_v0_4 != 0) && (temp_f0_2 < -200.0f)))) {
            func_80885220(arg0, arg1, (GlobalContext *)5, sp48);
            return;
        }
        if ((sp50 < 0.81915206f) || (func_800C9B90(sp34, (CollisionPoly *) temp_a1_3, (s32) arg0->unk_85) != 0) || (func_800C99D4(sp34, (CollisionPoly *) arg0->state.heap.tail, (s32) arg0->unk_85) == 7)) {
            if (arg0->unk_70 >= 0.0f) {
                func_80885220(arg0, arg1, (GlobalContext *)4, sp48);
                return;
            }
            func_80885220(arg0, arg1, (GlobalContext *)5, sp48);
            return;
        }
        if (((bitwise s32) arg0->view.quakeRot.z & 4) != 0) {
            arg0->unk_BC = 0;
            return;
        }
        temp_f2_2 = arg0->state.alloc.base.prev;
        if (((bitwise f32) temp_f2_2 + 4.0f) < arg0->unk_28) {
            arg0->unk_BC = 0;
            return;
        }
        if (!(fabsf((f32) sp7E) > 8191.0f)) {
            temp_f0_3 = arg0->unk_244;
            arg0->unk_BC = sp7E;
            arg0->view.viewport.bottomY = (bitwise s32) (((temp_f0_3 + (((arg0->unk_248 - temp_f0_3) * 20.0f) / 45.0f)) - (bitwise f32) temp_f2_2) + arg0->subCameras[0].at.x);
        }
        /* Duplicate return node #46. Try simplifying control flow for better match */
    }
}

void func_8088598C(EnHorse *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    temp_v0 = func_80887E64(arg0, arg1);
    if ((temp_v0 != 0) && ((arg0->unk_1E8 << 0xF) >= 0)) {
        func_800B8C9C(arg1, arg0, temp_v0);
    }
    if ((arg0->unk_208 == 0) && (func_800B8C78(arg1, arg0) == 1)) {
        arg0->unk_148 = 0x1A;
        arg0->unk_14C = 0x1A;
        arg0->unk_208 = 1;
        func_8087D75C(arg0, arg1);
        return;
    }
    if ((arg0->unk_208 == 1) && (func_800B8CEC(arg1, arg0) == 1)) {
        arg0->unk_148 = 0x23;
        arg0->unk_14C = 0x23;
        arg0->unk_1E8 &= 0xFFFEFFFF;
        arg0->unk_208 = 0;
        func_8087D75C(arg0, arg1);
    }
}

void func_80885A80(void *arg0, f32 *arg1, f32 *arg2) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_cond;

    temp_f2 = arg0->unk_0;
    temp_f12 = arg0->unk_4;
    temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
    temp_cond = temp_f0 > 60.0f;
    *arg1 = temp_f0;
    if (temp_cond) {
        *arg1 = 60.0f;
    } else {
        *arg1 = *arg1;
    }
    *arg2 = Math_Atan2S(-arg0->unk_0, arg0->unk_4);
}

void func_80885AF4(EnHorse *arg0, GlobalContext *arg1) {
    void *temp_v0;

    temp_v0 = arg1 + (arg0->unk_52C * 0x18);
    arg0->unk_26C = arg0->unk_264;
    arg0->unk_270 = arg0->unk_268;
    arg0->unk_264 = (f32) temp_v0->unk_28;
    arg0->unk_268 = (f32) (temp_v0 + 0x14)->unk_15;
}

void func_80885B4C(Actor *arg0, GlobalContext *arg1, CollisionPoly *arg2) {
    f32 sp3C;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f4;
    s16 temp_t8;

    temp_f12 = (f32) arg2->normal.x;
    temp_f20 = temp_f12 * 0.00003051851f;
    sp3C = (f32) arg2->normal.y * 0.00003051851f;
    temp_t8 = arg2->normal.z;
    arg2 = arg2;
    temp_f14 = (f32) temp_t8;
    temp_f22 = temp_f14 * 0.00003051851f;
    if (!(Math_CosS((s16) ((arg0->world.rot.y - Math_Atan2S(temp_f12, temp_f14)) + 0x8000)) < 0.7071f)) {
        temp_f2 = (30.0f - Math3D_NormalizedSignedDistanceFromPlane(temp_f20, sp3C, temp_f22, (f32) arg2->dist, arg0 + 0x24)) * (1.0f / sqrtf((temp_f20 * temp_f20) + (temp_f22 * temp_f22)));
        temp_f4 = arg0->world.pos.z + (temp_f2 * temp_f22);
        arg0->world.pos.x += temp_f2 * temp_f20;
        arg0->world.pos.z = temp_f4;
    }
}

void func_80885C90(Actor *arg0, GlobalContext *arg1) {
    f32 sp64;
    ? sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    ? sp48;
    CollisionPoly *sp44;
    u32 sp40;

    Math_Vec3f_Copy((Vec3f *) &sp60, arg0 + 0x24);
    sp64 += 40.0f;
    Math_Vec3f_Copy((Vec3f *) &sp54, (Vec3f *) &sp60);
    sp54 += 30.0f * Math_SinS(arg0->world.rot.y);
    sp58 += 30.0f * Math_SinS((s16) ((s32) arg0->shape.rot.x * -1));
    sp5C += 30.0f * Math_CosS(arg0->world.rot.y);
    if (func_800C55C4(arg1 + 0x830, (Vec3f *) &sp60, (Vec3f *) &sp54, (Vec3f *) &sp48, &sp44, 1U, 0U, 0U, 1U, &sp40) != 0) {
        func_80885B4C(arg0, arg1, sp44);
    }
}

void func_80885DA4(Actor *arg0, GlobalContext *arg1) {
    f32 spC0;
    ? spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 sp9C;
    CollisionPoly *sp98;
    CollisionPoly *sp94;
    u32 sp90;
    f32 sp8C;
    f32 sp88;
    s32 sp80;
    s16 sp7E;
    DynaPolyActor *sp78;
    ? sp64;
    f32 sp5C;
    ? sp58;
    s16 *sp48;
    CollisionContext *sp40;
    CollisionContext *temp_a0;
    CollisionPoly **temp_t8_2;
    CollisionPoly *temp_v0_6;
    DynaPolyActor *temp_v0_2;
    DynaPolyActor *temp_v0_5;
    DynaPolyActor *temp_v0_7;
    DynaPolyActor *temp_v0_8;
    Vec3f *temp_a0_2;
    f32 temp_a2;
    f32 temp_a2_2;
    f32 temp_a2_3;
    f32 temp_a2_4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s16 *temp_v0_4;
    s16 temp_a0_3;
    s16 temp_v0;
    s32 temp_t8;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 phi_v1;
    s32 phi_a2;

    sp98 = NULL;
    sp94 = NULL;
    sp7E = 0;
    sp78 = NULL;
    temp_v0 = arg0->params;
    if ((temp_v0 != 4) && (temp_v0 != 5) && (temp_v0 != 0x13) && (temp_v0 != 0x14) && (temp_v0 != 0x12)) {
        Actor_UpdateBgCheckInfo(arg1, arg0, 40.0f, 35.0f, 100.0f, 0x1DU);
    } else {
        Actor_UpdateBgCheckInfo(arg1, arg0, 40.0f, 35.0f, 100.0f, 0x1CU);
    }
    if (((arg0->bgCheckFlags & 8) != 0) && (Math_CosS((s16) (arg0->wallYaw - arg0->world.rot.y)) < -0.3f)) {
        temp_f2 = arg0->speedXZ;
        if (temp_f2 > 4.0f) {
            arg0->speedXZ = temp_f2 - 1.0f;
            if ((bitwise s32) arg0[1].home.pos.y == 2) {
                func_8019F1C0(&arg0->projectedPos, 0x282CU);
            } else {
                func_8019F1C0(&arg0->projectedPos, 0x282CU);
            }
        }
    }
    temp_a0 = &arg1->colCtx;
    sp40 = temp_a0;
    temp_v0_2 = BgCheck_GetActorOfMesh(temp_a0, (s32) arg0->floorBgId);
    temp_a2 = arg0[1].colChkInfo.displacement.x;
    temp_v1 = (bitwise s32) temp_a2 & 4;
    phi_v1 = temp_v1;
    phi_a2 = (bitwise s32) temp_a2;
    if (temp_v1 == 0) {
        if ((temp_v0_2 != 0) && (temp_v0_2->actor.id == 0x6B) && ((temp_v0_2->actor.params & 0xFF) == 5)) {
            temp_f0 = arg0->unk_3E8;
            temp_f2_2 = arg0->speedXZ;
            arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) temp_a2 | 0x10000000);
            arg0->unk_3E8 = (f32) (temp_f0 + (((-10.0f / arg0->scale.y) - temp_f0) * 0.5f));
            if (temp_f2_2 > 2.0f) {
                temp_a0_2 = &arg0->projectedPos;
                arg0->speedXZ = temp_f2_2 - 1.0f;
                if ((bitwise s32) arg0[1].home.pos.y == 2) {
                    func_8019F1C0(temp_a0_2, 0x282CU);
                } else {
                    func_8019F1C0(temp_a0_2, 0x282CU);
                }
            }
            temp_a2_2 = arg0[1].colChkInfo.displacement.x;
            phi_v1 = (bitwise s32) temp_a2_2 & 4;
            phi_a2 = (bitwise s32) temp_a2_2;
        } else {
            temp_t8 = (bitwise s32) temp_a2 & 0xEFFFFFFF;
            arg0[1].colChkInfo.displacement.x = (bitwise f32) temp_t8;
            arg0->unk_3E8 = (f32) (arg0->unk_3E8 * 0.5f);
            phi_v1 = temp_t8 & 4;
            phi_a2 = temp_t8;
        }
    }
    if ((phi_v1 == 0) && ((phi_a2 * 8) >= 0) && (temp_f2_3 = arg0->speedXZ, !(temp_f2_3 < 0.0f)) && (temp_v0_3 = arg0->unk_144, (temp_v0_3 != 0xE)) && (temp_v0_3 != 0xD)) {
        temp_v0_4 = &arg0->unk_22.y;
        if (temp_f2_3 > 8.0f) {
            if (temp_f2_3 < 12.8f) {
                sp80 = 0;
                sp9C = 160.0f;
            } else {
                sp80 = 1;
                sp9C = 230.0f;
            }
            spBC.unk_0 = (f32) temp_v0_4->unk_0;
            spBC.unk_4 = (f32) temp_v0_4->unk_4;
            spBC.unk_8 = (f32) temp_v0_4->unk_8;
            spC0 += 19.0f;
            spB0.unk_0 = spBC.unk_0;
            (&spB0)[1] = spBC.unk_4;
            (&spB0)[2] = spBC.unk_8;
            sp48 = temp_v0_4;
            spB0 += sp9C * Math_SinS(arg0->world.rot.y);
            spB4 += sp9C * Math_SinS((s16) ((s32) arg0->shape.rot.x * -1));
            temp_t8_2 = &sp98;
            spB8 += sp9C * Math_CosS(arg0->world.rot.y);
            sp64.unk_0 = (f32) spB0.unk_0;
            sp64.unk_4 = (f32) (&spB0)[1];
            sp64.unk_8 = (f32) (&spB0)[2];
            sp98 = NULL;
            if (func_800C55C4(sp40, (Vec3f *) &spBC, (Vec3f *) &spB0, (Vec3f *) &sp64, temp_t8_2, 1U, 0U, 0U, 1U, &sp90) == 1) {
                sp9C = sqrtf(Math3D_DistanceSquared((Vec3f *) &spBC, (Vec3f *) &sp64));
                arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) arg0[1].colChkInfo.displacement.x | 0x4000);
            }
            if (sp98 != 0) {
                if (sp9C < 30.0f) {
                    func_80885B4C(arg0, arg1, sp98);
                }
                temp_a0_3 = (arg0->world.rot.y - Math_Atan2S((f32) sp98->normal.x, (f32) sp98->normal.z)) + 0x8000;
                sp7E = temp_a0_3;
                if (!(Math_CosS(temp_a0_3) < 0.5f) && (func_800C9B90(sp40, sp98, (s32) sp90) == 0)) {
                    if (((sp80 == 0) && (sp9C < 80.0f)) || ((sp80 == 1) && (sp9C < 150.0f))) {
                        if ((arg1->sceneNum != 0x6A) && (Math_CosS(sp7E) < 0.9f) && ((bitwise s32) arg0[1].shape.yOffset == 1)) {
                            if (sp80 == 0) {
                                arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) arg0[1].colChkInfo.displacement.x | 0x10);
                                return;
                            }
                            if (sp80 == 1) {
                                arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) arg0[1].colChkInfo.displacement.x | 0x10);
                                func_8087F1FC(arg0, (Actor *) arg1);
                                return;
                            }
                            /* Duplicate return node #134. Try simplifying control flow for better match */
                            return;
                        }
                        /* Duplicate return node #134. Try simplifying control flow for better match */
                        return;
                    }
                    temp_v0_5 = BgCheck_GetActorOfMesh(sp40, (s32) sp90);
                    temp_a2_3 = arg0[1].colChkInfo.displacement.x;
                    if (((bitwise s32) temp_a2_3 & 0x4000000) && (((temp_v0_5 != 0) && (temp_v0_5->actor.id != 0x7C)) || (temp_v0_5 == 0))) {
                        if ((bitwise s32) arg0[1].shape.yOffset == 1) {
                            if (sp80 == 0) {
                                arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) temp_a2_3 | 0x10);
                                return;
                            }
                            if (sp80 == 1) {
                                arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) temp_a2_3 | 0x10);
                                func_8087F1FC(arg0, (Actor *) arg1, temp_a2_3);
                                return;
                            }
                            /* Duplicate return node #134. Try simplifying control flow for better match */
                            return;
                        }
                        /* Duplicate return node #134. Try simplifying control flow for better match */
                        return;
                    }
                    goto block_60;
                }
                /* Duplicate return node #134. Try simplifying control flow for better match */
                return;
            }
block_60:
            sp9C += 5.0f;
            spA4.unk_0 = spBC.unk_0;
            (&spA4)[1] = spBC.unk_4;
            (&spA4)[2] = spBC.unk_8;
            spA4 += sp9C * Math_SinS(arg0->world.rot.y);
            spA8 = arg0->world.pos.y + 120.0f;
            spAC += sp9C * Math_CosS(arg0->world.rot.y);
            sp58.unk_0 = (f32) spA4.unk_0;
            sp58.unk_4 = (f32) (&spA4)[1];
            sp58.unk_8 = (f32) (&spA4)[2];
            temp_f0_2 = func_800C40B4(sp40, &sp94, (s32 *) &sp90, &spA4);
            sp5C = temp_f0_2;
            if ((temp_f0_2 != -32000.0f) && (sp8C = temp_f0_2 - arg0->world.pos.y, temp_v0_6 = arg0->floorPoly, (temp_v0_6 != 0)) && (sp94 != 0)) {
                if ((Math3D_NormalizedSignedDistanceFromPlane((f32) temp_v0_6->normal.x * 0.00003051851f, (f32) temp_v0_6->normal.y * 0.00003051851f, (f32) temp_v0_6->normal.z * 0.00003051851f, (f32) temp_v0_6->dist, (Vec3f *) &sp58) < -40.0f) && (Math3D_NormalizedSignedDistanceFromPlane((f32) sp94->normal.x * 0.00003051851f, (f32) sp94->normal.y * 0.00003051851f, (f32) sp94->normal.z * 0.00003051851f, (f32) sp94->dist, (Vec3f *) sp48) > 40.0f)) {
                    if ((sp80 == 1) && ((bitwise s32) arg0[1].shape.yOffset == 1) && (arg0->unk_144 != 0xE) && (arg1->sceneNum != 0x6A)) {
                        arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) arg0[1].colChkInfo.displacement.x | 0x10);
                        func_8087F1FC(arg0, (Actor *) arg1);
                    }
                    arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) arg0[1].colChkInfo.displacement.x | 0x4000);
                    return;
                }
                if ((((f32) sp94->normal.y * 0.00003051851f) < 0.81915206f) || (func_800C9B90(sp40, sp94, (s32) sp90) != 0) || (func_800C99D4(sp40, sp94, (s32) sp90) == 7)) {
                    if ((Math_CosS(sp7E) < 0.9f) && (sp80 == 1) && ((bitwise s32) arg0[1].shape.yOffset == 1) && (arg0->unk_144 != 0xE) && (arg1->sceneNum != 0x6A)) {
                        arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) arg0[1].colChkInfo.displacement.x | 0x10);
                        func_8087F1FC(arg0, (Actor *) arg1);
                        return;
                    }
                    /* Duplicate return node #134. Try simplifying control flow for better match */
                    return;
                }
                if (((sp98 != 0) || ((temp_v0_7 = BgCheck_GetActorOfMesh(sp40, (s32) sp90), sp78 = temp_v0_7, (temp_v0_7 != 0)) && (temp_v0_7->actor.id == 0x6B) && ((temp_v0_7->actor.params & 0xFF) == 5))) && (!(sp5C < sp68) || ((sp78 != 0) && (sp78->actor.id == 0x6B) && ((sp78->actor.params & 0xFF) == 5))) && ((temp_a2_4 = arg0[1].colChkInfo.displacement.x, !((bitwise s32) temp_a2_4 & 0x20000)) || (arg0->unk_144 == 5))) {
                    if ((arg0->unk_144 == 5) && (((bitwise s32) temp_a2_4 * 2) >= 0)) {
                        temp_v0_8 = BgCheck_GetActorOfMesh(sp40, (s32) sp90);
                        sp78 = temp_v0_8;
                        if ((temp_v0_8 != 0) && (temp_v0_8->actor.id == 0x6B) && ((temp_v0_8->actor.params & 0xFF) == 5)) {
                            arg0[1].uncullZoneForward = (bitwise f32) func_8088126C;
                            arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) arg0[1].colChkInfo.displacement.x | 0x40000000);
                        }
                    }
                    if ((bitwise s32) arg0[1].shape.yOffset != 0) {
                        spA4.unk_0 = spBC.unk_0;
                        (&spA4)[1] = spBC.unk_4;
                        (&spA4)[2] = spBC.unk_8;
                        spA8 = arg0->world.pos.y + 120.0f;
                        if (sp80 == 0) {
                            spA4 += 276.0f * Math_SinS(arg0->world.rot.y);
                            spAC += 276.0f * Math_CosS(arg0->world.rot.y);
                        } else {
                            spA4 += 390.0f * Math_SinS(arg0->world.rot.y);
                            spAC += 390.0f * Math_CosS(arg0->world.rot.y);
                        }
                        sp58.unk_0 = (f32) spA4.unk_0;
                        sp58.unk_4 = (f32) (&spA4)[1];
                        sp58.unk_8 = (f32) (&spA4)[2];
                        temp_f0_3 = func_800C40B4(sp40, &sp94, (s32 *) &sp90, &spA4);
                        sp5C = temp_f0_3;
                        if ((temp_f0_3 != -32000.0f) && (sp88 = temp_f0_3 - arg0->world.pos.y, (sp94 != 0))) {
                            if ((((f32) sp94->normal.y * 0.00003051851f) < 0.81915206f) || (func_800C9B90(sp40, sp94, (s32) sp90) != 0) || (func_800C99D4(sp40, sp94, (s32) sp90) == 7)) {
                                if ((sp80 == 1) && ((bitwise s32) arg0[1].shape.yOffset == 1) && (arg0->unk_144 != 0xE) && (arg1->sceneNum != 0x6A)) {
                                    arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) arg0[1].colChkInfo.displacement.x | 0x10);
                                    func_8087F1FC(arg0, (Actor *) arg1);
                                    return;
                                }
                                /* Duplicate return node #134. Try simplifying control flow for better match */
                                return;
                            }
                            if (sp88 < -70.0f) {
                                if ((sp80 == 1) && ((bitwise s32) arg0[1].shape.yOffset == 1) && (arg0->unk_144 != 0xE) && (arg1->sceneNum != 0x6A)) {
                                    arg0[1].colChkInfo.displacement.x = (bitwise f32) ((bitwise s32) arg0[1].colChkInfo.displacement.x | 0x10);
                                    func_8087F1FC(arg0, (Actor *) arg1);
                                    return;
                                }
                                /* Duplicate return node #134. Try simplifying control flow for better match */
                                return;
                            }
                            temp_f0_4 = arg0->scale.y * 100.0f;
                            if ((sp78 == 0) || (sp78->actor.id != 0x6B) || ((sp78->actor.params & 0xFF) != 5)) {
                                if ((sp80 == 0) && ((19.0f * temp_f0_4) < sp8C) && (sp8C <= (40.0f * temp_f0_4))) {
                                    func_8087FB08(arg0);
                                    arg0[1].uncullZoneForward = (bitwise f32) func_8087F9A0;
                                    return;
                                }
                                if ((sp80 == 1) && (((temp_f2_4 = arg0->speedXZ, (temp_f2_4 < 13.8f)) && ((19.0f * temp_f0_4) < sp8C) && (sp8C <= (72.0f * temp_f0_4))) || ((temp_f2_4 > 13.8f) && (sp8C <= (112.0f * temp_f0_4))))) {
                                    func_8087FF08((bitwise Actor *) 13.8f, sp8C, arg0);
                                    arg0[1].uncullZoneForward = (bitwise f32) func_8087FD94;
                                    return;
                                }
                                /* Duplicate return node #134. Try simplifying control flow for better match */
                                return;
                            }
                            if (sp80 == 0) {
                                func_8087FB08(arg0);
                                arg0[1].uncullZoneForward = (bitwise f32) func_8087F9A0;
                                return;
                            }
                            if (sp80 == 1) {
                                func_8087FF08(arg0);
                                arg0[1].uncullZoneForward = (bitwise f32) func_8087FD94;
                            }
                            /* Duplicate return node #134. Try simplifying control flow for better match */
                            return;
                        }
                        /* Duplicate return node #134. Try simplifying control flow for better match */
                        return;
                    }
                    /* Duplicate return node #134. Try simplifying control flow for better match */
                    return;
                }
                /* Duplicate return node #134. Try simplifying control flow for better match */
                return;
            }
            /* Duplicate return node #134. Try simplifying control flow for better match */
            return;
        }
        func_80885C90(arg0, arg1, phi_a2);
    }
}

void func_80886C00(EnHorse *arg0, GlobalContext *arg1) {
    s32 temp_t3;
    s32 temp_t6;
    s32 temp_t8;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u8 temp_t2;

    temp_v0 = arg0->unk_144;
    if (((temp_v0 == 0xA) || (temp_v0 == 0xB) || (temp_v0 == 0xC)) && ((~((arg1 + (arg0->unk_52C * 0x18) + 0x14)->unk_C | 0xFFFF7FFF) == 0) || (func_801A5100() == 5)) && (arg1->interfaceCtx.unk_212 == 8) && (temp_v0_2 = arg0->unk_1E8, ((temp_v0_2 & 1) == 0)) && ((temp_v0_2 & 0x100) == 0) && ((temp_v0_2 & 0x200) == 0)) {
        if ((s32) arg0->unk_234 > 0) {
            func_8013ECE0(0.0f, 0xB4U, 0x14U, 0x64U);
            temp_t6 = arg0->unk_1E8 | 1;
            temp_t8 = temp_t6 | 0x400000;
            arg0->unk_1E8 = temp_t6;
            temp_t2 = arg0->unk_234 - 1;
            arg0->unk_1E8 = temp_t8;
            temp_t3 = temp_t2 & 0xFF;
            arg0->unk_1E8 = temp_t8 | 0x100;
            arg0->unk_234 = temp_t2;
            arg0->unk_23C = 0;
            if (temp_t3 == 0) {
                arg0->unk_238 = 0x8C;
                return;
            }
            if (arg0->unk_150 == 0) {
                temp_v0_3 = arg0->unk_1E8;
                if ((temp_v0_3 & 0x400000) != 0) {
                    arg0->unk_238 = 0x3C;
                    arg0->unk_1E8 = temp_v0_3 & 0xFFBFFFFF;
                    return;
                }
                arg0->unk_238 = 8;
                return;
            }
            arg0->unk_238 = 0x46;
            return;
        }
        if (((temp_v0_2 * 0x10) < 0) && (Rand_ZeroOne() < 0.1f)) {
            if (arg0->unk_150 == 2) {
                func_8019F1C0(arg0 + 0x218, 0x2844U);
                return;
            }
            func_8019F1C0(arg0 + 0x218, 0x2805U);
            /* Duplicate return node #22. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
    }
}

void func_80886DC4(EnHorse *arg0, GlobalContext *arg1) {
    Vec3f *temp_a0;
    Vec3f *temp_a0_2;
    s32 temp_t7;
    s32 temp_t8;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    u8 temp_v0;
    s32 phi_v0;
    s32 phi_v0_2;
    EnHorse *phi_a2;
    EnHorse *phi_a2_2;

    temp_v0 = arg0->unk_234;
    phi_a2 = arg0;
    if (((s32) temp_v0 < 6) && ((s32) temp_v0 > 0)) {
        temp_t7 = arg0->unk_238 - 1;
        arg0->unk_238 = temp_t7;
        arg0->unk_23C += 1;
        if (temp_t7 <= 0) {
            temp_v0_2 = arg0->unk_144;
            arg0->unk_234 += 1;
            if (((temp_v0_2 == 7) || (temp_v0_2 == 0) || (temp_v0_2 == 8)) && (temp_v0_3 = arg0->unk_1E8, ((temp_v0_3 << 0xC) >= 0)) && ((temp_v0_3 << 6) >= 0)) {
                phi_v0 = 1;
            } else {
                phi_v0 = 0;
            }
            if (phi_v0 == 0) {
                arg0 = arg0;
                play_sound(0x4845U);
            }
            phi_a2 = arg0;
            if ((s32) arg0->unk_234 < 6) {
                arg0->unk_238 = 0xB;
            }
        }
    } else if (temp_v0 == 0) {
        temp_t8 = arg0->unk_238 - 1;
        arg0->unk_238 = temp_t8;
        arg0->unk_23C += 1;
        if (temp_t8 <= 0) {
            temp_v0_4 = arg0->unk_144;
            arg0->unk_238 = 0;
            arg0->unk_234 = 6;
            if (((temp_v0_4 == 7) || (temp_v0_4 == 0) || (temp_v0_4 == 8)) && (temp_v0_5 = arg0->unk_1E8, ((temp_v0_5 << 0xC) >= 0)) && ((temp_v0_5 << 6) >= 0)) {
                phi_v0_2 = 1;
            } else {
                phi_v0_2 = 0;
            }
            if (phi_v0_2 == 0) {
                arg0 = arg0;
                play_sound(0x4845U);
                phi_a2 = arg0;
            }
        }
    }
    phi_a2_2 = phi_a2;
    if (phi_a2->unk_23C == 8) {
        arg0 = phi_a2;
        phi_a2_2 = arg0;
        if ((Rand_ZeroOne() < 0.25f) && ((arg0->unk_1E8 * 0x10) < 0)) {
            temp_a0 = arg0 + 0x218;
            if (arg0->unk_150 == 2) {
                temp_a0_2 = arg0 + 0x218;
                arg0 = arg0;
                func_8019F1C0(temp_a0_2, 0x2844U);
            } else {
                arg0 = arg0;
                func_8019F1C0(temp_a0, 0x2805U);
            }
            phi_a2_2 = arg0;
        }
    }
    arg1->interfaceCtx.numHorseBoosts = phi_a2_2->unk_234;
}

void func_80886FA8(Actor *arg0, GlobalContext *arg1) {
    s16 sp2A;
    f32 sp24;
    s16 temp_a0;

    temp_a0 = Actor_YawBetweenActors(arg0, arg1->actorCtx.actorList[2].first) - arg0->world.rot.y;
    sp2A = temp_a0;
    sp24 = Math_SinS(temp_a0);
    if (sp24 > 0.8660254f) {
        arg0[2].shape.feetPos[1].z = 7e-45.0f;
        return;
    }
    if (sp24 < -0.8660254f) {
        arg0[2].shape.feetPos[1].z = 6e-45.0f;
        return;
    }
    if (Math_CosS(temp_a0) > 0.0f) {
        if (sp24 > 0.0f) {
            arg0[2].shape.feetPos[1].z = 1e-45.0f;
            return;
        }
        arg0[2].shape.feetPos[1].z = 0.0f;
        return;
    }
    if (sp24 > 0.0f) {
        arg0[2].shape.feetPos[1].z = 4e-45.0f;
        return;
    }
    arg0[2].shape.feetPos[1].z = 3e-45.0f;
}

void func_808870A4(EnHorse *arg0, GlobalContext *arg1) {
    f32 temp_f12;
    s16 temp_a1;
    s32 temp_v1;

    temp_a1 = arg0->actor.world.rot.z;
    temp_v1 = -(s32) (s16) (s32) (2730.0f * (arg0->actor.speedXZ / (f32) arg0->unk_204) * ((f32) (s16) (arg0->actor.shape.rot.y - arg0->unk_1FC) / 960.00006f));
    temp_f12 = (f32) (temp_v1 - temp_a1);
    if (fabsf((f32) temp_v1) < 100.0f) {
        arg0->actor.world.rot.z = 0;
    } else if (fabsf(temp_f12) < 100.0f) {
        arg0->actor.world.rot.z = (s16) temp_v1;
    } else if (temp_f12 > 0.0f) {
        arg0->actor.world.rot.z = temp_a1 + 0x64;
    } else {
        arg0->actor.world.rot.z = temp_a1 - 0x64;
    }
    arg0->actor.shape.rot.z = arg0->actor.world.rot.z;
}

? func_808871A0(EnHorse *arg0, GlobalContext *arg1) {
    CollisionPoly *sp1C;
    CollisionContext *sp18;
    CollisionContext *temp_a0;
    CollisionPoly *temp_a1;
    CollisionPoly *temp_t7;
    s16 temp_a0_2;
    s16 temp_v1;
    u8 temp_a2;
    u8 temp_a2_2;

    temp_t7 = arg0->actor.floorPoly;
    sp1C = temp_t7;
    if ((temp_t7 == 0) || (temp_a0 = arg1 + 0x830, (arg0 != arg1->actorCtx.actorList[2].first->unk_390)) || (temp_a2 = arg0->actor.floorBgId, arg0 = arg0, sp18 = temp_a0, (func_800C9E18(temp_a0, temp_t7, (s32) temp_a2) == 0))) {
        return 0;
    }
    temp_a1 = arg0->actor.floorPoly;
    temp_a2_2 = arg0->actor.floorBgId;
    arg0 = arg0;
    temp_v1 = arg0->actor.world.rot.y;
    temp_a0_2 = (func_800C9E40(temp_a0, temp_a1, (s32) temp_a2_2) << 0xA) - temp_v1;
    if ((s32) temp_a0_2 >= 0x641) {
        arg0->actor.world.rot.y = temp_v1 + 0x640;
    } else if ((s32) temp_a0_2 < -0x640) {
        arg0->actor.world.rot.y = temp_v1 - 0x640;
    } else {
        arg0->actor.world.rot.y = temp_v1 + temp_a0_2;
    }
    arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
    return 1;
}

s32 func_80887270(f32 arg0) {
    return (s32) (Rand_ZeroOne() * arg0);
}

void EnHorse_Update(Actor *thisx, GlobalContext *globalCtx) {
    ? sp64;
    ? sp58;
    Actor *sp54;
    s32 sp44;
    s32 sp40;
    s16 *sp3C;
    CollisionCheckContext *sp38;
    void **sp34;
    ObjectContext *sp30;
    CollisionCheckContext *temp_a1_3;
    ObjectContext *temp_a1;
    Vec3s *temp_v0_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    s16 *temp_t3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v1;
    u16 temp_v0_9;
    u8 temp_t7;
    u8 temp_v0_7;
    u8 temp_v0_8;
    void **temp_a0;
    void **temp_a1_2;
    EnHorse *this = (EnHorse *) thisx;

    sp64.unk_0 = (s32) D_808891C8.unk_0;
    sp64.unk_4 = (s32) D_808891C8.unk_4;
    sp64.unk_8 = (s32) D_808891C8.unk_8;
    sp58.unk_0 = (s32) D_808891D4.unk_0;
    sp58.unk_4 = (s32) D_808891D4.unk_4;
    sp58.unk_8 = (s32) D_808891D4.unk_8;
    sp54 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = this->unk_150;
    if (temp_v0 == 2) {
        Actor_SetScale((Actor *) this, 0.00648f);
    } else if (temp_v0 == 4) {
        Actor_SetScale((Actor *) this, 0.008f);
    } else {
        Actor_SetScale((Actor *) this, 0.01f);
    }
    this->unk_1FC = this->actor.shape.rot.y;
    func_80885AF4(this, globalCtx);
    func_80886FA8((Actor *) this, globalCtx);
    if ((this->unk_1E8 & 0x2000) == 0) {
        func_8088598C(this, globalCtx);
    }
    if (this->unk_1E8 & 0x80000) {
        temp_v1 = this->unk_1E8 & 0x100000;
        if ((temp_v1 != 0) && (this->unk_278.status[3].loadQueue.msgCount == 1)) {
            this->unk_1E8 &= 0xFFEFFFFF;
            func_8087EEC4((Actor *) this);
        } else if ((temp_v1 == 0) && (this->unk_1E8 & 0x200000) && (this->unk_144 != 0xD) && (this->unk_278.status[3].loadQueue.msgCount == 1)) {
            this->unk_1E8 &= 0xFFDFFFFF;
            func_8087EEC4((Actor *) this);
        }
    }
    *(&D_80889160 + (this->unk_144 * 4))(this, globalCtx);
    temp_v0_2 = this->unk_20C;
    this->unk_1E8 &= -0x4001;
    this->unk_3EC = (s16) this->actor.world.rot.y;
    if ((temp_v0_2 == 2) || (temp_v0_2 == 3)) {
        temp_v0_3 = this->unk_1A4.limbDrawTbl;
        temp_v0_3->y += 0x154;
    }
    temp_t3 = &this->actor.unk_22.y;
    this->unk_210 = this->unk_1A4.animCurrentFrame;
    sp3C = temp_t3;
    this->unk_1F0 = temp_t3->unk_0;
    this->unk_1F4 = temp_t3->unk_4;
    this->unk_1F8 = temp_t3->unk_8;
    if ((this->unk_1E8 & 0x2000) == 0) {
        temp_v0_4 = this->unk_144;
        if ((temp_v0_4 == 0xC) || (temp_v0_4 == 0xB) || (temp_v0_4 == 0xA)) {
            func_80886C00(this, globalCtx);
        }
        if (this->unk_208 == 1) {
            func_80886DC4(this, globalCtx);
        }
        if (ActorCutscene_GetCurrentIndex() != -1) {
            this->actor.speedXZ = 0.0f;
        }
        if (this->unk_144 != 0x19) {
            Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        }
        temp_a0 = this->unk_278.status[3].loadQueue.msg;
        if (temp_a0 != 0) {
            temp_v0_5 = this->unk_144;
            if ((temp_v0_5 == 4) || (temp_v0_5 == 5) || (temp_v0_5 == 0x19)) {
                temp_a0[9] = (bitwise void *) this->actor.world.pos.x;
                this->unk_278.status[3].loadQueue.msg[10] = (bitwise void *) (this->actor.world.pos.y + 10.0f);
                this->unk_278.status[3].loadQueue.msg[11] = (bitwise void *) this->actor.world.pos.z;
                this->unk_278.status[3].loadQueue.msg->unk_BC = (s16) this->actor.shape.rot.x;
                this->unk_278.status[3].loadQueue.msg->unk_BE = (s16) this->actor.shape.rot.y;
            } else if (temp_v0_5 == 6) {
                temp_a0[9] = (bitwise void *) this->unk_258;
                temp_a0[10] = (bitwise void *) (this->unk_25C - ((f32) temp_a0->unk_264 * 0.01f * (bitwise f32) this->unk_278.status[9].loadMsg * 0.01f));
                temp_a0[11] = (bitwise void *) this->unk_260;
                temp_a0->unk_BC = (s16) this->actor.shape.rot.x;
                temp_a0->unk_BE = (s16) this->actor.shape.rot.y;
            }
        }
        if ((this->unk_278.status[2].dmaReq.notifyQueue->unk_17 & 2) != 0) {
            temp_f0 = this->actor.speedXZ;
            if (temp_f0 > 10.0f) {
                this->actor.speedXZ = temp_f0 - 1.0f;
            }
        }
        if (((this->unk_321 & 2) != 0) && ((this->unk_1E8 * 0x10) < 0)) {
            if (this->unk_150 == 2) {
                func_8019F1C0(&this->unk_218, 0x2844U);
            } else {
                func_8019F1C0(&this->unk_218, 0x2805U);
            }
        }
        temp_v0_6 = this->unk_144;
        if ((temp_v0_6 != 4) && (temp_v0_6 != 5) && (temp_v0_6 != 6)) {
            func_808870A4(this, globalCtx);
        }
        if ((this->unk_208 == 0) && ((this->unk_1EC & 8) != 0)) {
            if (((this->unk_278.status[2].dmaReq.notifyQueue->unk_17 & 2) != 0) && (*this->unk_278.status[2].dmaReq.size == 0x67)) {
                func_80884868(this);
            }
            if (((this->unk_28A & 2) != 0) && (*this->unk_284 == 0x67)) {
                func_80884868(this);
            }
            if (((this->unk_2D6 & 2) != 0) && (*this->unk_278.status[1].dmaReq.vromAddr == 0x67)) {
                func_80884868(this);
            }
        }
        temp_a1 = &this->unk_278;
        sp30 = temp_a1;
        Collider_UpdateCylinder((Actor *) this, (ColliderCylinder *) temp_a1);
        temp_a1_2 = &this->unk_278.status[0].loadMsg;
        sp34 = temp_a1_2;
        Collider_UpdateCylinder((Actor *) this, (ColliderCylinder *) temp_a1_2);
        if (this->unk_150 == 2) {
            this->unk_2BE = (s16) ((s32) (Math_SinS(this->actor.shape.rot.y) * 11.0f) + this->unk_2BE);
            this->unk_2C2 = (s16) ((s32) (Math_CosS(this->actor.shape.rot.y) * 11.0f) + this->unk_2C2);
            this->unk_30A = (s16) ((s32) (Math_SinS(this->actor.shape.rot.y) * -18.0f) + this->unk_30A);
            this->unk_278.status[2].unk_2 += (s32) (Math_CosS(this->actor.shape.rot.y) * -18.0f);
        } else {
            this->unk_2BE = (s16) ((s32) (Math_SinS(this->actor.shape.rot.y) * 6.6000004f) + this->unk_2BE);
            this->unk_2C2 = (s16) ((s32) (Math_CosS(this->actor.shape.rot.y) * 6.6000004f) + this->unk_2C2);
            this->unk_30A = (s16) ((s32) (Math_SinS(this->actor.shape.rot.y) * -10.8f) + this->unk_30A);
            this->unk_278.status[2].unk_2 += (s32) (Math_CosS(this->actor.shape.rot.y) * -10.8f);
        }
        temp_a1_3 = &globalCtx->colChkCtx;
        sp38 = temp_a1_3;
        CollisionCheck_SetAT(globalCtx, temp_a1_3, (Collider *) sp30);
        if (((this->unk_1E8 & 4) == 0) && ((this->unk_1EC & 0x20) == 0)) {
            CollisionCheck_SetOC(globalCtx, sp38, (Collider *) sp30);
            CollisionCheck_SetOC(globalCtx, sp38, (Collider *) sp34);
        } else {
            this->unk_1EC &= -0x21;
        }
        if ((this->unk_1EC & 0x100) != 0) {
            CollisionCheck_SetAC(globalCtx, sp38, (Collider *) sp30);
            CollisionCheck_SetAC(globalCtx, sp38, (Collider *) sp34);
        }
        if (((sp54->unk_A6C & 1) != 0) && ((bitwise s32) sp54[2].prevPos.x != 0)) {
            func_808871A0(this, globalCtx);
        }
        func_80885DA4((Actor *) this, globalCtx);
        func_808853E0((GlobalContext *) this, globalCtx);
        temp_f12 = this->actor.world.pos.y;
        temp_f0_2 = this->unk_244;
        if (temp_f12 < temp_f0_2) {
            temp_f2 = this->unk_248;
            if (temp_f12 < temp_f2) {
                if (temp_f2 < temp_f0_2) {
                    this->actor.world.pos.y = temp_f2;
                } else {
                    this->actor.world.pos.y = temp_f0_2;
                }
            }
        }
        this->actor.focus.pos.x = sp3C->unk_0;
        this->actor.focus.pos.y = sp3C->unk_4;
        this->actor.focus.pos.z = sp3C->unk_8;
        this->actor.focus.pos.y += 70.0f;
        if ((Rand_ZeroOne() < 0.025f) && (temp_v0_7 = this->unk_37A, (temp_v0_7 == 0))) {
            this->unk_37A = (u8) (temp_v0_7 + 1);
        } else {
            temp_v0_8 = this->unk_37A;
            temp_t7 = temp_v0_8 + 1;
            if ((s32) temp_v0_8 > 0) {
                this->unk_37A = temp_t7;
                if ((temp_t7 & 0xFF) >= 4) {
                    this->unk_37A = 0U;
                }
            }
        }
        if ((this->actor.speedXZ == 0.0f) && ((this->unk_1E8 << 0xC) >= 0)) {
            this->actor.colChkInfo.mass = 0xFF;
        } else {
            this->actor.colChkInfo.mass = 0xFE;
        }
        if (this->actor.speedXZ >= 5.0f) {
            this->unk_288 = (u8) (this->unk_288 | 1);
        } else {
            this->unk_288 = (u8) (this->unk_288 & 0xFFFE);
        }
        temp_v0_9 = this->unk_3AC;
        if ((temp_v0_9 & 1) != 0) {
            this->unk_3AC = temp_v0_9 & 0xFFFE;
            sp40 = func_80887270(100.0f);
            sp44 = func_80887270(10.0f);
            func_800B12F0(globalCtx, (Vec3f *) &this->unk_278.status[4].dmaReq.unk14, (Vec3f *) &sp58, (Vec3f *) &sp64, (s16) (sp40 + 0xC8), (s16) (sp44 + 0x1E), (s16) (func_80887270(20.0f) + 0x1E));
        } else if ((temp_v0_9 & 2) != 0) {
            this->unk_3AC = temp_v0_9 & 0xFFFD;
            sp40 = func_80887270(100.0f);
            sp44 = func_80887270(10.0f);
            func_800B12F0(globalCtx, (Vec3f *) &this->unk_278.status[4].loadQueue, (Vec3f *) &sp58, (Vec3f *) &sp64, (s16) (sp40 + 0xC8), (s16) (sp44 + 0x1E), (s16) (func_80887270(20.0f) + 0x1E));
        } else if ((temp_v0_9 & 4) != 0) {
            this->unk_3AC = temp_v0_9 & 0xFFFB;
            sp40 = func_80887270(100.0f);
            sp44 = func_80887270(10.0f);
            func_800B12F0(globalCtx, (Vec3f *) &this->unk_278.status[4].loadQueue.first, (Vec3f *) &sp58, (Vec3f *) &sp64, (s16) (sp40 + 0xC8), (s16) (sp44 + 0x1E), (s16) (func_80887270(20.0f) + 0x1E));
        } else if ((temp_v0_9 & 8) != 0) {
            this->unk_3AC = temp_v0_9 & 0xFFF7;
            sp40 = func_80887270(100.0f);
            sp44 = func_80887270(10.0f);
            func_800B12F0(globalCtx, (Vec3f *) &this->unk_278.status[4].loadMsg, (Vec3f *) &sp58, (Vec3f *) &sp64, (s16) (sp40 + 0xC8), (s16) (sp44 + 0x1E), (s16) (func_80887270(20.0f) + 0x1E));
        }
        this->unk_1E8 &= 0xF7FFFFFF;
    }
}

s32 func_80887D20(Actor *arg0, s32 arg1, Actor *arg2) {
    s32 temp_v0;

    temp_v0 = arg0[2].shape.feetPos[1].z;
    if (temp_v0 == 5) {
        return -1;
    }
    if (temp_v0 == 4) {
        return 1;
    }
    return 0;
}

s32 func_80887D60(Actor *arg0, s32 arg1, Actor *arg2) {
    s32 temp_v0;

    if (Actor_XZDistanceBetweenActors(arg0, arg2) > 75.0f) {
        goto block_10;
    }
    if (fabsf(arg0->world.pos.y - arg2->world.pos.y) > 30.0f) {
        goto block_10;
    }
    if (Math_CosS((s16) (Actor_YawBetweenActors(arg2, arg0) - arg2->world.rot.y)) < 0.17364818f) {
        goto block_10;
    }
    temp_v0 = func_80887D20(arg0, arg1, arg2);
    if (temp_v0 == -1) {
        return -1;
    }
    if (temp_v0 == 1) {
        return 1;
    }
block_10:
    return 0;
}

s32 func_80887E64(EnHorse *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    if (arg0->unk_144 != 2) {
        return 0;
    }
    temp_v0 = arg0->unk_20C;
    if ((temp_v0 != 0) && (temp_v0 != 1)) {
        return 0;
    }
    return func_80887D60(arg1->actorCtx.actorList[2].first);
}

void func_80887EBC(f32 *arg0, f32 arg1, void *arg2) {
    f32 sp24;
    f32 temp_f2;

    temp_f2 = 2.0f * arg1;
    arg2->unk_0 = (f32) (((Rand_ZeroOne() * temp_f2) + arg0->unk_0) - arg1);
    sp24 = temp_f2;
    arg2->unk_4 = (f32) (((Rand_ZeroOne() * sp24) + arg0[1]) - arg1);
    arg2->unk_8 = (f32) (((Rand_ZeroOne() * sp24) + arg0[2]) - arg1);
}

void func_80887F58(void *arg0, GlobalContext *arg1, s32 arg2) {
    f32 sp7C;
    f32 sp70;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp48;
    s32 sp44;
    f32 sp38;
    f32 sp34;
    f32 sp28;
    s32 sp24;
    f32 *temp_a2;
    f32 temp_f2;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    void *temp_v1_2;
    f32 phi_f2;
    f32 phi_f2_2;
    f32 phi_f2_3;
    s32 phi_v0;
    s32 phi_t0;

    sp7C.unk_0 = D_808891E0.unk_0;
    (&sp7C)[1] = D_808891E0.unk_4;
    (&sp7C)[2] = D_808891E0.unk_8;
    sp70.unk_0 = D_808891EC.unk_0;
    (&sp70)[1] = D_808891EC.unk_4;
    (&sp70)[2] = D_808891EC.unk_8;
    temp_v0 = arg0->unk_1E8;
    temp_f2 = arg0->unk_1BC;
    phi_f2 = temp_f2;
    if ((temp_v0 & 8) == 0) {
        if (arg0->unk_150 == 2) {
            sp60 = temp_f2;
            func_8013835C(arg2, 5, 0x78, arg0 + 0x258);
            arg0->unk_25C = (f32) (arg0->unk_25C + 13.0f);
        } else {
            sp28.unk_0 = D_808891F8.unk_0;
            (&sp28)[1] = D_808891F8.unk_4;
            (&sp28)[2] = D_808891F8.unk_8;
            sp60 = temp_f2;
            func_80138300(arg2, 0x1EU, &sp28, arg0 + 0x258);
        }
        arg0->unk_258 = (f32) (arg0->unk_258 - arg0->unk_24);
        arg0->unk_25C = (f32) (arg0->unk_25C - arg0->unk_28);
        arg0->unk_260 = (f32) (arg0->unk_260 - arg0->unk_2C);
        phi_f2 = arg0->unk_1BC;
    } else {
        arg0->unk_1E8 = (s32) (temp_v0 & ~8);
    }
    if (arg0->unk_150 == 2) {
        sp60 = phi_f2;
        func_80138300(arg2, 0xDU, &sp7C, &sp38);
    } else {
        sp60 = phi_f2;
        func_80138300(arg2, 0xDU, &sp7C, &sp38);
    }
    sp60 = sp60;
    SkinMatrix_Vec3fMtxFMultXYZW(arg1 + 0x187B0, (Vec3f *) &sp38, arg0 + 0x218, &sp34);
    temp_v1 = arg0->unk_20C;
    phi_f2_2 = sp60;
    if ((temp_v1 == 0) && (arg0->unk_144 != 0) && (((sp60 > 40.0f) && (sp60 < 45.0f) && (arg0->unk_150 == 0)) || ((sp60 > 28.0f) && (sp60 < 33.0f) && (arg0->unk_150 == 1)))) {
        if (Rand_ZeroOne() < 0.02f) {
            arg0->unk_3AC = (u16) (arg0->unk_3AC | 1);
            func_80138300(arg2, 0x1CU, &sp70, arg0 + 0x3B0);
            arg0->unk_3B4 = (f32) (arg0->unk_3B4 - 5.0f);
        }
    } else {
        temp_v0_2 = arg0->unk_144;
        if (temp_v0_2 == 0xE) {
            if (((sp60 > 10.0f) && (sp60 < 13.0f)) || ((sp60 > 25.0f) && (sp60 < 33.0f))) {
                sp60 = sp60;
                if (Rand_ZeroOne() < 0.02f) {
                    arg0->unk_3AC = (u16) (arg0->unk_3AC | 2);
                    if (arg0->unk_150 == 2) {
                        sp60 = sp60;
                        func_80138300(arg2, 0x14U, &sp70, &sp64);
                    } else {
                        sp60 = sp60;
                        func_80138300(arg2, 0x14U, &sp70, &sp64);
                    }
                    sp60 = sp60;
                    func_80887EBC(&sp64, 10.0f, arg0 + 0x3BC);
                }
                sp60 = sp60;
                phi_f2_2 = sp60;
                if (Rand_ZeroOne() < 0.02f) {
                    arg0->unk_3AC = (u16) (arg0->unk_3AC | 1);
                    if (arg0->unk_150 == 2) {
                        sp60 = sp60;
                        func_80138300(arg2, 0x1CU, &sp70, &sp64);
                    } else {
                        sp60 = sp60;
                        func_80138300(arg2, 0x1CU, &sp70, &sp64);
                    }
                    sp60 = sp60;
                    func_80887EBC(&sp64, 10.0f, arg0 + 0x3B0);
                    phi_f2_2 = sp60;
                }
            }
            phi_f2_3 = phi_f2_2;
            if (((phi_f2_2 > 6.0f) && (phi_f2_2 < 10.0f)) || ((phi_f2_2 > 23.0f) && (phi_f2_2 < 29.0f))) {
                sp60 = phi_f2_2;
                phi_f2_3 = phi_f2_2;
                if (Rand_ZeroOne() < 0.02f) {
                    arg0->unk_3AC = (u16) (arg0->unk_3AC | 8);
                    if (arg0->unk_150 == 2) {
                        sp60 = phi_f2_2;
                        func_80138300(arg2, 0x24U, &sp70, &sp64);
                    } else {
                        sp60 = phi_f2_2;
                        func_80138300(arg2, 0x25U, &sp70, &sp64);
                    }
                    sp60 = sp60;
                    func_80887EBC(&sp64, 10.0f, arg0 + 0x3D4);
                    phi_f2_3 = sp60;
                }
            }
            if ((((phi_f2_3 > 7.0f) && (phi_f2_3 < 14.0f)) || ((phi_f2_3 > 26.0f) && (phi_f2_3 < 30.0f))) && (Rand_ZeroOne() < 0.02f)) {
                arg0->unk_3AC = (u16) (arg0->unk_3AC | 4);
                if (arg0->unk_150 == 2) {
                    func_80138300(arg2, 0x2CU, &sp70, &sp64);
                } else {
                    func_80138300(arg2, 0x2DU, &sp70, &sp64);
                }
                func_80887EBC(&sp64, 10.0f, arg0 + 0x3C8);
            }
        } else if (temp_v1 == 6) {
            if ((sp60 > 14.0f) && (sp60 < 16.0f) && (sp60 = sp60, (Rand_ZeroOne() < 0.02f))) {
                arg0->unk_3AC = (u16) (arg0->unk_3AC | 1);
                if (arg0->unk_150 == 2) {
                    func_80138300(arg2, 0x1CU, &sp70, &sp64);
                } else {
                    func_80138300(arg2, 0x1CU, &sp70, &sp64);
                }
                func_80887EBC(&sp64, 5.0f, arg0 + 0x3B0);
            } else if ((sp60 > 8.0f) && (sp60 < 10.0f) && (sp60 = sp60, (Rand_ZeroOne() < 0.02f))) {
                arg0->unk_3AC = (u16) (arg0->unk_3AC | 2);
                if (arg0->unk_150 == 2) {
                    func_80138300(arg2, 0x14U, &sp70, &sp64);
                } else {
                    func_80138300(arg2, 0x14U, &sp70, &sp64);
                }
                func_80887EBC(&sp64, 10.0f, arg0 + 0x3BC);
            } else if ((sp60 > 1.0f) && (sp60 < 3.0f) && (sp60 = sp60, (Rand_ZeroOne() < 0.02f))) {
                arg0->unk_3AC = (u16) (arg0->unk_3AC | 4);
                if (arg0->unk_150 == 2) {
                    func_80138300(arg2, 0x2CU, &sp70, &sp64);
                } else {
                    func_80138300(arg2, 0x2DU, &sp70, &sp64);
                }
                func_80887EBC(&sp64, 10.0f, arg0 + 0x3C8);
            } else if ((sp60 > 26.0f) && (sp60 < 28.0f) && (Rand_ZeroOne() < 0.02f)) {
                arg0->unk_3AC = (u16) (arg0->unk_3AC | 8);
                if (arg0->unk_150 == 2) {
                    func_80138300(arg2, 0x24U, &sp70, &sp64);
                } else {
                    func_80138300(arg2, 0x25U, &sp70, &sp64);
                }
                func_80887EBC(&sp64, 10.0f, arg0 + 0x3D4);
            }
        } else if ((temp_v0_2 == 0x10) && (sp60 > 6.0f) && (sp60 = sp60, (Rand_ZeroOne() < (1.0f - ((sp60 - 6.0f) * 0.05882353f))))) {
            if (Rand_ZeroOne() < 0.05f) {
                arg0->unk_3AC = (u16) (arg0->unk_3AC | 8);
                if (arg0->unk_150 == 2) {
                    func_80138300(arg2, 0x24U, &sp70, &sp64);
                } else {
                    func_80138300(arg2, 0x25U, &sp70, &sp64);
                }
                func_80887EBC(&sp64, 10.0f, arg0 + 0x3D4);
            }
            if (Rand_ZeroOne() < 0.02f) {
                arg0->unk_3AC = (u16) (arg0->unk_3AC | 4);
                if (arg0->unk_150 == 2) {
                    func_80138300(arg2, 0x2CU, &sp70, &sp64);
                } else {
                    func_80138300(arg2, 0x2DU, &sp70, &sp64);
                }
                func_80887EBC(&sp64, 10.0f, arg0 + 0x3C8);
            }
        } else if ((arg0->unk_144 == 0x11) && (sp60 > 5.0f)) {
            sp60 = sp60;
            if (Rand_ZeroOne() < (1.0f - ((sp60 - 5.0f) * 0.04f))) {
                if (Rand_ZeroOne() < 0.05f) {
                    arg0->unk_3AC = (u16) (arg0->unk_3AC | 8);
                    if (arg0->unk_150 == 2) {
                        func_80138300(arg2, 0x24U, &sp70, &sp64);
                    } else {
                        func_80138300(arg2, 0x25U, &sp70, &sp64);
                    }
                    func_80887EBC(&sp64, 10.0f, arg0 + 0x3D4);
                }
                if (Rand_ZeroOne() < 0.02f) {
                    arg0->unk_3AC = (u16) (arg0->unk_3AC | 4);
                    if (arg0->unk_150 == 2) {
                        func_80138300(arg2, 0x2CU, &sp70, &sp64);
                    } else {
                        func_80138300(arg2, 0x2DU, &sp70, &sp64);
                    }
                    func_80887EBC(&sp64, 10.0f, arg0 + 0x3C8);
                }
            }
        }
    }
    phi_v0 = 0;
    phi_t0 = 0;
    if (arg0->unk_328 > 0) {
        do {
            temp_a2 = &sp54;
            sp54 = (f32) (arg0->unk_32C + phi_v0)->unk_28;
            sp58 = (f32) (arg0->unk_32C + phi_v0)->unk_2A;
            sp5C = (f32) (arg0->unk_32C + phi_v0)->unk_2C;
            sp44 = phi_t0;
            sp24 = phi_v0;
            func_80138300(arg2, (arg0->unk_32C + phi_v0)->unk_3C, temp_a2, &sp48);
            temp_t0 = phi_t0 + 1;
            (arg0->unk_32C + phi_v0)->unk_30 = (s16) (s32) sp48;
            (arg0->unk_32C + phi_v0)->unk_32 = (s16) (s32) sp4C;
            (arg0->unk_32C + phi_v0)->unk_34 = (s16) (s32) sp50;
            temp_v1_2 = arg0->unk_32C + phi_v0;
            temp_v1_2->unk_36 = (s16) (s32) (temp_v1_2->unk_38 * (f32) temp_v1_2->unk_2E);
            phi_v0 += 0x40;
            phi_t0 = temp_t0;
        } while (temp_t0 < arg0->unk_328);
    }
    if ((arg0->unk_1E8 & 4) == 0) {
        CollisionCheck_SetOC(arg1, arg1 + 0x18884, arg0 + 0x310);
    }
}

s32 func_80888C48(void *arg0, void **arg1, s32 arg2, ? arg3) {
    s32 sp28;
    s32 *sp18;
    s32 *temp_v0_2;
    s32 temp_v0;
    void *temp_a3;
    s32 phi_t0;

    temp_a3 = *arg1;
    phi_t0 = 1;
    if ((arg2 != 0xD) || (arg0->unk_150 != 0)) {
        temp_v0 = arg0->unk_150;
        if ((arg2 == 0xD) && (temp_v0 == 2)) {
            temp_v0_2 = temp_a3->unk_2B0;
            temp_a3->unk_2B0 = (s32 *) (temp_v0_2 + 8);
            *temp_v0_2 = 0xDB060020;
            sp28 = 1;
            sp18 = temp_v0_2;
            sp18[1] = Lib_SegmentedToVirtual(*(&D_80889204 + (*(&D_80889210 + arg0->unk_37A) * 4)));
        } else if ((temp_v0 == 1) && (arg0->unk_1E8 & 0x40000) && (arg2 == 0x1E)) {
            phi_t0 = 0;
        }
    }
    return phi_t0;
}

s32 func_80888D18(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    ? sp1C;

    sp1C.unk_0 = (s32) D_80889214.unk_0;
    sp1C.unk_4 = (s32) D_80889214.unk_4;
    sp1C.unk_8 = (s32) D_80889214.unk_8;
    if (arg1 == 3) {
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp1C, arg5 + 0x258);
    }
    return 0;
}

void EnHorse_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ? (*temp_v0)(EnHorse *, GlobalContext *);
    s32 temp_t2;
    EnHorse *this = (EnHorse *) thisx;

    if (((this->unk_1E8 & 0x2000) == 0) && (func_8087D540 != this->actor.update)) {
        func_8012C28C(globalCtx->state.gfxCtx);
        temp_t2 = this->unk_1E8 | 0x8000000;
        this->unk_1E8 = temp_t2;
        if ((this->unk_1EC & 1) == 0) {
            if ((temp_t2 & 4) != 0) {
                func_80138258(this, globalCtx, &this->unk_158, func_80887F58, func_80888C48, 0);
            } else {
                func_80138258(this, globalCtx, &this->unk_158, func_80887F58, func_80888C48, 1);
            }
        } else {
            if ((this->unk_1E8 & 4) != 0) {
                this->unk_1A4.limbDrawTbl->x = 0;
                this->unk_1A4.limbDrawTbl->y = 0;
                this->unk_1A4.limbDrawTbl->z = 0;
            }
            SkelAnime_DrawSV(globalCtx, this->unk_1A4.skeleton, this->unk_1A4.limbDrawTbl, (s32) this->unk_1A4.dListCount, func_80888D18, NULL, (Actor *) this);
        }
        temp_v0 = this->unk_240;
        if (temp_v0 != 0) {
            temp_v0(this, globalCtx);
        }
    }
}
