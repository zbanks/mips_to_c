typedef struct EnSsh {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0xAE];                 /* maybe part of unk_188[30]? */
    /* 0x23C */ Vec3s unk_23C;                      /* inferred */
    /* 0x242 */ char pad_242[0xAE];                 /* maybe part of unk_23C[30]? */
    /* 0x2F0 */ void (*actionFunc)(EnSsh *, GlobalContext *);
    /* 0x2F4 */ ColliderCylinder unk_2F4;           /* inferred */
    /* 0x340 */ char pad_340[0x17C];                /* maybe part of unk_2F4[6]? */
    /* 0x4BC */ ColliderJntSph unk_4BC;             /* inferred */
    /* 0x4DC */ char pad_4DC[0x40];                 /* maybe part of unk_4BC[3]? */
    /* 0x51C */ s16 unk_51C;                        /* inferred */
    /* 0x51E */ char pad_51E[0x2];
    /* 0x520 */ s16 unk_520;                        /* inferred */
    /* 0x522 */ char pad_522[0x6];                  /* maybe part of unk_520[4]? */
    /* 0x528 */ s16 unk_528;                        /* inferred */
    /* 0x52A */ s16 unk_52A;                        /* inferred */
    /* 0x52C */ s16 unk_52C;                        /* inferred */
    /* 0x52E */ char pad_52E[0x2];
    /* 0x530 */ s32 unk_530;                        /* inferred */
    /* 0x534 */ char pad_534[0x4];
    /* 0x538 */ f32 unk_538;                        /* inferred */
    /* 0x53C */ char pad_53C[0x86];                 /* maybe part of unk_538[34]? */
    /* 0x5C2 */ u16 unk_5C2;                        /* inferred */
    /* 0x5C4 */ s8 unk_5C4;                         /* inferred */
    /* 0x5C5 */ char pad_5C5[0x1];
    /* 0x5C6 */ s16 unk_5C6;                        /* inferred */
    /* 0x5C8 */ s16 unk_5C8;                        /* inferred */
    /* 0x5CA */ char pad_5CA[0x2];
} EnSsh;                                            /* size = 0x5CC */

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ Vec3s rot;
    /* 0x12 */ s16 unk_12;                          /* inferred */
} PosRot;                                           /* size = 0x14 */

struct _mips2c_stack_EnSsh_Destroy {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnSsh_Draw {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ GraphicsContext *sp2C;               /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnSsh_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0x8];                    /* maybe part of sp30[3]? */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnSsh_SetupAction {};          /* size 0x0 */

struct _mips2c_stack_EnSsh_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80973EFC {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80973F84 {
    /* 0x000 */ char pad_0[0x20];
    /* 0x020 */ s32 sp20;                           /* inferred */
    /* 0x024 */ char pad_24[0x4];
    /* 0x028 */ s32 sp28;                           /* inferred */
    /* 0x02C */ s32 sp2C;                           /* inferred */
    /* 0x030 */ s32 sp30;                           /* inferred */
    /* 0x034 */ s32 sp34;                           /* inferred */
    /* 0x038 */ ? sp38;                             /* inferred */
    /* 0x038 */ char pad_38[0x184];
    /* 0x1BC */ u8 sp1BC;                           /* inferred */
    /* 0x1BD */ u8 sp1BD;                           /* inferred */
    /* 0x1BE */ u8 sp1BE;                           /* inferred */
    /* 0x1BF */ u8 sp1BF;                           /* inferred */
    /* 0x1C0 */ u8 sp1C0;                           /* inferred */
    /* 0x1C1 */ u8 sp1C1;                           /* inferred */
    /* 0x1C2 */ u8 sp1C2;                           /* inferred */
    /* 0x1C3 */ u8 sp1C3;                           /* inferred */
    /* 0x1C4 */ u8 sp1C4;                           /* inferred */
    /* 0x1C5 */ u8 sp1C5;                           /* inferred */
    /* 0x1C6 */ u8 sp1C6;                           /* inferred */
    /* 0x1C7 */ u8 sp1C7;                           /* inferred */
    /* 0x1C8 */ u8 sp1C8;                           /* inferred */
    /* 0x1C9 */ u8 sp1C9;                           /* inferred */
    /* 0x1CA */ u8 sp1CA;                           /* inferred */
    /* 0x1CB */ u8 sp1CB;                           /* inferred */
    /* 0x1CC */ s32 sp1CC;                          /* inferred */
    /* 0x1D0 */ s32 sp1D0;                          /* inferred */
    /* 0x1D4 */ s32 sp1D4;                          /* inferred */
};                                                  /* size = 0x1D8 */

struct _mips2c_stack_func_80974080 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ u32 sp48;                            /* inferred */
    /* 0x4C */ CollisionPoly *sp4C;                 /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80974118 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0xC];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80974220 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8097424C {
    /* 0x00 */ char pad_0[0x50];
    /* 0x50 */ ColliderCylinderInit *sp50;          /* inferred */
    /* 0x54 */ char pad_54[0x14];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80974374 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ AnimationHeaderCommon **sp30;        /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x8];
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x1C];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0x1C];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_809744A8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809744C8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809744FC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80974540 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80974590 {};              /* size 0x0 */

struct _mips2c_stack_func_809745BC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80974730 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8097480C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809748DC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8097497C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809749B8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80974A24 {};              /* size 0x0 */

struct _mips2c_stack_func_80974B0C {};              /* size 0x0 */

struct _mips2c_stack_func_80974B44 {};              /* size 0x0 */

struct _mips2c_stack_func_80974B84 {
    /* 0x00 */ char pad_0[0x32];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];                    /* maybe part of sp32[3]? */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80974CC8 {};              /* size 0x0 */

struct _mips2c_stack_func_80974D3C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80974E44 {};              /* size 0x0 */

struct _mips2c_stack_func_80974EA0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80974F78 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8097502C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80975070 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ColliderCylinder *sp18;              /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80975128 {
    /* 0x00 */ char pad_0[0x70];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad_7C[0x24];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_80975300 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Collider *sp24;                      /* inferred */
    /* 0x28 */ CollisionCheckContext *sp28;         /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809755C0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8097561C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809756D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80975720 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809758B0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80975998 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80975A98 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80975B6C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80975C14 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80975DBC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80975EB8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? EffectSsBlast_SpawnWhiteCustomScale(GlobalContext *, f32 *, ? *, ? *, s32, s32, s32); /* extern */
void func_80973EFC(EnSsh *arg0, GlobalContext *arg1); /* static */
s32 func_80973F84(GlobalContext *arg0);             /* static */
? func_80974080(EnSsh *arg0, GlobalContext *arg1);  /* static */
void func_80974118(Vec3s *arg0);                    /* static */
void func_80974220(Vec3s *arg0);                    /* static */
void func_8097424C(Actor *arg0, GlobalContext *arg1); /* static */
f32 func_80974374(Actor *arg0, s32 arg1);           /* static */
void func_809744A8(EnSsh *);                        /* static */
void func_809744C8(Actor *arg0);                    /* static */
void func_809744FC(EnSsh *arg0);                    /* static */
void func_80974540(EnSsh *arg0);                    /* static */
void func_80974590(Actor *arg0);                    /* static */
void func_809745BC(Actor *arg0, f32 arg1, f32 arg2); /* static */
? func_80974730(Actor *arg0);                       /* static */
void func_8097480C(void *arg0, ? arg1);             /* static */
void func_809748DC(void *arg0, ? arg1);             /* static */
void func_8097497C(EnSsh *arg0, GlobalContext *);   /* static */
void func_809749B8(EnSsh *arg0, GlobalContext *arg1); /* static */
s32 func_80974A24(EnSsh *arg0, GlobalContext *arg1); /* static */
s32 func_80974B0C(EnSsh *arg0);                     /* static */
s32 func_80974B44(EnSsh *arg0);                     /* static */
void func_80974B84(EnSsh *arg0);                    /* static */
void func_80974CC8(EnSsh *arg0, GlobalContext *arg1); /* static */
? func_80974D3C(Actor *arg0, GlobalContext *arg1);  /* static */
s32 func_80974E44(Actor *arg0);                     /* static */
s32 func_80974EA0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80974F78(Actor *arg0, GlobalContext *arg1); /* static */
void func_8097502C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80975070(Actor *arg0, GlobalContext *arg1); /* static */
? func_80975128(Actor *arg0, GlobalContext *arg1, Actor *); /* static */
void func_80975300(Actor *arg0, GlobalContext *arg1); /* static */
void func_8097561C(EnSsh *this, GlobalContext *globalCtx); /* static */
void func_809756D0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80975B6C(EnSsh *arg0);                    /* static */
s32 func_80975DBC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80975EB8(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern ? D_060000D8;
extern AnimationHeaderCommon D_06000304;
extern AnimationHeader D_06001494;
extern Gfx D_06005210;
extern Gfx D_06005850;
extern Gfx D_06005F78;
extern SkeletonHeader D_06006470;
static CollisionCheckInfoInit2 D_8097605C = {1, 0, 0, 0, 0xFF};
static ColliderJntSphElementInit D_80976094 = {
    {0, {0xF7CFFFFF, 0, 4}, {0, 0, 0}, 1, 0, 1},
    {1, {{0, 0xFF10, 0}, 0x1C}, 0x64},
};
static ColliderJntSphInit D_809760B8 = {{6, 0x11, 0, 0x39, 0x10, 0}, 1, &D_80976094};
static ? D_809760C8;                                /* unable to generate initializer */
static s32 D_809760D4 = 0xFFFFFF4B;
static s32 D_809760D8 = 0xFFFFFF4B;
static s32 D_809760DC = 0xFFFFFF00;
static s32 D_809760E0 = 0xFFFFFF00;
static ? D_809760E4;                                /* unable to generate initializer */
static ? D_809760F0;                                /* unable to generate initializer */
static ? D_809760FC;                                /* unable to generate initializer */
static ? D_80976114;                                /* unable to generate initializer */
static ? D_80976130;                                /* unable to generate initializer */
static ? D_8097614C;                                /* unable to generate initializer */
static s32 D_80976154[9] = {0x42200000, 0, 0, 0, 0, 0, 0xC2200000, 0, 0};
static ? D_80976178;                                /* unable to generate initializer */

void EnSsh_SetupAction(EnSsh *this, void (*actionFunc)(EnSsh *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

void func_80973EFC(EnSsh *arg0, GlobalContext *arg1) {
    ? sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 *temp_a1;

    sp34.unk_0 = (s32) D_809760C8.unk_0;
    temp_a1 = &sp28;
    sp34.unk_4 = (s32) D_809760C8.unk_4;
    sp34.unk_8 = (s32) D_809760C8.unk_8;
    sp28 = arg0->actor.world.pos.x;
    sp2C = arg0->actor.floorHeight;
    sp30 = arg0->actor.world.pos.z;
    EffectSsBlast_SpawnWhiteCustomScale(arg1, temp_a1, &sp34, &sp34, 0x64, 0xDC, 8);
}

s32 func_80973F84(GlobalContext *arg0) {
    s32 sp1D4;
    s32 sp1D0;
    s32 sp1CC;
    u8 sp1CB;
    u8 sp1CA;
    u8 sp1C9;
    u8 sp1C8;
    u8 sp1C7;
    u8 sp1C6;
    u8 sp1C5;
    u8 sp1C4;
    u8 sp1C3;
    u8 sp1C2;
    u8 sp1C1;
    u8 sp1C0;
    u8 sp1BF;
    u8 sp1BE;
    u8 sp1BD;
    u8 sp1BC;
    ? sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    s32 sp20;

    sp34 = D_809760D4;
    sp30 = D_809760D8;
    sp2C = D_809760DC;
    sp28 = D_809760E0;
    sp1C1 = unksp31;
    sp1BD = unksp35;
    sp1BC = (u8) sp34;
    sp1C0 = (u8) sp30;
    sp1C4 = (u8) sp2C;
    sp1C8 = (u8) sp28;
    sp1C9 = unksp29;
    sp1C5 = unksp2D;
    sp1BE = unksp36;
    sp1CC = 6;
    sp1D0 = 0;
    sp1D4 = 3;
    sp1C3 = unksp33;
    sp1BF = unksp37;
    sp1CA = unksp2A;
    sp1C6 = unksp2E;
    sp1C7 = unksp2F;
    sp1CB = unksp2B;
    sp1C2 = unksp32;
    Effect_Add(arg0, &sp20, 1, 0U, (u8) 0, (void *) &sp38);
    return sp20;
}

? func_80974080(EnSsh *arg0, GlobalContext *arg1) {
    CollisionPoly *sp4C;
    u32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;

    sp3C = arg0->actor.world.pos.x;
    sp40 = arg0->actor.world.pos.y + 1000.0f;
    sp44 = arg0->actor.world.pos.z;
    if (func_800C55C4(arg1 + 0x830, arg0 + 0x24, (Vec3f *) &sp3C, arg0 + 0x53C, &sp4C, 0U, 0U, 1U, 1U, &sp48) == 0) {
        return 0;
    }
    return 1;
}

void func_80974118(Vec3s *arg0) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    ? sp34;
    ? sp28;

    sp4C.unk_0 = D_809760E4.unk_0;
    (&sp4C)[1] = D_809760E4.unk_4;
    (&sp4C)[2] = D_809760E4.unk_8;
    sp40.unk_0 = D_809760F0.unk_0;
    (&sp40)[1] = D_809760F0.unk_4;
    (&sp40)[2] = D_809760F0.unk_8;
    sp4C *= arg0->unk_534;
    sp50 *= arg0->unk_534;
    sp54 *= arg0->unk_534;
    sp40 *= arg0->unk_534;
    sp44 *= arg0->unk_534;
    sp48 *= arg0->unk_534;
    SysMatrix_StatePush();
    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp4C, (Vec3f *) &sp34);
    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp40, (Vec3f *) &sp28);
    SysMatrix_StatePop();
    func_800A81F0(Effect_GetParams(arg0->unk_530), (Vec3f *) &sp34, (Vec3f *) &sp28);
}

void func_80974220(Vec3s *arg0) {
    func_800A8514(Effect_GetParams(arg0->unk_530));
}

void func_8097424C(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinderInit *sp50;
    ColliderCylinderInit **temp_s0;
    f32 *temp_s0_2;
    ColliderCylinder *phi_s1;
    ColliderCylinderInit **phi_s0;

    sp50.unk_0 = D_809760FC.unk_0;
    (&sp50)[1] = D_809760FC.unk_4;
    (&sp50)[3] = D_809760FC.unk_C;
    (&sp50)[2] = D_809760FC.unk_8;
    (&sp50)[4] = D_809760FC.unk_10;
    (&sp50)[5] = D_809760FC.unk_14;
    phi_s1 = arg0 + 0x2F4;
    phi_s0 = &sp50;
    do {
        Collider_InitAndSetCylinder(arg1, phi_s1, arg0, *phi_s0);
        temp_s0 = phi_s0 + 4;
        phi_s1 = &phi_s1[1];
        phi_s0 = temp_s0;
    } while (temp_s0 != &arg0);
    arg0[2].yDistToWater = 2.0326e-41f;
    arg0[2].shape.feetPos[0].y = -8.4285036e33f;
    arg0->unk_3A0 = 9;
    arg0->unk_3BA = 0xD;
    arg0->unk_3B8 = 2;
    arg0[2].child = (bitwise Actor *) -8.4285036e33f;
    CollisionCheck_SetInfo2(&arg0->colChkInfo, DamageTable_Get(2), &D_8097605C);
    temp_s0_2 = &arg0[3].projectedPos.y;
    Collider_InitJntSph(arg1, (ColliderJntSph *) temp_s0_2);
    Collider_SetJntSph(arg1, (ColliderJntSph *) temp_s0_2, arg0, &D_809760B8, (ColliderJntSphElement *) &arg0[3].prevPos.z);
}

f32 func_80974374(Actor *arg0, s32 arg1) {
    ? sp64;
    ? sp48;
    ? sp40;
    f32 sp3C;
    s32 sp34;
    AnimationHeaderCommon **sp30;
    AnimationHeaderCommon **temp_t0;
    f32 temp_f0;
    s32 temp_v1;

    sp64.unk_0 = (s32) D_80976114.unk_0;
    sp64.unk_4 = (s32) D_80976114.unk_4;
    sp64.unk_8 = (s32) D_80976114.unk_8;
    sp64.unk_C = (s32) D_80976114.unk_C;
    sp64.unk_10 = (s32) D_80976114.unk_10;
    sp64.unk_14 = (s32) D_80976114.unk_14;
    sp64.unk_18 = (s32) D_80976114.unk_18;
    sp48.unk_0 = (s32) D_80976130.unk_0;
    sp48.unk_4 = (s32) D_80976130.unk_4;
    sp48.unk_8 = (s32) D_80976130.unk_8;
    sp48.unk_C = (s32) D_80976130.unk_C;
    sp48.unk_10 = (s32) D_80976130.unk_10;
    sp48.unk_14 = (s32) D_80976130.unk_14;
    sp48.unk_18 = (s32) D_80976130.unk_18;
    sp40.unk_0 = (s32) D_8097614C.unk_0;
    sp40.unk_4 = (first 3 bytes) D_8097614C.unk_4;
    temp_v1 = arg1 * 4;
    temp_t0 = &sp64 + temp_v1;
    sp30 = temp_t0;
    sp34 = temp_v1;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*temp_t0);
    sp3C = temp_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_t0, (sp + temp_v1)->unk_48, 0.0f, temp_f0, (u8) (s32) (sp + arg1)->unk_40, -6.0f);
    return temp_f0;
}

void func_809744A8(void) {
    func_80974374((Actor *)2);
}

void func_809744C8(Actor *arg0) {
    Audio_PlayActorSound2(arg0, 0x3869U);
    func_80974374(arg0, 1);
}

void func_809744FC(EnSsh *arg0) {
    arg0->actor.world.pos.y = arg0->unk_538 + arg0->actor.floorHeight;
    arg0->unk_52C = (s16) (s32) func_80974374((Actor *)3);
}

void func_80974540(EnSsh *arg0) {
    if (arg0->unk_520 == 0) {
        arg0->unk_52C = (s16) (s32) func_80974374((Actor *)4);
    }
    arg0->actor.velocity.y = -10.0f;
}

void func_80974590(Actor *arg0) {
    if (arg0[4].home.unk_12 == 0) {
        arg0[4].home.unk_12 = 0x78;
        arg0->colorFilterTimer = 0;
        arg0[4].colChkInfo.cylHeight |= 8;
    }
}

void func_809745BC(Actor *arg0, f32 arg1, f32 arg2) {
    Actor *temp_a0;
    Actor *temp_v0;
    f32 temp_f16;
    f32 temp_f4;
    s16 temp_t9;
    s16 temp_t9_2;
    s32 temp_v1;
    void *temp_a1;
    void *temp_v0_2;
    s16 phi_t9;
    Actor *phi_v0;
    s32 phi_v1;
    s16 phi_t9_2;
    Actor *phi_v0_2;

    temp_a1 = arg0[3].prevPos.y;
    temp_a1->unk_2E = (s16) (s32) ((f32) temp_a1->unk_2E * arg1);
    temp_f16 = arg1 * arg2;
    temp_t9 = arg0[2].colChkInfo.cylRadius;
    phi_t9 = temp_t9;
    phi_v0 = arg0;
    phi_v1 = 0x4C;
    phi_t9_2 = temp_t9;
    phi_v0_2 = arg0;
    if (0x4C != 0x1C8) {
        do {
            temp_v1 = phi_v1 + 0x4C;
            temp_v0 = phi_v0 + 0x4C;
            temp_t9_2 = temp_v0[2].colChkInfo.cylRadius;
            temp_v0->unk_2EC = (s16) (s32) ((f32) phi_t9 * arg1);
            temp_v0->unk_2E8 = (s16) (s32) ((f32) phi_v0->unk_334 * temp_f16);
            temp_v0->unk_2EA = (s16) (s32) ((f32) phi_v0->unk_336 * arg1);
            phi_t9 = temp_t9_2;
            phi_v0 = temp_v0;
            phi_v1 = temp_v1;
            phi_t9_2 = temp_t9_2;
            phi_v0_2 = temp_v0;
        } while (temp_v1 != 0x1C8);
    }
    temp_v0_2 = phi_v0_2 + 0x4C;
    temp_v0_2->unk_2EC = (s16) (s32) ((f32) phi_t9_2 * arg1);
    temp_v0_2->unk_2E8 = (s16) (s32) ((f32) phi_v0_2->unk_334 * temp_f16);
    temp_v0_2->unk_2EA = (s16) (s32) ((f32) phi_v0_2->unk_336 * arg1);
    temp_a0 = arg0;
    arg0 = arg0;
    temp_f4 = 0.04f * arg1;
    arg1 = arg1;
    Actor_SetScale(temp_a0, temp_f4);
    arg0[4].world.pos.y = 60.0f * arg1;
    arg0[4].world.pos.x = arg1 * 1.5f;
}

? func_80974730(Actor *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0[4].home.unk_12;
    if ((temp_v0 == 0x78) && ((arg0[4].colChkInfo.cylHeight & 1) != 0)) {
        func_800BCB70(arg0, 0, 0xC8, 0, (s16) (s32) temp_v0);
    }
    if (arg0[4].home.unk_12 == 0) {
        phi_v1 = 0;
    } else {
        arg0[4].home.unk_12 += -1;
        phi_v1 = arg0[4].home.unk_12;
    }
    if (phi_v1 != 0) {
        Math_SmoothStepToS(arg0 + 0x51E, 0x2710, 0xA, 0x3E8, (s16) 1);
        return 0;
    }
    arg0[4].home.unk_12 = 0;
    arg0[4].colChkInfo.cylHeight = (u16) arg0[4].colChkInfo.cylHeight & 0xFFFE;
    arg0->unk_522 = 0;
    if (arg0->unk_52E == 0) {
        arg0->unk_522 = 0x1E;
    }
    Audio_PlayActorSound2(arg0, 0x3884U);
    Audio_PlayActorSound2(arg0, 0x6868U);
    return 1;
}

void func_8097480C(void *arg0, ? arg1) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v1;

    temp_v0 = arg0->unk_524;
    if (temp_v0 != 0) {
        arg0->unk_524 = (s16) (temp_v0 - 1);
    }
    temp_v0_2 = arg0->unk_522;
    if (temp_v0_2 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_522 = (s16) (temp_v0_2 - 1);
        phi_v1 = arg0->unk_522;
    }
    if (phi_v1 != 0) {
        arg0->unk_32 = (s16) (arg0->unk_32 + (s32) (10000.0f * ((f32) arg0->unk_522 / 30.0f)));
    } else if ((arg0->unk_52E == 0) && (arg0->unk_52A == 0)) {
        Math_SmoothStepToS(arg0 + 0x32, arg0->unk_92, 4, 0x2710, (s16) 1);
    }
    arg0->unk_BE = (s16) arg0->unk_32;
}

void func_809748DC(void *arg0, ? arg1) {
    s16 temp_v0;

    if ((arg0->unk_52E == 0) && (arg0->unk_52A == 0)) {
        Math_SmoothStepToS(arg0 + 0x32, (s16) (arg0->unk_92 ^ 0x8000), 4, arg0->unk_51E, (s16) 1);
    }
    temp_v0 = arg0->unk_52A;
    arg0->unk_BE = (s16) arg0->unk_32;
    if ((s32) temp_v0 < 0x1E) {
        if ((temp_v0 & 1) != 0) {
            arg0->unk_BE = (s16) (arg0->unk_BE + 0x7D0);
            return;
        }
        arg0->unk_BE = (s16) (arg0->unk_BE - 0x7D0);
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_8097497C(EnSsh *arg0) {
    if (arg0->unk_52A != 0) {
        func_809748DC();
        return;
    }
    func_8097480C();
}

void func_809749B8(EnSsh *arg0, GlobalContext *arg1) {
    f32 phi_f0;

    phi_f0 = 0.5f;
    if ((arg1->state.frames & 8) != 0) {
        phi_f0 = 0.5f * -1.0f;
    }
    Math_SmoothStepToF(arg0 + 0x68, phi_f0, 0.4f, 1000.0f, 0.0f);
}

s32 func_80974A24(EnSsh *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f2;

    if ((arg0->unk_5C2 & 4) != 0) {
        return 1;
    }
    if (arg0->unk_520 != 0) {
        return 1;
    }
    if (arg0->unk_52E != 0) {
        return 1;
    }
    if (arg0->unk_52C != 0) {
        return 1;
    }
    if (arg0->actor.xzDistToPlayer > 160.0f) {
        return 0;
    }
    temp_f2 = arg1->actorCtx.actorList[2].first->unk_28;
    temp_f0 = arg0->actor.world.pos.y - temp_f2;
    if ((temp_f0 < 0.0f) || (temp_f0 > 400.0f)) {
        return 0;
    }
    if (temp_f2 < arg0->actor.floorHeight) {
        return 0;
    }
    return 1;
}

s32 func_80974B0C(EnSsh *arg0) {
    if (arg0->actor.home.pos.y <= (arg0->actor.world.pos.y + (2.0f * arg0->actor.velocity.y))) {
        return 1;
    }
    return 0;
}

s32 func_80974B44(EnSsh *arg0) {
    if (((arg0->actor.world.pos.y + (2.0f * arg0->actor.velocity.y)) - arg0->actor.floorHeight) <= arg0->unk_538) {
        return 1;
    }
    return 0;
}

void func_80974B84(EnSsh *arg0) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp38;
    s16 sp32;
    f32 temp_f16;
    f32 temp_f20;
    s16 temp_a0;
    s16 temp_v0;

    temp_v0 = arg0->unk_52E;
    if (temp_v0 != 0) {
        arg0->unk_52E = temp_v0 - 1;
        arg0->unk_5C0 += 0x640;
        if (arg0->unk_52E == 0) {
            arg0->unk_5C0 = 0;
        }
        temp_f20 = arg0->actor.world.pos.y - arg0->unk_540;
        temp_a0 = (s16) (s32) (Math_SinS(arg0->unk_5C0) * ((f32) arg0->unk_52E * 0.16666667f * 182.04445f));
        sp32 = temp_a0;
        sp44 = Math_SinS(temp_a0) * temp_f20;
        temp_f16 = Math_CosS(temp_a0) * temp_f20;
        sp4C = 0.0f;
        sp48 = temp_f16;
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(arg0->unk_53C, arg0->unk_540, arg0->unk_544, 0);
        SysMatrix_InsertYRotation_f((f32) arg0->actor.world.rot.y * 0.0000958738f, 1);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp44, (Vec3f *) &sp38);
        SysMatrix_StatePop();
        arg0->actor.shape.rot.z = (s16) -(s32) (sp32 * 2);
        arg0->actor.world.pos.x = sp38;
        arg0->actor.world.pos.z = sp40;
    }
}

void func_80974CC8(EnSsh *arg0, GlobalContext *arg1) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = arg0 + 0x30C;
    if (arg1->actorCtx.actorList[2].first->unk_B28 != 0) {
        temp_v0_2 = arg0 + 0x30C;
        temp_v0_2->unk_8 = (s32) (temp_v0_2->unk_8 | 2);
        arg0->unk_360 &= -3;
        arg0->unk_3AC &= -3;
        return;
    }
    temp_v0->unk_8 = (s32) (temp_v0->unk_8 & ~2);
    arg0->unk_360 |= 2;
    arg0->unk_3AC |= 2;
}

? func_80974D3C(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v1;
    u8 temp_a0;
    Actor *phi_v0;
    s32 phi_v1;
    s32 phi_a3;

    phi_v0 = arg0;
    phi_v1 = 0;
    phi_a3 = 0;
    if ((arg0->unk_5C4 == 0) && (arg0->unk_522 == 0)) {
        return 0;
    }
    do {
        temp_a0 = phi_v0[3].targetMode;
        temp_v1 = phi_v1 + 0x4C;
        phi_v1 = temp_v1;
        if ((temp_a0 & 1) != 0) {
            phi_v0[3].targetMode = temp_a0 & ~1;
            phi_a3 = 1;
        }
        phi_v0 += 0x4C;
    } while (temp_v1 != 0xE4);
    if (phi_a3 == 0) {
        return 0;
    }
    arg0[4].home.rot.x = 0x1E;
    if (arg0->unk_52E == 0) {
        arg0->unk_522 = (s16) arg0[4].home.rot.x;
    }
    Audio_PlayActorSound2(arg0, 0x3884U);
    Audio_PlayActorSound2(arg0, 0x6868U);
    arg1->damagePlayer(arg1, -8);
    func_800B8D98(arg1, arg0, 4.0f, arg0->yawTowardsPlayer, 6.0f);
    arg0->unk_5C4 = (u8) (arg0->unk_5C4 - 1);
    return 1;
}

s32 func_80974E44(Actor *arg0) {
    u8 temp_v0;

    temp_v0 = arg0[2].targetPriority;
    if ((temp_v0 & 2) == 0) {
        return 0;
    }
    arg0[2].targetPriority = temp_v0 & 0xFFFD;
    arg0[4].home.rot.y = 8;
    if ((arg0->unk_52E == 0) && (arg0[4].home.rot.x == 0) && (arg0[4].home.unk_12 == 0)) {
        arg0->unk_52E = 0x3C;
    }
    return 1;
}

s32 func_80974EA0(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0_3;
    void *temp_v0;
    void *temp_v0_2;
    s32 phi_v1;

    temp_v0 = arg0 + 0x2F4;
    phi_v1 = 0;
    if ((arg0->unk_305 & 2) != 0) {
        temp_v0->unk_11 = (u8) (temp_v0->unk_11 & 0xFFFD);
        phi_v1 = 1;
    }
    temp_v0_2 = arg0 + 0x340;
    if ((arg0->unk_351 & 2) != 0) {
        temp_v0_2->unk_11 = (u8) (temp_v0_2->unk_11 & 0xFFFD);
        phi_v1 = 1;
    }
    if (phi_v1 == 0) {
        return 0;
    }
    temp_v0_3 = arg0->unk_5C4;
    arg0[4].home.rot.y = 8;
    if ((s32) temp_v0_3 <= 0) {
        arg0->unk_5C4 = (u8) (temp_v0_3 + 1);
    }
    if (arg0[4].home.unk_12 == 0) {
        Audio_PlayActorSound2(arg0, 0x389EU);
        Audio_PlayActorSound2(arg0, 0x6867U);
    }
    func_80974590(arg0);
    arg0[4].colChkInfo.cylHeight = (u16) arg0[4].colChkInfo.cylHeight | 1;
    return 0;
}

s32 func_80974F78(Actor *arg0, GlobalContext *arg1) {
    if (arg0[4].home.unk_12 == 0) {
        func_80974D3C(arg0, arg1);
    }
    if (func_80974E44(arg0) != 0) {
        return 0;
    }
    if (arg1->actorCtx.unk2 != 0) {
        arg0[4].home.rot.y = 8;
        if (arg0[4].home.unk_12 == 0) {
            Audio_PlayActorSound2(arg0, 0x389EU);
            Audio_PlayActorSound2(arg0, 0x6867U);
        }
        func_80974590(arg0);
        arg0[4].colChkInfo.cylHeight = (u16) arg0[4].colChkInfo.cylHeight | 1;
        return 0;
    }
    return func_80974EA0(arg0, arg1);
}

void func_8097502C(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x2F4;
    sp1C = temp_a2;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetAC(arg1, arg1 + 0x18884, (Collider *) temp_a2);
}

void func_80975070(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp18;
    ColliderCylinder *temp_a2;
    ColliderCylinder *temp_a2_2;
    s16 temp_v0;
    s32 phi_v1;

    temp_a2 = arg0 + 0x340;
    temp_v0 = arg0->yawTowardsPlayer - arg0->shape.rot.y;
    phi_v1 = temp_v0 << 0x10;
    if ((s32) temp_v0 < 0) {
        phi_v1 = (s32) temp_v0 * -0x10000;
    }
    if ((phi_v1 >> 0x10) < 0x3FFC) {
        temp_a2_2 = arg0 + 0x38C;
        sp18 = temp_a2_2;
        arg1 = arg1;
        Collider_UpdateCylinder(arg0, temp_a2_2);
        CollisionCheck_SetAC(arg1, arg1 + 0x18884, (Collider *) temp_a2_2);
        return;
    }
    sp18 = temp_a2;
    arg1 = arg1;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetAC(arg1, &arg1->colChkCtx, (Collider *) temp_a2);
}

? func_80975128(Actor *arg0, GlobalContext *arg1) {
    ? sp7C;
    f32 sp70;
    ? *temp_t6;
    s32 *temp_t7;
    s32 temp_s3;
    void *temp_s6;
    s32 *phi_t7;
    ? *phi_t6;
    Vec3f *phi_s0;
    Actor *phi_s1;
    Collider *phi_s4;
    s32 phi_s3;

    phi_t7 = D_80976154;
    phi_t6 = &sp7C;
    do {
        temp_t7 = phi_t7 + 0xC;
        temp_t6 = phi_t6 + 0xC;
        temp_t6->unk_-C = (s32) *phi_t7;
        temp_t6->unk_-8 = (s32) temp_t7->unk_-8;
        temp_t6->unk_-4 = (s32) temp_t7->unk_-4;
        phi_t7 = temp_t7;
        phi_t6 = temp_t6;
    } while (temp_t7 != (D_80976154 + 0x24));
    temp_s6 = arg0 + 0x24;
    phi_s0 = (Vec3f *) &sp7C;
    phi_s1 = arg0;
    phi_s4 = arg0 + 0x3D8;
    phi_s3 = 0;
    do {
        sp70.unk_0 = temp_s6->unk_0;
        (&sp70)[1] = temp_s6->unk_4;
        (&sp70)[2] = temp_s6->unk_8;
        phi_s0->x *= arg0[4].world.pos.x;
        phi_s0->y *= arg0[4].world.pos.x;
        phi_s0->z *= arg0[4].world.pos.x;
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(sp70, sp74, sp78, 0);
        SysMatrix_InsertYRotation_f(((f32) arg0->unk_51C / 32768.0f) * 3.1415927f, 1);
        SysMatrix_MultiplyVector3fByState(phi_s0, (Vec3f *) &sp70);
        SysMatrix_StatePop();
        phi_s1[3].unk_52 = (s16) (s32) sp70;
        phi_s1->unk_420 = (s16) (s32) sp74;
        phi_s1->unk_422 = (s16) (s32) sp78;
        CollisionCheck_SetOC(arg1, arg1 + 0x18884, phi_s4);
        temp_s3 = phi_s3 + 0x4C;
        phi_s0 = &phi_s0[1];
        phi_s1 += 0x4C;
        phi_s4 = (Collider *) &phi_s4[3].at;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0xE4);
    return 1;
}

void func_80975300(Actor *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp28;
    Collider *sp24;
    Actor *temp_a0;
    Actor *temp_a3;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;
    s16 temp_v0;
    Actor *phi_a3;
    s16 phi_v1;

    temp_a3 = arg0;
    phi_a3 = temp_a3;
    if (temp_a3->colChkInfo.health == 0) {
        temp_a1 = arg1 + 0x18884;
        temp_a2 = temp_a3 + 0x4BC;
        sp24 = temp_a2;
        sp28 = temp_a1;
        CollisionCheck_SetAT(arg1, temp_a1, temp_a2);
        CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
        return;
    }
    temp_a0 = temp_a3;
    if (temp_a3[4].home.rot.x == 0) {
        arg0 = temp_a3;
        func_80975128(temp_a0, arg1, temp_a3);
        phi_a3 = arg0;
    }
    temp_v0 = phi_a3[4].home.rot.y;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        phi_a3[4].home.rot.y = temp_v0 - 1;
        phi_v1 = phi_a3[4].home.rot.y;
    }
    if (phi_v1 == 0) {
        arg0 = phi_a3;
        func_8097502C(phi_a3, arg1);
        func_80975070(arg0, arg1);
    }
}

void EnSsh_Init(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp3C;
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    EnSsh *this = (EnSsh *) thisx;

    sp3C = (f32) SkelAnime_GetFrameCount(&D_06000304);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 30.0f);
    temp_a1 = &this->unk_144;
    sp30 = temp_a1;
    SkelAnime_Init(globalCtx, temp_a1, &D_06006470, NULL, &this->unk_188, &this->unk_23C, 0x1E);
    SkelAnime_ChangeAnim(sp30, &D_06001494, 1.0f, 0.0f, sp3C, (u8) 1, 0.0f);
    this->unk_530 = func_80973F84(globalCtx);
    func_8097424C((Actor *) this, globalCtx);
    this->unk_5C2 = 0;
    this->unk_5C4 = 0;
    func_80974080(this, globalCtx);
    if ((this->actor.params & 0xF) == 0) {
        this->unk_5C2 |= 0x20;
    }
    if ((this->unk_5C2 & 0x20) == 0) {
        func_809745BC((Actor *) this, 0.5f, 1.0f);
    } else {
        func_809745BC((Actor *) this, 0.75f, 1.0f);
    }
    this->actor.gravity = 0.0f;
    this->unk_51C = this->actor.world.rot.y;
    EnSsh_SetupAction(this, func_80975C14);
    if (func_8012F22C(globalCtx->sceneNum) >= 0x1E) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void EnSsh_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_s0;
    ColliderCylinder *phi_s1;
    s32 phi_s0;
    EnSsh *this = (EnSsh *) thisx;

    Effect_Destroy(globalCtx, this->unk_530);
    phi_s1 = &this->unk_2F4;
    phi_s0 = 0;
    do {
        Collider_DestroyCylinder(globalCtx, phi_s1);
        temp_s0 = phi_s0 + 0x4C;
        phi_s1 = &phi_s1[1];
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x1C8);
    Collider_DestroyJntSph(globalCtx, &this->unk_4BC);
}

void func_809755C0(EnSsh *this, GlobalContext *globalCtx) {
    if (func_80974A24(this, globalCtx) != 0) {
        func_80974540(this);
        EnSsh_SetupAction(this, func_80975998);
        return;
    }
    func_809749B8(this, globalCtx);
}

void func_8097561C(EnSsh *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    func_809749B8(arg0, arg1);
    if ((func_80152498(&arg1->msgCtx) == 5) && (func_80147624(arg1) != 0)) {
        temp_v0 = arg1->msgCtx.unk11F04;
        switch (temp_v0) {
        case 2308:
        case 2309:
        case 2310:
        case 2312:
        case 2320:
        case 2321:
        case 2322:
        case 2324:
            func_80151938(arg1, (temp_v0 + 1) & 0xFFFF);
            return;
        default:
            func_801477B4(arg1);
            arg0->actionFunc = func_80975720;
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return;
        }
    }
}

void func_809756D0(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u16 phi_a1;

    temp_v0 = gSaveContext.weekEventReg[34];
    phi_a1 = 0x910U;
    if ((temp_v0 & 8) != 0) {
        phi_a1 = 0x914U;
    } else {
        gSaveContext.weekEventReg[34] = temp_v0 | 8;
    }
    func_801518B0(arg1, phi_a1, arg0);
}

void func_80975720(EnSsh *this, GlobalContext *globalCtx) {
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 phi_v0;
    s16 phi_v0_2;
    s16 phi_v0_3;

    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_8097561C;
        func_809756D0((Actor *) this, globalCtx);
        return;
    }
    temp_v1 = this->unk_520;
    if (temp_v1 != 0) {
        if (temp_v1 == 0) {
            phi_v0 = 0;
        } else {
            this->unk_520 = temp_v1 - 1;
            phi_v0 = this->unk_520;
        }
        if (phi_v0 == 0) {
            func_80974374((Actor *) this, 2);
        }
    }
    temp_v1_2 = this->unk_52C;
    if (temp_v1_2 != 0) {
        if (temp_v1_2 == 0) {
            phi_v0_2 = 0;
        } else {
            this->unk_52C = temp_v1_2 - 1;
            phi_v0_2 = this->unk_52C;
        }
        if (phi_v0_2 == 0) {
            func_80974374((Actor *) this, 2);
        }
    }
    if (func_80974A24(this, globalCtx) == 0) {
        func_809744C8((Actor *) this);
        EnSsh_SetupAction(this, func_80975A98);
        return;
    }
    temp_v1_3 = this->unk_528;
    if (temp_v1_3 == 0) {
        phi_v0_3 = 0;
    } else {
        this->unk_528 = temp_v1_3 - 1;
        phi_v0_3 = this->unk_528;
    }
    if (phi_v0_3 == 0) {
        Audio_PlayActorSound2((Actor *) this, 0x386AU);
        this->unk_528 = 0x40;
    }
    func_809749B8(this, globalCtx);
    if ((this->unk_520 == 0) && (this->unk_52C == 0) && (this->actor.xzDistToPlayer < 100.0f) && (Actor_IsLinkFacingActor((Actor *) this, 0x3000, globalCtx) != 0)) {
        func_800B8614((Actor *) this, globalCtx, 100.0f);
    }
}

void func_809758B0(EnSsh *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v1;
    s16 phi_v1_2;

    temp_v0 = this->unk_520;
    if (temp_v0 != 0) {
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            this->unk_520 = temp_v0 - 1;
            phi_v1 = this->unk_520;
        }
        if (phi_v1 == 0) {
            func_80974374((Actor *) this, 2);
        }
    }
    temp_v0_2 = this->unk_52C;
    if (temp_v0_2 != 0) {
        if (temp_v0_2 == 0) {
            phi_v1_2 = 0;
        } else {
            this->unk_52C = temp_v0_2 - 1;
            phi_v1_2 = this->unk_52C;
        }
        if (phi_v1_2 == 0) {
            func_80974374((Actor *) this, 2);
        }
    }
    if ((this->actor.floorHeight + this->unk_538) <= this->actor.world.pos.y) {
        EnSsh_SetupAction(this, func_80975720);
        return;
    }
    Math_SmoothStepToF(&this->actor.velocity.y, 2.0f, 0.6f, 1000.0f, 0.0f);
}

void func_80975998(EnSsh *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v1;
    s16 phi_v1_2;

    temp_v0 = this->unk_520;
    if (temp_v0 != 0) {
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            this->unk_520 = temp_v0 - 1;
            phi_v1 = this->unk_520;
        }
        if (phi_v1 == 0) {
            func_80974374((Actor *) this, 4);
        }
    }
    if (func_80974A24(this, globalCtx) == 0) {
        func_809744C8((Actor *) this);
        EnSsh_SetupAction(this, func_80975A98);
        return;
    }
    if (func_80974B44(this) != 0) {
        func_80973EFC(this, globalCtx);
        func_809744FC(this);
        EnSsh_SetupAction(this, func_809758B0);
        return;
    }
    temp_v0_2 = this->unk_528;
    if (temp_v0_2 == 0) {
        phi_v1_2 = 0;
    } else {
        this->unk_528 = temp_v0_2 - 1;
        phi_v1_2 = this->unk_528;
    }
    if (phi_v1_2 == 0) {
        Audio_PlayActorSound2((Actor *) this, 0x3868U);
        this->unk_528 = 3;
    }
}

void func_80975A98(EnSsh *this, GlobalContext *globalCtx) {
    f32 sp24;

    sp24 = this->unk_144.animCurrentFrame / (this->unk_144.totalFrames - 1.0f);
    if (sp24 == 1.0f) {
        func_809744C8((Actor *) this);
    }
    if (func_80974A24(this, globalCtx) != 0) {
        func_80974540(this);
        EnSsh_SetupAction(this, func_80975998);
        return;
    }
    if (func_80974B0C(this) != 0) {
        func_809744A8(this);
        EnSsh_SetupAction(this, func_809755C0);
        return;
    }
    this->actor.velocity.y = 4.0f * sp24;
}

void func_80975B6C(EnSsh *arg0) {
    u16 temp_t3;
    u16 temp_t9;
    u16 temp_v0;

    temp_v0 = arg0->unk_5C2;
    if ((temp_v0 & 0x10) != 0) {
        temp_t9 = temp_v0 & 0xFFEF;
        if (arg0->unk_522 == 0) {
            arg0->unk_5C2 = temp_t9;
            if ((temp_t9 & 0x20) == 0) {
                func_809745BC((Actor *)0x3F000000, 1.0f);
                return;
            }
            func_809745BC((Actor *)0x3F400000, 1.0f);
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    temp_t3 = temp_v0 | 0x10;
    if (arg0->unk_522 != 0) {
        arg0->unk_5C2 = temp_t3;
        if ((temp_t3 & 0x20) == 0) {
            func_809745BC((Actor *)0x3F000000, 2.0f);
            return;
        }
        func_809745BC((Actor *)0x3F400000, 2.0f);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_80975C14(EnSsh *this, GlobalContext *globalCtx) {
    if (func_80974B44(this) == 0) {
        EnSsh_SetupAction(this, func_809755C0);
        func_809755C0(this, globalCtx);
        return;
    }
    func_809744FC(this);
    this->unk_5C2 |= 4;
    EnSsh_SetupAction(this, func_809758B0);
    func_809758B0(this, globalCtx);
}

void EnSsh_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v1;
    s16 phi_v0;
    s16 phi_v1;
    EnSsh *this = (EnSsh *) thisx;

    func_80975B6C(this);
    if (func_80974F78((Actor *) this, globalCtx) == 0) {
        if (this->unk_52A != 0) {
            func_80974730((Actor *) this);
        } else {
            SkelAnime_FrameUpdateMatrix(&this->unk_144);
            Actor_ApplyMovement((Actor *) this);
            Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
            this->actionFunc(this, globalCtx);
        }
        func_8097497C(this, globalCtx);
        temp_v1 = this->unk_5C8;
        if (temp_v1 == 0) {
            phi_v0 = 0;
        } else {
            this->unk_5C8 = temp_v1 - 1;
            phi_v0 = this->unk_5C8;
        }
        phi_v1 = this->unk_5C8;
        if (phi_v0 == 0) {
            this->unk_5C8 = Rand_S16Offset(0x3C, 0x3C);
            phi_v1 = this->unk_5C8;
        }
        this->unk_5C6 = phi_v1;
        if ((s32) this->unk_5C6 >= 3) {
            this->unk_5C6 = 0;
        }
        func_80975300((Actor *) this, globalCtx);
        Actor_SetHeight((Actor *) this, 0.0f);
    }
}

s32 func_80975DBC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    s16 temp_v0;

    if (arg1 != 1) {
        if (arg1 != 4) {
            if (arg1 != 5) {
                if (arg1 != 8) {

                } else if ((arg5[245].z & 0x20) != 0) {
                    *arg2 = &D_06005F78;
                }
            } else if ((arg5[245].z & 0x20) != 0) {
                *arg2 = &D_06005210;
            }
        } else if ((arg5[245].z & 0x20) != 0) {
            *arg2 = &D_06005850;
        }
    } else {
        temp_v0 = arg5[219].x;
        if ((temp_v0 != 0) && (arg5[221].x == 0)) {
            if ((s32) temp_v0 >= 2) {
                func_80974118(arg5);
            } else {
                func_80974220(arg5);
            }
        }
    }
    return 0;
}

void func_80975EB8(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    void *temp_a0;
    void *temp_v1;

    if ((arg1 == 5) && ((arg4[4].colChkInfo.cylHeight & 0x20) != 0)) {
        temp_a0 = *arg0;
        temp_v1 = temp_a0->unk_2B0;
        temp_a0->unk_2B0 = (void *) (temp_v1 + 8);
        temp_v1->unk_4 = &D_060000D8;
        temp_v1->unk_0 = 0xDE000000;
    }
    Collider_UpdateSpheres(arg1, arg4 + 0x4BC);
}

void EnSsh_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp2C;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    s32 temp_a0_2;
    EnSsh *this = (EnSsh *) thisx;

    func_80974CC8(this, globalCtx);
    func_80974B84(this);
    temp_a0 = globalCtx->state.gfxCtx;
    sp2C = temp_a0;
    func_8012C28C(temp_a0);
    temp_v1 = sp2C->polyOpa.p;
    sp2C->polyOpa.p = &temp_v1[1];
    temp_v1->words.w0 = 0xDB060020;
    temp_a0_2 = *(&D_80976178 + (this->unk_5C6 * 4));
    temp_v1->words.w1 = (temp_a0_2 & 0xFFFFFF) + gSegments[(u32) (temp_a0_2 * 0x10) >> 0x1C] + 0x80000000;
    SkelAnime_Draw(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, func_80975DBC, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80975EB8, (Actor *) this);
}
