typedef struct ObjBean {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ void (*actionFunc)(ObjBean *, GlobalContext *);
    /* 0x160 */ ColliderCylinder unk_160;           /* inferred */
    /* 0x1AC */ char pad_1AC[0x6];
    /* 0x1B2 */ s16 unk_1B2;                        /* inferred */
    /* 0x1B4 */ s8 unk_1B4;                         /* inferred */
    /* 0x1B5 */ char pad_1B5[0x3];                  /* maybe part of unk_1B4[4]? */
    /* 0x1B8 */ f32 unk_1B8;                        /* inferred */
    /* 0x1BC */ char pad_1BC[0x18];                 /* maybe part of unk_1B8[7]? */
    /* 0x1D4 */ void *unk_1D4;                      /* inferred */
    /* 0x1D8 */ char pad_1D8[0x6];                  /* maybe part of unk_1D4[2]? */
    /* 0x1DE */ s8 unk_1DE;                         /* inferred */
    /* 0x1DF */ char pad_1DF[0x1F];                 /* maybe part of unk_1DE[32]? */
    /* 0x1FE */ u8 unk_1FE;                         /* inferred */
    /* 0x1FF */ char pad_1FF[0x5];                  /* maybe part of unk_1FE[6]? */
} ObjBean;                                          /* size = 0x204 */

struct _mips2c_stack_ObjBean_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjBean_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ Path *sp24;                          /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_ObjBean_Update {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80936CF0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80936D58 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ Vec3f *sp44;                         /* inferred */
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x40];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ ? sp94;                              /* inferred */
    /* 0x94 */ char pad_94[0xC];
    /* 0xA0 */ ? spA0;                              /* inferred */
    /* 0xA0 */ char pad_A0[0xC];
    /* 0xAC */ ? spAC;                              /* inferred */
    /* 0xAC */ char pad_AC[0xC];
    /* 0xB8 */ ? spB8;                              /* inferred */
    /* 0xB8 */ char pad_B8[0x8];
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_80936F04 {};              /* size 0x0 */

struct _mips2c_stack_func_80936F24 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80937130 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80937160 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80937238 {};              /* size 0x0 */

struct _mips2c_stack_func_80937268 {};              /* size 0x0 */

struct _mips2c_stack_func_809372A8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809372D0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x10];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80937468 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809374F8 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809375C8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809375F4 {
    /* 0x00 */ char pad_0[0xB8];
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
};                                                  /* size = 0xD0 */

struct _mips2c_stack_func_80937B54 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80937C10 {};              /* size 0x0 */

struct _mips2c_stack_func_80937C24 {};              /* size 0x0 */

struct _mips2c_stack_func_80937C30 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80937CA0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80937CE4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80937D54 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80937DD8 {};              /* size 0x0 */

struct _mips2c_stack_func_80937DEC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80937FB0 {};              /* size 0x0 */

struct _mips2c_stack_func_80937FC8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809381B0 {};              /* size 0x0 */

struct _mips2c_stack_func_809381C4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80938284 {};              /* size 0x0 */

struct _mips2c_stack_func_80938298 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8093833C {};              /* size 0x0 */

struct _mips2c_stack_func_80938358 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809383B4 {};              /* size 0x0 */

struct _mips2c_stack_func_809383D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80938408 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80938444 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809384E8 {};              /* size 0x0 */

struct _mips2c_stack_func_80938504 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80938588 {};              /* size 0x0 */

struct _mips2c_stack_func_809385A8 {
    /* 0x00 */ char pad_0[0x22];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80938670 {};              /* size 0x0 */

struct _mips2c_stack_func_8093868C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80938704 {};              /* size 0x0 */

struct _mips2c_stack_func_80938728 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093876C {};              /* size 0x0 */

struct _mips2c_stack_func_80938780 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80938804 {};              /* size 0x0 */

struct _mips2c_stack_func_80938834 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80938874 {};              /* size 0x0 */

struct _mips2c_stack_func_809388A8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8093892C {};              /* size 0x0 */

struct _mips2c_stack_func_80938958 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80938998 {};              /* size 0x0 */

struct _mips2c_stack_func_809389BC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80938A14 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80938A5C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80938AA4 {};              /* size 0x0 */

struct _mips2c_stack_func_80938AD8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80938C1C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80938E00 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80938F50 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

s32 func_800C5650(s32, ? *, ? *, f32 *, void *, s32, s32, s32, s32, ? *, ObjBean *); /* extern */
s32 func_800FE9B4(GlobalContext *);                 /* extern */
void func_80936CF0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80936D58(ObjBean *arg0, GlobalContext *arg1); /* static */
void func_80936F04(Actor *arg0);                    /* static */
void func_80936F24(DynaPolyActor *arg0);            /* static */
void func_80937130(Actor *arg0);                    /* static */
void func_80937160(Actor *arg0);                    /* static */
void func_80937238(ObjBean *arg0);                  /* static */
void func_80937268(ObjBean *arg0, GlobalContext *arg1); /* static */
void func_809372A8(ObjBean *arg0);                  /* static */
void func_809372D0(ObjBean *arg0);                  /* static */
s32 func_80937468(Actor *arg0, GlobalContext *arg1); /* static */
void *func_809374F8(Actor *arg0, GlobalContext *arg1); /* static */
void func_809375C8(Actor *, GlobalContext *);       /* static */
void func_809375F4(ObjBean *arg0, GlobalContext *arg1); /* static */
void func_80937B54(Actor *arg0);                    /* static */
void func_80937C10(ObjBean *arg0);                  /* static */
void func_80937C24(s32 arg0);                       /* static */
void func_80937C30(Actor *arg0);                    /* static */
void func_80937CA0(void *arg0);                     /* static */
void func_80937CE4(void *arg0);                     /* static */
void func_80937D54(Actor *arg0);                    /* static */
void func_80937DD8(ObjBean *arg0);                  /* static */
void func_80937DEC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80937FB0(Actor *arg0);                    /* static */
void func_80937FC8(Actor *arg0, GlobalContext *arg1); /* static */
void func_809381B0(Actor *arg0);                    /* static */
void func_809381C4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80938284(Actor *arg0);                    /* static */
void func_80938298(Actor *arg0, GlobalContext *arg1); /* static */
void func_8093833C(Actor *arg0);                    /* static */
void func_80938358(Actor *arg0, ? arg1);            /* static */
void func_809383B4(Actor *arg0);                    /* static */
void func_809383D0(void *arg0, ? arg1);             /* static */
void func_80938408(Actor *arg0);                    /* static */
void func_80938444(Actor *arg0, ? arg1);            /* static */
void func_809384E8(Actor *arg0);                    /* static */
void func_80938504(void *arg0, ? arg1);             /* static */
void func_80938588(void *arg0, void *);             /* static */
void func_809385A8(Actor *arg0, ? arg1);            /* static */
void func_80938670(Actor *arg0);                    /* static */
void func_8093868C(Actor *arg0, ? arg1);            /* static */
void func_80938704(ObjBean *arg0);                  /* static */
void func_80938728(void *arg0, ? arg1);             /* static */
void func_8093876C(void *arg0);                     /* static */
void func_80938780(Actor *arg0, GlobalContext *arg1); /* static */
void func_80938804(ObjBean *arg0);                  /* static */
void func_80938834(DynaPolyActor *arg0, ? arg1);    /* static */
void func_80938874(DynaPolyActor *arg0);            /* static */
void func_809388A8(ObjBean *arg0, GlobalContext *arg1); /* static */
void func_8093892C(ObjBean *arg0);                  /* static */
void func_80938958(DynaPolyActor *arg0, ? arg1);    /* static */
void func_80938998(ObjBean *arg0);                  /* static */
void func_809389BC(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_80938A14(DynaPolyActor *arg0);            /* static */
void func_80938A5C(Actor *arg0);                    /* static */
void func_80938AA4(Actor *arg0);                    /* static */
void func_80938AD8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80938C1C(Actor *this, GlobalContext *globalCtx); /* static */
void func_80938E00(Actor *this, GlobalContext *globalCtx); /* static */
void func_80938F50(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_06000090;
extern ? D_060002D0;
extern CollisionHeader D_060004BC;
extern ? D_06000530;
extern Gfx D_06002208;
static ColliderCylinderInit D_80938FA0 = {
    {0xA, 0, 0, 9, 0x20, 1},
    {0, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0x40, 0x1E, 0xFFE1, {0, 0, 0}},
};
static ColliderCylinderInit D_80938FCC = {
    {0xA, 0, 0x21, 0, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0},
    {0xA, 0xA, 0, {0, 0, 0}},
};
static ? D_80938FF8;                                /* unable to generate initializer */
static Vec3f D_80939018 = {0.0f, 30.0f, 0.0f};
static ? D_80939024;                                /* unable to generate initializer */
static InitChainEntry D_8093902C[5];                /* unable to generate initializer */

void func_80936CF0(Actor *arg0, GlobalContext *arg1) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    s32 sp20;
    Actor *temp_a3;
    CollisionPoly **temp_a1;
    f32 temp_f16;

    temp_a3 = arg0;
    sp24 = temp_a3->world.pos.x;
    temp_a1 = temp_a3 + 0x80;
    sp28 = temp_a3->world.pos.y + 29.999998f;
    temp_f16 = temp_a3->world.pos.z;
    arg0 = temp_a3;
    sp2C = temp_f16;
    arg0->floorHeight = func_800C411C(arg1 + 0x830, temp_a1, &sp20, temp_a3, (Vec3f *) &sp24);
}

s32 func_80936D58(ObjBean *arg0, GlobalContext *arg1) {
    ? spB8;
    ? spAC;
    ? spA0;
    ? sp94;
    f32 sp88;
    ? sp48;
    Vec3f *sp44;
    CollisionPoly *temp_a0_2;
    Vec3f *temp_a0;

    Matrix_RotateY(arg0->actor.shape.rot.y, 0U);
    SysMatrix_InsertXRotation_s(arg0->actor.shape.rot.x, 1);
    SysMatrix_InsertZRotation_s(arg0->actor.shape.rot.z, 1);
    SysMatrix_MultiplyVector3fByState(&D_80939018, (Vec3f *) &spAC);
    temp_a0 = arg0 + 0x24;
    sp44 = temp_a0;
    Math_Vec3f_Sum(temp_a0, (Vec3f *) &spAC, (Vec3f *) &spA0);
    Math_Vec3f_Diff(temp_a0, (Vec3f *) &spAC, (Vec3f *) &sp94);
    if (func_800C5650(arg1 + 0x830, &spA0, &sp94, &sp88, arg0 + 0x80, 1, 1, 1, 1, &spB8, arg0) != 0) {
        temp_a0_2 = arg0->actor.floorPoly;
        arg0->actor.world.pos.x = ((f32) temp_a0_2->normal.x * 0.00003051851f * 1.9f) + sp88;
        arg0->actor.world.pos.y = ((f32) temp_a0_2->normal.y * 0.00003051851f * 1.9f) + sp8C;
        arg0->actor.world.pos.z = ((f32) temp_a0_2->normal.z * 0.00003051851f * 1.9f) + sp90;
        func_800C0094(temp_a0_2, arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (MtxF *) &sp48);
        SysMatrix_SetCurrentState((MtxF *) &sp48);
        Matrix_RotateY(arg0->actor.shape.rot.y, 1U);
        SysMatrix_CopyCurrentState((MtxF *) &sp48);
        func_8018219C((MtxF *) &sp48, arg0 + 0xBC, 0);
        return 1;
    }
    return 0;
}

void func_80936F04(Actor *arg0) {
    s16 temp_v0;

    arg0->unk_1B0 = 0;
    temp_v0 = arg0->unk_1B0;
    arg0->unk_1AE = temp_v0;
    arg0->unk_1AC = temp_v0;
    arg0->unk_1C8 = 0.0f;
}

void func_80936F24(DynaPolyActor *arg0) {
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f2;

    arg0[1].actor.sfx += 0xB6;
    arg0[1].actor.unk_52 += 0xFB;
    arg0->unk_1B0 = (s16) (arg0->unk_1B0 + 0x64);
    Math_StepToF(arg0 + 0x1C8, 2.0f, 0.1f);
    temp_f20 = Math_SinS((s16) (arg0[1].actor.sfx * 3));
    arg0[1].actor.speedXZ = (Math_SinS((s16) (arg0[1].actor.unk_52 * 3)) + temp_f20) * arg0[1].actor.velocity.z;
    temp_f20_2 = Math_CosS((s16) (arg0[1].actor.sfx * 4));
    arg0[1].actor.gravity = (Math_CosS((s16) (arg0[1].actor.unk_52 * 4)) + temp_f20_2) * arg0[1].actor.velocity.z;
    temp_f20_3 = Math_SinS((s16) (arg0->unk_1B0 * 5));
    temp_f2 = ((Math_SinS((s16) (arg0[1].actor.unk_52 * 8)) * 0.01f) + (temp_f20_3 * 0.06f) + 1.07f) * 0.1f;
    arg0->actor.scale.z = temp_f2;
    arg0->actor.scale.x = temp_f2;
    arg0->actor.scale.y = ((Math_CosS((s16) (arg0->unk_1B0 * 0xA)) * 0.2f) + 1.0f) * 0.1f;
    temp_f20_4 = Math_SinS((s16) (arg0[1].actor.sfx * 3));
    arg0->actor.shape.rot.y = (s32) (Math_SinS((s16) (arg0->unk_1B0 * 2)) * 2100.0f) + arg0->actor.home.rot.y + (s32) (temp_f20_4 * 1000.0f);
}

void func_80937130(Actor *arg0) {
    s16 temp_v0;

    arg0->unk_1B0 = 0;
    temp_v0 = arg0->unk_1B0;
    arg0->unk_1AE = temp_v0;
    arg0->unk_1AC = temp_v0;
    Actor_SetScale(arg0, 0.0f);
}

void func_80937160(Actor *arg0) {
    f32 temp_f2;

    arg0->unk_1AC = (s16) (arg0->unk_1AC + 0x384);
    if ((s32) arg0->unk_1AC >= 0x6000) {
        arg0->unk_1AC = 0x5FFF;
    }
    arg0->unk_1AE = (s16) (arg0->unk_1AE + 0x258);
    if ((s32) arg0->unk_1AE >= 0x4001) {
        arg0->unk_1AE = 0x4000;
    }
    arg0->scale.y = Math_SinS(arg0->unk_1AC) * 0.16970563f;
    temp_f2 = Math_SinS(arg0->unk_1AE) * 0.10700001f;
    arg0->scale.z = temp_f2;
    arg0->scale.x = temp_f2;
    Math_StepToF(arg0 + 0x1CC, 0.0f, 0.1f);
    Math_StepToF(arg0 + 0x1D0, 0.0f, 0.1f);
    Math_ScaledStepToS(arg0 + 0xBE, arg0->home.rot.y, 0x64);
}

void func_80937238(ObjBean *arg0) {
    arg0->actor.world.pos.x = arg0->unk_1BC + arg0->unk_1CC;
    arg0->actor.world.pos.y = arg0->unk_1C0;
    arg0->actor.world.pos.z = arg0->unk_1C4 + arg0->unk_1D0;
}

void func_80937268(ObjBean *arg0, GlobalContext *arg1) {
    arg0->unk_1DA = 0;
    arg0->unk_1D8 = *(arg1->setupPathList + ((((s32) arg0->actor.params >> 8) & 0x3F) * 8)) - 1;
    arg0->unk_1DC = 1;
}

void func_809372A8(ObjBean *arg0) {
    Math_Vec3s_ToVec3f(arg0 + 0x1BC, arg0->unk_1D4);
}

void func_809372D0(ObjBean *arg0) {
    ? sp38;
    f32 sp34;
    Vec3f *sp28;
    Vec3f *sp20;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0_2;
    void *temp_v0;
    f32 phi_f2;
    f32 phi_f12;

    Math_Vec3s_ToVec3f((Vec3f *) &sp38, arg0->unk_1D4 + (arg0->unk_1DC * 6));
    temp_a1 = arg0 + 0x1BC;
    temp_a2 = arg0 + 0x64;
    sp20 = temp_a2;
    sp28 = temp_a1;
    Math_Vec3f_Diff((Vec3f *) &sp38, temp_a1, temp_a2);
    temp_f0 = Math3D_Vec3fMagnitude(sp20);
    temp_v0 = (arg0->unk_1DE * 8) + &D_80938FF8;
    temp_f2 = temp_v0->unk_0;
    temp_f12 = temp_v0->unk_4;
    phi_f2 = temp_f2;
    phi_f12 = temp_f12;
    if (temp_f0 < (arg0->actor.speedXZ * 8.0f)) {
        phi_f2 = ((temp_f2 - 2.0f) * 0.1f) + 2.0f;
        phi_f12 = temp_f12 * 0.4f;
    }
    sp34 = temp_f0;
    Math_StepToF(arg0 + 0x70, phi_f2, phi_f12);
    temp_f0_2 = arg0->actor.speedXZ;
    if ((temp_f0_2 + 0.05f) < temp_f0) {
        Math_Vec3f_Scale(sp20, temp_f0_2 / temp_f0);
        arg0->unk_1BC += arg0->actor.velocity.x;
        arg0->unk_1C0 += arg0->actor.velocity.y;
        arg0->unk_1C4 += arg0->actor.velocity.z;
        return;
    }
    Math_Vec3f_Copy(sp28, (Vec3f *) &sp38);
    temp_v0_2 = arg0->unk_1DC;
    arg0->unk_1DA = temp_v0_2;
    if ((s32) arg0->unk_1DA >= (s32) arg0->unk_1D8) {
        arg0->unk_1DC = 0;
    } else {
        arg0->unk_1DC = temp_v0_2 + 1;
    }
    arg0->actor.speedXZ *= 0.5f;
}

s32 func_80937468(Actor *arg0, GlobalContext *arg1) {
    void *temp_s0;
    void *temp_s0_2;
    void *phi_s0;

    temp_s0 = arg1->actorCtx.actorList[1].first;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
loop_2:
        if ((phi_s0->id == 0xD) && (Math3D_DistanceSquared(phi_s0 + 0x24, arg0 + 0x24) < 10000.0f)) {
            return 1;
        }
        temp_s0_2 = phi_s0->next;
        phi_s0 = temp_s0_2;
        if (temp_s0_2 == 0) {
            goto block_6;
        }
        goto loop_2;
    }
block_6:
    return 0;
}

void *func_809374F8(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    void *temp_s0;
    void *temp_s0_2;
    void *phi_s0;
    void *phi_s0_2;

    temp_s0 = arg1->actorCtx.actorList[1].first;
    phi_s0 = temp_s0;
    phi_s0_2 = temp_s0;
    if (temp_s0 != 0) {
loop_2:
        phi_s0_2 = phi_s0;
        if ((phi_s0->id != 0x91) || (temp_v1 = phi_s0->params, ((((s32) temp_v1 >> 0xE) & 3) != 0)) || (arg0->room != phi_s0->room) || ((((s32) temp_v1 >> 7) & 1) != 0) || ((((s32) arg0->params >> 7) & 0x7F) != (temp_v1 & 0x7F)) || !(Math3D_DistanceSquared(phi_s0 + 0x24, arg0 + 0x24) < 100.0f)) {
            temp_s0_2 = phi_s0->next;
            phi_s0 = temp_s0_2;
            phi_s0_2 = temp_s0_2;
            if (temp_s0_2 != 0) {
                goto loop_2;
            }
        }
    }
    return phi_s0_2;
}

void func_809375C8(void) {
    Actor *temp_v0;

    temp_v0 = func_809374F8();
    if (temp_v0 != 0) {
        temp_v0->unk_200 = 1;
    }
}

void func_809375F4(ObjBean *arg0, GlobalContext *arg1) {
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 *temp_s5;
    f32 *temp_s7;
    f32 temp_f20;
    f32 temp_f6;
    f32 temp_f6_2;
    s16 temp_s1;
    s32 temp_s2;
    s32 temp_s4;
    s16 phi_s1;
    s32 phi_s3;
    s32 phi_v0;
    s32 phi_s4;

    temp_s7 = &spB8;
    temp_s5 = &spC4;
    phi_s1 = 0;
    phi_s4 = 0;
    do {
        temp_s1 = phi_s1 + 0x4E20;
        temp_f20 = Rand_ZeroOne() * 60.0f;
        spC4 = (Math_SinS(temp_s1) * temp_f20) + arg0->actor.world.pos.x;
        spC8 = arg0->actor.world.pos.y;
        spCC = (Math_CosS(temp_s1) * temp_f20) + arg0->actor.world.pos.z;
        temp_f6 = Math_SinS(temp_s1) * 3.5f;
        spB8 = temp_f6;
        spBC = Rand_ZeroOne() * 13.0f;
        temp_f6_2 = temp_f6;
        spC0 = Math_CosS(temp_s1) * 3.5f;
        spB8 = temp_f6_2 + (arg0->actor.world.pos.x - arg0->actor.prevPos.x);
        spBC += arg0->actor.world.pos.y - arg0->actor.prevPos.y;
        spC0 += arg0->actor.world.pos.z - arg0->actor.prevPos.z;
        temp_s2 = (s32) (Rand_ZeroOne() * 180.0f) + 0x1E;
        phi_s1 = temp_s1;
        phi_s3 = -0x64;
        phi_v0 = 0x40;
        if (temp_s2 < 0x5A) {
            phi_s3 = -0x50;
            if (Rand_ZeroOne() < 0.1f) {
                phi_v0 = 0x60;
            }
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s5, (Vec3f *) temp_s7, (Vec3f *) temp_s5, (s16) phi_s3, (s16) phi_v0, (s16) 0x28, (s16) 3, (s16) 0, (s16) temp_s2, (s16) 0, (s16) 0, (temp_s2 >> 3) + 0x28, (s16) -1, (s16) 1, *(&D_80939024 + ((phi_s4 & 1) * 4)));
        temp_s4 = phi_s4 + 1;
        phi_s4 = temp_s4;
    } while (temp_s4 != 0x24);
}

void ObjBean_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp2C;
    Path *sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    ObjBean *this = (ObjBean *) thisx;

    sp2C = ((s32) this->actor.params >> 0xE) & 3;
    Actor_ProcessInitChain((Actor *) this, D_8093902C);
    this->unk_1FE = 0;
    this->unk_1B8 = 0.1f;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 3);
    temp_a1 = &this->unk_160;
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    if ((sp2C == 1) || (sp2C == 2)) {
        this->actor.update = func_80938C1C;
        this->actor.textId = 0xFD;
        if (sp2C == 1) {
            Collider_SetCylinder(globalCtx, sp20, (Actor *) this, &D_80938FCC);
            Collider_UpdateCylinder((Actor *) this, sp20);
        }
        this->actor.flags |= 0x10;
        func_80937C10(this);
        if (func_80936D58(this, globalCtx) == 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        func_800BC154(globalCtx, &globalCtx->actorCtx, (Actor *) this, 7U);
        func_80937DD8(this);
        return;
    }
    sp24 = &globalCtx->setupPathList[((s32) this->actor.params >> 8) & 0x3F];
    this->unk_1DE = this->actor.home.rot.z & 3;
    this->actor.world.rot.z = 0;
    this->actor.home.rot.z = 0;
    this->actor.shape.rot.z = 0;
    this->unk_1FE |= 2;
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_060004BC);
    Collider_SetCylinder(globalCtx, sp20, (Actor *) this, &D_80938FA0);
    Collider_UpdateCylinder((Actor *) this, sp20);
    this->unk_1D4 = Lib_SegmentedToVirtual((void *) sp24->points);
    func_80937268(this, globalCtx);
    func_809372A8(this);
    func_80937238(this);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 8.8f);
    func_80936CF0((Actor *) this, globalCtx);
    temp_v0 = this->actor.params;
    if (((((s32) temp_v0 >> 7) & 1) == 0) && (Flags_GetSwitch(globalCtx, temp_v0 & 0x7F) != 0) && (Flags_GetSwitch(globalCtx, (this->actor.params + 1) & 0x7F) == 0) && (func_800FE9B4(globalCtx) != 0)) {
        Actor_SetSwitchFlag(globalCtx, (this->actor.params + 1) & 0x7F);
    }
    temp_v0_2 = this->actor.params;
    if (((((s32) temp_v0_2 >> 7) & 1) != 0) || (Flags_GetSwitch(globalCtx, (temp_v0_2 + 1) & 0x7F) != 0)) {
        func_80938804(this);
        return;
    }
    func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
    func_80938704(this);
}

void ObjBean_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;
    ObjBean *this = (ObjBean *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk_144);
    Collider_DestroyCylinder(globalCtx, &this->unk_160);
}

void func_80937B54(Actor *arg0) {
    f32 temp_f2;

    Math_StepToS(arg0 + 0x1EE, arg0->unk_1F0, arg0->unk_1F2);
    Math_StepToS(arg0 + 0x1F4, arg0[1].colChkInfo.cylHeight, arg0[1].colChkInfo.cylYShift);
    arg0->unk_1FA = (s16) (arg0->unk_1FA + arg0[1].colChkInfo.cylRadius);
    arg0->unk_1FC = (s16) (s32) (6372.0f - (Math_SinS(arg0->unk_1FA) * (f32) arg0->unk_1EE));
    arg0->scale.y = Math_SinS(arg0->unk_1FC) * 0.17434467f;
    temp_f2 = Math_CosS(arg0->unk_1FC) * 0.12207746f;
    arg0->scale.z = temp_f2;
    arg0->scale.x = temp_f2;
}

void func_80937C10(ObjBean *arg0) {
    arg0->unk_1E8 = func_80937C24;
}

void func_80937C24(s32 arg0) {

}

void func_80937C30(Actor *arg0) {
    arg0[1].colChkInfo.displacement.x = func_80937CA0;
    arg0->unk_1EC = Rand_S16Offset(0xC, 0x28);
    arg0->unk_1F0 = Rand_S16Offset(0xC8, 0x190);
    arg0->unk_1F2 = 0x14;
    arg0[1].colChkInfo.cylHeight = Rand_S16Offset(0x64, 0x320);
    arg0[1].colChkInfo.cylYShift = 0x14;
}

void func_80937CA0(void *arg0) {
    arg0->unk_1EC = (s16) (arg0->unk_1EC - 1);
    func_80937B54();
    if ((s32) arg0->unk_1EC < 0) {
        func_80937CE4(arg0);
    }
}

void func_80937CE4(void *arg0) {
    arg0->unk_1E8 = func_80937D54;
    arg0->unk_1EC = Rand_S16Offset(0x1E, 4);
    arg0->unk_1F0 = Rand_S16Offset(0x7D0, 0x3E8);
    arg0->unk_1F2 = 0xC8;
    arg0->unk_1F6 = Rand_S16Offset(0x36B0, 0x1770);
    arg0->unk_1F8 = 0xFA0;
}

void func_80937D54(Actor *arg0) {
    arg0->unk_1EC = (s16) (arg0->unk_1EC - 1);
    if (arg0->unk_1EC == 0xE) {
        arg0->unk_1F0 = Rand_S16Offset(0xC8, 0x190);
        arg0[1].colChkInfo.cylHeight = Rand_S16Offset(0x64, 0x1F4);
        arg0[1].colChkInfo.cylYShift = 0x7D0;
    }
    func_80937B54(arg0);
    if ((s32) arg0->unk_1EC < 0) {
        func_80937C30(arg0);
    }
}

void func_80937DD8(ObjBean *arg0) {
    arg0->actionFunc = func_80937DEC;
}

void func_80937DEC(Actor *arg0, GlobalContext *arg1) {
    s32 sp20;
    s32 temp_t8;

    temp_t8 = ((s32) arg0->params >> 0xE) & 3;
    sp20 = temp_t8;
    if (temp_t8 == 1) {
        if (func_809374F8(arg0, arg1) == 0) {
            goto block_4;
        }
        arg0[1].colChkInfo.acHitEffect = 1;
    } else {
block_4:
        arg0[1].colChkInfo.acHitEffect = 0;
    }
    if ((arg0[1].colChkInfo.acHitEffect != 0) && (Flags_GetSwitch(arg1, (((s32) arg0->params >> 7) + 1) & 0x7F) == 0) && (Flags_GetSwitch(arg1, ((s32) arg0->params >> 7) & 0x7F) != 0) && (func_800FE9B4(arg1) != 0)) {
        Actor_SetSwitchFlag(arg1, (((s32) arg0->params >> 7) + 1) & 0x7F);
    }
    if ((arg0[1].colChkInfo.acHitEffect != 0) && (Flags_GetSwitch(arg1, (((s32) arg0->params >> 7) + 1) & 0x7F) != 0)) {
        Actor_MarkForDeath(arg0);
        return;
    }
    if (sp20 == 2) {
        arg0->draw = func_80938F50;
    } else {
        arg0->draw = func_80938E00;
    }
    if ((arg0[1].colChkInfo.acHitEffect != 0) && (Flags_GetSwitch(arg1, ((s32) arg0->params >> 7) & 0x7F) != 0)) {
        arg0[1].colChkInfo.atHitEffect |= 5;
        func_80937C30(arg0);
    } else {
        arg0[1].colChkInfo.atHitEffect |= 1;
        func_80937C10((ObjBean *) arg0);
    }
    if (Flags_GetSwitch(arg1, arg0->params & 0x7F) != 0) {
        arg0[1].colChkInfo.damageTable = (DamageTable *)5;
    } else {
        arg0[1].colChkInfo.damageTable = NULL;
    }
    func_80937FB0(arg0);
}

void func_80937FB0(Actor *arg0) {
    arg0->unk_1E0 = 0;
    arg0->unk_15C = func_80937FC8;
}

void func_80937FC8(Actor *arg0, GlobalContext *arg1) {
    f32 temp_v0;

    arg0[1].colChkInfo.displacement.x(arg0);
    if (func_800B84D0(arg0, arg1) != 0) {
        if (func_800B8708(arg1) == 0x2E) {
            func_809383B4(arg0);
            Actor_SetSwitchFlag(arg1, ((s32) arg0->params >> 7) & 0x7F);
        }
        if (Flags_GetSwitch(arg1, arg0->params & 0x7F) != 0) {
            arg0[1].colChkInfo.damageTable = (DamageTable *)5;
            return;
        }
        arg0[1].colChkInfo.damageTable = NULL;
        return;
    }
    if (arg0[1].colChkInfo.damageTable == 1) {
        arg0->unk_1DF = 0x10;
        func_809381B0(arg0);
        return;
    }
    if ((((arg0->unk_171 & 2) != 0) && (temp_v0 = arg0[1].world.pos.x, ((bitwise s32) temp_v0 != 0)) && (*temp_v0 == 0x1AF)) || ((arg0[1].colChkInfo.acHitEffect != 0) && ((arg0[1].colChkInfo.atHitEffect & 4) != 0) && (arg0->xzDistToPlayer < 300.0f) && (func_800FE9B4(arg1) != 0))) {
        func_809375C8(arg0, arg1);
        Actor_SetSwitchFlag(arg1, (((s32) arg0->params >> 7) + 1) & 0x7F);
        arg0[1].colChkInfo.damageTable = (DamageTable *)6;
        func_80938670(arg0);
        return;
    }
    if (arg0[1].colChkInfo.acHitEffect != 0) {
        if ((arg0[1].colChkInfo.atHitEffect & 4) != 0) {
            arg0->unk_171 = (u8) (arg0->unk_171 & 0xFFFD);
            if (arg0->xzDistToPlayer < 150.0f) {
                CollisionCheck_SetAC(arg1, &arg1->colChkCtx, (Collider *) &arg0[1].params);
                return;
            }
            /* Duplicate return node #21. Try simplifying control flow for better match */
            return;
        }
        func_800B85E0(arg0, arg1, 28.0f, 0x2E);
        /* Duplicate return node #21. Try simplifying control flow for better match */
    }
}

void func_809381B0(Actor *arg0) {
    arg0->unk_15C = func_809381C4;
}

void func_809381C4(Actor *arg0, GlobalContext *arg1) {
    arg0[1].colChkInfo.displacement.x(arg0);
    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
        if ((s32) arg0->cutscene >= 0) {
            func_800B7298(arg1, arg0, 1U);
        }
        arg0[1].colChkInfo.damageTable = (DamageTable *)2;
        func_80938284(arg0);
        return;
    }
    if (arg0[1].colChkInfo.damageTable == 4) {
        ActorCutscene_Stop((s16) arg0->cutscene);
        play_sound(0x4806U);
        arg0[1].colChkInfo.damageTable = NULL;
        func_80937FB0(arg0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
}

void func_80938284(Actor *arg0) {
    arg0->unk_15C = func_80938298;
}

void func_80938298(Actor *arg0, GlobalContext *arg1) {
    arg0[1].colChkInfo.displacement.x(arg0);
    if ((s32) arg0->unk_1E0 >= 3) {
        arg0[1].colChkInfo.damageTable = (DamageTable *)3;
        Actor_SetSwitchFlag(arg1, arg0->params & 0x7F);
        arg0[1].colChkInfo.damageTable = (DamageTable *)5;
        func_8093833C(arg0);
        return;
    }
    if (arg0[1].colChkInfo.damageTable == 4) {
        ActorCutscene_Stop((s16) arg0->cutscene);
        play_sound(0x4806U);
        arg0[1].colChkInfo.damageTable = NULL;
        func_80937FB0(arg0);
    }
}

void func_8093833C(Actor *arg0) {
    arg0->unk_15C = func_80938358;
    arg0->unk_1B2 = 4;
}

void func_80938358(Actor *arg0, ? arg1) {
    Actor *temp_a1;
    s8 temp_a0;

    temp_a1 = arg0;
    arg0 = temp_a1;
    temp_a1[1].colChkInfo.displacement.x(temp_a1, temp_a1);
    if ((s32) arg0->unk_1B2 <= 0) {
        temp_a0 = arg0->cutscene;
        arg0 = arg0;
        ActorCutscene_Stop((s16) temp_a0);
        func_80937FB0(arg0);
    }
}

void func_809383B4(Actor *arg0) {
    arg0->unk_1B2 = 0x3C;
    arg0->unk_15C = func_809383D0;
}

void func_809383D0(void *arg0, ? arg1) {
    if ((s32) arg0->unk_1B2 <= 0) {
        arg0->unk_1FE = (u8) (arg0->unk_1FE | 4);
        func_80938408();
    }
}

void func_80938408(Actor *arg0) {
    Actor_SetScale(arg0, 0.01f);
    arg0->unk_15C = func_80938444;
}

void func_80938444(Actor *arg0, ? arg1) {
    s32 sp20;
    s32 temp_v1;

    temp_v1 = Math_StepToF(arg0 + 0x5C, 0.16672663f, 0.01f) & 1;
    sp20 = temp_v1;
    arg0->scale.z = arg0->scale.x;
    if ((temp_v1 & Math_StepToF(arg0 + 0x58, 0.03569199f, 0.00113f)) != 0) {
        if ((s32) arg0->unk_1B2 <= 0) {
            func_809384E8(arg0);
        }
    } else {
        arg0->unk_1B2 = 1;
    }
    func_800B9010(arg0, 0xC6U);
}

void func_809384E8(Actor *arg0) {
    arg0->unk_1AC = 0x33E9;
    arg0->unk_15C = func_80938504;
}

void func_80938504(void *arg0, ? arg1) {
    f32 temp_f2;
    s16 temp_a0;

    arg0->unk_1AC = (s16) (arg0->unk_1AC - 0x960);
    temp_a0 = arg0->unk_1AC;
    arg0 = arg0;
    arg0->unk_5C = (f32) (Math_SinS(temp_a0) * 0.17434467f);
    temp_f2 = Math_CosS(arg0->unk_1AC) * 0.12207746f;
    arg0->unk_60 = temp_f2;
    arg0->unk_58 = temp_f2;
    if ((s32) arg0->unk_1AC < 0x18E4) {
        func_80938588(arg0, arg0);
    }
}

void func_80938588(void *arg0) {
    arg0->unk_1AC = 0;
    arg0->unk_1AE = 0xBB8;
    arg0->unk_15C = func_809385A8;
}

void func_809385A8(Actor *arg0, ? arg1) {
    s16 sp22;
    f32 temp_f2;
    s16 temp_a0;

    arg0->unk_1AC = (s16) (arg0->unk_1AC + 0x3E80);
    arg0->unk_1AE = (s16) (arg0->unk_1AE - 0xC8);
    temp_a0 = (s16) (s32) (6372.0f - (Math_SinS(arg0->unk_1AC) * (f32) arg0->unk_1AE));
    sp22 = temp_a0;
    arg0->scale.y = Math_SinS(temp_a0) * 0.17434467f;
    temp_f2 = Math_CosS(temp_a0) * 0.12207746f;
    arg0->scale.z = temp_f2;
    arg0->scale.x = temp_f2;
    if ((s32) arg0->unk_1AE < 0) {
        func_80937C30(arg0);
        func_80937FB0(arg0);
    }
}

void func_80938670(Actor *arg0) {
    arg0->unk_15C = func_8093868C;
    arg0->unk_1B2 = 0x49;
}

void func_8093868C(Actor *arg0, ? arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk_1B2;
    if ((s32) temp_v0 <= 0) {
        Actor_MarkForDeath(arg0);
        return;
    }
    if ((s32) temp_v0 < 0x15) {
        arg0->scale.x *= 0.89f;
        arg0->scale.y *= 0.89f;
        arg0->scale.z *= 0.89f;
        arg0[1].gravity *= 0.89f;
    }
}

void func_80938704(ObjBean *arg0) {
    arg0->actor.flags |= 0x10;
    arg0->actor.draw = NULL;
    arg0->actionFunc = func_80938728;
}

void func_80938728(ObjBean *arg0, GlobalContext *arg1) {
    s8 temp_a0;

    if (arg0->unk_200 != 0) {
        temp_a0 = arg0->actor.cutscene;
        arg0 = arg0;
        ActorCutscene_SetIntentToPlay((s16) temp_a0);
        func_8093876C(arg0);
    }
}

void func_8093876C(ObjBean *arg0) {
    arg0->actionFunc = func_80938780;
}

void func_80938780(Actor *arg0, GlobalContext *arg1) {
    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
        if ((s32) arg0->cutscene >= 0) {
            func_800B7298(arg1, arg0, 1U);
        }
        arg0->unk_1B4 = 0x24;
        func_80937130(arg0);
        func_80938AA4(arg0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
}

void func_80938804(ObjBean *arg0) {
    arg0->actor.flags &= -0x11;
    arg0->actor.draw = func_80938E00;
    arg0->actionFunc = func_80938834;
}

void func_80938834(DynaPolyActor *arg0, GlobalContext *arg1) {
    if (func_800CAF70(arg0) != 0) {
        func_80938874(arg0);
    }
    func_80936F24(arg0);
}

void func_80938874(DynaPolyActor *arg0) {
    arg0->unk_15C = func_809388A8;
    arg0->actor.draw = func_80938E00;
    arg0->actor.flags |= 0x10;
    arg0->actor.speedXZ = 0.0f;
}

void func_809388A8(ObjBean *arg0, GlobalContext *arg1) {
    func_809372D0(arg0);
    if (arg0->unk_1D8 == arg0->unk_1DA) {
        func_80937268(arg0, arg1);
        func_809372A8(arg0);
        func_8093892C(arg0);
    } else if (func_800CAF70((DynaPolyActor *) arg0) != 0) {
        func_800B9010((Actor *) arg0, 0xCAU);
    }
    func_80936F24((DynaPolyActor *) arg0);
}

void func_8093892C(ObjBean *arg0) {
    arg0->actor.flags |= 0x10;
    arg0->actor.draw = func_80938E00;
    arg0->actionFunc = func_80938958;
}

void func_80938958(DynaPolyActor *arg0, GlobalContext *arg1) {
    if (func_800CAF94(arg0) == 0) {
        func_80938804((ObjBean *) arg0);
    }
    func_80936F24(arg0);
}

void func_80938998(ObjBean *arg0) {
    arg0->actor.flags |= 0x10;
    arg0->actor.draw = NULL;
    arg0->actionFunc = func_809389BC;
}

void func_809389BC(DynaPolyActor *arg0, GlobalContext *arg1) {
    if (func_800CAF70(arg0) == 0) {
        func_80937268((ObjBean *) arg0, arg1);
        func_809372A8((ObjBean *) arg0);
        func_80937238((ObjBean *) arg0);
        func_80938A14(arg0);
    }
}

void func_80938A14(DynaPolyActor *arg0) {
    arg0->actor.draw = NULL;
    arg0->actor.flags |= 0x10;
    arg0->unk_1B2 = 0x64;
    func_80937130();
    arg0->unk_15C = func_80938A5C;
}

void func_80938A5C(Actor *arg0) {
    if (func_80937468() != 0) {
        arg0->unk_1B2 = 0x64;
        return;
    }
    if ((s32) arg0->unk_1B2 <= 0) {
        func_80938AA4(arg0);
    }
}

void func_80938AA4(Actor *arg0) {
    arg0->flags |= 0x10;
    arg0->draw = func_80938E00;
    arg0->unk_1B2 = 0x1E;
    arg0->unk_15C = func_80938AD8;
}

void func_80938AD8(Actor *arg0, GlobalContext *arg1) {
    s32 sp30;
    Actor *sp2C;
    f32 sp28;
    f32 sp24;
    Actor *temp_v0;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f4;
    f32 phi_f2;

    sp30 = func_80937468(arg0, arg1);
    func_80937160(arg0);
    if (arg0->unk_1B2 == 0x19) {
        Audio_PlayActorSound2(arg0, 0x8CCU);
    }
    if (sp30 != 0) {
        func_800C6314(arg1, arg1 + 0x880, arg0->unk_144);
    } else {
        func_800C6314(arg1, arg1 + 0x880, arg0->unk_144);
    }
    temp_f0 = arg0->xzDistToPlayer;
    if (temp_f0 < 74.0f) {
        temp_f2 = 74.0f - temp_f0;
        temp_v0 = arg1->actorCtx.actorList[2].first;
        phi_f2 = temp_f2;
        if (temp_f2 > 8.0f) {
            phi_f2 = 8.0f;
        }
        sp28 = phi_f2;
        sp2C = temp_v0;
        sp24 = Math_SinS(arg0->yawTowardsPlayer) * phi_f2;
        temp_f4 = temp_v0->world.pos.z + (Math_CosS(arg0->yawTowardsPlayer) * phi_f2);
        temp_v0->world.pos.x += sp24;
        temp_v0->world.pos.z = temp_f4;
    }
    if (((s32) arg0->unk_1B2 <= 0) && (sp30 == 0)) {
        func_80936F04(arg0);
        func_80938804((ObjBean *) arg0);
    }
}

void func_80938C1C(Actor *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s8 temp_v0_2;

    temp_v0 = this->unk_1B2;
    if ((s32) temp_v0 > 0) {
        this->unk_1B2 = (s16) (temp_v0 - 1);
    }
    temp_v0_2 = this->unk_1DF;
    if ((s32) temp_v0_2 > 0) {
        this->unk_1DF = (s8) (temp_v0_2 - 1);
        if (this->unk_1DF == 0) {
            this = this;
            play_sound(0x4807U);
        }
    }
    this->unk_15C(this, globalCtx, this);
}

void ObjBean_Update(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a2;
    s16 temp_v0;
    s8 temp_v0_2;
    ObjBean *this = (ObjBean *) thisx;

    temp_v0 = this->unk_1B2;
    if ((s32) temp_v0 > 0) {
        this->unk_1B2 = temp_v0 - 1;
    }
    this->actionFunc(this, globalCtx);
    temp_v0_2 = this->unk_1B4;
    if ((s32) temp_v0_2 > 0) {
        this->unk_1B4 = temp_v0_2 - 1;
        if (this->unk_1B4 == 0) {
            ActorCutscene_Stop((s16) this->actor.cutscene);
        }
    }
    if (this->actor.draw != 0) {
        func_80937238(this);
        if (this->actor.xzDistToPlayer < 150.0f) {
            temp_a2 = &this->unk_160;
            this->unk_160.dim.radius = (s16) (s32) ((this->actor.scale.x * 640.0f) + 0.5f);
            sp24 = temp_a2;
            Collider_UpdateCylinder((Actor *) this, temp_a2);
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
        }
        func_80936CF0((Actor *) this, globalCtx);
        this->actor.shape.shadowDraw = func_800B3FC0;
        this->actor.shape.shadowScale = this->actor.scale.x * 88.0f;
        if (func_80937468((Actor *) this, globalCtx) != 0) {
            func_809375F4(this, globalCtx);
            func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
            func_80938998(this);
        }
    } else {
        this->actor.shape.shadowDraw = NULL;
    }
    Actor_SetHeight((Actor *) this, 6.0f);
}

void func_80938E00(Actor *this, GlobalContext *globalCtx) {
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    f32 temp_f12;
    u8 phi_a0;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_v0;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    if ((this[1].colChkInfo.atHitEffect & 4) != 0) {
        temp_v0_2 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_2[1];
        temp_v0_2->words.w1 = (u32) &D_06000090;
        temp_v0_2->words.w0 = 0xDE000000;
    }
    phi_a0 = this[1].colChkInfo.atHitEffect;
    if ((this[1].colChkInfo.atHitEffect & 2) != 0) {
        temp_v0_3 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_3[1];
        temp_v0_3->words.w1 = (u32) &D_060002D0;
        temp_v0_3->words.w0 = 0xDE000000;
        phi_a0 = this[1].colChkInfo.atHitEffect;
    }
    if ((phi_a0 & 1) != 0) {
        SysMatrix_SetStateRotationAndTranslation(this->world.pos.x, this->world.pos.y, this->world.pos.z, (Vec3s *) &this->shape);
        temp_f12 = this[1].gravity;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        temp_v0_4 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_4[1];
        temp_v0_4->words.w0 = 0xDA380003;
        temp_v0_4->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_5 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xDE000000;
        temp_v0_5->words.w1 = (u32) &D_06000530;
    }
}

void func_80938F50(Actor *this, GlobalContext *globalCtx) {
    func_800BE03C(globalCtx, &D_06002208);
}
