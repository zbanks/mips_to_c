CRASHED

typedef struct ActorContext {
    /* 0x000 */ char pad0[0x2];
    /* 0x002 */ u8 unk2;
    /* 0x003 */ u8 unk3;
    /* 0x004 */ s8 unk4;
    /* 0x005 */ u8 unk5;
    /* 0x006 */ char pad6[0x5];                     /* maybe part of unk5[6]? */
    /* 0x00B */ s8 unkB;
    /* 0x00C */ s16 unkC;
    /* 0x00E */ u8 totalLoadedActors;
    /* 0x00F */ u8 undrawnActorCount;
    /* 0x010 */ ActorListEntry actorList[12];
    /* 0x0A0 */ Actor *undrawnActors[32];
    /* 0x120 */ TargetContext targetContext;
    /* 0x1B8 */ u32 switchFlags[4];
    /* 0x1C8 */ u32 chestFlags;
    /* 0x1CC */ u32 clearedRooms;
    /* 0x1D0 */ u32 clearedRoomsTemp;
    /* 0x1D4 */ u32 collectibleFlags[4];
    /* 0x1E4 */ TitleCardContext titleCtxt;
    /* 0x1F4 */ u8 unk1F4;
    /* 0x1F5 */ u8 unk1F5;
    /* 0x1F6 */ char pad1F6[0x2];                   /* maybe part of unk1F5[3]? */
    /* 0x1F8 */ f32 unk1F8;
    /* 0x1FC */ Vec3f unk1FC;
    /* 0x208 */ char pad208[0x48];                  /* maybe part of unk1FC[7]? */
    /* 0x250 */ void *unk250;
    /* 0x254 */ u32 unk254[5];
    /* 0x268 */ u8 unk268;
    /* 0x269 */ char pad269[0x3];                   /* maybe part of unk268[4]? */
    /* 0x26C */ ? unk26C;                           /* inferred */
    /* 0x26C */ char pad26C[0xC];
    /* 0x278 */ u16 unk278;
    /* 0x27A */ char pad27A[0xA];                   /* maybe part of unk278[6]? */
} ActorContext;                                     /* size = 0x284 */

typedef struct BossHakugin {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ void (*actionFunc)(BossHakugin *, GlobalContext *);
    /* 0x018C */ u8 unk18C;                         /* inferred */
    /* 0x018D */ s8 unk18D;                         /* inferred */
    /* 0x018E */ s8 unk18E;                         /* inferred */
    /* 0x018F */ s8 unk18F;                         /* inferred */
    /* 0x0190 */ u8 unk190;                         /* inferred */
    /* 0x0191 */ char pad191[0x1];
    /* 0x0192 */ u8 unk192;                         /* inferred */
    /* 0x0193 */ u8 unk193;                         /* inferred */
    /* 0x0194 */ char pad194[0x1];
    /* 0x0195 */ u8 unk195;                         /* inferred */
    /* 0x0196 */ u8 unk196;                         /* inferred */
    /* 0x0197 */ char pad197[0x3];                  /* maybe part of unk196[4]? */
    /* 0x019A */ s16 unk19A;                        /* inferred */
    /* 0x019C */ s16 unk19C;                        /* inferred */
    /* 0x019E */ s16 unk19E;                        /* inferred */
    /* 0x01A0 */ s16 unk1A0;                        /* inferred */
    /* 0x01A2 */ s16 unk1A2;                        /* inferred */
    /* 0x01A4 */ s16 unk1A4;                        /* inferred */
    /* 0x01A6 */ s16 unk1A6;                        /* inferred */
    /* 0x01A8 */ char pad1A8[0x4];                  /* maybe part of unk1A6[3]? */
    /* 0x01AC */ s16 unk1AC;                        /* inferred */
    /* 0x01AE */ s16 unk1AE;                        /* inferred */
    /* 0x01B0 */ s32 unk1B0;                        /* inferred */
    /* 0x01B4 */ s32 unk1B4;                        /* inferred */
    /* 0x01B8 */ f32 unk1B8;                        /* inferred */
    /* 0x01BC */ f32 unk1BC;                        /* inferred */
    /* 0x01C0 */ f32 unk1C0;                        /* inferred */
    /* 0x01C4 */ f32 unk1C4;                        /* inferred */
    /* 0x01C8 */ f32 unk1C8;                        /* inferred */
    /* 0x01CC */ char pad1CC[0x8];                  /* maybe part of unk1C8[3]? */
    /* 0x01D4 */ f32 unk1D4;                        /* inferred */
    /* 0x01D8 */ char pad1D8[0x4];
    /* 0x01DC */ f32 unk1DC;                        /* inferred */
    /* 0x01E0 */ f32 unk1E0;                        /* inferred */
    /* 0x01E4 */ f32 unk1E4;                        /* inferred */
    /* 0x01E8 */ Vec3s unk1E8;                      /* inferred */
    /* 0x01EE */ char pad1EE[0xC0];                 /* maybe part of unk1E8[33]? */
    /* 0x02AE */ Vec3s unk2AE;                      /* inferred */
    /* 0x02B4 */ char pad2B4[0xC2];                 /* maybe part of unk2AE[33]? */
    /* 0x0376 */ s16 unk376;                        /* inferred */
    /* 0x0378 */ s16 unk378;                        /* inferred */
    /* 0x037A */ Vec3s unk37A;                      /* inferred */
    /* 0x0380 */ Vec3f unk380;                      /* inferred */
    /* 0x038C */ f32 unk38C;                        /* inferred */
    /* 0x0390 */ f32 unk390;                        /* inferred */
    /* 0x0394 */ f32 unk394;                        /* inferred */
    /* 0x0398 */ Vec3f unk398;                      /* inferred */
    /* 0x03A4 */ char pad3A4[0xA8];                 /* maybe part of unk398[15]? */
    /* 0x044C */ f32 unk44C;                        /* inferred */
    /* 0x0450 */ char pad450[0x4];
    /* 0x0454 */ f32 unk454;                        /* inferred */
    /* 0x0458 */ Vec3f unk458;                      /* inferred */
    /* 0x0464 */ Vec3f unk464;                      /* inferred */
    /* 0x0470 */ LightNode *unk470;                 /* inferred */
    /* 0x0474 */ LightInfo unk474;                  /* inferred */
    /* 0x0482 */ char pad482[0x2];
    /* 0x0484 */ ColliderJntSph unk484;             /* inferred */
    /* 0x04A4 */ ColliderJntSphElement unk4A4;      /* inferred */
    /* 0x04E4 */ char pad4E4[0x480];                /* maybe part of unk4A4[19]? */
    /* 0x0964 */ ColliderCylinder unk964;           /* inferred */
    /* 0x09B0 */ Actor *unk9B0;                     /* inferred */
    /* 0x09B4 */ char pad9B4[0x1C];                 /* maybe part of unk9B0[8]? */
    /* 0x09D0 */ void *unk9D0;                      /* inferred */
    /* 0x09D4 */ void *unk9D4;                      /* inferred */
    /* 0x09D8 */ char pad9D8[0x1C4C];               /* maybe part of unk9D4[1812]? */
    /* 0x2624 */ s16 unk2624;                       /* inferred */
    /* 0x2626 */ char pad2626[0x6];                 /* maybe part of unk2624[4]? */
    /* 0x262C */ ColliderTris unk262C;              /* inferred */
    /* 0x264C */ ColliderTrisElement unk264C;       /* inferred */
    /* 0x26A8 */ char pad26A8[0x108C];              /* maybe part of unk264C[47]? */
    /* 0x3734 */ Vec3f unk3734;                     /* inferred */
    /* 0x3740 */ char pad3740[0x6C];                /* maybe part of unk3734[10]? */
    /* 0x37AC */ f32 unk37AC;                       /* inferred */
    /* 0x37B0 */ f32 unk37B0;                       /* inferred */
    /* 0x37B4 */ f32 unk37B4;                       /* inferred */
    /* 0x37B8 */ ColliderSphere unk37B8;            /* inferred */
} BossHakugin;                                      /* size = 0x3810 */

struct _mips2c_stack_BossHakugin_Destroy {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BossHakugin_Draw {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ MtxF *sp30;                          /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad38[0x8];                     /* maybe part of sp34[3]? */
    /* 0x40 */ GraphicsContext *sp40;               /* inferred */
    /* 0x44 */ char pad44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_BossHakugin_Init {
    /* 0x00 */ char pad0[0x5C];
    /* 0x5C */ SkelAnime *sp5C;                     /* inferred */
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ s32 sp64;                            /* inferred */
    /* 0x68 */ char pad68[0x10];
};                                                  /* size = 0x78 */

struct _mips2c_stack_BossHakugin_Update {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ PosRot *sp44;                        /* inferred */
    /* 0x48 */ char pad48[0x4];
    /* 0x4C */ u32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad5C[0xC];
    /* 0x68 */ CollisionPoly *sp68;                 /* inferred */
    /* 0x6C */ Actor *sp6C;                         /* inferred */
    /* 0x70 */ s16 sp70;                            /* inferred */
    /* 0x72 */ char pad72[0x2];
    /* 0x74 */ s16 sp74;                            /* inferred */
    /* 0x76 */ char pad76[0xA];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80B0573C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B057A4 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad28[0xC];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B058C0 {};              /* size 0x0 */

struct _mips2c_stack_func_80B05A64 {
    /* 0x00 */ char pad0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B05B04 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B05CBC {};              /* size 0x0 */

struct _mips2c_stack_func_80B05D4C {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B05EE0 {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ ActorContext *sp44;                  /* inferred */
    /* 0x48 */ char pad48[0x4];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad58[0x4];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad6C[0x4];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80B0607C {
    /* 0x00 */ char pad0[0x40];
    /* 0x40 */ CollisionContext *sp40;              /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad68[0x4];
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad74[0x4];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad7C[0x4];
    /* 0x80 */ s16 sp80;                            /* inferred */
    /* 0x82 */ s16 sp82;                            /* inferred */
    /* 0x84 */ u32 sp84;                            /* inferred */
    /* 0x88 */ CollisionPoly *sp88;                 /* inferred */
    /* 0x8C */ CollisionPoly *sp8C;                 /* inferred */
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_80B06558 {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad38[0xC];
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad44[0xC];
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad50[0xC];
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad5C[0x4];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80B06600 {
    /* 0x00 */ char pad0[0x84];
    /* 0x84 */ u32 sp84;                            /* inferred */
    /* 0x88 */ char pad88[0x4];
    /* 0x8C */ ? sp8C;                              /* inferred */
    /* 0x8C */ char pad8C[0x8];
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ ? sp98;                              /* inferred */
    /* 0x98 */ char pad98[0x8];
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ ? spA4;                              /* inferred */
    /* 0xA4 */ char padA4[0xC];
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ CollisionPoly *spD4;                 /* inferred */
    /* 0xD8 */ char padD8[0x8];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_func_80B0696C {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ s16 sp2C;                            /* inferred */
    /* 0x2E */ s16 sp2E;                            /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B06B20 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B06C08 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B06D38 {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad3C[0x8];                     /* maybe part of sp38[3]? */
    /* 0x44 */ Actor *sp44;                         /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B06F48 {
    /* 0x00 */ char pad0[0x78];
    /* 0x78 */ void *sp78;                          /* inferred */
    /* 0x7C */ char pad7C[0x8];                     /* maybe part of sp78[3]? */
    /* 0x84 */ s32 sp84;                            /* inferred */
    /* 0x88 */ char pad88[0xC];                     /* maybe part of sp84[4]? */
    /* 0x94 */ s32 sp94;                            /* inferred */
    /* 0x98 */ char pad98[0x4];
    /* 0x9C */ s32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ char padAC[0xC];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_80B0728C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B07450 {
    /* 0x00 */ char pad0[0x48];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80B07700 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B0791C {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad20[0x4];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0xC];                     /* maybe part of sp24[4]? */
    /* 0x34 */ void *sp34;                          /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B07B88 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B07BFC {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B07DA4 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B07EEC {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B08018 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 *sp24;                           /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B08124 {};              /* size 0x0 */

struct _mips2c_stack_func_80B0813C {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ CollisionCheckContext *sp28;         /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B0825C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B082AC {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B08550 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B0863C {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B08848 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B08960 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ char pad2C[0x8];                     /* maybe part of sp28[3]? */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ Camera *sp40;                        /* inferred */
    /* 0x44 */ Actor *sp44;                         /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B08C1C {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B08CB8 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B09178 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B091D8 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B093C0 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B094E0 {
    /* 0x00 */ char pad0[0x9C];
    /* 0x9C */ ? sp9C;                              /* inferred */
    /* 0x9C */ char pad9C[0x8];
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ ? spBC;                              /* inferred */
    /* 0xBC */ char padBC[0x4];
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_80B09840 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B098BC {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x2];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B09A94 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x8];                     /* maybe part of sp20[3]? */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B09C78 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B09DFC {};              /* size 0x0 */

struct _mips2c_stack_func_80B09E20 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B09E84 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B09EDC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B09F7C {
    /* 0x00 */ char pad0[0x36];
    /* 0x36 */ s16 sp36;                            /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B0A2A4 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0xC];                     /* maybe part of sp2C[4]? */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B0A5EC {};              /* size 0x0 */

struct _mips2c_stack_func_80B0A638 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 *sp24;                           /* inferred */
    /* 0x28 */ char pad28[0x2];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];                     /* maybe part of sp2A[3]? */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B0A87C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B0A8C4 {
    /* 0x00 */ char pad0[0x60];
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ char pad64[0x4];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad74[0xC];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80B0AC30 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B0B238 {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B0B34C {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B0B3F4 {};              /* size 0x0 */

struct _mips2c_stack_func_80B0B548 {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B0B660 {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ Vec3f *sp44;                         /* inferred */
    /* 0x48 */ Vec3f *sp48;                         /* inferred */
    /* 0x4C */ char pad4C[0xC];                     /* maybe part of sp48[4]? */
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ u32 sp5C;                            /* inferred */
    /* 0x60 */ Vec3f *sp60;                         /* inferred */
    /* 0x64 */ char pad64[0x8];                     /* maybe part of sp60[3]? */
    /* 0x6C */ Vec3f *sp6C;                         /* inferred */
    /* 0x70 */ ? sp70;                              /* inferred */
    /* 0x70 */ char pad70[0xC];
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ ? sp94;                              /* inferred */
    /* 0x94 */ char pad94[0xC];
    /* 0xA0 */ CollisionPoly *spA0;                 /* inferred */
    /* 0xA4 */ s32 spA4;                            /* inferred */
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_80B0C000 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B0C1BC {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s8 *sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x6];                     /* maybe part of sp24[2]? */
    /* 0x2E */ s16 sp2E;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x7];                     /* maybe part of sp30[2]? */
    /* 0x3B */ s8 sp3B;                             /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B0C398 {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B0C570 {
    /* 0x00 */ char pad0[0x6C];
    /* 0x6C */ BossHakugin *sp6C;                   /* inferred */
    /* 0x70 */ char pad70[0x28];                    /* maybe part of sp6C[11]? */
    /* 0x98 */ s32 sp98;                            /* inferred */
    /* 0x9C */ char pad9C[0x4];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_80B0C7B0 {
    /* 0x00 */ char pad0[0x54];
    /* 0x54 */ Vec3s *sp54;                         /* inferred */
    /* 0x58 */ char pad58[0x40];
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_80B0CAF0 {
    /* 0x00 */ char pad0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B0CCD8 {
    /* 0x00 */ char pad0[0x50];
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ char pad54[0x14];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80B0CF24 {
    /* 0x00 */ char pad0[0x4C];
    /* 0x4C */ Gfx *sp4C;                           /* inferred */
    /* 0x50 */ Gfx *sp50;                           /* inferred */
    /* 0x54 */ char pad54[0xC];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80B0D2B8 {
    /* 0x00 */ char pad0[0x60];
    /* 0x60 */ u8 *sp60;                            /* inferred */
    /* 0x64 */ char pad64[0x4];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ char pad70[0x4];
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ char pad80[0x30];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_80B0D69C {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B0D750 {
    /* 0x00 */ char pad0[0x4C];
    /* 0x4C */ Gfx *sp4C;                           /* inferred */
    /* 0x50 */ char pad50[0x10];                    /* maybe part of sp4C[5]? */
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad60[0x40];
    /* 0xA0 */ GraphicsContext *spA0;               /* inferred */
    /* 0xA4 */ char padA4[0xC];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_80B0D9CC {
    /* 0x00 */ char pad0[0x68];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad6C[0x14];                    /* maybe part of sp68[6]? */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ char pad88[0x24];                    /* maybe part of sp84[10]? */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ char padB0[0x4];
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ char padB8[0x10];                    /* maybe part of spB4[5]? */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ char padD4[0x4];
};                                                  /* size = 0xD8 */

struct _mips2c_stack_func_80B0DFA8 {};              /* size 0x0 */

struct _mips2c_stack_func_80B0E548 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ Collider *sp18;                      /* inferred */
    /* 0x1C */ CollisionCheckContext *sp1C;         /* inferred */
    /* 0x20 */ char pad20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B0E5A4 {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

? EffectSsFhgFlash_SpawnShock(GlobalContext *, BossHakugin *, void *, ?, s32); /* extern */
? func_800BE3D0(BossHakugin *, s16, s16 *);         /* extern */
f32 func_800C3FA0(f32, s32, void *, void *);        /* extern */
f32 func_800C4188(GlobalContext *, CollisionContext *, ? *, ? *, BossHakugin *, f32 *); /* extern */
? func_8016566C(f32, ?);                            /* extern */
? func_80165690(Actor *);                           /* extern */
s32 func_80B0573C(Vec3f *arg0);                     /* static */
void func_80B057A4(Vec3f *arg0, Vec3f *arg1, f32 arg2, Vec3f *); /* static */
void func_80B058C0(BossHakugin *arg0);              /* static */
void func_80B05A64(BossHakugin *arg0, Actor *arg1, s16 arg2, s32 arg3, s16 arg4, s32); /* static */
void func_80B05B04(BossHakugin *arg0, GlobalContext *arg1); /* static */
void func_80B05CBC(BossHakugin *arg0, Actor *arg1); /* static */
void func_80B05D4C(BossHakugin *arg0);              /* static */
void func_80B05EE0(BossHakugin *arg0, GlobalContext *arg1); /* static */
void func_80B0607C(BossHakugin *arg0, GlobalContext *arg1); /* static */
void func_80B06558(void *arg0);                     /* static */
void func_80B06600(Actor *arg0, Vec3f *arg1, GlobalContext *arg2); /* static */
void func_80B0696C(Actor *arg0, Vec3f *arg1);       /* static */
void func_80B06B20(Actor *arg0, Vec3f *arg1);       /* static */
void func_80B06C08(Actor *arg0, BossHakugin *);     /* static */
void func_80B06D38(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B06F48(BossHakugin *arg0, GlobalContext *arg1); /* static */
s32 func_80B0728C(BossHakugin *arg0, s16);          /* static */
void func_80B07450(Actor *arg0, s16 arg1);          /* static */
void func_80B07700(BossHakugin *arg0, GlobalContext *arg1, s32 arg2); /* static */
s32 func_80B0791C(BossHakugin *arg0, GlobalContext *arg1); /* static */
void func_80B07B88(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B07BFC(void *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_80B07DA4(BossHakugin *arg0, GlobalContext *arg1, f32 arg2, s16 arg3); /* static */
void func_80B07EEC(Actor *arg0, GlobalContext *arg1, BossHakugin *); /* static */
void func_80B08124(BossHakugin *arg0);              /* static */
void func_80B0825C(BossHakugin *arg0);              /* static */
void func_80B08550(BossHakugin *arg0, GlobalContext *arg1); /* static */
void func_80B08848(BossHakugin *arg0, GlobalContext *arg1); /* static */
void func_80B08C1C(BossHakugin *arg0, BossHakugin *); /* static */
void func_80B09178(BossHakugin *arg0);              /* static */
void func_80B093C0(void *arg0);                     /* static */
void func_80B09840(Actor *arg0, GlobalContext *arg1, void *); /* static */
void func_80B09A94(BossHakugin *arg0, GlobalContext *arg1); /* static */
void func_80B09DFC(f32 arg0, BossHakugin *);        /* static */
void func_80B09E84(BossHakugin *arg0);              /* static */
void func_80B09F7C(BossHakugin *arg0);              /* static */
void func_80B0A5EC(f32 arg0, BossHakugin *);        /* static */
void func_80B0A87C(BossHakugin *arg0);              /* static */
void func_80B0AC30(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B0ADFC(BossHakugin *, GlobalContext *);  /* static */
void func_80B0B238(BossHakugin *arg0);              /* static */
void func_80B0B34C(BossHakugin *arg0);              /* static */
void func_80B0B3F4(BossHakugin *arg0);              /* static */
void func_80B0B548(BossHakugin *arg0, GlobalContext *arg1); /* static */
void func_80B0B660(BossHakugin *arg0, GlobalContext *arg1); /* static */
s32 func_80B0C000(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80B0C1BC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80B0C398(BossHakugin *arg0, GraphicsContext **arg1); /* static */
void func_80B0C570(BossHakugin *arg0, GlobalContext *arg1); /* static */
void func_80B0C7B0(BossHakugin *arg0, GraphicsContext **arg1); /* static */
void func_80B0CAF0(BossHakugin *arg0, GraphicsContext **arg1); /* static */
void func_80B0CCD8(BossHakugin *arg0, GraphicsContext **arg1); /* static */
void func_80B0CF24(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B0D2B8(BossHakugin *arg0, Gfx *arg1, f32 arg2); /* static */
void func_80B0D69C(Gfx *arg0, BossHakugin *arg1);   /* static */
void func_80B0D750(Gfx *arg0, BossHakugin *arg1, GlobalContext *arg2); /* static */
void func_80B0D9CC(void *arg0);                     /* static */
void *func_80B0DFA8(BossHakugin *arg0);             /* static */
void func_80B0E548(Actor *this, GlobalContext *globalCtx); /* static */
void func_80B0E5A4(Actor *this, GlobalContext *globalCtx); /* static */
extern AnimationHeader D_06002054;
extern AnimationHeader D_0600319C;
extern ? D_06010488;
extern ? D_06010500;
extern ? D_06011100;
extern ? D_06011178;
extern ? D_06011208;
extern ? D_06011278;
extern ? D_06012ED0;
extern ? D_06012F40;
extern FlexSkeletonHeader D_06013158;
extern AnimationHeader D_060134D0;
extern AnimationHeader D_06013828;
extern void D_06014040;
extern ? D_801C5D60;
extern ? D_801C5D80;
static ColliderJntSphElementInit D_80B0E700[19] = {
    {
        {2, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0x19, 0x41, 1},
        {0x10, {{0x514, 0xC8, 0}, 0x1E}, 0x10E},
    },
    {
        {2, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 0, 0x41, 1},
        {0xF, {{0x578, 0x12C, 0}, 0x23}, 0x10E},
    },
    {
        {2, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 0, 0x41, 1},
        {2, {{0x640, 0xFE70, 0}, 0x1A}, 0x10E},
    },
    {
        {2, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 0, 0x41, 1},
        {6, {{0x6A4, 0xC8, 0x190}, 0x12}, 0x10E},
    },
    {
        {2, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 0, 0x41, 1},
        {8, {{0x3E8, 0, 0}, 0xA}, 0x10E},
    },
    {
        {2, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 0x41, 1},
        {9, {{0x1F4, 0, 0}, 9}, 0x10E},
    },
    {
        {2, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 0, 0x41, 1},
        {0xB, {{0x6A4, 0xC8, 0xFE70}, 0x12}, 0x10E},
    },
    {
        {2, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 0, 0x41, 1},
        {0xD, {{0x3E8, 0, 0}, 0xA}, 0x10E},
    },
    {
        {2, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 0x41, 1},
        {0xE, {{0x1F4, 0, 0}, 9}, 0x10E},
    },
    {
        {2, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 0, 0x41, 1},
        {0x15, {{0x320, 0, 0x190}, 0xF}, 0x10E},
    },
    {
        {2, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 0, 0x41, 1},
        {0x16, {{0x1F4, 0xC8, 0}, 9}, 0x10E},
    },
    {
        {2, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 0, 0x41, 1},
        {0x18, {{0x12C, 0, 0}, 8}, 0x10E},
    },
    {
        {2, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 0x41, 1},
        {0x19, {{0x1F4, 0x64, 0}, 9}, 0x10E},
    },
    {
        {2, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 0, 0x41, 1},
        {0x1C, {{0x320, 0, 0xFE70}, 0xF}, 0x10E},
    },
    {
        {2, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 0, 0x41, 1},
        {0x1D, {{0x1F4, 0xC8, 0}, 9}, 0x10E},
    },
    {
        {2, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 0, 0x41, 1},
        {0x1F, {{0x12C, 0, 0}, 8}, 0x10E},
    },
    {
        {2, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 0x41, 1},
        {0x20, {{0x1F4, 0x64, 0}, 9}, 0x10E},
    },
    {
        {2, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 0x41, 1},
        {0x10, {{0x960, 0xFE70, 0xF4AC}, 0xC}, 0x10E},
    },
    {
        {2, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 0x41, 1},
        {0x10, {{0x960, 0xFE70, 0xB54}, 0xC}, 0x10E},
    },
};
static ColliderJntSphInit D_80B0E9AC = {{9, 0x11, 0xD, 0x39, 0x10, 0}, 0x13, &D_80B0E700};
static ColliderTrisElementInit D_80B0E9BC;          /* type too large by 36; unable to generate initializer */
static Vec3f D_80B0E9D4[3] = {{22.0f, 0.0f, 100.0f}, {0.0f, 0.0f, -100.0f}, {-22.0f, 0.0f, 100.0f}};
static ColliderTrisInit D_80B0E9F8 = {{0xA, 0x11, 0, 0, 0x10, 2}, 1, &D_80B0E9BC};
static ColliderSphereInit D_80B0EA08 = {
    {0xA, 0x11, 0, 0, 0x20, 4},
    {5, {0x20000000, 0, 8}, {0, 0, 0}, 9, 0, 0},
    {1, {{0, 0, 0}, 0x17}, 0x64},
};
static ColliderCylinderInit D_80B0EA34 = {
    {0xC, 0x11, 0xD, 0x39, 0x10, 1},
    {0, {0xF7CFFFFF, 2, 0}, {0xF7CFFFFF, 0, 0}, 0x19, 1, 1},
    {0xAA, 0x28, 0, {0, 0, 0}},
};
static DamageTable D_80B0EA60 = {
    {
        0,
        1,
        1,
        0xC1,
        1,
        0xE1,
        0,
        1,
        1,
        1,
        1,
        0x21,
        0x31,
        0x41,
        0xF1,
        1,
        1,
        1,
        0,
        0,
        0,
        0,
        1,
        1,
        1,
        0xD1,
        0,
        0,
        0,
        0,
        0,
        0xC1,
    },
};
static CollisionCheckInfoInit D_80B0EA80 = {0x1E, 0x50, 0x64, 0xFF};
static void *D_80B0EA88 = (void *)0x600BAD8;
static ? D_80B0EA8C;                                /* unable to generate initializer */
static s8 D_80B0EA95[5] = {5, 0xFF, 6, 0xFF, 7};
static s8 D_80B0EA9A[2] = {8, 1};
static ? D_80B0EA9C;                                /* unable to generate initializer */
static s8 D_80B0EAA5[7] = {0xB, 0xFF, 0xFF, 0xC, 0xD, 0xFF, 0xFF};
static s8 D_80B0EAAC = 0xE;
static ? D_80B0EAB0;                                /* unable to generate initializer */
static Color_RGBA8 D_80B0EAC4 = {0xFA, 0xFA, 0xFA, 0xFF};
static Color_RGBA8 D_80B0EAC8 = {0xB4, 0xB4, 0xB4, 0xFF};
static ? D_80B0EACC;                                /* unable to generate initializer */
static ? D_80B0EAD0;                                /* unable to generate initializer */
static s32 D_80B0EAD4 = 0;
static InitChainEntry D_80B0EAD8[4];                /* unable to generate initializer */
static Vec3f D_80B0EAE8 = {492.0f, 28.0f, -1478.0f};
static Vec3f D_80B0EAF4 = {894.0f, 176.0f, -1600.0f};
static Vec3f D_80B0EB00 = {972.0f, 176.0f, -1600.0f};
static Vec3f D_80B0EB0C = {377.0f, 140.0f, -1600.0f};
static Vec3f D_80B0EB18 = {282.0f, 108.0f, -1600.0f};
static ? D_80B0EB24;                                /* unable to generate initializer */
static ? D_80B0EB38;                                /* unable to generate initializer */
static ? D_80B0EB60;                                /* unable to generate initializer */
static s32 D_80B0EB68 = 4;
static s32 D_80B0EB6C = 6;
static s32 D_80B0EB70[6] = {1, 2, 3, 3, 2, 1};
static s32 D_80B0EB88[7] = {2, 3, 4, 4, 4, 3, 2};
static s32 D_80B0EBA4[8] = {2, 3, 4, 4, 4, 4, 3, 2};
static s32 D_80B0EBC4[14] = {2, 4, 5, 6, 7, 8, 8, 8, 8, 7, 6, 5, 4, 2};
static ? D_80B0EBFC;                                /* unable to generate initializer */
static ? D_80B0EC38;                                /* unable to generate initializer */
static f32 D_80B0EDD4[2] = {0.00003051851f, 0.00003051851f}; /* const */
static f32 D_80B0EE08[2] = {0.001f, 0.001f};        /* const */

void BossHakugin_Init(BossHakugin *this, GlobalContext *globalCtx) {
    s32 sp64;
    s32 sp60;
    SkelAnime *sp5C;
    ActorContext *temp_s5;
    BossHakugin *temp_v0;
    LightInfo *temp_s0;
    SkelAnime *temp_a1;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_t0_3;
    s32 phi_t0;
    ColliderTris *phi_s0;
    ColliderTrisElement *phi_s1;
    s32 phi_t0_2;
    Actor **phi_s0_2;
    s32 phi_v1;
    s32 phi_t0_3;
    BossHakugin *phi_v0;
    s32 phi_v1_2;
    BossHakugin *this = (BossHakugin *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80B0EAD8);
    temp_a1 = &this->unk144;
    sp5C = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06013158, &D_06013828, &this->unk1E8, &this->unk2AE, 0x21);
    if (D_80B0EAD4 == 0) {
        D_80B0EAD4 = 1;
        D_80B0EA88 = Lib_SegmentedToVirtual(D_80B0EA88);
    }
    Collider_InitAndSetJntSph(globalCtx, &this->unk484, (Actor *) this, &D_80B0E9AC, &this->unk4A4);
    phi_t0 = 0;
    phi_s0 = &this->unk262C;
    phi_s1 = &this->unk264C;
    phi_t0_2 = 0;
    do {
        sp60 = phi_t0;
        Collider_InitAndSetTris(globalCtx, phi_s0, (Actor *) this, &D_80B0E9F8, phi_s1);
        temp_t0 = phi_t0 + 0x90;
        phi_t0 = temp_t0;
        phi_s0 += 0x90;
        phi_s1 += 0x90;
    } while (temp_t0 < 0xB40);
    Collider_InitAndSetSphere(globalCtx, &this->unk37B8, (Actor *) this, &D_80B0EA08);
    this->unk37B8.dim.worldSphere.radius = 0x28;
    Collider_InitAndSetCylinder(globalCtx, &this->unk964, (Actor *) this, &D_80B0EA34);
    temp_s0 = &this->unk474;
    this->unk964.dim.radius = 0x96;
    this->unk964.dim.height = 0x12C;
    this->unk964.dim.pos.y = (s16) (s32) this->actor.world.pos.y;
    this->unk964.dim.pos.x = (s16) (s32) (this->actor.world.pos.x - 50.0f);
    this->unk964.dim.pos.z = (s16) (s32) this->actor.world.pos.z;
    this->unk470 = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, temp_s0);
    Lights_PointNoGlowSetInfo(temp_s0, 0, 0, 0, (u8) 0xFF, (u8) 0xFF, (u8) 0xB4, (s16) -1);
    this->unk1B4 = -1;
    temp_s5 = &globalCtx->actorCtx;
    if ((gSaveContext.weekEventReg[33] & 0x80) != 0) {
        func_80B05EE0(this, globalCtx);
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    phi_s0_2 = &this->unk9B0;
    do {
        sp60 = phi_t0_2;
        *phi_s0_2 = Actor_SpawnAsChild(temp_s5, (Actor *) this, globalCtx, 0x1EA, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, 1);
        temp_t0_2 = phi_t0_2 + 4;
        phi_t0_2 = temp_t0_2;
        phi_s0_2 += 4;
    } while (temp_t0_2 < 0x20);
    phi_v1 = 0;
    phi_t0_3 = (s32) this;
    phi_v1_2 = 0;
    do {
        sp64 = phi_v1;
        sp60 = phi_t0_3;
        temp_v1 = phi_v1 + 1;
        temp_t0_3 = phi_t0_3 + 4;
        temp_t0_3->unk9CC = Actor_SpawnAsChild(temp_s5, (Actor *) this, globalCtx, 0x1EA, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, 2);
        phi_v1 = temp_v1;
        phi_t0_3 = (s32) temp_t0_3;
    } while (temp_v1 < 0xA);
    phi_v0 = this;
    do {
        temp_v1_2 = phi_v1_2 + 4;
        phi_v0->unkA38 = (s16) -1;
        phi_v0->unkA60 = (s16) -1;
        phi_v0->unkA88 = (s16) -1;
        temp_v0 = phi_v0 + 0xA0;
        temp_v0->unk970 = (s16) -1;
        phi_v0 = temp_v0;
        phi_v1_2 = temp_v1_2;
    } while (temp_v1_2 != 0xB4);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80B0EA60, &D_80B0EA80);
    this->unk1B0 = -1;
    this->unk1A0 = this->actor.shape.rot.y;
    if ((gSaveContext.eventInf[5] & 8) != 0) {
        func_801A89A8(0x801B);
        this->actor.world.pos.x = 0.0f;
        func_80B08C1C(this);
        return;
    }
    if ((gSaveContext.eventInf[6] & 4) != 0) {
        this->unk193 = 0xFF;
        this->unk1D4 = 2.7f;
        func_80B058C0(this);
        SkelAnime_ChangeAnimDefaultStop(sp5C, &D_06002054);
        this->actor.flags &= -2;
        func_80B08124(this);
        return;
    }
    this->unk193 = 0xFF;
    this->unk1D4 = 2.7f;
    func_80B058C0(this);
    func_80B09E84(this);
}

void BossHakugin_Destroy(BossHakugin *this, GlobalContext *globalCtx) {
    s32 temp_s0;
    ColliderTris *phi_s1;
    s32 phi_s0;
    BossHakugin *this = (BossHakugin *) thisx;

    LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, this->unk470);
    Collider_DestroyJntSph(globalCtx, &this->unk484);
    Collider_DestroyCylinder(globalCtx, &this->unk964);
    phi_s1 = &this->unk262C;
    phi_s0 = 0;
    do {
        Collider_DestroyTris(globalCtx, phi_s1);
        temp_s0 = phi_s0 + 0x90;
        phi_s1 += 0x90;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0xB40);
    Collider_DestroySphere(globalCtx, &this->unk37B8);
    func_801A72CC(&this->unk458);
    func_801A72CC(&this->unk464);
}

s32 func_80B0573C(Vec3f *arg0) {
    f32 temp_f0;

    temp_f0 = Math3D_Vec3fMagnitude(arg0);
    if (temp_f0 < 0.0001f) {
        return 0;
    }
    Math_Vec3f_Scale(arg0, 1.0f / temp_f0);
    return 1;
}

void func_80B057A4(Vec3f *arg0, Vec3f *arg1, f32 arg2) {
    ? sp34;
    ? sp28;
    f32 temp_f12;
    f32 phi_f2;
    f32 phi_f14;

    temp_f12 = (arg0->x * arg1->x) + (arg0->y * arg1->y) + (arg0->z * arg1->z);
    if (fabsf(temp_f12) < 1.0f) {
        arg2 = arg2;
        phi_f2 = func_80086C48(temp_f12);
    } else if (temp_f12 >= 1.0f) {
        phi_f2 = 0.0f;
    } else {
        phi_f2 = 3.1415927f;
    }
    phi_f14 = arg2;
    if (phi_f2 < arg2) {
        phi_f14 = phi_f2;
    }
    if (!(phi_f14 < 0.017453292f)) {
        arg2 = phi_f14;
        Math3D_CrossProduct(arg0, arg1, (Vec3f *) &sp34);
        if (func_80B0573C((Vec3f *) &sp34) != 0) {
            SysMatrix_InsertRotationAroundUnitVector_f(arg2, (Vec3f *) &sp34, 0);
            SysMatrix_MultiplyVector3fByState(arg0, (Vec3f *) &sp28);
            Math_Vec3f_Copy(arg0, (Vec3f *) &sp28);
        }
    }
}

void func_80B058C0(BossHakugin *arg0) {
    s32 temp_v1;
    void *temp_a1;
    void *temp_a2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    s32 phi_v1;
    void *phi_a2;
    void *phi_a1;

    temp_a1 = arg0->unk9D0;
    temp_a1->unk1C = 4;
    temp_a1->unk24 = -500.0f;
    temp_a1->unk28 = (f32) arg0->actor.world.pos.y;
    temp_a1->unk2C = -1266.6666f;
    temp_a2 = arg0 + (2 * 4) + 0x10;
    temp_a1->unkBE = (s16) (arg0->actor.shape.rot.y + 0x4000);
    temp_v0 = arg0->unk9D4;
    temp_v0->unk1C = 4;
    temp_v0->unk24 = (f32) temp_a1->unk24;
    temp_v0->unk28 = (f32) arg0->actor.world.pos.y;
    temp_v0->unk2C = (f32) (temp_a1->unk2C - 133.33333f);
    temp_v0->unkBE = (s16) temp_a1->unkBE;
    temp_v0_2 = temp_a2->unk9C0;
    temp_v0_2->unk1C = 4;
    temp_v0_2->unk24 = (f32) temp_v0->unk24;
    temp_v0_2->unk28 = (f32) arg0->actor.world.pos.y;
    temp_v0_2->unk2C = (f32) (temp_v0->unk2C - 133.33333f);
    temp_v0_2->unkBE = (s16) temp_v0->unkBE;
    temp_v0_3 = temp_a2->unk9C4;
    temp_v0_3->unk1C = 4;
    temp_v0_3->unk24 = (f32) temp_v0_2->unk24;
    temp_v0_3->unk28 = (f32) arg0->actor.world.pos.y;
    temp_v0_3->unk2C = (f32) (temp_v0_2->unk2C - 133.33333f);
    temp_v0_3->unkBE = (s16) temp_v0_2->unkBE;
    temp_v0_4 = temp_a2->unk9C8;
    temp_v0_4->unk1C = 4;
    temp_v0_4->unk24 = (f32) temp_v0_3->unk24;
    temp_v0_4->unk28 = (f32) arg0->actor.world.pos.y;
    temp_v0_4->unk2C = (f32) (temp_v0_3->unk2C - 133.33333f);
    temp_v0_4->unkBE = (s16) temp_v0_3->unkBE;
    temp_v0_5 = temp_a2->unk9CC;
    temp_v0_5->unk1C = 4;
    temp_v0_5->unk24 = (f32) temp_v0_4->unk24;
    temp_v0_5->unk28 = (f32) arg0->actor.world.pos.y;
    temp_v0_5->unk2C = (f32) (temp_v0_4->unk2C - 133.33333f);
    temp_v0_5->unkBE = (s16) temp_v0_4->unkBE;
    phi_v1 = 6;
    phi_a2 = temp_a2;
    if (6 < 0xA) {
        do {
            if (phi_v1 < 8) {
                phi_a1 = phi_a2->unk9B8;
            } else {
                phi_a1 = phi_a2->unk9C0;
            }
            temp_v0_6 = phi_a2->unk9D0;
            temp_v1 = phi_v1 + 1;
            temp_v0_6->unk1C = 4;
            temp_v0_6->unk24 = (f32) arg0->actor.world.pos.x;
            temp_v0_6->unk28 = (f32) arg0->actor.world.pos.y;
            temp_v0_6->unk2C = (f32) phi_a1->unk2C;
            temp_v0_6->unkBE = (s16) (arg0->actor.shape.rot.y - 0x4000);
            phi_v1 = temp_v1;
            phi_a2 += 4;
        } while (temp_v1 < 0xA);
    }
}

void func_80B05A64(BossHakugin *arg0, Actor *arg1, s16 arg2, s32 arg3, s16 arg4) {
    s16 sp26;
    s16 temp_v0;
    s32 temp_a0;

    if (arg3 > 0) {
        temp_v0 = Quake_Add((arg1 + (arg1->unk810 * 4))->unk800, 3U);
        temp_a0 = temp_v0 << 0x10;
        sp26 = temp_v0;
        Quake_SetSpeed((s16) (temp_a0 >> 0x10), arg2);
        Quake_SetQuakeValues(sp26, (s16) arg3, 0, 0, (s16) 0);
        Quake_SetCountdown(sp26, arg4);
        func_8013ECE0(arg0->actor.xyzDistToPlayerSq, 0xB4U, 0x14U, 0x64U);
    }
}

void func_80B05B04(BossHakugin *arg0, GlobalContext *arg1) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp2C;
    s32 temp_v0;
    s32 phi_v0;
    s32 phi_v0_2;

    temp_v0 = arg0->actionFunc;
    if (((func_80B0813C == temp_v0) || (func_80B08018 == temp_v0)) && (Rand_ZeroOne() < 0.1f)) {
        sp2C = Rand_ZeroOne();
        phi_v0 = 1;
        phi_v0_2 = 1;
        if (Rand_ZeroOne() < 0.5f) {
            phi_v0 = -1;
        }
        sp34 = ((f32) phi_v0 * (15.0f + (sp2C * 15.0f)) * 4.0f) + arg0->actor.world.pos.x;
        sp38 = (((Rand_ZeroOne() * 90.0f) + 10.0f) * 2.7f) + arg0->actor.world.pos.y;
        sp2C = Rand_ZeroOne();
        if (Rand_ZeroOne() < 0.5f) {
            phi_v0_2 = -1;
        }
        sp3C = ((f32) phi_v0_2 * (15.0f + (sp2C * 15.0f)) * 4.0f) + arg0->actor.world.pos.z;
        EffectSsKiraKira_SpawnDispersed(arg1, (Vec3f *) &sp34, &D_801D15B0, &D_801D15B0, &D_80B0EAC4, &D_80B0EAC8, (s16) 0x7D0, 5);
    }
}

void func_80B05CBC(BossHakugin *arg0, Actor *arg1) {
    f32 temp_f0;

    if ((arg0->unk194 == 0) && (arg1->unkA74 & 0x80000) && ((arg1->bgCheckFlags & 1) == 0) && (temp_f0 = arg1->velocity.y, (temp_f0 > 5.0f))) {
        arg1->velocity.y = temp_f0 * 1.3f;
        arg1->unkAD0 = (f32) (arg1->unkAD0 * 1.3f);
        arg0->unk194 = 1;
        return;
    }
    if ((arg1->bgCheckFlags & 1) != 0) {
        arg0->unk194 = 0;
    }
}

void func_80B05D4C(BossHakugin *arg0) {
    f32 temp_f0;
    s16 temp_v0_2;
    s32 temp_v1;
    u8 temp_v0;
    BossHakugin *phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;
    void *phi_t0;
    s32 phi_t1;
    s32 phi_t1_2;

    phi_v0 = arg0;
    phi_v1 = 0;
    phi_t0 = arg0 + 0x24;
    phi_t1 = 0;
loop_1:
    phi_v1_2 = phi_v1;
    if (phi_v0->unk2624 == 0xFF) {
        phi_t0 = phi_v0 + 0x2618;
        phi_t1 = 0x1388;
    } else {
        temp_v1 = phi_v1 + 0x90;
        phi_v0 += 0x90;
        phi_v1 = temp_v1;
        phi_v1_2 = temp_v1;
        if (temp_v1 != 0xB40) {
            goto loop_1;
        }
    }
    if (phi_v1_2 == 0xB40) {
        temp_f0 = arg0->unk1C8;
        if (temp_f0 > 0.0f) {
            phi_t0 = arg0 + 0x380;
            phi_t1_2 = (s32) ((temp_f0 / 30.0f) * 5000.0f) << 0x10;
            goto block_12;
        }
        temp_v0 = arg0->unk192;
        if ((temp_v0 == 3) || (temp_v0 == 2)) {
            phi_t0 = arg0 + 0x3734;
            phi_t1 = 0x1388;
        } else if (temp_v0 == 4) {
            temp_v0_2 = arg0->unk1AA;
            phi_t0 = arg0 + (temp_v0_2 * 0xC) + 0x3734;
            phi_t1_2 = (s32) ((f32) (0xA - temp_v0_2) * 500.0f) << 0x10;
block_12:
            phi_t1 = phi_t1_2 >> 0x10;
        }
    }
    Lights_PointNoGlowSetInfo(arg0 + 0x474, (s16) (s32) phi_t0->unk0, (s16) (s32) phi_t0->unk4, (s16) (s32) phi_t0->unk8, (u8) (s32) D_80B0EACC.unk0, (u8) (s32) D_80B0EACC.unk1, (u8) (s32) D_80B0EACC.unk2, (s16) phi_t1);
}

void func_80B05EE0(Actor *arg0, GlobalContext *arg1) {
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    ActorContext *sp44;
    ActorContext *temp_a0;
    f32 temp_f0;
    f32 temp_f10;
    s32 temp_v0;
    f32 phi_f14;
    f32 phi_f12;
    f32 phi_f2;

    temp_v0 = Math_FAtan2F(arg0->world.pos.z, arg0->world.pos.x);
    if (temp_v0 >= 0x4001) {
        phi_f14 = -1400.0f;
        phi_f12 = 0.0f;
        phi_f2 = 1400.0f;
    } else if (temp_v0 < -0x4000) {
        phi_f14 = -1400.0f;
        phi_f12 = 0.0f;
        phi_f2 = -1400.0f;
    } else if (temp_v0 > 0) {
        phi_f14 = 1400.0f;
        phi_f12 = -320.0f;
        phi_f2 = 1400.0f;
    } else {
        phi_f14 = 1400.0f;
        phi_f12 = -160.0f;
        phi_f2 = -1400.0f;
    }
    sp50 = (f32) arg0->unk1B4 * 300.0f;
    sp68 = phi_f14;
    sp64 = phi_f12;
    sp60 = phi_f2;
    sp4C = Math_SinS(arg0->unk19E);
    temp_f0 = Math_CosS(arg0->unk19E);
    temp_f10 = sp50 * temp_f0;
    temp_a0 = arg1 + 0x1CA0;
    sp44 = temp_a0;
    sp54 = (100.0f * sp4C) + phi_f2 + temp_f10;
    sp5C = ((100.0f * temp_f0) + phi_f14) - (sp50 * sp4C);
    Actor_SpawnAsChild(temp_a0, arg0, arg1, 0x38, phi_f2, phi_f12, phi_f14, (s16) 0, (s16) 0, (s16) 0, 1);
    Actor_Spawn(temp_a0, arg1, 0x3A, sp54, phi_f12, sp5C, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
}

void func_80B0607C(BossHakugin *arg0, GlobalContext *arg1) {
    CollisionPoly *sp8C;
    CollisionPoly *sp88;
    u32 sp84;
    s16 sp82;
    s16 sp80;
    f32 sp70;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    CollisionContext *sp40;
    CollisionContext *temp_a0;
    f32 temp_f10;
    f32 temp_f18;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s16 phi_v0;

    sp8C = NULL;
    sp88 = NULL;
    sp58 = (Math_SinS(arg0->unk1A0) * (5.0f * arg0->actor.speedXZ)) + arg0->actor.world.pos.x;
    sp5C = arg0->actor.world.pos.y + 450.0f;
    sp60 = (Math_CosS(arg0->unk1A0) * (5.0f * arg0->actor.speedXZ)) + arg0->actor.world.pos.z;
    temp_f18 = Math_CosS(arg0->unk1A0) * 1000.0f;
    sp50 = sp5C;
    sp4C = sp58 - temp_f18;
    temp_a0 = arg1 + 0x830;
    temp_f10 = (Math_SinS(arg0->unk1A0) * 1000.0f) + sp60;
    sp40 = temp_a0;
    sp54 = temp_f10;
    if (func_800C55C4(temp_a0, (Vec3f *) &sp58, (Vec3f *) &sp4C, (Vec3f *) &sp70, &sp8C, 1U, 1U, 0U, 1U, &sp84) != 0) {
        sp82 = Math_FAtan2F((f32) sp8C->normal.z * 0.00003051851f, (f32) sp8C->normal.x * 0.00003051851f) - arg0->unk1A0;
        arg0->unk1BC = Math_Vec3f_DistXZ((Vec3f *) &sp58, (Vec3f *) &sp70);
    } else {
        sp82 = 0;
        arg0->unk1BC = 30000.0f;
    }
    sp4C = (2.0f * sp58) - sp4C;
    sp54 = (2.0f * sp60) - sp54;
    if (func_800C55C4(sp40, (Vec3f *) &sp58, (Vec3f *) &sp4C, (Vec3f *) &sp64, &sp88, 1U, 1U, 0U, 1U, &sp84) != 0) {
        sp80 = Math_FAtan2F((f32) sp88->normal.z * 0.00003051851f, (f32) sp88->normal.x * 0.00003051851f) - arg0->unk1A0;
        arg0->unk1C0 = Math_Vec3f_DistXZ((Vec3f *) &sp58, (Vec3f *) &sp64);
    } else {
        sp80 = 0;
        arg0->unk1C0 = 30000.0f;
    }
    if (arg0->unk1B4 == 1) {
        arg0->unk1C0 -= 50.0f;
    } else {
        arg0->unk1BC -= 50.0f;
    }
    if (arg0->unk1BC <= 89.100006f) {
        if (arg0->unk1B4 == 1) {
            sp48 = 89.100006f;
        } else {
            sp48 = 139.1f;
        }
        sp44 = Math_CosS(arg0->unk1A0);
        arg0->actor.world.pos.x = (sp70 + (sp48 * sp44)) - (Math_SinS(arg0->unk1A0) * (5.0f * arg0->actor.speedXZ));
        sp44 = Math_SinS(arg0->unk1A0);
        arg0->actor.world.pos.z = (sp78 - (sp48 * sp44)) - (Math_CosS(arg0->unk1A0) * (5.0f * arg0->actor.speedXZ));
    } else if (arg0->unk1C0 <= 89.100006f) {
        if (arg0->unk1B4 == 1) {
            sp48 = 139.1f;
        } else {
            sp48 = 89.100006f;
        }
        sp44 = Math_CosS(arg0->unk1A0);
        arg0->actor.world.pos.x = (sp64 - (sp48 * sp44)) - (Math_SinS(arg0->unk1A0) * (5.0f * arg0->actor.speedXZ));
        sp44 = Math_SinS(arg0->unk1A0);
        arg0->actor.world.pos.z = (sp6C + (sp48 * sp44)) - (Math_CosS(arg0->unk1A0) * (5.0f * arg0->actor.speedXZ));
    }
    if ((arg0->unk1C0 < 30000.0f) && (arg0->unk1BC < 30000.0f) && (((temp_v1 = arg0->unk1B4, (temp_v1 == 1)) && (temp_v0 = (s32) (s16) (sp82 + sp80) >> 1, phi_v0 = (s16) temp_v0, ((s32) (s16) temp_v0 < 0))) || ((temp_v1 == -1) && (temp_v0_2 = (s32) (s16) (sp82 + sp80) >> 1, phi_v0 = (s16) temp_v0_2, ((s32) (s16) temp_v0_2 > 0))))) {
        arg0->unk1A0 += phi_v0;
    }
}

void func_80B06558(void *arg0) {
    ? sp5C;
    ? sp50;
    ? sp44;
    ? sp38;
    Vec3f *temp_s0;
    Vec3f *phi_s1;
    Vec3f *phi_s0;

    SysMatrix_SetStateRotationAndTranslation(arg0->unk0, arg0->unk4, arg0->unk8, arg0 + 0xE);
    Matrix_Scale(1.0f, 1.0f, 1.0f, 1);
    phi_s1 = D_80B0E9D4;
    phi_s0 = (Vec3f *) &sp38;
    do {
        SysMatrix_MultiplyVector3fByState(phi_s1, phi_s0);
        temp_s0 = phi_s0 + 0xC;
        phi_s1 += 0xC;
        phi_s0 = temp_s0;
    } while (temp_s0 != &sp5C);
    Collider_SetTrisVertices(arg0 + 0x14, 0, (Vec3f *) &sp38, (Vec3f *) &sp44, (Vec3f *) &sp50);
}

void func_80B06600(Actor *arg0, Vec3f *arg1, GlobalContext *arg2) {
    CollisionPoly *spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    ? spA4;
    ? sp98;
    ? sp8C;
    u32 sp84;
    f32 *temp_a2;
    f32 *temp_s6;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    s16 temp_s1;
    s16 temp_s1_2;
    s16 temp_s3;
    void *temp_s0;
    void *phi_s0;
    s16 phi_s3;

    temp_s0 = arg2->actorCtx.actorList[2].first;
    Math_Vec3f_Copy((Vec3f *) &spC8, arg1);
    spBC = temp_s0->world.pos.x - (Math_SinS(arg0->shape.rot.y) * 50.0f);
    spC0 = temp_s0->world.pos.y + 40.0f;
    spC4 = temp_s0->world.pos.z - (Math_CosS(arg0->shape.rot.y) * 50.0f);
    Actor_CalcOffsetOrientedToDrawRotation(arg0, (Vec3f *) &sp98, (Vec3f *) &spBC);
    func_8019F1C0(arg0 + 0x458, 0x384DU);
    temp_s6 = &spB0;
    phi_s0 = arg0 + 0x2618;
    phi_s3 = 0x113;
    do {
        Actor_CalcOffsetOrientedToDrawRotation(arg0, (Vec3f *) &sp8C, (Vec3f *) &spC8);
        if (spA0 < sp94) {
            phi_s0->unk10 = (s16) ((Rand_Next() >> 0x13) + arg0->shape.rot.y);
        } else {
            temp_s1 = Math_Vec3f_Yaw((Vec3f *) &spC8, (Vec3f *) &spBC);
            phi_s0->unk10 = (s16) ((Rand_Next() >> 0x13) + temp_s1);
        }
        temp_s1_2 = Math_Vec3f_Pitch((Vec3f *) &spC8, (Vec3f *) &spBC);
        phi_s0->unkE = (s16) ((Rand_Next() >> 0x13) + temp_s1_2);
        phi_s0->unk12 = 0;
        temp_f20 = Math_CosS(phi_s0->unkE);
        phi_s0->unk0 = (f32) ((Math_SinS(phi_s0->unk10) * (80.0f * temp_f20)) + spC8);
        phi_s0->unk4 = (f32) (spCC - (Math_SinS(phi_s0->unkE) * 80.0f));
        temp_f20_2 = Math_CosS(phi_s0->unkE);
        temp_a2 = temp_s6;
        phi_s0->unk8 = (f32) ((Math_CosS(phi_s0->unk10) * (80.0f * temp_f20_2)) + spD0);
        spB0 = (2.0f * phi_s0->unk0) - spC8;
        spB4 = (2.0f * phi_s0->unk4) - spCC;
        spB8 = (2.0f * phi_s0->unk8) - spD0;
        if (func_800C55C4(arg2 + 0x830, (Vec3f *) &spC8, (Vec3f *) temp_a2, (Vec3f *) &spA4, &spD4, 0U, 1U, 0U, 1U, &sp84) != 0) {
            phi_s0->unkE = (s16) (phi_s0->unkE - 0x2000);
            temp_f20_3 = Math_CosS(phi_s0->unkE);
            phi_s0->unk0 = (f32) ((Math_SinS(phi_s0->unk10) * (80.0f * temp_f20_3)) + spC8);
            phi_s0->unk4 = (f32) (spCC - (Math_SinS(phi_s0->unkE) * 80.0f));
            temp_f20_4 = Math_CosS(phi_s0->unkE);
            phi_s0->unk8 = (f32) ((Math_CosS(phi_s0->unk10) * (80.0f * temp_f20_4)) + spD0);
            spC8 = (2.0f * phi_s0->unk0) - spC8;
            spCC = (2.0f * phi_s0->unk4) - spCC;
            spD0 = (2.0f * phi_s0->unk8) - spD0;
        } else {
            Math_Vec3f_Copy((Vec3f *) &spC8, (Vec3f *) temp_s6);
        }
        phi_s0->unkC = phi_s3;
        func_80B06558(phi_s0);
        temp_s3 = phi_s3 + 0x14;
        phi_s0->unk12 = (s16) (Rand_Next() >> 0x10);
        phi_s0 += 0x90;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x2A3);
}

void func_80B0696C(Actor *arg0, Vec3f *arg1) {
    s16 sp2E;
    s16 sp2C;
    f32 sp28;
    f32 sp24;
    Vec3f *temp_s0;
    f32 temp_f6;
    s32 temp_v1;
    Actor *phi_v0;
    s32 phi_v1;

    phi_v0 = arg0;
    phi_v1 = 0;
loop_1:
    temp_s0 = phi_v0 + 0x9F8;
    if ((s32) phi_v0->unkA10 < 0) {
        Math_Vec3f_Copy(temp_s0, arg1);
        sp2C = Rand_S16Offset(0x1000, 0x3000);
        sp2E = (Rand_Next() >> 0x12) + arg0->shape.rot.y + 0x8000;
        sp28 = Rand_ZeroFloat(5.0f) + 7.0f;
        sp24 = Math_CosS(sp2C);
        temp_s0->unkC = (f32) (Math_SinS(sp2E) * (sp28 * sp24));
        temp_s0->unk10 = (f32) (Math_SinS(sp2C) * sp28);
        sp24 = Math_CosS(sp2C);
        temp_s0->unk14 = (f32) (Math_CosS(sp2E) * (sp28 * sp24));
        temp_s0->x = (Rand_ZeroFloat(3.0f) * temp_s0->unkC) + arg1->x;
        temp_s0->y = (Rand_ZeroFloat(3.0f) * temp_s0->unk10) + arg1->y;
        temp_s0->z = (Rand_ZeroFloat(3.0f) * temp_s0->unk14) + arg1->z;
        temp_f6 = Rand_ZeroFloat(6.0f) + 15.0f;
        temp_s0->unk18 = 0x28;
        temp_s0->unk1A = 0;
        temp_s0->unk24 = (f32) (temp_f6 * 0.0001f);
        return;
    }
    temp_v1 = phi_v1 + 0x28;
    phi_v0 += 0x28;
    phi_v1 = temp_v1;
    if (temp_v1 == 0x1C20) {
        return;
    }
    goto loop_1;
}

void func_80B06B20(Actor *arg0, Vec3f *arg1) {
    void *sp1C;
    s32 temp_v0;
    u8 temp_v0_2;
    void *temp_a2;
    Actor *phi_v1;
    s32 phi_v0;

    if ((arg0->unk454 < -200.0f) && (arg0->speedXZ > 10.0f) && (arg0->unk18D == 0) && (phi_v1 = arg0, phi_v0 = 0, (Rand_ZeroOne() < 0.4f))) {
        arg0->unk18D = 4U;
loop_8:
        temp_a2 = phi_v1->unk9B0;
        temp_v0 = phi_v0 + 4;
        phi_v0 = temp_v0;
        if (temp_a2->unk1C == 0) {
            sp1C = temp_a2;
            Math_Vec3f_Copy(temp_a2 + 0x24, arg1);
            temp_a2->unk1C = 1;
            return;
        }
        phi_v1 += 4;
        if (temp_v0 == 0x20) {
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return;
        }
        goto loop_8;
    }
    temp_v0_2 = arg0->unk18D;
    if ((s32) temp_v0_2 > 0) {
        arg0->unk18D = (u8) (temp_v0_2 - 1);
    }
}

void func_80B06C08(Actor *arg0) {
    s32 temp_a0;
    u8 temp_v0_7;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *phi_v1;
    s32 phi_a0;

    if ((arg0->unk18E == 0) && ((s32) arg0->colChkInfo.health < 0x14) && (arg0 = arg0, (Rand_ZeroOne() < 0.35f))) {
        arg0->unk18E = 4U;
        temp_v0 = arg0->unk9D0;
        if (temp_v0->unk1C == 0) {
            temp_v0->unk1C = 2;
            return;
        }
        temp_v0_2 = arg0->unk9D4;
        phi_v1 = arg0 + 8;
        phi_a0 = 8;
        if (temp_v0_2->unk1C == 0) {
            temp_v0_2->unk1C = 2;
            return;
        }
loop_10:
        temp_v0_3 = phi_v1->unk9D0;
        temp_a0 = phi_a0 + 0x10;
        phi_a0 = temp_a0;
        if (temp_v0_3->unk1C == 0) {
            temp_v0_3->unk1C = 2;
            return;
        }
        temp_v0_4 = phi_v1->unk9D4;
        if (temp_v0_4->unk1C == 0) {
            temp_v0_4->unk1C = 2;
            return;
        }
        temp_v0_5 = phi_v1->unk9D8;
        if (temp_v0_5->unk1C == 0) {
            temp_v0_5->unk1C = 2;
            return;
        }
        temp_v0_6 = phi_v1->unk9DC;
        if (temp_v0_6->unk1C == 0) {
            temp_v0_6->unk1C = 2;
            return;
        }
        phi_v1 += 0x10;
        if (temp_a0 == 0x28) {
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return;
        }
        goto loop_10;
    }
    temp_v0_7 = arg0->unk18E;
    if ((s32) temp_v0_7 > 0) {
        arg0->unk18E = (u8) (temp_v0_7 - 1);
    }
}

void func_80B06D38(Actor *arg0, GlobalContext *arg1) {
    Actor *sp44;
    f32 sp38;
    Actor *temp_v0_2;
    f32 temp_f0;
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_v1;
    u8 temp_v0_3;
    void *temp_v0;
    f32 phi_f2;

    if ((arg0->speedXZ > 10.0f) && ((s32) arg0->colChkInfo.health < 0xA) && (arg0->unk18F == 0) && (Rand_ZeroOne() < 0.35f)) {
        arg0->unk18F = 4U;
        sp38 = Math_SinS(arg0->shape.rot.y);
        temp_v0 = arg0->unk4A0;
        temp_v0_2 = Actor_Spawn(arg1 + 0x1CA0, arg1, 9, (f32) temp_v0->unk70 - (sp38 * 100.0f), (f32) temp_v0->unk72 + 100.0f, (f32) temp_v0->unk74 - (Math_CosS(arg0->shape.rot.y) * 100.0f), (s16) 0, (s16) 0, (s16) 0, (s16) 0);
        if (temp_v0_2 != 0) {
            temp_a2 = arg0->yawTowardsPlayer;
            temp_v1 = arg0->shape.rot.y;
            temp_a1 = (temp_a2 - temp_v1) - 0x8000;
            if ((s32) temp_a1 >= 0x2001) {
                temp_v0_2->world.rot.y = temp_v1 + 0xA000;
            } else if ((s32) temp_a1 < -0x2000) {
                temp_v0_2->world.rot.y = temp_v1 + 0x6000;
            } else {
                temp_v0_2->world.rot.y = temp_a2;
            }
            sp44 = temp_v0_2;
            temp_v0_2->unk1F0 = (s16) ((Rand_Next() >> 0x1C) + 0x11);
            temp_v0_2->velocity.y = 2.0f;
            temp_v0_2->speedXZ = arg0->xzDistToPlayer * 0.01f;
            temp_f0 = temp_v0_2->speedXZ;
            phi_f2 = 6.0f;
            if (temp_f0 < 6.0f) {

            } else if (temp_f0 > 12.0f) {
                phi_f2 = 12.0f;
            } else {
                phi_f2 = temp_f0;
            }
            temp_v0_2->speedXZ = phi_f2;
            Actor_SetScale(temp_v0_2, 0.02f);
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return;
    }
    temp_v0_3 = arg0->unk18F;
    if ((s32) temp_v0_3 > 0) {
        arg0->unk18F = (u8) (temp_v0_3 - 1);
    }
}

void func_80B06F48(BossHakugin *arg0, GlobalContext *arg1) {
    f32 spA4;
    f32 spA0;
    s32 sp9C;
    s32 sp94;
    s32 sp84;
    void *sp78;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    Vec3f *temp_s3;
    f32 temp_f0;
    f32 temp_f20;
    s32 temp_a3;
    s32 temp_f10;
    s32 temp_s2;
    s32 temp_t4;
    s32 temp_t7;
    void *temp_s0;
    void *temp_s5;
    s32 phi_a3;
    s32 phi_s4;
    s32 phi_s4_2;
    s32 phi_s1;
    s32 phi_s2;

    temp_a3 = arg0->unk191 + 3;
    phi_a3 = temp_a3;
    if (temp_a3 >= 0xF) {
        phi_a3 = 0;
    }
    sp84 = 0xF;
    sp94 = 0;
    sp9C = phi_a3;
loop_3:
    if ((sp84 < (s32) arg0->actor.colChkInfo.health) || (((1 << (*(&D_80B0EAB0 + (sp94 * 4)) + 0x1F)) & arg0->unk1B0) == 0)) {

    } else {
        temp_s5 = arg0 + (sp94 * 0x12C);
        temp_s3 = temp_s5 + (arg0->unk191 * 0x14) + 0x3158;
        sp78 = arg1 + 0x18000;
        temp_a0 = temp_s5 + (sp9C * 0x14) + 0x3158;
        temp_a1 = temp_s3;
        sp94 = sp94;
        sp9C = sp9C;
        Math_Vec3f_Diff(temp_a0, temp_a1, (Vec3f *) &spA0);
        spA4 -= 3.5f;
        temp_f10 = (s32) (Math3D_Vec3fMagnitude((Vec3f *) &spA0) / 10.0f);
        phi_s4 = temp_f10;
        phi_s2 = 0;
        if (temp_f10 >= 2) {
            if (temp_f10 >= 4) {
                phi_s4 = 3;
            }
            Math_Vec3f_Scale((Vec3f *) &spA0, 1.0f / (f32) phi_s4);
            phi_s4_2 = phi_s4;
        } else {
            phi_s4_2 = 1;
        }
        phi_s1 = 0;
        if (phi_s4_2 > 0) {
            do {
                temp_s0 = temp_s5 + (arg0->unk191 * 0x14) + phi_s1 + 0x3158;
                temp_f20 = (f32) phi_s2;
                temp_s0->unk0 = (f32) (randPlusMinusPoint5Scaled(20.0f) + (temp_s3->x + (spA0 * temp_f20)));
                temp_s0->unk4 = (f32) (randPlusMinusPoint5Scaled(20.0f) + (temp_s3->y + (spA4 * temp_f20)));
                temp_f0 = randPlusMinusPoint5Scaled(20.0f);
                temp_s2 = phi_s2 + 1;
                temp_s0->unkC = 0.01f;
                temp_s0->unk10 = 0x96;
                temp_s0->unk12 = (s16) (5 - phi_s2);
                temp_s0->unk8 = (f32) (temp_f0 + (temp_s3->z + (spA8 * temp_f20)));
                phi_s1 += 0x14;
                phi_s2 = temp_s2;
            } while (temp_s2 != phi_s4_2);
        }
        if ((sp78->unk840 & 1) != 0) {
            EffectSsFhgFlash_SpawnShock(arg1, arg0, temp_s5 + (arg0->unk191 * 0x14) + 0x3158, 0xFA, sp94 + 2);
        }
        temp_t4 = sp94 + 1;
        sp84 += -3;
        sp94 = temp_t4;
        if (temp_t4 >= 5) {

        } else {
            goto loop_3;
        }
    }
    temp_t7 = arg0->unk191 - 3;
    sp9C = temp_t7;
    if (temp_t7 < 0) {
        arg0->unk191 = 0xC;
        return;
    }
    arg0->unk191 = (u8) sp9C;
}

s32 func_80B0728C(BossHakugin *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    s16 temp_v1;

    temp_v1 = arg0->unk1A8;
    arg0->unk198 += (Rand_Next() >> 0x12) + 0x4000;
    if (temp_v1 == 5) {
        if (Math_SmoothStepToS(arg0 + 0x1A6, -0x900, 4, 0x200, (s16) 0x80) == 0) {
            arg0->unk1A8 += -1;
        }
        temp_f0 = (f32) (arg0->unk1A6 + 0x480) * -0.026041666f;
        arg0->unk1C8 = temp_f0;
        if (temp_f0 < 0.001f) {
            arg0->unk1C8 = 0.001f;
        } else {
            arg0->unk1C8 = arg0->unk1C8;
        }
        temp_f0_2 = (f32) (arg0->unk1A6 - 0x700) * -0.00021059783f;
        arg0->unk1D0 = temp_f0_2;
        if (temp_f0_2 > 0.62f) {
            arg0->unk1D0 = 0.62f;
        } else {
            arg0->unk1D0 = arg0->unk1D0;
        }
        temp_f0_3 = arg0->unk1D0;
        if (temp_f0_3 > 0.0f) {
            arg0->unk1CC = -100.0f - (((0.62f / temp_f0_3) - 1.0f) * 200.0f);
        } else {
            arg0->unk1CC = -200.0f;
        }
        goto block_16;
    }
    if ((s32) temp_v1 > 0) {
        arg0->unk1A8 = temp_v1 - 1;
        goto block_16;
    }
    if (Math_ScaledStepToS(arg0 + 0x1A6, 0x700, 0x380) != 0) {
        arg0->unk1D0 = (f32) (0x700 - arg0->unk1A6) * 0.00024414062f * 0.62f;
        return 1;
    }
block_16:
    return 0;
}

void func_80B07450(Actor *arg0, s16 arg1) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    SkelAnime *temp_s0;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    s16 temp_s0_2;
    s32 temp_s0_3;
    s32 phi_s0;

    temp_s0 = arg0 + 0x144;
    if (func_801378B8(temp_s0, 0.0f) != 0) {
        Audio_PlayActorSound2(arg0, 0x394AU);
        Math_Vec3f_Copy((Vec3f *) &sp48, arg0 + (*D_80B0EA9A * 0xC) + 0x398);
        temp_f2 = arg0->xzDistToPlayer;
        if (temp_f2 < 1500.0f) {
            func_80B05A64((bitwise BossHakugin *) 1500.0f, arg0, arg1, 0x4268, (s16) (s32) (6.5f * ((1500.0f - temp_f2) * 0.00066666666f)), 0xA);
        }
        func_80B06C08(arg0);
        goto block_10;
    }
    if (func_801378B8(temp_s0, 2.0f) != 0) {
        Math_Vec3f_Copy((Vec3f *) &sp48, arg0 + (D_80B0EAAC * 0xC) + 0x398);
        func_80B06B20(arg0, (Vec3f *) &sp48);
        goto block_10;
    }
    if (func_801378B8(temp_s0, 3.0f) != 0) {
        Math_Vec3f_Copy((Vec3f *) &sp48, arg0 + (*D_80B0EA95 * 0xC) + 0x398);
        func_80B06D38(arg0, (GlobalContext *) arg1);
        goto block_10;
    }
    if (func_801378B8(temp_s0, 11.0f) != 0) {
        Math_Vec3f_Copy((Vec3f *) &sp48, arg0 + (*D_80B0EAA5 * 0xC) + 0x398);
        func_80B06B20(arg0, (Vec3f *) &sp48);
block_10:
        temp_f4 = Math_SinS(arg0->shape.rot.y) * -1.0f;
        sp58 = 1.0f;
        sp54 = temp_f4;
        temp_f2_2 = Math_CosS(arg0->shape.rot.y) * -1.0f;
        sp5C = temp_f2_2;
        sp4C += 5.0f;
        sp48 += 40.0f * sp54;
        sp50 += 40.0f * temp_f2_2;
        temp_s0_2 = Rand_S16Offset(0x28A, 0x64);
        func_800B12F0((GlobalContext *) arg1, (Vec3f *) &sp48, (Vec3f *) &sp54, &D_801D15B0, (s16) (s32) temp_s0_2, (s16) Rand_S16Offset(0x14, 0xA), (s16) 0x1E);
        phi_s0 = 0;
        do {
            func_80B0696C(arg0, (Vec3f *) &sp48);
            temp_s0_3 = phi_s0 + 1;
            phi_s0 = temp_s0_3;
        } while (temp_s0_3 != 4);
    }
}

void func_80B07700(BossHakugin *arg0, GlobalContext *arg1, s32 arg2) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 phi_f2;
    f32 phi_f2_2;
    f32 phi_f18;

    if (arg2 != 0) {
        sp40 = (f32) (arg0->unk19C - 0x1E) * 0.014285714f;
    } else {
        sp40 = 0.1f;
    }
    sp3C = randPlusMinusPoint5Scaled(2.0f) * sp40;
    sp44 = randPlusMinusPoint5Scaled(2.0f) * sp40;
    if (sp3C >= 0.0f) {
        phi_f2 = 1.0f;
    } else {
        phi_f2 = -1.0f;
    }
    sp2C = phi_f2;
    sp30 = ((Rand_ZeroFloat(20.0f) + 5.0f) * phi_f2 * 4.0f) + (f32) arg0->unk964.dim.pos.x;
    if (sp44 >= 0.0f) {
        phi_f2_2 = 1.0f;
    } else {
        phi_f2_2 = -1.0f;
    }
    sp2C = phi_f2_2;
    sp38 = ((Rand_ZeroFloat(20.0f) + 5.0f) * phi_f2_2 * 4.0f) + (f32) arg0->unk964.dim.pos.z;
    if (arg2 != 0) {
        phi_f18 = (f32) arg0->unk964.dim.pos.y + ((f32) arg0->unk964.dim.height * sp40);
    } else {
        phi_f18 = (Rand_ZeroFloat((f32) arg0->unk964.dim.height) * 0.8f) + (f32) arg0->unk964.dim.pos.y;
    }
    sp34 = phi_f18;
    sp40 += 0.8f;
    EffectSsIceSmoke_Spawn(arg1, (Vec3f *) &sp30, (Vec3f *) &sp3C, &D_801D15B0, (s16) 0x258);
}

s32 func_80B0791C(BossHakugin *arg0, GlobalContext *arg1) {
    void *sp34;
    f32 sp24;
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f2;
    s16 temp_v1;
    void *temp_a3;
    s32 phi_v0;
    s32 phi_v0_2;

    temp_a3 = arg1->actorCtx.actorList[2].first;
    if (arg0->unk454 > 0.0f) {
        return 0;
    }
    sp34 = temp_a3;
    arg0 = arg0;
    temp_v1 = arg0->unk1A0 - func_800DFCDC((arg1 + (arg1->activeCamera * 4))->unk800);
    phi_v0 = (s32) temp_v1;
    if ((s32) temp_v1 < 0) {
        phi_v0 = -(s32) temp_v1;
    }
    if (phi_v0 < 0x4000) {
        if (phi_v0 < 0x1800) {
            arg0->unk18C = 0;
        }
        return 0;
    }
    if (arg0->unk18C == 1) {
        return 0;
    }
    temp_f12 = arg0->actor.world.pos.x;
    temp_f0 = (f32) arg0->unk1B4;
    sp24 = temp_f12 * temp_f0;
    sp1C = arg0->actor.world.pos.z;
    temp_f2 = temp_a3->world.pos.x;
    temp_f18 = sp1C * temp_f0;
    if (((temp_f2 > 1200.0f) && (temp_f0_2 = temp_a3->world.pos.z, (temp_f0_2 < 1200.0f)) && (temp_f0_2 > -1200.0f) && (temp_f12 < 0.0f) && (temp_f18 > 1200.0f)) || ((temp_f0_3 = temp_a3->world.pos.z, (temp_f2 < -1200.0f)) && (temp_f0_3 < 1200.0f) && (temp_f0_3 > -1200.0f) && (temp_f12 > 0.0f) && (temp_f18 < -1200.0f)) || ((temp_f0_3 > 1200.0f) && (temp_f2 < 1200.0f) && (temp_f2 > -1200.0f) && (sp1C < 0.0f) && (sp24 < -1200.0f)) || ((phi_v0_2 = 0, (temp_f0_3 < -1200.0f)) && (temp_f2 < 1200.0f) && (temp_f2 > -1200.0f) && (sp1C > 0.0f) && (sp24 > 1200.0f))) {
        phi_v0_2 = 1;
    }
    return phi_v0_2;
}

void func_80B07B88(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk196 == 0xA) {
        arg0->unk196 = 0U;
        arg0->unk1E4 = 0.0f;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x398), 0xF, 3, 0.7f, 0.5f);
    }
}

void func_80B07BFC(void *arg0, GlobalContext *arg1, s32 arg2) {
    u8 temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = arg0->unkB9;
    if (temp_v0 == 2) {
        arg0->unk196 = 0;
        arg0->unk1E4 = 3.0f;
        arg0->unk1DC = 2.5f;
        return;
    }
    if (temp_v0 == 4) {
        arg0->unk196 = 0x14;
        arg0->unk1E4 = 3.0f;
        arg0->unk1DC = 2.5f;
        temp_v0_2 = arg0->unk4A0 + (arg2 << 6);
        Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, (f32) temp_v0_2->unkE, (f32) temp_v0_2->unk10, (f32) temp_v0_2->unk12, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
        return;
    }
    if (temp_v0 == 3) {
        arg0->unk196 = 0xA;
        arg0->unk1DC = 2.5f;
        arg0->unk1E0 = 3.75f;
        arg0->unk1E4 = 1.0f;
        return;
    }
    if (temp_v0 == 0xD) {
        arg0->unk196 = 0x15;
        arg0->unk1DC = 2.5f;
        arg0->unk1E4 = 3.0f;
        temp_v0_3 = arg0->unk4A0 + (arg2 << 6);
        Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) temp_v0_3->unkE, (f32) temp_v0_3->unk10, (f32) temp_v0_3->unk12, (s16) 0, (s16) 0, (s16) 3, (s16) 4);
    }
}

void func_80B07DA4(BossHakugin *arg0, GlobalContext *arg1, f32 arg2, s16 arg3) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    Vec3f *sp24;
    Camera *temp_v0;
    Vec3f *temp_a0;

    temp_v0 = Play_GetCamera(arg1, arg0->unk1AC);
    Math_Vec3f_Diff(temp_v0 + 0x50, temp_v0 + 0x5C, (Vec3f *) &sp38);
    temp_a0 = &temp_v0->eye;
    sp24 = temp_a0;
    Math_Vec3f_StepTo(temp_a0, arg0 + 0x38C, arg2);
    if (func_80B0573C((Vec3f *) &sp38) != 0) {
        sp28 = Math_CosS(arg0->unk37A.x);
        sp2C = Math_SinS(arg0->unk37A.y) * sp28;
        sp30 = Math_SinS(arg0->unk37A.x);
        sp28 = Math_CosS(arg0->unk37A.x);
        sp34 = Math_CosS(arg0->unk37A.y) * sp28;
        func_80B057A4((Vec3f *) &sp38, (Vec3f *) &sp2C, (f32) arg3 * 0.0000958738f);
    }
    temp_v0->at.x = temp_v0->eye.x + (50.0f * sp38);
    temp_v0->at.y = temp_v0->eye.y + (50.0f * sp3C);
    temp_v0->at.z = temp_v0->eye.z + (50.0f * sp40);
    Play_CameraSetAtEye(arg1, arg0->unk1AC, &temp_v0->at, sp24);
}

void func_80B07EEC(Actor *arg0, GlobalContext *arg1) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    void *temp_s1;

    temp_s1 = arg1->actorCtx.actorList[2].first;
    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_06002054);
    arg0->flags &= -2;
    arg0->unk1AC = ActorCutscene_GetCurrentCamera((s16) arg0->cutscene);
    sp20 = temp_s1->focus.pos.x;
    sp24 = temp_s1->focus.pos.y;
    sp28 = temp_s1->focus.pos.z;
    arg0->unk38C = (f32) ((Math_SinS(temp_s1->shape.rot.y) * 70.0f) + temp_s1->focus.pos.x);
    arg0->unk390 = (f32) (temp_s1->focus.pos.y + 20.0f);
    arg0->unk394 = (f32) ((Math_CosS(temp_s1->shape.rot.y) * 70.0f) + temp_s1->focus.pos.z);
    Play_CameraSetAtEye(arg1, arg0->unk1AC, (Vec3f *) &sp20, arg0 + 0x38C);
    arg0->unk37A = Math_FAtan2F(70.0f, -20.0f);
    arg0->unk37C = (s16) (temp_s1->shape.rot.y + 0x8000);
    func_800B7298(arg1, arg0, 0x15U);
    arg0->unk19C = 0;
    arg0->unk188 = func_80B08018;
}

void func_80B08018(BossHakugin *this, GlobalContext *globalCtx) {
    f32 *sp24;
    f32 *temp_a3;
    s16 temp_v0;

    this->unk19C += 1;
    temp_v0 = this->unk19C;
    if (temp_v0 == 0x1E) {
        this->unk38C = 417.0f;
        this->unk390 = 40.0f;
        temp_a3 = &this->unk38C;
        this->unk394 = -1417.0f;
        sp24 = temp_a3;
        Play_CameraSetAtEye(globalCtx, this->unk1AC, &D_80B0EAE8, (Vec3f *) temp_a3);
        func_800BE33C((Vec3f *) sp24, &D_80B0EAE8, &this->unk37A, 1);
        goto block_6;
    }
    if (temp_v0 == 0x32) {
        this->unk37A.x = 0x1500;
        goto block_6;
    }
    if (temp_v0 == 0x78) {
        ActorCutscene_Stop((s16) this->actor.cutscene);
        gSaveContext.eventInf[6] |= 4;
        func_80B08124(this);
        return;
    }
block_6:
    if ((s32) this->unk19C >= 0x1F) {
        func_80B07DA4(this, globalCtx, 5.0f, 0xC0);
    }
}

void func_80B08124(BossHakugin *arg0) {
    arg0->unk19C = 0;
    arg0->actionFunc = func_80B0813C;
}

void func_80B0813C(BossHakugin *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp28;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a2;
    CollisionCheckContext *temp_a1;
    CollisionCheckContext *temp_a1_2;
    GlobalContext *temp_a0;
    s16 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;

    if ((globalCtx->actorCtx.actorList[2].first->unkA70 & 0x4000) == 0) {
        temp_v0 = this->unk19C;
        if (temp_v0 != 0) {
            this->unk19C = temp_v0 - 1;
        }
    }
    temp_v0_2 = this->unk964.base.acFlags;
    if (((temp_v0_2 & 2) != 0) && (this->unk964.info.acHitInfo->toucher.dmgFlags == 0x800)) {
        this->unk964.base.acFlags = temp_v0_2 & 0xFFFD;
        this->unk964.base.atFlags &= 0xFFFD;
        this->unk964.base.ocFlags1 &= 0xFFFD;
        func_80B09E84(this);
        return;
    }
    temp_v0_3 = this->unk964.base.atFlags;
    temp_a0 = globalCtx;
    if ((temp_v0_3 & 2) != 0) {
        this->unk19C = 0x28;
        this->unk964.base.atFlags = temp_v0_3 & 0xFFFD;
    }
    temp_a1 = &globalCtx->colChkCtx;
    if (this->unk19C == 0) {
        globalCtx = globalCtx;
        CollisionCheck_SetAT(temp_a0, temp_a1, (Collider *) &this->unk964);
    }
    temp_a1_2 = globalCtx + 0x18884;
    temp_a2 = &this->unk964;
    sp24 = temp_a2;
    sp28 = temp_a1_2;
    globalCtx = globalCtx;
    CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) temp_a2);
    CollisionCheck_SetOC(globalCtx, temp_a1_2, (Collider *) temp_a2);
    this->unk1A4 = 0x14;
}

void func_80B0825C(BossHakugin *arg0) {
    s8 temp_a0;

    arg0->unk19C = 0x64;
    temp_a0 = arg0->actor.cutscene;
    arg0 = arg0;
    arg0->unk1AC = ActorCutscene_GetCurrentCamera((s16) temp_a0);
    func_8016566C(1.96e-43f);
    arg0->actionFunc = func_80B082AC;
}

void func_80B082AC(BossHakugin *this, GlobalContext *globalCtx) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 *temp_a2;
    f32 *temp_a2_2;
    f32 *temp_a2_3;
    f32 *temp_a2_4;
    s16 temp_v0;
    s32 temp_v1;
    s16 phi_v0;

    this->unk19C += -1;
    temp_v0 = this->unk19C;
    if (((s32) temp_v0 >= 0x1E) && ((temp_v0 & 1) != 0)) {
        func_80B07700(this, globalCtx, 1);
        goto block_5;
    }
    if ((temp_v0 & 3) == 0) {
        func_80B07700(this, globalCtx, 0);
block_5:
    }
    temp_a2 = &sp28;
    phi_v0 = this->unk19C;
    if (this->unk19C == 0x63) {
        sp28 = 479.0f;
        sp2C = 181.0f;
        sp30 = -1637.0f;
        sp34 = 328.0f;
        sp38 = 164.0f;
        sp3C = -1693.0f;
        Play_CameraSetAtEye(globalCtx, this->unk1AC, (Vec3f *) temp_a2, (Vec3f *) &sp34);
        goto block_14;
    }
    temp_a2_2 = &sp28;
    if (this->unk19C == 0x4B) {
        sp28 = 693.0f;
        sp2C = 162.0f;
        sp30 = -1550.0f;
        sp34 = 638.0f;
        sp38 = 200.0f;
        sp3C = -1407.0f;
        Play_CameraSetAtEye(globalCtx, this->unk1AC, (Vec3f *) temp_a2_2, (Vec3f *) &sp34);
        goto block_14;
    }
    temp_a2_3 = &sp28;
    if (this->unk19C == 0x32) {
        sp28 = 825.0f;
        sp2C = 123.0f;
        sp30 = -1637.0f;
        sp34 = 734.0f;
        sp38 = 145.0f;
        sp3C = -1762.0f;
        Play_CameraSetAtEye(globalCtx, this->unk1AC, (Vec3f *) temp_a2_3, (Vec3f *) &sp34);
        goto block_14;
    }
    temp_a2_4 = &sp28;
    if (this->unk19C == 0x19) {
        sp28 = 711.0f;
        sp2C = 76.0f;
        sp30 = -1602.0f;
        sp34 = 634.0f;
        sp38 = 54.0f;
        sp3C = -1735.0f;
        Play_CameraSetAtEye(globalCtx, this->unk1AC, (Vec3f *) temp_a2_4, (Vec3f *) &sp34);
block_14:
        phi_v0 = this->unk19C;
    }
    this->unk1D4 -= 0.027f;
    temp_v1 = (s32) ((f32) phi_v0 * 5.1f) + 0x32;
    if (temp_v1 >= 0x100) {
        this->unk193 = 0xFF;
    } else {
        this->unk193 = (u8) temp_v1;
    }
    func_800B9010((Actor *) this, 0x2144U);
    if (this->unk19C == 0) {
        this->unk193 = 0;
        func_80B08550(this, globalCtx);
    }
}

void func_80B08550(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    s16 temp_v1;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    sp24 = temp_v0;
    Audio_PlayActorSound2(arg0, 0x394FU);
    Play_CameraSetAtEye(arg1, arg0->unk1AC, &D_80B0EAF4, &D_80B0EB00);
    arg0->unk37A = -0x1F00;
    arg0->unk37C = -0x4000;
    arg0->unk19C = 0x46;
    arg0->unk38C = 680.0f;
    arg0->unk390 = 370.0f;
    arg0->unk394 = -1600.0f;
    temp_v0->world.pos.x = 250.0f;
    temp_v0->world.pos.z = -1560.0f;
    temp_v0->shape.rot.y = arg0->yawTowardsPlayer + 0x8000;
    temp_v1 = temp_v0->shape.rot.y;
    temp_v0->world.rot.y = temp_v1;
    temp_v0->unkAD4 = temp_v1;
    func_800B7298(arg1, arg0, 0x83U);
    arg0->unk188 = func_80B0863C;
}

void func_80B0863C(BossHakugin *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a0;
    s16 *temp_v0_2;
    s16 temp_v0;
    s16 temp_v0_3;

    this->unk19C += -1;
    temp_v0 = this->unk19C;
    if ((s32) temp_v0 > 0) {
        func_80B07DA4(this, globalCtx, 7.0f, 0xC0);
        goto block_16;
    }
    if (temp_v0 == 0) {
        Play_CameraSetAtEye(globalCtx, this->unk1AC, &D_80B0EB0C, &D_80B0EB18);
        this->unk37A.y = 0x4000;
        this->unk37A.x = Math_FAtan2F(95.0f, 32.0f);
        this->unk38C = 232.0f;
        this->unk390 = 43.0f;
        this->unk394 = -1600.0f;
        Audio_PlayActorSound2((Actor *) this, 0x394EU);
        goto block_16;
    }
    func_80B07DA4(this, globalCtx, 1.0f, 0xC0);
    temp_a0 = &this->unk144;
    sp34 = temp_a0;
    if (func_801378B8(temp_a0, 20.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x394FU);
    }
    if (func_801378B8(sp34, 45.0f) != 0) {
        func_801A89A8(0x801B);
    }
    if (func_801378B8(sp34, 65.0f) != 0) {
        Actor_TitleCardCreate(globalCtx, &globalCtx->actorCtx.titleCtxt, Lib_SegmentedToVirtual(&D_06014040), 0xA0, (s16) 0xB4, (u8) 0x80, (u8) 0x28);
    }
    if (func_801378B8(sp34, 86.0f) != 0) {
        func_8019F1C0(&this->unk458, 0x394CU);
    }
    if (func_801378B8(sp34, 90.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x393DU);
        temp_v0_2 = &this->actor.home.rot.z;
        temp_v0_2->unk9D0->unk1C = 0;
        temp_v0_2->unk9D4->unk1C = 0;
        temp_v0_2->unk9D8->unk1C = 0;
        temp_v0_2->unk9DC->unk1C = 0;
    }
    if (SkelAnime_FrameUpdateMatrix(sp34) != 0) {
        func_80B08848(this, globalCtx);
        return;
    }
block_16:
    temp_v0_3 = this->unk19C;
    if (((temp_v0_3 + 0xC) >= 0) && ((temp_v0_3 & 3) == 0)) {
        func_80B07700(this, globalCtx, 0);
    }
}

void func_80B08848(Actor *arg0, GlobalContext *arg1) {
    void *sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 *temp_a1;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_a1 = &sp30;
    arg0->unk38C = (f32) (temp_v0->world.pos.x - 150.0f);
    arg0->unk390 = (f32) (temp_v0->world.pos.y + 30.0f);
    arg0->unk394 = (f32) (temp_v0->world.pos.z - 30.0f);
    sp30 = arg0->world.pos.x - 100.0f;
    sp34 = arg0->world.pos.y + 100.0f;
    sp3C = temp_v0;
    sp38 = arg0->world.pos.z;
    func_800BE33C(arg0 + 0x38C, (Vec3f *) temp_a1, arg0 + 0x37A, 1);
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06013828, 1.5f, 0.0f, 0.0f, (u8) 0, -3.0f);
    arg0->unk19C = 0;
    arg0->speedXZ = 5.0f;
    func_800B7298(arg1, arg0, 6U);
    temp_v0->unkA6C = (s32) (temp_v0->unkA6C | 0x20);
    arg1->actorCtx.unk268 = 1;
    arg0->unk188 = func_80B08960;
}

void func_80B08960(BossHakugin *this, GlobalContext *globalCtx) {
    Actor *sp44;
    Camera *sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    Vec3f *sp28;
    GlobalContext *temp_a0;
    Vec3f *temp_a3;
    f32 temp_f0;
    s16 temp_v1;
    s16 temp_v1_2;
    void *temp_v0;
    f32 phi_f0;

    temp_a0 = globalCtx;
    sp44 = globalCtx->actorCtx.actorList[2].first;
    globalCtx = globalCtx;
    sp40 = Play_GetCamera(temp_a0, this->unk1AC);
    Math_ScaledStepToS(&this->unk1A6, 0x800, 0x80);
    Math_StepToF(&this->actor.speedXZ, 25.0f, 0.5f);
    this->unk144.animPlaybackSpeed = (this->actor.speedXZ * 0.03125f) + 0.5f;
    func_80B07450((Actor *) this, (s16) globalCtx);
    this->unk18D = 0xA;
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    this->unk19C += 1;
    temp_v1 = this->unk19C;
    if ((s32) temp_v1 < 8) {
        func_80B07DA4(this, globalCtx, 25.0f, 0x120);
        goto block_9;
    }
    if (temp_v1 == 0x16) {
        this->unk38C = sp40->eye.x;
        this->unk390 = sp40->eye.y;
        this->unk394 = sp40->eye.z + 450.0f;
        goto block_9;
    }
    if (temp_v1 == 0x3E) {
        this->actor.flags |= 1;
        ActorCutscene_Stop((s16) this->actor.cutscene);
        sp44->unkA6C = (s32) (sp44->unkA6C & ~0x20);
        gSaveContext.eventInf[5] |= 8;
        func_80165690(sp44);
        func_80B08C1C(this);
        return;
    }
    if ((s32) temp_v1 >= 0x17) {
        sp34 = this->actor.world.pos.x;
        temp_a3 = &sp40->eye;
        sp38 = this->actor.world.pos.y + 150.0f;
        sp28 = temp_a3;
        sp3C = this->actor.world.pos.z;
        Math_Vec3f_StepTo(temp_a3, (Vec3f *) &this->unk38C, 35.0f);
        Play_CameraSetAtEye(globalCtx, this->unk1AC, (Vec3f *) &sp34, temp_a3);
        if (this->unk19C == 0x2A) {
            Audio_PlayActorSound2((Actor *) this, 0x393EU);
            this->unk9D0->unk1C = 0;
            temp_v0 = this + (2 * 4);
            this->unk9D4->unk1C = 0;
            temp_v0->unk9D0->unk1C = 0;
            temp_v0->unk9D4->unk1C = 0;
            temp_v0->unk9D8->unk1C = 0;
            temp_v0->unk9DC->unk1C = 0;
        }
    }
block_9:
    if ((this->unk484.base.atFlags & 2) != 0) {
        func_800B8D50(globalCtx, (Actor *) this, 10.0f, 0, 6.0f, 0U);
    } else {
        globalCtx->actorCtx.unk268 = 1;
    }
    temp_v1_2 = this->unk19C;
    if ((s32) temp_v1_2 >= 5) {
        temp_f0 = (f32) (temp_v1_2 - 4) * 5.0f;
        phi_f0 = temp_f0;
        if (temp_f0 > 60.0f) {
            phi_f0 = 60.0f;
        }
        func_800B6F20(globalCtx, (s32) &globalCtx->actorCtx.unk26C, phi_f0, -0x4000);
    }
}

void func_80B08C1C(BossHakugin *arg0) {
    s32 temp_t8;

    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06013828, 1.0f, 0.0f, 0.0f, (u8) 1, -5.0f);
    arg0->unk1A2 = 0;
    arg0->unk1C8 = 0.0f;
    temp_t8 = (s32) randPlusMinusPoint5Scaled(3072.0f);
    arg0->unk19C = 0x28;
    arg0->actionFunc = func_80B08CB8;
    arg0->unk1C4 = 16.0f;
    arg0->unk19E = (s16) temp_t8;
}

void func_80B08CB8(BossHakugin *this, GlobalContext *globalCtx) {
    f32 sp28;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f4;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v1;
    s32 phi_v0;

    if (this->unk1A4 == 0) {
        this->unk484.base.atFlags |= 1;
    }
    if (this->unk192 == 1) {
        if (func_80B0728C(this, 0) != 0) {
            Math_Vec3f_Copy(&this->unk3734, &this->unk380);
            this->unk1B8 = this->actor.speedXZ + 100.0f;
            sp28 = Math_CosS(0xA00);
            this->unk37AC = Math_SinS(this->actor.shape.rot.y) * sp28;
            this->unk37B0 = Math_SinS(0xA00);
            sp28 = Math_CosS(0xA00);
            temp_f4 = Math_CosS(this->actor.shape.rot.y) * sp28;
            this->unk192 = 2;
            this->unk1C8 = 0.0f;
            this->unk37B4 = temp_f4;
            func_8019F1C0(&this->unk458, 0x3852U);
            this->unk37B8.base.atFlags |= 1;
        }
    } else {
        Math_ScaledStepToS(&this->unk1A6, 0, 0x100);
    }
    if (func_80B0791C(this, globalCtx) != 0) {
        func_80B09A94(this, globalCtx);
        return;
    }
    if ((s32) this->unk19A >= 0x38) {
        this->unk19A = 0;
        this->unk19C = 0x28;
        this->unk1C4 = 27.0f;
    }
    if ((this->unk19C == 0x28) && (Math_SmoothStepToF(&this->actor.speedXZ, this->unk1C4, 0.15f, 1.0f, 0.1f) < 0.05f)) {
        this->unk19C += -1;
    } else {
        temp_v0 = this->unk19C;
        if (temp_v0 != 0x28) {
            this->unk19C = temp_v0 - 1;
            if (this->unk19C == 0) {
                if (this->actor.xzDistToPlayer > 1500.0f) {
                    this->unk1C4 = 12.5f;
                } else if (this->unk454 > 0.0f) {
                    this->unk1C4 = 21.0f;
                } else {
                    this->unk1C4 = 14.5f;
                }
                this->unk19C = 0x28;
                this->unk1C4 += (f32) (0x1E - this->actor.colChkInfo.health) * 0.033333335f;
            }
        }
    }
    this->unk144.animPlaybackSpeed = (this->actor.speedXZ * 0.03125f) + 0.5f;
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    func_80B07450((Actor *) this, (s16) globalCtx);
    temp_f2 = this->unk1C0;
    temp_f0 = this->unk1BC;
    if ((temp_f0 < (temp_f2 * 0.5f)) || (temp_f0 < 89.100006f)) {
        this->unk19E = (s16) (s32) ((Rand_ZeroFloat(0.4f) + 0.6f) * 1536.0f);
    } else if ((temp_f2 < (temp_f0 * 0.5f)) || (temp_f2 < 89.100006f)) {
        this->unk19E = (s16) (s32) -((Rand_ZeroFloat(0.4f) + 0.6f) * 1536.0f);
    } else if ((this->unk19E == this->unk1A2) && (Rand_ZeroOne() < 0.005f)) {
        if ((s32) this->unk19E > 0) {
            this->unk19E = (s16) (s32) -((Rand_ZeroFloat(0.4f) + 0.6f) * 1536.0f);
        } else {
            this->unk19E = (s16) (s32) ((Rand_ZeroFloat(0.4f) + 0.6f) * 1536.0f);
        }
    }
    Math_SmoothStepToS(&this->unk1A2, this->unk19E, 5, 0x800, (s16) 0x10);
    Math_SmoothStepToS(&this->actor.shape.rot.y, (s16) (this->unk1A0 + this->unk1A2), 5, 0x800, (s16) 0x10);
    temp_v1 = this->actor.shape.rot.y;
    temp_a0 = this->actor.yawTowardsPlayer - temp_v1;
    this->actor.world.rot.y = temp_v1;
    if (this->unk18C != 1) {
        temp_f0_2 = this->actor.xzDistToPlayer;
        if ((temp_f0_2 > 750.0f) && (temp_f0_2 < 1650.0f)) {
            phi_v0 = (s32) temp_a0;
            if ((s32) temp_a0 < 0) {
                phi_v0 = -(s32) temp_a0;
            }
            if (phi_v0 < 0x3000) {
                func_80B09178(this);
            }
        }
    }
}

void func_80B09178(BossHakugin *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06013828, 1.5f, 0.0f, 0.0f, (u8) 0, -3.0f);
    arg0->actionFunc = func_80B091D8;
}

void func_80B091D8(BossHakugin *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v0;
    s16 phi_v1;

    Math_ScaledStepToS(&this->unk1A6, 0x800, 0x100);
    Math_StepToF(&this->actor.speedXZ, 25.0f, 2.0f);
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    func_80B07450((Actor *) this, (s16) globalCtx);
    if ((this->unk454 < 0.0f) || ((this->unk484.base.atFlags & 2) != 0)) {
        func_80B08C1C(this);
        return;
    }
    temp_f2 = this->unk1C0;
    if ((temp_f2 < 89.100006f) || (temp_f12 = this->unk1BC, (temp_f12 < 89.100006f))) {
        this->unk19E = this->unk1A0;
    } else {
        temp_f0 = this->unk44C;
        if (((temp_f0 > 0.0f) && (temp_f0 < temp_f2)) || ((temp_f0 <= 0.0f) && (-temp_f0 < temp_f12))) {
            temp_a0_2 = this->actor.shape.rot.y;
            temp_v0 = this->actor.yawTowardsPlayer - temp_a0_2;
            if ((s32) temp_v0 < -0x3000) {
                phi_v0 = -0x3000;
            } else {
                phi_v1 = temp_v0;
                if ((s32) temp_v0 >= 0x3001) {
                    phi_v1 = 0x3000;
                }
                phi_v0 = phi_v1;
            }
            this->unk19E = temp_a0_2 + phi_v0;
        } else {
            temp_a0 = this->actor.shape.rot.y;
            this->unk19E = ((s32) (s16) (this->actor.yawTowardsPlayer - temp_a0) >> 1) + temp_a0;
        }
    }
    temp_v0_2 = this->unk19E - this->unk1A0;
    if ((s32) temp_v0_2 >= 0x1801) {
        this->unk19E = this->unk1A0 + 0x1800;
        goto block_21;
    }
    if ((s32) temp_v0_2 < -0x1800) {
        this->unk19E = this->unk1A0 - 0x1800;
block_21:
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->unk19E, 5, 0x800, (s16) 0x100);
    this->actor.world.rot.y = this->actor.shape.rot.y;
}

void func_80B093C0(void *arg0) {
    f32 sp24;
    f32 temp_f6;

    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_060134D0, -3.0f);
    arg0->unk494 = (u8) (arg0->unk494 & 0xFFFE);
    arg0->unk495 = (u8) (arg0->unk495 & 0xFFFB);
    arg0->unk1A6 = 0;
    arg0->unk195 = 0;
    arg0->unk1C8 = 0.0f;
    if (arg0->unk192 == 1) {
        Math_Vec3f_Copy(arg0 + 0x3734, arg0 + 0x380);
        arg0->unk1B8 = (f32) (arg0->unk70 + 100.0f);
        sp24 = Math_CosS(0xA00);
        arg0->unk37AC = (f32) (Math_SinS(arg0->unkBE) * sp24);
        arg0->unk37B0 = Math_SinS(0xA00);
        sp24 = Math_CosS(0xA00);
        temp_f6 = Math_CosS(arg0->unkBE) * sp24;
        arg0->unk192 = 2U;
        arg0->unk1C8 = 0.0f;
        arg0->unk37B4 = temp_f6;
        func_8019F1C0(arg0 + 0x458, 0x3852U);
        arg0->unk37C8 = (u8) (arg0->unk37C8 | 1);
    }
    arg0->unk19C = 0x3C;
    arg0->unk188 = func_80B094E0;
    arg0->unk70 = 20.0f;
}

void func_80B094E0(BossHakugin *this, GlobalContext *globalCtx) {
    ? spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    ? sp9C;
    CollisionContext *temp_s6;
    f32 *temp_s4;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f8;
    s16 temp_s0;
    s16 temp_s0_2;
    s32 temp_s2;
    s32 phi_s3;
    s32 phi_s2;

    func_800B9010((Actor *) this, 0x301BU);
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        if (this->unk195 == 0) {
            this->unk195 = 1;
            func_80B05A64(this, (Actor *) globalCtx, 0x4268, 7, (s16) 0xA);
        }
        temp_s6 = &globalCtx->colCtx;
        temp_s4 = &spA4;
        phi_s3 = -0x7800;
        phi_s2 = -0x4000;
        if (this->actor.speedXZ > 5.0f) {
            do {
                temp_s0 = this->actor.shape.rot.y + phi_s3;
                temp_f8 = 2.0f * Math_SinS(temp_s0);
                spB4 = 1.0f;
                spB0 = temp_f8;
                spB8 = 2.0f * Math_CosS(temp_s0);
                temp_s0_2 = this->actor.shape.rot.y + phi_s2;
                temp_f22 = Rand_ZeroFloat(190.0f);
                temp_f20 = Math_SinS(temp_s0_2);
                spA4 = (Math_SinS(this->actor.shape.rot.y) * temp_f22) + (this->actor.world.pos.x + (80.0f * temp_f20));
                temp_f20_2 = Math_CosS(temp_s0_2);
                spAC = (Math_CosS(this->actor.shape.rot.y) * temp_f22) + (this->actor.world.pos.z + (80.0f * temp_f20_2));
                spA8 = this->actor.world.pos.y + 300.0f;
                spA8 = func_800C4188(globalCtx, temp_s6, &spBC, &sp9C, this, temp_s4) + 10.0f;
                func_800B12F0(globalCtx, (Vec3f *) temp_s4, (Vec3f *) &spB0, &D_801D15B0, (s16) Rand_S16Offset(0x2EE, 0x64), (s16) 0xA, (s16) 0x1E);
                temp_s2 = phi_s2 + 0x8000;
                phi_s3 += 0xF000;
                phi_s2 = temp_s2;
            } while (temp_s2 != 0xC000);
        }
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->unk1A0, 5, 0x800, (s16) 0x10);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if (this->actor.speedXZ < 0.1f) {
        this->unk19C += -1;
        this->actor.world.pos.x = randPlusMinusPoint5Scaled(5.0f) + this->actor.home.pos.x;
        this->actor.world.pos.y = randPlusMinusPoint5Scaled(5.0f) + this->actor.home.pos.y;
        this->actor.world.pos.z = randPlusMinusPoint5Scaled(5.0f) + this->actor.home.pos.z;
        if (this->unk19C == 0) {
            this->unk484.base.acFlags |= 4;
            Math_Vec3f_Copy((Vec3f *) &this->actor.world, (Vec3f *) &this->actor.home);
            func_80B08C1C(this);
            this->unk1A4 = 0x14;
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return;
    }
    if (Math_StepToF(&this->actor.speedXZ, 5.0f, 0.3f) != 0) {
        Math_Vec3f_Copy((Vec3f *) &this->actor.home, (Vec3f *) &this->actor.world);
        this->actor.speedXZ = 0.0f;
    }
}

void func_80B09840(Actor *arg0, GlobalContext *arg1) {
    void *sp1C;
    Actor *temp_a3;

    temp_a3 = arg0;
    arg0 = temp_a3;
    sp1C = arg1->actorCtx.actorList[2].first;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x144, &D_0600319C, -10.0f);
    sp1C->parent = arg0;
    arg0->unk494 = (u8) (arg0->unk494 & 0xFFFE);
    arg0->unk496 = (u8) (arg0->unk496 & 0xFFFE);
    arg0->unk19C = 0xA;
    arg0->unk188 = func_80B098BC;
}

void func_80B098BC(BossHakugin *this, GlobalContext *globalCtx) {
    s16 sp32;
    f32 sp2C;
    f32 sp28;
    Actor *temp_s1;
    f32 temp_f2;
    s16 temp_a0;
    s16 temp_v1;
    s32 temp_v0;

    temp_s1 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    Math_StepToF(&this->actor.speedXZ, 0.0f, 2.0f);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->unk1A0, 5, 0x800, (s16) 0x100);
    temp_v1 = this->unk19C;
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if ((s32) temp_v1 < 0xA) {
        this->unk19C = temp_v1 - 1;
        if (this->unk19C == 0) {
            this->unk484.base.atFlags |= 1;
            this->unk484.base.ocFlags1 |= 1;
            func_80B08C1C(this);
            return;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return;
    }
    if (Math_ScaledStepToS(&this->unk1A6, -0x800, 0x1C0) != 0) {
        temp_s1->unkAE8 = 0x64;
        temp_s1->parent = NULL;
        temp_s1->unkD5C = 0;
        temp_s1->shape.rot.x = 0;
        func_800B8D50(globalCtx, (Actor *) this, 10.0f, (s16) (this->actor.shape.rot.y + 0x8000), 15.0f, 0x10U);
        temp_s1->world.pos.y += 30.0f;
        this->unk19C += -1;
        return;
    }
    temp_s1->unkAE8 = 0;
    temp_v0 = -(s32) this->unk378;
    temp_a0 = temp_v0 + 0x1F40;
    temp_s1->shape.rot.x = temp_v0 + 0x8FC0;
    sp32 = temp_a0;
    sp2C = Math_CosS(temp_a0);
    temp_f2 = 20.0f * sp2C;
    temp_s1->world.pos.x = this->actor.focus.pos.x - (Math_SinS(this->unk1A0) * temp_f2);
    sp28 = temp_f2;
    temp_s1->world.pos.y = this->actor.focus.pos.y - (Math_SinS(temp_a0) * 20.0f);
    temp_s1->world.pos.z = this->actor.focus.pos.z - (Math_CosS(this->unk1A0) * sp28);
}

void func_80B09A94(BossHakugin *arg0, GlobalContext *arg1) {
    f32 sp2C;
    f32 sp20;
    f32 temp_f12;
    f32 temp_f6;
    s16 temp_a0;
    s32 temp_v0;
    f32 phi_f2;

    if (func_80B09E20 != arg0->actionFunc) {
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_0600319C, -5.0f);
        arg0->actor.speedXZ = 0.0f;
        temp_v0 = Math_FAtan2F(arg0->actor.world.pos.z, arg0->actor.world.pos.x);
        if (temp_v0 < -0x4000) {
            arg0->actor.shape.rot.y = 0x4000;
            arg0->actor.world.pos.x = -1200.0f;
            arg0->actor.world.pos.z = -1200.0f;
        } else if (temp_v0 < 0) {
            arg0->actor.shape.rot.y = -0x8000;
            arg0->actor.world.pos.x = -1200.0f;
            arg0->actor.world.pos.z = 1200.0f;
        } else if (temp_v0 < 0x4000) {
            arg0->actor.shape.rot.y = -0x4000;
            arg0->actor.world.pos.x = 1200.0f;
            arg0->actor.world.pos.z = 1200.0f;
        } else {
            arg0->actor.shape.rot.y = 0;
            arg0->actor.world.pos.z = -1200.0f;
            arg0->actor.world.pos.x = 1200.0f;
        }
        if (arg0->unk1B4 == 1) {
            arg0->actor.shape.rot.y += -0x4000;
            phi_f2 = -1.0f;
        } else {
            phi_f2 = 1.0f;
        }
        temp_a0 = arg0->actor.shape.rot.y;
        arg0->unk1A0 = temp_a0 + (arg0->unk1B4 * 0x6000);
        arg0->actor.world.rot.y = temp_a0;
        sp2C = phi_f2;
        temp_f12 = phi_f2 * 300.0f;
        arg0->actor.world.pos.x += temp_f12 * Math_CosS(temp_a0);
        sp20 = temp_f12;
        temp_f6 = arg0->actor.world.pos.z - (temp_f12 * Math_SinS(arg0->actor.shape.rot.y));
        arg0->actor.world.pos.y += 500.0f;
        arg0->actor.world.pos.z = temp_f6;
        arg0->actor.world.pos.y = func_800C3FA0(temp_f12, arg1 + 0x830, arg0 + 0x80, arg0 + 0x24);
        arg0->unk18C = 0;
    }
    arg0->unk1A6 = 0x700;
    arg0->unk19C = 0x96;
    arg0->actionFunc = func_80B09C78;
    arg0->unk1CC = -100.0f;
}

void func_80B09C78(BossHakugin *this, GlobalContext *globalCtx) {
    f32 sp1C;
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;

    temp_a0 = &this->unk144;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_f2 = fabsf(this->unk44C);
    sp1C = temp_f2;
    Math_StepToF(&this->unk1C8, 0.0f, 6.0f);
    temp_f0 = this->unk454;
    if ((temp_f0 < 0.0f) || (this->actor.xzDistToPlayer < 750.0f) || (this->unk18C == 1)) {
        func_80B08C1C((bitwise BossHakugin *) 0.0f, this);
        return;
    }
    if ((this->unk2624 == 0) && (this->unk1C8 < 0.1f) && (temp_f2 < 400.0f) && (temp_f0 > 0.0f)) {
        func_80B09DFC(0.0f, this);
        return;
    }
    if ((temp_f2 > 400.0f) && ((globalCtx->gameplayFrames & 0xF) == 0xF)) {
        func_80B06C08((bitwise Actor *) 0.0f, this);
        return;
    }
    temp_v0 = this->unk19C;
    if ((s32) temp_v0 > 0) {
        this->unk19C = temp_v0 - 1;
        return;
    }
    temp_v0_2 = this->actor.shape.rot.y;
    this->unk1B4 = -(s32) this->unk1B4;
    this->unk1A0 = temp_v0_2;
    this->actor.world.rot.y = temp_v0_2;
    func_80B08C1C((bitwise BossHakugin *) 0.0f, this);
}

void func_80B09DFC(void *arg0) {
    arg0->unk1A8 = 5;
    arg0->unk188 = func_80B09E20;
    arg0->unk1C8 = 0.0f;
}

void func_80B09E20(BossHakugin *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    func_8019F1C0(&this->unk458, 0x314BU);
    if (func_80B0728C(this) != 0) {
        func_80B06600((Actor *) this, &this->unk380, globalCtx);
        func_80B09A94(this, globalCtx);
    }
}

void func_80B09E84(BossHakugin *arg0) {
    s8 temp_a0;

    temp_a0 = arg0->actor.cutscene;
    arg0 = arg0;
    ActorCutscene_SetIntentToPlay((s16) temp_a0);
    if (func_80B0813C == arg0->actionFunc) {
        arg0->unk19C = 1;
    } else {
        arg0->unk19C = 0;
    }
    arg0->actionFunc = func_80B09EDC;
}

void func_80B09EDC(BossHakugin *this, GlobalContext *globalCtx) {
    BossHakugin *temp_a2;
    s8 temp_a0;
    s8 temp_a0_2;

    temp_a0 = this->actor.cutscene;
    this = this;
    temp_a2 = this;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        temp_a0_2 = temp_a2->actor.cutscene;
        this = temp_a2;
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0_2, (Actor *) temp_a2);
        if (this->actor.colChkInfo.health == 0) {
            func_80B09F7C(this);
            return;
        }
        if (this->unk19C == 1) {
            func_80B0825C(this);
            return;
        }
        func_80B07EEC((Actor *) this, globalCtx, this);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a2->actor.cutscene);
}

void func_80B09F7C(BossHakugin *arg0) {
    s16 sp36;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0;
    s32 temp_t8;
    u8 temp_v0_2;
    s32 phi_v0;

    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06013828, 1.3f, 0.0f, 0.0f, (u8) 1, -3.0f);
    temp_f2 = arg0->actor.world.pos.z;
    arg0->unk1AC = ActorCutscene_GetCurrentCamera((s16) arg0->actor.cutscene);
    if ((temp_f2 >= 0.0f) && (arg0->actor.world.pos.x >= 0.0f)) {
        arg0->unk19E = -0x4000;
    } else {
        temp_f0 = arg0->actor.world.pos.x;
        if ((temp_f2 >= 0.0f) && (temp_f0 < 0.0f)) {
            arg0->unk19E = -0x8000;
        } else if ((temp_f0 >= 0.0f) && (temp_f2 < 0.0f)) {
            arg0->unk19E = 0;
        } else {
            arg0->unk19E = 0x4000;
        }
    }
    if (arg0->unk1B4 == 1) {
        arg0->unk19E += -0x4000;
    }
    temp_v0 = arg0->unk19E;
    temp_f0_2 = (f32) arg0->unk1B4;
    if (((s32) temp_v0 >= 0x6001) || ((s32) temp_v0 < -0x6000)) {
        arg0->unk38C = temp_f0_2 * -1200.0f;
        arg0->unk394 = 1200.0f;
        arg0->unk390 = (temp_f0_2 * 80.0f) + -240.0f + 60.0f;
    } else if (((s32) temp_v0 < 0x2000) && ((s32) temp_v0 >= -0x1FFF)) {
        arg0->unk394 = -1200.0f;
        arg0->unk390 = 60.0f;
        arg0->unk38C = temp_f0_2 * 1200.0f;
    } else if ((s32) temp_v0 >= 0x2000) {
        arg0->unk38C = -1200.0f;
        arg0->unk394 = temp_f0_2 * -1200.0f;
        arg0->unk390 = (80.0f * temp_f0_2) + -80.0f + 60.0f;
    } else {
        arg0->unk38C = 1200.0f;
        arg0->unk394 = temp_f0_2 * 1200.0f;
        arg0->unk390 = (-160.0f * temp_f0_2) + -160.0f + 60.0f;
    }
    arg0->unk1C8 = 0.0f;
    arg0->unk1A6 = 0;
    func_8016566C(0.0f, 0x8C);
    sp36 = Rand_S16Offset(0x800, 0x800);
    phi_v0 = 1;
    if (Rand_ZeroOne() < 0.5f) {
        phi_v0 = -1;
    }
    arg0->unk1A2 = phi_v0 * sp36;
    func_801A89A8(0x100100FF);
    temp_v0_2 = arg0->unk192;
    arg0->unk19C = 0x12;
    arg0->actor.home.rot.y = arg0->actor.shape.rot.y;
    if ((temp_v0_2 == 2) || (temp_v0_2 == 3)) {
        arg0->unk192 = 4;
        arg0->unk1AA = 0;
    }
    temp_f2_2 = arg0->actor.speedXZ;
    temp_t8 = (s32) Rand_ZeroFloat(6144.0f);
    arg0->unk376 = 0;
    arg0->unk378 = 0;
    arg0->actor.flags &= -2;
    arg0->unk1AE = (s16) temp_t8;
    if (temp_f2_2 < 16.0f) {
        arg0->actor.speedXZ = 16.0f;
    } else {
        arg0->actor.speedXZ = temp_f2_2;
    }
    arg0->actionFunc = func_80B0A2A4;
}

void func_80B0A2A4(BossHakugin *this, GlobalContext *globalCtx) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_v0;
    s32 phi_v0;

    Math_StepToF(&this->actor.speedXZ, 15.0f, 2.0f);
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    this->unk18D = 0xA;
    this->unk18E = 0xA;
    this->unk18F = 0xA;
    func_80B07450((Actor *) this, (s16) globalCtx);
    Math_SmoothStepToS(&this->actor.home.rot.y, this->unk1A0, 5, 0x800, (s16) 0x100);
    this->unk19C += -1;
    temp_v0 = this->unk1A2;
    this->actor.shape.rot.y = (s32) (sin_rad((f32) this->unk19C * 0.17453294f) * (f32) temp_v0) + this->actor.home.rot.y;
    if (this->unk19C == 0) {
        if ((s32) temp_v0 > 0) {
            this->unk1A2 = (s16) -Rand_S16Offset(0x800, 0x800);
        } else {
            this->unk1A2 = Rand_S16Offset(0x800, 0x800);
        }
        this->unk19C = 0x12;
        this->unk1AE = (s16) (s32) Rand_ZeroFloat(6144.0f);
    }
    sp2C = Math_SinS(this->unk1AE);
    this->unk378 = (s16) (s32) (sin_rad((f32) this->unk19C * 0.34906587f) * (8192.0f * sp2C));
    sp2C = Math_CosS(this->unk1AE);
    this->unk376 = (s16) (s32) (sin_rad((f32) this->unk19C * 0.34906587f) * (8192.0f * sp2C));
    temp_f0 = sin_rad((f32) this->unk19C * 0.17453294f);
    temp_a0 = this->actor.shape.rot.y;
    this->actor.world.rot.y = temp_a0;
    this->actor.shape.rot.z = (s16) (s32) (temp_f0 * -((f32) this->unk1A2 * 0.3f));
    sp3C = (Math_SinS(temp_a0) * 100.0f) + this->actor.world.pos.x;
    sp40 = this->actor.world.pos.y + 200.0f;
    sp44 = (Math_CosS(this->actor.shape.rot.y) * 100.0f) + this->actor.world.pos.z;
    Play_CameraSetAtEye(globalCtx, this->unk1AC, (Vec3f *) &sp3C, (Vec3f *) &this->unk38C);
    if (this->unk1A0 == this->unk19E) {
        temp_a0_2 = this->actor.shape.rot.y;
        temp_f2 = fabsf(this->actor.world.pos.x);
        temp_f0_2 = fabsf(this->actor.world.pos.z);
        phi_v0 = (s32) temp_a0_2;
        if ((s32) temp_a0_2 < 0) {
            phi_v0 = -(s32) temp_a0_2;
        }
        if (((temp_f2 > 1289.1f) && (temp_f0_2 < 1110.9f) && ((phi_v0 < 0x2000) || (phi_v0 >= 0x6001))) || ((temp_f0_2 > 1289.1f) && (temp_f2 < 1110.9f) && (phi_v0 >= 0x2001) && (phi_v0 < 0x6000))) {
            func_80B0A5EC(1289.1f, this);
        }
    }
}

void func_80B0A5EC(void *arg0) {
    if (arg0->unk1B4 == 1) {
        arg0->unk19E = (s16) (arg0->unk19E - 0x4000);
    } else {
        arg0->unk19E = (s16) (arg0->unk19E + 0x4000);
    }
    arg0->unk188 = func_80B0A638;
    arg0->unk70 = 15.0f;
}

void func_80B0A638(BossHakugin *this, GlobalContext *globalCtx) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s16 sp2A;
    f32 *sp24;
    f32 *temp_a3;
    f32 temp_f6;
    s16 temp_a0;
    s16 temp_v1;
    s32 temp_v0;
    s32 phi_v0;

    SkelAnime_FrameUpdateMatrix(&this->unk144);
    sp3C = (Math_SinS(this->actor.shape.rot.y) * 100.0f) + this->actor.world.pos.x;
    sp40 = this->actor.world.pos.y + 200.0f;
    sp44 = (Math_CosS(this->actor.shape.rot.y) * 100.0f) + this->actor.world.pos.z;
    temp_a0 = this->actor.shape.rot.y - (this->unk1B4 * 0x6000);
    sp2A = temp_a0;
    sp30 = (Math_SinS(temp_a0) * 400.0f) + this->actor.world.pos.x;
    sp34 = this->actor.world.pos.y + 100.0f;
    temp_a3 = &this->unk38C;
    temp_f6 = Math_CosS(temp_a0) * 400.0f;
    sp24 = temp_a3;
    sp38 = temp_f6 + this->actor.world.pos.z;
    Math_Vec3f_StepTo((Vec3f *) temp_a3, (Vec3f *) &sp30, 25.0f);
    Play_CameraSetAtEye(globalCtx, this->unk1AC, (Vec3f *) &sp3C, (Vec3f *) temp_a3);
    this->unk18D = 0xA;
    this->unk18E = 0xA;
    this->unk18F = 0xA;
    func_80B07450((Actor *) this, (s16) globalCtx);
    if ((Math_ScaledStepToS(&this->actor.shape.rot.y, this->unk19E, 0x300) != 0) && ((this->unk1BC <= 189.00002f) || (this->unk1C0 <= 189.00002f))) {
        func_80B0A87C(this);
    } else {
        temp_v0 = this->unk1B4;
        if (((temp_v0 == 1) && (this->unk1BC <= 189.00002f)) || ((temp_v0 == -1) && (this->unk1C0 <= 189.00002f))) {
            temp_v1 = this->unk19E;
            phi_v0 = (s32) temp_v1;
            if ((s32) temp_v1 < 0) {
                phi_v0 = -(s32) temp_v1;
            }
            if (phi_v0 < 0x2000) {
                this->actor.world.pos.z = -1389.0f;
            } else if (phi_v0 >= 0x6001) {
                this->actor.world.pos.z = 1389.0f;
            } else if ((s32) temp_v1 > 0) {
                this->actor.world.pos.x = -1389.0f;
            } else {
                this->actor.world.pos.x = 1389.0f;
            }
        }
    }
    this->actor.world.rot.y = this->actor.shape.rot.y;
}

void func_80B0A87C(BossHakugin *arg0) {
    arg0->unk19C = 0;
    arg0->actor.speedXZ = 0.0f;
    arg0->unk144.animPlaybackSpeed = 0.5f;
    func_80B0D9CC();
    arg0->actionFunc = func_80B0A8C4;
}

void func_80B0A8C4(BossHakugin *this, GlobalContext *globalCtx) {
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    s32 sp60;
    Actor *temp_v0_2;
    Camera *temp_s0_3;
    Camera *temp_s2;
    ColliderJntSphElement *temp_v0;
    f32 *temp_s0_2;
    s16 temp_s0;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_v0_3;
    s32 temp_v1;
    void *temp_s0_4;
    void *temp_s1;
    void *temp_s2_2;
    void *phi_s1;
    s32 phi_s0;
    s32 phi_v0;

    temp_s2 = Play_GetCamera(globalCtx, this->unk1AC);
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    sp60 = (s32) this->unk19C / 6;
    temp_s0 = this->actor.shape.rot.y + (this->unk1B4 * 0x6000);
    sp68 = (Math_SinS(temp_s0) * 500.0f) + this->actor.world.pos.x;
    sp6C = this->actor.world.pos.y + 250.0f;
    temp_s0_2 = &this->unk38C;
    sp70 = (Math_CosS(temp_s0) * 500.0f) + this->actor.world.pos.z;
    Math_Vec3f_StepTo((Vec3f *) temp_s0_2, (Vec3f *) &sp68, 25.0f);
    Play_CameraSetAtEye(globalCtx, this->unk1AC, &temp_s2->at, (Vec3f *) temp_s0_2);
    if (sp60 == 0x1E) {
        temp_s0_3 = Play_GetCamera(globalCtx, 0);
        func_80165690();
        ActorCutscene_Stop((s16) this->actor.cutscene);
        Play_CameraSetAtEye(globalCtx, this->unk1AC, &temp_s0_3->at, &temp_s0_3->eye);
        func_80B05EE0(this, globalCtx);
        func_80B0DFA8(this);
        this->actor.draw = func_80B0E5A4;
        this->actor.update = func_80B0E548;
    } else if ((((s32) this->unk19C % 6) == 0) && (sp60 < 6)) {
        temp_s0_4 = (sp60 * 8) + &D_80B0EB38;
        temp_v0 = &this->unk484.elements[temp_s0_4->unk0];
        temp_v0_2 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 9, (f32) temp_v0->dim.worldSphere.center.x, (f32) temp_v0->dim.worldSphere.center.y, (f32) temp_v0->dim.worldSphere.center.z, (s16) 1, (s16) 0, (s16) 0, (s16) 0);
        if (temp_v0_2 != 0) {
            temp_v0_2->unk1F0 = 0;
        }
        this->unk1B0 &= ~temp_s0_4->unk4;
        if (temp_s0_4 == &D_80B0EB60) {
            func_801A89A8(0x8021);
        }
    }
    temp_v1 = this->unk19C + 3;
    if ((temp_v1 % 6) == 0) {
        temp_v0_3 = (temp_v1 / 6) - 1;
        phi_v0 = temp_v0_3;
        if (temp_v0_3 < 4) {
            temp_s2_2 = (temp_v0_3 * 4) + &D_80B0EB24;
            temp_s0_5 = temp_s2_2->unk0;
            phi_s0 = temp_s0_5;
            if (temp_s0_5 < temp_s2_2->unk4) {
                sp60 = temp_v0_3;
                phi_s1 = this + (temp_s0_5 * 0x28);
                do {
                    temp_s0_6 = phi_s0 + 1;
                    temp_s1 = phi_s1 + 0x28;
                    temp_s1->unk9E0 = (f32) (Rand_ZeroFloat(5.0f) + 5.0f);
                    phi_s1 = temp_s1;
                    phi_s0 = temp_s0_6;
                } while (temp_s0_6 < temp_s2_2->unk4);
                phi_v0 = sp60;
            }
        }
        if (phi_v0 < 6) {
            if ((phi_v0 & 1) != 0) {
                func_8019F1C0(&this->unk458, 0x393EU);
            } else {
                func_8019F1C0(&this->unk458, 0x393DU);
            }
        }
    }
    this->unk19C += 1;
}

void func_80B0AC30(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    s16 temp_a3_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_v1;
    u8 temp_a3;
    void *temp_a2;
    s32 phi_a3;

    temp_a3 = arg0->unk494;
    temp_a2 = arg1->actorCtx.actorList[2].first;
    if (((temp_a3 & 2) != 0) && ((temp_v1 = arg0->unk188, (func_80B091D8 == temp_v1)) || ((temp_a2->unkA74 << 0xC) >= 0))) {
        if ((func_80B091D8 == temp_v1) && ((arg0->unk4A0->unk15 & 2) != 0) && ((temp_a3 & 4) == 0) && (sp2C = temp_a2, (arg1->grabPlayer(arg1, temp_a2, temp_a2, temp_a3) != 0))) {
            func_80B09840(arg0, arg1, temp_a2);
            return;
        }
        if ((arg1->actorCtx.actorList[2].first->unkA74 & 0x1000) != 0) {
            arg1->actorCtx.actorList[2].first->unkAD0 = -5.0f;
            arg1->actorCtx.actorList[2].first->unkB08 = -5.0f;
            temp_v0 = arg1->actorCtx.actorList[2].first->world.rot.y;
            arg1->actorCtx.actorList[2].first->unkB8C = 4;
            arg1->actorCtx.actorList[2].first->unkAD4 = temp_v0;
            arg1->actorCtx.actorList[2].first->home.rot.y = temp_v0;
            arg1->actorCtx.actorList[2].first->shape.rot.y = temp_v0;
            arg1->actorCtx.actorList[2].first->velocity.y = 10.0f;
            arg1->actorCtx.actorList[2].first->unkB0C = (f32) (arg1->actorCtx.actorList[2].first->unkB0C + (-5.0f * 0.05f));
            return;
        }
        if ((arg0->unk494 & 4) == 0) {
            temp_v0_2 = arg0->shape.rot.y;
            temp_a3_2 = arg0->yawTowardsPlayer - temp_v0_2;
            if ((s32) temp_a3_2 > 0) {
                phi_a3 = (temp_v0_2 + (s32) ((f32) temp_a3_2 * 0.5f) + 0x4000) << 0x10;
            } else {
                phi_a3 = ((temp_v0_2 + (s32) ((f32) temp_a3_2 * 0.5f)) - 0x4000) << 0x10;
            }
            func_800B8D50(arg1, arg0, 5.0f, (s16) (phi_a3 >> 0x10), 6.0f, 0U);
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
    }
}

/*
Failed to decompile function func_80B0ADFC:

Label L80B0AF70 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void func_80B0B238(BossHakugin *arg0) {
    Vec3f *temp_s0;
    s32 temp_s2;
    BossHakugin *phi_s1;
    s32 phi_s2;

    phi_s1 = arg0;
    phi_s2 = 0;
    do {
        temp_s0 = phi_s1 + 0x9F8;
        if ((s32) phi_s1->unkA10 >= 0) {
            temp_s0->unk18 = (s16) (temp_s0->unk18 - 1);
            temp_s0->unk10 = (f32) (temp_s0->unk10 + -1.0f);
            Math_Vec3f_Sum(temp_s0, temp_s0 + 0xC, temp_s0);
            if (temp_s0->y < -500.0f) {
                temp_s0->unk18 = -1;
            } else {
                temp_s0->unk1C = (s16) (temp_s0->unk1C + ((Rand_Next() >> 0x17) + 0x700));
                temp_s0->unk1E = (s16) (temp_s0->unk1E + ((Rand_Next() >> 0x17) + 0x900));
                temp_s0->unk20 = (s16) (temp_s0->unk20 + ((Rand_Next() >> 0x17) + 0xB00));
            }
        }
        temp_s2 = phi_s2 + 0x28;
        phi_s1 += 0x28;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x1C20);
}

void func_80B0B34C(BossHakugin *arg0) {
    f32 temp_f0;
    s32 temp_s2;
    f32 *phi_s3;
    BossHakugin *phi_s0;
    void *phi_s1;
    s32 phi_s2;

    phi_s3 = arg0 + 0x9FC;
    phi_s0 = arg0;
    phi_s1 = arg0 + 0x9F8;
    phi_s2 = 0;
    do {
        Math_StepToF(phi_s3, phi_s0->unkA04, phi_s0->unkA08);
        temp_f0 = phi_s1->unk10;
        temp_s2 = phi_s2 + 0x28;
        phi_s3 += 0x28;
        phi_s0 += 0x28;
        phi_s2 = temp_s2;
        if (temp_f0 > 0.0f) {
            phi_s1->unk10 = (f32) (temp_f0 + 6.0f);
        }
        phi_s1 += 0x28;
    } while (temp_s2 != 0x5A0);
}

void func_80B0B3F4(BossHakugin *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    BossHakugin *phi_a3;
    void *phi_a2;
    s32 phi_a0;
    s32 phi_v0;
    BossHakugin *phi_a1;

    phi_a3 = arg0;
    phi_v0 = 0;
    phi_a1 = arg0;
    do {
        temp_v0 = phi_v0 + 1;
        phi_a2 = phi_a1 + 0x14;
        phi_a0 = 0x14;
        phi_v0 = temp_v0;
        if ((s32) phi_a3->unk3168 > 0) {
            temp_v1 = phi_a3 + 0x3158;
            temp_v1->unk12 = (s16) (temp_v1->unk12 - 1);
            temp_v1->unk4 = (f32) (temp_v1->unk4 + 3.5f);
            temp_v1->unkC = (f32) (temp_v1->unkC + 0.003f);
            if ((s32) temp_v1->unk12 < 0) {
                temp_v1->unk10 = (s16) (temp_v1->unk10 - 0xF);
                if ((s32) temp_v1->unk10 < 0) {
                    temp_v1->unk10 = 0;
                }
            }
        }
loop_5:
        temp_a0 = phi_a0 + 0x28;
        temp_v1_2 = phi_a2 + 0x3158;
        phi_a0 = temp_a0;
        if ((s32) phi_a2->unk3168 > 0) {
            temp_v1_2->unk12 = (s16) (temp_v1_2->unk12 - 1);
            temp_v1_2->unk4 = (f32) (temp_v1_2->unk4 + 3.5f);
            temp_v1_2->unkC = (f32) (temp_v1_2->unkC + 0.003f);
            if ((s32) temp_v1_2->unk12 < 0) {
                temp_v1_2->unk10 = (s16) (temp_v1_2->unk10 - 0xF);
                if ((s32) temp_v1_2->unk10 < 0) {
                    temp_v1_2->unk10 = 0;
                }
            }
        }
        temp_v1_3 = phi_a2 + 0x316C;
        if ((s32) phi_a2->unk317C > 0) {
            temp_v1_3->unk12 = (s16) (temp_v1_3->unk12 - 1);
            temp_v1_3->unk4 = (f32) (temp_v1_3->unk4 + 3.5f);
            temp_v1_3->unkC = (f32) (temp_v1_3->unkC + 0.003f);
            if ((s32) temp_v1_3->unk12 < 0) {
                temp_v1_3->unk10 = (s16) (temp_v1_3->unk10 - 0xF);
                if ((s32) temp_v1_3->unk10 < 0) {
                    temp_v1_3->unk10 = 0;
                }
            }
        }
        phi_a2 += 0x28;
        if (temp_a0 != 0x12C) {
            goto loop_5;
        }
        phi_a3 += 0x12C;
        phi_a1 += 0x12C;
    } while (temp_v0 != 5);
}

void func_80B0B548(BossHakugin *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_s2;
    BossHakugin *phi_s1;
    void *phi_s0;
    s32 phi_s2;

    phi_s1 = arg0;
    phi_s0 = arg0 + 0x2618;
    phi_s2 = 0;
    do {
        if ((phi_s1->unk262C.base.atFlags & 2) != 0) {
            arg0->unk18C = 1;
            func_800B8E58(arg1->actorCtx.actorList[2].first, 0x384EU);
            phi_s0->unk24 = (u8) (phi_s0->unk24 & ~2);
        }
        temp_v0 = phi_s0->unkC;
        if ((s32) temp_v0 > 0) {
            phi_s0->unkC = (s16) (temp_v0 - 0x14);
            temp_v0_2 = phi_s0->unkC;
            if ((s32) temp_v0_2 <= 0) {
                phi_s0->unkC = 0;
            } else if ((s32) temp_v0_2 < 0x100) {
                phi_s0->unk12 = (s16) (Rand_Next() >> 0x10);
                if ((s32) phi_s0->unkC >= 0x3D) {
                    CollisionCheck_SetAT(arg1, arg1 + 0x18884, phi_s0 + 0x14);
                }
            }
        }
        temp_s2 = phi_s2 + 0x90;
        phi_s1 += 0x90;
        phi_s0 += 0x90;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0xB40);
}

void func_80B0B660(BossHakugin *arg0, GlobalContext *arg1) {
    s32 spA4;
    CollisionPoly *spA0;
    ? sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    ? sp70;
    Vec3f *sp6C;
    Vec3f *sp60;
    u32 sp5C;
    s32 sp58;
    Vec3f *sp48;
    Vec3f *sp44;
    Vec3f *temp_a0;
    Vec3f *temp_s0;
    Vec3f *temp_s0_4;
    Vec3f *temp_s1;
    Vec3f *temp_t8;
    f32 *temp_a1;
    f32 *temp_s0_2;
    f32 temp_f12;
    s16 temp_s0_3;
    s16 temp_v0_2;
    s16 temp_v0_4;
    s16 temp_v1;
    u8 temp_t8_2;
    u8 temp_v0;
    u8 temp_v0_3;
    Vec3f *phi_f12;
    Vec3f *phi_s0;
    s32 phi_v0;
    s32 phi_s0_2;

    temp_t8 = arg0 + 0x3734;
    spA0 = NULL;
    sp58 = 0;
    sp6C = temp_t8;
    sp48 = temp_t8;
    spA4 = arg1->actorCtx.actorList[2].first;
    temp_v0 = arg0->unk192;
    if (temp_v0 == 2) {
        if (Math_StepToF(arg0 + 0x1B8, 50.0f, 3.5f) != 0) {
            arg0->unk192 = 3;
        }
        goto block_9;
    }
    if (temp_v0 == 3) {
        temp_s0 = spA4 + 0x24;
        temp_f12 = Math3D_DistanceSquared(sp48, temp_s0) * 0.000069444446f * 32.0f * 0.0000958738f;
        phi_f12 = (bitwise Vec3f *) temp_f12;
        if (temp_f12 > 0.7853982f) {
            phi_f12 = (bitwise Vec3f *) 0.7853982f;
        }
        sp60 = phi_f12;
        Math_Vec3f_Diff(temp_s0, sp48, (Vec3f *) &sp70);
        if (func_80B0573C((Vec3f *) &sp70) != 0) {
            func_80B057A4(phi_f12, arg0 + 0x37AC, (bitwise f32) &sp70, phi_f12);
        }
        goto block_9;
    }
    if (temp_v0 == 4) {
block_9:
        temp_a0 = arg0 + 0x464;
        sp44 = temp_a0;
        func_8019F1C0(temp_a0, 0x304CU);
        temp_v0_2 = arg0->unk1AA;
        if ((s32) temp_v0_2 < 0xA) {
            arg0->unk1AA = temp_v0_2 + 1;
        }
        if ((arg0->unk192 == 4) && (arg0->unk1AA == 9)) {
            arg0->unk192 = 0;
            arg0->unk1AA = 0;
            return;
        }
        phi_s0 = arg0 + 0x37A0;
        if ((arg0 + 0x37A0) != sp48) {
            do {
                temp_s1 = phi_s0 - 0xC;
                Math_Vec3f_Copy(phi_s0, temp_s1);
                phi_s0 = temp_s1;
            } while (temp_s1 != sp6C);
        }
        arg0->unk198 += (Rand_Next() >> 0x12) + 0x4000;
        if (arg0->unk192 != 4) {
            temp_v0_3 = arg0->unk37B8.base.atFlags;
            temp_t8_2 = temp_v0_3 & 0xFFFD;
            if ((temp_v0_3 & 2) != 0) {
                arg0->unk37B8.base.atFlags = temp_t8_2;
                arg0->unk192 = 4;
                arg0->unk1AA = 0;
                arg0->unk37B8.base.atFlags = temp_t8_2 & 0xFFFE;
                sp58 = 1;
                func_8019F1C0(sp44, 0x384EU);
            }
            temp_s0_2 = &sp88;
            sp88 = sp48->x + (arg0->unk1B8 * arg0->unk37AC);
            sp8C = sp48->y + (arg0->unk1B8 * arg0->unk37B0);
            sp90 = sp48->z + (arg0->unk1B8 * arg0->unk37B4);
            if (func_800C55C4(arg1 + 0x830, sp48, (Vec3f *) temp_s0_2, (Vec3f *) &sp94, &spA0, 1U, 1U, 1U, 1U, &sp5C) != 0) {
                Math_Vec3f_Copy(sp48, (Vec3f *) &sp94);
                temp_v0_4 = spA0->normal.y;
                phi_s0_2 = 0;
                if (((s32) temp_v0_4 >= -0x6664) && ((s32) temp_v0_4 < 0x3FFF)) {
                    temp_s0_3 = Math_Vec3f_Yaw(sp48, spA4 + 0x24);
                    temp_v1 = temp_s0_3 - Math_FAtan2F((f32) spA0->normal.z * 0.00003051851f, (f32) spA0->normal.x * 0.00003051851f);
                    phi_v0 = (s32) temp_v1;
                    if ((s32) temp_v1 < 0) {
                        phi_v0 = -(s32) temp_v1;
                    }
                    if (phi_v0 >= 0x4001) {
                        phi_s0_2 = 1;
                    }
                }
                if ((arg0->unk192 == 3) && ((phi_s0_2 != 0) || ((s32) spA0->normal.y >= 0x4000))) {
                    arg0->unk192 = 4;
                    arg0->unk1AA = 0;
                    if (sp58 == 0) {
                        func_8019F1C0(sp44, 0x384EU);
                    }
                } else {
                    temp_s0_4 = arg0 + 0x37AC;
                    temp_a1 = &sp7C;
                    sp7C = (f32) spA0->normal.x * 0.00003051851f;
                    sp80 = (f32) spA0->normal.y * 0.00003051851f;
                    sp84 = (f32) spA0->normal.z * 0.00003051851f;
                    func_80179F64(temp_s0_4, (Vec3f *) temp_a1, (Vec3f *) &sp70);
                    Math_Vec3f_Copy(temp_s0_4, (Vec3f *) &sp70);
                }
            } else {
                Math_Vec3f_Copy(sp48, (Vec3f *) temp_s0_2);
            }
            arg0->unk37B8.dim.worldSphere.center.x = (s16) (s32) sp48->x;
            arg0->unk37B8.dim.worldSphere.center.y = (s16) (s32) sp48->y;
            arg0->unk37B8.dim.worldSphere.center.z = (s16) (s32) sp48->z;
            CollisionCheck_SetAT(arg1, arg1 + 0x18884, arg0 + 0x37B8);
        }
        /* Duplicate return node #34. Try simplifying control flow for better match */
    }
}

void BossHakugin_Update(BossHakugin *this, GlobalContext *globalCtx) {
    s16 sp70;
    Actor *sp6C;
    CollisionPoly *sp68;
    ? sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    u32 sp4C;
    PosRot *sp44;
    PosRot *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f14_2;
    s16 temp_s0;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v0_5;
    u8 temp_v0_2;
    u8 temp_v0_4;
    BossHakugin *this = (BossHakugin *) thisx;

    sp6C = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = this->unk19A;
    this->unk190 = 0;
    if (temp_v0 != 0) {
        this->unk19A = temp_v0 - 1;
    }
    if ((func_80B09EDC != this->actionFunc) && (func_80B0ADFC(this, globalCtx) == 0)) {
        func_80B0AC30((Actor *) this, globalCtx);
    }
    func_80B0607C(this, globalCtx);
    temp_a2 = &sp6C->world;
    sp44 = temp_a2;
    Actor_CalcOffsetOrientedToDrawRotation((Actor *) this, (Vec3f *) &this->unk44C, (Vec3f *) temp_a2);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 450.0f, 89.100006f, 0.0f, 0x1DU);
    func_800BE3D0(this, this->actor.shape.rot.y, &sp70);
    Math_ScaledStepToS((s16 *) &this->actor.shape, sp70, 0x100);
    Math_ScaledStepToS(&this->actor.shape.rot.z, sp74, 0x100);
    if (func_80B0A8C4 == this->actionFunc) {
        func_80B0B34C(this);
    } else {
        func_80B0B238(this);
    }
    func_80B0B3F4(this);
    func_80B0B548(this, globalCtx);
    func_80B0B660(this, globalCtx);
    func_80B05B04(this, globalCtx);
    func_80B05CBC(this, sp6C);
    func_80B05D4C(this);
    temp_v0_2 = this->unk484.base.atFlags;
    if (((temp_v0_2 & 1) != 0) && (this->actor.colorFilterTimer == 0)) {
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk484);
    } else {
        this->unk484.base.atFlags = temp_v0_2 & 0xFFFD;
    }
    temp_v0_3 = this->unk1A4;
    if (temp_v0_3 == 0) {
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk484);
    } else {
        this->unk1A4 = temp_v0_3 - 1;
        this->unk484.base.acFlags &= 0xFFFD;
    }
    temp_v0_4 = this->unk484.base.ocFlags1;
    if ((temp_v0_4 & 1) != 0) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk484);
    } else {
        this->unk484.base.ocFlags1 = temp_v0_4 & 0xFFFD;
    }
    if (this->unk1E4 > 0.0f) {
        if (this->unk196 != 0xA) {
            Math_StepToF(&this->unk1E4, 0.0f, 0.05f);
            temp_f0 = (this->unk1E4 + 1.0f) * 1.25f;
            this->unk1DC = temp_f0;
            if (temp_f0 > 2.5f) {
                this->unk1DC = 2.5f;
            } else {
                this->unk1DC = this->unk1DC;
            }
        } else if (Math_StepToF(&this->unk1E0, 2.5f, 0.41666666f) == 0) {
            func_800B9010((Actor *) this, 0x20B2U);
        } else {
            func_80B07B88((Actor *) this, globalCtx);
        }
    }
    if (sp6C->floorHeight < -400.0f) {
        sp68 = NULL;
        temp_f12 = sp6C->world.pos.z;
        if ((fabsf(temp_f12) < 1200.0f) && (temp_f14 = sp6C->world.pos.x, (fabsf(temp_f14) < 1200.0f))) {
            temp_v0_5 = Math_FAtan2F(temp_f12, temp_f14);
            temp_s0 = temp_v0_5;
            sp50 = Math_SinS(temp_v0_5) * 2000.0f;
            sp58 = Math_CosS(temp_s0) * 2000.0f;
        } else {
            if (temp_f12 > 1200.0f) {
                sp58 = 1500.0f;
            } else if (temp_f12 < -1200.0f) {
                sp58 = -1500.0f;
            } else {
                sp58 = temp_f12;
            }
            temp_f14_2 = sp6C->world.pos.x;
            if (temp_f14_2 > 1200.0f) {
                sp50 = 1500.0f;
            } else if (temp_f14_2 < -1200.0f) {
                sp50 = -1500.0f;
            } else {
                sp50 = temp_f14_2;
            }
        }
        sp54 = 100.0f;
        if (func_800C55C4(&globalCtx->colCtx, (Vec3f *) &sp50, (Vec3f *) sp44, (Vec3f *) &sp5C, &sp68, 1U, 1U, 0U, 1U, &sp4C) != 0) {
            Math_Vec3f_Copy((Vec3f *) sp44, (Vec3f *) &sp5C);
            Math_Vec3f_Copy((Vec3f *) &sp6C->home, (Vec3f *) sp44);
            Math_Vec3f_Copy(&sp6C->prevPos, (Vec3f *) sp44);
            temp_f0_2 = sp6C->world.pos.y;
            sp6C->floorHeight = temp_f0_2;
            sp6C->world.pos.y = temp_f0_2 + 1.0f;
            return;
        }
        sp6C->world.pos.y = 1.0f;
        sp6C->world.pos.x = 0.0f;
        sp6C->world.pos.z = -1200.0f;
        Math_Vec3f_Copy((Vec3f *) &sp6C->home, (Vec3f *) sp44);
        Math_Vec3f_Copy(&sp6C->prevPos, (Vec3f *) sp44);
        sp6C->floorHeight = sp6C->world.pos.y;
        /* Duplicate return node #43. Try simplifying control flow for better match */
    }
}

s32 func_80B0C000(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    s32 temp_v0;
    s32 phi_v0;

    if (func_80B0A8C4 == arg5->unk188) {
        if (arg1 == 1) {
            arg3->y -= arg5->shape.yOffset;
        }
        if ((arg5->unk1B0 & (1 << (arg1 + 0x1F))) == 0) {
            *arg2 = NULL;
        }
    }
    if ((arg5->unk190 == 0) && (arg1 == D_80B0EB6C)) {
        SysMatrix_GetStateTranslation(arg5 + (D_80B0EB68 * 0x12C) + (arg5->unk191 * 0x14) + 0x3158);
        temp_v0 = D_80B0EB68 - 1;
        phi_v0 = temp_v0;
        if (temp_v0 < 0) {
            phi_v0 = 4;
        }
        D_80B0EB6C = *(&D_80B0EAB0 + (phi_v0 * 4));
        D_80B0EB68 = phi_v0;
    }
    if (arg1 == 0x10) {
        arg4->z += arg5->unk1A6;
        if (func_80B0A2A4 == arg5->unk188) {
            arg4->z += arg5->unk378;
            arg4->y += arg5->unk376;
        }
    } else if (arg1 == 4) {
        arg4->z += arg5->unk1A6 * 2;
    } else if ((arg1 == 0xA) || (arg1 == 5)) {
        arg4->z -= arg5->unk1A6 * 3;
    }
    return 0;
}

void func_80B0C1BC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    s8 sp3B;
    f32 sp30;
    s16 sp2E;
    s8 *sp24;
    s32 sp20;
    f32 temp_f2;
    s16 temp_a0_2;
    s32 temp_a0;
    s32 temp_v1;
    s8 *temp_t1;
    s8 temp_t0;
    void *temp_a3;
    void *phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;
    s8 *phi_t1;

    temp_a0 = arg1;
    arg1 = arg1;
    Collider_UpdateSpheres(temp_a0, arg4 + 0x484);
    temp_t1 = arg1 + &D_80B0EA8C;
    temp_t0 = *temp_t1;
    phi_t1 = temp_t1;
    if ((s32) temp_t0 >= 0) {
        temp_a3 = arg4->unk4A0;
        phi_v0 = temp_a3;
        phi_v1 = 0;
loop_2:
        if (arg1 == phi_v0->unk3C) {
            sp20 = phi_v1;
            sp3B = temp_t0;
            sp24 = temp_t1;
            Math_Vec3s_ToVec3f(arg4 + (temp_t0 * 0xC) + 0x398, temp_a3 + phi_v1 + 0x30);
            phi_v1_2 = phi_v1;
        } else {
            temp_v1 = phi_v1 + 0x40;
            phi_v0 += 0x40;
            phi_v1 = temp_v1;
            phi_v1_2 = temp_v1;
            if (temp_v1 != 0x4C0) {
                goto loop_2;
            }
        }
        phi_t1 = arg1 + &D_80B0EA8C;
        if (phi_v1_2 == 0x4C0) {
            sp24 = arg1 + &D_80B0EA8C;
            SysMatrix_GetStateTranslation(arg4 + (*temp_t1 * 0xC) + 0x398);
            phi_t1 = arg1 + &D_80B0EA8C;
        }
    }
    if (phi_t1 == &D_80B0EA9C) {
        SysMatrix_GetStateTranslationAndScaledX(3500.0f, arg4 + 0x3C);
        arg4->focus.rot.y = arg4->shape.rot.y;
        if (func_80B0A2A4 != arg4->unk188) {
            func_8018219C(SysMatrix_GetCurrentState(), arg4 + 0x374, 0);
        }
        if (arg4->unk1C8 > 0.0f) {
            temp_a0_2 = 0x12C0 - arg4->unk378;
            sp2E = temp_a0_2;
            sp30 = Math_CosS(temp_a0_2);
            temp_f2 = 60.0f * sp30;
            arg4->unk380 = (f32) (arg4->focus.pos.x - (Math_SinS(arg4->shape.rot.y) * temp_f2));
            sp24 = (bitwise s8 *) temp_f2;
            arg4->unk384 = (f32) (arg4->focus.pos.y - (Math_SinS(temp_a0_2) * 60.0f));
            arg4->unk388 = (f32) (arg4->focus.pos.z - (Math_CosS(arg4->shape.rot.y) * (bitwise f32) sp24));
        }
    }
}

void func_80B0C398(BossHakugin *arg0, GraphicsContext **arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_s2;
    f32 temp_f12;
    f32 temp_f12_2;
    s32 temp_s3;
    s32 temp_s3_2;
    void *temp_s0;
    void *temp_s0_2;
    BossHakugin *phi_s1;
    s32 phi_s3;
    BossHakugin *phi_s1_2;
    s32 phi_s3_2;

    temp_s2 = *arg1;
    temp_v0 = temp_s2->polyOpa.p;
    temp_s2->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w1 = &D_06010488;
    temp_v0->words.w0 = 0xDE000000;
    phi_s1 = arg0;
    phi_s3 = 0;
    phi_s3_2 = 0;
    do {
        temp_s0 = phi_s1 + 0x9F8;
        if (((s32) phi_s1->unkA10 >= 0) && (temp_s0->unk1A == 0)) {
            SysMatrix_SetStateRotationAndTranslation(temp_s0->unk0, temp_s0->unk4, temp_s0->unk8, temp_s0 + 0x1C);
            temp_f12 = temp_s0->unk24;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            temp_v0_2 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDA380003;
            temp_v0_2->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_3 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = (u32) &D_06010500;
            temp_v0_3->words.w0 = 0xDE000000;
        }
        temp_s3 = phi_s3 + 0x28;
        phi_s1 += 0x28;
        phi_s3 = temp_s3;
    } while (temp_s3 < 0x1C20);
    temp_v0_4 = temp_s2->polyOpa.p;
    temp_s2->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_06011100;
    temp_v0_4->words.w0 = 0xDE000000;
    phi_s1_2 = arg0;
    do {
        temp_s0_2 = phi_s1_2 + 0x9F8;
        if (((s32) phi_s1_2->unkA10 >= 0) && (temp_s0_2->unk1A == 1)) {
            SysMatrix_SetStateRotationAndTranslation(temp_s0_2->unk0, temp_s0_2->unk4, temp_s0_2->unk8, temp_s0_2 + 0x1C);
            temp_f12_2 = temp_s0_2->unk24;
            Matrix_Scale(temp_f12_2, temp_f12_2, temp_f12_2, 1);
            temp_v0_5 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDA380003;
            temp_v0_5->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_6 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0_6 + 8;
            temp_v0_6->words.w1 = (u32) &D_06011178;
            temp_v0_6->words.w0 = 0xDE000000;
        }
        temp_s3_2 = phi_s3_2 + 0x28;
        phi_s1_2 += 0x28;
        phi_s3_2 = temp_s3_2;
    } while (temp_s3_2 != 0x1C20);
}

void func_80B0C570(BossHakugin *arg0, GlobalContext *arg1) {
    s32 sp98;
    BossHakugin *sp6C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    f32 temp_f12;
    s16 temp_s7;
    s16 temp_v1;
    s32 temp_s4;
    s32 temp_t1;
    void *temp_s0;
    BossHakugin *phi_s3;
    s32 phi_s4;

    temp_a0 = arg1->state.gfxCtx;
    temp_s2 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDE000000;
    temp_v0->words.w1 = (u32) &D_04051180;
    temp_s7 = func_800DFCDC((arg1 + (arg1->activeCamera * 4))->unk800) + 0x8000;
    temp_v0_2 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFB000000;
    temp_v0_2->words.w1 = 0x1010180;
    sp98 = 0;
    sp6C = arg0;
    do {
        phi_s3 = sp6C;
        phi_s4 = 0;
loop_2:
        temp_s0 = phi_s3 + 0x3158;
        if ((s32) phi_s3->unk3168 > 0) {
            temp_v0_3 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xFA000000;
            temp_v0_3->words.w1 = temp_s0->unk10 & 0xFF;
            temp_v0_4 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDB060020;
            temp_v1 = temp_s0->unk12;
            temp_v0_4->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, temp_v1 * 3, temp_v1 * 0xF, 0x20, 0x40, 1, 0U, 0U, 0x20, 0x20);
            SysMatrix_InsertTranslation(temp_s0->unk0, temp_s0->unk4, temp_s0->unk8, 0);
            Matrix_RotateY(temp_s7, 1U);
            temp_f12 = temp_s0->unkC;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            temp_v0_5 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDA380003;
            temp_v0_5->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
            temp_v0_6 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w1 = (u32) &D_04051238;
            temp_v0_6->words.w0 = 0xDE000000;
        }
        temp_s4 = phi_s4 + 0x14;
        phi_s3 += 0x14;
        phi_s4 = temp_s4;
        if (temp_s4 != 0x12C) {
            goto loop_2;
        }
        temp_t1 = sp98 + 1;
        sp6C += 0x12C;
        sp98 = temp_t1;
    } while (temp_t1 != 5);
}

void func_80B0C7B0(BossHakugin *arg0, GraphicsContext **arg1) {
    Vec3s *sp54;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    f32 temp_f12;
    s32 temp_s2;
    s16 phi_s4;
    s16 phi_s5;
    s32 phi_s2;

    temp_a0 = *arg1;
    temp_s1 = temp_a0;
    func_8012C2DC(temp_a0);
    phi_s4 = -0x1400;
    phi_s2 = -1;
    if (arg0->unk1C8 > 0.0f) {
        temp_v0 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xFB000000;
        temp_v0->words.w1 = (D_80B0EAD0.unk0 << 0x18) | (D_80B0EAD0.unk1 << 0x10) | (D_80B0EAD0.unk2 << 8);
        temp_v0_2 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = (u32) &D_06011208;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = -1;
        temp_v0_3->words.w0 = 0xFA000000;
        sp54 = arg0 + 0x374;
        phi_s5 = -0xC00;
        do {
            SysMatrix_SetStateRotationAndTranslation(arg0->unk380.x, arg0->unk380.y, arg0->unk380.z, sp54);
            Matrix_RotateY(phi_s4, 1U);
            SysMatrix_InsertXRotation_s(phi_s5, 1);
            SysMatrix_InsertZRotation_s(arg0->unk198, 1);
            Matrix_Scale(0.62f, 0.62f, arg0->unk1D0, 1);
            SysMatrix_InsertTranslation(0.0f, 0.0f, arg0->unk1CC * (f32) phi_s2, 1);
            temp_v0_4 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDA380003;
            temp_v0_4->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_5 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w1 = (u32) &D_06011278;
            temp_v0_5->words.w0 = 0xDE000000;
            SysMatrix_InsertZRotation_s(0x4000, 1);
            temp_v0_6 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDA380003;
            temp_v0_6->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_7 = temp_s1->polyXlu.p;
            temp_s2 = phi_s2 + 2;
            temp_s1->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w1 = (u32) &D_06011278;
            temp_v0_7->words.w0 = 0xDE000000;
            phi_s4 += 0x2800;
            phi_s5 += 0x1800;
            phi_s2 = temp_s2;
        } while (temp_s2 != 3);
        temp_v0_8 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_8 + 8;
        temp_v0_8->words.w1 = 0;
        temp_v0_8->words.w0 = 0xE7000000;
        temp_v0_9 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_9 + 8;
        temp_v0_9->words.w0 = 0xFB000000;
        temp_v0_9->words.w1 = (D_80B0EACC.unk0 << 0x18) | (D_80B0EACC.unk1 << 0x10) | (D_80B0EACC.unk2 << 8);
        SysMatrix_InsertTranslation(arg0->unk380.x, arg0->unk380.y, arg0->unk380.z, 0);
        SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
        temp_f12 = arg0->unk1C8;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        SysMatrix_InsertZRotation_s(arg0->unk198, 1);
        temp_v0_10 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_10 + 8;
        temp_v0_10->words.w0 = 0xDA380003;
        temp_v0_10->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_11 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_11 + 8;
        temp_v0_11->words.w0 = 0xDE000000;
        temp_v0_11->words.w1 = (u32) &D_06012ED0;
        temp_v0_12 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_12 + 8;
        temp_v0_12->words.w0 = 0xDE000000;
        temp_v0_12->words.w1 = (u32) &D_06012F40;
    }
}

void func_80B0CAF0(BossHakugin *arg0, GraphicsContext **arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    s32 temp_s4;
    void *temp_s0;
    BossHakugin *phi_s2;
    s32 phi_s4;

    temp_a0 = *arg1;
    temp_s1 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xFB000000;
    temp_v0->words.w1 = (D_80B0EAD0.unk0 << 0x18) | (D_80B0EAD0.unk1 << 0x10) | (D_80B0EAD0.unk2 << 8);
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06011208;
    temp_v0_2->words.w0 = 0xDE000000;
    phi_s2 = arg0;
    phi_s4 = 0;
    do {
        temp_s0 = phi_s2 + 0x2618;
        if (((s32) phi_s2->unk2624 > 0) && ((s32) temp_s0->unkC < 0x100)) {
            SysMatrix_SetStateRotationAndTranslation(temp_s0->unk0, temp_s0->unk4, temp_s0->unk8, temp_s0 + 0xE);
            Matrix_Scale(1.0f, 1.0f, 1.0f, 1);
            temp_v0_3 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xFA000000;
            temp_v0_3->words.w1 = (temp_s0->unkC & 0xFF) | ~0xFF;
            temp_v0_4 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDA380003;
            temp_v0_4->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_5 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w1 = (u32) &D_06011278;
            temp_v0_5->words.w0 = 0xDE000000;
            SysMatrix_InsertZRotation_s(0x4000, 1);
            temp_v0_6 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDA380003;
            temp_v0_6->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_7 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w1 = (u32) &D_06011278;
            temp_v0_7->words.w0 = 0xDE000000;
        }
        temp_s4 = phi_s4 + 0x90;
        phi_s2 += 0x90;
        phi_s4 = temp_s4;
    } while (temp_s4 != 0xB40);
}

void func_80B0CCD8(BossHakugin *arg0, GraphicsContext **arg1) {
    s32 sp50;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    s16 temp_v0;
    s32 temp_s5;
    s32 phi_s0;
    s32 phi_s4;
    void *phi_s1;
    f32 phi_f20;
    s16 phi_s3;
    s32 phi_s0_2;

    if (arg0->unk192 == 4) {
        sp50 = (s32) arg0->unk1AA;
        phi_s0 = 9;
        goto block_4;
    }
    temp_v0 = arg0->unk1AA;
    phi_s0 = temp_v0 - 1;
    if (temp_v0 != 0) {
        sp50 = 0;
block_4:
        temp_a0 = *arg1;
        temp_s2 = temp_a0;
        func_8012C2DC(temp_a0);
        temp_v0_2 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFB000000;
        temp_v0_2->words.w1 = (D_80B0EACC.unk0 << 0x18) | (D_80B0EACC.unk1 << 0x10) | (D_80B0EACC.unk2 << 8);
        temp_v0_3 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = (u32) &D_06012ED0;
        temp_v0_3->words.w0 = 0xDE000000;
        phi_s4 = 0xD7 - (phi_s0 * 0xF);
        phi_f20 = 30.0f - ((f32) (phi_s0 - 1) * 1.5f);
        phi_s3 = arg0->unk198;
        phi_s0_2 = phi_s0;
        if (phi_s0 >= sp50) {
            phi_s1 = arg0 + (phi_s0 * 0xC) + 0x3734;
            do {
                temp_s5 = phi_s0_2 - 1;
                temp_v0_4 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_4 + 8;
                temp_v0_4->words.w0 = 0xFA000000;
                temp_v0_4->words.w1 = (phi_s4 & 0xFF) | ~0xFF;
                SysMatrix_InsertTranslation(phi_s1->unk0, phi_s1->unk4, phi_s1->unk8, 0);
                SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
                Matrix_Scale(phi_f20, phi_f20, phi_f20, 1);
                SysMatrix_InsertZRotation_s(phi_s3, 1);
                temp_v0_5 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_5 + 8;
                temp_v0_5->words.w0 = 0xDA380003;
                temp_v0_5->words.w1 = Matrix_NewMtx(*arg1);
                temp_v0_6 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_6 + 8;
                temp_v0_6->words.w1 = (u32) &D_06012F40;
                temp_v0_6->words.w0 = 0xDE000000;
                phi_s4 += 0xF;
                phi_s1 += -0xC;
                phi_f20 += 1.5f;
                phi_s3 = (s16) (phi_s3 + 0x1000);
                phi_s0_2 = temp_s5;
            } while (temp_s5 >= sp50);
        }
    }
}

void func_80B0CF24(Actor *arg0, GlobalContext *arg1) {
    Gfx *sp50;
    Gfx *sp4C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    u32 temp_v1;

    temp_a0 = arg1->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    func_800B8118(arg0, arg1, 0);
    SysMatrix_InsertTranslation((f32) arg0->unk9AA, (f32) arg0->unk9AC, (f32) arg0->unk9AE, 0);
    Matrix_Scale(4.0f, arg0->unk1D4, 4.0f, 1);
    Matrix_RotateY(0xF00, 1U);
    SysMatrix_InsertXRotation_s(0x500, 1);
    SysMatrix_InsertZRotation_s(-0x500, 1);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp50 = temp_v0;
    sp50->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060020;
    temp_v1 = arg1->gameplayFrames;
    sp4C = temp_v0_2;
    sp4C->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, 0U, temp_v1 & 0xFF, 0x20, 0x10, 1, 0U, (temp_v1 * 2) & 0xFF, 0x40, 0x20);
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v0_3->words.w1 = arg0->unk193 | 0x326400;
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_04050D10;
    temp_v0_4->words.w0 = 0xDE000000;
}

void BossHakugin_Draw(BossHakugin *this, GlobalContext *globalCtx) {
    GraphicsContext *sp40;
    Gfx *sp34;
    MtxF *sp30;
    Gfx *temp_v0;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_a0_2;
    MtxF *temp_a0_3;
    BossHakugin *this = (BossHakugin *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_v0 = temp_a0->polyOpa.d - 0x1000;
    temp_a0->polyOpa.d = temp_v0;
    temp_a0_2 = globalCtx->state.gfxCtx;
    sp34 = temp_v0;
    sp40 = temp_a0_2;
    func_8012C28C(temp_a0_2);
    temp_v1 = sp40->polyOpa.p;
    sp40->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDB060020;
    temp_v1->words.w1 = (u32) D_80B0EA88;
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80B0C000, func_80B0C1BC, (Actor *) this);
    func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk398, 0xF, this->unk1DC, this->unk1E0, this->unk1E4, (u8) (s32) this->unk196);
    temp_a0_3 = &globalCtx->projectionMatrix;
    sp30 = temp_a0_3;
    SkinMatrix_Vec3fMtxFMultXYZ(temp_a0_3, &this->unk380, &this->unk458);
    SkinMatrix_Vec3fMtxFMultXYZ(temp_a0_3, &this->unk3734, &this->unk464);
    if (this->unk190 == 0) {
        func_80B06F48(this, globalCtx);
    }
    this->unk190 = 1;
    if (this->actor.colorFilterTimer != 0) {
        func_800AE5A0(globalCtx);
    }
    sp30 = (MtxF *) func_80B0A8C4;
    if (func_80B0A8C4 == this->actionFunc) {
        func_80B0E5A4((Actor *) this, globalCtx);
    } else {
        func_80B0C398(this, (GraphicsContext **) globalCtx);
    }
    func_80B0C570(this, globalCtx);
    func_80B0C7B0(this, (GraphicsContext **) globalCtx);
    func_80B0CAF0(this, (GraphicsContext **) globalCtx);
    func_80B0CCD8(this, (GraphicsContext **) globalCtx);
    if ((s32) this->unk193 > 0) {
        func_80B0CF24((Actor *) this, globalCtx);
    }
    if (sp30 != this->actionFunc) {
        func_80B0D69C(sp34, this);
        func_80B0D750(sp34, this, globalCtx);
    }
}

void func_80B0D2B8(BossHakugin *arg0, Gfx *arg1, f32 arg2) {
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp6C;
    f32 sp68;
    u8 *sp60;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_f10;
    s32 temp_f8;
    s32 temp_s2;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t1_3;
    s32 temp_t1_4;
    s32 temp_t1_5;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 temp_v1_9;
    u8 *temp_t0;
    u8 temp_v0_2;
    void *temp_v0;
    void *temp_v1;
    s32 phi_s2;
    s32 phi_t1;
    Gfx *phi_a2;
    s32 *phi_a1;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_a0;
    s32 phi_t1_2;
    s32 *phi_a1_2;
    s32 phi_v0_2;
    s32 phi_v1_2;
    s32 phi_a0_2;
    s32 phi_t1_3;
    s32 *phi_a1_3;
    s32 phi_v0_3;
    s32 phi_v1_3;
    s32 phi_a0_3;
    s32 phi_t1_4;
    s32 *phi_a1_4;
    s32 phi_v0_4;
    s32 phi_v1_4;
    s32 phi_a0_4;
    s32 phi_t1_5;
    s32 phi_t0;
    s32 phi_t0_2;
    s32 phi_t0_3;
    s32 phi_t0_4;

    phi_s2 = 0;
    phi_a2 = arg1;
    phi_t1 = -1;
    do {
        if ((arg2 == 0.0f) || (temp_t1 = *(&D_80B0EBFC + (phi_s2 * 4)), phi_t1 = temp_t1, phi_t1 = temp_t1, (temp_t1 >= 0))) {
            temp_v1 = arg0 + (phi_s2 * 0xC) + 0x398;
            temp_t0 = phi_s2 + &D_80B0EC38;
            if (arg2 > 0.0f) {
                temp_v0 = arg0 + (phi_t1 * 0xC);
                temp_f0 = temp_v1->unk0;
                temp_f2 = temp_v1->unk4;
                temp_f12 = temp_v1->unk8;
                sp74 = (temp_f0 + ((temp_v0->unk398 - temp_f0) * arg2)) - arg0->actor.world.pos.x;
                sp78 = ((temp_f2 + ((temp_v0->unk39C - temp_f2) * arg2)) - arg0->actor.world.pos.y) + 76.0f + 30.0f + 30.0f + 600.0f;
                sp7C = (temp_f12 + ((temp_v0->unk3A0 - temp_f12) * arg2)) - arg0->actor.world.pos.z;
            } else {
                sp74 = temp_v1->unk0 - arg0->actor.world.pos.x;
                sp78 = (temp_v1->unk4 - arg0->actor.world.pos.y) + 76.0f + 30.0f + 30.0f + 600.0f;
                sp7C = temp_v1->unk8 - arg0->actor.world.pos.z;
            }
            arg1 = phi_a2;
            sp60 = temp_t0;
            SysMatrix_MultiplyVector3fByState((Vec3f *) &sp74, (Vec3f *) &sp68);
            temp_f0_2 = sp68 * 0.07f;
            temp_f2_2 = sp6C * 0.07f;
            temp_v0_2 = *temp_t0;
            temp_f10 = (s32) temp_f2_2;
            sp6C = temp_f2_2;
            temp_f8 = (s32) (temp_f0_2 + 32.0f);
            sp68 = temp_f0_2;
            temp_t3 = (temp_f10 << 6) & 0xFFFF;
            temp_t2 = temp_f8 & 0xFFFF;
            phi_t1_2 = 0;
            phi_t1_3 = 0;
            phi_t1_4 = 0;
            phi_t1_5 = 0;
            phi_a2 = arg1;
            if (temp_v0_2 == 2) {
                phi_a1 = D_80B0EBC4;
                phi_t0 = -0x180;
                do {
                    temp_a0 = *phi_a1;
                    temp_t1_2 = phi_t1_2 + 1;
                    temp_v1_2 = -temp_a0;
                    phi_v1 = temp_v1_2;
                    phi_t1_2 = temp_t1_2;
                    phi_a0 = temp_a0;
                    phi_t1 = temp_t1_2;
                    if (temp_v1_2 < temp_a0) {
                        phi_v0 = temp_t2 + temp_v1_2 + temp_t3 + phi_t0;
                        do {
                            temp_v1_3 = phi_v1 + 1;
                            phi_v1 = temp_v1_3;
                            if ((phi_v0 >= 0) && (phi_v0 < 0x1000)) {
                                *(arg1 + phi_v0) = 0xFF;
                                phi_a0 = *phi_a1;
                            }
                            phi_v0 += 1;
                        } while (temp_v1_3 < phi_a0);
                    }
                    phi_a1 += 4;
                    phi_t0 += 0x40;
                } while (temp_t1_2 != 0xE);
            } else if (temp_v0_2 == 1) {
                phi_a1_2 = D_80B0EBA4;
                phi_t0_2 = -0x100;
                do {
                    temp_a0_2 = *phi_a1_2;
                    temp_t1_3 = phi_t1_3 + 1;
                    temp_v1_4 = -temp_a0_2;
                    phi_v1_2 = temp_v1_4;
                    phi_t1_3 = temp_t1_3;
                    phi_a0_2 = temp_a0_2;
                    phi_t1 = temp_t1_3;
                    if (temp_v1_4 < temp_a0_2) {
                        phi_v0_2 = temp_t2 + temp_v1_4 + temp_t3 + phi_t0_2;
                        do {
                            temp_v1_5 = phi_v1_2 + 1;
                            phi_v1_2 = temp_v1_5;
                            if ((phi_v0_2 >= 0) && (phi_v0_2 < 0x1000)) {
                                *(arg1 + phi_v0_2) = 0xFF;
                                phi_a0_2 = *phi_a1_2;
                            }
                            phi_v0_2 += 1;
                        } while (temp_v1_5 < phi_a0_2);
                    }
                    phi_a1_2 += 4;
                    phi_t0_2 += 0x40;
                } while (temp_t1_3 != 8);
            } else if (temp_v0_2 == 0) {
                phi_a1_3 = D_80B0EB88;
                phi_t0_3 = -0xC0;
                do {
                    temp_a0_3 = *phi_a1_3;
                    temp_t1_4 = phi_t1_4 + 1;
                    temp_v1_6 = -temp_a0_3;
                    phi_v1_3 = temp_v1_6;
                    phi_t1_4 = temp_t1_4;
                    phi_a0_3 = temp_a0_3;
                    phi_t1 = temp_t1_4;
                    if (temp_v1_6 < temp_a0_3) {
                        phi_v0_3 = temp_t2 + temp_v1_6 + temp_t3 + phi_t0_3;
                        do {
                            temp_v1_7 = phi_v1_3 + 1;
                            phi_v1_3 = temp_v1_7;
                            if ((phi_v0_3 >= 0) && (phi_v0_3 < 0x1000)) {
                                *(arg1 + phi_v0_3) = 0xFF;
                                phi_a0_3 = *phi_a1_3;
                            }
                            phi_v0_3 += 1;
                        } while (temp_v1_7 < phi_a0_3);
                    }
                    phi_a1_3 += 4;
                    phi_t0_3 += 0x40;
                } while (temp_t1_4 != 7);
            } else {
                phi_a1_4 = D_80B0EB70;
                phi_t0_4 = -0x80;
                do {
                    temp_a0_4 = *phi_a1_4;
                    temp_t1_5 = phi_t1_5 + 1;
                    temp_v1_8 = -temp_a0_4;
                    phi_v1_4 = temp_v1_8;
                    phi_t1_5 = temp_t1_5;
                    phi_a0_4 = temp_a0_4;
                    phi_t1 = temp_t1_5;
                    if (temp_v1_8 < temp_a0_4) {
                        phi_v0_4 = temp_t2 + temp_v1_8 + temp_t3 + phi_t0_4;
                        do {
                            temp_v1_9 = phi_v1_4 + 1;
                            phi_v1_4 = temp_v1_9;
                            if ((phi_v0_4 >= 0) && (phi_v0_4 < 0x1000)) {
                                *(arg1 + phi_v0_4) = 0xFF;
                                phi_a0_4 = *phi_a1_4;
                            }
                            phi_v0_4 += 1;
                        } while (temp_v1_9 < phi_a0_4);
                    }
                    phi_a1_4 += 4;
                    phi_t0_4 += 0x40;
                } while (temp_t1_5 != 6);
            }
        }
        temp_s2 = phi_s2 + 1;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0xF);
}

void func_80B0D69C(Gfx *arg0, BossHakugin *arg1) {
    Gfx *temp_v0;
    s16 temp_s0;
    s16 temp_s0_2;
    Gfx *phi_v0;
    s16 phi_s0;
    s16 phi_s0_2;

    phi_v0 = arg0;
    phi_s0 = 0;
    phi_s0_2 = 0;
    do {
        temp_s0 = phi_s0 + 1;
        temp_v0 = phi_v0 + 4;
        temp_v0->unk-4 = 0;
        phi_v0 = temp_v0;
        phi_s0 = temp_s0;
    } while ((s32) temp_s0 < 0x400);
    SysMatrix_SetStateXRotation(1.0f);
    do {
        func_80B0D2B8(arg1, arg0, (f32) phi_s0_2 / 5.0f);
        temp_s0_2 = phi_s0_2 + 1;
        phi_s0_2 = temp_s0_2;
    } while ((s32) temp_s0_2 < 6);
}

void func_80B0D750(u32 arg0, BossHakugin *arg1, GlobalContext *arg2) {
    GraphicsContext *spA0;
    ? sp60;
    Gfx *sp4C;
    CollisionPoly *temp_a0_2;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    f32 temp_f0;
    f32 phi_f0;
    f32 phi_f0_2;

    temp_a0 = arg2->state.gfxCtx;
    spA0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_f0 = (400.0f - arg1->actor.world.pos.y) * 0.0025f;
    phi_f0 = temp_f0;
    if (temp_f0 < 0.0f) {
        phi_f0 = 0.0f;
    }
    phi_f0_2 = phi_f0;
    if (phi_f0 > 1.0f) {
        phi_f0_2 = 1.0f;
    }
    temp_v0 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xFA000000;
    temp_v0->words.w1 = (s32) (phi_f0_2 * 80.0f) & 0xFF;
    temp_v0_2 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0;
    temp_v0_2->words.w0 = 0xFB000000;
    temp_a0_2 = arg1->actor.floorPoly;
    if (temp_a0_2 != 0) {
        spA0 = temp_a0;
        func_800C0094(temp_a0_2, arg1->actor.world.pos.x, arg1->actor.floorHeight, arg1->actor.world.pos.z, (MtxF *) &sp60);
        SysMatrix_SetCurrentState((MtxF *) &sp60);
    }
    spA0 = arg2->state.gfxCtx;
    Matrix_Scale(4.25f, 1.0f, 4.25f, 1);
    temp_v0_3 = arg2->state.gfxCtx->polyOpa.p;
    arg2->state.gfxCtx->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    spA0 = arg2->state.gfxCtx;
    sp4C = temp_v0_3;
    sp4C->words.w1 = Matrix_NewMtx(arg2->state.gfxCtx);
    temp_v0_4 = arg2->state.gfxCtx->polyOpa.p;
    arg2->state.gfxCtx->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_801C5D60;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_5 = arg2->state.gfxCtx->polyOpa.p;
    arg2->state.gfxCtx->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xFD900000;
    temp_v0_5->words.w1 = arg0;
    temp_v0_6 = arg2->state.gfxCtx->polyOpa.p;
    arg2->state.gfxCtx->polyOpa.p = temp_v0_6 + 8;
    temp_v0_6->words.w1 = 0x7098260;
    temp_v0_6->words.w0 = 0xF5900000;
    temp_v0_7 = arg2->state.gfxCtx->polyOpa.p;
    arg2->state.gfxCtx->polyOpa.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = 0;
    temp_v0_7->words.w0 = 0xE6000000;
    temp_v0_8 = arg2->state.gfxCtx->polyOpa.p;
    arg2->state.gfxCtx->polyOpa.p = temp_v0_8 + 8;
    temp_v0_8->words.w1 = 0x77FF100;
    temp_v0_8->words.w0 = 0xF3000000;
    temp_v0_9 = arg2->state.gfxCtx->polyOpa.p;
    arg2->state.gfxCtx->polyOpa.p = temp_v0_9 + 8;
    temp_v0_9->words.w1 = 0;
    temp_v0_9->words.w0 = 0xE7000000;
    temp_v0_10 = arg2->state.gfxCtx->polyOpa.p;
    arg2->state.gfxCtx->polyOpa.p = temp_v0_10 + 8;
    temp_v0_10->words.w0 = 0xF5881000;
    temp_v0_10->words.w1 = 0x98260;
    temp_v0_11 = arg2->state.gfxCtx->polyOpa.p;
    arg2->state.gfxCtx->polyOpa.p = temp_v0_11 + 8;
    temp_v0_11->words.w0 = 0xF2000000;
    temp_v0_11->words.w1 = 0xFC0FC;
    temp_v0_12 = arg2->state.gfxCtx->polyOpa.p;
    arg2->state.gfxCtx->polyOpa.p = temp_v0_12 + 8;
    temp_v0_12->words.w1 = (u32) &D_801C5D80;
    temp_v0_12->words.w0 = 0xDE000000;
}

void func_80B0D9CC(void *arg0) {
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spB4;
    f32 spAC;
    f32 sp84;
    f32 sp80;
    f32 sp68;
    Vec3f *temp_s0;
    Vec3f *temp_s0_2;
    Vec3f *temp_s0_3;
    Vec3f *temp_s0_4;
    Vec3f *temp_s0_5;
    Vec3f *temp_s0_6;
    Vec3f *temp_s0_7;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f14_4;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f26_3;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f28_3;
    f32 temp_f28_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    s32 temp_a0;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 phi_s3;
    Vec3f *phi_s0;
    s32 phi_s1;
    f32 phi_f12;
    Vec3f *phi_s0_2;
    f32 phi_f14;
    s32 phi_v1;
    f32 phi_f12_2;
    Vec3f *phi_s0_3;
    f32 phi_f14_2;
    s32 phi_v1_2;
    s32 phi_v1_3;
    Vec3f *phi_s0_4;
    f32 phi_f26;
    Vec3f *phi_s0_5;
    f32 phi_f28;
    s32 phi_v1_4;
    f32 phi_f26_2;
    Vec3f *phi_s0_6;
    f32 phi_f28_2;
    s32 phi_v1_5;
    s32 phi_v1_6;
    Vec3f *phi_s0_7;
    void *phi_s1_2;
    s32 phi_s2;
    Vec3f *phi_s0_8;

    temp_f28 = Math_SinS(arg0->unkBE) * 65.0f;
    temp_f30 = Math_CosS(arg0->unkBE) * 65.0f;
    spAC = Math_SinS(arg0->unkC0) * 65.0f;
    spB4 = temp_f28;
    sp84 = 2.3076923f * temp_f28;
    sp80 = 2.3076923f * temp_f30;
    phi_s3 = 4;
    phi_s0 = arg0 + 0x9F8;
    phi_s1 = 0xF;
loop_1:
    temp_f24 = (f32) phi_s3;
    temp_a1 = &spC8;
    spC8 = (arg0->unk24 - (temp_f24 * spB4)) + sp84;
    spCC = arg0->unk28 + (85.0f * (f32) (4 - phi_s3)) + 20.0f;
    spD0 = (arg0->unk2C - (temp_f24 * temp_f30)) + sp80;
    temp_f22 = ((temp_f24 * 4.5f) + 22.0f) * 0.001f;
    phi_s0->unk24 = temp_f22;
    Math_Vec3f_Copy(phi_s0, (Vec3f *) temp_a1);
    temp_a0 = phi_s1 >> 1;
    spB4 = spB4;
    if (temp_a0 != 0) {
        temp_s0 = phi_s0 + 0x28;
        temp_a1_2 = temp_a0 & 3;
        temp_f28_2 = temp_f30 + spB4;
        temp_f26 = temp_f24 / (f32) temp_a0;
        sp68 = spB4 - temp_f30;
        temp_f18 = temp_f28_2 * temp_f26;
        temp_f20 = (temp_f30 - spB4) * temp_f26;
        phi_s0_2 = temp_s0;
        phi_v1 = 0;
        phi_s0_3 = temp_s0;
        phi_v1_2 = 0;
        phi_v1_3 = 0;
        phi_s0_4 = temp_s0;
        phi_s0_8 = temp_s0;
        if (temp_a0 > 0) {
            if (temp_a1_2 != 0) {
                temp_f16 = temp_f24 * spAC;
                temp_v0 = temp_a1_2 - 1;
                temp_f14 = (f32) (temp_a0 - 0);
                temp_f12 = (temp_f14 * temp_f18) + spC8;
                phi_f12 = temp_f12;
                phi_f14 = temp_f14;
                phi_f12_2 = temp_f12;
                phi_f14_2 = temp_f14;
                if (temp_v0 != 0) {
                    do {
                        phi_s0_2->x = phi_f12;
                        temp_v1 = phi_v1 + 1;
                        temp_s0_2 = phi_s0_2 + 0x28;
                        temp_f14_2 = (f32) (temp_a0 - temp_v1);
                        temp_s0_2->unk-24 = (f32) (temp_f16 + spCC);
                        temp_s0_2->unk-4 = temp_f22;
                        temp_s0_2->unk-20 = (f32) ((phi_f14 * temp_f20) + spD0);
                        temp_f12_2 = (temp_f14_2 * temp_f18) + spC8;
                        phi_f12 = temp_f12_2;
                        phi_s0_2 = temp_s0_2;
                        phi_f14 = temp_f14_2;
                        phi_v1 = temp_v1;
                        phi_f12_2 = temp_f12_2;
                        phi_s0_3 = temp_s0_2;
                        phi_f14_2 = temp_f14_2;
                        phi_v1_2 = temp_v1;
                    } while (temp_v0 != temp_v1);
                }
                phi_s0_3->x = phi_f12_2;
                temp_v1_2 = phi_v1_2 + 1;
                temp_s0_3 = phi_s0_3 + 0x28;
                temp_s0_3->unk-24 = (f32) (temp_f16 + spCC);
                temp_s0_3->unk-4 = temp_f22;
                temp_s0_3->unk-20 = (f32) ((phi_f14_2 * temp_f20) + spD0);
                phi_v1_3 = temp_v1_2;
                phi_s0_4 = temp_s0_3;
                phi_s0_8 = temp_s0_3;
                if (temp_v1_2 != temp_a0) {
                    goto block_7;
                }
            } else {
block_7:
                temp_f16_2 = temp_f24 * spAC;
                do {
                    temp_v0_2 = temp_a0 - phi_v1_3;
                    temp_f0 = (f32) temp_v0_2;
                    temp_v1_3 = phi_v1_3 + 4;
                    temp_s0_4 = phi_s0_4 + 0xA0;
                    temp_s0_4->unk-A0 = (f32) ((temp_f0 * temp_f18) + spC8);
                    temp_s0_4->unk-9C = (f32) (temp_f16_2 + spCC);
                    temp_s0_4->unk-7C = temp_f22;
                    temp_f2 = (f32) (temp_v0_2 - 1);
                    temp_s0_4->unk-98 = (f32) ((temp_f0 * temp_f20) + spD0);
                    temp_s0_4->unk-78 = (f32) ((temp_f2 * temp_f18) + spC8);
                    temp_s0_4->unk-74 = (f32) (temp_f16_2 + spCC);
                    temp_s0_4->unk-54 = temp_f22;
                    temp_f12_3 = (f32) (temp_v0_2 - 2);
                    temp_s0_4->unk-70 = (f32) ((temp_f2 * temp_f20) + spD0);
                    temp_s0_4->unk-50 = (f32) ((temp_f12_3 * temp_f18) + spC8);
                    temp_s0_4->unk-4C = (f32) (temp_f16_2 + spCC);
                    temp_s0_4->unk-2C = temp_f22;
                    temp_f14_3 = (f32) (temp_v0_2 - 3);
                    temp_s0_4->unk-48 = (f32) ((temp_f12_3 * temp_f20) + spD0);
                    temp_s0_4->unk-28 = (f32) ((temp_f14_3 * temp_f18) + spC8);
                    temp_s0_4->unk-24 = (f32) (temp_f16_2 + spCC);
                    temp_s0_4->unk-4 = temp_f22;
                    temp_s0_4->unk-20 = (f32) ((temp_f14_3 * temp_f20) + spD0);
                    phi_v1_3 = temp_v1_3;
                    phi_s0_4 = temp_s0_4;
                    phi_s0_8 = temp_s0_4;
                } while (temp_v1_3 != temp_a0);
            }
        }
        temp_a1_3 = temp_a0 & 3;
        temp_f18_2 = sp68 * temp_f26;
        temp_f20_2 = temp_f28_2 * temp_f26;
        phi_s0_5 = phi_s0_8;
        phi_v1_4 = 0;
        phi_s0_6 = phi_s0_8;
        phi_v1_5 = 0;
        phi_v1_6 = 0;
        phi_s0_7 = phi_s0_8;
        phi_s0 = phi_s0_8;
        if (temp_a0 > 0) {
            temp_f16_3 = temp_f24 * spAC;
            if (temp_a1_3 != 0) {
                temp_v0_3 = temp_a1_3 - 1;
                temp_f28_3 = (f32) (temp_a0 - 0);
                temp_f26_2 = (temp_f28_3 * temp_f18_2) + spC8;
                phi_f26 = temp_f26_2;
                phi_f28 = temp_f28_3;
                phi_f26_2 = temp_f26_2;
                phi_f28_2 = temp_f28_3;
                if (temp_v0_3 != 0) {
                    do {
                        phi_s0_5->x = phi_f26;
                        temp_v1_4 = phi_v1_4 + 1;
                        temp_s0_5 = phi_s0_5 + 0x28;
                        temp_f28_4 = (f32) (temp_a0 - temp_v1_4);
                        temp_s0_5->unk-24 = (f32) (spCC - temp_f16_3);
                        temp_s0_5->unk-4 = temp_f22;
                        temp_s0_5->unk-20 = (f32) ((phi_f28 * temp_f20_2) + spD0);
                        temp_f26_3 = (temp_f28_4 * temp_f18_2) + spC8;
                        phi_f26 = temp_f26_3;
                        phi_s0_5 = temp_s0_5;
                        phi_f28 = temp_f28_4;
                        phi_v1_4 = temp_v1_4;
                        phi_f26_2 = temp_f26_3;
                        phi_s0_6 = temp_s0_5;
                        phi_f28_2 = temp_f28_4;
                        phi_v1_5 = temp_v1_4;
                    } while (temp_v0_3 != temp_v1_4);
                }
                phi_s0_6->x = phi_f26_2;
                temp_v1_5 = phi_v1_5 + 1;
                temp_s0_6 = phi_s0_6 + 0x28;
                temp_s0_6->unk-24 = (f32) (spCC - temp_f16_3);
                temp_s0_6->unk-4 = temp_f22;
                temp_s0_6->unk-20 = (f32) ((phi_f28_2 * temp_f20_2) + spD0);
                phi_v1_6 = temp_v1_5;
                phi_s0_7 = temp_s0_6;
                phi_s0 = temp_s0_6;
                if (temp_v1_5 != temp_a0) {
                    goto loop_15;
                }
            } else {
                do {
loop_15:
                    temp_v0_4 = temp_a0 - phi_v1_6;
                    temp_f0_2 = (f32) temp_v0_4;
                    temp_v1_6 = phi_v1_6 + 4;
                    temp_s0_7 = phi_s0_7 + 0xA0;
                    temp_s0_7->unk-A0 = (f32) ((temp_f0_2 * temp_f18_2) + spC8);
                    temp_s0_7->unk-9C = (f32) (spCC - temp_f16_3);
                    temp_s0_7->unk-7C = temp_f22;
                    temp_f2_2 = (f32) (temp_v0_4 - 1);
                    temp_s0_7->unk-98 = (f32) ((temp_f0_2 * temp_f20_2) + spD0);
                    temp_s0_7->unk-78 = (f32) ((temp_f2_2 * temp_f18_2) + spC8);
                    temp_s0_7->unk-74 = (f32) (spCC - temp_f16_3);
                    temp_s0_7->unk-54 = temp_f22;
                    temp_f12_4 = (f32) (temp_v0_4 - 2);
                    temp_s0_7->unk-70 = (f32) ((temp_f2_2 * temp_f20_2) + spD0);
                    temp_s0_7->unk-50 = (f32) ((temp_f12_4 * temp_f18_2) + spC8);
                    temp_s0_7->unk-4C = (f32) (spCC - temp_f16_3);
                    temp_s0_7->unk-2C = temp_f22;
                    temp_f14_4 = (f32) (temp_v0_4 - 3);
                    temp_s0_7->unk-48 = (f32) ((temp_f12_4 * temp_f20_2) + spD0);
                    temp_s0_7->unk-28 = (f32) ((temp_f14_4 * temp_f18_2) + spC8);
                    temp_s0_7->unk-24 = (f32) (spCC - temp_f16_3);
                    temp_s0_7->unk-4 = temp_f22;
                    temp_s0_7->unk-20 = (f32) ((temp_f14_4 * temp_f20_2) + spD0);
                    phi_v1_6 = temp_v1_6;
                    phi_s0_7 = temp_s0_7;
                    phi_s0 = temp_s0_7;
                } while (temp_v1_6 != temp_a0);
            }
        }
        temp_s3 = phi_s3 - 1;
        phi_s3 = temp_s3;
        phi_s1 += -4;
        if (temp_s3 > 0) {
            goto loop_1;
        }
    }
    phi_s1_2 = arg0 + 0x9F8;
    phi_s2 = 0;
    do {
        phi_s1_2->unk24 = (f32) (phi_s1_2->unk24 + (Rand_ZeroFloat(5.0f) * 0.001f));
        phi_s1_2->unk1C = (s16) (Rand_Next() >> 0x10);
        phi_s1_2->unk1E = (s16) (Rand_Next() >> 0x10);
        temp_f0_3 = phi_s1_2->unk4;
        temp_s2 = phi_s2 + 0x28;
        phi_s1_2->unk20 = (s16) (Rand_Next() >> 0x10);
        phi_s1_2->unk10 = 0.0f;
        phi_s1_2->unk4 = (f32) (temp_f0_3 + 850.0f);
        phi_s1_2->unkC = temp_f0_3;
        phi_s1_2 += 0x28;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x5A0);
}

void *func_80B0DFA8(BossHakugin *arg0) {
    f32 temp_f18;
    f32 temp_f18_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_v0;
    void *temp_a1;
    void *temp_a1_10;
    void *temp_a1_11;
    void *temp_a1_12;
    void *temp_a1_13;
    void *temp_a1_14;
    void *temp_a1_15;
    void *temp_a1_16;
    void *temp_a1_17;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_a1_5;
    void *temp_a1_6;
    void *temp_a1_7;
    void *temp_a1_8;
    void *temp_a1_9;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_a3_3;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t1;
    void *temp_t1_2;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;
    f32 phi_f18;
    s32 phi_a2;
    void *phi_v1;
    s32 phi_v0;
    f32 phi_f18_2;
    s32 phi_a2_2;
    void *phi_v1_2;
    s32 phi_v0_2;
    s32 phi_a2_3;
    void *phi_v0_3;

    temp_a1 = arg0->unk484.elements;
    temp_a3 = arg0 + 0x50;
    temp_a1->dim.worldSphere.center.x = (s16) (s32) arg0->unk9F8;
    temp_a1->dim.worldSphere.center.y = (s16) (s32) arg0->unk9FC;
    temp_a1->dim.worldSphere.center.z = (s16) (s32) arg0->unkA00;
    temp_a1->info.bumperFlags &= 0xFFBF;
    temp_a1->info.elemType = 0;
    temp_a1->info.bumper.dmgFlags = 0xF3CFBBFF;
    temp_a1->dim.worldSphere.radius = (s16) (s32) (arg0->unkA1C * 3000.0f);
    temp_a1_2 = arg0->unk484.elements;
    temp_a1_3 = temp_a1_2 + 0x40;
    temp_a1_3->unk30 = (s16) (s32) temp_a3->unk9F8;
    temp_a1_3->unk32 = (s16) (s32) temp_a3->unk9FC;
    temp_a1_3->unk34 = (s16) (s32) temp_a3->unkA00;
    temp_a1_3->unk16 = (s8) (temp_a1_2->unk56 & 0xFFBF);
    temp_a1_3->unk14 = 0;
    temp_a1_3->unk8 = 0xF3CFBBFFU;
    temp_a1_3->unk36 = (s16) (s32) (temp_a3->unkA1C * 3000.0f);
    temp_v1 = arg0 + (2 * 2 * 0x28);
    temp_f18 = temp_v1->unk9F8;
    phi_f18 = temp_f18;
    phi_a2 = 0x80;
    phi_v1 = temp_v1;
    phi_v0 = 2;
    phi_f18_2 = temp_f18;
    phi_a2_2 = 0x80;
    phi_v1_2 = temp_v1;
    phi_v0_2 = 2;
    if (2 != 0xE) {
        do {
            temp_a1_4 = arg0->unk484.elements + phi_a2;
            temp_a1_4->unk30 = (s16) (s32) phi_f18;
            temp_a1_4->unk32 = (s16) (s32) phi_v1->unk9FC;
            temp_a1_4->unk34 = (s16) (s32) phi_v1->unkA00;
            temp_a1_4->unk8 = 0xF3CFBBFFU;
            temp_a1_4->unk16 = (u8) (temp_a1_4->unk16 & ~0x40);
            temp_a1_4->unk14 = 0;
            temp_a1_4->unk36 = (s16) (s32) (phi_v1->unkA1C * 3000.0f);
            temp_a1_5 = arg0->unk484.elements + phi_a2;
            temp_a1_6 = temp_a1_5 + 0x40;
            temp_a3_2 = arg0 + ((phi_v0 + 1) * 2 * 0x28);
            temp_a1_6->unk30 = (s16) (s32) temp_a3_2->unk9F8;
            temp_a1_6->unk32 = (s16) (s32) temp_a3_2->unk9FC;
            temp_a1_6->unk34 = (s16) (s32) temp_a3_2->unkA00;
            temp_a1_6->unk8 = 0xF3CFBBFFU;
            temp_a1_6->unk16 = (s8) (temp_a1_5->unk56 & ~0x40);
            temp_a1_6->unk14 = 0;
            temp_a1_6->unk36 = (s16) (s32) (temp_a3_2->unkA1C * 3000.0f);
            temp_a1_7 = arg0->unk484.elements + phi_a2;
            temp_a1_8 = temp_a1_7 + 0x80;
            temp_t0 = arg0 + ((phi_v0 + 2) * 2 * 0x28);
            temp_a1_8->unk30 = (s16) (s32) temp_t0->unk9F8;
            temp_a1_8->unk32 = (s16) (s32) temp_t0->unk9FC;
            temp_a1_8->unk34 = (s16) (s32) temp_t0->unkA00;
            temp_a1_8->unk8 = 0xF3CFBBFFU;
            temp_a1_8->unk16 = (s8) (temp_a1_7->unk96 & ~0x40);
            temp_a1_8->unk14 = 0;
            temp_a1_8->unk36 = (s16) (s32) (temp_t0->unkA1C * 3000.0f);
            temp_a1_9 = arg0->unk484.elements + phi_a2;
            temp_v0 = phi_v0 + 4;
            temp_a1_10 = temp_a1_9 + 0xC0;
            temp_a2 = phi_a2 + 0x100;
            temp_t1 = arg0 + ((phi_v0 + 3) * 2 * 0x28);
            temp_a1_10->unk30 = (s16) (s32) temp_t1->unk9F8;
            temp_a1_10->unk32 = (s16) (s32) temp_t1->unk9FC;
            temp_a1_10->unk34 = (s16) (s32) temp_t1->unkA00;
            temp_a1_10->unk16 = (s8) (temp_a1_9->unkD6 & ~0x40);
            temp_a1_10->unk8 = 0xF3CFBBFFU;
            temp_a1_10->unk14 = 0;
            temp_v1_2 = arg0 + (temp_v0 * 2 * 0x28);
            temp_a1_10->unk36 = (s16) (s32) (temp_t1->unkA1C * 3000.0f);
            temp_f18_2 = temp_v1_2->unk9F8;
            phi_f18 = temp_f18_2;
            phi_a2 = temp_a2;
            phi_v1 = temp_v1_2;
            phi_v0 = temp_v0;
            phi_f18_2 = temp_f18_2;
            phi_a2_2 = temp_a2;
            phi_v1_2 = temp_v1_2;
            phi_v0_2 = temp_v0;
        } while (temp_v0 != 0xE);
    }
    temp_a1_11 = arg0->unk484.elements + phi_a2_2;
    temp_a1_11->unk30 = (s16) (s32) phi_f18_2;
    temp_a1_11->unk32 = (s16) (s32) phi_v1_2->unk9FC;
    temp_a1_11->unk34 = (s16) (s32) phi_v1_2->unkA00;
    temp_a1_11->unk16 = (u8) (temp_a1_11->unk16 & ~0x40);
    temp_a1_11->unk8 = 0xF3CFBBFFU;
    temp_a1_11->unk14 = 0;
    temp_a1_11->unk36 = (s16) (s32) (phi_v1_2->unkA1C * 3000.0f);
    temp_a1_12 = arg0->unk484.elements + phi_a2_2;
    temp_a1_13 = temp_a1_12 + 0x40;
    temp_a3_3 = arg0 + ((phi_v0_2 + 1) * 2 * 0x28);
    temp_a1_13->unk30 = (s16) (s32) temp_a3_3->unk9F8;
    temp_a1_13->unk32 = (s16) (s32) temp_a3_3->unk9FC;
    temp_a1_13->unk34 = (s16) (s32) temp_a3_3->unkA00;
    temp_a1_13->unk16 = (s8) (temp_a1_12->unk56 & ~0x40);
    temp_a1_13->unk14 = 0;
    temp_a1_13->unk8 = 0xF3CFBBFFU;
    temp_a1_13->unk36 = (s16) (s32) (temp_a3_3->unkA1C * 3000.0f);
    temp_a1_14 = arg0->unk484.elements + phi_a2_2;
    temp_a1_15 = temp_a1_14 + 0x80;
    temp_t0_2 = arg0 + ((phi_v0_2 + 2) * 2 * 0x28);
    temp_a1_15->unk30 = (s16) (s32) temp_t0_2->unk9F8;
    temp_a1_15->unk32 = (s16) (s32) temp_t0_2->unk9FC;
    temp_a1_15->unk34 = (s16) (s32) temp_t0_2->unkA00;
    temp_a1_15->unk16 = (s8) (temp_a1_14->unk96 & ~0x40);
    temp_a1_15->unk14 = 0;
    temp_a1_15->unk8 = 0xF3CFBBFFU;
    temp_a1_15->unk36 = (s16) (s32) (temp_t0_2->unkA1C * 3000.0f);
    temp_a1_16 = arg0->unk484.elements + phi_a2_2;
    temp_a1_17 = temp_a1_16 + 0xC0;
    temp_a2_2 = phi_a2_2 + 0x100;
    temp_t1_2 = arg0 + ((phi_v0_2 + 3) * 2 * 0x28);
    temp_a1_17->unk30 = (s16) (s32) temp_t1_2->unk9F8;
    temp_a1_17->unk32 = (s16) (s32) temp_t1_2->unk9FC;
    temp_a1_17->unk34 = (s16) (s32) temp_t1_2->unkA00;
    temp_a1_17->unk16 = (s8) (temp_a1_16->unkD6 & ~0x40);
    temp_a1_17->unk14 = 0;
    temp_a1_17->unk8 = 0xF3CFBBFFU;
    temp_a1_17->unk36 = (s16) (s32) (temp_t1_2->unkA1C * 3000.0f);
    phi_a2_3 = temp_a2_2;
    phi_v0_3 = phi_v0_2 + 4;
    if (temp_a2_2 < 0x4C0) {
        do {
            temp_v0_2 = arg0->unk484.elements + phi_a2_3;
            temp_v0_2->unk16 = (u8) (temp_v0_2->unk16 & ~1);
            temp_v0_3 = arg0->unk484.elements + phi_a2_3;
            temp_a2_3 = phi_a2_3 + 0x40;
            temp_v0_3->unk17 = (u8) (temp_v0_3->unk17 & ~1);
            phi_a2_3 = temp_a2_3;
            phi_v0_3 = temp_v0_3;
        } while (temp_a2_3 < 0x4C0);
    }
    arg0->unk484.base.colType = 0xC;
    return phi_v0_3;
}

void func_80B0E548(Actor *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp1C;
    Collider *sp18;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;

    func_80B0DFA8((BossHakugin *) this);
    temp_a1 = &globalCtx->colChkCtx;
    temp_a2 = this + 0x484;
    sp18 = temp_a2;
    sp1C = temp_a1;
    CollisionCheck_SetAC(globalCtx, temp_a1, temp_a2);
    CollisionCheck_SetOC(globalCtx, temp_a1, temp_a2);
}

void func_80B0E5A4(Actor *this, GlobalContext *globalCtx) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    f32 temp_f12;
    s32 temp_s3;
    Actor *phi_s0;
    Vec3s *phi_s5;
    void *phi_s4;
    s32 phi_s3;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s2 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s2->polyOpa.p;
    temp_s2->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDE000000;
    temp_v0->words.w1 = (u32) &D_06010488;
    phi_s0 = this;
    phi_s5 = this + 0xA14;
    phi_s4 = this + 0x9F8;
    phi_s3 = 0;
    do {
        SysMatrix_SetStateRotationAndTranslation(phi_s0->unk9F8, phi_s0->unk9FC, phi_s0->unkA00, phi_s5);
        temp_f12 = phi_s4->unk24;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        temp_v0_2 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDA380003;
        temp_v0_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_3 = temp_s2->polyOpa.p;
        temp_s3 = phi_s3 + 0x28;
        temp_s2->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = (u32) &D_06010500;
        temp_v0_3->words.w0 = 0xDE000000;
        phi_s0 += 0x28;
        phi_s5 += 0x28;
        phi_s4 += 0x28;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x5A0);
}
