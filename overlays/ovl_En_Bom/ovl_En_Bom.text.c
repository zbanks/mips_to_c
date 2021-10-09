typedef struct EnBom {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ ColliderJntSph unk_190;             /* inferred */
    /* 0x1B0 */ ColliderJntSphElement unk_1B0;      /* inferred */
    /* 0x1F0 */ s16 timer;
    /* 0x1F2 */ s16 unk_1F2;                        /* inferred */
    /* 0x1F4 */ f32 unk_1F4;                        /* inferred */
    /* 0x1F8 */ u8 unk_1F8;                         /* inferred */
    /* 0x1F9 */ u8 unk_1F9;
    /* 0x1FA */ s16 unk_1FA;                        /* inferred */
    /* 0x1FC */ u8 unk_1FC;                         /* inferred */
    /* 0x1FD */ char pad_1FD[0x3];                  /* maybe part of unk_1FC[4]? */
    /* 0x200 */ void (*actionFunc)(EnBom *, GlobalContext *);
} EnBom;                                            /* size = 0x204 */

struct _mips2c_stack_EnBom_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnBom_Draw {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ char pad_30[0xC];                    /* maybe part of sp2C[4]? */
    /* 0x3C */ Gfx *sp3C;                           /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x2];
    /* 0x4A */ s16 sp4A;                            /* inferred */
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0xC];
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0x1C];
    /* 0x74 */ Gfx *sp74;                           /* inferred */
    /* 0x78 */ char pad_78[0x4];
    /* 0x7C */ Gfx *sp7C;                           /* inferred */
    /* 0x80 */ char pad_80[0x10];
};                                                  /* size = 0x90 */

struct _mips2c_stack_EnBom_Init {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ ColliderJntSph *sp2C;                /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnBom_Update {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ PosRot *sp40;                        /* inferred */
    /* 0x44 */ void (*sp44)(Actor *, GlobalContext *); /* inferred */
    /* 0x48 */ char pad_48[0xC];                    /* maybe part of sp44[4]? */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ void *sp60;                          /* inferred */
    /* 0x64 */ char pad_64[0xC];                    /* maybe part of sp60[4]? */
    /* 0x70 */ s32 sp70;                            /* inferred */
    /* 0x74 */ ? sp74;                              /* inferred */
    /* 0x74 */ char pad_74[0x4];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x4];
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ ? sp8C;                              /* inferred */
    /* 0x8C */ char pad_8C[0xC];
    /* 0x98 */ ? sp98;                              /* inferred */
    /* 0x98 */ char pad_98[0xC];
    /* 0xA4 */ ? spA4;                              /* inferred */
    /* 0xA4 */ char pad_A4[0xC];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_80871058 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ CollisionContext *sp28;              /* inferred */
    /* 0x2C */ char pad_2C[0xA];                    /* maybe part of sp28[3]? */
    /* 0x36 */ s16 sp36;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x2];
    /* 0x46 */ s16 sp46;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ u32 sp54;                            /* inferred */
    /* 0x58 */ ? *sp58;                             /* inferred */
    /* 0x5C */ char pad_5C[0x4];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_808714D4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808715B8 {
    /* 0x00 */ char pad_0[0x80];
    /* 0x80 */ s32 sp80;                            /* inferred */
    /* 0x84 */ s32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ ? sp94;                              /* inferred */
    /* 0x94 */ char pad_94[0x4];
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ char pad_9C[0x4];
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ s32 spAC;                            /* inferred */
    /* 0xB0 */ CollisionPoly *spB0;                 /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ char pad_C4[0x4];
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ char pad_D0[0x10];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_func_80872648 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808726DC {
    /* 0x00 */ char pad_0[0x74];
    /* 0x74 */ CollisionContext *sp74;              /* inferred */
    /* 0x78 */ char pad_78[0x18];                   /* maybe part of sp74[7]? */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ char pad_98[0x4];
    /* 0x9C */ s32 sp9C;                            /* inferred */
    /* 0xA0 */ CollisionPoly *spA0;                 /* inferred */
    /* 0xA4 */ char pad_A4[0xC];                    /* maybe part of spA0[4]? */
    /* 0xB0 */ s32 spB0;                            /* inferred */
    /* 0xB4 */ char pad_B4[0xC];                    /* maybe part of spB0[4]? */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ char pad_D8[0x8];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_func_80872BC0 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

? EffectSsGSpk_SpawnFuse(GlobalContext *, EnBom *, f32 *, ? *, ? *); /* extern */
? func_800BC848(EnBom *, GlobalContext *, s16, s16); /* extern */
f32 func_800C3FA0(CollisionContext *, CollisionPoly **, f32 *); /* extern */
f32 func_800C40B4(CollisionContext *, CollisionPoly **, s32 *, f32 *); /* extern */
? func_800DFD04(Camera *, ?, ?, ?);                 /* extern */
s32 func_80123F48(GlobalContext *, PosRot *, ?, ?); /* extern */
? func_801A0810(Vec3f *, ?, s32);                   /* extern */
void func_808715B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80872648(GlobalContext *arg0, PosRot *arg1); /* static */
void func_808726DC(GlobalContext *arg0, PosRot *arg1, ? *arg2, ? *arg3, s32 arg4); /* static */
void func_80872BC0(GlobalContext *arg0, s16 arg1);  /* static */
extern ? D_04015DB0;
static ColliderCylinderInit D_80872DC8 = {
    {0, 0, 0x29, 0x39, 0x20, 1},
    {2, {0, 0, 0}, {0x13828, 0, 0}, 0, 1, 1},
    {6, 0xB, 0xE, {0, 0, 0}},
};
static ColliderJntSphElementInit D_80872DF4 = {{0, {8, 0, 2}, {0, 0, 0}, 0x19, 0, 0}, {0, {{0, 0, 0}, 0}, 0x64}};
static ColliderJntSphInit D_80872E18 = {{0, 0x39, 0, 0, 0, 0}, 1, &D_80872DF4};
static ColliderJntSphElementInit D_80872E28 = {{0, {0x80000008, 0, 4}, {0, 0, 0}, 0x19, 0, 0}, {0, {{0, 0, 0}, 0}, 0x64}};
static ColliderJntSphInit D_80872E4C = {{0, 0x39, 0, 0, 0, 0}, 1, &D_80872E28};
static InitChainEntry D_80872E5C[3];                /* unable to generate initializer */
static ? D_80872E68;                                /* unable to generate initializer */
static ? D_80872E80;                                /* unable to generate initializer */
static ? D_80872E8C;                                /* unable to generate initializer */
static s32 D_80872E90 = 0xB98C46FF;
static s32 D_80872E94 = 0xFFFFFFFF;
static ? D_80872E98;                                /* unable to generate initializer */
static ? D_80872E9C;                                /* unable to generate initializer */
static ? D_80872EA0;                                /* unable to generate initializer */
static ? D_80872EAC;                                /* unable to generate initializer */
static ? D_80872EB8;                                /* unable to generate initializer */
static ? D_80872EC4;                                /* unable to generate initializer */
static s32 D_80872ED0 = 0xFFFFFFFF;
static ? D_80872ED4;                                /* unable to generate initializer */
static Vec3f D_80872EE0 = {0.0f, 800.0f, 0.0f};
static Vec3f D_80872EEC = {-750.0f, 0.0f, 0.0f};
static Vec3f D_80872EF8 = {-800.0f, 0.0f, 0.0f};
static Vec3f D_80872F04 = {0.0f, 0.0f, 0.0f};
static ? D_80872F98;                                /* unable to generate initializer */
static ? D_80873020;                                /* unable to generate initializer */
static ? D_80873040;                                /* unable to generate initializer */
static ? D_80873CA0;                                /* unable to generate initializer */
static ? D_808742F8;                                /* unable to generate initializer */
static Vec3f D_80874650;
static s16 D_80874668;
static s16 D_8087466A;
static Vec3f D_8087466C[35];
static ? enBomScales;                               /* unable to generate initializer */

void EnBom_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderJntSph *sp2C;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a1;
    ColliderJntSph *temp_a1_2;
    s16 temp_t5;
    s16 temp_v0;
    u8 temp_t1;
    EnBom *this = (EnBom *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80872E5C);
    ActorShape_Init(&this->actor.shape, 700.0f, func_800B3FC0, 16.0f);
    temp_t1 = this->actor.shape.rot.x & 1;
    this->actor.colChkInfo.mass = 0xC8;
    this->actor.colChkInfo.cylRadius = 5;
    this->actor.colChkInfo.cylHeight = 0xA;
    this->unk_1F2 = 7;
    this->unk_1F9 = temp_t1;
    if ((temp_t1 & 0xFF) != 0) {
        globalCtx->actorCtx.unk5 |= 1;
        this->timer = gSaveContext.powderKegTimer;
    } else {
        this->timer = 0x46;
    }
    temp_a1 = &this->unk_144;
    sp28 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    temp_a1_2 = &this->unk_190;
    sp2C = temp_a1_2;
    Collider_InitJntSph(globalCtx, temp_a1_2);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80872DC8);
    if (this->unk_1F9 == 0) {
        Collider_SetJntSph(globalCtx, sp2C, (Actor *) this, &D_80872E18, &this->unk_1B0);
        this->unk_144.dim.radius = 6;
        this->unk_144.dim.height = 0xB;
    } else {
        Collider_SetJntSph(globalCtx, temp_a1_2, (Actor *) this, &D_80872E4C, &this->unk_1B0);
        this->unk_144.dim.radius = 0x14;
        this->unk_144.dim.height = 0x24;
        func_80872648(globalCtx, &this->actor.world);
    }
    temp_t5 = this->actor.shape.rot.z;
    this->actor.shape.rot.z &= 0xFF;
    temp_v0 = this->actor.shape.rot.z;
    this->unk_1B0.info.toucher.damage += (s32) (temp_t5 & 0xFF00) >> 8;
    if ((temp_v0 & 0x80) != 0) {
        this->actor.shape.rot.z = temp_v0 | 0xFF00;
    }
    this->unk_190.elements->dim.worldSphere.center.x = (s16) (s32) this->actor.world.pos.x;
    this->unk_190.elements->dim.worldSphere.center.y = (s16) (s32) this->actor.world.pos.y;
    this->unk_190.elements->dim.worldSphere.center.z = (s16) (s32) this->actor.world.pos.z;
    this->actor.flags |= 0x100000;
    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_808714D4;
        this->actor.room = -1;
        Actor_SetScale((Actor *) this, *(&enBomScales + (this->unk_1F9 * 4)));
        return;
    }
    this->actionFunc = func_80871058;
    gSaveContext.powderKegTimer = 0;
}

void EnBom_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBom *this = (EnBom *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk_190);
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
    if (this->unk_1F9 != 0) {
        globalCtx->actorCtx.unk5 &= 0xFFFE;
    }
}

void func_80871058(EnBom *this, GlobalContext *globalCtx) {
    ? *sp58;
    u32 sp54;
    f32 sp48;
    s16 sp46;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s16 sp36;
    CollisionContext *sp28;
    CollisionContext *temp_a0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f2;
    f32 temp_f4;
    s16 *temp_a0_3;
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_v0_2;
    s16 temp_v1;
    u32 temp_v0;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;
    s16 phi_a1;
    s32 phi_v0_4;

    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_808714D4;
        this->actor.room = -1;
        return;
    }
    temp_f0 = this->actor.velocity.y;
    if ((temp_f0 > 0.0f) && ((this->actor.bgCheckFlags & 0x10) != 0)) {
        this->actor.velocity.y = -temp_f0;
    }
    if ((this->actor.speedXZ != 0.0f) && ((this->actor.bgCheckFlags & 8) != 0)) {
        temp_a0 = this->actor.wallYaw;
        temp_a1 = temp_a0 - this->actor.world.rot.y;
        phi_v0 = (s32) temp_a1;
        if ((s32) temp_a1 < 0) {
            phi_v0 = -(s32) temp_a1;
        }
        if (phi_v0 >= 0x4001) {
            this->actor.world.rot.y = (temp_a1 + temp_a0) - 0x8000;
        }
        phi_v0_2 = 0x282F;
        if (this->unk_1F9 != 0) {
            phi_v0_2 = 0x28AB;
        }
        Audio_PlayActorSound2((Actor *) this, phi_v0_2 & 0xFFFF);
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        this->actor.bgCheckFlags &= 0xFFF7;
        this->actor.speedXZ *= 0.7f;
    }
    if ((this->actor.bgCheckFlags & 1) == 0) {
        Math_StepToF(&this->actor.speedXZ, 0.0f, 0.08f);
    } else {
        temp_a0_2 = &globalCtx->colCtx;
        sp28 = temp_a0_2;
        temp_v0 = func_800C99D4(temp_a0_2, this->actor.floorPoly, (s32) this->actor.floorBgId);
        sp54 = temp_v0;
        sp58 = (this->unk_1F9 * 0xC) + &D_80872E68;
        if (temp_v0 == 5) {
            sp58 = &D_80872E80;
        }
        if ((temp_v0 == 4) || (temp_v0 == 0xE) || (temp_v0 == 0xF)) {
            Math_ApproachF(&this->actor.shape.yOffset, 0.0f, 0.1f, 50.0f);
            temp_a0_3 = &sp36;
            sp36 = (s16) this->actor.shape.shadowAlpha;
            Math_ApproachS(temp_a0_3, 0, 1, 0x14);
            this->actor.shape.shadowAlpha = (u8) sp36;
        } else {
            Math_ApproachF(&this->actor.shape.yOffset, 700.0f, 1.0f, 700.0f);
        }
        temp_f14 = Math_SinS(this->actor.world.rot.y) * this->actor.speedXZ;
        sp40 = temp_f14;
        temp_f12 = Math_CosS(this->actor.world.rot.y) * this->actor.speedXZ;
        sp3C = temp_f12;
        func_800B75A0(this->actor.floorPoly, (Vec3f *) &sp48, &sp46);
        temp_f10 = 3.0f * sp48;
        temp_f4 = 3.0f * sp50;
        temp_f14_2 = temp_f14 + temp_f10;
        temp_f12_2 = temp_f12 + temp_f4;
        temp_f2 = sqrtf((temp_f14_2 * temp_f14_2) + (temp_f12_2 * temp_f12_2));
        if ((temp_f2 < this->actor.speedXZ) || (sp40 = temp_f14_2, sp3C = temp_f12_2, sp38 = temp_f2, (func_800C9C74(sp28, this->actor.floorPoly, (s32) this->actor.floorBgId) == 1))) {
            if (temp_f2 > 16.0f) {
                this->actor.speedXZ = 16.0f;
            } else {
                this->actor.speedXZ = temp_f2;
            }
            this->actor.world.rot.y = Math_FAtan2F(temp_f12 + temp_f4, temp_f14 + temp_f10);
        }
        if (Math_StepToF(&this->actor.speedXZ, 0.0f, sp58->unk_0) == 0) {
            temp_v0_2 = this->actor.world.rot.y;
            temp_v1 = temp_v0_2 - this->actor.shape.rot.y;
            phi_a1 = temp_v0_2;
            if ((s32) temp_v1 < 0) {
                phi_v0_3 = -(s32) temp_v1;
            } else {
                phi_v0_3 = (s32) temp_v1;
            }
            if (phi_v0_3 >= 0x4001) {
                phi_a1 = (s16) (temp_v0_2 + 0x8000);
            }
            Math_ScaledStepToS(&this->actor.shape.rot.y, phi_a1, (s16) (s32) (this->actor.speedXZ * 100.0f));
            this->unk_1FA += (s32) (this->actor.speedXZ * 800.0f);
        }
        if ((this->actor.bgCheckFlags & 2) != 0) {
            phi_v0_4 = 0x282F;
            if (this->unk_1F9 != 0) {
                phi_v0_4 = 0x2856;
            }
            Audio_PlayActorSound2((Actor *) this, phi_v0_4 & 0xFFFF);
            temp_f0_2 = this->actor.velocity.y;
            if (temp_f0_2 < sp58->unk_4) {
                if ((sp54 == 4) || (sp54 == 0xE) || (sp54 == 0xF)) {
                    this->actor.velocity.y = 0.0f;
                } else {
                    this->actor.velocity.y = temp_f0_2 * sp58->unk_8;
                }
                this->actor.bgCheckFlags &= 0xFFFE;
            }
        } else if ((s32) this->timer >= 4) {
            func_800B8BB0((Actor *) this, globalCtx);
        }
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void func_808714D4(EnBom *this, GlobalContext *globalCtx) {
    if (Actor_HasNoParent((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_80871058;
        this->actor.flags &= 0xFFEFFFFF;
        this->actor.bgCheckFlags &= 0xFFFE;
        this->actor.room = globalCtx->roomCtx.currRoom.num;
        Math_Vec3s_ToVec3f(&this->actor.prevPos, &this->actor.home.rot);
        if (this->unk_1F9 != 0) {
            gSaveContext.powderKegTimer = 0;
        }
        func_80871058(this, globalCtx);
    } else {
        Math_Vec3f_ToVec3s(&this->actor.home.rot, (Vec3f *) &this->actor.parent->world);
        if (this->unk_1F9 != 0) {
            gSaveContext.powderKegTimer = this->timer;
        }
    }
    Math_ScaledStepToS(&this->unk_1FA, 0, 0x7D0);
}

void func_808715B8(Actor *arg0, GlobalContext *arg1) {
    f32 spCC;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    CollisionPoly *spB0;
    s32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp98;
    ? sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    s32 sp84;
    s32 sp80;
    CollisionContext *temp_s2;
    f32 *temp_s7;
    f32 temp_f20;
    f32 temp_f20_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s32 temp_s1;
    u32 temp_s0;
    s32 phi_s1;

    if (arg0->unk_1AC->unk_2E == 0) {
        arg0->flags |= 0x20;
        func_8013ECE0(arg0->xzDistToPlayer, 0xFFU, 0x14U, 0x96U);
    }
    arg0->unk_1AC->unk_36 = (s16) *(&D_80872E8C + (arg0->unk_1F9 * 2));
    if (arg0->unk_1F0 == 7) {
        arg0->unk_1A0 = (u8) (arg0->unk_1A0 & 0xFFEF);
    }
    if (arg0->params == 1) {
        CollisionCheck_SetAT(arg1, arg1 + 0x18884, arg0 + 0x190);
    }
    temp_v1 = arg1->envCtx.unk_8C.diffuseColor1[0];
    if (temp_v1 != 0) {
        arg1->envCtx.unk_8C.diffuseColor1[0] = temp_v1 - 0x19;
    }
    temp_v1_2 = arg1->envCtx.unk_8C.diffuseColor1[1];
    if (temp_v1_2 != 0) {
        arg1->envCtx.unk_8C.diffuseColor1[1] = temp_v1_2 - 0x19;
    }
    temp_v1_3 = arg1->envCtx.unk_8C.diffuseColor1[2];
    if (temp_v1_3 != 0) {
        arg1->envCtx.unk_8C.diffuseColor1[2] = temp_v1_3 - 0x19;
    }
    temp_v1_4 = arg1->envCtx.unk_8C.ambientColor[0];
    if (temp_v1_4 != 0) {
        arg1->envCtx.unk_8C.ambientColor[0] = temp_v1_4 - 0x19;
    }
    temp_v1_5 = arg1->envCtx.unk_8C.ambientColor[1];
    if (temp_v1_5 != 0) {
        arg1->envCtx.unk_8C.ambientColor[1] = temp_v1_5 - 0x19;
    }
    temp_v1_6 = arg1->envCtx.unk_8C.ambientColor[2];
    if (temp_v1_6 != 0) {
        arg1->envCtx.unk_8C.ambientColor[2] = temp_v1_6 - 0x19;
    }
    if (arg0->unk_1F0 == 0) {
        func_80123590(arg1, arg0);
        Actor_MarkForDeath(arg0);
    }
    if ((arg0->unk_1F0 & 1) == 0) {
        spCC = Rand_ZeroFloat(3.1415927f);
        temp_s7 = &spB4;
        temp_s2 = &arg1->colCtx;
        phi_s1 = 0;
        do {
            SysMatrix_InsertYRotation_f(((2.0f * ((f32) phi_s1 * 3.1415927f)) / 15.0f) + spCC, 0);
            SysMatrix_GetStateTranslationAndScaledZ((f32) (0xA - arg0->unk_1F0) * 300.0f * 0.1f, (Vec3f *) &spC0);
            spB4 = arg0->world.pos.x + spC0;
            spB8 = arg0->world.pos.y + 500.0f;
            spBC = arg0->world.pos.z + spC8;
            if ((func_800C40B4(temp_s2, &spB0, &spAC, temp_s7) != -32000.0f) && ((temp_s0 = func_800C99D4(temp_s2, spB0, spAC), temp_f20 = func_800C3FA0(temp_s2, &spB0, temp_s7), (temp_s0 == 4)) || (temp_s0 == 0xF) || (temp_s0 == 0xE))) {
                if (temp_s0 == 4) {
                    sp84 = D_80872E90;
                    sp80 = D_80872E90;
                } else {
                    sp84 = D_80872E94;
                    sp80 = D_80872E94;
                }
                SysMatrix_GetStateTranslationAndScaledZ(5.0f, (Vec3f *) &sp94);
                sp90 = 0.0f;
                sp88 = 0.0f;
                spA4 = temp_f20;
                sp98 = 2.0f;
                sp8C = 0.2f;
                spA0 = spB4;
                spA8 = spBC;
                temp_f20_2 = Rand_ZeroFloat(250.0f);
                func_800B0F18(arg1, (Vec3f *) &spA0, (Vec3f *) &sp94, (Vec3f *) &sp88, (Color_RGBA8 *) &sp84, (Color_RGBA8 *) &sp80, (s16) (s32) (temp_f20_2 + 950.0f), (s16) 0xA, (s16) (s32) (Rand_ZeroFloat(5.0f) + 14.0f));
            }
            temp_s1 = phi_s1 + 1;
            phi_s1 = temp_s1;
        } while (temp_s1 != 0xF);
    }
}

void EnBom_Update(Actor *thisx, GlobalContext *globalCtx) {
    ? spA4;
    ? sp98;
    ? sp8C;
    f32 sp84;
    f32 sp80;
    f32 sp78;
    ? sp74;
    s32 sp70;
    void *sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    void (*sp44)(Actor *, GlobalContext *);
    PosRot *sp40;
    ColliderCylinder *temp_a1;
    PosRot *temp_t3;
    s16 temp_v0_3;
    s16 temp_v0_5;
    s16 temp_v1;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s32 temp_v1_2;
    u16 temp_v0_6;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_4;
    s32 phi_v0;
    s32 phi_v1;
    EnBom *this = (EnBom *) thisx;

    spA4.unk_0 = (s32) D_80872EA0.unk_0;
    spA4.unk_4 = (s32) D_80872EA0.unk_4;
    spA4.unk_8 = (s32) D_80872EA0.unk_8;
    sp98.unk_0 = (s32) D_80872EAC.unk_0;
    sp98.unk_4 = (s32) D_80872EAC.unk_4;
    sp98.unk_8 = (s32) D_80872EAC.unk_8;
    sp8C.unk_0 = (s32) D_80872EB8.unk_0;
    sp8C.unk_4 = (s32) D_80872EB8.unk_4;
    sp8C.unk_8 = (s32) D_80872EB8.unk_8;
    sp74.unk_0 = (s32) D_80872EC4.unk_0;
    sp74.unk_4 = (s32) D_80872EC4.unk_4;
    sp74.unk_8 = (s32) D_80872EC4.unk_8;
    sp70 = D_80872ED0;
    if ((globalCtx->actorCtx.actorList[2].first->unk_A6C & 2) == 0) {
        if (Player_GetMask(globalCtx) == 0x14) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        temp_v0 = this->unk_1FC;
        if (temp_v0 != 0) {
            this->unk_1FC = temp_v0 - 1;
            Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.0f);
            Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
            Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 35.0f, 10.0f, 36.0f, 4U);
            if (this->unk_1FC == 0) {
                if (this->unk_1F9 != 0) {
                    gSaveContext.powderKegTimer = 0;
                }
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            /* Duplicate return node #68. Try simplifying control flow for better match */
            return;
        }
        this->actor.gravity = -1.2f;
        if (this->timer != 0) {
            if ((this->unk_1F9 != 0) && (this->actionFunc != func_808715B8)) {
                if (func_801690CC(globalCtx) == 0) {
                    goto block_13;
                }
            } else {
block_13:
                this->timer += -1;
            }
        }
        temp_v0_2 = this->unk_1F9;
        if (((temp_v0_2 == 0) && (this->timer == 0x43)) || ((temp_v0_2 != 0) && ((s32) this->timer < 0x961))) {
            Audio_PlayActorSound2((Actor *) this, 0x834U);
            Actor_SetScale((Actor *) this, *(&enBomScales + (this->unk_1F9 * 4)));
        }
        if ((this->actor.xzDistToPlayer >= 20.0f) || (fabsf(this->actor.yDistToPlayer) >= 80.0f)) {
            this->unk_1F8 = 1;
        }
        this->actionFunc(this, globalCtx);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 35.0f, 10.0f, 36.0f, 0x1FU);
        if (this->actor.params == 0) {
            sp60 = (this->unk_1F9 * 6) + &D_80872ED4;
            sp78 = 0.2f;
            Math_Vec3f_Copy((Vec3f *) &sp80, (Vec3f *) &this->actor.home);
            if ((globalCtx->gameplayFrames & 1) == 0) {
                EffectSsGSpk_SpawnFuse(globalCtx, this, &sp80, &spA4, &sp8C);
            }
            if (this->unk_1F9 != 0) {
                temp_v0_3 = this->unk_1F2;
                if (temp_v0_3 == 7) {
                    phi_v0 = 0;
                } else {
                    phi_v1 = 2;
                    if (temp_v0_3 == 3) {
                        phi_v1 = 1;
                    }
                    phi_v0 = phi_v1;
                }
                func_801A0810(&this->actor.projectedPos, 0x105B, phi_v0 & 0xFF);
            } else {
                Audio_PlayActorSound2((Actor *) this, 0x100DU);
            }
            sp84 += 3.0f;
            func_800B0DE0(globalCtx, (Vec3f *) &sp80, (Vec3f *) &spA4, (Vec3f *) &sp74, (Color_RGBA8 *) &sp70, (Color_RGBA8 *) &sp70, (s16) 0x32, (s16) 5);
            if (((this->unk_144.base.acFlags & 2) != 0) || (((this->unk_144.base.ocFlags1 & 2) != 0) && ((temp_v0_4 = this->unk_144.base.oc->category, (temp_v0_4 == 5)) || (temp_v0_4 == 9)))) {
                this->timer = 0;
                this->actor.shape.rot.z = 0;
            } else if (((s32) this->timer >= 0x65) && (func_80123F48(globalCtx, &this->actor.world, 0x41F00000, 0x42480000) != 0)) {
                this->timer = 0x64;
            }
            temp_t3 = &this->actor.world;
            sp40 = temp_t3;
            sp78 = 0.2f;
            sp80.unk_0 = temp_t3->pos.x;
            sp80.unk_4 = (f32) temp_t3->pos.y;
            sp80.unk_8 = (f32) temp_t3->pos.z;
            sp84 += 10.0f;
            temp_v1 = this->timer;
            if ((sp60->unk_0 == temp_v1) || (sp60->unk_2 == temp_v1) || (temp_v1 == 3)) {
                this->actor.shape.rot.z = 0;
                this->unk_1F2 = (s16) ((s32) this->unk_1F2 >> 1);
            }
            if (((s32) this->timer < (s32) sp60->unk_4) && (temp_v0_5 = this->unk_1F2, (((s32) this->timer & (temp_v0_5 + 1)) != 0))) {
                Math_ApproachF(&this->unk_1F4, 140.0f, 1.0f, 140.0f / (f32) temp_v0_5);
            } else {
                Math_ApproachZeroF(&this->unk_1F4, 1.0f, 140.0f / (f32) this->unk_1F2);
            }
            if ((s32) this->timer < 3) {
                Actor_SetScale((Actor *) this, this->actor.scale.x + 0.002f);
            }
            if (this->timer == 0) {
                sp80.unk_0 = sp40->pos.x;
                sp80.unk_4 = (f32) sp40->pos.y;
                sp80.unk_8 = (f32) sp40->pos.z;
                sp44 = func_808715B8;
                sp84 += 10.0f;
                if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
                    sp84 += 30.0f;
                }
                Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xA2, sp80, sp84 - 10.0f, sp88, (s16) 0, (s16) 0, (s16) 0, (s16) (s32) this->unk_1F9);
                temp_v1_2 = this->unk_1F9 * 2;
                func_800BC848(this, globalCtx, *(&D_80872E98 + temp_v1_2), *(&D_80872E9C + temp_v1_2));
                globalCtx->envCtx.unk_8C.diffuseColor1[2] = 0xFA;
                temp_v1_3 = globalCtx->envCtx.unk_8C.diffuseColor1[2];
                globalCtx->envCtx.unk_8C.ambientColor[2] = 0xFA;
                globalCtx->envCtx.unk_8C.diffuseColor1[1] = temp_v1_3;
                globalCtx->envCtx.unk_8C.diffuseColor1[0] = temp_v1_3;
                temp_v1_4 = globalCtx->envCtx.unk_8C.ambientColor[2];
                globalCtx->envCtx.unk_8C.ambientColor[1] = temp_v1_4;
                globalCtx->envCtx.unk_8C.ambientColor[0] = temp_v1_4;
                func_800DFD04(&globalCtx->mainCamera, 2, 0xB, 8);
                this->actor.params = 1;
                this->timer = 0xA;
                this->actor.flags |= 0x100020;
                this->actionFunc = (void (*)(EnBom *, GlobalContext *)) sp44;
                if (this->unk_1F9 != 0) {
                    gSaveContext.powderKegTimer = 0;
                    Audio_PlayActorSound2((Actor *) this, 0x185CU);
                } else {
                    Audio_PlayActorSound2((Actor *) this, 0x180EU);
                }
            }
        }
        Actor_SetHeight((Actor *) this, 20.0f);
        temp_a1 = &this->unk_144;
        if ((s32) this->actor.params <= 0) {
            sp44 = (void (*)(Actor *, GlobalContext *)) temp_a1;
            Collider_UpdateCylinder((Actor *) this, temp_a1);
            if ((Actor_HasParent((Actor *) this, globalCtx) == 0) && (this->unk_1F8 != 0)) {
                CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp44);
            }
            CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp44);
        }
        if ((*(&enBomScales + (this->unk_1F9 * 4)) <= this->actor.scale.x) && (this->actor.params != 1)) {
            if (this->actor.yDistToWater >= 20.0f) {
                sp54 = this->actor.world.pos.x;
                sp58 = this->actor.world.pos.y + this->actor.yDistToWater;
                sp44 = (void (*)(Actor *, GlobalContext *)) &globalCtx->actorCtx;
                sp40 = &this->actor.world;
                sp5C = this->actor.world.pos.z;
                EffectSsGRipple_Spawn(globalCtx, (Vec3f *) &sp54, 0x46, 0x1F4, (s16) 0);
                EffectSsGRipple_Spawn(globalCtx, (Vec3f *) &sp54, 0x46, 0x1F4, (s16) 0xA);
                sp58 += 10.0f;
                EffectSsGSplash_Spawn(globalCtx, (Vec3f *) &sp54, NULL, NULL, (s16) 1, (s16) 0x1F4);
                Actor_Spawn((ActorContext *) sp44, globalCtx, 0xA2, sp54, sp58, sp5C, (s16) 0, (s16) 0, (s16) 1, (s16) 0xC8);
                Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) sp40, 0x1E, 0x180FU);
                this->unk_1F4 = 0.0f;
                this->actor.velocity.y = ((f32) gGameInfo->data[1331] * 0.1f) + -2.0f;
                this->actor.gravity = ((f32) gGameInfo->data[1332] * 0.1f) + -0.5f;
                this->unk_1FC = gGameInfo->data[1329] + 0xA;
                return;
            }
            temp_v0_6 = this->actor.bgCheckFlags;
            if ((temp_v0_6 & 0x40) != 0) {
                this->actor.bgCheckFlags = temp_v0_6 & 0xFFBF;
                Audio_PlayActorSound2((Actor *) this, 0x2817U);
            }
            /* Duplicate return node #68. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #68. Try simplifying control flow for better match */
    }
}

void EnBom_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp7C;
    Gfx *sp74;
    ? sp58;
    ? sp4C;
    s16 sp4A;
    f32 sp44;
    Gfx *sp3C;
    PosRot *sp2C;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
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
    PosRot *temp_a1;
    s16 temp_v1;
    s32 temp_hi;
    s32 phi_v1;
    EnBom *this = (EnBom *) thisx;

    temp_a2 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a2;
    if (this->actor.params == 0) {
        func_8012C28C(temp_a2);
        Collider_UpdateSpheres(0, &this->unk_190);
        if (this->unk_1F9 == 0) {
            func_800B8050((Actor *) this, globalCtx, 0);
            SysMatrix_MultiplyVector3fByState(&D_80872EE0, (Vec3f *) &this->actor.home);
            temp_v0 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xDA380003;
            sp7C = temp_v0;
            sp7C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_2 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w1 = (u32) &D_04015FA0;
            temp_v0_2->words.w0 = 0xDE000000;
            SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
            SysMatrix_InsertXRotation_s(0x4000, 1);
            temp_v0_3 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDA380003;
            sp74 = temp_v0_3;
            sp74->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_4 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_4 + 8;
            temp_v0_4->words.w1 = 0;
            temp_v0_4->words.w0 = 0xE7000000;
            temp_v0_5 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xFB000000;
            temp_v0_5->words.w1 = ((s32) this->unk_1F4 << 0x18) | 0x28FF;
            temp_v0_6 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xFA000000;
            temp_v0_6->words.w1 = ((s32) this->unk_1F4 << 0x18) | 0x28FF;
            temp_v0_7 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_7 + 8;
            temp_v0_7->words.w1 = (u32) &D_04015DB0;
            temp_v0_7->words.w0 = 0xDE000000;
            return;
        }
        temp_v1 = this->unk_1FA;
        if (temp_v1 != 0) {
            temp_hi = (s32) temp_v1 % 0x2AAA;
            sp4A = this->actor.world.rot.y - this->actor.shape.rot.y;
            if ((s32) (s16) temp_hi < 0) {
                phi_v1 = -(s32) (s16) temp_hi;
            } else {
                phi_v1 = (s32) (s16) temp_hi;
            }
            sp44 = (1000.0f / Math_CosS((s16) (phi_v1 - 0x1555))) + -1000.0f;
            Matrix_RotateY(sp4A, 1U);
            SysMatrix_InsertTranslation(0.0f, sp44, 0.0f, 1);
            SysMatrix_InsertXRotation_s(this->unk_1FA, 1);
            Matrix_RotateY((s16) ((s32) sp4A * -1), 1U);
        }
        temp_a1 = &this->actor.home;
        sp2C = temp_a1;
        SysMatrix_MultiplyVector3fByState(&D_80872EEC, (Vec3f *) temp_a1);
        SysMatrix_MultiplyVector3fByState(&D_80872EF8, (Vec3f *) &sp58);
        SysMatrix_MultiplyVector3fByState(&D_80872F04, (Vec3f *) &sp4C);
        temp_v0_8 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_8 + 8;
        temp_v0_8->words.w1 = -1;
        temp_v0_8->words.w0 = 0xFB000000;
        temp_v0_9 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_9 + 8;
        temp_v0_9->words.w0 = 0xDA380003;
        sp3C = temp_v0_9;
        sp3C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_10 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_10 + 8;
        temp_v0_10->words.w1 = (u32) &D_80873CA0;
        temp_v0_10->words.w0 = 0xDE000000;
        temp_v0_11 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_11 + 8;
        temp_v0_11->words.w1 = (u32) &D_808742F8;
        temp_v0_11->words.w0 = 0xDE000000;
        func_808726DC(globalCtx, temp_a1, &sp58, &sp4C, (s32) this->timer);
        func_80872BC0(globalCtx, this->timer);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_80872648(GlobalContext *arg0, Vec3f *arg1) {
    Vec3f *temp_s0;
    s32 temp_s1;
    Vec3f *phi_s0;
    s32 phi_s1;

    phi_s0 = &D_80874650;
    phi_s1 = 0;
    do {
        Math_Vec3f_Copy(phi_s0, arg1);
        Math_Vec3f_Copy(phi_s0 + 0xC, &D_801D15B0);
        temp_s1 = phi_s1 + 1;
        temp_s0 = phi_s0 + 0x1C;
        temp_s0->unk_-4 = 0;
        temp_s0->unk_-2 = 0x4000;
        phi_s0 = temp_s0;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x10);
}

void func_808726DC(GlobalContext *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, s32 arg4) {
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    s32 spB0;
    CollisionPoly *spA0;
    s32 sp9C;
    f32 sp94;
    f32 sp90;
    CollisionContext *sp74;
    Vec3f *temp_s1;
    Vec3f *temp_s3;
    f32 *temp_s6;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s32 temp_s4;
    s32 temp_v1;
    s32 phi_s2;
    Vec3f *phi_s0;
    Vec3f *phi_s1;
    f32 phi_f22;
    s16 phi_v0;
    s16 phi_v0_2;
    f32 phi_f2;
    s32 phi_s4;
    Vec3f *phi_s1_2;
    s16 phi_a0;
    s16 phi_a0_2;

    temp_f26 = Math_Vec3f_DistXYZ(arg3, arg1);
    Math_Vec3f_Copy(&D_80874650, arg1);
    Math_Vec3f_Diff(arg2, arg1, (Vec3f *) &spCC);
    D_80874668 = Math_FAtan2F(spD4, spCC);
    D_8087466A = Math_FAtan2F(sqrtf((spCC * spCC) + (spD4 * spD4)), spD0);
    temp_v1 = (arg4 / 0xF0) + 1;
    spB0 = temp_v1;
    phi_s2 = arg4;
    phi_s0 = D_8087466C;
    phi_s1 = &D_80874650;
    phi_s4 = 0;
    phi_s1_2 = &D_80874650;
    if (temp_v1 > 0) {
        sp74 = arg0 + 0x830;
        temp_s6 = &spC0;
        do {
            if (phi_s2 >= 0xF0) {
                phi_f22 = 8.0f;
            } else {
                phi_f22 = (f32) (phi_s2 % 0xF0) * 0.004166667f * 8.0f;
            }
            temp_s3 = phi_s0 + 0xC;
            Math_Vec3f_Sum(phi_s0, temp_s3, phi_s0);
            temp_f0 = Math_Vec3f_DistXYZAndStoreDiff(arg3, phi_s0, (Vec3f *) &spCC);
            if (temp_f0 < temp_f26) {
                if (temp_f0 == 0.0f) {
                    spCC = 0.0f;
                    spD0 = temp_f26;
                    spD4 = 0.0f;
                } else {
                    temp_f20 = temp_f26 / temp_f0;
                    spCC *= temp_f20;
                    spD0 *= temp_f20;
                    spD4 *= temp_f20;
                }
                Math_Vec3f_Sum(arg3, (Vec3f *) &spCC, phi_s0);
            }
            if (Math_Vec3f_DistXYZAndStoreDiff(phi_s1, phi_s0, (Vec3f *) &spCC) == 0.0f) {
                spCC = 0.0f;
                spD0 = phi_f22;
                spD4 = 0.0f;
            }
            phi_s0->unk_18 = Math_FAtan2F(spD4, spCC);
            phi_s0->unk_1A = Math_FAtan2F(sqrtf((spCC * spCC) + (spD4 * spD4)), spD0);
            temp_a1 = phi_s1->unk_18;
            temp_v1_2 = phi_s0->unk_18 - temp_a1;
            if ((s32) temp_v1_2 < -0x1F40) {
                phi_v0 = -0x1F40;
            } else {
                phi_a0 = temp_v1_2;
                if ((s32) temp_v1_2 >= 0x1F41) {
                    phi_a0 = 0x1F40;
                }
                phi_v0 = phi_a0;
            }
            phi_s0->unk_18 = (s16) (phi_v0 + temp_a1);
            temp_a2 = phi_s1->unk_1A;
            temp_v1_3 = phi_s0->unk_1A - temp_a2;
            if ((s32) temp_v1_3 < -0x1F40) {
                phi_v0_2 = -0x1F40;
            } else {
                phi_a0_2 = temp_v1_3;
                if ((s32) temp_v1_3 >= 0x1F41) {
                    phi_a0_2 = 0x1F40;
                }
                phi_v0_2 = phi_a0_2;
            }
            phi_s0->unk_1A = (s16) (phi_v0_2 + temp_a2);
            temp_f20_2 = Math_CosS(phi_s0->unk_1A) * phi_f22;
            spC0 = Math_SinS(phi_s0->unk_18) * temp_f20_2;
            spC8 = Math_CosS(phi_s0->unk_18) * temp_f20_2;
            spC4 = Math_SinS(phi_s0->unk_1A) * phi_f22;
            Math_Vec3f_Sum(phi_s1, (Vec3f *) temp_s6, phi_s0);
            Math_Vec3f_Copy((Vec3f *) &sp90, phi_s0);
            sp94 += 50.0f;
            temp_f2 = func_800C40B4(sp74, &spA0, &sp9C, &sp90) - phi_s0->y;
            if (temp_f2 >= 0.0f) {
                temp_f12 = spC4 + temp_f2;
                if (phi_f22 < temp_f12) {
                    spC4 = phi_f22;
                    phi_f2 = 0.0f;
                } else {
                    spC4 = temp_f12;
                    phi_f2 = sqrtf((phi_f22 * phi_f22) - (temp_f12 * temp_f12));
                }
                if (temp_f20_2 == 0.0f) {
                    spC0 = phi_f2;
                } else {
                    temp_f2_2 = phi_f2 / temp_f20_2;
                    spC0 *= temp_f2_2;
                    spC8 *= temp_f2_2;
                }
                Math_Vec3f_Sum(phi_s1, (Vec3f *) temp_s6, phi_s0);
                Math_Vec3f_Copy(temp_s3, &D_801D15B0);
            }
            temp_s4 = phi_s4 + 1;
            phi_s0->unk_10 = (f32) (phi_s0->unk_10 + -1.0f);
            phi_s4 = temp_s4;
            if (phi_s0->unk_10 < -10.0f) {
                phi_s0->unk_10 = -10.0f;
            }
            temp_s1 = phi_s1 + 0x1C;
            phi_s2 += -0xF0;
            phi_s0 += 0x1C;
            phi_s1 = temp_s1;
            phi_s1_2 = temp_s1;
        } while (temp_s4 < spB0);
    }
    Math_Vec3f_Copy(arg1, phi_s1_2);
}

void func_80872BC0(GlobalContext *arg0, s32 arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s2;
    s32 temp_s3;
    s32 temp_s5;
    Vec3f *phi_s1;
    s32 phi_s3;

    temp_s2 = arg0->state.gfxCtx;
    SysMatrix_InsertTranslation(D_80874650.x, D_80874650.y, D_80874650.z, 0);
    SysMatrix_InsertRotation(D_8087466A, D_80874668, 0, 1);
    Matrix_Scale(0.01f, 0.01f, 0.01f, 1);
    temp_v0 = temp_s2->polyOpa.p;
    temp_s2->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    temp_v0->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
    temp_v0_2 = temp_s2->polyOpa.p;
    temp_s2->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_80872F98;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_s5 = (arg1 / 0xF0) + 1;
    phi_s1 = D_8087466C;
    phi_s3 = 1;
    if (temp_s5 >= 2) {
        do {
            SysMatrix_InsertTranslation(phi_s1->x, phi_s1->y, phi_s1->z, 0);
            SysMatrix_InsertRotation(phi_s1->unk_1A, phi_s1->unk_18, 0, 1);
            Matrix_Scale(0.01f, 0.01f, 0.01f, 1);
            temp_v0_3 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDA380003;
            temp_v0_3->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
            temp_s3 = phi_s3 + 1;
            phi_s3 = temp_s3;
            if ((phi_s3 & 1) == 0) {
                temp_v0_4 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = temp_v0_4 + 8;
                temp_v0_4->words.w1 = (u32) &D_80873020;
                temp_v0_4->words.w0 = 0xDE000000;
            } else {
                temp_v0_5 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = temp_v0_5 + 8;
                temp_v0_5->words.w1 = (u32) &D_80873040;
                temp_v0_5->words.w0 = 0xDE000000;
            }
            phi_s1 += 0x1C;
        } while (temp_s3 < temp_s5);
    }
}
