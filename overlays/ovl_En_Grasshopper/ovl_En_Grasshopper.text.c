typedef struct EnGrasshopper {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk_144;                 /* inferred */
    /* 0x0188 */ Vec3s unk_188;                     /* inferred */
    /* 0x018E */ char pad_18E[0x8A];                /* maybe part of unk_188[24]? */
    /* 0x0218 */ Vec3s unk_218;                     /* inferred */
    /* 0x021E */ char pad_21E[0x8A];                /* maybe part of unk_218[24]? */
    /* 0x02A8 */ void (*actionFunc)(EnGrasshopper *, GlobalContext *);
    /* 0x02AC */ u8 unk_2AC;                        /* inferred */
    /* 0x02AD */ char pad_2AD[0x3];                 /* maybe part of unk_2AC[4]? */
    /* 0x02B0 */ s16 unk_2B0;                       /* inferred */
    /* 0x02B2 */ s16 unk_2B2;                       /* inferred */
    /* 0x02B4 */ s16 unk_2B4;                       /* inferred */
    /* 0x02B6 */ s16 unk_2B6;                       /* inferred */
    /* 0x02B8 */ s16 unk_2B8;                       /* inferred */
    /* 0x02BA */ char pad_2BA[0x2];
    /* 0x02BC */ f32 unk_2BC;                       /* inferred */
    /* 0x02C0 */ f32 unk_2C0;                       /* inferred */
    /* 0x02C4 */ Vec3f unk_2C4;                     /* inferred */
    /* 0x02D0 */ char pad_2D0[0x86];                /* maybe part of unk_2C4[12]? */
    /* 0x0356 */ s16 unk_356;                       /* inferred */
    /* 0x0358 */ s16 unk_358;                       /* inferred */
    /* 0x035A */ s16 unk_35A;                       /* inferred */
    /* 0x035C */ char pad_35C[0x2];
    /* 0x035E */ s16 unk_35E;                       /* inferred */
    /* 0x0360 */ f32 unk_360;                       /* inferred */
    /* 0x0364 */ char pad_364[0x4];
    /* 0x0368 */ f32 unk_368;                       /* inferred */
    /* 0x036C */ f32 unk_36C;                       /* inferred */
    /* 0x0370 */ f32 unk_370;                       /* inferred */
    /* 0x0374 */ f32 unk_374;                       /* inferred */
    /* 0x0378 */ char pad_378[0x2];
    /* 0x037A */ s16 unk_37A;                       /* inferred */
    /* 0x037C */ s16 unk_37C;                       /* inferred */
    /* 0x037E */ char pad_37E[0x2];
    /* 0x0380 */ Vec3f unk_380;                     /* inferred */
    /* 0x038C */ s16 unk_38C;                       /* inferred */
    /* 0x038E */ char pad_38E[0x2A];                /* maybe part of unk_38C[22]? */
    /* 0x03B8 */ f32 unk_3B8;                       /* inferred */
    /* 0x03BC */ char pad_3BC[0x4];
    /* 0x03C0 */ Vec3f unk_3C0;                     /* inferred */
    /* 0x03C4 */ f32 unk_3C4;                       /* overlap; inferred */
    /* 0x03C8 */ f32 unk_3C8;                       /* overlap; inferred */
    /* 0x03CC */ char pad_3CC[0xC];                 /* maybe part of unk_3C8[4]? */
    /* 0x03D8 */ ? unk_3D8;                         /* inferred */
    /* 0x03D8 */ char pad_3D8[0x120];
    /* 0x04F8 */ f32 unk_4F8;                       /* inferred */
    /* 0x04FC */ Vec3f unk_4FC;                     /* inferred */
    /* 0x0508 */ char pad_508[0x8];
    /* 0x0510 */ ColliderJntSph unk_510;            /* inferred */
    /* 0x0530 */ ColliderJntSphElement unk_530;     /* inferred */
    /* 0x0570 */ char pad_570[0x1300];              /* maybe part of unk_530[77]? */
} EnGrasshopper;                                    /* size = 0x1870 */

struct _mips2c_stack_EnGrasshopper_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnGrasshopper_Draw {
    /* 0x00 */ char pad_0[0x50];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EnGrasshopper_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ char pad_34[0x14];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnGrasshopper_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderJntSph *sp2C;                /* inferred */
    /* 0x30 */ CollisionCheckContext *sp30;         /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809A6524 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ AnimationHeaderCommon **sp30;        /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809A65D8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A6628 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A6668 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809A6754 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A67A4 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_809A6B6C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x6];                    /* maybe part of sp38[2]? */
    /* 0x42 */ s16 sp42;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_809A6E18 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A6E74 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809A6F8C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A700C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809A7134 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809A71CC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ WaterBox *sp40;                      /* inferred */
    /* 0x44 */ void *sp44;                          /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_809A7494 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809A753C {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ WaterBox *sp4C;                      /* inferred */
    /* 0x50 */ char pad_50[0x1C];                   /* maybe part of sp4C[8]? */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ Actor *sp74;                         /* inferred */
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_809A7844 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809A78EC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809A797C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809A7A8C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809A7AE4 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809A7BBC {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809A7C98 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A7CE0 {
    /* 0x00 */ char pad_0[0x64];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0x6C];
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ char pad_DC[0x4];
    /* 0xE0 */ f32 spE0;                            /* inferred */
    /* 0xE4 */ char pad_E4[0x4];
    /* 0xE8 */ f32 spE8;                            /* inferred */
    /* 0xEC */ char pad_EC[0x4];
    /* 0xF0 */ f32 spF0;                            /* inferred */
    /* 0xF4 */ WaterBox *spF4;                      /* inferred */
};                                                  /* size = 0xF8 */

struct _mips2c_stack_func_809A8044 {
    /* 0x00 */ char pad_0[0x3A];
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809A847C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0xC];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x10];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809A8870 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809A8924 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809A8A64 {
    /* 0x000 */ char pad_0[0x70];
    /* 0x070 */ ? sp70;                             /* inferred */
    /* 0x070 */ char pad_70[0x40];
    /* 0x0B0 */ ? spB0;                             /* inferred */
    /* 0x0B0 */ char pad_B0[0x40];
    /* 0x0F0 */ ? spF0;                             /* inferred */
    /* 0x0F0 */ char pad_F0[0x40];
    /* 0x130 */ ? sp130;                            /* inferred */
    /* 0x130 */ char pad_130[0x40];
    /* 0x170 */ ? sp170;                            /* inferred */
    /* 0x170 */ char pad_170[0x40];
    /* 0x1B0 */ ? sp1B0;                            /* inferred */
    /* 0x1B0 */ char pad_1B0[0x50];
};                                                  /* size = 0x200 */

? func_800F0590(GlobalContext *, PosRot *, ?, ?);   /* extern */
? func_8013CD64(? *, PosRot *, Gfx *, f32, s32, ? *, ? *); /* extern */
? func_8013CF04(EnGrasshopper *, GlobalContext *, Gfx *); /* extern */
void func_809A6524(EnGrasshopper *arg0, s32 arg1);  /* static */
void func_809A65D8(EnGrasshopper *arg0);            /* static */
void func_809A6628(Actor *arg0);                    /* static */
void func_809A6668(EnGrasshopper *arg0, GlobalContext *arg1); /* static */
void func_809A6754(EnGrasshopper *arg0);            /* static */
void func_809A67A4(Actor *arg0, GlobalContext *arg1); /* static */
void func_809A6B6C(EnGrasshopper *, GlobalContext *); /* static */
void func_809A6E18(EnGrasshopper *arg0);            /* static */
void func_809A6E74(Actor *arg0, ? arg1);            /* static */
void func_809A6F8C(EnGrasshopper *arg0);            /* static */
void func_809A700C(Actor *arg0, ? arg1);            /* static */
void func_809A7134(EnGrasshopper *arg0, GlobalContext *arg1); /* static */
void func_809A71CC(Actor *arg0, GlobalContext *arg1); /* static */
void func_809A7494(EnGrasshopper *arg0);            /* static */
void func_809A753C(EnGrasshopper *, GlobalContext *); /* static */
void func_809A7844(EnGrasshopper *arg0);            /* static */
void func_809A78EC(EnGrasshopper *, GlobalContext *); /* static */
void func_809A797C(EnGrasshopper *arg0, GlobalContext *arg1); /* static */
void func_809A7A8C(EnGrasshopper *, GlobalContext *); /* static */
void func_809A7AE4(EnGrasshopper *arg0, GlobalContext *arg1); /* static */
void func_809A7BBC(EnGrasshopper *, GlobalContext *); /* static */
void func_809A7C98(EnGrasshopper *arg0);            /* static */
void func_809A7CE0(Actor *arg0, GlobalContext *arg1); /* static */
void func_809A8044(Actor *arg0, GlobalContext *arg1); /* static */
void func_809A847C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_809A8870(EnGrasshopper *arg0, Vec3f *arg1); /* static */
void func_809A8924(EnGrasshopper *arg0, GlobalContext *arg1); /* static */
void func_809A8A64(EnGrasshopper *arg0, GlobalContext *arg1); /* static */
extern AnimationHeader D_06000F9C;
extern SkeletonHeader D_06003F00;
static s32 D_809A8C80[5] = {0, 0, 0, 0, 0};
static ? D_809A8C94;                                /* unable to generate initializer */
static ? D_809A8CAC;                                /* unable to generate initializer */
static ? D_809A8CC4;                                /* unable to generate initializer */
static DamageTable D_809A8CDC = {
    {
        0xF1,
        0xF1,
        0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0xE0,
        0xF1,
        0xF1,
        0xF0,
        0x22,
        0x32,
        0x42,
        0xF1,
        0xF1,
        0xF1,
        0xF2,
        0xF1,
        0xF1,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0xE1,
    },
};
static ColliderJntSphElementInit D_809A8D1C[2] = {
    {{3, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 1, 5, 1}, {7, {{0, 0, 0}, 0}, 0}},
    {{2, {0xF7CFFFFF, 7, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 0}, {6, {{0, 0, 0}, 0}, 0}},
};
static ColliderJntSphInit D_809A8D64 = {{2, 0x11, 9, 0x11, 0x10, 0}, 2, &D_809A8D1C};
static ? D_809A8D74;                                /* unable to generate initializer */
static ? D_809A8D94;                                /* unable to generate initializer */
static s32 D_809A8D9C[27] = {
    0x3F800000,
    0,
    0x3F000000,
    0x3F800000,
    0,
    0xBF000000,
    0xBF800000,
    0,
    0x3F000000,
    0xBF800000,
    0,
    0xBF000000,
    0x3F000000,
    0,
    0x3F800000,
    0xBF000000,
    0,
    0x3F800000,
    0x3F000000,
    0,
    0xBF800000,
    0xBF000000,
    0,
    0xBF800000,
    0,
    0,
    0,
};
static ? D_809A8E08;                                /* unable to generate initializer */
static ? D_809A8E14;                                /* unable to generate initializer */
static ? D_809A8E20;                                /* unable to generate initializer */

void EnGrasshopper_Init(Actor *thisx, GlobalContext *globalCtx) {
    Vec3f *sp30;
    ColliderJntSphElement *temp_v1;
    Vec3f *temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 *phi_v1;
    s16 phi_v0;
    EnGrasshopper *this = (EnGrasshopper *) thisx;

    this->actor.hintId = 0x15;
    this->actor.targetMode = 4;
    this->actor.colChkInfo.mass = 0x3C;
    this->actor.colChkInfo.health = 2;
    Collider_InitAndSetJntSph(globalCtx, &this->unk_510, (Actor *) this, &D_809A8D64, &this->unk_530);
    this->unk_510.elements->dim.modelSphere.radius = 1;
    this->unk_510.elements->dim.scale = 22.0f;
    this->unk_510.elements->unk_6E = 1;
    this->unk_510.elements->unk_78 = 16.0f;
    this->unk_510.elements->unk_68 = 0x3E8;
    this->unk_510.elements->unk_6C = 0;
    temp_v1 = this->unk_510.elements;
    temp_v0 = temp_v1->unk_6C;
    temp_v1->unk_6A = temp_v0;
    this->unk_510.elements->dim.modelSphere.center.z = temp_v0;
    this->unk_510.elements->dim.modelSphere.center.y = temp_v0;
    this->unk_510.elements->dim.modelSphere.center.x = temp_v0;
    this->actor.flags |= 0x200;
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 1.0f);
    this->actor.colChkInfo.damageTable = &D_809A8CDC;
    temp_a0 = &this->unk_380;
    sp30 = temp_a0;
    Math_Vec3f_Copy(temp_a0, (Vec3f *) &this->actor.home);
    this->unk_358 = 0;
    this->unk_35A = -1;
    phi_v1 = D_809A8C80;
    phi_v0 = 0;
loop_1:
    if (*phi_v1 == 0) {
        this->unk_35A = phi_v0;
        *phi_v1 = 1;
    } else {
        temp_v0_2 = phi_v0 + 1;
        phi_v1 += 4;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 != 5) {
            goto loop_1;
        }
    }
    if ((s32) this->unk_35A < 0) {
        this->unk_35A = (s16) (s32) Rand_ZeroFloat(4.99f);
    }
    SkelAnime_Init(globalCtx, &this->unk_144, &D_06003F00, &D_06000F9C, &this->unk_188, &this->unk_218, 0x18);
    this->unk_35E = this->actor.params;
    if ((s32) this->unk_35E < -1) {
        this->unk_35E = 0;
    }
    if (this->unk_35E != 1) {
        this->unk_360 = 0.01f;
    } else {
        this->unk_360 = 0.0f;
        Actor_SetScale((Actor *) this, 0.0f);
        temp_v0_3 = this->actor.yawTowardsPlayer;
        this->actor.world.rot.y = temp_v0_3;
        this->actor.shape.rot.y = temp_v0_3;
        Math_Vec3f_Copy(sp30, (Vec3f *) &this->actor.world);
        temp_v0_4 = this->unk_35E;
        this->unk_380.y += 90.0f;
        this->unk_510.elements->unk_6E = temp_v0_4;
        this->unk_510.elements->dim.modelSphere.radius = temp_v0_4;
    }
    this->unk_370 = randPlusMinusPoint5Scaled(50.0f) + this->unk_380.y;
    func_809A6754(this);
}

void EnGrasshopper_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGrasshopper *this = (EnGrasshopper *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk_510);
    D_809A8C80[this->unk_35A] = 0;
}

void func_809A6524(EnGrasshopper *arg0, s32 arg1) {
    AnimationHeaderCommon **sp30;
    AnimationHeaderCommon **temp_v1;
    f32 phi_f0;

    temp_v1 = (arg1 * 4) + &D_809A8D74;
    sp30 = temp_v1;
    arg0->unk_368 = (f32) SkelAnime_GetFrameCount(*temp_v1);
    phi_f0 = 0.0f;
    if ((arg1 == 3) || (arg1 == 4) || (arg1 == 5)) {
        phi_f0 = -3.0f;
    }
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_v1, 1.0f, 0.0f, arg0->unk_368, (u8) (s32) *(&D_809A8D94 + arg1), phi_f0);
}

void func_809A65D8(EnGrasshopper *arg0) {
    func_809A6524(NULL);
    if (arg0->unk_2AC != 2) {
        arg0->unk_2AC = 1;
    }
    arg0->unk_358 = 4;
    arg0->actionFunc = func_809A6668;
}

void func_809A6628(Actor *arg0) {
    func_809A6524((EnGrasshopper *)1);
    arg0->unk_358 = 4;
    arg0->unk_2AC = 0;
    arg0->unk_2A8 = func_809A6668;
}

void func_809A6668(EnGrasshopper *arg0, GlobalContext *arg1) {
    if (arg0->unk_368 <= arg0->unk_144.animCurrentFrame) {
        if (arg0->unk_2AC == 0) {
            func_809A7494(arg0);
            return;
        }
        Math_Vec3f_Copy(arg0 + 0x380, arg0 + 0x24);
        arg0->unk_380.y = arg0->actor.floorHeight + 90.0f;
        func_809A6524(arg0, 2);
        if (arg0->unk_2AC != 2) {
            if (Player_GetMask(arg1) == 0x10) {
                func_809A6754(arg0);
                return;
            }
            func_809A7134(arg0, arg1);
            return;
        }
        arg0->unk_2B0 = 0;
        arg0->unk_358 = 1;
        arg0->unk_2AC = 0;
        arg0->actionFunc = func_809A6B6C;
        arg0->unk_2B2 = arg0->unk_2B0;
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_809A6754(EnGrasshopper *arg0) {
    f32 temp_f0;

    func_809A6524((EnGrasshopper *)2);
    temp_f0 = randPlusMinusPoint5Scaled(50.0f);
    arg0->unk_358 = 0;
    arg0->actionFunc = func_809A67A4;
    arg0->unk_370 = temp_f0 + arg0->unk_380.y;
}

void func_809A67A4(Actor *arg0, GlobalContext *arg1) {
    f32 sp44;
    f32 sp40;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 temp_a1;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0;

    Audio_PlayActorSound2(arg0, 0x30A0U);
    sp44 = arg0->unk_380 - arg0->world.pos.x;
    sp40 = arg0->unk_388 - arg0->world.pos.z;
    temp_v0 = arg0->unk_35E;
    if ((temp_v0 != 2) && (temp_v0 != 3)) {
        arg0->unk_38C = (s16) (arg0->unk_38C + 0xAF0);
        temp_f2 = (Math_SinS(arg0->unk_38C) * 10.0f) + arg0->unk_370;
        temp_a1 = temp_f2;
        arg0->unk_374 = temp_f2;
        Math_ApproachF(&arg0->world.pos.y, temp_a1, 0.1f, 10.0f);
        sp30 = (Math_SinS(arg0->shape.rot.y) * 100.0f) + arg0->world.pos.x;
        sp34 = arg0->world.pos.y;
        sp38 = (Math_CosS(arg0->shape.rot.y) * 100.0f) + arg0->world.pos.z;
        if ((arg0->unk_52C->unk_17 & 2) != 0) {
            arg0->unk_2AD = 1U;
        }
        if (func_800C5A20(arg1 + 0x830, (Vec3f *) &sp30, 10.0f) != 0) {
            arg0->unk_2AD = 1U;
        } else {
            arg0->unk_2AD = 0U;
        }
        if (arg0->unk_35E == 3) {
            temp_f2_2 = arg0->world.pos.x;
            temp_f12 = arg0->world.pos.z;
            if (sqrtf((temp_f2_2 * temp_f2_2) + (temp_f12 * temp_f12)) < 600.0f) {
                arg0->unk_2AD = 1U;
            }
        }
        if (arg0->unk_2AD != 0) {
            arg0->unk_370 = (f32) (randPlusMinusPoint5Scaled(50.0f) + arg0->unk_384);
            arg0->unk_37A = Math_Atan2S(sp44, sp40);
            arg0->unk_2B0 = Rand_S16Offset(0x1E, 0x1E);
        }
    }
    if ((Player_GetMask(arg1) != 0x10) && ((gSaveContext.eventInf[4] & 2) == 0) && (arg0->unk_2AD == 0) && (arg0->xzDistToPlayer < 200.0f)) {
        func_809A7134((EnGrasshopper *) arg0, arg1);
        return;
    }
    Math_SmoothStepToS(&arg0->world.rot.z, arg0->unk_37C, 5, 0x3E8, (s16) 5);
    arg0->unk_37C = (s16) (s32) ((f32) arg0->unk_37C * 0.8f);
    if (arg0->unk_2B2 != 0) {
        Math_ApproachZeroF(&arg0->speedXZ, 0.2f, 0.5f);
        return;
    }
    arg0->unk_37C = (s16) (s32) ((f32) (arg0->world.rot.y - arg0->unk_37A) * 0.2f);
    Math_ApproachF(&arg0->speedXZ, ((f32) arg0->unk_35A * 0.1f) + 4.0f, 0.4f, 0.7f);
    Math_ApproachF(arg0 + 0x364, 2000.0f, 1.0f, 50.0f);
    Math_SmoothStepToS(&arg0->world.rot.y, arg0->unk_37A, 5, (s16) (s32) arg0->unk_364, (s16) 5);
    if (arg0->unk_2B0 == 0) {
        if (Rand_ZeroFloat(1.0f) < 0.3f) {
            arg0->unk_2B2 = Rand_S16Offset(0xA, 0xA);
            arg0->unk_364 = 0.0f;
        }
        arg0->unk_37A = Math_Atan2S(sp44, sp40);
        arg0->unk_2B0 = Rand_S16Offset(0x1E, 0x46);
        arg0->unk_370 = (f32) (randPlusMinusPoint5Scaled(50.0f) + arg0->unk_384);
    }
}

void func_809A6B6C(EnGrasshopper *arg0, GlobalContext *arg1) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s16 sp42;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    Actor *sp2C;
    ColliderJntSphElement *temp_v0;
    ColliderJntSphElement *temp_v0_2;
    s16 temp_v1;

    sp2C = arg1->actorCtx.actorList[2].first;
    Audio_PlayActorSound2((Actor *) arg0, 0x30A0U);
    if (Player_GetMask(arg1) == 0x10) {
        func_809A6754(arg0);
        return;
    }
    sp4C = sp2C->world.pos.x - arg0->actor.world.pos.x;
    sp48 = sp2C->world.pos.z - arg0->actor.world.pos.z;
    arg0->unk_38C += 0xAF0;
    arg0->unk_374 = sp2C->world.pos.y + 60.0f;
    arg0->unk_370 = Math_SinS(arg0->unk_38C) * 10.0f;
    if (arg0->unk_2B0 == 0) {
        arg0->unk_370 = randPlusMinusPoint5Scaled(10.0f);
        arg0->unk_2B0 = Rand_S16Offset(0x1E, 0x1E);
    }
    Math_ApproachF(&arg0->actor.world.pos.y, arg0->unk_374, 0.1f, 10.0f);
    sp30 = (Math_SinS(arg0->actor.shape.rot.y) * 100.0f) + arg0->actor.world.pos.x;
    sp34 = arg0->actor.world.pos.y;
    sp38 = (Math_CosS(arg0->actor.shape.rot.y) * 100.0f) + arg0->actor.world.pos.z;
    if (((arg0->actor.bgCheckFlags & 8) != 0) || (func_800C5A20(&arg1->colCtx, (Vec3f *) &sp30, 10.0f) != 0)) {
        func_809A6E18(arg0);
        return;
    }
    if ((sp2C->unk_A6C * 0x10) < 0) {
        temp_v0 = arg0->unk_510.elements;
        temp_v0->info.toucherFlags |= 0x11;
        func_809A65D8(arg0);
        return;
    }
    if ((arg0->unk_510.base.atFlags & 4) != 0) {
        temp_v0_2 = arg0->unk_510.elements;
        temp_v0_2->info.toucherFlags &= 0xFFEE;
        func_809A6F8C(arg0);
        return;
    }
    arg0->unk_37C = (s16) (s32) ((f32) (arg0->actor.world.rot.y - arg0->unk_37A) * 0.2f);
    Math_SmoothStepToS(&arg0->actor.world.rot.z, arg0->unk_37C, 5, 0x3E8, (s16) 5);
    temp_v1 = arg0->unk_35A;
    sp42 = temp_v1 + 0x46;
    sp44 = ((f32) temp_v1 * 0.05f) + 4.0f;
    arg0->unk_37A = Math_Atan2S(sp4C, sp48);
    Math_ApproachF(&arg0->actor.speedXZ, sp44, 0.4f, 0.8f);
    Math_SmoothStepToS(&arg0->actor.world.rot.y, arg0->unk_37A, sp42, 0xFA0, (s16) 0xA);
}

void func_809A6E18(Actor *arg0) {
    Audio_PlayActorSound2(arg0, 0x30A0U);
    arg0->unk_50A = (s16) (arg0->world.rot.y + 0x8000);
    arg0->unk_358 = 2;
    arg0->unk_35C = 0;
    arg0->unk_2A8 = func_809A6E74;
    arg0->speedXZ = 2.0f;
}

void func_809A6E74(Actor *arg0, ? arg1) {
    s16 temp_v0;

    Audio_PlayActorSound2(arg0, 0x30A0U);
    temp_v0 = arg0->unk_35C;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            return;
        }
        Math_SmoothStepToS(&arg0->world.rot.z, 0, 0x64, 0x1F40, (s16) 0xBB8);
        if (arg0->unk_2B4 == 0) {
            arg0->unk_2B0 = 0;
            arg0->unk_358 = 1;
            arg0->unk_2AC = 0;
            arg0->unk_2A8 = func_809A6B6C;
            arg0->unk_2B2 = (s16) arg0->unk_2B0;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    Math_SmoothStepToS(&arg0->world.rot.y, arg0->unk_50A, 0x64, 0x3E8, (s16) 0x3E8);
    Math_SmoothStepToS(&arg0->world.rot.z, 0x4000, 0x64, 0x1F40, (s16) 0xBB8);
    if (fabsf((f32) arg0->world.rot.y - (f32) arg0->unk_50A) < 10.0f) {
        arg0->unk_2B4 = 0x64;
        arg0->unk_35C = 1;
    }
}

void func_809A6F8C(EnGrasshopper *arg0) {
    arg0->unk_37A = (s16) -(s32) arg0->actor.yawTowardsPlayer;
    arg0 = arg0;
    arg0->unk_2B0 = Rand_S16Offset(0x1E, 0x1E);
    arg0->unk_358 = 3;
    arg0->actionFunc = func_809A700C;
    arg0->unk_37C = (s16) (s32) ((f32) (arg0->actor.world.rot.y - arg0->unk_37A) * 0.2f);
}

void func_809A700C(Actor *arg0, GlobalContext *arg1) {
    void *temp_v0;

    Audio_PlayActorSound2(arg0, 0x30A0U);
    Math_ApproachF(&arg0->speedXZ, ((f32) arg0->unk_35A * 0.05f) + 7.0f, 0.4f, 0.8f);
    Math_SmoothStepToS(&arg0->world.rot.z, arg0->unk_37C, 5, 0x3E8, (s16) 5);
    arg0->unk_37C = (s16) (s32) ((f32) arg0->unk_37C * 0.8f);
    Math_SmoothStepToS(&arg0->world.rot.y, arg0->unk_37A, 5, (s16) (s32) arg0->unk_364, (s16) 5);
    if (arg0->unk_2B0 == 0) {
        temp_v0 = arg0->unk_52C;
        temp_v0->unk_15 = (u8) (temp_v0->unk_15 | 0x11);
        arg0->unk_2B0 = 0;
        arg0->unk_358 = 1;
        arg0->unk_2A8 = func_809A6B6C;
        arg0->unk_2B2 = (s16) arg0->unk_2B0;
    }
}

void func_809A7134(EnGrasshopper *arg0, GlobalContext *arg1) {
    void *sp18;
    f32 temp_f4;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    arg0->unk_2B0 = 0x32;
    arg0->unk_358 = 5;
    arg0->unk_36C = 0.0f;
    arg0 = arg0;
    sp18 = temp_v0;
    arg0->unk_3B4 = (Math_SinS(temp_v0->shape.rot.y) * 130.0f) + temp_v0->world.pos.x;
    temp_f4 = Math_CosS(temp_v0->shape.rot.y) * 130.0f;
    arg0->actionFunc = func_809A71CC;
    arg0->unk_3BC = temp_f4 + temp_v0->world.pos.z;
}

void func_809A71CC(Actor *arg0, GlobalContext *arg1) {
    void *sp44;
    WaterBox *sp40;
    f32 sp3C;
    f32 sp34;
    PosRot *sp2C;
    PosRot *temp_a0;
    s16 temp_v0;

    sp44 = arg1->actorCtx.actorList[2].first;
    Audio_PlayActorSound2(arg0, 0x30A0U);
    arg0->unk_38C = (s16) (arg0->unk_38C + 0xAF0);
    arg0->unk_3B8 = (f32) ((Math_SinS(arg0->unk_38C) * 10.0f) + (sp44->world.pos.y + 120.0f));
    Math_SmoothStepToS(&arg0->world.rot.z, 0, 5, 0x3E8, (s16) 5);
    Math_SmoothStepToS(&arg0->world.rot.y, arg0->shape.rot.y, 0xA, 0xFA0, (s16) 0xA);
    Math_SmoothStepToS(&arg0->shape.rot.y, arg0->yawTowardsPlayer, 0xA, 0xFA0, (s16) 0xA);
    temp_a0 = &arg0->world;
    sp2C = temp_a0;
    Math_ApproachF((f32 *) temp_a0, arg0->unk_3B4, 0.3f, arg0->unk_36C);
    Math_ApproachF(&arg0->world.pos.y, arg0->unk_3B8, 0.1f, arg0->unk_36C);
    Math_ApproachF(&arg0->world.pos.z, arg0->unk_3BC, 0.3f, arg0->unk_36C);
    Math_ApproachF(arg0 + 0x36C, 7.0f, 0.3f, 1.0f);
    if (func_800CA1AC(arg1, arg1 + 0x830, arg0->unk_3C0, arg0->unk_3C8, arg0 + 0x4F8, &sp40) != 0) {
        if (arg0->unk_3C4 < arg0->unk_4F8) {
            temp_v0 = arg0->unk_356;
            if (((s32) temp_v0 < 3) || ((arg1->gameplayFrames & 7) == 0)) {
                arg0->unk_356 = (s16) (temp_v0 + 1);
                Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x3C0);
                sp34 += randPlusMinusPoint5Scaled(20.0f);
                sp3C += randPlusMinusPoint5Scaled(20.0f);
                EffectSsGSplash_Spawn(arg1, (Vec3f *) &sp34, NULL, NULL, (s16) 0, (s16) (((s32) Rand_ZeroOne() * 0x64) + 0x190));
                Audio_PlaySoundAtPosition(arg1, (Vec3f *) sp2C, 0x32, 0x2817U);
            }
        } else {
            arg0->unk_356 = 0;
        }
    }
    if ((arg0->unk_2B0 == 0) || ((fabsf(arg0->unk_3B4 - arg0->world.pos.x) <= 10.0f) && (fabsf(arg0->unk_3B8 - arg0->world.pos.y) <= 20.0f) && (fabsf(arg0->unk_3BC - arg0->world.pos.z) <= 10.0f))) {
        func_809A6628(arg0);
    }
}

void func_809A7494(EnGrasshopper *arg0) {
    ColliderJntSphElement *temp_v0;
    ColliderJntSphElement *temp_v0_2;

    func_809A6524(arg0, 3);
    arg0->unk_36C = 0.0f;
    Math_SmoothStepToS(&arg0->actor.world.rot.y, arg0->actor.yawTowardsPlayer, 0xA, 0xFA0, (s16) 0xA);
    temp_v0 = arg0->unk_510.elements;
    arg0->actor.speedXZ = 3.0f;
    arg0->unk_370 = arg0->actor.world.pos.y;
    temp_v0->info.toucherFlags &= 0xFFEE;
    temp_v0_2 = arg0->unk_510.elements;
    temp_v0_2->unk_55 = (u8) (temp_v0_2->unk_55 | 0x11);
    Audio_PlayActorSound2((Actor *) arg0, 0x38A1U);
    arg0->unk_358 = 6;
    arg0->actionFunc = func_809A753C;
}

void func_809A753C(EnGrasshopper *arg0, GlobalContext *arg1) {
    Actor *sp74;
    f32 sp70;
    f32 sp6C;
    WaterBox *sp4C;
    f32 sp48;
    f32 sp40;
    ColliderJntSphElement *temp_v0_2;
    Vec3f *temp_s3;
    f32 *temp_s0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_s0;
    s32 phi_s0;

    temp_s3 = &arg0->unk_3C0;
    sp74 = arg1->actorCtx.actorList[2].first;
    sp70 = arg0->unk_144.animCurrentFrame;
    phi_s0 = 0;
    do {
        func_809A8870(arg0, temp_s3);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 6);
    if (func_800CA1AC(arg1, &arg1->colCtx, arg0->unk_3C0.x, arg0->unk_3C8, &arg0->unk_4F8, &sp4C) != 0) {
        if (arg0->unk_3C4 < arg0->unk_4F8) {
            temp_v0 = arg0->unk_356;
            if (((s32) temp_v0 < 3) || ((arg1->gameplayFrames & 7) == 0)) {
                temp_s0_2 = &sp40;
                arg0->unk_356 = temp_v0 + 1;
                Math_Vec3f_Copy((Vec3f *) temp_s0_2, temp_s3);
                sp40 += randPlusMinusPoint5Scaled(20.0f);
                sp48 += randPlusMinusPoint5Scaled(20.0f);
                EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s0_2, NULL, NULL, (s16) 0, (s16) (((s32) Rand_ZeroOne() * 0x64) + 0x190));
                Audio_PlaySoundAtPosition(arg1, (Vec3f *) &arg0->actor.world, 0x32, 0x2817U);
            }
        } else {
            arg0->unk_356 = 0;
        }
    }
    arg0->unk_38C += 0xAF0;
    temp_v0_2 = arg0->unk_510.elements;
    arg0->unk_3B8 = (Math_SinS(arg0->unk_38C) * 10.0f) + (sp74->world.pos.y + 60.0f);
    sp6C = (f32) temp_v0_2->unk_52;
    temp_f2 = (f32) temp_v0_2->unk_4E - sp74->world.pos.x;
    temp_f12 = (f32) temp_v0_2->unk_50 - sp74->world.pos.y;
    temp_f14 = sp6C - sp74->world.pos.z;
    if (((arg0->unk_510.base.atFlags & 4) != 0) || ((sp74->unk_A6C & 0x400000) && (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14)) <= 60.0f) && (temp_v1 = (sp74->shape.rot.y - arg0->actor.shape.rot.y) + 0x8000, (((s32) temp_v1 < 0x2000) != 0)) && ((s32) temp_v1 >= -0x1FFF))) {
        temp_v0_2->unk_55 = (u8) (temp_v0_2->unk_55 & 0xFFEE);
    }
    Math_ApproachF(&arg0->actor.world.pos.y, arg0->unk_3B8, 0.1f, arg0->unk_36C);
    Math_ApproachF(&arg0->unk_36C, 10.0f, 0.1f, 1.0f);
    Math_SmoothStepToS(&arg0->actor.world.rot.y, arg0->actor.yawTowardsPlayer, 0xA, 0xFA0, (s16) 0xA);
    if (arg0->unk_368 <= sp70) {
        func_809A7844(arg0);
    }
}

void func_809A7844(EnGrasshopper *arg0) {
    ColliderJntSphElement *temp_v0;
    f32 temp_a1;
    f32 temp_f2;

    func_809A6524(arg0, 4);
    arg0->unk_38C += 0xAF0;
    temp_f2 = (Math_SinS(arg0->unk_38C) * 10.0f) + arg0->unk_370;
    temp_a1 = temp_f2;
    arg0->unk_374 = temp_f2;
    Math_ApproachF(&arg0->actor.world.pos.y, temp_a1, 0.1f, 10.0f);
    temp_v0 = arg0->unk_510.elements;
    arg0->unk_358 = 7;
    arg0->unk_2B2 = 0x14;
    arg0->actor.speedXZ = 0.0f;
    temp_v0->unk_55 = (u8) (temp_v0->unk_55 & 0xFFEE);
    arg0->actionFunc = func_809A78EC;
}

void func_809A78EC(EnGrasshopper *arg0, GlobalContext *arg1) {
    ColliderJntSphElement *temp_v0;
    f32 temp_a1;
    f32 temp_f2;

    arg0->unk_38C += 0xAF0;
    temp_f2 = (Math_SinS(arg0->unk_38C) * 10.0f) + arg0->unk_370;
    temp_a1 = temp_f2;
    arg0->unk_374 = temp_f2;
    Math_ApproachF(&arg0->actor.world.pos.y, temp_a1, 0.1f, 10.0f);
    if (arg0->unk_2B2 == 0) {
        temp_v0 = arg0->unk_510.elements;
        temp_v0->info.toucherFlags |= 0x11;
        func_809A65D8(arg0);
    }
}

void func_809A797C(EnGrasshopper *arg0, GlobalContext *arg1) {
    ? sp34;
    ColliderJntSphElement *temp_v0;
    s16 temp_v0_2;

    func_809A6524(arg0, 5);
    temp_v0 = arg0->unk_510.elements;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.flags |= 1;
    arg0->unk_36C = 0.0f;
    temp_v0->unk_55 = (u8) (temp_v0->unk_55 & 0xFFEE);
    Matrix_RotateY(arg0->actor.yawTowardsPlayer, 0U);
    SysMatrix_GetStateTranslationAndScaledZ(-20.0f, (Vec3f *) &sp34);
    Math_Vec3f_Copy(&arg0->unk_4FC, (Vec3f *) &sp34);
    temp_v0_2 = arg0->unk_2B8;
    if (((temp_v0_2 == 0xB) || (temp_v0_2 == 0xA)) && (arg0->unk_2B6 != 0)) {
        func_800BF7CC(arg1, (Actor *) arg0, (Vec3f []) &arg0->unk_2C4, 0xC, 2, 0.3f, 0.2f);
        arg0->unk_2B6 = 0;
        arg0->unk_2B8 = 0;
    }
    func_800BCB70((Actor *) arg0, 0x4000, 0xFF, 0, (s16) 8);
    arg0->unk_358 = 8;
    arg0->actionFunc = func_809A7A8C;
}

void func_809A7A8C(EnGrasshopper *arg0, GlobalContext *arg1) {
    Math_SmoothStepToS(&arg0->actor.world.rot.z, 0, 5, 0x3E8, (s16) 5);
    if (arg0->actor.colorFilterTimer == 0) {
        func_809A65D8(arg0);
    }
}

void func_809A7AE4(EnGrasshopper *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    func_809A6524(arg0, 6);
    temp_v0 = arg0->unk_2B8;
    arg0->actor.flags |= 0x8000000;
    arg0->actor.speedXZ = 0.0f;
    arg0->unk_36C = 0.0f;
    arg0->actor.velocity.y = 5.0f;
    arg0->actor.gravity = -0.5f;
    if (((temp_v0 == 0xB) || (temp_v0 == 0xA)) && (arg0->unk_2B6 == 0)) {
        arg0->unk_2B8 = 0;
    }
    func_800BCB70((Actor *) arg0, 0x4000, 0xFF, 0, (s16) 0x19);
    Enemy_StartFinishingBlow(arg1, (Actor *) arg0);
    Audio_PlayActorSound2((Actor *) arg0, 0x38A3U);
    arg0->unk_358 = 9;
    arg0->actionFunc = func_809A7BBC;
}

void func_809A7BBC(EnGrasshopper *arg0, GlobalContext *arg1) {
    f32 sp34;
    s16 temp_v0;

    sp34 = arg0->unk_144.animCurrentFrame;
    Math_SmoothStepToS(&arg0->actor.world.rot.z, 0, 5, 0x3E8, (s16) 5);
    temp_v0 = arg0->unk_2B8;
    if (((temp_v0 == 0xB) || (temp_v0 == 0xA)) && ((s32) arg0->unk_2B6 < 2)) {
        func_800BF7CC(arg1, (Actor *) arg0, (Vec3f []) &arg0->unk_2C4, 0xC, 2, 0.3f, 0.2f);
        arg0->unk_2B6 = 0;
        arg0->unk_2B8 = 0;
    }
    if (arg0->unk_368 <= sp34) {
        arg0->actor.flags &= -0x11;
        func_809A7C98(arg0);
    }
}

void func_809A7C98(EnGrasshopper *arg0) {
    func_809A6524((EnGrasshopper *)7);
    arg0->unk_358 = 0xA;
    arg0->actionFunc = func_809A7CE0;
    arg0->actor.speedXZ = 0.0f;
    arg0->unk_36C = 0.0f;
}

void func_809A7CE0(Actor *arg0, GlobalContext *arg1) {
    WaterBox *spF4;
    f32 spF0;
    f32 spE8;
    f32 spE0;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    ? sp64;
    ? *temp_t6;
    CollisionContext *temp_s6;
    PosRot *temp_s3_2;
    Vec3f *temp_s0_2;
    Vec3f *temp_s0_3;
    Vec3f *temp_s3;
    f32 *temp_s1;
    f32 *temp_s1_2;
    f32 temp_f0;
    f32 temp_f20;
    s16 temp_v0;
    s32 *temp_t7;
    s32 temp_s0;
    s32 phi_s0;
    s32 phi_s5;
    s32 *phi_t7;
    ? *phi_t6;
    Vec3f *phi_s0_2;

    temp_f0 = arg0->floorHeight;
    arg0->shape.rot.y += 0x1388;
    phi_s5 = 0;
    if ((temp_f0 <= -32000.0f) || (temp_s6 = arg1 + 0x830, (temp_f0 >= 32000.0f))) {
        Actor_MarkForDeath(arg0);
        return;
    }
    if (func_800CA1AC(arg1, temp_s6, arg0->world.pos.x, arg0->world.pos.z, &spF0, &spF4) != 0) {
        temp_s3 = arg0 + 0x24;
        temp_s1 = &spE0;
        phi_s0 = 0;
        if (arg0->world.pos.y < spF0) {
            do {
                Math_Vec3f_Copy((Vec3f *) temp_s1, temp_s3);
                temp_f20 = ((f32) phi_s0 * 5.0f) + 20.0f;
                spE0 += randPlusMinusPoint5Scaled(temp_f20);
                spE8 += randPlusMinusPoint5Scaled(temp_f20);
                EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s1, NULL, NULL, (s16) 0, (s16) (((s32) Rand_ZeroOne() * 0x64) + 0x190));
                temp_s0 = phi_s0 + 1;
                phi_s0 = temp_s0;
            } while (temp_s0 != 3);
            Audio_PlaySoundAtPosition(arg1, temp_s3, 0x32, 0x2817U);
            phi_s5 = 1;
        }
    }
    temp_s0_2 = arg0 + 0x3C0;
    if ((func_800C5A20(temp_s6, temp_s0_2, 40.0f) != 0) && ((temp_v0 = arg0->unk_2B8, (temp_v0 == 0xB)) || (temp_v0 == 0xA)) && (arg0->unk_2B6 != 0)) {
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x2C4), 0xC, 2, 0.3f, 0.2f);
        arg0->unk_2B6 = 0;
        arg0->unk_2B8 = 0;
    }
    if ((phi_s5 != 0) || (func_800C5A20(temp_s6, temp_s0_2, 10.0f) != 0)) {
        phi_t7 = D_809A8D9C;
        phi_t6 = &sp64;
        do {
            temp_t7 = phi_t7 + 0xC;
            temp_t6 = phi_t6 + 0xC;
            temp_t6->unk_-C = (s32) *phi_t7;
            temp_t6->unk_-8 = (s32) temp_t7->unk_-8;
            temp_t6->unk_-4 = (s32) temp_t7->unk_-4;
            phi_t7 = temp_t7;
            phi_t6 = temp_t6;
        } while (temp_t7 != (D_809A8D9C + 0x6C));
        temp_s3_2 = &arg0->world;
        temp_s1_2 = &spD0;
        phi_s0_2 = (Vec3f *) &sp64;
        do {
            Math_Vec3f_Copy((Vec3f *) temp_s1_2, (Vec3f *) temp_s3_2);
            spD0 += randPlusMinusPoint5Scaled(30.0f);
            if (phi_s5 == 0) {
                spD4 = arg0->floorHeight;
            } else if (func_800CA1AC(arg1, temp_s6, arg0->world.pos.x, arg0->world.pos.z, &spF0, &spF4) != 0) {
                spD4 = spF0;
            }
            spD8 += randPlusMinusPoint5Scaled(30.0f);
            func_800B3030(arg1, (Vec3f *) temp_s1_2, phi_s0_2, phi_s0_2, (s16) 0x64, (s16) 0, 2);
            temp_s0_3 = phi_s0_2 + 0xC;
            phi_s0_2 = temp_s0_3;
        } while (temp_s0_3 != &spD0);
        func_800F0590(arg1, temp_s3_2, 0xA, 0x321F);
        Item_DropCollectibleRandom(arg1, NULL, (Vec3f *) temp_s3_2, 0x60);
        Actor_MarkForDeath(arg0);
    }
}

void func_809A8044(Actor *arg0, GlobalContext *arg1) {
    s16 sp3A;
    s16 temp_v0_2;
    u8 temp_v0_3;
    void *temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk_52C;
    phi_v1 = 0;
    if ((((temp_v0->unk_16 & 2) != 0) || ((temp_v0->unk_56 & 2) != 0)) && (temp_v0_2 = arg0->unk_358, arg0->unk_521 = (u8) (arg0->unk_521 & 0xFFFD), (temp_v0_2 != 8)) && (temp_v0_2 != 9) && (temp_v0_2 != 0xA)) {
        temp_v0_3 = arg0->colChkInfo.damageEffect;
        if (temp_v0_3 == 0xF) {
            goto block_17;
        }
        if (temp_v0_3 == 2) {
            arg0->unk_2B6 = 0x28;
            arg0->unk_2B8 = 0;
            goto block_17;
        }
        if (temp_v0_3 == 3) {
            if ((arg0->unk_2B8 != 1) || (arg0->unk_2B6 == 0)) {
                sp3A = 0;
                Actor_ApplyDamage(arg0);
                arg0->unk_2B6 = 0x50;
                arg0->unk_2B8 = 0xA;
                arg0->unk_2BC = 0.0f;
                arg0->unk_2C0 = 1.5f;
            }
            phi_v1 = 0;
            if ((s32) arg0->colChkInfo.health <= 0) {
                func_809A7AE4((EnGrasshopper *) arg0, arg1);
                return;
            }
            goto block_18;
        }
        if (temp_v0_3 == 4) {
            func_800BCB70(arg0, 0x8000, 0xFF, 0, (s16) 0x19);
            arg0->unk_2B6 = 0x14;
            arg0->unk_2B8 = 0x14;
            Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
block_17:
            phi_v1 = 1;
        }
        goto block_18;
    }
block_18:
    if (phi_v1 != 0) {
        Actor_ApplyDamage(arg0);
        if ((s32) arg0->colChkInfo.health > 0) {
            Audio_PlayActorSound2(arg0, 0x38A2U);
            func_809A797C((EnGrasshopper *) arg0, arg1);
            return;
        }
        func_809A7AE4((EnGrasshopper *) arg0, arg1);
        /* Duplicate return node #22. Try simplifying control flow for better match */
    }
}

void EnGrasshopper_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp30;
    ColliderJntSph *sp2C;
    ColliderJntSph *temp_a2;
    CollisionCheckContext *temp_a1;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    f32 phi_f0;
    EnGrasshopper *this = (EnGrasshopper *) thisx;

    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    func_809A8044((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    Actor_SetHeight((Actor *) this, 0.0f);
    Actor_SetScale((Actor *) this, this->unk_360);
    temp_v0 = this->unk_2B0;
    if (temp_v0 != 0) {
        this->unk_2B0 = temp_v0 - 1;
    }
    temp_v0_2 = this->unk_2B2;
    if (temp_v0_2 != 0) {
        this->unk_2B2 = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk_2B4;
    if (temp_v0_3 != 0) {
        this->unk_2B4 = temp_v0_3 - 1;
    }
    temp_v0_4 = this->unk_2B6;
    if (temp_v0_4 != 0) {
        this->unk_2B6 = temp_v0_4 - 1;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    this->actor.world.pos.x += this->unk_4FC.x;
    this->actor.world.pos.y += this->unk_4FC.y;
    this->actor.world.pos.z += this->unk_4FC.z;
    Math_ApproachZeroF((f32 *) &this->unk_4FC, 1.0f, 2.0f);
    Math_ApproachZeroF(&this->unk_4FC.y, 1.0f, 2.0f);
    Math_ApproachZeroF(&this->unk_4FC.z, 1.0f, 2.0f);
    if ((this->unk_358 != 0xA) && (this->unk_35E != 3)) {
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 35.0f, 60.0f, 60.0f, 0x1DU);
    }
    temp_v0_5 = this->unk_35E;
    this->actor.shape.rot.z = this->actor.world.rot.z;
    if (temp_v0_5 == 1) {
        temp_f0 = (f32) temp_v0_5 * 0.01f;
        phi_f0 = temp_f0;
        if (temp_f0 >= 0.018f) {
            phi_f0 = 0.018f;
        }
        Math_ApproachF(&this->unk_360, phi_f0, 0.1f, 0.01f);
    }
    temp_v0_6 = this->unk_358;
    if ((temp_v0_6 != 0xA) && (temp_v0_6 != 5)) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.world.rot.y, 5, 0x3E8, (s16) 5);
    }
    func_809A8924(this, globalCtx);
    temp_v0_7 = this->unk_358;
    if ((temp_v0_7 != 9) && (temp_v0_7 != 0xA) && ((temp_a1 = &globalCtx->colChkCtx, temp_a2 = &this->unk_510, sp2C = temp_a2, sp30 = temp_a1, CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2), CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2), temp_v0_8 = this->unk_358, (temp_v0_8 == 5)) || (temp_v0_8 == 6))) {
        CollisionCheck_SetAT(globalCtx, temp_a1, (Collider *) sp2C);
    }
}

void func_809A847C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp30;
    ? sp24;
    s16 temp_v0;
    s8 temp_v0_2;

    sp30.unk_0 = (s32) D_809A8E08.unk_0;
    sp30.unk_4 = (s32) D_809A8E08.unk_4;
    sp30.unk_8 = (s32) D_809A8E08.unk_8;
    sp24.unk_0 = (s32) D_809A8E14.unk_0;
    sp24.unk_4 = (s32) D_809A8E14.unk_4;
    sp24.unk_8 = (s32) D_809A8E14.unk_8;
    SysMatrix_StatePush();
    temp_v0 = arg4->unk_35E;
    if ((temp_v0 != 2) && (temp_v0 != 3)) {
        temp_v0_2 = *(&D_809A8C94 + arg1);
        if ((s8) (((s32) temp_v0_2 < 0) ^ 1) != 0) {
            SysMatrix_MultiplyVector3fByState((Vec3f *) &sp24, arg4 + (temp_v0_2 * 0xC) + 0x3D8);
        }
    }
    if (arg1 == 6) {
        SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x3C0);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp30, arg4 + 0x3CC);
    }
    Collider_UpdateSpheres(arg1, arg4 + 0x510);
    if ((arg1 == 1) || (arg1 == 3) || (arg1 == 6) || (arg1 == 0xA) || (arg1 == 0xD) || (arg1 == 0x10) || (arg1 == 0x12) || (arg1 == 0x13) || (arg1 == 0x16) || (arg1 == 0x18) || (arg1 == 0x19) || (arg1 == 1)) {
        SysMatrix_GetStateTranslation(arg4 + (arg4->unk_354 * 0xC) + 0x2C4);
        arg4->unk_354 = (s16) (arg4->unk_354 + 1);
        if ((s32) arg4->unk_354 >= 0xC) {
            arg4->unk_354 = 0;
        }
    }
    SysMatrix_StatePop();
}

void EnGrasshopper_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *temp_s1;
    GraphicsContext *temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1;
    s32 temp_s0;
    s32 temp_s0_2;
    Gfx *phi_v0;
    s32 phi_s0;
    s32 phi_s0_2;
    EnGrasshopper *this = (EnGrasshopper *) thisx;

    temp_v0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_v0->polyOpa.d - 0x1000;
    temp_v0->polyOpa.d = temp_s1;
    func_8012C2DC(globalCtx->state.gfxCtx);
    SkelAnime_Draw(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, NULL, func_809A847C, (Actor *) this);
    temp_v0_2 = this->unk_35E;
    if ((temp_v0_2 != 2) && (temp_v0_2 != 3)) {
        SysMatrix_InsertXRotation_s(0, 0);
        phi_v0 = temp_s1;
        phi_s0 = 0;
        phi_s0_2 = 0;
        do {
            temp_s0 = phi_s0 + 1;
            phi_v0->texture.cmd = 0;
            phi_v0 += 1;
            phi_s0 = temp_s0;
        } while (temp_s0 < 0x1000);
        do {
            func_8013CD64(&this->unk_3D8, &this->actor.world, temp_s1, (f32) phi_s0_2 / 5.0f, 0xE, &D_809A8CC4, &D_809A8CAC);
            temp_s0_2 = phi_s0_2 + 1;
            phi_s0_2 = temp_s0_2;
        } while (temp_s0_2 != 5);
        func_8013CF04(this, globalCtx, temp_s1);
    }
    temp_v1 = this->unk_2B6;
    if (temp_v1 != 0) {
        temp_v0_3 = this->unk_2B8;
        if ((temp_v0_3 == 0xB) || (temp_v0_3 == 0xA)) {
            this->unk_2BC += 0.3f;
            if (this->unk_2BC > 0.5f) {
                this->unk_2BC = 0.5f;
            }
            Math_ApproachF(&this->unk_2C0, this->unk_2BC, 0.1f, 0.04f);
        } else {
            this->unk_2BC = 0.8f;
            this->unk_2C0 = 0.8f;
        }
        func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk_2C4, 0xC, this->unk_2BC, this->unk_2C0, (f32) temp_v1 * 0.05f, (u8) (s32) this->unk_2B8);
    }
    func_809A8A64(this, globalCtx);
}

void func_809A8870(EnGrasshopper *arg0, Vec3f *arg1) {
    s16 temp_v0;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0 + 0x5B0;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->unk_0 == 0) {
        phi_s0->unk_0 = 1U;
        phi_s0->unk_4 = (s32) arg1->x;
        phi_s0->unk_8 = (s32) arg1->y;
        phi_s0->unk_2C = 0xA;
        phi_s0->unk_C = (s32) arg1->z;
        phi_s0->unk_10 = randPlusMinusPoint5Scaled(20.0f);
        phi_s0->unk_14 = randPlusMinusPoint5Scaled(20.0f);
        phi_s0->unk_18 = randPlusMinusPoint5Scaled(20.0f);
        phi_s0->unk_1C = randPlusMinusPoint5Scaled(30000.0f);
        return;
    }
    phi_s0 += 0x30;
    if ((s32) temp_v0 >= 0x64) {
        return;
    }
    goto loop_1;
}

void func_809A8924(EnGrasshopper *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 temp_s2;
    void *phi_s0;
    s32 phi_s2;

    phi_s0 = arg0 + 0x5B0;
    phi_s2 = 0;
    do {
        if (phi_s0->unk_0 != 0) {
            temp_v0 = phi_s0->unk_2C;
            phi_s0->unk_4 = (f32) (arg0->unk_3CC + phi_s0->unk_10);
            phi_s0->unk_8 = (f32) (arg0->unk_3D0 + phi_s0->unk_14);
            phi_s0->unk_C = (f32) (arg0->unk_3D4 + phi_s0->unk_18);
            if (temp_v0 != 0) {
                phi_s0->unk_2C = (s16) (temp_v0 - 1);
                phi_s0->unk_2E = (s16) (phi_s0->unk_2E + 1);
                Math_ApproachF(phi_s0 + 0x20, 0.1f, 0.1f, 0.05f);
                if ((s32) phi_s0->unk_2E >= 8) {
                    phi_s0->unk_2E = 0;
                }
                goto block_8;
            }
            Math_ApproachZeroF(phi_s0 + 0x20, 0.1f, 0.1f);
            if (phi_s0->unk_20 < 0.2f) {
                phi_s0->unk_0 = 0U;
block_8:
            }
            phi_s0->unk_28 = phi_s0->unk_20;
            phi_s0->unk_24 = phi_s0->unk_20;
        }
        temp_s2 = phi_s2 + 1;
        phi_s0 += 0x30;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x64);
}

void func_809A8A64(EnGrasshopper *arg0, GlobalContext *arg1) {
    ? sp1B0;
    ? sp170;
    ? sp130;
    ? spF0;
    ? spB0;
    ? sp70;
    Gfx *temp_s1;
    Gfx *temp_s1_2;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    GraphicsContext *temp_s0;
    Mtx *temp_v0;
    s16 temp_s5;
    void *phi_s2;
    s16 phi_s5;

    temp_s0 = arg1->state.gfxCtx;
    phi_s2 = arg0 + 0x5B0;
    phi_s5 = 0;
    do {
        if (phi_s2->unk_0 != 0) {
            SkinMatrix_SetTranslate((MtxF *) &sp170, phi_s2->unk_4, phi_s2->unk_8, phi_s2->unk_C);
            SkinMatrix_SetScale((MtxF *) &sp130, phi_s2->unk_20, phi_s2->unk_24, phi_s2->unk_28);
            SkinMatrix_SetRotateRPY((MtxF *) &spF0, 0, 0, (s16) (s32) phi_s2->unk_1C);
            SkinMatrix_MtxFMtxFMult((MtxF *) &sp170, arg1 + 0x187FC, (MtxF *) &spB0);
            SkinMatrix_MtxFMtxFMult((MtxF *) &spB0, (MtxF *) &spF0, (MtxF *) &sp70);
            SkinMatrix_MtxFMtxFMult((MtxF *) &sp70, (MtxF *) &sp130, (MtxF *) &sp1B0);
            temp_v1 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v1 + 8;
            temp_v1->words.w1 = &D_801D1DE0;
            temp_v1->words.w0 = 0xDA380003;
            temp_v0 = SkinMatrix_MtxFToNewMtx(arg1->state.gfxCtx, (MtxF *) &sp1B0);
            if (temp_v0 != 0) {
                temp_v1_2 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v1_2 + 8;
                temp_v1_2->words.w1 = (u32) temp_v0;
                temp_v1_2->words.w0 = 0xDA380003;
                func_8012C9BC(arg1->state.gfxCtx);
                temp_s1 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_s1 + 8;
                temp_s1->words.w0 = 0xDB060020;
                temp_s1->words.w1 = Lib_SegmentedToVirtual(*(&D_809A8E20 + (phi_s2->unk_2E * 4)));
                temp_v1_3 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v1_3 + 8;
                temp_v1_3->words.w1 = -1;
                temp_v1_3->words.w0 = 0xFA000000;
                temp_v1_4 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v1_4 + 8;
                temp_v1_4->words.w0 = 0xFB000000;
                temp_v1_4->words.w1 = 0xC8FFFFFF;
                temp_s1_2 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_s1_2 + 8;
                temp_s1_2->words.w0 = 0xDE000000;
                temp_s1_2->words.w1 = Lib_SegmentedToVirtual((void *) &D_0403F230);
            }
        }
        temp_s5 = phi_s5 + 1;
        phi_s2 += 0x30;
        phi_s5 = temp_s5;
    } while ((s32) temp_s5 < 0x64);
}
