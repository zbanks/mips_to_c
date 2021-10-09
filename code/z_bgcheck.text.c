CRASHED

typedef struct {
    /* 0x00 */ Actor *actor;
    /* 0x04 */ CollisionHeader *colHeader;
    /* 0x08 */ DynaLookup dynaLookup;
    /* 0x10 */ u16 vtxStartIndex;
    /* 0x12 */ s16 unk12;                           /* inferred */
    /* 0x14 */ ScaleRotPos prevTransform;
    /* 0x34 */ ScaleRotPos curTransform;
    /* 0x54 */ Sphere16 boundingSphere;
    /* 0x5C */ f32 minY;
    /* 0x60 */ f32 maxY;
} BgActor;                                          /* size = 0x64 */

typedef struct {
    /* 0x0 */ s32 unk0;                             /* inferred */
    /* 0x4 */ WaterBox *boxes;
} DynaSSWaterboxList;                               /* size = 0x8 */

struct _mips2c_stack_BgCheck_ActorMeshInit {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_BgCheck_ActorMeshInitFromActor {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_ActorMeshParamsInit {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_ActorMeshPolyListsHeadsInit {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgCheck_ActorMeshPolyListsInit {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgCheck_ActorMeshUpdateParams {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_ActorMeshVerticesIndexInit {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_ActorMeshWaterboxesIndexInit {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_AddActorMesh {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ DynaCollisionContext *sp1C;          /* inferred */
    /* 0x20 */ char pad20[0x4];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_BgCheck_AddActorMeshToLists {
    /* 0x000 */ char pad0[0x74];
    /* 0x074 */ Sphere16 *sp74;                     /* inferred */
    /* 0x078 */ char pad78[0x4];
    /* 0x07C */ ? sp7C;                             /* inferred */
    /* 0x07C */ char pad7C[0xC];
    /* 0x088 */ ? sp88;                             /* inferred */
    /* 0x088 */ char pad88[0x8];
    /* 0x090 */ f32 sp90;                           /* inferred */
    /* 0x094 */ ? sp94;                             /* inferred */
    /* 0x094 */ char pad94[0xC];
    /* 0x0A0 */ f32 spA0;                           /* inferred */
    /* 0x0A4 */ char padA4[0x8];                    /* maybe part of spA0[3]? */
    /* 0x0AC */ ? spAC;                             /* inferred */
    /* 0x0AC */ char padAC[0xC];
    /* 0x0B8 */ ? spB8;                             /* inferred */
    /* 0x0B8 */ char padB8[0x12];
    /* 0x0CA */ s16 spCA;                           /* inferred */
    /* 0x0CC */ s16 spCC;                           /* inferred */
    /* 0x0CE */ s16 spCE;                           /* inferred */
    /* 0x0D0 */ char padD0[0x18];                   /* maybe part of spCE[13]? */
    /* 0x0E8 */ f32 spE8;                           /* inferred */
    /* 0x0EC */ f32 spEC;                           /* inferred */
    /* 0x0F0 */ f32 spF0;                           /* inferred */
    /* 0x0F4 */ ? spF4;                             /* inferred */
    /* 0x0F4 */ char padF4[0x10];
    /* 0x104 */ s16 sp104;                          /* inferred */
    /* 0x106 */ s16 sp106;                          /* inferred */
    /* 0x108 */ s16 sp108;                          /* inferred */
    /* 0x10A */ char pad10A[0xA];                   /* maybe part of sp108[6]? */
    /* 0x114 */ f32 sp114;                          /* inferred */
    /* 0x118 */ f32 sp118;                          /* inferred */
    /* 0x11C */ f32 sp11C;                          /* inferred */
    /* 0x120 */ f32 sp120;                          /* inferred */
    /* 0x124 */ f32 sp124;                          /* inferred */
    /* 0x128 */ f32 sp128;                          /* inferred */
    /* 0x12C */ f32 sp12C;                          /* inferred */
    /* 0x130 */ f32 sp130;                          /* inferred */
    /* 0x134 */ f32 sp134;                          /* inferred */
    /* 0x138 */ f32 sp138;                          /* inferred */
    /* 0x13C */ f32 sp13C;                          /* inferred */
    /* 0x140 */ f32 sp140;                          /* inferred */
    /* 0x144 */ f32 sp144;                          /* inferred */
    /* 0x148 */ f32 sp148;                          /* inferred */
    /* 0x14C */ f32 sp14C;                          /* inferred */
    /* 0x150 */ char pad150[0x4];
    /* 0x154 */ f32 sp154;                          /* inferred */
    /* 0x158 */ f32 sp158;                          /* inferred */
    /* 0x15C */ f32 sp15C;                          /* inferred */
    /* 0x160 */ f32 sp160;                          /* inferred */
    /* 0x164 */ char pad164[0xC];                   /* maybe part of sp160[4]? */
    /* 0x170 */ ? sp170;                            /* inferred */
    /* 0x170 */ char pad170[0x4];
    /* 0x174 */ f32 sp174;                          /* inferred */
    /* 0x178 */ char pad178[0x18];
};                                                  /* size = 0x190 */

struct _mips2c_stack_BgCheck_AllocPolygonLinkedListNode {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_AreActorMeshParamsEqual {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_CalcSubdivisionSize {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_CalcWaterboxDimensions {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_CreateTriNormFromPolygon {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgCheck_CreateVec3fFromVertex {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_CreateVertexFromVec3f {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_DynaAlloc {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgCheck_DynaInit {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_BgCheck_GetActorMeshHeader {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_GetActorOfMesh {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgCheck_GetIsDefaultSpecialScene {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_GetPolyMaxSubdivisions {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_GetPolyMinMaxSubdivisions {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ CollisionPoly *sp34;                 /* inferred */
    /* 0x38 */ char pad38[0x14];                    /* maybe part of sp34[6]? */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad64[0x4];
};                                                  /* size = 0x68 */

struct _mips2c_stack_BgCheck_GetPolyMinSubdivisions {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_GetPolygonAttributes {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgCheck_GetSpecialSceneMaxMemory {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_GetSpecialSceneMaxObjects {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_HasActorMeshChanged {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgCheck_Init {
    /* 0x00 */ char pad0[0x40];
    /* 0x40 */ u32 sp40;                            /* inferred */
    /* 0x44 */ char pad44[0xC];                     /* maybe part of sp40[4]? */
    /* 0x50 */ u32 sp50;                            /* inferred */
    /* 0x54 */ s32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_BgCheck_IsActorMeshIndexValid {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_PolygonCollidesWithSphere {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ ? sp1C;                              /* inferred */
    /* 0x1C */ char pad1C[0xC];
};                                                  /* size = 0x28 */

struct _mips2c_stack_BgCheck_PolygonGetMinY {};     /* size 0x0 */

struct _mips2c_stack_BgCheck_PolygonGetNormal {};   /* size 0x0 */

struct _mips2c_stack_BgCheck_PolygonLinkedListAlloc {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgCheck_PolygonLinkedListInit {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_PolygonLinkedListNodeInit {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_PolygonLinkedListNodeInsert {
    /* 0x00 */ char pad0[0x1E];
    /* 0x1E */ u16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_BgCheck_PolygonLinkedListReset {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_PolygonLinkedListResetHead {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_PolygonsAlloc {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgCheck_PolygonsInit {};       /* size 0x0 */

struct _mips2c_stack_BgCheck_RelocateAllMeshHeaders {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_BgCheck_RelocateMeshHeader {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgCheck_RelocateMeshHeaderPointers {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_BgCheck_RemoveActorMesh {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgCheck_ResetFlagsIfLoadedActor {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgCheck_ScenePolygonListsAlloc {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ TwoHeadArena *sp1C;                  /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_BgCheck_ScenePolygonListsInit {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_ScenePolygonListsInsert {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_BgCheck_ScenePolygonListsInsertSorted {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SSNode *sp24;                        /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_BgCheck_ScenePolygonListsNodeInsert {
    /* 0x00 */ char pad0[0x1E];
    /* 0x1E */ u16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_BgCheck_ScenePolygonListsReserveNode {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_SetActorMeshParams {}; /* size 0x0 */

struct _mips2c_stack_BgCheck_SplitScenePolygonsIntoSubdivisions {
    /* 0x000 */ char pad0[0x7C];
    /* 0x07C */ s32 sp7C;                           /* inferred */
    /* 0x080 */ char pad80[0x18];                   /* maybe part of sp7C[7]? */
    /* 0x098 */ s32 sp98;                           /* inferred */
    /* 0x09C */ char pad9C[0x8];                    /* maybe part of sp98[3]? */
    /* 0x0A4 */ StaticLookup *spA4;                 /* inferred */
    /* 0x0A8 */ char padA8[0xC];                    /* maybe part of spA4[4]? */
    /* 0x0B4 */ f32 spB4;                           /* inferred */
    /* 0x0B8 */ f32 spB8;                           /* inferred */
    /* 0x0BC */ f32 spBC;                           /* inferred */
    /* 0x0C0 */ f32 spC0;                           /* inferred */
    /* 0x0C4 */ f32 spC4;                           /* inferred */
    /* 0x0C8 */ f32 spC8;                           /* inferred */
    /* 0x0CC */ s32 spCC;                           /* inferred */
    /* 0x0D0 */ s32 spD0;                           /* inferred */
    /* 0x0D4 */ s32 spD4;                           /* inferred */
    /* 0x0D8 */ s32 spD8;                           /* inferred */
    /* 0x0DC */ s32 spDC;                           /* inferred */
    /* 0x0E0 */ s32 spE0;                           /* inferred */
    /* 0x0E4 */ s32 spE4;                           /* inferred */
    /* 0x0E8 */ s32 spE8;                           /* inferred */
    /* 0x0EC */ char padEC[0x4];
    /* 0x0F0 */ s32 spF0;                           /* inferred */
    /* 0x0F4 */ s32 spF4;                           /* inferred */
    /* 0x0F8 */ char padF8[0x8];
};                                                  /* size = 0x100 */

struct _mips2c_stack_BgCheck_Update {
    /* 0x00 */ char pad0[0x50];
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ s32 sp54;                            /* inferred */
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ char pad5C[0x4];
};                                                  /* size = 0x60 */

struct _mips2c_stack_BgCheck_UpdateAllActorMeshes {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgCheck_VerticesInit {};       /* size 0x0 */

struct _mips2c_stack_BgCheck_VerticesListAlloc {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgCheck_WaterboxListAlloc {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgCheck_WaterboxListInit {};   /* size 0x0 */

struct _mips2c_stack_func_800BFD84 {};              /* size 0x0 */

struct _mips2c_stack_func_800BFDEC {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad20[0xC];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800C0094 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800C01B8 {};              /* size 0x0 */

struct _mips2c_stack_func_800C02C0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C0340 {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_800C0474 {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_800C0668 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800C06A8 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_800C074C {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_800C07F0 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ CollisionPoly *sp38;                 /* inferred */
    /* 0x3C */ char pad3C[0x10];                    /* maybe part of sp38[5]? */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_800C0E74 {
    /* 0x00 */ char pad0[0x80];
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ char pad84[0xC];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_800C10FC {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800C1238 {};              /* size 0x0 */

struct _mips2c_stack_func_800C12A4 {
    /* 0x000 */ char pad0[0x98];
    /* 0x098 */ f32 sp98;                           /* inferred */
    /* 0x09C */ char pad9C[0x18];                   /* maybe part of sp98[7]? */
    /* 0x0B4 */ f32 spB4;                           /* inferred */
    /* 0x0B8 */ char padB8[0x1C];                   /* maybe part of spB4[8]? */
    /* 0x0D4 */ void *spD4;                         /* inferred */
    /* 0x0D8 */ void *spD8;                         /* inferred */
    /* 0x0DC */ void *spDC;                         /* inferred */
    /* 0x0E0 */ char padE0[0x8];                    /* maybe part of spDC[3]? */
    /* 0x0E8 */ s32 spE8;                           /* inferred */
    /* 0x0EC */ char padEC[0x4];
    /* 0x0F0 */ s32 spF0;                           /* inferred */
    /* 0x0F4 */ f32 spF4;                           /* inferred */
    /* 0x0F8 */ char padF8[0xC];                    /* maybe part of spF4[4]? */
    /* 0x104 */ f32 sp104;                          /* inferred */
    /* 0x108 */ char pad108[0x4];
    /* 0x10C */ f32 sp10C;                          /* inferred */
};                                                  /* size = 0x110 */

struct _mips2c_stack_func_800C1B68 {
    /* 0x00 */ char pad0[0x60];
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ char pad64[0x18];                    /* maybe part of sp60[7]? */
    /* 0x7C */ s32 sp7C;                            /* inferred */
    /* 0x80 */ char pad80[0x4];
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ char pad88[0xC];                     /* maybe part of sp84[4]? */
    /* 0x94 */ s32 sp94;                            /* inferred */
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_800C1D7C {
    /* 0x00 */ char pad0[0x50];
    /* 0x50 */ CollisionPoly *sp50;                 /* inferred */
    /* 0x54 */ Vec3s *sp54;                         /* inferred */
    /* 0x58 */ Vec3f *sp58;                         /* inferred */
    /* 0x5C */ void *sp5C;                          /* inferred */
    /* 0x60 */ ? *sp60;                             /* inferred */
    /* 0x64 */ s32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad6C[0x10];                    /* maybe part of sp68[5]? */
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad7C[0x14];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_800C2008 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800C20F4 {
    /* 0x00 */ char pad0[0x48];
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ char pad4C[0x1C];                    /* maybe part of sp48[8]? */
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ char pad6C[0x4];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_800C2310 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800C2460 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800C2514 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800C25E0 {};              /* size 0x0 */

struct _mips2c_stack_func_800C2BE0 {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ CollisionPoly *sp44;                 /* inferred */
    /* 0x48 */ char pad48[0x4];
    /* 0x4C */ u32 sp4C;                            /* inferred */
    /* 0x50 */ u32 sp50;                            /* inferred */
    /* 0x54 */ u32 sp54;                            /* inferred */
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad58[0xC];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad64[0xC];
    /* 0x70 */ ? sp70;                              /* inferred */
    /* 0x70 */ char pad70[0xC];
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ char pad8C[0x4];
    /* 0x90 */ ? sp90;                              /* inferred */
    /* 0x90 */ char pad90[0xC];
    /* 0x9C */ ? sp9C;                              /* inferred */
    /* 0x9C */ char pad9C[0xC];
    /* 0xA8 */ ? spA8;                              /* inferred */
    /* 0xA8 */ char padA8[0xC];
    /* 0xB4 */ ? spB4;                              /* inferred */
    /* 0xB4 */ char padB4[0x4];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_800C3C00 {};              /* size 0x0 */

struct _mips2c_stack_func_800C3C14 {};              /* size 0x0 */

struct _mips2c_stack_func_800C3C94 {};              /* size 0x0 */

struct _mips2c_stack_func_800C3D50 {
    /* 0x00 */ char pad0[0x68];
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ CollisionContext *sp6C;              /* inferred */
    /* 0x70 */ s16 sp70;                            /* inferred */
    /* 0x72 */ char pad72[0x2];
    /* 0x74 */ CollisionPoly **sp74;                /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ Vec3f *sp7C;                         /* inferred */
    /* 0x80 */ s32 *sp80;                           /* inferred */
    /* 0x84 */ s32 sp84;                            /* inferred */
    /* 0x88 */ Actor *sp88;                         /* inferred */
    /* 0x8C */ s32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad94[0xC];                     /* maybe part of sp90[4]? */
    /* 0xA0 */ ? spA0;                              /* inferred */
    /* 0xA0 */ char padA0[0x4];
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ char padA8[0x10];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_800C3F40 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800C3FA0 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800C4000 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800C4058 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800C40B4 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800C411C {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800C4188 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800C41E4 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800C4240 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800C42A8 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800C4314 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad38[0x4];
    /* 0x3C */ CollisionPoly *sp3C;                 /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_800C43CC {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ CollisionPoly *sp34;                 /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800C4488 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800C44F0 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800C455C {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800C45C4 {
    /* 0x00 */ char pad0[0x40];
    /* 0x40 */ f32 *sp40;                           /* inferred */
    /* 0x44 */ char pad44[0x10];                    /* maybe part of sp40[5]? */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad5C[0x4];
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad64[0x18];                    /* maybe part of sp60[7]? */
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad7C[0x4];
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ char pad84[0x4];
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad88[0x4];
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ char pad90[0x14];                    /* maybe part of sp8C[6]? */
    /* 0xA4 */ s32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ s32 spB4;                            /* inferred */
    /* 0xB8 */ ? spB8;                              /* inferred */
    /* 0xB8 */ char padB8[0x4];
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ char padC0[0x10];                    /* maybe part of spBC[5]? */
    /* 0xD0 */ void *spD0;                          /* inferred */
    /* 0xD4 */ s32 spD4;                            /* inferred */
    /* 0xD8 */ char padD8[0x4];
    /* 0xDC */ StaticLookup *spDC;                  /* inferred */
};                                                  /* size = 0xE0 */

struct _mips2c_stack_func_800C4C74 {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ s32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_800C4CD8 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800C4D3C {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800C4DA4 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800C4E10 {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x4];
    /* 0x4C */ s32 sp4C;                            /* inferred */
    /* 0x50 */ char pad50[0x4];
    /* 0x54 */ StaticLookup *sp54;                  /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_800C4F38 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ CollisionPoly *sp2C;                 /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800C4F84 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800C4FD4 {
    /* 0x000 */ char pad0[0x68];
    /* 0x068 */ s32 sp68;                           /* inferred */
    /* 0x06C */ char pad6C[0x10];                   /* maybe part of sp68[5]? */
    /* 0x07C */ s32 sp7C;                           /* inferred */
    /* 0x080 */ s32 sp80;                           /* inferred */
    /* 0x084 */ char pad84[0x8];                    /* maybe part of sp80[3]? */
    /* 0x08C */ f32 sp8C;                           /* inferred */
    /* 0x090 */ f32 sp90;                           /* inferred */
    /* 0x094 */ f32 sp94;                           /* inferred */
    /* 0x098 */ f32 sp98;                           /* inferred */
    /* 0x09C */ f32 sp9C;                           /* inferred */
    /* 0x0A0 */ f32 spA0;                           /* inferred */
    /* 0x0A4 */ void *spA4;                         /* inferred */
    /* 0x0A8 */ char padA8[0x4];
    /* 0x0AC */ CollisionContext *spAC;             /* inferred */
    /* 0x0B0 */ u16 spB0;                           /* inferred */
    /* 0x0B2 */ s16 spB2;                           /* inferred */
    /* 0x0B4 */ ? *spB4;                            /* inferred */
    /* 0x0B8 */ ? *spB8;                            /* inferred */
    /* 0x0BC */ Vec3f *spBC;                        /* inferred */
    /* 0x0C0 */ Vec3f *spC0;                        /* inferred */
    /* 0x0C4 */ f32 spC4;                           /* inferred */
    /* 0x0C8 */ s32 *spC8;                          /* inferred */
    /* 0x0CC */ s32 spCC;                           /* inferred */
    /* 0x0D0 */ void **spD0;                        /* inferred */
    /* 0x0D4 */ ? spD4;                             /* inferred */
    /* 0x0D4 */ char padD4[0x10];
    /* 0x0E4 */ s32 spE4;                           /* inferred */
    /* 0x0E8 */ s32 spE8;                           /* inferred */
    /* 0x0EC */ s32 spEC;                           /* inferred */
    /* 0x0F0 */ s32 spF0;                           /* inferred */
    /* 0x0F4 */ s32 spF4;                           /* inferred */
    /* 0x0F8 */ s32 spF8;                           /* inferred */
    /* 0x0FC */ s32 spFC;                           /* inferred */
    /* 0x100 */ StaticLookup *sp100;                /* inferred */
    /* 0x104 */ char pad104[0x4];
};                                                  /* size = 0x108 */

struct _mips2c_stack_func_800C5464 {};              /* size 0x0 */

struct _mips2c_stack_func_800C54AC {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800C5538 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800C55C4 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800C5650 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800C56E0 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800C576C {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800C57F8 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800C583C {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_800C58C8 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800C5954 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800C5A20 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800C5A64 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800C5B80 {};              /* size 0x0 */

struct _mips2c_stack_func_800C62BC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C6314 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C636C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C63C4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C641C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C6474 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C6554 {};              /* size 0x0 */

struct _mips2c_stack_func_800C756C {};              /* size 0x0 */

struct _mips2c_stack_func_800C76EC {
    /* 0x00 */ char pad0[0x78];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad7C[0xC];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_800C7974 {
    /* 0x000 */ char pad0[0x6C];
    /* 0x06C */ f32 sp6C;                           /* inferred */
    /* 0x070 */ ? sp70;                             /* inferred */
    /* 0x070 */ char pad70[0x14];
    /* 0x084 */ s32 sp84;                           /* inferred */
    /* 0x088 */ char pad88[0x4];
    /* 0x08C */ ? sp8C;                             /* inferred */
    /* 0x08C */ char pad8C[0x48];
    /* 0x0D4 */ f32 spD4;                           /* inferred */
    /* 0x0D8 */ f32 spD8;                           /* inferred */
    /* 0x0DC */ f32 spDC;                           /* inferred */
    /* 0x0E0 */ f32 spE0;                           /* inferred */
    /* 0x0E4 */ f32 spE4;                           /* inferred */
    /* 0x0E8 */ f32 spE8;                           /* inferred */
    /* 0x0EC */ ? spEC;                             /* inferred */
    /* 0x0EC */ char padEC[0xC];
    /* 0x0F8 */ ? spF8;                             /* inferred */
    /* 0x0F8 */ char padF8[0xC];
    /* 0x104 */ ? sp104;                            /* inferred */
    /* 0x104 */ char pad104[0x1C];
};                                                  /* size = 0x120 */

struct _mips2c_stack_func_800C7E40 {
    /* 0x00 */ char pad0[0x78];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad7C[0x1C];                    /* maybe part of sp78[8]? */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ char pad9C[0x18];                    /* maybe part of sp98[7]? */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ char padB8[0x4];
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ char padCC[0x8];                     /* maybe part of spC8[3]? */
    /* 0xD4 */ s32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ char padDC[0x4];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_func_800C8580 {
    /* 0x00 */ char pad0[0x90];
    /* 0x90 */ s32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_800C87D0 {
    /* 0x00 */ char pad0[0x84];
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ char pad90[0x4];
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 *sp98;                           /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ s32 spA0;                            /* inferred */
    /* 0xA4 */ char padA4[0xC];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_800C8A60 {
    /* 0x00 */ char pad0[0x70];
    /* 0x70 */ CollisionPoly *sp70;                 /* inferred */
    /* 0x74 */ char pad74[0x4];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad7C[0xC];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_800C8BD0 {
    /* 0x00 */ char pad0[0x40];
    /* 0x40 */ CollisionPoly *sp40;                 /* inferred */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ Vec3f *sp48;                         /* inferred */
    /* 0x4C */ void *sp4C;                          /* inferred */
    /* 0x50 */ ? *sp50;                             /* inferred */
    /* 0x54 */ s32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad5C[0x4];
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad60[0x18];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_800C8DC0 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ CollisionContext *sp20;              /* inferred */
    /* 0x24 */ s16 sp24;                            /* inferred */
    /* 0x26 */ char pad26[0x2];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ ? *sp30;                             /* inferred */
    /* 0x34 */ ? *sp34;                             /* inferred */
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ Vec3f *sp3C;                         /* inferred */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ f32 *sp44;                           /* inferred */
    /* 0x48 */ s32 *sp48;                           /* inferred */
    /* 0x4C */ void **sp4C;                         /* inferred */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ s32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_800C8EEC {
    /* 0x00 */ char pad0[0x7C];
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad7C[0xC];
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad88[0x18];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_800C90AC {
    /* 0x00 */ char pad0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_800C921C {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800C9380 {
    /* 0x00 */ char pad0[0x64];
    /* 0x64 */ s16 sp64;                            /* inferred */
    /* 0x66 */ s16 sp66;                            /* inferred */
    /* 0x68 */ s16 sp68;                            /* inferred */
    /* 0x6A */ s16 sp6A;                            /* inferred */
    /* 0x6C */ char pad6C[0x4];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_800C9704 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9728 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9770 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C97F8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9844 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C98CC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9924 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C99AC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C99D4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C99FC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9A24 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9A4C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9A7C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9AB0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9AE4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9B18 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9B40 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9B68 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9B90 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9BB8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9BDC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9C24 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9C74 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9C9C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9CC4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9CEC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9D14 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9D50 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9D8C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9DDC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9E18 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9E40 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9E88 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800C9EBC {};              /* size 0x0 */

struct _mips2c_stack_func_800CA1AC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800CA1E8 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800CA22C {};              /* size 0x0 */

struct _mips2c_stack_func_800CA568 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800CA634 {};              /* size 0x0 */

struct _mips2c_stack_func_800CA648 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ CollisionHeader *sp18;               /* inferred */
    /* 0x1C */ char pad1C[0xC];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800CA6B8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800CA6D8 {};              /* size 0x0 */

struct _mips2c_stack_func_800CA6F0 {
    /* 0x0 */ char pad0[0x4];
    /* 0x4 */ s32 sp4;                              /* inferred */
};                                                  /* size = 0x8 */

struct _mips2c_stack_func_800CA9D0 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800CAA14 {
    /* 0x00 */ char pad0[0x40];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

f64 func_80086D24(f64);                             /* extern */
? func_80179678(f32, f32, f32, f32, f32, f32, f32, f32, s32, s32, s32); /* extern */
s32 func_8017A304(Vec3f *, Vec3f *, Vec3f *, ?32, ?32, CollisionContext *); /* extern */
s32 func_8017AD38(Vec3f *, Vec3f *, ? *, ? *);      /* extern */
s32 func_8017BAD0(Vec3f *, Vec3f *, Vec3f *, f32, f32, f32, f32, f32); /* extern */
? func_8017BE30(f32, f32, Vec3f *, Vec3f *, Vec3f *, f32, f32, f32, f32, s32, CollisionPoly *, f32 *, f32); /* extern */
s32 func_8017BEE0(f32, f32 *, ? *, ? *, f32, f32, f32, f32, ?32, ?32, f32 *, f32); /* extern */
s32 func_8017C008(? *, ? *, ? *, f32, f32, f32, f32, f32, f32, ? *, f32, f32); /* extern */
s32 func_8017C494(f32, f32, Vec3f *, Vec3f *, Vec3f *, f32, f32, f32, f32, ?32, ?32, f32 *, CollisionContext *); /* extern */
s32 func_8017C540(Vec3f *, Vec3f *, Vec3f *, f32, f32, f32, f32, f32); /* extern */
? func_8017C850(Vec3f *, Vec3f *, Vec3f *, f32, f32, f32, f32, f32, CollisionPoly *, s32); /* extern */
s32 func_8017C980(? *, ? *, ? *, f32, f32, f32, f32, f32, f32, ? *, f32, f32); /* extern */
s32 func_8017CB7C(Vec3f *, Vec3f *, Vec3f *, f32, f32, f32, f32, f32); /* extern */
? func_8017CEF0(Vec3f *, ? *, ? *, f32, f32, f32, f32, f32, CollisionPoly *, s32); /* extern */
s32 func_8017D020(? *, ? *, ? *, f32, f32, f32, f32, f32, f32, ? *, f32, f32); /* extern */
s32 func_8017F9C0(void *, ?32, ?32);                /* extern */
s32 func_8017FA34(f32, void *, f32, f32);           /* extern */
s32 func_8017FAA8(void *, f32, f32);                /* extern */
void BgCheck_CreateTriNormFromPolygon(Vec3s *arg0, TriNorm *arg1, Vec3f *arg2); /* static */
void func_800C0340(CollisionPoly *arg0, s32 arg1, CollisionPoly *arg2, s32 arg3, f32 *arg4, f32 arg5); /* static */
s32 func_800C0474(CollisionPoly *arg0, s32 arg1, ?32 arg2, ?32 arg3, f32 *arg4, CollisionContext *arg5); /* static */
void func_800C0668(CollisionPoly *arg2, s32 arg3, f32 *arg4, s32, f32 *); /* static */
void func_800C06A8(Vec3s *arg0, f32 arg2, CollisionPoly *arg3, s32 arg4, f32, f32, f32 *); /* static */
void func_800C074C(Vec3s *arg0, f32 arg2, CollisionPoly *arg3, s32 arg4, f32, f32, f32 *); /* static */
s32 func_800C07F0(CollisionPoly **arg0);            /* static */
f32 func_800C0E74(CollisionContext *arg0, u16 arg1, u16 *arg2, CollisionPoly **arg3, CollisionPoly **arg4, f32 arg5, CollisionContext *arg6, s32 arg7, void *arg8, s32 arg9, s32); /* static */
f32 func_800C10FC(CollisionPoly **arg0, CollisionContext *arg1, u16 arg2, CollisionPoly **arg3, f32 arg4, s32 arg5, s32 arg6, CollisionContext *arg7, s32 arg8); /* static */
s32 func_800C1238(CollisionContext *arg0, CollisionPoly *arg1, f32 *arg2, f32 *arg3, f32 arg4, f32 arg6, f32 arg7, f32 arg8, f32 arg9, CollisionPoly **argA, s32 *, f32, s32 *); /* static */
s32 func_800C12A4(void *arg0, CollisionContext *arg1, u16 arg2, f32 *arg3, f32 *arg4, ? *arg5, f32 arg6, s32 *arg7, DynaPolyActor *arg8); /* static */
s32 func_800C1B68(void *arg0, u16 arg1, CollisionContext *arg2, f32 *arg3, ? *arg4, f32 arg5, CollisionPoly **arg6, void *arg7); /* static */
s32 func_800C1D7C(void **arg0);                     /* static */
s32 func_800C2008(void **arg0);                     /* static */
s32 func_800C20F4(void *arg0, u16 arg1, Vec3f *arg2, Vec3f *arg3, f32 arg4, CollisionPoly **arg5, CollisionPoly **arg6); /* static */
s32 func_800C2310(CollisionPoly **arg0, u16 arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4, f32 arg5, u16 arg6, CollisionPoly **arg7); /* static */
void *func_800C2460(CollisionContext *arg0, StaticLookup *arg1, ? *arg2); /* static */
CollisionPoly **func_800C2514(CollisionContext *arg0, StaticLookup *arg1, ? *arg2); /* static */
void func_800C25E0(CollisionContext *arg0, ? *arg1, s32 *arg2, CollisionContext *); /* static */
s32 func_800C2BE0(Vec3f *arg0, Vec3f *arg1, CollisionPoly *arg2, Vec3s *arg3, s16 arg4); /* static */
s32 func_800C3C94(CollisionContext *arg0, ? *arg1); /* static */
void func_800C3F40(CollisionContext *arg0, CollisionPoly **arg1, Vec3f *arg2); /* static */
void func_800C3FA0(CollisionContext *arg0, CollisionPoly **arg1, Vec3f *arg2); /* static */
void func_800C4058(s32 arg0, CollisionContext *arg1, CollisionPoly **arg2, Vec3f *arg3); /* static */
void func_800C40B4(CollisionContext *arg0, CollisionPoly **arg1, s32 *arg2, Vec3f *arg3); /* static */
void func_800C4188(s32 arg0, CollisionContext *arg1, CollisionPoly **arg2, s32 *arg3, Actor *arg4, Vec3f *arg5); /* static */
void func_800C41E4(s32 arg0, CollisionContext *arg1, CollisionPoly **arg2, s32 *arg3, Actor *arg4, Vec3f *arg5); /* static */
void func_800C4240(CollisionContext *arg0, CollisionPoly **arg1, s32 *arg2, Actor *arg3, Vec3f *arg4, f32 arg5); /* static */
void func_800C42A8(CollisionContext *arg0, CollisionPoly **arg1, s32 *arg2, Actor *arg3, Vec3f *arg4); /* static */
f32 func_800C4314(CollisionContext *arg0, void *arg1, Vec3f *arg2); /* static */
f32 func_800C43CC(CollisionContext *arg0, void *arg1, s32 *arg2, Vec3f *arg3); /* static */
void func_800C4488(CollisionContext *arg0, CollisionPoly **arg1, s32 *arg2, Vec3f *arg3); /* static */
void func_800C44F0(CollisionContext *arg0, CollisionPoly **arg1, s32 *arg2, Actor *arg3, Vec3f *arg4); /* static */
void func_800C455C(CollisionContext *arg0, CollisionPoly **arg1, s32 *arg2, Vec3f *arg3); /* static */
void func_800C4C74(CollisionContext *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, f32 arg4, s32 *arg5, f32 arg6); /* static */
void func_800C4CD8(CollisionContext *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, f32 arg4, s32 *arg5, s32 *arg6, f32 arg7); /* static */
void func_800C4D3C(CollisionContext *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, f32 arg4, s32 *arg5, s32 *arg6, DynaPolyActor *arg7, f32 arg8); /* static */
void func_800C4DA4(CollisionContext *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, f32 arg4, s32 *arg5, s32 *arg6, DynaPolyActor *arg7, f32 arg8); /* static */
s32 func_800C4E10(CollisionContext *arg0, u16 arg1, f32 *arg2, ? *arg3, f32 arg4, CollisionPoly **arg5, s32 *arg6, void *arg7); /* static */
void func_800C4F38(f32 *arg1, ? *arg2, CollisionContext *arg3); /* static */
void func_800C4F84(f32 *arg1, ? *arg2, CollisionContext *arg3, CollisionPoly **arg4, s32 *arg5, void *arg6); /* static */
s32 func_800C4FD4(f32 arg0, f32 arg1, CollisionContext *arg2, u16 arg3, Vec3f *arg4, Vec3f *arg5, Vec3f *arg6, f32 *arg7, void **arg8, s32 *arg9, DynaPolyActor *argA, f32, s32); /* static */
s32 func_800C5464(u32 arg0, u32 arg1, u32 arg2, u32 arg3, s32 arg4); /* static */
void func_800C54AC(s32 arg0, s32 arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4, u32 arg5, u32 arg6, u32 arg7, u32 arg8, f32 *arg9); /* static */
void func_800C5538(s32 arg0, s32 arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4, u32 arg5, u32 arg6, u32 arg7, u32 arg8, f32 *arg9); /* static */
void func_800C5650(s32 arg0, s32 arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4, u32 arg5, u32 arg6, u32 arg7, u32 arg8, f32 *arg9, void **argA); /* static */
void func_800C56E0(s32 arg0, s32 arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4, u32 arg5, u32 arg6, u32 arg7, u32 arg8, f32 *arg9, void **argA, s32 *argB); /* static */
void func_800C57F8(s32 arg4, Vec3f *arg5);          /* static */
void func_800C583C(s32 arg0, s32 arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4, u32 arg5, u32 arg6, u32 arg7, u32 arg8); /* static */
void func_800C58C8(s32 arg0, s32 arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4, u32 arg5, u32 arg6, u32 arg7, u32 arg8, f32 *arg9); /* static */
s32 func_800C5954(Vec3f *arg0, u16 arg1, f32 arg2, s32 *arg3, StaticLookup *arg4, Vec3f *arg5, CollisionPoly **arg6, u16 arg7); /* static */
void func_800C5A64(StaticLookup *arg1, Vec3f *arg2); /* static */
void func_800C6554(s32 arg0, u8 *arg1);             /* static */
f32 func_800C76EC(s32 *arg0, s32 arg1, CollisionContext *); /* static */
f32 func_800C7974(s32 *arg0);                       /* static */
s32 func_800C7E40(f32 *arg0, u16 arg1, void *arg2, u16 *arg3, f32 *arg4, f32 *arg5, s32 *arg6, s32 *arg7, f32 *arg8, f32 arg9, s32 argA, DynaPolyActor *argB); /* static */
s32 func_800C8580(CollisionContext *arg0, u16 arg1, Vec3f *arg2, f32 *arg3, ? *arg4, f32 arg5, s32 *arg6, s32 *arg7, DynaPolyActor *arg8); /* static */
s32 func_800C87D0(CollisionContext *arg0, s32 arg1, void *arg2, u16 *arg3, f32 *arg4, ? *arg5, f32 arg6, CollisionPoly **arg7, void *arg8, s32); /* static */
s32 func_800C8A60(CollisionContext *arg0, u16 arg1, f32 *arg2, ? *arg3, f32 arg4, CollisionPoly **arg5, s32 *arg6, void *arg7); /* static */
s32 func_800C8BD0(CollisionContext **arg0, s16);    /* static */
s32 func_800C8DC0(CollisionContext *arg0, s32 arg1, ? *arg2, ? *arg3, Vec3f *arg4, Vec3f *arg5, f32 *arg6, s32 arg7, s32 *arg8, s32 arg9, void **argA); /* static */
s32 func_800C8EEC(CollisionContext *arg0, u16 arg1, ? *arg2, ? *arg3, Vec3f *arg4, Vec3f *arg5, f32 *arg6, f32 *arg7, void **arg8, s32 *arg9, s32 argA); /* static */
s32 func_800C90AC(Vec3f *arg0, s32 arg1, CollisionPoly **arg2, Vec3f *arg3, f32 arg4, u16 *arg5, u16 *arg6, s32); /* static */
s32 func_800C921C(Vec3f *arg0, u16 arg1, s32 arg2, CollisionPoly **arg3, Vec3f *arg4, s32 arg5, u16 arg6, u16 *arg7); /* static */
s32 func_800C9380(Vec3f *arg0, u16 arg1, f32 arg2, s32 *arg3, StaticLookup *arg4, Vec3f *arg5, CollisionPoly **arg6, s32 arg7); /* static */
? func_800C9640(void *, u16);                       /* static */
u16 func_800C9728(CollisionContext *arg0, u32 arg1, s32 arg2); /* static */
u16 func_800C9770(CollisionContext *arg0, CollisionPoly *arg1, s32 arg2); /* static */
u16 func_800C97F8(CollisionContext *arg0, u32 arg1, s32 arg2); /* static */
u16 func_800C9844(CollisionContext *arg0, CollisionPoly *arg1, s32 arg2); /* static */
void *func_800C98CC(CollisionContext *arg0, u32 arg1, s32 arg2); /* static */
void *func_800C9924(CollisionContext *arg0, CollisionPoly *arg1, s32 arg2); /* static */
s32 func_800C9C24(CollisionContext *arg0, CollisionPoly *arg1, s32 arg2, s32 arg3); /* static */
s32 func_800C9D14(CollisionContext *arg0, void *arg1, s32 arg2); /* static */
s32 func_800C9D50(CollisionContext *arg0, void *arg1, s32 arg2); /* static */
s32 func_800C9DDC(CollisionContext *arg0, void *arg1, s32 arg2); /* static */
s32 func_800C9EBC(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 *arg4, WaterBox **arg5, s32 *arg6); /* static */
s32 func_800CA22C(void *arg0, void *arg1, void *arg2, f32 arg3, void **arg4, s32 *arg5); /* static */
f32 func_800CA568(CollisionContext *arg0, s32 arg1, s32 arg2); /* static */
s32 func_800CA634(CollisionContext *arg0, void *arg1); /* static */
u16 func_800CA648(CollisionContext *arg0, void *arg1, s32 arg2); /* static */
void func_800CA6B8();                               /* static */
s32 func_800CA6D8(s32 arg0, void *arg1);            /* static */
? func_800CA6F0(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 *arg4, void **arg5, s32 *arg6); /* static */
void func_800CA9D0(void *arg2, void *arg3, f32 *arg4, void **arg5); /* static */
void func_800CAA14(CollisionPoly *arg0, CollisionPoly *arg1, s32 arg2, s32 arg3, s32 arg4); /* static */
static ? D_801B46D2;                                /* unable to generate initializer */
static ? D_801B4708;                                /* unable to generate initializer */
static ? D_801EDB54;
static ? D_801EDB60;
static Vec3f D_801EDB70;
static f32 D_801EDBA4;
static f32 D_801EDBD4;
static f32 D_801EDBD8;
static f32 D_801EDBDC;
static f32 D_801EDBE0;
u32 D_801B4620[32] = {
    0,
    1,
    3,
    5,
    8,
    0x10,
    0x20,
    0x40,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};
u16 D_801B46A0[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 0xB, 0xA, 0, 0xF, 9, 0xE, 0};
u8 D_801B46C0[16] = {1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0};
s8 D_801ED950[80];
s8 D_801ED9A0[80];
Vec3f D_801ED9F0;
Vec3f D_801ED9FC;
Vec3f D_801EDA08;
Vec3f D_801EDA18;
Vec3f D_801EDA24;
Vec3f D_801EDA30;
MtxF D_801EDA40;
Vec3f D_801EDA80;
Vec3f D_801EDA8C;
Vec3f D_801EDA98;
s8 D_801EDAA8[80];
s8 D_801EDAF8[80];
Vec3f D_801EDB48;
Vec3f D_801EDB7C;
Vec3f D_801EDB88;
f32 D_801EDB98;
f32 D_801EDB9C;
f32 D_801EDBA0;
Sphere16 D_801EDBA8;
TriNorm D_801EDBB0;
BgSpecialSceneMaxMemory bgSpecialSceneMaxMemory[1] = {{0x2D, 0xC800}};
BgSpecialSceneMaxObjects bgSpecialSceneMaxObjects[1] = {{0x46, 0x3E8, 0x258, 0x200}};
BgSpecialSceneMeshSubdivision bgSpecialSceneMeshSubdivisions[3] = {
    {0x2D, 0x24, 1, 0x24, 0xFFFFFFFF},
    {0x37, 0x28, 1, 0x28, 0xFFFFFFFF},
    {0x38, 0x28, 1, 0x28, 0xFFFFFFFF},
};
s16 bgSpecialSceneParamsDefault[1] = {0x35};

void BgCheck_PolygonLinkedListNodeInit(SSNode *node, s16 *polyIndex, u16 next) {
    node->next = next & 0xFFFF;
    node->polyId = *polyIndex;
}

void BgCheck_PolygonLinkedListResetHead(u16 *head) {
    *head = 0xFFFF;
}

void BgCheck_ScenePolygonListsNodeInsert(SSNodeList *list, u16 *head, s16 *polyIndex) {
    u16 sp1E;
    u16 temp_v0;

    temp_v0 = BgCheck_ScenePolygonListsReserveNode(list);
    sp1E = temp_v0;
    BgCheck_PolygonLinkedListNodeInit(&list->tbl[temp_v0], polyIndex, *head);
    *head = sp1E;
}

void BgCheck_PolygonLinkedListNodeInsert(DynaSSNodeList *list, u16 *head, s16 *polyIndex) {
    u16 sp1E;
    u16 temp_v0;

    temp_v0 = BgCheck_AllocPolygonLinkedListNode(list);
    sp1E = temp_v0;
    BgCheck_PolygonLinkedListNodeInit(&list->tbl[temp_v0], polyIndex, *head);
    *head = sp1E;
}

void BgCheck_PolygonLinkedListInit(GlobalContext *globalCtx, DynaSSNodeList *list) {
    list->tbl = NULL;
    list->count = 0;
}

void BgCheck_PolygonLinkedListAlloc(GlobalContext *globalCtx, DynaSSNodeList *list, u32 numNodes) {
    list = list;
    list->tbl = THA_AllocEndAlign(&globalCtx->state.heap, numNodes * 4, -2U);
    list->count = 0;
    list->max = (s32) numNodes;
}

void BgCheck_PolygonLinkedListReset(DynaSSNodeList *list) {
    list->count = 0;
}

u16 BgCheck_AllocPolygonLinkedListNode(DynaSSNodeList *list) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = list->count;
    temp_v1 = temp_v0 & 0xFFFF;
    list->count = temp_v0 + 1;
    if (temp_v1 >= list->max) {
        return 0xFFFFU;
    }
    return (u16) temp_v1;
}

void BgCheck_CreateVec3fFromVertex(Vec3s *vertex, Vec3f *vector) {
    vector->x = (f32) vertex->x;
    vector->y = (f32) vertex->y;
    vector->z = (f32) vertex->z;
}

void BgCheck_CreateVertexFromVec3f(Vec3s *vertex, Vec3f *vector) {
    vertex->x = (s16) (s32) vector->x;
    vertex->y = (s16) (s32) vector->y;
    vertex->z = (s16) (s32) vector->z;
}

f32 func_800BFD84(CollisionPoly *polygon, f32 param_2, f32 param_3) {
    return (((((f32) polygon->normal.x * param_2) + ((f32) polygon->normal.z * param_3)) * 0.00003051851f) + (f32) polygon->dist) / ((f32) -(s32) polygon->normal.y * 0.00003051851f);
}

s32 func_800BFDEC(CollisionPoly *param_1, CollisionPoly *param_2, u32 *param_3, u32 *param_4) {
    s32 sp2C;
    ? sp20;
    s32 temp_a0;
    s32 temp_t0;
    s32 temp_v0;
    u32 *temp_v1;
    u32 temp_t1;
    u32 temp_v0_2;
    u32 temp_v0_3;
    void *temp_t1_2;
    CollisionPoly *phi_t0;
    s32 *phi_v1;
    CollisionPoly *phi_t2;
    ? *phi_t1;
    s32 phi_v0;
    s32 *phi_t1_2;
    s32 phi_a1;
    s32 phi_t0_2;
    void *phi_t1_3;
    s32 phi_a1_2;
    u32 phi_v0_2;
    s32 phi_a1_3;
    u32 phi_v0_3;
    s32 phi_a1_4;
    u32 phi_v0_4;
    s32 phi_a1_5;
    s32 phi_a1_6;
    s32 phi_a1_7;
    s32 phi_a1_8;
    s32 phi_t0_3;
    s32 phi_a1_9;

    *param_4 = 0;
    *param_3 = 0;
    phi_t0 = param_1;
    phi_v1 = &sp2C;
    phi_t2 = param_2;
    phi_t1 = &sp20;
    do {
        temp_t1 = phi_t1 + 4;
        *phi_v1 = phi_t0->vtxData[0] & 0x1FFF;
        temp_t1->unk-4 = (s32) (phi_t2->vtxData[0] & 0x1FFF);
        phi_t0 += 2;
        phi_v1 += 4;
        phi_t2 += 2;
        phi_t1 = (? *) temp_t1;
    } while (temp_t1 < (u32) &sp2C);
    phi_v0 = 0;
    phi_a1_7 = 0;
    do {
        temp_a0 = phi_v0 + 1;
        phi_a1 = phi_a1_7;
        phi_t0_2 = temp_a0;
        phi_a1_6 = phi_a1_7;
        phi_t0_3 = temp_a0;
        phi_a1_2 = phi_a1_7;
        if (temp_a0 < 3) {
            temp_v0 = (3 - temp_a0) & 3;
            temp_v1 = (phi_v0 * 4) + &sp2C;
            if (temp_v0 != 0) {
                phi_t1_2 = (temp_a0 * 4) + &sp20;
                do {
                    temp_v0_2 = *temp_v1;
                    temp_t0 = phi_t0_2 + 1;
                    phi_t0_2 = temp_t0;
                    phi_a1_8 = phi_a1;
                    phi_t0_3 = temp_t0;
                    if (temp_v0_2 == *phi_t1_2) {
                        if (phi_a1 == 0) {
                            *param_3 = temp_v0_2;
                        } else if (phi_a1 == 1) {
                            *param_4 = temp_v0_2;
                        }
                        phi_a1_8 = phi_a1 + 1;
                    }
                    phi_t1_2 += 4;
                    phi_a1 = phi_a1_8;
                    phi_a1_6 = phi_a1_8;
                    phi_a1_2 = phi_a1_8;
                } while ((temp_v0 + temp_a0) != temp_t0);
                if (temp_t0 != 3) {
                    goto block_14;
                }
            } else {
block_14:
                phi_t1_3 = (phi_t0_3 * 4) + &sp20;
                do {
                    temp_v0_3 = *temp_v1;
                    phi_v0_2 = temp_v0_3;
                    phi_a1_3 = phi_a1_2;
                    if (temp_v0_3 == phi_t1_3->unk0) {
                        if (phi_a1_2 == 0) {
                            *param_3 = temp_v0_3;
                            goto block_20;
                        }
                        if (phi_a1_2 == 1) {
                            *param_4 = temp_v0_3;
block_20:
                        }
                        phi_v0_2 = *temp_v1;
                        phi_a1_3 = phi_a1_2 + 1;
                    }
                    phi_v0_3 = phi_v0_2;
                    phi_a1_4 = phi_a1_3;
                    phi_v0_3 = phi_v0_2;
                    if (phi_v0_2 == phi_t1_3->unk4) {
                        if (phi_a1_3 == 0) {
                            *param_3 = phi_v0_2;
                            goto block_27;
                        }
                        if (phi_a1_3 == 1) {
                            *param_4 = phi_v0_2;
block_27:
                            phi_v0_3 = *temp_v1;
                        }
                        phi_a1_4 = phi_a1_3 + 1;
                    }
                    phi_v0_4 = phi_v0_3;
                    phi_a1_5 = phi_a1_4;
                    phi_v0_4 = phi_v0_3;
                    if (phi_v0_3 == phi_t1_3->unk8) {
                        if (phi_a1_4 == 0) {
                            *param_3 = phi_v0_3;
                            goto block_34;
                        }
                        if (phi_a1_4 == 1) {
                            *param_4 = phi_v0_3;
block_34:
                            phi_v0_4 = *temp_v1;
                        }
                        phi_a1_5 = phi_a1_4 + 1;
                    }
                    temp_t1_2 = phi_t1_3 + 0x10;
                    phi_t1_3 = temp_t1_2;
                    phi_a1_9 = phi_a1_5;
                    if (phi_v0_4 == phi_t1_3->unkC) {
                        if (phi_a1_5 == 0) {
                            *param_3 = phi_v0_4;
                        } else if (phi_a1_5 == 1) {
                            *param_4 = phi_v0_4;
                        }
                        phi_a1_9 = phi_a1_5 + 1;
                    }
                    phi_a1_2 = phi_a1_9;
                    phi_a1_6 = phi_a1_9;
                } while (temp_t1_2 != &sp2C);
            }
        }
        phi_v0 = temp_a0;
        phi_a1_7 = phi_a1_6;
    } while (temp_a0 != 2);
    return phi_a1_6;
}

s32 BgCheck_PolygonGetMinY(CollisionPoly *polygons, Vec3s *vertices) {
    s16 temp_a3;
    s16 temp_t0;
    s16 temp_v1;
    s32 phi_a3;

    temp_a3 = vertices[polygons->vtxData[0] & 0x1FFF].y;
    temp_t0 = vertices[polygons->vtxData[1] & 0x1FFF].y;
    phi_a3 = (s32) temp_a3;
    if ((s32) temp_t0 < (s32) temp_a3) {
        phi_a3 = (s32) temp_t0;
    }
    temp_v1 = vertices[polygons->vtxData[2]].y;
    if (phi_a3 < (s32) temp_v1) {
        return phi_a3;
    }
    return (s32) temp_v1;
}

void BgCheck_PolygonGetNormal(CollisionPoly *polygon, f32 *normalX, f32 *normalY, f32 *normalZ) {
    *normalX = (f32) polygon->normal.x * 0.00003051851f;
    *normalY = (f32) polygon->normal.y * 0.00003051851f;
    *normalZ = (f32) polygon->normal.z * 0.00003051851f;
}

void func_800C0094(CollisionPoly *param_1, f32 xOffset, f32 yOffset, f32 zOffset, MtxF *matrix) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f14;
    f32 phi_f2;
    f32 phi_f12;

    if (param_1 != 0) {
        BgCheck_PolygonGetNormal(param_1, &sp34, &sp30, &sp2C);
        temp_f14 = sqrtf((sp30 * sp30) + (sp2C * sp2C));
        if (!(fabsf(temp_f14) < 0.008f)) {
            temp_f0 = 1.0f / temp_f14;
            phi_f2 = sp30 * temp_f0;
            phi_f12 = sp2C * temp_f0;
        } else {
            phi_f2 = 1.0f;
            phi_f12 = 0.0f;
        }
        matrix->mf[0][0] = temp_f14;
        matrix->mf[0][1] = -sp34 * phi_f2;
        matrix->mf[0][2] = -sp34 * phi_f12;
        matrix->mf[1][0] = sp34;
        matrix->mf[1][1] = sp30;
        matrix->mf[2][0] = 0.0f;
        matrix->mf[2][1] = -phi_f12;
        matrix->mf[2][2] = phi_f2;
        matrix->mf[1][2] = sp2C;
        matrix->mf[3][0] = xOffset;
        matrix->mf[3][1] = yOffset;
        matrix->mf[0][3] = 0.0f;
        matrix->mf[1][3] = 0.0f;
        matrix->mf[2][3] = 0.0f;
        matrix->mf[3][3] = 1.0f;
        matrix->mf[3][2] = zOffset;
    }
}

f32 func_800C01B8(CollisionPoly *param_1, Vec3f *param_2) {
    return ((((f32) param_1->normal.x * param_2->x) + ((f32) param_1->normal.y * param_2->y) + ((f32) param_1->normal.z * param_2->z)) * 0.00003051851f) + (f32) param_1->dist;
}

void BgCheck_CreateTriNormFromPolygon(Vec3s *arg0, TriNorm *arg1, Vec3f *arg2) {
    BgCheck_CreateVec3fFromVertex(((arg0->y & 0x1FFF) * 6) + arg1, arg2);
    BgCheck_CreateVec3fFromVertex(((arg0->z & 0x1FFF) * 6) + arg1, arg2 + 0xC);
    BgCheck_CreateVec3fFromVertex((arg0->unk6 * 6) + arg1, arg2 + 0x18);
}

void func_800C02C0(CollisionPoly *poly, s32 index, CollisionContext *colCtx, TriNorm *tri) {
    Vec3s *phi_a1;

    if ((poly == 0) || (index >= 0x33) || (tri == 0)) {
        if (tri != 0) {
            tri->vtx[2].z = 0.0f;
            tri->vtx[1].z = 0.0f;
            tri->vtx[1].y = 0.0f;
            tri->vtx[1].x = 0.0f;
            tri->vtx[0].z = 0.0f;
            tri->vtx[0].y = 0.0f;
            tri->vtx[0].x = 0.0f;
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    if (index == 0x32) {
        phi_a1 = colCtx->colHeader->vtxList;
    } else {
        phi_a1 = colCtx->dyna.vtxList;
    }
    BgCheck_CreateTriNormFromPolygon(phi_a1, tri);
}

void func_800C0340(CollisionPoly *arg0, s32 arg1, CollisionPoly *arg2, s32 arg3, f32 *arg4, f32 arg5) {
    f32 temp_f12;

    Math_Vec3s_ToVec3f(&D_801ED9F0, ((arg0->vtxData[0] & 0x1FFF) * 6) + arg1);
    Math_Vec3s_ToVec3f(&D_801ED9FC, ((arg0->vtxData[1] & 0x1FFF) * 6) + arg1);
    Math_Vec3s_ToVec3f(&D_801EDA08, (arg0->vtxData[2] * 6) + arg1);
    temp_f12 = (f32) arg0->normal.z * 0.00003051851f;
    func_8017BE30(temp_f12, 0.00003051851f, &D_801ED9F0, &D_801ED9FC, &D_801EDA08, (f32) arg0->normal.x * 0.00003051851f, (f32) arg0->normal.y * 0.00003051851f, temp_f12, (f32) arg0->dist, arg3, arg2, arg4, arg5);
}

s32 func_800C0474(CollisionPoly *arg0, s32 arg1, ?32 arg2, ?32 arg3, f32 *arg4, CollisionContext *arg5) {
    f32 temp_f12;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = ((arg0->vtxData[0] & 0x1FFF) * 6) + arg1;
    D_801EDA18.x = (f32) temp_v0->unk0;
    D_801EDA18.y = (f32) temp_v0->unk2;
    D_801EDA18.z = (f32) temp_v0->unk4;
    temp_v0_2 = ((arg0->vtxData[1] & 0x1FFF) * 6) + arg1;
    D_801EDA18.unkC = (f32) temp_v0_2->unk0;
    D_801EDA18.unk10 = (f32) temp_v0_2->unk2;
    D_801EDA18.unk14 = (f32) temp_v0_2->unk4;
    temp_v0_3 = (arg0->vtxData[2] * 6) + arg1;
    D_801EDA18.unk18 = (f32) temp_v0_3->unk0;
    D_801EDA18.unk1C = (f32) temp_v0_3->unk2;
    D_801EDA18.unk20 = (f32) temp_v0_3->unk4;
    if (func_8017A304(&D_801EDA18, &D_801EDA24, &D_801EDA30, arg3, arg2, arg5) == 0) {
        return 0;
    }
    temp_f12 = (f32) arg0->normal.z * 0.00003051851f;
    return func_8017C494(temp_f12, 0.00003051851f, &D_801EDA18, &D_801EDA24, &D_801EDA30, (f32) arg0->normal.x * 0.00003051851f, (f32) arg0->normal.y * 0.00003051851f, temp_f12, (f32) arg0->dist, arg3, arg2, arg4, arg5);
}

void func_800C0668(CollisionPoly *arg2, s32 arg3, f32 *arg4) {
    func_800C0340(arg2, arg3, arg2, arg3, arg4, 1.0f);
}

void func_800C06A8(Vec3s *arg0, f32 arg2, CollisionPoly *arg3, s32 arg4) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;

    BgCheck_CreateTriNormFromPolygon(arg0, (TriNorm *) &D_801EDA80);
    BgCheck_PolygonGetNormal((CollisionPoly *) arg0, &sp3C, &sp38, &sp34);
    func_8017C850(&D_801EDA80, &D_801EDA8C, &D_801EDA98, sp3C, sp38, sp34, (f32) arg0->unkE, arg2, arg3, arg4);
}

void func_800C074C(Vec3s *arg0, f32 arg2, CollisionPoly *arg3, s32 arg4) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;

    BgCheck_CreateTriNormFromPolygon(arg0, (TriNorm *) &D_801EDB48);
    BgCheck_PolygonGetNormal((CollisionPoly *) arg0, &sp3C, &sp38, &sp34);
    func_8017CEF0(&D_801EDB48, &D_801EDB54, &D_801EDB60, sp3C, sp38, sp34, (f32) arg0->unkE, arg2, arg3, arg4);
}

s32 func_800C07F0(CollisionPoly **arg0) {
    f32 sp4C;
    CollisionPoly *sp38;
    f32 sp34;
    CollisionPoly *temp_t8;
    Vec3f *temp_v0;
    Vec3f *temp_v0_2;
    Vec3f *temp_v0_3;
    Vec3f *temp_v0_4;
    Vec3f *temp_v1;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f6;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 phi_f14;

    D_801EDBA4 = (f32) arg0->unk0->dist;
    temp_t8 = arg0->unk0;
    temp_f8 = D_801EDBA4;
    sp38 = temp_t8;
    temp_v0 = arg0->unk8;
    temp_v1 = arg0->unkC;
    temp_f12 = (f32) temp_t8->normal.x;
    temp_f14 = (f32) temp_t8->normal.y;
    temp_f16 = (f32) temp_t8->normal.z;
    temp_f18 = temp_f8 + (((temp_f12 * temp_v0->x) + (temp_f14 * temp_v0->y) + (temp_f16 * temp_v0->z)) * 0.00003051851f);
    temp_f12_2 = temp_f8 + (((temp_f12 * temp_v1->x) + (temp_f14 * temp_v1->y) + (temp_f16 * temp_v1->z)) * 0.00003051851f);
    phi_f14 = 0.0f;
    if (((temp_f18 >= 0.0f) && (temp_f12_2 >= 0.0f)) || ((temp_f18 < 0.0f) && (temp_f12_2 < 0.0f)) || ((arg0->unk14 != 0) && (temp_f18 < 0.0f) && (temp_f12_2 > 0.0f)) || (temp_f2 = temp_f18 - temp_f12_2, (fabsf(temp_f2) < 0.008f))) {
        goto block_16;
    }
    sp34 = temp_f2;
    sp4C = temp_f18;
    BgCheck_PolygonGetNormal(sp38, &D_801EDB98, &D_801EDB9C, &D_801EDBA0);
    BgCheck_CreateTriNormFromPolygon((Vec3s *) arg0->unk0, arg0->unk4, &D_801EDB70);
    Math3D_Lerp(arg0->unk8, arg0->unkC, temp_f18 / temp_f2, arg0->unk10);
    temp_f6 = D_801EDB98;
    if (((fabsf(temp_f6) > 0.5f) && (temp_v0_2 = arg0->unk10, (func_8017C540(&D_801EDB70, &D_801EDB7C, &D_801EDB88, temp_v0_2->y, temp_v0_2->z, 0.0f, arg0->unk18, temp_f6) != 0))) || ((temp_f8_2 = D_801EDB9C, phi_f14 = 0.0f, (fabsf(temp_f8_2) > 0.5f)) && (temp_v0_3 = arg0->unk10, (func_8017BAD0(&D_801EDB70, &D_801EDB7C, &D_801EDB88, temp_v0_3->z, temp_v0_3->x, 0.0f, arg0->unk18, temp_f8_2) != 0))) || ((temp_f10 = D_801EDBA0, (fabsf(temp_f10) > 0.5f)) && (temp_v0_4 = arg0->unk10, (func_8017CB7C(&D_801EDB70, &D_801EDB7C, &D_801EDB88, temp_v0_4->x, temp_v0_4->y, phi_f14, arg0->unk18, temp_f10) != 0)))) {
        return 1;
    }
block_16:
    return 0;
}

void BgCheck_PolygonCollidesWithSphere(CollisionPoly *polygon, Vec3s *verticies, Vec3f *pos, f32 readius) {
    ? sp1C;
    s16 *temp_at;

    BgCheck_CreateTriNormFromPolygon((Vec3s *) polygon, &D_801EDBB0);
    BgCheck_PolygonGetNormal(polygon, &D_801EDBD4, &D_801EDBD8, &D_801EDBDC);
    D_801EDBE0 = (f32) polygon->dist;
    temp_at = &D_801EDBA8.center.z;
    *temp_at = (s16) (s32) pos->x;
    *temp_at = (s16) (s32) pos->y;
    *temp_at = (s16) (s32) readius;
    *temp_at = (s16) (s32) pos->z;
    Math3D_ColSphereTri(&D_801EDBA8, &D_801EDBB0, (Vec3f *) &sp1C);
}

void BgCheck_ScenePolygonListsInsertSorted(CollisionContext *colCtx, u16 *head, CollisionPoly *polygons, Vec3s *vertices, s16 index) {
    SSNode *sp24;
    CollisionPoly *temp_a1;
    CollisionPoly *temp_a1_2;
    SSNode *temp_a0;
    SSNode *temp_t1;
    SSNode *temp_t2;
    s32 temp_v0;
    u16 temp_s0;
    u16 temp_s0_2;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v1;
    SSNode *phi_t1;

    if (*head == 0xFFFF) {
        BgCheck_ScenePolygonListsNodeInsert(&colCtx->polyNodes, head, &index);
        return;
    }
    temp_v0 = BgCheck_PolygonGetMinY(&polygons[index], vertices);
    temp_t2 = colCtx->polyNodes.tbl;
    temp_t1 = &temp_t2[*head];
    temp_a1 = &polygons[temp_t1->polyId];
    phi_t1 = temp_t1;
    if ((temp_v0 < (s32) vertices[temp_a1->vtxData[0] & 0x1FFF].y) && (temp_v0 < (s32) vertices[temp_a1->vtxData[1] & 0x1FFF].y) && (temp_v0 < (s32) vertices[temp_a1->vtxData[2]].y)) {
        BgCheck_ScenePolygonListsNodeInsert(&colCtx->polyNodes, head, &index);
        return;
    }
loop_7:
    temp_v1 = phi_t1->next;
    if (temp_v1 == 0xFFFF) {
        sp24 = phi_t1;
        temp_v0_2 = BgCheck_ScenePolygonListsReserveNode(&colCtx->polyNodes);
        temp_s0 = temp_v0_2 & 0xFFFF;
        BgCheck_PolygonLinkedListNodeInit(&colCtx->polyNodes.tbl[temp_v0_2], &index, 0xFFFFU);
        phi_t1->next = temp_s0;
        return;
    }
    temp_a0 = &temp_t2[temp_v1];
    temp_a1_2 = &polygons[temp_a0->polyId];
    if ((temp_v0 < (s32) vertices[temp_a1_2->vtxData[0] & 0x1FFF].y) && (temp_v0 < (s32) vertices[temp_a1_2->vtxData[1] & 0x1FFF].y) && (temp_v0 < (s32) vertices[temp_a1_2->vtxData[2]].y)) {
        sp24 = phi_t1;
        temp_v0_3 = BgCheck_ScenePolygonListsReserveNode(&colCtx->polyNodes);
        temp_s0_2 = temp_v0_3 & 0xFFFF;
        BgCheck_PolygonLinkedListNodeInit(&colCtx->polyNodes.tbl[temp_v0_3], &index, phi_t1->next);
        phi_t1->next = temp_s0_2;
        return;
    }
    phi_t1 = temp_a0;
    goto loop_7;
}

void BgCheck_ScenePolygonListsInsert(StaticLookup *subdivision, CollisionContext *colCtx, CollisionPoly *polygons, Vec3s *vertices, s16 index) {
    s16 temp_v0;

    temp_v0 = polygons[index].normal.y;
    if ((s32) temp_v0 >= 0x4000) {
        BgCheck_ScenePolygonListsInsertSorted(colCtx, (u16 *) subdivision, polygons, vertices, (s16) (s32) index);
        return;
    }
    if ((s32) temp_v0 < -0x6665) {
        BgCheck_ScenePolygonListsInsertSorted(colCtx, (u16 *) &subdivision->ceiling, polygons, vertices, (s16) (s32) index);
        return;
    }
    BgCheck_ScenePolygonListsInsertSorted(colCtx, (u16 *) &subdivision->wall, polygons, vertices, (s16) (s32) index);
}

f32 func_800C0E74(CollisionContext *arg0, u16 arg1, u16 *arg2, CollisionPoly **arg3, CollisionPoly **arg4, f32 arg5, CollisionContext *arg6, s32 arg7, void *arg8, s32 arg9) {
    f32 sp80;
    CollisionPoly *temp_s0;
    f32 temp_f0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    u16 temp_a0;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    void *temp_a2;
    void *temp_a2_2;
    s32 phi_a3;
    void *phi_s1;
    void *phi_a2;
    f32 phi_f20;
    f32 phi_f20_2;
    s32 phi_a1;
    f32 phi_f20_3;

    temp_v0 = *arg2;
    phi_f20 = arg5;
    if (temp_v0 == 0xFFFF) {
        return arg5;
    }
    temp_a1 = arg0->polyNodes.tbl;
    temp_a2 = arg0->colHeader;
    phi_a3 = temp_a2->polyList;
    phi_s1 = temp_a1 + (temp_v0 * 4);
    phi_a2 = temp_a2;
    phi_a1 = temp_a1;
loop_3:
    temp_s0 = phi_a3 + (phi_s1->unk0 * 0x10);
    phi_f20_2 = phi_f20;
    phi_f20_3 = phi_f20;
    if ((((arg7 & 1) != 0) && ((s32) temp_s0->normal.y < 0)) || (((arg9 & 0x20) != 0) && ((((u32) *(phi_a2->surfaceTypeList + (temp_s0->type * 8)) >> 0x1E) & 1) != 0)) || (temp_v0_2 = temp_s0->vtxData[0], ((temp_v0_2 & ((arg1 & 7) << 0xD)) != 0)) || ((temp_a0 = temp_s0->vtxData[1], ((temp_a0 & 0x8000) != 0)) && (((arg8 != 0) && (arg8->unk2 != 2)) || ((arg8 == 0) && (arg1 != 1))))) {
        temp_v0_4 = phi_s1->unk2;
        if (temp_v0_4 != 0xFFFF) {
            phi_s1 = phi_a1 + (temp_v0_4 * 4);
            goto loop_3;
        }
    } else {
        temp_a1_2 = phi_a2->vtxList;
        temp_f0 = arg4->unk4;
        if (!(temp_f0 < (f32) (temp_a1_2 + ((temp_v0_2 & 0x1FFF) * 6))->unk2) || !(temp_f0 < (f32) (temp_a1_2 + ((temp_a0 & 0x1FFF) * 6))->unk2) || !(temp_f0 < (f32) (temp_a1_2 + (temp_s0->vtxData[2] * 6))->unk2)) {
            if ((func_800C0474(temp_s0, temp_a1_2, arg4->unk0, arg4->unk8, &sp80, arg6) != 0) && (sp80 < arg4->unk4) && (phi_f20 < sp80)) {
                *arg3 = temp_s0;
                phi_f20_3 = sp80;
            }
            temp_v0_3 = phi_s1->unk2;
            phi_f20 = phi_f20_3;
            phi_f20_2 = phi_f20_3;
            if (temp_v0_3 != 0xFFFF) {
                temp_a2_2 = arg0->colHeader;
                temp_a1_3 = arg0->polyNodes.tbl;
                phi_a3 = temp_a2_2->polyList;
                phi_s1 = temp_a1_3 + (temp_v0_3 * 4);
                phi_a2 = temp_a2_2;
                phi_a1 = temp_a1_3;
                goto loop_3;
            }
        }
    }
    return phi_f20_2;
}

f32 func_800C10FC(CollisionPoly **arg0, CollisionContext *arg1, u16 arg2, CollisionPoly **arg3, f32 arg4, s32 arg5, s32 arg6, CollisionContext *arg7, s32 arg8) {
    f32 phi_f2;
    s32 phi_v0;
    f32 phi_f2_2;
    s32 phi_v0_2;
    f32 phi_f2_3;

    phi_f2 = (bitwise f32) arg7;
    if ((arg5 & 4) != 0) {
        phi_f2 = func_800C0E74(arg7, (u16) arg1, (u16 *) arg2, arg0, arg3, arg4, arg7, arg6, NULL, arg8, arg5);
    }
    phi_f2_2 = phi_f2;
    if (((arg5 & 2) != 0) || ((arg5 & 8) != 0)) {
        phi_v0 = 0;
        if ((arg5 & 0x10) != 0) {
            phi_v0 = 1;
        }
        phi_f2_2 = func_800C0E74(arg1, arg2, arg0 + 2, arg3, (bitwise CollisionPoly **) arg4, phi_f2, (CollisionContext *) arg6, phi_v0, (void *) arg8, arg5);
    }
    phi_f2_3 = phi_f2_2;
    if ((arg5 & 1) != 0) {
        phi_v0_2 = 0;
        if ((arg5 & 0x10) != 0) {
            phi_v0_2 = 1;
        }
        phi_f2_3 = func_800C0E74(arg1, arg2, (u16 *) (arg0 + 4), arg3, (bitwise CollisionPoly **) arg4, phi_f2_2, (CollisionContext *) arg6, phi_v0_2, (void *) arg8, arg5);
    }
    return phi_f2_3;
}

s32 func_800C1238(CollisionContext *arg0, CollisionPoly *arg1, f32 *arg2, f32 *arg3, f32 arg4, f32 arg6, f32 arg7, f32 arg8, f32 arg9, CollisionPoly **argA) {
    f32 temp_f0;

    temp_f0 = (arg9 - arg8) * arg7;
    *arg2 += temp_f0 * arg4;
    *arg3 += temp_f0 * arg6;
    if (*argA == 0) {
        *argA = arg1;
        return 1;
    }
    return 0;
}

s32 func_800C12A4(void *arg0, CollisionContext *arg1, u16 arg2, f32 *arg3, f32 *arg4, ? *arg5, f32 arg6, s32 *arg7, DynaPolyActor *arg8) {
    f32 sp10C;
    f32 sp104;
    f32 spF4;
    s32 spF0;
    s32 spE8;
    void *spDC;
    void *spD8;
    void *spD4;
    f32 spB4;
    f32 sp98;
    CollisionPoly *temp_s0;
    CollisionPoly *temp_s0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    f32 temp_f30_2;
    s32 temp_s3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 temp_v0_6;
    u16 temp_v0_7;
    u16 temp_v0_8;
    u16 temp_v0_9;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_v0;
    void *phi_s1;
    f32 phi_f2;
    f32 phi_f12;
    f32 phi_f2_2;
    f32 phi_f12_2;
    void *phi_s1_2;
    f32 phi_f2_3;
    f32 phi_f12_3;
    f32 phi_f2_4;
    f32 phi_f12_4;
    s32 phi_t2;
    s32 phi_v1;

    spF0 = 0;
    if (arg0->unk2 == 0xFFFF) {
        return 0;
    }
    sp104.unk0 = arg5->unk0;
    sp104.unk4 = (f32) arg5->unk4;
    sp104.unk8 = (s32) arg5->unk8;
    temp_v0 = arg1->colHeader;
    spE8 = temp_v0->polyList;
    temp_s3 = temp_v0->vtxList;
    phi_t2 = arg0->unk2 * 4;
loop_3:
    phi_s1 = arg1->polyNodes.tbl + phi_t2;
    phi_v1 = arg1->polyNodes.tbl;
loop_4:
    temp_f0 = arg5->unk4;
    temp_s0 = (phi_s1->unk0 * 0x10) + spE8;
    temp_t0 = (temp_s0->vtxData[2] * 6) + temp_s3;
    temp_a0 = ((temp_s0->vtxData[0] & 0x1FFF) * 6) + temp_s3;
    temp_a1 = ((temp_s0->vtxData[1] & 0x1FFF) * 6) + temp_s3;
    if ((temp_f0 < (f32) temp_a0->unk2) && (temp_f0 < (f32) temp_a1->unk2) && (temp_f0 < (f32) temp_t0->unk2)) {
        phi_s1_2 = phi_v1 + (arg0->unk2 * 4);
    } else {
        spD4 = temp_t0;
        temp_f20 = (f32) temp_s0->normal.x * 0.00003051851f;
        spD8 = temp_a1;
        spDC = temp_a0;
        temp_f26 = (f32) temp_s0->normal.y * 0.00003051851f;
        temp_f22 = (f32) temp_s0->normal.z * 0.00003051851f;
        temp_f24 = sqrtf((temp_f20 * temp_f20) + (temp_f22 * temp_f22));
        temp_f0_2 = Math3D_NormalizedSignedDistanceFromPlane(temp_f20, temp_f26, temp_f22, (f32) temp_s0->dist, (Vec3f *) &sp104);
        temp_f30 = temp_f0_2;
        if ((arg6 < fabsf(temp_f0_2)) || ((temp_s0->vtxData[0] & ((arg2 & 7) << 0xD)) != 0) || (((temp_s0->vtxData[1] & 0x8000) != 0) && (((arg8 != 0) && (arg8->actor.category != 2)) || ((arg8 == 0) && (arg2 != 1))))) {
            temp_v0_5 = phi_s1->unk2;
            if (temp_v0_5 == 0xFFFF) {
                phi_s1_2 = arg1->polyNodes.tbl + (arg0->unk2 * 4);
            } else {
                temp_v1_3 = arg1->polyNodes.tbl;
                phi_s1 = temp_v1_3 + (temp_v0_5 * 4);
                phi_v1 = temp_v1_3;
                goto loop_4;
            }
        } else {
            temp_f14 = 1.0f / temp_f24;
            temp_f16 = fabsf(temp_f22) * temp_f14;
            if (temp_f16 < 0.4f) {
                temp_v0_2 = phi_s1->unk2;
                if (temp_v0_2 == 0xFFFF) {
                    phi_s1_2 = arg1->polyNodes.tbl + (arg0->unk2 * 4);
                } else {
                    temp_v1 = arg1->polyNodes.tbl;
                    phi_s1 = temp_v1 + (temp_v0_2 * 4);
                    phi_v1 = temp_v1;
                    goto loop_4;
                }
            } else {
                temp_f12 = (f32) temp_a0->unk4;
                temp_f0_3 = (f32) temp_a1->unk4;
                phi_f2 = temp_f12;
                phi_f12 = temp_f12;
                if (temp_f0_3 < temp_f12) {
                    phi_f2 = temp_f0_3;
                } else if (temp_f12 < temp_f0_3) {
                    phi_f12 = temp_f0_3;
                }
                temp_f0_4 = (f32) temp_t0->unk4;
                phi_f2_2 = phi_f2;
                phi_f12_2 = phi_f12;
                if (temp_f0_4 < phi_f2) {
                    phi_f2_2 = temp_f0_4;
                } else if (phi_f12 < temp_f0_4) {
                    phi_f12_2 = temp_f0_4;
                }
                temp_f12_2 = phi_f12_2 + arg6;
                if ((sp10C < (phi_f2_2 - arg6)) || (temp_f12_2 < sp10C)) {
                    temp_v0_4 = phi_s1->unk2;
                    if (temp_v0_4 == 0xFFFF) {
                        phi_s1_2 = arg1->polyNodes.tbl + (arg0->unk2 * 4);
                    } else {
                        phi_t2 = temp_v0_4 * 4;
                        goto loop_3;
                    }
                } else {
                    spB4 = temp_f16;
                    sp98 = temp_f14;
                    if (func_800C074C((bitwise Vec3s *) temp_f12_2, temp_f14, temp_s0, temp_s3, sp104, arg5->unk4, &spF4) != 0) {
                        temp_f2 = spF4 - sp10C;
                        if ((fabsf(temp_f2) <= (arg6 / temp_f16)) && ((temp_f2 * temp_f22) <= 4.0f) && (func_800C1238(arg1, temp_s0, &sp104, &sp10C, temp_f20, temp_f26, temp_f22, temp_f14, temp_f30, (bitwise CollisionPoly **) arg6, arg7) != 0)) {
                            spF0 = 1;
                        }
                    }
                    temp_v0_3 = phi_s1->unk2;
                    if (temp_v0_3 == 0xFFFF) {
                        phi_s1_2 = arg1->polyNodes.tbl + (arg0->unk2 * 4);
                    } else {
                        temp_v1_2 = arg1->polyNodes.tbl;
                        phi_s1 = temp_v1_2 + (temp_v0_3 * 4);
                        phi_v1 = temp_v1_2;
                        goto loop_4;
                    }
                }
            }
        }
    }
loop_43:
    temp_s0_2 = (phi_s1_2->unk0 * 0x10) + spE8;
    temp_t0_2 = (temp_s0_2->vtxData[2] * 6) + temp_s3;
    temp_a0_2 = ((temp_s0_2->vtxData[0] & 0x1FFF) * 6) + temp_s3;
    temp_a1_2 = ((temp_s0_2->vtxData[1] & 0x1FFF) * 6) + temp_s3;
    if (!(arg5->unk4 < (f32) temp_a0_2->unk2) || !(arg5->unk4 < (f32) temp_a1_2->unk2) || !(arg5->unk4 < (f32) temp_t0_2->unk2)) {
        spD4 = temp_t0_2;
        temp_f20_2 = (f32) temp_s0_2->normal.x * 0.00003051851f;
        spD8 = temp_a1_2;
        spDC = temp_a0_2;
        temp_f26_2 = (f32) temp_s0_2->normal.y * 0.00003051851f;
        temp_f22_2 = (f32) temp_s0_2->normal.z * 0.00003051851f;
        temp_f24_2 = sqrtf((temp_f20_2 * temp_f20_2) + (temp_f22_2 * temp_f22_2));
        temp_f0_5 = Math3D_NormalizedSignedDistanceFromPlane(temp_f20_2, temp_f26_2, temp_f22_2, (f32) temp_s0_2->dist, (Vec3f *) &sp104);
        temp_f30_2 = temp_f0_5;
        if ((arg6 < fabsf(temp_f0_5)) || ((temp_s0_2->vtxData[0] & ((arg2 & 7) << 0xD)) != 0) || (((temp_s0_2->vtxData[1] & 0x8000) != 0) && (((arg8 != 0) && (arg8->actor.category != 2)) || ((arg8 == 0) && (arg2 != 1))))) {
            temp_v0_9 = phi_s1_2->unk2;
            if (temp_v0_9 != 0xFFFF) {
                phi_s1_2 = arg1->polyNodes.tbl + (temp_v0_9 * 4);
                goto block_77;
            }
        } else {
            temp_f14_2 = 1.0f / temp_f24_2;
            temp_f16_2 = fabsf(temp_f20_2) * temp_f14_2;
            if (temp_f16_2 < 0.4f) {
                temp_v0_6 = phi_s1_2->unk2;
                if (temp_v0_6 != 0xFFFF) {
                    phi_s1_2 = arg1->polyNodes.tbl + (temp_v0_6 * 4);
                    goto block_77;
                }
            } else {
                temp_f12_3 = (f32) temp_a0_2->unk0;
                temp_f0_6 = (f32) temp_a1_2->unk0;
                phi_f2_3 = temp_f12_3;
                phi_f12_3 = temp_f12_3;
                if (temp_f0_6 < temp_f12_3) {
                    phi_f2_3 = temp_f0_6;
                } else if (temp_f12_3 < temp_f0_6) {
                    phi_f12_3 = temp_f0_6;
                }
                temp_f0_7 = (f32) temp_t0_2->unk0;
                phi_f2_4 = phi_f2_3;
                phi_f12_4 = phi_f12_3;
                if (temp_f0_7 < phi_f2_3) {
                    phi_f2_4 = temp_f0_7;
                } else if (phi_f12_3 < temp_f0_7) {
                    phi_f12_4 = temp_f0_7;
                }
                temp_f12_4 = phi_f12_4 + arg6;
                if ((sp104 < (phi_f2_4 - arg6)) || (temp_f12_4 < sp104)) {
                    temp_v0_8 = phi_s1_2->unk2;
                    if (temp_v0_8 != 0xFFFF) {
                        phi_s1_2 = arg1->polyNodes.tbl + (temp_v0_8 * 4);
                        goto block_77;
                    }
                } else {
                    spB4 = temp_f16_2;
                    sp98 = temp_f14_2;
                    if (func_800C06A8((bitwise Vec3s *) temp_f12_4, temp_f14_2, temp_s0_2, temp_s3, arg5->unk4, sp10C, &spF4) != 0) {
                        temp_f2_2 = spF4 - sp104;
                        if ((fabsf(temp_f2_2) <= (arg6 / temp_f16_2)) && ((temp_f2_2 * temp_f20_2) <= 4.0f) && (func_800C1238(arg1, temp_s0_2, &sp104, &sp10C, temp_f20_2, temp_f26_2, temp_f22_2, temp_f14_2, temp_f30_2, (bitwise CollisionPoly **) arg6, arg7) != 0)) {
                            spF0 = 1;
                        }
                    }
                    temp_v0_7 = phi_s1_2->unk2;
                    if (temp_v0_7 != 0xFFFF) {
                        phi_s1_2 = arg1->polyNodes.tbl + (temp_v0_7 * 4);
block_77:
                        goto loop_43;
                    }
                }
            }
        }
    }
    *arg3 = sp104;
    *arg4 = sp10C;
    return spF0;
}

s32 func_800C1B68(void *arg0, u16 arg1, CollisionContext *arg2, f32 *arg3, ? *arg4, f32 arg5, CollisionPoly **arg6, void *arg7) {
    s32 sp94;
    f32 sp84;
    s32 sp7C;
    s32 sp60;
    CollisionPoly *temp_s0;
    f32 temp_f0;
    s32 temp_a1;
    s32 temp_t0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v1;
    void *temp_v0;
    void *temp_v1_2;
    s32 phi_a0;
    void *phi_s1;
    s32 phi_t1;
    s32 phi_t2;
    s32 phi_t2_2;
    s32 phi_t2_3;

    temp_a1 = arg1 & 0xFFFF;
    temp_v1 = arg0->unk4;
    phi_t2 = 0;
    if (temp_v1 == 0xFFFF) {
        return 0;
    }
    temp_v0 = arg2->colHeader;
    sp7C = temp_v0->vtxList;
    *arg3 = arg4->unk4;
    phi_a0 = arg2->colHeader->polyList;
    phi_s1 = arg2->polyNodes.tbl + (temp_v1 * 4);
    phi_t1 = (temp_a1 & 7) << 0xD;
loop_3:
    temp_t0 = phi_s1->unk0 * 0x10;
    temp_v1_2 = phi_a0 + temp_t0;
    phi_t2_2 = phi_t2;
    if (((temp_v1_2->unk2 & phi_t1) != 0) || ((temp_s0 = temp_t0 + temp_v0->polyList, ((temp_v1_2->unk4 & 0x8000) != 0)) && (((arg7 != 0) && (arg7->unk2 != 2)) || ((arg7 == 0) && (temp_a1 != 1))))) {
        temp_v0_3 = phi_s1->unk2;
        if (temp_v0_3 != 0xFFFF) {
            phi_s1 = arg2->polyNodes.tbl + (temp_v0_3 * 4);
            goto loop_3;
        }
    } else {
        sp94 = phi_t2;
        sp60 = phi_t1;
        phi_t2_3 = phi_t2;
        if (func_800C0668(temp_s0, sp7C, arg4->unk0, arg4->unk8, &sp84) != 0) {
            temp_f0 = sp84 - *arg3;
            if ((temp_f0 > 0.0f) && (temp_f0 < arg5) && ((temp_f0 * ((f32) temp_s0->normal.y * 0.00003051851f)) <= 0.0f)) {
                *arg3 = sp84 - arg5;
                *arg6 = temp_s0;
                phi_t2_3 = 1;
            }
        }
        temp_v0_2 = phi_s1->unk2;
        phi_t2 = phi_t2_3;
        phi_t2_2 = phi_t2_3;
        if (temp_v0_2 != 0xFFFF) {
            phi_a0 = arg2->colHeader->polyList;
            phi_s1 = arg2->polyNodes.tbl + (temp_v0_2 * 4);
            goto loop_3;
        }
    }
    return phi_t2_2;
}

s32 func_800C1D7C(void **arg0) {
    ? sp7C;
    f32 sp68;
    s32 sp64;
    ? *sp60;
    void *sp5C;
    Vec3f *sp58;
    Vec3s *sp54;
    CollisionPoly *sp50;
    CollisionPoly **temp_s6;
    CollisionPoly *temp_t7;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_5;
    u16 temp_v0_6;
    u16 temp_v1;
    u16 temp_v1_2;
    u8 *temp_a2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_t1;
    void *temp_t8;
    void *temp_v0;
    void *temp_v0_4;
    void *phi_s1;
    s32 phi_fp;
    s32 phi_fp_2;
    s32 phi_fp_3;

    temp_v1 = *arg0->unk4;
    phi_fp_2 = 0;
    if (temp_v1 == 0xFFFF) {
        return 0;
    }
    temp_a0 = arg0->unk8;
    temp_v0 = temp_a0->unk0;
    temp_s6 = &sp50;
    sp54 = temp_v0->unk10;
    sp58 = arg0->unk10;
    sp60 = &sp7C;
    sp5C = arg0->unk14;
    sp64 = (arg0->unk28 & 8) != 0;
    sp68 = arg0->unk24;
    phi_s1 = temp_a0->unk48 + (temp_v1 * 4);
loop_3:
    temp_v0_2 = phi_s1->unk0;
    temp_t7 = (temp_v0_2 * 0x10) + temp_v0->unk18;
    sp50 = temp_t7;
    temp_a0_2 = arg0->unk8;
    temp_a2 = temp_a0_2->unk4C + temp_v0_2;
    phi_fp = phi_fp_2;
    phi_fp_3 = phi_fp_2;
    if ((*temp_a2 == 1) || ((temp_v0_3 = arg0->unkE, (temp_v0_3 != 0)) && ((temp_t7->vtxData[0] & ((temp_v0_3 & 7) << 0xD)) == 0)) || (temp_v1_2 = arg0->unkC, ((sp50->vtxData[0] & ((temp_v1_2 & 7) << 0xD)) != 0)) || (((sp50->vtxData[1] & 0x8000) != 0) && (((temp_v0_4 = arg0->unk2C, (temp_v0_4 != 0)) && (temp_v0_4->unk2 != 2)) || ((temp_v0_4 == 0) && (temp_v1_2 != 1))))) {
        temp_v0_6 = phi_s1->unk2;
        if (temp_v0_6 != 0xFFFF) {
            phi_s1 = temp_a0_2->unk48 + (temp_v0_6 * 4);
            goto loop_3;
        }
    } else {
        *temp_a2 = 1;
        temp_f0 = (f32) BgCheck_PolygonGetMinY(sp50, sp54);
        if (!(sp58->y < temp_f0) || !(sp5C->unk4 < temp_f0)) {
            if (func_800C07F0(temp_s6) != 0) {
                temp_f0_2 = Math3D_DistanceSquared(sp58, (Vec3f *) sp60);
                if (temp_f0_2 < arg0->unk20) {
                    arg0->unk20 = temp_f0_2;
                    temp_t8 = arg0->unk18;
                    temp_t8->unk0 = (s32) sp60->unk0;
                    temp_t8->unk4 = (s32) sp60->unk4;
                    temp_t8->unk8 = (s32) sp60->unk8;
                    temp_t1 = arg0->unk14;
                    temp_t1->unk0 = (s32) sp60->unk0;
                    temp_t1->unk4 = (s32) sp60->unk4;
                    temp_t1->unk8 = (s32) sp60->unk8;
                    *arg0->unk1C = sp50;
                    phi_fp_3 = 1;
                }
            }
            temp_v0_5 = phi_s1->unk2;
            phi_fp = phi_fp_3;
            phi_fp_2 = phi_fp_3;
            if (temp_v0_5 != 0xFFFF) {
                phi_s1 = arg0->unk8->unk48 + (temp_v0_5 * 4);
                goto loop_3;
            }
        }
    }
    return phi_fp;
}

s32 func_800C2008(void **arg0) {
    s32 sp1C;
    u16 *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    s32 phi_v1;
    void **phi_a0;
    s32 phi_v1_2;
    s32 phi_v1_3;

    phi_v1 = 0;
    if ((arg0->unk28 & 2) != 0) {
        temp_v0 = arg0->unk0;
        if (*temp_v0 != 0xFFFF) {
            arg0->unk4 = temp_v0;
            sp1C = 0;
            phi_v1 = sp1C;
            if (func_800C1D7C() != 0) {
                phi_v1 = 1;
            }
        }
    }
    phi_a0 = arg0;
    phi_v1_2 = phi_v1;
    if ((arg0->unk28 & 1) != 0) {
        temp_v0_2 = arg0->unk0;
        if (temp_v0_2->unk2 != 0xFFFF) {
            arg0->unk4 = (void *) (temp_v0_2 + 2);
            arg0 = arg0;
            sp1C = phi_v1;
            phi_a0 = arg0;
            phi_v1_2 = phi_v1;
            if (func_800C1D7C(arg0) != 0) {
                phi_v1_2 = 1;
            }
        }
    }
    phi_v1_3 = phi_v1_2;
    if ((phi_a0->unk28 & 4) != 0) {
        temp_v0_3 = phi_a0->unk0;
        if (temp_v0_3->unk4 != 0xFFFF) {
            phi_a0->unk4 = (void *) (temp_v0_3 + 4);
            sp1C = phi_v1_2;
            phi_v1_3 = phi_v1_2;
            if (func_800C1D7C(phi_a0) != 0) {
                phi_v1_3 = 1;
            }
        }
    }
    return phi_v1_3;
}

s32 func_800C20F4(void *arg0, u16 arg1, Vec3f *arg2, Vec3f *arg3, f32 arg4, CollisionPoly **arg5, CollisionPoly **arg6) {
    s32 sp68;
    s32 sp48;
    CollisionPoly *temp_s0;
    Vec3s *temp_s2;
    f32 temp_f0;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_t0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_v0;
    void *temp_v1;
    s32 phi_t0;
    void *phi_s1;
    s32 phi_t2;
    s32 phi_t1;

    temp_a1 = arg1 & 0xFFFF;
    temp_v0 = arg2->x;
    temp_t0 = temp_v0->unk18;
    temp_s2 = temp_v0->unk10;
    phi_t0 = temp_t0;
    phi_s1 = arg0;
    phi_t2 = (temp_a1 & 7) << 0xD;
    phi_t1 = temp_t0;
loop_1:
    temp_a0 = phi_s1->unk0 * 0x10;
    temp_v1 = phi_t0 + temp_a0;
    if (((temp_v1->unk2 & phi_t2) != 0) || ((temp_s0 = temp_a0 + phi_t1, ((temp_v1->unk4 & 0x8000) != 0)) && (((arg6 != 0) && (arg6->unk2 != 2)) || ((arg6 == 0) && (temp_a1 != 1))))) {
        temp_v0_3 = phi_s1->unk2;
        if (temp_v0_3 != 0xFFFF) {
            phi_s1 = arg2->unk48 + (temp_v0_3 * 4);
            goto loop_1;
        }
        goto block_16;
    }
    temp_f0 = arg3->y + arg4;
    if (!(temp_f0 < (f32) (temp_s2 + ((temp_s0->vtxData[0] & 0x1FFF) * 6))->unk2) || !(temp_f0 < (f32) (temp_s2 + ((temp_s0->vtxData[1] & 0x1FFF) * 6))->unk2) || !(temp_f0 < (f32) (temp_s2 + (temp_s0->vtxData[2] * 6))->unk2)) {
        sp68 = phi_t1;
        sp48 = phi_t2;
        BgCheck_PolygonCollidesWithSphere(temp_s0, temp_s2, arg3, arg4);
        if (MIPS2C_ERROR(Read from unset register $v0) != 0) {
            *arg5 = temp_s0;
            return 1;
        }
        temp_v0_2 = phi_s1->unk2;
        if (temp_v0_2 != 0xFFFF) {
            phi_t0 = arg2->x->unk18;
            phi_s1 = arg2->unk48 + (temp_v0_2 * 4);
            goto loop_1;
        }
        goto block_16;
    }
block_16:
    return 0;
}

s32 func_800C2310(CollisionPoly **arg0, u16 arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4, f32 arg5, u16 arg6, CollisionPoly **arg7) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    Vec3f *phi_a2;

    temp_v0 = arg0->unk0;
    if ((temp_v0 != 0xFFFF) && ((arg6 & 4) == 0) && (func_800C20F4(arg2->unk48 + (temp_v0 * 4), arg1, arg3, arg4, arg5, arg7) != 0)) {
        return 1;
    }
    temp_v0_2 = arg0->unk2;
    phi_a2 = arg2;
    if ((temp_v0_2 != 0xFFFF) && ((arg6 & 2) == 0) && (arg2 = arg2, phi_a2 = arg2, (func_800C20F4(arg2->unk48 + (temp_v0_2 * 4), arg1, arg2, arg3, (bitwise f32) arg4, (bitwise CollisionPoly **) arg5, arg7) != 0))) {
        return 1;
    }
    temp_v0_3 = arg0->unk4;
    if ((temp_v0_3 != 0xFFFF) && ((arg6 & 1) == 0) && (func_800C20F4(phi_a2->unk48 + (temp_v0_3 * 4), arg1, phi_a2, arg3, (bitwise f32) arg4, (bitwise CollisionPoly **) arg5, arg7) != 0)) {
        return 1;
    }
    return 0;
}

u16 *func_800C2460(CollisionContext *arg0, StaticLookup *arg1, ? *arg2) {
    s32 sp1C;
    CollisionContext *temp_a0;
    CollisionContext *temp_a3;
    s32 temp_v1;

    temp_a3 = arg0;
    temp_a0 = temp_a3;
    arg0 = temp_a3;
    func_800C25E0(temp_a0, arg2, &sp1C, temp_a3);
    temp_v1 = arg0->subdivAmount.x;
    return (sp24 * temp_v1 * arg0->subdivAmount.y * 6) + arg1 + (sp1C * 6) + (sp20 * temp_v1 * 6);
}

CollisionPoly **func_800C2514(CollisionContext *arg0, StaticLookup *arg1, ? *arg2) {
    s32 sp1C;
    s32 temp_v1;

    if (func_800C3C94(arg0, arg2) == 0) {
        return NULL;
    }
    func_800C25E0(arg0, arg2, &sp1C);
    temp_v1 = arg0->subdivAmount.x;
    return (sp24 * temp_v1 * arg0->subdivAmount.y * 6) + arg1 + (sp1C * 6) + (sp20 * temp_v1 * 6);
}

void func_800C25E0(CollisionContext *arg0, ? *arg1, s32 *arg2) {
    s32 temp_f18;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;

    temp_f18 = (s32) ((arg1->unk0 - arg0->minBounds.x) * arg0->subdivLengthInv.x);
    arg2->unk0 = temp_f18;
    arg2->unk4 = (s32) ((arg1->unk4 - arg0->minBounds.y) * arg0->subdivLengthInv.y);
    arg2->unk8 = (s32) ((arg1->unk8 - arg0->minBounds.z) * arg0->subdivLengthInv.z);
    if (temp_f18 < 0) {
        arg2->unk0 = 0;
    } else {
        temp_v1 = arg0->subdivAmount.x;
        if (temp_f18 >= temp_v1) {
            arg2->unk0 = temp_v1 - 1;
        }
    }
    temp_v0 = arg2->unk4;
    if (temp_v0 < 0) {
        arg2->unk4 = 0;
    } else {
        temp_v1_2 = arg0->subdivAmount.y;
        if (temp_v0 >= temp_v1_2) {
            arg2->unk4 = (s32) (temp_v1_2 - 1);
        }
    }
    temp_v0_2 = arg2->unk8;
    if (temp_v0_2 < 0) {
        arg2->unk8 = 0;
        return;
    }
    temp_v1_3 = arg0->subdivAmount.z;
    if (temp_v0_2 >= temp_v1_3) {
        arg2->unk8 = (s32) (temp_v1_3 - 1);
    }
}

void BgCheck_GetPolyMinSubdivisions(CollisionContext *colCtx, Vec3f *min, s32 *xSubdivision, s32 *ySubdivision, s32 *zSubdivision) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_f0 = min->x - colCtx->minBounds.x;
    temp_f2 = min->y - colCtx->minBounds.y;
    temp_f12 = min->z - colCtx->minBounds.z;
    *xSubdivision = (s32) (colCtx->subdivLengthInv.x * temp_f0);
    *ySubdivision = (s32) (colCtx->subdivLengthInv.y * temp_f2);
    *zSubdivision = (s32) (colCtx->subdivLengthInv.z * temp_f12);
    if (((s32) temp_f0 % (s32) colCtx->subdivLength.x) < 0x32) {
        temp_v0 = *xSubdivision;
        if (temp_v0 > 0) {
            *xSubdivision = temp_v0 - 1;
        }
    }
    if (((s32) temp_f2 % (s32) colCtx->subdivLength.y) < 0x32) {
        temp_v0_2 = *ySubdivision;
        if (temp_v0_2 > 0) {
            *ySubdivision = temp_v0_2 - 1;
        }
    }
    if (((s32) temp_f12 % (s32) colCtx->subdivLength.z) < 0x32) {
        temp_v0_3 = *zSubdivision;
        if (temp_v0_3 > 0) {
            *zSubdivision = temp_v0_3 - 1;
        }
    }
}

void BgCheck_GetPolyMaxSubdivisions(CollisionContext *colCtx, Vec3f *max, s32 *xSubdivision, s32 *ySubdivision, s32 *zSubdivision) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_f16;
    s32 temp_f16_2;
    s32 temp_f6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_f0 = max->x - colCtx->minBounds.x;
    temp_f2 = max->y - colCtx->minBounds.y;
    temp_f12 = max->z - colCtx->minBounds.z;
    *xSubdivision = (s32) (colCtx->subdivLengthInv.x * temp_f0);
    *ySubdivision = (s32) (colCtx->subdivLengthInv.y * temp_f2);
    *zSubdivision = (s32) (colCtx->subdivLengthInv.z * temp_f12);
    temp_f16 = (s32) colCtx->subdivLength.x;
    if ((temp_f16 - 0x32) < ((s32) temp_f0 % temp_f16)) {
        temp_v0 = *xSubdivision;
        if (temp_v0 < (colCtx->subdivAmount.x - 1)) {
            *xSubdivision = temp_v0 + 1;
        }
    }
    temp_f6 = (s32) colCtx->subdivLength.y;
    if ((temp_f6 - 0x32) < ((s32) temp_f2 % temp_f6)) {
        temp_v0_2 = *ySubdivision;
        if (temp_v0_2 < (colCtx->subdivAmount.y - 1)) {
            *ySubdivision = temp_v0_2 + 1;
        }
    }
    temp_f16_2 = (s32) colCtx->subdivLength.z;
    if ((temp_f16_2 - 0x32) < ((s32) temp_f12 % temp_f16_2)) {
        temp_v0_3 = *zSubdivision;
        if (temp_v0_3 < (colCtx->subdivAmount.z - 1)) {
            *zSubdivision = temp_v0_3 + 1;
        }
    }
}

void BgCheck_GetPolyMinMaxSubdivisions(CollisionContext *colCtx, Vec3s *vertices, CollisionPoly *polygons, s32 *minX, s32 *minY, s32 *minZ, s32 *maxX, s32 *maxY, s32 *maxZ, s16 index) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    CollisionPoly *sp34;
    CollisionPoly *temp_t0;
    Vec3s *temp_a1;
    Vec3s *temp_v0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    u16 *temp_a0;
    u16 *temp_a0_2;
    u16 *phi_a0;

    temp_t0 = &polygons[index];
    sp34 = temp_t0;
    Math_Vec3s_ToVec3f((Vec3f *) &sp4C, &vertices[(s16) (temp_t0->vtxData[0] & 0x1FFF)]);
    Math_Vec3f_Copy((Vec3f *) &sp58, (Vec3f *) &sp4C);
    temp_a0 = &temp_t0->vtxData[1];
    temp_a1 = &temp_t0->normal;
    phi_a0 = temp_a0;
    if ((u32) temp_a0 < (u32) temp_a1) {
        do {
            temp_a0_2 = phi_a0 + 2;
            temp_v0 = &vertices[(s16) (*phi_a0 & 0x1FFF)];
            temp_f0 = (f32) temp_v0->x;
            temp_f2 = (f32) temp_v0->y;
            temp_f12 = (f32) temp_v0->z;
            phi_a0 = temp_a0_2;
            if (temp_f0 < sp58) {
                sp58 = temp_f0;
            } else if (sp4C < temp_f0) {
                sp4C = temp_f0;
            }
            if (temp_f2 < sp5C) {
                sp5C = temp_f2;
            } else if (sp50 < temp_f2) {
                sp50 = temp_f2;
            }
            if (temp_f12 < sp60) {
                sp60 = temp_f12;
            } else if (sp54 < temp_f12) {
                sp54 = temp_f12;
            }
        } while ((u32) temp_a0_2 < (u32) temp_a1);
    }
    BgCheck_GetPolyMinSubdivisions(colCtx, (Vec3f *) &sp58, minX, minY, minZ);
    BgCheck_GetPolyMaxSubdivisions(colCtx, (Vec3f *) &sp4C, maxX, maxY, maxZ);
}

s32 func_800C2BE0(Vec3f *arg0, Vec3f *arg1, CollisionPoly *arg2, Vec3s *arg3, s16 arg4) {
    ? spB4;
    ? spA8;
    ? sp9C;
    ? sp90;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    ? sp70;
    ? sp64;
    ? sp58;
    u32 sp54;
    u32 sp50;
    u32 sp4C;
    CollisionPoly *sp44;
    CollisionPoly *temp_v0;
    f32 temp_f0;
    u32 temp_a3;
    u32 temp_a3_2;
    u32 temp_t0;
    u32 temp_t0_2;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 temp_v0_4;
    u32 temp_v1;
    u32 temp_v1_2;

    sp50 = 0;
    sp4C = 0;
    temp_v0 = (arg4 * 0x10) + arg2;
    sp44 = temp_v0;
    BgCheck_CreateVec3fFromVertex(((temp_v0->vtxData[0] & 0x1FFF) * 6) + arg3, (Vec3f *) &sp70);
    temp_v0_2 = func_8017A954((Vec3f *) &sp70, arg0, arg1);
    sp4C = temp_v0_2;
    if (temp_v0_2 == 0) {
        return 1;
    }
    BgCheck_CreateVec3fFromVertex(((sp44->vtxData[1] & 0x1FFF) * 6) + arg3, (Vec3f *) &sp64);
    temp_v0_3 = func_8017A954((Vec3f *) &sp64, arg0, arg1);
    sp50 = temp_v0_3;
    if (temp_v0_3 == 0) {
        return 1;
    }
    BgCheck_CreateVec3fFromVertex((sp44->vtxData[2] * 6) + arg3, (Vec3f *) &sp58);
    temp_v0_4 = func_8017A954((Vec3f *) &sp58, arg0, arg1);
    sp54 = temp_v0_4;
    if (temp_v0_4 == 0) {
        return 1;
    }
    if ((temp_v0_4 & sp4C & sp50) != 0) {
        goto block_31;
    }
    temp_t0 = sp4C | (func_8017AA0C((Vec3f *) &sp70, arg0, arg1) << 8);
    sp4C = temp_t0;
    temp_a3 = sp50 | (func_8017AA0C((Vec3f *) &sp64, arg0, arg1) << 8);
    sp50 = temp_a3;
    temp_v1 = sp54 | (func_8017AA0C((Vec3f *) &sp58, arg0, arg1) << 8);
    sp54 = temp_v1;
    if ((temp_v1 & temp_t0 & temp_a3) != 0) {
        goto block_31;
    }
    temp_t0_2 = sp4C | (func_8017ABBC((Vec3f *) &sp70, arg0, arg1) << 0x18);
    sp4C = temp_t0_2;
    temp_a3_2 = sp50 | (func_8017ABBC((Vec3f *) &sp64, arg0, arg1) << 0x18);
    sp50 = temp_a3_2;
    temp_v1_2 = sp54 | (func_8017ABBC((Vec3f *) &sp58, arg0, arg1) << 0x18);
    sp54 = temp_v1_2;
    if ((temp_v1_2 & temp_t0_2 & temp_a3_2) != 0) {
        goto block_31;
    }
    BgCheck_PolygonGetNormal(sp44, &sp88, &sp84, &sp80);
    temp_f0 = (f32) sp44->dist;
    sp7C = temp_f0;
    if ((func_8017C008(&sp70, &sp64, &sp58, sp88, sp84, sp80, temp_f0, arg0->z, arg0->x, &spB4, arg0->y, arg1->y) != 0) || (func_8017C008(&sp70, &sp64, &sp58, sp88, sp84, sp80, sp7C, arg1->z, arg0->x, &spB4, arg0->y, arg1->y) != 0) || (func_8017C008(&sp70, &sp64, &sp58, sp88, sp84, sp80, sp7C, arg0->z, arg1->x, &spB4, arg0->y, arg1->y) != 0) || (func_8017C008(&sp70, &sp64, &sp58, sp88, sp84, sp80, sp7C, arg1->z, arg1->x, &spB4, arg0->y, arg1->y) != 0)) {
        return 1;
    }
    if ((func_8017D020(&sp70, &sp64, &sp58, sp88, sp84, sp80, sp7C, arg0->x, arg0->y, &spB4, arg0->z, arg1->z) != 0) || (func_8017D020(&sp70, &sp64, &sp58, sp88, sp84, sp80, sp7C, arg0->x, arg1->y, &spB4, arg0->z, arg1->z) != 0) || (func_8017D020(&sp70, &sp64, &sp58, sp88, sp84, sp80, sp7C, arg1->x, arg0->y, &spB4, arg0->z, arg1->z) != 0) || (func_8017D020(&sp70, &sp64, &sp58, sp88, sp84, sp80, sp7C, arg1->x, arg1->y, &spB4, arg0->z, arg1->z) != 0)) {
        return 1;
    }
    if ((func_8017C980(&sp70, &sp64, &sp58, sp88, sp84, sp80, sp7C, arg0->y, arg0->z, &spB4, arg0->x, arg1->x) != 0) || (func_8017C980(&sp70, &sp64, &sp58, sp88, sp84, sp80, sp7C, arg0->y, arg1->z, &spB4, arg0->x, arg1->x) != 0) || (func_8017C980(&sp70, &sp64, &sp58, sp88, sp84, sp80, sp7C, arg1->y, arg0->z, &spB4, arg0->x, arg1->x) != 0) || (func_8017C980(&sp70, &sp64, &sp58, sp88, sp84, sp80, sp7C, arg1->y, arg1->z, &spB4, arg0->x, arg1->x) != 0)) {
        return 1;
    }
    BgCheck_CreateVec3fFromVertex(((sp44->vtxData[0] & 0x1FFF) * 6) + arg3, (Vec3f *) &spA8);
    BgCheck_CreateVec3fFromVertex(((sp44->vtxData[1] & 0x1FFF) * 6) + arg3, (Vec3f *) &sp9C);
    BgCheck_CreateVec3fFromVertex((sp44->vtxData[2] * 6) + arg3, (Vec3f *) &sp90);
    if ((func_8017AD38(arg0, arg1, &spA8, &sp9C) != 0) || (func_8017AD38(arg0, arg1, &sp9C, &sp90) != 0) || (func_8017AD38(arg0, arg1, &sp90, &spA8) != 0)) {
        return 1;
    }
block_31:
    return 0;
}

u32 BgCheck_SplitScenePolygonsIntoSubdivisions(CollisionContext *colCtx, GlobalContext *globalCtx, StaticLookup *subdivisions) {
    s32 spF4;
    s32 spF0;
    s32 spE8;
    s32 spE4;
    s32 spE0;
    s32 spDC;
    s32 spD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    StaticLookup *spA4;
    s32 sp98;
    s32 sp7C;
    CollisionHeader *temp_a3;
    CollisionPoly *temp_s5;
    StaticLookup *temp_v0;
    Vec3s *temp_s4;
    f32 *temp_s6;
    f32 *temp_s7;
    f32 temp_f16;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f4;
    f32 temp_f8;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_at;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    u16 temp_v1;
    StaticLookup *phi_v0;
    s32 phi_a1;
    s32 phi_v1;
    s32 phi_a0;
    StaticLookup *phi_a1_2;
    s32 phi_v0_2;
    StaticLookup *phi_s0;
    s32 phi_s1;
    s32 phi_v1_2;
    s32 phi_a0_2;
    s32 phi_v0_3;
    StaticLookup *phi_a1_3;
    s32 phi_fp;

    temp_a3 = colCtx->colHeader;
    temp_lo = colCtx->subdivAmount.x * colCtx->subdivAmount.y;
    temp_s7 = &spB4;
    temp_s6 = &spC0;
    phi_v0 = subdivisions;
    phi_a1 = temp_lo;
    if ((u32) subdivisions < (u32) &subdivisions[temp_lo * colCtx->subdivAmount.z]) {
        do {
            phi_v0->floor.head = 0xFFFF;
            phi_v0->wall.head = 0xFFFF;
            phi_v0->ceiling.head = 0xFFFF;
            temp_v0 = phi_v0 + 6;
            temp_lo_2 = colCtx->subdivAmount.x * colCtx->subdivAmount.y;
            phi_v0 = temp_v0;
            phi_a1 = temp_lo_2;
        } while ((u32) temp_v0 < (u32) &subdivisions[temp_lo_2 * colCtx->subdivAmount.z]);
    }
    temp_v1 = temp_a3->numPolygons;
    temp_s4 = temp_a3->vtxList;
    temp_s5 = temp_a3->polyList;
    sp98 = phi_a1;
    temp_f22 = colCtx->subdivLength.x + 100.0f;
    temp_f24 = colCtx->subdivLength.y + 100.0f;
    temp_f26 = colCtx->subdivLength.z + 100.0f;
    if ((s32) temp_v1 > 0) {
        spF0 = 0;
        spF4 = (s32) temp_v1;
        do {
            BgCheck_GetPolyMinMaxSubdivisions(colCtx, temp_s4, temp_s5, &spE0, &spDC, &spD8, &spD4, &spD0, &spCC, (s16) (s32) (s16) spF0);
            temp_v0_2 = spCC + 1;
            temp_f16 = ((colCtx->subdivLength.z * (f32) spD8) + colCtx->minBounds.z) - 50.0f;
            spC8 = temp_f16;
            spBC = temp_f16 + temp_f26;
            phi_v1 = spD0 + 1;
            phi_a0 = spD8;
            phi_a1_2 = &subdivisions[spD8 * sp98];
            phi_v0_3 = temp_v0_2;
            if (spD8 < temp_v0_2) {
                sp7C = sp98 * 6;
                do {
                    spE8 = spDC;
                    temp_f4 = ((colCtx->subdivLength.y * (f32) spDC) + colCtx->minBounds.y) - 50.0f;
                    spC4 = temp_f4;
                    spB8 = temp_f4 + temp_f24;
                    phi_a0_2 = phi_a0;
                    phi_a1_3 = phi_a1_2;
                    phi_fp = (colCtx->subdivAmount.x * spDC * 6) + phi_a1_2;
                    phi_v1_2 = phi_v1;
                    if (spDC < phi_v1) {
                        spE4 = phi_a0;
                        spA4 = phi_a1_2;
                        phi_v0_2 = spD4 + 1;
                        do {
                            temp_f8 = ((colCtx->subdivLength.x * (f32) spE0) + colCtx->minBounds.x) - 50.0f;
                            spC0 = temp_f8;
                            spB4 = temp_f8 + temp_f22;
                            phi_s0 = (spE0 * 6) + phi_fp;
                            phi_s1 = spE0;
                            if (spE0 < phi_v0_2) {
                                do {
                                    if (func_800C2BE0((Vec3f *) temp_s6, (Vec3f *) temp_s7, temp_s5, temp_s4, (s16) (s32) (s16) spF0) != 0) {
                                        BgCheck_ScenePolygonListsInsert(phi_s0, colCtx, temp_s5, temp_s4, (s16) (s32) (s16) spF0);
                                    }
                                    temp_s1 = phi_s1 + 1;
                                    temp_v0_3 = spD4 + 1;
                                    spC0 += colCtx->subdivLength.x;
                                    spB4 += colCtx->subdivLength.x;
                                    phi_s0 += 6;
                                    phi_s1 = temp_s1;
                                    phi_v0_2 = temp_v0_3;
                                } while (temp_s1 < temp_v0_3);
                                phi_v1_2 = spD0 + 1;
                            }
                            temp_a0 = spE8 + 1;
                            temp_at = temp_a0 < phi_v1_2;
                            spC4 += colCtx->subdivLength.y;
                            spB8 += colCtx->subdivLength.y;
                            spE8 = temp_a0;
                            phi_v1 = phi_v1_2;
                            phi_fp += colCtx->subdivAmount.x * 6;
                        } while (temp_at != 0);
                        phi_a0_2 = spE4;
                        phi_v0_3 = spCC + 1;
                        phi_a1_3 = spA4;
                    }
                    temp_a0_2 = phi_a0_2 + 1;
                    spC8 += colCtx->subdivLength.z;
                    spBC += colCtx->subdivLength.z;
                    phi_a0 = temp_a0_2;
                    phi_a1_2 = phi_a1_3 + sp7C;
                } while (temp_a0_2 < phi_v0_3);
            }
            temp_v0_4 = spF0 + 1;
            spF0 = temp_v0_4;
        } while (temp_v0_4 != spF4);
    }
    return colCtx->polyNodes.count * 4;
}

s32 BgCheck_GetIsDefaultSpecialScene(GlobalContext *globalCtx) {
    s16 *temp_v0;
    s16 *phi_v0;

    phi_v0 = bgSpecialSceneParamsDefault;
loop_1:
    temp_v0 = phi_v0 + 2;
    phi_v0 = temp_v0;
    if (globalCtx->sceneNum == *phi_v0) {
        return 1;
    }
    if ((u32) temp_v0 >= (u32) &D_801B46D2) {
        return 0;
    }
    goto loop_1;
}

s32 BgCheck_GetSpecialSceneMaxMemory(s32 sceneId, u32 *maxMemory) {
    BgSpecialSceneMaxMemory *temp_v1;
    BgSpecialSceneMaxMemory *phi_v1;

    phi_v1 = bgSpecialSceneMaxMemory;
loop_1:
    if (sceneId == phi_v1->sceneNumber) {
        *maxMemory = phi_v1->maxMemory;
        return 1;
    }
    temp_v1 = phi_v1 + 8;
    phi_v1 = temp_v1;
    if (temp_v1 == bgSpecialSceneMeshSubdivisions) {
        return 0;
    }
    goto loop_1;
}

void BgCheck_CalcSubdivisionSize(f32 min, s32 subdivisions, f32 *max, f32 *subdivisionSize, f32 *inverseSubdivisionSize) {
    f32 temp_f14;
    f32 temp_f2;

    temp_f2 = (f32) subdivisions;
    temp_f14 = (f32) ((s32) ((*max - min) / temp_f2) + 1);
    *subdivisionSize = temp_f14;
    if (temp_f14 < 150.0f) {
        *subdivisionSize = 150.0f;
    } else {
        *subdivisionSize = *subdivisionSize;
    }
    *inverseSubdivisionSize = 1.0f / *subdivisionSize;
    *max = (*subdivisionSize * temp_f2) + min;
}

s32 BgCheck_GetSpecialSceneMaxObjects(GlobalContext *globalCtx, u32 *maxNodes, u32 *maxPolygons, u32 *maxVertices) {
    BgSpecialSceneMaxObjects *temp_t0;
    BgSpecialSceneMaxObjects *phi_t0;

    phi_t0 = bgSpecialSceneMaxObjects;
loop_1:
    if (globalCtx->sceneNum == phi_t0->sceneId) {
        *maxNodes = (u32) phi_t0->maxNodes;
        *maxPolygons = (u32) phi_t0->maxPolygons;
        *maxVertices = (u32) phi_t0->maxVertices;
        return 1;
    }
    temp_t0 = phi_t0 + 8;
    phi_t0 = temp_t0;
    if (temp_t0 == &D_801B4708) {
        return 0;
    }
    goto loop_1;
}

void BgCheck_Init(CollisionContext *colCtx, GlobalContext *globalCtx, CollisionHeader *mesh) {
    s32 sp54;
    u32 sp50;
    u32 sp40;
    BgSpecialSceneMeshSubdivision *temp_v1;
    CollisionHeader *temp_v0_2;
    DynaCollisionContext *temp_s1_2;
    SSNodeList *temp_s1;
    StaticLookup *temp_v0;
    s32 temp_v1_2;
    u32 temp_v1_3;
    BgSpecialSceneMeshSubdivision *phi_v1;
    s32 phi_a0;
    s32 phi_s1;
    s32 phi_a2;
    s32 phi_s1_2;

    colCtx->colHeader = mesh;
    colCtx->unk146C = 0;
    phi_s1 = -1;
    phi_s1_2 = -1;
    if (BgCheck_GetIsDefaultSpecialScene(globalCtx) != 0) {
        colCtx->memSize = 0xF000;
        colCtx->dyna.polyNodesMax = 0x3E8;
        colCtx->dyna.polyListMax = 0x200;
        colCtx->dyna.vtxListMax = 0x200;
        colCtx->subdivAmount.x = 0x10;
        colCtx->subdivAmount.y = 4;
        goto block_11;
    }
    if (BgCheck_GetSpecialSceneMaxMemory((s32) globalCtx->sceneNum, &sp40) != 0) {
        colCtx->memSize = sp40;
    } else {
        colCtx->memSize = 0x23000;
    }
    colCtx->dyna.polyNodesMax = 0x3E8;
    colCtx->dyna.polyListMax = 0x220;
    colCtx->dyna.vtxListMax = 0x200;
    BgCheck_GetSpecialSceneMaxObjects(globalCtx, (u32 *) &colCtx->dyna.polyNodesMax, (u32 *) &colCtx->dyna.polyListMax, (u32 *) &colCtx->dyna.vtxListMax);
    phi_v1 = bgSpecialSceneMeshSubdivisions;
    phi_a0 = 0;
    do {
        if (globalCtx->sceneNum == phi_v1->sceneNumber) {
            colCtx->subdivAmount.x = (s32) phi_v1->xSubdivisions;
            colCtx->subdivAmount.y = (s32) phi_v1->ySubdivisions;
            colCtx->subdivAmount.z = (s32) phi_v1->zSubdivisions;
            phi_a0 = 1;
            phi_s1_2 = phi_v1->unk8;
        }
        temp_v1 = phi_v1 + 0xC;
        phi_v1 = temp_v1;
        phi_s1 = phi_s1_2;
        phi_s1 = phi_s1_2;
    } while (temp_v1 != bgSpecialSceneMaxObjects);
    if (phi_a0 == 0) {
        colCtx->subdivAmount.x = 0x10;
        colCtx->subdivAmount.y = 4;
block_11:
        colCtx->subdivAmount.z = 0x10;
    }
    temp_v0 = THA_AllocEndAlign(&globalCtx->state.heap, colCtx->subdivAmount.x * 6 * colCtx->subdivAmount.y * colCtx->subdivAmount.z, -2U);
    colCtx->lookupTbl = temp_v0;
    if (temp_v0 == 0) {
        Fault_AddHungupAndCrash("../z_bgcheck.c", 0xF73U);
    }
    temp_v0_2 = colCtx->colHeader;
    colCtx->minBounds.x = (f32) temp_v0_2->minBounds.x;
    colCtx->minBounds.y = (f32) temp_v0_2->minBounds.y;
    colCtx->minBounds.z = (f32) temp_v0_2->minBounds.z;
    colCtx->maxBounds.x = (f32) temp_v0_2->maxBounds.x;
    colCtx->maxBounds.y = (f32) temp_v0_2->maxBounds.y;
    colCtx->maxBounds.z = (f32) temp_v0_2->maxBounds.z;
    BgCheck_CalcSubdivisionSize(colCtx->minBounds.x, colCtx->subdivAmount.x, (f32 *) &colCtx->maxBounds, (f32 *) &colCtx->subdivLength, (f32 *) &colCtx->subdivLengthInv);
    BgCheck_CalcSubdivisionSize(colCtx->minBounds.y, colCtx->subdivAmount.y, &colCtx->maxBounds.y, &colCtx->subdivLength.y, &colCtx->subdivLengthInv.y);
    BgCheck_CalcSubdivisionSize(colCtx->minBounds.z, colCtx->subdivAmount.z, &colCtx->maxBounds.z, &colCtx->subdivLength.z, &colCtx->subdivLengthInv.z);
    temp_v1_2 = (colCtx->subdivAmount.x * 6 * colCtx->subdivAmount.y * colCtx->subdivAmount.z) + colCtx->colHeader->numPolygons + (colCtx->dyna.polyNodesMax * 4) + (colCtx->dyna.polyListMax * 0x10) + (colCtx->dyna.vtxListMax * 6);
    temp_v1_3 = temp_v1_2 + 0x1470;
    if (phi_s1 > 0) {
        phi_a2 = phi_s1;
    } else {
        if ((u32) colCtx->memSize < temp_v1_3) {
            sp50 = temp_v1_3;
            Fault_AddHungupAndCrash("../z_bgcheck.c", 0xFABU);
        }
        phi_a2 = (s32) ((u32) (colCtx->memSize - (temp_v1_2 + 0x1470)) >> 2);
    }
    temp_s1 = &colCtx->polyNodes;
    sp54 = phi_a2;
    BgCheck_ScenePolygonListsInit(temp_s1);
    BgCheck_ScenePolygonListsAlloc(globalCtx, temp_s1, phi_a2, (u32) colCtx->colHeader->numPolygons);
    BgCheck_SplitScenePolygonsIntoSubdivisions(colCtx, globalCtx, colCtx->lookupTbl);
    temp_s1_2 = &colCtx->dyna;
    BgCheck_DynaInit(globalCtx, temp_s1_2);
    BgCheck_DynaAlloc(globalCtx, temp_s1_2);
}

void func_800C3C00(CollisionContext *colCtx, u32 param_2) {
    colCtx->unk146C |= param_2;
}

void func_800C3C14(CollisionContext *colCtx, u32 param_2) {
    colCtx->unk146C &= ~param_2;
}

CollisionHeader *BgCheck_GetActorMeshHeader(CollisionContext *colCtx, s32 index) {
    if (index == 0x32) {
        return colCtx->colHeader;
    }
    if ((index < 0) || (index >= 0x33)) {
        return NULL;
    }
    if ((colCtx->dyna.bgActorFlags[index] & 1) == 0) {
        return NULL;
    }
    return colCtx->dyna.bgActors[index].colHeader;
}

s32 func_800C3C94(CollisionContext *arg0, ? *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;

    temp_f0 = arg1->unk0;
    if ((temp_f0 < (arg0->minBounds.x - 50.0f)) || ((arg0->maxBounds.x + 50.0f) < temp_f0) || (temp_f0_2 = arg1->unk4, (temp_f0_2 < (arg0->minBounds.y - 50.0f))) || ((arg0->maxBounds.y + 50.0f) < temp_f0_2) || (temp_f0_3 = arg1->unk8, (temp_f0_3 < (arg0->minBounds.z - 50.0f))) || ((arg0->maxBounds.z + 50.0f) < temp_f0_3)) {
        return 0;
    }
    return 1;
}

f32 func_800C3D50(s32 arg0, CollisionContext *colCtx, s32 arg2, CollisionPoly **arg3, s32 *arg4, Vec3f *pos, Actor *actor, s32 arg7, f32 arg8, s32 arg9) {
    f32 spA4;
    ? spA0;
    f32 sp90;
    s32 sp8C;
    Actor *sp88;
    s32 sp84;
    s32 *sp80;
    Vec3f *sp7C;
    f32 sp78;
    CollisionPoly **sp74;
    s16 sp70;
    CollisionContext *sp6C;
    s32 sp68;
    CollisionPoly **temp_v0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f22;
    s16 temp_s4;
    s32 *temp_a0;
    f32 phi_f22;
    f32 phi_f22_2;
    f32 phi_f22_3;
    f32 phi_f22_4;

    temp_s4 = arg2 & 0xFFFF;
    *arg4 = 0x32;
    *arg3 = NULL;
    spA0.unk0 = (f32) pos->x;
    spA0.unk4 = (f32) pos->y;
    spA0.unk8 = (f32) pos->z;
    phi_f22_4 = (bitwise f32) (CollisionContext *)0xC6FA0000;
loop_1:
    phi_f22 = phi_f22_4;
    if (!(spA4 < colCtx->minBounds.y)) {
        temp_v0 = func_800C2514(colCtx, colCtx->lookupTbl, &spA0);
        if (temp_v0 == 0) {
            spA4 -= colCtx->subdivLength.y;
            goto loop_1;
        }
        temp_f0 = func_800C10FC(temp_v0, colCtx, temp_s4 & 0xFFFF, arg3, (bitwise f32) pos, arg7, (bitwise s32) arg8, (CollisionContext *)0xC6FA0000, (s32) actor);
        temp_f22 = temp_f0;
        phi_f22 = temp_f22;
        phi_f22_4 = temp_f22;
        if (!((bitwise f32) (CollisionContext *)0xC6FA0000 < temp_f0)) {
            spA4 -= colCtx->subdivLength.y;
            goto loop_1;
        }
    }
    temp_a0 = &sp68;
    phi_f22_2 = phi_f22;
    if ((arg9 & 1) == 0) {
        sp68 = arg0;
        sp6C = colCtx;
        sp70 = temp_s4;
        sp74 = arg3;
        sp78 = phi_f22;
        sp7C = pos;
        sp84 = 0x32;
        sp88 = actor;
        sp8C = arg7;
        sp90 = arg8;
        sp80 = arg4;
        temp_f0_2 = func_800C7974(temp_a0);
        if (phi_f22 < temp_f0_2) {
            phi_f22_2 = temp_f0_2;
        }
    }
    phi_f22_3 = phi_f22_2;
    if ((phi_f22_2 != (bitwise f32) (CollisionContext *)0xC6FA0000) && (func_800C9B68(colCtx, *arg3, *arg4) != 0)) {
        phi_f22_3 = phi_f22_2 - 1.0f;
    }
    return phi_f22_3;
}

void func_800C3F40(CollisionContext *arg0, CollisionPoly **arg1, Vec3f *arg2) {
    s32 sp34;

    func_800C3D50(0, arg0, 1, arg1, &sp34, arg2, NULL, 0x1C, 1.0f, 0);
}

void func_800C3FA0(CollisionContext *arg0, CollisionPoly **arg1, Vec3f *arg2) {
    s32 sp34;

    func_800C3D50(0, arg0, 2, arg1, &sp34, arg2, NULL, 0x1C, 1.0f, 0);
}

f32 func_800C4000(GlobalContext *globalCtx, CollisionContext *colCtx, s32 *arg2, Vec3f *arg3) {
    s32 sp34;

    return (bitwise f32) (bitwise s32) func_800C3D50((s32) globalCtx, colCtx, 2, (CollisionPoly **) arg2, &sp34, arg3, NULL, 0x1C, 1.0f, 0);
}

void func_800C4058(s32 arg0, CollisionContext *arg1, CollisionPoly **arg2, Vec3f *arg3) {
    s32 sp34;

    func_800C3D50(arg0, arg1, 2, arg2, &sp34, arg3, NULL, 0x1C, 1.0f, 1);
}

void func_800C40B4(CollisionContext *arg0, CollisionPoly **arg1, s32 *arg2, Vec3f *arg3) {
    func_800C3D50(0, arg0, 2, arg1, arg2, arg3, NULL, 0x1C, 1.0f, 0);
}

f32 func_800C411C(CollisionContext *colCtx, CollisionPoly **arg1, s32 *arg2, Actor *actor, Vec3f *pos) {
    return (bitwise f32) (bitwise s32) func_800C3D50(0, colCtx, 2, arg1, arg2, pos, actor, 0x1C, 1.0f, 0);
}

void func_800C4188(s32 arg0, CollisionContext *arg1, CollisionPoly **arg2, s32 *arg3, Actor *arg4, Vec3f *arg5) {
    func_800C3D50(arg0, arg1, 2, arg2, arg3, arg5, arg4, 0x1C, 1.0f, 0);
}

void func_800C41E4(s32 arg0, CollisionContext *arg1, CollisionPoly **arg2, s32 *arg3, Actor *arg4, Vec3f *arg5) {
    func_800C3D50(arg0, arg1, 2, arg2, arg3, arg5, arg4, 0x3C, 1.0f, 0);
}

void func_800C4240(CollisionContext *arg0, CollisionPoly **arg1, s32 *arg2, Actor *arg3, Vec3f *arg4, f32 arg5) {
    func_800C3D50(0, arg0, 2, arg1, arg2, arg4, arg3, 0x1C, arg5, 0);
}

void func_800C42A8(CollisionContext *arg0, CollisionPoly **arg1, s32 *arg2, Actor *arg3, Vec3f *arg4) {
    func_800C3D50(0, arg0, 2, arg1, arg2, arg4, arg3, 6, 1.0f, 0);
}

f32 func_800C4314(CollisionContext *arg0, void *arg1, Vec3f *arg2) {
    CollisionPoly *sp3C;
    s32 sp34;

    if (sp3C != 0) {
        arg1->unk0 = (unaligned s32) sp3C->unk0;
        arg1->unk4 = (unaligned s32) sp3C->unk4;
        arg1->unk8 = (unaligned s32) sp3C->unk8;
        arg1->unkC = (unaligned s32) sp3C->unkC;
    }
    return func_800C3D50(0, arg0, 0, &sp3C, &sp34, arg2, NULL, 0x1C, 1.0f, 0);
}

f32 func_800C43CC(CollisionContext *arg0, void *arg1, s32 *arg2, Vec3f *arg3) {
    CollisionPoly *sp34;

    if (sp34 != 0) {
        arg1->unk0 = (unaligned s32) sp34->unk0;
        arg1->unk4 = (unaligned s32) sp34->unk4;
        arg1->unk8 = (unaligned s32) sp34->unk8;
        arg1->unkC = (unaligned s32) sp34->unkC;
    }
    return func_800C3D50(0, arg0, 0, &sp34, arg2, arg3, NULL, 0x1C, 1.0f, 0);
}

void func_800C4488(CollisionContext *arg0, CollisionPoly **arg1, s32 *arg2, Vec3f *arg3) {
    func_800C3D50(0, arg0, 1, arg1, arg2, arg3, NULL, 6, 1.0f, 0);
}

void func_800C44F0(CollisionContext *arg0, CollisionPoly **arg1, s32 *arg2, Actor *arg3, Vec3f *arg4) {
    func_800C3D50(0, arg0, 2, arg1, arg2, arg4, arg3, 2, 1.0f, 0);
}

void func_800C455C(CollisionContext *arg0, CollisionPoly **arg1, s32 *arg2, Vec3f *arg3) {
    func_800C3D50(0, arg0, 2, arg1, arg2, arg3, NULL, 6, 1.0f, 0);
}

s32 func_800C45C4(CollisionContext *colCtx, u32 arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4, f32 arg5, s32 *arg6, s32 *arg7, DynaPolyActor *arg8, f32 arg9, u8 arg10) {
    StaticLookup *spDC;
    s32 spD4;
    void *spD0;
    f32 spBC;
    ? spB8;
    s32 spB4;
    f32 spA8;
    s32 spA4;
    f32 sp8C;
    ? sp88;
    f32 sp80;
    ? sp7C;
    f32 sp58;
    f32 sp54;
    f32 *sp40;
    f32 *temp_a3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v1_4;

    *arg7 = 0x32;
    *arg6 = 0;
    spDC = colCtx->lookupTbl;
    arg2->x = arg3->x;
    arg2->y = arg3->y;
    arg2->z = arg3->z;
    temp_f0 = arg3->x - arg4->x;
    temp_f12 = arg3->y - arg4->y;
    temp_f2 = arg3->z - arg4->z;
    phi_v1 = 0;
    if (((temp_f0 != 0.0f) || (temp_f2 != 0.0f)) && ((arg10 & 1) == 0)) {
        if ((arg9 + temp_f12) < 5.0f) {
            temp_v0 = func_800C4FD4(temp_f12, arg9, colCtx, (u16) arg1, NULL, arg4, arg3, &spA8, &spD0, &spA4, arg8, 1.0f, 0x1B);
            temp_v1 = temp_v0;
            phi_v1 = temp_v1;
            if (temp_v0 != 0) {
                temp_f12_2 = (f32) spD0->unkA * 0.00003051851f;
                if (temp_f12_2 > 0.5f) {
                    arg2->x = spA8;
                    if (arg9 > 1.0f) {
                        arg2->y = spAC - 1.0f;
                    } else {
                        arg2->y = spAC - arg9;
                    }
                    arg2->z = spB0;
                    if (arg8 != 0) {
                        arg8->actor.bgCheckFlags |= 0x1000;
                    }
                } else {
                    arg2->x = (arg5 * ((f32) spD0->unk8 * 0.00003051851f)) + spA8;
                    arg2->y = (arg5 * temp_f12_2) + spAC;
                    arg2->z = (arg5 * ((f32) spD0->unkC * 0.00003051851f)) + spB0;
                }
                *arg6 = (s32) spD0;
                *arg7 = spA4;
            }
        } else {
            phi_v0 = 0x19;
            if ((arg5 * arg5) < ((temp_f0 * temp_f0) + (temp_f2 * temp_f2))) {
                phi_v0 = 0x1B;
            }
            sp88.unk0 = (f32) arg3->x;
            sp88.unk4 = (f32) arg3->y;
            sp88.unk8 = (f32) arg3->z;
            sp8C += arg9;
            sp7C.unk0 = (f32) arg4->x;
            sp7C.unk4 = (f32) arg4->y;
            sp7C.unk8 = (f32) arg4->z;
            sp80 = sp8C;
            temp_v0_2 = func_800C4FD4(temp_f12, arg9, colCtx, (u16) arg1, NULL, (Vec3f *) &sp7C, (Vec3f *) &sp88, &spA8, &spD0, &spA4, arg8, 1.0f, phi_v0);
            phi_v1 = temp_v0_2;
            if (temp_v0_2 != 0) {
                temp_f2_2 = (f32) spD0->unk8 * 0.00003051851f;
                temp_f12_3 = (f32) spD0->unkC * 0.00003051851f;
                temp_f16 = sqrtf((temp_f2_2 * temp_f2_2) + (temp_f12_3 * temp_f12_3));
                if (!(fabsf(temp_f16) < 0.008f)) {
                    temp_f0_2 = arg5 * (1.0f / temp_f16);
                    arg2->x = (temp_f0_2 * temp_f2_2) + spA8;
                    arg2->z = (temp_f0_2 * temp_f12_3) + spB0;
                    *arg6 = (s32) spD0;
                    *arg7 = spA4;
                    phi_v1 = 1;
                    if ((((f32) spD0->unkA * 0.00003051851f) > 0.5f) && (arg8 != 0)) {
                        arg8->actor.bgCheckFlags |= 0x1000;
                    }
                }
            }
        }
    }
    temp_a3 = &arg2->z;
    spB8.unk0 = (f32) arg2->x;
    spB8.unk4 = (f32) arg2->y;
    spB8.unk8 = (f32) arg2->z;
    spB4 = 0;
    spBC += arg9;
    sp40 = temp_a3;
    spD4 = phi_v1;
    phi_v1_2 = phi_v1;
    if (func_800C8580(colCtx, (u16) arg1, arg2, temp_a3, &spB8, arg5, arg6, arg7, arg8) != 0) {
        spB4 = 1;
        spB8.unk0 = (f32) arg2->x;
        spB8.unk4 = (f32) arg2->y;
        spB8.unk8 = (f32) arg2->z;
        spBC += arg9;
        phi_v1_2 = 1;
    }
    spD4 = phi_v1_2;
    phi_v1_3 = phi_v1_2;
    if (func_800C3C94(colCtx, (? *) arg3) != 0) {
        spD4 = phi_v1_2;
        phi_v1_3 = phi_v1_2;
        if (func_800C12A4(func_800C2460(colCtx, spDC, (? *) arg2), colCtx, (u16) arg1, (f32 *) arg2, sp40, &spB8, arg5, arg6, arg8) != 0) {
            *arg7 = 0x32;
            phi_v1_3 = 1;
        }
    }
    phi_v1_4 = phi_v1_3;
    if ((spB4 != 0) || (*arg7 != 0x32)) {
        spD4 = phi_v1_3;
        phi_v1_4 = phi_v1_3;
        if (func_800C4FD4((bitwise f32) colCtx, (bitwise f32) (u16) arg1, NULL, (u16) arg4, arg2, (Vec3f *) &sp58, (Vec3f *) &spD0, &sp54, (void **) arg8, (s32 *)0x3F800000, (DynaPolyActor *)9) != 0) {
            temp_f2_3 = (f32) spD0->unk8 * 0.00003051851f;
            temp_f12_4 = (f32) spD0->unkC * 0.00003051851f;
            temp_f14 = sqrtf((temp_f2_3 * temp_f2_3) + (temp_f12_4 * temp_f12_4));
            if (!(fabsf(temp_f14) < 0.008f)) {
                temp_f0_3 = arg5 * (1.0f / temp_f14);
                arg2->x = (temp_f0_3 * temp_f2_3) + sp58;
                arg2->z = (temp_f0_3 * temp_f12_4) + sp60;
                *arg6 = (s32) spD0;
                *arg7 = (bitwise s32) sp54;
                phi_v1_4 = 1;
            }
        }
    }
    return phi_v1_4;
}

void func_800C4C74(CollisionContext *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, f32 arg4, s32 *arg5, f32 arg6) {
    s32 sp3C;

    func_800C45C4(arg0, 2U, arg1, arg2, arg3, arg4, arg5, &sp3C, NULL, arg6, (u8) 0);
}

void func_800C4CD8(CollisionContext *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, f32 arg4, s32 *arg5, s32 *arg6, f32 arg7) {
    func_800C45C4(arg0, 2U, arg1, arg2, arg3, arg4, arg5, arg6, NULL, arg7, (u8) 0);
}

void func_800C4D3C(CollisionContext *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, f32 arg4, s32 *arg5, s32 *arg6, DynaPolyActor *arg7, f32 arg8) {
    func_800C45C4(arg0, 2U, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, (u8) 0);
}

void func_800C4DA4(CollisionContext *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, f32 arg4, s32 *arg5, s32 *arg6, DynaPolyActor *arg7, f32 arg8) {
    func_800C45C4(arg0, 2U, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, (u8) 1);
}

s32 func_800C4E10(CollisionContext *arg0, u16 arg1, f32 *arg2, ? *arg3, f32 arg4, CollisionPoly **arg5, s32 *arg6, void *arg7) {
    StaticLookup *sp54;
    s32 sp4C;
    f32 sp44;
    ? sp40;
    f32 sp3C;
    f32 *temp_a2;
    s32 temp_v0;
    s32 phi_v1;

    *arg6 = 0x32;
    *arg2 = arg3->unk4;
    sp54 = arg0->lookupTbl;
    if (func_800C3C94(arg0, arg3) == 0) {
        return 0;
    }
    temp_v0 = func_800C1B68(func_800C2460(arg0, sp54, arg3), arg1, arg0, arg2, arg3, arg4, arg5, arg7);
    sp40.unk0 = (s32) arg3->unk0;
    temp_a2 = &sp3C;
    sp40.unk4 = (f32) arg3->unk4;
    sp40.unk8 = (s32) arg3->unk8;
    sp44 = *arg2;
    sp4C = temp_v0;
    sp3C = *arg2;
    phi_v1 = sp4C;
    if (func_800C8A60(arg0, arg1, temp_a2, &sp40, arg4, arg5, arg6, arg7) != 0) {
        *arg2 = sp3C;
        phi_v1 = 1;
    }
    return phi_v1;
}

void func_800C4F38(f32 *arg1, ? *arg2, CollisionContext *arg3) {
    CollisionPoly *sp2C;
    s32 sp28;

    func_800C4E10(arg3, 0U, arg1, arg2, (bitwise f32) arg3, &sp2C, &sp28, NULL);
}

void func_800C4F84(f32 *arg1, ? *arg2, CollisionContext *arg3, CollisionPoly **arg4, s32 *arg5, void *arg6) {
    func_800C4E10(arg3, 2U, arg1, arg2, (bitwise f32) arg3, arg4, arg5, arg6);
}

s32 func_800C4FD4(CollisionContext *arg0, u16 arg1, s32 arg2, ? *arg3, Vec3f *arg4, Vec3f *arg5, Vec3f *arg6, f32 *arg7, void **arg8, s32 *arg9, s32 argA) {
    StaticLookup *sp100;
    s32 spF4;
    s32 spE8;
    s32 spE4;
    ? spD4;
    void **spD0;
    s32 spCC;
    s32 *spC8;
    f32 spC4;
    Vec3f *spC0;
    Vec3f *spBC;
    ? *spB8;
    ? *spB4;
    s16 spB2;
    u16 spB0;
    CollisionContext *spAC;
    u16 *spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    s32 sp80;
    s32 sp7C;
    s32 sp68;
    StaticLookup *temp_s0;
    f32 *temp_s3;
    f32 *temp_s4;
    f32 temp_f10;
    f32 temp_f18;
    f32 temp_f6;
    s32 *temp_v0_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_lo;
    s32 temp_s1;
    s32 temp_s6;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_4;
    u16 **temp_a0;
    u16 **temp_a0_2;
    s32 *phi_v1;
    s32 *phi_v0;
    s32 phi_v1_2;
    StaticLookup *phi_a3;
    s32 phi_t0;
    s32 phi_v0_2;
    s32 phi_a1;
    s32 phi_a2;
    u16 *phi_s0;
    s32 phi_s1;
    s32 phi_a2_2;
    s32 phi_v1_3;
    s32 phi_t0_2;
    s32 phi_v0_3;
    s32 phi_s6;
    StaticLookup *phi_a3_2;
    s32 phi_a1_2;
    s32 phi_a0;
    s32 phi_a0_2;
    s32 phi_s6_2;
    s32 phi_s6_3;
    s32 phi_s6_4;
    s32 phi_s6_5;
    s32 phi_s6_6;

    temp_s0 = arg0->lookupTbl;
    spD4.unk0 = (s32) arg4->x;
    spD4.unk4 = (s32) arg4->y;
    spD4.unk8 = (s32) arg4->z;
    *arg7 = 7e-44.0f;
    func_800C9640(arg0 + 0x44, arg0->colHeader->unk14);
    func_800C25E0(arg0, arg3, &spF4);
    func_800C25E0(arg0, &spD4, &spE8);
    arg5->x = arg4->x;
    arg5->y = arg4->y;
    arg5->z = arg4->z;
    spC4 = 1e38.0f;
    arg6->x = 0.0f;
    spAC = arg0;
    spB2 = arg2 & 0xFFFF;
    spB4 = arg3;
    spB8 = &spD4;
    spC0 = arg6;
    spB0 = arg1;
    spBC = arg5;
    spC8 = arg9;
    spCC = argA;
    spD0 = arg8;
    phi_v1 = &spE8;
    phi_v0 = &spF4;
    phi_s6 = 0;
    phi_s6_3 = 0;
    if ((spF4 != spE8) || (spF8 != spEC) || (spFC != spF0)) {
        do {
            temp_a1 = *phi_v1;
            temp_a2 = *phi_v0;
            if (temp_a1 < temp_a2) {
                *phi_v1 = temp_a2;
                *phi_v0 = temp_a1;
            }
            temp_v0_2 = phi_v0 + 4;
            phi_v1 += 4;
            phi_v0 = temp_v0_2;
        } while ((u32) temp_v0_2 < (u32) &sp100);
        temp_lo = arg0->subdivAmount.x * arg0->subdivAmount.y;
        temp_v0_3 = spF0 + 1;
        temp_s4 = &sp8C;
        temp_s3 = &sp98;
        temp_f6 = ((f32) spFC * arg0->subdivLength.z) + arg0->minBounds.z;
        spA0 = temp_f6;
        sp94 = arg0->subdivLength.z + temp_f6;
        phi_v1_2 = spEC + 1;
        phi_a3 = &temp_s0[spFC * temp_lo];
        phi_t0 = spFC;
        phi_v0_3 = temp_v0_3;
        if (spFC < temp_v0_3) {
            sp68 = temp_lo * 6;
            do {
                temp_f10 = ((f32) spF8 * arg0->subdivLength.y) + arg0->minBounds.y;
                sp9C = temp_f10;
                sp90 = arg0->subdivLength.y + temp_f10;
                phi_a1 = (spF8 * arg0->subdivAmount.x * 6) + phi_a3;
                phi_a2 = spF8;
                phi_t0_2 = phi_t0;
                phi_a3_2 = phi_a3;
                phi_a0 = 6;
                phi_a0_2 = 6;
                phi_v1_3 = phi_v1_2;
                phi_s6_2 = phi_s6_3;
                phi_s6_5 = phi_s6_3;
                if (spF8 < phi_v1_2) {
                    sp100 = phi_a3;
                    spE4 = phi_t0;
                    phi_v0_2 = spE8 + 1;
                    do {
                        temp_f18 = ((f32) spF4 * arg0->subdivLength.x) + arg0->minBounds.x;
                        sp98 = temp_f18;
                        sp8C = arg0->subdivLength.x + temp_f18;
                        phi_s0 = (spF4 * phi_a0_2) + phi_a1;
                        phi_s1 = spF4;
                        phi_a2_2 = phi_a2;
                        phi_a1_2 = phi_a1;
                        phi_a0 = phi_a0_2;
                        phi_s6_4 = phi_s6_5;
                        phi_s6_6 = phi_s6_5;
                        if (spF4 < phi_v0_2) {
                            sp7C = phi_a1;
                            sp80 = phi_a2;
                            do {
                                temp_a0_2 = &spA4;
                                if (func_8017AD38((Vec3f *) temp_s3, (Vec3f *) temp_s4, arg3, &spD4) != 0) {
                                    spA4 = phi_s0;
                                    if (func_800C2008(temp_a0_2) != 0) {
                                        phi_s6_6 = 1;
                                    }
                                }
                                temp_s1 = phi_s1 + 1;
                                temp_v0_4 = spE8 + 1;
                                sp98 += arg0->subdivLength.x;
                                sp8C += arg0->subdivLength.x;
                                phi_s0 += 6;
                                phi_s1 = temp_s1;
                                phi_v0_2 = temp_v0_4;
                                phi_s6_4 = phi_s6_6;
                            } while (temp_s1 < temp_v0_4);
                            phi_a2_2 = sp80;
                            phi_v1_3 = spEC + 1;
                            phi_a1_2 = sp7C;
                        }
                        temp_a2_2 = phi_a2_2 + 1;
                        sp9C += arg0->subdivLength.y;
                        sp90 += arg0->subdivLength.y;
                        phi_a1 = phi_a1_2 + (arg0->subdivAmount.x * phi_a0);
                        phi_a2 = temp_a2_2;
                        phi_v1_2 = phi_v1_3;
                        phi_a0_2 = phi_a0;
                        phi_s6_2 = phi_s6_4;
                        phi_s6_5 = phi_s6_4;
                    } while (temp_a2_2 < phi_v1_3);
                    phi_t0_2 = spE4;
                    phi_v0_3 = spF0 + 1;
                    phi_a3_2 = sp100;
                }
                temp_t0 = phi_t0_2 + 1;
                spA0 += arg0->subdivLength.z;
                sp94 += arg0->subdivLength.z;
                phi_a3 = phi_a3_2 + sp68;
                phi_t0 = temp_t0;
                phi_s6 = phi_s6_2;
                phi_s6_3 = phi_s6_2;
            } while (temp_t0 < phi_v0_3);
        }
        goto block_25;
    }
    if (func_800C3C94(arg0, arg3) == 0) {
        return 0;
    }
    temp_a0 = &spA4;
    spA4 = func_800C2460(arg0, temp_s0, arg3);
    temp_v0 = func_800C2008(temp_a0);
    temp_s6 = temp_v0;
    phi_s6 = temp_s6;
    if (temp_v0 != 0) {
        spC4 = Math3D_DistanceSquared(arg5, (Vec3f *) arg3);
    }
block_25:
    if (((argA & 0x10) != 0) && (func_800C8EEC(arg0, arg1, arg3, &spD4, arg5, arg6, &spC4, arg7, arg8, arg9, argA) != 0)) {
        phi_s6 = 1;
    }
    return phi_s6;
}

s32 func_800C5464(u32 arg0, u32 arg1, u32 arg2, u32 arg3, s32 arg4) {
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v1_4;
    s32 phi_v1_5;

    phi_v1_5 = 0;
    if (arg0 != 0) {
        phi_v1_5 = 1;
    }
    phi_v1_4 = phi_v1_5;
    if (arg1 != 0) {
        phi_v1_4 = phi_v1_5 | 2;
    }
    phi_v1_3 = phi_v1_4;
    if (arg2 != 0) {
        phi_v1_3 = phi_v1_4 | 4;
    }
    phi_v1_2 = phi_v1_3;
    if (arg3 != 0) {
        phi_v1_2 = phi_v1_3 | 8;
    }
    phi_v1 = phi_v1_2;
    if (arg4 != 0) {
        phi_v1 = phi_v1_2 | 0x10;
    }
    return phi_v1;
}

void func_800C54AC(s32 arg0, s32 arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4, u32 arg5, u32 arg6, u32 arg7, u32 arg8, f32 *arg9) {
    func_800C4FD4((bitwise f32) arg0, 1e-45.0f, NULL, (u16) arg1, arg2, arg3, arg4, arg9, NULL, (s32 *)0x3F800000, func_800C5464(arg5, arg6, arg7, arg8, 1));
}

void func_800C5538(s32 arg0, s32 arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4, u32 arg5, u32 arg6, u32 arg7, u32 arg8, f32 *arg9) {
    func_800C4FD4((bitwise f32) arg0, 0.0f, (CollisionContext *)1, (u16) arg1, arg2, arg3, arg4, arg9, NULL, (s32 *)0x3F800000, func_800C5464(arg5, arg6, arg7, arg8, 1));
}

s32 func_800C55C4(CollisionContext *colCtx, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, CollisionPoly **arg4, u32 arg5, u32 arg6, u32 arg7, u32 arg8, u32 *arg9) {
    return func_800C4FD4((bitwise f32) colCtx, 3e-45.0f, NULL, (u16) arg1, arg2, arg3, (Vec3f *) arg4, (f32 *) arg9, NULL, (s32 *)0x3F800000, func_800C5464(arg5, arg6, arg7, arg8, 1));
}

void func_800C5650(s32 arg0, s32 arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4, u32 arg5, u32 arg6, u32 arg7, u32 arg8, f32 *arg9, void **argA) {
    func_800C4FD4((bitwise f32) arg0, 3e-45.0f, NULL, (u16) arg1, arg2, arg3, arg4, arg9, argA, (s32 *)0x3F800000, func_800C5464(arg5, arg6, arg7, arg8, 1));
}

void func_800C56E0(s32 arg0, s32 arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4, u32 arg5, u32 arg6, u32 arg7, u32 arg8, f32 *arg9, void **argA, s32 *argB) {
    func_800C4FD4((bitwise f32) arg0, 3e-45.0f, NULL, (u16) arg1, arg2, arg3, arg4, arg9, argA, argB, func_800C5464(arg5, arg6, arg7, arg8, 1));
}

s32 func_800C576C(CollisionContext *colCtx, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, CollisionPoly **arg4, u32 arg5, u32 arg6, u32 arg7, u32 arg8, u32 *arg9) {
    return func_800C4FD4((bitwise f32) colCtx, 6e-45.0f, NULL, (u16) arg1, arg2, arg3, (Vec3f *) arg4, (f32 *) arg9, NULL, (s32 *)0x3F800000, func_800C5464(arg5, arg6, arg7, arg8, 1));
}

void func_800C57F8(s32 arg4, Vec3f *arg5) {
    func_800C583C(arg4, 1, (Vec3f *)1, (Vec3f *)1, arg5);
}

void func_800C583C(s32 arg0, s32 arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4, u32 arg5, u32 arg6, u32 arg7, u32 arg8) {
    f32 sp3C;

    func_800C4FD4((bitwise f32) arg0, 0.0f, NULL, (u16) arg1, arg2, arg3, arg4, &sp3C, NULL, (s32 *)0x3F800000, func_800C5464(arg5, arg6, arg7, arg8, 1));
}

void func_800C58C8(s32 arg0, s32 arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4, u32 arg5, u32 arg6, u32 arg7, u32 arg8, f32 *arg9) {
    func_800C4FD4((bitwise f32) arg0, 0.0f, NULL, (u16) arg1, arg2, arg3, arg4, arg9, NULL, (s32 *)0x3F800000, func_800C5464(arg5, arg6, arg7, arg8, 1));
}

s32 func_800C5954(Vec3f *arg0, u16 arg1, f32 arg2, s32 *arg3, StaticLookup *arg4, Vec3f *arg5, CollisionPoly **arg6, u16 arg7) {
    CollisionPoly **temp_v0;

    *arg3 = 0x32;
    temp_v0 = func_800C2514(arg0->unk40, arg4);
    if (temp_v0 == 0) {
        goto block_5;
    }
    if ((func_800C2310(temp_v0, arg1, arg0, (Vec3f *) arg4, arg5, arg2, (u16) (s32) arg7, arg6) != 0) || (func_800C9380(arg0, arg1, arg2, arg3, arg4, arg5, arg6, (s32) arg7) != 0)) {
        return 1;
    }
block_5:
    return 0;
}

s32 func_800C5A20(CollisionContext *colCtx, Vec3f *arg1, f32 arg2) {
    ? sp2C;
    s32 sp28;

    return func_800C5954((bitwise Vec3f *) arg2, 0U, (bitwise f32) &sp2C, &sp28, (StaticLookup *) arg1, (bitwise Vec3f *) arg2, NULL, (u16) 0);
}

void func_800C5A64(StaticLookup *arg1, Vec3f *arg2) {
    ? sp2C;
    s32 sp28;

    func_800C5954(arg2, 0U, (bitwise f32) &sp2C, &sp28, arg1, arg2, NULL, (u16) 5);
}

void BgCheck_ScenePolygonListsInit(SSNodeList *arg0) {
    arg0->max = 0;
    arg0->count = 0;
    arg0->tbl = NULL;
    arg0->polyCheckTbl = NULL;
}

void BgCheck_ScenePolygonListsAlloc(GlobalContext *globalCtx, SSNodeList *lists, s32 numNodes, u32 numPolygons) {
    TwoHeadArena *sp1C;
    TwoHeadArena *temp_a0;
    u8 *temp_v0;

    lists->max = (u16) numNodes;
    lists->count = 0;
    temp_a0 = &globalCtx->state.heap;
    sp1C = temp_a0;
    lists->tbl = THA_AllocEndAlign(temp_a0, numNodes * 4, -2U);
    temp_v0 = THA_AllocEndAlign16(temp_a0, numPolygons);
    lists->polyCheckTbl = temp_v0;
    if (temp_v0 == 0) {
        sprintf(D_801ED950, "this->polygon_check == NULL(game_alloc() MemoryAllocationError.)\n");
        sprintf(D_801ED9A0, "short_slist_node_size = %d/polygon_num = %d\n", numNodes, numPolygons);
        Fault_AddHungupAndCrashImpl(D_801ED950, D_801ED9A0);
    }
}

s32 func_800C5B80(u16 *arg0) {
    s32 temp_at;
    s32 temp_t7;
    u16 temp_t8;
    u16 temp_v0;

    temp_v0 = arg0->unk2;
    temp_t8 = temp_v0 + 1;
    temp_t7 = temp_v0 * 4;
    temp_at = (temp_t8 & 0xFFFF) < (s32) arg0->unk0;
    arg0->unk2 = temp_t8;
    if (temp_at == 0) {
        return 0;
    }
    return arg0->unk4 + temp_t7;
}

u16 BgCheck_ScenePolygonListsReserveNode(SSNodeList *lists) {
    u16 temp_v0;

    temp_v0 = lists->count;
    lists->count = temp_v0 + 1;
    return temp_v0;
}

void BgCheck_ActorMeshParamsInit(ScaleRotPos *params) {
    params->scale.z = 1.0f;
    params->scale.y = 1.0f;
    params->scale.x = 1.0f;
    params->rot.x = 0;
    params->rot.y = 0;
    params->rot.z = 0;
    params->pos.z = 0.0f;
    params->pos.y = 0.0f;
    params->pos.x = 0.0f;
}

void BgCheck_SetActorMeshParams(ScaleRotPos *params, Vec3f *scale, Vec3s *rotation, Vec3f *position) {
    params->scale.x = scale->x;
    params->scale.y = scale->y;
    params->scale.z = scale->z;
    params->unkC = (unaligned s32) rotation->unk0;
    params->rot.z = (s16) (u16) rotation->z;
    params->pos.x = position->x;
    params->pos.y = position->y;
    params->pos.z = position->z;
}

s32 BgCheck_AreActorMeshParamsEqual(ScaleRotPos *arg0, ScaleRotPos *arg1) {
    if ((arg1->scale.x != arg0->scale.x) || (arg1->scale.y != arg0->scale.y) || (arg1->scale.z != arg0->scale.z) || (arg1->rot.x != arg0->rot.x) || (arg1->rot.y != arg0->rot.y) || (arg1->rot.z != arg0->rot.z) || (arg1->pos.x != arg0->pos.x) || (arg1->pos.y != arg0->pos.y) || (arg1->pos.z != arg0->pos.z)) {
        return 0;
    }
    return 1;
}

void BgCheck_ActorMeshPolyListsHeadsInit(DynaLookup *lists) {
    BgCheck_PolygonLinkedListResetHead((u16 *) &lists->ceiling);
    BgCheck_PolygonLinkedListResetHead((u16 *) &lists->wall);
    BgCheck_PolygonLinkedListResetHead((u16 *) &lists->floor);
}

void BgCheck_ActorMeshPolyListsInit(DynaLookup *lists) {
    lists->polyStartIndex = 0;
    BgCheck_ActorMeshPolyListsHeadsInit(lists);
}

void BgCheck_ActorMeshVerticesIndexInit(s16 *index) {
    *index = 0;
}

void BgCheck_ActorMeshWaterboxesIndexInit(s16 *index) {
    *index = 0;
}

void BgCheck_ActorMeshInit(GlobalContext *globalCtx, BgActor *mesh) {
    s16 temp_v0;

    mesh->actor = NULL;
    mesh->colHeader = NULL;
    BgCheck_ActorMeshParamsInit(&mesh->prevTransform);
    BgCheck_ActorMeshParamsInit(&mesh->curTransform);
    BgCheck_ActorMeshPolyListsInit(&mesh->dynaLookup);
    BgCheck_ActorMeshVerticesIndexInit((s16 *) &mesh->vtxStartIndex);
    BgCheck_ActorMeshWaterboxesIndexInit(&mesh->unk12);
    mesh->boundingSphere.center.z = 0;
    temp_v0 = mesh->boundingSphere.center.z;
    mesh->boundingSphere.radius = 0;
    mesh->boundingSphere.center.y = temp_v0;
    mesh->boundingSphere.center.x = temp_v0;
}

void BgCheck_ActorMeshInitFromActor(BgActor *actorMesh, DynaPolyActor *actor, CollisionHeader *header) {
    ActorShape *temp_v1;
    PosRot *temp_a3;
    Vec3f *temp_v0;

    actorMesh->actor = (Actor *) actor;
    actorMesh->colHeader = header;
    temp_v0 = &actor->actor.scale;
    temp_v1 = &actor->actor.shape;
    temp_a3 = &actor->actor.world;
    actorMesh->prevTransform.scale.x = temp_v0->x;
    actorMesh->prevTransform.scale.y = temp_v0->y;
    actorMesh->prevTransform.scale.z = temp_v0->z;
    actorMesh->unk20 = (unaligned s32) temp_v1->unk0;
    actorMesh->prevTransform.rot.x += -1;
    actorMesh->prevTransform.rot.z = (s16) (u16) temp_v1->rot.z;
    actorMesh->prevTransform.pos.x = temp_a3->pos.x;
    actorMesh->prevTransform.pos.y = temp_a3->pos.y;
    actorMesh->prevTransform.pos.z = temp_a3->pos.z;
    actorMesh->curTransform.scale.x = temp_v0->x;
    actorMesh->curTransform.scale.y = temp_v0->y;
    actorMesh->curTransform.scale.z = temp_v0->z;
    actorMesh->unk40 = (unaligned s32) temp_v1->unk0;
    actorMesh->curTransform.rot.z = (s16) (u16) temp_v1->rot.z;
    actorMesh->curTransform.pos.x = temp_a3->pos.x;
    actorMesh->curTransform.pos.y = temp_a3->pos.y;
    actorMesh->curTransform.pos.z = temp_a3->pos.z;
}

s32 BgCheck_HasActorMeshChanged(BgActor *mesh) {
    return BgCheck_AreActorMeshParamsEqual(&mesh->prevTransform, &mesh->curTransform);
}

void BgCheck_PolygonsInit(CollisionPoly **polygons) {
    *polygons = NULL;
}

void BgCheck_PolygonsAlloc(GlobalContext *globalCtx, CollisionPoly *polygons, u32 numPolygons) {
    *polygons = THA_AllocEndAlign(&globalCtx->state.heap, numPolygons * 0x10, -2U);
}

void BgCheck_VerticesInit(Vec3s **vertices) {
    *vertices = NULL;
}

void BgCheck_VerticesListAlloc(GlobalContext *globalCtx, Vec3s **vertices, u32 numVertices) {
    *vertices = THA_AllocEndAlign(&globalCtx->state.heap, numVertices * 6, -2U);
}

void BgCheck_WaterboxListInit(DynaSSWaterboxList *waterboxList) {
    waterboxList->unk0 = 0;
    waterboxList->boxes = NULL;
}

void BgCheck_WaterboxListAlloc(GlobalContext *globalCtx, DynaSSWaterboxList *waterboxList, u32 numWaterboxes) {
    waterboxList->boxes = THA_AllocEndAlign(&globalCtx->state.heap, numWaterboxes * 0x10, -2U);
}

void BgCheck_ActorMeshUpdateParams(GlobalContext *globalCtx, BgActor *mesh) {
    mesh->prevTransform.scale.x = mesh->curTransform.scale.x;
    mesh->prevTransform.scale.y = mesh->curTransform.scale.y;
    mesh->unk20 = (s32) mesh->unk40;
    mesh->prevTransform.scale.z = mesh->curTransform.scale.z;
    mesh->unk24 = (s32) mesh->unk44;
    mesh->prevTransform.pos.x = mesh->curTransform.pos.x;
    mesh->prevTransform.pos.z = mesh->curTransform.pos.z;
    mesh->prevTransform.pos.y = mesh->curTransform.pos.y;
}

s32 BgCheck_IsActorMeshIndexValid(s32 index) {
    if ((index < 0) || (index >= 0x32)) {
        return 0;
    }
    return 1;
}

void BgCheck_DynaInit(GlobalContext *globalCtx, DynaCollisionContext *param_2) {
    param_2->bitFlag = 1;
    BgCheck_PolygonsInit(&param_2->polyList);
    BgCheck_VerticesInit(&param_2->vtxList);
    BgCheck_WaterboxListInit(&param_2->waterboxes);
    BgCheck_PolygonLinkedListInit(globalCtx, &param_2->polyNodes);
}

void BgCheck_DynaAlloc(GlobalContext *globalCtx, DynaCollisionContext *dyna) {
    CollisionPoly **temp_s0_2;
    DynaCollisionContext *temp_s2;
    DynaSSNodeList *temp_s0_5;
    DynaSSWaterboxList *temp_s0_4;
    Vec3s **temp_s0_3;
    s32 temp_s0;
    BgActor *phi_s1;
    DynaCollisionContext *phi_s2;
    s32 phi_s0;

    phi_s1 = dyna->bgActors;
    phi_s2 = dyna;
    phi_s0 = 0;
    do {
        BgCheck_ActorMeshInit(globalCtx, phi_s1);
        temp_s0 = phi_s0 + 0x64;
        temp_s2 = phi_s2 + 2;
        temp_s2->unk138A = 0;
        phi_s1 += 0x64;
        phi_s2 = temp_s2;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x1388);
    temp_s0_2 = &dyna->polyList;
    BgCheck_PolygonsInit(temp_s0_2);
    BgCheck_PolygonsAlloc(globalCtx, (CollisionPoly *) temp_s0_2, (u32) dyna->polyListMax);
    temp_s0_3 = &dyna->vtxList;
    BgCheck_VerticesInit(temp_s0_3);
    BgCheck_VerticesListAlloc(globalCtx, temp_s0_3, (u32) dyna->vtxListMax);
    temp_s0_4 = &dyna->waterboxes;
    BgCheck_WaterboxListInit(temp_s0_4);
    BgCheck_WaterboxListAlloc(globalCtx, temp_s0_4, 0x1EU);
    temp_s0_5 = &dyna->polyNodes;
    BgCheck_PolygonLinkedListInit(globalCtx, temp_s0_5);
    BgCheck_PolygonLinkedListAlloc(globalCtx, temp_s0_5, (u32) dyna->polyNodesMax);
}

s32 BgCheck_AddActorMesh(GlobalContext *globalCtx, DynaCollisionContext *dyna, DynaPolyActor *actor, CollisionHeader *header) {
    s32 sp24;
    DynaCollisionContext *sp1C;
    DynaCollisionContext *temp_v1;
    s32 temp_t0;
    u16 temp_v0;
    DynaCollisionContext *phi_v1;
    s32 phi_t0;
    s32 phi_t1;
    DynaCollisionContext *phi_v1_2;
    s32 phi_t0_2;

    phi_v1 = dyna;
    phi_t0 = 0;
    phi_t1 = 0;
loop_1:
    temp_v0 = phi_v1->bgActorFlags[0];
    phi_v1_2 = phi_v1;
    phi_t0_2 = phi_t0;
    if ((temp_v0 & 1) == 0) {
        phi_v1->bgActorFlags[0] = temp_v0 | 1;
        phi_t1 = 1;
    } else {
        temp_t0 = phi_t0 + 1;
        temp_v1 = phi_v1 + 2;
        phi_v1 = temp_v1;
        phi_t0 = temp_t0;
        phi_v1_2 = temp_v1;
        phi_t0_2 = temp_t0;
        if (temp_t0 != 0x32) {
            goto loop_1;
        }
    }
    if (phi_t1 == 0) {
        return 0x32;
    }
    sp1C = phi_v1_2;
    sp24 = phi_t0_2;
    BgCheck_ActorMeshInitFromActor(&dyna->bgActors[phi_t0_2], actor, header);
    dyna->bitFlag |= 1;
    phi_v1_2->bgActorFlags[0] &= 0xFFFD;
    return sp24;
}

DynaPolyActor *BgCheck_GetActorOfMesh(CollisionContext *colCtx, s32 index) {
    u16 temp_v0;

    if ((BgCheck_IsActorMeshIndexValid(index) == 0) || (temp_v0 = colCtx->dyna.bgActorFlags[index], ((temp_v0 & 1) == 0)) || ((temp_v0 & 2) != 0)) {
        return NULL;
    }
    return (DynaPolyActor *) colCtx->dyna.bgActors[index].actor;
}

void func_800C62BC(GlobalContext *globalCtx, DynaCollisionContext *dyna, s32 index) {
    if (BgCheck_IsActorMeshIndexValid(index) != 0) {
        dyna->bgActorFlags[index] |= 4;
        dyna->bitFlag |= 1;
    }
}

void func_800C6314(GlobalContext *globalCtx, DynaCollisionContext *dyna, s32 index) {
    if (BgCheck_IsActorMeshIndexValid(index) != 0) {
        dyna->bgActorFlags[index] &= 0xFFFB;
        dyna->bitFlag |= 1;
    }
}

void func_800C636C(GlobalContext *globalCtx, DynaCollisionContext *dyna, s32 index) {
    if (BgCheck_IsActorMeshIndexValid(index) != 0) {
        dyna->bgActorFlags[index] |= 8;
        dyna->bitFlag |= 1;
    }
}

void func_800C63C4(GlobalContext *globalCtx, DynaCollisionContext *dyna, s32 index) {
    if (BgCheck_IsActorMeshIndexValid(index) != 0) {
        dyna->bgActorFlags[index] &= 0xFFF7;
        dyna->bitFlag |= 1;
    }
}

void func_800C641C(GlobalContext *globalCtx, DynaCollisionContext *dyna, s32 index) {
    if (BgCheck_IsActorMeshIndexValid(index) != 0) {
        dyna->bgActorFlags[index] |= 0x20;
        dyna->bitFlag |= 1;
    }
}

void func_800C6474(GlobalContext *globalCtx, DynaCollisionContext *dyna, s32 index) {
    if (BgCheck_IsActorMeshIndexValid(index) != 0) {
        dyna->bgActorFlags[index] &= 0xFFDF;
        dyna->bitFlag |= 1;
    }
}

void BgCheck_RemoveActorMesh(GlobalContext *globalCtx, DynaCollisionContext *dyna, s32 index) {
    DynaPolyActor *temp_v0;

    if (BgCheck_IsActorMeshIndexValid(index) != 0) {
        temp_v0 = BgCheck_GetActorOfMesh(&globalCtx->colCtx, index);
        if (temp_v0 != 0) {
            temp_v0->bgId = -1;
            dyna->bgActors[index].actor = NULL;
            dyna->bgActorFlags[index] |= 2;
        }
    }
}

void func_800C6554(s32 arg0, u8 *arg1) {
    *arg1 |= 1;
}

void BgCheck_CalcWaterboxDimensions(Vec3f *minPos, Vec3f *maxXPos, Vec3f *maxZPos, Vec3s *minPosOut, s16 *xLength, s16 *zLength) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 phi_f12;
    f32 phi_f0;
    f32 phi_f12_2;
    f32 phi_f0_2;

    minPosOut->x = (s16) (s32) minPos->x;
    minPosOut->y = (s16) (s32) minPos->y;
    minPosOut->z = (s16) (s32) minPos->z;
    temp_f0 = maxXPos->x;
    if (temp_f0 < (f32) minPosOut->x) {
        minPosOut->x = (s16) (s32) temp_f0;
    }
    temp_f0_2 = maxXPos->y;
    if (temp_f0_2 < (f32) minPosOut->y) {
        minPosOut->y = (s16) (s32) temp_f0_2;
    }
    temp_f0_3 = maxXPos->z;
    if (temp_f0_3 < (f32) minPosOut->z) {
        minPosOut->z = (s16) (s32) temp_f0_3;
    }
    temp_f0_4 = maxZPos->x;
    if (temp_f0_4 < (f32) minPosOut->x) {
        minPosOut->x = (s16) (s32) temp_f0_4;
    }
    temp_f0_5 = maxZPos->y;
    if (temp_f0_5 < (f32) minPosOut->y) {
        minPosOut->y = (s16) (s32) temp_f0_5;
    }
    temp_f0_6 = maxZPos->z;
    if (temp_f0_6 < (f32) minPosOut->z) {
        minPosOut->z = (s16) (s32) temp_f0_6;
    }
    *xLength = (s16) (s32) (minPos->x - (f32) minPosOut->x);
    temp_f0_7 = (f32) minPosOut->x;
    temp_f12 = (f32) *xLength;
    temp_f2 = maxXPos->x - temp_f0_7;
    phi_f12 = temp_f12;
    phi_f0 = temp_f0_7;
    if (temp_f12 < temp_f2) {
        *xLength = (s16) (s32) temp_f2;
        phi_f12 = (f32) *xLength;
        phi_f0 = (f32) minPosOut->x;
    }
    temp_f2_2 = maxZPos->x - phi_f0;
    if (phi_f12 < temp_f2_2) {
        *xLength = (s16) (s32) temp_f2_2;
    }
    *zLength = (s16) (s32) (minPos->z - (f32) minPosOut->z);
    temp_f0_8 = (f32) minPosOut->z;
    temp_f12_2 = (f32) *zLength;
    temp_f2_3 = maxXPos->z - temp_f0_8;
    phi_f12_2 = temp_f12_2;
    phi_f0_2 = temp_f0_8;
    if (temp_f12_2 < temp_f2_3) {
        *zLength = (s16) (s32) temp_f2_3;
        phi_f12_2 = (f32) *zLength;
        phi_f0_2 = (f32) minPosOut->z;
    }
    temp_f2_4 = maxZPos->z - phi_f0_2;
    if (phi_f12_2 < temp_f2_4) {
        *zLength = (s16) (s32) temp_f2_4;
    }
}

void BgCheck_AddActorMeshToLists(GlobalContext *globalCtx, DynaCollisionContext *dyna, s32 index, s32 *currVertices, s32 *currPolygons, s32 *currWaterboxes) {
    f32 sp174;
    ? sp170;
    f32 sp160;
    f32 sp15C;
    f32 sp158;
    f32 sp154;
    f32 sp14C;
    f32 sp148;
    f32 sp144;
    f32 sp140;
    f32 sp13C;
    f32 sp138;
    f32 sp134;
    f32 sp130;
    f32 sp12C;
    f32 sp128;
    f32 sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    s16 sp108;
    s16 sp106;
    s16 sp104;
    ? spF4;
    f32 spE8;
    s16 spCE;
    s16 spCC;
    s16 spCA;
    ? spB8;
    ? spAC;
    f32 spA0;
    ? sp94;
    f32 sp90;
    ? sp88;
    ? sp7C;
    Sphere16 *sp74;
    Actor *temp_v0;
    CollisionHeader *temp_s5;
    CollisionPoly *temp_s0_2;
    DynaSSNodeList *temp_s3;
    Sphere16 *temp_v0_4;
    Vec3s *temp_t0;
    Vec3s *temp_t1;
    Vec3s *temp_v0_6;
    Vec3s *temp_v1_3;
    WaterBox *temp_s0_3;
    f32 *temp_a0_2;
    f32 *temp_a0_4;
    f32 *temp_a1;
    f32 *temp_a2_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f16;
    f32 temp_f20;
    s16 *temp_a2;
    s16 *temp_a2_2;
    s16 *temp_a2_4;
    s16 *temp_a2_5;
    s16 *temp_a2_6;
    s16 *temp_s7;
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s3_2;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_v0_2;
    s32 temp_v0_5;
    u16 temp_a0_3;
    u16 temp_t4;
    u16 temp_v0_3;
    u16 temp_v0_7;
    u16 temp_v1_2;
    void *temp_t8;
    s32 phi_s1;
    s16 phi_s0;
    s32 phi_a0;
    s32 phi_a0_2;
    s32 phi_s0_2;
    s32 phi_s1_2;
    s32 phi_s0_3;
    f32 phi_f2;
    s32 phi_s1_3;
    f32 phi_f2_2;
    Sphere16 *phi_v0;
    s32 phi_s4;
    s32 phi_s1_4;
    s32 phi_s1_5;
    s32 phi_s3;
    f32 phi_f2_3;

    dyna->bgActors[index].dynaLookup.polyStartIndex = (u16) *currPolygons;
    temp_v0 = dyna->bgActors[index].actor;
    temp_s5 = dyna->bgActors[index].colHeader;
    dyna->bgActors[index].vtxStartIndex = (u16) *currVertices;
    dyna->bgActors[index].unk12 = (s16) *currWaterboxes;
    sp170.unk0 = (f32) temp_v0->world.pos.x;
    sp170.unk4 = (f32) temp_v0->world.pos.y;
    sp170.unk8 = (f32) temp_v0->world.pos.z;
    sp174 += temp_v0->shape.yOffset * temp_v0->scale.y;
    BgCheck_SetActorMeshParams(&dyna->bgActors[index].curTransform, &temp_v0->scale, (Vec3s *) &temp_v0->shape, (Vec3f *) &sp170);
    sp74 = dyna + (index * 2);
    if ((dyna->bgActorFlags[index] & 4) == 0) {
        if ((*currWaterboxes + temp_s5->numWaterBoxes) >= 0x1F) {
            sprintf(D_801EDAA8, "water_poly Error:[MoveBG OSUGI!!!]");
            sprintf(D_801EDAF8, "num = %d > %d\n", *currWaterboxes + temp_s5->numWaterBoxes, 0x1E);
            Fault_AddHungupAndCrashImpl(D_801EDAA8, D_801EDAF8);
        }
        if (dyna->polyListMax < (*currPolygons + temp_s5->numPolygons)) {
            sprintf(D_801EDAA8, "bg_poly Error:[MoveBG OSUGI!!!]");
            sprintf(D_801EDAF8, "num = %d > %d\n", *currPolygons + temp_s5->numPolygons, dyna->polyListMax);
            Fault_AddHungupAndCrashImpl(D_801EDAA8, D_801EDAF8);
        }
        if (dyna->vtxListMax < (*currVertices + temp_s5->numVertices)) {
            sprintf(D_801EDAA8, "bg_vert Error:[MoveBG OSUGI!!!]");
            sprintf(D_801EDAF8, "num = %d > %d\n", *currVertices + temp_s5->numVertices, dyna->vtxListMax);
            Fault_AddHungupAndCrashImpl(D_801EDAA8, D_801EDAF8);
        }
        if (((dyna->bitFlag & 1) == 0) && (BgCheck_HasActorMeshChanged(&dyna->bgActors[index]) != 0)) {
            temp_v0_2 = *currPolygons;
            temp_s7 = &sp104;
            temp_a0 = temp_v0_2 + temp_s5->numPolygons;
            phi_s1 = temp_v0_2 * 0x10;
            phi_s0 = (s16) temp_v0_2;
            phi_a0_2 = temp_a0;
            phi_a0 = temp_a0;
            if (temp_v0_2 < temp_a0) {
                do {
                    temp_v1 = (dyna->polyList + phi_s1)->unkA;
                    if ((s32) temp_v1 >= 0x4000) {
                        temp_a2 = &sp108;
                        if ((sp74->unk138C & 0x20) == 0) {
                            sp108 = phi_s0;
                            BgCheck_PolygonLinkedListNodeInsert(&dyna->polyNodes, (u16 *) &dyna->bgActors[index].dynaLookup.floor, temp_a2);
                            phi_a0 = *currPolygons + temp_s5->numPolygons;
                        }
                    } else if ((s32) temp_v1 < -0x6665) {
                        temp_a2_2 = &sp106;
                        if ((sp74->unk138C & 8) == 0) {
                            sp106 = phi_s0;
                            BgCheck_PolygonLinkedListNodeInsert(&dyna->polyNodes, (u16 *) &dyna->bgActors[index].dynaLookup.ceiling, temp_a2_2);
                            phi_a0 = *currPolygons + temp_s5->numPolygons;
                        }
                    } else {
                        sp104 = phi_s0;
                        BgCheck_PolygonLinkedListNodeInsert(&dyna->polyNodes, (u16 *) &dyna->bgActors[index].dynaLookup.wall, temp_s7);
                        phi_a0 = *currPolygons + temp_s5->numPolygons;
                    }
                    temp_s0 = phi_s0 + 1;
                    phi_s1 += 0x10;
                    phi_s0 = (s16) temp_s0;
                    phi_a0_2 = phi_a0;
                } while (temp_s0 < phi_a0);
            }
            *currPolygons = phi_a0_2;
            *currVertices += temp_s5->numVertices;
            *currWaterboxes += temp_s5->numWaterBoxes;
            return;
        }
        SkinMatrix_SetScaleRotateYRPTranslate(&D_801EDA40, dyna->bgActors[index].curTransform.scale.x, dyna->bgActors[index].curTransform.scale.y, dyna->bgActors[index].curTransform.scale.z, (s16) (s32) dyna->bgActors[index].curTransform.rot.x, (s16) (s32) dyna->bgActors[index].curTransform.rot.y, (s16) (s32) dyna->bgActors[index].curTransform.rot.z, dyna->bgActors[index].curTransform.pos.x, dyna->bgActors[index].curTransform.pos.y, dyna->bgActors[index].curTransform.pos.z);
        temp_v0_3 = temp_s5->numVertices;
        if ((temp_v0_3 != 0) && (temp_s5->numPolygons != 0)) {
            sp160 = 0.0f;
            sp15C = 0.0f;
            sp158 = 0.0f;
            temp_f20 = 1.0f / (f32) temp_v0_3;
            phi_s0_2 = 0;
            phi_s1_2 = 0;
            phi_s1_4 = 0;
            if ((s32) temp_s5->numVertices > 0) {
                do {
                    Math_Vec3s_ToVec3f((Vec3f *) &spF4, temp_s5->vtxList + phi_s0_2);
                    SkinMatrix_Vec3fMtxFMultXYZ(&D_801EDA40, (Vec3f *) &spF4, (Vec3f *) &spE8);
                    BgCheck_CreateVertexFromVec3f(&dyna->vtxList[*currVertices + phi_s1_2], (Vec3f *) &spE8);
                    if (phi_s1_2 == 0) {
                        dyna->bgActors[index].maxY = spEC;
                        dyna->bgActors[index].minY = dyna->bgActors[index].maxY;
                    } else if (spEC < dyna->bgActors[index].minY) {
                        dyna->bgActors[index].minY = spEC;
                    } else if (dyna->bgActors[index].maxY < spEC) {
                        dyna->bgActors[index].maxY = spEC;
                    }
                    sp158 += spE8;
                    sp15C += spEC;
                    sp160 += spF0;
                    temp_s1 = phi_s1_2 + 1;
                    phi_s0_2 += 6;
                    phi_s1_2 = temp_s1;
                } while (temp_s1 < (s32) temp_s5->numVertices);
            }
            temp_f10 = sp158 * temp_f20;
            temp_v0_4 = &dyna->bgActors[index].boundingSphere;
            sp158 = temp_f10;
            sp15C *= temp_f20;
            sp160 *= temp_f20;
            temp_v0_4->center.x = (s16) (s32) temp_f10;
            temp_v0_4->center.y = (s16) (s32) sp15C;
            temp_v0_4->center.z = (s16) (s32) sp160;
            phi_f2 = -100.0f;
            phi_s1_3 = 0;
            phi_f2_2 = -100.0f;
            phi_v0 = temp_v0_4;
            phi_s1_4 = 0;
            if ((s32) temp_s5->numVertices > 0) {
                sp74 = temp_v0_4;
                phi_s0_3 = *currVertices * 6;
                do {
                    temp_a0_2 = &sp144;
                    sp144 = (f32) *(dyna->vtxList + phi_s0_3);
                    sp148 = (f32) (dyna->vtxList + phi_s0_3)->unk2;
                    sp154 = phi_f2;
                    sp14C = (f32) (dyna->vtxList + phi_s0_3)->unk4;
                    temp_f0 = Math3D_DistanceSquared((Vec3f *) temp_a0_2, (Vec3f *) &sp158);
                    phi_f2_3 = phi_f2;
                    if (phi_f2 < temp_f0) {
                        phi_f2_3 = temp_f0;
                    }
                    temp_s1_2 = phi_s1_3 + 1;
                    phi_s0_3 += 6;
                    phi_f2 = phi_f2_3;
                    phi_s1_3 = temp_s1_2;
                    phi_f2_2 = phi_f2_3;
                } while (temp_s1_2 < (s32) temp_s5->numVertices);
                phi_v0 = sp74;
            }
            temp_s3 = &dyna->polyNodes;
            phi_v0->radius = (s16) (s32) (sqrtf(phi_f2_2) * 1.1f);
            phi_s4 = 0;
            if ((s32) temp_s5->numPolygons > 0) {
                do {
                    temp_s0_2 = &dyna->polyList[*currPolygons + phi_s1_4];
                    temp_t8 = temp_s5->polyList + phi_s4;
                    temp_a1 = &sp12C;
                    temp_a2_3 = &sp120;
                    temp_s0_2->unk0 = (unaligned s32) temp_t8->unk0;
                    temp_v1_2 = temp_s0_2->vtxData[0];
                    temp_s0_2->unk4 = (unaligned s32) temp_t8->unk4;
                    temp_a0_3 = temp_s0_2->vtxData[1];
                    temp_s0_2->unk8 = (unaligned s32) temp_t8->unk8;
                    temp_s0_2->unkC = (unaligned s32) temp_t8->unkC;
                    temp_v0_5 = *currVertices;
                    temp_t2 = temp_v0_5 + (temp_v1_2 & 0x1FFF);
                    temp_t3 = temp_v0_5 + (temp_a0_3 & 0x1FFF);
                    temp_t4 = temp_v0_5 + temp_s0_2->vtxData[2];
                    temp_s0_2->vtxData[0] = (temp_v1_2 & 0xE000) | temp_t2;
                    temp_s0_2->vtxData[1] = (temp_a0_3 & 0xE000) | temp_t3;
                    temp_s0_2->vtxData[2] = temp_t4;
                    temp_v0_6 = dyna->vtxList;
                    temp_a0_4 = &sp138;
                    temp_v1_3 = &temp_v0_6[temp_t2];
                    sp138 = (f32) temp_v1_3->x;
                    temp_t0 = &temp_v0_6[temp_t3];
                    sp13C = (f32) temp_v1_3->y;
                    temp_t1 = &temp_v0_6[temp_t4];
                    sp140 = (f32) temp_v1_3->z;
                    sp12C = (f32) temp_t0->x;
                    sp130 = (f32) temp_t0->y;
                    sp134 = (f32) temp_t0->z;
                    sp120 = (f32) temp_t1->x;
                    sp124 = (f32) temp_t1->y;
                    sp128 = (f32) temp_t1->z;
                    Math3D_NormalVector((Vec3f *) temp_a0_4, (Vec3f *) temp_a1, (Vec3f *) temp_a2_3, (Vec3f *) &sp114);
                    temp_f0_2 = Math3D_Vec3fMagnitude((Vec3f *) &sp114);
                    if (!(fabsf(temp_f0_2) < 0.008f)) {
                        temp_f0_3 = 1.0f / temp_f0_2;
                        temp_f10_2 = sp114 * temp_f0_3;
                        temp_f16 = sp118 * temp_f0_3;
                        sp114 = temp_f10_2;
                        sp118 = temp_f16;
                        sp11C *= temp_f0_3;
                        temp_s0_2->normal.x = (s16) (s32) (temp_f10_2 * 32767.0f);
                        temp_s0_2->normal.y = (s16) (s32) (temp_f16 * 32767.0f);
                        temp_s0_2->normal.z = (s16) (s32) (sp11C * 32767.0f);
                    }
                    temp_s0_2->dist = (s16) (s32) func_80086D24((f64) -((sp114 * sp138) + (sp118 * sp13C) + (sp11C * sp140)));
                    if (sp118 > 0.5f) {
                        temp_a2_4 = &spCE;
                        spCE = *currPolygons + phi_s1_4;
                        BgCheck_PolygonLinkedListNodeInsert(temp_s3, (u16 *) &dyna->bgActors[index].dynaLookup.floor, temp_a2_4);
                    } else if (sp118 < -0.8f) {
                        temp_a2_5 = &spCC;
                        spCC = *currPolygons + phi_s1_4;
                        BgCheck_PolygonLinkedListNodeInsert(temp_s3, (u16 *) &dyna->bgActors[index].dynaLookup.ceiling, temp_a2_5);
                    } else {
                        temp_a2_6 = &spCA;
                        spCA = *currPolygons + phi_s1_4;
                        BgCheck_PolygonLinkedListNodeInsert(temp_s3, (u16 *) &dyna->bgActors[index].dynaLookup.wall, temp_a2_6);
                    }
                    temp_s1_3 = phi_s1_4 + 1;
                    phi_s4 += 0x10;
                    phi_s1_4 = temp_s1_3;
                } while (temp_s1_3 < (s32) temp_s5->numPolygons);
            }
        }
        temp_v0_7 = temp_s5->numWaterBoxes;
        if ((s32) temp_v0_7 > 0) {
            phi_s3 = 0;
            if ((s32) temp_v0_7 > 0) {
                phi_s1_5 = 0;
                do {
                    Math_Vec3s_ToVec3f((Vec3f *) &spB8, temp_s5->waterBoxes + phi_s1_5);
                    Math_Vec3f_Copy((Vec3f *) &spA0, (Vec3f *) &spB8);
                    spA0 += (f32) (temp_s5->waterBoxes + phi_s1_5)->unk6;
                    Math_Vec3f_Copy((Vec3f *) &sp88, (Vec3f *) &spB8);
                    sp90 += (f32) (temp_s5->waterBoxes + phi_s1_5)->unk8;
                    SkinMatrix_Vec3fMtxFMultXYZ(&D_801EDA40, (Vec3f *) &spB8, (Vec3f *) &spAC);
                    SkinMatrix_Vec3fMtxFMultXYZ(&D_801EDA40, (Vec3f *) &spA0, (Vec3f *) &sp94);
                    SkinMatrix_Vec3fMtxFMultXYZ(&D_801EDA40, (Vec3f *) &sp88, (Vec3f *) &sp7C);
                    temp_s0_3 = &dyna->waterboxes.boxes[*currWaterboxes + phi_s3];
                    BgCheck_CalcWaterboxDimensions((Vec3f *) &spAC, (Vec3f *) &sp94, (Vec3f *) &sp7C, (Vec3s *) temp_s0_3, &temp_s0_3->xLength, &temp_s0_3->zLength);
                    temp_s0_3->properties = (temp_s5->waterBoxes + phi_s1_5)->unkC;
                    temp_s3_2 = phi_s3 + 1;
                    phi_s1_5 += 0x10;
                    phi_s3 = temp_s3_2;
                } while (temp_s3_2 < (s32) temp_s5->numWaterBoxes);
            }
        }
        *currPolygons += temp_s5->numPolygons;
        *currVertices += temp_s5->numVertices;
        *currWaterboxes += temp_s5->numWaterBoxes;
        /* Duplicate return node #53. Try simplifying control flow for better match */
    }
}

void BgCheck_ResetFlagsIfLoadedActor(GlobalContext *globalCtx, DynaCollisionContext *dyna, Actor *actor) {
    DynaPolyActor *temp_v0;
    s32 temp_s0;
    DynaCollisionContext *phi_s1;
    s32 phi_s0;

    phi_s1 = dyna;
    phi_s0 = 0;
loop_1:
    if (((phi_s1->bgActorFlags[0] & 1) != 0) && (temp_v0 = BgCheck_GetActorOfMesh(&globalCtx->colCtx, phi_s0), (temp_v0 != 0)) && (temp_v0 == actor)) {
        BgCheck3_ResetFlags((DynaPolyActor *) actor);
        return;
    }
    temp_s0 = phi_s0 + 1;
    phi_s1 += 2;
    phi_s0 = temp_s0;
    if (temp_s0 == 0x32) {
        return;
    }
    goto loop_1;
}

void BgCheck_Update(GlobalContext *globalCtx, DynaCollisionContext *dyna) {
    s32 sp58;
    s32 sp54;
    s32 sp50;
    DynaPolyActor *temp_v0_2;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s2_2;
    u16 temp_v0_3;
    void *temp_v0;
    DynaLookup *phi_s1;
    s32 phi_s0;
    DynaCollisionContext *phi_s0_2;
    DynaCollisionContext *phi_s1_2;
    s32 phi_s2;
    DynaCollisionContext *phi_s0_3;
    s32 phi_s2_2;

    BgCheck_PolygonLinkedListReset(&dyna->polyNodes);
    phi_s1 = &dyna->bgActors[0].dynaLookup;
    phi_s0 = 0;
    do {
        BgCheck_ActorMeshPolyListsHeadsInit(phi_s1);
        temp_s0 = phi_s0 + 0x64;
        phi_s1 += 0x64;
        phi_s0 = temp_s0;
    } while (temp_s0 < 0x1388);
    phi_s0_2 = dyna;
    phi_s1_2 = dyna;
    phi_s2 = 0;
    phi_s2_2 = 0;
loop_3:
    if ((phi_s0_2->bgActorFlags[0] & 2) != 0) {
        phi_s0_2->bgActorFlags[0] = 0;
        BgCheck_ActorMeshInit(globalCtx, phi_s1_2 + 4);
        dyna->bitFlag |= 1;
    }
    temp_v0 = phi_s1_2->bgActors[0].actor;
    if ((temp_v0 != 0) && (temp_v0->update == 0)) {
        temp_v0_2 = BgCheck_GetActorOfMesh(&globalCtx->colCtx, phi_s2);
        if (temp_v0_2 != 0) {
            temp_v0_2->bgId = -1;
            phi_s0_2->bgActorFlags[0] = 0;
            BgCheck_ActorMeshInit(globalCtx, phi_s1_2 + 4);
            dyna->bitFlag |= 1;
            goto block_9;
        }
    } else {
block_9:
        temp_s2 = phi_s2 + 1;
        phi_s0_2 += 2;
        phi_s1_2 += 0x64;
        phi_s2 = temp_s2;
        if (temp_s2 >= 0x32) {
            sp58 = 0;
            sp54 = 0;
            sp50 = 0;
            phi_s0_3 = dyna;
            do {
                temp_v0_3 = phi_s0_3->bgActorFlags[0];
                if (((temp_v0_3 & 1) != 0) && ((temp_v0_3 & 2) == 0)) {
                    BgCheck_AddActorMeshToLists(globalCtx, dyna, phi_s2_2, &sp58, &sp54, &sp50);
                }
                temp_s2_2 = phi_s2_2 + 1;
                phi_s0_3 += 2;
                phi_s2_2 = temp_s2_2;
            } while (temp_s2_2 != 0x32);
            dyna->bitFlag &= 0xFFFE;
        } else {
            goto loop_3;
        }
    }
}

void func_800C756C(s32 param_1, s32 *param_2, s32 *param_3, s32 *param_4) {
    s32 temp_v0;
    u16 temp_t0;
    u16 temp_t0_3;
    void *temp_t0_2;
    void *temp_t0_4;
    void *phi_v1;
    s32 phi_v0;

    *param_2 = 0;
    *param_3 = 0;
    *param_4 = 0;
    phi_v1 = (void *) param_1;
    phi_v0 = 0;
    do {
        temp_t0 = phi_v1->unk138C;
        if (((temp_t0 & 1) != 0) && ((temp_t0 & 2) == 0) && ((temp_t0 & 4) == 0)) {
            temp_t0_2 = (param_1 + (phi_v0 * 0x64))->unk8;
            *param_2 += temp_t0_2->unk14;
            *param_3 += temp_t0_2->unkC;
            *param_4 += temp_t0_2->unk24;
        }
        temp_t0_3 = phi_v1->unk138E;
        if (((temp_t0_3 & 1) != 0) && ((temp_t0_3 & 2) == 0) && ((temp_t0_3 & 4) == 0)) {
            temp_t0_4 = (param_1 + (phi_v0 * 0x64))->unk6C;
            *param_2 += temp_t0_4->unk14;
            *param_3 += temp_t0_4->unkC;
            *param_4 += temp_t0_4->unk24;
        }
        temp_v0 = phi_v0 + 2;
        phi_v1 += 4;
        phi_v0 = temp_v0;
    } while (temp_v0 != 0x32);
}

void BgCheck_UpdateAllActorMeshes(GlobalContext *globalCtx, DynaCollisionContext *dyna) {
    s32 temp_s0;
    DynaCollisionContext *phi_s1;
    s32 phi_s0;

    phi_s1 = dyna;
    phi_s0 = 0;
    do {
        if ((phi_s1->bgActorFlags[0] & 1) != 0) {
            BgCheck_ActorMeshUpdateParams(globalCtx, &dyna->bgActors[phi_s0]);
        }
        temp_s0 = phi_s0 + 1;
        phi_s1 += 2;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x32);
}

f32 func_800C76EC(s32 *arg0, s32 arg1) {
    f32 sp78;
    f32 temp_f20;
    s32 temp_s2;
    s32 temp_s4;
    u16 temp_a2;
    u16 temp_v0_3;
    u16 temp_v0_5;
    u16 temp_v0_6;
    u16 temp_v1;
    u16 temp_v1_2;
    void *temp_s3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_4;
    void *phi_s1;
    s32 phi_a0;
    u16 phi_v1;
    f32 phi_f20;
    f32 phi_f20_2;
    s32 phi_t7;
    s32 phi_t8;
    f32 phi_f20_3;

    temp_f20 = arg0->unk10;
    temp_a2 = *arg0->unk30;
    phi_f20_2 = temp_f20;
    phi_t8 = temp_a2 * 4;
    phi_f20 = temp_f20;
    if (temp_a2 == 0xFFFF) {

    } else {
        temp_v0 = arg0->unk2C;
        temp_s4 = temp_v0->unk13F0;
        phi_t7 = temp_v0->unk1400;
        phi_a0 = (arg0->unk8 & 7) << 0xD;
loop_3:
        phi_s1 = phi_t7 + phi_t8;
        phi_v1 = arg0->unk8;
loop_4:
        temp_s2 = phi_s1->unk0 * 0x10;
        temp_s3 = temp_s4 + temp_s2;
        phi_f20_2 = phi_f20;
        phi_f20_3 = phi_f20;
        if (((temp_s3->unk2 & phi_a0) != 0) || (((temp_s3->unk4 & 0x8000) != 0) && (((temp_v0_2 = arg0->unk20, (temp_v0_2 != 0)) && (temp_v0_2->unk2 != 2)) || ((temp_v0_2 == 0) && (phi_v1 != 1)))) || (((arg0->unk24 & 0x20) != 0) && (func_800C9B68(arg0->unk4, temp_s2 + temp_s4, arg0->unk1C) != 0))) {
            temp_v0_6 = phi_s1->unk2;
            if (temp_v0_6 != 0xFFFF) {
                phi_t7 = arg0->unk2C->unk1400;
                phi_t8 = temp_v0_6 * 4;
                phi_a0 = (arg0->unk8 & 7) << 0xD;
                goto loop_3;
            }
        } else if (((arg1 & 6) != 0) && ((arg0->unk24 & 0x10) != 0) && (((f32) temp_s3->unkA * 0.00003051851f) < 0.0f)) {
            temp_v0_3 = phi_s1->unk2;
            if (temp_v0_3 != 0xFFFF) {
                temp_v1 = arg0->unk8;
                phi_s1 = arg0->unk2C->unk1400 + (temp_v0_3 * 4);
                phi_a0 = (temp_v1 & 7) << 0xD;
                phi_v1 = temp_v1;
                goto loop_4;
            }
        } else {
            temp_v0_4 = arg0->unk14;
            if ((func_800C0340(temp_s2 + temp_s4, arg0->unk2C->unk13F4, temp_v0_4->unk0, temp_v0_4->unk8, &sp78, arg0->unk28) != 0) && (sp78 < arg0->unk14->unk4) && (phi_f20 < sp78)) {
                *arg0->unkC = arg0->unk2C->unk13F0 + temp_s2;
                phi_f20_3 = sp78;
            }
            temp_v0_5 = phi_s1->unk2;
            phi_f20 = phi_f20_3;
            phi_f20_2 = phi_f20_3;
            if (temp_v0_5 != 0xFFFF) {
                temp_v1_2 = arg0->unk8;
                phi_s1 = arg0->unk2C->unk1400 + (temp_v0_5 * 4);
                phi_a0 = (temp_v1_2 & 7) << 0xD;
                phi_v1 = temp_v1_2;
                goto loop_4;
            }
        }
    }
    return phi_f20_2;
}

f32 func_800C7974(s32 *arg0) {
    ? sp104;
    ? spF8;
    ? spEC;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    ? sp8C;
    s32 sp84;
    ? sp70;
    f32 sp6C;
    CollisionContext *temp_a2;
    Vec3f *temp_s1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f16;
    f32 temp_f4;
    f32 temp_f8;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_t1;
    s32 temp_v0_3;
    s32 temp_v0_4;
    u16 temp_v0;
    void *temp_s3;
    void *temp_t0;
    void *temp_v0_2;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    CollisionContext *phi_a2;
    s32 phi_s3;
    s32 phi_s1;
    CollisionContext *phi_a2_2;
    f32 phi_f20;
    s32 phi_v0;
    void *phi_s2;
    Vec3f *phi_s1_2;
    f32 phi_f20_2;
    f32 phi_f20_3;

    *arg0->unk18 = 0x32;
    phi_a2 = arg0->unk4;
    phi_s3 = 0;
    phi_s1 = 0;
    phi_f20_3 = -32000.0f;
    do {
        temp_v0 = (phi_a2 + phi_s3)->unk13DC;
        phi_a2_2 = phi_a2;
        phi_f20 = phi_f20_3;
        phi_f20 = phi_f20_3;
        phi_f20 = phi_f20_3;
        if (((temp_v0 & 1) != 0) && ((temp_v0 & 2) == 0)) {
            temp_s2 = phi_s1 * 0x64;
            temp_v1 = phi_a2 + temp_s2;
            if (arg0->unk20 != temp_v1->unk54) {
                temp_v0_2 = arg0->unk14;
                if (!(temp_v0_2->unk4 < temp_v1->unkB0)) {
                    if (func_8017F9C0(temp_v1 + 0xA8, temp_v0_2->unk0, temp_v0_2->unk8) == 0) {

                    } else {
                        temp_a2 = arg0->unk4;
                        arg0->unk1C = phi_s1;
                        arg0->unk2C = (void *) (temp_a2 + 0x50);
                        if ((arg0->unk24 & 4) != 0) {
                            arg0->unk30 = (s32) (temp_a2 + temp_s2 + 0x62);
                            temp_f0 = func_800C76EC(arg0, 1, temp_a2);
                            if (arg0->unk10 < temp_f0) {
                                arg0->unk10 = temp_f0;
                                *arg0->unk18 = phi_s1;
                                phi_f20 = temp_f0;
                            }
                        }
                        temp_v0_3 = arg0->unk24;
                        if (((temp_v0_3 & 2) != 0) || ((*arg0->unkC == 0) && ((temp_v0_3 & 8) != 0))) {
                            arg0->unk30 = (s32) (arg0->unk4 + temp_s2 + 0x60);
                            temp_f0_2 = func_800C76EC(arg0, 2);
                            if (arg0->unk10 < temp_f0_2) {
                                arg0->unk10 = temp_f0_2;
                                *arg0->unk18 = phi_s1;
                                phi_f20 = temp_f0_2;
                            }
                        }
                        if ((arg0->unk24 & 1) != 0) {
                            arg0->unk30 = (s32) (arg0->unk4 + temp_s2 + 0x5E);
                            temp_f0_3 = func_800C76EC(arg0, 4);
                            if (arg0->unk10 < temp_f0_3) {
                                arg0->unk10 = temp_f0_3;
                                *arg0->unk18 = phi_s1;
                                phi_f20 = temp_f0_3;
                            }
                        }
                    }
                    phi_a2_2 = arg0->unk4;
                }
            }
        }
        temp_s1 = phi_s1 + 1;
        phi_a2 = phi_a2_2;
        phi_s3 += 2;
        phi_s1 = temp_s1;
        phi_f20_2 = phi_f20;
        phi_f20_3 = phi_f20;
    } while (temp_s1 != 0x32);
    if ((phi_f20 != -32000.0f) && (BgCheck_GetActorOfMesh(phi_a2_2, *arg0->unk18) != 0)) {
        temp_v1_2 = arg0->unk0;
        if (temp_v1_2 != 0) {
            temp_v0_4 = temp_v1_2->unk16F1C != 0;
            phi_v0 = temp_v0_4;
            if (temp_v0_4 == 0) {
                phi_v0 = temp_v1_2->unk16F1E != 0;
            }
            if (phi_v0 == 0) {
                temp_t1 = *arg0->unk18;
                if (((arg0->unk4 + (temp_t1 * 2))->unk13DC & 2) != 0) {
                    temp_v1_3 = arg0->unk2C;
                    temp_t0 = temp_v1_3 + (temp_t1 * 0x64);
                    temp_v0_5 = temp_t0 + 0x38;
                    temp_s3 = temp_t0->unk8->unk18 + (((s32) (*arg0->unkC - (((temp_v1_3 + (temp_t1 * 0x64))->unkC * 0x10) + temp_v1_3->unk13F0)) >> 4) * 0x10);
                    SkinMatrix_SetScaleRotateYRPTranslate((MtxF *) &sp8C, temp_v0_5->unk0, temp_v0_5->unk4, temp_v0_5->unk8, (s16) (s32) temp_v0_5->unkC, (s16) (s32) temp_v0_5->unkE, (s16) (s32) temp_v0_5->unk10, temp_v0_5->unk14, temp_v0_5->unk18, temp_v0_5->unk1C);
                    sp84 = (arg0->unk2C + (*arg0->unk18 * 0x64))->unk8->unk10;
                    phi_s2 = temp_s3;
                    phi_s1_2 = (Vec3f *) &spE0;
                    do {
                        Math_Vec3s_ToVec3f((Vec3f *) &sp70, ((phi_s2->unk2 & 0x1FFF) * 6) + sp84);
                        SkinMatrix_Vec3fMtxFMultXYZ((MtxF *) &sp8C, (Vec3f *) &sp70, phi_s1_2);
                        temp_s1_2 = phi_s1_2 + 0xC;
                        phi_s2 += 2;
                        phi_s1_2 = temp_s1_2;
                    } while (temp_s1_2 != &sp104);
                    Math3D_NormalVector((Vec3f *) &spE0, (Vec3f *) &spEC, (Vec3f *) &spF8, (Vec3f *) &spD4);
                    temp_f0_4 = Math3D_Vec3fMagnitude((Vec3f *) &spD4);
                    if (!(fabsf(temp_f0_4) < 0.008f)) {
                        temp_f0_5 = 1.0f / temp_f0_4;
                        temp_f4 = spD4 * temp_f0_5;
                        temp_f8 = spD8 * temp_f0_5;
                        temp_f16 = spDC * temp_f0_5;
                        spD4 = temp_f4;
                        spD8 = temp_f8;
                        spDC = temp_f16;
                        temp_v0_6 = arg0->unk14;
                        if ((func_8017BEE0(temp_f0_4, &spE0, &spEC, &spF8, temp_f4, temp_f8, temp_f16, -((spE8 * temp_f16) + ((temp_f4 * spE0) + (temp_f8 * spE4))), temp_v0_6->unk8, temp_v0_6->unk0, &sp6C, arg0->unk28) != 0) && (fabsf(sp6C - phi_f20) < 1.0f)) {
                            phi_f20_2 = sp6C;
                        }
                    }
                }
            }
        }
    }
    return phi_f20_2;
}

s32 func_800C7E40(f32 *arg0, u16 arg1, void *arg2, u16 *arg3, f32 *arg4, f32 *arg5, s32 *arg6, s32 *arg7, f32 *arg8, f32 arg9, s32 argA, DynaPolyActor *argB) {
    f32 spD8;
    s32 spD4;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB4;
    f32 sp98;
    f32 sp78;
    CollisionPoly *temp_s0;
    CollisionPoly *temp_s0_2;
    Vec3s *temp_a1;
    Vec3s *temp_a1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f2;
    f32 temp_f2_2;
    u16 temp_a0;
    u16 temp_a0_2;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 temp_v0_6;
    u16 temp_v0_7;
    u16 temp_v0_8;
    u16 temp_v1;
    u16 temp_v1_2;
    void *phi_s1;
    f32 phi_f2;
    f32 phi_f12;
    f32 phi_f2_2;
    f32 phi_f12_2;
    void *phi_s1_2;
    f32 phi_f2_3;
    f32 phi_f12_3;
    f32 phi_f2_4;
    f32 phi_f12_4;
    s32 phi_t4;
    s32 phi_t3;

    spD4 = 0;
    if (*arg3 == 0xFFFF) {
        return 0;
    }
    spB4.unk0 = arg8->unk0;
    spB4.unk4 = (f32) arg8->unk4;
    spB4.unk8 = (s32) arg8->unk8;
    phi_t4 = *arg3 * 4;
loop_3:
    phi_s1 = arg2->unk1400 + phi_t4;
loop_4:
    temp_s0 = arg2->unk13F0 + (phi_s1->unk0 * 0x10);
    BgCheck_PolygonGetNormal(temp_s0, &spC8, &spC4, &spC0);
    temp_f20 = sqrtf((spC8 * spC8) + (spC0 * spC0));
    temp_f0 = Math3D_NormalizedSignedDistanceFromPlane(spC8, spC4, spC0, (f32) temp_s0->dist, (Vec3f *) &spB4);
    temp_f24 = temp_f0;
    if ((arg9 < fabsf(temp_f0)) || (temp_a0 = temp_s0->vtxData[0], ((temp_a0 & ((arg1 & 7) << 0xD)) != 0)) || ((temp_v1 = temp_s0->vtxData[1], ((temp_v1 & 0x8000) != 0)) && (((argB != 0) && (argB->actor.category != 2)) || ((argB == 0) && (arg1 != 1))))) {
        temp_v0_4 = phi_s1->unk2;
        if (temp_v0_4 != 0xFFFF) {
            phi_t4 = temp_v0_4 * 4;
            goto loop_3;
        }
    } else {
        temp_f14 = 1.0f / temp_f20;
        temp_f18 = fabsf(spC0) * temp_f14;
        if (temp_f18 < 0.4f) {
            temp_v0 = phi_s1->unk2;
            if (temp_v0 != 0xFFFF) {
                phi_s1 = arg2->unk1400 + (temp_v0 * 4);
                goto loop_4;
            }
        } else {
            temp_a1 = arg2->unk13F4;
            temp_f12 = (f32) (temp_a1 + ((temp_a0 & 0x1FFF) * 6))->unk4;
            temp_f0_2 = (f32) (temp_a1 + ((temp_v1 & 0x1FFF) * 6))->unk4;
            phi_f2 = temp_f12;
            phi_f12 = temp_f12;
            if (temp_f0_2 < temp_f12) {
                phi_f2 = temp_f0_2;
            } else if (temp_f12 < temp_f0_2) {
                phi_f12 = temp_f0_2;
            }
            temp_f0_3 = (f32) (temp_a1 + (temp_s0->vtxData[2] * 6))->unk4;
            phi_f2_2 = phi_f2;
            phi_f12_2 = phi_f12;
            if (temp_f0_3 < phi_f2) {
                phi_f2_2 = temp_f0_3;
            } else if (phi_f12 < temp_f0_3) {
                phi_f12_2 = temp_f0_3;
            }
            temp_f12_2 = phi_f12_2 + arg9;
            if ((spBC < (phi_f2_2 - arg9)) || (temp_f12_2 < spBC)) {
                temp_v0_3 = phi_s1->unk2;
                if (temp_v0_3 != 0xFFFF) {
                    phi_s1 = arg2->unk1400 + (temp_v0_3 * 4);
                    goto loop_4;
                }
            } else {
                sp98 = temp_f18;
                sp78 = temp_f14;
                if (func_800C074C((bitwise Vec3s *) temp_f12_2, temp_f14, temp_s0, temp_a1, spB4, arg8->unk4, &spD8) != 0) {
                    temp_f2 = spD8 - spBC;
                    if ((fabsf(temp_f2) <= (arg9 / temp_f18)) && ((temp_f2 * spC0) <= 4.0f)) {
                        spD4 = 1;
                        if (func_800C1238((bitwise CollisionContext *) spC8, (bitwise CollisionPoly *) temp_f14, arg0, (f32 *) temp_s0, (bitwise f32) &spB4, (bitwise f32) &spBC, spC8, spC4, spC0, (bitwise CollisionPoly **) temp_f14, (bitwise s32 *) temp_f24, arg9, arg6) != 0) {
                            *arg7 = argA;
                        }
                    }
                }
                temp_v0_2 = phi_s1->unk2;
                if (temp_v0_2 != 0xFFFF) {
                    phi_s1 = arg2->unk1400 + (temp_v0_2 * 4);
                    goto loop_4;
                }
            }
        }
    }
    phi_t3 = *arg3 * 4;
loop_36:
    phi_s1_2 = arg2->unk1400 + phi_t3;
loop_37:
    temp_s0_2 = arg2->unk13F0 + (phi_s1_2->unk0 * 0x10);
    BgCheck_PolygonGetNormal(temp_s0_2, &spC8, &spC4, &spC0);
    temp_f20_2 = sqrtf((spC8 * spC8) + (spC0 * spC0));
    temp_f0_4 = Math3D_NormalizedSignedDistanceFromPlane(spC8, spC4, spC0, (f32) temp_s0_2->dist, (Vec3f *) &spB4);
    temp_f24_2 = temp_f0_4;
    if ((arg9 < fabsf(temp_f0_4)) || (temp_a0_2 = temp_s0_2->vtxData[0], ((temp_a0_2 & ((arg1 & 7) << 0xD)) != 0)) || ((temp_v1_2 = temp_s0_2->vtxData[1], ((temp_v1_2 & 0x8000) != 0)) && (((argB != 0) && (argB->actor.category != 2)) || ((argB == 0) && (arg1 != 1))))) {
        temp_v0_8 = phi_s1_2->unk2;
        if (temp_v0_8 != 0xFFFF) {
            phi_t3 = temp_v0_8 * 4;
            goto loop_36;
        }
    } else {
        temp_f14_2 = 1.0f / temp_f20_2;
        temp_f18_2 = fabsf(spC8) * temp_f14_2;
        if (temp_f18_2 < 0.4f) {
            temp_v0_5 = phi_s1_2->unk2;
            if (temp_v0_5 != 0xFFFF) {
                phi_s1_2 = arg2->unk1400 + (temp_v0_5 * 4);
                goto loop_37;
            }
        } else {
            temp_a1_2 = arg2->unk13F4;
            temp_f12_3 = (f32) *(temp_a1_2 + ((temp_a0_2 & 0x1FFF) * 6));
            temp_f0_5 = (f32) *(temp_a1_2 + ((temp_v1_2 & 0x1FFF) * 6));
            phi_f2_3 = temp_f12_3;
            phi_f12_3 = temp_f12_3;
            if (temp_f0_5 < temp_f12_3) {
                phi_f2_3 = temp_f0_5;
            } else if (temp_f12_3 < temp_f0_5) {
                phi_f12_3 = temp_f0_5;
            }
            temp_f0_6 = (f32) *(temp_a1_2 + (temp_s0_2->vtxData[2] * 6));
            phi_f2_4 = phi_f2_3;
            phi_f12_4 = phi_f12_3;
            if (temp_f0_6 < phi_f2_3) {
                phi_f2_4 = temp_f0_6;
            } else if (phi_f12_3 < temp_f0_6) {
                phi_f12_4 = temp_f0_6;
            }
            temp_f12_4 = phi_f12_4 + arg9;
            if ((spB4 < (phi_f2_4 - arg9)) || (temp_f12_4 < spB4)) {
                temp_v0_7 = phi_s1_2->unk2;
                if (temp_v0_7 != 0xFFFF) {
                    phi_s1_2 = arg2->unk1400 + (temp_v0_7 * 4);
                    goto loop_37;
                }
            } else {
                sp98 = temp_f18_2;
                sp78 = temp_f14_2;
                if (func_800C06A8((bitwise Vec3s *) temp_f12_4, temp_f14_2, temp_s0_2, temp_a1_2, arg8->unk4, spBC, &spD8) != 0) {
                    temp_f2_2 = spD8 - spB4;
                    if ((fabsf(temp_f2_2) <= (arg9 / temp_f18_2)) && ((temp_f2_2 * spC8) <= 4.0f)) {
                        spD4 = 1;
                        if (func_800C1238((bitwise CollisionContext *) spC8, (bitwise CollisionPoly *) temp_f14_2, arg0, (f32 *) temp_s0_2, (bitwise f32) &spB4, (bitwise f32) &spBC, spC8, spC4, spC0, (bitwise CollisionPoly **) temp_f14_2, (bitwise s32 *) temp_f24_2, arg9, arg6) != 0) {
                            *arg7 = argA;
                        }
                    }
                }
                temp_v0_6 = phi_s1_2->unk2;
                if (temp_v0_6 != 0xFFFF) {
                    phi_s1_2 = arg2->unk1400 + (temp_v0_6 * 4);
                    goto loop_37;
                }
            }
        }
    }
    *arg4 = spB4;
    *arg5 = spBC;
    return spD4;
}

s32 func_800C8580(f32 *arg0, u16 arg1, f32 *arg2, f32 *arg3, ? *arg4, f32 arg5, s32 *arg6, s32 *arg7, DynaPolyActor *arg8) {
    f32 sp9C;
    f32 sp94;
    s32 sp90;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_f10;
    s32 temp_s4;
    s32 temp_v0_2;
    u16 temp_v0;
    void *temp_s0;
    void *temp_s1;
    void *temp_s3;
    void *temp_v1;
    f32 *phi_s6;
    s32 phi_s4;

    sp90 = 0;
    sp94.unk0 = arg4->unk0;
    sp94.unk4 = (s32) arg4->unk4;
    sp94.unk8 = (s32) arg4->unk8;
    phi_s6 = arg0;
    phi_s4 = 0;
    do {
        temp_v0 = phi_s6->unk13DC;
        if (((temp_v0 & 1) != 0) && ((temp_v0 & 2) == 0)) {
            temp_v0_2 = phi_s4 * 0x64;
            temp_s3 = arg0 + temp_v0_2;
            temp_v1 = arg0 + temp_v0_2;
            if (arg8 != temp_s3->unk54) {
                temp_s0 = temp_v1 + 0x54;
                if (!(sp98 < temp_v1->unkB0) && !(temp_s0->unk60 < sp98)) {
                    temp_f10 = (s32) arg5;
                    temp_s0->unk5A = (s16) (temp_s0->unk5A + (s16) temp_f10);
                    temp_s1 = temp_s0 + 0x54;
                    temp_f0 = (f32) temp_s0->unk5A;
                    temp_f2 = (f32) temp_s0->unk54 - sp94;
                    temp_f12 = (f32) temp_s0->unk58 - sp9C;
                    if (!((temp_f0 * temp_f0) < ((temp_f2 * temp_f2) + (temp_f12 * temp_f12)))) {
                        if ((func_8017FA34(temp_f12, temp_s1, sp94, sp98) == 0) && (func_8017FAA8(temp_s1, sp98, sp9C) == 0)) {
                            goto block_10;
                        }
                        temp_s0->unk5A = (s16) (temp_s0->unk5A - (s16) temp_f10);
                        if (func_800C7E40(arg0, arg1, arg0 + 0x50, temp_s3 + 0x60, arg2, arg3, arg6, arg7, &sp94, arg5, phi_s4, arg8) != 0) {
                            sp94 = *arg2;
                            sp90 = 1;
                            sp9C = *arg3;
                        }
                    } else {
block_10:
                        temp_s0->unk5A = (s16) (temp_s0->unk5A - (s16) temp_f10);
                    }
                }
            }
        }
        temp_s4 = phi_s4 + 1;
        phi_s6 += 2;
        phi_s4 = temp_s4;
    } while (temp_s4 != 0x32);
    return sp90;
}

s32 func_800C87D0(CollisionContext *arg0, s32 arg1, void *arg2, u16 *arg3, f32 *arg4, ? *arg5, f32 arg6, CollisionPoly **arg7, void *arg8) {
    f32 sp9C;
    f32 *sp98;
    f32 sp94;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    CollisionPoly *temp_s0;
    f32 temp_f0;
    s32 temp_a1;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    s32 phi_v1;
    void *phi_s1;
    f32 phi_f0;
    s32 phi_s7;
    s32 phi_s7_2;
    s32 phi_s7_3;

    temp_a1 = arg1 & 0xFFFF;
    temp_v0 = *arg3;
    phi_s7_2 = 0;
    if (temp_v0 == 0xFFFF) {
        return 0;
    }
    sp98.unk0 = arg5->unk0;
    sp98.unk4 = (s32) arg5->unk4;
    sp98.unk8 = (s32) arg5->unk8;
    phi_v1 = arg2->unk13F0;
    phi_s1 = arg2->unk1400 + (temp_v0 * 4);
loop_3:
    temp_s0 = phi_v1 + (phi_s1->unk0 * 0x10);
    phi_s7 = phi_s7_2;
    phi_s7_3 = phi_s7_2;
    if (((temp_s0->vtxData[0] & ((temp_a1 & 7) << 0xD)) != 0) || (((temp_s0->vtxData[1] & 0x8000) != 0) && (((arg8 != 0) && (arg8->unk2 != 2)) || ((arg8 == 0) && (temp_a1 != 1))))) {
        temp_v0_4 = phi_s1->unk2;
        if (temp_v0_4 != 0xFFFF) {
            phi_s1 = arg2->unk1400 + (temp_v0_4 * 4);
            goto loop_3;
        }
    } else {
        BgCheck_PolygonGetNormal(temp_s0, &sp8C, &sp88, &sp84);
        if (arg6 < Math3D_NormalizedDistanceFromPlane(sp8C, sp88, sp84, (f32) temp_s0->dist, (Vec3f *) &sp98)) {
            temp_v0_2 = phi_s1->unk2;
            if (temp_v0_2 != 0xFFFF) {
                phi_v1 = arg2->unk13F0;
                phi_s1 = arg2->unk1400 + (temp_v0_2 * 4);
                goto loop_3;
            }
        } else {
            if ((func_800C0668(temp_s0, arg2->unk13F4, sp98, spA0, &sp94) != 0) && (sp9C < sp94)) {
                temp_f0 = sp94 - sp9C;
                if ((temp_f0 < arg6) && ((temp_f0 * sp88) <= 0.0f)) {
                    phi_s7_3 = 1;
                    if (sp88 >= 0.0f) {
                        phi_f0 = 1.0f;
                    } else {
                        phi_f0 = -1.0f;
                    }
                    sp9C = (phi_f0 * arg6) + sp94;
                    *arg7 = temp_s0;
                }
            }
            temp_v0_3 = phi_s1->unk2;
            phi_s7 = phi_s7_3;
            phi_s7_2 = phi_s7_3;
            if (temp_v0_3 != 0xFFFF) {
                phi_v1 = arg2->unk13F0;
                phi_s1 = arg2->unk1400 + (temp_v0_3 * 4);
                goto loop_3;
            }
        }
    }
    *arg4 = sp9C;
    return phi_s7;
}

s32 func_800C8A60(CollisionContext *arg0, u16 arg1, f32 *arg2, ? *arg3, f32 arg4, CollisionPoly **arg5, s32 *arg6, void *arg7) {
    f32 sp78;
    CollisionPoly *sp70;
    s32 temp_s1;
    u16 temp_v0;
    void *temp_s0;
    CollisionContext *phi_s4;
    s32 phi_s1;
    f32 phi_f20;
    f32 phi_f20_2;
    s32 phi_s6;

    sp78 = arg3->unk4 + arg4;
    phi_s4 = arg0;
    phi_s1 = 0;
    phi_f20 = sp78;
    phi_s6 = 0;
    do {
        temp_v0 = phi_s4->dyna.bgActorFlags[0];
        phi_f20_2 = phi_f20;
        if (((temp_v0 & 1) != 0) && ((temp_v0 & 2) == 0)) {
            temp_s0 = arg0 + (phi_s1 * 0x64);
            if ((arg7 != temp_s0->unk54) && (func_8017F9C0(temp_s0 + 0xA8, arg3->unk0, arg3->unk8) != 0) && (func_800C87D0(arg0, arg1 & 0xFFFF & 0xFFFF, arg0 + 0x50, temp_s0 + 0x5E, &sp78, arg3, arg4, &sp70, arg7, phi_s1) != 0) && (sp78 < phi_f20)) {
                *arg5 = sp70;
                *arg6 = phi_s1;
                phi_f20_2 = sp78;
                phi_s6 = 1;
            }
        }
        temp_s1 = phi_s1 + 1;
        phi_s4 += 2;
        phi_s1 = temp_s1;
        phi_f20 = phi_f20_2;
    } while (temp_s1 != 0x32);
    *arg2 = phi_f20_2;
    return phi_s6;
}

s32 func_800C8BD0(CollisionContext **arg0) {
    ? sp60;
    f32 sp58;
    s32 sp54;
    ? *sp50;
    void *sp4C;
    Vec3f *sp48;
    s32 sp44;
    CollisionPoly *sp40;
    CollisionPoly **temp_s6;
    CollisionPoly *temp_t6;
    f32 *temp_v0_3;
    f32 temp_f0;
    u16 temp_a0;
    u16 temp_v0;
    u16 temp_v0_4;
    u16 temp_v0_5;
    void *temp_t7;
    void *temp_t9;
    void *temp_v0_2;
    void *temp_v1;
    void *phi_s1;
    s32 phi_s3;
    s32 phi_s3_2;
    s32 phi_s3_3;

    temp_v0 = *arg0->unkC;
    phi_s3_2 = 0;
    if (temp_v0 == 0xFFFF) {
        return 0;
    }
    temp_v1 = arg0->unk8;
    temp_s6 = &sp40;
    sp44 = temp_v1->unk13F4;
    sp48 = arg0->unk10;
    sp50 = &sp60;
    sp4C = arg0->unk14;
    sp54 = arg0->unk20;
    sp58 = arg0->unk28;
    phi_s1 = temp_v1->unk1400 + (temp_v0 * 4);
loop_3:
    temp_t6 = arg0->unk8->unk13F0 + (phi_s1->unk0 * 0x10);
    sp40 = temp_t6;
    temp_a0 = arg0->unk4;
    phi_s3 = phi_s3_2;
    phi_s3_3 = phi_s3_2;
    if (((temp_t6->vtxData[0] & ((temp_a0 & 7) << 0xD)) != 0) || (((temp_t6->vtxData[1] & 0x8000) != 0) && (((temp_v0_2 = arg0->unk2C, (temp_v0_2 != 0)) && (temp_v0_2->unk2 != 2)) || ((temp_v0_2 == 0) && (temp_a0 != 1))))) {
        temp_v0_5 = phi_s1->unk2;
        if (temp_v0_5 != 0xFFFF) {
            phi_s1 = arg0->unk8->unk1400 + (temp_v0_5 * 4);
            goto loop_3;
        }
    } else {
        if (func_800C07F0(temp_s6) != 0) {
            temp_f0 = Math3D_DistanceSquared(arg0->unk10, (Vec3f *) sp50);
            temp_v0_3 = arg0->unk24;
            if (temp_f0 < *temp_v0_3) {
                *temp_v0_3 = temp_f0;
                temp_t9 = arg0->unk18;
                temp_t9->unk0 = (s32) sp50->unk0;
                temp_t9->unk4 = (s32) sp50->unk4;
                temp_t9->unk8 = (s32) sp50->unk8;
                temp_t7 = arg0->unk14;
                temp_t7->unk0 = (s32) sp50->unk0;
                temp_t7->unk4 = (s32) sp50->unk4;
                temp_t7->unk8 = (s32) sp50->unk8;
                *arg0->unk1C = sp40;
                phi_s3_3 = 1;
            }
        }
        temp_v0_4 = phi_s1->unk2;
        phi_s3 = phi_s3_3;
        phi_s3_2 = phi_s3_3;
        if (temp_v0_4 != 0xFFFF) {
            phi_s1 = arg0->unk8->unk1400 + (temp_v0_4 * 4);
            goto loop_3;
        }
    }
    return phi_s3;
}

s32 func_800C8DC0(CollisionContext *arg0, s32 arg1, ? *arg2, ? *arg3, Vec3f *arg4, Vec3f *arg5, f32 *arg6, s32 arg7, s32 *arg8, s32 arg9, void **argA) {
    s32 sp54;
    s32 sp50;
    void **sp4C;
    s32 *sp48;
    f32 *sp44;
    s32 sp40;
    Vec3f *sp3C;
    Vec3f *sp38;
    ? *sp34;
    ? *sp30;
    s32 sp2C;
    s32 sp28;
    s16 sp24;
    CollisionContext *sp20;
    s32 sp1C;
    s16 temp_a1;
    s32 temp_t7;
    s32 temp_v1;
    s32 phi_t0;
    s32 phi_t0_2;
    s32 phi_t0_3;

    temp_a1 = arg1 & 0xFFFF;
    sp28 = arg0 + 0x50;
    sp38 = arg4;
    temp_t7 = arg7 * 0x64;
    temp_v1 = arg0 + temp_t7;
    sp3C = arg5;
    sp20 = arg0;
    sp24 = temp_a1;
    sp30 = arg2;
    sp34 = arg3;
    sp40 = (arg9 & 8) != 0;
    sp2C = temp_v1 + 0x60;
    sp44 = arg6;
    sp48 = arg8;
    sp4C = argA;
    sp50 = arg7;
    phi_t0 = 0;
    if ((arg9 & 1) != 0) {
        sp1C = temp_v1;
        sp54 = 0;
        phi_t0 = sp54;
        if (func_800C8BD0(&sp20, temp_a1) != 0) {
            phi_t0 = 1;
        }
    }
    sp2C = arg0 + temp_t7 + 0x62;
    phi_t0_2 = phi_t0;
    if ((arg9 & 2) != 0) {
        sp1C = arg0 + temp_t7;
        sp54 = phi_t0;
        phi_t0_2 = phi_t0;
        if (func_800C8BD0(&sp20) != 0) {
            phi_t0_2 = 1;
        }
    }
    sp2C = arg0 + temp_t7 + 0x5E;
    phi_t0_3 = phi_t0_2;
    if ((arg9 & 4) != 0) {
        sp54 = phi_t0_2;
        phi_t0_3 = phi_t0_2;
        if (func_800C8BD0(&sp20) != 0) {
            phi_t0_3 = 1;
        }
    }
    return phi_t0_3;
}

s32 func_800C8EEC(CollisionContext *arg0, u16 arg1, ? *arg2, ? *arg3, Vec3f *arg4, Vec3f *arg5, f32 *arg6, f32 *arg7, void **arg8, s32 *arg9, s32 argA) {
    ? sp88;
    ? sp7C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    s32 temp_s0;
    u16 temp_v0;
    void *temp_v0_2;
    CollisionContext *phi_s1;
    s32 phi_s0;
    s32 phi_s7;

    phi_s1 = arg0;
    phi_s0 = 0;
    phi_s7 = 0;
    do {
        temp_v0 = phi_s1->dyna.bgActorFlags[0];
        if (((temp_v0 & 1) != 0) && ((temp_v0 & 2) == 0)) {
            temp_v0_2 = arg0 + (phi_s0 * 0x64);
            if ((arg8 != temp_v0_2->unk54) && ((temp_f0 = arg2->unk4, temp_f12 = temp_v0_2->unkB0, temp_f2 = arg3->unk4, !(temp_f0 < temp_f12)) || !(temp_f2 < temp_f12)) && ((temp_f12_2 = temp_v0_2->unkB4, !(temp_f12_2 < temp_f0)) || !(temp_f12_2 < temp_f2))) {
                sp7C.unk0 = (s32) arg2->unk0;
                sp7C.unk4 = (f32) arg2->unk4;
                sp7C.unk8 = (s32) arg2->unk8;
                sp88.unk0 = (s32) arg3->unk0;
                sp88.unk4 = (f32) arg3->unk4;
                sp88.unk8 = (s32) arg3->unk8;
                if ((Math3D_ColSphereLineSeg(temp_v0_2 + 0xA8, (LineSegment *) &sp7C) != 0) && (func_800C8DC0(arg0, arg1 & 0xFFFF & 0xFFFF, arg2, arg3, arg4, arg5, arg6, phi_s0, arg9, argA, arg8) != 0)) {
                    *arg7 = phi_s0;
                    phi_s7 = 1;
                }
            }
        }
        temp_s0 = phi_s0 + 1;
        phi_s1 += 2;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x32);
    return phi_s7;
}

s32 func_800C90AC(Vec3f *arg0, s32 arg1, CollisionPoly **arg2, Vec3f *arg3, f32 arg4, u16 *arg5, u16 *arg6) {
    CollisionPoly *temp_s0;
    s32 temp_a1;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_s2;
    s32 phi_v1;
    void *phi_s1;

    temp_a1 = arg1 & 0xFFFF;
    temp_v0 = *arg5;
    temp_s2 = arg0 + 0x50;
    if (temp_v0 == 0xFFFF) {
        goto block_15;
    }
    phi_v1 = temp_s2->unk13F0;
    phi_s1 = arg0->unk1450 + (temp_v0 * 4);
loop_3:
    temp_s0 = phi_v1 + (phi_s1->unk0 * 0x10);
    if (((temp_s0->vtxData[0] & ((temp_a1 & 7) << 0xD)) != 0) || (((temp_s0->vtxData[1] & 0x8000) != 0) && (((arg6 != 0) && (arg6->unk2 != 2)) || ((arg6 == 0) && (temp_a1 != 1))))) {
        temp_v0_3 = phi_s1->unk2;
        if (temp_v0_3 != 0xFFFF) {
            phi_s1 = temp_s2->unk1400 + (temp_v0_3 * 4);
            goto loop_3;
        }
        goto block_15;
    }
    BgCheck_PolygonCollidesWithSphere(temp_s0, temp_s2->unk13F4, arg3, arg4);
    if (MIPS2C_ERROR(Read from unset register $v0) != 0) {
        *arg2 = temp_s0;
        return 1;
    }
    temp_v0_2 = phi_s1->unk2;
    if (temp_v0_2 != 0xFFFF) {
        phi_v1 = temp_s2->unk13F0;
        phi_s1 = temp_s2->unk1400 + (temp_v0_2 * 4);
        goto loop_3;
    }
block_15:
    return 0;
}

s32 func_800C921C(Vec3f *arg0, u16 arg1, s32 arg2, CollisionPoly **arg3, Vec3f *arg4, s32 arg5, u16 arg6, u16 *arg7) {
    s32 sp2C;
    Vec3f *phi_a0;

    if (((arg6 & 1) == 0) && (sp2C = (s32) arg6, (func_800C90AC((Vec3f *) arg1, arg2, arg3, arg4, (bitwise f32) (arg0 + (arg5 * 0x64) + 0x5E), arg7, (u16 *) arg5) != 0))) {
        return 1;
    }
    phi_a0 = arg0;
    if ((((s32) arg6 & 2) == 0) && (sp2C = (s32) arg6, arg0 = arg0, phi_a0 = arg0, (func_800C90AC(arg0, (s32) arg1, (CollisionPoly **) arg2, (Vec3f *) arg3, (bitwise f32) arg4, arg0 + (arg5 * 0x64) + 0x60, arg7, arg5) != 0))) {
        return 1;
    }
    if ((((s32) arg6 & 4) == 0) && (func_800C90AC(phi_a0, (s32) arg1, (CollisionPoly **) arg2, (Vec3f *) arg3, (bitwise f32) arg4, phi_a0 + (arg5 * 0x64) + 0x62, arg7, arg5) != 0)) {
        return 1;
    }
    return 0;
}

s32 func_800C9380(Vec3f *arg0, u16 arg1, s32 arg2, s32 *arg3, CollisionPoly **arg4, f32 arg5, u16 *arg6, u16 arg7) {
    s16 sp6A;
    s16 sp68;
    s16 sp66;
    s16 sp64;
    s16 *temp_a0;
    s32 temp_s0;
    u16 temp_v0;
    void *temp_v0_2;
    Vec3f *phi_s2;
    s32 phi_s0;

    phi_s2 = arg0;
    phi_s0 = 0;
loop_1:
    temp_v0 = phi_s2->unk13DC;
    if (((temp_v0 & 1) != 0) && ((temp_v0 & 2) == 0) && (temp_v0_2 = arg0 + (phi_s0 * 0x64), (arg6 != temp_v0_2->unk54)) && (temp_a0 = &sp64, sp64 = (s16) (s32) arg4->unk0, sp66 = (s16) (s32) arg4->unk4, sp6A = (s16) (s32) arg5, sp68 = (s16) (s32) arg4->unk8, (Math3D_ColSphereSphere((Sphere16 *) temp_a0, temp_v0_2 + 0xA8) != 0)) && (func_800C921C(arg0, arg1, arg2, arg4, (bitwise Vec3f *) arg5, phi_s0, (u16) (s32) arg7, arg6) != 0)) {
        return 1;
    }
    temp_s0 = phi_s0 + 1;
    phi_s2 += 2;
    phi_s0 = temp_s0;
    if (temp_s0 == 0x32) {
        return 0;
    }
    goto loop_1;
}

void BgCheck_RelocateMeshHeaderPointers(CollisionHeader *header) {
    CamData *temp_a0_2;
    SurfaceType *temp_a0;
    WaterBox *temp_a0_3;

    header->vtxList = Lib_SegmentedToVirtual((void *) header->vtxList);
    temp_a0 = header->surfaceTypeList;
    header->polyList = Lib_SegmentedToVirtual((void *) header->polyList);
    if (temp_a0 != 0) {
        header->surfaceTypeList = Lib_SegmentedToVirtual((void *) temp_a0);
    }
    temp_a0_2 = header->cameraDataList;
    if (temp_a0_2 != 0) {
        header->cameraDataList = Lib_SegmentedToVirtual((void *) temp_a0_2);
    }
    temp_a0_3 = header->waterBoxes;
    if (temp_a0_3 != 0) {
        header->waterBoxes = Lib_SegmentedToVirtual((void *) temp_a0_3);
    }
}

void BgCheck_RelocateMeshHeader(CollisionHeader *meshSegPtr, CollisionHeader **param_2) {
    CollisionHeader *temp_a0;
    CollisionHeader *temp_v0;

    temp_v0 = Lib_SegmentedToVirtual((void *) meshSegPtr);
    temp_a0 = temp_v0;
    *param_2 = temp_v0;
    BgCheck_RelocateMeshHeaderPointers(temp_a0);
}

void BgCheck_RelocateAllMeshHeaders(CollisionContext *colCtx, GlobalContext *globalCtx) {
    DynaCollisionContext *temp_s3;
    s32 temp_s1;
    u16 temp_v0;
    void *temp_s0;
    DynaCollisionContext *phi_s2;
    s32 phi_s1;

    temp_s3 = &colCtx->dyna;
    phi_s2 = temp_s3;
    phi_s1 = 0;
    do {
        temp_v0 = phi_s2->bgActorFlags[0];
        if (((temp_v0 & 1) != 0) && ((temp_v0 & 2) == 0)) {
            temp_s0 = temp_s3 + (phi_s1 * 0x64);
            Actor_SetObjectSegment(globalCtx, temp_s3->bgActors[phi_s1].actor);
            BgCheck_RelocateMeshHeaderPointers(temp_s0->unk8);
        }
        temp_s1 = phi_s1 + 1;
        phi_s2 += 2;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x32);
}

/*
Failed to decompile function func_800C9640:

Label L800C9674 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

u32 BgCheck_GetPolygonAttributes(CollisionContext *colCtx, CollisionPoly *polygon, s32 index, s32 attributeIndex) {
    CollisionHeader *temp_v0;
    SurfaceType *temp_v1;

    temp_v0 = BgCheck_GetActorMeshHeader(colCtx, index);
    if ((temp_v0 == 0) || (polygon == 0)) {
        return 0U;
    }
    temp_v1 = temp_v0->surfaceTypeList;
    if (temp_v1 == 0) {
        return 0U;
    }
    return temp_v1[polygon->type].data[attributeIndex];
}

u32 func_800C9704(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    return BgCheck_GetPolygonAttributes(colCtx, polygon, index, 0) & 0xFF;
}

u16 func_800C9728(CollisionContext *arg0, u32 arg1, s32 arg2) {
    CollisionHeader *temp_v0;

    temp_v0 = BgCheck_GetActorMeshHeader(arg0, arg2);
    if (temp_v0 == 0) {
        return 0U;
    }
    return temp_v0->cameraDataList[arg1].cameraSType;
}

u16 func_800C9770(CollisionContext *arg0, CollisionPoly *arg1, s32 arg2) {
    CollisionHeader *temp_v0;

    temp_v0 = BgCheck_GetActorMeshHeader(arg0, arg2);
    if (temp_v0 == 0) {
        return 0U;
    }
    if (temp_v0->cameraDataList == 0) {
        return 0U;
    }
    if (temp_v0->surfaceTypeList == 0) {
        return 0U;
    }
    return func_800C9728(arg0, func_800C9704(arg0, arg1, arg2), arg2);
}

u16 func_800C97F8(CollisionContext *arg0, u32 arg1, s32 arg2) {
    CamData *temp_v1;
    CollisionHeader *temp_v0;

    temp_v0 = BgCheck_GetActorMeshHeader(arg0, arg2);
    if (temp_v0 == 0) {
        return 0U;
    }
    temp_v1 = temp_v0->cameraDataList;
    if (temp_v1 == 0) {
        return 0U;
    }
    return (u16) temp_v1[arg1].numCameras;
}

u16 func_800C9844(CollisionContext *arg0, CollisionPoly *arg1, s32 arg2) {
    CollisionHeader *temp_v0;

    temp_v0 = BgCheck_GetActorMeshHeader(arg0, arg2);
    if (temp_v0 == 0) {
        return 0U;
    }
    if (temp_v0->cameraDataList == 0) {
        return 0U;
    }
    if (temp_v0->surfaceTypeList == 0) {
        return 0U;
    }
    return func_800C97F8(arg0, func_800C9704(arg0, arg1, arg2), arg2);
}

void *func_800C98CC(CollisionContext *arg0, u32 arg1, s32 arg2) {
    CamData *temp_v1;
    CollisionHeader *temp_v0;

    temp_v0 = BgCheck_GetActorMeshHeader(arg0, arg2);
    if (temp_v0 == 0) {
        return NULL;
    }
    temp_v1 = temp_v0->cameraDataList;
    if (temp_v1 == 0) {
        return NULL;
    }
    return Lib_SegmentedToVirtual((void *) temp_v1[arg1].camPosData);
}

void *func_800C9924(CollisionContext *arg0, CollisionPoly *arg1, s32 arg2) {
    CollisionHeader *temp_v0;

    temp_v0 = BgCheck_GetActorMeshHeader(arg0, arg2);
    if (temp_v0 == 0) {
        return NULL;
    }
    if (temp_v0->cameraDataList == 0) {
        return NULL;
    }
    if (temp_v0->surfaceTypeList == 0) {
        return NULL;
    }
    return func_800C98CC(arg0, func_800C9704(arg0, arg1, arg2), arg2);
}

u32 func_800C99AC(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    return (BgCheck_GetPolygonAttributes(colCtx, polygon, index, 0) >> 8) & 0x1F;
}

u32 func_800C99D4(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    return (BgCheck_GetPolygonAttributes(colCtx, polygon, index, 0) >> 0xD) & 0x1F;
}

u32 func_800C99FC(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    return (BgCheck_GetPolygonAttributes(colCtx, polygon, index, 0) >> 0x12) & 7;
}

u32 func_800C9A24(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    return (BgCheck_GetPolygonAttributes(colCtx, polygon, index, 0) >> 0x15) & 0x1F;
}

u32 func_800C9A4C(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    return D_801B4620[func_800C9A24(colCtx, polygon, index)];
}

u32 func_800C9A7C(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    u32 phi_v1;

    if ((func_800C9A4C(colCtx, polygon, index) & 1) != 0) {
        phi_v1 = 1U;
    } else {
        phi_v1 = 0U;
    }
    return phi_v1;
}

u32 func_800C9AB0(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    u32 phi_v1;

    if ((func_800C9A4C(colCtx, polygon, index) & 2) != 0) {
        phi_v1 = 1U;
    } else {
        phi_v1 = 0U;
    }
    return phi_v1;
}

u32 func_800C9AE4(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    u32 phi_v1;

    if ((func_800C9A4C(colCtx, polygon, index) & 4) != 0) {
        phi_v1 = 1U;
    } else {
        phi_v1 = 0U;
    }
    return phi_v1;
}

u32 func_800C9B18(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    return (BgCheck_GetPolygonAttributes(colCtx, polygon, index, 0) >> 0x1A) & 0xF;
}

u32 func_800C9B40(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    return (BgCheck_GetPolygonAttributes(colCtx, polygon, index, 0) >> 0x1A) & 0xF;
}

u32 func_800C9B68(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    return (BgCheck_GetPolygonAttributes(colCtx, polygon, index, 0) >> 0x1E) & 1;
}

u32 func_800C9B90(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    return (BgCheck_GetPolygonAttributes(colCtx, polygon, index, 0) >> 0x1F) & 1;
}

u32 func_800C9BB8(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    return BgCheck_GetPolygonAttributes(colCtx, polygon, index, 1) & 0xF;
}

u32 func_800C9BDC(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    s32 temp_v0;

    temp_v0 = func_800C9BB8(colCtx, polygon, index);
    if ((temp_v0 < 0) || (temp_v0 >= 0xF)) {
        return 0U;
    }
    return (u32) D_801B46A0[temp_v0];
}

s32 func_800C9C24(CollisionContext *arg0, CollisionPoly *arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    temp_v0 = func_800C9BB8(arg0, arg1, arg2);
    if ((temp_v0 < 0) || (temp_v0 >= 0xF)) {
        return 0;
    }
    return D_801B46C0[temp_v0] & arg3;
}

u32 func_800C9C74(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    return (BgCheck_GetPolygonAttributes(colCtx, polygon, index, 1) >> 4) & 3;
}

u32 func_800C9C9C(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    return (BgCheck_GetPolygonAttributes(colCtx, polygon, index, 1) >> 6) & 0x1F;
}

u32 func_800C9CC4(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    return (BgCheck_GetPolygonAttributes(colCtx, polygon, index, 1) >> 0xB) & 0x3F;
}

u32 func_800C9CEC(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    return (BgCheck_GetPolygonAttributes(colCtx, polygon, index, 1) >> 0x11) & 1;
}

s32 func_800C9D14(CollisionContext *arg0, void *arg1, s32 arg2) {
    if (BgCheck_GetActorMeshHeader(arg0, arg2) == 0) {
        return 1;
    }
    return (arg1->unk2 & 0x4000) != 0;
}

s32 func_800C9D50(CollisionContext *arg0, void *arg1, s32 arg2) {
    if (BgCheck_GetActorMeshHeader(arg0, arg2) == 0) {
        return 1;
    }
    return (arg1->unk2 & 0x8000) != 0;
}

u32 func_800C9D8C(CollisionContext *param_1, CollisionPoly *param_2, s32 param_3) {
    if (BgCheck_GetActorMeshHeader(param_1, param_3) == 0) {
        return 1U;
    }
    if (param_2 == 0) {
        return 0U;
    }
    return (param_2->vtxData[1] & 0x2000) != 0;
}

s32 func_800C9DDC(CollisionContext *arg0, void *arg1, s32 arg2) {
    if (BgCheck_GetActorMeshHeader(arg0, arg2) == 0) {
        return 1;
    }
    return (arg1->unk4 & 0x4000) != 0;
}

u32 func_800C9E18(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    return (BgCheck_GetPolygonAttributes(colCtx, polygon, index, 1) >> 0x12) & 7;
}

u32 func_800C9E40(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    u32 temp_a0;
    u32 phi_v1;

    temp_a0 = BgCheck_GetPolygonAttributes(colCtx, polygon, index, 1) >> 0x15;
    phi_v1 = temp_a0;
    if ((colCtx->unk146C & 1) != 0) {
        phi_v1 = temp_a0 + 0x20;
    }
    return phi_v1 & 0x3F;
}

u32 func_800C9E88(CollisionContext *colCtx, CollisionPoly *polygon, s32 index) {
    u32 phi_v1;

    if ((BgCheck_GetPolygonAttributes(colCtx, polygon, index, 1) * 0x10) < 0) {
        phi_v1 = 1U;
    } else {
        phi_v1 = 0U;
    }
    return phi_v1;
}

s32 func_800C9EBC(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 *arg4, WaterBox **arg5, s32 *arg6) {
    WaterBox *temp_v1;
    WaterBox *temp_v1_5;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_a0_6;
    s16 temp_a0_7;
    s32 temp_a0_2;
    s32 temp_t0_3;
    s32 temp_t3;
    u16 temp_t0;
    u16 temp_v1_2;
    u32 temp_a0;
    u32 temp_t0_2;
    u32 temp_t1;
    u32 temp_v1_4;
    void *temp_a0_5;
    void *temp_t5;
    void *temp_v0;
    void *temp_v1_3;
    WaterBox *phi_v1;
    void *phi_t1;
    s32 phi_t0;
    WaterBox *phi_v1_2;
    u32 phi_a0;

    *arg6 = 0x32;
    temp_v0 = arg1->unk0;
    temp_t0 = temp_v0->unk24;
    if ((temp_t0 != 0) && (temp_a0 = temp_v0->unk28, temp_t1 = temp_a0 + (temp_t0 * 0x10), (temp_a0 != 0)) && (phi_v1 = (WaterBox *) temp_a0, ((temp_a0 < temp_t1) != 0))) {
loop_4:
        temp_t0_2 = phi_v1->properties;
        temp_a0_2 = (temp_t0_2 >> 0xD) & 0x3F;
        if (((temp_a0_2 == arg0->unk186E0) || (temp_a0_2 == 0x3F)) && ((temp_t0_2 & 0x80000) == 0) && (temp_a0_3 = phi_v1->xMin, ((f32) temp_a0_3 < arg2)) && (arg2 < (f32) (temp_a0_3 + phi_v1->xLength)) && (temp_a0_4 = phi_v1->zMin, ((f32) temp_a0_4 < arg3)) && (arg3 < (f32) (temp_a0_4 + phi_v1->zLength))) {
            *arg5 = phi_v1;
            *arg4 = (f32) phi_v1->ySurface;
            return 1;
        }
        temp_v1 = phi_v1 + 0x10;
        phi_v1 = temp_v1;
        if ((u32) temp_v1 >= temp_t1) {
            goto block_13;
        }
        goto loop_4;
    }
block_13:
    phi_t1 = arg1;
    phi_t0 = 0;
loop_14:
    temp_v1_2 = phi_t1->unk13DC;
    if (((temp_v1_2 & 1) != 0) && ((temp_v1_2 & 4) == 0) && (temp_v1_3 = arg1 + (phi_t0 * 0x64), temp_a0_5 = temp_v1_3 + 0x54, (temp_v1_3->unk58->unk24 != 0)) && (temp_t5 = temp_a0_5->unk4, (temp_t5->unk28 != 0)) && (temp_t3 = arg1->unk144C, temp_v1_4 = temp_t3 + (temp_a0_5->unk12 * 0x10), phi_v1_2 = (WaterBox *) temp_v1_4, ((temp_v1_4 < (u32) (temp_v1_4 + (temp_t5->unk24 * 0x10))) != 0))) {
loop_19:
        if ((phi_v1_2->properties & 0x80000) != 0) {
            phi_a0 = temp_t3 + (temp_a0_5->unk12 * 0x10) + (temp_a0_5->unk4->unk24 * 0x10);
            goto block_27;
        }
        temp_a0_6 = phi_v1_2->xMin;
        if (((f32) temp_a0_6 < arg2) && (arg2 < (f32) (temp_a0_6 + phi_v1_2->xLength)) && (temp_a0_7 = phi_v1_2->zMin, ((f32) temp_a0_7 < arg3)) && (arg3 < (f32) (temp_a0_7 + phi_v1_2->zLength))) {
            *arg5 = phi_v1_2;
            *arg4 = (f32) phi_v1_2->ySurface;
            *arg6 = phi_t0;
            return 1;
        }
        phi_a0 = temp_t3 + (temp_a0_5->unk12 * 0x10) + (temp_a0_5->unk4->unk24 * 0x10);
block_27:
        temp_v1_5 = phi_v1_2 + 0x10;
        phi_v1_2 = temp_v1_5;
        if ((u32) temp_v1_5 >= phi_a0) {
            goto block_28;
        }
        goto loop_19;
    }
block_28:
    temp_t0_3 = phi_t0 + 1;
    phi_t1 += 2;
    phi_t0 = temp_t0_3;
    if (temp_t0_3 == 0x32) {
        return 0;
    }
    goto loop_14;
}

s32 func_800CA1AC(GlobalContext *globalCtx, CollisionContext *colCtx, f32 x, f32 z, f32 *ySurface, WaterBox **outWaterBox) {
    return func_800CA1E8(globalCtx, colCtx, x, z, ySurface, outWaterBox);
}

s32 func_800CA1E8(GlobalContext *globalCtx, CollisionContext *colCtx, f32 x, f32 z, f32 *ySurface, WaterBox **outWaterBox) {
    s32 sp2C;

    return func_800C9EBC((bitwise void *) x, (bitwise void *) z, x, z, ySurface, outWaterBox, &sp2C);
}

s32 func_800CA22C(void *arg0, void *arg1, void *arg2, f32 arg3, void **arg4, s32 *arg5) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_t2_2;
    s16 temp_t2_3;
    s16 temp_t2_5;
    s16 temp_t2_6;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t3_2;
    u16 temp_t0;
    u16 temp_v1_2;
    u32 temp_v1_3;
    void *temp_t1;
    void *temp_t2_4;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_4;
    void *phi_t1;
    s32 phi_a0;
    void *phi_t0;
    s32 phi_a0_2;
    void *phi_v1;
    u32 phi_t2;

    *arg5 = 0x32;
    temp_v0 = arg1->unk0;
    temp_t0 = temp_v0->unk24;
    if ((temp_t0 == 0) || (temp_v1 = temp_v0->unk28, (temp_v1 == 0))) {
        *arg4 = NULL;
        return -1;
    }
    phi_a0 = 0;
    if ((s32) temp_t0 > 0) {
        phi_t1 = temp_v1;
loop_5:
        temp_t3 = phi_t1->unkC;
        temp_t2 = (temp_t3 >> 0xD) & 0x3F;
        if (((temp_t2 == arg0->unk186E0) || (temp_t2 == 0x3F)) && ((temp_t3 & 0x80000) == 0) && (temp_t2_2 = phi_t1->unk0, temp_f0 = arg2->unk0, ((f32) temp_t2_2 < temp_f0)) && (temp_f0 < (f32) (temp_t2_2 + phi_t1->unk6)) && (temp_t2_3 = phi_t1->unk4, temp_f0_2 = arg2->unk8, ((f32) temp_t2_3 < temp_f0_2)) && (temp_f0_2 < (f32) (temp_t2_3 + phi_t1->unk8)) && (temp_f0_3 = arg2->unk4, temp_f2 = (f32) phi_t1->unk2, ((temp_f0_3 - arg3) < temp_f2)) && (temp_f2 < (temp_f0_3 + arg3))) {
            *arg4 = phi_t1;
            return phi_a0;
        }
        temp_a0 = phi_a0 + 1;
        phi_t1 += 0x10;
        phi_a0 = temp_a0;
        if (temp_a0 >= (s32) temp_t0) {
            goto block_17;
        }
        goto loop_5;
    }
block_17:
    phi_t0 = arg1;
    phi_a0_2 = 0;
loop_18:
    temp_v1_2 = phi_t0->unk13DC;
    if (((temp_v1_2 & 1) != 0) && ((temp_v1_2 & 4) == 0) && ((temp_v1_2 & 2) == 0) && (temp_t3_2 = arg1->unk144C, temp_t2_4 = arg1 + (phi_a0_2 * 0x64), temp_t1 = temp_t2_4 + 0x54, temp_v1_3 = temp_t3_2 + (temp_t2_4->unk66 * 0x10), phi_v1 = (void *) temp_v1_3, ((temp_v1_3 < (u32) (temp_v1_3 + (temp_t2_4->unk58->unk24 * 0x10))) != 0))) {
loop_22:
        if ((phi_v1->unkC & 0x80000) != 0) {
            phi_t2 = temp_t3_2 + (temp_t1->unk12 * 0x10) + (temp_t1->unk4->unk24 * 0x10);
            goto block_32;
        }
        temp_t2_5 = phi_v1->unk0;
        temp_f0_4 = arg2->unk0;
        if (((f32) temp_t2_5 < temp_f0_4) && (temp_f0_4 < (f32) (temp_t2_5 + phi_v1->unk6)) && (temp_t2_6 = phi_v1->unk4, temp_f0_5 = arg2->unk8, ((f32) temp_t2_6 < temp_f0_5)) && (temp_f0_5 < (f32) (temp_t2_6 + phi_v1->unk8)) && (temp_f0_6 = arg2->unk4, temp_f2_2 = (f32) phi_v1->unk2, ((temp_f0_6 - arg3) < temp_f2_2)) && (temp_f2_2 < (temp_f0_6 + arg3))) {
            *arg5 = phi_a0_2;
            *arg4 = phi_v1;
            return phi_a0_2;
        }
        phi_t2 = temp_t3_2 + (temp_t1->unk12 * 0x10) + (temp_t1->unk4->unk24 * 0x10);
block_32:
        temp_v1_4 = phi_v1 + 0x10;
        phi_v1 = temp_v1_4;
        if ((u32) temp_v1_4 >= phi_t2) {
            goto block_33;
        }
        goto loop_22;
    }
block_33:
    temp_a0_2 = phi_a0_2 + 1;
    phi_t0 += 2;
    phi_a0_2 = temp_a0_2;
    if (temp_a0_2 == 0x32) {
        *arg4 = NULL;
        return -1;
    }
    goto loop_18;
}

f32 func_800CA568(CollisionContext *arg0, s32 arg1, s32 arg2) {
    CollisionHeader *temp_v0;

    arg1 = arg1;
    temp_v0 = BgCheck_GetActorMeshHeader(arg0, arg2);
    if ((temp_v0 == 0) || (arg1 < 0) || (arg1 >= (s32) temp_v0->numWaterBoxes)) {
        return 0.0f;
    }
    if (arg2 == 0x32) {
        return (f32) arg0->colHeader->waterBoxes[arg1].ySurface;
    }
    return (f32) (&arg0->dyna.waterboxes.boxes[(u16) arg0->dyna.bgActors[arg2].unk12])[arg1].ySurface;
}

s32 func_800CA634(CollisionContext *arg0, void *arg1) {
    return arg1->unkC & 0xFF;
}

u16 func_800CA648(CollisionContext *arg0, void *arg1, s32 arg2) {
    CollisionHeader *sp18;
    CamData *temp_a0;
    CollisionHeader *temp_v0;

    temp_v0 = BgCheck_GetActorMeshHeader(arg0, arg2);
    if (temp_v0 == 0) {
        return 0U;
    }
    sp18 = temp_v0;
    temp_a0 = temp_v0->cameraDataList;
    if (temp_a0 == 0) {
        return 0U;
    }
    return temp_a0[func_800CA634(arg0, arg1)].cameraSType;
}

void func_800CA6B8(void) {
    func_800CA648((CollisionContext *)0x32);
}

s32 func_800CA6D8(s32 arg0, void *arg1) {
    return ((u32) arg1->unkC >> 8) & 0x1F;
}

? func_800CA6F0(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 *arg4, void **arg5, s32 *arg6) {
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_a0_6;
    s16 temp_a0_7;
    s32 temp_a0_2;
    s32 temp_t0_2;
    s32 temp_t0_3;
    s32 temp_t3;
    u16 temp_t0;
    u16 temp_v1_3;
    u32 temp_a0;
    u32 temp_t1;
    u32 temp_v1_4;
    void *temp_a0_5;
    void *temp_t2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_5;
    void *phi_v1;
    void *phi_t1;
    s32 phi_t0;
    void *phi_v1_2;
    u32 phi_a0;

    *arg5 = NULL;
    *arg6 = 0x32;
    temp_v1 = arg1->unk0;
    temp_t0 = temp_v1->unk24;
    if ((temp_t0 == 0) || (temp_a0 = temp_v1->unk28, temp_t1 = temp_a0 + (temp_t0 * 0x10), (temp_a0 == 0))) {
        goto block_28;
    }
    phi_v1 = (void *) temp_a0;
    if (temp_a0 < temp_t1) {
loop_5:
        temp_t0_2 = phi_v1->unkC;
        temp_a0_2 = (temp_t0_2 >> 0xD) & 0x3F;
        if (((temp_a0_2 == arg0->unk186E0) || (temp_a0_2 == 0x3F)) && ((temp_t0_2 & 0x80000) != 0) && (temp_a0_3 = phi_v1->unk0, ((f32) temp_a0_3 < arg2)) && (arg2 < (f32) (temp_a0_3 + phi_v1->unk6)) && (temp_a0_4 = phi_v1->unk4, ((f32) temp_a0_4 < arg3)) && (arg3 < (f32) (temp_a0_4 + phi_v1->unk8))) {
            *arg5 = phi_v1;
            *arg4 = (f32) phi_v1->unk2;
            return 1;
        }
        temp_v1_2 = phi_v1 + 0x10;
        phi_v1 = temp_v1_2;
        if ((u32) temp_v1_2 >= temp_t1) {
            goto block_14;
        }
        goto loop_5;
    }
block_14:
    phi_t1 = arg1;
    phi_t0 = 0;
loop_15:
    temp_v1_3 = phi_t1->unk13DC;
    if (((temp_v1_3 & 1) != 0) && ((temp_v1_3 & 2) == 0) && (temp_t3 = arg1->unk144C, temp_a0_5 = arg1 + (phi_t0 * 0x64), temp_t2 = temp_a0_5 + 0x54, temp_v1_4 = temp_t3 + (temp_a0_5->unk66 * 0x10), phi_v1_2 = (void *) temp_v1_4, ((temp_v1_4 < (u32) (temp_v1_4 + (temp_a0_5->unk58->unk24 * 0x10))) != 0))) {
loop_18:
        if ((phi_v1_2->unkC & 0x80000) == 0) {
            phi_a0 = temp_t3 + (temp_t2->unk12 * 0x10) + (temp_t2->unk4->unk24 * 0x10);
            goto block_26;
        }
        temp_a0_6 = phi_v1_2->unk0;
        if (((f32) temp_a0_6 < arg2) && (arg2 < (f32) (temp_a0_6 + phi_v1_2->unk6)) && (temp_a0_7 = phi_v1_2->unk4, ((f32) temp_a0_7 < arg3)) && (arg3 < (f32) (temp_a0_7 + phi_v1_2->unk8))) {
            *arg5 = phi_v1_2;
            *arg4 = (f32) phi_v1_2->unk2;
            *arg6 = phi_t0;
            return 1;
        }
        phi_a0 = temp_t3 + (temp_t2->unk12 * 0x10) + (temp_t2->unk4->unk24 * 0x10);
block_26:
        temp_v1_5 = phi_v1_2 + 0x10;
        phi_v1_2 = temp_v1_5;
        if ((u32) temp_v1_5 >= phi_a0) {
            goto block_27;
        }
        goto loop_18;
    }
block_27:
    temp_t0_3 = phi_t0 + 1;
    phi_t1 += 2;
    phi_t0 = temp_t0_3;
    if (temp_t0_3 == 0x32) {
block_28:
        return 0;
    }
    goto loop_15;
}

void func_800CA9D0(void *arg2, void *arg3, f32 *arg4, void **arg5) {
    s32 sp2C;

    func_800CA6F0(arg2, arg3, (bitwise f32) arg2, (bitwise f32) arg3, arg4, arg5, &sp2C);
}

void func_800CAA14(CollisionPoly *arg0, CollisionPoly *arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;

    BgCheck_PolygonGetNormal(arg0, &sp54, &sp50, &sp4C);
    BgCheck_PolygonGetNormal(arg1, &sp48, &sp44, &sp40);
    func_80179678(sp54, sp50, sp4C, (f32) arg0->dist, sp48, sp44, sp40, (f32) arg1->dist, arg2, arg3, arg4);
}
