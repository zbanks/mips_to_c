typedef struct EnTrt2 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnTrt2 *, GlobalContext *);
    /* 0x148 */ char pad_148[0x8];                  /* maybe part of actionFunc[3]? */
    /* 0x150 */ SkelAnime unk_150;                  /* inferred */
    /* 0x194 */ ColliderCylinder unk_194;           /* inferred */
    /* 0x1E0 */ Path *unk_1E0;                      /* inferred */
    /* 0x1E4 */ char pad_1E4[0x1C4];                /* maybe part of unk_1E0[114]? */
    /* 0x3A8 */ s16 unk_3A8;                        /* inferred */
    /* 0x3AA */ char pad_3AA[0x4];                  /* maybe part of unk_3A8[3]? */
    /* 0x3AE */ s16 unk_3AE;                        /* inferred */
    /* 0x3B0 */ s16 unk_3B0;                        /* inferred */
    /* 0x3B2 */ s16 unk_3B2;                        /* inferred */
    /* 0x3B4 */ char pad_3B4[0x2];
    /* 0x3B6 */ s16 unk_3B6;                        /* inferred */
    /* 0x3B8 */ s16 unk_3B8;                        /* inferred */
    /* 0x3BA */ char pad_3BA[0x2];
    /* 0x3BC */ void (*unk_3BC)(EnTrt2 *);          /* inferred */
    /* 0x3C0 */ s16 unk_3C0;                        /* inferred */
    /* 0x3C2 */ char pad_3C2[0x16];                 /* maybe part of unk_3C0[12]? */
    /* 0x3D8 */ s8 unk_3D8;                         /* inferred */
    /* 0x3D9 */ char pad_3D9[0x1];
    /* 0x3DA */ s16 unk_3DA;                        /* inferred */
} EnTrt2;                                           /* size = 0x3DC */

struct _mips2c_stack_EnTrt2_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt2_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnTrt2_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AD3380 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AD341C {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Collider *sp18;                      /* inferred */
    /* 0x1C */ CollisionCheckContext *sp1C;         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AD349C {};              /* size 0x0 */

struct _mips2c_stack_func_80AD3530 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AD3664 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD36EC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ s16 sp30;                            /* inferred */
    /* 0x32 */ char pad_32[0x6];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AD381C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD38B8 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s16 sp30;                            /* inferred */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AD3A24 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AD3AE4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AD3B6C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD3BE4 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s16 *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0x2];
    /* 0x2E */ s16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AD3C94 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD3CEC {
    /* 0x00 */ char pad_0[0x27];
    /* 0x27 */ u8 sp27;                             /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AD3DA4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD3E34 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AD3EF0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AD3FF4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AD40AC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD4110 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AD417C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AD4298 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AD431C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD434C {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad_5C[0xC];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0x4];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_80AD4550 {
    /* 0x00 */ char pad_0[0x23];
    /* 0x23 */ u8 sp23;                             /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AD4608 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD469C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AD46F8 {};              /* size 0x0 */

struct _mips2c_stack_func_80AD475C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0xC];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];                    /* maybe part of sp44[3]? */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80AD48F8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD49B8 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AD4A78 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80AD4B08 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD4B4C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AD4C4C {};              /* size 0x0 */

struct _mips2c_stack_func_80AD4CCC {
    /* 0x00 */ char pad_0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AD4DB4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AD4FE4 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AD5234 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ void *sp4C;                          /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80AD5394 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x40];
    /* 0x68 */ s16 sp68;                            /* inferred */
    /* 0x6A */ s16 sp6A;                            /* inferred */
    /* 0x6C */ s16 sp6C;                            /* inferred */
    /* 0x6E */ char pad_6E[0x2];
    /* 0x70 */ ? sp70;                              /* inferred */
    /* 0x70 */ char pad_70[0xC];
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad_7C[0xC];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_80AD54C8 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AD5584 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x10];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80AD566C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AD56E8 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ GraphicsContext *sp3C;               /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

void func_80AD3380(SkelAnime *arg0, ? *arg1, s32 arg2, void *); /* static */
void func_80AD341C(EnTrt2 *arg0, GlobalContext *arg1); /* static */
void func_80AD349C(Actor *arg0);                    /* static */
void func_80AD3530(Actor *arg0, ? arg1);            /* static */
void func_80AD3664(Actor *arg0, ? arg1);            /* static */
void func_80AD36EC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AD381C(Actor *arg0, void *arg1);        /* static */
void func_80AD38B8(Actor *arg0, ? arg1);            /* static */
void func_80AD3A24(Actor *arg0, ? arg1);            /* static */
void func_80AD3AE4(Actor *arg0, ? arg1);            /* static */
void func_80AD3B6C(void *arg0, ? arg1);             /* static */
void func_80AD3BE4(void *arg0, ? arg1);             /* static */
void func_80AD3C94(void *arg0);                     /* static */
void func_80AD3CEC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AD3DA4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AD3E34(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AD3EF0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AD3FF4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AD40AC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AD4110(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AD417C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AD4298(Actor *arg0, void *arg1);        /* static */
void func_80AD431C(Actor *arg0, void *arg1);        /* static */
void func_80AD434C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AD4550(void *arg0, GlobalContext *arg1); /* static */
void func_80AD4608(EnTrt2 *arg0);                   /* static */
void func_80AD469C(EnTrt2 *arg0, GlobalContext *arg1); /* static */
void func_80AD46F8(Actor *arg0);                    /* static */
s32 func_80AD475C(Actor *arg0, u8 *arg1, s32 arg2); /* static */
s16 func_80AD48F8(u8 *arg0, s32 arg1, void *arg2, f32 *arg3); /* static */
f32 func_80AD49B8(Path *arg0, s32 arg1, PosRot *arg2, s16 *arg3); /* static */
void func_80AD4A78(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80AD4B08(void *arg0, Actor *);             /* static */
s32 func_80AD4B4C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80AD4C4C(void *arg0, s32);                 /* static */
? func_80AD4CCC(Actor *arg0, GlobalContext *arg1);  /* static */
void func_80AD5234(EnTrt2 *arg0, GlobalContext *arg1); /* static */
void func_80AD5394(s16 arg0, s16 arg1, void *arg2, s16 *arg3, s32 arg4); /* static */
s32 func_80AD54C8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80AD5584(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80AD566C(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
void func_80AD56E8(Actor *arg0, GlobalContext *arg1); /* static */
extern AnimationHeader D_06000A44;
extern FlexSkeletonHeader D_0600FEF0;
static ? D_80AD57E0;                                /* unable to generate initializer */
static ColliderCylinderInit D_80AD58A0 = {
    {0xA, 0, 0, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0x20, 0x38, 0x1E, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80AD58CC = {1, 0, 0, 0, 0xFF};
static DamageTable D_80AD58D8 = {
    {
        1,
        1,
        1,
        0x11,
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
static ? D_80AD58F8;                                /* unable to generate initializer */
static f32 D_80AD590C = 0.0f;
static ? D_80AD5910;                                /* unable to generate initializer */
static InitChainEntry D_80AD5964[2];                /* unable to generate initializer */
static ? D_80AD596C;                                /* unable to generate initializer */
static ? D_80AD5978;                                /* unable to generate initializer */

void func_80AD3380(SkelAnime *arg0, ? *arg1, s32 arg2) {
    s16 temp_v0;
    void *temp_s0;
    f32 phi_f0;

    temp_s0 = arg1 + (arg2 * 0x10);
    temp_v0 = temp_s0->unk_A;
    if ((s32) temp_v0 < 0) {
        phi_f0 = (f32) SkelAnime_GetFrameCount(temp_s0->unk_0);
    } else {
        phi_f0 = (f32) temp_v0;
    }
    SkelAnime_ChangeAnim(arg0, (AnimationHeader *) temp_s0->unk_0, temp_s0->unk_4, (f32) temp_s0->unk_8, phi_f0, (u8) (s32) temp_s0->unk_C, (f32) temp_s0->unk_E);
}

void func_80AD341C(EnTrt2 *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp1C;
    Collider *sp18;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;

    temp_a2 = arg0 + 0x194;
    arg0->unk_194.dim.pos.x = (s16) (s32) arg0->actor.world.pos.x;
    arg0->unk_194.dim.pos.y = (s16) (s32) arg0->actor.world.pos.y;
    arg0->unk_194.dim.pos.z = (s16) (s32) arg0->actor.world.pos.z;
    sp18 = temp_a2;
    temp_a1 = arg1 + 0x18884;
    sp1C = temp_a1;
    CollisionCheck_SetAC(arg1, temp_a1, temp_a2);
    CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
}

void func_80AD349C(Actor *arg0) {
    if (((gSaveContext.weekEventReg[85] & 0x10) != 0) && ((gSaveContext.weekEventReg[84] & 0x40) == 0)) {
        arg0->unk_3A8 = 0x88FU;
        return;
    }
    if (arg0->unk_3A8 == 0) {
        arg0->unk_3A8 = 0x84BU;
        return;
    }
    if ((gSaveContext.weekEventReg[16] & 0x10) != 0) {
        arg0->unk_3A8 = 0x838U;
        return;
    }
    if ((gSaveContext.weekEventReg[17] & 1) != 0) {
        arg0->unk_3A8 = 0x84DU;
        return;
    }
    arg0->unk_3A8 = 0x849U;
}

void func_80AD3530(Actor *arg0, ? arg1) {
    f32 sp30;
    s16 temp_v0_2;
    s32 temp_v0;
    u8 *temp_a0;
    s16 phi_a1;
    s16 phi_v1;

    func_80AD46F8(arg0);
    temp_a0 = arg0[1].yDistToPlayer;
    if (temp_a0 != 0) {
        phi_a1 = func_80AD48F8(temp_a0, arg0[1].colChkInfo.damageTable, arg0 + 0x24, &sp30);
        if ((arg0->bgCheckFlags & 8) != 0) {
            phi_a1 = arg0->wallYaw;
        }
        Math_SmoothStepToS(arg0 + 0x32, phi_a1, 4, 0x3E8, (s16) 1);
        arg0->shape.rot.y = arg0->world.rot.y;
        if (func_80AD475C(arg0, arg0[1].yDistToPlayer, arg0[1].colChkInfo.damageTable) != 0) {
            temp_v0 = arg0[1].colChkInfo.damageTable;
            if (temp_v0 >= (*arg0[1].yDistToPlayer - 1)) {
                arg0[1].colChkInfo.damageTable = 0;
            } else {
                arg0[1].colChkInfo.damageTable = temp_v0 + 1;
            }
        }
        Math_ApproachF(arg0 + 0x70, 1.5f, 0.2f, 1.0f);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    temp_v0_2 = arg0->unk_3AE;
    if (temp_v0_2 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_3AE = (s16) (temp_v0_2 - 1);
        phi_v1 = arg0->unk_3AE;
    }
    if (phi_v1 == 0) {
        arg0->unk_3AE = Rand_S16Offset(0x14, 0x14);
        func_80AD3380((SkelAnime *) &arg0[1].home.pos.y, &D_80AD57E0, 7);
        arg0->unk_3B2 = 5;
    }
}

void func_80AD3664(Actor *arg0, ? arg1) {
    Actor *temp_a2;
    s16 temp_a0;
    s16 temp_a0_2;

    temp_a0 = arg0->unk_3DA;
    arg0 = arg0;
    temp_a2 = arg0;
    if (ActorCutscene_GetCanPlayNext(temp_a0) != 0) {
        temp_a0_2 = temp_a2->unk_3DA;
        arg0 = temp_a2;
        ActorCutscene_StartAndSetUnkLinkFields(temp_a0_2, temp_a2);
        if (arg0->unk_3D9 == 0) {
            arg0->unk_3B2 = 1;
        } else {
            arg0->unk_3B2 = 2;
        }
        func_800B9010(arg0, 0x3296U);
        return;
    }
    ActorCutscene_SetIntentToPlay(temp_a2->unk_3DA);
}

void func_80AD36EC(Actor *arg0, GlobalContext *arg1) {
    s16 sp30;
    f32 sp2C;
    Path *temp_s1;
    Path *temp_s1_2;
    s16 temp_v0_2;
    s32 temp_v0;

    temp_s1 = arg0[1].yDistToPlayer;
    if (temp_s1 != 0) {
        sp2C = func_80AD49B8(temp_s1, arg0[1].colChkInfo.damageTable, arg0 + 0x24, &sp30);
        arg0->shape.rot.y += 0x1000;
        Math_ApproachF(arg0 + 0x68, 0.5f, 0.2f, 1.0f);
        if (sp2C < 5.0f) {
            temp_s1_2 = arg0[1].yDistToPlayer;
            temp_v0 = arg0[1].colChkInfo.damageTable;
            if (temp_v0 >= (temp_s1_2->count - 1)) {
                arg0[1].colChkInfo.damageTable = 0;
                arg0->unk_3D9 = 1;
                arg0->velocity.y = 0.0f;
                arg0[1].yDistToPlayer = func_8013D648(arg1, (s16) temp_s1_2->unk1, -1);
                ActorCutscene_Stop(arg0->unk_3DA);
                arg0->unk_3DA = ActorCutscene_GetAdditionalCutscene(arg0->unk_3DA);
                ActorCutscene_SetIntentToPlay(arg0->unk_3DA);
                arg0->unk_3B2 = 0;
            } else {
                arg0[1].colChkInfo.damageTable = temp_v0 + 1;
            }
        }
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    func_800B9010(arg0, 0x3296U);
    temp_v0_2 = arg0->shape.rot.y;
    if (((s32) temp_v0_2 >= 0x2800) && ((s32) temp_v0_2 < 0x3800)) {
        Audio_PlayActorSound2(arg0, 0x3A95U);
    }
}

void func_80AD381C(Actor *arg0, void *arg1) {
    Actor *temp_a2;
    s32 temp_hi;
    u32 temp_t7;

    temp_a2 = arg0;
    temp_hi = (s32) gSaveContext.day % 5;
    if ((temp_hi == 2) || (temp_hi == 3)) {
        arg0 = temp_a2;
        if (func_80AD4B08(arg1, temp_a2) == 1) {
            temp_t7 = arg0->flags & ~1;
            arg0->flags = temp_t7;
            arg0->world.pos.y -= 50.0f;
            arg0->unk_3D9 = 0;
            arg0->unk_3B2 = 0;
            arg0->flags = temp_t7 | 0x10;
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return;
    }
    Actor_MarkForDeath(temp_a2);
}

void func_80AD38B8(Actor *arg0, ? arg1) {
    s16 sp32;
    s16 sp30;
    DamageTable *temp_v0;
    f32 temp_a0;

    if (arg0->unk_3D9 == 2) {
        Actor_MarkForDeath(arg0);
    }
    temp_a0 = arg0[1].yDistToPlayer;
    if ((bitwise s32) temp_a0 != 0) {
        func_80AD49B8((bitwise Path *) temp_a0, (s32) arg0[1].colChkInfo.damageTable, &arg0->world, &sp30);
        Math_SmoothStepToS(&arg0->world.rot.y, sp32, 4, 0x3E8, (s16) 1);
        arg0->shape.rot.y = arg0->world.rot.y;
        Math_SmoothStepToS((s16 *) &arg0->shape, sp30, 4, 0x3E8, (s16) 1);
        arg0->world.rot.x = (s16) -(s32) arg0->shape.rot.x;
        if (func_80AD475C(arg0, (bitwise u8 *) arg0[1].yDistToPlayer, (s32) arg0[1].colChkInfo.damageTable) != 0) {
            temp_v0 = arg0[1].colChkInfo.damageTable;
            if ((s32) temp_v0 >= (*arg0[1].yDistToPlayer - 1)) {
                ActorCutscene_Stop(arg0->unk_3DA);
                arg0->unk_3D9 = 2U;
            } else {
                arg0[1].colChkInfo.damageTable = (DamageTable *) &temp_v0->attack[1];
            }
        }
        if ((arg0->bgCheckFlags & 8) != 0) {
            if ((s32) arg0[1].colChkInfo.damageTable >= (*arg0[1].yDistToPlayer - 1)) {
                ActorCutscene_Stop(arg0->unk_3DA);
                arg0->unk_3D9 = 2U;
            } else {
                sp32 = arg0->wallYaw;
            }
        }
        Math_ApproachF(&arg0->speedXZ, 5.0f, 0.2f, 1.0f);
    }
    Actor_SetVelocityAndMoveXYRotation(arg0);
    func_800B9010(arg0, 0x3296U);
}

void func_80AD3A24(Actor *arg0, ? arg1) {
    s16 temp_v0;
    s16 phi_v1;

    func_80AD46F8(arg0);
    if (arg0->speedXZ > 0.05f) {
        Math_ApproachF(&arg0->speedXZ, 0.0f, 0.2f, 1.0f);
    } else {
        temp_v0 = arg0->unk_3AE;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk_3AE = (s16) (temp_v0 - 1);
            phi_v1 = arg0->unk_3AE;
        }
        if (phi_v1 == 0) {
            arg0->unk_3AE = Rand_S16Offset(0x64, 0x32);
            func_80AD3380((SkelAnime *) &arg0[1].home.pos.y, &D_80AD57E0, 6);
            arg0->unk_3B2 = 4;
        }
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
}

void func_80AD3AE4(Actor *arg0, ? arg1) {
    if (arg0->world.pos.y < arg0->home.pos.y) {
        Math_ApproachF(arg0 + 0x68, 0.5f, 0.2f, 0.1f);
    } else {
        arg0->velocity.y = 0.0f;
        func_80AD3380(arg0 + 0x150, &D_80AD57E0, 6, (void *)0x3DCC0000);
        arg0->unk_3B2 = 4;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
}

void func_80AD3B6C(void *arg0, ? arg1) {
    SkelAnime *temp_a0;
    s16 temp_v0;
    void *temp_a3;
    s16 phi_v1;

    temp_a3 = arg0;
    temp_v0 = temp_a3->unk_3B0;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        temp_a3->unk_3B0 = (s16) (temp_v0 - 1);
        phi_v1 = temp_a3->unk_3B0;
    }
    temp_a0 = temp_a3 + 0x150;
    if (phi_v1 == 0) {
        temp_a3->unk_3B0 = 0xA;
        temp_a3->unk_68 = -1.0f;
        arg0 = temp_a3;
        func_80AD3380(temp_a0, &D_80AD57E0, 8, temp_a3);
        arg0->unk_3B2 = 8;
    }
}

void func_80AD3BE4(void *arg0, ? arg1) {
    s16 sp2E;
    s16 *sp28;
    s16 *temp_a0;
    s16 temp_a1;

    temp_a0 = arg0 + 0x3C0;
    sp28 = temp_a0;
    temp_a1 = arg0->unk_92 - arg0->unk_BE;
    sp2E = temp_a1;
    Math_ScaledStepToS(temp_a0, temp_a1, 0x190);
    Math_SmoothStepToS(temp_a0, temp_a1, 4, 0x2710, (s16) 0);
    arg0->unk_32 = (s16) (arg0->unk_32 + arg0->unk_3C0);
    arg0->unk_BE = (s16) arg0->unk_32;
    if (arg0->unk_28 < 5.0f) {
        func_80AD3380(arg0 + 0x150, &D_80AD57E0, 9);
        arg0->unk_3B2 = 9;
    }
}

void func_80AD3C94(void *arg0) {
    if (arg0->unk_28 < 5.0f) {
        func_80AD4A78();
        if ((arg0->unk_90 & 1) != 0) {
            arg0->unk_3B2 = 0xF;
        }
    }
}

void func_80AD3CEC(Actor *arg0, GlobalContext *arg1) {
    u8 sp27;

    sp27 = func_80152498(arg1 + 0x4908);
    func_80AD46F8(arg0);
    if (arg0->unk_3D8 != 0) {
        func_801518B0(arg1, arg0->unk_3A8, arg0);
        arg0->unk_3D8 = 0U;
        return;
    }
    if ((sp27 == 5) && (func_80147624(arg1) != 0)) {
        arg1->msgCtx.unk11F22 = 0x43;
        arg1->msgCtx.unk12023 = 4;
        func_80AD3380((SkelAnime *) &arg0[1].home.pos.y, &D_80AD57E0, 6);
        arg0->unk_3B2 = 4;
    }
}

void func_80AD3DA4(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;
    u16 temp_a1;
    u16 temp_v0;

    temp_a2 = arg0;
    temp_a1 = temp_a2->unk_3A8;
    temp_a2->velocity.y = 0.0f;
    arg0 = temp_a2;
    func_801518B0(arg1, temp_a1, temp_a2);
    temp_v0 = arg0->unk_3A8;
    if (temp_v0 == 0x838) {
        arg0->unk_3B2 = 0xB;
        return;
    }
    if (temp_v0 == 0x88F) {
        arg0 = arg0;
        if (func_80114E90() != 0) {
            arg0->unk_3B2 = 0xB;
            return;
        }
        arg0->unk_3B2 = 0xA;
        return;
    }
    arg0->unk_3B2 = 0xA;
}

void func_80AD3E34(Actor *arg0, GlobalContext *arg1) {
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        if (func_80114E90() != 0) {
            arg1->msgCtx.unk11F22 = 0x43;
            arg1->msgCtx.unk12023 = 4;
            arg0->unk_3B2 = 0xC;
            return;
        }
        gSaveContext.weekEventReg[85] |= 0x10;
        arg0->unk_3A8 = 0x88E;
        func_801518B0(arg1, 0x88E & 0xFFFF, arg0);
        arg0->unk_3B2 = 0xA;
        /* Duplicate return node #5. Try simplifying control flow for better match */
    }
}

void func_80AD3EF0(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    temp_v0 = func_80152498(arg1 + 0x4908);
    if (temp_v0 == 6) {
        if (func_80147624(arg1) != 0) {
            if (((func_80114E90() != 0) && ((gSaveContext.weekEventReg[84] & 0x40) == 0)) || ((gSaveContext.weekEventReg[12] & 0x10) == 0)) {
                arg0->unk_3B2 = 0xC;
                return;
            }
            gSaveContext.weekEventReg[85] |= 0x10;
            arg0->unk_3A8 = 0x88E;
            func_801518B0(arg1, 0x88E & 0xFFFF, arg0);
            arg0->unk_3B2 = 0xA;
            return;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return;
    }
    if ((temp_v0 == 5) && (func_80147624(arg1) != 0)) {
        arg1->msgCtx.unk11F22 = 0x43;
        arg1->msgCtx.unk12023 = 4;
        arg0->unk_3B2 = 0xC;
    }
}

void func_80AD3FF4(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    if (Actor_HasParent(arg0, arg1) != 0) {
        temp_v0 = gSaveContext.weekEventReg[12];
        if ((temp_v0 & 0x10) == 0) {
            gSaveContext.weekEventReg[12] = temp_v0 | 0x10;
        }
        gSaveContext.weekEventReg[84] |= 0x40;
        arg0->parent = NULL;
        arg0->unk_3B2 = 0xE;
        return;
    }
    if ((gSaveContext.weekEventReg[12] & 0x10) != 0) {
        func_800B8A1C(arg0, arg1, 0x5B, 300.0f, 300.0f);
        return;
    }
    func_800B8A1C(arg0, arg1, 0x59, 300.0f, 300.0f);
}

void func_80AD40AC(Actor *arg0, GlobalContext *arg1) {
    if ((func_80152498(arg1 + 0x4908) == 6) && (func_80147624(arg1) != 0)) {
        func_800B85E0(arg0, arg1, 400.0f, -1);
        arg0->unk_3B2 = 0xD;
    }
}

void func_80AD4110(Actor *arg0, GlobalContext *arg1) {
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk_3A8 = 0x84C;
        func_80151938(arg1, 0x84C & 0xFFFF);
        arg0->unk_3B2 = 0xA;
        return;
    }
    func_800B85E0(arg0, arg1, 400.0f, -1);
}

void func_80AD417C(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        if (arg0->unk_3A8 == 0x84B) {
            func_80AD349C(arg0);
            func_80AD3DA4(arg0, arg1);
            return;
        }
        arg1->msgCtx.unk11F22 = 0x43;
        arg1->msgCtx.unk12023 = 4;
        temp_v0 = arg0->unk_3A8;
        if (temp_v0 == 0x84C) {
            func_80AD3380((SkelAnime *) &arg0[1].home.pos.y, &D_80AD57E0, 6);
            arg0[1].yDistToPlayer = (bitwise f32) func_8013D648(arg1, (s16) ((s32) (arg0->params & 0xFC00) >> 0xA), 0x3F);
            arg0->unk_3B2 = 0x12;
            return;
        }
        if (temp_v0 == 0x88F) {
            arg0->unk_3A8 = 0x88EU;
            func_801518B0(arg1, 0x88EU & 0xFFFF, arg0);
            return;
        }
        arg0->textId = 0;
        arg0->unk_3B2 = 0xF;
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_80AD4298(Actor *arg0, void *arg1) {
    void *sp24;

    sp24 = arg1->unk_1CCC;
    if (ActorCutscene_GetCanPlayNext(arg0->unk_3DA) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields(arg0->unk_3DA, arg0);
        sp24->unk_A6C = (s32) (sp24->unk_A6C | 0x20);
        arg0->unk_3B2 = 6;
        return;
    }
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
    }
    ActorCutscene_SetIntentToPlay(arg0->unk_3DA);
}

void func_80AD431C(Actor *arg0, void *arg1) {
    void *temp_v0;

    temp_v0 = arg1->unk_1CCC;
    temp_v0->unk_A6C = (s32) (temp_v0->unk_A6C & ~0x20);
    Actor_MarkForDeath(arg0);
}

void func_80AD434C(Actor *arg0, GlobalContext *arg1) {
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    ? sp5C;
    f32 *temp_s3;
    f32 temp_f0;
    s16 temp_v0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 phi_s0;

    arg0->shape.rot.y += 0x1000;
    Math_ApproachF(arg0 + 0x68, 1.5f, 0.2f, 0.1f);
    temp_f0 = arg0->world.pos.y;
    if (temp_f0 > 200.0f) {
        if (func_801378B8(arg0 + 0x150, arg0->unk_160) != 0) {
            arg0->unk_3B2 = 0x13;
            ActorCutscene_Stop(arg0->unk_3DA);
        } else {
            sp5C.unk_0 = (s32) D_80AD58F8.unk_0;
            sp5C.unk_4 = (s32) D_80AD58F8.unk_4;
            sp5C.unk_8 = (s32) D_80AD58F8.unk_8;
            temp_s0 = (s32) arg0->unk_164 - (s32) arg0[1].world.pos.x;
            phi_s0 = temp_s0;
            if (temp_s0 >= 0) {
                temp_s3 = &sp68;
                do {
                    sp68 = randPlusMinusPoint5Scaled(60.0f) + arg0->world.pos.x;
                    sp70 = randPlusMinusPoint5Scaled(60.0f) + arg0->world.pos.z;
                    sp6C = randPlusMinusPoint5Scaled(50.0f) + (arg0->world.pos.y + 20.0f);
                    func_800B3030(arg1, (Vec3f *) temp_s3, (Vec3f *) &sp5C, (Vec3f *) &sp5C, (s16) 0x64, (s16) 0, 3);
                    temp_s0_2 = phi_s0 - 2;
                    phi_s0 = temp_s0_2;
                } while (temp_s0_2 >= 0);
            }
            func_800B9010(arg0, 0x321FU);
        }
    } else if (temp_f0 < 5.0f) {
        func_80AD4A78(arg0, arg1);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    temp_v0 = arg0->shape.rot.y;
    if (((s32) temp_v0 >= 0x2800) && ((s32) temp_v0 < 0x3800)) {
        Audio_PlayActorSound2(arg0, 0x3A95U);
    }
}

void func_80AD4550(void *arg0, GlobalContext *arg1) {
    void *sp24;
    u8 sp23;
    u8 temp_a3;
    u8 temp_v1;

    sp24 = arg1->actorCtx.actorList[2].first;
    temp_a3 = func_80152498(arg1 + 0x4908) & 0xFF;
    temp_v1 = sp24->unk_14B;
    if ((temp_v1 != 4) && (temp_v1 != 0)) {
        sp23 = temp_a3;
        func_80AD3380(arg0 + 0x150, &D_80AD57E0, 7, (void *) temp_a3);
        arg0->unk_3B2 = 0x11;
    }
    if ((temp_a3 == 5) && (func_80147624(arg1) != 0)) {
        arg1->msgCtx.unk11F22 = 0x43;
        arg1->msgCtx.unk12023 = 4;
    }
}

void func_80AD4608(EnTrt2 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = arg0->unk_3B6 - 1;
    if (temp_v0 != 0) {
        arg0->unk_3B6 = temp_v0;
        return;
    }
    temp_v0_2 = arg0->unk_3B8 + 1;
    if ((s32) temp_v0_2 >= 3) {
        arg0->unk_3B8 = 0;
        arg0->unk_3B6 = (s32) (Rand_ZeroOne() * 60.0f) + 0x14;
        return;
    }
    arg0->unk_3B8 = temp_v0_2;
    arg0->unk_3B6 = 1;
}

void func_80AD469C(EnTrt2 *arg0, GlobalContext *arg1) {
    SkelAnime_InitSV(arg1, arg0 + 0x150, &D_0600FEF0, &D_06000A44, NULL, NULL, 0);
    arg0->actor.draw = func_80AD56E8;
}

void func_80AD46F8(Actor *arg0) {
    f32 temp_f0;
    f32 temp_f2;

    temp_f0 = arg0->home.pos.y;
    temp_f2 = arg0->world.pos.y;
    if ((temp_f0 + 60.0f) < temp_f2) {
        arg0->velocity.y = -0.2f;
        return;
    }
    if (temp_f2 <= (temp_f0 + 50.0f)) {
        arg0->velocity.y = 0.2f;
    }
}

s32 func_80AD475C(Actor *arg0, u8 *arg1, s32 arg2) {
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

    temp_v0 = Lib_SegmentedToVirtual(arg1->unk_4);
    temp_a2 = arg1->unk_0;
    temp_a3 = arg2 * 6;
    sp50 = 0;
    sp28 = temp_a3;
    sp5C = temp_v0;
    sp58 = (s32) temp_a2;
    Math_Vec3s_ToVec3f((Vec3f *) &sp30, temp_a3 + temp_v0);
    if (arg2 == 0) {
        phi_f12 = (f32) (sp5C->unk_6 - sp5C->unk_0);
        phi_f14 = (f32) (sp5C->unk_A - sp5C->unk_4);
    } else {
        temp_v0_2 = sp5C + temp_a3;
        if (temp_a2 == (arg2 + 1)) {
            temp_v0_3 = sp5C + (temp_a2 * 6);
            phi_f12 = (f32) (temp_v0_3->unk_-6 - temp_v0_3->unk_-C);
            phi_f14 = (f32) (temp_v0_3->unk_-2 - temp_v0_3->unk_-8);
        } else {
            phi_f12 = (f32) (temp_v0_2->unk_6 - temp_v0_2->unk_-6);
            phi_f14 = (f32) (temp_v0_2->unk_A - temp_v0_2->unk_-2);
        }
    }
    func_8017B7F8((Vec3f *) &sp30, (s16) (s32) (func_80086B30(phi_f12, phi_f14) * 10430.378f), &sp44, &sp40, &sp3C);
    if (((arg0->world.pos.x * sp44) + (sp40 * arg0->world.pos.z) + sp3C) > 0.0f) {
        sp50 = 1;
    }
    return sp50;
}

s16 func_80AD48F8(u8 *arg0, s32 arg1, void *arg2, f32 *arg3) {
    void *temp_v1;
    f32 phi_f14;
    f32 phi_f12;

    if (arg0 != 0) {
        temp_v1 = (arg1 * 6) + Lib_SegmentedToVirtual(arg0->unk_4);
        phi_f14 = (f32) temp_v1->unk_0 - arg2->unk_0;
        phi_f12 = (f32) temp_v1->unk_4 - arg2->unk_8;
    } else {
        phi_f14 = 0.0f;
        phi_f12 = 0.0f;
    }
    *arg3 = (phi_f14 * phi_f14) + (phi_f12 * phi_f12);
    return (s16) (s32) (Math_Acot2F(phi_f12, phi_f14) * 10430.378f);
}

f32 func_80AD49B8(Path *arg0, s32 arg1, Vec3f *arg2, s16 *arg3) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    s16 *temp_v1;

    if (arg0 != 0) {
        temp_v1 = (arg1 * 6) + Lib_SegmentedToVirtual(arg0->points);
        sp20 = (f32) temp_v1->unk_0;
        sp24 = (f32) temp_v1[1];
        sp28 = (f32) temp_v1[2];
    }
    arg3[1] = Math_Vec3f_Yaw(arg2, (Vec3f *) &sp20);
    arg3->unk_0 = Math_Vec3f_Pitch(arg2, (Vec3f *) &sp20);
    return sp24 - arg2->y;
}

void func_80AD4A78(Actor *arg0, GlobalContext *arg1) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;

    sp34 = randPlusMinusPoint5Scaled(15.0f) + arg0->world.pos.x;
    sp38 = arg0->world.pos.y;
    sp3C = randPlusMinusPoint5Scaled(15.0f) + arg0->world.pos.z;
    func_800BBDAC(arg1, arg0, (Vec3f *) &sp34, 50.0f, 0, 2.0f, (s16) 0, (s16) 0, (u8) 0);
}

s32 func_80AD4B08(void *arg0) {
    void *temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->unk_1CCC;
    if (func_800C99AC(arg0 + 0x830, temp_v0->unk_80, (s32) temp_v0->unk_85) == 0x15) {
        phi_v1 = 1;
    } else {
        phi_v1 = 0;
    }
    return phi_v1;
}

s32 func_80AD4B4C(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    void *sp20;
    u8 temp_v0;
    u8 temp_v0_2;

    sp24 = 0;
    sp20 = arg1->actorCtx.actorList[2].first;
    if (func_800B84D0(arg0, arg1) != 0) {
        sp24 = 1;
        arg0->speedXZ = 0.0f;
        func_80AD349C(arg0);
        arg0->unk_3B4 = (s16) arg0->unk_3B2;
        if ((arg0->bgCheckFlags & 1) != 0) {
            temp_v0 = sp20->unk_14B;
            if ((temp_v0 != 4) && (temp_v0 != 0)) {
                arg0->unk_3A8 = 0x84F;
            }
            func_80AD3DA4(arg0, arg1);
        } else {
            temp_v0_2 = sp20->unk_14B;
            if ((temp_v0_2 == 4) || (temp_v0_2 == 0)) {
                arg0->unk_3B2 = 0x10;
                arg0->velocity.y = 1.5f;
            } else {
                arg0->unk_3A8 = 0x84F;
                arg0->unk_3D8 = 1;
                func_80AD3380((SkelAnime *) &arg0[1].home.pos.y, &D_80AD57E0, 7);
                arg0->unk_3B2 = 7;
            }
        }
    }
    return sp24;
}

s32 func_80AD4C4C(void *arg0) {
    f32 temp_f0;

    if ((arg0->unk_90 & 1) != 0) {
        if (arg0->unk_98 < 100.0f) {
            return 1;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    temp_f0 = arg0->unk_98;
    if ((temp_f0 > 50.0f) && (temp_f0 < 200.0f)) {
        return 1;
    }
    return 0;
}

? func_80AD4CCC(Actor *arg0, GlobalContext *arg1) {
    s16 sp1E;
    s16 temp_v0;
    s16 temp_v1;
    u8 temp_v0_2;
    void *temp_a2;

    temp_v0 = arg0->unk_3B2;
    temp_a2 = arg1->actorCtx.actorList[2].first;
    temp_v1 = arg0->yawTowardsPlayer - arg0->shape.rot.y;
    if (((temp_v0 == 4) || (temp_v0 == 5)) && (arg0->isTargeted != 0) && ((arg0->bgCheckFlags & 1) == 0) && ((temp_v0_2 = temp_a2->unk_14B, (temp_v0_2 == 4)) || (temp_v0_2 == 0))) {
        arg0->unk_3B2 = 0x10;
        arg0->speedXZ = 0.0f;
        arg0->velocity.y = 1.5f;
        return 1;
    }
    sp1E = temp_v1;
    if ((func_80AD4C4C(temp_a2, 4) != 0) && (arg0->isTargeted != 0) && ((s32) temp_v1 < 0x4000) && ((s32) temp_v1 >= -0x3FFF)) {
        func_800B863C(arg0, arg1);
    }
    return 1;
}

void func_80AD4DB4(EnTrt2 *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s32 temp_v0_2;
    u8 temp_v0_3;

    this->actor.flags &= -0x11;
    Actor_SetObjectSegment(globalCtx, (Actor *) this);
    Actor_SetScale((Actor *) this, 0.008f);
    this->unk_1E0 = func_8013D648(globalCtx, (s16) ((s32) (this->actor.params & 0xFC00) >> 0xA), 0x3F);
    this->unk_3AE = Rand_S16Offset(0x64, 0x32);
    this->unk_3B0 = 0xA;
    this->unk_3A8 = 0;
    this->actor.world.pos.x += D_80AD590C;
    this->actor.world.pos.y += D_80AD590C;
    this->actor.world.pos.z += D_80AD590C;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    func_80AD469C(this, globalCtx);
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.colChkInfo.cylRadius = 0x32;
    this->unk_3C0 = 0;
    this->unk_3D8 = 0;
    this->unk_3B6 = 0x14;
    this->unk_3B8 = 0;
    this->unk_3BC = func_80AD4608;
    this->unk_3DA = (s16) this->actor.cutscene;
    if ((gSaveContext.weekEventReg[12] & 8) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((gSaveContext.weekEventReg[84] & 0x40) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_v0 = globalCtx->sceneNum;
    if ((temp_v0 == 0x45) || (temp_v0 == 0)) {
        if (gSaveContext.day == 2) {
            temp_v0_3 = gSaveContext.weekEventReg[15];
            if ((temp_v0_3 & 0x80) == 0) {
                gSaveContext.weekEventReg[15] = temp_v0_3 | 0x80;
                this->unk_3B2 = 3;
                goto block_17;
            }
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_v0_2 = gSaveContext.day;
    if (temp_v0_2 == 2) {
        if ((gSaveContext.weekEventReg[15] & 0x80) != 0) {
            this->unk_3B2 = 4;
            goto block_17;
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (temp_v0_2 == 3) {
        this->unk_3B2 = 4;
    }
block_17:
    this->actionFunc = func_80AD4FE4;
}

void func_80AD4FE4(EnTrt2 *this, GlobalContext *globalCtx) {
    this->unk_3BC(this);
    *(&D_80AD5910 + (this->unk_3B2 * 4))(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    if (globalCtx->sceneNum != 0x45) {
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 26.0f, 10.0f, 0.0f, 5U);
    }
    Actor_SetHeight((Actor *) this, 90.0f);
    SkelAnime_FrameUpdateMatrix(&this->unk_150);
}

void EnTrt2_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    EnTrt2 *this = (EnTrt2 *) thisx;

    temp_a1 = &this->unk_194;
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80AD58A0);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80AD58D8, &D_80AD58CC);
    Actor_ProcessInitChain((Actor *) this, D_80AD5964);
    this->actionFunc = func_80AD4DB4;
}

void EnTrt2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTrt2 *this = (EnTrt2 *) thisx;
    SkelAnime_Free(&this->unk_150, globalCtx);
    Collider_DestroyCylinder(globalCtx, &this->unk_194);
}

void EnTrt2_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    EnTrt2 *this = (EnTrt2 *) thisx;

    temp_v0 = this->unk_3B2;
    if ((temp_v0 != 6) && (temp_v0 != 0xA) && (temp_v0 != 0xD) && (temp_v0 != 0xE) && (temp_v0 != 0x10) && (temp_v0 != 8) && (temp_v0 != 9)) {
        func_80AD4B4C((Actor *) this, globalCtx);
    }
    this->actionFunc(this, globalCtx);
    func_80AD341C(this, globalCtx);
    func_80AD5234(this, globalCtx);
    temp_v0_2 = this->unk_3B2;
    if ((temp_v0_2 != 6) && (temp_v0_2 != 0xA) && (temp_v0_2 != 0xD) && (temp_v0_2 != 0xE) && (temp_v0_2 != 0x10) && (temp_v0_2 != 8) && (temp_v0_2 != 9)) {
        func_80AD4CCC((Actor *) this, globalCtx);
    }
}

void func_80AD5234(EnTrt2 *arg0, GlobalContext *arg1) {
    void *sp4C;
    f32 sp44;
    ? sp40;
    ? sp34;
    s16 temp_v1;
    s16 temp_v1_2;
    void *temp_t0;
    s16 phi_v0;
    s16 phi_v0_2;

    temp_t0 = arg1->actorCtx.actorList[2].first;
    sp4C = temp_t0;
    Math_SmoothStepToS(arg0 + 0x3D6, (s16) (arg0->actor.yawTowardsPlayer - arg0->actor.shape.rot.y), 4, 0x38E0, (s16) 1);
    temp_v1 = arg0->unk_3D6;
    if ((s32) temp_v1 < -0x38E0) {
        arg0->unk_3D6 = -0x38E0;
    } else {
        phi_v0 = temp_v1;
        if ((s32) temp_v1 >= 0x38E1) {
            phi_v0 = 0x38E0;
        }
        arg0->unk_3D6 = phi_v0;
    }
    sp40.unk_0 = (s32) temp_t0->world.pos.x;
    sp40.unk_4 = (s32) temp_t0->world.pos.y;
    sp40.unk_8 = (s32) temp_t0->world.pos.z;
    if (arg0->unk_3B2 == 8) {
        sp44 = temp_t0[9].shape.feetPos[1].x + 3.0f;
    } else {
        sp44 = temp_t0[9].shape.feetPos[1].x + 45.0f;
    }
    sp34.unk_0 = (s32) arg0->actor.world.pos.x;
    sp34.unk_4 = (s32) arg0->actor.world.pos.y;
    sp34.unk_8 = (s32) arg0->actor.world.pos.z;
    Math_SmoothStepToS(arg0 + 0x3D4, Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40), 4, 0x1C70, (s16) 1);
    temp_v1_2 = arg0->unk_3D4;
    if ((s32) temp_v1_2 < -0x1C70) {
        arg0->unk_3D4 = -0x1C70;
        return;
    }
    phi_v0_2 = temp_v1_2;
    if ((s32) temp_v1_2 >= 0x1C71) {
        phi_v0_2 = 0x1C70;
    }
    arg0->unk_3D4 = phi_v0_2;
}

void func_80AD5394(s16 arg0, s16 arg1, void *arg2, s16 *arg3, s32 arg4) {
    ? sp7C;
    ? sp70;
    s16 sp6A;
    s16 sp68;
    ? sp28;
    s16 temp_a1;

    sp70.unk_0 = (f32) D_801D15B0.x;
    sp70.unk_4 = (f32) D_801D15B0.y;
    sp70.unk_8 = (f32) D_801D15B0.z;
    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp70, (Vec3f *) &sp7C);
    SysMatrix_CopyCurrentState((MtxF *) &sp28);
    func_8018219C((MtxF *) &sp28, (Vec3s *) &sp68, 0);
    arg2->unk_0 = (s32) sp7C.unk_0;
    arg2->unk_4 = (s32) sp7C.unk_4;
    arg2->unk_8 = (s32) sp7C.unk_8;
    if (arg4 != 0) {
        temp_a1 = sp68 + arg0;
        sp6A += arg1;
        sp68 = temp_a1;
        Math_SmoothStepToS(arg3, temp_a1, 4, 0x1FFE, (s16) 1);
        Math_SmoothStepToS(&arg3[1], sp6A, 4, 0x1FFE, (s16) 1);
        Math_SmoothStepToS(&arg3[2], sp6C, 4, 0x1FFE, (s16) 1);
        return;
    }
    arg3->unk_0 = sp68;
    arg3[1] = sp6A;
    arg3[2] = sp6C;
}

s32 func_80AD54C8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    void *sp1C;
    void *temp_v1;

    if ((arg1 == 8) || (arg1 == 0xD) || (arg1 == 0x13)) {
        temp_v1 = arg5 + (arg1 * 2);
        sp1C = temp_v1;
        arg4->y += (s32) Math_SinS(temp_v1->unk_33C) * 0xC8;
        arg4->z += (s32) Math_CosS(temp_v1->unk_372) * 0xC8;
    }
    return 0;
}

void func_80AD5584(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp30;
    s32 phi_v0;

    sp30.unk_0 = (s32) D_80AD596C.unk_0;
    sp30.unk_4 = (s32) D_80AD596C.unk_4;
    sp30.unk_8 = (s32) D_80AD596C.unk_8;
    phi_v0 = 0;
    if ((s32) arg4->unk_3B2 >= 8) {
        phi_v0 = 1;
    }
    if (arg1 == 0x15) {
        func_80AD5394(arg4->unk_3D4, arg4->unk_3D6, arg4 + 0x3C8, arg4 + 0x3C2, phi_v0);
        SysMatrix_InsertTranslation(arg4[2].overlayEntry, arg4->unk_3CC, arg4[3].flags, 0);
        Matrix_Scale(arg4->scale.x, arg4->scale.y, arg4->scale.z, 1);
        Matrix_RotateY(arg4->unk_3C4, 1U);
        SysMatrix_InsertXRotation_s(arg4->unk_3C2, 1);
        SysMatrix_InsertZRotation_s(arg4->unk_3C6, 1);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp30, arg4 + 0x3C);
    }
}

void func_80AD566C(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    if (arg1 == 0x15) {
        SysMatrix_InsertTranslation(arg2[2].overlayEntry, arg2->unk_3CC, arg2[3].flags, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        Matrix_RotateY(arg2->unk_3C4, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk_3C2, 1);
        SysMatrix_InsertZRotation_s(arg2->unk_3C6, 1);
    }
}

void func_80AD56E8(Actor *arg0, GlobalContext *arg1) {
    GraphicsContext *sp3C;
    Gfx *sp34;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    temp_a0 = arg1->state.gfxCtx;
    sp3C = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp3C->polyOpa.p;
    sp3C->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDB060020;
    sp3C = sp3C;
    sp34 = temp_v0;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_80AD5978 + (arg0->unk_3B8 * 4)));
    temp_v0_2 = sp3C->polyOpa.p;
    sp3C->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDB060024;
    sp30 = temp_v0_2;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80AD5978 + (arg0->unk_3B8 * 4)));
    func_801343C0(arg1, arg0[1].home.pos.z, arg0[1].world.pos.z, (s32) arg0->unk_152, func_80AD54C8, func_80AD5584, func_80AD566C, arg0);
}
