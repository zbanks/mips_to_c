typedef struct EnGeg {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x15C */ f32 unk15C;                         /* overlap; inferred */
    /* 0x160 */ char pad160[0x28];                  /* maybe part of unk15C[11]? */
    /* 0x188 */ void (*actionFunc)(EnGeg *, GlobalContext *);
    /* 0x18C */ ColliderCylinder unk18C;            /* inferred */
    /* 0x1D8 */ ColliderCylinder unk1D8;            /* inferred */
    /* 0x224 */ char pad224[0xC];
    /* 0x230 */ u16 unk230;                         /* inferred */
    /* 0x232 */ s16 unk232;                         /* inferred */
    /* 0x234 */ char pad234[0x4];                   /* maybe part of unk232[3]? */
    /* 0x238 */ s16 unk238;                         /* inferred */
    /* 0x23A */ char pad23A[0xA];                   /* maybe part of unk238[6]? */
    /* 0x244 */ s16 unk244;                         /* inferred */
    /* 0x246 */ char pad246[0x2];
    /* 0x248 */ s32 unk248;                         /* inferred */
    /* 0x24C */ Vec3s unk24C;                       /* inferred */
    /* 0x252 */ char pad252[0x66];                  /* maybe part of unk24C[18]? */
    /* 0x2B8 */ Vec3s unk2B8;                       /* inferred */
    /* 0x2BE */ char pad2BE[0x1D8];                 /* maybe part of unk2B8[79]? */
    /* 0x496 */ u16 unk496;                         /* inferred */
    /* 0x498 */ s16 unk498;                         /* inferred */
    /* 0x49A */ s16 unk49A;                         /* inferred */
    /* 0x49C */ s16 unk49C;                         /* inferred */
    /* 0x49E */ s16 unk49E;                         /* inferred */
    /* 0x4A0 */ s16 unk4A0;                         /* inferred */
    /* 0x4A2 */ s16 unk4A2;                         /* inferred */
    /* 0x4A4 */ s16 unk4A4;                         /* inferred */
    /* 0x4A6 */ s16 unk4A6;                         /* inferred */
    /* 0x4A8 */ s16 unk4A8;                         /* inferred */
    /* 0x4AA */ s16 unk4AA;                         /* inferred */
    /* 0x4AC */ s32 unk4AC;                         /* inferred */
    /* 0x4B0 */ char pad4B0[0x4];
    /* 0x4B4 */ Vec3f unk4B4;                       /* inferred */
    /* 0x4C0 */ char pad4C0[0x18];                  /* maybe part of unk4B4[3]? */
    /* 0x4D8 */ s16 unk4D8;                         /* inferred */
    /* 0x4DA */ char pad4DA[0x2];
    /* 0x4DC */ s32 unk4DC;                         /* inferred */
    /* 0x4E0 */ s16 unk4E0;                         /* inferred */
    /* 0x4E2 */ char pad4E2[0x2];
    /* 0x4E4 */ Vec3f unk4E4;                       /* inferred */
} EnGeg;                                            /* size = 0x4F0 */

struct _mips2c_stack_EnGeg_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnGeg_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnGeg_Init {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad34[0x14];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnGeg_Update {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BB16D0 {};              /* size 0x0 */

struct _mips2c_stack_func_80BB178C {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BB18FC {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ Vec3f *sp18;                         /* inferred */
    /* 0x1C */ Vec3f *sp1C;                         /* inferred */
    /* 0x20 */ char pad20[0x4];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BB19C0 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ s16 sp30;                            /* inferred */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80BB1B14 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BB1C1C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BB1C8C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BB1D04 {};              /* size 0x0 */

struct _mips2c_stack_func_80BB1D64 {
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

struct _mips2c_stack_func_80BB1FCC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BB2020 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BB2088 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BB217C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BB221C {
    /* 0x00 */ char pad0[0x27];
    /* 0x27 */ u8 sp27;                             /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BB2520 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BB26EC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BB27D4 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BB2944 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ s16 sp24;                            /* inferred */
    /* 0x26 */ char pad26[0x1];
    /* 0x27 */ u8 sp27;                             /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BB2A54 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BB2B1C {
    /* 0x00 */ char pad0[0x68];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad6C[0x8];                     /* maybe part of sp68[3]? */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80BB2E00 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ s16 sp2C;                            /* inferred */
    /* 0x2E */ s16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BB2F7C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BB30B4 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BB31B8 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BB32AC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BB3318 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ char pad34[0xC];                     /* maybe part of sp30[4]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad44[0x2];
    /* 0x46 */ s16 sp46;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80BB347C {};              /* size 0x0 */

struct _mips2c_stack_func_80BB3728 {
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

struct _mips2c_stack_func_80BB3860 {};              /* size 0x0 */

struct _mips2c_stack_func_80BB387C {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80BB39F8 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BB3BE0 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ GraphicsContext *sp38;               /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BB3CB4 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

? func_800AEF44(void *);                            /* extern */
? func_8019F4AC(Vec3f *, ?);                        /* extern */
? func_8019F570(Vec3f *, ?);                        /* extern */
u16 func_80BB16D0(EnGeg *arg0);                     /* static */
void func_80BB178C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BB18FC(EnGeg *arg0, Actor *arg1);        /* static */
void func_80BB19C0(Vec3f *arg0, EnGeg *arg1, GlobalContext *arg2); /* static */
s32 func_80BB1B14(EnGeg *arg0, GlobalContext *arg1); /* static */
void func_80BB1C1C(EnGeg *arg0);                    /* static */
void func_80BB1C8C(EnGeg *arg0);                    /* static */
void func_80BB1D04(EnGeg *arg0);                    /* static */
? func_80BB1D64(Actor *arg0, GlobalContext *arg1);  /* static */
void func_80BB1FCC(EnGeg *arg0, GlobalContext *arg1); /* static */
void func_80BB2020(EnGeg *arg0, GlobalContext *arg1); /* static */
? func_80BB2088(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80BB3728(s16 arg0, s16 arg1, void *arg2, s16 *arg3, s32 arg4, s32 arg5); /* static */
s32 func_80BB3860(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_80BB387C(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80BB39F8(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
void func_80BB3BE0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BB3CB4(void *arg0, void *arg1);         /* static */
extern ? D_06004DB0;
extern ? D_060091A8;
extern FlexSkeletonHeader D_06011AC8;
extern AnimationHeader D_06012DE0;
static ColliderSphereInit D_80BB3E70 = {
    {0xA, 0x11, 9, 0x39, 0x10, 4},
    {0, {0x20000000, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0, {{0, 0, 0}, 0}, 0x64},
};
static ColliderCylinderInit D_80BB3E9C = {
    {1, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0, 0, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80BB3EC8 = {0, 0, 0, 0, 0xFF};
static DamageTable D_80BB3ED4 = {
    {
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
    },
};
static ActorAnimationEntryS D_80BB3EF4[21] = {
    {(AnimationHeader *)0x6011D98, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6011D98, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6012DE0, 2.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6012DE0, 2.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6012DE0, -2.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6003E28, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6003E28, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60039D8, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x60016C8, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6004DD4, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600283C, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6007764, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6005EE0, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6002C48, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60031D8, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6005790, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6003650, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6002704, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6003378, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60135E8, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6014CE0, 1.0f, 0, 0xFFFF, 0, 0},
};
static ? D_80BB4044;                                /* unable to generate initializer */
static ? D_80BB405C;                                /* unable to generate initializer */
static ? D_80BB4064;                                /* unable to generate initializer */
static ? D_80BB4070;                                /* unable to generate initializer */
static Vec3f D_80BB407C = {-1500.0f, 1500.0f, 0.0f};
static ? D_80BB4088;                                /* unable to generate initializer */

u16 func_80BB16D0(EnGeg *arg0) {
    u16 temp_t6;

    temp_t6 = arg0->unk496;
    switch (temp_t6) {
    case 3422:
        return 0xD5FU;
    case 3423:
        return 0xD60U;
    case 3424:
        return 0xD61U;
    case 3426:
        return 0xD63U;
    case 3428:
        return 0xD65U;
    case 3430:
        return 0xD67U;
    case 3431:
        return 0xD68U;
    case 3432:
        return 0xD69U;
    case 3434:
        return 0xD6BU;
    case 3435:
        return 0xD6CU;
    case 3436:
        return 0xD6DU;
    case 3438:
        return 0xD6FU;
    case 3440:
        return 0xD71U;
    case 3441:
        return 0xD72U;
    case 3443:
        return 0xD74U;
    case 3444:
        return 0xD75U;
    case 3465:
        return 0xD8AU;
    default:
        return 0U;
    }
}

void func_80BB178C(Actor *arg0, GlobalContext *arg1) {
    f32 sp34;
    CollisionCheckContext *temp_a1;
    GlobalContext *temp_a0;
    Collider *phi_a2;

    temp_a0 = arg1;
    sp34.unk0 = arg0->world.pos.x;
    sp34.unk4 = (s32) arg0->world.pos.y;
    sp34.unk8 = (s32) arg0->world.pos.z;
    if ((arg0->unk230 & 1) != 0) {
        arg0->unk220 = (s16) (s32) sp34;
        arg0->unk222 = (s16) (s32) sp38;
        arg0->unk222 = (s16) (arg0->unk222 + (s32) arg0->shape.yOffset);
        arg0->unk21E = 0x14;
        arg0->unk224 = (s16) (s32) sp3C;
        arg0->unk226 = (s16) (s32) ((f32) arg0->unk21E * arg0->unk228);
        phi_a2 = arg0 + 0x1D8;
    } else {
        arg0->unk1D2 = (s16) (s32) sp34;
        arg0->unk1D4 = (s16) (s32) sp38;
        arg0->unk1CC = (s16) (s32) 24.0f;
        arg0->unk1CE = (s16) (s32) 62.0f;
        arg0->unk1D6 = (s16) (s32) sp3C;
        phi_a2 = arg0 + 0x18C;
    }
    if (phi_a2 != 0) {
        temp_a1 = arg1 + 0x18884;
        arg1 = arg1;
        CollisionCheck_SetOC(temp_a0, temp_a1, phi_a2);
        Actor_UpdateBgCheckInfo(arg1, arg0, 30.0f, 12.0f, 0.0f, 5U);
    }
}

s32 func_80BB18FC(EnGeg *arg0, Actor *arg1) {
    f32 sp24;
    Vec3f *sp1C;
    Vec3f *sp18;
    Vec3f *temp_a0;
    Vec3f *temp_a1;

    temp_a0 = arg0 + 0x24;
    temp_a1 = arg1 + 0x24;
    if (((arg1->bgCheckFlags & 1) != 0) && (sp1C = temp_a0, sp18 = temp_a1, arg1 = arg1, arg0 = arg0, sp24 = Math_Vec3f_DistXZ(temp_a0, temp_a1), (sp24 < 150.0f)) && (fabsf(Math_Vec3f_DiffY(temp_a0, temp_a1)) < 5.0f)) {
        arg0->unk230 |= 0x20;
        arg1->speedXZ = 0.0f;
        arg1->velocity.y = 0.0f;
        arg0->actor.child = arg1;
        arg1->parent = arg0;
        return 1;
    }
    return 0;
}

void func_80BB19C0(Vec3f *arg0, EnGeg *arg1, GlobalContext *arg2) {
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    s16 sp32;
    s16 sp30;
    f32 sp2C;
    Vec3f *sp24;
    Vec3f *temp_a0_2;
    f32 temp_f4;
    s16 temp_a0;
    s16 temp_a0_3;
    void *temp_s0;

    temp_s0 = arg2->actorCtx.actorList[2].first;
    temp_a0 = temp_s0->world.rot.y + 0x4000;
    sp32 = temp_a0;
    sp40 = (Math_SinS(temp_a0) * 50.0f) + temp_s0->world.pos.x;
    sp44 = temp_s0->world.pos.y;
    temp_f4 = Math_CosS(temp_a0) * 50.0f;
    temp_a0_2 = arg1 + 0x24;
    sp24 = temp_a0_2;
    sp48 = temp_f4 + temp_s0->world.pos.z;
    sp2C = Math_Vec3f_DistXZ(temp_a0_2, (Vec3f *) &sp40);
    temp_a0_3 = temp_s0->world.rot.y - 0x4000;
    sp30 = temp_a0_3;
    sp34 = (Math_SinS(temp_a0_3) * 50.0f) + temp_s0->world.pos.x;
    sp38 = temp_s0->world.pos.y;
    sp3C = (Math_CosS(temp_a0_3) * 50.0f) + temp_s0->world.pos.z;
    if (Math_Vec3f_DistXZ(temp_a0_2, (Vec3f *) &sp34) < sp2C) {
        arg0->x = sp40.unk0;
        arg0->y = sp40.unk4;
        arg0->z = sp40.unk8;
        return;
    }
    arg0->x = sp34.unk0;
    arg0->y = sp34.unk4;
    arg0->z = sp34.unk8;
}

s32 func_80BB1B14(EnGeg *arg0, GlobalContext *arg1) {
    Actor *temp_s0;
    Actor *temp_s0_2;
    Actor *temp_v0;
    Actor *phi_s0;

    temp_v0 = func_ActorCategoryIterateById(arg1, NULL, 7, 0xB9);
    if ((temp_v0 != 0) && (arg0->unk4B0 = Math_Vec3f_Yaw(arg0 + 0x24, (Vec3f *) &temp_v0->world), (func_80BB18FC(arg0, temp_v0) != 0))) {
        return 1;
    }
    temp_s0 = arg1->actorCtx.actorList[3].first;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
loop_4:
        if ((phi_s0->id == 9) && (func_80BB18FC(arg0, phi_s0) != 0)) {
            arg0->unk4B0 = Math_Vec3f_Yaw(arg0 + 0x24, (Vec3f *) &phi_s0->world);
            if ((arg0->unk230 & 0x200) != 0) {
                return 0;
            }
            if (phi_s0->unk1F9 == 0) {
                return 2;
            }
            return 3;
        }
        temp_s0_2 = phi_s0->next;
        phi_s0 = temp_s0_2;
        if (temp_s0_2 == 0) {
            goto block_12;
        }
        goto loop_4;
    }
block_12:
    arg0->unk230 &= 0xFDFF;
    return 0;
}

void func_80BB1C1C(EnGeg *arg0) {
    s32 temp_s0;
    s32 phi_s1;
    s32 phi_s0;

    arg0->unk49C = (s16) arg0->actor.cutscene;
    phi_s1 = 1;
    phi_s0 = 1;
    do {
        temp_s0 = (phi_s0 + 1) & 0xFFFF;
        (arg0 + (phi_s0 * 2))->unk49C = ActorCutscene_GetAdditionalCutscene((arg0 + (phi_s1 * 2))->unk49A);
        phi_s1 = temp_s0;
        phi_s0 = temp_s0;
    } while (temp_s0 < 8);
}

void func_80BB1C8C(EnGeg *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk240;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk240 = temp_v0 - 1;
        phi_v1 = arg0->unk240;
    }
    if (phi_v1 == 0) {
        arg0->unk23E += 1;
        if ((s32) arg0->unk23E >= 3) {
            arg0 = arg0;
            arg0->unk240 = Rand_S16Offset(0x1E, 0x1E);
            arg0->unk23E = 0;
        }
    }
}

void func_80BB1D04(EnGeg *arg0) {
    f32 phi_f0;

    if ((arg0->unk230 & 1) != 0) {
        phi_f0 = arg0->actor.shape.yOffset;
    } else {
        phi_f0 = 58.0f;
    }
    arg0->actor.focus.pos.y = arg0->actor.world.pos.y + phi_f0;
    arg0->actor.focus.pos.x = arg0->actor.world.pos.x;
    arg0->actor.focus.pos.z = arg0->actor.world.pos.z;
    arg0->actor.focus.rot.x = arg0->actor.world.rot.x;
    arg0->actor.focus.rot.y = arg0->actor.world.rot.y;
    arg0->actor.focus.rot.z = arg0->actor.world.rot.z;
}

? func_80BB1D64(Actor *arg0, GlobalContext *arg1) {
    void *sp4C;
    f32 sp44;
    ? sp40;
    f32 sp38;
    ? sp34;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    void *temp_t0;
    s16 phi_v0;
    s16 phi_v0_2;
    s16 phi_v0_3;
    s16 phi_v0_4;

    temp_t0 = arg1->actorCtx.actorList[2].first;
    sp4C = temp_t0;
    Math_SmoothStepToS(arg0 + 0x46A, (s16) ((arg0->yawTowardsPlayer - arg0->unk46E) - arg0->shape.rot.y), 4, 0x2AA8, (s16) 1);
    temp_v1 = arg0->unk46A;
    if ((s32) temp_v1 < -0x1FFE) {
        arg0->unk46A = -0x1FFE;
    } else {
        phi_v0 = temp_v1;
        if ((s32) temp_v1 >= 0x1FFF) {
            phi_v0 = 0x1FFE;
        }
        arg0->unk46A = phi_v0;
    }
    sp4C = temp_t0;
    Math_SmoothStepToS(arg0 + 0x46E, (s16) ((arg0->yawTowardsPlayer - arg0->unk46A) - arg0->shape.rot.y), 4, 0x2AA8, (s16) 1);
    temp_v1_2 = arg0->unk46E;
    if ((s32) temp_v1_2 < -0x1C70) {
        arg0->unk46E = -0x1C70;
    } else {
        phi_v0_2 = temp_v1_2;
        if ((s32) temp_v1_2 >= 0x1C71) {
            phi_v0_2 = 0x1C70;
        }
        arg0->unk46E = phi_v0_2;
    }
    if ((arg0->unk230 & 0x20) != 0) {
        sp40.unk0 = (s32) temp_t0->world.pos.x;
        sp40.unk4 = (s32) temp_t0->world.pos.y;
        sp40.unk8 = (s32) temp_t0->world.pos.z;
    } else {
        sp40.unk0 = (f32) temp_t0->world.pos.x;
        sp40.unk4 = (f32) temp_t0->world.pos.y;
        sp40.unk8 = (f32) temp_t0->world.pos.z;
        sp44 = temp_t0->unkC44 + 3.0f;
    }
    sp34.unk0 = (s32) arg0->world.pos.x;
    sp34.unk4 = (s32) arg0->world.pos.y;
    sp34.unk8 = (s32) arg0->world.pos.z;
    sp38 += 70.0f;
    Math_SmoothStepToS(arg0 + 0x468, (s16) (Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40) - arg0->unk46C), 4, 0x2AA8, (s16) 1);
    temp_v1_3 = arg0->unk468;
    if ((s32) temp_v1_3 < -0x1C70) {
        arg0->unk468 = -0x1C70;
    } else {
        phi_v0_3 = temp_v1_3;
        if ((s32) temp_v1_3 >= 0x1C71) {
            phi_v0_3 = 0x1C70;
        }
        arg0->unk468 = phi_v0_3;
    }
    Math_SmoothStepToS(arg0 + 0x46C, (s16) (Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40) - arg0->unk468), 4, 0x2AA8, (s16) 1);
    temp_v1_4 = arg0->unk46C;
    if ((s32) temp_v1_4 < -0x1C70) {
        arg0->unk46C = -0x1C70;
    } else {
        phi_v0_4 = temp_v1_4;
        if ((s32) temp_v1_4 >= 0x1C71) {
            phi_v0_4 = 0x1C70;
        }
        arg0->unk46C = phi_v0_4;
    }
    return 1;
}

void func_80BB1FCC(EnGeg *arg0, GlobalContext *arg1) {
    *(gSegments + 0x18) = (arg1 + (arg0->unk248 * 0x44))->unk17D98 + 0x80000000;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
}

void func_80BB2020(EnGeg *arg0, GlobalContext *arg1) {
    *(gSegments + 0x18) = (arg1 + (arg0->unk248 * 0x44))->unk17D98 + 0x80000000;
    func_8013BC6C(arg0 + 0x144, D_80BB3EF4, arg0->unk4AC);
}

? func_80BB2088(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 temp_v0_2;
    s16 phi_v1;

    temp_v0 = arg0->unk242;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk242 = (s16) (temp_v0 - 1);
        phi_v1 = arg0->unk242;
    }
    if (phi_v1 != 0) {
        arg0->unk468 = 0;
        arg0->unk46A = 0;
        arg0->unk230 = (u16) (arg0->unk230 & 0xFFFD);
        arg0->unk46C = 0;
        arg0->unk46E = 0;
        return 1;
    }
    if ((Actor_IsActorFacingLinkAndWithinRange(arg0, 300.0f, 0x7FF8) != 0) && ((temp_v0_2 = arg0->unk4AC, (temp_v0_2 == 5)) || ((temp_v0_2 == 0xD) && (arg0->unk496 == 0xD69)))) {
        arg0->unk230 = (u16) (arg0->unk230 | 2);
        func_80BB1D64(arg0, arg1);
    } else {
        if ((arg0->unk230 & 2) != 0) {
            arg0->unk242 = 0x14;
        }
        arg0->unk230 = (u16) (arg0->unk230 & 0xFFFD);
        arg0->unk468 = 0;
        arg0->unk46A = 0;
        arg0->unk46C = 0;
        arg0->unk46E = 0;
    }
    return 1;
}

void func_80BB217C(EnGeg *this, GlobalContext *globalCtx) {
    if (Object_IsLoaded(&globalCtx->objectCtx, this->unk248) != 0) {
        this->unk4AC = 5;
        func_80BB2020(this, globalCtx);
        Actor_SetScale((Actor *) this, 0.01f);
        this->unk230 = 0;
        this->actor.shape.shadowScale = 20.0f;
        this->actor.gravity = -1.0f;
        func_80BB1C1C(this);
        this->actionFunc = func_80BB221C;
        this->actor.targetMode = 3;
    }
}

void func_80BB221C(EnGeg *this, GlobalContext *globalCtx) {
    u8 sp27;
    GlobalContext *temp_a1;
    GlobalContext *temp_a1_2;
    GlobalContext *temp_a1_3;
    GlobalContext *temp_a1_4;
    s32 temp_v0;
    u16 temp_t7;
    u16 temp_v1;
    u8 temp_a2;

    temp_a1 = globalCtx;
    globalCtx = globalCtx;
    temp_v0 = func_80BB1B14(this, temp_a1);
    temp_a2 = temp_v0 & 0xFF;
    if (temp_v0 != 0) {
        temp_a1_2 = globalCtx;
        this->unk230 &= 0xFFF7;
        globalCtx = globalCtx;
        sp27 = temp_a2;
        if ((func_800B84D0((Actor *) this, temp_a1_2) != 0) && (temp_v1 = this->unk230, ((temp_v1 & 4) != 0))) {
            if (temp_a2 == 1) {
                this->unk496 = 0xD66;
                this->unk49A = this->unk4A2;
            } else if (temp_a2 == 2) {
                this->unk496 = 0xD64;
                this->unk230 = temp_v1 & 0xFFFB;
                this->unk49A = this->unk4A0;
            } else {
                temp_t7 = temp_v1 | 0x200;
                if (temp_a2 == 3) {
                    this->unk230 = temp_t7;
                    this->unk496 = 0xD64;
                    this->unk230 = temp_t7 & 0xFFFB;
                    this->unk49A = this->unk4A0;
                }
            }
            func_801518B0(globalCtx, this->unk496, (Actor *) this);
            this->actionFunc = func_80BB2520;
            this->actor.flags &= 0xFFFEFFFF;
            return;
        }
        if (this->actor.xzDistToPlayer < 300.0f) {
            this->unk230 |= 4;
            this->actor.flags |= 0x10000;
            func_800B8614((Actor *) this, globalCtx, 300.0f);
            return;
        }
        /* Duplicate return node #24. Try simplifying control flow for better match */
        return;
    }
    this->unk230 &= 0xFFFB;
    temp_a1_3 = globalCtx;
    if ((gSaveContext.weekEventReg[35] & 0x40) != 0) {
        temp_a1_4 = globalCtx;
        globalCtx = globalCtx;
        if ((func_800B84D0((Actor *) this, temp_a1_4) != 0) && ((this->unk230 & 8) != 0)) {
            this->unk496 = 0xD62;
            func_801518B0(globalCtx, 0xD62U & 0xFFFF, (Actor *) this);
            this->unk230 &= 0xFFF7;
            this->actionFunc = func_80BB27D4;
            return;
        }
        if ((this->actor.xzDistToPlayer < 300.0f) && (this->actor.isTargeted != 0)) {
            func_800B8614((Actor *) this, globalCtx, 300.0f);
            this->unk230 |= 8;
            return;
        }
        /* Duplicate return node #24. Try simplifying control flow for better match */
        return;
    }
    globalCtx = globalCtx;
    if ((func_800B84D0((Actor *) this, temp_a1_3) != 0) && ((this->unk230 & 8) != 0)) {
        gSaveContext.weekEventReg[35] |= 0x40;
        this->unk496 = 0xD5E;
        this->unk49A = this->unk49C;
        func_801518B0(globalCtx, 0xD5EU & 0xFFFF, (Actor *) this);
        this->actionFunc = func_80BB2520;
        this->unk230 &= 0xFFF7;
        this->actor.flags &= 0xFFFEFFFF;
        return;
    }
    if (this->actor.xzDistToPlayer < 300.0f) {
        this->actor.flags |= 0x10000;
        func_800B8614((Actor *) this, globalCtx, 300.0f);
        this->unk230 |= 8;
    }
}

void func_80BB2520(EnGeg *this, GlobalContext *globalCtx) {
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_t3;

    if ((this->unk230 & 0x10) != 0) {
        ActorCutscene_Stop(this->unk498);
        this->unk230 &= 0xFFEF;
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        this->unk498 = this->unk49A;
        ActorCutscene_SetIntentToPlay(this->unk498);
        return;
    }
    if (ActorCutscene_GetCanPlayNext(this->unk498) != 0) {
        ActorCutscene_StartAndSetFlag(this->unk498, (Actor *) this);
        temp_t3 = this->unk496;
        this->unk230 |= 0x10;
        switch (temp_t3) {
        case 3422:
        case 3423:
            this->actionFunc = func_80BB26EC;
            return;
        case 3428:
            this->unk230 &= 0xFFDF;
            this->actionFunc = func_80BB2A54;
            return;
        case 3430:
            temp_v0 = Object_GetIndex(&globalCtx->objectCtx, 0xA1);
            this->unk248 = temp_v0;
            if (temp_v0 >= 0) {
                this->unk4AC = 0x13;
                func_80BB2020(this, globalCtx);
            }
            this->unk230 |= 0x20;
            this->actionFunc = func_80BB2944;
            return;
        case 3431:
            this->actionFunc = func_80BB2B1C;
            this->unk498 = this->unk4A6;
            return;
        case 3433:
        case 3442:
        case 3445:
        case 3467:
            temp_v0_2 = Object_GetIndex(&globalCtx->objectCtx, 0xA1);
            this->unk248 = temp_v0_2;
            if (temp_v0_2 >= 0) {
                this->unk4AC = 4;
                func_80BB2020(this, globalCtx);
            }
            this->actionFunc = func_80BB2E00;
            return;
        }
    } else {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        this->unk498 = this->unk49A;
        ActorCutscene_SetIntentToPlay(this->unk498);
    default:
    }
}

void func_80BB26EC(EnGeg *this, GlobalContext *globalCtx) {
    u16 temp_v0;
    u16 temp_v0_2;

    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        temp_v0 = this->unk496;
        if (temp_v0 != 0xD5E) {
            if (temp_v0 != 0xD61) {
                goto block_7;
            }
            ActorCutscene_Stop(this->unk498);
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
            this->unk230 &= 0xFFEF;
            this->actionFunc = func_80BB221C;
            return;
        }
        this->actionFunc = func_80BB2520;
        this->unk49A = this->unk49E;
block_7:
        temp_v0_2 = func_80BB16D0(this);
        this->unk496 = temp_v0_2;
        func_801518B0(globalCtx, temp_v0_2 & 0xFFFF, (Actor *) this);
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_80BB27D4(EnGeg *this, GlobalContext *globalCtx) {
    u16 temp_t6;
    u16 temp_v0;

    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        temp_t6 = this->unk496;
        switch (temp_t6) {
        case 3427:
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
            this->actionFunc = func_80BB221C;
            return;
        case 3433:
            this->unk49A = this->unk4A8;
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
            this->actionFunc = func_80BB2520;
            return;
        case 3437:
        case 3439:
        case 3466:
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
            this->actionFunc = func_80BB31B8;
            return;
        case 3442:
        case 3445:
        case 3467:
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
            this->unk230 &= 0xFFEF;
            this->actionFunc = func_80BB2520;
            this->unk49A = this->unk4AA;
            return;
        default:
            temp_v0 = func_80BB16D0(this);
            this->unk496 = temp_v0;
            func_801518B0(globalCtx, temp_v0 & 0xFFFF, (Actor *) this);
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return;
        }
    }
}

void func_80BB2944(EnGeg *this, GlobalContext *globalCtx) {
    u8 sp27;
    s16 sp24;
    u16 temp_v0;

    sp27 = func_80152498(&globalCtx->msgCtx);
    sp24 = (s16) (s32) this->unk15C;
    if (this->unk4AC == 0x13) {
        if (sp24 == SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80BB3EF4[this->unk4AC].animationSeg)) {
            this->unk4AC = 6;
            func_80BB2020(this, globalCtx);
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    if ((sp27 == 5) && (func_80147624(globalCtx) != 0)) {
        if (this->unk496 == 0xD67) {
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
            this->actionFunc = func_80BB2520;
            this->unk49A = this->unk4A4;
            return;
        }
        temp_v0 = func_80BB16D0(this);
        this->unk496 = temp_v0;
        func_80151938(globalCtx, temp_v0 & 0xFFFF);
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_80BB2A54(EnGeg *this, GlobalContext *globalCtx) {
    u16 temp_v0;

    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        if (this->unk496 == 0xD65) {
            ActorCutscene_Stop(this->unk498);
            this->unk230 &= 0xFFEF;
            this->unk244 = 0x41;
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
            this->actionFunc = func_80BB347C;
            return;
        }
        temp_v0 = func_80BB16D0(this);
        this->unk496 = temp_v0;
        func_801518B0(globalCtx, temp_v0 & 0xFFFF, (Actor *) this);
        /* Duplicate return node #5. Try simplifying control flow for better match */
    }
}

void func_80BB2B1C(EnGeg *this, GlobalContext *globalCtx) {
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp68;
    Actor *temp_a0;
    Actor *temp_a0_2;
    Actor *temp_a0_3;
    Actor *temp_a0_4;
    Actor *temp_t6;
    Actor *temp_t9;
    Vec3f *temp_s0_2;
    Vec3f *temp_s6;
    f32 temp_f0;
    f32 temp_f20;
    s16 temp_s0;
    s32 temp_v0;
    void *temp_v0_2;
    s16 phi_s0;

    temp_s6 = &this->unk4B4;
    temp_t6 = this->actor.child;
    temp_t6->world.pos.x = temp_s6->x;
    temp_t6->world.pos.y = temp_s6->y;
    temp_t6->world.pos.z = temp_s6->z;
    temp_t9 = this->actor.child;
    temp_t9->unkBC = (unaligned s32) this->unkBC;
    temp_t9->shape.rot.z = (s16) (u16) this->actor.shape.rot.z;
    if (ActorCutscene_GetCurrentIndex() != this->unk4A4) {
        if (ActorCutscene_GetCanPlayNext(this->unk498) != 0) {
            gSaveContext.weekEventReg[37] |= 8;
            temp_a0 = this->actor.child;
            if (temp_a0 != 0) {
                Actor_MarkForDeath(temp_a0);
            }
            this->unk230 |= 0x10;
            ActorCutscene_StartAndSetFlag(this->unk498, (Actor *) this);
            this->unk496 = 0xD68;
            func_80151938(globalCtx, 0xD68U & 0xFFFF);
            temp_v0 = Object_GetIndex(&globalCtx->objectCtx, 0x1D8);
            this->unk248 = temp_v0;
            if (temp_v0 >= 0) {
                this->unk4AC = 0xD;
                func_80BB2020(this, globalCtx);
            }
            this->actionFunc = func_80BB27D4;
        } else {
            if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                ActorCutscene_Stop(0x7C);
            }
            ActorCutscene_SetIntentToPlay(this->unk498);
        }
    } else {
        temp_f0 = (f32) this->unk4E0;
        temp_f20 = temp_f0 * 0.005f;
        sp68 = temp_f0 * 0.07f;
        sp74 = Rand_Centered() * temp_f20;
        sp78 = Rand_Centered() * temp_f20;
        sp7C = Rand_Centered() * temp_f20;
        temp_a0_2 = this->actor.child;
        temp_a0_2->scale.x *= 0.98f;
        temp_a0_3 = this->actor.child;
        temp_a0_3->scale.y *= 0.98f;
        temp_a0_4 = this->actor.child;
        temp_a0_4->scale.z *= 0.98f;
        if ((s32) this->unk4E0 >= 0x47) {
            phi_s0 = 0;
            do {
                temp_v0_2 = this + (phi_s0 * 0xC);
                temp_v0_2->unk4C0 = (f32) (temp_v0_2->unk4C0 * temp_f20);
                temp_v0_2->unk4C4 = (f32) (temp_v0_2->unk4C4 * temp_f20);
                temp_v0_2->unk4C8 = (f32) (temp_v0_2->unk4C8 * temp_f20);
                EffectSsHahen_Spawn(globalCtx, temp_s6, temp_v0_2 + 0x4C0, (Vec3f *) &sp74, (s16) 1, (s16) (s32) (s16) (s32) sp68, (s16) 1, (s16) 0xF, (Gfx *) &D_0406AB30);
                temp_s0 = phi_s0 + 1;
                phi_s0 = temp_s0;
            } while ((s32) temp_s0 < 2);
        }
        this->unk4E0 += -1;
    }
    temp_s0_2 = &this->actor.projectedPos;
    func_8019F570(temp_s0_2, 1);
    func_8019F4AC(temp_s0_2, 0x3205);
}

void func_80BB2E00(EnGeg *this, GlobalContext *globalCtx) {
    s16 sp2E;
    s16 sp2C;
    SkelAnime *sp28;
    SkelAnime *temp_a0;
    s16 temp_t0;
    s16 temp_v0;
    s32 temp_v1;

    sp2E = (s16) (s32) this->unk15C;
    temp_v0 = SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80BB3EF4[this->unk4AC].animationSeg);
    temp_v1 = this->unk4AC;
    if (temp_v1 == 2) {
        sp2C = temp_v0;
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 5, 0x1000, (s16) 0x100);
        temp_t0 = temp_v0;
        this->actor.world.rot.y = this->actor.shape.rot.y;
        if (sp2E == temp_t0) {
            ActorCutscene_Stop(this->unk498);
            this->unk4AC = 0x14;
            func_80BB2020(this, globalCtx);
            this->actionFunc = func_80BB30B4;
            return;
        }
        if (func_801378B8(&this->unk144, 24.0f) != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x3867U);
            return;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return;
    }
    temp_a0 = &this->unk144;
    if (temp_v1 == 4) {
        sp28 = temp_a0;
        if (func_801378B8(temp_a0, 0.0f) != 0) {
            this->unk230 |= 1;
            this->actor.shape.yOffset = 14.0f;
            if (this->unk496 == 0xD69) {
                func_80BB19C0(&this->unk4E4, this, globalCtx);
                this->actionFunc = func_80BB2F7C;
                return;
            }
            this->actionFunc = func_80BB3318;
            return;
        }
        if (func_801378B8(temp_a0, 24.0f) != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x38B1U);
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
    }
}

void func_80BB2F7C(EnGeg *this, GlobalContext *globalCtx) {
    u16 temp_v0;

    Math_SmoothStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw((Vec3f *) &this->actor.world, &this->unk4E4), 4, 0x3E8, (s16) 1);
    this->actor.shape.rot.y = this->actor.world.rot.y;
    if ((this->actor.xzDistToPlayer < 150.0f) && (fabsf(this->actor.yDistToPlayer) < 10.0f) && ((this->actor.bgCheckFlags & 1) != 0)) {
        this->unk4AC = 2;
        this->actor.speedXZ = 0.0f;
        this->unk230 &= 0xFFFE;
        this->actor.shape.yOffset = 0.0f;
        func_80BB2020(this, globalCtx);
        this->actionFunc = func_80BB2E00;
    } else {
        this->actor.speedXZ = 5.0f;
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        temp_v0 = this->unk230;
        if ((temp_v0 & 0x80) != 0) {
            func_800B9010((Actor *) this, 0x3203U);
            return;
        }
        this->unk230 = temp_v0 | 0x80;
        Audio_PlayActorSound2((Actor *) this, 0x387BU);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_80BB30B4(EnGeg *this, GlobalContext *globalCtx) {
    Actor *sp24;
    Actor *temp_t6;
    GlobalContext *temp_a0;
    GlobalContext *temp_a3;

    temp_a3 = globalCtx;
    temp_t6 = temp_a3->actorCtx.actorList[2].first;
    globalCtx = temp_a3;
    sp24 = temp_t6;
    if (func_800B84D0((Actor *) this, temp_a3) != 0) {
        temp_a0 = globalCtx;
        if (sp24->unk14B == 1) {
            this->unk496 = 0xD6A;
        } else {
            globalCtx = globalCtx;
            if (Player_GetMask(temp_a0) == 0xD) {
                this->unk496 = 0xD89;
            } else {
                this->unk496 = 0xD6E;
            }
        }
        func_801518B0(globalCtx, this->unk496, (Actor *) this);
        this->actionFunc = func_80BB27D4;
        this->actor.flags &= 0xFFFEFFFF;
        return;
    }
    if (this->actor.xzDistToPlayer < 150.0f) {
        this->actor.flags |= 0x10000;
        func_800B8614((Actor *) this, globalCtx, 150.0f);
    }
}

void func_80BB31B8(EnGeg *this, GlobalContext *globalCtx) {
    s32 sp2C;
    s32 phi_a2;

    phi_a2 = 0x88;
    if (gSaveContext.inventory.items[gItemSlots[0x42]] == 0x42) {
        if (Player_GetMask(globalCtx) == 0xD) {
            this->unk496 = 0xD8B;
            phi_a2 = 5;
        } else {
            this->unk496 = 0xD73;
            phi_a2 = 5;
        }
    } else {
        this->unk496 = 0xD70;
    }
    sp2C = phi_a2;
    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        this->actor.parent = NULL;
        gSaveContext.weekEventReg[61] = gSaveContext.weekEventReg[61] | 1;
        if (phi_a2 == 0x88) {
            this->unk230 |= 0x40;
        }
        this->actionFunc = func_80BB32AC;
        return;
    }
    func_800B8A1C((Actor *) this, globalCtx, phi_a2, 300.0f, 300.0f);
}

void func_80BB32AC(EnGeg *this, GlobalContext *globalCtx) {
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        func_801518B0(globalCtx, this->unk496, (Actor *) this);
        this->actionFunc = func_80BB27D4;
        return;
    }
    func_800B85E0((Actor *) this, globalCtx, 400.0f, -1);
}

void func_80BB3318(EnGeg *this, GlobalContext *globalCtx) {
    s16 sp46;
    f32 sp40;
    PosRot *sp30;
    PosRot *temp_a0;
    s16 temp_v0;

    temp_v0 = this->unk4D8;
    temp_a0 = &this->actor.world;
    if ((s32) temp_v0 < 2) {
        sp30 = temp_a0;
        sp46 = Math_Vec3f_Yaw((Vec3f *) temp_a0, (temp_v0 * 0xC) + &D_80BB4044);
        sp40 = Math_Vec3f_DistXZ((Vec3f *) temp_a0, (this->unk4D8 * 0xC) + &D_80BB4044);
        Math_SmoothStepToS(&this->actor.world.rot.y, sp46, 4, 0x3E8, (s16) 1);
        if (sp40 < 20.0f) {
            this->unk4D8 += 1;
        }
        this->actor.shape.rot.y = this->actor.world.rot.y;
        func_800AE930(&globalCtx->colCtx, Effect_GetParams(this->unk4DC), (f32 *) sp30, 18.0f, (s16) (s32) this->actor.shape.rot.y, this->actor.floorPoly, (s32) this->actor.floorBgId);
    }
    if (ActorCutscene_GetCurrentIndex() != this->unk4AA) {
        func_800AEF44(Effect_GetParams(this->unk4DC));
        Actor_MarkForDeath((Actor *) this);
    } else {
        Math_ApproachF(&this->actor.speedXZ, 10.0f, 0.2f, 1.0f);
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    }
    func_800B9010((Actor *) this, 0x3203U);
}

void func_80BB347C(EnGeg *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = this->unk244;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        this->unk244 = temp_v0 - 1;
        phi_v1 = this->unk244;
    }
    if (phi_v1 == 0) {
        this->unk244 = 0x41;
        this->actionFunc = func_80BB221C;
    }
}

void EnGeg_Init(EnGeg *this, GlobalContext *globalCtx) {
    ? sp34;
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a1_2;
    s32 temp_v0;
    EnGeg *this = (EnGeg *) thisx;

    sp34.unk0 = (s32) D_80BB405C.unk0;
    sp34.unk4 = (s32) D_80BB405C.unk4;
    if ((gSaveContext.weekEventReg[61] & 1) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 0.0f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_06011AC8, &D_06012DE0, &this->unk24C, &this->unk2B8, 0x12);
    temp_a1 = &this->unk18C;
    sp30 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80BB3E9C);
    temp_a1_2 = &this->unk1D8;
    sp30 = temp_a1_2;
    Collider_InitSphere(globalCtx, (ColliderSphere *) temp_a1_2);
    Collider_SetSphere(globalCtx, (ColliderSphere *) temp_a1_2, (Actor *) this, &D_80BB3E70);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80BB3ED4, &D_80BB3EC8);
    if (this->actor.update != 0) {
        temp_v0 = Object_GetIndex(&globalCtx->objectCtx, 0xA1);
        this->unk248 = temp_v0;
        if (temp_v0 < 0) {
            Actor_MarkForDeath((Actor *) this);
        }
    }
    Effect_Add(globalCtx, &this->unk4DC, 4, 0U, (u8) 0, (void *) &sp34);
    this->actor.draw = NULL;
    this->unk4E0 = 0x64;
    this->actor.draw = EnGeg_Draw;
    this->actionFunc = func_80BB217C;
}

void EnGeg_Destroy(EnGeg *this, GlobalContext *globalCtx) {
    EnGeg *this = (EnGeg *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk18C);
    Collider_DestroySphere(globalCtx, (ColliderSphere *) &this->unk1D8);
    Effect_Destroy(globalCtx, this->unk4DC);
}

void EnGeg_Update(EnGeg *this, GlobalContext *globalCtx) {
    EnGeg *this = (EnGeg *) thisx;
    this->actionFunc(this, globalCtx);
    func_80BB1FCC(this, globalCtx);
    func_80BB2088((Actor *) this, globalCtx);
    func_80BB1C8C(this);
    func_8013D9C8(globalCtx, &this->unk238, &this->unk232, 3);
    func_80BB1D04(this);
    func_80BB178C((Actor *) this, globalCtx);
}

? func_80BB3728(s16 arg0, s16 arg1, void *arg2, s16 *arg3, s32 arg4, s32 arg5) {
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

s32 func_80BB3860(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    return 0;
}

void func_80BB387C(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;

    sp38.unk0 = D_80BB4064.unk0;
    sp38.unk4 = (s32) D_80BB4064.unk4;
    sp38.unk8 = (s32) D_80BB4064.unk8;
    sp2C.unk0 = D_80BB4070.unk0;
    sp2C.unk4 = (s32) D_80BB4070.unk4;
    sp2C.unk8 = (s32) D_80BB4070.unk8;
    if (arg1 == 0x11) {
        if ((arg4->unk230 & 0x40) == 0) {
            func_8012C28C(*arg0);
            temp_a0 = *arg0;
            temp_v1 = temp_a0->polyOpa.p;
            temp_a0->polyOpa.p = temp_v1 + 8;
            temp_v1->words.w1 = (u32) &D_06004DB0;
            temp_v1->words.w0 = 0xDE000000;
        }
        sp38 += Rand_Centered();
        sp3C += 2.0f * Rand_Centered();
        sp40 += Rand_Centered();
        sp2C += Rand_Centered();
        sp30 += 2.0f * Rand_Centered();
        sp34 += Rand_Centered();
        SysMatrix_MultiplyVector3fByState(&D_80BB407C, arg4 + 0x4B4);
        SysMatrix_StatePush();
        Matrix_RotateY(arg4->shape.rot.y, 0U);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp38, arg4 + 0x4C0);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp2C, arg4 + 0x4CC);
        SysMatrix_StatePop();
    }
}

void func_80BB39F8(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_v0_2;
    s32 phi_v1_2;

    if (arg1 != 0xA) {
        if (arg1 == 0x11) {
            phi_v1 = 0;
            if ((arg2->unk230 & 2) != 0) {
                phi_v1 = 1;
            }
            phi_v0 = 0;
            if (arg2->unk242 != 0) {
                phi_v0 = 1;
            }
            func_80BB3728((s16) (arg2->unk468 + arg2->unk46C + 0x4000), (s16) (arg2->unk46A + arg2->unk46E + arg2->shape.rot.y + 0x4000), arg2 + 0x470, arg2 + 0x47C, phi_v0, phi_v1);
            SysMatrix_StatePop();
            SysMatrix_InsertTranslation(arg2->unk470, arg2->unk474, arg2->unk478, 0);
            Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
            Matrix_RotateY(arg2->unk47E, 1U);
            SysMatrix_InsertXRotation_s(arg2->unk47C, 1);
            SysMatrix_InsertZRotation_s(arg2->unk480, 1);
            SysMatrix_StatePush();
            return;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return;
    }
    phi_v1_2 = 0;
    if ((arg2->unk230 & 2) != 0) {
        phi_v1_2 = 1;
    }
    phi_v0_2 = 0;
    if (arg2->unk242 != 0) {
        phi_v0_2 = 1;
    }
    func_80BB3728((s16) (arg2->unk46C + 0x4000), (s16) (arg2->unk46E + arg2->shape.rot.y + 0x4000), arg2 + 0x484, arg2 + 0x490, phi_v0_2, phi_v1_2);
    SysMatrix_StatePop();
    SysMatrix_InsertTranslation(arg2->unk484, arg2->unk488, arg2->unk48C, 0);
    Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
    Matrix_RotateY(arg2->unk492, 1U);
    SysMatrix_InsertXRotation_s(arg2->unk490, 1);
    SysMatrix_InsertZRotation_s(arg2->unk494, 1);
    SysMatrix_StatePush();
}

void func_80BB3BE0(Actor *arg0, GlobalContext *arg1) {
    GraphicsContext *sp38;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    temp_a0 = arg1->state.gfxCtx;
    sp38 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp38->polyOpa.p;
    sp38->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp38 = sp38;
    sp30 = temp_v0;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80BB4088 + (arg0->unk23E * 4)));
    temp_v0_2 = sp38->polyOpa.p;
    sp38->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0;
    temp_v0_2->words.w0 = 0xE7000000;
    func_801343C0(arg1, arg0->unk148, arg0->unk164, (s32) arg0->unk146, func_80BB3860, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80BB387C, func_80BB39F8, arg0);
}

void func_80BB3CB4(void *arg0, void *arg1) {
    f32 sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;

    sp24 = (f32) arg1->unk9C * arg0->unk70 * 1400.0f;
    temp_a0 = arg1->unk0;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    SysMatrix_InsertTranslation(arg0->unk24, arg0->unk28 + arg0->unkC4, arg0->unk2C, 0);
    Matrix_RotateY(arg0->unkBE, 1U);
    SysMatrix_InsertTranslation(0.0f, -arg0->unkC4, 0.0f, 1);
    SysMatrix_InsertZRotation_s(arg0->unkC0, 1);
    SysMatrix_InsertTranslation(0.0f, arg0->unkC4, 0.0f, 1);
    Matrix_Scale(arg0->unk58, arg0->unk5C, arg0->unk60, 1);
    SysMatrix_InsertXRotation_s((s16) (s32) sp24, 1);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    temp_v0->words.w1 = Matrix_NewMtx(arg1->unk0);
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) &D_060091A8;
}

void EnGeg_Draw(EnGeg *this, GlobalContext *globalCtx) {
    EnGeg *this = (EnGeg *) thisx;
    if ((this->unk230 & 1) != 0) {
        func_80BB3CB4();
        return;
    }
    func_80BB3BE0();
}
