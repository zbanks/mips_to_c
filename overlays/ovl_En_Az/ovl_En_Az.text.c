typedef struct EnAz {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnAz *, GlobalContext *);
    /* 0x148 */ SkelAnime unk148;                   /* inferred */
    /* 0x18C */ ColliderCylinder unk18C;            /* inferred */
    /* 0x1D8 */ Vec3s unk1D8;                       /* inferred */
    /* 0x1DE */ char pad1DE[0x8A];                  /* maybe part of unk1D8[24]? */
    /* 0x268 */ Vec3s unk268;                       /* inferred */
    /* 0x26E */ char pad26E[0x8A];                  /* maybe part of unk268[24]? */
    /* 0x2F8 */ s16 unk2F8;                         /* inferred */
    /* 0x2FA */ s16 unk2FA;                         /* inferred */
    /* 0x2FC */ s32 unk2FC;                         /* inferred */
    /* 0x300 */ EnDno_ActorUnkStruct unk300;        /* inferred */
    /* 0x36C */ char pad36C[0x8];
    /* 0x374 */ u16 unk374;                         /* inferred */
    /* 0x376 */ u16 unk376;                         /* inferred */
    /* 0x378 */ u8 unk378;                          /* inferred */
    /* 0x379 */ char pad379[0x1];
    /* 0x37A */ s16 unk37A;                         /* inferred */
    /* 0x37C */ char pad37C[0x2];
    /* 0x37E */ s16 unk37E;                         /* inferred */
    /* 0x380 */ s16 unk380;                         /* inferred */
    /* 0x382 */ char pad382[0x2];
    /* 0x384 */ s16 unk384;                         /* inferred */
    /* 0x386 */ char pad386[0x2];
    /* 0x388 */ Actor *unk388;                      /* inferred */
    /* 0x38C */ char pad38C[0x10];                  /* maybe part of unk388[5]? */
    /* 0x39C */ s16 unk39C;                         /* inferred */
    /* 0x39E */ s16 unk39E;                         /* inferred */
    /* 0x3A0 */ char pad3A0[0x14];                  /* maybe part of unk39E[11]? */
    /* 0x3B4 */ f32 unk3B4;                         /* inferred */
    /* 0x3B8 */ f32 unk3B8;                         /* inferred */
    /* 0x3BC */ f32 unk3BC;                         /* inferred */
    /* 0x3C0 */ char pad3C0[0xC];                   /* maybe part of unk3BC[4]? */
    /* 0x3CC */ s32 unk3CC;                         /* inferred */
    /* 0x3D0 */ s16 unk3D0;                         /* inferred */
    /* 0x3D2 */ u16 unk3D2;                         /* inferred */
    /* 0x3D4 */ s16 unk3D4;                         /* inferred */
    /* 0x3D6 */ s16 unk3D6;                         /* inferred */
} EnAz;                                             /* size = 0x3D8 */

typedef struct EnDno_ActorUnkStruct {
    /* 0x00 */ Vec3f unk_00;
    /* 0x0C */ char padC[0x4];
    /* 0x10 */ s16 unk_10;
    /* 0x12 */ char pad12[0xA];                     /* maybe part of unk_10[6]? */
    /* 0x1C */ u8 unk_1C;
    /* 0x1D */ u8 unk_1D;
    /* 0x1E */ char pad1E[0x2];                     /* maybe part of unk_1D[3]? */
    /* 0x20 */ Vec3f unk_20;
    /* 0x2C */ Vec3f unk_2C;
    /* 0x38 */ char pad38[0xC];
    /* 0x44 */ void *unk44;                         /* inferred */
    /* 0x48 */ Actor *unk_48;
    /* 0x4C */ f32 unk_4C;
    /* 0x50 */ f32 unk_50;
    /* 0x54 */ s16 unk_54;
    /* 0x56 */ s16 unk_56;
    /* 0x58 */ s32 unk_58;
    /* 0x5C */ s32 (*unk_5C)(GlobalContext *, EnDno_ActorUnkStruct *);
    /* 0x60 */ s32 (*unk_60)(GlobalContext *, EnDno_ActorUnkStruct *);
    /* 0x64 */ s32 (*unk_64)(GlobalContext *, EnDno_ActorUnkStruct *);
    /* 0x68 */ s32 (*unk_68)(GlobalContext *, EnDno_ActorUnkStruct *);
} EnDno_ActorUnkStruct;                             /* size = 0x6C */

struct _mips2c_stack_EnAz_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnAz_Draw {
    /* 0x00 */ char pad0[0x94];
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ char padA4[0x2C];
};                                                  /* size = 0xD0 */

struct _mips2c_stack_EnAz_Init {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad38[0x2];
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad40[0xE];                     /* maybe part of sp3C[4]? */
    /* 0x4E */ s16 sp4E;                            /* inferred */
    /* 0x50 */ char pad50[0x4];                     /* maybe part of sp4E[3]? */
    /* 0x54 */ EnAz *sp54;                          /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnAz_Update {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A94A30 {};              /* size 0x0 */

struct _mips2c_stack_func_80A94A64 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A94A90 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A94AB8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A94B20 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A94B98 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A954AC {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A95534 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A9565C {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A95730 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad38[0x8];                     /* maybe part of sp34[3]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad44[0x4];
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ char pad4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A958B0 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x8];                     /* maybe part of sp30[3]? */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad40[0x10];                    /* maybe part of sp3C[5]? */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ char pad54[0x4];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80A95B34 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A95C5C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A95CEC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A95DA0 {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ Vec3f *sp3C;                         /* inferred */
    /* 0x40 */ EnDno_ActorUnkStruct *sp40;          /* inferred */
    /* 0x44 */ char pad44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A95E88 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A95F94 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A95FE8 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ PosRot *sp28;                        /* inferred */
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A9617C {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ Actor *sp30;                         /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A97114 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A97274 {};              /* size 0x0 */

struct _mips2c_stack_func_80A973B4 {};              /* size 0x0 */

struct _mips2c_stack_func_80A97410 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ s16 *sp28;                           /* inferred */
    /* 0x2C */ char pad2C[0xC];                     /* maybe part of sp28[4]? */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad40[0x4];
    /* 0x44 */ Actor *sp44;                         /* inferred */
    /* 0x48 */ char pad48[0xC];                     /* maybe part of sp44[4]? */
    /* 0x54 */ s16 sp54;                            /* inferred */
    /* 0x56 */ s16 sp56;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80A979DC {};              /* size 0x0 */

struct _mips2c_stack_func_80A979F4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A97A28 {};              /* size 0x0 */

struct _mips2c_stack_func_80A97A40 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A97A9C {};              /* size 0x0 */

struct _mips2c_stack_func_80A97AB4 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A97C0C {};              /* size 0x0 */

struct _mips2c_stack_func_80A97C24 {};              /* size 0x0 */

struct _mips2c_stack_func_80A97C4C {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A97D5C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A97E48 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A97EAC {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A97F9C {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A982E0 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A98414 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A98DA4 {};              /* size 0x0 */

struct _mips2c_stack_func_80A98E48 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A98EFC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A98F94 {};              /* size 0x0 */

? func_80124618(? *, f32, f32 *);                   /* extern */
? func_8013DC40(Path *, s32, s32, ? *);             /* extern */
s32 func_8013E054(GlobalContext *, EnDno_ActorUnkStruct *); /* extern */
void func_80A94A30(Actor *arg0);                    /* static */
void func_80A94A64(Actor *arg0);                    /* static */
? func_80A94A90(s32 arg0, void *arg1);              /* static */
void func_80A94AB8(EnAz *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_80A94B20(GlobalContext *arg0);            /* static */
s32 func_80A94B98(EnAz *arg0, GlobalContext *arg1); /* static */
void func_80A954AC(void *arg0);                     /* static */
s32 func_80A95534(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1); /* static */
s32 func_80A9565C(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1); /* static */
s32 func_80A95730(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1); /* static */
s32 func_80A958B0(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1); /* static */
s32 func_80A95B34(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1); /* static */
void func_80A95C5C(EnAz *arg0, GlobalContext *arg1); /* static */
void func_80A95DA0(EnAz *arg0, GlobalContext *arg1); /* static */
void func_80A95F94(EnAz *arg0, GlobalContext *arg1); /* static */
s32 func_80A9617C(EnAz *arg0, GlobalContext *arg1); /* static */
void func_80A97114(EnAz *arg0, GlobalContext *arg1); /* static */
u16 func_80A97274(EnAz *arg0, GlobalContext *arg1); /* static */
u16 func_80A973B4(EnAz *arg0, GlobalContext *arg1); /* static */
void func_80A97410(EnAz *arg0, GlobalContext *arg1); /* static */
void func_80A979DC(EnAz *arg0, GlobalContext *arg1, u8); /* static */
void func_80A97A28(EnAz *arg0, GlobalContext *arg1); /* static */
void func_80A97A9C(EnAz *arg0, GlobalContext *arg1); /* static */
void func_80A97C0C(EnAz *arg0, GlobalContext *arg1); /* static */
void func_80A97D5C(EnAz *arg0, GlobalContext *arg1); /* static */
void func_80A97EAC(EnAz *arg0, GlobalContext *arg1); /* static */
s32 func_80A982E0(GlobalContext *, EnDno_ActorUnkStruct *); /* static */
void func_80A98414(EnAz *arg0, GlobalContext *arg1); /* static */
s32 func_80A98DA4(GlobalContext *globalCtx, s32 limbIndex, Gfx **dList, Vec3f *pos, Vec3s *rot, Actor *actor); /* static */
void func_80A98E48(GlobalContext *globalCtx, s32 limbIndex, Gfx **dList, Vec3s *rot, Actor *actor); /* static */
void func_80A98EFC(EnAz *arg0, GlobalContext *arg1, u16 arg2, s32 arg3, s32 arg4); /* static */
void func_80A98F94(? *arg1, f32 arg2, f32 *);       /* static */
extern FlexSkeletonHeader D_06007438;
extern AnimationHeader D_0600C94C;
extern FlexSkeletonHeader D_06017990;
extern ? D_0601ABF0;
extern ? D_0601AD00;
extern ? func_8013E07C;
static struct_80B8E1A8 D_80A99010[14] = {
    {(AnimationHeader *)0x600BCFC, 1.0f, 0, -10.0f},
    {(AnimationHeader *)0x600C94C, 1.0f, 0, -5.0f},
    {(AnimationHeader *)0x6008960, 1.0f, 0, -5.0f},
    {(AnimationHeader *)0x6008BB4, 1.0f, 0, -5.0f},
    {(AnimationHeader *)0x600925C, 1.0f, 0, -5.0f},
    {(AnimationHeader *)0x6009B4C, 1.0f, 0, -5.0f},
    {(AnimationHeader *)0x60086AC, 1.0f, 0, -5.0f},
    {(AnimationHeader *)0x6007D3C, 1.0f, 0, -5.0f},
    {(AnimationHeader *)0x6008EAC, 2.0f, 0, -5.0f},
    {(AnimationHeader *)0x600A25C, 1.0f, 0, -5.0f},
    {(AnimationHeader *)0x600AAEC, 1.0f, 0, -5.0f},
    {(AnimationHeader *)0x600B94C, 1.0f, 2, -5.0f},
    {(AnimationHeader *)0x600C0A0, 1.0f, 0, -5.0f},
    {(AnimationHeader *)0x600C47C, 1.0f, 0, -5.0f},
};
static ColliderCylinderInit D_80A99110 = {
    {0, 0, 0x19, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x12, 0x2E, 0, {0, 0, 0}},
};
static EnAz *D_80A9913C = NULL;
static InitChainEntry D_80A99140[3];                /* unable to generate initializer */
static ? D_80A9914C;                                /* unable to generate initializer */
static ? D_80A9915C;                                /* unable to generate initializer */
static u32 D_80A9916C[5] = {0x601A600, 0x601A730, 0x601A860, 0x601A990, 0x601AAC0};
static void *D_80A99180[5] = {
    (void *)0x601A6E8,
    (void *)0x601A818,
    (void *)0x601A948,
    (void *)0x601AA78,
    (void *)0x601ABA8,
};
static ? D_80A99194;                                /* unable to generate initializer */
static ? D_80A9919C;                                /* unable to generate initializer */
static ? D_80A991A4;                                /* unable to generate initializer */
static ? D_80A9930C;                                /* unable to generate initializer */
static ? D_80A993AC;                                /* unable to generate initializer */
static ? D_80A993D0;                                /* unable to generate initializer */
static ? D_80A993F4;                                /* unable to generate initializer */
static ? D_80A99404;                                /* unable to generate initializer */
static Vec3f D_80A99410 = {700.0f, 0.0f, 0.0f};
static Vec3f D_80A9941C = {-500.0f, 0.0f, 0.0f};
static Vec3f D_80A99428 = {-1200.0f, 0.0f, 1000.0f};
static ? D_80A99E80;
static f32 D_80A99E8C;
static ? D_80A99E90;

void func_80A94A30(Actor *arg0) {
    f32 temp_f0;

    temp_f0 = arg0->minVelocityY;
    arg0->velocity.y += arg0->gravity;
    if (arg0->velocity.y < temp_f0) {
        arg0->velocity.y = temp_f0;
    }
}

void func_80A94A64(Actor *arg0) {
    func_80A94A30(arg0);
    Actor_ApplyMovement(arg0);
}

? func_80A94A90(s32 arg0, void *arg1) {
    func_80A94A64(arg1->unk48);
    return 0;
}

void func_80A94AB8(EnAz *arg0, GlobalContext *arg1, s32 arg2) {
    arg1->nextEntranceIndex = Entrance_CreateIndexFromSpawn(arg2);
    gSaveContext.nextCutsceneIndex = 0;
    arg1->sceneLoadFlag = 0x14;
    arg1->unk_1887F = 3;
    gSaveContext.nextTransition = 3;
}

void func_80A94B20(GlobalContext *arg0) {
    Actor *temp_v0;
    Actor *phi_s0;
    Actor *phi_s0_2;

    phi_s0 = NULL;
    do {
        temp_v0 = func_ActorCategoryIterateById(arg0, phi_s0, 8, 0x1A5);
        phi_s0_2 = temp_v0;
        if (temp_v0 != 0) {
            if ((temp_v0->params & 0xF) == 1) {
                Actor_MarkForDeath(temp_v0);
            }
            phi_s0_2 = temp_v0->next;
        }
        phi_s0 = phi_s0_2;
    } while (phi_s0_2 != 0);
}

s32 func_80A94B98(EnAz *arg0, GlobalContext *arg1) {
    s32 sp28;
    Actor *temp_s0;
    Actor *temp_v0;
    Actor *phi_s0;

    sp28 = 0;
    phi_s0 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, 8, 0x1A5);
    if ((temp_v0 != 0) && ((temp_v0->params & 0xF) == 1) && ((temp_v0->unk16C & 1) == 0)) {
        sp28 = 1;
    } else {
        temp_s0 = temp_v0->next;
        phi_s0 = temp_s0;
        if (temp_s0 != 0) {
            goto loop_1;
        }
    }
    return sp28;
}

void EnAz_Init(EnAz *this, GlobalContext *globalCtx) {
    EnAz *sp54;
    s16 sp4E;
    f32 sp3C;
    s16 sp3A;
    SkelAnime *sp34;
    Actor *temp_v0_7;
    Path *temp_a0_3;
    SkelAnime *temp_a1;
    SkelAnime *temp_a1_2;
    s32 temp_a0_2;
    s32 temp_a1_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u32 temp_a0;
    u32 temp_v0_6;
    s32 phi_v1;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;
    s32 phi_v0_4;
    s32 phi_v0_5;
    EnAz *this = (EnAz *) thisx;

    sp54 = this;
    Actor_ProcessInitChain((Actor *) this, D_80A99140);
    temp_a0 = ((s32) this->actor.params >> 8) & 0xF;
    this->unk374 = 0;
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.targetMode = 1;
    switch (temp_a0) {
    case 0:
        temp_v0 = gSaveContext.entranceIndex == 0x8E00;
        phi_v0 = temp_v0;
        if (temp_v0 != 0) {
            phi_v0 = (gSaveContext.weekEventReg[93] & 1) != 0;
        }
        phi_v1 = phi_v0 == 0;
        break;
    case 2:
        temp_v0_2 = gSaveContext.entranceIndex != 0x8E10;
        phi_v0_2 = temp_v0_2;
        if (temp_v0_2 == 0) {
            phi_v0_2 = (gSaveContext.weekEventReg[24] & 4) == 0;
        }
        phi_v1 = phi_v0_2;
        break;
    case 4:
        phi_v1 = gSaveContext.entranceIndex != 0x8E20;
        break;
    case 1:
        temp_v0_3 = gSaveContext.entranceIndex == 0x8E00;
        phi_v0_3 = temp_v0_3;
        if (temp_v0_3 != 0) {
            phi_v0_3 = (gSaveContext.weekEventReg[93] & 1) != 0;
        }
        phi_v1 = phi_v0_3 == 0;
        break;
    case 3:
        temp_v0_4 = gSaveContext.entranceIndex != 0x8E10;
        phi_v0_4 = temp_v0_4;
        if (temp_v0_4 == 0) {
            phi_v0_4 = (gSaveContext.weekEventReg[24] & 4) != 0;
        }
        phi_v1 = phi_v0_4;
        break;
    case 5:
        phi_v1 = gSaveContext.entranceIndex != 0x8E20;
        break;
    case 6:
        temp_v0_5 = gSaveContext.entranceIndex == 0x8E00;
        phi_v0_5 = temp_v0_5;
        if (temp_v0_5 != 0) {
            phi_v0_5 = (gSaveContext.weekEventReg[93] & 1) == 0;
        }
        phi_v1 = phi_v0_5 == 0;
        break;
    default:
        phi_v1 = 1;
        break;
    }
    if (phi_v1 != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_a0_2 = ((s32) this->actor.params >> 8) & 0xF;
    this->unk2F8 = *(&D_80A9915C + (temp_a0 * 2));
    if (temp_a0_2 >= 0) {
        sp4E = *(&D_80A9914C + (temp_a0_2 * 2));
    } else {
        sp4E = -1;
    }
    if (this->unk2F8 == 0) {
        this->unk374 |= 2;
    }
    func_8013E3B8((Actor *) this, (s16 []) &this->unk3D0, 1);
    if (D_80A9913C == 0) {
        D_80A9913C = this;
        this->unk374 |= 1;
    }
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 30.0f);
    temp_a1 = &this->unk148;
    if ((this->unk374 & 2) != 0) {
        sp34 = temp_a1;
        SkelAnime_InitSV(globalCtx, temp_a1, &D_06007438, &D_0600C94C, &this->unk1D8, &this->unk268, 0x18);
        Actor_SetScale((Actor *) this, 0.012f);
    } else {
        temp_a1_2 = &this->unk148;
        sp34 = temp_a1_2;
        SkelAnime_InitSV(globalCtx, temp_a1_2, &D_06017990, &D_0600C94C, &this->unk1D8, &this->unk268, 0x18);
    }
    Collider_InitAndSetCylinder(globalCtx, &this->unk18C, (Actor *) this, &D_80A99110);
    if ((this->unk374 & 2) != 0) {
        this->unk18C.dim.radius = (s16) (s32) ((f32) this->unk18C.dim.radius * 1.2f);
        this->unk18C.dim.height = (s16) (s32) ((f32) this->unk18C.dim.height * 1.2f);
        this->unk18C.dim.yShift = (s16) (s32) ((f32) this->unk18C.dim.yShift * 1.2f);
    }
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 5U);
    if (((this->actor.bgCheckFlags & 0x20) != 0) && (this->actor.yDistToWater > 22.0f)) {
        this->unk374 |= 0x100;
        this->unk376 |= 0x100;
    }
    sp3A = SkelAnime_GetFrameCount(D_80A99010->animationSeg);
    sp3C = Rand_ZeroOne();
    SkelAnime_ChangeAnim(sp34, (AnimationHeader *) D_80A99010->animationSeg, 1.0f, sp3C * (f32) sp3A, (f32) SkelAnime_GetFrameCount(D_80A99010->animationSeg), (u8) (s32) D_80A99010->mode, D_80A99010->transitionRate);
    this->unk37E = 0;
    this->unk380 = 0;
    this->unk384 = 0;
    this->actor.gravity = -1.0f;
    this->unk376 = this->unk374;
    func_8013E1C8(sp34, (struct_80B8E1A8 []) D_80A99010, 0, &this->unk2FC);
    this->unk148.animCurrentFrame = Rand_ZeroOne() * this->unk148.animFrameCount;
    temp_v0_6 = gSaveContext.entranceIndex;
    if (temp_v0_6 != 0x8E00) {
        if (temp_v0_6 != 0x8E10) {
            if (temp_v0_6 != 0x8E20) {
                if (temp_v0_6 != 0x8E30) {

                } else {
                    this->unk2FA = 0;
                    if ((this->unk374 & 2) == 0) {
                        this->actor.flags |= 0x10009;
                    }
                    if (gSaveContext.entranceIndex == 0x8E30) {
                        this->unk2FA = 0xA;
                    }
                    func_80A97C0C(this, globalCtx);
                }
            } else {
                if ((gSaveContext.weekEventReg[93] & 1) != 0) {
                    if ((gSaveContext.weekEventReg[24] & 4) != 0) {
                        this->unk2FA = 9;
                    } else {
                        this->unk2FA = 7;
                    }
                } else if ((gSaveContext.weekEventReg[24] & 4) != 0) {
                    this->unk2FA = 4;
                } else {
                    this->unk2FA = 2;
                }
                if (this->unk2FA == 2) {
                    temp_v1 = this->unk374;
                    if ((temp_v1 & 2) == 0) {
                        this->unk374 = temp_v1 | 0x20;
                        this->actor.flags |= 0x10009;
                        goto block_84;
                    }
                    this->actor.flags |= 9;
                    func_80A95C5C(this, globalCtx);
                } else {
                    temp_v1_2 = this->unk374;
                    if ((temp_v1_2 & 2) != 0) {
                        this->unk374 = temp_v1_2 | 0x20;
                        this->actor.flags |= 0x10009;
                    } else {
                        this->actor.flags |= 9;
                    }
block_84:
                    this->actionFunc = func_80A97C24;
                }
            }
        } else {
            if ((gSaveContext.weekEventReg[93] & 1) != 0) {
                if ((gSaveContext.weekEventReg[24] & 4) != 0) {
                    this->unk2FA = 8;
                } else {
                    this->unk2FA = 6;
                }
            } else if ((gSaveContext.weekEventReg[24] & 4) != 0) {
                this->unk2FA = 3;
            } else {
                this->unk2FA = 1;
            }
            if ((this->unk374 & 1) != 0) {
                temp_a0_3 = globalCtx->setupPathList;
                temp_a1_3 = this->actor.params & 0xFF;
                func_8013DC40(temp_a0_3, temp_a1_3, temp_a0_3[temp_a1_3].count - 1, &D_80A99E80);
            }
            if ((gSaveContext.weekEventReg[24] & 4) != 0) {
                if ((this->unk374 & 2) != 0) {
                    func_80A97D5C(this, globalCtx);
                } else {
                    func_80A979DC(this, globalCtx);
                }
            } else if ((this->unk374 & 2) != 0) {
                func_80A979DC(this, globalCtx);
            } else {
                func_80A97D5C(this, globalCtx);
            }
        }
    } else {
        if ((gSaveContext.weekEventReg[93] & 1) != 0) {
            temp_v1_3 = this->unk374;
            this->unk2FA = 5;
            if ((temp_v1_3 & 2) != 0) {
                this->unk374 = temp_v1_3 | 0x20;
                this->actor.flags |= 9;
            }
        } else {
            this->unk2FA = 0;
            this->actor.flags |= 9;
            this->unk374 |= 0x20;
        }
        func_80A94B20(globalCtx);
        if (this->unk2FA == 5) {
            func_80A97C0C(this, globalCtx);
        } else {
            func_80A95DA0(this, globalCtx);
        }
    }
    if ((s32) sp4E >= 0) {
        this->unk388 = NULL;
loop_87:
        temp_v0_7 = func_ActorCategoryIterateById(globalCtx, this->unk388, 4, 0x18D);
        this->unk388 = temp_v0_7;
        if (temp_v0_7 != 0) {
            if (sp4E != (((s32) temp_v0_7->params >> 8) & 0xF)) {
                this->unk388 = temp_v0_7->next;
                goto block_90;
            }
        } else {
block_90:
            if (sp54->unk388 != 0) {
                goto loop_87;
            }
        }
    }
}

void EnAz_Destroy(EnAz *this, GlobalContext *globalCtx) {
    EnAz *this = (EnAz *) thisx;
    if (gSaveContext.entranceIndex != 0x8E10) {
        gSaveContext.unk_3DD0[4] = 5;
    }
    Collider_DestroyCylinder(globalCtx, &this->unk18C);
}

void func_80A954AC(void *arg0) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 *temp_a0;
    f32 *temp_a1;

    temp_a0 = &sp28;
    temp_a1 = &sp1C;
    sp28 = arg0->unk320 - arg0->unk24;
    sp2C = arg0->unk324 - arg0->unk28;
    sp30 = arg0->unk328 - arg0->unk2C;
    sp1C = arg0->unk320 - arg0->unk338;
    sp20 = arg0->unk324 - arg0->unk33C;
    sp24 = arg0->unk328 - arg0->unk340;
    Math3D_Parallel((Vec3f *) temp_a0, (Vec3f *) temp_a1);
}

s32 func_80A95534(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1) {
    s32 sp28;
    f32 temp_f0;
    void *temp_s0;

    temp_s0 = arg1->unk_48;
    sp28 = 0;
    temp_s0->world.rot.x = 0;
    Math_SmoothStepToS(temp_s0 + 0x39E, temp_s0->world.rot.x, 2, 0x71C, (s16) 0);
    Math_SmoothStepToS(temp_s0 + 0xBC, 0, 2, 0x71C, (s16) 0);
    Math_SmoothStepToS(temp_s0 + 0x32, arg1->unk_56, 1, 0xE38, (s16) 0);
    Math_SmoothStepToS(temp_s0 + 0xBE, temp_s0->world.rot.y, 2, 0x71C, (s16) 0);
    temp_s0->gravity = -1.0f;
    temp_s0->unk36C = 1.5f;
    if (arg1->unk18 == arg1->unk10) {
        temp_f0 = arg1->unk_4C;
        if (temp_f0 < temp_s0->unk36C) {
            temp_s0->unk36C = temp_f0;
        }
    }
    Math_SmoothStepToF(temp_s0 + 0x70, temp_s0->unk36C, 0.8f, 2.0f, 0.0f);
    arg1->unk_64 = func_8013E054;
    if (arg1->unk_4C <= temp_s0->speedXZ) {
        sp28 = 1;
    }
    return sp28;
}

s32 func_80A9565C(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1) {
    s32 sp20;
    f32 temp_f2;
    s16 temp_v0;
    void *temp_s0;

    temp_s0 = arg1->unk_48;
    sp20 = 0;
    temp_s0->gravity = -1.0f;
    arg1->unk_64 = func_80A94A90;
    temp_s0->unk374 = (u16) (temp_s0->unk374 | 0x2000);
    temp_f2 = temp_s0->speedXZ;
    if ((arg1->unk_4C < (temp_f2 * temp_f2)) || ((bitwise f32) func_80A954AC(temp_s0) <= 0.0f)) {
        sp20 = 1;
    } else {
        temp_v0 = Math_Atan2S(-temp_s0->velocity.y, Math_CosS((s16) ((s32) temp_s0->world.rot.x * -1)) * temp_s0->speedXZ);
        temp_s0->world.rot.x = temp_v0;
        temp_s0->unk39E = temp_v0;
    }
    return sp20;
}

s32 func_80A95730(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1) {
    s32 sp48;
    f32 sp40;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    Actor *temp_s0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_a1;
    s16 temp_a3;
    s16 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_s0 = arg1->unk_48;
    sp48 = 0;
    temp_s0->gravity = 0.0f;
    temp_f2 = temp_s0->speedXZ;
    temp_f12 = temp_f2 * temp_f2;
    if ((arg1->unk_4C < temp_f12) || ((bitwise f32) func_80A954AC(temp_s0) <= 0.0f)) {
        sp48 = 1;
    } else {
        temp_a1 = arg1->unk_54;
        temp_v0 = temp_a1 - temp_s0->world.rot.x;
        temp_f0 = temp_f12 / arg1->unk_50;
        if (temp_v0 >= 0) {
            phi_v1 = temp_v0;
        } else {
            phi_v1 = -temp_v0;
        }
        temp_v0_2 = arg1->unk_56 - temp_s0->world.rot.y;
        temp_t0 = (s32) ((f32) phi_v1 * temp_f0) + 0xAAA;
        phi_v1_2 = -temp_v0_2;
        if (temp_v0_2 >= 0) {
            phi_v1_2 = temp_v0_2;
        }
        sp30 = (s32) temp_t0;
        sp34 = phi_v1_2;
        sp40 = temp_f0;
        Math_SmoothStepToS(temp_s0 + 0x30, temp_a1, 1, temp_t0, (s16) 0);
        temp_a3 = (s32) ((f32) phi_v1_2 * temp_f0) + 0xAAA;
        sp2C = (s32) temp_a3;
        Math_SmoothStepToS(temp_s0 + 0x32, arg1->unk_56, 1, temp_a3, (s16) 0);
        Math_SmoothStepToS(temp_s0 + 0x39E, temp_s0->world.rot.x, 2, unksp32, (s16) 0);
        Math_SmoothStepToS(temp_s0 + 0xBE, temp_s0->world.rot.y, 2, unksp2E, (s16) 0);
    }
    arg1->unk_64 = func_8013E07C;
    return sp48;
}

s32 func_80A958B0(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1) {
    s32 sp50;
    f32 sp3C;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    Actor *temp_s0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_a1;
    s16 temp_a3;
    s16 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;
    f32 phi_f0;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_s0 = arg1->unk_48;
    sp50 = 0;
    temp_s0->gravity = 0.0f;
    if (*(&D_80A99E90 + (temp_s0->unk2F8 * 4)) <= D_80A99E8C) {
        if ((temp_s0->unk374 & 2) != 0) {
            phi_f0 = 480.0f;
        } else {
            phi_f0 = 240.0f;
        }
        if (temp_s0->xzDistToPlayer < phi_f0) {
            Math_SmoothStepToF(temp_s0 + 0x36C, 12.0f, 0.8f, 0.5f, 0.01f);
        } else {
            Math_SmoothStepToF(temp_s0 + 0x36C, 6.0f, 0.8f, 0.5f, 0.01f);
        }
    } else {
        Math_SmoothStepToF(temp_s0 + 0x36C, 26.0f, 0.5f, 1.0f, 0.01f);
    }
    Math_SmoothStepToF(temp_s0 + 0x70, temp_s0->unk36C, 0.8f, 2.0f, 0.0f);
    temp_f2 = temp_s0->speedXZ;
    temp_f12 = temp_f2 * temp_f2;
    if ((arg1->unk_4C < temp_f12) || ((bitwise f32) func_80A954AC(temp_s0) <= 0.0f)) {
        sp50 = 1;
    } else {
        temp_a1 = arg1->unk_54;
        temp_v0 = temp_a1 - temp_s0->world.rot.x;
        temp_f0 = temp_f12 / arg1->unk_50;
        if (temp_v0 >= 0) {
            phi_v1 = temp_v0;
        } else {
            phi_v1 = -temp_v0;
        }
        temp_v0_2 = arg1->unk_56 - temp_s0->world.rot.y;
        temp_t0 = (s32) ((f32) phi_v1 * temp_f0) + 0xAAA;
        phi_v1_2 = -temp_v0_2;
        if (temp_v0_2 >= 0) {
            phi_v1_2 = temp_v0_2;
        }
        sp2C = (s32) temp_t0;
        sp30 = phi_v1_2;
        sp3C = temp_f0;
        Math_SmoothStepToS(temp_s0 + 0x30, temp_a1, 1, temp_t0, (s16) 0);
        temp_a3 = (s32) ((f32) phi_v1_2 * temp_f0) + 0xAAA;
        sp28 = (s32) temp_a3;
        Math_SmoothStepToS(temp_s0 + 0x32, arg1->unk_56, 1, temp_a3, (s16) 0);
        Math_SmoothStepToS(temp_s0 + 0x39E, temp_s0->world.rot.x, 2, unksp2E, (s16) 0);
        Math_SmoothStepToS(temp_s0 + 0xBE, temp_s0->world.rot.y, 2, unksp2A, (s16) 0);
    }
    arg1->unk_64 = func_8013E07C;
    return sp50;
}

s32 func_80A95B34(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1) {
    u16 temp_v0;
    void *temp_s0;
    s32 phi_v0;

    temp_s0 = arg1->unk_48;
    temp_v0 = temp_s0->unk374;
    if ((temp_v0 & 0x100) != 0) {
        if ((temp_v0 & 8) == 0) {
            if ((temp_v0 & 2) != 0) {
                func_8013E1C8(temp_s0 + 0x148, (struct_80B8E1A8 []) D_80A99010, 8, temp_s0 + 0x2FC);
            } else {
                func_8013E1C8(temp_s0 + 0x148, (struct_80B8E1A8 []) D_80A99010, 2, temp_s0 + 0x2FC);
            }
            temp_s0->unk374 = (u16) (temp_s0->unk374 | 8);
        }
        if (temp_s0->unk2FA == 0) {
            phi_v0 = func_80A95730(arg0, arg1);
        } else {
            phi_v0 = func_80A958B0(arg0, arg1);
        }
    } else if ((temp_s0->bgCheckFlags & 1) != 0) {
        if ((temp_v0 & 8) != 0) {
            func_8013E1C8(temp_s0 + 0x148, (struct_80B8E1A8 []) D_80A99010, 1, temp_s0 + 0x2FC);
            temp_s0->unk374 = (u16) (temp_s0->unk374 & 0xFFF7);
        }
        phi_v0 = func_80A95534(arg0, arg1);
    } else {
        phi_v0 = func_80A9565C(arg0, arg1);
    }
    return phi_v0;
}

void func_80A95C5C(EnAz *arg0, GlobalContext *arg1) {
    arg0->actor.draw = NULL;
    arg0->actor.world.pos.y = arg0->actor.home.pos.y + 120.0f;
    arg0->actor.gravity = -1.0f;
    func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0, arg0 + 0x2FC);
    arg0->actor.flags &= -0xA;
    arg0->actor.bgCheckFlags &= 0xFFDE;
    arg0->unk3C0 = 0;
    arg0->actionFunc = func_80A95CEC;
}

void func_80A95CEC(EnAz *this, GlobalContext *globalCtx) {
    u16 temp_v0;

    if ((this->unk374 & 0x8000) != 0) {
        temp_v0 = this->actor.bgCheckFlags;
        if ((temp_v0 & 1) == 0) {
            this->actor.draw = EnAz_Draw;
            this->actor.world.rot.y = this->actor.yawTowardsPlayer;
            this->actor.shape.rot.y = this->actor.world.rot.y;
            Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
            func_800B9010((Actor *) this, 0x20A0U);
            return;
        }
        if ((temp_v0 & 2) != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x387AU);
        }
        if (func_8013E2D4((Actor *) this, 0x7C, (s32) this->unk3D0, 1) != 0) {
            func_80A97C0C(this, globalCtx);
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_80A95DA0(Actor *arg0, GlobalContext *arg1) {
    EnDno_ActorUnkStruct *sp40;
    Vec3f *sp3C;
    EnDno_ActorUnkStruct *temp_a3;
    Vec3f *temp_a1;

    temp_a1 = arg0 + 0x24;
    temp_a3 = arg0 + 0x300;
    sp40 = temp_a3;
    sp3C = temp_a1;
    func_8013DCE0(arg1, temp_a1, arg0, temp_a3, arg1->setupPathList, arg0->params & 0xFF, 0, 0, 1, 1);
    arg0->unk36C = 4.0f;
    arg0->speedXZ = 4.0f;
    arg0->gravity = 0.0f;
    func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) D_80A99010, 2, arg0 + 0x2FC);
    arg0->flags |= 9;
    arg0->bgCheckFlags &= 0xFFDE;
    arg0->unk374 = (u16) (arg0->unk374 | 0x1000);
    Math_Vec3f_Copy(sp3C, &sp40->unk_20);
    arg0->unk144 = func_80A95E88;
}

void func_80A95E88(EnAz *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    func_8013DE04(globalCtx, &this->unk300, func_80A982E0, func_80A95B34, func_8013E054, func_8013E0A4);
    if (this->actor.yDistToWater > 8.0f) {
        if ((this->unk374 & 2) != 0) {
            temp_f0 = this->unk148.animCurrentFrame;
            if ((temp_f0 < this->unk148.animPlaybackSpeed) && (temp_f0 >= 0.0f)) {
                Audio_PlayActorSound2((Actor *) this, 0x2909U);
            }
        } else {
            func_800B9010((Actor *) this, 0x2108U);
        }
    }
    if ((this->unk374 & 0x2000) == 0) {
        SkelAnime_FrameUpdateMatrix(&this->unk148);
    }
    this->unk374 &= 0xDFFF;
    if (this->actor.isTargeted != 0) {
        func_80A95F94(this, globalCtx);
    }
}

void func_80A95F94(EnAz *arg0, GlobalContext *arg1) {
    func_800BE33C(arg0 + 0x24, arg0 + 8, arg0 + 0x30, 0);
    arg0->unk39E = 0;
    arg0->actionFunc = func_80A95FE8;
    arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
}

void func_80A95FE8(EnAz *this, GlobalContext *globalCtx) {
    SkelAnime *sp2C;
    PosRot *sp28;
    PosRot *temp_a1;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk148;
    sp2C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (ActorCutscene_GetCanPlayNext(this->unk3D0) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields(this->unk3D0, (Actor *) this);
    } else {
        ActorCutscene_SetIntentToPlay(this->unk3D0);
    }
    temp_a1 = &this->actor.home;
    sp28 = temp_a1;
    if (Actor_DistanceToPoint((Actor *) this, (Vec3f *) temp_a1) > 20.0f) {
        func_800B9010((Actor *) this, 0x2108U);
        func_800BE33C((Vec3f *) &this->actor.world, (Vec3f *) sp28, &this->actor.world.rot, 0);
        Math_SmoothStepToS((s16 *) &this->actor.shape, this->actor.world.rot.x, 3, 0xE38, (s16) 0x38E);
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.world.rot.y, 3, 0xE38, (s16) 0x38E);
        this->actor.shape.rot.z = 0;
        Actor_SetVelocityAndMoveXYRotationReverse((Actor *) this);
        return;
    }
    func_8013E1C8(sp2C, (struct_80B8E1A8 []) D_80A99010, 0, &this->unk2FC);
    this->unk374 &= 0xEFFF;
    this->actor.gravity = -1.0f;
    this->actor.speedXZ = 0.0f;
    Math_SmoothStepToS((s16 *) &this->actor.shape, 0, 3, 0x1000, (s16) 0x100);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.world.rot.y, 3, 0x1038, (s16) 0x100);
    if ((this->actor.bgCheckFlags & 1) != 0) {
        this->actor.shape.rot.x = 0;
        this->actor.gravity = 0.0f;
        func_80A97C0C(this, globalCtx);
        ActorCutscene_Stop(this->unk3D0);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

s32 func_80A9617C(EnAz *arg0, GlobalContext *arg1) {
    s32 sp34;
    Actor *sp30;
    s32 sp28;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    u16 temp_v0_2;
    u32 temp_v0;
    u16 phi_t3;
    s32 phi_t1;

    sp34 = 2;
    sp30 = arg0->unk388;
    temp_v0 = func_80152498(arg1 + 0x4908);
    phi_t1 = 2;
    phi_t1 = 2;
    switch (temp_v0) {                              /* switch 1 */
    case 4:                                         /* switch 1 */
    case 5:                                         /* switch 1 */
    case 6:                                         /* switch 1 */
        if ((arg1->msgCtx.unk11F04 == 0x10DD) && ((arg0->unk374 & 0x8000) != 0)) {
            sp34 = 2;
            if (func_8013E2D4(sp30, sp30->unk3D0, 0x7C, 1) != 0) {
                sp30->unk374 = (u16) (sp30->unk374 | 0x8000);
                arg1->msgCtx.unk11F22 = 0x44;
                phi_t1 = 0;
            }
        } else {
            sp28 = arg1 + 0x10000;
            sp34 = 2;
            if (func_80147624(arg1) != 0) {
                temp_v0_2 = arg1->msgCtx.unk11F04;
                phi_t1 = 3;
                if ((s32) temp_v0_2 >= 0xCE) {
                    switch (temp_v0_2) {            /* switch 2 */
                    case 4302:                      /* switch 2 */
                        arg0->actor.textId = 0x10CF;
                        gSaveContext.weekEventReg[16] |= 0x40;
                        break;
                    case 4303:                      /* switch 2 */
                        arg0->actor.textId = 0x10D0;
                        break;
                    case 4304:                      /* switch 2 */
                        arg0->actor.textId = 0x10D1;
                        sp34 = 3;
                        func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) D_80A99010, 5, arg0 + 0x2FC);
                        break;
                    case 4305:                      /* switch 2 */
                        arg0->actor.textId = 0x10D2;
                        sp34 = 3;
                        func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) D_80A99010, 4, arg0 + 0x2FC);
                        break;
                    case 4306:                      /* switch 2 */
                        if (arg1->msgCtx.choiceIndex == 0) {
                            sp34 = 3;
                            func_8019F208();
                            arg0->actor.textId = 0x10D6;
                            func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) D_80A99010, 5, arg0 + 0x2FC);
                        } else {
                            sp34 = 3;
                            func_8019F230();
                            arg0->actor.textId = 0x10D3;
                            func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0xB, arg0 + 0x2FC);
                        }
                        break;
                    case 4307:                      /* switch 2 */
                        func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0, arg0 + 0x2FC);
                        arg0->unk374 |= 0x20;
                        phi_t1 = 0;
                        break;
                    case 4308:                      /* switch 2 */
                        arg0->actor.textId = 0x10D2;
                        sp34 = 3;
                        func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) D_80A99010, 4, arg0 + 0x2FC);
                        break;
                    case 4310:                      /* switch 2 */
                        func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0, arg0 + 0x2FC);
                        func_80A979DC(arg0, arg1);
                        arg0->unk2FA = 1;
                        phi_t1 = 0;
                        break;
                    case 4311:                      /* switch 2 */
                        arg0->actor.textId = 0x10D8;
                        break;
                    case 4312:                      /* switch 2 */
                        if (arg1->msgCtx.choiceIndex == 0) {
                            func_8019F208();
                            temp_v0_3 = arg0->unk2FA;
                            if (temp_v0_3 != 2) {
                                if (temp_v0_3 != 4) {
                                    if (temp_v0_3 != 7) {
                                        if (temp_v0_3 != 9) {
                                            phi_t1 = 0;
                                        } else {
                                            arg0->unk2FA = 8;
                                            phi_t1 = 0;
                                        }
                                    } else {
                                        arg0->unk2FA = 6;
                                        phi_t1 = 0;
                                    }
                                } else {
                                    arg0->unk2FA = 3;
                                    phi_t1 = 0;
                                }
                            } else {
                                arg0->unk2FA = 1;
                                phi_t1 = 0;
                            }
                        } else {
                            sp34 = 3;
                            func_8019F230();
                            arg0->actor.textId = 0x10D9;
                        }
                        break;
                    case 4313:                      /* switch 2 */
                        temp_v0_4 = arg0->unk2FA;
                        if ((temp_v0_4 == 3) || (temp_v0_4 == 8)) {
                            gSaveContext.weekEventReg[24] &= 0xFB;
                        }
                        func_80A94AB8(arg0, arg1, 0);
                        func_80A979DC(arg0, arg1);
                        phi_t1 = 0;
                        break;
                    case 4314:                      /* switch 2 */
                        arg0->actor.textId = 0x10DB;
                        sp34 = 3;
                        func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 4, &arg0->unk2FC);
                        break;
                    case 4315:                      /* switch 2 */
                        if (arg1->msgCtx.choiceIndex == 0) {
                            func_8019F208();
                            arg1->msgCtx.unk11F22 = 0x44;
                            arg0->unk2FA = 1;
                            phi_t1 = 0;
                        } else {
                            sp34 = 3;
                            func_8019F230();
                            arg0->actor.textId = 0x10DC;
                            func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 0xB, &arg0->unk2FC);
                        }
                        break;
                    case 4316:                      /* switch 2 */
                        func_80A94AB8(arg0, arg1, 0);
                        func_80A979DC(arg0, arg1);
                        arg0->unk374 |= 0x20;
                        phi_t1 = 0;
                        break;
                    case 4317:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x10DEU, 0xD, 9);
                        phi_t3 = arg0->unk374 | 0x8000;
                        goto block_116;
                    case 4318:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x10DFU, 0xC, 0xA);
                        phi_t1 = 0;
                        break;
                    case 4319:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x10E0U, 0xD, 9);
                        phi_t1 = 0;
                        break;
                    case 4320:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x10E1U, 0xC, 0xA);
                        phi_t1 = 0;
                        break;
                    case 4321:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x10E2U, 0xD, 9);
                        phi_t1 = 0;
                        break;
                    case 4322:                      /* switch 2 */
                        arg0->actor.textId = 0x10E3;
                        sp34 = 3;
                        func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 4, &arg0->unk2FC);
                        break;
                    case 4323:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x10E4U, 0, 4);
                        phi_t1 = 0;
                        break;
                    case 4324:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x10E5U, 0, 4);
                        phi_t1 = 0;
                        break;
                    case 4325:                      /* switch 2 */
                        if (arg1->msgCtx.choiceIndex == 0) {
                            sp34 = 3;
                            func_8019F208();
                            arg0->actor.textId = 0x10E8;
                        } else {
                            sp34 = 3;
                            func_8019F230();
                            arg0->actor.textId = 0x10E6;
                            func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 9, &arg0->unk2FC);
                            func_8013E1C8(sp30 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0xD, sp30 + 0x2FC);
                        }
                        break;
                    case 4326:                      /* switch 2 */
                        arg0->actor.textId = 0x10E7;
                        func_80A98EFC(arg0, arg1, 0x10E7U, 0, 0xA);
                        phi_t1 = 0;
                        break;
                    case 4327:                      /* switch 2 */
                        gSaveContext.weekEventReg[24] &= 0xFB;
                        func_80A94AB8(arg0, arg1, 0);
                        func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 0, &arg0->unk2FC);
                        func_8013E1C8(sp30 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0, sp30 + 0x2FC);
                        func_80A979DC(arg0, arg1);
                        phi_t1 = 0;
                        break;
                    case 4328:                      /* switch 2 */
                        func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 0, &arg0->unk2FC);
                        func_8013E1C8(sp30 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0, sp30 + 0x2FC);
                        arg0->unk2FA = 3;
                        phi_t1 = 0;
                        break;
                    case 4329:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x10EAU, 0xC, 4);
                        phi_t1 = 0;
                        break;
                    case 4330:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x10EBU, 0, 4);
                        phi_t1 = 0;
                        break;
                    case 4331:                      /* switch 2 */
                        if (arg1->msgCtx.choiceIndex == 0) {
                            arg1->msgCtx.unk11F22 = 0x44;
                            func_8019F208();
                            temp_v0_5 = arg0->unk2FA;
                            if (temp_v0_5 != 4) {
                                if (temp_v0_5 != 7) {
                                    if (temp_v0_5 != 9) {

                                    }
                                    arg0->unk2FA = 8;
                                    phi_t1 = 0;
                                } else {
                                    arg0->unk2FA = 6;
                                    phi_t1 = 0;
                                }
                            } else {
                                arg0->unk2FA = 3;
                                phi_t1 = 0;
                            }
                        } else {
                            sp34 = 3;
                            func_8019F230();
                            arg0->actor.textId = 0x10EC;
                            func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 7, &arg0->unk2FC);
                            func_8013E1C8(sp30 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0xD, sp30 + 0x2FC);
                        }
                        break;
                    case 4332:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x10EDU, -1, 6);
                        phi_t1 = 0;
                        break;
                    case 4333:                      /* switch 2 */
                        temp_v0_6 = arg0->unk2FA;
                        if ((temp_v0_6 == 4) || (temp_v0_6 == 9)) {
                            gSaveContext.weekEventReg[24] &= 0xFB;
                        }
                        func_80A94AB8(arg0, arg1, 0);
                        func_80A979DC(arg0, arg1);
                        phi_t1 = 0;
                        break;
                    case 4334:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x10EFU, 0xC, 0xA);
                        phi_t1 = 0;
                        break;
                    case 4335:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x10F0U, 0xD, 9);
                        phi_t1 = 0;
                        break;
                    case 4336:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x10F1U, 0xC, 0xA);
                        phi_t1 = 0;
                        break;
                    case 4337:                      /* switch 2 */
                        gSaveContext.weekEventReg[93] |= 1;
                        if ((gSaveContext.weekEventReg[23] & 0x80) != 0) {
                            arg0->unk3CC = 4;
                        } else {
                            arg0->unk3CC = 0x5A;
                            gSaveContext.weekEventReg[23] |= 0x80;
                        }
                        func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 0, &arg0->unk2FC);
                        func_8013E1C8(sp30 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0, sp30 + 0x2FC);
                        phi_t1 = 7;
                        break;
                    case 4338:                      /* switch 2 */
                    case 4361:                      /* switch 2 */
                        gSaveContext.weekEventReg[24] &= 0xFB;
                        func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 0, &arg0->unk2FC);
                        func_8013E1C8(sp30 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0, sp30 + 0x2FC);
                        func_80A94AB8(arg0, arg1, 0);
                        func_80A979DC(arg0, arg1);
                        phi_t1 = 0;
                        break;
                    case 4339:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x10F4U, 0xC, 0xA);
                        phi_t1 = 0;
                        break;
                    case 4340:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x10F5U, 0xD, 9);
                        phi_t1 = 0;
                        break;
                    case 4341:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x10F6U, 0xC, 0xA);
                        phi_t1 = 0;
                        break;
                    case 4342:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x10F7U, 0xD, 5);
                        phi_t1 = 0;
                        break;
                    case 4343:                      /* switch 2 */
                        arg0->actor.textId = 0x10F8;
                        sp34 = 3;
                        func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 4, &arg0->unk2FC);
                        break;
                    case 4344:                      /* switch 2 */
                        if (arg1->msgCtx.choiceIndex == 0) {
                            sp34 = 3;
                            func_8019F208();
                            if ((gSaveContext.weekEventReg[25] & 1) != 0) {
                                arg0->actor.textId = 0x1107;
                            } else {
                                arg0->actor.textId = 0x10FA;
                            }
                            sp34 = 3;
                            func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 5, &arg0->unk2FC);
                        } else {
                            sp34 = 3;
                            func_8019F230();
                            arg0->actor.textId = 0x10F9;
                            func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 0xB, &arg0->unk2FC);
                            func_8013E1C8(sp30 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0xB, sp30 + 0x2FC);
                        }
                        break;
                    case 4345:                      /* switch 2 */
                        func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 0, &arg0->unk2FC);
                        func_8013E1C8(sp30 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0, sp30 + 0x2FC);
                        arg0->unk374 |= 0x20;
                        phi_t1 = 0;
                        break;
                    case 4346:                      /* switch 2 */
                    case 4359:                      /* switch 2 */
                        func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 0, &arg0->unk2FC);
                        func_8013E1C8(sp30 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0, sp30 + 0x2FC);
                        arg0->unk2FA = 6;
                        phi_t1 = 0;
                        break;
                    case 4347:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x10FCU, 0xC, 0xA);
                        phi_t1 = 0;
                        break;
                    case 4348:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x10FDU, 0xD, 4);
                        phi_t1 = 0;
                        break;
                    case 4349:                      /* switch 2 */
                        arg0->actor.textId = 0x10FE;
                        sp34 = 3;
                        func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 4, &arg0->unk2FC);
                        func_8013E1C8(sp30 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0, sp30 + 0x2FC);
                        break;
                    case 4350:                      /* switch 2 */
                        if (arg1->msgCtx.choiceIndex == 0) {
                            sp34 = 3;
                            func_8019F208();
                            if ((gSaveContext.weekEventReg[25] & 1) != 0) {
                                arg0->actor.textId = 0x1108;
                            } else {
                                arg0->actor.textId = 0x1101;
                            }
                            sp34 = 3;
                            func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 4, &arg0->unk2FC);
                        } else {
                            sp34 = 3;
                            func_8019F230();
                            arg0->actor.textId = 0x10FF;
                            func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 9, &arg0->unk2FC);
                            func_8013E1C8(sp30 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0xD, sp30 + 0x2FC);
                        }
                        break;
                    case 4351:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x1100U, 0xC, 0xA);
                        phi_t1 = 0;
                        break;
                    case 4352:                      /* switch 2 */
                        gSaveContext.weekEventReg[24] &= 0xFB;
                        func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 0, &arg0->unk2FC);
                        func_8013E1C8(sp30 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0, sp30 + 0x2FC);
                        func_80A94AB8(arg0, arg1, 0);
                        func_80A979DC(arg0, arg1);
                        phi_t1 = 0;
                        break;
                    case 4353:                      /* switch 2 */
                    case 4360:                      /* switch 2 */
                        func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 0, &arg0->unk2FC);
                        func_8013E1C8(sp30 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0, sp30 + 0x2FC);
                        arg0->unk2FA = 8;
                        phi_t1 = 0;
                        break;
                    case 4354:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x1103U, 0xC, 0xA);
                        phi_t1 = 0;
                        break;
                    case 4355:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x1104U, 0xD, 9);
                        phi_t1 = 0;
                        break;
                    case 4356:                      /* switch 2 */
                        func_80A98EFC(arg0, arg1, 0x1105U, 0xC, 0xA);
                        phi_t1 = 0;
                        break;
                    case 4357:                      /* switch 2 */
                        if ((gSaveContext.weekEventReg[25] & 1) != 0) {
                            arg0->unk3CC = 5;
                        } else {
                            arg0->unk3CC = 0xC;
                            gSaveContext.weekEventReg[25] |= 1;
                        }
                        func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 0, &arg0->unk2FC);
                        func_8013E1C8(sp30 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0, sp30 + 0x2FC);
                        phi_t1 = 7;
                        break;
                    case 4358:                      /* switch 2 */
                        gSaveContext.weekEventReg[24] &= 0xFB;
                        func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 0, &arg0->unk2FC);
                        func_8013E1C8(sp30 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0, sp30 + 0x2FC);
                        func_80A94AB8(arg0, arg1, 0);
                        func_80A979DC(arg0, arg1);
                        phi_t1 = 0;
                        break;
                    }
                } else if ((temp_v0_2 == 0x70) || (temp_v0_2 == 0xCD)) {
                    gSaveContext.weekEventReg[24] &= 0xFE;
                    arg0->actor.textId = 0x10F2;
                    sp34 = 3;
                    func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 0xB, &arg0->unk2FC);
                    func_8013E1C8(sp30 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0xB, sp30 + 0x2FC);
                } else {
                default:                            /* switch 2 */
                    func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 0, &arg0->unk2FC);
                    phi_t3 = arg0->unk374 | 0x20;
                    phi_t1 = 0;
block_116:
                    arg0->unk374 = phi_t3;
                }
            }
        }
        break;
    }
    return phi_t1;
}

void func_80A97114(EnAz *arg0, GlobalContext *arg1) {
    s32 sp24;
    s32 sp20;
    SkelAnime *temp_a0;
    s32 *temp_a3;
    s32 temp_v0;
    u16 temp_t8;
    s32 phi_v0;

    temp_v0 = arg0->unk388;
    sp20 = 0;
    temp_t8 = arg0->actor.textId;
    arg0->actor.flags &= 0xFFFEFFFF;
    phi_v0 = temp_v0;
    switch (temp_t8) {
    case 4314:
    case 4317:
    case 4329:
        sp24 = temp_v0;
        func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) D_80A99010, 4, arg0 + 0x2FC);
block_6:
        phi_v0 = sp24;
        break;
    case 4334:
    case 4339:
    case 4347:
    case 4354:
        sp24 = temp_v0;
        func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) D_80A99010, 9, arg0 + 0x2FC);
        sp20 = 1;
        phi_v0 = temp_v0;
        break;
    case 4338:
    case 4358:
    case 4361:
        sp24 = temp_v0;
        func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0xB, arg0 + 0x2FC);
        phi_v0 = temp_v0;
        if (temp_v0 != 0) {
            sp24 = temp_v0;
            func_8013E1C8(temp_v0 + 0x148, (struct_80B8E1A8 []) D_80A99010, 0xB, temp_v0 + 0x2FC);
            goto block_6;
        }
        break;
    }
    if ((phi_v0 != 0) && (sp20 != 0)) {
        temp_a0 = phi_v0 + 0x148;
        temp_a3 = phi_v0 + 0x2FC;
        if ((arg0->unk374 & 2) != 0) {
            func_8013E1C8(temp_a0, (struct_80B8E1A8 []) D_80A99010, 0xD, temp_a3);
        } else {
            func_8013E1C8(temp_a0, (struct_80B8E1A8 []) D_80A99010, 0xC, temp_a3);
        }
    }
    arg0->unk378 = 2;
    arg0->unk374 &= 0xFFDF;
}

u16 func_80A97274(EnAz *arg0, GlobalContext *arg1) {
    u16 temp_t8;
    u8 temp_v0;
    u8 temp_v0_2;
    u16 phi_v1;

    if ((arg0->unk374 & 0x4000) != 0) {
        return 0x10D7U;
    }
    temp_t8 = arg0->unk2FA;
    switch (temp_t8) {
    default:
        gSaveContext.weekEventReg[24] &= 0xFB;
        if ((gSaveContext.weekEventReg[16] & 0x40) == 0) {
            phi_v1 = 0x10CEU;
        } else {
            phi_v1 = 0x10D4U;
        }
        break;
    case 2:
        temp_v0 = gSaveContext.weekEventReg[24];
        phi_v1 = 0x10DDU;
        if ((temp_v0 & 1) != 0) {
            gSaveContext.weekEventReg[24] = temp_v0 | 4;
            arg0->unk3C0 = 0;
        } else {
            phi_v1 = 0x10DAU;
        }
        break;
    case 4:
        if ((gSaveContext.weekEventReg[24] & 1) != 0) {
            phi_v1 = 0x10EEU;
        } else {
            phi_v1 = 0x10E9U;
        }
        break;
    case 5:
        gSaveContext.weekEventReg[24] &= 0xFB;
        phi_v1 = 0x10F3U;
        break;
    case 7:
        temp_v0_2 = gSaveContext.weekEventReg[24];
        phi_v1 = 0x10FBU;
        if ((temp_v0_2 & 1) != 0) {
            gSaveContext.weekEventReg[24] = temp_v0_2 | 4;
        } else {
            phi_v1 = 0x10E9U;
        }
        break;
    case 9:
        phi_v1 = 0x10E9U;
        if ((gSaveContext.weekEventReg[24] & 1) != 0) {
            phi_v1 = 0x1102U;
        }
        break;
    }
    return phi_v1;
}

u16 func_80A973B4(EnAz *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    u16 phi_v1;

    temp_v0 = arg0->unk3CC;
    phi_v1 = 0U;
    if (temp_v0 != 4) {
        if ((temp_v0 != 5) && (temp_v0 != 0xC)) {
            if (temp_v0 == 0x5A) {
                phi_v1 = 0x10F2U;
            }
        } else {
            phi_v1 = 0x1106U;
        }
    } else {
        phi_v1 = 0x1109U;
    }
    arg0->unk374 |= 0x20;
    return phi_v1;
}

void func_80A97410(EnAz *arg0, GlobalContext *arg1) {
    s16 sp56;
    s16 sp54;
    Actor *sp44;
    f32 sp3C;
    ? sp38;
    s16 *sp28;
    s16 *temp_a0;
    s16 temp_a1_2;
    s32 temp_v0;
    s32 temp_v0_7;
    u16 temp_a1;
    u16 temp_a1_3;
    u16 temp_v0_6;
    u16 temp_v0_8;
    u16 temp_v1_3;
    u8 temp_v0_5;
    u8 temp_v1_2;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1;
    u8 phi_v1;
    u8 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v1_4;

    if (arg0->unk378 != 0) {
        if ((arg0->unk2FA == 0) && ((arg0->unk374 & 2) == 0)) {
            Math_SmoothStepToS(arg0 + 0x3D4, 0, 2, 0x71C, (s16) 0xA);
            Math_SmoothStepToS(arg0 + 0x3D6, 0, 3, 0x71C, (s16) 0xA);
        }
        temp_v0 = arg0->unk388;
        if (temp_v0 != 0) {
            temp_v1 = temp_v0 + 0x24;
            temp_v0_2 = arg0 + 0x24;
            if ((arg0->unk374 & 0x40) != 0) {
                temp_v0_3 = arg0 + 0x24;
                arg0->actor.focus.pos.x = (temp_v0_3->unk0 * 0.5f) + (temp_v1->unk0 * 0.5f);
                arg0->actor.focus.pos.y = (temp_v0_3->unk4 * 0.5f) + (temp_v1->unk4 * 0.5f) + 45.0f;
                arg0->actor.focus.pos.z = (temp_v0_3->unk8 * 0.5f) + (temp_v1->unk8 * 0.5f);
            } else {
                arg0->actor.focus.pos.x = (temp_v0_2->unk0 * 0.7f) + (temp_v1->unk0 * 0.3f);
                arg0->actor.focus.pos.y = (temp_v0_2->unk4 * 0.7f) + (temp_v1->unk4 * 0.3f) + 45.0f;
                arg0->actor.focus.pos.z = (temp_v0_2->unk8 * 0.7f) + (temp_v1->unk8 * 0.3f);
            }
        } else {
            temp_v0_4 = arg0 + 0x24;
            arg0->actor.focus.pos.x = temp_v0_4->unk0;
            arg0->actor.focus.pos.y = temp_v0_4->unk4;
            arg0->actor.focus.pos.z = temp_v0_4->unk8;
        }
        arg0->actor.focus.rot.x = arg0->actor.world.rot.x;
        arg0->actor.focus.rot.y = arg0->actor.world.rot.y;
        arg0->actor.focus.rot.z = arg0->actor.world.rot.z;
    }
    phi_v1 = arg0->unk378;
    if (arg0->unk378 == 2) {
        temp_v0_5 = func_80A9617C(arg0, arg1);
        temp_v1_2 = temp_v0_5 & 0xFF;
        arg0->unk378 = temp_v0_5;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 == 0) {
            arg0->actor.flags &= 0xFFFEFFFF;
            phi_v1 = temp_v0_5 & 0xFF;
        }
    }
    phi_v1_2 = phi_v1;
    if (phi_v1 == 3) {
        func_80151938(arg1, arg0->actor.textId);
        arg0->unk378 = 2;
        return;
    }
    if (phi_v1 == 5) {
        func_801518B0(arg1, arg0->actor.textId, (Actor *) arg0);
        arg0->unk378 = 2;
        return;
    }
    if ((phi_v1 == 6) || (phi_v1 == 7)) {
        if (Actor_HasParent((Actor *) arg0, arg1) != 0) {
            arg0->actor.parent = NULL;
            if (arg0->unk378 == 7) {
                arg0->unk378 = 1;
                arg0->unk374 |= 0x20;
            } else {
                arg0->unk378 = 0;
            }
        } else {
            func_800B8A1C((Actor *) arg0, arg1, arg0->unk3CC, arg0->actor.xzDistToPlayer, arg0->actor.yDistToPlayer);
        }
        phi_v1_2 = arg0->unk378;
    }
    if (phi_v1_2 == 9) {
        arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
        if (Math_SmoothStepToS(&arg0->actor.shape.rot.y, arg0->actor.yawTowardsPlayer, 2, 0xE38, (s16) 0x222) == 0) {
            temp_a1 = arg0->unk3D2;
            if (temp_a1 != 0x10CE) {
                if (temp_a1 != 0x10D4) {

                } else {
                    func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 5, &arg0->unk2FC);
                    goto block_33;
                }
            } else {
                func_8013E1C8(&arg0->unk148, (struct_80B8E1A8 []) D_80A99010, 4, &arg0->unk2FC);
block_33:
            }
            func_801518B0(arg1, arg0->unk3D2, (Actor *) arg0);
            arg0->unk378 = 2;
            arg0->actor.textId = arg0->unk3D2;
            return;
        }
        /* Duplicate return node #69. Try simplifying control flow for better match */
        return;
    }
    if (((phi_v1_2 == 0) || (phi_v1_2 == 1)) && (temp_v0_6 = arg0->unk374, ((temp_v0_6 & 0x20) != 0))) {
        if (phi_v1_2 == 1) {
            if (func_800B84D0((Actor *) arg0, arg1) != 0) {
                func_80A97114(arg0, arg1);
                arg0->unk378 = 2;
                return;
            }
            if (func_800B8500((Actor *) arg0, arg1, arg0->actor.xzDistToPlayer, arg0->actor.yDistToPlayer, -1) != 0) {
                arg0->actor.textId = func_80A973B4(arg0, arg1);
                return;
            }
            /* Duplicate return node #69. Try simplifying control flow for better match */
            return;
        }
        if ((arg0->unk2FA == 0) && ((temp_v0_6 & 2) == 0)) {
            temp_a0 = &arg0->unk3D4;
            sp44 = arg1->actorCtx.actorList[2].first;
            sp28 = &arg0->unk3D6;
            temp_a1_2 = arg0->actor.yawTowardsPlayer - arg0->actor.shape.rot.y;
            phi_v1_3 = -(s32) temp_a1_2;
            if ((s32) temp_a1_2 >= 0) {
                phi_v1_3 = (s32) temp_a1_2;
            }
            if (phi_v1_3 < 0x1800) {
                Math_SmoothStepToS(temp_a0, temp_a1_2, 2, 0x71C, (s16) 0);
            } else {
                Math_SmoothStepToS(temp_a0, 0, 2, 0x71C, (s16) 0);
            }
            Math_Vec3f_Copy((Vec3f *) &sp38, (Vec3f *) &sp44->world);
            sp3C = sp44->unkC44 + 3.0f;
            temp_v0_7 = Math_Vec3f_Pitch((Vec3f *) &arg0->actor.focus, (Vec3f *) &sp38);
            if (temp_v0_7 >= 0) {
                phi_v1_4 = (s32) (s16) temp_v0_7;
            } else {
                phi_v1_4 = -(s32) (s16) temp_v0_7;
            }
            if (phi_v1_4 < 0x800) {
                Math_SmoothStepToS(sp28, (s16) temp_v0_7, 3, 0x71C, (s16) 0);
            } else {
                Math_SmoothStepToS(sp28, 0, 3, 0x71C, (s16) 0);
            }
        }
        if (func_800B84D0((Actor *) arg0, arg1) != 0) {
            func_80A97114(arg0, arg1);
            temp_v1_3 = arg0->unk3D2;
            arg0->unk378 = 2;
            if ((temp_v1_3 == 0x10CE) || (temp_v1_3 == 0x10D4)) {
                arg0->unk378 = 9;
                return;
            }
            /* Duplicate return node #69. Try simplifying control flow for better match */
            return;
        }
        func_800B8898(arg1, (Actor *) arg0, &sp56, &sp54);
        if (((s32) sp56 >= 0) && ((s32) sp56 < 0x141) && ((s32) sp54 >= 0) && ((s32) sp54 < 0xF1) && (func_800B8500((Actor *) arg0, arg1, 120.0f, 120.0f, 0) != 0)) {
            temp_v0_8 = func_80A97274(arg0, arg1);
            temp_a1_3 = temp_v0_8 & 0xFFFF;
            arg0->unk3D2 = temp_v0_8;
            if ((temp_a1_3 == 0x10CE) || (temp_a1_3 == 0x10D4)) {
                arg0->actor.textId = 0;
                return;
            }
            arg0->actor.textId = temp_a1_3;
            /* Duplicate return node #69. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #69. Try simplifying control flow for better match */
    }
}

void func_80A979DC(EnAz *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80A979F4;
}

void func_80A979F4(EnAz *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk148);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void func_80A97A28(EnAz *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80A97A40;
}

void func_80A97A40(EnAz *this, GlobalContext *globalCtx) {
    if (func_8013E2D4((Actor *) this, 0, -1, 0) != 0) {
        globalCtx->msgCtx.unk11F22 = 0;
        globalCtx->msgCtx.unk11F10 = 0;
        func_80A97A9C(this, globalCtx);
    }
}

void func_80A97A9C(EnAz *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80A97AB4;
}

void func_80A97AB4(EnAz *this, GlobalContext *globalCtx) {
    u16 temp_v0_2;
    u32 temp_v0;
    u8 temp_v0_3;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0) {
    case 0:
        func_801518B0(globalCtx, 0x10D7U, NULL);
        return;
    case 4:
    case 5:
    case 6:
        if (func_80147624(globalCtx) != 0) {
            temp_v0_2 = globalCtx->msgCtx.unk11F04;
            if (temp_v0_2 != 0x10D7) {
                if (temp_v0_2 != 0x10D8) {
                    if (temp_v0_2 != 0x10D9) {
                        return;
                    }
                    func_80A94AB8(this, globalCtx, 0);
                    func_80A979DC(this, globalCtx);
                    /* Duplicate return node #15. Try simplifying control flow for better match */
                    return;
                }
                if (globalCtx->msgCtx.choiceIndex == 0) {
                    func_8019F208();
                    globalCtx->msgCtx.unk11F22 = 0x44;
                    func_800FD750(0x25);
                    func_80A94AB8(this, globalCtx, 1);
                    func_80A979DC(this, globalCtx);
                    return;
                }
                func_8019F230();
                temp_v0_3 = gSaveContext.weekEventReg[24];
                if ((temp_v0_3 & 4) != 0) {
                    gSaveContext.weekEventReg[24] = temp_v0_3 & 0xFB;
                }
                func_80151938(globalCtx, 0x10D9U);
                return;
            }
            func_80151938(globalCtx, 0x10D8U);
            return;
        }
    default:
        return;
    }
}

void func_80A97C0C(EnAz *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80A97C4C;
}

void func_80A97C24(EnAz *this, GlobalContext *globalCtx) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    this->actionFunc = func_80A97C4C;
    this->actor.shape.rot.y = this->actor.world.rot.y;
}

void func_80A97C4C(EnAz *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_a0 = &this->unk148;
    sp24 = temp_a0;
    if ((SkelAnime_FrameUpdateMatrix(temp_a0) != 0) && (this->unk2FC == 0xB)) {
        func_8013E1C8(temp_a0, (struct_80B8E1A8 []) D_80A99010, 0, &this->unk2FC);
    }
    func_80A97410(this, globalCtx);
    temp_v0 = this->unk2FA;
    if ((temp_v0 == 1) || (temp_v0 == 3) || (temp_v0 == 6) || (temp_v0 == 8)) {
        gSaveContext.weekEventReg[24] &= 0xFE;
        func_800FD750(0x25);
        globalCtx->nextEntranceIndex = Entrance_CreateIndexFromSpawn(1);
        gSaveContext.nextCutsceneIndex = 0;
        globalCtx->sceneLoadFlag = 0x14;
        globalCtx->unk_1887F = 0x50;
        gSaveContext.nextTransition = 3;
        func_80A979DC(this, globalCtx);
        return;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void func_80A97D5C(EnAz *arg0, GlobalContext *arg1) {
    s16 temp_v0_2;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_v0->unkA6C = (s32) (temp_v0->unkA6C | 0x20);
    func_80112AFC(arg1);
    if ((arg0->unk374 & 2) != 0) {
        gSaveContext.minigameScore = 0x19;
    } else {
        gSaveContext.minigameScore = 0x14;
    }
    arg1->interfaceCtx.unk_280 = 1;
    temp_v0_2 = arg0->unk2FA;
    if ((temp_v0_2 == 1) || (temp_v0_2 == 3)) {
        func_8010E9F0(4, 0x78);
    } else if ((gSaveContext.weekEventReg[25] & 1) != 0) {
        func_8010E9F0(4, 0x64);
    } else {
        func_8010E9F0(4, 0x6E);
    }
    arg0->actionFunc = func_80A97E48;
}

void func_80A97E48(EnAz *this, GlobalContext *globalCtx) {
    Actor *temp_v0;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    if ((s32) globalCtx->interfaceCtx.unk_280 >= 8) {
        temp_v0->unkA6C = (s32) (temp_v0->unkA6C & ~0x20);
        func_80A97EAC(this);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    SkelAnime_FrameUpdateMatrix(&this->unk148);
}

void func_80A97EAC(Actor *arg0, GlobalContext *arg1) {
    u32 temp_t2;

    func_8013DCE0(arg1, arg0 + 0x24, arg0, arg0 + 0x300, arg1->setupPathList, arg0->params & 0xFF, 0, 0, 1, 0);
    arg0->unk36C = 8.0f;
    arg0->speedXZ = 8.0f;
    arg0->gravity = 0.0f;
    arg0->velocity.y = 6.0f;
    func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) D_80A99010, 2, arg0 + 0x2FC);
    temp_t2 = arg0->flags | 0x8000000;
    arg0->flags = temp_t2;
    arg0->flags = temp_t2 & ~9;
    arg0->bgCheckFlags &= 0xFFDE;
    arg0->unk374 = (u16) (arg0->unk374 | 0x1000);
    arg0->unk3C2 = 0;
    arg0->unk3C4 = 0;
    arg0->unk144 = func_80A97F9C;
}

void func_80A97F9C(EnAz *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    Actor *temp_v1;
    f32 temp_f0;
    s16 temp_v0;
    s16 phi_v1;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    sp2C = temp_v1;
    D_80A99E8C = Math3D_XZDistanceSquared(temp_v1->world.pos.x, temp_v1->world.pos.z, D_80A99E80.unk0, D_80A99E80.unk8);
    if (Math3D_XZDistanceSquared(this->actor.world.pos.x, this->actor.world.pos.z, D_80A99E80.unk0, D_80A99E80.unk8) >= 1000000.0f) {
        this->unk374 |= 0x1000;
    }
    if ((this->unk300.unk_1C & 0x20) == 0) {
        func_8013DE04(globalCtx, &this->unk300, func_80A982E0, func_80A95B34, func_8013E054, func_8013E0A4);
    }
    if (((this->unk374 & 0x10) == 0) && (func_800C9B90(&globalCtx->colCtx, this->actor.floorPoly, (s32) this->actor.floorBgId) != 0)) {
        this->unk374 |= 0x10;
    }
    if (func_800C9B90(&globalCtx->colCtx, sp2C->floorPoly, (s32) sp2C->floorBgId) != 0) {
        if (func_80A94B98(this, globalCtx) != 0) {
            gSaveContext.weekEventReg[24] &= 0xFE;
        } else {
            gSaveContext.weekEventReg[24] |= 1;
        }
        gSaveContext.unk_3DD0[4] = 5;
        this->unk374 &= 0xFFEF;
        globalCtx->nextEntranceIndex = Entrance_CreateIndexFromSpawn(2);
        gSaveContext.nextCutsceneIndex = 0;
        globalCtx->sceneLoadFlag = 0x14;
        globalCtx->unk_1887F = 3;
        gSaveContext.nextTransition = 3;
        this->actor.speedXZ = 0.0f;
        func_80A979DC(this, globalCtx, 3U);
        return;
    }
    if ((gSaveContext.unk3E00 == 0) && (gSaveContext.unk3E04 == 0)) {
        gSaveContext.unk_3DD0[4] = 5;
        this->unk374 |= 0x4000;
        func_80A97A28(this, globalCtx);
    }
    if ((this->unk374 & 0x100) != 0) {
        if ((this->actor.flags & 0x40) != 0) {
            func_80A98414(this, globalCtx);
        }
        temp_v0 = this->unk37A;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            this->unk37A = temp_v0 - 1;
            phi_v1 = this->unk37A;
        }
        if ((phi_v1 == 0) && ((this->actor.flags & 0x40) != 0)) {
            EffectSsBubble_Spawn(globalCtx, (Vec3f *) &this->actor.world, 0.0f, 20.0f, 20.0f, 0.35f);
            this->unk37A = (s16) (s32) ((Rand_ZeroOne() * 70.0f) + 10.0f);
        }
    }
    if (this->actor.yDistToWater > 8.0f) {
        if ((this->unk374 & 2) != 0) {
            temp_f0 = this->unk148.animCurrentFrame;
            if ((temp_f0 < this->unk148.animPlaybackSpeed) && (temp_f0 >= 0.0f)) {
                Audio_PlayActorSound2((Actor *) this, 0x2909U);
            }
        } else {
            func_800B9010((Actor *) this, 0x2108U);
        }
    }
    SkelAnime_FrameUpdateMatrix(&this->unk148);
}

void func_80A982E0(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    Actor *temp_v1;
    void *temp_v0;

    temp_v1 = arg1->unk_48;
    temp_v0 = (bitwise s32) arg1->unk_00.z + (arg1->unk10 * 6);
    arg1->unk_20.x = (f32) temp_v0->unk0;
    if ((temp_v1->bgCheckFlags & 1) != 0) {
        arg1->unk_20.y = (f32) temp_v0->unk2;
    } else {
        arg1->unk_20.y = (f32) temp_v0->unk2 - temp_v1->unk3A4;
    }
    arg1->unk_20.z = (f32) temp_v0->unk4;
    sp28 = arg1->unk_20.x - arg1->unk44->unk0;
    sp2C = arg1->unk_20.y - arg1->unk44->unk4;
    sp30 = arg1->unk_20.z - arg1->unk44->unk8;
    arg1->unk_4C = Math3D_XZLengthSquared(sp28, sp30);
    arg1->unk_50 = Math3D_LengthSquared((Vec3f *) &sp28);
    arg1->unk_56 = Math_FAtan2F(sp30, sp28);
    arg1->unk_54 = Math_FAtan2F(sqrtf(arg1->unk_4C), -sp2C);
    arg1->unk58 = 0;
}

void func_80A98414(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_s0;
    Actor *temp_s0_2;
    Actor *phi_s0;

    temp_s0 = arg1->actorCtx.actorList[7].first;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
        do {
            if ((phi_s0->id == 0x17) && ((s32) phi_s0->params < 0) && (arg0->room == phi_s0->room) && (Math3D_DistanceSquared(arg0 + 0x24, phi_s0 + 0x24) < 40000.0f)) {
                phi_s0->unk276 = 0x14;
                phi_s0->unk274 = Actor_YawBetweenActors(phi_s0, arg0);
            }
            temp_s0_2 = phi_s0->next;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 0);
    }
}

void EnAz_Update(EnAz *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    u16 temp_t1;
    u16 temp_t7;
    u16 temp_v0;
    EnAz *this = (EnAz *) thisx;

    temp_t7 = this->unk374 & ~0x100;
    this->unk374 = temp_t7;
    if (((this->actor.bgCheckFlags & 0x20) != 0) && (this->actor.yDistToWater > 22.0f)) {
        if ((this->unk376 & 0x100) == 0) {
            this->unk374 = temp_t7 | 0x200;
        }
        this->unk374 |= 0x100;
    } else if ((this->unk376 & 0x100) != 0) {
        this->unk374 |= 0x400;
    }
    this->actionFunc(this, globalCtx);
    Actor_SetHeight((Actor *) this, 40.0f);
    if ((this->unk374 & 0x200) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x2889U);
    }
    if ((this->unk374 & 0x400) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x288AU);
    }
    this->unk37E += 1;
    if ((s32) this->unk37E >= 4) {
        this->unk37E = 0;
    }
    this->unk380 += 1;
    if ((s32) this->unk380 >= 3) {
        this->unk380 = 0;
    }
    this->unk384 += -1;
    if ((s32) this->unk384 < 0) {
        this->unk384 = 2;
    }
    this->unk39C += 1;
    if ((s32) this->unk39C >= 0x10) {
        this->unk39C = 0;
    }
    if ((this->unk374 & 0x1000) == 0) {
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 20.0f, 5U);
    } else {
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 20.0f, 0x400U);
        this->unk374 &= 0xEFFF;
    }
    temp_a2 = &this->unk18C;
    sp2C = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    temp_v0 = this->unk374;
    temp_t1 = temp_v0 & ~0x600;
    this->unk374 = temp_t1;
    this->unk376 = temp_v0;
    if ((globalCtx->cameraPtrs[globalCtx->activeCamera]->flags2 & 0x100) != 0) {
        this->unk374 = temp_t1 | 0x800;
        return;
    }
    this->unk374 &= 0xF7FF;
}

void EnAz_Draw(EnAz *this, GlobalContext *globalCtx) {
    f32 sp98;
    f32 sp94;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s0;
    GraphicsContext *temp_s0_2;
    GraphicsContext *temp_s2;
    s32 temp_s1;
    void *temp_v0_12;
    void *temp_v0_7;
    ? *phi_s3;
    void **phi_s4;
    s32 phi_s1;
    ? *phi_s5;
    u32 *phi_s6;
    EnAz *this = (EnAz *) thisx;

    temp_s0 = globalCtx->state.gfxCtx;
    temp_s0->polyOpa.p = Gfx_CallSetupDL(temp_s0->polyOpa.p, 0x19U);
    if ((this->unk374 & 2) != 0) {
        SkelAnime_DrawSV(globalCtx, this->unk148.skeleton, this->unk148.limbDrawTbl, (s32) this->unk148.dListCount, func_80A98DA4, func_80A98E48, (Actor *) this);
    } else {
        temp_s0_2 = globalCtx->state.gfxCtx;
        temp_v0 = temp_s0_2->polyOpa.p;
        temp_s0_2->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        temp_v0->words.w1 = Lib_SegmentedToVirtual(*(&D_80A993F4 + (this->unk37E * 4)));
        temp_v0_2 = temp_s0_2->polyOpa.p;
        temp_s0_2->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDB060024;
        temp_v0_2->words.w1 = Lib_SegmentedToVirtual(*(&D_80A99404 + (this->unk380 * 4)));
        SkelAnime_DrawSV(globalCtx, this->unk148.skeleton, this->unk148.limbDrawTbl, (s32) this->unk148.dListCount, func_80A98DA4, func_80A98E48, (Actor *) this);
    }
    temp_s2 = globalCtx->state.gfxCtx;
    if ((this->actor.yDistToWater >= 28.0f) && (this->actor.speedXZ > 0.5f)) {
        SysMatrix_InsertTranslation(this->unk3B4, this->unk3B8, this->unk3BC, 0);
        Matrix_RotateY(this->actor.shape.rot.y, 1U);
        SysMatrix_InsertXRotation_s(this->actor.shape.rot.x, 1);
        SysMatrix_InsertZRotation_s(this->actor.shape.rot.z, 1);
        SysMatrix_InsertXRotation_s(this->unk39E, 1);
        Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
        func_8012C2DC(globalCtx->state.gfxCtx);
        if ((this->unk374 & 2) != 0) {
            SysMatrix_InsertTranslation(0.0f, 0.0f, -2000.0f, 1);
            phi_s3 = &D_80A9930C;
            phi_s4 = D_80A99180;
            phi_s1 = 0;
            phi_s5 = &D_80A991A4;
            phi_s6 = D_80A9916C;
            do {
                SysMatrix_StatePush();
                func_80A98F94(phi_s3, (f32) this->unk39C, &sp94);
                AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(*phi_s4));
                SysMatrix_InsertTranslation(0.0f, sp94 * 100.0f, (f32) phi_s1 * -930.0f, 1);
                Matrix_Scale(1.1f, 0.95f, 1.0f, 1);
                func_80124618(phi_s5, (f32) this->unk39C, &sp98);
                Matrix_Scale(sp98, sp9C, spA0, 1);
                if ((this->unk374 & 0x800) != 0) {
                    temp_v0_3 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v0_3 + 8;
                    temp_v0_3->words.w0 = 0xDB060024;
                    temp_v0_3->words.w1 = Gfx_PrimColor(globalCtx->state.gfxCtx, 0x80, 0xFF, 0xFF, 0xFF, (s32) *(phi_s1 + &D_80A99194));
                } else {
                    temp_v0_4 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v0_4 + 8;
                    temp_v0_4->words.w0 = 0xDB060024;
                    temp_v0_4->words.w1 = Gfx_PrimColor(globalCtx->state.gfxCtx, 0x80, 0xFF, 0xFF, 0xFF, (s32) *(phi_s1 + &D_80A9919C));
                }
                temp_v0_5 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_5 + 8;
                temp_v0_5->words.w0 = 0xDA380003;
                temp_v0_5->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                temp_v0_6 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_6 + 8;
                temp_v0_6->words.w0 = 0xDE000000;
                temp_v0_6->words.w1 = *phi_s6;
                SysMatrix_StatePop();
                temp_s1 = phi_s1 + 1;
                phi_s3 += 0x20;
                phi_s4 += 4;
                phi_s1 = temp_s1;
                phi_s5 += 0x48;
                phi_s6 += 4;
            } while (temp_s1 != 5);
            return;
        }
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(0.0f, 2000.0f, -2000.0f, 1);
        SysMatrix_InsertZRotation_s((s16) (s32) ((&D_80A993D0 + (this->unk384 * 0xC))->unk8 * 182.04445f), 1);
        temp_v0_7 = (this->unk384 * 0xC) + &D_80A993AC;
        Matrix_Scale(temp_v0_7->unk0, temp_v0_7->unk4, 0.0f, 1);
        if ((this->unk374 & 0x800) != 0) {
            temp_v0_8 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_8 + 8;
            temp_v0_8->words.w0 = 0xDB060020;
            temp_v0_8->words.w1 = Gfx_PrimColor(globalCtx->state.gfxCtx, 0x80, 0xFF, 0xFF, 0xFF, 0xFF);
        } else {
            temp_v0_9 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_9 + 8;
            temp_v0_9->words.w0 = 0xDB060020;
            temp_v0_9->words.w1 = Gfx_PrimColor(globalCtx->state.gfxCtx, 0x80, 0xFF, 0xFF, 0xFF, 0x55);
        }
        temp_v0_10 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0_10 + 8;
        temp_v0_10->words.w0 = 0xDA380003;
        temp_v0_10->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_11 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0_11 + 8;
        temp_v0_11->words.w0 = 0xDE000000;
        temp_v0_11->words.w1 = (u32) &D_0601ABF0;
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(0.0f, 2000.0f, -2100.0f, 1);
        SysMatrix_InsertZRotation_s((s16) (s32) ((&D_80A993D0 + (this->unk384 * 0xC))->unk8 * 182.04445f), 1);
        temp_v0_12 = &D_80A993D0 + (this->unk384 * 0xC);
        Matrix_Scale(temp_v0_12->unk0, temp_v0_12->unk4, 0.0f, 1);
        temp_v0_13 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0_13 + 8;
        temp_v0_13->words.w0 = 0xDA380003;
        temp_v0_13->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_14 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0_14 + 8;
        temp_v0_14->words.w0 = 0xDE000000;
        temp_v0_14->words.w1 = (u32) &D_0601AD00;
        /* Duplicate return node #16. Try simplifying control flow for better match */
    }
}

s32 func_80A98DA4(GlobalContext *globalCtx, s32 limbIndex, Gfx **dList, Vec3f *pos, Vec3s *rot, Actor *actor) {
    if ((limbIndex == 0) && ((globalCtx->gameplayFrames & 1) != 0)) {
        *dList = NULL;
    }
    if (limbIndex == 0) {
        rot->x = rot->x;
        rot->y = rot->y;
        rot->z = rot->z;
    }
    if (limbIndex == 3) {
        rot->y -= actor->unk39E;
    }
    if (limbIndex == 5) {
        rot->x += actor->unk3D4;
        rot->y -= actor->unk3D6;
    }
    return 0;
}

void func_80A98E48(GlobalContext *globalCtx, s32 limbIndex, Gfx **dList, Vec3s *rot, Actor *actor) {
    if (limbIndex == 3) {
        SysMatrix_MultiplyVector3fByState(&D_80A99410, actor + 0x3A8);
        Math_SmoothStepToF(actor + 0x3A4, actor->unk3AC - actor->world.pos.y, 0.8f, 10.0f, 0.01f);
        if ((actor->unk374 & 2) != 0) {
            SysMatrix_MultiplyVector3fByState(&D_80A9941C, actor + 0x3B4);
            return;
        }
        SysMatrix_MultiplyVector3fByState(&D_80A99428, actor + 0x3B4);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80A98EFC(Actor *arg0, GlobalContext *arg1, u16 arg2, s32 arg3, s32 arg4) {
    Actor *temp_s0;

    temp_s0 = arg0->unk388;
    func_800B86C8(arg0, arg1, temp_s0);
    if (arg3 >= 0) {
        func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) D_80A99010, arg3, arg0 + 0x2FC);
    }
    arg0->textId = 0;
    temp_s0->unk378 = 5;
    temp_s0->textId = arg2;
    if ((arg4 >= 0) && (arg4 != temp_s0->unk2FC)) {
        func_8013E1C8(temp_s0 + 0x148, (struct_80B8E1A8 []) D_80A99010, arg4, temp_s0 + 0x2FC);
    }
    arg0->unk378 = 0;
}

void func_80A98F94(void *arg0, f32 arg1, f32 *arg2) {
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f2;
    void *temp_a0;
    void *phi_a0;

    phi_a0 = arg0;
    do {
        temp_a0 = phi_a0 + 8;
        temp_f0 = (f32) phi_a0->unk8;
        phi_a0 = temp_a0;
    } while (temp_f0 < arg1);
    temp_f14 = temp_a0->unk-4;
    temp_f2 = (f32) temp_a0->unk-8;
    *arg2 = (((temp_a0->unk4 - temp_f14) * ((arg1 - temp_f2) / (temp_f0 - temp_f2))) + temp_f14) * 0.01f;
}
