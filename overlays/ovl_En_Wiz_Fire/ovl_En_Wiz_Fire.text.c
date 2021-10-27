typedef struct EnWizFire {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnWizFire *, GlobalContext *);
    /* 0x0148 */ u8 unk_148;                        /* inferred */
    /* 0x0149 */ char pad_149[0x3];                 /* maybe part of unk_148[4]? */
    /* 0x014C */ f32 unk_14C;                       /* inferred */
    /* 0x0150 */ f32 unk_150;                       /* inferred */
    /* 0x0154 */ f32 unk_154;                       /* inferred */
    /* 0x0158 */ f32 unk_158;                       /* inferred */
    /* 0x015C */ f32 unk_15C;                       /* inferred */
    /* 0x0160 */ s16 unk_160;                       /* inferred */
    /* 0x0162 */ s16 unk_162;                       /* inferred */
    /* 0x0164 */ u8 unk_164;                        /* inferred */
    /* 0x0165 */ char pad_165[0x1];
    /* 0x0166 */ s16 unk_166;                       /* inferred */
    /* 0x0168 */ s16 unk_168;                       /* inferred */
    /* 0x016A */ s16 unk_16A;                       /* inferred */
    /* 0x016C */ s16 unk_16C;                       /* inferred */
    /* 0x016E */ s16 unk_16E;                       /* inferred */
    /* 0x0170 */ s16 unk_170;                       /* inferred */
    /* 0x0172 */ s16 unk_172;                       /* inferred */
    /* 0x0174 */ s8 unk_174;                        /* inferred */
    /* 0x0175 */ char pad_175[0x3];                 /* maybe part of unk_174[4]? */
    /* 0x0178 */ f32 unk_178;                       /* inferred */
    /* 0x017C */ f32 unk_17C;                       /* inferred */
    /* 0x0180 */ f32 unk_180;                       /* inferred */
    /* 0x0184 */ f32 unk_184;                       /* inferred */
    /* 0x0188 */ f32 unk_188;                       /* inferred */
    /* 0x018C */ f32 unk_18C;                       /* inferred */
    /* 0x0190 */ char pad_190[0x60];                /* maybe part of unk_18C[25]? */
    /* 0x01F0 */ f32 unk_1F0;                       /* inferred */
    /* 0x01F4 */ f32 unk_1F4;                       /* inferred */
    /* 0x01F8 */ f32 unk_1F8;                       /* inferred */
    /* 0x01FC */ f32 unk_1FC;                       /* inferred */
    /* 0x0200 */ f32 unk_200;                       /* inferred */
    /* 0x0204 */ f32 unk_204;                       /* inferred */
    /* 0x0208 */ ColliderCylinder unk_208;          /* inferred */
    /* 0x0254 */ char pad_254[0x28A0];              /* maybe part of unk_208[137]? */
} EnWizFire;                                        /* size = 0x2AF4 */

struct _mips2c_stack_EnWizFire_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnWizFire_Draw {
    /* 0x00 */ char pad_0[0x58];
    /* 0x58 */ EnWizFire *sp58;                     /* inferred */
    /* 0x5C */ char pad_5C[0x4];
};                                                  /* size = 0x60 */

struct _mips2c_stack_EnWizFire_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnWizFire_Update {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0xC];                    /* maybe part of sp44[4]? */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x10];                   /* maybe part of sp78[5]? */
    /* 0x8C */ Actor *sp8C;                         /* inferred */
    /* 0x90 */ char pad_90[0x8];
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_80A4984C {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0x8];
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A49A44 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ ActorContext *sp40;                  /* inferred */
    /* 0x44 */ char pad_44[0x10];                   /* maybe part of sp40[5]? */
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad_54[0x8];
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80A49F38 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A49FD8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A4A11C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A4A608 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A4B0C8 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad_48[0x18];                   /* maybe part of sp44[7]? */
    /* 0x60 */ Gfx *sp60;                           /* inferred */
    /* 0x64 */ char pad_64[0xC];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80A4B33C {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ MtxF *sp40;                          /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ Gfx *sp48;                           /* inferred */
    /* 0x4C */ char pad_4C[0xC];                    /* maybe part of sp48[4]? */
    /* 0x58 */ Gfx *sp58;                           /* inferred */
    /* 0x5C */ char pad_5C[0x4];
    /* 0x60 */ Gfx *sp60;                           /* inferred */
    /* 0x64 */ char pad_64[0xC];                    /* maybe part of sp60[4]? */
    /* 0x70 */ Gfx *sp70;                           /* inferred */
    /* 0x74 */ char pad_74[0x10];                   /* maybe part of sp70[5]? */
    /* 0x84 */ Gfx *sp84;                           /* inferred */
    /* 0x88 */ Gfx *sp88;                           /* inferred */
    /* 0x8C */ char pad_8C[0xC];
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_80A4BAB4 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad_48[0x10];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80A4BC74 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A4BDDC {};              /* size 0x0 */

struct _mips2c_stack_func_80A4BF78 {
    /* 0x00 */ char pad_0[0x68];
};                                                  /* size = 0x68 */

s32 func_8012405C(GlobalContext *);                 /* extern */
void func_80A4B0C8(EnWizFire *arg0, GlobalContext *arg1); /* static */
void func_80A4B33C(EnWizFire *arg0, GlobalContext *arg1); /* static */
void func_80A4BAB4(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A4BC74(EnWizFire *arg0, f32 *arg1, f32 *arg2); /* static */
void func_80A4BDDC(EnWizFire *arg0, GlobalContext *arg1); /* static */
void func_80A4BF78(EnWizFire *arg0, GlobalContext *arg1); /* static */
extern ? D_06000E70;
extern ? D_06000FD8;
extern ? D_06002630;
extern ? D_06002B40;
extern ? D_06003120;
extern ? D_06003640;
extern ? D_06003FC0;
extern ? D_06005190;
extern ? D_06005750;
static s32 D_80A4C1C0 = 0;
static ColliderCylinderInit D_80A4C1E4 = {
    {0xA, 0x11, 9, 0, 0x10, 1},
    {0, {0xF7CFFFFF, 9, 0x10}, {0x1001202, 0, 0}, 1, 1, 0},
    {0, 0, 0, {0, 0, 0}},
};
static ? D_80A4C210;                                /* unable to generate initializer */
static ? D_80A4C21C;                                /* unable to generate initializer */
static ? D_80A4C228;                                /* unable to generate initializer */
static ? D_80A4C234;                                /* unable to generate initializer */
static Color_RGBA8 D_80A4C24C = {0xFA, 0xFA, 0xFA, 0xFF};
static Color_RGBA8 D_80A4C250 = {0xB4, 0xB4, 0xB4, 0xFF};

void EnWizFire_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    EnWizFire *this = (EnWizFire *) thisx;

    Collider_InitAndSetCylinder(globalCtx, &this->unk_208, (Actor *) this, &D_80A4C1E4);
    this->actor.targetMode = 3;
    this->unk_172 = 0xA;
    this->actor.flags &= -2;
    this->unk_1FC = 255.0f;
    this->unk_162 = this->actor.params;
    if (func_8012405C(globalCtx) == 0) {
        this->unk_208.info.toucher.dmgFlags = 0x20000000;
    }
    temp_v0 = this->unk_162;
    switch (temp_v0) {
    case 4:
        this->unk_162 = 0;
        this->unk_166 = 1;
        this->unk_208.info.toucher.damage = 8;
        this->unk_208.info.toucher.effect = 2;
        this->unk_208.info.bumper.dmgFlags = 0x1000A02;
        /* fallthrough */
    case 0:
        if (this->unk_162 == 4) {
            this->unk_162 = 0;
            this->unk_208.info.toucher.damage = 8;
        }
        /* fallthrough */
    case 1:
    case 3:
        this->actionFunc = func_80A4984C;
        return;
    case 2:
        this->actor.draw = func_80A4BAB4;
        this->unk_170 = Rand_S16Offset(0, 0x2710);
        this->unk_160 = 1;
        this->unk_208.info.toucher.damage = 2;
        this->actionFunc = func_80A49F38;
        /* fallthrough */
    default:
        return;
    }
}

void EnWizFire_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v1;
    EnWizFire *this = (EnWizFire *) thisx;

    if (this->unk_162 == 0) {
        globalCtx->envCtx.unk_8C.fogColor[2] = 0;
        temp_v1 = globalCtx->envCtx.unk_8C.fogColor[2];
        globalCtx->envCtx.unk_8C.fogColor[1] = temp_v1;
        globalCtx->envCtx.unk_8C.fogColor[0] = temp_v1;
        globalCtx->envCtx.unk_8C.diffuseColor2[2] = temp_v1;
        globalCtx->envCtx.unk_8C.diffuseColor2[1] = temp_v1;
        globalCtx->envCtx.unk_8C.diffuseColor2[0] = temp_v1;
        globalCtx->envCtx.unk_8C.diffuseColor1[2] = temp_v1;
        globalCtx->envCtx.unk_8C.diffuseColor1[1] = temp_v1;
        globalCtx->envCtx.unk_8C.diffuseColor1[0] = temp_v1;
        globalCtx->envCtx.unk_8C.ambientColor[2] = temp_v1;
        globalCtx->envCtx.unk_8C.ambientColor[1] = temp_v1;
        globalCtx->envCtx.unk_8C.ambientColor[0] = temp_v1;
        globalCtx->envCtx.unk_8C.fogNear = temp_v1;
    }
    Collider_DestroyCylinder(globalCtx, &this->unk_208);
}

void func_80A4984C(EnWizFire *this, GlobalContext *globalCtx) {
    f32 sp4C;
    ? sp44;
    PosRot *temp_v0;
    s16 *temp_a0;
    s16 *temp_a1;
    s16 *temp_a2;
    s16 *temp_a3;
    s16 *temp_t0;
    s16 temp_v0_2;
    s32 temp_v1;
    s16 *phi_a0;
    s16 *phi_a1;
    s16 *phi_a2;
    s16 *phi_a3;
    s32 phi_v1;

    sp44.unk_0 = (s32) D_80A4C210.unk_0;
    temp_v0 = &this->actor.world;
    sp44.unk_4 = (s32) D_80A4C210.unk_4;
    sp44.unk_8 = (s32) D_80A4C210.unk_8;
    temp_t0 = &this->actor.home.rot.z;
    this->unk_178 = temp_v0->pos.x;
    this->unk_17C = temp_v0->pos.y;
    this->unk_180 = temp_v0->pos.z;
    this->unk_184 = temp_v0->pos.x;
    this->unk_188 = temp_v0->pos.y;
    this->unk_18C = temp_v0->pos.z;
    phi_a0 = &temp_t0[188];
    phi_a1 = &temp_t0[194];
    phi_a2 = &temp_t0[200];
    phi_a3 = &temp_t0[206];
    phi_v1 = 2;
    do {
        temp_v1 = phi_v1 + 4;
        temp_a0 = phi_a0 + 0x30;
        temp_a0->unk_-30 = (f32) temp_v0->pos.x;
        temp_a1 = phi_a1 + 0x30;
        temp_a2 = phi_a2 + 0x30;
        temp_a0->unk_-2C = (f32) temp_v0->pos.y;
        temp_a3 = phi_a3 + 0x30;
        temp_a0->unk_-28 = (f32) temp_v0->pos.z;
        temp_a1->unk_-30 = (f32) temp_v0->pos.x;
        temp_a1->unk_-2C = (f32) temp_v0->pos.y;
        temp_a1->unk_-28 = (f32) temp_v0->pos.z;
        temp_a2->unk_-30 = (f32) temp_v0->pos.x;
        temp_a2->unk_-2C = (f32) temp_v0->pos.y;
        temp_a2->unk_-28 = (f32) temp_v0->pos.z;
        temp_a3->unk_-30 = (f32) temp_v0->pos.x;
        temp_a3->unk_-2C = (f32) temp_v0->pos.y;
        temp_a3->unk_-28 = (f32) temp_v0->pos.z;
        phi_a0 = temp_a0;
        phi_a1 = temp_a1;
        phi_a2 = temp_a2;
        phi_a3 = temp_a3;
        phi_v1 = temp_v1;
    } while (temp_v1 != 0xA);
    this->unk_16E = 0;
    SysMatrix_StatePush();
    Matrix_RotateY(this->actor.world.rot.y, 0U);
    SysMatrix_InsertXRotation_s(this->actor.world.rot.x, 1);
    if (this->unk_162 != 0) {
        sp4C = randPlusMinusPoint5Scaled(2.0f) + 8.0f;
    } else {
        sp4C = 12.0f;
    }
    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp44, &this->actor.velocity);
    SysMatrix_StatePop();
    this->actor.world.rot.z = 0;
    temp_v0_2 = this->actor.world.rot.z;
    this->unk_168 = 0x32;
    this->actor.world.rot.y = temp_v0_2;
    this->actor.world.rot.x = temp_v0_2;
    if (this->unk_162 != 0) {
        this->actor.velocity.y = 10.0f;
        this->actor.gravity = -1.0f;
        this->unk_150 = 0.01f;
    } else {
        this->unk_168 = 0x64;
        this->unk_150 = 0.02f;
    }
    this->unk_160 = 0;
    this->actionFunc = func_80A49A44;
}

void func_80A49A44(EnWizFire *this, GlobalContext *globalCtx) {
    f32 sp5C;
    ? sp54;
    ActorContext *sp40;
    Actor *temp_v0_5;
    Vec3f *temp_s0;
    s16 temp_v0;
    s16 temp_v0_3;
    s32 temp_s1;
    s32 temp_v0_2;
    u8 temp_t3;
    u8 temp_v0_4;
    s32 phi_s0;
    s32 phi_s1;

    sp54.unk_0 = (s32) D_80A4C21C.unk_0;
    sp54.unk_4 = (s32) D_80A4C21C.unk_4;
    sp54.unk_8 = (s32) D_80A4C21C.unk_8;
    this->actor.world.rot.z += 0x1388;
    if (this->unk_162 != 0) {
        this->unk_150 = 0.01f;
    } else {
        this->unk_150 = 0.02f;
    }
    temp_v0 = this->unk_168;
    if ((temp_v0 == 0) && (this->unk_14C < 0.001f)) {
        Math_Vec3f_Copy(&this->actor.velocity, &D_801D15B0);
        this->unk_160 = 3;
        this->unk_16A = 0;
        this->actionFunc = func_80A4A608;
        return;
    }
    if (temp_v0 == 0) {
        this->unk_150 = 0.0f;
    }
    Math_ApproachF(&this->unk_14C, this->unk_150, 0.2f, 0.01f);
    if (this->unk_172 == 0) {
        temp_v0_2 = this->actor.bgCheckFlags & 8;
        if ((temp_v0_2 != 0) && (this->unk_162 == 0) && (this->unk_168 != 0) && (temp_v0_2 != 0)) {
            D_80A4C1C0 = 0;
            this->unk_168 = 0;
            this->unk_150 = 0.0f;
        }
    }
    temp_v0_3 = this->unk_162;
    if (((this->actor.bgCheckFlags & 1) != 0) && (this->unk_16A == 0)) {
        if (temp_v0_3 == 1) {
            this->unk_16A = 0xA;
            SysMatrix_StatePush();
            Matrix_RotateY((s16) ((s32) randPlusMinusPoint5Scaled(256.0f) + this->actor.world.rot.y), 0U);
            temp_s0 = &this->actor.velocity;
            sp5C = randPlusMinusPoint5Scaled(2.0f) + 8.0f;
            SysMatrix_MultiplyVector3fByState((Vec3f *) &sp54, temp_s0);
            SysMatrix_StatePop();
            this->actor.velocity.y = 6.0f;
            this->actor.gravity = -0.7f;
            if (this->unk_164 == 0) {
                Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x15F, this->actor.world.pos.x, this->actor.world.pos.y - 10.0f, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 2);
                this->unk_164 = 1;
            }
            this->unk_168 = 0;
            this->unk_14C = 0.0f;
            Math_Vec3f_Copy(temp_s0, &D_801D15B0);
            this->unk_160 = 3;
            this->unk_16A = 0;
            this->actionFunc = func_80A4A608;
            return;
        }
        if ((temp_v0_3 == 0) && (this->unk_168 != 0)) {
            if (this->actor.floorBgId == 0x32) {
                this->unk_16A = 0x64;
                if (this->unk_166 == 0) {
                    sp40 = &globalCtx->actorCtx;
                    phi_s0 = 0;
                    phi_s1 = 0;
                    do {
                        Actor_Spawn(sp40, globalCtx, 0x15F, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) phi_s0, (s16) 0, (s16) 1);
                        temp_s1 = phi_s1 + 1;
                        phi_s0 = (s32) (s16) (phi_s0 + ((s32) randPlusMinusPoint5Scaled(4096.0f) + 0x3333));
                        phi_s1 = temp_s1;
                    } while (temp_s1 != 5);
                    Audio_PlayActorSound2((Actor *) this, 0x180EU);
                    this->unk_16A = Rand_S16Offset(0x46, 0x1E);
                    if (this->unk_16A != 0) {
                        Audio_PlayActorSound2((Actor *) this, 0x30ABU);
                    }
                } else if (this->unk_16A != 0) {
                    Audio_PlayActorSound2((Actor *) this, 0x20B2U);
                }
                Math_Vec3f_Copy(&this->actor.velocity, &D_801D15B0);
                this->unk_168 = 0;
                this->unk_160 = 2;
                this->actionFunc = func_80A4A11C;
                this->unk_14C = 0.0f;
                return;
            }
            /* Duplicate return node #42. Try simplifying control flow for better match */
            return;
        }
        goto block_31;
    }
block_31:
    if ((temp_v0_3 != 3) && (this->unk_168 != 0)) {
        temp_v0_4 = this->unk_208.base.acFlags;
        if ((temp_v0_4 & 2) != 0) {
            this->unk_208.base.acFlags = temp_v0_4 & 0xFFFD;
            if (this->unk_208.info.acHitInfo->toucher.dmgFlags == 0x1000) {
                this->unk_168 = 0;
                this->unk_148 = 1;
                Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x32, 0x28A2U);
            }
        }
        if ((func_8012405C(globalCtx) != 0) && ((this->unk_208.base.atFlags & 4) != 0)) {
            Audio_PlayActorSound2((Actor *) this, 0x180CU);
            temp_v0_5 = this->actor.parent;
            temp_t3 = this->unk_208.base.atFlags & 0xFFE9;
            this->unk_208.base.atFlags = temp_t3;
            this->unk_208.base.atFlags = temp_t3 | 8;
            this->unk_208.info.toucher.dmgFlags = 0x20;
            this->unk_208.info.toucher.damage = 2;
            this->unk_168 = 0x64;
            this->unk_162 = 3;
            this->actor.velocity.x *= -1.0f;
            this->actor.velocity.y *= -0.5f;
            this->actor.velocity.z *= -1.0f;
            if ((temp_v0_5 != 0) && (temp_v0_5->id == 0x15D) && (temp_v0_5->update != 0)) {
                temp_v0_5->unk_3BA = 0;
            }
        }
    }
}

void func_80A49F38(EnWizFire *this, GlobalContext *globalCtx) {
    f32 temp_f4;

    this->unk_150 = 0.02f;
    this->unk_168 = Rand_S16Offset(0x32, 0x32);
    this->unk_154 = randPlusMinusPoint5Scaled(1.0f) * 0.007f;
    this->unk_158 = randPlusMinusPoint5Scaled(1.0f) * 0.005f;
    temp_f4 = randPlusMinusPoint5Scaled(1.0f) * 0.007f;
    this->actionFunc = func_80A49FD8;
    this->unk_15C = temp_f4;
}

void func_80A49FD8(EnWizFire *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    u8 temp_v1;

    if ((s32) this->unk_168 >= 0xB) {
        Math_ApproachF(&this->unk_14C, this->unk_150, 0.3f, 0.01f);
        temp_v1 = this->unk_208.base.acFlags;
        if ((temp_v1 & 2) != 0) {
            temp_v0 = this->unk_168;
            if (temp_v0 != 0) {
                this->unk_208.base.acFlags = temp_v1 & 0xFFFD;
                if ((s32) temp_v0 >= 0xB) {
                    this->unk_168 = temp_v0 - 0xA;
                }
                if (this->unk_208.info.acHitInfo->toucher.dmgFlags == 0x1000) {
                    this->unk_168 = 0;
                    this->unk_148 = 1;
                    Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x32, 0x28A2U);
                }
            }
        }
        if (this->unk_168 != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x205BU);
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return;
    }
    Math_ApproachF(&this->unk_14C, 2.0f * this->unk_150, 0.2f, 0.002f);
    Math_ApproachZeroF(&this->unk_1FC, 1.0f, 35.0f);
    if ((this->unk_168 == 0) && (this->unk_1FC < 2.0f)) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_80A4A11C(EnWizFire *this, GlobalContext *globalCtx) {
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp34;
    Actor *temp_v0;
    Actor *temp_v0_3;
    Actor *temp_v0_4;
    f32 temp_f6;
    u8 temp_v0_2;

    temp_v0 = this->actor.parent;
    if ((temp_v0 != 0) && (temp_v0->id == 0x15D) && (temp_v0->update != 0) && (temp_v0->colChkInfo.health == 0)) {
        this->unk_16A = 0;
        this->unk_174 = 1;
    }
    this->unk_16E += 1;
    if ((s32) this->unk_16E >= 0xB) {
        this->unk_16E = 0xA;
    }
    if (this->unk_16A != 0) {
        Math_ApproachF(&this->unk_200, 60.0f, 0.5f, 10.0f);
        if (this->unk_166 == 1) {
            sp40.unk_0 = D_80A4C228.unk_0;
            (&sp40)[1] = D_80A4C228.unk_4;
            (&sp40)[2] = D_80A4C228.unk_8;
            temp_f6 = randPlusMinusPoint5Scaled(3.0f) / 10.0f;
            sp44 = 0.23f;
            sp40 = temp_f6;
            sp48 = randPlusMinusPoint5Scaled(3.0f) / 10.0f;
            Math_Vec3f_Copy((Vec3f *) &sp34, (Vec3f *) &this->actor.world);
            sp34 += randPlusMinusPoint5Scaled(150.0f);
            sp3C += randPlusMinusPoint5Scaled(150.0f);
            Math_ApproachF(&this->unk_1F0, 0.022f, 0.3f, 0.01f);
            this->unk_208.dim.height = 0x1E;
            this->unk_208.dim.yShift = 0xF;
            this->unk_208.dim.radius = (s16) (s32) (this->unk_1F0 * 4300.0f);
            func_80A4BC74(this, &sp34, &sp40);
            Audio_PlayActorSound2((Actor *) this, 0x20B2U);
            return;
        }
        Math_ApproachF(&this->unk_1F0, 0.02f, 0.3f, 0.002f);
        Math_ApproachF(&this->unk_1F8, 0.02f, 0.3f, 0.002f);
        Math_ApproachF(&this->unk_1F4, 0.02f, 0.3f, 0.2f);
        this->unk_208.dim.radius = (s16) (s32) (this->unk_1F0 * 4000.0f);
        this->unk_208.dim.yShift = -0xF;
        this->unk_208.dim.height = (s16) (s32) (this->unk_1F4 * 1850.0f);
        if ((s32) this->unk_208.dim.height < 2) {
            this->unk_208.dim.height = 2;
        }
        temp_v0_2 = this->unk_208.base.acFlags;
        if ((temp_v0_2 & 2) != 0) {
            this->unk_208.base.acFlags = temp_v0_2 & 0xFFFD;
            if ((D_80A4C1C0 == 0) && (this->unk_208.info.acHitInfo->toucher.dmgFlags == 0x1000)) {
                D_80A4C1C0 = 1;
                this->unk_148 = 1;
                this->unk_16A = 0;
                Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x32, 0x28A2U);
            }
        }
        this->actor.world.pos.y = this->actor.floorHeight + 10.0f;
        Actor_SetHeight((Actor *) this, 0.0f);
        return;
    }
    Math_ApproachZeroF(&this->unk_200, 0.2f, 3.0f);
    if (this->unk_166 == 1) {
        Math_ApproachZeroF(&this->unk_1F0, 0.046f, 0.001f);
        Audio_PlayActorSound2((Actor *) this, 0x20B2U);
        if (this->unk_164 == 0) {
            temp_v0_3 = this->actor.parent;
            if ((temp_v0_3 != 0) && (temp_v0_3->id == 0x15D) && (this->unk_1F0 < 0.05f)) {
                this->unk_208.dim.yShift = -0xF;
                this->unk_164 = 1;
                temp_v0_3->unk_3BA = 0;
            }
        }
        if ((this->unk_164 != 0) && (this->unk_1F0 < 0.05f)) {
            Math_ApproachZeroF(&this->unk_1FC, 1.0f, 5.0f);
        }
        if ((this->unk_1F0 < 0.001f) && (this->unk_204 < 0.001f)) {
            D_80A4C1C0 = 0;
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        /* Duplicate return node #38. Try simplifying control flow for better match */
        return;
    }
    Math_ApproachZeroF(&this->unk_1F4, 0.1f, 0.01f);
    if (this->unk_1F4 < 0.01f) {
        Math_ApproachZeroF(&this->unk_1FC, 1.0f, 10.0f);
        if ((this->unk_1FC < 10.0f) && (this->unk_204 < 0.001f)) {
            D_80A4C1C0 = 0;
            temp_v0_4 = this->actor.parent;
            if ((temp_v0_4 != 0) && (this->unk_162 == 0) && (temp_v0_4->id == 0x15D) && (temp_v0_4->update != 0)) {
                temp_v0_4->unk_3BA = 0;
            }
            Actor_MarkForDeath((Actor *) this);
        }
    }
}

void func_80A4A608(EnWizFire *this, GlobalContext *globalCtx) {
    Actor *temp_v0;

    if (this->unk_16A == 0) {
        this->unk_16A = 2;
        this->unk_16E += 1;
        if ((s32) this->unk_16E >= 6) {
            temp_v0 = this->actor.parent;
            if ((temp_v0 != 0) && (this->unk_162 == 0) && (temp_v0->id == 0x15D)) {
                D_80A4C1C0 = 0;
                if (temp_v0->update != 0) {
                    temp_v0->unk_3BA = 0;
                }
            }
            Actor_MarkForDeath((Actor *) this);
        }
    }
}

void EnWizFire_Update(Actor *thisx, GlobalContext *globalCtx) {
    Actor *sp8C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    s32 sp44;
    Actor *temp_v0;
    ColliderCylinder *temp_s0_3;
    CollisionCheckContext *temp_s1_2;
    f32 *temp_a0_4;
    f32 *temp_a1;
    f32 *temp_v1_5;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f6_2;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_s0;
    s16 temp_s0_2;
    s16 temp_v0_2;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s32 temp_a0;
    s32 temp_f16_3;
    s32 temp_s1;
    s32 temp_v0_3;
    s8 temp_v0_9;
    u8 temp_t0;
    u8 temp_t2;
    u8 temp_t3;
    u8 temp_t4;
    u8 temp_t5;
    u8 temp_t8;
    u8 temp_t9;
    u8 temp_t9_2;
    u8 temp_v0_8;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    f32 phi_f0;
    f32 phi_f18;
    f32 phi_f10;
    f32 phi_f10_2;
    f32 phi_f16;
    f32 phi_f16_2;
    f32 phi_f6;
    f32 phi_f6_2;
    f32 phi_f4;
    f32 *phi_a0;
    f32 *phi_v1;
    s32 phi_v0;
    f32 phi_f0_2;
    s32 phi_v0_2;
    s32 phi_v0_3;
    s32 phi_s1;
    EnWizFire *this = (EnWizFire *) thisx;

    sp8C = globalCtx->actorCtx.actorList[2].first;
    Actor_SetScale((Actor *) this, this->unk_14C);
    func_80A4BDDC(this, globalCtx);
    this->unk_204 = this->unk_200 / 60.0f;
    if (this->unk_162 == 0) {
        temp_v0 = this->actor.parent;
        if ((temp_v0 != 0) && (temp_v0->id == 0x15D) && (temp_v0->update != 0) && (temp_v0->unk_74A != 2)) {
            temp_v0_2 = this->unk_166;
            temp_a0 = (s32) (temp_v0_2 << 0x12) >> 0x10;
            phi_f0 = 970.0f;
            if (temp_v0_2 == 0) {
                phi_f0 = 968.0f;
            }
            temp_v1 = &D_80A4C234 + (temp_a0 * 3);
            globalCtx->envCtx.unk_8C.fogNear = (s16) (s32) ((phi_f0 - (f32) (s16) globalCtx->envCtx.unk_C4.fogNear) * this->unk_204);
            globalCtx->envCtx.unk_8C.ambientColor[0] = (s16) (s32) (((f32) temp_v1->unk_0 - (f32) globalCtx->envCtx.unk_C4.ambientColor[0]) * this->unk_204);
            globalCtx->envCtx.unk_8C.ambientColor[1] = (s16) (s32) (((f32) temp_v1->unk_1 - (f32) globalCtx->envCtx.unk_C4.ambientColor[1]) * this->unk_204);
            temp_a0_2 = temp_a0 + 1;
            temp_v1_2 = &D_80A4C234 + (temp_a0_2 * 3);
            globalCtx->envCtx.unk_8C.ambientColor[2] = (s16) (s32) (((f32) temp_v1->unk_2 - (f32) globalCtx->envCtx.unk_C4.ambientColor[2]) * this->unk_204);
            globalCtx->envCtx.unk_8C.diffuseColor1[0] = (s16) (s32) (((f32) temp_v1_2->unk_0 - (f32) globalCtx->envCtx.unk_C4.diffuseColor1[0]) * this->unk_204);
            globalCtx->envCtx.unk_8C.diffuseColor1[1] = (s16) (s32) (((f32) temp_v1_2->unk_1 - (f32) globalCtx->envCtx.unk_C4.diffuseColor1[1]) * this->unk_204);
            temp_a0_3 = temp_a0_2 + 1;
            temp_v1_3 = &D_80A4C234 + (temp_a0_3 * 3);
            globalCtx->envCtx.unk_8C.diffuseColor1[2] = (s16) (s32) (((f32) temp_v1_2->unk_2 - (f32) globalCtx->envCtx.unk_C4.diffuseColor1[2]) * this->unk_204);
            globalCtx->envCtx.unk_8C.diffuseColor2[0] = (s16) (s32) (((f32) temp_v1_3->unk_0 - (f32) globalCtx->envCtx.unk_C4.diffuseColor[0]) * this->unk_204);
            globalCtx->envCtx.unk_8C.diffuseColor2[1] = (s16) (s32) (((f32) temp_v1_3->unk_1 - (f32) globalCtx->envCtx.unk_C4.diffuseColor[1]) * this->unk_204);
            temp_t9 = temp_v1_3->unk_2;
            temp_f18 = (f32) temp_t9;
            phi_f18 = temp_f18;
            if ((s32) temp_t9 < 0) {
                phi_f18 = temp_f18 + 4294967296.0f;
            }
            temp_t0 = globalCtx->envCtx.unk_C4.diffuseColor[2];
            temp_f10 = (f32) temp_t0;
            phi_f10 = temp_f10;
            if ((s32) temp_t0 < 0) {
                phi_f10 = temp_f10 + 4294967296.0f;
            }
            temp_v1_4 = &D_80A4C234 + ((s16) (temp_a0_3 + 1) * 3);
            globalCtx->envCtx.unk_8C.diffuseColor2[2] = (s16) (s32) ((phi_f18 - phi_f10) * this->unk_204);
            temp_t4 = temp_v1_4->unk_0;
            temp_f10_2 = (f32) temp_t4;
            phi_f10_2 = temp_f10_2;
            if ((s32) temp_t4 < 0) {
                phi_f10_2 = temp_f10_2 + 4294967296.0f;
            }
            temp_t5 = globalCtx->envCtx.unk_C4.fogColor[0];
            temp_f16 = (f32) temp_t5;
            phi_f16 = temp_f16;
            if ((s32) temp_t5 < 0) {
                phi_f16 = temp_f16 + 4294967296.0f;
            }
            globalCtx->envCtx.unk_8C.fogColor[0] = (s16) (s32) ((phi_f10_2 - phi_f16) * this->unk_204);
            temp_t8 = temp_v1_4->unk_1;
            temp_f16_2 = (f32) temp_t8;
            phi_f16_2 = temp_f16_2;
            if ((s32) temp_t8 < 0) {
                phi_f16_2 = temp_f16_2 + 4294967296.0f;
            }
            temp_t9_2 = globalCtx->envCtx.unk_C4.fogColor[1];
            temp_f6 = (f32) temp_t9_2;
            phi_f6 = temp_f6;
            if ((s32) temp_t9_2 < 0) {
                phi_f6 = temp_f6 + 4294967296.0f;
            }
            globalCtx->envCtx.unk_8C.fogColor[1] = (s16) (s32) ((phi_f16_2 - phi_f6) * this->unk_204);
            temp_t2 = temp_v1_4->unk_2;
            temp_f6_2 = (f32) temp_t2;
            phi_f6_2 = temp_f6_2;
            if ((s32) temp_t2 < 0) {
                phi_f6_2 = temp_f6_2 + 4294967296.0f;
            }
            temp_t3 = globalCtx->envCtx.unk_C4.fogColor[2];
            temp_f4 = (f32) temp_t3;
            phi_f4 = temp_f4;
            if ((s32) temp_t3 < 0) {
                phi_f4 = temp_f4 + 4294967296.0f;
            }
            globalCtx->envCtx.unk_8C.fogColor[2] = (s16) (s32) ((phi_f6_2 - phi_f4) * this->unk_204);
        }
    }
    this->unk_170 += 1;
    this->actionFunc(this, globalCtx);
    this->actor.shape.yOffset = 10.0f;
    Actor_ApplyMovement((Actor *) this);
    temp_a1 = &this->actor.scale.z;
    this->unk_178 = this->actor.world.pos.x;
    this->unk_17C = this->actor.world.pos.y;
    this->unk_180 = this->actor.world.pos.z;
    phi_a0 = &temp_a1[94];
    phi_v1 = &temp_a1[97];
    phi_v0 = 8;
    do {
        temp_v0_3 = phi_v0 - 1;
        temp_v1_5 = phi_v1 - 0xC;
        temp_v1_5[3] = phi_a0->unk_0;
        temp_a0_4 = phi_a0 - 0xC;
        temp_v1_5[4] = phi_a0[1];
        temp_v1_5[5] = temp_a0_4[5];
        phi_a0 = temp_a0_4;
        phi_v1 = temp_v1_5;
        phi_v0 = temp_v0_3;
    } while (temp_v0_3 >= 0);
    temp_v0_4 = this->unk_172;
    this->actor.velocity.y += this->actor.gravity;
    if (temp_v0_4 != 0) {
        this->unk_172 = temp_v0_4 - 1;
    }
    temp_v0_5 = this->unk_168;
    if (temp_v0_5 != 0) {
        this->unk_168 = temp_v0_5 - 1;
    }
    temp_v0_6 = this->unk_16C;
    if (temp_v0_6 != 0) {
        this->unk_16C = temp_v0_6 - 1;
    }
    temp_v0_7 = this->unk_16A;
    if (temp_v0_7 != 0) {
        this->unk_16A = temp_v0_7 - 1;
    }
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 5.0f, 10.0f, 0x1DU);
    if (((this->unk_148 != 0) || (D_80A4C1C0 != 0)) && (this->unk_16C == 0)) {
        sp70 = 0.0f;
        sp74 = 1.0f;
        sp78 = 0.0f;
        sp64 = 0.0f;
        sp68 = 1.0f;
        sp6C = 0.0f;
        phi_f0_2 = (f32) Rand_S16Offset(0x14, 0xA);
        if (this->unk_162 == 0) {
            phi_f0_2 = (f32) Rand_S16Offset(0x28, 0x14);
        }
        sp54 = phi_f0_2;
        this->unk_16C = Rand_S16Offset(2, 2);
        sp44 = (s32) (s16) (s32) phi_f0_2;
        phi_s1 = 0;
        do {
            temp_s0 = Rand_S16Offset(0x14, 0x14);
            phi_v0_2 = 1;
            phi_v0_3 = 1;
            if (Rand_ZeroOne() < 0.5f) {
                phi_v0_2 = -1;
            }
            sp58 = ((f32) phi_v0_2 * (f32) temp_s0) + this->actor.world.pos.x;
            sp5C = (Rand_ZeroOne() * 20.0f) + this->actor.floorHeight;
            temp_s0_2 = Rand_S16Offset(0x14, 0x14);
            if (Rand_ZeroOne() < 0.5f) {
                phi_v0_3 = -1;
            }
            sp60 = ((f32) phi_v0_3 * (f32) temp_s0_2) + this->actor.world.pos.z;
            func_800B0DE0(globalCtx, (Vec3f *) &sp58, (Vec3f *) &sp64, (Vec3f *) &sp70, &D_80A4C24C, &D_80A4C250, (s16) Rand_S16Offset(0x15E, 0x64), (s16) sp44);
            temp_s1 = phi_s1 + 1;
            phi_s1 = temp_s1;
        } while (temp_s1 != 2);
    }
    if ((s32) this->unk_160 < 2) {
        temp_f0 = this->unk_14C;
        temp_f16_3 = (s32) ((temp_f0 * 15.0f) + 25.0f);
        this->unk_208.dim.radius = (s16) temp_f16_3;
        this->unk_208.dim.height = (s16) temp_f16_3;
        this->unk_208.dim.yShift = (s16) (s32) ((temp_f0 * -0.75f) - 5.0f);
    }
    if (this->unk_162 == 2) {
        this->unk_208.dim.radius = 0xA;
        this->unk_208.dim.yShift = 0;
        this->unk_208.dim.height = (s16) (s32) (this->unk_14C * 5000.0f);
    }
    temp_v0_8 = this->unk_208.base.atFlags;
    if ((temp_v0_8 & 2) != 0) {
        this->unk_208.base.atFlags = temp_v0_8 & 0xFFFD;
        if (this->unk_162 == 0) {
            Audio_PlayActorSound2((Actor *) this, 0x38B0U);
            temp_v0_9 = sp8C->unk_D5C;
            if ((s32) temp_v0_9 > 0) {
                sp8C->unk_D5C = (s8) (temp_v0_9 + 0x28);
                if (this->unk_166 != 0) {
                    sp8C->unk_D5C = (s8) (sp8C->unk_D5C + 0x32);
                    this->unk_174 = 1;
                }
            }
        }
    }
    if (((sp8C->unk_A70 & 0x4000) != 0) && ((s32) sp8C->unk_AE8 < 0x5A)) {
        sp8C->unk_AE8 = 0x5A;
    }
    if ((this->unk_148 == 0) && (D_80A4C1C0 == 0) && ((temp_s0_3 = &this->unk_208, (this->unk_162 != 0)) || (this->unk_1FC > 200.0f))) {
        Collider_UpdateCylinder((Actor *) this, temp_s0_3);
        temp_s1_2 = &globalCtx->colChkCtx;
        CollisionCheck_SetAC(globalCtx, temp_s1_2, (Collider *) temp_s0_3);
        if (sp8C->unk_D5C == 0) {
            CollisionCheck_SetAT(globalCtx, temp_s1_2, (Collider *) temp_s0_3);
        }
    }
}

void func_80A4B0C8(EnWizFire *arg0, GlobalContext *arg1) {
    Gfx *sp60;
    Gfx *sp44;
    Gfx *sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a2;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    s32 temp_v1;
    u32 temp_a2_2;
    u32 temp_t0;

    temp_a2 = arg1->state.gfxCtx;
    temp_s0 = temp_a2;
    if ((arg0->unk_162 == 0) && (arg0->unk_160 == 2)) {
        func_8012C28C(temp_a2);
        func_8012C2DC(arg1->state.gfxCtx);
        SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.floorHeight, arg0->actor.world.pos.z, 0);
        temp_f12 = arg0->unk_1F0;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDA380003;
        sp60 = temp_v0;
        sp60->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_2[1];
        temp_v0_2->words.w1 = 0;
        temp_v0_2->words.w0 = 0xE7000000;
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xFA000000;
        temp_v0_3->words.w1 = ((s32) arg0->unk_1FC & 0xFF) | ~0xFF;
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_4[1];
        temp_v0_4->words.w1 = 0x281E50;
        temp_v0_4->words.w0 = 0xFB000000;
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_5[1];
        temp_v0_5->words.w1 = (u32) &D_06005190;
        temp_v0_5->words.w0 = 0xDE000000;
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_6[1];
        temp_v0_6->words.w0 = 0xFA000000;
        temp_v0_6->words.w1 = ((s32) arg0->unk_1FC & 0xFF) | 0xD7D7D700;
        temp_v0_7 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_7[1];
        temp_v0_7->words.w1 = -0x80;
        temp_v0_7->words.w0 = 0xFB000000;
        temp_v0_8 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_8[1];
        temp_v0_8->words.w0 = 0xDB060020;
        temp_v1 = arg1->state.frames;
        temp_a2_2 = -temp_v1 & 0x7F;
        temp_t0 = temp_v1 & 0xFF;
        sp44 = temp_v0_8;
        sp44->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, temp_a2_2, temp_a2_2, 0x20, 0x40, 1, temp_t0, temp_t0, 0x10, 0x10);
        Matrix_RotateY(0, 1U);
        temp_v0_9 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_9[1];
        temp_v0_9->words.w0 = 0xDA380003;
        sp40 = temp_v0_9;
        sp40->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_10 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_10[1];
        temp_v0_10->words.w1 = (u32) &D_06005750;
        temp_v0_10->words.w0 = 0xDE000000;
    }
    func_80A4BF78(arg0, arg1);
}

void func_80A4B33C(EnWizFire *arg0, GlobalContext *arg1) {
    Gfx *sp88;
    Gfx *sp84;
    Gfx *sp70;
    Gfx *sp60;
    Gfx *sp58;
    Gfx *sp48;
    MtxF *sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a2;
    GraphicsContext *temp_s0;
    MtxF *temp_a0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u32 temp_a3;

    temp_a2 = arg1->state.gfxCtx;
    temp_s0 = temp_a2;
    if ((arg0->unk_162 == 0) && (arg0->unk_160 == 2)) {
        func_8012C28C(temp_a2);
        func_8012C2DC(arg1->state.gfxCtx);
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.floorHeight, arg0->actor.world.pos.z, 0);
        temp_f12 = arg0->unk_1F0;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDB060020;
        temp_v1 = arg1->state.frames;
        sp88 = temp_v0;
        sp88->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, -temp_v1 & 0x7F, 0U, 0x20, 0x20, 1, (temp_v1 * 2) & 0x7F, 0U, 0x20, 0x20);
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xDA380003;
        sp84 = temp_v0_2;
        sp84->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w1 = 0;
        temp_v0_3->words.w0 = 0xE7000000;
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_4[1];
        temp_v0_4->words.w0 = 0xFA000000;
        temp_v0_4->words.w1 = ((s32) arg0->unk_1FC & 0xFF) | 0x64280000;
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_5[1];
        temp_v0_5->words.w1 = 0xFFF5FF80;
        temp_v0_5->words.w0 = 0xFB000000;
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_6[1];
        temp_v0_6->words.w1 = (u32) &D_06003120;
        temp_v0_6->words.w0 = 0xDE000000;
        SysMatrix_StatePop();
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.floorHeight, arg0->actor.world.pos.z, 0);
        temp_a0 = arg1 + 0x187FC;
        sp40 = temp_a0;
        SysMatrix_NormalizeXYZ(temp_a0);
        temp_v0_7 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_7[1];
        temp_v0_7->words.w0 = 0xDB060020;
        temp_v1_2 = arg1->state.frames;
        temp_a3 = (temp_v1_2 * -6) & 0xFF;
        sp70 = temp_v0_7;
        sp70->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, temp_v1_2 & 0x7F, temp_a3, 0x20, 0x40, 1, (temp_v1_2 * 2) & 0x7F, temp_a3, 0x20, 0x40);
        temp_v0_8 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_8[1];
        temp_v0_8->words.w0 = 0xFA000000;
        temp_v0_8->words.w1 = ((s32) arg0->unk_1FC & 0xFF) | 0x50000000;
        temp_v0_9 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_9[1];
        temp_v0_9->words.w1 = 0;
        temp_v0_9->words.w0 = 0xE7000000;
        temp_v0_10 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_10[1];
        temp_v0_10->words.w1 = 0x64;
        temp_v0_10->words.w0 = 0xFB000000;
        temp_f12_2 = arg0->unk_1F8;
        Matrix_Scale(temp_f12_2, temp_f12_2, temp_f12_2, 1);
        temp_v0_11 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_11[1];
        temp_v0_11->words.w0 = 0xDA380003;
        sp60 = temp_v0_11;
        sp60->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_12 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_12[1];
        temp_v0_12->words.w1 = (u32) &D_06003640;
        temp_v0_12->words.w0 = 0xDE000000;
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.floorHeight, arg0->actor.world.pos.z, 0);
        SysMatrix_NormalizeXYZ(temp_a0);
        temp_v0_13 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_13[1];
        temp_v0_13->words.w0 = 0xDB060020;
        temp_v1_3 = arg1->state.frames;
        sp58 = temp_v0_13;
        sp58->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, (temp_v1_3 * -3) & 0x7F, 0U, 0x20, 0x20, 1, 0U, (temp_v1_3 * -0xA) & 0xFF, 0x20, 0x40);
        temp_v0_14 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_14[1];
        temp_v0_14->words.w1 = 0x643200FF;
        temp_v0_14->words.w0 = 0xFA000000;
        temp_v0_15 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_15[1];
        temp_v0_15->words.w1 = 0;
        temp_v0_15->words.w0 = 0xE7000000;
        temp_v0_16 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_16[1];
        temp_v0_16->words.w1 = 0xC8EBF080;
        temp_v0_16->words.w0 = 0xFB000000;
        temp_f12_3 = arg0->unk_1F4;
        Matrix_Scale(temp_f12_3, temp_f12_3, temp_f12_3, 1);
        temp_v0_17 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_17[1];
        temp_v0_17->words.w0 = 0xDA380003;
        sp48 = temp_v0_17;
        sp48->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_18 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_18[1];
        temp_v0_18->words.w1 = (u32) &D_06003FC0;
        temp_v0_18->words.w0 = 0xDE000000;
    }
}

void EnWizFire_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnWizFire *sp58;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    MtxF *temp_s1;
    f32 temp_f20;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_s2;
    void *temp_t0;
    s32 phi_s2;
    EnWizFire *this = (EnWizFire *) thisx;

    sp58 = this;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    SysMatrix_StatePush();
    phi_s2 = 9;
    if ((s32) this->unk_16E < 0xA) {
        do {
            temp_a1 = 0xFF - (phi_s2 * 0x19);
            temp_s1 = &globalCtx->mf_187FC;
            temp_f20 = this->actor.scale.x - ((f32) phi_s2 * -0.0019f);
            if (temp_f20 > 0.0f) {
                temp_t0 = this + (phi_s2 * 0xC);
                if (this->unk_166 == 0) {
                    temp_v0 = temp_s0->polyXlu.p;
                    temp_a0_2 = temp_a1 & 0xFF;
                    temp_s0->polyXlu.p = &temp_v0[1];
                    temp_v0->words.w1 = (temp_a0_2 << 0x10) | 0xFF000000 | temp_a0_2;
                    temp_v0->words.w0 = 0xFA000000;
                    temp_v0_2 = temp_s0->polyXlu.p;
                    temp_s0->polyXlu.p = &temp_v0_2[1];
                    temp_v0_2->words.w1 = temp_a0_2 << 0x18;
                    temp_v0_2->words.w0 = 0xFB000000;
                } else {
                    temp_v0_3 = temp_s0->polyXlu.p;
                    temp_a0_3 = (0xFF - (phi_s2 * 3)) & 0xFF;
                    temp_s0->polyXlu.p = &temp_v0_3[1];
                    temp_v0_3->words.w1 = ((0xFF - (phi_s2 * 7)) << 0x18) | (temp_a0_3 << 0x10) | (temp_a0_3 << 8) | (temp_a1 & 0xFF);
                    temp_v0_3->words.w0 = 0xFA000000;
                    temp_v0_4 = temp_s0->polyXlu.p;
                    temp_s0->polyXlu.p = &temp_v0_4[1];
                    temp_v0_4->words.w1 = 0xDCFFEB00;
                    temp_v0_4->words.w0 = 0xFB000000;
                }
                SysMatrix_InsertTranslation(temp_t0->unk_178, temp_t0->unk_17C + this->actor.shape.yOffset, temp_t0->unk_180, 0);
                Matrix_Scale(temp_f20, temp_f20, temp_f20, 1);
                SysMatrix_NormalizeXYZ(temp_s1);
                SysMatrix_InsertZRotation_s(this->actor.world.rot.z, 1);
                temp_v0_5 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_5[1];
                temp_v0_5->words.w0 = 0xDA380003;
                temp_v0_5->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                temp_v0_6 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_6[1];
                temp_v0_6->words.w1 = (u32) &D_06002B40;
                temp_v0_6->words.w0 = 0xDE000000;
            }
            temp_s2 = phi_s2 - 1;
            phi_s2 = temp_s2;
        } while (temp_s2 >= (s32) sp58->unk_16E);
    }
    SysMatrix_StatePop();
    if (this->unk_166 == 0) {
        func_80A4B33C(this, globalCtx);
        return;
    }
    func_80A4B0C8(this, globalCtx);
}

void func_80A4BAB4(Actor *this, GlobalContext *globalCtx) {
    Gfx *sp44;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s1;
    f32 temp_f0;
    s16 temp_v1;

    temp_s1 = globalCtx->state.gfxCtx;
    SysMatrix_InsertTranslation(this->world.pos.x, this->floorHeight + 20.0f, this->world.pos.z, 0);
    temp_f0 = this[1].home.pos.x;
    Matrix_Scale(temp_f0 + this[1].home.pos.z, temp_f0 + this->unk_158, temp_f0 + this->unk_15C, 1);
    temp_v0 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDB060020;
    temp_v1 = this->unk_170;
    sp44 = temp_v0;
    sp44->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x20, 1, temp_v1 & 0x7F, ((s32) temp_v1 * -0xA) & 0x7F, 0x20, 0x20);
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xFA000080;
    temp_v0_2->words.w1 = ((s32) this->unk_1FC & 0xFF) | 0x64320000;
    temp_v0_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_3[1];
    temp_v0_3->words.w1 = 0xC8EBF5FF;
    temp_v0_3->words.w0 = 0xFB000000;
    SysMatrix_InsertMatrix(&globalCtx->mf_187FC, 1);
    temp_v0_4 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_4[1];
    temp_v0_4->words.w0 = 0xDA380003;
    temp_v0_4->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_5 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_5[1];
    temp_v0_5->words.w0 = 0xDE000000;
    temp_v0_5->words.w1 = (u32) &D_06002630;
}

void func_80A4BC74(EnWizFire *arg0, f32 *arg1, f32 *arg2) {
    f32 temp_f8;
    s16 temp_v0;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0 + 0x254;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->unk_0 == 0) {
        phi_s0->unk_0 = 1U;
        Math_Vec3f_Copy(phi_s0 + 0x1C, &D_801D15B0);
        phi_s0->unk_1 = (s8) (u32) Rand_ZeroFloat(100.0f);
        phi_s0->unk_10 = (s32) arg1->unk_0;
        phi_s0->unk_14 = (s32) arg1[1];
        phi_s0->unk_18 = (s32) arg1[2];
        phi_s0->unk_28 = (s32) arg2->unk_0;
        phi_s0->unk_2C = (s32) arg2[1];
        phi_s0->unk_30 = (s32) arg2[2];
        temp_f8 = Rand_ZeroFloat(5.0f) + 20.0f;
        phi_s0->unk_8 = 0;
        phi_s0->unk_6 = 0;
        phi_s0->unk_C = (f32) (temp_f8 * 0.001f);
        return;
    }
    phi_s0 += 0x34;
    if ((s32) temp_v0 >= 0xC8) {
        return;
    }
    goto loop_1;
}

void func_80A4BDDC(EnWizFire *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_v1;
    void *temp_v0;
    void *phi_v0;
    s32 phi_v1;

    phi_v0 = arg0 + 0x254;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 2;
        phi_v1 = temp_v1;
        if (phi_v0->unk_0 != 0) {
            temp_f0 = phi_v0->unk_1C;
            temp_f2 = phi_v0->unk_20;
            temp_f12 = phi_v0->unk_24;
            phi_v0->unk_10 = (f32) (phi_v0->unk_10 + temp_f0);
            phi_v0->unk_14 = (f32) (phi_v0->unk_14 + temp_f2);
            phi_v0->unk_18 = (f32) (phi_v0->unk_18 + temp_f12);
            phi_v0->unk_1 = (u8) (phi_v0->unk_1 + 1);
            phi_v0->unk_1C = (f32) (temp_f0 + phi_v0->unk_28);
            phi_v0->unk_20 = (f32) (temp_f2 + phi_v0->unk_2C);
            phi_v0->unk_24 = (f32) (temp_f12 + phi_v0->unk_30);
            if (phi_v0->unk_8 == 0) {
                phi_v0->unk_6 = (s16) (phi_v0->unk_6 + 0xA);
                if ((s32) phi_v0->unk_6 >= 0x64) {
                    phi_v0->unk_8 = 1;
                }
            } else {
                phi_v0->unk_6 = (s16) (phi_v0->unk_6 - 8);
                if ((s32) phi_v0->unk_6 <= 0) {
                    phi_v0->unk_6 = 0;
                    phi_v0->unk_0 = 0U;
                }
            }
        }
        temp_v0 = phi_v0 + 0x34;
        if (phi_v0->unk_34 != 0) {
            temp_f0_2 = temp_v0->unk_1C;
            temp_f2_2 = temp_v0->unk_20;
            temp_f12_2 = temp_v0->unk_24;
            temp_v0->unk_10 = (f32) (temp_v0->unk_10 + temp_f0_2);
            temp_v0->unk_14 = (f32) (temp_v0->unk_14 + temp_f2_2);
            temp_v0->unk_18 = (f32) (temp_v0->unk_18 + temp_f12_2);
            temp_v0->unk_1 = (u8) (temp_v0->unk_1 + 1);
            temp_v0->unk_20 = (f32) (temp_f2_2 + temp_v0->unk_2C);
            temp_v0->unk_1C = (f32) (temp_f0_2 + temp_v0->unk_28);
            temp_v0->unk_24 = (f32) (temp_f12_2 + temp_v0->unk_30);
            if (temp_v0->unk_8 == 0) {
                temp_v0->unk_6 = (s16) (temp_v0->unk_6 + 0xA);
                if ((s32) temp_v0->unk_6 >= 0x64) {
                    temp_v0->unk_8 = 1;
                }
            } else {
                temp_v0->unk_6 = (s16) (temp_v0->unk_6 - 8);
                if ((s32) temp_v0->unk_6 <= 0) {
                    temp_v0->unk_6 = 0;
                    temp_v0->unk_0 = 0;
                }
            }
        }
        phi_v0 = temp_v0 + 0x34;
    } while (temp_v1 != 0xC8);
}

void func_80A4BF78(EnWizFire *arg0, GlobalContext *arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    s16 temp_s5;
    u8 temp_v1;
    void *phi_s2;
    s32 phi_s4;
    s16 phi_s5;

    temp_a0 = arg1->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(arg1->state.gfxCtx);
    phi_s2 = arg0 + 0x254;
    phi_s4 = 0;
    phi_s5 = 0;
    do {
        if (phi_s2->unk_0 != 0) {
            if (phi_s4 == 0) {
                temp_v0 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0[1];
                temp_v0->words.w1 = (u32) &D_06000E70;
                temp_v0->words.w0 = 0xDE000000;
                phi_s4 = (phi_s4 + 1) & 0xFF;
            }
            temp_v0_2 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_2[1];
            temp_v0_2->words.w0 = 0xFA000000;
            temp_v0_2->words.w1 = (phi_s2->unk_6 & 0xFF) | 0xC3E1EB00;
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_3[1];
            temp_v0_3->words.w0 = 0xDB060020;
            temp_v1 = phi_s2->unk_1;
            temp_v0_3->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, (temp_v1 * 3) & 0x7F, (temp_v1 * 0xF) & 0xFF, 0x20, 0x40, 1, 0U, 0U, 0x20, 0x20);
            SysMatrix_InsertTranslation(phi_s2->unk_10, phi_s2->unk_14, phi_s2->unk_18, 0);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            temp_f12 = phi_s2->unk_C;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_4[1];
            temp_v0_4->words.w0 = 0xDA380003;
            temp_v0_4->words.w1 = Matrix_NewMtx(temp_s0);
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_5[1];
            temp_v0_5->words.w0 = 0xE200001C;
            temp_v0_5->words.w1 = 0xC1849D8;
            temp_v0_6 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_6[1];
            temp_v0_6->words.w1 = 0;
            temp_v0_6->words.w0 = 0xD9FEFBFF;
            temp_v0_7 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_7[1];
            temp_v0_7->words.w1 = (u32) &D_06000FD8;
            temp_v0_7->words.w0 = 0xDE000000;
        }
        temp_s5 = phi_s5 + 1;
        phi_s2 += 0x34;
        phi_s5 = temp_s5;
    } while ((s32) temp_s5 < 0xC8);
}
