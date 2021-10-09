struct _mips2c_stack_Math3D_AngleBetweenVectors {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Math3D_ColCylinderCylinderAmount {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Math3D_ColCylinderCylinderAmountAndDistance {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Math3D_ColCylinderTri {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ Vec3f *sp44;                         /* inferred */
    /* 0x48 */ Vec3f *sp48;                         /* inferred */
    /* 0x4C */ char pad4C[0x8];                     /* maybe part of sp48[3]? */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad58[0x4];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ char pad78[0x8];                     /* maybe part of sp74[3]? */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
};                                                  /* size = 0x90 */

struct _mips2c_stack_Math3D_ColSphereCylinderDistance {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Math3D_ColSphereCylinderDistanceAndAmount {}; /* size 0x0 */

struct _mips2c_stack_Math3D_ColSphereLineSeg {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad44[0x14];
};                                                  /* size = 0x58 */

struct _mips2c_stack_Math3D_ColSphereSphere {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Math3D_ColSphereSphereIntersect {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Math3D_ColSphereSphereIntersectAndDistance {}; /* size 0x0 */

struct _mips2c_stack_Math3D_ColSphereTri {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_Math3D_CrossProduct {};        /* size 0x0 */

struct _mips2c_stack_Math3D_Distance {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Math3D_DistanceS {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_Math3D_DistanceSquared {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ ? sp1C;                              /* inferred */
    /* 0x1C */ char pad1C[0xC];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Math3D_IsPointInSphere {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Math3D_LengthSquared {};       /* size 0x0 */

struct _mips2c_stack_Math3D_Lerp {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ ? sp1C;                              /* inferred */
    /* 0x1C */ char pad1C[0xC];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Math3D_NormalVector {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Math3D_Normalize {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Math3D_NormalizedDistanceFromPlane {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Math3D_NormalizedSignedDistanceFromPlane {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_Math3D_Parallel {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Math3D_ScaleAndAdd {};         /* size 0x0 */

struct _mips2c_stack_Math3D_SignedDistanceFromPlane {}; /* size 0x0 */

struct _mips2c_stack_Math3D_TriSetCoords {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_Math3D_UnitNormalVector {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Math3D_Vec3fMagnitude {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Math3D_XZBoundCheck {};        /* size 0x0 */

struct _mips2c_stack_Math3D_XZDistance {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Math3D_XZDistanceSquared {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Math3D_XZLength {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Math3D_XZLengthSquared {};     /* size 0x0 */

struct _mips2c_stack_Math3d_ColTriTri {
    /* 0x00 */ char pad0[0x40];
    /* 0x40 */ Vec3f *sp40;                         /* inferred */
    /* 0x44 */ Vec3f *sp44;                         /* inferred */
    /* 0x48 */ Vec3f *sp48;                         /* inferred */
    /* 0x4C */ Vec3f *sp4C;                         /* inferred */
    /* 0x50 */ Plane *sp50;                         /* inferred */
    /* 0x54 */ char pad54[0x4];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80179678 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80179798 {
    /* 0x00 */ f32 sp0;                             /* inferred */
    /* 0x04 */ f32 sp4;                             /* inferred */
    /* 0x08 */ f32 sp8;                             /* inferred */
    /* 0x0C */ char padC[0x4];
    /* 0x10 */ f32 sp10;                            /* inferred */
    /* 0x14 */ f32 sp14;                            /* inferred */
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad38[0xC];                     /* maybe part of sp34[4]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad54[0x8];                     /* maybe part of sp50[3]? */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ char pad60[0xC];                     /* maybe part of sp5C[4]? */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ char pad78[0x4];
    /* 0x7C */ f32 sp7C;                            /* inferred */
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80179A44 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80179B34 {};              /* size 0x0 */

struct _mips2c_stack_func_80179B94 {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0xC];                     /* maybe part of sp44[4]? */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad6C[0x4];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80179D74 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80179F64 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8017A09C {};              /* size 0x0 */

struct _mips2c_stack_func_8017A1D0 {};              /* size 0x0 */

struct _mips2c_stack_func_8017A304 {};              /* size 0x0 */

struct _mips2c_stack_func_8017A438 {};              /* size 0x0 */

struct _mips2c_stack_func_8017A7B8 {};              /* size 0x0 */

struct _mips2c_stack_func_8017A7F8 {};              /* size 0x0 */

struct _mips2c_stack_func_8017A838 {};              /* size 0x0 */

struct _mips2c_stack_func_8017A954 {};              /* size 0x0 */

struct _mips2c_stack_func_8017AA0C {
    /* 0x00 */ f32 sp0;                             /* inferred */
    /* 0x04 */ f32 sp4;                             /* inferred */
    /* 0x08 */ char pad8[0x4];
    /* 0x0C */ f32 spC;                             /* inferred */
    /* 0x10 */ char pad10[0xC];                     /* maybe part of spC[4]? */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8017ABBC {
    /* 0x00 */ f32 sp0;                             /* inferred */
    /* 0x04 */ f32 sp4;                             /* inferred */
    /* 0x08 */ f32 sp8;                             /* inferred */
    /* 0x0C */ char padC[0x4];
    /* 0x10 */ f32 sp10;                            /* inferred */
    /* 0x14 */ char pad14[0xC];                     /* maybe part of sp10[4]? */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8017AD38 {
    /* 0x00 */ char pad0[0x50];
    /* 0x50 */ u32 sp50;                            /* inferred */
    /* 0x54 */ u32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_8017B68C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8017B7F8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8017B9D8 {};              /* size 0x0 */

struct _mips2c_stack_func_8017BAD0 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x20];                    /* maybe part of sp2C[9]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_8017BD98 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8017BDE0 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8017BE30 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8017BEE0 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8017BF8C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8017C008 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8017C17C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8017C1F0 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x20];                    /* maybe part of sp2C[9]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_8017C494 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8017C540 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x20];                    /* maybe part of sp2C[9]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_8017C808 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8017C850 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8017C904 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8017C980 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8017CB08 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8017CB7C {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad58[0x10];                    /* maybe part of sp54[5]? */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad6C[0x8];                     /* maybe part of sp68[3]? */
    /* 0x74 */ f32 sp74;                            /* inferred */
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_8017CEA8 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8017CEF0 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8017CFA4 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8017D020 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8017D1AC {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8017D220 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8017D2FC {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8017D404 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8017D668 {
    /* 0x00 */ char pad0[0x4];
    /* 0x04 */ f32 sp4;                             /* inferred */
    /* 0x08 */ f32 sp8;                             /* inferred */
    /* 0x0C */ char padC[0x10];                     /* maybe part of sp8[5]? */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8017D7C0 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8017D814 {
    /* 0x00 */ char pad0[0x4];
    /* 0x04 */ f32 sp4;                             /* inferred */
    /* 0x08 */ f32 sp8;                             /* inferred */
    /* 0x0C */ f32 spC;                             /* inferred */
    /* 0x10 */ char pad10[0x8];                     /* maybe part of spC[3]? */
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad20[0x10];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8017D91C {
    /* 0x00 */ char pad0[0x4];
    /* 0x04 */ f32 sp4;                             /* inferred */
    /* 0x08 */ f32 sp8;                             /* inferred */
    /* 0x0C */ f32 spC;                             /* inferred */
    /* 0x10 */ char pad10[0x8];                     /* maybe part of spC[3]? */
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad20[0x10];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8017DA24 {
    /* 0x00 */ char pad0[0x4];
    /* 0x04 */ f32 sp4;                             /* inferred */
    /* 0x08 */ f32 sp8;                             /* inferred */
    /* 0x0C */ f32 spC;                             /* inferred */
    /* 0x10 */ char pad10[0x8];                     /* maybe part of spC[3]? */
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad20[0x10];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8017DD34 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8017E294 {};              /* size 0x0 */

struct _mips2c_stack_func_8017E350 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x1C];                    /* maybe part of sp2C[8]? */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad50[0x18];                    /* maybe part of sp4C[7]? */
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ s32 sp9C;                            /* inferred */
    /* 0xA0 */ char padA0[0x18];                    /* maybe part of sp9C[7]? */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ char padBC[0x10];                    /* maybe part of spB8[5]? */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ f32 spDC;                            /* inferred */
    /* 0xE0 */ f32 spE0;                            /* inferred */
    /* 0xE4 */ f32 spE4;                            /* inferred */
    /* 0xE8 */ f32 spE8;                            /* inferred */
    /* 0xEC */ f32 spEC;                            /* inferred */
    /* 0xF0 */ f32 spF0;                            /* inferred */
    /* 0xF4 */ f32 spF4;                            /* inferred */
};                                                  /* size = 0xF8 */

struct _mips2c_stack_func_8017F1A0 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ ? sp1C;                              /* inferred */
    /* 0x1C */ char pad1C[0xC];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8017F9C0 {};              /* size 0x0 */

struct _mips2c_stack_func_8017FA34 {};              /* size 0x0 */

struct _mips2c_stack_func_8017FAA8 {};              /* size 0x0 */

struct _mips2c_stack_func_8017FB1C {
    /* 0x00 */ char pad0[0x8];
    /* 0x08 */ f64 sp8;                             /* inferred */
    /* 0x10 */ f64 sp10;                            /* inferred */
    /* 0x18 */ f64 sp18;                            /* inferred */
    /* 0x20 */ char pad20[0x4];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x14];                    /* maybe part of sp24[6]? */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad40[0x10];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_8017FD44 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x2];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

? func_80179678(f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, void *arg8, void *arg9, void *argA); /* static */
s32 func_80179798(Vec3f *arg0, Vec3f *arg1, void *arg2, void *arg3, void *arg4, ? *arg5); /* static */
f32 func_80179A44(Vec3f *arg0, Vec3f *arg1, Vec3f *arg2); /* static */
s32 func_80179B94(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, Vec3f *arg6, f32 arg7, f32 *arg8); /* static */
? func_80179D74(f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, Vec3f *arg8, Vec3f *arg9); /* static */
s32 func_8017A09C(f32 *arg0, f32 *arg1, TriNorm *arg2, f32 arg3, f32 arg4, f32 arg5); /* static */
s32 func_8017A1D0(f32 *arg0, f32 *arg1, TriNorm *arg2, f32 arg3, f32 arg4, f32 arg5); /* static */
s32 func_8017A304(f32 *arg0, f32 *arg1, Vec3f *arg2, f32 arg3, f32 arg4, f32 arg5); /* static */
s32 func_8017A438(TriNorm *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, f32 arg4); /* static */
? func_8017AD38(Vec3f *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3); /* static */
void func_8017B68C(void *arg0, void *arg1, void *arg2, void *arg3); /* static */
f32 func_8017B9D8(Plane *arg0, TriNorm *arg1, Plane *, TriNorm *); /* static */
s32 func_8017BAD0(f32 *arg0, f32 *arg1, f32 *arg2, Vec3f *arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32); /* static */
void func_8017BD98(f32 *arg3, f32 *arg4, Vec3f *arg5, f32 arg6, f32, f32, f32); /* static */
void func_8017BDE0(f32 *arg3, f32 *arg4);           /* static */
? func_8017BE30(f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 *arg7, f32 *arg8, f32 *arg9, f32 argA); /* static */
? func_8017BEE0(f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 *arg7, f32 *arg8, f32 *arg9, f32 argA); /* static */
s32 func_8017BF8C(f32 arg3, f32 *arg4, f32 *arg5, f32, f32, f32); /* static */
s32 func_8017C008(f32 *arg0, f32 *arg1, Vec3f *arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 *arg9, f32 argA, f32 argB); /* static */
? func_8017C17C(void *arg3, f32 *arg4, f32 *arg5, Vec3f *arg6); /* static */
s32 func_8017C1F0(f32 *arg0, f32 *arg1, f32 *arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7); /* static */
? func_8017C494(f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 *arg7, f32 *arg8, f32 *arg9, f32 argA); /* static */
s32 func_8017C540(f32 *arg0, f32 *arg1, f32 *arg2, TriNorm *arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32); /* static */
void func_8017C808(f32 *arg3, f32 *arg4, TriNorm *arg5, f32 arg6, Vec3f *, f32, f32, f32, f32); /* static */
? func_8017C850(f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 *arg7, f32 *arg8, f32 *arg9); /* static */
s32 func_8017C904(f32 arg3, f32 *arg4, f32 *arg5, f32 *, f32, f32, f32); /* static */
? func_8017C980(f32 *arg0, f32 *arg1, TriNorm *arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 *arg9, f32 argA, f32 argB); /* static */
? func_8017CB08(f32 *arg3, f32 *arg4, f32 *arg5, TriNorm *arg6); /* static */
s32 func_8017CB7C(f32 *arg0, f32 *arg1, f32 *arg2, TriNorm *arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32); /* static */
void func_8017CEA8(f32 *arg3, f32 *arg4, TriNorm *arg5, f32 arg6, Vec3f *, f32, f32, f32, f32); /* static */
? func_8017CEF0(f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 *arg7, f32 *arg8, f32 *arg9); /* static */
s32 func_8017CFA4(f32 arg3, f32 *arg4, f32 *arg5, f32, f32, f32); /* static */
? func_8017D020(f32 *arg0, f32 *arg1, TriNorm *arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 *arg9, f32 argA, f32 argB); /* static */
? func_8017D1AC(void *arg3, f32 *arg4, f32 *arg5, TriNorm *arg6); /* static */
s32 func_8017D220(f32 arg0, f32 arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4, Vec3f *); /* static */
s32 func_8017D2FC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, Vec3f *arg4, Vec3f *arg5, Vec3f *arg6, Vec3f *arg7); /* static */
s32 func_8017D404(f32 *arg0, f32 *arg1, f32 *arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, Vec3f *arg7, Vec3f *arg8, Vec3f *arg9, Vec3f *argA, s32); /* static */
? func_8017D668(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 *arg6, f32 *arg7, f32 *arg8); /* static */
void func_8017D7C0(f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 *arg6); /* static */
s32 func_8017D814(TriNorm *arg0, f32 arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *); /* static */
s32 func_8017D91C(TriNorm *arg0, f32 arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *); /* static */
s32 func_8017DA24(Vec3f *arg0, f32 arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *, f32 *); /* static */
s32 func_8017E294(void *arg0, Vec3f *arg1);         /* static */
void func_8017F1A0(Cylinder16 *arg0, TriNorm *arg1); /* static */
? func_8017F9C0(void *arg0, f32 arg1, f32 arg2);    /* static */
? func_8017FA34(void *arg0, f32 arg1, f32 arg2);    /* static */
? func_8017FAA8(void *arg0, f32 arg1, f32 arg2);    /* static */
? func_8017FB1C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 *arg7, f32 *arg8, f32 *arg9, f32 *argA); /* static */
void func_8017FD44(Vec3f *arg0, void *arg1, void *arg2, f32 arg3); /* static */
static f32 D_801FBC28;
static f32 D_801FBC2C;
static f32 D_801FBC30;
static Sphere16 D_801FBC38;                         /* type too large by 6 */
static s16 D_801FBC3A;
static s16 D_801FBC3E;
static Sphere16 D_801FBC40;                         /* type too large by 6 */
static s16 D_801FBC44;
static s16 D_801FBC46;
static Vec3f D_801FBC48;
static Vec3f D_801FBC58;
static f32 D_801FBCE0;
static f32 D_801FBCE4;
static f32 D_801FBCE8;
static f32 D_801FBCF0;
static f32 D_801FBCF4;
static f32 D_801FBCF8;
static f32 D_801FBD00;
static f32 D_801FBD04;
static f32 D_801FBD08;
static Vec3f D_801FBD10;
static Vec3f D_801FBD20;                            /* type too large by 8 */
static f32 D_801FBD24;
static f32 D_801FBD28;
static Vec3f D_801FBD30;                            /* type too large by 8 */
static f32 D_801FBD34;
static f32 D_801FBD38;
static Vec3f D_801FBD40;                            /* type too large by 8 */
static f32 D_801FBD44;
static f32 D_801FBD48;
static Vec3f D_801FBD50;                            /* type too large by 8 */
static f32 D_801FBD54;
static f32 D_801FBD58;
static Vec3f D_801FBD70;                            /* type too large by 8 */
static f32 D_801FBD74;
static f32 D_801FBD78;
static Vec3f D_801FBDB0;                            /* type too large by 8 */
static f32 D_801FBDB4;
static f32 D_801FBDB8;
static Vec3f D_801FBDC0;
static f32 D_801FBDDC;
static f32 D_801FBDE0;
Vec3f D_801FBBF0;
f32 D_801FBC8C;
f32 D_801FBC90;
f32 D_801FBC98;
f32 D_801FBCA4;
f32 D_801FBCAC;
f32 D_801FBCB0;
f32 D_801FBCB4;
f32 D_801FBCB8;
f32 D_801FBCBC;
f32 D_801FBCC0;
f32 D_801FBCC4;
f32 D_801FBCC8;
f32 D_801FBCCC;
f32 D_801FBCD0;
f32 D_801FBCD4;
f32 D_801FBCD8;
f32 D_801FBCDC;
Vec3f D_801FBD80[2];
Vec3f D_801FBD98;
Vec3f D_801FBDA4;
Vec3f D_801FBDE8;
LineSegment Math3D_ColSphereTri_line;
Vec3f Math3D_ColSphereTri_point;
Vec3f Math3D_NormalVector_temp1;
Vec3f Math3D_NormalVector_temp2;
Vec3f Math3D_UnitNormalVector_temp;

f32 Math3D_Normalize(Vec3f *vec) {
    f32 temp_f0;
    f32 temp_f2;

    temp_f0 = Math3D_Vec3fMagnitude(vec);
    if (fabsf(temp_f0) < 0.008f) {
        return 0.0f;
    }
    temp_f2 = 1.0f / temp_f0;
    vec->x *= temp_f2;
    vec->y *= temp_f2;
    vec->z *= temp_f2;
    return temp_f0;
}

? func_80179678(f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, void *arg8, void *arg9, void *argA) {
    ? sp34;

    if (func_80179B94(arg2, arg3, arg4, arg5, arg6, arg7, D_801FBD80) == 0) {
        return 0;
    }
    Math_Vec3f_Copy(&D_801FBD98, D_801FBD80);
    D_801FBDA4.x = ((D_801FBD80 + 0xC)->x * 100.0f) + D_801FBD80->x;
    D_801FBDA4.y = (*(D_801FBD80 + 0x10) * 100.0f) + D_801FBD80->y;
    D_801FBDA4.z = (*(D_801FBD80 + 0x14) * 100.0f) + D_801FBD80->z;
    if (func_80179798(&D_801FBD98, &D_801FBDA4, arg8, arg9, argA, &sp34) == 0) {
        return 0;
    }
    return 1;
}

s32 func_80179798(Vec3f *arg0, Vec3f *arg1, void *arg2, void *arg3, void *arg4, ? *arg5) {
    f32 sp7C;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp5C;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 sp8;
    f32 sp4;
    f32 sp0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f16_4;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f8_3;
    f32 temp_f8_4;

    temp_f16 = arg0->x;
    sp74 = arg1->x - temp_f16;
    temp_f18 = arg0->y;
    sp70 = arg1->y - temp_f18;
    sp2C = arg0->z;
    sp6C = arg1->z - sp2C;
    sp28 = arg2->unk0;
    sp24 = arg2->unk4;
    temp_f2 = arg3->unk0 - sp28;
    temp_f12 = arg3->unk4 - sp24;
    sp20 = arg2->unk8;
    sp34 = temp_f16;
    temp_f14 = arg3->unk8 - sp20;
    sp30 = temp_f18;
    temp_f8 = (temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14);
    temp_f0 = fabsf(temp_f8);
    sp1C = temp_f8;
    if (temp_f0 < 0.008f) {
        return 0;
    }
    temp_f16_2 = 1.0f / sp1C;
    sp0 = sp74;
    sp4 = sp70;
    sp8 = sp6C;
    temp_f0_2 = ((sp74 * temp_f2) + (sp70 * temp_f12) + (sp6C * temp_f14)) * temp_f16_2;
    temp_f8_2 = sp34 - sp28;
    sp5C = temp_f0_2;
    temp_f6 = sp30 - sp24;
    sp18 = temp_f8_2;
    sp14 = temp_f6;
    sp10 = sp2C - sp20;
    temp_f18_2 = ((temp_f8_2 * temp_f2) + (temp_f12 * temp_f6) + (temp_f14 * sp10)) * temp_f16_2;
    temp_f4 = sp0 - (temp_f2 * temp_f0_2);
    sp4C = temp_f4;
    sp50 = sp70 - (temp_f12 * temp_f0_2);
    temp_f8_3 = sp6C - (temp_f14 * sp5C);
    sp30 = temp_f8_3;
    temp_f16_3 = (sp4C * temp_f4) + (sp50 * sp50) + (temp_f8_3 * temp_f8_3);
    temp_f0_3 = fabsf(temp_f16_3);
    sp7C = temp_f16_3;
    if (temp_f0_3 < 0.008f) {
        return 0;
    }
    temp_f8_4 = sp14 - (temp_f12 * temp_f18_2);
    sp44 = temp_f8_4;
    temp_f10 = sp10 - (temp_f14 * temp_f18_2);
    sp48 = temp_f10;
    temp_f0_4 = -((sp4C * (sp18 - (temp_f2 * temp_f18_2))) + (sp50 * temp_f8_4) + (sp30 * temp_f10)) / sp7C;
    arg4->unk0 = (f32) ((sp74 * temp_f0_4) + sp34);
    arg4->unk4 = (f32) ((sp70 * temp_f0_4) + arg0->y);
    arg4->unk8 = (f32) ((sp6C * temp_f0_4) + arg0->z);
    temp_f16_4 = (sp5C * temp_f0_4) + temp_f18_2;
    arg5->unk0 = (f32) ((temp_f2 * temp_f16_4) + arg2->unk0);
    arg5->unk4 = (f32) ((temp_f12 * temp_f16_4) + arg2->unk4);
    arg5->unk8 = (f32) ((temp_f14 * temp_f16_4) + arg2->unk8);
    return 1;
}

f32 func_80179A44(Vec3f *arg0, Vec3f *arg1, Vec3f *arg2) {
    f32 sp1C;
    Vec3f *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;

    temp_a0 = arg0 + 0xC;
    arg0 = arg0;
    temp_f0 = Math3D_LengthSquared(temp_a0);
    temp_f14 = temp_f0;
    if (fabsf(temp_f0) < 0.008f) {
        arg0 = arg0;
        sp1C = temp_f14;
        Math_Vec3f_Copy(arg2, arg1);
    }
    temp_f0_2 = arg0->x;
    temp_f2 = arg0->unkC;
    temp_f12 = (((arg1->x - temp_f0_2) * temp_f2) + ((arg1->y - arg0->y) * arg0->unk10) + ((arg1->z - arg0->z) * arg0->unk14)) / temp_f14;
    arg2->x = (temp_f2 * temp_f12) + temp_f0_2;
    arg2->y = (arg0->unk10 * temp_f12) + arg0->y;
    arg2->z = (arg0->unk14 * temp_f12) + arg0->z;
    return temp_f12;
}

void func_80179B34(f32 fParm1, f32 fParm2, f32 fParm5, f32 fParm6, f32 param_5, f32 param_6, f32 param_7, f32 *param_8, f32 *param_9) {
    *param_8 = ((fParm2 * param_7) - (fParm6 * param_6)) / param_5;
    *param_9 = ((fParm5 * param_6) - (fParm1 * param_7)) / param_5;
}

s32 func_80179B94(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 *arg8) {
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp44;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;

    sp60 = arg0;
    sp64 = arg1;
    temp_a1 = &sp54;
    sp68 = arg2;
    sp5C = arg6;
    sp58 = arg5;
    sp54 = arg4;
    Math3D_CrossProduct((Vec3f *) &sp60, (Vec3f *) temp_a1, arg8 + 0xC);
    sp44 = arg8->unkC;
    temp_f14 = fabsf(sp44);
    if ((temp_f14 < 0.008f) && (fabsf(arg8->unk10) < 0.008f) && (fabsf(arg8->unk14) < 0.008f)) {
        return 0;
    }
    temp_f16 = arg8->unk10;
    temp_f18 = arg8->unk14;
    temp_f12 = fabsf(temp_f16);
    temp_f0 = fabsf(temp_f18);
    if ((temp_f12 <= temp_f14) && (temp_f0 <= temp_f14)) {
        func_80179B34(arg1, arg2, arg5, arg6, sp44, arg3, arg7, arg8 + 4, arg8 + 8);
        arg8->unk0 = 0.0f;
    } else if ((temp_f14 <= temp_f12) && (temp_f0 <= temp_f12)) {
        func_80179B34(arg2, arg0, arg6, arg4, temp_f16, arg3, arg7, arg8 + 8, arg8);
        arg8->unk4 = 0.0f;
    } else {
        func_80179B34(arg0, arg1, arg4, arg5, temp_f18, arg3, arg7, arg8, arg8 + 4);
        arg8->unk8 = 0.0f;
    }
    return 1;
}

? func_80179D74(f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, Vec3f *arg8, Vec3f *arg9) {
    if (func_80179B94(arg2, arg3, arg4, arg5, arg6, arg7, &D_801FBDC0) == 0) {
        return 0;
    }
    func_80179A44(&D_801FBDC0, arg8, arg9);
    return 1;
}

void Math3D_ScaleAndAdd(Vec3f *a, Vec3f *b, f32 scale, Vec3f *dst) {
    dst->x = (b->x * scale) + a->x;
    dst->y = (b->y * scale) + a->y;
    dst->z = (b->z * scale) + a->z;
}

void Math3D_Lerp(Vec3f *a, Vec3f *b, f32 t, Vec3f *dst) {
    ? sp1C;

    Math_Vec3f_Diff(b, a, (Vec3f *) &sp1C);
    Math3D_ScaleAndAdd(a, (Vec3f *) &sp1C, t, dst);
}

s32 Math3D_Parallel(Vec3f *a, Vec3f *b) {
    f32 sp1C;

    Math3D_AngleBetweenVectors(a, b, &sp1C);
    return (bitwise s32) sp1C;
}

s32 Math3D_AngleBetweenVectors(Vec3f *a, Vec3f *b, f32 *angle) {
    f32 sp18;
    Vec3f *temp_a0;
    f32 temp_f12;

    temp_a0 = a;
    a = a;
    sp18 = Math3D_Vec3fMagnitude(temp_a0);
    temp_f12 = Math3D_Vec3fMagnitude(b) * sp18;
    if (fabsf(temp_f12) < 0.008f) {
        *angle = 0.0f;
        return 1;
    }
    *angle = ((a->x * b->x) + (a->y * b->y) + (a->z * b->z)) / temp_f12;
    return 0;
}

void func_80179F64(Vec3f *param_1, Vec3f *param_2, Vec3f *param_3) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 *temp_a0;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f4;
    f32 temp_f6;

    temp_a0 = &sp28;
    sp28 = param_1->x * -1.0f;
    sp2C = param_1->y * -1.0f;
    temp_f4 = param_1->z;
    param_1 = param_1;
    temp_f6 = temp_f4 * -1.0f;
    sp30 = temp_f6;
    temp_f0 = (bitwise f32) Math3D_Parallel((Vec3f *) temp_a0, param_2);
    temp_f16 = param_2->x * temp_f0;
    temp_f18 = param_2->y * temp_f0;
    sp24 = param_2->z * temp_f0;
    param_3->x = (2.0f * (param_1->x + temp_f16)) + sp28;
    param_3->y = (2.0f * (param_1->y + temp_f18)) + sp2C;
    param_3->z = (2.0f * (param_1->z + sp24)) + temp_f6;
}

s32 Math3D_XZBoundCheck(f32 xMin, f32 xMax, f32 zMin, f32 zMax, f32 x, f32 z) {
    if ((xMin <= x) && (x <= xMax) && (zMin <= z) && (z <= zMax)) {
        return 1;
    }
    return 0;
}

s32 func_8017A09C(f32 *arg0, f32 *arg1, TriNorm *arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 phi_f12;
    f32 phi_f14;
    f32 phi_f12_2;
    f32 phi_f14_2;
    f32 phi_f12_3;
    f32 phi_f14_3;
    f32 phi_f12_4;
    f32 phi_f14_4;

    temp_f0 = arg0->unk0;
    temp_f2 = arg1->unk0;
    if (temp_f0 < temp_f2) {
        phi_f12 = temp_f0;
        phi_f14 = temp_f2;
    } else {
        phi_f12 = temp_f2;
        phi_f14 = temp_f0;
    }
    temp_f0_2 = arg2->vtx[0].x;
    phi_f12_2 = phi_f12;
    phi_f14_2 = phi_f14;
    if (temp_f0_2 < phi_f12) {
        phi_f12_2 = temp_f0_2;
    } else if (phi_f14 < temp_f0_2) {
        phi_f14_2 = temp_f0_2;
    }
    if ((arg3 < (phi_f12_2 - arg5)) || ((phi_f14_2 + arg5) < arg3)) {
        return 0;
    }
    temp_f2_2 = arg0->unk4;
    temp_f16 = arg1->unk4;
    if (temp_f2_2 < temp_f16) {
        phi_f12_3 = temp_f2_2;
        phi_f14_3 = temp_f16;
    } else {
        phi_f12_3 = temp_f16;
        phi_f14_3 = temp_f2_2;
    }
    temp_f2_3 = arg2->vtx[0].y;
    phi_f12_4 = phi_f12_3;
    phi_f14_4 = phi_f14_3;
    if (temp_f2_3 < phi_f12_3) {
        phi_f12_4 = temp_f2_3;
    } else if (phi_f14_3 < temp_f2_3) {
        phi_f14_4 = temp_f2_3;
    }
    if ((arg4 < (phi_f12_4 - arg5)) || ((phi_f14_4 + arg5) < arg4)) {
        return 0;
    }
    return 1;
}

s32 func_8017A1D0(f32 *arg0, f32 *arg1, TriNorm *arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f16;
    f32 temp_f2;
    f32 phi_f12;
    f32 phi_f14;
    f32 phi_f12_2;
    f32 phi_f14_2;
    f32 phi_f12_3;
    f32 phi_f14_3;
    f32 phi_f12_4;
    f32 phi_f14_4;

    temp_f0 = arg0->unk8;
    temp_f2 = arg1->unk8;
    if (temp_f0 < temp_f2) {
        phi_f12 = temp_f0;
        phi_f14 = temp_f2;
    } else {
        phi_f12 = temp_f2;
        phi_f14 = temp_f0;
    }
    temp_f0_2 = arg2->vtx[0].z;
    phi_f12_2 = phi_f12;
    phi_f14_2 = phi_f14;
    if (temp_f0_2 < phi_f12) {
        phi_f12_2 = temp_f0_2;
    } else if (phi_f14 < temp_f0_2) {
        phi_f14_2 = temp_f0_2;
    }
    if ((arg4 < (phi_f12_2 - arg5)) || ((phi_f14_2 + arg5) < arg4)) {
        return 0;
    }
    temp_f0_3 = arg0->unk4;
    temp_f16 = arg1->unk4;
    if (temp_f0_3 < temp_f16) {
        phi_f12_3 = temp_f0_3;
        phi_f14_3 = temp_f16;
    } else {
        phi_f12_3 = temp_f16;
        phi_f14_3 = temp_f0_3;
    }
    temp_f0_4 = arg2->vtx[0].y;
    phi_f12_4 = phi_f12_3;
    phi_f14_4 = phi_f14_3;
    if (temp_f0_4 < phi_f12_3) {
        phi_f12_4 = temp_f0_4;
    } else if (phi_f14_3 < temp_f0_4) {
        phi_f14_4 = temp_f0_4;
    }
    if ((arg3 < (phi_f12_4 - arg5)) || ((phi_f14_4 + arg5) < arg3)) {
        return 0;
    }
    return 1;
}

s32 func_8017A304(f32 *arg0, f32 *arg1, Vec3f *arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f16;
    f32 temp_f2;
    f32 phi_f12;
    f32 phi_f14;
    f32 phi_f12_2;
    f32 phi_f14_2;
    f32 phi_f12_3;
    f32 phi_f14_3;
    f32 phi_f12_4;
    f32 phi_f14_4;

    temp_f0 = arg0->unk0;
    temp_f2 = arg1->unk0;
    if (temp_f0 < temp_f2) {
        phi_f12 = temp_f0;
        phi_f14 = temp_f2;
    } else {
        phi_f12 = temp_f2;
        phi_f14 = temp_f0;
    }
    temp_f0_2 = arg2->x;
    phi_f12_2 = phi_f12;
    phi_f14_2 = phi_f14;
    if (temp_f0_2 < phi_f12) {
        phi_f12_2 = temp_f0_2;
    } else if (phi_f14 < temp_f0_2) {
        phi_f14_2 = temp_f0_2;
    }
    if ((arg4 < (phi_f12_2 - arg5)) || ((phi_f14_2 + arg5) < arg4)) {
        return 0;
    }
    temp_f0_3 = arg0->unk8;
    temp_f16 = arg1->unk8;
    if (temp_f0_3 < temp_f16) {
        phi_f12_3 = temp_f0_3;
        phi_f14_3 = temp_f16;
    } else {
        phi_f12_3 = temp_f16;
        phi_f14_3 = temp_f0_3;
    }
    temp_f0_4 = arg2->z;
    phi_f12_4 = phi_f12_3;
    phi_f14_4 = phi_f14_3;
    if (temp_f0_4 < phi_f12_3) {
        phi_f12_4 = temp_f0_4;
    } else if (phi_f14_3 < temp_f0_4) {
        phi_f14_4 = temp_f0_4;
    }
    if ((arg3 < (phi_f12_4 - arg5)) || ((phi_f14_4 + arg5) < arg3)) {
        return 0;
    }
    return 1;
}

s32 func_8017A438(TriNorm *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, f32 arg4) {
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f12_6;
    f32 temp_f12_7;
    f32 temp_f12_8;
    f32 temp_f12_9;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 phi_f0;
    f32 phi_f2;
    f32 phi_f0_2;
    f32 phi_f2_2;
    f32 phi_f0_3;
    f32 phi_f2_3;
    f32 phi_f0_4;
    f32 phi_f2_4;
    f32 phi_f0_5;
    f32 phi_f2_5;
    f32 phi_f0_6;
    f32 phi_f2_6;

    temp_f12 = arg0->vtx[0].x;
    temp_f14 = arg1->x;
    if (temp_f12 < temp_f14) {
        phi_f0 = temp_f12;
        phi_f2 = temp_f14;
    } else {
        phi_f0 = temp_f14;
        phi_f2 = temp_f12;
    }
    temp_f12_2 = arg2->x;
    phi_f0_2 = phi_f0;
    phi_f2_2 = phi_f2;
    if (temp_f12_2 < phi_f0) {
        phi_f0_2 = temp_f12_2;
    } else if (phi_f2 < temp_f12_2) {
        phi_f2_2 = temp_f12_2;
    }
    temp_f12_3 = arg3->x;
    if ((temp_f12_3 < (phi_f0_2 - arg4)) || ((phi_f2_2 + arg4) < temp_f12_3)) {
        return 0;
    }
    temp_f12_4 = arg0->vtx[0].z;
    temp_f16 = arg1->z;
    if (temp_f12_4 < temp_f16) {
        phi_f0_3 = temp_f12_4;
        phi_f2_3 = temp_f16;
    } else {
        phi_f0_3 = temp_f16;
        phi_f2_3 = temp_f12_4;
    }
    temp_f12_5 = arg2->z;
    phi_f0_4 = phi_f0_3;
    phi_f2_4 = phi_f2_3;
    if (temp_f12_5 < phi_f0_3) {
        phi_f0_4 = temp_f12_5;
    } else if (phi_f2_3 < temp_f12_5) {
        phi_f2_4 = temp_f12_5;
    }
    temp_f12_6 = arg3->z;
    if ((temp_f12_6 < (phi_f0_4 - arg4)) || ((phi_f2_4 + arg4) < temp_f12_6)) {
        return 0;
    }
    temp_f12_7 = arg0->vtx[0].y;
    temp_f16_2 = arg1->y;
    if (temp_f12_7 < temp_f16_2) {
        phi_f0_5 = temp_f12_7;
        phi_f2_5 = temp_f16_2;
    } else {
        phi_f0_5 = temp_f16_2;
        phi_f2_5 = temp_f12_7;
    }
    temp_f12_8 = arg2->y;
    phi_f0_6 = phi_f0_5;
    phi_f2_6 = phi_f2_5;
    if (temp_f12_8 < phi_f0_5) {
        phi_f0_6 = temp_f12_8;
    } else if (phi_f2_5 < temp_f12_8) {
        phi_f2_6 = temp_f12_8;
    }
    temp_f12_9 = arg3->y;
    if ((temp_f12_9 < (phi_f0_6 - arg4)) || ((phi_f2_6 + arg4) < temp_f12_9)) {
        return 0;
    }
    return 1;
}

f32 Math3D_XZLengthSquared(f32 x, f32 z) {
    return (x * x) + (z * z);
}

f32 Math3D_XZLength(f32 x, f32 z) {
    return sqrtf(Math3D_XZLengthSquared(x, z));
}

f32 Math3D_XZDistanceSquared(f32 x1, f32 x2, f32 z1, f32 z2) {
    return (bitwise f32) (bitwise s32) Math3D_XZLengthSquared(x1 - z1, x2 - z2);
}

f32 Math3D_XZDistance(f32 x1, f32 x2, f32 z1, f32 z2) {
    return sqrtf(Math3D_XZDistanceSquared(x1, x2, z1, z2));
}

f32 Math3D_LengthSquared(Vec3f *vec) {
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;

    temp_f2 = vec->x;
    temp_f12 = vec->y;
    temp_f14 = vec->z;
    return (temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14);
}

f32 Math3D_Vec3fMagnitude(Vec3f *vec) {
    return sqrtf(Math3D_LengthSquared(vec));
}

f32 Math3D_DistanceSquared(Vec3f *a, Vec3f *b) {
    ? sp1C;

    Math_Vec3f_Diff(a, b, (Vec3f *) &sp1C);
    return (bitwise f32) (bitwise s32) Math3D_LengthSquared((Vec3f *) &sp1C);
}

f32 Math3D_Distance(Vec3f *a, Vec3f *b) {
    return (bitwise f32) (bitwise s32) Math_Vec3f_DistXYZ(a, b);
}

f32 Math3D_DistanceS(Vec3s *s, Vec3f *f) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 *temp_a0;

    temp_a0 = &sp1C;
    sp1C = (f32) s->x - f->x;
    sp20 = (f32) s->y - f->y;
    sp24 = (f32) s->z - f->z;
    return (bitwise f32) (bitwise s32) Math3D_Vec3fMagnitude((Vec3f *) temp_a0);
}

f32 func_8017A7B8(f32 *param_1, f32 *param_2, f32 param_3, f32 param_4) {
    return ((param_1->unk0 - param_3) * (param_2->unk4 - param_4)) - ((param_1->unk4 - param_4) * (param_2->unk0 - param_3));
}

f32 func_8017A7F8(f32 *param_1, f32 *param_2, f32 param_3, f32 param_4) {
    return ((param_1->unk4 - param_3) * (param_2->unk8 - param_4)) - ((param_1->unk8 - param_4) * (param_2->unk4 - param_3));
}

f32 func_8017A838(f32 *param_1, f32 *param_2, f32 param_3, f32 param_4) {
    return ((param_1->unk8 - param_3) * (param_2->unk0 - param_4)) - ((param_1->unk0 - param_4) * (param_2->unk8 - param_3));
}

void Math3D_CrossProduct(Vec3f *a, Vec3f *b, Vec3f *res) {
    res->x = (a->y * b->z) - (a->z * b->y);
    res->y = (a->z * b->x) - (a->x * b->z);
    res->z = (a->x * b->y) - (a->y * b->x);
}

void Math3D_NormalVector(Vec3f *a, Vec3f *b, Vec3f *c, Vec3f *res) {
    Math_Vec3f_Diff(b, a, &Math3D_NormalVector_temp1);
    Math_Vec3f_Diff(c, a, &Math3D_NormalVector_temp2);
    Math3D_CrossProduct(&Math3D_NormalVector_temp1, &Math3D_NormalVector_temp2, res);
}

u32 func_8017A954(Vec3f *param_1, Vec3f *param_2, Vec3f *param_3) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    u32 phi_v1;
    u32 phi_v1_2;
    u32 phi_v1_3;

    temp_f0 = param_1->x;
    phi_v1_3 = 0U;
    if (param_3->x < temp_f0) {
        phi_v1_3 = 1U;
    } else if (temp_f0 < param_2->x) {
        phi_v1_3 = 2U;
    }
    temp_f0_2 = param_1->y;
    phi_v1_2 = phi_v1_3;
    if (param_3->y < temp_f0_2) {
        phi_v1_2 = phi_v1_3 | 4;
    } else if (temp_f0_2 < param_2->y) {
        phi_v1_2 = phi_v1_3 | 8;
    }
    temp_f0_3 = param_1->z;
    phi_v1 = phi_v1_2;
    if (param_3->z < temp_f0_3) {
        phi_v1 = phi_v1_2 | 0x10;
    } else if (temp_f0_3 < param_2->z) {
        phi_v1 = phi_v1_2 | 0x20;
    }
    return phi_v1;
}

u32 func_8017AA0C(Vec3f *param_1, Vec3f *param_2, Vec3f *param_3) {
    f32 sp30;
    f32 sp28;
    f32 sp20;
    f32 sp1C;
    f32 spC;
    f32 sp4;
    f32 sp0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f6;
    f32 temp_f6_2;
    u32 phi_v1;
    u32 phi_v1_2;
    u32 phi_v1_3;
    u32 phi_v1_4;
    u32 phi_v1_5;
    u32 phi_v1_6;
    u32 phi_v1_7;
    u32 phi_v1_8;
    u32 phi_v1_9;
    u32 phi_v1_10;
    u32 phi_v1_11;
    u32 phi_v1_12;

    sp30 = param_2->x;
    temp_f2 = param_3->y;
    sp28 = param_1->x;
    temp_f12 = param_1->y;
    temp_f0 = temp_f12 - sp28;
    phi_v1_12 = 0U;
    if ((temp_f2 - sp30) < temp_f0) {
        phi_v1_12 = 1U;
    }
    temp_f6 = param_3->x;
    sp1C = temp_f6;
    temp_f14 = param_2->y;
    temp_f0_2 = sp28 + temp_f12;
    phi_v1_11 = phi_v1_12;
    if (temp_f0 < (temp_f14 - sp1C)) {
        phi_v1_11 = phi_v1_12 | 2;
    }
    phi_v1_10 = phi_v1_11;
    if ((temp_f6 + temp_f2) < temp_f0_2) {
        phi_v1_10 = phi_v1_11 | 4;
    }
    phi_v1_9 = phi_v1_10;
    if (temp_f0_2 < (sp30 + temp_f14)) {
        phi_v1_9 = phi_v1_10 | 8;
    }
    sp20 = param_2->z;
    temp_f18 = param_1->z;
    temp_f16 = -sp20;
    spC = -temp_f18;
    temp_f0_3 = spC + temp_f12;
    phi_v1_8 = phi_v1_9;
    if ((temp_f16 + temp_f2) < temp_f0_3) {
        phi_v1_8 = phi_v1_9 | 0x10;
    }
    temp_f6_2 = param_3->z;
    sp4 = temp_f6_2;
    sp0 = -sp4;
    temp_f0_4 = temp_f18 + temp_f12;
    phi_v1_7 = phi_v1_8;
    if (temp_f0_3 < (temp_f14 - sp4)) {
        phi_v1_7 = phi_v1_8 | 0x20;
    }
    phi_v1_6 = phi_v1_7;
    if ((temp_f6_2 + temp_f2) < temp_f0_4) {
        phi_v1_6 = phi_v1_7 | 0x40;
    }
    temp_f0_5 = spC + sp28;
    phi_v1_5 = phi_v1_6;
    if (temp_f0_4 < (sp20 + temp_f14)) {
        phi_v1_5 = phi_v1_6 | 0x80;
    }
    phi_v1_4 = phi_v1_5;
    if ((temp_f16 + sp1C) < temp_f0_5) {
        phi_v1_4 = phi_v1_5 | 0x100;
    }
    temp_f0_6 = temp_f18 + sp28;
    phi_v1_3 = phi_v1_4;
    if (temp_f0_5 < (sp0 + sp30)) {
        phi_v1_3 = phi_v1_4 | 0x200;
    }
    phi_v1_2 = phi_v1_3;
    if ((sp4 + sp1C) < temp_f0_6) {
        phi_v1_2 = phi_v1_3 | 0x400;
    }
    phi_v1 = phi_v1_2;
    if (temp_f0_6 < (sp20 + sp30)) {
        phi_v1 = phi_v1_2 | 0x800;
    }
    return phi_v1;
}

u32 func_8017ABBC(Vec3f *param_1, Vec3f *param_2, Vec3f *param_3) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp10;
    f32 sp8;
    f32 sp4;
    f32 sp0;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f8;
    u32 phi_v1;
    u32 phi_v1_2;
    u32 phi_v1_3;
    u32 phi_v1_4;
    u32 phi_v1_5;
    u32 phi_v1_6;
    u32 phi_v1_7;
    u32 phi_v1_8;

    sp28 = param_3->x;
    sp24 = param_3->y;
    temp_f4 = sp28 + sp24;
    sp20 = temp_f4;
    temp_f18 = param_1->y;
    temp_f14 = param_1->x;
    temp_f16 = param_3->z;
    sp10 = temp_f14 + temp_f18;
    temp_f0 = param_1->z;
    phi_v1_8 = 0U;
    if ((temp_f4 + temp_f16) < (sp10 + temp_f0)) {
        phi_v1_8 = 1U;
    }
    sp8 = -param_2->x;
    sp0 = -temp_f14;
    temp_f12 = sp0 + temp_f18;
    temp_f2 = sp8 + sp24;
    phi_v1_7 = phi_v1_8;
    if ((temp_f2 + temp_f16) < (temp_f12 + temp_f0)) {
        phi_v1_7 = phi_v1_8 | 2;
    }
    sp24 = param_2->z;
    phi_v1_6 = phi_v1_7;
    if ((temp_f2 - sp24) < (temp_f12 - temp_f0)) {
        phi_v1_6 = phi_v1_7 | 4;
    }
    phi_v1_5 = phi_v1_6;
    if ((sp20 - sp24) < (sp10 - temp_f0)) {
        phi_v1_5 = phi_v1_6 | 8;
    }
    temp_f2_2 = param_2->y;
    temp_f8 = sp0 - temp_f18;
    temp_f12_2 = sp8 - temp_f2_2;
    phi_v1_4 = phi_v1_5;
    if (((sp28 - temp_f2_2) + temp_f16) < ((temp_f14 - temp_f18) + temp_f0)) {
        phi_v1_4 = phi_v1_5 | 0x10;
    }
    temp_f14_2 = temp_f12_2 + temp_f16;
    sp10 = temp_f8;
    temp_f10 = temp_f8 + temp_f0;
    sp4 = temp_f10;
    phi_v1_3 = phi_v1_4;
    if (temp_f14_2 < temp_f10) {
        phi_v1_3 = phi_v1_4 | 0x20;
    }
    phi_v1_2 = phi_v1_3;
    if (temp_f14_2 < sp4) {
        phi_v1_2 = phi_v1_3 | 0x40;
    }
    phi_v1 = phi_v1_2;
    if ((temp_f12_2 - sp24) < (sp10 - temp_f0)) {
        phi_v1 = phi_v1_2 | 0x80;
    }
    return phi_v1;
}

? func_8017AD38(Vec3f *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3) {
    u32 sp54;
    u32 sp50;
    u32 temp_a3;
    u32 temp_a3_2;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v1;
    u32 temp_v1_2;

    sp50 = 0;
    sp54 = 0;
    temp_v0 = func_8017A954(arg2, arg0, arg1);
    sp50 = temp_v0;
    if (temp_v0 == 0) {
        return 1;
    }
    temp_v0_2 = func_8017A954(arg3, arg0, arg1);
    sp54 = temp_v0_2;
    if (temp_v0_2 == 0) {
        return 1;
    }
    if ((temp_v0_2 & sp50) != 0) {
        goto block_34;
    }
    temp_a3 = sp50 | (func_8017AA0C(arg2, arg0, arg1) << 8);
    sp50 = temp_a3;
    temp_v1 = sp54 | (func_8017AA0C(arg3, arg0, arg1) << 8);
    sp54 = temp_v1;
    if ((temp_v1 & temp_a3) != 0) {
        goto block_34;
    }
    temp_a3_2 = sp50 | (func_8017ABBC(arg2, arg0, arg1) << 0x18);
    sp50 = temp_a3_2;
    temp_v1_2 = sp54 | (func_8017ABBC(arg3, arg0, arg1) << 0x18);
    sp54 = temp_v1_2;
    if ((temp_v1_2 & temp_a3_2) != 0) {
        goto block_34;
    }
    D_801FBCE4 = arg0->x;
    D_801FBCE4 = arg0->y;
    D_801FBCE8 = arg0->z;
    D_801FBCF4 = arg0->x;
    D_801FBCF4 = arg0->y;
    D_801FBCF8 = arg1->z;
    D_801FBD04 = arg0->x;
    D_801FBD04 = arg1->y;
    D_801FBD08 = arg1->z;
    if (func_8017D404(&D_801FBCE0, &D_801FBCF0, &D_801FBD00, -1.0f, 0.0f, 0.0f, arg0->x, arg2, arg3, &D_801FBD10, NULL) != 0) {
        return 1;
    }
    D_801FBCF4 = arg0->x;
    D_801FBCF4 = arg1->y;
    D_801FBCF8 = arg1->z;
    D_801FBD04 = arg0->x;
    D_801FBD04 = arg1->y;
    D_801FBD08 = arg0->z;
    if (func_8017D404(&D_801FBCE0, &D_801FBCF0, &D_801FBD00, -1.0f, 0.0f, 0.0f, arg0->x, arg2, arg3, &D_801FBD10, NULL) != 0) {
        return 1;
    }
    D_801FBCE4 = arg0->x;
    D_801FBCE4 = arg1->y;
    D_801FBCE8 = arg1->z;
    D_801FBCF4 = arg0->x;
    D_801FBCF4 = arg0->y;
    D_801FBCF8 = arg1->z;
    D_801FBD04 = arg1->x;
    D_801FBD04 = arg1->y;
    D_801FBD08 = arg1->z;
    if (func_8017D404(&D_801FBCE0, &D_801FBCF0, &D_801FBD00, 0.0f, 0.0f, 1.0f, -arg1->z, arg2, arg3, &D_801FBD10, NULL) != 0) {
        return 1;
    }
    D_801FBCE4 = arg1->x;
    D_801FBCE4 = arg1->y;
    D_801FBCE8 = arg1->z;
    D_801FBD00 = arg1->x;
    D_801FBCF4 = arg0->y;
    D_801FBD08 = arg1->z;
    if (func_8017D404(&D_801FBCE0, &D_801FBCF0, &D_801FBD00, 0.0f, 0.0f, 1.0f, -arg1->z, arg2, arg3, &D_801FBD10, NULL) != 0) {
        return 1;
    }
    D_801FBCF4 = arg0->x;
    D_801FBCF4 = arg1->y;
    D_801FBCF8 = arg0->z;
    D_801FBD04 = arg0->x;
    D_801FBD04 = arg1->y;
    D_801FBD08 = arg1->z;
    if (func_8017D404(&D_801FBCE0, &D_801FBCF0, &D_801FBD00, 0.0f, 1.0f, 0.0f, -arg1->y, arg2, arg3, &D_801FBD10, NULL) != 0) {
        return 1;
    }
    D_801FBCF4 = arg1->x;
    D_801FBCF4 = arg1->y;
    D_801FBCF8 = arg0->z;
    D_801FBD04 = arg0->x;
    D_801FBD04 = arg1->y;
    D_801FBD08 = arg0->z;
    if (func_8017D404(&D_801FBCE0, &D_801FBCF0, &D_801FBD00, 0.0f, 1.0f, 0.0f, -arg1->y, arg2, arg3, &D_801FBD10, NULL) != 0) {
        return 1;
    }
    D_801FBCE4 = arg0->x;
    D_801FBCE4 = arg0->y;
    D_801FBCE8 = arg0->z;
    D_801FBCF4 = arg0->x;
    D_801FBCF4 = arg1->y;
    D_801FBCF8 = arg0->z;
    D_801FBD04 = arg1->x;
    D_801FBD04 = arg1->y;
    D_801FBD08 = arg0->z;
    if (func_8017D404(&D_801FBCE0, &D_801FBCF0, &D_801FBD00, 0.0f, 0.0f, -1.0f, arg0->z, arg2, arg3, &D_801FBD10, NULL) != 0) {
        return 1;
    }
    D_801FBCF4 = arg1->x;
    D_801FBCF4 = arg1->y;
    D_801FBCF8 = arg0->z;
    D_801FBD04 = arg1->x;
    D_801FBD04 = arg0->y;
    D_801FBD08 = arg0->z;
    if (func_8017D404(&D_801FBCE0, &D_801FBCF0, &D_801FBD00, 0.0f, 0.0f, -1.0f, arg0->z, arg2, arg3, &D_801FBD10, NULL) != 0) {
        return 1;
    }
    D_801FBCF4 = arg1->x;
    D_801FBCF4 = arg0->y;
    D_801FBCF8 = arg0->z;
    D_801FBD04 = arg1->x;
    D_801FBD04 = arg0->y;
    D_801FBD08 = arg1->z;
    if (func_8017D404(&D_801FBCE0, &D_801FBCF0, &D_801FBD00, 0.0f, -1.0f, 0.0f, arg0->y, arg2, arg3, &D_801FBD10, NULL) != 0) {
        return 1;
    }
    D_801FBCF4 = arg1->x;
    D_801FBCF4 = arg0->y;
    D_801FBCF8 = arg1->z;
    D_801FBD04 = arg0->x;
    D_801FBD04 = arg0->y;
    D_801FBD08 = arg1->z;
    if (func_8017D404(&D_801FBCE0, &D_801FBCF0, &D_801FBD00, 0.0f, -1.0f, 0.0f, arg0->y, arg2, arg3, &D_801FBD10, NULL) != 0) {
        return 1;
    }
    D_801FBCE4 = arg1->x;
    D_801FBCE4 = arg1->y;
    D_801FBCE8 = arg1->z;
    D_801FBCF4 = arg1->x;
    D_801FBCF4 = arg0->y;
    D_801FBCF8 = arg0->z;
    D_801FBD04 = arg1->x;
    D_801FBD04 = arg1->y;
    D_801FBD08 = arg0->z;
    if (func_8017D404(&D_801FBCE0, &D_801FBCF0, &D_801FBD00, 1.0f, 0.0f, 0.0f, -arg1->x, arg2, arg3, &D_801FBD10, NULL) != 0) {
        return 1;
    }
    D_801FBCF4 = arg1->x;
    D_801FBCF4 = arg0->y;
    D_801FBCF8 = arg1->z;
    D_801FBD04 = arg1->x;
    D_801FBD04 = arg0->y;
    D_801FBD08 = arg0->z;
    if (func_8017D404(&D_801FBCE0, &D_801FBCF0, &D_801FBD00, 1.0f, 0.0f, 0.0f, -arg1->x, arg2, arg3, &D_801FBD10, NULL) != 0) {
        return 1;
    }
block_34:
    return 0;
}

void func_8017B68C(void *arg0, void *arg1, void *arg2, void *arg3) {
    D_801FBD24 = (f32) arg0->unk0;
    D_801FBD24 = (f32) arg0->unk2;
    D_801FBD28 = (f32) arg0->unk4;
    D_801FBD34 = (f32) arg1->unk0;
    D_801FBD34 = (f32) arg1->unk2;
    D_801FBD38 = (f32) arg1->unk4;
    D_801FBD44 = (f32) arg2->unk0;
    D_801FBD44 = (f32) arg2->unk2;
    D_801FBD48 = (f32) arg2->unk4;
    D_801FBD54 = (f32) arg3->unk0;
    D_801FBD54 = (f32) arg3->unk2;
    D_801FBD58 = (f32) arg3->unk4;
    func_8017AD38(&D_801FBD20, &D_801FBD30, &D_801FBD40, &D_801FBD50);
}

void func_8017B7F8(Vec3f *arg0, s16 arg1, f32 *arg2, f32 *arg3, f32 *arg4) {
    f32 temp_f2;

    *arg2 = Math_SinS(arg1) * 32767.0f;
    temp_f2 = Math_CosS(arg1) * 32767.0f;
    *arg3 = temp_f2;
    *arg4 = -((temp_f2 * arg0->z) + (*arg2 * arg0->x));
}

void Math3D_UnitNormalVector(Vec3f *a, Vec3f *b, Vec3f *c, f32 *normX, f32 *normY, f32 *normZ, f32 *param_7) {
    f32 *temp_at;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f4;

    Math3D_NormalVector(a, b, c, &Math3D_UnitNormalVector_temp);
    temp_at = &Math3D_UnitNormalVector_temp.y;
    temp_f4 = *temp_at;
    temp_f12 = *temp_at;
    temp_f14 = Math3D_UnitNormalVector_temp.z;
    temp_f16 = sqrtf((temp_f4 * temp_f4) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
    if (!(fabsf(temp_f16) < 0.008f)) {
        temp_f0 = 1.0f / temp_f16;
        *normX = temp_f4 * temp_f0;
        *normY = Math3D_UnitNormalVector_temp.y * temp_f0;
        *normZ = Math3D_UnitNormalVector_temp.z * temp_f0;
        *param_7 = -((*normZ * a->z) + ((*normX * a->x) + (*normY * a->y)));
        return;
    }
    *param_7 = 0.0f;
    *normZ = 0.0f;
    *normY = 0.0f;
    *normX = 0.0f;
}

f32 Math3D_SignedDistanceFromPlane(f32 normX, f32 normY, f32 normZ, f32 d, Vec3f *position) {
    return (position->x * normX) + (normY * position->y) + (normZ * position->z) + d;
}

f32 func_8017B9D8(Plane *arg0, TriNorm *arg1) {
    return (arg0->normal.x * arg1->vtx[0].x) + (arg0->normal.y * arg1->vtx[0].y) + (arg0->normal.z * arg1->vtx[0].z) + arg0->originDist;
}

f32 Math3D_NormalizedDistanceFromPlane(f32 normX, f32 normY, f32 normZ, f32 d, Vec3f *position) {
    return fabsf(Math3D_NormalizedSignedDistanceFromPlane(normX, normY, normZ, d, position));
}

f32 Math3D_NormalizedSignedDistanceFromPlane(f32 normX, f32 normY, f32 normZ, f32 d, Vec3f *position) {
    f32 sp24;
    f32 temp_f2;

    temp_f2 = sqrtf((normX * normX) + (normY * normY) + (normZ * normZ));
    if (fabsf(temp_f2) < 0.008f) {
        return 0.0f;
    }
    sp24 = temp_f2;
    return Math3D_SignedDistanceFromPlane(normX, normY, normZ, d, position) / temp_f2;
}

s32 func_8017BAD0(f32 *arg0, f32 *arg1, f32 *arg2, Vec3f *arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp2C;
    f32 *temp_a1;
    f32 *temp_a3;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f8;

    temp_a1 = arg1;
    if (func_8017A304(arg0, arg2, arg3, arg4, arg6) == 0) {
        goto block_25;
    }
    temp_f20 = arg6 * arg6;
    temp_f12 = arg0->unk8 - (bitwise f32) arg3;
    temp_f14 = arg0->unk0 - arg4;
    if ((((temp_f12 * temp_f12) + (temp_f14 * temp_f14)) < temp_f20) || (temp_f16 = temp_a1->unk8 - (bitwise f32) arg3, temp_f18 = temp_a1->unk0 - arg4, (((temp_f16 * temp_f16) + (temp_f18 * temp_f18)) < temp_f20)) || (temp_f0 = arg2->unk8 - (bitwise f32) arg3, temp_f2 = arg2->unk0 - arg4, (((temp_f0 * temp_f0) + (temp_f2 * temp_f2)) < temp_f20))) {
        return 1;
    }
    temp_f10 = (temp_f12 * temp_f18) - (temp_f14 * temp_f16);
    sp5C = temp_f10;
    if ((temp_f10 <= arg5) && (temp_f10_2 = (temp_f16 * temp_f2) - (temp_f18 * temp_f0), sp58 = temp_f10_2, (temp_f10_2 <= arg5)) && (temp_f10_3 = (temp_f0 * temp_f14) - (temp_f2 * temp_f12), sp54 = temp_f10_3, (temp_f10_3 <= arg5))) {
        return 1;
    }
    temp_f8 = -arg5;
    sp2C = temp_f8;
    if ((temp_f8 <= sp5C) && (temp_f4 = (temp_f16 * temp_f2) - (temp_f18 * temp_f0), sp58 = temp_f4, (temp_f8 <= temp_f4)) && (temp_f8 <= ((temp_f0 * temp_f14) - (temp_f2 * temp_f12)))) {
        return 1;
    }
    if ((fabsf(arg7) > 0.5f) && (temp_a3 = temp_a1, (temp_f20 > 0.0f))) {
        arg1 = temp_a1;
        if ((func_8017DA24(arg3, arg4, temp_a1, arg0, temp_a3, &sp50) != 0) && (sp50 < temp_f20)) {
            return 1;
        }
        if ((func_8017DA24(arg3, arg4, arg1, arg1, arg2, &sp50) != 0) && (sp50 < temp_f20)) {
            return 1;
        }
        if ((func_8017DA24(arg3, arg4, arg2, arg0, &sp50) != 0) && (sp50 < temp_f20)) {
            return 1;
        }
        goto block_25;
    }
block_25:
    return 0;
}

void func_8017BD98(f32 *arg3, f32 *arg4, Vec3f *arg5, f32 arg6) {
    func_8017BAD0(arg3, arg3, arg4, arg5, 1.0f, arg6);
}

void func_8017BDE0(f32 *arg3, f32 *arg4) {
    func_8017BAD0(arg3, arg3, arg4, (Vec3f *)0x43960000, 1.0f, 0.6f);
}

? func_8017BE30(f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 *arg7, f32 *arg8, f32 *arg9, f32 argA) {
    if (fabsf(arg4) < 0.008f) {
        goto block_4;
    }
    if (func_8017BAD0((bitwise f32 *) arg4, arg7, arg8, (Vec3f *)0x43960000, argA, arg4) != 0) {
        *arg9 = (((-arg3 * (bitwise f32) arg8) - (arg5 * (bitwise f32) arg7)) - arg6) / arg4;
        return 1;
    }
block_4:
    return 0;
}

? func_8017BEE0(f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 *arg7, f32 *arg8, f32 *arg9, f32 argA) {
    if (fabsf(arg4) < 0.008f) {
        goto block_4;
    }
    if (func_8017BAD0((bitwise f32 *) arg4, arg7, arg8, NULL, argA, arg4) != 0) {
        *arg9 = (((-arg3 * (bitwise f32) arg8) - (arg5 * (bitwise f32) arg7)) - arg6) / arg4;
        return 1;
    }
block_4:
    return 0;
}

s32 func_8017BF8C(f32 arg3, f32 *arg4, f32 *arg5) {
    if (fabsf(arg3) < 0.008f) {
        goto block_4;
    }
    if (func_8017BAD0((bitwise f32 *) arg3, arg4, arg5, (Vec3f *)0x43960000, 1.0f, arg3) != 0) {
        return 1;
    }
block_4:
    return 0;
}

s32 func_8017C008(f32 *arg0, f32 *arg1, Vec3f *arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 *arg9, f32 argA, f32 argB) {
    f32 sp3C;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 *temp_t6;
    f32 temp_f0;

    temp_t6 = &sp2C;
    if (fabsf(arg4) < 0.008f) {
        goto block_9;
    }
    sp2C = arg8;
    sp30 = argA;
    sp34 = arg7;
    sp3C = Math3D_SignedDistanceFromPlane(arg3, arg4, arg5, arg6, (Vec3f *) temp_t6);
    sp30 = argB;
    temp_f0 = Math3D_SignedDistanceFromPlane(arg3, arg4, arg5, arg6, (Vec3f *) &sp2C);
    if (((sp3C > 0.0f) && (temp_f0 > 0.0f)) || ((sp3C < 0.0f) && (temp_f0 < 0.0f))) {
        goto block_9;
    }
    if (func_8017BAD0((bitwise f32 *) 0.0f, arg0, arg1, arg2, arg7, arg8, 300.0f, 1.0f, arg4) != 0) {
        *arg9 = (((-arg3 * arg8) - (arg5 * arg7)) - arg6) / arg4;
        return 1;
    }
block_9:
    return 0;
}

? func_8017C17C(void *arg3, f32 *arg4, f32 *arg5, Vec3f *arg6) {
    f32 temp_f2;

    temp_f2 = arg3->unk4;
    if (fabsf(temp_f2) < 0.008f) {
        goto block_4;
    }
    if (func_8017BAD0(arg4, arg5, NULL, arg6, temp_f2) != 0) {
        return 1;
    }
block_4:
    return 0;
}

s32 func_8017C1F0(f32 *arg0, f32 *arg1, f32 *arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp2C;
    f32 *temp_a0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f8;

    temp_f12 = arg0->unk8 - arg3;
    temp_f14 = arg0->unk0 - arg4;
    temp_f20 = arg6 * arg6;
    if ((((temp_f12 * temp_f12) + (temp_f14 * temp_f14)) < temp_f20) || (temp_f16 = arg1->unk8 - arg3, temp_f18 = arg1->unk0 - arg4, (((temp_f16 * temp_f16) + (temp_f18 * temp_f18)) < temp_f20)) || (temp_f0 = arg2->unk8 - arg3, temp_f2 = arg2->unk0 - arg4, (((temp_f0 * temp_f0) + (temp_f2 * temp_f2)) < temp_f20))) {
        return 1;
    }
    temp_f6 = (temp_f12 * temp_f18) - (temp_f14 * temp_f16);
    sp5C = temp_f6;
    if ((temp_f6 <= arg5) && (temp_f6_2 = (temp_f16 * temp_f2) - (temp_f18 * temp_f0), sp58 = temp_f6_2, (temp_f6_2 <= arg5)) && (temp_f6_3 = (temp_f0 * temp_f14) - (temp_f2 * temp_f12), sp54 = temp_f6_3, (temp_f6_3 <= arg5))) {
        return 1;
    }
    temp_f8 = -arg5;
    sp2C = temp_f8;
    if ((temp_f8 <= sp5C) && (temp_f4 = (temp_f16 * temp_f2) - (temp_f18 * temp_f0), sp58 = temp_f4, (temp_f8 <= temp_f4)) && (temp_f8 <= ((temp_f0 * temp_f14) - (temp_f2 * temp_f12)))) {
        return 1;
    }
    if ((fabsf(arg7) > 0.5f) && (temp_f20 > 0.0f)) {
        temp_a0 = arg0;
        if ((func_8017DA24((bitwise Vec3f *) arg3, arg4, arg0, arg1, &sp50) != 0) && (sp50 < temp_f20)) {
            return 1;
        }
        arg0 = temp_a0;
        if ((func_8017DA24((bitwise Vec3f *) arg3, arg4, temp_a0, arg1, arg1, arg2, &sp50) != 0) && (sp50 < temp_f20)) {
            return 1;
        }
        if ((func_8017DA24((bitwise Vec3f *) arg3, arg4, arg0, arg2, arg0, &sp50) != 0) && (sp50 < temp_f20)) {
            return 1;
        }
        goto block_23;
    }
block_23:
    return 0;
}

? func_8017C494(f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 *arg7, f32 *arg8, f32 *arg9, f32 argA) {
    if (fabsf(arg4) < 0.008f) {
        goto block_4;
    }
    if (func_8017C1F0((bitwise f32 *) arg4, arg7, arg8, 0.0f, argA, arg4) != 0) {
        *arg9 = (((-arg3 * (bitwise f32) arg8) - (arg5 * (bitwise f32) arg7)) - arg6) / arg4;
        return 1;
    }
block_4:
    return 0;
}

s32 func_8017C540(f32 *arg0, f32 *arg1, f32 *arg2, TriNorm *arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp2C;
    f32 *temp_a1;
    f32 *temp_a3;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f8;

    temp_a1 = arg1;
    if (func_8017A1D0(arg0, arg2, arg3, arg4, arg6) == 0) {
        goto block_25;
    }
    temp_f20 = arg6 * arg6;
    temp_f12 = arg0->unk4 - (bitwise f32) arg3;
    temp_f14 = arg0->unk8 - arg4;
    if ((((temp_f12 * temp_f12) + (temp_f14 * temp_f14)) < temp_f20) || (temp_f16 = temp_a1->unk4 - (bitwise f32) arg3, temp_f18 = temp_a1->unk8 - arg4, (((temp_f16 * temp_f16) + (temp_f18 * temp_f18)) < temp_f20)) || (temp_f0 = arg2->unk4 - (bitwise f32) arg3, temp_f2 = arg2->unk8 - arg4, (((temp_f0 * temp_f0) + (temp_f2 * temp_f2)) < temp_f20))) {
        return 1;
    }
    temp_f10 = (temp_f12 * temp_f18) - (temp_f14 * temp_f16);
    sp5C = temp_f10;
    if ((temp_f10 <= arg5) && (temp_f10_2 = (temp_f16 * temp_f2) - (temp_f18 * temp_f0), sp58 = temp_f10_2, (temp_f10_2 <= arg5)) && (temp_f10_3 = (temp_f0 * temp_f14) - (temp_f2 * temp_f12), sp54 = temp_f10_3, (temp_f10_3 <= arg5))) {
        return 1;
    }
    temp_f8 = -arg5;
    sp2C = temp_f8;
    if ((temp_f8 <= sp5C) && (temp_f4 = (temp_f16 * temp_f2) - (temp_f18 * temp_f0), sp58 = temp_f4, (temp_f8 <= temp_f4)) && (temp_f8 <= ((temp_f0 * temp_f14) - (temp_f2 * temp_f12)))) {
        return 1;
    }
    if ((fabsf(arg7) > 0.5f) && (temp_a3 = temp_a1, (temp_f20 > 0.0f))) {
        arg1 = temp_a1;
        if ((func_8017D91C(arg3, arg4, temp_a1, arg0, temp_a3, &sp50) != 0) && (sp50 < temp_f20)) {
            return 1;
        }
        if ((func_8017D91C(arg3, arg4, arg1, arg1, arg2, &sp50) != 0) && (sp50 < temp_f20)) {
            return 1;
        }
        if ((func_8017D91C(arg3, arg4, arg2, arg0, &sp50) != 0) && (sp50 < temp_f20)) {
            return 1;
        }
        goto block_25;
    }
block_25:
    return 0;
}

void func_8017C808(f32 *arg3, f32 *arg4, TriNorm *arg5, f32 arg6) {
    func_8017C540(arg3, arg3, arg4, arg5, 1.0f, arg6);
}

? func_8017C850(f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 *arg7, f32 *arg8, f32 *arg9) {
    f32 temp_f12;

    temp_f12 = arg3;
    if (fabsf(temp_f12) < 0.008f) {
        goto block_4;
    }
    arg3 = temp_f12;
    if (func_8017C540((bitwise f32 *) temp_f12, arg7, arg8, (TriNorm *)0x43960000, 1.0f, temp_f12) != 0) {
        *arg9 = (((-arg4 * (bitwise f32) arg7) - (arg5 * (bitwise f32) arg8)) - arg6) / arg3;
        return 1;
    }
block_4:
    return 0;
}

s32 func_8017C904(f32 arg3, f32 *arg4, f32 *arg5) {
    if (fabsf(arg3) < 0.008f) {
        goto block_4;
    }
    if (func_8017C540((bitwise f32 *) arg3, arg4, arg5, (TriNorm *)0x43960000, 1.0f, arg3) != 0) {
        return 1;
    }
block_4:
    return 0;
}

? func_8017C980(f32 *arg0, f32 *arg1, TriNorm *arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 *arg9, f32 argA, f32 argB) {
    f32 sp34;
    f32 temp_f0;

    if (fabsf(arg3) < 0.008f) {
        goto block_9;
    }
    D_801FBD74 = argA;
    D_801FBD74 = arg7;
    D_801FBD78 = arg8;
    sp34 = Math3D_SignedDistanceFromPlane(arg3, arg4, arg5, arg6, &D_801FBD70);
    D_801FBD70.x = argB;
    temp_f0 = Math3D_SignedDistanceFromPlane(arg3, arg4, arg5, arg6, &D_801FBD70);
    if (((sp34 > 0.0f) && (temp_f0 > 0.0f)) || ((sp34 < 0.0f) && (temp_f0 < 0.0f))) {
        goto block_9;
    }
    if (func_8017C540((bitwise f32 *) 0.0f, arg0, arg1, arg2, arg7, arg8, 300.0f, 1.0f, arg3) != 0) {
        *arg9 = (((-arg4 * arg7) - (arg5 * arg8)) - arg6) / arg3;
        return 1;
    }
block_9:
    return 0;
}

? func_8017CB08(f32 *arg3, f32 *arg4, f32 *arg5, TriNorm *arg6) {
    f32 temp_f2;

    temp_f2 = *arg3;
    if (fabsf(temp_f2) < 0.008f) {
        goto block_4;
    }
    if (func_8017C540(arg4, arg5, NULL, arg6, temp_f2) != 0) {
        return 1;
    }
block_4:
    return 0;
}

s32 func_8017CB7C(f32 *arg0, f32 *arg1, f32 *arg2, TriNorm *arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    f32 sp74;
    f32 sp68;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp3C;
    f32 *temp_a1;
    f32 *temp_a3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f24;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;

    temp_a1 = arg1;
    if (func_8017A09C(arg0, arg2, arg3, arg4, arg6) == 0) {
        goto block_25;
    }
    temp_f24 = arg6 * arg6;
    temp_f16 = arg0->unk0;
    temp_f18 = arg0->unk4;
    temp_f0 = (bitwise f32) arg3 - temp_f16;
    temp_f2 = arg4 - temp_f18;
    if ((((temp_f0 * temp_f0) + (temp_f2 * temp_f2)) < temp_f24) || (temp_f12 = temp_a1->unk0, temp_f14 = temp_a1->unk4, temp_f0_2 = (bitwise f32) arg3 - temp_f12, sp54 = temp_f12, sp50 = temp_f14, temp_f2_2 = arg4 - temp_f14, (((temp_f0_2 * temp_f0_2) + (temp_f2_2 * temp_f2_2)) < temp_f24)) || (temp_f12_2 = arg2->unk0, temp_f14_2 = arg2->unk4, temp_f0_3 = (bitwise f32) arg3 - temp_f12_2, sp4C = temp_f12_2, sp48 = temp_f14_2, temp_f2_3 = arg4 - temp_f14_2, (((temp_f0_3 * temp_f0_3) + (temp_f2_3 * temp_f2_3)) < temp_f24))) {
        return 1;
    }
    temp_f2_4 = temp_f16 - (bitwise f32) arg3;
    sp3C = temp_f18 - arg4;
    temp_f12_3 = sp50 - arg4;
    sp44 = temp_f2_4;
    temp_f14_3 = sp54 - (bitwise f32) arg3;
    temp_f0_4 = (temp_f2_4 * temp_f12_3) - (sp3C * temp_f14_3);
    sp74 = temp_f0_4;
    if ((temp_f0_4 <= arg5) && (temp_f0_5 = sp48 - arg4, temp_f2_5 = sp4C - (bitwise f32) arg3, (((temp_f14_3 * temp_f0_5) - (temp_f12_3 * temp_f2_5)) <= arg5)) && (((temp_f2_5 * sp3C) - (temp_f0_5 * sp44)) <= arg5)) {
        return 1;
    }
    temp_f18_2 = -arg5;
    if ((temp_f18_2 <= sp74) && (temp_f0_6 = sp48 - arg4, temp_f2_6 = sp4C - (bitwise f32) arg3, (temp_f18_2 <= ((temp_f14_3 * temp_f0_6) - (temp_f12_3 * temp_f2_6)))) && (temp_f18_2 <= ((temp_f2_6 * sp3C) - (temp_f0_6 * sp44)))) {
        return 1;
    }
    if ((fabsf(arg7) > 0.5f) && (temp_a3 = temp_a1, (temp_f24 > 0.0f))) {
        arg1 = temp_a1;
        if ((func_8017D814(arg3, arg4, temp_a1, arg0, temp_a3, &sp68) != 0) && (sp68 < temp_f24)) {
            return 1;
        }
        if ((func_8017D814(arg3, arg4, arg1, arg1, arg2, &sp68) != 0) && (sp68 < temp_f24)) {
            return 1;
        }
        if ((func_8017D814(arg3, arg4, arg2, arg0, &sp68) != 0) && (sp68 < temp_f24)) {
            return 1;
        }
        goto block_25;
    }
block_25:
    return 0;
}

void func_8017CEA8(f32 *arg3, f32 *arg4, TriNorm *arg5, f32 arg6) {
    func_8017CB7C(arg3, arg3, arg4, arg5, 1.0f, arg6);
}

? func_8017CEF0(f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 *arg7, f32 *arg8, f32 *arg9) {
    if (fabsf(arg5) < 0.008f) {
        goto block_4;
    }
    if (func_8017CB7C((bitwise f32 *) arg5, arg7, arg8, (TriNorm *)0x43960000, 1.0f, arg5) != 0) {
        *arg9 = (((-arg3 * (bitwise f32) arg7) - (arg4 * (bitwise f32) arg8)) - arg6) / arg5;
        return 1;
    }
block_4:
    return 0;
}

s32 func_8017CFA4(f32 arg3, f32 *arg4, f32 *arg5) {
    if (fabsf(arg3) < 0.008f) {
        goto block_4;
    }
    if (func_8017CB7C((bitwise f32 *) arg3, arg4, arg5, (TriNorm *)0x43960000, 1.0f, arg3) != 0) {
        return 1;
    }
block_4:
    return 0;
}

? func_8017D020(f32 *arg0, f32 *arg1, TriNorm *arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 *arg9, f32 argA, f32 argB) {
    f32 sp2C;
    f32 temp_f0;

    if (fabsf(arg5) < 0.008f) {
        goto block_9;
    }
    D_801FBDB4 = arg7;
    D_801FBDB4 = arg8;
    D_801FBDB8 = argA;
    sp2C = Math3D_SignedDistanceFromPlane(arg3, arg4, arg5, arg6, &D_801FBDB0);
    D_801FBDB8 = argB;
    temp_f0 = Math3D_SignedDistanceFromPlane(arg3, arg4, arg5, arg6, &D_801FBDB0);
    if (((sp2C > 0.0f) && (temp_f0 > 0.0f)) || ((sp2C < 0.0f) && (temp_f0 < 0.0f))) {
        goto block_9;
    }
    if (func_8017CB7C((bitwise f32 *) 0.0f, arg0, arg1, arg2, arg7, arg8, 300.0f, 1.0f, arg5) != 0) {
        *arg9 = (((-arg3 * arg7) - (arg4 * arg8)) - arg6) / arg5;
        return 1;
    }
block_9:
    return 0;
}

? func_8017D1AC(void *arg3, f32 *arg4, f32 *arg5, TriNorm *arg6) {
    f32 temp_f2;

    temp_f2 = arg3->unk8;
    if (fabsf(temp_f2) < 0.008f) {
        goto block_4;
    }
    if (func_8017CB7C(arg4, arg5, NULL, arg6, temp_f2) != 0) {
        return 1;
    }
block_4:
    return 0;
}

s32 func_8017D220(f32 arg0, f32 arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4) {
    f32 temp_f2;

    temp_f2 = arg0 - arg1;
    if (fabsf(temp_f2) < 0.008f) {
        arg4->x = arg3->x;
        arg4->y = arg3->y;
        arg4->z = arg3->z;
        return 0;
    }
    if (arg0 == 0.0f) {
        arg4->x = arg2->x;
        arg4->y = arg2->y;
        arg4->z = arg2->z;
    } else if (arg1 == 0.0f) {
        arg4->x = arg3->x;
        arg4->y = arg3->y;
        arg4->z = arg3->z;
    } else {
        Math3D_Lerp(arg2, arg3, arg0 / temp_f2, arg4);
    }
    return 1;
}

s32 func_8017D2FC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, Vec3f *arg4, Vec3f *arg5, Vec3f *arg6, Vec3f *arg7) {
    f32 sp24;
    f32 temp_f0;

    sp24 = Math3D_SignedDistanceFromPlane(arg0, arg1, arg2, arg3, arg4);
    temp_f0 = Math3D_SignedDistanceFromPlane(arg0, arg1, arg2, arg3, arg5);
    if ((sp24 * temp_f0) > 0.0f) {
        arg6->x = arg5->x;
        arg6->y = arg5->y;
        arg6->z = arg5->z;
        return 0;
    }
    if ((arg7 != 0) && (sp24 < 0.0f) && (temp_f0 > 0.0f)) {
        arg6->x = arg5->x;
        arg6->y = arg5->y;
        arg6->z = arg5->z;
        return 0;
    }
    return func_8017D220(sp24, temp_f0, arg5, arg4, arg5, arg6);
}

s32 func_8017D404(f32 *arg0, f32 *arg1, f32 *arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, Vec3f *arg7, Vec3f *arg8, Vec3f *arg9, Vec3f *argA) {
    f32 temp_f12;

    temp_f12 = arg3;
    arg3 = temp_f12;
    if (func_8017D2FC(temp_f12, arg4, arg5, arg6, arg7, arg8, arg9, argA) == 0) {
        return 0;
    }
    if (((arg3 == 0.0f) || (func_8017C904(arg3, arg0, arg1, arg2, arg3, arg9->y, arg9->z) != 0)) && ((arg4 == 0.0f) || (func_8017BF8C((bitwise f32) arg0, arg1, arg2, arg4, arg9->z, arg9->x) != 0)) && ((arg5 == 0.0f) || (func_8017CFA4((bitwise f32) arg0, arg1, arg2, arg5, arg9->x, arg9->y) != 0))) {
        return 1;
    }
    arg9->x = arg8->x;
    arg9->y = arg8->y;
    arg9->z = arg8->z;
    return 0;
}

void Math3D_TriSetCoords(TriNorm *tri, Vec3f *pointA, Vec3f *pointB, Vec3f *pointC) {
    tri->vtx[0].x = pointA->x;
    tri->vtx[0].y = pointA->y;
    tri->vtx[0].z = pointA->z;
    tri->vtx[1].x = pointB->x;
    tri->vtx[1].y = pointB->y;
    tri->vtx[1].z = pointB->z;
    tri->vtx[2].x = pointC->x;
    tri->vtx[2].y = pointC->y;
    tri->vtx[2].z = pointC->z;
    Math3D_UnitNormalVector(pointA, pointB, pointC, (f32 *) &tri->plane, &tri->plane.normal.y, &tri->plane.normal.z, &tri->plane.originDist);
}

u32 Math3D_IsPointInSphere(Sphere16 *sphere, Vec3f *point) {
    u32 phi_v0;

    phi_v0 = 0U;
    if (Math3D_DistanceS((Vec3s *) sphere, point) < (f32) sphere->radius) {
        phi_v0 = 1U;
    }
    return phi_v0;
}

? func_8017D668(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 *arg6, f32 *arg7, f32 *arg8) {
    f32 sp1C;
    f32 sp8;
    f32 sp4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f8;
    ? phi_v1;

    temp_f2 = arg4 - arg2;
    temp_f4 = arg5 - arg3;
    sp8 = temp_f4;
    sp1C = temp_f4;
    temp_f18 = (temp_f2 * temp_f2) + (temp_f4 * temp_f4);
    phi_v1 = 0;
    if (fabsf(temp_f18) < 0.008f) {
        *arg8 = 0.0f;
        return 0;
    }
    temp_f10 = arg0 - arg2;
    sp8 = temp_f10;
    temp_f8 = (arg1 - arg3) * sp1C;
    sp4 = temp_f8;
    temp_f0 = ((temp_f10 * temp_f2) + temp_f8) / temp_f18;
    if ((temp_f0 >= 0.0f) && (temp_f0 <= 1.0f)) {
        phi_v1 = 1;
    }
    temp_f12 = ((sp8 * temp_f2) + sp4) / temp_f18;
    *arg6 = (temp_f2 * temp_f12) + arg2;
    temp_f14 = (sp1C * temp_f12) + arg3;
    *arg7 = temp_f14;
    temp_f16 = temp_f14 - arg1;
    temp_f0_2 = *arg6 - arg0;
    *arg8 = (temp_f16 * temp_f16) + (temp_f0_2 * temp_f0_2);
    return phi_v1;
}

void func_8017D7C0(f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 *arg6) {
    ? sp34;
    ? sp30;

    func_8017D668(arg2, arg3, arg4, arg5, (bitwise f32) &sp34, (bitwise f32) &sp30, arg6);
}

s32 func_8017D814(f32 arg0, f32 arg1, f32 *arg2, f32 *arg3, f32 *arg4) {
    f32 sp1C;
    f32 sp18;
    f32 spC;
    f32 sp8;
    f32 sp4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f8;
    f32 temp_f8_2;
    s32 phi_v1;

    temp_f18 = arg2->unk0;
    spC = arg2->unk4;
    temp_f2 = arg3->unk0 - temp_f18;
    temp_f16 = arg3->unk4 - spC;
    temp_f8 = (temp_f2 * temp_f2) + (temp_f16 * temp_f16);
    temp_f0 = fabsf(temp_f8);
    sp8 = temp_f8;
    phi_v1 = 0;
    if (temp_f0 < 0.008f) {
        *arg4 = 0.0f;
        return 0;
    }
    temp_f0_2 = (((arg0 - temp_f18) * temp_f2) + ((arg1 - spC) * temp_f16)) / sp8;
    if ((temp_f0_2 >= 0.0f) && (temp_f0_2 <= 1.0f)) {
        phi_v1 = 1;
    }
    temp_f4 = (temp_f2 * temp_f0_2) + temp_f18;
    temp_f10 = (temp_f16 * temp_f0_2) + spC;
    sp1C = temp_f4;
    temp_f8_2 = temp_f4 - arg0;
    sp18 = temp_f10;
    temp_f6 = temp_f10 - arg1;
    sp8 = temp_f8_2;
    sp4 = temp_f6;
    *arg4 = (temp_f8_2 * temp_f8_2) + (temp_f6 * temp_f6);
    return phi_v1;
}

s32 func_8017D91C(f32 arg0, f32 arg1, f32 *arg2, f32 *arg3, f32 *arg4) {
    f32 sp1C;
    f32 sp18;
    f32 spC;
    f32 sp8;
    f32 sp4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f8;
    f32 temp_f8_2;
    s32 phi_v1;

    temp_f18 = arg2->unk4;
    spC = arg2->unk8;
    temp_f2 = arg3->unk4 - temp_f18;
    temp_f16 = arg3->unk8 - spC;
    temp_f8 = (temp_f2 * temp_f2) + (temp_f16 * temp_f16);
    temp_f0 = fabsf(temp_f8);
    sp8 = temp_f8;
    phi_v1 = 0;
    if (temp_f0 < 0.008f) {
        *arg4 = 0.0f;
        return 0;
    }
    temp_f0_2 = (((arg0 - temp_f18) * temp_f2) + ((arg1 - spC) * temp_f16)) / sp8;
    if ((temp_f0_2 >= 0.0f) && (temp_f0_2 <= 1.0f)) {
        phi_v1 = 1;
    }
    temp_f4 = (temp_f2 * temp_f0_2) + temp_f18;
    temp_f10 = (temp_f16 * temp_f0_2) + spC;
    sp1C = temp_f4;
    temp_f8_2 = temp_f4 - arg0;
    sp18 = temp_f10;
    temp_f6 = temp_f10 - arg1;
    sp8 = temp_f8_2;
    sp4 = temp_f6;
    *arg4 = (temp_f8_2 * temp_f8_2) + (temp_f6 * temp_f6);
    return phi_v1;
}

s32 func_8017DA24(f32 arg0, f32 arg1, f32 *arg2, f32 *arg3, f32 *arg4) {
    f32 sp1C;
    f32 sp18;
    f32 spC;
    f32 sp8;
    f32 sp4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f8;
    f32 temp_f8_2;
    s32 phi_v1;

    temp_f18 = arg2->unk8;
    spC = arg2->unk0;
    temp_f2 = arg3->unk8 - temp_f18;
    temp_f16 = arg3->unk0 - spC;
    temp_f8 = (temp_f2 * temp_f2) + (temp_f16 * temp_f16);
    temp_f0 = fabsf(temp_f8);
    sp8 = temp_f8;
    phi_v1 = 0;
    if (temp_f0 < 0.008f) {
        *arg4 = 0.0f;
        return 0;
    }
    temp_f0_2 = (((arg0 - temp_f18) * temp_f2) + ((arg1 - spC) * temp_f16)) / sp8;
    if ((temp_f0_2 >= 0.0f) && (temp_f0_2 <= 1.0f)) {
        phi_v1 = 1;
    }
    temp_f4 = (temp_f2 * temp_f0_2) + temp_f18;
    temp_f10 = (temp_f16 * temp_f0_2) + spC;
    sp1C = temp_f4;
    temp_f8_2 = temp_f4 - arg0;
    sp18 = temp_f10;
    temp_f6 = temp_f10 - arg1;
    sp8 = temp_f8_2;
    sp4 = temp_f6;
    *arg4 = (temp_f8_2 * temp_f8_2) + (temp_f6 * temp_f6);
    return phi_v1;
}

s32 Math3D_ColSphereLineSeg(Sphere16 *sphere, LineSegment *line) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    LineSegment *temp_a1;
    Sphere16 *temp_a0;
    Vec3f *temp_a1_2;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f8;
    s32 phi_v0;

    temp_a1 = line;
    line = line;
    temp_a0 = sphere;
    if ((Math3D_IsPointInSphere(sphere, (Vec3f *) temp_a1) != 0) || (temp_a1_2 = &line->b, sphere = temp_a0, line = line, (Math3D_IsPointInSphere(temp_a0, temp_a1_2) != 0))) {
        return 1;
    }
    temp_f12 = line->a.x;
    temp_f14 = line->a.y;
    temp_f18 = line->b.x - temp_f12;
    temp_f16 = line->a.z;
    temp_f20 = line->b.y - temp_f14;
    temp_f22 = line->b.z - temp_f16;
    temp_f2 = (temp_f18 * temp_f18) + (temp_f20 * temp_f20) + (temp_f22 * temp_f22);
    phi_v0 = 0;
    if (fabsf(temp_f2) < 0.008f) {
        return 0;
    }
    sp30 = (f32) sphere->center.x;
    sp2C = (f32) sphere->center.y;
    sp28 = (f32) sphere->center.z;
    temp_f0 = (((sp30 - temp_f12) * temp_f18) + ((sp2C - temp_f14) * temp_f20) + ((sp28 - temp_f16) * temp_f22)) / temp_f2;
    if ((temp_f0 < 0.0f) || (sp40 = temp_f12, sp3C = temp_f14, sp38 = temp_f16, (temp_f0 > 1.0f))) {
        return 0;
    }
    temp_f4 = (temp_f18 * temp_f0) + sp40;
    temp_f8 = (temp_f20 * temp_f0) + sp3C;
    D_801FBDDC = temp_f4;
    D_801FBDDC = temp_f8;
    temp_f6 = (temp_f22 * temp_f0) + sp38;
    D_801FBDE0 = temp_f6;
    temp_f2_2 = (f32) sphere->radius;
    temp_f12_2 = temp_f4 - sp30;
    temp_f14_2 = temp_f8 - sp2C;
    temp_f16_2 = temp_f6 - sp28;
    if (((temp_f12_2 * temp_f12_2) + (temp_f14_2 * temp_f14_2) + (temp_f16_2 * temp_f16_2)) <= (temp_f2_2 * temp_f2_2)) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_8017DD34(Sphere16 *sphere, TriNorm *tri, Vec3f *pfParm3) {
    f32 *temp_at;
    f32 *temp_at_2;
    f32 *temp_at_3;
    f32 temp_f0;

    temp_at = &D_801FBDE8.y;
    *temp_at = (tri->vtx[1].x + tri->vtx[0].x) * 0.5f;
    *temp_at = (tri->vtx[1].y + tri->vtx[0].y) * 0.5f;
    D_801FBDE8.z = (tri->vtx[1].z + tri->vtx[0].z) * 0.5f;
    temp_at_2 = &D_801FBBF0.y;
    *temp_at_2 = (f32) sphere->center.x;
    *temp_at_2 = (f32) sphere->center.y;
    D_801FBBF0.z = (f32) sphere->center.z;
    temp_f0 = Math3D_Distance(&D_801FBDE8, &D_801FBBF0);
    temp_at_3 = &D_801FBBF0.y;
    if (fabsf(temp_f0) < 0.008f) {
        pfParm3->x = *temp_at_3;
        pfParm3->y = *temp_at_3;
        pfParm3->z = D_801FBBF0.z;
        return;
    }
    Math3D_Lerp(&D_801FBBF0, &D_801FBDE8, (f32) sphere->radius / temp_f0, pfParm3);
}

s32 Math3D_ColSphereTri(Sphere16 *sphere, TriNorm *tri, Vec3f *uParm3) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    Vec3f *sp38;
    Vec3f *sp34;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    Vec3f *temp_t0;
    Vec3f *temp_t3;
    Vec3f *temp_t7;
    f32 *temp_at;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;

    temp_at = &Math3D_ColSphereTri_point.y;
    temp_a1 = &tri->vtx[1];
    temp_a2 = &tri->vtx[2];
    *temp_at = (f32) sphere->center.x;
    *temp_at = (f32) sphere->center.y;
    Math3D_ColSphereTri_point.z = (f32) sphere->center.z;
    sp34 = temp_a2;
    sp38 = temp_a1;
    temp_f0 = (f32) sphere->radius;
    sp4C = temp_f0;
    if (func_8017A438(tri, temp_a1, temp_a2, &Math3D_ColSphereTri_point, temp_f0) == 0) {
        goto block_21;
    }
    temp_f0_2 = Math3D_NormalizedDistanceFromPlane(tri->plane.normal.x, tri->plane.normal.y, tri->plane.normal.z, tri->plane.originDist, &Math3D_ColSphereTri_point);
    sp3C = temp_f0_2;
    if (sp4C < temp_f0_2) {
        goto block_21;
    }
    Math3D_ColSphereTri_line.a.x = tri->vtx[0].x;
    temp_t3 = &Math3D_ColSphereTri_line.b;
    Math3D_ColSphereTri_line.a.y = tri->vtx[0].y;
    Math3D_ColSphereTri_line.a.z = tri->vtx[0].z;
    temp_t3->x = sp38->x;
    temp_t3->y = sp38->y;
    temp_t3->z = sp38->z;
    if (Math3D_ColSphereLineSeg(sphere, &Math3D_ColSphereTri_line) != 0) {
        func_8017DD34(sphere, tri, uParm3);
        return 1;
    }
    temp_t0 = &Math3D_ColSphereTri_line.b;
    Math3D_ColSphereTri_line.a.x = sp38->x;
    Math3D_ColSphereTri_line.a.y = sp38->y;
    Math3D_ColSphereTri_line.a.z = sp38->z;
    temp_t0->x = sp34->x;
    temp_t0->y = sp34->y;
    temp_t0->z = sp34->z;
    if (Math3D_ColSphereLineSeg(sphere, &Math3D_ColSphereTri_line) != 0) {
        func_8017DD34(sphere, tri, uParm3);
        return 1;
    }
    temp_t7 = &Math3D_ColSphereTri_line.b;
    Math3D_ColSphereTri_line.a.x = sp34->x;
    Math3D_ColSphereTri_line.a.y = sp34->y;
    Math3D_ColSphereTri_line.a.z = sp34->z;
    temp_t7->x = tri->vtx[0].x;
    temp_t7->y = tri->vtx[0].y;
    temp_t7->z = tri->vtx[0].z;
    if (Math3D_ColSphereLineSeg(sphere, &Math3D_ColSphereTri_line) != 0) {
        func_8017DD34(sphere, tri, uParm3);
        return 1;
    }
    temp_f12 = tri->plane.normal.x;
    temp_f14 = tri->plane.normal.y;
    temp_f0_3 = tri->plane.normal.z;
    temp_f2 = temp_f12 * sp3C;
    temp_f16 = temp_f14 * sp3C;
    temp_f18 = temp_f0_3 * sp3C;
    sp48 = temp_f2;
    sp44 = temp_f16;
    sp40 = temp_f18;
    if (Math3D_SignedDistanceFromPlane(temp_f12, temp_f14, temp_f0_3, tri->plane.originDist, &Math3D_ColSphereTri_point) > 0.0f) {
        D_801FBC28 = Math3D_ColSphereTri_point.x - temp_f2;
        D_801FBC2C = Math3D_ColSphereTri_point.y - temp_f16;
        D_801FBC30 = Math3D_ColSphereTri_point.z - temp_f18;
    } else {
        D_801FBC28 = Math3D_ColSphereTri_point.x + temp_f2;
        D_801FBC2C = Math3D_ColSphereTri_point.y + temp_f16;
        D_801FBC30 = Math3D_ColSphereTri_point.z + temp_f18;
    }
    temp_f14_2 = tri->plane.normal.y;
    if (fabsf(temp_f14_2) > 0.5f) {
        if (func_8017BD98((f32 *) tri, (f32 *) sp38, sp34, D_801FBC30, D_801FBC28, 0.0f, temp_f14_2) != 0) {
            func_8017DD34(sphere, tri, uParm3);
            return 1;
        }
        goto block_21;
    }
    temp_f12_2 = tri->plane.normal.x;
    if (fabsf(temp_f12_2) > 0.5f) {
        if (func_8017C808((bitwise f32 *) temp_f12_2, (bitwise f32 *) temp_f14_2, tri, (bitwise f32) sp38, sp34, D_801FBC2C, D_801FBC30, 0.0f, temp_f12_2) != 0) {
            func_8017DD34(sphere, tri, uParm3);
            return 1;
        }
        goto block_21;
    }
    if (func_8017CEA8((bitwise f32 *) temp_f12_2, (bitwise f32 *) temp_f14_2, tri, (bitwise f32) sp38, sp34, D_801FBC28, D_801FBC2C, 0.0f, tri->plane.normal.z) != 0) {
        func_8017DD34(sphere, tri, uParm3);
        return 1;
    }
block_21:
    return 0;
}

s32 func_8017E294(void *arg0, Vec3f *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0;

    temp_v0 = arg0->unk0;
    temp_f0 = (f32) arg0->unk6 - arg1->x;
    temp_f2 = (f32) arg0->unkA - arg1->z;
    temp_f12 = (f32) arg0->unk8 + (f32) arg0->unk4;
    if ((((temp_f0 * temp_f0) + (temp_f2 * temp_f2)) < (f32) (temp_v0 * temp_v0)) && (temp_f0_2 = arg1->y, (temp_f12 < temp_f0_2)) && (temp_f0_2 < ((f32) arg0->unk2 + temp_f12))) {
        return 1;
    }
    return 0;
}

s32 func_8017E350(void *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4) {
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spB8;
    s32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    s32 sp68;
    f32 sp4C;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    Vec3f *temp_s0;
    f32 *temp_a0;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    s16 temp_v0;
    s32 temp_v0_2;
    void *temp_t2;
    s32 phi_a1;
    s32 phi_a1_2;
    f32 phi_f2;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_a2;
    s32 phi_a1_3;
    s32 phi_a2_2;
    s32 phi_a1_4;
    s32 phi_v0_3;
    s32 phi_t0;
    s32 phi_v1_3;
    s32 phi_v1_4;
    s32 phi_a2_3;
    s32 phi_t0_2;
    s32 phi_v1_5;
    s32 phi_t0_3;

    spD0 = 0.0f;
    spCC = 0.0f;
    sp9C = 0;
    if ((func_8017E294(arg0, arg1) != 0) && (sp9C = sp9C, (func_8017E294(arg0, arg2) != 0))) {
        arg3->x = arg1->x;
        arg3->y = arg1->y;
        arg3->z = arg1->z;
        arg4->x = arg2->x;
        arg4->y = arg2->y;
        arg4->z = arg2->z;
        return 2;
    }
    temp_a0 = &spE0;
    temp_a1 = &spEC;
    spEC = arg1->x - (f32) arg0->unk6;
    spF0 = (arg1->y - (f32) arg0->unk8) - (f32) arg0->unk4;
    spF4 = arg1->z - (f32) arg0->unkA;
    spE0 = arg2->x - (f32) arg0->unk6;
    spE4 = (arg2->y - (f32) arg0->unk8) - (f32) arg0->unk4;
    sp9C = sp9C;
    spE8 = arg2->z - (f32) arg0->unkA;
    Math_Vec3f_Diff((Vec3f *) temp_a0, (Vec3f *) temp_a1, (Vec3f *) &spD4);
    temp_v0 = arg0->unk0;
    temp_f14 = (f32) (temp_v0 * temp_v0);
    phi_t0_2 = sp9C;
    phi_t0_3 = sp9C;
    if (!(fabsf(spD8) < 0.008f)) {
        temp_f0 = -spF0 / spD8;
        if ((temp_f0 >= 0.0f) && (temp_f0 <= 1.0f)) {
            temp_f2 = (spD4 * temp_f0) + spEC;
            temp_f12 = (spDC * temp_f0) + spF4;
            if (((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < temp_f14) {
                sp6C = (f32) arg0->unk6 + temp_f2;
                sp70 = (f32) arg0->unk8 + (f32) arg0->unk4;
                sp74 = (f32) arg0->unkA + temp_f12;
                phi_t0_3 = 1;
            }
        }
        temp_f10 = ((f32) arg0->unk2 - spF0) / spD8;
        spD0 = temp_f10;
        phi_t0_2 = phi_t0_3;
        if ((temp_f10 >= 0.0f) && (temp_f10 <= 1.0f)) {
            temp_f0_2 = (spD4 * temp_f10) + spEC;
            temp_f2_2 = (spDC * temp_f10) + spF4;
            if (((temp_f0_2 * temp_f0_2) + (temp_f2_2 * temp_f2_2)) < temp_f14) {
                sp78 = (f32) arg0->unk6 + temp_f0_2;
                sp7C = (f32) arg0->unk8 + (f32) arg0->unk4 + (f32) arg0->unk2;
                sp80 = (f32) arg0->unkA + temp_f2_2;
                phi_t0_2 = phi_t0_3 | 2;
            }
        }
    }
    sp20 = spEC;
    sp24 = spF4;
    temp_f16 = ((spEC * spEC) + (spF4 * spF4)) - temp_f14;
    spB8 = temp_f16;
    temp_f12_2 = (spD4 * spD4) + (spDC * spDC);
    temp_f18 = 2.0f * temp_f12_2;
    phi_t0 = phi_t0_2;
    if (!(fabsf(temp_f18) < 0.008f)) {
        temp_f14_2 = 2.0f * ((spD4 * sp20) + (spDC * sp24));
        temp_f0_3 = temp_f14_2 * temp_f14_2;
        temp_f16_2 = 4.0f * temp_f12_2 * spB8;
        if (temp_f0_3 < temp_f16_2) {
            return 0;
        }
        temp_f2_3 = temp_f0_3 - temp_f16_2;
        temp_f0_4 = sqrtf(temp_f2_3);
        phi_a1 = 0;
        if (temp_f2_3 > 0.0f) {
            phi_a1 = 1;
        }
        temp_f2_4 = (temp_f0_4 - temp_f14_2) / temp_f18;
        spD0 = temp_f2_4;
        phi_a1_2 = phi_a1;
        phi_f2 = temp_f2_4;
        phi_a2_3 = 1;
        if (phi_a1 != 0) {
            spCC = (-temp_f14_2 - temp_f0_4) / temp_f18;
        }
        goto block_23;
    }
    temp_f14_3 = 2.0f * ((spD4 * spEC) + (spDC * spF4));
    if (!(fabsf(temp_f14_3) < 0.008f)) {
        temp_f2_5 = -temp_f16 / temp_f14_3;
        spD0 = temp_f2_5;
        phi_a1_2 = 0;
        phi_f2 = temp_f2_5;
        phi_a2_3 = 1;
block_23:
        phi_a2 = phi_a2_3;
        phi_a1_3 = phi_a1_2;
        phi_a2 = phi_a2_3;
        if (phi_a1_2 == 0) {
            if ((phi_f2 < 0.0f) || (phi_f2 > 1.0f)) {
                return 0;
            }
            goto block_44;
        }
        phi_v0 = 0;
        phi_v0_2 = 0;
        if (phi_f2 < 0.0f) {
            phi_v0 = 1;
        }
        phi_v1 = phi_v0;
        if (phi_v0 == 0) {
            phi_v1 = 0;
            if (phi_f2 > 1.0f) {
                phi_v1 = 1;
            }
        }
        if (spCC < 0.0f) {
            phi_v0_2 = 1;
        }
        phi_v1_2 = phi_v0_2;
        if (phi_v0_2 == 0) {
            phi_v1_2 = 0;
            if (spCC > 1.0f) {
                phi_v1_2 = 1;
            }
        }
        if ((phi_v1 != 0) && (phi_v1_2 != 0)) {
            return 0;
        }
        if (phi_v1 != 0) {
            phi_a2 = 0;
        }
        if (phi_v1_2 != 0) {
            phi_a1_3 = 0;
        }
block_44:
        phi_a2_2 = phi_a2;
        phi_a1_4 = phi_a1_3;
        if ((phi_a2 != 0) && ((temp_f0_5 = (phi_f2 * spD8) + spF0, (temp_f0_5 < 0.0f)) || ((f32) arg0->unk2 < temp_f0_5))) {
            phi_a2_2 = 0;
        }
        if ((phi_a1_3 != 0) && ((temp_f0_6 = (spCC * spD8) + spF0, (temp_f0_6 < 0.0f)) || ((f32) arg0->unk2 < temp_f0_6))) {
            phi_a1_4 = 0;
        }
        phi_v1_3 = 0;
        if ((phi_a2_2 == 0) && (phi_a1_4 == 0)) {
            return 0;
        }
        phi_v0_3 = 0;
        if ((phi_a2_2 != 0) && (phi_a1_4 != 0)) {
            sp24 = spD4;
            sp84 = (phi_f2 * spD4) + spEC + (f32) arg0->unk6;
            sp20 = spEC;
            sp28 = spD8;
            sp88 = (phi_f2 * spD8) + spF0 + (f32) arg0->unk8 + (f32) arg0->unk4;
            sp2C = spF0;
            sp8C = (phi_f2 * spDC) + spF4 + (f32) arg0->unkA;
            sp90 = (spCC * spD4) + sp20 + (f32) arg0->unk6;
            sp94 = (spCC * sp28) + spF0 + (f32) arg0->unk8 + (f32) arg0->unk4;
            sp98 = (spCC * spDC) + spF4 + (f32) arg0->unkA;
            phi_t0 = phi_t0_2 | 4 | 8;
        } else if (phi_a2_2 != 0) {
            sp84 = (phi_f2 * spD4) + spEC + (f32) arg0->unk6;
            sp88 = (phi_f2 * spD8) + spF0 + (f32) arg0->unk8 + (f32) arg0->unk4;
            sp8C = (phi_f2 * spDC) + spF4 + (f32) arg0->unkA;
            phi_t0 = phi_t0_2 | 4;
        } else if (phi_a1_4 != 0) {
            sp84 = (spCC * spD4) + spEC + (f32) arg0->unk6;
            sp88 = (spCC * spD8) + spF0 + (f32) arg0->unk8 + (f32) arg0->unk4;
            sp8C = (spCC * spDC) + spF4 + (f32) arg0->unkA;
            phi_t0 = phi_t0_2 | 4;
        }
loop_63:
        phi_v1_5 = phi_v1_3;
        if (((1 << phi_v0_3) & phi_t0) != 0) {
            if (phi_v1_3 == 0) {
                temp_t2 = &sp6C + (phi_v0_3 * 0xC);
                arg3->x = temp_t2->unk0;
                arg3->y = temp_t2->unk4;
                arg3->z = temp_t2->unk8;
                goto block_70;
            }
            if (phi_v1_3 == 1) {
                temp_s0 = (phi_v0_3 * 0xC) + &sp6C;
                sp68 = phi_v1_3;
                sp4C = Math3D_DistanceSquared(arg3, arg1);
                phi_v1_4 = phi_v1_3;
                if (sp4C < Math3D_DistanceSquared(arg3, temp_s0)) {
                    arg4->x = temp_s0->x;
                    arg4->y = temp_s0->y;
                    arg4->z = temp_s0->z;
                } else {
                    arg4->x = arg3->x;
                    arg4->y = arg3->y;
                    arg4->z = arg3->z;
                    arg3->x = temp_s0->x;
                    arg3->y = temp_s0->y;
                    arg3->z = temp_s0->z;
                }
            } else {
block_70:
                phi_v1_5 = phi_v1_3 + 1;
                goto block_71;
            }
        } else {
block_71:
            temp_v0_2 = phi_v0_3 + 1;
            phi_v0_3 = temp_v0_2;
            phi_v1_3 = phi_v1_5;
            phi_v1_4 = phi_v1_5;
            if (temp_v0_2 != 4) {
                goto loop_63;
            }
        }
        return phi_v1_4;
    }
    return 0;
}

s32 Math3D_ColCylinderTri(Cylinder16 *cylinder, TriNorm *tri, Vec3f *pzParm3) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp54;
    Vec3f *sp48;
    Vec3f *sp44;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    f32 *temp_a0;
    f32 *temp_a1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 phi_f2;
    f32 phi_f2_2;
    f32 phi_f2_3;

    temp_f0 = tri->vtx[0].y;
    temp_f12 = (f32) cylinder->pos.y + (f32) cylinder->yShift;
    temp_f14 = (f32) cylinder->height + temp_f12;
    if (((temp_f0 < temp_f12) && (tri->vtx[1].y < temp_f12) && (tri->vtx[2].y < temp_f12)) || ((temp_a2 = &tri->vtx[1], (temp_f14 < temp_f0)) && (temp_f14 < tri->vtx[1].y) && (temp_f14 < tri->vtx[2].y))) {
        goto block_24;
    }
    sp48 = temp_a2;
    sp84 = temp_f12;
    sp88 = temp_f14;
    sp80 = 1e38.0f;
    phi_f2 = 1e38.0f;
    if (func_8017E350((void *) cylinder, (Vec3f *) tri, temp_a2, &D_801FBC48, &D_801FBC58) != 0) {
        temp_f2 = Math3D_DistanceSquared(&D_801FBC48, (Vec3f *) tri);
        pzParm3->x = D_801FBC48.x;
        pzParm3->y = D_801FBC48.y;
        pzParm3->z = D_801FBC48.z;
        phi_f2 = temp_f2;
    }
    temp_a1 = &tri->vtx[2];
    sp44 = temp_a1;
    sp80 = phi_f2;
    phi_f2_2 = phi_f2;
    if (func_8017E350((void *) cylinder, temp_a1, sp48, &D_801FBC48, &D_801FBC58) != 0) {
        sp80 = phi_f2;
        temp_f0_2 = Math3D_DistanceSquared(&D_801FBC48, sp44);
        phi_f2_2 = phi_f2;
        if (temp_f0_2 < phi_f2) {
            temp_f2_2 = temp_f0_2;
            pzParm3->x = D_801FBC48.x;
            pzParm3->y = D_801FBC48.y;
            pzParm3->z = D_801FBC48.z;
            phi_f2_2 = temp_f2_2;
        }
    }
    sp80 = phi_f2_2;
    phi_f2_3 = phi_f2_2;
    if (func_8017E350((void *) cylinder, (Vec3f *) tri, sp44, &D_801FBC48, &D_801FBC58) != 0) {
        sp80 = phi_f2_2;
        temp_f0_3 = Math3D_DistanceSquared(&D_801FBC48, (Vec3f *) tri);
        phi_f2_3 = phi_f2_2;
        if (temp_f0_3 < phi_f2_2) {
            temp_f2_3 = temp_f0_3;
            pzParm3->x = D_801FBC48.x;
            pzParm3->y = D_801FBC48.y;
            pzParm3->z = D_801FBC48.z;
            phi_f2_3 = temp_f2_3;
        }
    }
    if (phi_f2_3 != 1e38.0f) {
        return 1;
    }
    if (func_8017C008((f32 *) tri, (f32 *) sp48, sp44, tri->plane.normal.x, tri->plane.normal.y, tri->plane.normal.z, tri->plane.originDist, (f32) cylinder->pos.z, (f32) cylinder->pos.x, &sp8C, sp84, sp88) != 0) {
        temp_a0 = &sp60;
        sp70 = sp8C;
        temp_a1_2 = &sp6C;
        sp6C = (f32) cylinder->pos.x;
        sp74 = (f32) cylinder->pos.z;
        sp60 = (tri->vtx[1].x + tri->vtx[0].x) * 0.5f;
        sp64 = (tri->vtx[1].y + tri->vtx[0].y) * 0.5f;
        sp68 = (tri->vtx[1].z + tri->vtx[0].z) * 0.5f;
        Math_Vec3f_Diff((Vec3f *) temp_a0, (Vec3f *) temp_a1_2, (Vec3f *) &sp54);
        temp_f14_2 = sqrtf((sp54 * sp54) + (sp5C * sp5C));
        if (fabsf(temp_f14_2) < 0.008f) {
            Math_Vec3f_Copy(pzParm3, (Vec3f *) &sp60);
            return 1;
        }
        Math3D_ScaleAndAdd((Vec3f *) &sp6C, (Vec3f *) &sp54, (f32) cylinder->radius / temp_f14_2, pzParm3);
        return 1;
    }
    D_801FBC40.center.x = cylinder->pos.x;
    D_801FBC38.center.x = D_801FBC40.center.x;
    D_801FBC44 = cylinder->pos.z;
    D_801FBC3A = D_801FBC44;
    D_801FBC3A = (s16) (s32) sp88;
    D_801FBC46 = (s16) (s32) sp84;
    D_801FBC46 = cylinder->radius;
    D_801FBC3E = D_801FBC46;
    if ((Math3D_ColSphereTri(&D_801FBC38, tri, pzParm3) != 0) || (Math3D_ColSphereTri(&D_801FBC40, tri, pzParm3) != 0)) {
        return 1;
    }
block_24:
    return 0;
}

void func_8017F1A0(Cylinder16 *arg0, TriNorm *arg1) {
    ? sp1C;

    Math3D_ColCylinderTri(arg0, arg1, (Vec3f *) &sp1C);
}

s32 Math3D_ColSphereSphere(Sphere16 *sphere1, Sphere16 *sphere2) {
    f32 sp1C;

    return Math3D_ColSphereSphereIntersect(sphere1, sphere2, &sp1C);
}

s32 Math3D_ColSphereSphereIntersect(Sphere16 *sphere1, Sphere16 *sphere2, f32 *intersectAmount) {
    f32 sp1C;

    return Math3D_ColSphereSphereIntersectAndDistance(sphere1, sphere2, intersectAmount, &sp1C);
}

s32 Math3D_ColSphereSphereIntersectAndDistance(Sphere16 *sphere1, Sphere16 *sphere2, f32 *intersectAmount, f32 *dist) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;

    temp_f2 = (f32) sphere1->center.x - (f32) sphere2->center.x;
    temp_f12 = (f32) sphere1->center.y - (f32) sphere2->center.y;
    temp_f14 = (f32) sphere1->center.z - (f32) sphere2->center.z;
    temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
    *dist = temp_f0;
    *intersectAmount = ((f32) sphere1->radius + (f32) sphere2->radius) - temp_f0;
    if (*intersectAmount > 0.008f) {
        return 1;
    }
    *intersectAmount = 0.0f;
    return 0;
}

s32 Math3D_ColSphereCylinderDistance(Sphere16 *sphere, Cylinder16 *cylinder, f32 *dist) {
    f32 sp1C;

    return Math3D_ColSphereCylinderDistanceAndAmount(sphere, cylinder, dist, &sp1C);
}

s32 Math3D_ColSphereCylinderDistanceAndAmount(Sphere16 *sphere, Cylinder16 *cylinder, f32 *dist, f32 *intersectAmount) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f6;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_cond;

    temp_v0 = sphere->radius;
    if (((s32) temp_v0 <= 0) || (temp_v1 = cylinder->radius, ((s32) temp_v1 <= 0))) {
        return 0;
    }
    temp_f2 = (f32) temp_v0;
    D_801FBCA4 = (f32) sphere->center.y;
    D_801FBCAC = temp_f2;
    D_801FBC98 = (f32) cylinder->pos.y;
    D_801FBC90 = (f32) cylinder->yShift;
    D_801FBC8C = (f32) cylinder->height;
    temp_f12 = (f32) sphere->center.x - (f32) cylinder->pos.x;
    temp_f14 = (f32) sphere->center.z - (f32) cylinder->pos.z;
    temp_f16 = temp_f2 + (f32) temp_v1;
    temp_f0 = sqrtf((temp_f12 * temp_f12) + (temp_f14 * temp_f14));
    temp_cond = temp_f16 < temp_f0;
    *intersectAmount = temp_f0;
    if (temp_cond) {
        return 0;
    }
    temp_f10 = D_801FBCA4;
    temp_f6 = D_801FBCAC;
    temp_f0_2 = D_801FBC98 + D_801FBC90;
    if ((temp_f0_2 <= (temp_f10 + temp_f6)) && ((temp_f10 - temp_f6) <= (temp_f0_2 + D_801FBC8C))) {
        *dist = temp_f16 - *intersectAmount;
        return 1;
    }
    return 0;
}

s32 Math3D_ColCylinderCylinderAmount(Cylinder16 *cylinder1, Cylinder16 *cylinder2, f32 *intersectAmount) {
    f32 sp1C;

    return Math3D_ColCylinderCylinderAmountAndDistance(cylinder1, cylinder2, intersectAmount, &sp1C);
}

s32 Math3D_ColCylinderCylinderAmountAndDistance(Cylinder16 *cylinder1, Cylinder16 *cylinder2, f32 *intersectAmount, f32 *dist) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;

    Math_Vec3s_ToVec3f((Vec3f *) &D_801FBCBC, &cylinder1->pos);
    D_801FBCB0 = (f32) cylinder1->radius;
    D_801FBCB8 = (f32) cylinder1->yShift;
    D_801FBCB4 = (f32) cylinder1->height;
    Math_Vec3s_ToVec3f((Vec3f *) &D_801FBCD4, &cylinder2->pos);
    D_801FBCC8 = (f32) cylinder2->radius;
    D_801FBCD0 = (f32) cylinder2->yShift;
    D_801FBCCC = (f32) cylinder2->height;
    temp_f2 = D_801FBCBC - D_801FBCD4;
    temp_f12 = D_801FBCC4 - D_801FBCDC;
    temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
    *dist = temp_f0;
    temp_f14 = D_801FBCB0 + D_801FBCC8;
    if (temp_f14 < temp_f0) {
        return 0;
    }
    temp_f0_2 = D_801FBCC0 + D_801FBCB8;
    temp_f2_2 = D_801FBCD8 + D_801FBCD0;
    if (((temp_f0_2 + D_801FBCB4) < temp_f2_2) || ((temp_f2_2 + D_801FBCCC) < temp_f0_2)) {
        return 0;
    }
    *intersectAmount = temp_f14 - *dist;
    return 1;
}

s32 Math3d_ColTriTri(TriNorm *tri1, TriNorm *tri2, Vec3f *uParm3) {
    f32 sp5C;
    f32 sp58;
    Plane *sp50;
    Vec3f *sp4C;
    Vec3f *sp48;
    Vec3f *sp44;
    Vec3f *sp40;
    Plane *temp_a0;
    Plane *temp_a0_2;
    Vec3f *temp_a1;
    Vec3f *temp_a1_2;
    Vec3f *temp_a1_3;
    Vec3f *temp_a1_4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;

    temp_a0 = &tri1->plane;
    sp50 = temp_a0;
    temp_a1 = &tri2->vtx[1];
    sp5C = func_8017B9D8(temp_a0, tri2);
    sp4C = temp_a1;
    temp_f0 = func_8017B9D8(temp_a0, (TriNorm *) temp_a1);
    temp_a1_2 = &tri2->vtx[2];
    sp48 = temp_a1_2;
    sp58 = temp_f0;
    temp_f0_2 = func_8017B9D8(temp_a0, (TriNorm *) temp_a1_2);
    if (((sp5C > 0.0f) && (sp58 > 0.0f) && (temp_f0_2 > 0.0f)) || ((temp_a0_2 = &tri2->plane, (sp5C < 0.0f)) && (sp58 < 0.0f) && (temp_f0_2 < 0.0f))) {
        goto block_26;
    }
    sp50 = temp_a0_2;
    temp_a1_3 = &tri1->vtx[1];
    sp5C = func_8017B9D8((bitwise Plane *) sp58, (bitwise TriNorm *) sp5C, temp_a0_2, tri1);
    sp44 = temp_a1_3;
    temp_f0_3 = func_8017B9D8(temp_a0_2, (TriNorm *) temp_a1_3);
    temp_a1_4 = &tri1->vtx[2];
    sp40 = temp_a1_4;
    sp58 = temp_f0_3;
    temp_f0_4 = func_8017B9D8(temp_a0_2, (TriNorm *) temp_a1_4);
    if (((sp5C > 0.0f) && (sp58 > 0.0f) && (temp_f0_4 > 0.0f)) || ((sp5C < 0.0f) && (sp58 < 0.0f) && (temp_f0_4 < 0.0f))) {
        goto block_26;
    }
    if (func_8017D404((bitwise f32 *) sp58, (f32 *) tri2, (f32 *) sp4C, (bitwise f32) sp48, tri2->plane.normal.x, tri2->plane.normal.y, tri2->plane.normal.z, (bitwise Vec3f *) tri2->plane.originDist, (Vec3f *) tri1, sp44, uParm3, 0) != 0) {
        return 1;
    }
    if (func_8017D404((f32 *) tri2, (f32 *) sp4C, (f32 *) sp48, tri2->plane.normal.x, tri2->plane.normal.y, tri2->plane.normal.z, tri2->plane.originDist, sp44, sp40, uParm3, NULL) != 0) {
        return 1;
    }
    if (func_8017D404((f32 *) tri2, (f32 *) sp4C, (f32 *) sp48, tri2->plane.normal.x, tri2->plane.normal.y, tri2->plane.normal.z, tri2->plane.originDist, sp40, (Vec3f *) tri1, uParm3, NULL) != 0) {
        return 1;
    }
    if (func_8017D404((f32 *) tri1, (f32 *) sp44, (f32 *) sp40, tri1->plane.normal.x, tri1->plane.normal.y, tri1->plane.normal.z, tri1->plane.originDist, (Vec3f *) tri2, sp4C, uParm3, NULL) != 0) {
        return 1;
    }
    if (func_8017D404((f32 *) tri1, (f32 *) sp44, (f32 *) sp40, tri1->plane.normal.x, tri1->plane.normal.y, tri1->plane.normal.z, tri1->plane.originDist, sp4C, sp48, uParm3, NULL) != 0) {
        return 1;
    }
    if (func_8017D404((f32 *) tri1, (f32 *) sp44, (f32 *) sp40, tri1->plane.normal.x, tri1->plane.normal.y, tri1->plane.normal.z, tri1->plane.originDist, sp48, (Vec3f *) tri2, uParm3, NULL) != 0) {
        return 1;
    }
block_26:
    return 0;
}

? func_8017F9C0(void *arg0, f32 arg1, f32 arg2) {
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0;

    temp_v0 = arg0->unk6;
    temp_f0 = (f32) arg0->unk0 - arg1;
    temp_f2 = (f32) arg0->unk4 - arg2;
    if (((temp_f0 * temp_f0) + (temp_f2 * temp_f2)) <= (f32) (temp_v0 * temp_v0)) {
        return 1;
    }
    return 0;
}

? func_8017FA34(void *arg0, f32 arg1, f32 arg2) {
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0;

    temp_v0 = arg0->unk6;
    temp_f0 = (f32) arg0->unk0 - arg1;
    temp_f2 = (f32) arg0->unk2 - arg2;
    if (((temp_f0 * temp_f0) + (temp_f2 * temp_f2)) <= (f32) (temp_v0 * temp_v0)) {
        return 1;
    }
    return 0;
}

? func_8017FAA8(void *arg0, f32 arg1, f32 arg2) {
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0;

    temp_v0 = arg0->unk6;
    temp_f0 = (f32) arg0->unk2 - arg1;
    temp_f2 = (f32) arg0->unk4 - arg2;
    if (((temp_f0 * temp_f0) + (temp_f2 * temp_f2)) <= (f32) (temp_v0 * temp_v0)) {
        return 1;
    }
    return 0;
}

? func_8017FB1C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 *arg7, f32 *arg8, f32 *arg9, f32 *argA) {
    f32 sp3C;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f8;
    ? phi_a1;

    if (((fabsf(arg5) < 0.008f) && (fabsf(arg6) < 0.008f)) || (temp_f14 = (arg5 * arg5) + (arg6 * arg6), (fabsf(temp_f14) < 0.008f))) {
        *arg7 = 0.0f;
        *arg8 = 0.0f;
        *arg9 = 0.0f;
        *argA = 0.0f;
        return 0;
    }
    temp_f2 = arg3 - arg0;
    temp_f12 = arg4 - arg1;
    temp_f20 = 2.0f * ((arg5 * temp_f2) + (arg6 * temp_f12));
    temp_f18 = (temp_f20 * temp_f20) - (4.0f * temp_f14 * (((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) - (arg2 * arg2)));
    temp_f0 = fabsf(temp_f18);
    sp3C = temp_f18;
    phi_a1 = 0;
    if (temp_f0 < 0.008f) {
        temp_f0_2 = -temp_f20 / (2.0f * temp_f14);
        *arg7 = (arg5 * temp_f0_2) + arg3;
        *arg8 = (arg6 * temp_f0_2) + arg4;
        *arg9 = 0.0f;
        *argA = 0.0f;
    }
    if (sp3C > 0.0f) {
        temp_f0_3 = sqrtf(sp3C);
        temp_f12_2 = -temp_f20;
        temp_f16 = 2.0f * temp_f14;
        temp_f18_2 = (temp_f12_2 - temp_f0_3) / temp_f16;
        temp_f6 = arg6 * temp_f18_2;
        temp_f4 = temp_f0_3 + temp_f12_2;
        *arg7 = (arg5 * temp_f18_2) + arg3;
        temp_f8 = temp_f4 / temp_f16;
        *arg8 = temp_f6 + arg4;
        sp24 = temp_f8;
        *arg9 = (arg5 * temp_f8) + arg3;
        *argA = (arg6 * temp_f8) + arg4;
        phi_a1 = 2;
    } else {
        *arg7 = 0.0f;
        *arg8 = 0.0f;
    }
    return phi_a1;
}

void func_8017FD44(Vec3f *arg0, void *arg1, void *arg2, f32 arg3) {
    f32 sp34;
    f32 sp2C;
    s16 sp2A;
    f32 sp24;
    s32 sp20;
    f32 *temp_a0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f6;
    f32 temp_f8;
    s16 temp_v0;
    s32 temp_f18;

    if (!(arg3 < -1.0f) || !(arg3 > 1.0f)) {
        temp_a0 = &sp2C;
        temp_f8 = (arg0->x + arg1->unk0) * 0.5f;
        sp2C = temp_f8;
        temp_f6 = (arg0->z + arg1->unk8) * 0.5f;
        sp34 = temp_f6;
        temp_f2 = temp_f8 - arg0->x;
        temp_f12 = temp_f6 - arg0->z;
        sp24 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
        temp_f14 = arg0->y;
        arg2->unk4 = (f32) (((arg1->unk4 - temp_f14) * arg3) + temp_f14);
        temp_v0 = Math_Vec3f_Yaw((Vec3f *) temp_a0, arg0);
        sp2A = temp_v0;
        temp_f18 = (s32) (32767.0f * arg3);
        sp20 = (s32) (s16) temp_f18;
        arg2->unk0 = (f32) ((Math_SinS((s16) ((s16) temp_f18 + temp_v0)) * sp24) + sp2C);
        arg2->unk8 = (f32) ((Math_CosS((s16) ((s16) temp_f18 + sp2A)) * sp24) + sp34);
    }
}
