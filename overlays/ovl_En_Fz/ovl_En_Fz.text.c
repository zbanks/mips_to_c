typedef struct EnFz {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ? (*unk_144)(EnFz *, GlobalContext *); /* inferred */
    /* 0x148 */ ColliderCylinder unk_148;           /* inferred */
    /* 0x194 */ ColliderCylinder unk_194;           /* inferred */
    /* 0x1E0 */ ColliderCylinder unk_1E0;           /* inferred */
    /* 0x22C */ char pad_22C[0x970];                /* maybe part of unk_1E0[32]? */
    /* 0xB9C */ f32 unk_B9C;                        /* inferred */
    /* 0xBA0 */ f32 unk_BA0;                        /* inferred */
    /* 0xBA4 */ s16 unk_BA4;                        /* inferred */
    /* 0xBA6 */ char pad_BA6[0x2];
    /* 0xBA8 */ f32 unk_BA8;                        /* inferred */
    /* 0xBAC */ f32 unk_BAC;                        /* inferred */
    /* 0xBB0 */ f32 unk_BB0;                        /* inferred */
    /* 0xBB4 */ f32 unk_BB4;                        /* inferred */
    /* 0xBB8 */ f32 unk_BB8;                        /* inferred */
    /* 0xBBC */ f32 unk_BBC;                        /* inferred */
    /* 0xBC0 */ s32 unk_BC0;                        /* inferred */
    /* 0xBC4 */ s16 unk_BC4;                        /* inferred */
    /* 0xBC6 */ s16 unk_BC6;                        /* inferred */
    /* 0xBC8 */ s16 unk_BC8;                        /* inferred */
    /* 0xBCA */ s16 unk_BCA;                        /* inferred */
    /* 0xBCC */ u8 unk_BCC;                         /* inferred */
    /* 0xBCD */ s8 unk_BCD;                         /* inferred */
    /* 0xBCE */ u8 unk_BCE;                         /* inferred */
    /* 0xBCF */ s8 unk_BCF;                         /* inferred */
    /* 0xBD0 */ char pad_BD0[0x6];                  /* maybe part of unk_BCF[7]? */
    /* 0xBD6 */ u8 unk_BD6;                         /* inferred */
    /* 0xBD7 */ u8 unk_BD7;                         /* inferred */
    /* 0xBD8 */ u8 unk_BD8;                         /* inferred */
    /* 0xBD9 */ u8 unk_BD9;                         /* inferred */
    /* 0xBDA */ char pad_BDA[0x2];                  /* maybe part of unk_BD9[3]? */
} EnFz;                                             /* size = 0xBDC */

struct _mips2c_stack_EnFz_Destroy {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnFz_Draw {
    /* 0x00 */ char pad_0[0x4C];
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0x4];
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ char pad_60[0x2C];                   /* maybe part of sp5C[12]? */
    /* 0x8C */ Gfx *sp8C;                           /* inferred */
    /* 0x90 */ Gfx *sp90;                           /* inferred */
    /* 0x94 */ char pad_94[0x4];
    /* 0x98 */ GraphicsContext *sp98;               /* inferred */
    /* 0x9C */ s32 sp9C;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x8];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_EnFz_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnFz_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ CollisionCheckContext *sp34;         /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80932784 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ CollisionPoly *sp3C;                 /* inferred */
    /* 0x40 */ u32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad_50[0xC];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_809328A4 {};              /* size 0x0 */

struct _mips2c_stack_func_809328F4 {
    /* 0x00 */ char pad_0[0x88];
    /* 0x88 */ s8 sp88;                             /* inferred */
    /* 0x89 */ s8 sp89;                             /* inferred */
    /* 0x8A */ s8 sp8A;                             /* inferred */
    /* 0x8B */ char pad_8B[0x1];
    /* 0x8C */ s8 sp8C;                             /* inferred */
    /* 0x8D */ s8 sp8D;                             /* inferred */
    /* 0x8E */ s8 sp8E;                             /* inferred */
    /* 0x8F */ s8 sp8F;                             /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ char pad_B4[0x4];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_80932AE8 {};              /* size 0x0 */

struct _mips2c_stack_func_80932AF4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80932BD4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80932C98 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80933014 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809330D4 {};              /* size 0x0 */

struct _mips2c_stack_func_80933104 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80933184 {};              /* size 0x0 */

struct _mips2c_stack_func_809331F8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80933248 {};              /* size 0x0 */

struct _mips2c_stack_func_80933274 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80933324 {};              /* size 0x0 */

struct _mips2c_stack_func_80933368 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809333A4 {};              /* size 0x0 */

struct _mips2c_stack_func_809333D8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80933414 {};              /* size 0x0 */

struct _mips2c_stack_func_80933444 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80933480 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809334B8 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ s16 sp3C;                            /* inferred */
    /* 0x3E */ char pad_3E[0x1];
    /* 0x3F */ u8 sp3F;                             /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
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
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_809336C0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80933760 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80933790 {};              /* size 0x0 */

struct _mips2c_stack_func_809337D4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093389C {};              /* size 0x0 */

struct _mips2c_stack_func_809338E0 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ s16 sp3C;                            /* inferred */
    /* 0x3E */ char pad_3E[0x1];
    /* 0x3F */ u8 sp3F;                             /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
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
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80933AF4 {};              /* size 0x0 */

struct _mips2c_stack_func_80933B38 {};              /* size 0x0 */

struct _mips2c_stack_func_80933B48 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80934018 {};              /* size 0x0 */

struct _mips2c_stack_func_809340BC {};              /* size 0x0 */

struct _mips2c_stack_func_80934178 {
    /* 0x00 */ char pad_0[0x64];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ char pad_70[0x8];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_80934464 {
    /* 0x00 */ char pad_0[0x68];
};                                                  /* size = 0x68 */

s32 func_800BC4EC(Actor *, GlobalContext *, ?, s16); /* extern */
void func_80932784(EnFz *arg0, GlobalContext *arg1); /* static */
s32 func_809328A4(EnFz *arg0, f32 *arg1);           /* static */
void func_809328F4(Actor *arg0, GlobalContext *arg1, Vec3f *arg2, s32 arg3, f32 arg4); /* static */
void func_80932AE8(s32 arg0);                       /* static */
void func_80932AF4(void *arg0);                     /* static */
void func_80932BD4(void *arg0);                     /* static */
void func_80932C98(Actor *arg0, GlobalContext *arg1); /* static */
void func_80933014(EnFz *arg0, u16);                /* static */
void func_809330D4(Actor *arg0);                    /* static */
void func_80933104(EnFz *arg0, ? arg1);             /* static */
void func_80933184(EnFz *arg0);                     /* static */
void func_809331F8(EnFz *arg0, ? arg1);             /* static */
void func_80933248(void *arg0);                     /* static */
void func_80933274(EnFz *arg0, ? arg1);             /* static */
void func_80933324(EnFz *arg0);                     /* static */
void func_80933368(void *arg0, ? arg1);             /* static */
void func_809333A4(void *arg0);                     /* static */
void func_809333D8(void *arg0, ? arg1);             /* static */
void func_80933414(void *arg0);                     /* static */
void func_80933444(void *arg0, s32 arg1);           /* static */
void func_80933480(void *arg0, s32);                /* static */
void func_809334B8(Actor *arg0, ? arg1);            /* static */
void func_809336C0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80933760(Actor *arg0, ? arg1);            /* static */
void func_80933790(Actor *arg0);                    /* static */
void func_809337D4(Actor *arg0, GlobalContext *arg1); /* static */
void func_8093389C(EnFz *arg0);                     /* static */
void func_809338E0(EnFz *arg0, GlobalContext *arg1); /* static */
void func_80933AF4(EnFz *arg0);                     /* static */
void func_80933B38(s32 arg0, ? arg1);               /* static */
void func_80933B48(EnFz *arg0, GlobalContext *arg1); /* static */
void func_80934018(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 arg4); /* static */
void func_809340BC(Actor *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, ?32 arg6, ?32 arg7, s32, s32); /* static */
void func_80934178(EnFz *arg0, GlobalContext *arg1); /* static */
void func_80934464(EnFz *arg0, GlobalContext *arg1); /* static */
static ? D_809346F0;                                /* unable to generate initializer */
static ColliderCylinderInitType1 D_809346F8 = {
    {0xA, 0x11, 9, 0x39, 1},
    {0, {0xF7CFFFFF, 0, 0}, {0xF7CFEFDD, 0, 0}, 1, 5, 1},
    {0x1E, 0x50, 0, {0, 0, 0}},
};
static ColliderCylinderInitType1 D_80934724 = {
    {9, 0, 0xD, 0, 1},
    {0, {0xF7CFFFFF, 0, 0}, {0x1022, 0, 0}, 0, 1, 0},
    {0x23, 0x50, 0, {0, 0, 0}},
};
static ColliderCylinderInitType1 D_80934750 = {
    {0xA, 0x11, 0, 0, 1},
    {0, {0x20000000, 2, 4}, {0, 0, 0}, 1, 0, 0},
    {0x14, 0x1E, 0xFFF1, {0, 0, 0}},
};
static DamageTable D_8093477C = {
    {
        0,
        0xD0,
        0,
        0xF2,
        0,
        0xD0,
        0xF2,
        0xF3,
        0xF2,
        0xF1,
        0xF3,
        0x22,
        0,
        0x42,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0xE0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static InitChainEntry D_8093479C[4];                /* unable to generate initializer */
static ? D_809347AC;                                /* unable to generate initializer */
static ? D_809347BC;                                /* unable to generate initializer */

void EnFz_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a1_2;
    ColliderCylinder *temp_a1_3;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    EnFz *this = (EnFz *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_8093479C);
    this->actor.colChkInfo.damageTable = &D_8093477C;
    this->actor.colChkInfo.health = 3;
    temp_a1 = &this->unk_148;
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinderType1(globalCtx, temp_a1, (Actor *) this, &D_809346F8);
    temp_a1_2 = &this->unk_194;
    sp20 = temp_a1_2;
    Collider_InitCylinder(globalCtx, temp_a1_2);
    Collider_SetCylinderType1(globalCtx, temp_a1_2, (Actor *) this, &D_80934724);
    temp_a1_3 = &this->unk_1E0;
    sp20 = temp_a1_3;
    Collider_InitCylinder(globalCtx, temp_a1_3);
    Collider_SetCylinderType1(globalCtx, temp_a1_3, (Actor *) this, &D_80934750);
    Actor_SetScale((Actor *) this, 0.008f);
    temp_f0 = this->actor.world.pos.y;
    this->actor.gravity = 0.0f;
    this->actor.velocity.y = 0.0f;
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.flags &= -2;
    this->unk_BC8 = 0;
    this->unk_BCF = 0;
    this->unk_BCC = 1;
    this->unk_BCD = 0;
    this->unk_BCE = 0;
    this->unk_BD7 = 1;
    this->unk_BD8 = 0;
    this->actor.speedXZ = 0.0f;
    this->actor.uncullZoneScale = 400.0f;
    this->unk_BAC = temp_f0;
    this->unk_BB4 = temp_f0;
    this->unk_BA8 = this->actor.world.pos.x;
    this->unk_BB0 = this->actor.world.pos.z;
    this->actor.velocity.y = this->actor.gravity;
    this->unk_BB8 = 135.0f;
    if ((this->actor.params & 0x8000) != 0) {
        this->unk_BC0 = 0;
        this->actor.scale.y = 0.0f;
        func_80933184(this);
    } else {
        temp_v0 = this->actor.shape.rot.z;
        this->unk_BC0 = (s32) 0xFFU;
        if (temp_v0 == 0) {
            this->unk_BC6 = (s32) Rand_ZeroFloat(64.0f) + 0xC0;
        } else {
            if ((s32) temp_v0 < 0) {
                this->actor.shape.rot.z = 1;
                goto block_8;
            }
            if ((s32) temp_v0 >= 0x11) {
                this->actor.shape.rot.z = 0x10;
block_8:
            }
            this->actor.shape.rot.z += -1;
            this->unk_BC6 = this->actor.shape.rot.z * 0x10;
        }
        temp_v0_2 = this->actor.params;
        this->actor.shape.rot.z = 0;
        if ((temp_v0_2 & 0x4000) != 0) {
            this->unk_BC0 = 0;
            this->actor.scale.y = 0.0f;
            func_80933184(this);
        } else if ((temp_v0_2 & 0xF) == 3) {
            func_80933AF4(this);
        } else {
            func_8093389C(this);
        }
    }
    this->unk_BA4 = 0;
    this->unk_BA0 = 0.0f;
    this->unk_B9C = 0.0f;
    func_80932784(this, globalCtx);
}

void EnFz_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    Actor *temp_v1;
    EnFz *this = (EnFz *) thisx;

    Collider_DestroyCylinder(globalCtx, &this->unk_148);
    Collider_DestroyCylinder(globalCtx, &this->unk_194);
    Collider_DestroyCylinder(globalCtx, &this->unk_1E0);
    temp_v1 = this->actor.parent;
    if ((temp_v1 != 0) && (this->unk_BC4 == 0) && (temp_v1->id == 0x15D) && (temp_v1->update != 0) && (temp_v1[3].wallPoly != 0)) {
        temp_v1[3].wallPoly = NULL;
    }
}

void func_80932784(EnFz *arg0, GlobalContext *arg1) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    ? sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    u32 sp40;
    CollisionPoly *sp3C;
    Vec3f *sp38;
    Vec3f *temp_a1;
    f32 *temp_a0;

    sp5C = arg0->actor.world.pos.x;
    sp60 = arg0->actor.world.pos.y + 20.0f;
    sp64 = arg0->actor.world.pos.z;
    SysMatrix_InsertTranslation(sp5C, sp60, sp64, 0);
    SysMatrix_InsertRotation(arg0->actor.shape.rot.x, arg0->actor.shape.rot.y, arg0->actor.shape.rot.z, 1);
    temp_a1 = arg0 + 0x22C;
    sp38 = temp_a1;
    temp_a0 = &sp44;
    sp48 = 0.0f;
    sp44 = 0.0f;
    sp4C = 440.0f;
    SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, temp_a1);
    if (func_800C55C4(arg1 + 0x830, (Vec3f *) &sp5C, sp38, (Vec3f *) &sp50, &sp3C, 1U, 0U, 0U, 1U, &sp40) != 0) {
        Math_Vec3f_Copy(sp38, (Vec3f *) &sp50);
    }
    sp5C = arg0->actor.world.pos.x - arg0->unk_22C;
    sp64 = arg0->actor.world.pos.z - arg0->unk_234;
    arg0->unk_238 = (sp5C * sp5C) + (sp64 * sp64);
}

s32 func_809328A4(EnFz *arg0, f32 *arg1) {
    f32 temp_f0;
    f32 temp_f2;

    temp_f0 = arg0->actor.world.pos.x - arg1->unk_0;
    temp_f2 = arg0->actor.world.pos.z - arg1[2];
    if (arg0->unk_238 <= ((temp_f0 * temp_f0) + (temp_f2 * temp_f2))) {
        return 1;
    }
    return 0;
}

void func_809328F4(Actor *arg0, GlobalContext *arg1, Vec3f *arg2, s32 arg3, f32 arg4) {
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    s8 sp8A;
    s8 sp89;
    s8 sp88;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 temp_f24;
    s32 temp_s0;
    s32 temp_s1;
    s32 phi_s0;

    sp98 = 0.0f;
    sp90 = 0.0f;
    sp8C = 0x9B;
    sp8D = 0xFF;
    sp8E = 0xFF;
    sp8F = 0xFF;
    sp88 = 0xC8;
    sp89 = 0xC8;
    sp8A = 0xC8;
    sp94 = -1.0f;
    phi_s0 = 0;
    if (arg3 > 0) {
        temp_s5 = &sp9C;
        temp_s4 = &spA8;
        do {
            temp_f24 = randPlusMinusPoint5Scaled(0.3f) + 0.6f;
            temp_s1 = (s32) randPlusMinusPoint5Scaled(5.0f) + 0xC;
            spA8 = randPlusMinusPoint5Scaled(arg4) + arg2->x;
            spAC = Rand_ZeroFloat(arg4) + arg2->y;
            spB0 = randPlusMinusPoint5Scaled(arg4) + arg2->z;
            sp9C = randPlusMinusPoint5Scaled(10.0f);
            spA0 = Rand_ZeroFloat(10.0f) + 2.0f;
            spA4 = randPlusMinusPoint5Scaled(10.0f);
            EffectSsEnIce_Spawn(arg1, (Vec3f *) temp_s4, temp_f24, (Vec3f *) temp_s5, (Vec3f *) &sp90, (Color_RGBA8 *) &sp8C, (Color_RGBA8 *) &sp88, temp_s1);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != arg3);
    }
    CollisionCheck_SpawnShieldParticles(arg1, arg2);
}

void func_80932AE8(s32 arg0) {

}

void func_80932AF4(void *arg0) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;

    if ((arg0->unk_BC6 & 0xF) == 0) {
        sp44 = randPlusMinusPoint5Scaled(40.0f) + arg0->unk_24;
        sp48 = randPlusMinusPoint5Scaled(40.0f) + arg0->unk_28 + 30.0f;
        sp4C = randPlusMinusPoint5Scaled(40.0f) + arg0->unk_2C;
        sp34 = 0.0f;
        sp2C = 0.0f;
        sp40 = 0.0f;
        sp3C = 0.0f;
        sp38 = 0.0f;
        sp30 = 0.1f;
        func_80934018(arg0, &sp44, &sp38, &sp2C, Rand_ZeroFloat(7.5f) + 15.0f);
    }
}

void func_80932BD4(void *arg0) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;

    if ((arg0->unk_BC6 & 3) == 0) {
        sp44 = randPlusMinusPoint5Scaled(40.0f) + arg0->unk_24;
        sp48 = arg0->unk_BB4;
        sp4C = randPlusMinusPoint5Scaled(40.0f) + arg0->unk_2C;
        sp34 = 0.0f;
        sp2C = 0.0f;
        sp40 = 0.0f;
        sp3C = 0.0f;
        sp38 = 0.0f;
        sp30 = 0.1f;
        func_80934018(arg0, &sp44, &sp38, &sp2C, Rand_ZeroFloat(7.5f) + 15.0f);
    }
}

void func_80932C98(Actor *arg0, GlobalContext *arg1) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    s16 temp_a0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v1;
    void *temp_v0;

    if (arg0->unk_BCD != 0) {
        if ((arg0->bgCheckFlags & 8) == 0) {
            if (func_800BC4EC(arg0, arg1, 0x42700000, arg0->world.rot.y) == 0) {
                goto block_4;
            }
        } else {
block_4:
            arg0->bgCheckFlags &= 0xFFF7;
            arg0->unk_BCD = 0U;
            arg0[9].scale.x = 0.0f;
            arg0->speedXZ = 0.0f;
        }
    }
    temp_v0 = arg0->parent;
    if ((temp_v0 != 0) && (temp_a0 = arg0->unk_BC4, (temp_a0 != 5)) && (temp_v0->id == 0x15D)) {
        if ((temp_v0->update == 0) || ((s32) temp_v0->colChkInfo.health <= 0)) {
            arg0->colChkInfo.health = 0;
            arg0->unk_BC4 = 5;
            Audio_PlayActorSound2(arg0, 0x39A6U);
            Audio_PlayActorSound2(arg0, 0x28CBU);
            sp3C = arg0->world.pos.x;
            sp40 = arg0->world.pos.y;
            sp44 = arg0->world.pos.z;
            func_809328F4(arg0, arg1, (Vec3f *) &sp3C, 0x1E, 10.0f);
            func_809336C0(arg0, arg1);
            return;
        }
        if ((arg0->colChkInfo.health != 0) && (temp_a0 == 1)) {
            arg0->colChkInfo.health = 0;
            arg0->unk_BC4 = 5;
            Audio_PlayActorSound2(arg0, 0x39A6U);
            Audio_PlayActorSound2(arg0, 0x28CBU);
            sp3C = arg0->world.pos.x;
            sp40 = arg0->world.pos.y;
            sp44 = arg0->world.pos.z;
            func_809328F4(arg0, arg1, (Vec3f *) &sp3C, 0x1E, 10.0f);
            func_809336C0(arg0, arg1);
            return;
        }
        goto block_14;
    }
block_14:
    if (arg0->unk_BCE != 0) {
        if (((arg0->params & 0x8000) != 0) && ((arg0->unk_158 & 2) != 0)) {
            arg0->unk_BCD = 0U;
            arg0[9].scale.x = 0.0f;
            arg0->unk_159 = (u8) (arg0->unk_159 & 0xFFFD);
            arg0->speedXZ = 0.0f;
            arg0->unk_BCA = 0xA;
            func_809330D4(arg0);
            return;
        }
        temp_v0_2 = arg0->unk_1A5;
        if ((temp_v0_2 & 0x80) != 0) {
            arg0->unk_1A5 = (u8) (temp_v0_2 & 0xFF7F);
            arg0->unk_159 = (u8) (arg0->unk_159 & 0xFFFD);
            return;
        }
        temp_v1 = arg0->unk_159;
        if ((temp_v1 & 2) != 0) {
            temp_v0_3 = arg0->colChkInfo.damageEffect;
            arg0->unk_159 = (u8) (temp_v1 & 0xFFFD);
            if (temp_v0_3 != 2) {
                if (temp_v0_3 != 4) {
                    if (temp_v0_3 != 0xF) {
                        return;
                    }
                    goto block_26;
                }
                arg0->unk_BA4 = 0x28;
                arg0->unk_B9C = 1.0f;
block_26:
                Actor_ApplyDamage(arg0);
                func_800BCB70(arg0, 0x4000, 0xFF, 0x2000, (s16) 8);
                if (arg0->colChkInfo.health != 0) {
                    Audio_PlayActorSound2(arg0, 0x39A5U);
                    sp3C = arg0->world.pos.x;
                    sp40 = arg0->world.pos.y;
                    sp44 = arg0->world.pos.z;
                    func_809328F4(arg0, arg1, (Vec3f *) &sp3C, 0xA, 0.0f);
                    arg0->unk_BCF = (u8) (arg0->unk_BCF + 1);
                    return;
                }
                Audio_PlayActorSound2(arg0, 0x39A6U);
                Audio_PlayActorSound2(arg0, 0x28CBU);
                sp3C = arg0->world.pos.x;
                sp40 = arg0->world.pos.y;
                sp44 = arg0->world.pos.z;
                func_809328F4(arg0, arg1, (Vec3f *) &sp3C, 0x1E, 10.0f);
                func_809336C0(arg0, arg1);
                return;
            }
            Audio_PlayActorSound2(arg0, 0x39A6U);
            func_80933790(arg0);
            /* Duplicate return node #30. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #30. Try simplifying control flow for better match */
    }
}

void func_80933014(EnFz *arg0) {
    s16 temp_a1;
    s16 temp_a3;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s32 temp_a2;
    s32 phi_a0;
    s16 phi_a1;
    s32 phi_v0;

    temp_v0 = arg0->actor.params;
    temp_a1 = arg0->actor.yawTowardsPlayer;
    temp_a2 = (s32) (temp_v0 & 0x3000) >> 0xC;
    phi_a1 = temp_a1;
    if ((temp_v0 & 0x8000) == 0) {
        temp_a3 = arg0->actor.home.rot.y;
        if (temp_a2 != 3) {
            temp_v0_2 = temp_a1 - temp_a3;
            if ((s32) temp_v0_2 < 0) {
                phi_a0 = -(s32) temp_v0_2;
            } else {
                phi_a0 = (s32) temp_v0_2;
            }
            temp_v1 = *(&D_809346F0 + (temp_a2 * 2));
            if ((s32) temp_v1 < phi_a0) {
                phi_v0 = temp_v1 << 0x10;
                if ((s32) temp_v0_2 > 0) {

                } else {
                    phi_v0 = (s32) temp_v1 * -0x10000;
                }
                phi_a1 = (s16) (temp_a3 + (phi_v0 >> 0x10));
            }
        }
    }
    Math_SmoothStepToS(arg0 + 0xBE, phi_a1, 0xA, 0x7D0, (s16) 0);
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
}

void func_809330D4(Actor *arg0) {
    arg0->unk_BD6 = 2;
    arg0->unk_BCE = 0;
    arg0->flags &= -2;
    arg0->unk_144 = func_80933104;
}

void func_80933104(EnFz *arg0, ? arg1) {
    u32 temp_t7;

    temp_t7 = arg0->unk_BC0 - 0x10;
    arg0->unk_BC0 = temp_t7;
    if (temp_t7 >= 0x100U) {
        arg0->unk_BC0 = 0;
    }
    if (Math_SmoothStepToF(arg0 + 0x5C, 0.0f, 1.0f, 0.0005f, 0.0f) == 0.0f) {
        func_80933184(arg0);
    }
}

void func_80933184(EnFz *arg0) {
    arg0->unk_BD6 = 0;
    arg0->unk_BD2 = 0;
    arg0->unk_BD0 = 0;
    arg0->unk_BCA = 0x64;
    arg0->actor.world.pos.x = arg0->unk_BA8;
    arg0->actor.world.pos.y = arg0->unk_BAC;
    arg0->actor.world.pos.z = arg0->unk_BB0;
    if ((arg0->actor.params & 0x4000) != 0) {
        arg0->unk_BD6 = 2;
        arg0->unk_BCA = 0xA;
        arg0->unk_BD2 = 0xFA0;
        arg0->unk_144 = func_80933274;
        return;
    }
    arg0->unk_144 = func_809331F8;
}

void func_809331F8(EnFz *arg0, GlobalContext *arg1) {
    if ((arg0->unk_BCA == 0) && (arg0->actor.xzDistToPlayer < 400.0f)) {
        func_80933248();
    }
}

void func_80933248(void *arg0) {
    arg0->unk_BD6 = 2;
    arg0->unk_BCA = 0x14;
    arg0->unk_BD2 = 0xFA0;
    arg0->unk_144 = func_80933274;
}

void func_80933274(EnFz *arg0, GlobalContext *arg1) {
    u32 temp_t8;

    if (arg0->unk_BCA == 0) {
        temp_t8 = arg0->unk_BC0 + 8;
        arg0->unk_BC0 = temp_t8;
        if (temp_t8 >= 0x100U) {
            arg0->unk_BC0 = 0xFF;
        }
        if (Math_SmoothStepToF(arg0 + 0x5C, 0.008f, 1.0f, 0.0005f, 0.0f) == 0.0f) {
            if ((arg0->actor.params & 0x4000) != 0) {
                func_8093389C(arg0);
                return;
            }
            func_80933324(arg0);
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_80933324(EnFz *arg0) {
    arg0->unk_BD6 = 1;
    arg0->unk_BCA = 0x28;
    arg0->unk_BCC = 1;
    arg0->unk_BCE = 1;
    arg0->actor.flags |= 1;
    arg0->unk_144 = func_80933368;
    arg0->actor.gravity = -1.0f;
}

void func_80933368(EnFz *arg0, GlobalContext *arg1) {
    func_80933014();
    if (arg0->unk_BCA == 0) {
        func_809333A4(arg0);
    }
}

void func_809333A4(EnFz *arg0) {
    arg0->unk_BD6 = 1;
    arg0->unk_BCD = 1;
    arg0->unk_BCA = 0x64;
    arg0->unk_144 = func_809333D8;
    arg0->unk_BBC = 4.0f;
}

void func_809333D8(EnFz *arg0, GlobalContext *arg1) {
    if ((arg0->unk_BCA == 0) || (arg0->unk_BCD == 0)) {
        func_80933414();
    }
}

void func_80933414(void *arg0) {
    arg0->unk_BD6 = 1;
    arg0->unk_BBC = 0.0f;
    arg0->unk_70 = 0.0f;
    arg0->unk_BCA = 0x28;
    arg0->unk_144 = func_80933444;
}

void func_80933444(void *arg0, s32 arg1) {
    func_80933014();
    if (arg0->unk_BCA == 0) {
        func_80933480(arg0, arg1);
    }
}

void func_80933480(void *arg0) {
    arg0->unk_BD6 = 1;
    arg0->unk_BCA = 0x50;
    arg0->unk_144 = func_809334B8;
    func_80932784();
}

void func_809334B8(Actor *arg0, ? arg1) {
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    u8 sp3F;
    s16 sp3C;
    f32 *temp_a1;
    f32 temp_f12;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_v0_3;
    f32 phi_f0;
    f32 phi_f2;

    temp_v0 = arg0->unk_BCA;
    if (temp_v0 == 0) {
        func_809330D4(arg0);
        return;
    }
    if ((s32) temp_v0 >= 0xB) {
        sp3F = 0;
        sp3C = 0x96;
        func_800B9010(arg0, 0x31A4U);
        temp_v0_2 = arg0->unk_BCA;
        if ((temp_v0_2 - 0xA) < 0x10) {
            sp3C = (temp_v0_2 * 0xA) - 0x64;
        }
        sp48 = 0.0f;
        sp40 = 0.0f;
        sp44 = 0.6f;
        sp58 = arg0->world.pos.x;
        sp5C = arg0->world.pos.y + 20.0f;
        sp60 = arg0->world.pos.z;
        Matrix_RotateY(arg0->shape.rot.y, 0U);
        sp64 = 0.0f;
        sp68 = -2.0f;
        temp_v0_3 = arg0->params & 0xF;
        if (temp_v0_3 == 1) {
            phi_f0 = 10.0f;
        } else {
            if (temp_v0_3 == 2) {
                phi_f2 = 20.0f;
            } else {
                phi_f2 = 0.0f;
            }
            phi_f0 = phi_f2;
        }
        sp6C = phi_f0 + 20.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp64, (Vec3f *) &sp4C);
        if ((arg0->unk_BCA & 7) == 0) {
            sp3F = 1;
        }
        func_809340BC(arg0, &sp58, &sp4C, &sp40, (f32 *)0x40000000, (f32 *)0x41C80000, (?32) sp3C, (?32) sp3F);
        temp_f12 = sp58;
        temp_a1 = &sp58;
        sp58 = temp_f12 + (sp4C * 0.5f);
        sp5C += sp50 * 0.5f;
        sp60 += sp54 * 0.5f;
        func_809340BC((bitwise Actor *) temp_f12, (bitwise f32 *) sp54, (f32 *) arg0, temp_a1, &sp4C, &sp40, 0x40000000, 0x41C80000, (s32) sp3C, 0);
    }
}

void func_809336C0(Actor *arg0, GlobalContext *arg1) {
    arg0->unk_BD6 = 0;
    arg0[9].scale.x = 0.0f;
    arg0->gravity = 0.0f;
    arg0->velocity.y = 0.0f;
    arg0->speedXZ = 0.0f;
    arg0->unk_BCC = 1;
    arg0->unk_BCE = 0;
    arg0->unk_BD8 = 1;
    arg0->flags &= -2;
    arg0->unk_BD7 = 0;
    arg0->unk_BCA = 0x3C;
    func_800BC154(arg1, arg1 + 0x1CA0, arg0, 6U);
    Item_DropCollectibleRandom(arg1, arg0, (Vec3f *) &arg0->world, 0xA0);
    arg0->unk_144 = func_80933760;
}

void func_80933760(Actor *arg0, ? arg1) {
    if (arg0->unk_BCA == 0) {
        Actor_MarkForDeath(arg0);
    }
}

void func_80933790(Actor *arg0) {
    arg0->unk_BD6 = 3;
    arg0->unk_BCE = 0;
    arg0->unk_BD8 = 1;
    arg0->flags &= -2;
    arg0->speedXZ = 0.0f;
    arg0[9].scale.x = 0.0f;
    arg0->unk_144 = func_809337D4;
}

void func_809337D4(Actor *arg0, GlobalContext *arg1) {
    f32 *temp_a0;
    u32 temp_t7;

    temp_a0 = arg0 + 0x5C;
    arg0 = arg0;
    Math_StepToF(temp_a0, 0.0006f, 0.0006f);
    if (arg0->scale.y < 0.006f) {
        arg0->scale.x += 0.001f;
        arg0->scale.z += 0.001f;
    }
    if (arg0->scale.y < 0.004f) {
        temp_t7 = arg0[9].scale.y - 0x14;
        arg0[9].scale.y = temp_t7;
        if (temp_t7 >= 0x100U) {
            arg0[9].scale.y = 0;
        }
    }
    if (arg0[9].scale.y == 0) {
        func_809336C0(arg0, arg1);
    }
}

void func_8093389C(EnFz *arg0) {
    arg0->unk_BD6 = 1;
    arg0->unk_BCA = 0x28;
    arg0->unk_BCC = 1;
    arg0->unk_BCE = 1;
    arg0->actor.flags |= 1;
    arg0->unk_144 = func_809338E0;
    arg0->actor.gravity = -1.0f;
}

void func_809338E0(EnFz *arg0, GlobalContext *arg1) {
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    u8 sp3F;
    s16 sp3C;
    f32 *temp_a1;
    f32 temp_f12;
    s32 temp_v0;
    s32 temp_v0_2;
    f32 phi_f0;
    f32 phi_f2;

    if ((arg0->unk_BC6 & 0xC0) != 0) {
        func_80933014(arg0, 0x31A4U);
        func_80932784(arg0, arg1);
        return;
    }
    sp3F = 0;
    sp3C = 0x96;
    func_800B9010((Actor *) arg0, 0x31A4U);
    temp_v0 = arg0->unk_BC6 & 0x3F;
    if (temp_v0 >= 0x30) {
        sp3C = 0x276 - (temp_v0 * 0xA);
    }
    sp48 = 0.0f;
    sp40 = 0.0f;
    sp44 = 0.6f;
    sp58 = arg0->actor.world.pos.x;
    sp5C = arg0->actor.world.pos.y + 20.0f;
    sp60 = arg0->actor.world.pos.z;
    Matrix_RotateY(arg0->actor.shape.rot.y, 0U);
    sp64 = 0.0f;
    sp68 = -2.0f;
    temp_v0_2 = arg0->actor.params & 0xF;
    if (temp_v0_2 == 1) {
        phi_f0 = 10.0f;
    } else {
        if (temp_v0_2 == 2) {
            phi_f2 = 20.0f;
        } else {
            phi_f2 = 0.0f;
        }
        phi_f0 = phi_f2;
    }
    sp6C = phi_f0 + 20.0f;
    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp64, (Vec3f *) &sp4C);
    if ((arg0->unk_BC6 & 7) == 0) {
        sp3F = 1;
    }
    func_809340BC((Actor *) arg0, &sp58, &sp4C, &sp40, (f32 *)0x40000000, (f32 *)0x41C80000, (?32) sp3C, (?32) sp3F);
    temp_f12 = sp58;
    temp_a1 = &sp58;
    sp58 = temp_f12 + (sp4C * 0.5f);
    sp5C += sp50 * 0.5f;
    sp60 += sp54 * 0.5f;
    func_809340BC((bitwise Actor *) temp_f12, (bitwise f32 *) sp54, (f32 *) arg0, temp_a1, &sp4C, &sp40, 0x40000000, 0x41C80000, (s32) sp3C, 0);
}

void func_80933AF4(EnFz *arg0) {
    arg0->unk_BD6 = 1;
    arg0->unk_BCA = 0x28;
    arg0->unk_BCC = 1;
    arg0->unk_BCE = 1;
    arg0->actor.flags |= 1;
    arg0->unk_144 = func_80933B38;
    arg0->actor.gravity = -1.0f;
}

void func_80933B38(EnFz *arg0, GlobalContext *arg1) {

}

void func_80933B48(EnFz *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk_BA4;
    if (temp_v0 != 0) {
        if ((s32) temp_v0 > 0) {
            arg0->unk_BA4 = temp_v0 - 1;
        }
        if ((s32) arg0->unk_BA4 < 0x14) {
            Math_SmoothStepToF(arg0 + 0xBA0, 0.0f, 0.5f, 0.03f, 0.0f);
            arg0->unk_B9C = (f32) arg0->unk_BA4 * 0.05f;
            return;
        }
        Math_SmoothStepToF(arg0 + 0xBA0, 0.5f, 0.1f, 0.02f, 0.0f);
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void EnFz_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp34;
    ColliderCylinder *sp30;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a1_2;
    CollisionCheckContext *temp_a1_3;
    s16 temp_v0;
    s16 temp_v0_2;
    u8 temp_v0_3;
    EnFz *this = (EnFz *) thisx;

    temp_v0 = this->unk_BC8;
    this->unk_BC6 += 1;
    if (temp_v0 != 0) {
        this->unk_BC8 = temp_v0 - 1;
    }
    temp_v0_2 = this->unk_BCA;
    if (temp_v0_2 != 0) {
        this->unk_BCA = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk_BD9;
    if (temp_v0_3 != 0) {
        this->unk_BD9 = temp_v0_3 - 1;
    }
    Actor_SetHeight((Actor *) this, 50.0f);
    func_80932C98((Actor *) this, globalCtx);
    this->unk_144(this, globalCtx);
    temp_a1 = &this->unk_148;
    if (this->unk_BD8 == 0) {
        sp30 = temp_a1;
        Collider_UpdateCylinder((Actor *) this, temp_a1);
        temp_a1_2 = &this->unk_194;
        sp2C = temp_a1_2;
        Collider_UpdateCylinder((Actor *) this, temp_a1_2);
        if (this->unk_BCE != 0) {
            if (this->actor.colorFilterTimer == 0) {
                temp_a1_3 = &globalCtx->colChkCtx;
                sp34 = temp_a1_3;
                CollisionCheck_SetAC(globalCtx, temp_a1_3, (Collider *) sp30);
                CollisionCheck_SetAC(globalCtx, temp_a1_3, (Collider *) sp2C);
            }
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp30);
        }
    }
    Math_StepToF(&this->actor.speedXZ, this->unk_BBC, 0.2f);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    if (this->unk_BCC != 0) {
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 20.0f, 5U);
    }
    *(&D_809347AC + (this->unk_BD6 * 4))(this);
    func_80933B48(this, globalCtx);
    func_80934178(this, globalCtx);
}

void EnFz_Draw(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp9C;
    GraphicsContext *sp98;
    Gfx *sp90;
    Gfx *sp8C;
    f32 sp5C;
    ? sp58;
    f32 sp50;
    ? sp4C;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_t0;
    PosRot *temp_v0_8;
    u32 temp_v1;
    u8 temp_v0;
    s32 phi_v1;
    EnFz *this = (EnFz *) thisx;

    temp_v0 = this->actor.colChkInfo.health;
    temp_t0 = globalCtx->state.gfxCtx;
    phi_v1 = 3 - temp_v0;
    if (temp_v0 == 0) {
        phi_v1 = 2;
    }
    if (this->unk_BD7 != 0) {
        sp9C = phi_v1;
        sp98 = temp_t0;
        func_800B8118((Actor *) this, globalCtx, 0);
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_t0->polyXlu.p;
        temp_t0->polyXlu.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xDB060020;
        temp_v1 = globalCtx->state.frames;
        sp98 = temp_t0;
        sp90 = temp_v0_2;
        sp90->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, temp_v1 & 0x7F, 0x20, 0x20, 1, 0U, (temp_v1 * 2) & 0x7F, 0x20, 0x20);
        temp_v0_3 = temp_t0->polyXlu.p;
        temp_t0->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xDA380003;
        sp98 = temp_t0;
        sp8C = temp_v0_3;
        sp8C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_4 = temp_t0->polyXlu.p;
        temp_t0->polyXlu.p = &temp_v0_4[1];
        temp_v0_4->words.w0 = 0xFC272660;
        temp_v0_4->words.w1 = 0x3514937F;
        temp_v0_5 = temp_t0->polyXlu.p;
        temp_t0->polyXlu.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xFA000080;
        temp_v0_5->words.w1 = 0x9BFFFFFF;
        temp_v0_6 = temp_t0->polyXlu.p;
        temp_t0->polyXlu.p = &temp_v0_6[1];
        temp_v0_6->words.w0 = 0xFB000000;
        temp_v0_6->words.w1 = (this->unk_BC0 & 0xFF) | 0xC8C8C800;
        temp_v0_7 = temp_t0->polyXlu.p;
        temp_t0->polyXlu.p = &temp_v0_7[1];
        temp_v0_7->words.w0 = 0xDE000000;
        temp_v0_7->words.w1 = *(&D_809347BC + (sp9C * 4));
    }
    func_80934464(this, globalCtx);
    temp_v0_8 = &this->actor.world;
    if ((s32) this->unk_BA4 > 0) {
        sp4C.unk_0 = (f32) temp_v0_8->pos.x;
        sp4C.unk_4 = (f32) temp_v0_8->pos.y;
        sp4C.unk_8 = (f32) temp_v0_8->pos.z;
        sp58.unk_0 = (f32) temp_v0_8->pos.x;
        sp58.unk_4 = (f32) temp_v0_8->pos.y;
        sp58.unk_8 = (f32) temp_v0_8->pos.z;
        sp50 += 20.0f;
        sp5C += 40.0f;
        func_800BE680(globalCtx, NULL, (Vec3f []) (Vec3f *) &sp4C, 2, this->unk_BA0 * 4.0f, 0.5f, this->unk_B9C, (u8) 0x14);
    }
}

void func_80934018(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 arg4) {
    s16 temp_v1;
    void *phi_v0;
    s16 phi_v1;

    phi_v0 = arg0 + 0x23C;
    phi_v1 = 0;
loop_1:
    temp_v1 = phi_v1 + 1;
    phi_v1 = temp_v1;
    if (phi_v0->unk_0 == 0) {
        phi_v0->unk_0 = 1U;
        phi_v0->unk_4 = (s32) arg1->unk_0;
        phi_v0->unk_8 = (s32) arg1[1];
        phi_v0->unk_C = (s32) arg1[2];
        phi_v0->unk_10 = (s32) arg2->unk_0;
        phi_v0->unk_14 = (s32) arg2[1];
        phi_v0->unk_18 = (s32) arg2[2];
        phi_v0->unk_1C = (s32) arg3->unk_0;
        phi_v0->unk_20 = (s32) arg3[1];
        phi_v0->unk_2E = 0;
        phi_v0->unk_24 = (s32) arg3[2];
        phi_v0->unk_2C = 0;
        phi_v0->unk_1 = 0;
        phi_v0->unk_30 = (f32) (arg4 / 1000.0f);
        return;
    }
    phi_v0 += 0x3C;
    if ((s32) temp_v1 >= 0x28) {
        return;
    }
    goto loop_1;
}

void func_809340BC(Actor *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 arg4, f32 arg5, s16 arg6, u8 arg7) {
    s16 temp_v1;
    void *phi_v0;
    s16 phi_v1;

    phi_v0 = arg0 + 0x23C;
    phi_v1 = 0;
loop_1:
    temp_v1 = phi_v1 + 1;
    phi_v1 = temp_v1;
    if (phi_v0->unk_0 == 0) {
        phi_v0->unk_0 = 2U;
        phi_v0->unk_4 = (s32) arg1->unk_0;
        phi_v0->unk_8 = (s32) arg1[1];
        phi_v0->unk_C = (s32) arg1[2];
        phi_v0->unk_10 = (s32) arg2->unk_0;
        phi_v0->unk_14 = (s32) arg2[1];
        phi_v0->unk_18 = (s32) arg2[2];
        phi_v0->unk_1C = (s32) arg3->unk_0;
        phi_v0->unk_20 = (s32) arg3[1];
        phi_v0->unk_2E = 0;
        phi_v0->unk_24 = (s32) arg3[2];
        phi_v0->unk_30 = (f32) (arg4 / 1000.0f);
        phi_v0->unk_34 = (f32) (arg5 / 1000.0f);
        phi_v0->unk_1 = 0;
        phi_v0->unk_2C = arg6;
        phi_v0->unk_38 = arg7;
        return;
    }
    phi_v0 += 0x3C;
    if ((s32) temp_v1 >= 0x28) {
        return;
    }
    goto loop_1;
}

void func_80934178(EnFz *arg0, GlobalContext *arg1) {
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 *temp_s7;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_s2;
    s16 temp_v0_2;
    u8 temp_v0;
    void *phi_s0;
    s16 phi_s2;

    temp_s7 = &sp64;
    phi_s0 = arg0 + 0x23C;
    phi_s2 = 0;
    do {
        if (phi_s0->unk_0 != 0) {
            temp_f0 = phi_s0->unk_10;
            temp_f2 = phi_s0->unk_14;
            temp_f12 = phi_s0->unk_18;
            phi_s0->unk_4 = (f32) (phi_s0->unk_4 + temp_f0);
            phi_s0->unk_8 = (f32) (phi_s0->unk_8 + temp_f2);
            phi_s0->unk_C = (f32) (phi_s0->unk_C + temp_f12);
            temp_v0 = phi_s0->unk_0;
            phi_s0->unk_1 = (u8) (phi_s0->unk_1 + 1);
            phi_s0->unk_10 = (f32) (temp_f0 + phi_s0->unk_1C);
            phi_s0->unk_14 = (f32) (temp_f2 + phi_s0->unk_20);
            phi_s0->unk_18 = (f32) (temp_f12 + phi_s0->unk_24);
            if (temp_v0 == 1) {
                if (phi_s0->unk_2E == 0) {
                    phi_s0->unk_2C = (s16) (phi_s0->unk_2C + 0xA);
                    if ((s32) phi_s0->unk_2C >= 0x64) {
                        phi_s0->unk_2E = (s16) (phi_s0->unk_2E + 1);
                    }
                } else {
                    phi_s0->unk_2C = (s16) (phi_s0->unk_2C - 3);
                    if ((s32) phi_s0->unk_2C <= 0) {
                        phi_s0->unk_2C = 0;
                        phi_s0->unk_0 = 0U;
                    }
                }
            } else if (temp_v0 == 2) {
                temp_f0_2 = phi_s0->unk_34;
                Math_ApproachF(phi_s0 + 0x30, temp_f0_2, 0.1f, temp_f0_2 / 10.0f);
                temp_v0_2 = phi_s0->unk_2E;
                if (temp_v0_2 == 0) {
                    if ((s32) phi_s0->unk_1 >= 7) {
                        phi_s0->unk_2E = (s16) (temp_v0_2 + 1);
                    }
                } else {
                    phi_s0->unk_20 = 2.0f;
                    phi_s0->unk_2C = (s16) (phi_s0->unk_2C - 0x11);
                    phi_s0->unk_10 = (f32) (phi_s0->unk_10 * 0.75f);
                    phi_s0->unk_18 = (f32) (phi_s0->unk_18 * 0.75f);
                    if ((s32) phi_s0->unk_2C <= 0) {
                        phi_s0->unk_2C = 0;
                        phi_s0->unk_0 = 0U;
                    }
                }
                if ((arg0->unk_BD9 == 0) && ((s32) phi_s0->unk_2C >= 0x65) && (phi_s0->unk_38 != 0)) {
                    arg0->unk_1E0.dim.pos.x = (s16) (s32) phi_s0->unk_4;
                    arg0->unk_1E0.dim.pos.y = (s16) (s32) phi_s0->unk_8;
                    arg0->unk_1E0.dim.pos.z = (s16) (s32) phi_s0->unk_C;
                    CollisionCheck_SetAT(arg1, arg1 + 0x18884, arg0 + 0x1E0);
                }
                sp64 = phi_s0->unk_4;
                sp68 = phi_s0->unk_8 + 10.0f;
                sp6C = phi_s0->unk_C;
                if ((phi_s0->unk_2E != 2) && (func_809328A4(arg0, temp_s7) != 0)) {
                    phi_s0->unk_2E = 2;
                    phi_s0->unk_10 = 0.0f;
                    phi_s0->unk_18 = 0.0f;
                }
            }
        }
        temp_s2 = phi_s2 + 1;
        phi_s0 += 0x3C;
        phi_s2 = temp_s2;
    } while ((s32) temp_s2 < 0x28);
}

void func_80934464(EnFz *arg0, GlobalContext *arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    s16 temp_s3;
    s32 temp_v1;
    void *phi_s2;
    s32 phi_s5;
    s16 phi_s3;

    temp_a0 = arg1->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0[1];
    temp_v0->words.w1 = 0x40;
    temp_v0->words.w0 = 0xE3001801;
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = 0;
    temp_v0_2->words.w0 = 0xE3001A01;
    phi_s2 = arg0 + 0x23C;
    phi_s5 = 0;
    phi_s3 = 0;
    do {
        if ((s32) phi_s2->unk_0 > 0) {
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_3[1];
            temp_v0_3->words.w1 = 0;
            temp_v0_3->words.w0 = 0xE7000000;
            if (phi_s5 == 0) {
                temp_v0_4 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_4[1];
                temp_v0_4->words.w1 = (u32) &D_04051180;
                temp_v0_4->words.w0 = 0xDE000000;
                phi_s5 = (phi_s5 + 1) & 0xFF;
            }
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_5[1];
            temp_v0_5->words.w0 = 0xFA000000;
            temp_v0_5->words.w1 = (phi_s2->unk_2C & 0xFF) | 0xC3E1EB00;
            temp_v0_6 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_6[1];
            temp_v0_6->words.w0 = 0xDB060020;
            temp_v1 = phi_s2->unk_1 + (phi_s3 * 3);
            temp_v0_6->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, temp_v1 * 3, temp_v1 * 0xF, 0x20, 0x40, 1, 0U, 0U, 0x20, 0x20);
            SysMatrix_InsertTranslation(phi_s2->unk_4, phi_s2->unk_8, phi_s2->unk_C, 0);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            temp_f12 = phi_s2->unk_30;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            temp_v0_7 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_7[1];
            temp_v0_7->words.w0 = 0xDA380003;
            temp_v0_7->words.w1 = Matrix_NewMtx(temp_s0);
            temp_v0_8 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_8[1];
            temp_v0_8->words.w1 = (u32) &D_04051238;
            temp_v0_8->words.w0 = 0xDE000000;
        }
        temp_s3 = phi_s3 + 1;
        phi_s2 += 0x3C;
        phi_s3 = temp_s3;
    } while ((s32) temp_s3 < 0x28);
}
