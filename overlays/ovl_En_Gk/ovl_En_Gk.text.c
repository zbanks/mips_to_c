typedef struct EnGk {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk144;            /* inferred */
    /* 0x190 */ SkelAnime unk190;                   /* inferred */
    /* 0x1D4 */ void (*actionFunc)(EnGk *, GlobalContext *);
    /* 0x1D8 */ Vec3s unk1D8;                       /* inferred */
    /* 0x1DE */ Vec3s unk1DE;                       /* inferred */
    /* 0x1E4 */ s16 unk1E4;                         /* inferred */
    /* 0x1E6 */ char pad1E6[0x2];
    /* 0x1E8 */ Path *unk1E8;                       /* inferred */
    /* 0x1EC */ char pad1EC[0x4];
    /* 0x1F0 */ Vec3s unk1F0;                       /* inferred */
    /* 0x1F6 */ char pad1F6[0x72];                  /* maybe part of unk1F0[20]? */
    /* 0x268 */ Vec3s unk268;                       /* inferred */
    /* 0x26E */ char pad26E[0x72];                  /* maybe part of unk268[20]? */
    /* 0x2E0 */ s16 unk2E0;                         /* inferred */
    /* 0x2E2 */ s16 unk2E2;                         /* inferred */
    /* 0x2E4 */ s16 unk2E4;                         /* inferred */
    /* 0x2E6 */ char pad2E6[0x32];                  /* maybe part of unk2E4[26]? */
    /* 0x318 */ s16 unk318;                         /* inferred */
    /* 0x31A */ char pad31A[0x3A];                  /* maybe part of unk318[30]? */
    /* 0x354 */ f32 unk354;                         /* inferred */
} EnGk;                                             /* size = 0x358 */

struct _mips2c_stack_EnGk_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnGk_Draw {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad3C[0x8];                     /* maybe part of sp38[3]? */
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad48[0x4];
    /* 0x4C */ GraphicsContext *sp4C;               /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad68[0x8];
};                                                  /* size = 0x70 */

struct _mips2c_stack_EnGk_Init {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnGk_Update {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B50410 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B50710 {};              /* size 0x0 */

struct _mips2c_stack_func_80B507A0 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ Collider *sp28;                      /* inferred */
    /* 0x2C */ CollisionCheckContext *sp2C;         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B50854 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B50954 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ SkelAnime *sp1C;                     /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B509A8 {
    /* 0x00 */ char pad0[0x4C];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80B50B38 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B50C78 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad30[0xC];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x8];                     /* maybe part of sp44[3]? */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ char pad54[0x4];
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80B50E14 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B50ED4 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad28[0x40];
    /* 0x68 */ s16 sp68;                            /* inferred */
    /* 0x6A */ s16 sp6A;                            /* inferred */
    /* 0x6C */ s16 sp6C;                            /* inferred */
    /* 0x6E */ char pad6E[0x2];
    /* 0x70 */ ? sp70;                              /* inferred */
    /* 0x70 */ char pad70[0xC];
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad7C[0xC];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_80B5100C {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad3C[0x4];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x4];
    /* 0x4C */ void *sp4C;                          /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80B5123C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B51308 {
    /* 0x00 */ char pad0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B51398 {
    /* 0x00 */ char pad0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B51410 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B51510 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ u32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B51698 {
    /* 0x00 */ char pad0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B51760 {
    /* 0x00 */ char pad0[0x2E];
    /* 0x2E */ s16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B51970 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B51B40 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B51D9C {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B51EA4 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ u8 *sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x6];                     /* maybe part of sp2C[2]? */
    /* 0x36 */ s16 sp36;                            /* inferred */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad38[0x2];
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B51FD0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B5202C {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B5216C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B521E8 {
    /* 0x00 */ char pad0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B5227C {
    /* 0x00 */ char pad0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B52340 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B52430 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B5253C {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B525E0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B52654 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B52AD4 {};              /* size 0x0 */

struct _mips2c_stack_func_80B52AF0 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad50[0x8];                     /* maybe part of sp4C[3]? */
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad58[0x10];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80B52D8C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

? Parameter_AddMagic(GlobalContext *, s16, u8);     /* extern */
? func_801A4748(Vec3f *, ?, EnGk *);                /* extern */
u16 func_80B50410(Actor *arg0, GlobalContext *arg1); /* static */
u16 func_80B50710(Actor *arg0);                     /* static */
void func_80B507A0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B50854(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B50954(Actor *arg0);                    /* static */
void func_80B509A8(EnGk *arg0, GlobalContext *arg1); /* static */
void func_80B50B38(EnGk *arg0, GlobalContext *arg1); /* static */
s32 func_80B50C78(Actor *arg0, u8 *arg1, s32 arg2); /* static */
f32 func_80B50E14(u8 *arg0, s32 arg1, Vec3f *arg2, ? *arg3); /* static */
? func_80B50ED4(s16 arg0, s16 arg1, void *arg2, s16 *arg3, s32 arg4, s32 arg5); /* static */
? func_80B5100C(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80B5123C(Actor *arg0, GlobalContext *arg1);  /* static */
void func_80B51308(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B51398(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B51410(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B51510(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B51698(void *arg0, ? arg1);             /* static */
void func_80B51760(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B51970(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B51B40(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B51D9C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B51EA4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B51FD0(EnGk *arg0, GlobalContext *arg1); /* static */
void func_80B5202C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B5216C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B521E8(void *arg0, ? arg1);             /* static */
void func_80B5227C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B52340(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B52430(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B5253C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B525E0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B52654(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B52AD4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_80B52AF0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80B52D8C(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern ? D_06006680;
extern ? D_06006688;
extern AnimationHeader D_0600787C;
extern FlexSkeletonHeader D_060079C0;
static ColliderCylinderInit D_80B53210 = {
    {0xA, 0, 0, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x18, 0x20, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80B5323C = {0, 0x18, 0x20, 0, 0xFF};
static DamageTable D_80B53248 = {
    {
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
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
};
static ActorAnimationEntry D_80B53268[9] = {
    {(AnimationHeader *)0x600787C, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6007DC4, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x60092C0, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6005EDC, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6009638, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6008774, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600AE34, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600BD90, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x600C308, 1.0f, 0.0f, 0.0f, 0, 0.0f},
};
static AnimationHeaderCommon *D_80B53340[24] = {
    (AnimationHeaderCommon *)0x6009858,
    (AnimationHeaderCommon *)0x3F800000,
    NULL,
    NULL,
    (AnimationHeaderCommon *)0x2000000,
    NULL,
    (AnimationHeaderCommon *)0x6009D88,
    (AnimationHeaderCommon *)0x3F800000,
    NULL,
    NULL,
    NULL,
    NULL,
    (AnimationHeaderCommon *)0x600A21C,
    (AnimationHeaderCommon *)0x3F800000,
    NULL,
    NULL,
    (AnimationHeaderCommon *)0x2000000,
    NULL,
    (AnimationHeaderCommon *)0x600AAEC,
    (AnimationHeaderCommon *)0x3F800000,
    NULL,
    NULL,
    NULL,
    NULL,
};
static Color_RGBA8 D_80B533A0 = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80B533A4 = {0x32, 0x96, 0x96, 0};
static ? D_80B533A8;                                /* unable to generate initializer */
static ? D_80B533B4;                                /* unable to generate initializer */
static ? D_80B533C0;                                /* unable to generate initializer */
static ? D_80B533CC;                                /* unable to generate initializer */
static ? D_80B533D8;                                /* unable to generate initializer */
static ? D_80B533E4;                                /* unable to generate initializer */

u16 func_80B50410(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    u16 temp_t6;
    u16 temp_t8;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_5;
    void *temp_v0;

    temp_v1 = arg1->sceneNum;
    temp_v0 = arg1->actorCtx.actorList[2].first;
    if (temp_v1 == 0x5E) {
        if (temp_v0->unk14B == 1) {
            temp_v1_2 = gSaveContext.weekEventReg[40];
            if ((temp_v1_2 & 0x80) == 0) {
                temp_t8 = arg0->unk31C;
                switch (temp_t8) {                  /* switch 1 */
                case 3706:                          /* switch 1 */
                    return 0xE7BU;
                case 3707:                          /* switch 1 */
                    return 0xE7CU;
                case 3708:                          /* switch 1 */
                    return 0xE7DU;
                case 3709:                          /* switch 1 */
                    return 0xE7EU;
                case 3710:                          /* switch 1 */
                    return 0xE7FU;
                case 3711:                          /* switch 1 */
                    gSaveContext.weekEventReg[40] = temp_v1_2 | 0x80;
                    arg0->unk1E4 = (u16) (arg0->unk1E4 | 1);
                    return 0xE80U;
                default:                            /* switch 1 */
                    return 0xE7AU;
                }
            } else {
                arg0->unk1E4 = (u16) (arg0->unk1E4 | 1);
                return 0xE81U;
            }
        } else {
            temp_v1_3 = gSaveContext.weekEventReg[41];
            if ((temp_v1_3 & 1) == 0) {
                temp_t6 = arg0->unk31C;
                switch (temp_t6) {                  /* switch 2 */
                case 3714:                          /* switch 2 */
                    return 0xE83U;
                case 3715:                          /* switch 2 */
                    return 0xE7DU;
                case 3709:                          /* switch 2 */
                    return 0xE7EU;
                case 3710:                          /* switch 2 */
                    return 0xE7FU;
                case 3711:                          /* switch 2 */
                    gSaveContext.weekEventReg[41] = temp_v1_3 | 1;
                    arg0->unk1E4 = (u16) (arg0->unk1E4 | 1);
                    return 0xE80U;
                default:                            /* switch 2 */
                    return 0xE82U;
                }
            } else {
                arg0->unk1E4 = (u16) (arg0->unk1E4 | 1);
                return 0xE81U;
            }
        }
    } else {
        if (temp_v1 == 0x6B) {
            if (temp_v0->unk14B == 1) {
                temp_v1_4 = gSaveContext.weekEventReg[41];
                if ((temp_v1_4 & 4) == 0) {
                    if (arg0->unk31C == 0xE88) {
                        if (((temp_v1_4 & 8) == 0) || (func_80114E90() != 0)) {
                            return 0xE89U;
                        }
                        gSaveContext.weekEventReg[41] |= 4;
                        arg0->unk1E4 = (u16) (arg0->unk1E4 | 1);
                        return 0xE94U;
                    }
                    return 0xE88U;
                }
                temp_v0_2 = arg0->unk31C;
                if ((temp_v0_2 == 0xE8D) || (temp_v0_2 == 0xE98)) {
                    if (((temp_v1_4 & 8) == 0) || (func_80114E90() != 0)) {
                        return 0xE89U;
                    }
                    gSaveContext.weekEventReg[41] |= 4;
                    arg0->unk1E4 = (u16) (arg0->unk1E4 | 1);
                    return 0xE94U;
                }
                if ((arg0->unk1E4 & 0x10) != 0) {
                    return 0xE8DU;
                }
                return 0xE98U;
            }
            temp_v1_5 = gSaveContext.weekEventReg[41];
            if ((temp_v1_5 & 2) == 0) {
                temp_v0_3 = arg0->unk31C;
                if (temp_v0_3 != 0xE85) {
                    if (temp_v0_3 != 0xE86) {
                        return 0xE85U;
                    }
                    gSaveContext.weekEventReg[41] = temp_v1_5 | 2;
                    arg0->unk1E4 = (u16) (arg0->unk1E4 | 1);
                    return 0xE87U;
                }
                return 0xE86U;
            }
            arg0->unk1E4 = (u16) (arg0->unk1E4 | 1);
            return 0xE87U;
        }
        return 0U;
    }
}

u16 func_80B50710(Actor *arg0) {
    u16 temp_t0;
    u16 temp_t6;
    u16 temp_v0;

    temp_v0 = arg0->unk31C;
    if (temp_v0 != 0xE8A) {
        if (temp_v0 != 0xE8B) {
            if (temp_v0 == 0xE8E) {
                gSaveContext.weekEventReg[41] |= 4;
                temp_t0 = arg0->unk1E4 & 0xFFEF;
                arg0->unk1E4 = temp_t0;
                arg0->unk1E4 = (u16) (temp_t0 | 1);
                return 0xE8FU;
            }
            return 0U;
        }
        gSaveContext.weekEventReg[41] |= 4;
        temp_t6 = arg0->unk1E4 | 0x10;
        arg0->unk1E4 = temp_t6;
        arg0->unk1E4 = (u16) (temp_t6 | 1);
        return 0xE8CU;
    }
    return 0xE8BU;
}

void func_80B507A0(Actor *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp2C;
    Collider *sp28;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;
    GlobalContext *temp_a0;

    temp_a1 = arg1 + 0x18884;
    arg0->unk18A = (s16) (s32) arg0->world.pos.x;
    temp_a2 = arg0 + 0x144;
    arg0->unk18C = (s16) (s32) arg0->world.pos.y;
    temp_a0 = arg1;
    arg0->unk18E = (s16) (s32) arg0->world.pos.z;
    arg1 = arg1;
    sp28 = temp_a2;
    sp2C = temp_a1;
    CollisionCheck_SetAC(temp_a0, temp_a1, temp_a2);
    CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
    Actor_UpdateBgCheckInfo(arg1, arg0, 10.0f, 30.0f, 30.0f, 7U);
}

s32 func_80B50854(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    u16 temp_v0;
    void *temp_v1;

    temp_v0 = arg0->unk1E4;
    temp_v1 = arg1->actorCtx.actorList[2].first;
    if ((temp_v0 & 0x40) == 0) {
        if ((temp_v1->unkA70 * 0x10) < 0) {
            arg0->unk1E4 = (u16) (temp_v0 | 0x40);
            arg1 = arg1;
            sp24 = temp_v1;
            play_sound(0x4807U);
        }
    } else if ((temp_v1->unkA70 * 0x10) >= 0) {
        arg0->unk1E4 = (u16) (temp_v0 & 0xFFBF);
    }
    if ((temp_v1->unk14B == 1) && (arg1->msgCtx.unk1202A == 3) && (arg1->msgCtx.unk1202E == 1)) {
        Actor_SetSwitchFlag(arg1, (s32) (arg0->params & 0x3F00) >> 8);
        arg0->unk2E4 = 3;
        func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B53268, 3);
        arg0->unk1D4 = func_80B521E8;
        return 1;
    }
    return 0;
}

void func_80B50954(Actor *arg0) {
    SkelAnime *sp1C;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x190;
    sp1C = temp_a0;
    if ((func_801378B8(temp_a0, 0.0f) != 0) || (func_801378B8(temp_a0, 4.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x39F8U);
    }
}

void func_80B509A8(EnGk *arg0, GlobalContext *arg1) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    s16 temp_v0;
    s32 phi_s1;

    arg0->unk300 += 2.0f * Rand_Centered();
    arg0->unk304 += Rand_ZeroOne();
    arg0->unk308 += 2.0f * Rand_Centered();
    arg0->unk30C += 2.0f * Rand_Centered();
    arg0->unk310 += Rand_ZeroOne();
    temp_v0 = arg0->unk2E4;
    arg0->unk314 += 2.0f * Rand_Centered();
    phi_s1 = 0;
    if (temp_v0 == 0) {
        sp4C = 0.0f;
        sp54 = 0.0f;
        sp50 = -1.2f;
        phi_s1 = 0x19;
    } else if ((temp_v0 == 2) || (temp_v0 == 9) || (temp_v0 == 0xA) || (temp_v0 == 0xB)) {
        sp4C = 0.0f;
        sp54 = 0.0f;
        sp50 = -0.5f;
        phi_s1 = 0xA;
    }
    EffectSsDtBubble_SpawnCustomColor(arg1, arg0 + 0x2E8, arg0 + 0x300, (Vec3f *) &sp4C, &D_80B533A0, &D_80B533A4, (s16) Rand_S16Offset(0xF, 0xF), (s16) phi_s1, (s16) 0);
    EffectSsDtBubble_SpawnCustomColor(arg1, arg0 + 0x2F4, arg0 + 0x30C, (Vec3f *) &sp4C, &D_80B533A0, &D_80B533A4, (s16) Rand_S16Offset(0xF, 0xF), (s16) phi_s1, (s16) 0);
}

void func_80B50B38(EnGk *arg0, GlobalContext *arg1) {
    s16 temp_s0;
    s16 temp_v0;
    u16 temp_t6;
    s16 phi_s0;

    temp_t6 = arg0->unk2E4;
    switch (temp_t6) {
    case 0:
        arg0->unk2E0 = 3;
        phi_s0 = 0;
        do {
            func_80B509A8(arg0, arg1);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while ((s32) temp_s0 < 2);
        return;
    case 2:
        arg0->unk2E0 = 3;
        func_80B509A8(arg0, arg1);
        return;
    case 1:
    case 3:
    case 12:
        arg0->unk2E0 = 2;
        return;
    case 9:
    case 10:
    case 11:
        arg0->unk2E0 = 3;
        func_80B509A8(arg0, arg1);
        return;
    default:
        temp_v0 = arg0->unk2E2 - 1;
        if ((s32) temp_v0 >= 3) {
            arg0->unk2E0 = 0;
            goto block_13;
        }
        if (temp_v0 == 0) {
            arg0->unk2E0 = 2;
            arg0->unk2E2 = (s32) (Rand_ZeroOne() * 60.0f) + 0x14;
            return;
        }
        arg0->unk2E0 = 1;
block_13:
        arg0->unk2E2 = temp_v0;
        return;
    }
}

s32 func_80B50C78(Actor *arg0, u8 *arg1, s32 arg2) {
    void *sp5C;
    s32 sp58;
    s32 sp50;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    ? sp30;
    s32 sp28;
    s32 temp_a3;
    u8 temp_a2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    f32 phi_f12;
    f32 phi_f14;

    temp_v0 = Lib_SegmentedToVirtual(arg1->unk4);
    temp_a2 = arg1->unk0;
    temp_a3 = arg2 * 6;
    sp50 = 0;
    sp28 = temp_a3;
    sp5C = temp_v0;
    sp58 = (s32) temp_a2;
    Math_Vec3s_ToVec3f((Vec3f *) &sp30, temp_a3 + temp_v0);
    if (arg2 == 0) {
        phi_f12 = (f32) (sp5C->unk6 - sp5C->unk0);
        phi_f14 = (f32) (sp5C->unkA - sp5C->unk4);
    } else {
        temp_v0_2 = sp5C + temp_a3;
        if (temp_a2 == (arg2 + 1)) {
            temp_v0_3 = sp5C + (temp_a2 * 6);
            phi_f12 = (f32) (temp_v0_3->unk-6 - temp_v0_3->unk-C);
            phi_f14 = (f32) (temp_v0_3->unk-2 - temp_v0_3->unk-8);
        } else {
            phi_f12 = (f32) (temp_v0_2->unk6 - temp_v0_2->unk-6);
            phi_f14 = (f32) (temp_v0_2->unkA - temp_v0_2->unk-2);
        }
    }
    func_8017B7F8((Vec3f *) &sp30, (s16) (s32) (func_80086B30(phi_f12, phi_f14) * 10430.378f), &sp44, &sp40, &sp3C);
    if (((arg0->world.pos.x * sp44) + (sp40 * arg0->world.pos.z) + sp3C) > 0.0f) {
        sp50 = 1;
    }
    return sp50;
}

f32 func_80B50E14(u8 *arg0, s32 arg1, Vec3f *arg2, ? *arg3) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    s16 *temp_v1;

    if (arg0 != 0) {
        temp_v1 = (arg1 * 6) + Lib_SegmentedToVirtual(arg0->unk4);
        sp20 = (f32) temp_v1->unk0;
        sp24 = (f32) temp_v1->unk2;
        sp28 = (f32) temp_v1->unk4;
    }
    arg3->unk2 = Math_Vec3f_Yaw(arg2, (Vec3f *) &sp20);
    arg3->unk0 = Math_Vec3f_Pitch(arg2, (Vec3f *) &sp20);
    return sp24 - arg2->y;
}

? func_80B50ED4(s16 arg0, s16 arg1, void *arg2, s16 *arg3, s32 arg4, s32 arg5) {
    ? sp7C;
    ? sp70;
    s16 sp6C;
    s16 sp6A;
    s16 sp68;
    ? sp28;

    sp70.unk0 = (f32) D_801D15B0.x;
    sp70.unk4 = (f32) D_801D15B0.y;
    sp70.unk8 = (f32) D_801D15B0.z;
    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp70, (Vec3f *) &sp7C);
    SysMatrix_CopyCurrentState((MtxF *) &sp28);
    func_8018219C((MtxF *) &sp28, (Vec3s *) &sp68, 0);
    arg2->unk0 = (s32) sp7C.unk0;
    arg2->unk4 = (s32) sp7C.unk4;
    arg2->unk8 = (s32) sp7C.unk8;
    if ((arg4 == 0) && (arg5 == 0)) {
        arg3->unk0 = sp68;
        arg3->unk2 = sp6A;
        arg3->unk4 = sp6C;
        return 1;
    }
    if (arg5 != 0) {
        sp6C = arg0;
        sp6A = arg1;
    }
    Math_SmoothStepToS(arg3, sp68, 3, 0x2AA8, (s16) 0xB6);
    Math_SmoothStepToS(arg3 + 2, sp6A, 3, 0x2AA8, (s16) 0xB6);
    Math_SmoothStepToS(arg3 + 4, sp6C, 3, 0x2AA8, (s16) 0xB6);
    return 1;
}

? func_80B5100C(Actor *arg0, GlobalContext *arg1) {
    void *sp4C;
    f32 sp44;
    ? sp40;
    f32 sp38;
    ? sp34;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 phi_v0;
    s16 phi_v0_2;
    s16 phi_v0_3;
    s16 phi_v0_4;

    sp4C = arg1->actorCtx.actorList[2].first;
    Math_SmoothStepToS(arg0 + 0x320, (s16) ((arg0->yawTowardsPlayer - arg0->unk324) - arg0->shape.rot.y), 4, 0x2AA8, (s16) 1);
    temp_v1 = arg0->unk320;
    if ((s32) temp_v1 < -0x1FFE) {
        arg0->unk320 = -0x1FFE;
    } else {
        phi_v0 = temp_v1;
        if ((s32) temp_v1 >= 0x1FFF) {
            phi_v0 = 0x1FFE;
        }
        arg0->unk320 = phi_v0;
    }
    Math_SmoothStepToS(arg0 + 0x324, (s16) ((arg0->yawTowardsPlayer - arg0->unk320) - arg0->shape.rot.y), 4, 0x2AA8, (s16) 1);
    temp_v1_2 = arg0->unk324;
    if ((s32) temp_v1_2 < -0x1C70) {
        arg0->unk324 = -0x1C70;
    } else {
        phi_v0_2 = temp_v1_2;
        if ((s32) temp_v1_2 >= 0x1C71) {
            phi_v0_2 = 0x1C70;
        }
        arg0->unk324 = phi_v0_2;
    }
    sp40.unk0 = (s32) sp4C->world.pos.x;
    sp40.unk4 = (s32) sp4C->world.pos.y;
    sp40.unk8 = (s32) sp4C->world.pos.z;
    sp44 = sp4C->unkC44 + 3.0f;
    sp34.unk0 = (s32) arg0->world.pos.x;
    sp34.unk4 = (s32) arg0->world.pos.y;
    sp34.unk8 = (s32) arg0->world.pos.z;
    sp38 += 70.0f;
    Math_SmoothStepToS(arg0 + 0x31E, (s16) (Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40) - arg0->unk322), 4, 0x2AA8, (s16) 1);
    temp_v1_3 = arg0->unk31E;
    if ((s32) temp_v1_3 < -0x1C70) {
        arg0->unk31E = -0x1C70;
    } else {
        phi_v0_3 = temp_v1_3;
        if ((s32) temp_v1_3 >= 0x1C71) {
            phi_v0_3 = 0x1C70;
        }
        arg0->unk31E = phi_v0_3;
    }
    Math_SmoothStepToS(arg0 + 0x322, (s16) (Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40) - arg0->unk31E), 4, 0x2AA8, (s16) 1);
    temp_v1_4 = arg0->unk322;
    if ((s32) temp_v1_4 < -0x1C70) {
        arg0->unk322 = -0x1C70;
    } else {
        phi_v0_4 = temp_v1_4;
        if ((s32) temp_v1_4 >= 0x1C71) {
            phi_v0_4 = 0x1C70;
        }
        arg0->unk322 = phi_v0_4;
    }
    return 1;
}

? func_80B5123C(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk34E;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk34E = (s16) (temp_v0 - 1);
        phi_v1 = arg0->unk34E;
    }
    if (phi_v1 != 0) {
        arg0->unk31E = 0;
        arg0->unk320 = 0;
        arg0->unk1E4 = (u16) (arg0->unk1E4 & 0xFFF7);
        arg0->unk322 = 0;
        arg0->unk324 = 0;
        return 1;
    }
    if (Actor_IsActorFacingLinkAndWithinRange(arg0, 300.0f, 0x7FF8) != 0) {
        arg0->unk1E4 = (u16) (arg0->unk1E4 | 8);
        func_80B5100C(arg0, arg1);
    } else {
        if ((arg0->unk1E4 & 8) != 0) {
            arg0->unk34E = 0x14;
        }
        arg0->unk1E4 = (u16) (arg0->unk1E4 & 0xFFF7);
        arg0->unk31E = 0;
        arg0->unk320 = 0;
        arg0->unk322 = 0;
        arg0->unk324 = 0;
    }
    return 1;
}

void func_80B51308(Actor *arg0, GlobalContext *arg1) {
    s16 sp1E;
    u8 temp_t8;

    sp1E = (s16) (s32) arg0->unk1A8;
    temp_t8 = arg0->unk31A;
    arg0 = arg0;
    if ((arg0->unk2E4 == 7) && (sp1E == SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80B53268[temp_t8].animation))) {
        arg0->unk2E4 = 8;
        func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B53268, 8);
    }
}

void func_80B51398(Actor *arg0, GlobalContext *arg1) {
    s16 sp1E;
    s32 temp_f6;

    temp_f6 = (s32) arg0->unk1A8;
    arg0 = arg0;
    sp1E = (s16) temp_f6;
    if ((arg0->unk2E4 == 9) && (sp1E == SkelAnime_GetFrameCount(*D_80B53340))) {
        arg0->unk2E4 = 0xA;
        func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B53268, 0xA);
    }
}

void func_80B51410(Actor *arg0, GlobalContext *arg1) {
    if (arg0->xzDistToPlayer < 100.0f) {
        if ((arg1->actorCtx.actorList[2].first->unk14B == 1) && (arg1->msgCtx.unk1202A == 3) && (arg1->msgCtx.unk1202E == 0xE)) {
            arg0->unk1E4 = (u16) (arg0->unk1E4 | 0x20);
        }
        if (ActorCutscene_GetCanPlayNext(arg0->unk318) != 0) {
            Audio_PlayActorSound2(arg0, 0x3A17U);
            ActorCutscene_Start(arg0->unk318, arg0);
            arg0->unk1E4 = (u16) (arg0->unk1E4 & 0xFFDF);
            return;
        }
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        if ((arg0->unk1E4 & 0x20) != 0) {
            ActorCutscene_SetIntentToPlay(arg0->unk318);
            return;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return;
    }
    arg0->unk1E4 = (u16) (arg0->unk1E4 & 0xFFDF);
}

void func_80B51510(Actor *arg0, GlobalContext *arg1) {
    u32 sp20;
    s32 temp_t7;
    u16 temp_a0;
    u16 temp_t1;
    u32 temp_v0;
    void *temp_v1;

    if (func_800EE29C(arg1, 0x1DFU) != 0) {
        temp_v0 = func_800EE200(arg1, 0x1DFU);
        temp_t7 = temp_v0 * 4;
        sp20 = temp_v0;
        temp_v1 = arg1 + temp_t7;
        temp_a0 = *temp_v1->unk1F4C;
        if (arg0->unk31B != temp_a0) {
            arg0->unk31B = (u8) temp_a0;
            temp_t1 = *temp_v1->unk1F4C;
            switch (temp_t1) {
            case 1:
                arg0->unk31A = 0U;
                arg0->unk2E4 = 0;
                break;
            case 2:
                arg0->unk31A = 2U;
                arg0->unk2E4 = 2;
                break;
            case 3:
                arg0->unk31A = 7U;
                arg0->unk2E4 = 7;
                break;
            case 4:
                arg0->unk31A = 3U;
                arg0->unk2E4 = 3;
                break;
            case 5:
                arg0->unk31A = 1U;
                arg0->unk2E4 = 1;
                arg0->unk1E4 = (u16) (arg0->unk1E4 | 0x80);
                arg0->unk1D4 = func_80B5227C;
                break;
            case 6:
                arg0->unk31A = 0xCU;
                arg0->unk2E4 = 0xC;
                break;
            case 7:
                Actor_SetSwitchFlag(arg1, (s32) (arg0->params & 0x3F00) >> 8);
                break;
            }
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B53268, (s32) arg0->unk31A);
        }
        if (arg0->unk31A == 7) {
            func_80B51308(arg0, arg1);
        }
        func_800EDF24(arg0, arg1, sp20);
        arg0->shape.yOffset = 0.0f;
        return;
    }
    arg0->unk31B = 0x63U;
}

void func_80B51698(void *arg0, ? arg1) {
    s16 sp26;
    s16 temp_v0;

    sp26 = (s16) (s32) arg0->unk1A8;
    if (sp26 == SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80B53268[arg0->unk2E4].animation)) {
        temp_v0 = arg0->unk2E4;
        if (temp_v0 != 0) {
            if (temp_v0 != 2) {
                return;
            }
            arg0->unk2E4 = 0;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B53268, 0);
            arg0->unk1D4 = func_80B5202C;
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return;
        }
        arg0->unk2E4 = 2;
        func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B53268, 2);
        arg0->unk1D4 = func_80B5216C;
    }
}

void func_80B51760(Actor *arg0, GlobalContext *arg1) {
    s16 sp2E;
    s16 temp_v0;
    s32 temp_f6;
    u16 temp_v0_2;

    temp_v0 = arg0->unk2E4;
    temp_f6 = (s32) arg0->unk1A8;
    if (temp_v0 == 0xB) {
        sp2E = (s16) temp_f6;
        if ((s16) temp_f6 == SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80B53268[temp_v0].animation)) {
            arg0->unk2E4 = 5;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B53268, (s32) arg0->unk2E4);
            return;
        }
        /* Duplicate return node #17. Try simplifying control flow for better match */
        return;
    }
    if (temp_v0 == 0xA) {
        sp2E = (s16) temp_f6;
        if ((s16) temp_f6 == SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80B53268[temp_v0].animation)) {
            arg0->unk2E4 = 0xB;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B53268, (s32) arg0->unk2E4);
            return;
        }
        /* Duplicate return node #17. Try simplifying control flow for better match */
        return;
    }
    if (Flags_GetSwitch(arg1, (s32) (arg0->params & 0x3F00) >> 8) != 0) {
        gSaveContext.weekEventReg[40] |= 0x40;
        arg0->unk1D4 = func_80B51D9C;
        return;
    }
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk1E4 = (u16) (arg0->unk1E4 | 4);
        temp_v0_2 = func_80B50410(arg0, arg1);
        arg0->unk31C = temp_v0_2;
        func_801518B0(arg1, temp_v0_2 & 0xFFFF, arg0);
        arg0->unk1D4 = func_80B51970;
        if (arg0->unk31C == 0xE81) {
            arg0->unk2E4 = 0;
            arg0->unk1E4 = (u16) (arg0->unk1E4 | 2);
        }
    } else if (((arg0->xzDistToPlayer < 100.0f) || (arg0->isTargeted != 0)) && (gSaveContext.entranceIndex != 0xD010)) {
        func_800B863C(arg0, arg1);
    }
    if ((arg0->unk1E4 & 4) != 0) {
        Math_SmoothStepToS(&arg0->shape.rot.y, arg0->yawTowardsPlayer, 5, 0x1000, (s16) 0x100);
        arg0->world.rot.y = arg0->shape.rot.y;
    }
}

void func_80B51970(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0_6;
    u16 temp_t0;
    u16 temp_t8;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u8 temp_v0;

    temp_v0 = func_80152498(arg1 + 0x4908);
    if (((temp_v0 == 6) || (temp_v0 == 5)) && (func_80147624(arg1) != 0)) {
        temp_v0_2 = arg0->unk31C;
        if ((temp_v0_2 == 0xE84) || (temp_v0_2 == 0xE99)) {
            ActorCutscene_Stop(arg0->unk318);
            arg0->unk318 = ActorCutscene_GetAdditionalCutscene(arg0->unk318);
            ActorCutscene_SetIntentToPlay(arg0->unk318);
            arg0->unk1D4 = func_80B51D9C;
            return;
        }
        temp_v0_3 = arg0->unk1E4;
        temp_t8 = temp_v0_3 & 0xFFFE;
        if ((temp_v0_3 & 1) != 0) {
            temp_t0 = temp_t8 & 0xFFFF & ~4;
            arg0->unk1E4 = temp_t8;
            arg0->unk1E4 = temp_t0;
            if (arg0->unk2E4 == 0xA) {
                arg0->unk1E4 = (u16) (temp_t0 & 0xFFFD);
            }
            arg0->unk1D4 = func_80B51760;
            return;
        }
        temp_v0_4 = func_80B50410(arg0, arg1);
        arg0->unk31C = temp_v0_4;
        func_801518B0(arg1, temp_v0_4 & 0xFFFF, arg0);
        temp_v0_5 = arg0->unk31C;
        if (temp_v0_5 == 0xE80) {
            arg0->unk1E4 = (u16) (arg0->unk1E4 | 2);
        } else if (temp_v0_5 == 0xE89) {
            arg0->unk1D4 = func_80B51B40;
        }
        goto block_14;
    }
block_14:
    if ((arg0->unk1E4 & 2) != 0) {
        func_801A4748(&arg0->projectedPos, 0x30EA);
        temp_v0_6 = arg0->unk2E4;
        if (temp_v0_6 != 0xA) {
            if (temp_v0_6 != 9) {
                arg0->unk2E4 = 9;
                func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B53268, (s32) 9);
            } else {
                func_80B51398(arg0, arg1);
            }
        }
    }
    Math_SmoothStepToS(&arg0->shape.rot.y, arg0->yawTowardsPlayer, 5, 0x1000, (s16) 0x100);
    arg0->world.rot.y = arg0->shape.rot.y;
    if (arg0->unk2E4 == 6) {
        func_80B50954(arg0);
    }
}

void func_80B51B40(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0_5;
    u16 temp_t7;
    u16 temp_t9;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u8 temp_v0;
    u8 temp_v0_4;

    temp_v0 = func_80152498(arg1 + 0x4908);
    if (temp_v0 == 6) {
        if (func_80147624(arg1) != 0) {
            temp_v0_2 = arg0->unk1E4;
            temp_t7 = temp_v0_2 & 0xFFFE;
            if ((temp_v0_2 & 1) != 0) {
                temp_t9 = temp_t7 & 0xFFFF & ~4;
                arg0->unk1E4 = temp_t7;
                arg0->unk1E4 = temp_t9;
                if (arg0->unk2E4 == 0xA) {
                    arg0->unk1E4 = (u16) (temp_t9 & 0xFFFD);
                }
                if (arg0->unk31C == 0xE8F) {
                    arg1->nextEntranceIndex = 0xD010;
                    arg1->sceneLoadFlag = 0x14;
                    arg1->unk_1887F = 3;
                    gSaveContext.nextTransition = 3;
                    Parameter_AddMagic(arg1, (s16) (gSaveContext.unk_3F30 + (gSaveContext.doubleMagic * 0x30) + 0x30), 3U);
                    return;
                }
                arg0->unk1D4 = func_80B51760;
                return;
            }
            temp_v0_3 = func_80B50710(arg0);
            arg0->unk31C = temp_v0_3;
            func_801518B0(arg1, temp_v0_3 & 0xFFFF, arg0);
            if (arg0->unk31C == 0xE8C) {
                arg0->unk1E4 = (u16) (arg0->unk1E4 | 2);
            }
            goto block_17;
        }
        goto block_17;
    }
    if ((temp_v0 == 4) && (func_80147624(arg1) != 0)) {
        temp_v0_4 = arg1->msgCtx.choiceIndex;
        if (temp_v0_4 != 0) {
            if (temp_v0_4 != 1) {

            } else {
                func_8019F230();
                arg0->unk31C = 0xE8AU;
                func_801518B0(arg1, 0xE8AU & 0xFFFF, arg0);
            }
        } else {
            func_8019F208();
            arg0->unk31C = 0xE8EU;
            func_801518B0(arg1, 0xE8EU & 0xFFFF, arg0);
        }
    }
block_17:
    if ((arg0->unk1E4 & 2) != 0) {
        func_801A4748(&arg0->projectedPos, 0x30EA);
        temp_v0_5 = arg0->unk2E4;
        if (temp_v0_5 != 0xA) {
            if (temp_v0_5 != 9) {
                arg0->unk2E4 = 9;
                func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B53268, (s32) 9);
            } else {
                func_80B51398(arg0, arg1);
            }
        }
    }
    Math_SmoothStepToS(&arg0->shape.rot.y, arg0->yawTowardsPlayer, 5, 0x1000, (s16) 0x100);
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_80B51D9C(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    u16 temp_v1;

    sp24 = arg1->actorCtx.actorList[2].first;
    if (ActorCutscene_GetCanPlayNext(arg0->unk318) != 0) {
        ActorCutscene_StartAndSetFlag(arg0->unk318, arg0);
        temp_v1 = arg0->unk1E4;
        if ((temp_v1 & 4) != 0) {
            arg0->unk1E4 = (u16) (temp_v1 & 0xFFFB);
            arg0->unk2E4 = 6;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B53268, 6);
            arg0->unk1D4 = func_80B51EA4;
        } else {
            arg0->unk1E4 = (u16) (temp_v1 | 4);
            if (sp24->unk14B == 1) {
                arg0->unk31C = 0xE84U;
            } else {
                arg0->unk31C = 0xE99U;
            }
            func_801518B0(arg1, arg0->unk31C, arg0);
            arg0->unk1D4 = func_80B51970;
        }
    } else {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        ActorCutscene_SetIntentToPlay(arg0->unk318);
    }
    func_80B50954(arg0);
}

void func_80B51EA4(Actor *arg0, GlobalContext *arg1) {
    s16 sp3A;
    ? sp38;
    s16 sp36;
    u8 *sp2C;
    s32 temp_v0;
    u8 *temp_t6;
    s32 phi_v0;

    temp_t6 = arg0->unk1E8;
    sp2C = temp_t6;
    if (temp_t6 != 0) {
        func_80B50E14(temp_t6, arg0->unk1EC, arg0 + 0x24, &sp38);
        Math_SmoothStepToS(arg0 + 0x32, sp3A, 5, 0x1000, (s16) 0x100);
        arg0->shape.rot.y = arg0->world.rot.y;
        sp36 = arg0->shape.rot.y - sp3A;
        if (func_80B50C78(arg0, arg0->unk1E8, arg0->unk1EC) != 0) {
            temp_v0 = arg0->unk1EC;
            if (temp_v0 >= (*arg0->unk1E8 - 1)) {
                ActorCutscene_Stop(arg0->unk318);
                Actor_MarkForDeath(arg0);
            } else {
                arg0->unk1EC = (s32) (temp_v0 + 1);
            }
        }
        if ((arg0->bgCheckFlags & 8) != 0) {
            sp3A = arg0->wallYaw;
        }
        phi_v0 = (s32) sp36;
        if ((s32) sp36 < 0) {
            phi_v0 = -(s32) sp36;
        }
        if (phi_v0 < 0x2AAA) {
            Math_ApproachF(&arg0->speedXZ, 3.0f, 0.2f, 0.5f);
        }
        Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    }
    func_80B50954(arg0);
}

void func_80B51FD0(EnGk *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    if ((gSaveContext.weekEventReg[22] & 4) == 0) {
        temp_v0 = arg0->unk1E4;
        if ((temp_v0 & 2) != 0) {
            func_801A4748(arg0 + 0xEC, 0x30EA, arg0);
            return;
        }
        arg0->unk1E4 = temp_v0 | 2;
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80B5202C(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    u16 temp_v0;
    u16 temp_v0_2;

    sp24 = arg1->actorCtx.actorList[2].first;
    if (arg1->csCtx.state == 0) {
        func_80B51410(arg0, arg1);
    }
    if (func_80B50854(arg0, arg1) == 0) {
        if (func_800B84D0(arg0, arg1) != 0) {
            gSaveContext.weekEventReg[24] |= 0x80;
            arg0->unk1D4 = func_80B51698;
        } else if ((arg0->xzDistToPlayer < 100.0f) || (arg0->isTargeted != 0)) {
            func_800B863C(arg0, arg1);
            if (sp24->unk14B == 1) {
                arg0->textId = 0xE74;
            } else {
                arg0->textId = 0xE76;
            }
        }
        temp_v0 = arg0->unk1E4;
        if ((temp_v0 & 2) != 0) {
            temp_v0_2 = arg1->msgCtx.unk1202A;
            if ((temp_v0_2 != 1) && (temp_v0_2 != 3) && (arg1->csCtx.state == 0)) {
                func_801A4748(&arg0->projectedPos, 0x30EA);
                return;
            }
            /* Duplicate return node #16. Try simplifying control flow for better match */
            return;
        }
        arg0->unk1E4 = (u16) (temp_v0 | 2);
        /* Duplicate return node #16. Try simplifying control flow for better match */
    }
}

void func_80B5216C(Actor *arg0, GlobalContext *arg1) {
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        arg1->msgCtx.unk11F22 = 0x43;
        arg1->msgCtx.unk12023 = 4;
        arg0->unk1D4 = func_80B51698;
    }
}

void func_80B521E8(void *arg0, ? arg1) {
    s16 sp1E;
    SkelAnime *temp_a0;
    s16 temp_t8;

    sp1E = (s16) (s32) arg0->unk1A8;
    temp_t8 = arg0->unk2E4;
    arg0 = arg0;
    temp_a0 = arg0 + 0x190;
    if (sp1E == SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80B53268[temp_t8].animation)) {
        arg0->unk2E4 = 1;
        arg0 = arg0;
        func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80B53268, 1);
        arg0->unk1D4 = func_80B5227C;
    }
}

void func_80B5227C(Actor *arg0, GlobalContext *arg1) {
    s16 sp26;

    sp26 = (s16) (s32) arg0->unk1A8;
    if ((sp26 + 1) == SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80B53268[arg0->unk2E4].animation)) {
        func_800B14D4(arg1, 20.0f, arg0 + 8);
        arg0->unk350 = 0x3C;
        if ((arg0->unk1E4 & 0x80) == 0) {
            gSaveContext.weekEventReg[22] |= 4;
        }
        Audio_PlayActorSound2(arg0, 0x38B1U);
        arg0->unk350 = 0x4000;
        arg0->unk1D4 = func_80B52654;
    }
}

void func_80B52340(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a1;

    temp_a1 = arg1;
    arg1 = arg1;
    if (func_800B84D0(arg0, temp_a1) != 0) {
        arg0->unk1E4 = (u16) (arg0->unk1E4 | 4);
        if ((gSaveContext.eventInf[1] & 2) != 0) {
            arg0->unk31C = 0xE90U;
            arg0->unk1D4 = func_80B52430;
        } else {
            arg0->unk31C = 0xE93U;
            arg0->unk1D4 = func_80B52430;
        }
        func_801518B0(arg1, arg0->unk31C, arg0);
        arg0->flags &= 0xFFFEFFFF;
    } else {
        arg0->flags |= 0x10000;
        func_800B8614(arg0, arg1, 100.0f);
    }
    Math_SmoothStepToS(&arg0->shape.rot.y, arg0->yawTowardsPlayer, 5, 0x1000, (s16) 0x100);
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_80B52430(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    if ((func_80152498(arg1 + 0x4908) == 6) && (func_80147624(arg1) != 0)) {
        temp_v0 = arg0->unk31C;
        if (temp_v0 != 0xE90) {
            if (temp_v0 != 0xE91) {
                if (temp_v0 != 0xE92) {
                    if (temp_v0 == 0xE93) {
                        arg0->unk31C = 0xE89U;
                        func_801518B0(arg1, 0xE89U & 0xFFFF, arg0);
                        arg0->unk1D4 = func_80B51B40;
                        return;
                    }
                    goto block_10;
                }
                arg0->unk1D4 = func_80B51760;
                arg0->unk1E4 = (u16) (arg0->unk1E4 & 0xFFFB);
                return;
            }
            arg0->unk1D4 = func_80B5253C;
            return;
        }
        arg0->unk31C = 0xE91U;
        func_801518B0(arg1, 0xE91U & 0xFFFF, arg0);
        return;
    }
block_10:
    Math_SmoothStepToS(&arg0->shape.rot.y, arg0->yawTowardsPlayer, 5, 0x1000, (s16) 0x100);
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_80B5253C(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    s32 phi_a2;

    phi_a2 = 0x6A;
    if ((gSaveContext.weekEventReg[41] & 8) != 0) {
        phi_a2 = 0x93;
    }
    sp24 = phi_a2;
    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->parent = NULL;
        if (phi_a2 == 0x6A) {
            gSaveContext.weekEventReg[41] |= 8;
        }
        arg0->unk1D4 = func_80B525E0;
        return;
    }
    func_800B8A1C(arg0, arg1, phi_a2, 300.0f, 300.0f);
}

void func_80B525E0(Actor *arg0, GlobalContext *arg1) {
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk31C = 0xE92;
        func_801518B0(arg1, 0xE92 & 0xFFFF, arg0);
        arg0->unk1D4 = func_80B52430;
        return;
    }
    func_800B85E0(arg0, arg1, 400.0f, -1);
}

void func_80B52654(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_a0;

    arg0->unk350 = (s16) (arg0->unk350 + 0x400);
    if (((arg0->unk1E4 & 0x80) != 0) && (arg1->csCtx.frames == 0xFA)) {
        gSaveContext.weekEventReg[22] |= 4;
    }
    temp_a0 = arg0->unk350;
    arg0 = arg0;
    temp_f2 = Math_SinS(temp_a0) * 0.006f * 0.06f;
    temp_f12 = 0.006f - temp_f2;
    arg0->unk354 = temp_f2;
    arg0->scale.y = temp_f12;
    arg0->scale.z = temp_f12;
    arg0->scale.x = temp_f2 + 0.006f;
    if (arg0->unk350 == 0) {
        Audio_PlayActorSound2(arg0, 0x3A19U);
    }
}

void EnGk_Init(EnGk *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1_2;
    SkelAnime *temp_a1;
    s16 temp_v0_2;
    s32 temp_v0;
    u32 temp_t2;
    u32 temp_t9;
    u32 temp_v0_3;
    EnGk *this = (EnGk *) thisx;

    temp_a1 = &this->unk190;
    sp34 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_060079C0, &D_0600787C, &this->unk1F0, &this->unk268, 0x14);
    temp_a1_2 = &this->unk144;
    sp30 = temp_a1_2;
    Collider_InitCylinder(globalCtx, temp_a1_2);
    Collider_SetCylinder(globalCtx, temp_a1_2, (Actor *) this, &D_80B53210);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80B53248, &D_80B5323C);
    this->unk2E2 = 0x14;
    this->unk2E0 = 0;
    this->unk1E4 = 0;
    this->unk354 = 0.006f;
    Actor_SetScale((Actor *) this, 0.006f);
    temp_v0 = this->actor.params & 0xF;
    this->actor.gravity = -1.0f;
    if (temp_v0 == 1) {
        this->unk2E4 = 5;
        func_800BDC5C(sp34, (ActorAnimationEntry []) D_80B53268, 5);
        temp_v0_2 = globalCtx->sceneNum;
        if (temp_v0_2 == 0x5E) {
            if (Flags_GetSwitch(globalCtx, (s32) (this->actor.params & 0x3F00) >> 8) != 0) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            this->unk318 = (s16) this->actor.cutscene;
            this->unk1E8 = func_8013D648(globalCtx, (s16) ((s32) (this->actor.params & 0xF0) >> 4), 0xF);
            this->actionFunc = (void (*)(EnGk *, GlobalContext *)) func_80B51760;
            return;
        }
        if (temp_v0_2 == 0x6B) {
            if ((gSaveContext.weekEventReg[33] & 0x80) != 0) {
                temp_v0_3 = gSaveContext.entranceIndex;
                if (temp_v0_3 == 0xD010) {
                    this->actionFunc = (void (*)(EnGk *, GlobalContext *)) func_80B51760;
                    return;
                }
                if (temp_v0_3 == 0xD020) {
                    this->actionFunc = (void (*)(EnGk *, GlobalContext *)) func_80B52340;
                    return;
                }
                this->actionFunc = (void (*)(EnGk *, GlobalContext *)) func_80B51760;
                return;
            }
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (temp_v0 == 2) {
        if ((gSaveContext.weekEventReg[22] & 4) == 0) {
            this->actionFunc = func_80B51FD0;
            this->actor.draw = NULL;
            temp_t2 = this->actor.flags | 0x10;
            this->actor.flags = temp_t2;
            this->actor.flags = temp_t2 & ~1;
            return;
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((gSaveContext.weekEventReg[22] & 4) == 0) {
        this->unk2E4 = 0;
        temp_t9 = this->actor.flags | 0x10;
        this->actor.flags = temp_t9;
        this->actor.flags = temp_t9 | 0x2000000;
        this->unk318 = (s16) this->actor.cutscene;
        func_800BDC5C(sp34, (ActorAnimationEntry []) D_80B53268, 0);
        this->actionFunc = (void (*)(EnGk *, GlobalContext *)) func_80B5202C;
        return;
    }
    this->actionFunc = (void (*)(EnGk *, GlobalContext *)) func_80B52654;
}

void EnGk_Destroy(EnGk *this, GlobalContext *globalCtx) {
    EnGk *this = (EnGk *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk144);
}

void EnGk_Update(EnGk *this, GlobalContext *globalCtx) {
    s32 temp_v0;
    s32 phi_v0;
    EnGk *this = (EnGk *) thisx;

    this->actionFunc(this, globalCtx);
    temp_v0 = this->actor.params & 0xF;
    phi_v0 = temp_v0;
    if ((temp_v0 == 1) || ((temp_v0 == 0) && ((gSaveContext.weekEventReg[22] & 4) == 0))) {
        func_80B507A0((Actor *) this, globalCtx);
        SkelAnime_FrameUpdateMatrix(&this->unk190);
        func_800E9250(globalCtx, (Actor *) this, &this->unk1D8, &this->unk1DE, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
        if ((this->actor.params & 0xF) == 1) {
            func_80B5123C((Actor *) this, globalCtx);
        }
        func_80B50B38(this, globalCtx);
        phi_v0 = this->actor.params & 0xF;
    }
    if (phi_v0 == 0) {
        func_80B51510((Actor *) this, globalCtx);
    }
}

s32 func_80B52AD4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    return 0;
}

void func_80B52AF0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp58;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 *temp_a2;
    s16 temp_v0;
    f32 phi_f6;
    f32 phi_f0;

    temp_a2 = &sp40;
    sp58.unk0 = (s32) D_80B533A8.unk0;
    sp58.unk4 = (s32) D_80B533A8.unk4;
    sp58.unk8 = (s32) D_80B533A8.unk8;
    sp4C.unk0 = D_80B533B4.unk0;
    sp4C.unk4 = (s32) D_80B533B4.unk4;
    sp4C.unk8 = (s32) D_80B533B4.unk8;
    temp_a2->unk0 = D_80B533C0.unk0;
    temp_a2->unk4 = (s32) D_80B533C0.unk4;
    temp_a2->unk8 = (s32) D_80B533C0.unk8;
    sp34.unk0 = D_80B533CC.unk0;
    sp34.unk4 = (s32) D_80B533CC.unk4;
    sp34.unk8 = (s32) D_80B533CC.unk8;
    sp28.unk0 = D_80B533D8.unk0;
    sp28.unk4 = (s32) D_80B533D8.unk4;
    sp28.unk8 = (s32) D_80B533D8.unk8;
    sp34 = 0x44898000;
    sp28 = 0x44898000;
    sp3C = 500.0f;
    sp30 = -500.0f;
    temp_v0 = arg4->unk2E4;
    if (temp_v0 == 0) {
        sp38 = -100.0f;
        sp2C = -100.0f;
        sp40 = 2.0f;
        sp44 = 5.8f;
        sp48 = 0.0f;
        sp4C.unk0 = temp_a2->unk0;
        sp4C.unk4 = (s32) temp_a2->unk4;
        sp4C.unk8 = (s32) temp_a2->unk8;
        phi_f6 = sp4C * -1.0f;
        goto block_7;
    }
    if ((temp_v0 == 2) || (temp_v0 == 9) || (temp_v0 == 0xA) || (temp_v0 == 0xB)) {
        sp38 = 400.0f;
        sp2C = 400.0f;
        sp40 = 1.0f;
        sp44 = 0.8f;
        sp48 = 0.0f;
        sp4C.unk0 = temp_a2->unk0;
        sp4C.unk4 = (s32) temp_a2->unk4;
        sp4C.unk8 = (s32) temp_a2->unk8;
        phi_f6 = sp4C * -1.0f;
block_7:
        sp4C = phi_f6;
    }
    if (arg1 == 0x11) {
        if ((arg4->params & 0xF) == 1) {
            phi_f0 = 100.0f;
        } else {
            phi_f0 = 50.0f;
        }
        arg4->focus.pos.x = arg4->world.pos.x;
        arg4->focus.pos.z = arg4->world.pos.z;
        arg4->focus.pos.y = arg4->world.pos.y + phi_f0;
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp58, arg4 + 0x3C);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp34, arg4 + 0x2E8);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp28, arg4 + 0x2F4);
        SysMatrix_StatePush();
        Matrix_RotateY(arg4->shape.rot.y, 0U);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp4C, arg4 + 0x30C);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp40, arg4 + 0x300);
        SysMatrix_StatePop();
    }
}

void func_80B52D8C(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_v0_2;
    s32 phi_v1_2;

    if (arg1 != 9) {
        if (arg1 == 0x12) {
            phi_v1 = 0;
            if ((arg2->unk1E4 & 8) != 0) {
                phi_v1 = 1;
            }
            phi_v0 = 0;
            if (arg2->unk34E != 0) {
                phi_v0 = 1;
            }
            func_80B50ED4((s16) (arg2->unk31E + arg2->unk322 + 0x4000), (s16) (arg2->unk320 + arg2->unk324 + arg2->shape.rot.y + 0x4000), arg2 + 0x328, arg2 + 0x334, phi_v0, phi_v1);
            SysMatrix_StatePop();
            SysMatrix_InsertTranslation(arg2->unk328, arg2->unk32C, arg2->unk330, 0);
            Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
            Matrix_RotateY(arg2->unk336, 1U);
            SysMatrix_InsertXRotation_s(arg2->unk334, 1);
            SysMatrix_InsertZRotation_s(arg2->unk338, 1);
            SysMatrix_StatePush();
            return;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return;
    }
    phi_v1_2 = 0;
    if ((arg2->unk1E4 & 8) != 0) {
        phi_v1_2 = 1;
    }
    phi_v0_2 = 0;
    if (arg2->unk34E != 0) {
        phi_v0_2 = 1;
    }
    func_80B50ED4((s16) (arg2->unk322 + 0x4000), (s16) (arg2->unk324 + arg2->shape.rot.y + 0x4000), arg2 + 0x33C, arg2 + 0x348, phi_v0_2, phi_v1_2);
    SysMatrix_StatePop();
    SysMatrix_InsertTranslation(arg2->unk33C, arg2->unk340, arg2->unk344, 0);
    Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
    Matrix_RotateY(arg2->unk34A, 1U);
    SysMatrix_InsertXRotation_s(arg2->unk348, 1);
    SysMatrix_InsertZRotation_s(arg2->unk34C, 1);
    SysMatrix_StatePush();
}

void EnGk_Draw(EnGk *this, GlobalContext *globalCtx) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    GraphicsContext *sp4C;
    Gfx *sp44;
    Gfx *sp38;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    f32 *temp_a0_2;
    f32 *temp_a1;
    s16 temp_v0_5;
    Vec3f *phi_a0;
    EnGk *this = (EnGk *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp4C = temp_a0;
    func_8012C28C(temp_a0);
    if (((this->actor.params & 0xF) == 0) && ((gSaveContext.weekEventReg[22] & 4) != 0)) {
        sp4C = sp4C;
        SysMatrix_InsertXRotation_s(-0x4000, 1);
        temp_v0 = sp4C->polyOpa.p;
        sp4C->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp4C = sp4C;
        sp44 = temp_v0;
        sp44->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_2 = sp4C->polyOpa.p;
        sp4C->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = (u32) &D_06006688;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_3 = sp4C->polyOpa.p;
        sp4C->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = (u32) &D_06006680;
        temp_v0_3->words.w0 = 0xDE000000;
        func_8012C2DC(globalCtx->state.gfxCtx);
        sp5C.unk0 = this->actor.world.pos.x;
        temp_a1 = &sp50;
        sp5C.unk4 = (f32) this->actor.world.pos.y;
        sp5C.unk8 = (f32) this->actor.world.pos.z;
        sp50 = 0.2f;
        sp54 = 0.2f;
        sp58 = 0.2f;
        func_800BC620((Vec3f *) &sp5C, (Vec3f *) temp_a1, 0xFF, globalCtx);
        return;
    }
    temp_v0_4 = sp4C->polyOpa.p;
    sp4C->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDB060020;
    sp38 = temp_v0_4;
    sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_80B533E4 + (this->unk2E0 * 4)));
    func_801343C0(globalCtx, this->unk190.skeleton, this->unk190.limbDrawTbl, (s32) this->unk190.dListCount, func_80B52AD4, func_80B52AF0, func_80B52D8C, (Actor *) this);
    if ((this->actor.params & 0xF) != 2) {
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v0_5 = this->unk2E4;
        if ((temp_v0_5 == 0) || (temp_v0_5 == 1) || (temp_v0_5 == 2) || (temp_v0_5 == 3) || (phi_a0 = (Vec3f *) &sp5C, (temp_v0_5 == 4))) {
            temp_a0_2 = &sp5C;
            sp5C = this->actor.world.pos.x - 15.0f;
            sp60 = this->actor.world.pos.y;
            sp50 = 0.2f;
            sp54 = 0.2f;
            sp58 = 0.2f;
            sp64 = this->actor.world.pos.z;
            phi_a0 = (Vec3f *) temp_a0_2;
        } else {
            sp5C.unk0 = this->actor.world.pos.x;
            sp5C.unk4 = (f32) this->actor.world.pos.y;
            sp5C.unk8 = (f32) this->actor.world.pos.z;
            sp50 = 0.2f;
            sp54 = 0.2f;
            sp58 = 0.2f;
        }
        func_800BC620(phi_a0, (Vec3f *) &sp50, 0xFF, globalCtx);
    }
}
