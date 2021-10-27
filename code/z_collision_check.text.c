CRASHED

typedef struct {
    /* 0x00 */ Actor *actor;
    /* 0x04 */ Actor *at;
    /* 0x08 */ Actor *ac;
    /* 0x0C */ Actor *oc;
    /* 0x10 */ u8 atFlags;
    /* 0x11 */ u8 acFlags;
    /* 0x12 */ u8 ocFlags1;
    /* 0x13 */ u8 ocFlags2;
    /* 0x14 */ u8 colType;
    /* 0x15 */ u8 shape;
    /* 0x16 */ Vec3s unk_16;                        /* inferred */
} Collider;                                         /* size = 0x18 */

struct _mips2c_stack_Collider_DestroyBase {};       /* size 0x0 */

struct _mips2c_stack_Collider_DestroyBump {};       /* size 0x0 */

struct _mips2c_stack_Collider_DestroyCylinder {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_DestroyCylinderDim {}; /* size 0x0 */

struct _mips2c_stack_Collider_DestroyInfo {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_DestroyJntSph {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Collider_DestroyJntSphElement {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_DestroyJntSphElementDim {}; /* size 0x0 */

struct _mips2c_stack_Collider_DestroyLine {};       /* size 0x0 */

struct _mips2c_stack_Collider_DestroyQuad {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_DestroyQuadDim {};    /* size 0x0 */

struct _mips2c_stack_Collider_DestroySphere {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_DestroyTouch {};      /* size 0x0 */

struct _mips2c_stack_Collider_DestroyTris {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Collider_DestroyTrisElement {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_DestroyTrisElementDim {}; /* size 0x0 */

struct _mips2c_stack_Collider_FreeJntSph {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Collider_FreeTris {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Collider_InitAndSetCylinder {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_InitAndSetJntSph {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Collider_InitAndSetQuad {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_InitAndSetSphere {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_InitAndSetTris {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Collider_InitBase {};          /* size 0x0 */

struct _mips2c_stack_Collider_InitBump {};          /* size 0x0 */

struct _mips2c_stack_Collider_InitCylinder {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_InitCylinderDim {};   /* size 0x0 */

struct _mips2c_stack_Collider_InitInfo {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_InitJntSph {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_InitJntSphElement {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_InitJntSphElementDim {}; /* size 0x0 */

struct _mips2c_stack_Collider_InitLine {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_InitQuad {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_InitQuadDim {};       /* size 0x0 */

struct _mips2c_stack_Collider_InitSphere {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_InitTouch {};         /* size 0x0 */

struct _mips2c_stack_Collider_InitTris {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_InitTrisElement {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_InitTrisElementDim {}; /* size 0x0 */

struct _mips2c_stack_Collider_QuadSetNearestAC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0x10];
};                                                  /* size = 0x30 */

struct _mips2c_stack_Collider_ResetACBase {};       /* size 0x0 */

struct _mips2c_stack_Collider_ResetACInfo {};       /* size 0x0 */

struct _mips2c_stack_Collider_ResetATBase {};       /* size 0x0 */

struct _mips2c_stack_Collider_ResetATInfo {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_ResetATInfoUnk {};    /* size 0x0 */

struct _mips2c_stack_Collider_ResetCylinderAC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_ResetCylinderAT {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_ResetCylinderOC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_ResetJntSphAC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Collider_ResetJntSphAT {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Collider_ResetJntSphElementAC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_ResetJntSphElementAT {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_ResetJntSphElementOC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_ResetJntSphOC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Collider_ResetLineOC {};       /* size 0x0 */

struct _mips2c_stack_Collider_ResetOCBase {};       /* size 0x0 */

struct _mips2c_stack_Collider_ResetOCInfo {};       /* size 0x0 */

struct _mips2c_stack_Collider_ResetQuadAC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_ResetQuadACDist {};   /* size 0x0 */

struct _mips2c_stack_Collider_ResetQuadAT {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_ResetQuadOC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_ResetSphereAC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_ResetSphereAT {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_ResetSphereOC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_ResetTrisAC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Collider_ResetTrisAT {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Collider_ResetTrisElementAC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_ResetTrisElementAT {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_ResetTrisElementOC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_ResetTrisOC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Collider_SetBase {};           /* size 0x0 */

struct _mips2c_stack_Collider_SetBaseToActor {};    /* size 0x0 */

struct _mips2c_stack_Collider_SetBaseType1 {};      /* size 0x0 */

struct _mips2c_stack_Collider_SetBump {};           /* size 0x0 */

struct _mips2c_stack_Collider_SetCylinder {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_SetCylinderDim {};    /* size 0x0 */

struct _mips2c_stack_Collider_SetCylinderPosition {}; /* size 0x0 */

struct _mips2c_stack_Collider_SetCylinderToActor {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_SetCylinderType1 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_SetInfo {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Collider_SetJntSph {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Collider_SetJntSphAllocType1 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Collider_SetJntSphElement {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_SetJntSphElementDim {}; /* size 0x0 */

struct _mips2c_stack_Collider_SetJntSphToActor {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Collider_SetLine {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_SetLinePoints {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_SetQuad {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_SetQuadDim {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_SetQuadMidpoints {};  /* size 0x0 */

struct _mips2c_stack_Collider_SetQuadType1 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_SetQuadVertices {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ColliderQuadDim *sp1C;               /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Collider_SetSphere {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_SetTouch {};          /* size 0x0 */

struct _mips2c_stack_Collider_SetTris {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_Collider_SetTrisAllocType1 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_Collider_SetTrisDim {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_SetTrisElement {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_SetTrisElementDim {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_Collider_SetTrisVertices {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_Collider_UpdateCylinder {};    /* size 0x0 */

struct _mips2c_stack_Collider_UpdateSphere {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Collider_UpdateSpheres {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_Collider_UpdateSpheresElement {}; /* size 0x0 */

struct _mips2c_stack_CollisionCheck_AC {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_CollisionCheck_AC_CylVsCyl {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Collider *sp30;                      /* inferred */
    /* 0x34 */ Collider *sp34;                      /* inferred */
    /* 0x38 */ Vec3s *sp38;                         /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0xC];
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad_50[0xC];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ char pad_70[0x8];
};                                                  /* size = 0x78 */

struct _mips2c_stack_CollisionCheck_AC_CylVsJntSph {
    /* 0x00 */ char pad_0[0x70];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad_94[0x4];
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x8];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_CollisionCheck_AC_CylVsQuad {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ u8 *sp30;                            /* inferred */
    /* 0x34 */ Actor **sp34;                        /* inferred */
    /* 0x38 */ Collider *sp38;                      /* inferred */
    /* 0x3C */ Collider *sp3C;                      /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0xC];
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0xC];
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0xC];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0x14];
};                                                  /* size = 0x78 */

struct _mips2c_stack_CollisionCheck_AC_CylVsSphere {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Collider *sp34;                      /* inferred */
    /* 0x38 */ Collider *sp38;                      /* inferred */
    /* 0x3C */ Collider *sp3C;                      /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ char pad_70[0x8];
};                                                  /* size = 0x78 */

struct _mips2c_stack_CollisionCheck_AC_CylVsTris {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0xC];
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad_54[0xC];
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0x18];
};                                                  /* size = 0x78 */

struct _mips2c_stack_CollisionCheck_AC_JntSphVsCyl {
    /* 0x00 */ char pad_0[0x58];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ char pad_84[0xC];
};                                                  /* size = 0x90 */

struct _mips2c_stack_CollisionCheck_AC_JntSphVsJntSph {
    /* 0x00 */ char pad_0[0x60];
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ char pad_84[0x4];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ char pad_90[0xC];                    /* maybe part of sp8C[4]? */
    /* 0x9C */ Collider *sp9C;                      /* inferred */
};                                                  /* size = 0xA0 */

struct _mips2c_stack_CollisionCheck_AC_JntSphVsQuad {
    /* 0x00 */ char pad_0[0x58];
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0xC];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0x10];
    /* 0x74 */ ? sp74;                              /* inferred */
    /* 0x74 */ char pad_74[0x14];
};                                                  /* size = 0x88 */

struct _mips2c_stack_CollisionCheck_AC_JntSphVsSphere {
    /* 0x00 */ char pad_0[0x64];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ char pad_88[0x4];
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad_94[0xC];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_CollisionCheck_AC_JntSphVsTris {
    /* 0x00 */ char pad_0[0x54];
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad_54[0xC];
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0xC];
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad_6C[0x1C];
};                                                  /* size = 0x88 */

struct _mips2c_stack_CollisionCheck_AC_QuadVsCyl {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Actor **sp30;                        /* inferred */
    /* 0x34 */ u8 *sp34;                            /* inferred */
    /* 0x38 */ Collider *sp38;                      /* inferred */
    /* 0x3C */ Collider *sp3C;                      /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0xC];
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0xC];
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0xC];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0x14];
};                                                  /* size = 0x78 */

struct _mips2c_stack_CollisionCheck_AC_QuadVsJntSph {
    /* 0x00 */ char pad_0[0x60];
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0xC];
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad_6C[0x14];
    /* 0x80 */ ? sp80;                              /* inferred */
    /* 0x80 */ char pad_80[0x10];
};                                                  /* size = 0x90 */

struct _mips2c_stack_CollisionCheck_AC_QuadVsQuad {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ Collider *sp48;                      /* inferred */
    /* 0x4C */ char pad_4C[0x8];                    /* maybe part of sp48[3]? */
    /* 0x54 */ Collider *sp54;                      /* inferred */
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0xC];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0x1C];
};                                                  /* size = 0x80 */

struct _mips2c_stack_CollisionCheck_AC_QuadVsSphere {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Actor **sp34;                        /* inferred */
    /* 0x38 */ u8 *sp38;                            /* inferred */
    /* 0x3C */ Collider *sp3C;                      /* inferred */
    /* 0x40 */ Collider *sp40;                      /* inferred */
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0xC];
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad_50[0x10];
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0x10];
};                                                  /* size = 0x70 */

struct _mips2c_stack_CollisionCheck_AC_QuadVsTris {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad_5C[0xC];
    /* 0x68 */ ? sp68;                              /* inferred */
    /* 0x68 */ char pad_68[0x18];
};                                                  /* size = 0x80 */

struct _mips2c_stack_CollisionCheck_AC_SphereVsCylinder {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Collider *sp34;                      /* inferred */
    /* 0x38 */ Collider *sp38;                      /* inferred */
    /* 0x3C */ Collider *sp3C;                      /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ char pad_70[0x8];
};                                                  /* size = 0x78 */

struct _mips2c_stack_CollisionCheck_AC_SphereVsJntSph {
    /* 0x00 */ char pad_0[0x64];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ char pad_88[0x4];
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad_94[0xC];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_CollisionCheck_AC_SphereVsQuad {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ u8 *sp34;                            /* inferred */
    /* 0x38 */ Actor **sp38;                        /* inferred */
    /* 0x3C */ Collider *sp3C;                      /* inferred */
    /* 0x40 */ Collider *sp40;                      /* inferred */
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0xC];
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad_50[0x10];
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0x10];
};                                                  /* size = 0x70 */

struct _mips2c_stack_CollisionCheck_AC_SphereVsSphere {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Collider *sp30;                      /* inferred */
    /* 0x34 */ Collider *sp34;                      /* inferred */
    /* 0x38 */ Collider *sp38;                      /* inferred */
    /* 0x3C */ Collider *sp3C;                      /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ char pad_70[0x8];
};                                                  /* size = 0x78 */

struct _mips2c_stack_CollisionCheck_AC_SphereVsTris {
    /* 0x00 */ char pad_0[0x50];
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad_50[0xC];
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad_5C[0xC];
    /* 0x68 */ ? sp68;                              /* inferred */
    /* 0x68 */ char pad_68[0x18];
};                                                  /* size = 0x80 */

struct _mips2c_stack_CollisionCheck_AC_TrisVsCyl {
    /* 0x00 */ char pad_0[0x4C];
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0xC];
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0x18];
};                                                  /* size = 0x70 */

struct _mips2c_stack_CollisionCheck_AC_TrisVsJntSph {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad_5C[0xC];
    /* 0x68 */ ? sp68;                              /* inferred */
    /* 0x68 */ char pad_68[0xC];
    /* 0x74 */ ? sp74;                              /* inferred */
    /* 0x74 */ char pad_74[0x10];
    /* 0x84 */ Collider *sp84;                      /* inferred */
    /* 0x88 */ char pad_88[0x8];
};                                                  /* size = 0x90 */

struct _mips2c_stack_CollisionCheck_AC_TrisVsQuad {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad_5C[0xC];
    /* 0x68 */ ? sp68;                              /* inferred */
    /* 0x68 */ char pad_68[0x18];
};                                                  /* size = 0x80 */

struct _mips2c_stack_CollisionCheck_AC_TrisVsSphere {
    /* 0x00 */ char pad_0[0x58];
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0xC];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0xC];
    /* 0x70 */ ? sp70;                              /* inferred */
    /* 0x70 */ char pad_70[0x18];
};                                                  /* size = 0x88 */

struct _mips2c_stack_CollisionCheck_AC_TrisVsTris {
    /* 0x00 */ char pad_0[0x50];
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad_50[0xC];
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad_5C[0x1C];
};                                                  /* size = 0x78 */

struct _mips2c_stack_CollisionCheck_AT {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_CollisionCheck_ApplyBumperDefense {}; /* size 0x0 */

struct _mips2c_stack_CollisionCheck_ApplyDamage {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ u32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ ColliderInfo *sp2C;                  /* inferred */
    /* 0x30 */ Collider *sp30;                      /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_CollisionCheck_ApplyDamageCyl {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_ApplyDamageJntSph {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_CollisionCheck_ApplyDamageQuad {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_ApplyDamageSphere {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_ApplyDamageTris {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_CollisionCheck_BlueBlood {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_CollisionCheck_CylSideVsLineSeg {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x1C];                   /* maybe part of sp18[8]? */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x10];                   /* maybe part of sp38[5]? */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
};                                                  /* size = 0x78 */

struct _mips2c_stack_CollisionCheck_Damage {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_CollisionCheck_DestroyContext {}; /* size 0x0 */

struct _mips2c_stack_CollisionCheck_DisableSAC {};  /* size 0x0 */

struct _mips2c_stack_CollisionCheck_EnableSAC {};   /* size 0x0 */

struct _mips2c_stack_CollisionCheck_GetDamageAndEffectOnBumper {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_GetMassType {}; /* size 0x0 */

struct _mips2c_stack_CollisionCheck_GetToucherDamage {}; /* size 0x0 */

struct _mips2c_stack_CollisionCheck_GreenBlood {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_CollisionCheck_HitEffects {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_HitSolid {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_Incompatible {}; /* size 0x0 */

struct _mips2c_stack_CollisionCheck_InitContext {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_InitInfo {};    /* size 0x0 */

struct _mips2c_stack_CollisionCheck_LineOC {
    /* 0x00 */ char pad_0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_CollisionCheck_LineOCCheck {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_CollisionCheck_LineOCCheckAll {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_CollisionCheck_LineOC_Cyl {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_CollisionCheck_LineOC_JntSph {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_CollisionCheck_LineOC_Sphere {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_NoBlood {};     /* size 0x0 */

struct _mips2c_stack_CollisionCheck_NoSharedFlags {}; /* size 0x0 */

struct _mips2c_stack_CollisionCheck_OC {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_CollisionCheck_OC_CylVsCyl {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0xC];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x8];
};                                                  /* size = 0x58 */

struct _mips2c_stack_CollisionCheck_OC_CylVsJntSph {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_OC_CylVsSphere {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Collider *sp30;                      /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0xC];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x8];
};                                                  /* size = 0x58 */

struct _mips2c_stack_CollisionCheck_OC_JntSphVsCyl {
    /* 0x00 */ char pad_0[0x60];
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0xC];
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad_6C[0xC];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0xC];
};                                                  /* size = 0x88 */

struct _mips2c_stack_CollisionCheck_OC_JntSphVsJntSph {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad_5C[0xC];
    /* 0x68 */ ? sp68;                              /* inferred */
    /* 0x68 */ char pad_68[0xC];
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ char pad_78[0xC];                    /* maybe part of sp74[4]? */
    /* 0x84 */ Collider *sp84;                      /* inferred */
};                                                  /* size = 0x88 */

struct _mips2c_stack_CollisionCheck_OC_JntSphVsSphere {
    /* 0x00 */ char pad_0[0x60];
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0xC];
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad_6C[0xC];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0xC];
};                                                  /* size = 0x88 */

struct _mips2c_stack_CollisionCheck_OC_SphereVsCyl {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_OC_SphereVsJntSph {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_OC_SphereVsSphere {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Collider *sp34;                      /* inferred */
    /* 0x38 */ Collider *sp38;                      /* inferred */
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0xC];
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0xC];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x8];
};                                                  /* size = 0x60 */

struct _mips2c_stack_CollisionCheck_QuadAvgPoint {}; /* size 0x0 */

struct _mips2c_stack_CollisionCheck_RedBlood {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_RedBloodUnused {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_ResetDamage {}; /* size 0x0 */

struct _mips2c_stack_CollisionCheck_SetAC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_SetAC_SAC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_CollisionCheck_SetAT {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_SetAT_SAC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_CollisionCheck_SetATvsAC {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ u32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_CollisionCheck_SetBounce {};   /* size 0x0 */

struct _mips2c_stack_CollisionCheck_SetCylHitFX {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_CollisionCheck_SetHitEffects {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_CollisionCheck_SetInfo {};     /* size 0x0 */

struct _mips2c_stack_CollisionCheck_SetInfo2 {};    /* size 0x0 */

struct _mips2c_stack_CollisionCheck_SetInfoGetDamageTable {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_SetInfoNoDamageTable {}; /* size 0x0 */

struct _mips2c_stack_CollisionCheck_SetJntSphHitFX {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0xC];
    /* 0x30 */ ColliderInfo *sp30;                  /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_CollisionCheck_SetOC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_SetOCLine {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_SetOC_SAC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_CollisionCheck_SetOCvsOC {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ Actor *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0xC];                    /* maybe part of sp24[4]? */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_CollisionCheck_SetQuadHitFX {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_CollisionCheck_SetSphereHitFX {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_CollisionCheck_SetTrisHitFX {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0xC];
    /* 0x30 */ ColliderInfo *sp30;                  /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_CollisionCheck_SkipBump {};    /* size 0x0 */

struct _mips2c_stack_CollisionCheck_SkipOC {};      /* size 0x0 */

struct _mips2c_stack_CollisionCheck_SkipTouch {};   /* size 0x0 */

struct _mips2c_stack_CollisionCheck_SpawnRedBlood {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_CollisionCheck_SpawnShieldParticles {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_CollisionCheck_SpawnShieldParticlesMetal {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_SpawnShieldParticlesMetal2 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_SpawnShieldParticlesMetalSound {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_SpawnShieldParticlesWood {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_CollisionCheck_SpawnWaterDroplets {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_CollisionCheck_SwordHitAudio {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_CollisionCheck_TrisAvgPoint {}; /* size 0x0 */

struct _mips2c_stack_CollisionCheck_WaterBurst {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

static ? D_801EDEBC;
static ? D_801EDFD4;
static TriNorm D_801EE0A4;
static TriNorm D_801EE11C;
Vec3f D_801EDE00;
Vec3f D_801EDE10;
Vec3f D_801EDE20;
Vec3f D_801EDE30;
TriNorm D_801EDE40;
TriNorm D_801EDE78;
LineSegment D_801EDEB0;
TriNorm D_801EDEC8;
TriNorm D_801EDF00;
Vec3f D_801EDF38;
Vec3f D_801EDF48;
TriNorm D_801EDF58;
TriNorm D_801EDF90;
LineSegment D_801EDFC8;
Vec3f D_801EDFE0;
Vec3f D_801EDFF0;
TriNorm D_801EE000;
TriNorm D_801EE038;
TriNorm D_801EE070[2];
Vec3f D_801EE0D8;
TriNorm D_801EE0E8[2];
TriNorm D_801EE150;
TriNorm D_801EE188;
Vec3f D_801EE1C0;
Vec3f D_801EE1D0;
Vec3f D_801EE1E0;
Vec3f D_801EE1F0;
EffSparkParams D_801EE200;
TriNorm D_801EE6C8;
TriNorm D_801EE700;
EffSparkParams D_801EE738;
EffSparkParams D_801EEC00;
EffSparkParams D_801EF0C8;
TriNorm D_801EF590;
TriNorm D_801EF5C8;
TriNorm D_801EF600;
TriNorm D_801EF638;
f32 damageMultipliers[16] = {
    0.0f,
    1.0f,
    2.0f,
    0.5f,
    0.25f,
    3.0f,
    4.0f,
    1.0f,
    1.0f,
    1.0f,
    1.0f,
    1.0f,
    1.0f,
    1.0f,
    1.0f,
    1.0f,
};
CollisionCheckInfo defaultColChkInfo = {NULL, {0.0f, 0.0f, 0.0f}, 0xA, 0xA, 0, 0xFF, 8, 0, 0, 0, 0};
Collider defaultCollider;                           /* unable to generate initializer */
ColliderBump defaultColliderBump = {0xF7CFFFFF, 0, 0, {0, 0, 0}};
Cylinder16 defaultColliderCylinderDim = {0, 0, 0, {0, 0, 0}};
ColliderInfo defaultColliderInfo = {{0, 0, 0}, {0xF7CFFFFF, 0, 0, {0, 0, 0}}, 0, 0, 0, 0, NULL, NULL, NULL, NULL};
ColliderJntSphElementDim defaultColliderJntSphElementDim = {{{0, 0, 0}, 0}, {{0, 0, 0}, 0}, 0.0f, 0};
ColliderQuadDim defaultColliderQuadDim = {
    {
        {0.0f, 0.0f, 0.0f},
        {0.0f, 0.0f, 0.0f},
        {0.0f, 0.0f, 0.0f},
        {0.0f, 0.0f, 0.0f},
    },
    {0, 0, 0},
    {0, 0, 0},
    1e38.0f,
};
ColliderTouch defaultColliderTouch = {0, 0, 0};
TriNorm defaultColliderTrisElementDim = {
    {{0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}},
    {{0.0f, 0.0f, 0.0f}, 0.0f},
};
Vec3f defaultLinePoint = {0.0f, 0.0f, 0.0f};
s32 (*sACResetFuncs[5])(GlobalContext *, Collider *) = {
    Collider_ResetJntSphAC,
    Collider_ResetCylinderAC,
    Collider_ResetTrisAC,
    Collider_ResetQuadAC,
    Collider_ResetSphereAC,
};
void (*sACVsFuncs[5][5])(GlobalContext *, CollisionCheckContext *, Collider *, Collider *) = {
    {
        CollisionCheck_AC_JntSphVsJntSph,
        CollisionCheck_AC_JntSphVsCyl,
        CollisionCheck_AC_JntSphVsTris,
        CollisionCheck_AC_JntSphVsQuad,
        CollisionCheck_AC_JntSphVsSphere,
    },
    {
        CollisionCheck_AC_CylVsJntSph,
        CollisionCheck_AC_CylVsCyl,
        CollisionCheck_AC_CylVsTris,
        CollisionCheck_AC_CylVsQuad,
        CollisionCheck_AC_CylVsSphere,
    },
    {
        CollisionCheck_AC_TrisVsJntSph,
        CollisionCheck_AC_TrisVsCyl,
        CollisionCheck_AC_TrisVsTris,
        CollisionCheck_AC_TrisVsQuad,
        CollisionCheck_AC_TrisVsSphere,
    },
    {
        CollisionCheck_AC_QuadVsJntSph,
        CollisionCheck_AC_QuadVsCyl,
        CollisionCheck_AC_QuadVsTris,
        CollisionCheck_AC_QuadVsQuad,
        CollisionCheck_AC_QuadVsSphere,
    },
    {
        CollisionCheck_AC_SphereVsJntSph,
        CollisionCheck_AC_SphereVsCylinder,
        CollisionCheck_AC_SphereVsTris,
        CollisionCheck_AC_SphereVsQuad,
        CollisionCheck_AC_SphereVsSphere,
    },
};
s32 (*sATResetFuncs[5])(GlobalContext *, Collider *) = {
    Collider_ResetJntSphAT,
    Collider_ResetCylinderAT,
    Collider_ResetTrisAT,
    Collider_ResetQuadAT,
    Collider_ResetSphereAT,
};
void (*sApplyDamageFuncs[5])(GlobalContext *, CollisionCheckContext *, Collider *) = {
    CollisionCheck_ApplyDamageJntSph,
    CollisionCheck_ApplyDamageCyl,
    CollisionCheck_ApplyDamageTris,
    CollisionCheck_ApplyDamageQuad,
    CollisionCheck_ApplyDamageSphere,
};
void (*sBloodFuncs[6])(GlobalContext *, Collider *, Vec3f *) = {
    CollisionCheck_NoBlood,
    CollisionCheck_BlueBlood,
    CollisionCheck_GreenBlood,
    CollisionCheck_WaterBurst,
    CollisionCheck_RedBlood,
    CollisionCheck_RedBloodUnused,
};
void (*sColChkApplyFuncs[5])(GlobalContext *, CollisionCheckContext *, Collider *) = {
    CollisionCheck_SetJntSphHitFX,
    CollisionCheck_SetCylHitFX,
    CollisionCheck_SetTrisHitFX,
    CollisionCheck_SetQuadHitFX,
    CollisionCheck_SetSphereHitFX,
};
HitInfo sHitInfo[14] = {
    {1, 0},
    {0, 1},
    {2, 1},
    {0, 0},
    {3, 5},
    {0, 2},
    {2, 0},
    {4, 0},
    {1, 2},
    {0, 3},
    {0, 5},
    {0, 3},
    {0, 3},
    {0, 4},
};
s32 (*sOCLineCheckFuncs[5])(GlobalContext *, CollisionCheckContext *, Collider *, Vec3f *, Vec3f *) = {
    CollisionCheck_LineOC_JntSph,
    CollisionCheck_LineOC_Cyl,
    NULL,
    NULL,
    CollisionCheck_LineOC_Sphere,
};
s32 (*sOCResetFuncs[5])(GlobalContext *, Collider *) = {
    Collider_ResetJntSphOC,
    Collider_ResetCylinderOC,
    Collider_ResetTrisOC,
    Collider_ResetQuadOC,
    Collider_ResetSphereOC,
};
void (*sOCVsFuncs[5][5])(GlobalContext *, CollisionCheckContext *, Collider *, Collider *) = {
    {
        CollisionCheck_OC_JntSphVsJntSph,
        CollisionCheck_OC_JntSphVsCyl,
        NULL,
        NULL,
        CollisionCheck_OC_JntSphVsSphere,
    },
    {
        CollisionCheck_OC_CylVsJntSph,
        CollisionCheck_OC_CylVsCyl,
        NULL,
        NULL,
        CollisionCheck_OC_CylVsSphere,
    },
    {NULL, NULL, NULL, NULL, NULL},
    {NULL, NULL, NULL, NULL, NULL},
    {
        CollisionCheck_OC_SphereVsJntSph,
        CollisionCheck_OC_SphereVsCyl,
        NULL,
        NULL,
        CollisionCheck_OC_SphereVsSphere,
    },
};
EffShieldParticleInit shieldParticleInitMetal = {
    0x10,
    {0, 0, 0},
    {0, 0xC8, 0xFF, 0xFF},
    {0xFF, 0xFF, 0xFF, 0xFF},
    {0xFF, 0xFF, 0x80, 0xFF},
    {0xFF, 0xFF, 0, 0xFF},
    {0xFF, 0x40, 0, 0xC8},
    {0xFF, 0, 0, 0xFF},
    2.1f,
    35.0f,
    30.0f,
    8,
    {0, 0, 0, {0, 0x80, 0xFF}, 0, 0x12C},
    1,
};
EffShieldParticleInit shieldParticleInitWood = {
    0x10,
    {0, 0, 0},
    {0, 0xC8, 0xFF, 0xFF},
    {0xFF, 0xFF, 0xFF, 0xFF},
    {0xFF, 0xFF, 0x80, 0xFF},
    {0xFF, 0xFF, 0, 0xFF},
    {0xFF, 0x40, 0, 0xC8},
    {0xFF, 0, 0, 0xFF},
    2.1f,
    35.0f,
    30.0f,
    8,
    {0, 0, 0, {0, 0x80, 0xFF}, 0, 0x12C},
    0,
};

f32 CollisionCheck_GetDamageAndEffectOnBumper(Collider *at, ColliderInfo *atInfo, Collider *ac, ColliderInfo *acInfo, u32 *effect) {
    DamageTable *temp_a2;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_v1;
    u8 temp_v0;
    u32 phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;
    f32 phi_f2;

    *effect = 0;
    temp_a2 = ac->actor->colChkInfo.damageTable;
    temp_f2 = (f32) CollisionCheck_GetToucherDamage(at, atInfo, ac, acInfo);
    phi_v1 = 0;
    phi_f2 = temp_f2;
    if (temp_a2 != 0) {
        phi_v0 = atInfo->toucher.dmgFlags;
loop_2:
        phi_v1_2 = phi_v1;
        if (phi_v0 != 1) {
            temp_v1 = phi_v1 + 1;
            phi_v0 = phi_v0 >> 1;
            phi_v1 = temp_v1;
            phi_v1_2 = temp_v1;
            if (temp_v1 != 0x20) {
                goto loop_2;
            }
        }
        temp_v0 = temp_a2->attack[phi_v1_2];
        temp_f2_2 = temp_f2 * damageMultipliers[temp_v0 & 0xF];
        *effect = ((s32) temp_v0 >> 4) & 0xF;
        phi_f2 = temp_f2_2;
    }
    return phi_f2;
}

f32 CollisionCheck_ApplyBumperDefense(f32 damage, ColliderInfo *ac) {
    f32 temp_f6;
    u8 temp_t6;
    f32 phi_f6;

    temp_t6 = ac->bumper.defense;
    temp_f6 = (f32) temp_t6;
    phi_f6 = temp_f6;
    if ((s32) temp_t6 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    return damage - phi_f6;
}

s32 CollisionCheck_GetToucherDamage(Collider *at, ColliderInfo *atInfo, Collider *ac, ColliderInfo *acInfo) {
    Actor *temp_v0;
    Actor *temp_v0_2;

    temp_v0 = at->actor;
    if ((temp_v0 != 0) && (temp_v0->id == 9) && (temp_v0_2 = ac->actor, (temp_v0_2 != 0)) && (temp_v0_2->id == 0)) {
        return 8;
    }
    return (s32) atInfo->toucher.damage;
}

s32 Collider_InitBase(GlobalContext *globalCtx, Collider *collider) {
    collider->actor = defaultCollider.actor;
    collider->at = defaultCollider.at;
    collider->ac = defaultCollider.ac;
    collider->oc = defaultCollider.oc;
    collider->unk_10 = (s32) defaultCollider.unk_10;
    collider->unk_14 = (s32) defaultCollider.unk_14;
    return 1;
}

s32 Collider_DestroyBase(GlobalContext *globalCtx, Collider *collider) {
    return 1;
}

s32 Collider_SetBaseToActor(GlobalContext *globalCtx, Collider *collider, ColliderInitToActor *src) {
    collider->actor = src->actor;
    collider->atFlags = src->atFlags;
    collider->acFlags = src->acFlags;
    collider->ocFlags2 = 0x10;
    collider->ocFlags1 = src->ocFlags1;
    collider->shape = src->shape;
    return 1;
}

s32 Collider_SetBaseType1(GlobalContext *globalCtx, Collider *collider, Actor *actor, ColliderInitType1 *src) {
    collider->actor = actor;
    collider->colType = src->colType;
    collider->atFlags = src->atFlags;
    collider->acFlags = src->acFlags;
    collider->ocFlags2 = 0x10;
    collider->ocFlags1 = src->ocFlags1;
    collider->shape = src->shape;
    return 1;
}

s32 Collider_SetBase(GlobalContext *globalCtx, Collider *collider, Actor *actor, ColliderInit *src) {
    collider->actor = actor;
    collider->colType = src->colType;
    collider->atFlags = src->atFlags;
    collider->acFlags = src->acFlags;
    collider->ocFlags1 = src->ocFlags1;
    collider->ocFlags2 = src->ocFlags2;
    collider->shape = src->shape;
    return 1;
}

void Collider_ResetATBase(GlobalContext *globalCtx, Collider *collider) {
    collider->at = NULL;
    collider->atFlags &= 0xFFF9;
}

void Collider_ResetACBase(GlobalContext *globalCtx, Collider *collider) {
    collider->ac = NULL;
    collider->acFlags &= 0xFF7D;
}

void Collider_ResetOCBase(GlobalContext *globalCtx, Collider *collider) {
    collider->oc = NULL;
    collider->ocFlags1 &= 0xFFFD;
    collider->ocFlags2 &= 0xFFFE;
}

s32 Collider_InitTouch(GlobalContext *globalCtx, ColliderTouch *touch) {
    touch->dmgFlags = defaultColliderTouch.dmgFlags;
    touch->unk_4 = (s32) defaultColliderTouch.unk_4;
    return 1;
}

s32 Collider_DestroyTouch(GlobalContext *globalCtx, ColliderTouch *touch) {
    return 1;
}

s32 Collider_SetTouch(GlobalContext *globalCtx, ColliderTouch *touch, ColliderTouchInit *src) {
    touch->dmgFlags = src->dmgFlags;
    touch->effect = src->effect;
    touch->damage = src->damage;
    return 1;
}

void Collider_ResetATInfoUnk(GlobalContext *globalCtx, ColliderInfo *info) {

}

s32 Collider_InitBump(GlobalContext *globalCtx, ColliderBump *bump) {
    bump->dmgFlags = defaultColliderBump.dmgFlags;
    bump->unk_4 = (s32) defaultColliderBump.unk_4;
    bump->unk_8 = (s32) defaultColliderBump.unk_8;
    return 1;
}

s32 Collider_DestroyBump(GlobalContext *globalCtx, ColliderBump *bump) {
    return 1;
}

s32 Collider_SetBump(GlobalContext *globalCtx, ColliderBump *bump, ColliderBumpInit *src) {
    bump->dmgFlags = src->dmgFlags;
    bump->effect = src->effect;
    bump->defense = src->defense;
    return 1;
}

s32 Collider_InitInfo(GlobalContext *globalCtx, ColliderInfo *info) {
    ColliderInfo *temp_a1;
    ColliderInfo *temp_t6;
    ColliderInfo *temp_t9;
    ColliderInfo *phi_t6;
    ColliderInfo *phi_t9;

    phi_t6 = &defaultColliderInfo;
    phi_t9 = info;
    do {
        temp_t6 = phi_t6 + 0xC;
        temp_t9 = phi_t9 + 0xC;
        temp_t9->unk_-C = (s32) phi_t6->toucher.dmgFlags;
        temp_t9->unk_-8 = (s32) temp_t6->unk_-8;
        temp_t9->unk_-4 = (s32) temp_t6->unk_-4;
        phi_t6 = temp_t6;
        phi_t9 = temp_t9;
    } while (temp_t6 != &defaultColliderInfo.acHitInfo);
    temp_a1 = info;
    temp_t9->toucher.dmgFlags = temp_t6->toucher.dmgFlags;
    info = info;
    Collider_InitTouch(globalCtx, (ColliderTouch *) temp_a1);
    Collider_InitBump(globalCtx, &info->bumper);
    return 1;
}

s32 Collider_DestroyInfo(GlobalContext *globalCtx, ColliderInfo *info) {
    Collider_DestroyTouch(globalCtx, (ColliderTouch *) info);
    Collider_DestroyBump(globalCtx, &info->bumper);
    return 1;
}

s32 Collider_SetInfo(GlobalContext *globalCtx, ColliderInfo *info, ColliderInfoInit *src) {
    ColliderInfo *temp_a1;

    temp_a1 = info;
    info->elemType = src->elemType;
    info = info;
    Collider_SetTouch(globalCtx, (ColliderTouch *) temp_a1, &src->toucher);
    Collider_SetBump(globalCtx, &info->bumper, &src->bumper);
    info->toucherFlags = src->toucherFlags;
    info->bumperFlags = src->bumperFlags;
    info->ocElemFlags = src->ocElemFlags;
    return 1;
}

void Collider_ResetATInfo(GlobalContext *globalCtx, ColliderInfo *info) {
    u8 temp_t8;

    info->atHit = NULL;
    info->atHitInfo = NULL;
    temp_t8 = info->toucherFlags & 0xFFFD;
    info->toucherFlags = temp_t8;
    info->toucherFlags = temp_t8 & 0xFFBF;
    Collider_ResetATInfoUnk(globalCtx, info);
}

void Collider_ResetACInfo(GlobalContext *globalCtx, ColliderInfo *info) {
    s16 temp_v0;
    u8 temp_t8;

    info->bumper.hitPos.z = 0;
    temp_v0 = info->bumper.hitPos.z;
    temp_t8 = info->bumperFlags & 0xFFFD;
    info->bumperFlags = temp_t8;
    info->bumperFlags = temp_t8 & 0xFF7F;
    info->acHit = NULL;
    info->acHitInfo = NULL;
    info->bumper.hitPos.y = temp_v0;
    info->bumper.hitPos.x = temp_v0;
}

void Collider_ResetOCInfo(GlobalContext *globalCtx, ColliderInfo *info) {
    info->ocElemFlags &= 0xFFFD;
}

s32 Collider_InitJntSphElementDim(GlobalContext *globalCtx, ColliderJntSphElementDim *dim) {
    dim->unk_0 = (s32) defaultColliderJntSphElementDim.unk_0;
    dim->unk_4 = (s32) defaultColliderJntSphElementDim.unk_4;
    dim->unk_8 = (s32) defaultColliderJntSphElementDim.unk_8;
    dim->unk_C = (s32) defaultColliderJntSphElementDim.unk_C;
    dim->scale = defaultColliderJntSphElementDim.scale;
    dim->unk_14 = (s32) defaultColliderJntSphElementDim.unk_14;
    return 1;
}

s32 Collider_DestroyJntSphElementDim(GlobalContext *globalCtx, ColliderJntSphElementDim *dim) {
    return 1;
}

s32 Collider_SetJntSphElementDim(GlobalContext *globalCtx, ColliderJntSphElementDim *dest, ColliderJntSphElementDimInit *src) {
    dest->limb = src->limb;
    dest->unk_0 = (unaligned s32) src->unk_2;
    dest->unk_4 = (unaligned s32) src->unk_6;
    dest->scale = (f32) src->scale * 0.01f;
    return 1;
}

s32 Collider_InitJntSphElement(GlobalContext *globalCtx, ColliderJntSphElement *element) {
    Collider_InitInfo(globalCtx, (ColliderInfo *) element);
    Collider_InitJntSphElementDim(globalCtx, &element->dim);
    return 1;
}

s32 Collider_DestroyJntSphElement(GlobalContext *globalCtx, ColliderJntSphElement *element) {
    Collider_DestroyInfo(globalCtx, (ColliderInfo *) element);
    Collider_DestroyJntSphElementDim(globalCtx, &element->dim);
    return 1;
}

s32 Collider_SetJntSphElement(GlobalContext *globalCtx, ColliderJntSphElement *dest, ColliderJntSphElementInit *src) {
    Collider_SetInfo(globalCtx, (ColliderInfo *) dest, (ColliderInfoInit *) src);
    Collider_SetJntSphElementDim(globalCtx, &dest->dim, &src->dim);
    return 1;
}

s32 Collider_ResetJntSphElementAT(GlobalContext *globalCtx, ColliderJntSphElement *collider) {
    Collider_ResetATInfo(globalCtx, (ColliderInfo *) collider);
    return 1;
}

s32 Collider_ResetJntSphElementAC(GlobalContext *globalCtx, ColliderJntSphElement *collider) {
    Collider_ResetACInfo(globalCtx, (ColliderInfo *) collider);
    return 1;
}

s32 Collider_ResetJntSphElementOC(GlobalContext *globalCtx, ColliderJntSphElement *collider) {
    Collider_ResetOCInfo(globalCtx, (ColliderInfo *) collider);
    return 1;
}

s32 Collider_InitJntSph(GlobalContext *globalCtx, ColliderJntSph *collider) {
    Collider_InitBase(globalCtx, (Collider *) collider);
    collider->count = 0;
    collider->elements = NULL;
    return 1;
}

s32 Collider_FreeJntSph(GlobalContext *globalCtx, ColliderJntSph *collider) {
    ColliderJntSphElement *temp_a0;
    ColliderJntSphElement *temp_s0;
    ColliderJntSphElement *phi_s0;

    Collider_DestroyBase(globalCtx, (Collider *) collider);
    temp_a0 = collider->elements;
    phi_s0 = temp_a0;
    if ((u32) temp_a0 < (u32) &temp_a0[collider->count]) {
        do {
            Collider_DestroyJntSphElement(globalCtx, phi_s0);
            temp_s0 = &phi_s0[1];
            phi_s0 = temp_s0;
        } while ((u32) temp_s0 < (u32) &collider->elements[collider->count]);
    }
    collider->count = 0;
    if ((void *) collider->elements != 0) {
        zelda_free((void *) collider->elements);
    }
    collider->elements = NULL;
    return 1;
}

s32 Collider_DestroyJntSph(GlobalContext *globalCtx, ColliderJntSph *collider) {
    ColliderJntSphElement *temp_s0;
    ColliderJntSphElement *temp_s0_2;
    ColliderJntSphElement *phi_s0;

    Collider_DestroyBase(globalCtx, (Collider *) collider);
    temp_s0 = collider->elements;
    phi_s0 = temp_s0;
    if ((u32) temp_s0 < (u32) &temp_s0[collider->count]) {
        do {
            Collider_DestroyJntSphElement(globalCtx, phi_s0);
            temp_s0_2 = &phi_s0[1];
            phi_s0 = temp_s0_2;
        } while ((u32) temp_s0_2 < (u32) &collider->elements[collider->count]);
    }
    collider->count = 0;
    collider->elements = NULL;
    return 1;
}

s32 Collider_SetJntSphToActor(GlobalContext *globalCtx, ColliderJntSph *collider, ColliderJntSphInitToActor *src) {
    ColliderJntSphElement *temp_s0;
    ColliderJntSphElement *temp_s0_2;
    ColliderJntSphElement *temp_v0;
    ColliderJntSphElement *phi_s0;
    ColliderJntSphElementInit *phi_s1;

    Collider_SetBaseToActor(globalCtx, (Collider *) collider, (ColliderInitToActor *) src);
    collider->count = src->count;
    temp_v0 = zelda_malloc(src->count << 6);
    collider->elements = temp_v0;
    if (temp_v0 == 0) {
        collider->count = 0;
        return 0;
    }
    temp_s0 = collider->elements;
    phi_s0 = temp_s0;
    phi_s1 = src->elements;
    if ((u32) temp_s0 < (u32) &temp_s0[collider->count]) {
        do {
            Collider_InitJntSphElement(globalCtx, phi_s0);
            Collider_SetJntSphElement(globalCtx, phi_s0, phi_s1);
            temp_s0_2 = &phi_s0[1];
            phi_s0 = temp_s0_2;
            phi_s1 = &phi_s1[1];
        } while ((u32) temp_s0_2 < (u32) &collider->elements[collider->count]);
    }
    return 1;
}

s32 Collider_SetJntSphAllocType1(GlobalContext *globalCtx, ColliderJntSph *sphereGroup, Actor *actor, ColliderJntSphInitType1 *src) {
    ColliderJntSphElement *temp_s0;
    ColliderJntSphElement *temp_s0_2;
    ColliderJntSphElement *temp_v0;
    ColliderJntSphElement *phi_s0;
    ColliderJntSphElementInit *phi_s1;

    Collider_SetBaseType1(globalCtx, (Collider *) sphereGroup, actor, (ColliderInitType1 *) src);
    sphereGroup->count = src->count;
    temp_v0 = zelda_malloc(src->count << 6);
    sphereGroup->elements = temp_v0;
    if (temp_v0 == 0) {
        sphereGroup->count = 0;
        return 0;
    }
    temp_s0 = sphereGroup->elements;
    phi_s0 = temp_s0;
    phi_s1 = src->elements;
    if ((u32) temp_s0 < (u32) &temp_s0[sphereGroup->count]) {
        do {
            Collider_InitJntSphElement(globalCtx, phi_s0);
            Collider_SetJntSphElement(globalCtx, phi_s0, phi_s1);
            temp_s0_2 = &phi_s0[1];
            phi_s0 = temp_s0_2;
            phi_s1 = &phi_s1[1];
        } while ((u32) temp_s0_2 < (u32) &sphereGroup->elements[sphereGroup->count]);
    }
    return 1;
}

s32 Collider_SetJntSph(GlobalContext *globalCtx, ColliderJntSph *sphereGroup, Actor *actor, ColliderJntSphInit *src, ColliderJntSphElement *elements) {
    ColliderJntSphElement *temp_s0;
    s32 temp_t6;
    ColliderJntSphElement *phi_s0;
    ColliderJntSphElementInit *phi_s1;

    Collider_SetBase(globalCtx, (Collider *) sphereGroup, actor, (ColliderInit *) src);
    temp_t6 = src->count;
    sphereGroup->elements = elements;
    sphereGroup->count = temp_t6;
    phi_s0 = elements;
    phi_s1 = src->elements;
    if ((u32) elements < (u32) &elements[temp_t6]) {
        do {
            Collider_InitJntSphElement(globalCtx, phi_s0);
            Collider_SetJntSphElement(globalCtx, phi_s0, phi_s1);
            temp_s0 = &phi_s0[1];
            phi_s0 = temp_s0;
            phi_s1 = &phi_s1[1];
        } while ((u32) temp_s0 < (u32) &sphereGroup->elements[sphereGroup->count]);
    }
    return 1;
}

s32 Collider_InitAndSetJntSph(GlobalContext *globalCtx, ColliderJntSph *sphereGroup, Actor *actor, ColliderJntSphInit *src, ColliderJntSphElement *elements) {
    Collider_InitJntSph(globalCtx, sphereGroup);
    Collider_SetJntSph(globalCtx, sphereGroup, actor, src, elements);
    return 0;
}

s32 Collider_ResetJntSphAT(GlobalContext *globalCtx, Collider *collider) {
    Actor *temp_s0;
    ColliderJntSphElement *temp_s0_2;
    ColliderJntSphElement *phi_s0;

    Collider_ResetATBase(globalCtx, collider);
    temp_s0 = collider[1].at;
    phi_s0 = (ColliderJntSphElement *) temp_s0;
    if ((u32) temp_s0 < (u32) (temp_s0 + ((s32) collider[1].actor << 6))) {
        do {
            Collider_ResetJntSphElementAT(globalCtx, phi_s0);
            temp_s0_2 = &phi_s0[1];
            phi_s0 = temp_s0_2;
        } while ((u32) temp_s0_2 < (u32) (collider[1].at + ((s32) collider[1].actor << 6)));
    }
    return 1;
}

s32 Collider_ResetJntSphAC(GlobalContext *globalCtx, Collider *collider) {
    Actor *temp_s0;
    ColliderJntSphElement *temp_s0_2;
    ColliderJntSphElement *phi_s0;

    Collider_ResetACBase(globalCtx, collider);
    temp_s0 = collider[1].at;
    phi_s0 = (ColliderJntSphElement *) temp_s0;
    if ((u32) temp_s0 < (u32) (temp_s0 + ((s32) collider[1].actor << 6))) {
        do {
            Collider_ResetJntSphElementAC(globalCtx, phi_s0);
            temp_s0_2 = &phi_s0[1];
            phi_s0 = temp_s0_2;
        } while ((u32) temp_s0_2 < (u32) (collider[1].at + ((s32) collider[1].actor << 6)));
    }
    return 1;
}

s32 Collider_ResetJntSphOC(GlobalContext *globalCtx, Collider *collider) {
    Actor *temp_s0;
    ColliderJntSphElement *temp_s0_2;
    ColliderJntSphElement *phi_s0;

    Collider_ResetOCBase(globalCtx, collider);
    temp_s0 = collider[1].at;
    phi_s0 = (ColliderJntSphElement *) temp_s0;
    if ((u32) temp_s0 < (u32) (temp_s0 + ((s32) collider[1].actor << 6))) {
        do {
            Collider_ResetJntSphElementOC(globalCtx, phi_s0);
            temp_s0_2 = &phi_s0[1];
            phi_s0 = temp_s0_2;
        } while ((u32) temp_s0_2 < (u32) (collider[1].at + ((s32) collider[1].actor << 6)));
    }
    return 1;
}

s32 Collider_InitCylinderDim(GlobalContext *globalCtx, Cylinder16 *dim) {
    dim->unk_0 = (unaligned s32) defaultColliderCylinderDim.unk_0;
    dim->unk_4 = (unaligned s32) defaultColliderCylinderDim.unk_4;
    dim->unk_8 = (unaligned s32) defaultColliderCylinderDim.unk_8;
    return 1;
}

s32 Collider_DestroyCylinderDim(GlobalContext *globalCtx, Cylinder16 *dim) {
    return 1;
}

s32 Collider_SetCylinderDim(GlobalContext *globalCtx, Cylinder16 *dim, Cylinder16 *src) {
    dim->unk_0 = (unaligned s32) src->unk_0;
    dim->unk_4 = (unaligned s32) src->unk_4;
    dim->unk_8 = (unaligned s32) src->unk_8;
    return 1;
}

s32 Collider_InitCylinder(GlobalContext *globalCtx, ColliderCylinder *collider) {
    Collider_InitBase(globalCtx, (Collider *) collider);
    Collider_InitInfo(globalCtx, &collider->info);
    Collider_InitCylinderDim(globalCtx, &collider->dim);
    return 1;
}

s32 Collider_DestroyCylinder(GlobalContext *globalCtx, ColliderCylinder *collider) {
    Collider_DestroyBase(globalCtx, (Collider *) collider);
    Collider_DestroyInfo(globalCtx, &collider->info);
    Collider_DestroyCylinderDim(globalCtx, &collider->dim);
    return 1;
}

s32 Collider_SetCylinderToActor(GlobalContext *globalCtx, ColliderCylinder *collider, ColliderCylinderInitToActor *src) {
    Collider_SetBaseToActor(globalCtx, (Collider *) collider, (ColliderInitToActor *) src);
    Collider_SetInfo(globalCtx, &collider->info, &src->info);
    Collider_SetCylinderDim(globalCtx, &collider->dim, &src->dim);
    return 1;
}

s32 Collider_SetCylinderType1(GlobalContext *globalCtx, ColliderCylinder *collider, Actor *actor, ColliderCylinderInitType1 *src) {
    Collider_SetBaseType1(globalCtx, (Collider *) collider, actor, (ColliderInitType1 *) src);
    Collider_SetInfo(globalCtx, &collider->info, &src->info);
    Collider_SetCylinderDim(globalCtx, &collider->dim, &src->dim);
    return 1;
}

s32 Collider_SetCylinder(GlobalContext *globalCtx, ColliderCylinder *collider, Actor *actor, ColliderCylinderInit *src) {
    Collider_SetBase(globalCtx, (Collider *) collider, actor, (ColliderInit *) src);
    Collider_SetInfo(globalCtx, &collider->info, &src->info);
    Collider_SetCylinderDim(globalCtx, &collider->dim, &src->dim);
    return 1;
}

s32 Collider_InitAndSetCylinder(GlobalContext *globalCtx, ColliderCylinder *collider, Actor *actor, ColliderCylinderInit *src) {
    Collider_InitCylinder(globalCtx, collider);
    Collider_SetCylinder(globalCtx, collider, actor, src);
    return 1;
}

s32 Collider_ResetCylinderAT(GlobalContext *globalCtx, Collider *collider) {
    Collider_ResetATBase(globalCtx, collider);
    Collider_ResetATInfo(globalCtx, (ColliderInfo *) &collider[1]);
    return 1;
}

s32 Collider_ResetCylinderAC(GlobalContext *globalCtx, Collider *collider) {
    Collider_ResetACBase(globalCtx, collider);
    Collider_ResetACInfo(globalCtx, (ColliderInfo *) &collider[1]);
    return 1;
}

s32 Collider_ResetCylinderOC(GlobalContext *globalCtx, Collider *collider) {
    Collider_ResetOCBase(globalCtx, collider);
    Collider_ResetOCInfo(globalCtx, (ColliderInfo *) &collider[1]);
    return 1;
}

s32 Collider_InitTrisElementDim(GlobalContext *globalCtx, TriNorm *dim) {
    TriNorm *temp_t6;
    TriNorm *temp_t9;
    TriNorm *phi_t6;
    TriNorm *phi_t9;

    phi_t6 = &defaultColliderTrisElementDim;
    phi_t9 = dim;
    do {
        temp_t6 = phi_t6 + 0xC;
        temp_t9 = phi_t9 + 0xC;
        temp_t9->unk_-C = (s32) phi_t6->vtx[0].x;
        temp_t9->unk_-8 = (s32) temp_t6->unk_-8;
        temp_t9->unk_-4 = (s32) temp_t6->unk_-4;
        phi_t6 = temp_t6;
        phi_t9 = temp_t9;
    } while (temp_t6 != &defaultColliderTrisElementDim.plane.originDist);
    temp_t9->vtx[0].x = temp_t6->vtx[0].x;
    return 1;
}

s32 Collider_DestroyTrisElementDim(GlobalContext *globalCtx, TriNorm *dim) {
    return 1;
}

s32 Collider_SetTrisElementDim(GlobalContext *globalCtx, TriNorm *dim, ColliderTrisElementDimInit *src) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    ColliderTrisElementDimInit *temp_v1;
    Plane *temp_a0;
    u32 temp_v0;
    ColliderTrisElementDimInit *phi_v1;
    TriNorm *phi_v0;

    temp_a0 = &dim->plane;
    phi_v1 = src;
    phi_v0 = dim;
    if ((u32) dim < (u32) temp_a0) {
        do {
            temp_v0 = phi_v0 + 0xC;
            temp_v0->unk_-C = (s32) phi_v1->vtx[0].x;
            temp_v1 = phi_v1 + 0xC;
            temp_v0->unk_-8 = (s32) phi_v1->vtx[0].y;
            temp_v0->unk_-4 = (s32) temp_v1->unk_-4;
            phi_v1 = temp_v1;
            phi_v0 = (TriNorm *) temp_v0;
        } while (temp_v0 < (u32) temp_a0);
    }
    Math3D_UnitNormalVector((Vec3f *) src, &src->vtx[1], &src->vtx[2], &sp44, &sp40, &sp3C, &sp38);
    dim->plane.normal.x = sp44;
    dim->plane.normal.y = sp40;
    dim->plane.normal.z = sp3C;
    dim->plane.originDist = sp38;
    return 1;
}

s32 Collider_InitTrisElement(GlobalContext *globalCtx, ColliderTrisElement *element) {
    Collider_InitInfo(globalCtx, (ColliderInfo *) element);
    Collider_InitTrisElementDim(globalCtx, &element->dim);
    return 1;
}

s32 Collider_DestroyTrisElement(GlobalContext *globalCtx, ColliderTrisElement *element) {
    Collider_DestroyInfo(globalCtx, (ColliderInfo *) element);
    Collider_DestroyTrisElementDim(globalCtx, &element->dim);
    return 1;
}

s32 Collider_SetTrisElement(GlobalContext *globalCtx, ColliderTrisElement *element, ColliderTrisElementInit *src) {
    Collider_SetInfo(globalCtx, (ColliderInfo *) element, (ColliderInfoInit *) src);
    Collider_SetTrisElementDim(globalCtx, &element->dim, &src->dim);
    return 1;
}

s32 Collider_ResetTrisElementAT(GlobalContext *globalCtx, ColliderTrisElement *element) {
    Collider_ResetATInfo(globalCtx, (ColliderInfo *) element);
    return 1;
}

s32 Collider_ResetTrisElementAC(GlobalContext *globalCtx, ColliderTrisElement *element) {
    Collider_ResetACInfo(globalCtx, (ColliderInfo *) element);
    return 1;
}

s32 Collider_ResetTrisElementOC(GlobalContext *globalCtx, ColliderTrisElement *element) {
    Collider_ResetOCInfo(globalCtx, (ColliderInfo *) element);
    return 1;
}

s32 Collider_InitTris(GlobalContext *globalCtx, ColliderTris *tris) {
    Collider_InitBase(globalCtx, (Collider *) tris);
    tris->count = 0;
    tris->elements = NULL;
    return 1;
}

s32 Collider_FreeTris(GlobalContext *globalCtx, ColliderTris *tris) {
    ColliderTrisElement *temp_a0;
    ColliderTrisElement *temp_s0;
    ColliderTrisElement *phi_s0;

    Collider_DestroyBase(globalCtx, (Collider *) tris);
    temp_a0 = tris->elements;
    phi_s0 = temp_a0;
    if ((u32) temp_a0 < (u32) &temp_a0[tris->count]) {
        do {
            Collider_DestroyTrisElement(globalCtx, phi_s0);
            temp_s0 = &phi_s0[1];
            phi_s0 = temp_s0;
        } while ((u32) temp_s0 < (u32) &tris->elements[tris->count]);
    }
    tris->count = 0;
    if ((void *) tris->elements != 0) {
        zelda_free((void *) tris->elements);
    }
    tris->elements = NULL;
    return 1;
}

s32 Collider_DestroyTris(GlobalContext *globalCtx, ColliderTris *tris) {
    ColliderTrisElement *temp_s0;
    ColliderTrisElement *temp_s0_2;
    ColliderTrisElement *phi_s0;

    Collider_DestroyBase(globalCtx, (Collider *) tris);
    temp_s0 = tris->elements;
    phi_s0 = temp_s0;
    if ((u32) temp_s0 < (u32) &temp_s0[tris->count]) {
        do {
            Collider_DestroyTrisElement(globalCtx, phi_s0);
            temp_s0_2 = &phi_s0[1];
            phi_s0 = temp_s0_2;
        } while ((u32) temp_s0_2 < (u32) &tris->elements[tris->count]);
    }
    tris->count = 0;
    tris->elements = NULL;
    return 1;
}

s32 Collider_SetTrisAllocType1(GlobalContext *globalCtx, ColliderTris *tris, Actor *actor, ColliderTrisInitType1 *src) {
    ColliderTrisElement *temp_s0;
    ColliderTrisElement *temp_s0_2;
    ColliderTrisElement *temp_v0;
    s32 temp_t7;
    ColliderTrisElement *phi_s0;
    ColliderTrisElementInit *phi_s1;

    Collider_SetBaseType1(globalCtx, (Collider *) tris, actor, (ColliderInitType1 *) src);
    temp_t7 = src->count;
    tris->count = temp_t7;
    temp_v0 = zelda_malloc(temp_t7 * 0x5C);
    tris->elements = temp_v0;
    if (temp_v0 == 0) {
        tris->count = 0;
        return 0;
    }
    temp_s0 = tris->elements;
    phi_s0 = temp_s0;
    phi_s1 = src->elements;
    if ((u32) temp_s0 < (u32) &temp_s0[tris->count]) {
        do {
            Collider_InitTrisElement(globalCtx, phi_s0);
            Collider_SetTrisElement(globalCtx, phi_s0, phi_s1);
            temp_s0_2 = &phi_s0[1];
            phi_s0 = temp_s0_2;
            phi_s1 = &phi_s1[1];
        } while ((u32) temp_s0_2 < (u32) &tris->elements[tris->count]);
    }
    return 1;
}

s32 Collider_SetTris(GlobalContext *globalCtx, ColliderTris *triGroup, Actor *actor, ColliderTrisInit *src, ColliderTrisElement *tris) {
    ColliderTrisElement *temp_s0;
    s32 temp_t6;
    ColliderTrisElement *phi_s0;
    ColliderTrisElementInit *phi_s1;

    Collider_SetBase(globalCtx, (Collider *) triGroup, actor, (ColliderInit *) src);
    temp_t6 = src->count;
    triGroup->elements = tris;
    triGroup->count = temp_t6;
    phi_s0 = tris;
    phi_s1 = src->elements;
    if ((u32) tris < (u32) &tris[temp_t6]) {
        do {
            Collider_InitTrisElement(globalCtx, phi_s0);
            Collider_SetTrisElement(globalCtx, phi_s0, phi_s1);
            temp_s0 = &phi_s0[1];
            phi_s0 = temp_s0;
            phi_s1 = &phi_s1[1];
        } while ((u32) temp_s0 < (u32) &triGroup->elements[triGroup->count]);
    }
    return 1;
}

s32 Collider_InitAndSetTris(GlobalContext *globalCtx, ColliderTris *tris, Actor *actor, ColliderTrisInit *src, ColliderTrisElement *elements) {
    Collider_InitTris(globalCtx, tris);
    Collider_SetTris(globalCtx, tris, actor, src, elements);
    return 0;
}

s32 Collider_ResetTrisAT(GlobalContext *globalCtx, Collider *collider) {
    Actor *temp_s0;
    ColliderTrisElement *temp_s0_2;
    ColliderTrisElement *phi_s0;

    Collider_ResetATBase(globalCtx, collider);
    temp_s0 = collider[1].at;
    phi_s0 = (ColliderTrisElement *) temp_s0;
    if ((u32) temp_s0 < (u32) (temp_s0 + ((s32) collider[1].actor * 0x5C))) {
        do {
            Collider_ResetTrisElementAT(globalCtx, phi_s0);
            temp_s0_2 = &phi_s0[1];
            phi_s0 = temp_s0_2;
        } while ((u32) temp_s0_2 < (u32) (collider[1].at + ((s32) collider[1].actor * 0x5C)));
    }
    return 1;
}

s32 Collider_ResetTrisAC(GlobalContext *globalCtx, Collider *collider) {
    Actor *temp_s0;
    ColliderTrisElement *temp_s0_2;
    ColliderTrisElement *phi_s0;

    Collider_ResetACBase(globalCtx, collider);
    temp_s0 = collider[1].at;
    phi_s0 = (ColliderTrisElement *) temp_s0;
    if ((u32) temp_s0 < (u32) (temp_s0 + ((s32) collider[1].actor * 0x5C))) {
        do {
            Collider_ResetTrisElementAC(globalCtx, phi_s0);
            temp_s0_2 = &phi_s0[1];
            phi_s0 = temp_s0_2;
        } while ((u32) temp_s0_2 < (u32) (collider[1].at + ((s32) collider[1].actor * 0x5C)));
    }
    return 1;
}

s32 Collider_ResetTrisOC(GlobalContext *globalCtx, Collider *collider) {
    Actor *temp_s0;
    ColliderTrisElement *temp_s0_2;
    ColliderTrisElement *phi_s0;

    Collider_ResetOCBase(globalCtx, collider);
    temp_s0 = collider[1].at;
    phi_s0 = (ColliderTrisElement *) temp_s0;
    if ((u32) temp_s0 < (u32) (temp_s0 + ((s32) collider[1].actor * 0x5C))) {
        do {
            Collider_ResetTrisElementOC(globalCtx, phi_s0);
            temp_s0_2 = &phi_s0[1];
            phi_s0 = temp_s0_2;
        } while ((u32) temp_s0_2 < (u32) (collider[1].at + ((s32) collider[1].actor * 0x5C)));
    }
    return 1;
}

s32 Collider_InitQuadDim(GlobalContext *globalCtx, ColliderQuadDim *dim) {
    ColliderQuadDim *temp_t6;
    ColliderQuadDim *temp_t9;
    ColliderQuadDim *phi_t6;
    ColliderQuadDim *phi_t9;

    phi_t6 = &defaultColliderQuadDim;
    phi_t9 = dim;
    do {
        temp_t6 = phi_t6 + 0xC;
        temp_t9 = phi_t9 + 0xC;
        temp_t9->unk_-C = (s32) phi_t6->quad[0].x;
        temp_t9->unk_-8 = (s32) temp_t6->unk_-8;
        temp_t9->unk_-4 = (s32) temp_t6->unk_-4;
        phi_t6 = temp_t6;
        phi_t9 = temp_t9;
    } while (temp_t6 != &defaultColliderQuadDim.acDist);
    temp_t9->quad[0].x = temp_t6->quad[0].x;
    return 1;
}

s32 Collider_DestroyQuadDim(GlobalContext *globalCtx, ColliderQuadDim *dim) {
    return 1;
}

s32 Collider_ResetQuadACDist(GlobalContext *globalCtx, ColliderQuadDim *dim) {
    dim->acDist = 1e38.0f;
    return 1;
}

void Collider_SetQuadMidpoints(ColliderQuadDim *dim) {
    dim->dcMid.x = (s16) (s32) ((dim->quad[2].x + dim->quad[3].x) * 0.5f);
    dim->dcMid.y = (s16) (s32) ((dim->quad[2].y + dim->quad[3].y) * 0.5f);
    dim->dcMid.z = (s16) (s32) ((dim->quad[2].z + dim->quad[3].z) * 0.5f);
    dim->baMid.x = (s16) (s32) ((dim->quad[0].x + dim->quad[1].x) * 0.5f);
    dim->baMid.y = (s16) (s32) ((dim->quad[0].y + dim->quad[1].y) * 0.5f);
    dim->baMid.z = (s16) (s32) ((dim->quad[0].z + dim->quad[1].z) * 0.5f);
}

s32 Collider_SetQuadDim(GlobalContext *globalCtx, ColliderQuadDim *dim, ColliderQuadDimInit *init) {
    dim->quad[0].x = init->quad[0].x;
    dim->quad[0].y = init->quad[0].y;
    dim->quad[0].z = init->quad[0].z;
    dim->quad[1].x = init->quad[1].x;
    dim->quad[1].y = init->quad[1].y;
    dim->quad[1].z = init->quad[1].z;
    dim->quad[2].x = init->quad[2].x;
    dim->quad[2].y = init->quad[2].y;
    dim->quad[2].z = init->quad[2].z;
    dim->quad[3].x = init->quad[3].x;
    dim->quad[3].y = init->quad[3].y;
    dim->quad[3].z = init->quad[3].z;
    Collider_SetQuadMidpoints(dim);
    return 1;
}

s32 Collider_InitQuad(GlobalContext *globalCtx, ColliderQuad *collider) {
    Collider_InitBase(globalCtx, (Collider *) collider);
    Collider_InitInfo(globalCtx, &collider->info);
    Collider_InitQuadDim(globalCtx, &collider->dim);
    return 1;
}

s32 Collider_DestroyQuad(GlobalContext *globalCtx, ColliderQuad *collider) {
    Collider_DestroyBase(globalCtx, (Collider *) collider);
    Collider_DestroyInfo(globalCtx, &collider->info);
    Collider_DestroyQuadDim(globalCtx, &collider->dim);
    return 1;
}

s32 Collider_SetQuadType1(GlobalContext *globalCtx, ColliderQuad *collider, Actor *actor, ColliderQuadInitType1 *src) {
    Collider_SetBaseType1(globalCtx, (Collider *) collider, actor, (ColliderInitType1 *) src);
    Collider_SetInfo(globalCtx, &collider->info, &src->info);
    Collider_SetQuadDim(globalCtx, &collider->dim, &src->dim);
    return 1;
}

s32 Collider_SetQuad(GlobalContext *globalCtx, ColliderQuad *collider, Actor *actor, ColliderQuadInit *src) {
    Collider_SetBase(globalCtx, (Collider *) collider, actor, (ColliderInit *) src);
    Collider_SetInfo(globalCtx, &collider->info, &src->info);
    Collider_SetQuadDim(globalCtx, &collider->dim, &src->dim);
    return 1;
}

s32 Collider_InitAndSetQuad(GlobalContext *globalCtx, ColliderQuad *collider, Actor *actor, ColliderQuadInit *src) {
    Collider_InitQuad(globalCtx, collider);
    Collider_SetQuad(globalCtx, collider, actor, src);
    return 0;
}

s32 Collider_ResetQuadAT(GlobalContext *globalCtx, Collider *collider) {
    Collider_ResetATBase(globalCtx, collider);
    Collider_ResetATInfo(globalCtx, (ColliderInfo *) &collider[1]);
    Collider_ResetQuadACDist(globalCtx, (ColliderQuadDim *) &collider[2].atFlags);
    return 1;
}

s32 Collider_ResetQuadAC(GlobalContext *globalCtx, Collider *collider) {
    Collider_ResetACBase(globalCtx, collider);
    Collider_ResetACInfo(globalCtx, (ColliderInfo *) &collider[1]);
    return 1;
}

s32 Collider_ResetQuadOC(GlobalContext *globalCtx, Collider *collider) {
    Collider_ResetOCBase(globalCtx, collider);
    Collider_ResetOCInfo(globalCtx, (ColliderInfo *) &collider[1]);
    return 1;
}

s32 Collider_QuadSetNearestAC(GlobalContext *globalCtx, ColliderQuad *quad, Vec3f *hitPos) {
    ? sp20;
    Collider *temp_a1_2;
    ColliderInfo *temp_a1_3;
    Vec3s *temp_a1;
    f32 temp_f0;
    s32 phi_v0;

    temp_a1 = &quad->dim.dcMid;
    if ((quad->info.toucherFlags & 4) == 0) {
        return 1;
    }
    quad = quad;
    Math_Vec3s_ToVec3f((Vec3f *) &sp20, temp_a1);
    temp_f0 = Math3D_DistanceSquared((Vec3f *) &sp20, hitPos);
    phi_v0 = 0;
    if (temp_f0 < quad->dim.acDist) {
        temp_a1_2 = quad->info.atHit;
        quad->dim.acDist = temp_f0;
        if (temp_a1_2 != 0) {
            quad = quad;
            Collider_ResetACBase(globalCtx, temp_a1_2);
        }
        temp_a1_3 = quad->info.atHitInfo;
        if (temp_a1_3 != 0) {
            Collider_ResetACInfo(globalCtx, temp_a1_3);
        }
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 Collider_InitSphere(GlobalContext *globalCtx, ColliderSphere *collider) {
    Collider_InitBase(globalCtx, (Collider *) collider);
    Collider_InitInfo(globalCtx, &collider->info);
    Collider_InitJntSphElementDim(globalCtx, &collider->dim);
    return 1;
}

s32 Collider_DestroySphere(GlobalContext *globalCtx, ColliderSphere *collider) {
    Collider_DestroyBase(globalCtx, (Collider *) collider);
    Collider_DestroyInfo(globalCtx, &collider->info);
    Collider_DestroyJntSphElementDim(globalCtx, &collider->dim);
    return 1;
}

s32 Collider_SetSphere(GlobalContext *globalCtx, ColliderSphere *collider, Actor *actor, ColliderSphereInit *src) {
    Collider_SetBase(globalCtx, (Collider *) collider, actor, (ColliderInit *) src);
    Collider_SetInfo(globalCtx, &collider->info, &src->info);
    Collider_SetJntSphElementDim(globalCtx, &collider->dim, &src->dim);
    return 1;
}

s32 Collider_InitAndSetSphere(GlobalContext *globalCtx, ColliderSphere *collider, Actor *actor, ColliderSphereInit *src) {
    Collider_InitSphere(globalCtx, collider);
    Collider_SetSphere(globalCtx, collider, actor, src);
    return 0;
}

s32 Collider_ResetSphereAT(GlobalContext *globalCtx, Collider *collider) {
    Collider_ResetATBase(globalCtx, collider);
    Collider_ResetATInfo(globalCtx, (ColliderInfo *) &collider[1]);
    return 1;
}

s32 Collider_ResetSphereAC(GlobalContext *globalCtx, Collider *collider) {
    Collider_ResetACBase(globalCtx, collider);
    Collider_ResetACInfo(globalCtx, (ColliderInfo *) &collider[1]);
    return 1;
}

s32 Collider_ResetSphereOC(GlobalContext *globalCtx, Collider *collider) {
    Collider_ResetOCBase(globalCtx, collider);
    Collider_ResetOCInfo(globalCtx, (ColliderInfo *) &collider[1]);
    return 1;
}

s32 Collider_InitLine(GlobalContext *globalCtx, OcLine *line) {
    Math_Vec3f_Copy((Vec3f *) line, &defaultLinePoint);
    Math_Vec3f_Copy(&line->line.b, &defaultLinePoint);
    return 1;
}

s32 Collider_DestroyLine(GlobalContext *globalCtx, OcLine *line) {
    return 1;
}

s32 Collider_SetLinePoints(GlobalContext *globalCtx, OcLine *line, Vec3f *a, Vec3f *b) {
    Math_Vec3f_Copy((Vec3f *) line, a);
    Math_Vec3f_Copy(&line->line.b, b);
    return 1;
}

s32 Collider_SetLine(GlobalContext *globalCtx, OcLine *line, OcLine *src) {
    line->ocFlags = src->ocFlags;
    Collider_SetLinePoints(globalCtx, line, (Vec3f *) src, &src->line.b);
    return 1;
}

s32 Collider_ResetLineOC(GlobalContext *globalCtx, OcLine *line) {
    line->ocFlags &= 0xFFFE;
    return 1;
}

void CollisionCheck_InitContext(GlobalContext *globalCtx, CollisionCheckContext *colCtxt) {
    colCtxt->sacFlags = 0;
    CollisionCheck_ClearContext(globalCtx, colCtxt);
}

void CollisionCheck_DestroyContext(GlobalContext *globalCtx, CollisionCheckContext *colCtxt) {

}

/*
Failed to decompile function CollisionCheck_ClearContext:

Label L800E24D0 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void CollisionCheck_EnableSAC(GlobalContext *globalCtx, CollisionCheckContext *colCtxt) {
    colCtxt->sacFlags |= 1;
}

void CollisionCheck_DisableSAC(GlobalContext *globalCtx, CollisionCheckContext *colCtxt) {
    colCtxt->sacFlags &= 0xFFFE;
}

s32 CollisionCheck_SetAT(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *collider) {
    Actor *temp_v1_2;
    s16 temp_v1;

    colCtxt = colCtxt;
    if (FrameAdvance_IsEnabled(globalCtx) != 0) {
        return -1;
    }
    colCtxt = colCtxt;
    sATResetFuncs[collider->shape](globalCtx, collider);
    temp_v1_2 = collider->actor;
    if ((temp_v1_2 != 0) && (temp_v1_2->update == 0)) {
        return -1;
    }
    temp_v1 = colCtxt->colATCount;
    if ((s32) temp_v1 >= 0x32) {
        return -1;
    }
    if ((colCtxt->sacFlags & 1) != 0) {
        return -1;
    }
    colCtxt->colAT[temp_v1] = collider;
    colCtxt->colATCount += 1;
    return (s32) temp_v1;
}

s32 CollisionCheck_SetAT_SAC(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *collider, s32 index) {
    Actor *temp_v1;
    Collider *temp_a2;
    s16 temp_v0;
    s32 phi_a3;

    temp_a2 = collider;
    if (FrameAdvance_IsEnabled(globalCtx) != 0) {
        return -1;
    }
    collider = temp_a2;
    index = index;
    sATResetFuncs[temp_a2->shape](globalCtx, temp_a2);
    temp_v1 = collider->actor;
    phi_a3 = index;
    if ((temp_v1 != 0) && (temp_v1->update == 0)) {
        return -1;
    }
    if ((colCtxt->sacFlags & 1) != 0) {
        if (index >= (s32) colCtxt->colATCount) {
            return -1;
        }
        colCtxt->colAT[index] = collider;
        goto block_12;
    }
    temp_v0 = colCtxt->colATCount;
    if ((s32) temp_v0 >= 0x32) {
        return -1;
    }
    colCtxt->colAT[temp_v0] = collider;
    colCtxt->colATCount += 1;
    phi_a3 = (s32) temp_v0;
block_12:
    return phi_a3;
}

s32 CollisionCheck_SetAC(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *collider) {
    Actor *temp_v1_2;
    s32 temp_v1;

    colCtxt = colCtxt;
    if (FrameAdvance_IsEnabled(globalCtx) != 0) {
        return -1;
    }
    colCtxt = colCtxt;
    sACResetFuncs[collider->shape](globalCtx, collider);
    temp_v1_2 = collider->actor;
    if ((temp_v1_2 != 0) && (temp_v1_2->update == 0)) {
        return -1;
    }
    temp_v1 = colCtxt->colACCount;
    if (temp_v1 >= 0x3C) {
        return -1;
    }
    if ((colCtxt->sacFlags & 1) != 0) {
        return -1;
    }
    colCtxt->colAC[temp_v1] = collider;
    colCtxt->colACCount += 1;
    return temp_v1;
}

s32 CollisionCheck_SetAC_SAC(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *collider, s32 index) {
    Actor *temp_v1;
    Collider *temp_a2;
    s32 temp_v0;
    s32 phi_a3;

    temp_a2 = collider;
    if (FrameAdvance_IsEnabled(globalCtx) != 0) {
        return -1;
    }
    collider = temp_a2;
    index = index;
    sACResetFuncs[temp_a2->shape](globalCtx, temp_a2);
    temp_v1 = collider->actor;
    phi_a3 = index;
    if ((temp_v1 != 0) && (temp_v1->update == 0)) {
        return -1;
    }
    if ((colCtxt->sacFlags & 1) != 0) {
        if (index >= colCtxt->colACCount) {
            return -1;
        }
        colCtxt->colAC[index] = collider;
        goto block_12;
    }
    temp_v0 = colCtxt->colACCount;
    if (temp_v0 >= 0x3C) {
        return -1;
    }
    colCtxt->colAC[temp_v0] = collider;
    colCtxt->colACCount += 1;
    phi_a3 = temp_v0;
block_12:
    return phi_a3;
}

s32 CollisionCheck_SetOC(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *collider) {
    Actor *temp_v1_2;
    s32 temp_v1;

    colCtxt = colCtxt;
    if (FrameAdvance_IsEnabled(globalCtx) != 0) {
        return -1;
    }
    colCtxt = colCtxt;
    sOCResetFuncs[collider->shape](globalCtx, collider);
    temp_v1_2 = collider->actor;
    if ((temp_v1_2 != 0) && (temp_v1_2->update == 0)) {
        return -1;
    }
    temp_v1 = colCtxt->colOCCount;
    if (temp_v1 >= 0x32) {
        return -1;
    }
    if ((colCtxt->sacFlags & 1) != 0) {
        return -1;
    }
    colCtxt->colOC[temp_v1] = collider;
    colCtxt->colOCCount += 1;
    return temp_v1;
}

s32 CollisionCheck_SetOC_SAC(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *collider, s32 index) {
    Actor *temp_v1;
    Collider *temp_a2;
    s32 temp_v0;
    s32 phi_a3;

    temp_a2 = collider;
    if (FrameAdvance_IsEnabled(globalCtx) != 0) {
        return -1;
    }
    collider = temp_a2;
    index = index;
    sOCResetFuncs[temp_a2->shape](globalCtx, temp_a2);
    temp_v1 = collider->actor;
    phi_a3 = index;
    if ((temp_v1 != 0) && (temp_v1->update == 0)) {
        return -1;
    }
    if ((colCtxt->sacFlags & 1) != 0) {
        if (index >= colCtxt->colOCCount) {
            return -1;
        }
        colCtxt->colAT[index] = collider;
        goto block_12;
    }
    temp_v0 = colCtxt->colOCCount;
    if (temp_v0 >= 0x32) {
        return -1;
    }
    colCtxt->colOC[temp_v0] = collider;
    colCtxt->colOCCount += 1;
    phi_a3 = temp_v0;
block_12:
    return phi_a3;
}

s32 CollisionCheck_SetOCLine(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, OcLine *line) {
    s32 temp_v1;

    colCtxt = colCtxt;
    if (FrameAdvance_IsEnabled(globalCtx) != 0) {
        return -1;
    }
    colCtxt = colCtxt;
    Collider_ResetLineOC(globalCtx, line);
    temp_v1 = colCtxt->colLineCount;
    if (temp_v1 >= 3) {
        return -1;
    }
    colCtxt->colLine[temp_v1] = line;
    colCtxt->colLineCount += 1;
    return temp_v1;
}

s32 CollisionCheck_SkipTouch(ColliderInfo *info) {
    if ((info->toucherFlags & 1) == 0) {
        return 1;
    }
    return 0;
}

s32 CollisionCheck_SkipBump(ColliderInfo *info) {
    if ((info->bumperFlags & 1) == 0) {
        return 1;
    }
    return 0;
}

s32 CollisionCheck_NoSharedFlags(ColliderInfo *toucher, ColliderInfo *bumper) {
    if ((toucher->toucher.dmgFlags & bumper->bumper.dmgFlags) == 0) {
        return 1;
    }
    return 0;
}

void CollisionCheck_NoBlood(GlobalContext *globalCtx, Collider *collider, Vec3f *v) {

}

void CollisionCheck_BlueBlood(GlobalContext *globalCtx, Collider *collider, Vec3f *v) {
    s32 sp24;
    s16 *temp_at;

    temp_at = &D_801EEC00.position.z;
    *temp_at = (s16) (s32) v->x;
    *temp_at = (s16) (s32) v->y;
    *temp_at = (s16) (s32) v->z;
    D_801EEC00.particleFactor1 = 5;
    D_801EEC00.particleFactor2 = 5;
    D_801EEC00.colorStart[0].r = 0xA;
    D_801EEC00.colorStart[0].g = 0xA;
    D_801EEC00.colorStart[0].b = 0xC8;
    D_801EEC00.colorStart[0].a = 0xFF;
    D_801EEC00.colorStart[1].r = 0;
    D_801EEC00.colorStart[1].g = 0;
    D_801EEC00.colorStart[1].b = 0x80;
    D_801EEC00.colorStart[1].a = 0xFF;
    D_801EEC00.colorStart[2].r = 0;
    D_801EEC00.colorStart[2].g = 0;
    D_801EEC00.colorStart[2].b = 0x80;
    D_801EEC00.colorStart[2].a = 0xFF;
    D_801EEC00.colorStart[3].r = 0;
    D_801EEC00.colorStart[3].g = 0;
    D_801EEC00.colorStart[3].b = 0x80;
    D_801EEC00.colorStart[3].a = 0xFF;
    D_801EEC00.colorEnd[0].r = 0;
    D_801EEC00.colorEnd[0].g = 0;
    D_801EEC00.colorEnd[0].b = 0x20;
    D_801EEC00.colorEnd[0].a = 0;
    D_801EEC00.colorEnd[1].r = 0;
    D_801EEC00.colorEnd[1].g = 0;
    D_801EEC00.colorEnd[1].b = 0x20;
    D_801EEC00.colorEnd[1].a = 0;
    D_801EEC00.colorEnd[2].r = 0;
    D_801EEC00.colorEnd[2].g = 0;
    D_801EEC00.colorEnd[2].b = 0x40;
    D_801EEC00.colorEnd[2].a = 0;
    D_801EEC00.colorEnd[3].r = 0;
    D_801EEC00.colorEnd[3].g = 0;
    D_801EEC00.colorEnd[3].b = 0x40;
    D_801EEC00.colorEnd[3].a = 0;
    D_801EEC00.age = 0;
    D_801EEC00.duration = 0x10;
    D_801EEC00.velocity = 8.0f;
    D_801EEC00.gravity = -1.0f;
    Effect_Add(globalCtx, &sp24, 0, 0U, (u8) 1, (void *) &D_801EEC00);
}

void CollisionCheck_GreenBlood(GlobalContext *globalCtx, Collider *collider, Vec3f *v) {
    s32 sp24;
    s16 *temp_at;

    temp_at = &D_801EF0C8.position.z;
    *temp_at = (s16) (s32) v->x;
    *temp_at = (s16) (s32) v->y;
    *temp_at = (s16) (s32) v->z;
    D_801EF0C8.particleFactor1 = 5;
    D_801EF0C8.particleFactor2 = 5;
    D_801EF0C8.colorStart[0].r = 0xA;
    D_801EF0C8.colorStart[0].g = 0xC8;
    D_801EF0C8.colorStart[0].b = 0xA;
    D_801EF0C8.colorStart[0].a = 0xFF;
    D_801EF0C8.colorStart[1].r = 0;
    D_801EF0C8.colorStart[1].g = 0x80;
    D_801EF0C8.colorStart[1].b = 0;
    D_801EF0C8.colorStart[1].a = 0xFF;
    D_801EF0C8.colorStart[2].r = 0;
    D_801EF0C8.colorStart[2].g = 0x80;
    D_801EF0C8.colorStart[2].b = 0;
    D_801EF0C8.colorStart[2].a = 0xFF;
    D_801EF0C8.colorStart[3].r = 0;
    D_801EF0C8.colorStart[3].g = 0x80;
    D_801EF0C8.colorStart[3].b = 0;
    D_801EF0C8.colorStart[3].a = 0xFF;
    D_801EF0C8.colorEnd[0].r = 0;
    D_801EF0C8.colorEnd[0].g = 0x20;
    D_801EF0C8.colorEnd[0].b = 0;
    D_801EF0C8.colorEnd[0].a = 0;
    D_801EF0C8.colorEnd[1].r = 0;
    D_801EF0C8.colorEnd[1].g = 0x20;
    D_801EF0C8.colorEnd[1].b = 0;
    D_801EF0C8.colorEnd[1].a = 0;
    D_801EF0C8.colorEnd[2].r = 0;
    D_801EF0C8.colorEnd[2].g = 0x40;
    D_801EF0C8.colorEnd[2].b = 0;
    D_801EF0C8.colorEnd[2].a = 0;
    D_801EF0C8.colorEnd[3].r = 0;
    D_801EF0C8.colorEnd[3].g = 0x40;
    D_801EF0C8.colorEnd[3].b = 0;
    D_801EF0C8.colorEnd[3].a = 0;
    D_801EF0C8.age = 0;
    D_801EF0C8.duration = 0x10;
    D_801EF0C8.velocity = 8.0f;
    D_801EF0C8.gravity = -1.0f;
    Effect_Add(globalCtx, &sp24, 0, 0U, (u8) 1, (void *) &D_801EF0C8);
}

void CollisionCheck_WaterBurst(GlobalContext *globalCtx, Collider *collider, Vec3f *v) {
    EffectSsSibuki_SpawnBurst(globalCtx, v);
    CollisionCheck_SpawnWaterDroplets(globalCtx, v);
}

void CollisionCheck_RedBlood(GlobalContext *globalCtx, Collider *collider, Vec3f *v) {
    CollisionCheck_SpawnRedBlood(globalCtx, v);
}

void CollisionCheck_RedBloodUnused(GlobalContext *globalCtx, Collider *collider, Vec3f *v) {
    CollisionCheck_SpawnRedBlood(globalCtx, v);
}

void CollisionCheck_HitSolid(GlobalContext *globalCtx, ColliderInfo *info, Collider *collider, Vec3f *hitPos) {
    Actor *temp_v0_2;
    Actor *temp_v0_3;
    Actor *temp_v0_4;
    Actor *temp_v0_5;
    s32 temp_v0;

    temp_v0 = info->toucherFlags & 0x18;
    if ((temp_v0 == 0) && (collider->colType != 9)) {
        EffectSsHitMark_SpawnFixedScale(globalCtx, 0, hitPos);
        temp_v0_2 = collider->actor;
        if (temp_v0_2 == 0) {
            play_sound(0x1806U);
            return;
        }
        func_8019F1C0(&temp_v0_2->projectedPos, 0x1806U);
        return;
    }
    if (temp_v0 == 0) {
        EffectSsHitMark_SpawnFixedScale(globalCtx, 3, hitPos);
        temp_v0_3 = collider->actor;
        if (temp_v0_3 == 0) {
            CollisionCheck_SpawnShieldParticlesMetal(globalCtx, hitPos);
            return;
        }
        CollisionCheck_SpawnShieldParticlesMetalSound(globalCtx, hitPos, &temp_v0_3->projectedPos);
        return;
    }
    if (temp_v0 == 8) {
        EffectSsHitMark_SpawnFixedScale(globalCtx, 0, hitPos);
        temp_v0_4 = collider->actor;
        if (temp_v0_4 == 0) {
            play_sound(0x1806U);
            return;
        }
        func_8019F1C0(&temp_v0_4->projectedPos, 0x1806U);
        return;
    }
    if (temp_v0 == 0x10) {
        EffectSsHitMark_SpawnFixedScale(globalCtx, 1, hitPos);
        temp_v0_5 = collider->actor;
        if (temp_v0_5 == 0) {
            play_sound(0x1837U);
            return;
        }
        func_8019F1C0(&temp_v0_5->projectedPos, 0x1837U);
        /* Duplicate return node #17. Try simplifying control flow for better match */
    }
}

s32 CollisionCheck_SwordHitAudio(Collider *at, ColliderInfo *acInfo) {
    Actor *temp_v1;
    u8 temp_v0;

    temp_v1 = at->actor;
    if ((temp_v1 != 0) && (temp_v1->category == 2)) {
        temp_v0 = acInfo->elemType;
        if (temp_v0 == 0) {
            func_8019F1C0(&temp_v1->projectedPos, 0x1811U);
        } else if (temp_v0 == 1) {
            func_8019F1C0(&temp_v1->projectedPos, 0x1824U);
        } else if (temp_v0 == 2) {
            func_8019F1C0(&temp_v1->projectedPos, 0U);
        } else if (temp_v0 == 3) {
            func_8019F1C0(&temp_v1->projectedPos, 0U);
        }
    }
    return 1;
}

void CollisionCheck_HitEffects(GlobalContext *globalCtx, Collider *at, ColliderInfo *atInfo, Collider *ac, ColliderInfo *acInfo, Vec3f *hitPos) {
    Actor *temp_v0_2;
    Actor *temp_v0_3;
    Actor *temp_v0_4;
    u8 temp_a1;
    u8 temp_v0;
    Actor *phi_v0;

    if (((acInfo->bumperFlags & 0x40) == 0) && ((temp_v0 = atInfo->toucherFlags, ((temp_v0 & 0x20) != 0)) || ((temp_v0 & 0x40) == 0))) {
        temp_v0_2 = ac->actor;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 != 0) {
            sBloodFuncs[sHitInfo[ac->colType].blood](globalCtx, ac, hitPos);
            phi_v0 = ac->actor;
        }
        if (phi_v0 != 0) {
            temp_a1 = *(&sHitInfo->effect + (ac->colType * 2));
            if (temp_a1 == 3) {
                CollisionCheck_HitSolid(globalCtx, atInfo, ac, hitPos);
                return;
            }
            if (temp_a1 == 4) {
                temp_v0_3 = at->actor;
                if (temp_v0_3 == 0) {
                    CollisionCheck_SpawnShieldParticles(globalCtx, hitPos);
                    play_sound(0x1837U);
                    return;
                }
                CollisionCheck_SpawnShieldParticlesWood(globalCtx, hitPos, &temp_v0_3->projectedPos);
                return;
            }
            if ((temp_a1 != 5) && (EffectSsHitMark_SpawnFixedScale(globalCtx, (s32) temp_a1, hitPos), ((acInfo->bumperFlags & 0x20) == 0))) {
                CollisionCheck_SwordHitAudio(at, acInfo);
                return;
            }
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return;
        }
        EffectSsHitMark_SpawnFixedScale(globalCtx, 0, hitPos);
        temp_v0_4 = ac->actor;
        if (temp_v0_4 == 0) {
            play_sound(0x1806U);
            return;
        }
        func_8019F1C0(&temp_v0_4->projectedPos, 0x1806U);
        /* Duplicate return node #18. Try simplifying control flow for better match */
    }
}

void CollisionCheck_SetBounce(Collider *at, Collider *ac) {
    at->atFlags |= 4;
    ac->acFlags |= 0x80;
}

s32 CollisionCheck_SetATvsAC(GlobalContext *globalCtx, Collider *at, ColliderInfo *atInfo, Vec3f *atPos, Collider *ac, ColliderInfo *acInfo, Vec3f *acPos, Vec3f *hitPos) {
    u32 sp38;
    Actor *temp_v0;
    Actor *temp_v0_2;
    f32 temp_f0;
    u8 temp_v0_3;

    if (CollisionCheck_GetToucherDamage(at, atInfo, ac, acInfo) != 0) {
        temp_f0 = CollisionCheck_GetDamageAndEffectOnBumper(at, atInfo, ac, acInfo, &sp38);
        if (temp_f0 < 1.0f) {
            if (sp38 == 0) {
                return 0;
            }
            goto block_7;
        }
        if ((CollisionCheck_ApplyBumperDefense(temp_f0, acInfo) < 1.0f) && (sp38 == 0)) {
            return 0;
        }
        goto block_7;
    }
block_7:
    if (((ac->acFlags & 4) != 0) && (at->actor != 0) && (ac->actor != 0)) {
        CollisionCheck_SetBounce(at, ac);
    }
    if ((acInfo->bumperFlags & 8) == 0) {
        at->atFlags |= 2;
        at->at = ac->actor;
        atInfo->atHit = ac;
        atInfo->toucherFlags |= 2;
        atInfo->atHitInfo = acInfo;
        if ((atInfo->bumperFlags & 2) == 0) {
            atInfo->bumper.hitPos.x = (s16) (s32) hitPos->x;
            atInfo->bumper.hitPos.y = (s16) (s32) hitPos->y;
            atInfo->bumper.hitPos.z = (s16) (s32) hitPos->z;
        }
        temp_v0 = at->actor;
        if (temp_v0 != 0) {
            temp_v0->colChkInfo.atHitEffect = acInfo->bumper.effect;
        }
    }
    if ((atInfo->ocElemFlags & 4) == 0) {
        ac->acFlags |= 2;
        ac->ac = at->actor;
        acInfo->acHit = at;
        acInfo->acHitInfo = atInfo;
        acInfo->bumperFlags |= 2;
        temp_v0_2 = ac->actor;
        if (temp_v0_2 != 0) {
            temp_v0_2->colChkInfo.acHitEffect = atInfo->toucher.effect;
        }
        acInfo->bumper.hitPos.x = (s16) (s32) hitPos->x;
        acInfo->bumper.hitPos.y = (s16) (s32) hitPos->y;
        acInfo->bumper.hitPos.z = (s16) (s32) hitPos->z;
    }
    if (((atInfo->toucherFlags & 0x20) == 0) && (temp_v0_3 = ac->colType, (temp_v0_3 != 9)) && (temp_v0_3 != 0xB) && (temp_v0_3 != 0xC)) {
        acInfo->bumperFlags |= 0x80;
    } else {
        CollisionCheck_HitEffects(globalCtx, at, atInfo, ac, acInfo, hitPos);
        atInfo->toucherFlags |= 0x40;
    }
    return 1;
}

void CollisionCheck_TrisAvgPoint(ColliderTrisElement *tri, Vec3f *avg) {
    avg->x = (tri->dim.vtx[2].x + (tri->dim.vtx[0].x + tri->dim.vtx[1].x)) * 0.33333334f;
    avg->y = (tri->dim.vtx[2].y + (tri->dim.vtx[0].y + tri->dim.vtx[1].y)) * 0.33333334f;
    avg->z = (tri->dim.vtx[2].z + (tri->dim.vtx[0].z + tri->dim.vtx[1].z)) * 0.33333334f;
}

void CollisionCheck_QuadAvgPoint(ColliderQuad *quad, Vec3f *avg) {
    avg->x = (quad->dim.quad[2].x + quad->dim.quad[3].x + quad->dim.quad[1].x + quad->dim.quad[0].x) * 0.25f;
    avg->y = (quad->dim.quad[2].y + quad->dim.quad[3].y + quad->dim.quad[1].y + quad->dim.quad[0].y) * 0.25f;
    avg->z = (quad->dim.quad[2].z + quad->dim.quad[3].z + quad->dim.quad[1].z + quad->dim.quad[0].z) * 0.25f;
}

void CollisionCheck_AC_JntSphVsJntSph(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    Collider *sp9C;
    f32 sp8C;
    f32 sp88;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp6C;
    f32 sp60;
    Actor *temp_s2;
    Actor *temp_v0;
    Actor *temp_v1;
    Collider **temp_s2_2;
    Collider **temp_s3;
    ColliderBump *temp_s0;
    ColliderBump *temp_s1;
    f32 temp_f0;
    ColliderInfo *phi_s3;
    ColliderInfo *phi_s2;

    sp9C = colAT;
    temp_v1 = colAT[1].actor;
    if ((s32) temp_v1 > 0) {
        temp_v0 = colAT[1].at;
        if ((temp_v0 != 0) && ((s32) colAC[1].actor > 0) && (colAC[1].at != 0)) {
            phi_s3 = (ColliderInfo *) temp_v0;
            if ((u32) temp_v0 < (u32) (temp_v0 + ((s32) temp_v1 << 6))) {
loop_6:
                if ((CollisionCheck_SkipTouch(phi_s3) == 0) && (temp_s2 = colAC[1].at, phi_s2 = (ColliderInfo *) temp_s2, (((u32) temp_s2 < (u32) (temp_s2 + ((s32) colAC[1].actor << 6))) != 0))) {
loop_8:
                    if ((CollisionCheck_SkipBump(phi_s2) == 0) && (temp_s0 = &phi_s3[1].bumper, (CollisionCheck_NoSharedFlags(phi_s3, phi_s2) == 0)) && (temp_s1 = &phi_s2[1].bumper, (Math3D_ColSphereSphereIntersectAndDistance((Sphere16 *) temp_s0, (Sphere16 *) temp_s1, &sp8C, &sp88) != 0))) {
                        Math_Vec3s_ToVec3f((Vec3f *) &sp6C, (Vec3s *) temp_s0);
                        Math_Vec3s_ToVec3f((Vec3f *) &sp60, (Vec3s *) temp_s1);
                        if (!(fabsf(sp88) < 0.008f)) {
                            temp_f0 = (f32) phi_s2[1].bumper.hitPos.x / sp88;
                            sp78 = ((sp6C - sp60) * temp_f0) + sp60;
                            sp7C = ((sp70 - sp64) * temp_f0) + sp64;
                            sp80 = ((sp74 - sp68) * temp_f0) + sp68;
                        } else {
                            Math_Vec3f_Copy((Vec3f *) &sp78, (Vec3f *) &sp6C);
                        }
                        CollisionCheck_SetATvsAC(globalCtx, colAT, phi_s3, (Vec3f *) &sp6C, colAC, phi_s2, (Vec3f *) &sp60, (Vec3f *) &sp78);
                        if ((colAC->ocFlags2 & 0x40) != 0) {
                            goto block_15;
                        }
                    } else {
block_15:
                        temp_s2_2 = &phi_s2[1].atHit;
                        phi_s2 = (ColliderInfo *) temp_s2_2;
                        if ((u32) temp_s2_2 >= (u32) (colAC[1].at + ((s32) colAC[1].actor << 6))) {
                            goto block_16;
                        }
                        goto loop_8;
                    }
                } else {
block_16:
                    temp_s3 = &phi_s3[1].atHit;
                    phi_s3 = (ColliderInfo *) temp_s3;
                    if ((u32) temp_s3 < (u32) (sp9C[1].at + ((s32) sp9C[1].actor << 6))) {
                        goto loop_6;
                    }
                }
            }
        }
    }
}

void CollisionCheck_AC_JntSphVsCyl(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp64;
    f32 sp58;
    Actor *temp_s1;
    Collider **temp_s1_2;
    Collider *temp_s6;
    ColliderBump *temp_s0;
    f32 temp_f0;
    ColliderInfo *phi_s1;

    if (((s32) colAT[1].actor > 0) && (colAT[1].at != 0) && ((s32) colAC->unk_40 > 0) && (temp_s6 = &colAC[1], ((s32) colAC->unk_42 > 0)) && (CollisionCheck_SkipBump((ColliderInfo *) temp_s6) == 0) && (temp_s1 = colAT[1].at, phi_s1 = (ColliderInfo *) temp_s1, (((u32) temp_s1 < (u32) (temp_s1 + ((s32) colAT[1].actor << 6))) != 0))) {
loop_6:
        if ((CollisionCheck_SkipTouch(phi_s1) == 0) && (temp_s0 = &phi_s1[1].bumper, (CollisionCheck_NoSharedFlags(phi_s1, (ColliderInfo *) temp_s6) == 0)) && (Math3D_ColSphereCylinderDistanceAndAmount((Sphere16 *) temp_s0, (Cylinder16 *) &colAC[2].atFlags, &sp80, &sp7C) != 0)) {
            Math_Vec3s_ToVec3f((Vec3f *) &sp64, (Vec3s *) temp_s0);
            Math_Vec3s_ToVec3f((Vec3f *) &sp58, &colAC[2].unk_16);
            if (!(fabsf(sp7C) < 0.008f)) {
                temp_f0 = (f32) colAC->unk_40 / sp7C;
                if (temp_f0 <= 1.0f) {
                    sp70 = ((sp64 - sp58) * temp_f0) + sp58;
                    sp74 = ((sp68 - sp5C) * temp_f0) + sp5C;
                    sp78 = ((sp6C - sp60) * temp_f0) + sp60;
                } else {
                    Math_Vec3f_Copy((Vec3f *) &sp70, (Vec3f *) &sp64);
                }
            } else {
                Math_Vec3f_Copy((Vec3f *) &sp70, (Vec3f *) &sp64);
            }
            CollisionCheck_SetATvsAC(globalCtx, colAT, phi_s1, (Vec3f *) &sp64, colAC, (ColliderInfo *) temp_s6, (Vec3f *) &sp58, (Vec3f *) &sp70);
            return;
        }
        temp_s1_2 = &phi_s1[1].atHit;
        phi_s1 = (ColliderInfo *) temp_s1_2;
        if ((u32) temp_s1_2 >= (u32) (colAT[1].at + ((s32) colAT[1].actor << 6))) {
            /* Duplicate return node #16. Try simplifying control flow for better match */
            return;
        }
        goto loop_6;
    }
}

void CollisionCheck_AC_JntSphVsTris(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    ? sp6C;
    ? sp60;
    ? sp54;
    Actor *temp_s0;
    Actor *temp_v0;
    Actor *temp_v1;
    Collider **temp_s2;
    ColliderBump *temp_s1;
    u8 *temp_s0_2;
    ColliderInfo *phi_s2;
    ColliderInfo *phi_s0;

    temp_v1 = colAT[1].actor;
    if (((s32) temp_v1 > 0) && (temp_v0 = colAT[1].at, (temp_v0 != 0)) && ((s32) colAC[1].actor > 0) && (colAC[1].at != 0) && (phi_s2 = (ColliderInfo *) temp_v0, (((u32) temp_v0 < (u32) (temp_v0 + ((s32) temp_v1 << 6))) != 0))) {
loop_6:
        if ((CollisionCheck_SkipTouch(phi_s2) == 0) && (temp_s0 = colAC[1].at, phi_s0 = (ColliderInfo *) temp_s0, (((u32) temp_s0 < (u32) (temp_s0 + ((s32) colAC[1].actor * 0x5C))) != 0))) {
loop_8:
            if ((CollisionCheck_SkipBump(phi_s0) == 0) && (temp_s1 = &phi_s2[1].bumper, (CollisionCheck_NoSharedFlags(phi_s2, phi_s0) == 0)) && (Math3D_ColSphereTri((Sphere16 *) temp_s1, (TriNorm *) &phi_s0[1], (Vec3f *) &sp6C) != 0)) {
                Math_Vec3s_ToVec3f((Vec3f *) &sp60, (Vec3s *) temp_s1);
                CollisionCheck_TrisAvgPoint((ColliderTrisElement *) phi_s0, (Vec3f *) &sp54);
                CollisionCheck_SetATvsAC(globalCtx, colAT, phi_s2, (Vec3f *) &sp60, colAC, phi_s0, (Vec3f *) &sp54, (Vec3f *) &sp6C);
                return;
            }
            temp_s0_2 = &phi_s0[2].bumper.effect;
            phi_s0 = (ColliderInfo *) temp_s0_2;
            if ((u32) temp_s0_2 >= (u32) (colAC[1].at + ((s32) colAC[1].actor * 0x5C))) {
                goto block_13;
            }
            goto loop_8;
        }
block_13:
        temp_s2 = &phi_s2[1].atHit;
        phi_s2 = (ColliderInfo *) temp_s2;
        if ((u32) temp_s2 >= (u32) (colAT[1].at + ((s32) colAT[1].actor << 6))) {
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return;
        }
        goto loop_6;
    }
}

void CollisionCheck_AC_JntSphVsQuad(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    ? sp74;
    ? sp64;
    ? sp58;
    Actor **temp_s0;
    Actor *temp_s0_2;
    Collider **temp_s0_3;
    Collider *temp_s7;
    ColliderBump *temp_s1_2;
    u8 *temp_s1;
    ColliderInfo *phi_s0;

    if (((s32) colAT[1].actor > 0) && (temp_s7 = &colAC[1], (colAT[1].at != 0)) && (CollisionCheck_SkipBump((ColliderInfo *) temp_s7) == 0) && (temp_s1 = &colAC[3].atFlags, temp_s0 = &colAC[3].at, Math3D_TriSetCoords(&D_801EF590, (Vec3f *) temp_s1, (Vec3f *) &colAC[4].at, (Vec3f *) temp_s0), Math3D_TriSetCoords(&D_801EF5C8, (Vec3f *) temp_s0, (Vec3f *) &colAC[2].atFlags, (Vec3f *) temp_s1), temp_s0_2 = colAT[1].at, phi_s0 = (ColliderInfo *) temp_s0_2, (((u32) temp_s0_2 < (u32) (temp_s0_2 + ((s32) colAT[1].actor << 6))) != 0))) {
loop_4:
        if ((CollisionCheck_SkipTouch(phi_s0) == 0) && (temp_s1_2 = &phi_s0[1].bumper, (CollisionCheck_NoSharedFlags(phi_s0, (ColliderInfo *) temp_s7) == 0)) && ((Math3D_ColSphereTri((Sphere16 *) temp_s1_2, &D_801EF590, (Vec3f *) &sp74) != 0) || (Math3D_ColSphereTri((Sphere16 *) temp_s1_2, &D_801EF5C8, (Vec3f *) &sp74) != 0))) {
            Math_Vec3s_ToVec3f((Vec3f *) &sp64, (Vec3s *) temp_s1_2);
            CollisionCheck_QuadAvgPoint((ColliderQuad *) colAC, (Vec3f *) &sp58);
            CollisionCheck_SetATvsAC(globalCtx, colAT, phi_s0, (Vec3f *) &sp64, colAC, (ColliderInfo *) temp_s7, (Vec3f *) &sp58, (Vec3f *) &sp74);
            return;
        }
        temp_s0_3 = &phi_s0[1].atHit;
        phi_s0 = (ColliderInfo *) temp_s0_3;
        if ((u32) temp_s0_3 >= (u32) (colAT[1].at + ((s32) colAT[1].actor << 6))) {
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return;
        }
        goto loop_4;
    }
}

void CollisionCheck_AC_JntSphVsSphere(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    f32 sp90;
    f32 sp8C;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp70;
    f32 sp64;
    Actor *temp_s2;
    Collider **temp_s2_2;
    Collider *temp_s1;
    Collider *temp_s7;
    ColliderBump *temp_s0;
    f32 temp_f0;
    ColliderInfo *phi_s2;

    if ((s32) colAT[1].actor > 0) {
        temp_s7 = &colAC[1];
        if ((colAT[1].at != 0) && (CollisionCheck_SkipBump((ColliderInfo *) temp_s7) == 0)) {
            temp_s2 = colAT[1].at;
            phi_s2 = (ColliderInfo *) temp_s2;
            if ((u32) temp_s2 < (u32) (temp_s2 + ((s32) colAT[1].actor << 6))) {
                do {
                    if (CollisionCheck_SkipTouch(phi_s2) == 0) {
                        temp_s0 = &phi_s2[1].bumper;
                        if (CollisionCheck_NoSharedFlags(phi_s2, (ColliderInfo *) temp_s7) == 0) {
                            temp_s1 = &colAC[3];
                            if (Math3D_ColSphereSphereIntersectAndDistance((Sphere16 *) temp_s0, (Sphere16 *) temp_s1, &sp90, &sp8C) != 0) {
                                Math_Vec3s_ToVec3f((Vec3f *) &sp70, (Vec3s *) temp_s0);
                                Math_Vec3s_ToVec3f((Vec3f *) &sp64, (Vec3s *) temp_s1);
                                if (!(fabsf(sp8C) < 0.008f)) {
                                    temp_f0 = (f32) colAC->unk_4E / sp8C;
                                    sp7C = ((sp70 - sp64) * temp_f0) + sp64;
                                    sp80 = ((sp74 - sp68) * temp_f0) + sp68;
                                    sp84 = ((sp78 - sp6C) * temp_f0) + sp6C;
                                } else {
                                    Math_Vec3f_Copy((Vec3f *) &sp7C, (Vec3f *) &sp70);
                                }
                                CollisionCheck_SetATvsAC(globalCtx, colAT, phi_s2, (Vec3f *) &sp70, colAC, (ColliderInfo *) temp_s7, (Vec3f *) &sp64, (Vec3f *) &sp7C);
                            }
                        }
                    }
                    temp_s2_2 = &phi_s2[1].atHit;
                    phi_s2 = (ColliderInfo *) temp_s2_2;
                } while ((u32) temp_s2_2 < (u32) (colAT[1].at + ((s32) colAT[1].actor << 6)));
            }
        }
    }
}

void CollisionCheck_AC_CylVsJntSph(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    f32 sp9C;
    f32 sp98;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp7C;
    f32 sp70;
    Actor *temp_s1;
    Collider **temp_s1_2;
    Collider *temp_s7;
    ColliderBump *temp_s0;
    f32 temp_f0;
    ColliderInfo *phi_s1;

    if (((s32) colAC[1].actor > 0) && (colAC[1].at != 0) && ((s32) colAT->unk_40 > 0)) {
        temp_s7 = &colAT[1];
        if (((s32) colAT->unk_42 > 0) && (CollisionCheck_SkipTouch((ColliderInfo *) temp_s7) == 0)) {
            temp_s1 = colAC[1].at;
            phi_s1 = (ColliderInfo *) temp_s1;
            if ((u32) temp_s1 < (u32) (temp_s1 + ((s32) colAC[1].actor << 6))) {
loop_7:
                if ((CollisionCheck_SkipBump(phi_s1) == 0) && (temp_s0 = &phi_s1[1].bumper, (CollisionCheck_NoSharedFlags((ColliderInfo *) temp_s7, phi_s1) == 0)) && (Math3D_ColSphereCylinderDistanceAndAmount((Sphere16 *) temp_s0, (Cylinder16 *) &colAT[2].atFlags, &sp9C, &sp98) != 0)) {
                    Math_Vec3s_ToVec3f((Vec3f *) &sp7C, &colAT[2].unk_16);
                    Math_Vec3s_ToVec3f((Vec3f *) &sp70, (Vec3s *) temp_s0);
                    if (!(fabsf(sp98) < 0.008f)) {
                        temp_f0 = (f32) phi_s1[1].bumper.hitPos.x / sp98;
                        if (temp_f0 <= 1.0f) {
                            sp88 = ((sp7C - sp70) * temp_f0) + sp70;
                            sp8C = ((sp80 - sp74) * temp_f0) + sp74;
                            sp90 = ((sp84 - sp78) * temp_f0) + sp78;
                        } else {
                            Math_Vec3f_Copy((Vec3f *) &sp88, (Vec3f *) &sp7C);
                        }
                    } else {
                        Math_Vec3f_Copy((Vec3f *) &sp88, (Vec3f *) &sp7C);
                    }
                    CollisionCheck_SetATvsAC(globalCtx, colAT, (ColliderInfo *) temp_s7, (Vec3f *) &sp7C, colAC, phi_s1, (Vec3f *) &sp70, (Vec3f *) &sp88);
                    if ((colAC->ocFlags2 & 0x40) != 0) {
                        goto block_16;
                    }
                } else {
block_16:
                    temp_s1_2 = &phi_s1[1].atHit;
                    phi_s1 = (ColliderInfo *) temp_s1_2;
                    if ((u32) temp_s1_2 < (u32) (colAC[1].at + ((s32) colAC[1].actor << 6))) {
                        goto loop_7;
                    }
                }
            }
        }
    }
}

void CollisionCheck_AC_CylVsCyl(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    ? sp50;
    ? sp44;
    Vec3s *sp38;
    Collider *sp34;
    Collider *sp30;
    Collider *temp_a0;
    Collider *temp_a0_2;
    Vec3s *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f8;
    f32 phi_f0;

    if (((s32) colAT->unk_40 > 0) && ((s32) colAT->unk_42 > 0) && ((s32) colAC->unk_40 > 0)) {
        temp_a0 = &colAC[1];
        if ((s32) colAC->unk_42 > 0) {
            sp30 = temp_a0;
            temp_a0_2 = &colAT[1];
            if (CollisionCheck_SkipBump((ColliderInfo *) temp_a0) == 0) {
                sp34 = temp_a0_2;
                if ((CollisionCheck_SkipTouch((ColliderInfo *) temp_a0_2) == 0) && (CollisionCheck_NoSharedFlags((ColliderInfo *) temp_a0_2, (ColliderInfo *) sp30) == 0) && (Math3D_ColCylinderCylinderAmountAndDistance((Cylinder16 *) &colAT[2].atFlags, (Cylinder16 *) &colAC[2].atFlags, &sp6C, &sp68) != 0)) {
                    Math_Vec3s_ToVec3f((Vec3f *) &sp50, &colAT[2].unk_16);
                    temp_a1 = &colAC[2].unk_16;
                    sp38 = temp_a1;
                    Math_Vec3s_ToVec3f((Vec3f *) &sp44, temp_a1);
                    if (!(fabsf(sp68) < 0.008f)) {
                        temp_f12 = (f32) colAC->unk_40 / sp68;
                        temp_f8 = (f32) colAT->unk_48 + (f32) colAT->unk_44 + ((f32) colAT->unk_42 * 0.5f);
                        sp60 = temp_f8;
                        temp_f0 = (f32) colAC->unk_48 + (f32) colAC->unk_44;
                        phi_f0 = temp_f0;
                        if (temp_f8 < temp_f0) {
                            goto block_12;
                        }
                        temp_f0_2 = temp_f0 + (f32) colAC->unk_42;
                        phi_f0 = temp_f0_2;
                        if (temp_f0_2 < sp60) {
block_12:
                            sp60 = phi_f0;
                        }
                        temp_f0_3 = (f32) colAC[2].unk_16.x;
                        sp5C = (((f32) colAT[2].unk_16.x - temp_f0_3) * temp_f12) + temp_f0_3;
                        temp_f2 = (f32) colAC->unk_4A;
                        sp64 = (((f32) colAT->unk_4A - temp_f2) * temp_f12) + temp_f2;
                    } else {
                        Math_Vec3s_ToVec3f((Vec3f *) &sp5C, temp_a1);
                    }
                    CollisionCheck_SetATvsAC(globalCtx, colAT, (ColliderInfo *) sp34, (Vec3f *) &sp50, colAC, (ColliderInfo *) sp30, (Vec3f *) &sp44, (Vec3f *) &sp5C);
                }
            }
        }
    }
}

void CollisionCheck_AC_CylVsTris(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    ? sp60;
    ? sp54;
    ? sp48;
    Actor *temp_s0;
    Collider *temp_s4;
    u8 *temp_s0_2;
    ColliderInfo *phi_s0;

    if (((s32) colAT->unk_40 > 0) && ((s32) colAT->unk_42 > 0) && ((s32) colAC[1].actor > 0) && (temp_s4 = &colAT[1], (colAC[1].at != 0)) && (CollisionCheck_SkipTouch((ColliderInfo *) temp_s4) == 0) && (temp_s0 = colAC[1].at, phi_s0 = (ColliderInfo *) temp_s0, (((u32) temp_s0 < (u32) (temp_s0 + ((s32) colAC[1].actor * 0x5C))) != 0))) {
loop_6:
        if ((CollisionCheck_SkipBump(phi_s0) == 0) && (CollisionCheck_NoSharedFlags((ColliderInfo *) temp_s4, phi_s0) == 0) && (Math3D_ColCylinderTri((Cylinder16 *) &colAT[2].atFlags, (TriNorm *) &phi_s0[1], (Vec3f *) &sp60) != 0)) {
            Math_Vec3s_ToVec3f((Vec3f *) &sp54, &colAT[2].unk_16);
            CollisionCheck_TrisAvgPoint((ColliderTrisElement *) phi_s0, (Vec3f *) &sp48);
            CollisionCheck_SetATvsAC(globalCtx, colAT, (ColliderInfo *) temp_s4, (Vec3f *) &sp54, colAC, phi_s0, (Vec3f *) &sp48, (Vec3f *) &sp60);
            return;
        }
        temp_s0_2 = &phi_s0[2].bumper.effect;
        phi_s0 = (ColliderInfo *) temp_s0_2;
        if ((u32) temp_s0_2 >= (u32) (colAC[1].at + ((s32) colAC[1].actor * 0x5C))) {
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return;
        }
        goto loop_6;
    }
}

void CollisionCheck_AC_CylVsQuad(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    ? sp64;
    ? sp58;
    ? sp4C;
    ? sp40;
    Collider *sp3C;
    Collider *sp38;
    Actor **sp34;
    u8 *sp30;
    Actor **temp_a3;
    Collider *temp_a0;
    Collider *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a1;

    if (((s32) colAT->unk_42 > 0) && (temp_a0 = &colAT[1], ((s32) colAT->unk_40 > 0)) && (sp3C = temp_a0, temp_a0_2 = &colAC[1], (CollisionCheck_SkipTouch((ColliderInfo *) temp_a0) == 0)) && (sp38 = temp_a0_2, (CollisionCheck_SkipBump((ColliderInfo *) temp_a0_2) == 0)) && (CollisionCheck_NoSharedFlags((ColliderInfo *) sp3C, (ColliderInfo *) sp38) == 0)) {
        temp_a1 = &colAC[3].atFlags;
        temp_a3 = &colAC[3].at;
        sp34 = temp_a3;
        sp30 = temp_a1;
        Math3D_TriSetCoords(&D_801EF600, (Vec3f *) temp_a1, (Vec3f *) &colAC[4].at, (Vec3f *) temp_a3);
        Math3D_TriSetCoords(&D_801EF638, (Vec3f *) sp34, (Vec3f *) &colAC[2].atFlags, (Vec3f *) sp30);
        temp_a0_3 = &colAT[2].atFlags;
        sp34 = (Actor **) temp_a0_3;
        if (Math3D_ColCylinderTri((Cylinder16 *) temp_a0_3, &D_801EF600, &D_801EDE00) != 0) {
            Math_Vec3s_ToVec3f((Vec3f *) &sp64, &colAT[2].unk_16);
            CollisionCheck_QuadAvgPoint((ColliderQuad *) colAC, (Vec3f *) &sp58);
            CollisionCheck_SetATvsAC(globalCtx, colAT, (ColliderInfo *) sp3C, (Vec3f *) &sp64, colAC, (ColliderInfo *) sp38, (Vec3f *) &sp58, &D_801EDE00);
            return;
        }
        if (Math3D_ColCylinderTri((Cylinder16 *) temp_a0_3, &D_801EF638, &D_801EDE00) != 0) {
            Math_Vec3s_ToVec3f((Vec3f *) &sp4C, &colAT[2].unk_16);
            CollisionCheck_QuadAvgPoint((ColliderQuad *) colAC, (Vec3f *) &sp40);
            CollisionCheck_SetATvsAC(globalCtx, colAT, (ColliderInfo *) sp3C, (Vec3f *) &sp4C, colAC, (ColliderInfo *) sp38, (Vec3f *) &sp40, &D_801EDE00);
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void CollisionCheck_AC_CylVsSphere(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp50;
    f32 sp44;
    Collider *sp3C;
    Collider *sp38;
    Collider *sp34;
    Collider *temp_a0;
    Collider *temp_a0_2;
    Collider *temp_a0_3;
    f32 temp_f0;

    if ((s32) colAT->unk_40 > 0) {
        temp_a0 = &colAT[1];
        if ((s32) colAT->unk_42 > 0) {
            sp3C = temp_a0;
            temp_a0_2 = &colAC[1];
            if (CollisionCheck_SkipTouch((ColliderInfo *) temp_a0) == 0) {
                sp38 = temp_a0_2;
                if (CollisionCheck_SkipBump((ColliderInfo *) temp_a0_2) == 0) {
                    temp_a0_3 = &colAC[3];
                    if (CollisionCheck_NoSharedFlags((ColliderInfo *) sp3C, (ColliderInfo *) sp38) == 0) {
                        sp34 = temp_a0_3;
                        if (Math3D_ColSphereCylinderDistanceAndAmount((Sphere16 *) temp_a0_3, (Cylinder16 *) &colAT[2].atFlags, &sp6C, &sp68) != 0) {
                            Math_Vec3s_ToVec3f((Vec3f *) &sp50, &colAT[2].unk_16);
                            Math_Vec3s_ToVec3f((Vec3f *) &sp44, (Vec3s *) sp34);
                            if (!(fabsf(sp68) < 0.008f)) {
                                temp_f0 = (f32) colAC->unk_4E / sp68;
                                if (temp_f0 <= 1.0f) {
                                    sp5C = ((sp50 - sp44) * temp_f0) + sp44;
                                    sp60 = ((sp54 - sp48) * temp_f0) + sp48;
                                    sp64 = ((sp58 - sp4C) * temp_f0) + sp4C;
                                } else {
                                    Math_Vec3f_Copy((Vec3f *) &sp5C, (Vec3f *) &sp50);
                                }
                            } else {
                                Math_Vec3f_Copy((Vec3f *) &sp5C, (Vec3f *) &sp50);
                            }
                            CollisionCheck_SetATvsAC(globalCtx, colAT, (ColliderInfo *) sp3C, (Vec3f *) &sp50, colAC, (ColliderInfo *) sp38, (Vec3f *) &sp44, (Vec3f *) &sp5C);
                        }
                    }
                }
            }
        }
    }
}

void CollisionCheck_AC_TrisVsJntSph(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    Collider *sp84;
    ? sp74;
    ? sp68;
    ? sp5C;
    Actor *temp_s0;
    Actor *temp_v0;
    Actor *temp_v1;
    Collider **temp_s2;
    ColliderBump *temp_s1;
    u8 *temp_s0_2;
    ColliderInfo *phi_s2;
    ColliderInfo *phi_s0;

    sp84 = colAC;
    temp_v1 = colAC[1].actor;
    if ((s32) temp_v1 > 0) {
        temp_v0 = colAC[1].at;
        if ((temp_v0 != 0) && ((s32) colAT[1].actor > 0) && (colAT[1].at != 0)) {
            phi_s2 = (ColliderInfo *) temp_v0;
            if ((u32) temp_v0 < (u32) (temp_v0 + ((s32) temp_v1 << 6))) {
loop_6:
                if ((CollisionCheck_SkipBump(phi_s2) == 0) && (temp_s0 = colAT[1].at, phi_s0 = (ColliderInfo *) temp_s0, (((u32) temp_s0 < (u32) (temp_s0 + ((s32) colAT[1].actor * 0x5C))) != 0))) {
loop_8:
                    if ((CollisionCheck_SkipTouch(phi_s0) != 0) || (temp_s1 = &phi_s2[1].bumper, (CollisionCheck_NoSharedFlags(phi_s0, phi_s2) != 0)) || (Math3D_ColSphereTri((Sphere16 *) temp_s1, (TriNorm *) &phi_s0[1], (Vec3f *) &sp74) == 0) || (Math_Vec3s_ToVec3f((Vec3f *) &sp5C, (Vec3s *) temp_s1), CollisionCheck_TrisAvgPoint((ColliderTrisElement *) phi_s0, (Vec3f *) &sp68), CollisionCheck_SetATvsAC(globalCtx, colAT, phi_s0, (Vec3f *) &sp68, colAC, phi_s2, (Vec3f *) &sp5C, (Vec3f *) &sp74), ((colAC->ocFlags2 & 0x40) != 0))) {
                        temp_s0_2 = &phi_s0[2].bumper.effect;
                        phi_s0 = (ColliderInfo *) temp_s0_2;
                        if ((u32) temp_s0_2 >= (u32) (colAT[1].at + ((s32) colAT[1].actor * 0x5C))) {
                            goto block_13;
                        }
                        goto loop_8;
                    }
                } else {
block_13:
                    temp_s2 = &phi_s2[1].atHit;
                    phi_s2 = (ColliderInfo *) temp_s2;
                    if ((u32) temp_s2 < (u32) (sp84[1].at + ((s32) sp84[1].actor << 6))) {
                        goto loop_6;
                    }
                }
            }
        }
    }
}

void CollisionCheck_AC_TrisVsCyl(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    ? sp58;
    ? sp4C;
    Actor *temp_s0;
    Collider *temp_s4;
    u8 *temp_s0_2;
    ColliderInfo *phi_s0;

    if (((s32) colAC->unk_40 > 0) && ((s32) colAC->unk_42 > 0) && ((s32) colAT[1].actor > 0) && (temp_s4 = &colAC[1], (colAT[1].at != 0)) && (CollisionCheck_SkipBump((ColliderInfo *) temp_s4) == 0) && (temp_s0 = colAT[1].at, phi_s0 = (ColliderInfo *) temp_s0, (((u32) temp_s0 < (u32) (temp_s0 + ((s32) colAT[1].actor * 0x5C))) != 0))) {
loop_6:
        if ((CollisionCheck_SkipTouch(phi_s0) == 0) && (CollisionCheck_NoSharedFlags(phi_s0, (ColliderInfo *) temp_s4) == 0) && (Math3D_ColCylinderTri((Cylinder16 *) &colAC[2].atFlags, (TriNorm *) &phi_s0[1], &D_801EDE10) != 0)) {
            CollisionCheck_TrisAvgPoint((ColliderTrisElement *) phi_s0, (Vec3f *) &sp58);
            Math_Vec3s_ToVec3f((Vec3f *) &sp4C, &colAC[2].unk_16);
            CollisionCheck_SetATvsAC(globalCtx, colAT, phi_s0, (Vec3f *) &sp58, colAC, (ColliderInfo *) temp_s4, (Vec3f *) &sp4C, &D_801EDE10);
            return;
        }
        temp_s0_2 = &phi_s0[2].bumper.effect;
        phi_s0 = (ColliderInfo *) temp_s0_2;
        if ((u32) temp_s0_2 >= (u32) (colAT[1].at + ((s32) colAT[1].actor * 0x5C))) {
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return;
        }
        goto loop_6;
    }
}

void CollisionCheck_AC_TrisVsTris(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    ? sp5C;
    ? sp50;
    Actor *temp_s0;
    Actor *temp_v0;
    Actor *temp_v1;
    u8 *temp_s0_2;
    u8 *temp_s1;
    ColliderInfo *phi_s1;
    ColliderInfo *phi_s0;

    temp_v1 = colAC[1].actor;
    if (((s32) temp_v1 > 0) && (temp_v0 = colAC[1].at, (temp_v0 != 0)) && ((s32) colAT[1].actor > 0) && (colAT[1].at != 0) && (phi_s1 = (ColliderInfo *) temp_v0, (((u32) temp_v0 < (u32) (temp_v0 + ((s32) temp_v1 * 0x5C))) != 0))) {
loop_6:
        if ((CollisionCheck_SkipBump(phi_s1) == 0) && (temp_s0 = colAT[1].at, phi_s0 = (ColliderInfo *) temp_s0, (((u32) temp_s0 < (u32) (temp_s0 + ((s32) colAT[1].actor * 0x5C))) != 0))) {
loop_8:
            if ((CollisionCheck_SkipTouch(phi_s0) == 0) && (CollisionCheck_NoSharedFlags(phi_s0, phi_s1) == 0) && (Math3d_ColTriTri((TriNorm *) &phi_s0[1], (TriNorm *) &phi_s1[1], &D_801EDE20) != 0)) {
                CollisionCheck_TrisAvgPoint((ColliderTrisElement *) phi_s0, (Vec3f *) &sp5C);
                CollisionCheck_TrisAvgPoint((ColliderTrisElement *) phi_s1, (Vec3f *) &sp50);
                CollisionCheck_SetATvsAC(globalCtx, colAT, phi_s0, (Vec3f *) &sp5C, colAC, phi_s1, (Vec3f *) &sp50, &D_801EDE20);
                return;
            }
            temp_s0_2 = &phi_s0[2].bumper.effect;
            phi_s0 = (ColliderInfo *) temp_s0_2;
            if ((u32) temp_s0_2 >= (u32) (colAT[1].at + ((s32) colAT[1].actor * 0x5C))) {
                goto block_13;
            }
            goto loop_8;
        }
block_13:
        temp_s1 = &phi_s1[2].bumper.effect;
        phi_s1 = (ColliderInfo *) temp_s1;
        if ((u32) temp_s1 >= (u32) (colAC[1].at + ((s32) colAC[1].actor * 0x5C))) {
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return;
        }
        goto loop_6;
    }
}

void CollisionCheck_AC_TrisVsQuad(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    ? sp68;
    ? sp5C;
    Actor **temp_s0;
    Actor *temp_s1_2;
    Collider *temp_fp;
    ColliderInfo *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_s1_3;
    ColliderInfo *phi_s1;

    if (((s32) colAT[1].actor > 0) && (temp_fp = &colAC[1], (colAT[1].at != 0)) && (CollisionCheck_SkipBump((ColliderInfo *) temp_fp) == 0) && (temp_s1 = &colAC[3].atFlags, temp_s0 = &colAC[3].at, Math3D_TriSetCoords(&D_801EDE40, (Vec3f *) temp_s1, (Vec3f *) &colAC[4].at, (Vec3f *) temp_s0), Math3D_TriSetCoords(&D_801EDE78, (Vec3f *) temp_s0, (Vec3f *) &colAC[2].atFlags, (Vec3f *) temp_s1), temp_s1_2 = colAT[1].at, phi_s1 = (ColliderInfo *) temp_s1_2, (((u32) temp_s1_2 < (u32) (temp_s1_2 + ((s32) colAT[1].actor * 0x5C))) != 0))) {
loop_4:
        if ((CollisionCheck_SkipTouch(phi_s1) == 0) && (CollisionCheck_NoSharedFlags(phi_s1, (ColliderInfo *) temp_fp) == 0) && ((temp_s0_2 = &phi_s1[1], (Math3d_ColTriTri(&D_801EDE40, (TriNorm *) temp_s0_2, &D_801EDE30) != 0)) || (Math3d_ColTriTri(&D_801EDE78, (TriNorm *) temp_s0_2, &D_801EDE30) != 0))) {
            CollisionCheck_TrisAvgPoint((ColliderTrisElement *) phi_s1, (Vec3f *) &sp68);
            CollisionCheck_QuadAvgPoint((ColliderQuad *) colAC, (Vec3f *) &sp5C);
            CollisionCheck_SetATvsAC(globalCtx, colAT, phi_s1, (Vec3f *) &sp68, colAC, (ColliderInfo *) temp_fp, (Vec3f *) &sp5C, &D_801EDE30);
            return;
        }
        temp_s1_3 = &phi_s1[2].bumper.effect;
        phi_s1 = (ColliderInfo *) temp_s1_3;
        if ((u32) temp_s1_3 >= (u32) (colAT[1].at + ((s32) colAT[1].actor * 0x5C))) {
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return;
        }
        goto loop_4;
    }
}

void CollisionCheck_AC_TrisVsSphere(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    ? sp70;
    ? sp64;
    ? sp58;
    Actor *temp_s0;
    Actor *temp_t2;
    Actor *temp_t8;
    Collider *temp_s1;
    Collider *temp_s6;
    u8 *temp_s0_2;
    ColliderInfo *phi_s0;

    if ((s32) colAT[1].actor > 0) {
        temp_s6 = &colAC[1];
        if ((colAT[1].at != 0) && (CollisionCheck_SkipBump((ColliderInfo *) temp_s6) == 0)) {
            temp_t8 = colAT[1].actor;
            temp_s0 = colAT[1].at;
            phi_s0 = (ColliderInfo *) temp_s0;
            if ((u32) temp_s0 < (u32) (temp_s0 + ((((((s32) temp_t8 * 4) - temp_t8) * 8) - temp_t8) * 4))) {
                do {
                    if (CollisionCheck_SkipTouch(phi_s0) == 0) {
                        temp_s1 = &colAC[3];
                        if ((CollisionCheck_NoSharedFlags(phi_s0, (ColliderInfo *) temp_s6) == 0) && (Math3D_ColSphereTri((Sphere16 *) temp_s1, (TriNorm *) &phi_s0[1], (Vec3f *) &sp70) != 0)) {
                            Math_Vec3s_ToVec3f((Vec3f *) &sp58, (Vec3s *) temp_s1);
                            CollisionCheck_TrisAvgPoint((ColliderTrisElement *) phi_s0, (Vec3f *) &sp64);
                            CollisionCheck_SetATvsAC(globalCtx, colAT, phi_s0, (Vec3f *) &sp64, colAC, (ColliderInfo *) temp_s6, (Vec3f *) &sp58, (Vec3f *) &sp70);
                        }
                    }
                    temp_t2 = colAT[1].actor;
                    temp_s0_2 = &phi_s0[2].bumper.effect;
                    phi_s0 = (ColliderInfo *) temp_s0_2;
                } while ((u32) temp_s0_2 < (u32) (colAT[1].at + ((((((s32) temp_t2 * 4) - temp_t2) * 8) - temp_t2) * 4)));
            }
        }
    }
}

void CollisionCheck_AC_QuadVsJntSph(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    ? sp80;
    ? sp6C;
    ? sp60;
    Actor **temp_s1;
    Actor *temp_s1_2;
    Collider **temp_s1_3;
    Collider *temp_s7;
    ColliderBump *temp_s0_2;
    u8 *temp_s0;
    ColliderInfo *phi_s1;

    if ((s32) colAC[1].actor > 0) {
        temp_s7 = &colAT[1];
        if ((colAC[1].at != 0) && (CollisionCheck_SkipTouch((ColliderInfo *) temp_s7) == 0)) {
            temp_s0 = &colAT[3].atFlags;
            temp_s1 = &colAT[3].at;
            Math3D_TriSetCoords(&D_801EDEC8, (Vec3f *) temp_s0, (Vec3f *) &colAT[4].at, (Vec3f *) temp_s1);
            Math3D_TriSetCoords(&D_801EDF00, (Vec3f *) temp_s0, (Vec3f *) temp_s1, (Vec3f *) &colAT[2].atFlags);
            temp_s1_2 = colAC[1].at;
            phi_s1 = (ColliderInfo *) temp_s1_2;
            if ((u32) temp_s1_2 < (u32) (temp_s1_2 + ((s32) colAC[1].actor << 6))) {
loop_5:
                if ((CollisionCheck_SkipBump(phi_s1) != 0) || (temp_s0_2 = &phi_s1[1].bumper, (CollisionCheck_NoSharedFlags((ColliderInfo *) temp_s7, phi_s1) != 0)) || ((Math3D_ColSphereTri((Sphere16 *) temp_s0_2, &D_801EDEC8, (Vec3f *) &sp80) == 0) && (Math3D_ColSphereTri((Sphere16 *) temp_s0_2, &D_801EDF00, (Vec3f *) &sp80) == 0)) || (Collider_QuadSetNearestAC(globalCtx, (ColliderQuad *) colAT, (Vec3f *) &sp80) == 0) || (Math_Vec3s_ToVec3f((Vec3f *) &sp60, (Vec3s *) temp_s0_2), CollisionCheck_QuadAvgPoint((ColliderQuad *) colAT, (Vec3f *) &sp6C), CollisionCheck_SetATvsAC(globalCtx, colAT, (ColliderInfo *) temp_s7, (Vec3f *) &sp6C, colAC, phi_s1, (Vec3f *) &sp60, (Vec3f *) &sp80), ((colAC->ocFlags2 & 0x40) != 0))) {
                    temp_s1_3 = &phi_s1[1].atHit;
                    phi_s1 = (ColliderInfo *) temp_s1_3;
                    if ((u32) temp_s1_3 < (u32) (colAC[1].at + ((s32) colAC[1].actor << 6))) {
                        goto loop_5;
                    }
                }
            }
        }
    }
}

void CollisionCheck_AC_QuadVsCyl(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    ? sp64;
    ? sp58;
    ? sp4C;
    ? sp40;
    Collider *sp3C;
    Collider *sp38;
    u8 *sp34;
    Actor **sp30;
    Actor **temp_a3;
    Collider *temp_a0;
    Collider *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a1;

    if (((s32) colAC->unk_42 > 0) && (temp_a0 = &colAC[1], ((s32) colAC->unk_40 > 0)) && (sp38 = temp_a0, temp_a0_2 = &colAT[1], (CollisionCheck_SkipBump((ColliderInfo *) temp_a0) == 0)) && (sp3C = temp_a0_2, (CollisionCheck_SkipTouch((ColliderInfo *) temp_a0_2) == 0)) && (CollisionCheck_NoSharedFlags((ColliderInfo *) temp_a0_2, (ColliderInfo *) sp38) == 0)) {
        temp_a1 = &colAT[3].atFlags;
        temp_a3 = &colAT[3].at;
        sp30 = temp_a3;
        sp34 = temp_a1;
        Math3D_TriSetCoords(&D_801EDF58, (Vec3f *) temp_a1, (Vec3f *) &colAT[4].at, (Vec3f *) temp_a3);
        Math3D_TriSetCoords(&D_801EDF90, (Vec3f *) temp_a1, (Vec3f *) sp30, (Vec3f *) &colAT[2].atFlags);
        temp_a0_3 = &colAC[2].atFlags;
        sp34 = temp_a0_3;
        if ((Math3D_ColCylinderTri((Cylinder16 *) temp_a0_3, &D_801EDF58, &D_801EDFE0) != 0) && (Collider_QuadSetNearestAC(globalCtx, (ColliderQuad *) colAT, &D_801EDFE0) != 0)) {
            CollisionCheck_QuadAvgPoint((ColliderQuad *) colAT, (Vec3f *) &sp64);
            Math_Vec3s_ToVec3f((Vec3f *) &sp58, &colAC[2].unk_16);
            CollisionCheck_SetATvsAC(globalCtx, colAT, (ColliderInfo *) sp3C, (Vec3f *) &sp64, colAC, (ColliderInfo *) sp38, (Vec3f *) &sp58, &D_801EDFE0);
            return;
        }
        if ((Math3D_ColCylinderTri((Cylinder16 *) sp34, &D_801EDF90, &D_801EDFE0) != 0) && (Collider_QuadSetNearestAC(globalCtx, (ColliderQuad *) colAT, &D_801EDFE0) != 0)) {
            CollisionCheck_QuadAvgPoint((ColliderQuad *) colAT, (Vec3f *) &sp4C);
            Math_Vec3s_ToVec3f((Vec3f *) &sp40, &colAC[2].unk_16);
            CollisionCheck_SetATvsAC(globalCtx, colAT, (ColliderInfo *) sp3C, (Vec3f *) &sp4C, colAC, (ColliderInfo *) sp38, (Vec3f *) &sp40, &D_801EDFE0);
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
    }
}

void CollisionCheck_AC_QuadVsTris(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    ? sp68;
    ? sp5C;
    Actor **temp_s0;
    Actor *temp_s1_2;
    Collider *temp_s6;
    ColliderInfo *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_s1_3;
    ColliderInfo *phi_s1;

    if (((s32) colAC[1].actor > 0) && (temp_s6 = &colAT[1], (colAC[1].at != 0)) && (CollisionCheck_SkipTouch((ColliderInfo *) temp_s6) == 0) && (temp_s1 = &colAT[3].atFlags, temp_s0 = &colAT[3].at, Math3D_TriSetCoords(&D_801EE000, (Vec3f *) temp_s1, (Vec3f *) &colAT[4].at, (Vec3f *) temp_s0), Math3D_TriSetCoords(&D_801EE038, (Vec3f *) temp_s0, (Vec3f *) &colAT[2].atFlags, (Vec3f *) temp_s1), temp_s1_2 = colAC[1].at, phi_s1 = (ColliderInfo *) temp_s1_2, (((u32) temp_s1_2 < (u32) (temp_s1_2 + ((s32) colAC[1].actor * 0x5C))) != 0))) {
loop_4:
        if ((CollisionCheck_SkipBump(phi_s1) == 0) && (CollisionCheck_NoSharedFlags((ColliderInfo *) temp_s6, phi_s1) == 0) && ((temp_s0_2 = &phi_s1[1], (Math3d_ColTriTri(&D_801EE000, (TriNorm *) temp_s0_2, &D_801EDFF0) != 0)) || (Math3d_ColTriTri(&D_801EE038, (TriNorm *) temp_s0_2, &D_801EDFF0) != 0)) && (Collider_QuadSetNearestAC(globalCtx, (ColliderQuad *) colAT, &D_801EDFF0) != 0)) {
            CollisionCheck_TrisAvgPoint((ColliderTrisElement *) phi_s1, (Vec3f *) &sp5C);
            CollisionCheck_QuadAvgPoint((ColliderQuad *) colAT, (Vec3f *) &sp68);
            CollisionCheck_SetATvsAC(globalCtx, colAT, (ColliderInfo *) temp_s6, (Vec3f *) &sp68, colAC, phi_s1, (Vec3f *) &sp5C, &D_801EDFF0);
            return;
        }
        temp_s1_3 = &phi_s1[2].bumper.effect;
        phi_s1 = (ColliderInfo *) temp_s1_3;
        if ((u32) temp_s1_3 >= (u32) (colAC[1].at + ((s32) colAC[1].actor * 0x5C))) {
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return;
        }
        goto loop_4;
    }
}

void CollisionCheck_AC_QuadVsQuad(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    ? sp64;
    ? sp58;
    Collider *sp54;
    Collider *sp48;
    Actor **temp_s1;
    Actor **temp_s1_2;
    Collider *temp_a0;
    Collider *temp_a0_2;
    TriNorm *temp_s0_3;
    TriNorm *temp_s2;
    u8 *temp_s0;
    u8 *temp_s0_2;
    TriNorm *phi_s0;
    TriNorm *phi_s2;

    temp_a0 = &colAT[1];
    sp54 = temp_a0;
    temp_a0_2 = &colAC[1];
    if ((CollisionCheck_SkipTouch((ColliderInfo *) temp_a0) == 0) && (sp48 = temp_a0_2, (CollisionCheck_SkipBump((ColliderInfo *) temp_a0_2) == 0)) && (CollisionCheck_NoSharedFlags((ColliderInfo *) sp54, (ColliderInfo *) sp48) == 0)) {
        temp_s0 = &colAT[3].atFlags;
        temp_s1 = &colAT[3].at;
        Math3D_TriSetCoords(D_801EE0E8, (Vec3f *) temp_s0, (Vec3f *) &colAT[4].at, (Vec3f *) temp_s1);
        Math3D_TriSetCoords(&D_801EE11C, (Vec3f *) temp_s0, (Vec3f *) temp_s1, (Vec3f *) &colAT[2].atFlags);
        temp_s0_2 = &colAC[3].atFlags;
        temp_s1_2 = &colAC[3].at;
        Math3D_TriSetCoords(D_801EE070, (Vec3f *) temp_s0_2, (Vec3f *) &colAC[4].at, (Vec3f *) temp_s1_2);
        Math3D_TriSetCoords(&D_801EE0A4, (Vec3f *) temp_s0_2, (Vec3f *) temp_s1_2, (Vec3f *) &colAC[2].atFlags);
        phi_s2 = D_801EE070;
loop_4:
        phi_s0 = D_801EE0E8;
loop_5:
        if ((Math3d_ColTriTri(phi_s0, phi_s2, &D_801EE0D8) != 0) && (Collider_QuadSetNearestAC(globalCtx, (ColliderQuad *) colAT, &D_801EE0D8) != 0)) {
            CollisionCheck_QuadAvgPoint((ColliderQuad *) colAT, (Vec3f *) &sp64);
            CollisionCheck_QuadAvgPoint((ColliderQuad *) colAC, (Vec3f *) &sp58);
            CollisionCheck_SetATvsAC(globalCtx, colAT, (ColliderInfo *) sp54, (Vec3f *) &sp64, colAC, (ColliderInfo *) sp48, (Vec3f *) &sp58, &D_801EE0D8);
            return;
        }
        temp_s0_3 = &phi_s0[1];
        phi_s0 = temp_s0_3;
        if (temp_s0_3 == &D_801EE150) {
            temp_s2 = &phi_s2[1];
            phi_s2 = temp_s2;
            if (temp_s2 == &D_801EE0D8) {
                /* Duplicate return node #10. Try simplifying control flow for better match */
                return;
            }
            goto loop_4;
        }
        goto loop_5;
    }
}

void CollisionCheck_AC_QuadVsSphere(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    ? sp60;
    ? sp50;
    ? sp44;
    Collider *sp40;
    Collider *sp3C;
    u8 *sp38;
    Actor **sp34;
    Actor **temp_a3;
    Collider *temp_a0;
    Collider *temp_a0_2;
    Collider *temp_a0_3;
    u8 *temp_a1;

    temp_a0 = &colAT[1];
    sp40 = temp_a0;
    temp_a0_2 = &colAC[1];
    if (CollisionCheck_SkipTouch((ColliderInfo *) temp_a0) == 0) {
        sp3C = temp_a0_2;
        if ((CollisionCheck_SkipBump((ColliderInfo *) temp_a0_2) == 0) && (CollisionCheck_NoSharedFlags((ColliderInfo *) sp40, (ColliderInfo *) sp3C) == 0) && ((temp_a1 = &colAT[3].atFlags, temp_a3 = &colAT[3].at, sp34 = temp_a3, sp38 = temp_a1, Math3D_TriSetCoords(&D_801EE150, (Vec3f *) temp_a1, (Vec3f *) &colAT[4].at, (Vec3f *) temp_a3), Math3D_TriSetCoords(&D_801EE188, (Vec3f *) temp_a1, (Vec3f *) sp34, (Vec3f *) &colAT[2].atFlags), temp_a0_3 = &colAC[3], sp38 = (u8 *) temp_a0_3, (Math3D_ColSphereTri((Sphere16 *) temp_a0_3, &D_801EE150, (Vec3f *) &sp60) != 0)) || (Math3D_ColSphereTri((Sphere16 *) temp_a0_3, &D_801EE188, (Vec3f *) &sp60) != 0)) && (Collider_QuadSetNearestAC(globalCtx, (ColliderQuad *) colAT, (Vec3f *) &sp60) != 0)) {
            Math_Vec3s_ToVec3f((Vec3f *) &sp44, (Vec3s *) sp38);
            CollisionCheck_QuadAvgPoint((ColliderQuad *) colAT, (Vec3f *) &sp50);
            CollisionCheck_SetATvsAC(globalCtx, colAT, (ColliderInfo *) sp40, (Vec3f *) &sp50, colAC, (ColliderInfo *) sp3C, (Vec3f *) &sp44, (Vec3f *) &sp60);
        }
    }
}

void CollisionCheck_AC_SphereVsJntSph(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    f32 sp90;
    f32 sp8C;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp70;
    f32 sp64;
    Actor *temp_s2;
    Collider **temp_s2_2;
    Collider *temp_s1;
    Collider *temp_s7;
    ColliderBump *temp_s0;
    f32 temp_f0;
    ColliderInfo *phi_s2;

    if ((s32) colAC[1].actor > 0) {
        temp_s7 = &colAT[1];
        if ((colAC[1].at != 0) && (CollisionCheck_SkipTouch((ColliderInfo *) temp_s7) == 0)) {
            temp_s2 = colAC[1].at;
            phi_s2 = (ColliderInfo *) temp_s2;
            if ((u32) temp_s2 < (u32) (temp_s2 + ((s32) colAC[1].actor << 6))) {
                do {
                    if (CollisionCheck_SkipBump(phi_s2) == 0) {
                        temp_s1 = &colAT[3];
                        if (CollisionCheck_NoSharedFlags((ColliderInfo *) temp_s7, phi_s2) == 0) {
                            temp_s0 = &phi_s2[1].bumper;
                            if (Math3D_ColSphereSphereIntersectAndDistance((Sphere16 *) temp_s1, (Sphere16 *) temp_s0, &sp90, &sp8C) != 0) {
                                Math_Vec3s_ToVec3f((Vec3f *) &sp70, (Vec3s *) temp_s1);
                                Math_Vec3s_ToVec3f((Vec3f *) &sp64, (Vec3s *) temp_s0);
                                if (!(fabsf(sp8C) < 0.008f)) {
                                    temp_f0 = (f32) phi_s2[1].bumper.hitPos.x / sp8C;
                                    sp7C = ((sp70 - sp64) * temp_f0) + sp64;
                                    sp80 = ((sp74 - sp68) * temp_f0) + sp68;
                                    sp84 = ((sp78 - sp6C) * temp_f0) + sp6C;
                                } else {
                                    Math_Vec3f_Copy((Vec3f *) &sp7C, (Vec3f *) &sp70);
                                }
                                CollisionCheck_SetATvsAC(globalCtx, colAT, (ColliderInfo *) temp_s7, (Vec3f *) &sp70, colAC, phi_s2, (Vec3f *) &sp64, (Vec3f *) &sp7C);
                            }
                        }
                    }
                    temp_s2_2 = &phi_s2[1].atHit;
                    phi_s2 = (ColliderInfo *) temp_s2_2;
                } while ((u32) temp_s2_2 < (u32) (colAC[1].at + ((s32) colAC[1].actor << 6)));
            }
        }
    }
}

void CollisionCheck_AC_SphereVsCylinder(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp50;
    f32 sp44;
    Collider *sp3C;
    Collider *sp38;
    Collider *sp34;
    Collider *temp_a0;
    Collider *temp_a0_2;
    Collider *temp_a0_3;
    f32 temp_f0;

    temp_a0 = &colAT[1];
    sp3C = temp_a0;
    temp_a0_2 = &colAC[1];
    if (CollisionCheck_SkipTouch((ColliderInfo *) temp_a0) == 0) {
        sp38 = temp_a0_2;
        if (CollisionCheck_SkipBump((ColliderInfo *) temp_a0_2) == 0) {
            temp_a0_3 = &colAT[3];
            if (CollisionCheck_NoSharedFlags((ColliderInfo *) sp3C, (ColliderInfo *) sp38) == 0) {
                sp34 = temp_a0_3;
                if (Math3D_ColSphereCylinderDistanceAndAmount((Sphere16 *) temp_a0_3, (Cylinder16 *) &colAC[2].atFlags, &sp6C, &sp68) != 0) {
                    Math_Vec3s_ToVec3f((Vec3f *) &sp50, (Vec3s *) sp34);
                    Math_Vec3s_ToVec3f((Vec3f *) &sp44, &colAC[2].unk_16);
                    if (!(fabsf(sp68) < 0.008f)) {
                        temp_f0 = (f32) colAC->unk_40 / sp68;
                        if (temp_f0 <= 1.0f) {
                            sp5C = ((sp50 - sp44) * temp_f0) + sp44;
                            sp60 = ((sp54 - sp48) * temp_f0) + sp48;
                            sp64 = ((sp58 - sp4C) * temp_f0) + sp4C;
                        } else {
                            Math_Vec3f_Copy((Vec3f *) &sp5C, (Vec3f *) &sp50);
                        }
                    } else {
                        Math_Vec3f_Copy((Vec3f *) &sp5C, (Vec3f *) &sp50);
                    }
                    CollisionCheck_SetATvsAC(globalCtx, colAT, (ColliderInfo *) sp3C, (Vec3f *) &sp50, colAC, (ColliderInfo *) sp38, (Vec3f *) &sp44, (Vec3f *) &sp5C);
                }
            }
        }
    }
}

void CollisionCheck_AC_SphereVsTris(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    ? sp68;
    ? sp5C;
    ? sp50;
    Actor *temp_s0;
    Collider *temp_s1;
    Collider *temp_s5;
    u8 *temp_s0_2;
    ColliderInfo *phi_s0;

    temp_s5 = &colAT[1];
    if ((CollisionCheck_SkipTouch((ColliderInfo *) temp_s5) == 0) && (temp_s0 = colAC[1].at, phi_s0 = (ColliderInfo *) temp_s0, (((u32) temp_s0 < (u32) (temp_s0 + ((s32) colAC[1].actor * 0x5C))) != 0))) {
loop_2:
        if ((CollisionCheck_SkipBump(phi_s0) == 0) && (temp_s1 = &colAT[3], (CollisionCheck_NoSharedFlags((ColliderInfo *) temp_s5, phi_s0) == 0)) && (Math3D_ColSphereTri((Sphere16 *) temp_s1, (TriNorm *) &phi_s0[1], (Vec3f *) &sp68) != 0)) {
            Math_Vec3s_ToVec3f((Vec3f *) &sp5C, (Vec3s *) temp_s1);
            CollisionCheck_TrisAvgPoint((ColliderTrisElement *) phi_s0, (Vec3f *) &sp50);
            CollisionCheck_SetATvsAC(globalCtx, colAT, (ColliderInfo *) temp_s5, (Vec3f *) &sp5C, colAC, phi_s0, (Vec3f *) &sp50, (Vec3f *) &sp68);
            return;
        }
        temp_s0_2 = &phi_s0[2].bumper.effect;
        phi_s0 = (ColliderInfo *) temp_s0_2;
        if ((u32) temp_s0_2 >= (u32) (colAC[1].at + ((s32) colAC[1].actor * 0x5C))) {
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return;
        }
        goto loop_2;
    }
}

void CollisionCheck_AC_SphereVsQuad(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    ? sp60;
    ? sp50;
    ? sp44;
    Collider *sp40;
    Collider *sp3C;
    Actor **sp38;
    u8 *sp34;
    Actor **temp_a3;
    Collider *temp_a0;
    Collider *temp_a0_2;
    Collider *temp_a0_3;
    u8 *temp_a1;

    temp_a0 = &colAT[1];
    sp40 = temp_a0;
    temp_a0_2 = &colAC[1];
    if (CollisionCheck_SkipTouch((ColliderInfo *) temp_a0) == 0) {
        sp3C = temp_a0_2;
        if ((CollisionCheck_SkipBump((ColliderInfo *) temp_a0_2) == 0) && (CollisionCheck_NoSharedFlags((ColliderInfo *) sp40, (ColliderInfo *) sp3C) == 0) && ((temp_a1 = &colAC[3].atFlags, temp_a3 = &colAC[3].at, sp38 = temp_a3, sp34 = temp_a1, Math3D_TriSetCoords(&D_801EE6C8, (Vec3f *) temp_a1, (Vec3f *) &colAC[4].at, (Vec3f *) temp_a3), Math3D_TriSetCoords(&D_801EE700, (Vec3f *) sp38, (Vec3f *) &colAC[2].atFlags, (Vec3f *) sp34), temp_a0_3 = &colAT[3], sp38 = (Actor **) temp_a0_3, (Math3D_ColSphereTri((Sphere16 *) temp_a0_3, &D_801EE6C8, (Vec3f *) &sp60) != 0)) || (Math3D_ColSphereTri((Sphere16 *) temp_a0_3, &D_801EE700, (Vec3f *) &sp60) != 0))) {
            Math_Vec3s_ToVec3f((Vec3f *) &sp50, (Vec3s *) sp38);
            CollisionCheck_QuadAvgPoint((ColliderQuad *) colAC, (Vec3f *) &sp44);
            CollisionCheck_SetATvsAC(globalCtx, colAT, (ColliderInfo *) sp40, (Vec3f *) &sp50, colAC, (ColliderInfo *) sp3C, (Vec3f *) &sp44, (Vec3f *) &sp60);
        }
    }
}

void CollisionCheck_AC_SphereVsSphere(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT, Collider *colAC) {
    f32 sp6C;
    f32 sp68;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp4C;
    f32 sp40;
    Collider *sp3C;
    Collider *sp38;
    Collider *sp34;
    Collider *sp30;
    Collider *temp_a0;
    Collider *temp_a0_2;
    Collider *temp_a0_3;
    Collider *temp_a1;
    f32 temp_f0;

    temp_a0 = &colAT[1];
    sp3C = temp_a0;
    temp_a0_2 = &colAC[1];
    if (CollisionCheck_SkipTouch((ColliderInfo *) temp_a0) == 0) {
        sp38 = temp_a0_2;
        if (CollisionCheck_SkipBump((ColliderInfo *) temp_a0_2) == 0) {
            temp_a0_3 = &colAT[3];
            if (CollisionCheck_NoSharedFlags((ColliderInfo *) sp3C, (ColliderInfo *) sp38) == 0) {
                temp_a1 = &colAC[3];
                sp34 = temp_a1;
                sp30 = temp_a0_3;
                if (Math3D_ColSphereSphereIntersectAndDistance((Sphere16 *) temp_a0_3, (Sphere16 *) temp_a1, &sp6C, &sp68) != 0) {
                    Math_Vec3s_ToVec3f((Vec3f *) &sp4C, (Vec3s *) sp30);
                    Math_Vec3s_ToVec3f((Vec3f *) &sp40, (Vec3s *) sp34);
                    if (!(fabsf(sp68) < 0.008f)) {
                        temp_f0 = (f32) colAC->unk_4E / sp68;
                        sp58 = ((sp4C - sp40) * temp_f0) + sp40;
                        sp5C = ((sp50 - sp44) * temp_f0) + sp44;
                        sp60 = ((sp54 - sp48) * temp_f0) + sp48;
                    } else {
                        Math_Vec3f_Copy((Vec3f *) &sp58, (Vec3f *) &sp4C);
                    }
                    CollisionCheck_SetATvsAC(globalCtx, colAT, (ColliderInfo *) sp3C, (Vec3f *) &sp4C, colAC, (ColliderInfo *) sp38, (Vec3f *) &sp40, (Vec3f *) &sp58);
                }
            }
        }
    }
}

void CollisionCheck_SetJntSphHitFX(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *collider) {
    ColliderInfo *sp30;
    ? sp24;
    Actor *temp_v0;
    Collider **temp_v0_2;
    ColliderInfo *temp_v1;
    ColliderInfo *temp_v1_2;
    ColliderInfo *phi_v0;

    temp_v0 = collider[1].at;
    phi_v0 = (ColliderInfo *) temp_v0;
    if ((u32) temp_v0 < (u32) (temp_v0 + ((s32) collider[1].actor << 6))) {
loop_1:
        if (((phi_v0->bumperFlags & 0x80) != 0) && (temp_v1 = phi_v0->acHitInfo, (temp_v1 != 0)) && ((temp_v1->toucherFlags & 0x40) == 0)) {
            sp30 = phi_v0;
            collider = collider;
            Math_Vec3s_ToVec3f((Vec3f *) &sp24, phi_v0 + 0xE);
            CollisionCheck_HitEffects(globalCtx, phi_v0->acHit, phi_v0->acHitInfo, collider, phi_v0, (Vec3f *) &sp24);
            temp_v1_2 = phi_v0->acHitInfo;
            temp_v1_2->toucherFlags |= 0x40;
            return;
        }
        temp_v0_2 = &phi_v0[1].atHit;
        phi_v0 = (ColliderInfo *) temp_v0_2;
        if ((u32) temp_v0_2 >= (u32) (collider[1].at + ((s32) collider[1].actor << 6))) {
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return;
        }
        goto loop_1;
    }
}

void CollisionCheck_SetCylHitFX(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *collider) {
    ? sp28;
    Actor *temp_v0;
    Actor *temp_v0_2;
    Vec3s *temp_a1;

    if ((collider->unk_2E & 0x80) != 0) {
        temp_v0 = collider[2].oc;
        if (temp_v0 != 0) {
            temp_a1 = collider + 0x26;
            if ((temp_v0->unk_15 & 0x40) == 0) {
                collider = collider;
                Math_Vec3s_ToVec3f((Vec3f *) &sp28, temp_a1);
                CollisionCheck_HitEffects(globalCtx, (Collider *) collider[2].at, (ColliderInfo *) collider[2].oc, collider, (ColliderInfo *) &collider[1], (Vec3f *) &sp28);
                temp_v0_2 = collider[2].oc;
                temp_v0_2->unk_15 = (u8) (temp_v0_2->unk_15 | 0x40);
            }
        }
    }
}

void CollisionCheck_SetTrisHitFX(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *collider) {
    ColliderInfo *sp30;
    ? sp24;
    Actor *temp_v0;
    ColliderInfo *temp_v1;
    ColliderInfo *temp_v1_2;
    u8 *temp_v0_2;
    ColliderInfo *phi_v0;

    temp_v0 = collider[1].at;
    phi_v0 = (ColliderInfo *) temp_v0;
    if ((u32) temp_v0 < (u32) (temp_v0 + ((s32) collider[1].actor * 0x5C))) {
loop_1:
        if (((phi_v0->bumperFlags & 0x80) != 0) && (temp_v1 = phi_v0->acHitInfo, (temp_v1 != 0)) && ((temp_v1->toucherFlags & 0x40) == 0)) {
            sp30 = phi_v0;
            Math_Vec3s_ToVec3f((Vec3f *) &sp24, phi_v0 + 0xE);
            CollisionCheck_HitEffects(globalCtx, phi_v0->acHit, phi_v0->acHitInfo, collider, phi_v0, (Vec3f *) &sp24);
            temp_v1_2 = phi_v0->acHitInfo;
            temp_v1_2->toucherFlags |= 0x40;
            return;
        }
        temp_v0_2 = &phi_v0[2].bumper.effect;
        phi_v0 = (ColliderInfo *) temp_v0_2;
        if ((u32) temp_v0_2 >= (u32) (collider[1].at + ((s32) collider[1].actor * 0x5C))) {
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return;
        }
        goto loop_1;
    }
}

void CollisionCheck_SetQuadHitFX(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *collider) {
    ? sp28;
    Actor *temp_v0;
    Actor *temp_v0_2;
    Vec3s *temp_a1;

    if ((collider->unk_2E & 0x80) != 0) {
        temp_v0 = collider[2].oc;
        if (temp_v0 != 0) {
            temp_a1 = collider + 0x26;
            if ((temp_v0->unk_15 & 0x40) == 0) {
                collider = collider;
                Math_Vec3s_ToVec3f((Vec3f *) &sp28, temp_a1);
                CollisionCheck_HitEffects(globalCtx, (Collider *) collider[2].at, (ColliderInfo *) collider[2].oc, collider, (ColliderInfo *) &collider[1], (Vec3f *) &sp28);
                temp_v0_2 = collider[2].oc;
                temp_v0_2->unk_15 = (u8) (temp_v0_2->unk_15 | 0x40);
            }
        }
    }
}

void CollisionCheck_SetSphereHitFX(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *collider) {
    ? sp28;
    Actor *temp_v0;
    Actor *temp_v0_2;
    Vec3s *temp_a1;

    if ((collider->unk_2E & 0x80) != 0) {
        temp_v0 = collider[2].oc;
        if (temp_v0 != 0) {
            temp_a1 = collider + 0x26;
            if ((temp_v0->unk_15 & 0x40) == 0) {
                collider = collider;
                Math_Vec3s_ToVec3f((Vec3f *) &sp28, temp_a1);
                CollisionCheck_HitEffects(globalCtx, (Collider *) collider[2].at, (ColliderInfo *) collider[2].oc, collider, (ColliderInfo *) &collider[1], (Vec3f *) &sp28);
                temp_v0_2 = collider[2].oc;
                temp_v0_2->unk_15 = (u8) (temp_v0_2->unk_15 | 0x40);
            }
        }
    }
}

void CollisionCheck_SetHitEffects(GlobalContext *globalCtx, CollisionCheckContext *colCtxt) {
    Collider **temp_s0;
    Collider **temp_s0_2;
    Collider **temp_v1;
    Collider *temp_a2;
    void *temp_v0;
    Collider **phi_s0;
    u32 phi_v1;

    temp_s0 = colCtxt->colAC;
    temp_v1 = &colCtxt->colAC[colCtxt->colACCount];
    phi_s0 = temp_s0;
    phi_v1 = (u32) temp_v1;
    if ((u32) temp_s0 < (u32) temp_v1) {
        do {
            temp_a2 = *phi_s0;
            if ((temp_a2 != 0) && ((temp_a2->acFlags & 1) != 0) && ((temp_v0 = temp_a2->actor, (temp_v0 == 0)) || (temp_v0->update != 0))) {
                sColChkApplyFuncs[temp_a2->shape](globalCtx, colCtxt, temp_a2);
                phi_v1 = (u32) &colCtxt->colAC[colCtxt->colACCount];
            }
            temp_s0_2 = phi_s0 + 4;
            phi_s0 = temp_s0_2;
        } while ((u32) temp_s0_2 < phi_v1);
    }
}

void CollisionCheck_AC(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *colAT) {
    Actor *temp_v0_2;
    Collider **temp_s1;
    Collider **temp_s1_2;
    Collider **temp_t0;
    Collider *temp_a3;
    u8 temp_v0;
    u8 temp_v1;
    void *temp_a0;
    Collider **phi_s1;
    u32 phi_t0;

    temp_s1 = colCtxt->colAC;
    temp_t0 = &colCtxt->colAC[colCtxt->colACCount];
    phi_s1 = temp_s1;
    phi_t0 = (u32) temp_t0;
    if ((u32) temp_s1 < (u32) temp_t0) {
        do {
            temp_a3 = *phi_s1;
            if (temp_a3 != 0) {
                temp_v0 = temp_a3->acFlags;
                if (((temp_v0 & 1) != 0) && ((temp_a0 = temp_a3->actor, (temp_a0 == 0)) || (temp_a0->update != 0))) {
                    temp_v1 = colAT->atFlags;
                    if (((temp_v0 & temp_v1 & 0x38) != 0) && (colAT != temp_a3) && (((temp_v1 & 0x40) != 0) || (temp_v0_2 = colAT->actor, (temp_v0_2 == 0)) || (temp_v0_2 != temp_a0))) {
                        sACVsFuncs[colAT->shape][temp_a3->shape](globalCtx, colCtxt, colAT, temp_a3);
                        phi_t0 = (u32) &colCtxt->colAC[colCtxt->colACCount];
                    }
                }
            }
            temp_s1_2 = phi_s1 + 4;
            phi_s1 = temp_s1_2;
        } while ((u32) temp_s1_2 < phi_t0);
    }
}

void CollisionCheck_AT(GlobalContext *globalCtx, CollisionCheckContext *colCtxt) {
    Collider **temp_s0;
    Collider **temp_s0_2;
    Collider **temp_v1;
    Collider *temp_a2_2;
    s16 temp_a2;
    void *temp_v0;
    Collider **phi_s0;
    u32 phi_v1;

    temp_a2 = colCtxt->colATCount;
    if (temp_a2 != 0) {
        temp_s0 = colCtxt->colAT;
        phi_s0 = temp_s0;
        if (colCtxt->colACCount != 0) {
            temp_v1 = &colCtxt->colAT[temp_a2];
            phi_v1 = (u32) temp_v1;
            if ((u32) temp_s0 < (u32) temp_v1) {
                do {
                    temp_a2_2 = *phi_s0;
                    if ((temp_a2_2 != 0) && ((temp_a2_2->atFlags & 1) != 0) && ((temp_v0 = temp_a2_2->actor, (temp_v0 == 0)) || (temp_v0->update != 0))) {
                        CollisionCheck_AC(globalCtx, colCtxt, temp_a2_2);
                        phi_v1 = (u32) &colCtxt->colAT[colCtxt->colATCount];
                    }
                    temp_s0_2 = phi_s0 + 4;
                    phi_s0 = temp_s0_2;
                } while ((u32) temp_s0_2 < phi_v1);
            }
            CollisionCheck_SetHitEffects(globalCtx, colCtxt);
        }
    }
}

s32 CollisionCheck_GetMassType(u8 mass) {
    s32 temp_a0;

    temp_a0 = mass & 0xFF;
    if (temp_a0 == 0xFF) {
        return 0;
    }
    if (temp_a0 == 0xFE) {
        return 1;
    }
    return 2;
}

void CollisionCheck_SetOCvsOC(GlobalContext *globalCtx, Collider *left, ColliderInfo *leftInfo, Vec3f *leftPos, Collider *right, ColliderInfo *rightInfo, Vec3f *rightPos, f32 overlap) {
    f32 sp40;
    f32 sp38;
    f32 sp34;
    Actor *sp24;
    Actor *sp20;
    s32 sp18;
    Actor *temp_t0;
    Actor *temp_t1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f10;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f2;
    s32 temp_v0;
    u8 temp_t2;
    u8 temp_t3;
    f32 phi_f10;
    f32 phi_f18;
    f32 phi_f2;
    f32 phi_f12;
    f32 phi_f6;
    f32 phi_f18_2;

    temp_t1 = right->actor;
    temp_t0 = left->actor;
    left->ocFlags1 |= 2;
    left->oc = temp_t1;
    leftInfo->ocElemFlags |= 2;
    if ((right->ocFlags2 & 8) != 0) {
        left->ocFlags2 |= 1;
    }
    right->oc = temp_t0;
    right->ocFlags1 |= 2;
    rightInfo->ocElemFlags |= 2;
    if ((left->ocFlags2 & 8) != 0) {
        right->ocFlags2 |= 1;
    }
    if ((temp_t0 != 0) && (temp_t1 != 0) && ((left->ocFlags1 & 4) == 0) && ((right->ocFlags1 & 4) == 0)) {
        sp20 = temp_t1;
        sp24 = temp_t0;
        sp18 = CollisionCheck_GetMassType(temp_t0->colChkInfo.mass);
        temp_v0 = CollisionCheck_GetMassType(temp_t1->colChkInfo.mass);
        temp_t2 = temp_t0->colChkInfo.mass;
        temp_f18 = (f32) temp_t2;
        phi_f18 = temp_f18;
        if ((s32) temp_t2 < 0) {
            phi_f18 = temp_f18 + 4294967296.0f;
        }
        temp_t3 = temp_t1->colChkInfo.mass;
        temp_f10 = (f32) temp_t3;
        phi_f10 = temp_f10;
        phi_f18_2 = phi_f18;
        if ((s32) temp_t3 < 0) {
            phi_f10 = temp_f10 + 4294967296.0f;
        }
        sp38 = phi_f10;
        temp_f2 = phi_f18 + sp38;
        temp_f0 = fabsf(temp_f2);
        sp34 = temp_f2;
        if (temp_f0 < 0.008f) {
            sp38 = 1.0f;
            sp34 = 2.0f;
            phi_f18_2 = 1.0f;
        }
        temp_f14 = rightPos->x - leftPos->x;
        temp_f16 = rightPos->z - leftPos->z;
        sp40 = sqrtf((temp_f14 * temp_f14) + (temp_f16 * temp_f16));
        if (sp18 == 0) {
            if (temp_v0 != 0) {
                phi_f2 = 0.0f;
                phi_f12 = 1.0f;
                goto block_26;
            }
            /* Duplicate return node #32. Try simplifying control flow for better match */
            return;
        }
        if (sp18 == 1) {
            if (temp_v0 == 0) {
                phi_f2 = 1.0f;
                phi_f12 = 0.0f;
            } else if (temp_v0 == 1) {
                phi_f2 = 0.5f;
                phi_f12 = 0.5f;
            } else {
                phi_f2 = 0.0f;
                phi_f12 = 1.0f;
            }
        } else if (temp_v0 == 2) {
            temp_f0_2 = 1.0f / sp34;
            phi_f2 = sp38 * temp_f0_2;
            phi_f12 = phi_f18_2 * temp_f0_2;
        } else {
            phi_f2 = 1.0f;
            phi_f12 = 0.0f;
        }
block_26:
        if (!(fabsf(sp40) < 0.008f)) {
            temp_f0_3 = overlap / sp40;
            temp_f14_2 = temp_f14 * temp_f0_3;
            temp_f16_2 = temp_f16 * temp_f0_3;
            temp_t0->colChkInfo.displacement.x += -temp_f14_2 * phi_f2;
            temp_t0->colChkInfo.displacement.z += -temp_f16_2 * phi_f2;
            temp_t1->colChkInfo.displacement.x += temp_f14_2 * phi_f12;
            temp_t1->colChkInfo.displacement.z += temp_f16_2 * phi_f12;
            return;
        }
        if (overlap != 0.0f) {
            temp_t0->colChkInfo.displacement.x += -overlap * phi_f2;
            phi_f6 = temp_t1->colChkInfo.displacement.x + (overlap * phi_f12);
        } else {
            temp_t0->colChkInfo.displacement.x -= phi_f2;
            phi_f6 = temp_t1->colChkInfo.displacement.x + phi_f12;
        }
        temp_t1->colChkInfo.displacement.x = phi_f6;
        /* Duplicate return node #32. Try simplifying control flow for better match */
    }
}

void CollisionCheck_OC_JntSphVsJntSph(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *l, Collider *r) {
    Collider *sp84;
    f32 sp74;
    ? sp68;
    ? sp5C;
    Actor *temp_s0;
    Actor *temp_v0;
    Actor *temp_v1;
    Collider **temp_s0_2;
    Collider **temp_s4;
    Sphere16 *temp_s1;
    Sphere16 *temp_s2;
    ColliderInfo *phi_s4;
    ColliderInfo *phi_s0;
    u32 phi_v0;
    u32 phi_v0_2;

    sp84 = l;
    temp_v1 = l[1].actor;
    if ((s32) temp_v1 > 0) {
        temp_v0 = l[1].at;
        if ((temp_v0 != 0) && ((s32) r[1].actor > 0) && (r[1].at != 0) && ((l->ocFlags1 & 1) != 0) && ((r->ocFlags1 & 1) != 0)) {
            phi_s4 = (ColliderInfo *) temp_v0;
            if ((u32) temp_v0 < (u32) (temp_v0 + ((s32) temp_v1 << 6))) {
                do {
                    if ((phi_s4->ocElemFlags & 1) == 0) {
                        phi_v0_2 = (u32) (sp84[1].at + ((s32) sp84[1].actor << 6));
                    } else {
                        temp_s0 = r[1].at;
                        phi_s0 = (ColliderInfo *) temp_s0;
                        if ((u32) temp_s0 < (u32) (temp_s0 + ((s32) r[1].actor << 6))) {
                            do {
                                temp_s1 = phi_s4 + 0x30;
                                temp_s2 = phi_s0 + 0x30;
                                if ((phi_s0->ocElemFlags & 1) == 0) {
                                    phi_v0 = (u32) (r[1].at + ((s32) r[1].actor << 6));
                                } else {
                                    if (Math3D_ColSphereSphereIntersect(temp_s1, temp_s2, &sp74) != 0) {
                                        Math_Vec3s_ToVec3f((Vec3f *) &sp68, (Vec3s *) temp_s1);
                                        Math_Vec3s_ToVec3f((Vec3f *) &sp5C, (Vec3s *) temp_s2);
                                        CollisionCheck_SetOCvsOC(globalCtx, l, phi_s4, (Vec3f *) &sp68, r, phi_s0, (Vec3f *) &sp5C, sp74);
                                    }
                                    phi_v0 = (u32) (r[1].at + ((s32) r[1].actor << 6));
                                }
                                temp_s0_2 = &phi_s0[1].atHit;
                                phi_s0 = (ColliderInfo *) temp_s0_2;
                            } while ((u32) temp_s0_2 < phi_v0);
                        }
                        phi_v0_2 = (u32) (sp84[1].at + ((s32) sp84[1].actor << 6));
                    }
                    temp_s4 = &phi_s4[1].atHit;
                    phi_s4 = (ColliderInfo *) temp_s4;
                } while ((u32) temp_s4 < phi_v0_2);
            }
        }
    }
}

void CollisionCheck_OC_JntSphVsCyl(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *l, Collider *r) {
    f32 sp78;
    ? sp6C;
    ? sp60;
    Actor *temp_v0;
    Actor *temp_v1;
    Collider **temp_s0;
    Collider *temp_s3;
    Sphere16 *temp_s1;
    Vec3s *temp_s4;
    ColliderInfo *phi_s0;
    u32 phi_v0;

    temp_v1 = l[1].actor;
    if ((s32) temp_v1 > 0) {
        temp_v0 = l[1].at;
        if ((temp_v0 != 0) && ((l->ocFlags1 & 1) != 0) && ((r->ocFlags1 & 1) != 0) && ((r->unk_2F & 1) != 0)) {
            phi_s0 = (ColliderInfo *) temp_v0;
            if ((u32) temp_v0 < (u32) (temp_v0 + ((s32) temp_v1 << 6))) {
                do {
                    temp_s1 = phi_s0 + 0x30;
                    if ((phi_s0->ocElemFlags & 1) == 0) {
                        phi_v0 = (u32) (l[1].at + ((s32) l[1].actor << 6));
                    } else {
                        if (Math3D_ColSphereCylinderDistance(temp_s1, (Cylinder16 *) &r[2].atFlags, &sp78) != 0) {
                            temp_s3 = &r[1];
                            temp_s4 = &r[2].unk_16;
                            Math_Vec3s_ToVec3f((Vec3f *) &sp6C, (Vec3s *) temp_s1);
                            Math_Vec3s_ToVec3f((Vec3f *) &sp60, temp_s4);
                            CollisionCheck_SetOCvsOC(globalCtx, l, phi_s0, (Vec3f *) &sp6C, r, (ColliderInfo *) temp_s3, (Vec3f *) &sp60, sp78);
                        }
                        phi_v0 = (u32) (l[1].at + ((s32) l[1].actor << 6));
                    }
                    temp_s0 = &phi_s0[1].atHit;
                    phi_s0 = (ColliderInfo *) temp_s0;
                } while ((u32) temp_s0 < phi_v0);
            }
        }
    }
}

void CollisionCheck_OC_JntSphVsSphere(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *l, Collider *r) {
    f32 sp78;
    ? sp6C;
    ? sp60;
    Actor *temp_v0;
    Actor *temp_v1;
    Collider **temp_s0;
    Collider *temp_s2;
    Collider *temp_s4;
    Sphere16 *temp_s1;
    ColliderInfo *phi_s0;
    u32 phi_v0;

    temp_v1 = l[1].actor;
    if ((s32) temp_v1 > 0) {
        temp_v0 = l[1].at;
        if ((temp_v0 != 0) && ((l->ocFlags1 & 1) != 0) && ((r->ocFlags1 & 1) != 0) && ((r->unk_2F & 1) != 0)) {
            phi_s0 = (ColliderInfo *) temp_v0;
            if ((u32) temp_v0 < (u32) (temp_v0 + ((s32) temp_v1 << 6))) {
                do {
                    temp_s1 = phi_s0 + 0x30;
                    temp_s2 = &r[3];
                    if ((phi_s0->ocElemFlags & 1) == 0) {
                        phi_v0 = (u32) (l[1].at + ((s32) l[1].actor << 6));
                    } else {
                        if (Math3D_ColSphereSphereIntersect(temp_s1, (Sphere16 *) temp_s2, &sp78) != 0) {
                            temp_s4 = &r[1];
                            Math_Vec3s_ToVec3f((Vec3f *) &sp6C, (Vec3s *) temp_s1);
                            Math_Vec3s_ToVec3f((Vec3f *) &sp60, (Vec3s *) temp_s2);
                            CollisionCheck_SetOCvsOC(globalCtx, l, phi_s0, (Vec3f *) &sp6C, r, (ColliderInfo *) temp_s4, (Vec3f *) &sp60, sp78);
                        }
                        phi_v0 = (u32) (l[1].at + ((s32) l[1].actor << 6));
                    }
                    temp_s0 = &phi_s0[1].atHit;
                    phi_s0 = (ColliderInfo *) temp_s0;
                } while ((u32) temp_s0 < phi_v0);
            }
        }
    }
}

void CollisionCheck_OC_CylVsJntSph(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *l, Collider *r) {
    CollisionCheck_OC_JntSphVsCyl(globalCtx, colCtxt, r, l);
}

void CollisionCheck_OC_CylVsCyl(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *l, Collider *r) {
    f32 sp4C;
    ? sp40;
    ? sp34;

    if (((l->ocFlags1 & 1) != 0) && ((r->ocFlags1 & 1) != 0) && ((l->unk_2F & 1) != 0) && ((r->unk_2F & 1) != 0) && (Math3D_ColCylinderCylinderAmount((Cylinder16 *) &l[2].atFlags, (Cylinder16 *) &r[2].atFlags, &sp4C) != 0)) {
        Math_Vec3s_ToVec3f((Vec3f *) &sp40, &l[2].unk_16);
        Math_Vec3s_ToVec3f((Vec3f *) &sp34, &r[2].unk_16);
        CollisionCheck_SetOCvsOC(globalCtx, l, (ColliderInfo *) &l[1], (Vec3f *) &sp40, r, (ColliderInfo *) &r[1], (Vec3f *) &sp34, sp4C);
    }
}

void CollisionCheck_OC_CylVsSphere(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *l, Collider *r) {
    f32 sp4C;
    ? sp40;
    ? sp34;
    Collider *sp30;
    Collider *temp_a0;

    if (((l->ocFlags1 & 1) != 0) && ((l->unk_2F & 1) != 0) && ((r->ocFlags1 & 1) != 0)) {
        temp_a0 = &r[3];
        if ((r->unk_2F & 1) != 0) {
            sp30 = temp_a0;
            if (Math3D_ColSphereCylinderDistance((Sphere16 *) temp_a0, (Cylinder16 *) &l[2].atFlags, &sp4C) != 0) {
                Math_Vec3s_ToVec3f((Vec3f *) &sp40, &l[2].unk_16);
                Math_Vec3s_ToVec3f((Vec3f *) &sp34, (Vec3s *) sp30);
                CollisionCheck_SetOCvsOC(globalCtx, l, (ColliderInfo *) &l[1], (Vec3f *) &sp40, r, (ColliderInfo *) &r[1], (Vec3f *) &sp34, sp4C);
            }
        }
    }
}

void CollisionCheck_OC_SphereVsJntSph(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *l, Collider *r) {
    CollisionCheck_OC_JntSphVsSphere(globalCtx, colCtxt, r, l);
}

void CollisionCheck_OC_SphereVsCyl(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *l, Collider *r) {
    CollisionCheck_OC_CylVsSphere(globalCtx, colCtxt, r, l);
}

void CollisionCheck_OC_SphereVsSphere(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *l, Collider *r) {
    f32 sp54;
    ? sp48;
    ? sp3C;
    Collider *sp38;
    Collider *sp34;
    Collider *temp_a1;
    Collider *temp_a3;

    if (((l->ocFlags1 & 1) != 0) && ((l->unk_2F & 1) != 0) && ((r->ocFlags1 & 1) != 0)) {
        temp_a3 = &l[3];
        temp_a1 = &r[3];
        if ((r->unk_2F & 1) != 0) {
            sp38 = temp_a1;
            sp34 = temp_a3;
            if (Math3D_ColSphereSphereIntersect((Sphere16 *) temp_a3, (Sphere16 *) temp_a1, &sp54) != 0) {
                Math_Vec3s_ToVec3f((Vec3f *) &sp48, (Vec3s *) temp_a3);
                Math_Vec3s_ToVec3f((Vec3f *) &sp3C, (Vec3s *) sp38);
                CollisionCheck_SetOCvsOC(globalCtx, l, (ColliderInfo *) &l[1], (Vec3f *) &sp48, r, (ColliderInfo *) &r[1], (Vec3f *) &sp3C, sp54);
            }
        }
    }
}

s32 CollisionCheck_SkipOC(Collider *collider) {
    if ((collider->ocFlags1 & 1) == 0) {
        return 1;
    }
    return 0;
}

s32 CollisionCheck_Incompatible(Collider *left, Collider *right) {
    u8 temp_v0;
    u8 temp_v1;

    temp_v0 = right->ocFlags2;
    if (((left->ocFlags1 & temp_v0 & 0x38) == 0) || (temp_v1 = left->ocFlags2, ((temp_v1 & right->ocFlags1 & 0x38) == 0)) || (((temp_v1 & 2) != 0) && ((temp_v0 & 4) != 0)) || (((temp_v0 & 2) != 0) && ((temp_v1 & 4) != 0))) {
        return 1;
    }
    if (right->actor == left->actor) {
        return 1;
    }
    return 0;
}

void CollisionCheck_OC(GlobalContext *globalCtx, CollisionCheckContext *colCtxt) {
    Collider **temp_s0;
    Collider **temp_s2;
    Collider **temp_s5;
    Collider **temp_v0;
    Collider **temp_v0_2;
    Collider *temp_a2;
    Collider *temp_a2_2;
    Collider *temp_a3;
    Collider *temp_a3_2;
    u32 temp_v0_4;
    void (*temp_v0_3)(GlobalContext *, CollisionCheckContext *, Collider *, Collider *);
    Collider **phi_s2;
    Collider **phi_s0;
    void *phi_v0;
    u32 phi_s5;
    u32 phi_v0_2;

    temp_s2 = colCtxt->colOC;
    temp_v0 = &colCtxt->colOC[colCtxt->colOCCount];
    phi_s2 = temp_s2;
    phi_v0_2 = (u32) temp_v0;
    if ((u32) temp_s2 < (u32) temp_v0) {
        do {
            temp_a2 = *phi_s2;
            if (temp_a2 != 0) {
                if (CollisionCheck_SkipOC(temp_a2) != 0) {
                    phi_v0_2 = (u32) &colCtxt->colOC[colCtxt->colOCCount];
                    goto block_4;
                }
                temp_s5 = phi_s2 + 4;
                temp_v0_2 = &colCtxt->colOC[colCtxt->colOCCount];
                phi_s0 = temp_s5;
                phi_s5 = (u32) temp_s5;
                phi_v0_2 = (u32) temp_v0_2;
                if ((u32) temp_s5 < (u32) temp_v0_2) {
                    do {
                        temp_a3 = *phi_s0;
                        if ((temp_a3 == 0) || (CollisionCheck_SkipOC(temp_a3) != 0) || (CollisionCheck_Incompatible(*phi_s2, *phi_s0) != 0)) {
                            phi_v0 = colCtxt + (colCtxt->colOCCount * 4);
                        } else {
                            temp_a2_2 = *phi_s2;
                            temp_a3_2 = *phi_s0;
                            temp_v0_3 = sOCVsFuncs[temp_a2_2->shape][temp_a3_2->shape];
                            if (temp_v0_3 == 0) {
                                phi_v0 = colCtxt + (colCtxt->colOCCount * 4);
                            } else {
                                temp_v0_3(globalCtx, colCtxt, temp_a2_2, temp_a3_2);
                                phi_v0 = colCtxt + (colCtxt->colOCCount * 4);
                            }
                        }
                        temp_v0_4 = phi_v0 + 0x1C4;
                        temp_s0 = phi_s0 + 4;
                        phi_s0 = temp_s0;
                        phi_v0_2 = temp_v0_4;
                    } while ((u32) temp_s0 < temp_v0_4);
                }
            } else {
block_4:
                phi_s5 = (u32) (phi_s2 + 4);
            }
            phi_s2 = (Collider **) phi_s5;
        } while (phi_s5 < phi_v0_2);
    }
}

void CollisionCheck_InitInfo(CollisionCheckInfo *info) {
    info->damageTable = defaultColChkInfo.damageTable;
    info->displacement.x = defaultColChkInfo.displacement.x;
    info->displacement.y = defaultColChkInfo.displacement.y;
    info->displacement.z = defaultColChkInfo.displacement.z;
    info->unk_10 = (s32) defaultColChkInfo.unk_10;
    info->unk_14 = (s32) defaultColChkInfo.unk_14;
    info->unk_18 = (s32) defaultColChkInfo.unk_18;
}

void CollisionCheck_ResetDamage(CollisionCheckInfo *info) {
    info->damage = 0;
    info->damageEffect = 0;
    info->atHitEffect = 0;
    info->acHitEffect = 0;
    info->displacement.z = 0.0f;
    info->displacement.y = 0.0f;
    info->displacement.x = 0.0f;
}

void CollisionCheck_SetInfoNoDamageTable(CollisionCheckInfo *info, CollisionCheckInfoInit *init) {
    info->health = init->health;
    info->cylRadius = init->cylRadius;
    info->cylHeight = init->cylHeight;
    info->mass = init->mass;
}

void CollisionCheck_SetInfo(CollisionCheckInfo *info, DamageTable *damageTable, CollisionCheckInfoInit *init) {
    info->damageTable = damageTable;
    info->health = init->health;
    info->cylRadius = init->cylRadius;
    info->cylHeight = init->cylHeight;
    info->mass = init->mass;
}

void CollisionCheck_SetInfo2(CollisionCheckInfo *info, DamageTable *damageTable, CollisionCheckInfoInit2 *init) {
    info->damageTable = damageTable;
    info->health = init->health;
    info->cylRadius = init->cylRadius;
    info->cylHeight = init->cylHeight;
    info->cylYShift = init->cylYShift;
    info->mass = init->mass;
}

void CollisionCheck_SetInfoGetDamageTable(CollisionCheckInfo *info, s32 index, CollisionCheckInfoInit2 *init) {
    CollisionCheck_SetInfo2(info, DamageTable_Get(index), init);
}

void CollisionCheck_ApplyDamage(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *collider, ColliderInfo *info) {
    f32 sp3C;
    f32 sp38;
    Collider *sp30;
    ColliderInfo *sp2C;
    u32 sp24;
    Collider *temp_a0;
    ColliderInfo *temp_a1;
    f32 temp_f0;
    f32 temp_f10;
    s32 temp_v0_3;
    u8 temp_t8;
    u8 temp_v0;
    void *temp_v0_2;
    void *temp_v0_4;
    f32 phi_f10;
    f32 phi_f2;

    phi_f2 = 0.0f;
    if ((collider->actor != 0) && ((collider->acFlags & 2) != 0) && (temp_v0 = info->bumperFlags, ((temp_v0 & 2) != 0)) && ((temp_v0 & 0x10) == 0) && (temp_a0 = info->acHit, temp_a1 = info->acHitInfo, (temp_a0 != 0)) && (temp_a1 != 0) && (collider != 0) && (info != 0)) {
        sp30 = temp_a0;
        sp2C = temp_a1;
        sp38 = 0.0f;
        sp3C = CollisionCheck_GetDamageAndEffectOnBumper(temp_a0, temp_a1, collider, info, &sp24);
        if (CollisionCheck_GetToucherDamage(temp_a0, temp_a1, collider, info) != 0) {
            if (sp3C < 1.0f) {
                if (sp24 == 0) {
                    return;
                }
                goto block_14;
            }
            collider = collider;
            temp_f0 = CollisionCheck_ApplyBumperDefense(sp3C, info);
            phi_f2 = temp_f0;
            if (!(temp_f0 < 1.0f) || (sp24 != 0)) {
                goto block_14;
            }
            /* Duplicate return node #23. Try simplifying control flow for better match */
            return;
        }
block_14:
        temp_v0_2 = collider->actor;
        if (temp_v0_2->colChkInfo.damageTable != 0) {
            temp_v0_2->colChkInfo.damageEffect = (u8) sp24;
        }
        temp_v0_3 = collider->acFlags & 4;
        if ((temp_v0_3 == 0) || ((temp_v0_3 != 0) && (sp2C->toucher.dmgFlags == 0x20000000))) {
            temp_v0_4 = collider->actor;
            temp_t8 = temp_v0_4->colChkInfo.damage;
            temp_f10 = (f32) temp_t8;
            phi_f10 = temp_f10;
            if ((s32) temp_t8 < 0) {
                phi_f10 = temp_f10 + 4294967296.0f;
            }
            if (phi_f10 < phi_f2) {
                temp_v0_4->colChkInfo.damage = (u8) (u32) phi_f2;
            }
        }
        /* Duplicate return node #23. Try simplifying control flow for better match */
    }
}

void CollisionCheck_ApplyDamageJntSph(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *collider) {
    Actor *temp_v0;
    s32 temp_s0;
    s32 phi_s1;
    s32 phi_s0;

    temp_v0 = collider[1].actor;
    if (((s32) temp_v0 > 0) && (collider[1].at != 0)) {
        phi_s0 = 0;
        if ((s32) temp_v0 > 0) {
            phi_s1 = 0;
            do {
                CollisionCheck_ApplyDamage(globalCtx, colCtxt, collider, collider[1].at + phi_s1);
                temp_s0 = phi_s0 + 1;
                phi_s1 += 0x40;
                phi_s0 = temp_s0;
            } while (temp_s0 < (s32) collider[1].actor);
        }
    }
}

void CollisionCheck_ApplyDamageCyl(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *collider) {
    CollisionCheck_ApplyDamage(globalCtx, colCtxt, collider, (ColliderInfo *) &collider[1]);
}

void CollisionCheck_ApplyDamageTris(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *collider) {
    s32 temp_s0;
    s32 phi_s1;
    s32 phi_s0;

    phi_s1 = 0;
    phi_s0 = 0;
    if ((s32) collider[1].actor > 0) {
        do {
            CollisionCheck_ApplyDamage(globalCtx, colCtxt, collider, collider[1].at + phi_s1);
            temp_s0 = phi_s0 + 1;
            phi_s1 += 0x5C;
            phi_s0 = temp_s0;
        } while (temp_s0 < (s32) collider[1].actor);
    }
}

void CollisionCheck_ApplyDamageQuad(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *collider) {
    CollisionCheck_ApplyDamage(globalCtx, colCtxt, collider, (ColliderInfo *) &collider[1]);
}

void CollisionCheck_ApplyDamageSphere(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Collider *collider) {
    CollisionCheck_ApplyDamage(globalCtx, colCtxt, collider, (ColliderInfo *) &collider[1]);
}

void CollisionCheck_Damage(GlobalContext *globalCtx, CollisionCheckContext *colCtxt) {
    Collider *temp_a2;
    CollisionCheckContext *temp_s1;
    s32 temp_v1;
    s32 temp_v1_2;
    CollisionCheckContext *phi_s1;
    u32 phi_v0;
    s32 phi_v1;

    temp_v1 = colCtxt->colACCount;
    phi_s1 = colCtxt;
    phi_v1 = temp_v1;
    if (temp_v1 > 0) {
        do {
            temp_a2 = phi_s1->colAC[0];
            if (temp_a2 == 0) {
                phi_v0 = (u32) ((phi_v1 * 4) + colCtxt);
            } else if ((temp_a2->acFlags & 0x40) != 0) {
                phi_v0 = (u32) ((phi_v1 * 4) + colCtxt);
            } else {
                sApplyDamageFuncs[temp_a2->shape](globalCtx, colCtxt, temp_a2);
                temp_v1_2 = colCtxt->colACCount;
                phi_v0 = (u32) ((temp_v1_2 * 4) + colCtxt);
                phi_v1 = temp_v1_2;
            }
            temp_s1 = phi_s1 + 4;
            phi_s1 = temp_s1;
        } while ((u32) temp_s1 < phi_v0);
    }
}

s32 CollisionCheck_LineOC_JntSph(GlobalContext *globalCtx, CollisionCheckContext *colChkCtx, Collider *collider, Vec3f *a, Vec3f *b) {
    s32 temp_s0;
    void *temp_v0;
    s32 phi_s0;

    phi_s0 = 0;
    if ((s32) collider[1].actor > 0) {
loop_2:
        temp_v0 = collider[1].at + phi_s0;
        if ((temp_v0->unk_17 & 1) == 0) {
            goto block_7;
        }
        D_801EDEB0.a.x = a->x;
        D_801EDEB0.a.y = a->y;
        D_801EDEB0.a.z = a->z;
        D_801EDEBC.unk_0 = (f32) b->x;
        D_801EDEBC.unk_4 = (f32) b->y;
        D_801EDEBC.unk_8 = (f32) b->z;
        if (Math3D_ColSphereLineSeg(temp_v0 + 0x30, &D_801EDEB0) != 0) {
            return 1;
        }
block_7:
        temp_s0 = phi_s0 + 0x40;
        phi_s0 = temp_s0;
        if (temp_s0 >= ((s32) collider[1].actor << 6)) {
            goto block_8;
        }
        goto loop_2;
    }
block_8:
    return 0;
}

s32 CollisionCheck_LineOC_Cyl(GlobalContext *globalCtx, CollisionCheckContext *colChkCtx, Collider *collider, Vec3f *a, Vec3f *b) {
    if ((collider->unk_2F & 1) == 0) {
        goto block_4;
    }
    if (func_8017E350((void *) &collider[2].atFlags, a, b, &D_801EDF38, &D_801EDF48) != 0) {
        return 1;
    }
block_4:
    return 0;
}

s32 CollisionCheck_LineOC_Sphere(GlobalContext *globalCtx, CollisionCheckContext *colChkCtx, Collider *collider, Vec3f *a, Vec3f *b) {
    if ((collider->unk_2F & 1) == 0) {
        goto block_4;
    }
    D_801EDFC8.a.x = a->x;
    D_801EDFC8.a.y = a->y;
    D_801EDFC8.a.z = a->z;
    D_801EDFD4.unk_0 = (f32) b->x;
    D_801EDFD4.unk_4 = (f32) b->y;
    D_801EDFD4.unk_8 = (f32) b->z;
    if (Math3D_ColSphereLineSeg((Sphere16 *) &collider[3], &D_801EDFC8) != 0) {
        return 1;
    }
block_4:
    return 0;
}

s32 CollisionCheck_LineOC(GlobalContext *globalCtx, CollisionCheckContext *colChkCtx, Vec3f *a, Vec3f *b, Actor **exclusions, s32 numExclusions) {
    Collider **temp_s1;
    Collider **temp_s1_2;
    Collider *temp_a2;
    s32 (*temp_v0_2)(GlobalContext *, CollisionCheckContext *, Collider *, Vec3f *, Vec3f *);
    s32 temp_v0;
    s32 temp_v0_3;
    Collider **phi_s1;
    Actor **phi_v1;
    s32 phi_v0;
    s32 phi_a1;
    s32 phi_s3;
    s32 phi_s3_2;

    temp_s1 = colChkCtx->colOC;
    phi_s1 = temp_s1;
    phi_s3 = 0;
    phi_s3_2 = 0;
    if ((u32) temp_s1 < (u32) &colChkCtx->colOC[colChkCtx->colOCCount]) {
loop_2:
        phi_a1 = 0;
        if (CollisionCheck_SkipOC(*phi_s1) == 0) {
            phi_v0 = 0;
            if (numExclusions > 0) {
                phi_v1 = exclusions;
loop_5:
                temp_v0 = phi_v0 + 1;
                phi_v0 = temp_v0;
                if ((*phi_s1)->actor == *phi_v1) {
                    phi_a1 = 1;
                } else {
                    phi_v1 += 4;
                    if (temp_v0 != numExclusions) {
                        goto loop_5;
                    }
                }
            }
            if ((phi_a1 != 0) || (temp_a2 = *phi_s1, temp_v0_2 = sOCLineCheckFuncs[temp_a2->shape], (temp_v0_2 == 0)) || (temp_v0_3 = temp_v0_2(globalCtx, colChkCtx, temp_a2, a, b), phi_s3 = temp_v0_3, phi_s3_2 = temp_v0_3, (temp_v0_3 == 0))) {
                goto block_11;
            }
        } else {
block_11:
            temp_s1_2 = phi_s1 + 4;
            phi_s1 = temp_s1_2;
            phi_s3 = phi_s3_2;
            if ((u32) temp_s1_2 < (u32) &colChkCtx->colOC[colChkCtx->colOCCount]) {
                goto loop_2;
            }
        }
    }
    return phi_s3;
}

s32 CollisionCheck_LineOCCheckAll(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Vec3f *a, Vec3f *b) {
    return CollisionCheck_LineOC(globalCtx, colCtxt, a, b, NULL, 0);
}

s32 CollisionCheck_LineOCCheck(GlobalContext *globalCtx, CollisionCheckContext *colCtxt, Vec3f *a, Vec3f *b, Actor **exclusions, s32 numExclusions) {
    return CollisionCheck_LineOC(globalCtx, colCtxt, a, b, exclusions, numExclusions);
}

void Collider_UpdateCylinder(Actor *actor, ColliderCylinder *collider) {
    collider->dim.pos.x = (s16) (s32) actor->world.pos.x;
    collider->dim.pos.y = (s16) (s32) actor->world.pos.y;
    collider->dim.pos.z = (s16) (s32) actor->world.pos.z;
}

void Collider_SetCylinderPosition(ColliderCylinder *collider, Vec3s *pos) {
    collider->dim.pos.x = pos->x;
    collider->dim.pos.y = pos->y;
    collider->dim.pos.z = pos->z;
}

void Collider_SetQuadVertices(ColliderQuad *collider, Vec3f *a, Vec3f *b, Vec3f *c, Vec3f *d) {
    ColliderQuadDim *sp1C;
    ColliderQuadDim *temp_a0;

    Math_Vec3f_Copy(&collider->dim.quad[2], c);
    Math_Vec3f_Copy(&collider->dim.quad[3], d);
    temp_a0 = &collider->dim;
    sp1C = temp_a0;
    Math_Vec3f_Copy((Vec3f *) temp_a0, a);
    Math_Vec3f_Copy(&collider->dim.quad[1], b);
    Collider_SetQuadMidpoints(temp_a0);
}

void Collider_SetTrisVertices(ColliderTris *collider, s32 index, Vec3f *a, Vec3f *b, Vec3f *c) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    ColliderTrisElement *temp_s0;

    temp_s0 = &collider->elements[index];
    Math_Vec3f_Copy((Vec3f *) &temp_s0->dim, a);
    Math_Vec3f_Copy(&temp_s0->dim.vtx[1], b);
    Math_Vec3f_Copy(&temp_s0->dim.vtx[2], c);
    Math3D_UnitNormalVector(a, b, c, &sp40, &sp3C, &sp38, &sp34);
    temp_s0->dim.plane.normal.x = sp40;
    temp_s0->dim.plane.normal.y = sp3C;
    temp_s0->dim.plane.normal.z = sp38;
    temp_s0->dim.plane.originDist = sp34;
}

void Collider_SetTrisDim(GlobalContext *globalCtx, ColliderTris *collider, s32 index, ColliderTrisElementDimInit *init) {
    Collider_SetTrisElementDim(globalCtx, &collider->elements[index].dim, init);
}

void Collider_UpdateSpheres(s32 limb, ColliderJntSph *collider) {
    f32 *temp_at;
    f32 *temp_at_2;
    s32 temp_s3;
    s32 temp_v0;
    void *temp_s1;
    void *temp_s1_2;
    s32 phi_s0;
    s32 phi_s3;
    s32 phi_v0;

    temp_v0 = collider->count;
    phi_s0 = 0;
    phi_s3 = 0;
    phi_v0 = temp_v0;
    if (temp_v0 > 0) {
        do {
            temp_s1 = collider->elements + phi_s0;
            if (limb == temp_s1->unk_3C) {
                temp_at = &D_801EE1C0.y;
                *temp_at = (f32) temp_s1->unk_28;
                *temp_at = (f32) (collider->elements + phi_s0)->unk_2A;
                D_801EE1C0.z = (f32) (collider->elements + phi_s0)->unk_2C;
                SysMatrix_MultiplyVector3fByState(&D_801EE1C0, &D_801EE1D0);
                temp_at_2 = &D_801EE1D0.y;
                (collider->elements + phi_s0)->unk_30 = (s16) (s32) *temp_at_2;
                (collider->elements + phi_s0)->unk_32 = (s16) (s32) *temp_at_2;
                (collider->elements + phi_s0)->unk_34 = (s16) (s32) D_801EE1D0.z;
                temp_s1_2 = collider->elements + phi_s0;
                temp_s1_2->unk_36 = (s16) (s32) (temp_s1_2->unk_38 * (f32) temp_s1_2->unk_2E);
                phi_v0 = collider->count;
            }
            temp_s3 = phi_s3 + 1;
            phi_s0 += 0x40;
            phi_s3 = temp_s3;
        } while (temp_s3 < phi_v0);
    }
}

void Collider_UpdateSpheresElement(ColliderJntSph *collider, s32 index, Actor *actor) {
    ColliderJntSphElement *temp_v1;
    ColliderJntSphElement *temp_v1_2;
    ColliderJntSphElement *temp_v1_3;
    ColliderJntSphElement *temp_v1_4;

    if (index < collider->count) {
        temp_v1 = &collider->elements[index];
        temp_v1->dim.worldSphere.center.x = (s16) (s32) ((f32) temp_v1->dim.modelSphere.center.x + actor->world.pos.x);
        temp_v1_2 = &collider->elements[index];
        temp_v1_2->dim.worldSphere.center.y = (s16) (s32) ((f32) temp_v1_2->dim.modelSphere.center.y + actor->world.pos.y);
        temp_v1_3 = &collider->elements[index];
        temp_v1_3->dim.worldSphere.center.z = (s16) (s32) ((f32) temp_v1_3->dim.modelSphere.center.z + actor->world.pos.z);
        temp_v1_4 = &collider->elements[index];
        temp_v1_4->dim.worldSphere.radius = (s16) (s32) (temp_v1_4->dim.scale * (f32) temp_v1_4->dim.modelSphere.radius);
    }
}

void Collider_UpdateSphere(s32 limb, ColliderSphere *collider) {
    f32 *temp_at;
    f32 *temp_at_2;
    s16 temp_t9;

    if (limb == collider->dim.limb) {
        temp_at = &D_801EE1E0.y;
        *temp_at = (f32) collider->dim.modelSphere.center.x;
        *temp_at = (f32) collider->dim.modelSphere.center.y;
        temp_t9 = collider->dim.modelSphere.center.z;
        collider = collider;
        D_801EE1E0.z = (f32) temp_t9;
        SysMatrix_MultiplyVector3fByState(&D_801EE1E0, &D_801EE1F0);
        temp_at_2 = &D_801EE1F0.y;
        collider->dim.worldSphere.center.x = (s16) (s32) *temp_at_2;
        collider->dim.worldSphere.center.y = (s16) (s32) *temp_at_2;
        collider->dim.worldSphere.center.z = (s16) (s32) D_801EE1F0.z;
        collider->dim.worldSphere.radius = (s16) (s32) ((f32) collider->dim.modelSphere.radius * collider->dim.scale);
    }
}

void CollisionCheck_SpawnRedBlood(GlobalContext *globalCtx, Vec3f *v) {
    s32 sp24;
    s16 *temp_at;

    temp_at = &D_801EE200.position.z;
    *temp_at = (s16) (s32) v->x;
    *temp_at = (s16) (s32) v->y;
    *temp_at = (s16) (s32) v->z;
    D_801EE200.particleFactor1 = 5;
    D_801EE200.particleFactor2 = 5;
    D_801EE200.colorStart[0].r = 0x80;
    D_801EE200.colorStart[0].g = 0;
    D_801EE200.colorStart[0].b = 0x40;
    D_801EE200.colorStart[0].a = 0xFF;
    D_801EE200.colorStart[1].r = 0x80;
    D_801EE200.colorStart[1].g = 0;
    D_801EE200.colorStart[1].b = 0x40;
    D_801EE200.colorStart[1].a = 0xFF;
    D_801EE200.colorStart[2].r = 0xFF;
    D_801EE200.colorStart[2].g = 0x80;
    D_801EE200.colorStart[2].b = 0;
    D_801EE200.colorStart[2].a = 0xFF;
    D_801EE200.colorStart[3].r = 0xFF;
    D_801EE200.colorStart[3].g = 0x80;
    D_801EE200.colorStart[3].b = 0;
    D_801EE200.colorStart[3].a = 0xFF;
    D_801EE200.colorEnd[0].r = 0x40;
    D_801EE200.colorEnd[0].g = 0;
    D_801EE200.colorEnd[0].b = 0x20;
    D_801EE200.colorEnd[0].a = 0;
    D_801EE200.colorEnd[1].r = 0x40;
    D_801EE200.colorEnd[1].g = 0;
    D_801EE200.colorEnd[1].b = 0x20;
    D_801EE200.colorEnd[1].a = 0;
    D_801EE200.colorEnd[2].r = 0x80;
    D_801EE200.colorEnd[2].g = 0;
    D_801EE200.colorEnd[2].b = 0x40;
    D_801EE200.colorEnd[2].a = 0;
    D_801EE200.colorEnd[3].r = 0x80;
    D_801EE200.colorEnd[3].g = 0;
    D_801EE200.colorEnd[3].b = 0x40;
    D_801EE200.colorEnd[3].a = 0;
    D_801EE200.age = 0;
    D_801EE200.duration = 0x10;
    D_801EE200.velocity = 8.0f;
    D_801EE200.gravity = -1.0f;
    Effect_Add(globalCtx, &sp24, 0, 0U, (u8) 1, (void *) &D_801EE200);
}

void CollisionCheck_SpawnWaterDroplets(GlobalContext *globalCtx, Vec3f *v) {
    s32 sp24;
    s16 *temp_at;

    temp_at = &D_801EE738.position.z;
    *temp_at = (s16) (s32) v->x;
    *temp_at = (s16) (s32) v->y;
    *temp_at = (s16) (s32) v->z;
    D_801EE738.particleFactor1 = 5;
    D_801EE738.particleFactor2 = 5;
    D_801EE738.colorStart[0].r = 0xFF;
    D_801EE738.colorStart[0].g = 0xFF;
    D_801EE738.colorStart[0].b = 0xFF;
    D_801EE738.colorStart[0].a = 0xFF;
    D_801EE738.colorStart[1].r = 0x64;
    D_801EE738.colorStart[1].g = 0x64;
    D_801EE738.colorStart[1].b = 0x64;
    D_801EE738.colorStart[1].a = 0x64;
    D_801EE738.colorStart[2].r = 0x64;
    D_801EE738.colorStart[2].g = 0x64;
    D_801EE738.colorStart[2].b = 0x64;
    D_801EE738.colorStart[2].a = 0x64;
    D_801EE738.colorStart[3].r = 0x64;
    D_801EE738.colorStart[3].g = 0x64;
    D_801EE738.colorStart[3].b = 0x64;
    D_801EE738.colorStart[3].a = 0x64;
    D_801EE738.colorEnd[0].r = 0x32;
    D_801EE738.colorEnd[0].g = 0x32;
    D_801EE738.colorEnd[0].b = 0x32;
    D_801EE738.colorEnd[0].a = 0x32;
    D_801EE738.colorEnd[1].r = 0x32;
    D_801EE738.colorEnd[1].g = 0x32;
    D_801EE738.colorEnd[1].b = 0x32;
    D_801EE738.colorEnd[1].a = 0x32;
    D_801EE738.colorEnd[2].r = 0x32;
    D_801EE738.colorEnd[2].g = 0x32;
    D_801EE738.colorEnd[2].b = 0x32;
    D_801EE738.colorEnd[2].a = 0x32;
    D_801EE738.colorEnd[3].r = 0;
    D_801EE738.colorEnd[3].g = 0;
    D_801EE738.colorEnd[3].b = 0;
    D_801EE738.colorEnd[3].a = 0;
    D_801EE738.age = 0;
    D_801EE738.duration = 0x10;
    D_801EE738.velocity = 8.0f;
    D_801EE738.gravity = -1.0f;
    Effect_Add(globalCtx, &sp24, 0, 0U, (u8) 1, (void *) &D_801EE738);
}

void CollisionCheck_SpawnShieldParticles(GlobalContext *globalCtx, Vec3f *v) {
    s32 sp24;
    s16 *temp_at;
    s16 *temp_at_2;
    s32 temp_f10;
    s32 temp_f18;
    s32 temp_f6;

    temp_at = &shieldParticleInitMetal.position.z;
    temp_f6 = (s32) v->x;
    *temp_at = (s16) temp_f6;
    temp_f10 = (s32) v->y;
    *temp_at = (s16) temp_f10;
    temp_f18 = (s32) v->z;
    *temp_at = (s16) temp_f18;
    temp_at_2 = &shieldParticleInitMetal.lightPoint.z;
    *temp_at_2 = (s16) temp_f6;
    *temp_at_2 = (s16) temp_f10;
    *temp_at_2 = (s16) temp_f18;
    Effect_Add(globalCtx, &sp24, 3, 0U, (u8) 1, (void *) &shieldParticleInitMetal);
}

void CollisionCheck_SpawnShieldParticlesMetal(GlobalContext *globalCtx, Vec3f *v) {
    CollisionCheck_SpawnShieldParticles(globalCtx, v);
    play_sound(0x1808U);
}

void CollisionCheck_SpawnShieldParticlesMetalSound(GlobalContext *globalCtx, Vec3f *v, Vec3f *pos) {
    CollisionCheck_SpawnShieldParticles(globalCtx, v);
    func_8019F1C0(pos, 0x1808U);
}

void CollisionCheck_SpawnShieldParticlesMetal2(GlobalContext *globalCtx, Vec3f *v) {
    CollisionCheck_SpawnShieldParticlesMetal(globalCtx, v);
}

void CollisionCheck_SpawnShieldParticlesWood(GlobalContext *globalCtx, Vec3f *v, Vec3f *pos) {
    s32 sp24;
    s16 *temp_at;
    s16 *temp_at_2;
    s32 temp_f10;
    s32 temp_f18;
    s32 temp_f6;

    temp_at = &shieldParticleInitWood.position.z;
    temp_f6 = (s32) v->x;
    *temp_at = (s16) temp_f6;
    temp_f10 = (s32) v->y;
    *temp_at = (s16) temp_f10;
    temp_f18 = (s32) v->z;
    *temp_at = (s16) temp_f18;
    temp_at_2 = &shieldParticleInitWood.lightPoint.z;
    *temp_at_2 = (s16) temp_f6;
    *temp_at_2 = (s16) temp_f10;
    *temp_at_2 = (s16) temp_f18;
    Effect_Add(globalCtx, &sp24, 3, 0U, (u8) 1, (void *) &shieldParticleInitWood);
    func_8019F1C0(pos, 0x1837U);
}

s32 CollisionCheck_CylSideVsLineSeg(f32 radius, f32 height, f32 offset, Vec3f *actorPos, Vec3f *itemPos, Vec3f *itemProjPos, Vec3f *out1, Vec3f *out2) {
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp38;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_v0_2;
    s32 phi_a0;
    s32 phi_a0_2;
    s32 phi_v0_3;
    f32 phi_f12;
    s32 phi_a1;
    s32 phi_a2;
    s32 phi_a0_3;
    s32 phi_a0_4;
    s32 phi_v1_2;
    s32 phi_v0_4;
    s32 phi_v1_3;
    s32 phi_v0_5;
    s32 phi_v1_4;

    sp50 = 0.0f;
    sp4C = 0.0f;
    sp6C = itemPos->x - actorPos->x;
    temp_f2 = (itemPos->y - actorPos->y) - offset;
    sp70 = temp_f2;
    sp74 = itemPos->z - actorPos->z;
    sp60 = itemProjPos->x - actorPos->x;
    temp_f10 = (itemProjPos->y - actorPos->y) - offset;
    sp64 = temp_f10;
    sp68 = itemProjPos->z - actorPos->z;
    temp_f16 = sp60 - sp6C;
    temp_f4 = temp_f10 - temp_f2;
    sp54 = temp_f16;
    sp18 = temp_f4;
    sp58 = temp_f4;
    temp_f18 = sp68 - sp74;
    sp5C = temp_f18;
    phi_v0 = 0;
    phi_v0_2 = 0;
    phi_v0_3 = 0;
    phi_v0_4 = 0;
    phi_v0_5 = 0;
    if (temp_f2 > 0.0f) {
        phi_v0 = 1;
    }
    if ((phi_v0 != 0) && (temp_f2 < height) && (sqrtf((sp6C * sp6C) + (sp74 * sp74)) < radius)) {
        return 3;
    }
    phi_v1 = 0;
    phi_v1_3 = 0;
    phi_v1_2 = 0;
    if (sp64 > 0.0f) {
        phi_v1 = 1;
    }
    if ((phi_v1 != 0) && (sp64 < height) && (sqrtf((sp60 * sp60) + (sp68 * sp68)) < radius)) {
        return 3;
    }
    temp_f12 = ((sp6C * sp6C) + (sp74 * sp74)) - (radius * radius);
    sp38 = temp_f12;
    temp_f2_2 = (temp_f16 * temp_f16) + (temp_f18 * temp_f18);
    if (!(fabsf(temp_f2_2) < 0.008f)) {
        temp_f14 = (2.0f * temp_f16 * sp6C) + (2.0f * temp_f18 * sp74);
        temp_f0 = temp_f14 * temp_f14;
        temp_f12_2 = 4.0f * temp_f2_2 * sp38;
        if (temp_f0 < temp_f12_2) {
            return 0;
        }
        temp_f16_2 = temp_f0 - temp_f12_2;
        temp_f0_2 = sqrtf(temp_f16_2);
        phi_v0_2 = 1;
        if (temp_f16_2 > 0.0f) {

        }
        temp_f12_3 = (temp_f0_2 - temp_f14) / (2.0f * temp_f2_2);
        sp50 = temp_f12_3;
        phi_v0_3 = phi_v0_2;
        phi_f12 = temp_f12_3;
        phi_v1_4 = 1;
        if (phi_v0_2 != 0) {
            sp4C = (-temp_f14 - temp_f0_2) / (2.0f * temp_f2_2);
        }
        goto block_38;
    }
    temp_f14_2 = (2.0f * temp_f16 * sp6C) + (2.0f * temp_f18 * sp74);
    if (!(fabsf(temp_f14_2) < 0.008f)) {
        temp_f12_4 = -temp_f12 / temp_f14_2;
        sp50 = temp_f12_4;
        phi_f12 = temp_f12_4;
        phi_v1_4 = 1;
block_38:
        phi_v1_2 = phi_v1_4;
        phi_v0_4 = phi_v0_3;
        phi_v1_2 = phi_v1_4;
        if (phi_v0_3 == 0) {
            if ((phi_f12 < 0.0f) || (phi_f12 > 1.0f)) {
                return 0;
            }
            goto block_59;
        }
        phi_a1 = 0;
        if (phi_f12 < 0.0f) {
            phi_a1 = 1;
        }
        phi_a0_3 = phi_a1;
        if (phi_a1 == 0) {
            phi_a0_3 = 0;
            if (phi_f12 > 1.0f) {
                phi_a0_3 = 1;
            }
        }
        phi_a2 = 0;
        if (sp4C < 0.0f) {
            phi_a2 = 1;
        }
        phi_a0_4 = phi_a2;
        if (phi_a2 == 0) {
            phi_a0_4 = 0;
            if (sp4C > 1.0f) {
                phi_a0_4 = 1;
            }
        }
        if ((phi_a0_3 != 0) && (phi_a0_4 != 0)) {
            return 0;
        }
        if (phi_a0_3 != 0) {

        }
        if (phi_a0_4 != 0) {

        }
block_59:
        phi_v1_3 = phi_v1_2;
        phi_v0_5 = phi_v0_4;
        if ((phi_v1_2 != 0) && ((temp_f0_3 = (phi_f12 * sp18) + sp70, (temp_f0_3 < 0.0f)) || (height < temp_f0_3))) {

        }
        if ((phi_v0_4 != 0) && ((temp_f0_4 = (sp4C * sp18) + sp70, (temp_f0_4 < 0.0f)) || (height < temp_f0_4))) {

        }
        if ((phi_v1_3 == 0) && (phi_v0_5 == 0)) {
            return 0;
        }
        if ((phi_v1_3 != 0) && (phi_v0_5 != 0)) {
            out1->x = (phi_f12 * sp54) + sp6C + actorPos->x;
            out1->y = (phi_f12 * sp58) + sp70 + actorPos->y;
            out1->z = (phi_f12 * sp5C) + sp74 + actorPos->z;
            out2->x = (sp4C * sp54) + sp6C + actorPos->x;
            out2->y = (sp4C * sp58) + sp70 + actorPos->y;
            out2->z = (sp4C * sp5C) + sp74 + actorPos->z;
            return 2;
        }
        if (phi_v1_3 != 0) {
            out1->x = (phi_f12 * sp54) + sp6C + actorPos->x;
            out1->y = (phi_f12 * sp58) + sp70 + actorPos->y;
            out1->z = (phi_f12 * sp5C) + sp74 + actorPos->z;
            return 1;
        }
        if (phi_v0_5 != 0) {
            out1->x = (sp4C * sp54) + sp6C + actorPos->x;
            out1->y = (sp4C * sp58) + sp70 + actorPos->y;
            out1->z = (sp4C * sp5C) + sp74 + actorPos->z;
            return 1;
        }
        return 1;
    }
    if (temp_f12 <= 0.0f) {
        phi_a0 = phi_v0;
        if (phi_v0 != 0) {
            phi_a0 = 0;
            if (sp70 < height) {
                phi_a0 = 1;
            }
        }
        phi_a0_2 = phi_v1;
        if (phi_v1 != 0) {
            phi_a0_2 = 0;
            if (sp64 < height) {
                phi_a0_2 = 1;
            }
        }
        if ((phi_a0 != 0) && (phi_a0_2 != 0)) {
            out1->x = sp6C.unk_0;
            out1->y = (&sp6C)[1];
            out1->z = (&sp6C)[2];
            out2->x = sp60.unk_0;
            out2->y = (&sp60)[1];
            out2->z = (&sp60)[2];
            return 2;
        }
        if (phi_a0 != 0) {
            out1->x = sp6C.unk_0;
            out1->y = (&sp6C)[1];
            out1->z = (&sp6C)[2];
            return 1;
        }
        if (phi_a0_2 != 0) {
            out1->x = sp60.unk_0;
            out1->y = (&sp60)[1];
            out1->z = (&sp60)[2];
            return 1;
        }
        goto block_37;
    }
block_37:
    return 0;
}
