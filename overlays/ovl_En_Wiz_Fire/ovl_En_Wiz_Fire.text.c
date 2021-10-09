s32 func_8012405C(GlobalContext *);                 /* extern */
void func_80A4B0C8(EnWizFire *arg0, GlobalContext *arg1); /* static */
void func_80A4B33C(EnWizFire *arg0, GlobalContext *arg1); /* static */
void func_80A4BAB4(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A4BC74(EnWizFire *arg0, Vec3f *arg1, f32 *arg2); /* static */
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

typedef struct EnWizFire {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnWizFire *, GlobalContext *);
    /* 0x0148 */ u8 unk148;                         /* inferred */
    /* 0x0149 */ char pad149[0x3];                  /* maybe part of unk148[4]? */
    /* 0x014C */ f32 unk14C;                        /* inferred */
    /* 0x0150 */ f32 unk150;                        /* inferred */
    /* 0x0154 */ f32 unk154;                        /* inferred */
    /* 0x0158 */ f32 unk158;                        /* inferred */
    /* 0x015C */ f32 unk15C;                        /* inferred */
    /* 0x0160 */ s16 unk160;                        /* inferred */
    /* 0x0162 */ s16 unk162;                        /* inferred */
    /* 0x0164 */ u8 unk164;                         /* inferred */
    /* 0x0165 */ char pad165[0x1];                  /* maybe part of unk164[2]? */
    /* 0x0166 */ s16 unk166;                        /* inferred */
    /* 0x0168 */ s16 unk168;                        /* inferred */
    /* 0x016A */ s16 unk16A;                        /* inferred */
    /* 0x016C */ s16 unk16C;                        /* inferred */
    /* 0x016E */ s16 unk16E;                        /* inferred */
    /* 0x0170 */ s16 unk170;                        /* inferred */
    /* 0x0172 */ s16 unk172;                        /* inferred */
    /* 0x0174 */ s8 unk174;                         /* inferred */
    /* 0x0175 */ char pad175[0x3];                  /* maybe part of unk174[4]? */
    /* 0x0178 */ f32 unk178;                        /* inferred */
    /* 0x017C */ f32 unk17C;                        /* inferred */
    /* 0x0180 */ f32 unk180;                        /* inferred */
    /* 0x0184 */ f32 unk184;                        /* inferred */
    /* 0x0188 */ f32 unk188;                        /* inferred */
    /* 0x018C */ f32 unk18C;                        /* inferred */
    /* 0x0190 */ char pad190[0x60];                 /* maybe part of unk18C[25]? */
    /* 0x01F0 */ f32 unk1F0;                        /* inferred */
    /* 0x01F4 */ f32 unk1F4;                        /* inferred */
    /* 0x01F8 */ f32 unk1F8;                        /* inferred */
    /* 0x01FC */ f32 unk1FC;                        /* inferred */
    /* 0x0200 */ f32 unk200;                        /* inferred */
    /* 0x0204 */ f32 unk204;                        /* inferred */
    /* 0x0208 */ ColliderCylinder unk208;           /* inferred */
    /* 0x0254 */ char pad254[0x28A0];
} EnWizFire;                                        /* size 0x2AF4 */

void EnWizFire_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnWizFire *this = (EnWizFire *) thisx;
    s16 temp_v0;

    Collider_InitAndSetCylinder(globalCtx, &this->unk208, &this->actor, &D_80A4C1E4);
    this->actor.targetMode = 3;
    this->unk172 = 0xA;
    this->actor.flags &= -2;
    this->unk1FC = 255.0f;
    this->unk162 = this->actor.params;
    if (func_8012405C(globalCtx) == 0) {
        this->unk208.info.toucher.dmgFlags = 0x20000000;
    }
    temp_v0 = this->unk162;
    switch (temp_v0) {
    case 4:
        this->unk162 = 0;
        this->unk166 = 1;
        this->unk208.info.toucher.damage = 8;
        this->unk208.info.toucher.effect = 2;
        this->unk208.info.bumper.dmgFlags = 0x1000A02;
        // fallthrough
    case 0:
        if (this->unk162 == 4) {
            this->unk162 = 0;
            this->unk208.info.toucher.damage = 8;
        }
        // fallthrough
    case 1:
    case 3:
        this->actionFunc = func_80A4984C;
        return;
    case 2:
        this->actor.draw = func_80A4BAB4;
        this->unk170 = Rand_S16Offset(0, 0x2710);
        this->unk160 = 1;
        this->unk208.info.toucher.damage = 2;
        this->actionFunc = func_80A49F38;
        // fallthrough
    default:
        return;
    }
}

void EnWizFire_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnWizFire *this = (EnWizFire *) thisx;
    s16 temp_v1;

    if (this->unk162 == 0) {
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
    Collider_DestroyCylinder(globalCtx, &this->unk208);
}

void func_80A4984C(EnWizFire *this, GlobalContext *globalCtx) {
    f32 sp4C;
    Vec3f sp44;
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

    sp44.x = D_80A4C210.unk0;
    temp_v0 = &this->actor.world;
    sp44.y = D_80A4C210.unk4;
    sp44.z = D_80A4C210.unk8;
    temp_t0 = &this->actor.home.rot.z;
    this->unk178 = temp_v0->pos.x;
    this->unk17C = temp_v0->pos.y;
    this->unk180 = temp_v0->pos.z;
    this->unk184 = temp_v0->pos.x;
    this->unk188 = temp_v0->pos.y;
    this->unk18C = temp_v0->pos.z;
    phi_a0 = temp_t0 + 0x178;
    phi_a1 = temp_t0 + 0x184;
    phi_a2 = temp_t0 + 0x190;
    phi_a3 = temp_t0 + 0x19C;
    phi_v1 = 2;
    do {
        temp_v1 = phi_v1 + 4;
        temp_a0 = phi_a0 + 0x30;
        temp_a0->unk-30 = (f32) temp_v0->pos.x;
        temp_a1 = phi_a1 + 0x30;
        temp_a2 = phi_a2 + 0x30;
        temp_a0->unk-2C = (f32) temp_v0->pos.y;
        temp_a3 = phi_a3 + 0x30;
        temp_a0->unk-28 = (f32) temp_v0->pos.z;
        temp_a1->unk-30 = (f32) temp_v0->pos.x;
        temp_a1->unk-2C = (f32) temp_v0->pos.y;
        temp_a1->unk-28 = (f32) temp_v0->pos.z;
        temp_a2->unk-30 = (f32) temp_v0->pos.x;
        temp_a2->unk-2C = (f32) temp_v0->pos.y;
        temp_a2->unk-28 = (f32) temp_v0->pos.z;
        temp_a3->unk-30 = (f32) temp_v0->pos.x;
        temp_a3->unk-2C = (f32) temp_v0->pos.y;
        temp_a3->unk-28 = (f32) temp_v0->pos.z;
        phi_a0 = temp_a0;
        phi_a1 = temp_a1;
        phi_a2 = temp_a2;
        phi_a3 = temp_a3;
        phi_v1 = temp_v1;
    } while (temp_v1 != 0xA);
    this->unk16E = 0;
    SysMatrix_StatePush();
    Matrix_RotateY(this->actor.world.rot.y, 0U);
    SysMatrix_InsertXRotation_s(this->actor.world.rot.x, 1);
    if (this->unk162 != 0) {
        sp4C = randPlusMinusPoint5Scaled(2.0f) + 8.0f;
    } else {
        sp4C = 12.0f;
    }
    SysMatrix_MultiplyVector3fByState(&sp44, &this->actor.velocity);
    SysMatrix_StatePop();
    this->actor.world.rot.z = 0;
    temp_v0_2 = this->actor.world.rot.z;
    this->unk168 = 0x32;
    this->actor.world.rot.y = temp_v0_2;
    this->actor.world.rot.x = temp_v0_2;
    if (this->unk162 != 0) {
        this->actor.velocity.y = 10.0f;
        this->actor.gravity = -1.0f;
        this->unk150 = 0.01f;
    } else {
        this->unk168 = 0x64;
        this->unk150 = 0.02f;
    }
    this->unk160 = 0;
    this->actionFunc = func_80A49A44;
}

void func_80A49A44(EnWizFire *this, GlobalContext *globalCtx) {
    f32 sp5C;
    Vec3f sp54;
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

    sp54.x = D_80A4C21C.unk0;
    sp54.y = D_80A4C21C.unk4;
    sp54.z = D_80A4C21C.unk8;
    this->actor.world.rot.z += 0x1388;
    if (this->unk162 != 0) {
        this->unk150 = 0.01f;
    } else {
        this->unk150 = 0.02f;
    }
    temp_v0 = this->unk168;
    if ((temp_v0 == 0) && (this->unk14C < 0.001f)) {
        Math_Vec3f_Copy(&this->actor.velocity, &D_801D15B0);
        this->unk160 = 3;
        this->unk16A = 0;
        this->actionFunc = func_80A4A608;
        return;
    }
    if (temp_v0 == 0) {
        this->unk150 = 0.0f;
    }
    Math_ApproachF(&this->unk14C, this->unk150, 0.2f, 0.01f);
    if (this->unk172 == 0) {
        temp_v0_2 = this->actor.bgCheckFlags & 8;
        if ((temp_v0_2 != 0) && (this->unk162 == 0) && (this->unk168 != 0) && (temp_v0_2 != 0)) {
            D_80A4C1C0 = 0;
            this->unk168 = 0;
            this->unk150 = 0.0f;
        }
    }
    temp_v0_3 = this->unk162;
    if (((this->actor.bgCheckFlags & 1) != 0) && (this->unk16A == 0)) {
        if (temp_v0_3 == 1) {
            this->unk16A = 0xA;
            SysMatrix_StatePush();
            Matrix_RotateY((s16) ((s32) randPlusMinusPoint5Scaled(256.0f) + this->actor.world.rot.y), 0U);
            temp_s0 = &this->actor.velocity;
            sp5C = randPlusMinusPoint5Scaled(2.0f) + 8.0f;
            SysMatrix_MultiplyVector3fByState(&sp54, temp_s0);
            SysMatrix_StatePop();
            this->actor.velocity.y = 6.0f;
            this->actor.gravity = -0.7f;
            if (this->unk164 == 0) {
                Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x15F, this->actor.world.pos.x, this->actor.world.pos.y - 10.0f, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 2);
                this->unk164 = 1;
            }
            this->unk168 = 0;
            this->unk14C = 0.0f;
            Math_Vec3f_Copy(temp_s0, &D_801D15B0);
            this->unk160 = 3;
            this->unk16A = 0;
            this->actionFunc = func_80A4A608;
            return;
        }
        if ((temp_v0_3 == 0) && (this->unk168 != 0)) {
            if (this->actor.floorBgId == 0x32) {
                this->unk16A = 0x64;
                if (this->unk166 == 0) {
                    sp40 = &globalCtx->actorCtx;
                    phi_s0 = 0;
                    phi_s1 = 0;
                    do {
                        Actor_Spawn(sp40, globalCtx, 0x15F, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) phi_s0, (s16) 0, (s16) 1);
                        temp_s1 = phi_s1 + 1;
                        phi_s0 = (s32) (s16) (phi_s0 + ((s32) randPlusMinusPoint5Scaled(4096.0f) + 0x3333));
                        phi_s1 = temp_s1;
                    } while (temp_s1 != 5);
                    Audio_PlayActorSound2(&this->actor, 0x180EU);
                    this->unk16A = Rand_S16Offset(0x46, 0x1E);
                    if (this->unk16A != 0) {
                        Audio_PlayActorSound2(&this->actor, 0x30ABU);
                    }
                } else if (this->unk16A != 0) {
                    Audio_PlayActorSound2(&this->actor, 0x20B2U);
                }
                Math_Vec3f_Copy(&this->actor.velocity, &D_801D15B0);
                this->unk168 = 0;
                this->unk160 = 2;
                this->actionFunc = func_80A4A11C;
                this->unk14C = 0.0f;
                return;
            }
            // Duplicate return node #42. Try simplifying control flow for better match
            return;
        }
        goto block_31;
    }
block_31:
    if ((temp_v0_3 != 3) && (this->unk168 != 0)) {
        temp_v0_4 = this->unk208.base.acFlags;
        if ((temp_v0_4 & 2) != 0) {
            this->unk208.base.acFlags = temp_v0_4 & 0xFFFD;
            if (this->unk208.info.acHitInfo->toucher.dmgFlags == 0x1000) {
                this->unk168 = 0;
                this->unk148 = 1;
                Audio_PlaySoundAtPosition(globalCtx, &this->actor.world.pos, 0x32, 0x28A2U);
            }
        }
        if ((func_8012405C(globalCtx) != 0) && ((this->unk208.base.atFlags & 4) != 0)) {
            Audio_PlayActorSound2(&this->actor, 0x180CU);
            temp_v0_5 = this->actor.parent;
            temp_t3 = this->unk208.base.atFlags & 0xFFE9;
            this->unk208.base.atFlags = temp_t3;
            this->unk208.base.atFlags = temp_t3 | 8;
            this->unk208.info.toucher.dmgFlags = 0x20;
            this->unk208.info.toucher.damage = 2;
            this->unk168 = 0x64;
            this->unk162 = 3;
            this->actor.velocity.x *= -1.0f;
            this->actor.velocity.y *= -0.5f;
            this->actor.velocity.z *= -1.0f;
            if ((temp_v0_5 != 0) && (temp_v0_5->id == 0x15D) && (temp_v0_5->update != 0)) {
                temp_v0_5->unk3BA = 0;
            }
        }
    }
}

void func_80A49F38(EnWizFire *this, GlobalContext *globalCtx) {
    f32 temp_f4;

    this->unk150 = 0.02f;
    this->unk168 = Rand_S16Offset(0x32, 0x32);
    this->unk154 = randPlusMinusPoint5Scaled(1.0f) * 0.007f;
    this->unk158 = randPlusMinusPoint5Scaled(1.0f) * 0.005f;
    temp_f4 = randPlusMinusPoint5Scaled(1.0f) * 0.007f;
    this->actionFunc = func_80A49FD8;
    this->unk15C = temp_f4;
}

void func_80A49FD8(EnWizFire *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    u8 temp_v1;

    if ((s32) this->unk168 >= 0xB) {
        Math_ApproachF(&this->unk14C, this->unk150, 0.3f, 0.01f);
        temp_v1 = this->unk208.base.acFlags;
        if ((temp_v1 & 2) != 0) {
            temp_v0 = this->unk168;
            if (temp_v0 != 0) {
                this->unk208.base.acFlags = temp_v1 & 0xFFFD;
                if ((s32) temp_v0 >= 0xB) {
                    this->unk168 = temp_v0 - 0xA;
                }
                if (this->unk208.info.acHitInfo->toucher.dmgFlags == 0x1000) {
                    this->unk168 = 0;
                    this->unk148 = 1;
                    Audio_PlaySoundAtPosition(globalCtx, &this->actor.world.pos, 0x32, 0x28A2U);
                }
            }
        }
        if (this->unk168 != 0) {
            Audio_PlayActorSound2(&this->actor, 0x205BU);
        }
        // Duplicate return node #13. Try simplifying control flow for better match
        return;
    }
    Math_ApproachF(&this->unk14C, 2.0f * this->unk150, 0.2f, 0.002f);
    Math_ApproachZeroF(&this->unk1FC, 1.0f, 35.0f);
    if ((this->unk168 == 0) && (this->unk1FC < 2.0f)) {
        Actor_MarkForDeath(&this->actor);
    }
}

void func_80A4A11C(EnWizFire *this, GlobalContext *globalCtx) {
    f32 sp48;
    f32 sp44;
    f32 sp40;
    Vec3f sp34;
    Actor *temp_v0;
    Actor *temp_v0_3;
    Actor *temp_v0_4;
    f32 temp_f6;
    u8 temp_v0_2;

    temp_v0 = this->actor.parent;
    if ((temp_v0 != 0) && (temp_v0->id == 0x15D) && (temp_v0->update != 0) && (temp_v0->colChkInfo.health == 0)) {
        this->unk16A = 0;
        this->unk174 = 1;
    }
    this->unk16E += 1;
    if ((s32) this->unk16E >= 0xB) {
        this->unk16E = 0xA;
    }
    if (this->unk16A != 0) {
        Math_ApproachF(&this->unk200, 60.0f, 0.5f, 10.0f);
        if (this->unk166 == 1) {
            sp40.unk0 = D_80A4C228.unk0;
            sp40.unk4 = (s32) D_80A4C228.unk4;
            sp40.unk8 = (s32) D_80A4C228.unk8;
            temp_f6 = randPlusMinusPoint5Scaled(3.0f) / 10.0f;
            sp44 = 0.23f;
            sp40 = temp_f6;
            sp48 = randPlusMinusPoint5Scaled(3.0f) / 10.0f;
            Math_Vec3f_Copy(&sp34, &this->actor.world.pos);
            sp34.x += randPlusMinusPoint5Scaled(150.0f);
            sp34.z += randPlusMinusPoint5Scaled(150.0f);
            Math_ApproachF(&this->unk1F0, 0.022f, 0.3f, 0.01f);
            this->unk208.dim.height = 0x1E;
            this->unk208.dim.yShift = 0xF;
            this->unk208.dim.radius = (s16) (s32) (this->unk1F0 * 4300.0f);
            func_80A4BC74(this, &sp34, &sp40);
            Audio_PlayActorSound2(&this->actor, 0x20B2U);
            return;
        }
        Math_ApproachF(&this->unk1F0, 0.02f, 0.3f, 0.002f);
        Math_ApproachF(&this->unk1F8, 0.02f, 0.3f, 0.002f);
        Math_ApproachF(&this->unk1F4, 0.02f, 0.3f, 0.2f);
        this->unk208.dim.radius = (s16) (s32) (this->unk1F0 * 4000.0f);
        this->unk208.dim.yShift = -0xF;
        this->unk208.dim.height = (s16) (s32) (this->unk1F4 * 1850.0f);
        if ((s32) this->unk208.dim.height < 2) {
            this->unk208.dim.height = 2;
        }
        temp_v0_2 = this->unk208.base.acFlags;
        if ((temp_v0_2 & 2) != 0) {
            this->unk208.base.acFlags = temp_v0_2 & 0xFFFD;
            if ((D_80A4C1C0 == 0) && (this->unk208.info.acHitInfo->toucher.dmgFlags == 0x1000)) {
                D_80A4C1C0 = 1;
                this->unk148 = 1;
                this->unk16A = 0;
                Audio_PlaySoundAtPosition(globalCtx, &this->actor.world.pos, 0x32, 0x28A2U);
            }
        }
        this->actor.world.pos.y = this->actor.floorHeight + 10.0f;
        Actor_SetHeight(&this->actor, 0.0f);
        return;
    }
    Math_ApproachZeroF(&this->unk200, 0.2f, 3.0f);
    if (this->unk166 == 1) {
        Math_ApproachZeroF(&this->unk1F0, 0.046f, 0.001f);
        Audio_PlayActorSound2(&this->actor, 0x20B2U);
        if (this->unk164 == 0) {
            temp_v0_3 = this->actor.parent;
            if ((temp_v0_3 != 0) && (temp_v0_3->id == 0x15D) && (this->unk1F0 < 0.05f)) {
                this->unk208.dim.yShift = -0xF;
                this->unk164 = 1;
                temp_v0_3->unk3BA = 0;
            }
        }
        if ((this->unk164 != 0) && (this->unk1F0 < 0.05f)) {
            Math_ApproachZeroF(&this->unk1FC, 1.0f, 5.0f);
        }
        if ((this->unk1F0 < 0.001f) && (this->unk204 < 0.001f)) {
            D_80A4C1C0 = 0;
            Actor_MarkForDeath(&this->actor);
            return;
        }
        // Duplicate return node #38. Try simplifying control flow for better match
        return;
    }
    Math_ApproachZeroF(&this->unk1F4, 0.1f, 0.01f);
    if (this->unk1F4 < 0.01f) {
        Math_ApproachZeroF(&this->unk1FC, 1.0f, 10.0f);
        if ((this->unk1FC < 10.0f) && (this->unk204 < 0.001f)) {
            D_80A4C1C0 = 0;
            temp_v0_4 = this->actor.parent;
            if ((temp_v0_4 != 0) && (this->unk162 == 0) && (temp_v0_4->id == 0x15D) && (temp_v0_4->update != 0)) {
                temp_v0_4->unk3BA = 0;
            }
            Actor_MarkForDeath(&this->actor);
        }
    }
}

void func_80A4A608(EnWizFire *this, GlobalContext *globalCtx) {
    Actor *temp_v0;

    if (this->unk16A == 0) {
        this->unk16A = 2;
        this->unk16E += 1;
        if ((s32) this->unk16E >= 6) {
            temp_v0 = this->actor.parent;
            if ((temp_v0 != 0) && (this->unk162 == 0) && (temp_v0->id == 0x15D)) {
                D_80A4C1C0 = 0;
                if (temp_v0->update != 0) {
                    temp_v0->unk3BA = 0;
                }
            }
            Actor_MarkForDeath(&this->actor);
        }
    }
}

void EnWizFire_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnWizFire *this = (EnWizFire *) thisx;
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

    sp8C = globalCtx->actorCtx.actorList[2].first;
    Actor_SetScale(&this->actor, this->unk14C);
    func_80A4BDDC(this, globalCtx);
    this->unk204 = this->unk200 / 60.0f;
    if (this->unk162 == 0) {
        temp_v0 = this->actor.parent;
        if ((temp_v0 != 0) && (temp_v0->id == 0x15D) && (temp_v0->update != 0) && (temp_v0->unk74A != 2)) {
            temp_v0_2 = this->unk166;
            temp_a0 = (s32) (temp_v0_2 << 0x12) >> 0x10;
            phi_f0 = 970.0f;
            if (temp_v0_2 == 0) {
                phi_f0 = 968.0f;
            }
            temp_v1 = &D_80A4C234 + (temp_a0 * 3);
            globalCtx->envCtx.unk_8C.fogNear = (s16) (s32) ((phi_f0 - (f32) (s16) globalCtx->envCtx.unk_C4.fogNear) * this->unk204);
            globalCtx->envCtx.unk_8C.ambientColor[0] = (s16) (s32) (((f32) temp_v1->unk0 - (f32) globalCtx->envCtx.unk_C4.ambientColor[0]) * this->unk204);
            globalCtx->envCtx.unk_8C.ambientColor[1] = (s16) (s32) (((f32) temp_v1->unk1 - (f32) globalCtx->envCtx.unk_C4.ambientColor[1]) * this->unk204);
            temp_a0_2 = temp_a0 + 1;
            temp_v1_2 = &D_80A4C234 + (temp_a0_2 * 3);
            globalCtx->envCtx.unk_8C.ambientColor[2] = (s16) (s32) (((f32) temp_v1->unk2 - (f32) globalCtx->envCtx.unk_C4.ambientColor[2]) * this->unk204);
            globalCtx->envCtx.unk_8C.diffuseColor1[0] = (s16) (s32) (((f32) temp_v1_2->unk0 - (f32) globalCtx->envCtx.unk_C4.diffuseColor1[0]) * this->unk204);
            globalCtx->envCtx.unk_8C.diffuseColor1[1] = (s16) (s32) (((f32) temp_v1_2->unk1 - (f32) globalCtx->envCtx.unk_C4.diffuseColor1[1]) * this->unk204);
            temp_a0_3 = temp_a0_2 + 1;
            temp_v1_3 = &D_80A4C234 + (temp_a0_3 * 3);
            globalCtx->envCtx.unk_8C.diffuseColor1[2] = (s16) (s32) (((f32) temp_v1_2->unk2 - (f32) globalCtx->envCtx.unk_C4.diffuseColor1[2]) * this->unk204);
            globalCtx->envCtx.unk_8C.diffuseColor2[0] = (s16) (s32) (((f32) temp_v1_3->unk0 - (f32) globalCtx->envCtx.unk_C4.diffuseColor[0]) * this->unk204);
            globalCtx->envCtx.unk_8C.diffuseColor2[1] = (s16) (s32) (((f32) temp_v1_3->unk1 - (f32) globalCtx->envCtx.unk_C4.diffuseColor[1]) * this->unk204);
            temp_t9 = temp_v1_3->unk2;
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
            globalCtx->envCtx.unk_8C.diffuseColor2[2] = (s16) (s32) ((phi_f18 - phi_f10) * this->unk204);
            temp_t4 = temp_v1_4->unk0;
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
            globalCtx->envCtx.unk_8C.fogColor[0] = (s16) (s32) ((phi_f10_2 - phi_f16) * this->unk204);
            temp_t8 = temp_v1_4->unk1;
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
            globalCtx->envCtx.unk_8C.fogColor[1] = (s16) (s32) ((phi_f16_2 - phi_f6) * this->unk204);
            temp_t2 = temp_v1_4->unk2;
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
            globalCtx->envCtx.unk_8C.fogColor[2] = (s16) (s32) ((phi_f6_2 - phi_f4) * this->unk204);
        }
    }
    this->unk170 += 1;
    this->actionFunc(this, globalCtx);
    this->actor.shape.yOffset = 10.0f;
    Actor_ApplyMovement(&this->actor);
    temp_a1 = &this->actor.scale.z;
    this->unk178 = this->actor.world.pos.x;
    this->unk17C = this->actor.world.pos.y;
    this->unk180 = this->actor.world.pos.z;
    phi_a0 = temp_a1 + 0x178;
    phi_v1 = temp_a1 + 0x184;
    phi_v0 = 8;
    do {
        temp_v0_3 = phi_v0 - 1;
        temp_v1_5 = phi_v1 - 0xC;
        temp_v1_5->unkC = (s32) phi_a0->unk0;
        temp_a0_4 = phi_a0 - 0xC;
        temp_v1_5->unk10 = (s32) phi_a0->unk4;
        temp_v1_5->unk14 = (s32) temp_a0_4->unk14;
        phi_a0 = temp_a0_4;
        phi_v1 = temp_v1_5;
        phi_v0 = temp_v0_3;
    } while (temp_v0_3 >= 0);
    temp_v0_4 = this->unk172;
    this->actor.velocity.y += this->actor.gravity;
    if (temp_v0_4 != 0) {
        this->unk172 = temp_v0_4 - 1;
    }
    temp_v0_5 = this->unk168;
    if (temp_v0_5 != 0) {
        this->unk168 = temp_v0_5 - 1;
    }
    temp_v0_6 = this->unk16C;
    if (temp_v0_6 != 0) {
        this->unk16C = temp_v0_6 - 1;
    }
    temp_v0_7 = this->unk16A;
    if (temp_v0_7 != 0) {
        this->unk16A = temp_v0_7 - 1;
    }
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 20.0f, 5.0f, 10.0f, 0x1DU);
    if (((this->unk148 != 0) || (D_80A4C1C0 != 0)) && (this->unk16C == 0)) {
        sp70 = 0.0f;
        sp74 = 1.0f;
        sp78 = 0.0f;
        sp64 = 0.0f;
        sp68 = 1.0f;
        sp6C = 0.0f;
        phi_f0_2 = (f32) Rand_S16Offset(0x14, 0xA);
        if (this->unk162 == 0) {
            phi_f0_2 = (f32) Rand_S16Offset(0x28, 0x14);
        }
        sp54 = phi_f0_2;
        this->unk16C = Rand_S16Offset(2, 2);
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
    if ((s32) this->unk160 < 2) {
        temp_f0 = this->unk14C;
        temp_f16_3 = (s32) ((temp_f0 * 15.0f) + 25.0f);
        this->unk208.dim.radius = (s16) temp_f16_3;
        this->unk208.dim.height = (s16) temp_f16_3;
        this->unk208.dim.yShift = (s16) (s32) ((temp_f0 * -0.75f) - 5.0f);
    }
    if (this->unk162 == 2) {
        this->unk208.dim.radius = 0xA;
        this->unk208.dim.yShift = 0;
        this->unk208.dim.height = (s16) (s32) (this->unk14C * 5000.0f);
    }
    temp_v0_8 = this->unk208.base.atFlags;
    if ((temp_v0_8 & 2) != 0) {
        this->unk208.base.atFlags = temp_v0_8 & 0xFFFD;
        if (this->unk162 == 0) {
            Audio_PlayActorSound2(&this->actor, 0x38B0U);
            temp_v0_9 = sp8C->unkD5C;
            if ((s32) temp_v0_9 > 0) {
                sp8C->unkD5C = (s8) (temp_v0_9 + 0x28);
                if (this->unk166 != 0) {
                    sp8C->unkD5C = (s8) (sp8C->unkD5C + 0x32);
                    this->unk174 = 1;
                }
            }
        }
    }
    if (((sp8C->unkA70 & 0x4000) != 0) && ((s32) sp8C->unkAE8 < 0x5A)) {
        sp8C->unkAE8 = 0x5A;
    }
    if ((this->unk148 == 0) && (D_80A4C1C0 == 0) && ((temp_s0_3 = &this->unk208, (this->unk162 != 0)) || (this->unk1FC > 200.0f))) {
        Collider_UpdateCylinder(&this->actor, temp_s0_3);
        temp_s1_2 = &globalCtx->colChkCtx;
        CollisionCheck_SetAC(globalCtx, temp_s1_2, &temp_s0_3->base);
        if (sp8C->unkD5C == 0) {
            CollisionCheck_SetAT(globalCtx, temp_s1_2, &temp_s0_3->base);
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
    if ((arg0->unk162 == 0) && (arg0->unk160 == 2)) {
        func_8012C28C(temp_a2);
        func_8012C2DC(arg1->state.gfxCtx);
        SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.floorHeight, arg0->actor.world.pos.z, 0);
        temp_f12 = arg0->unk1F0;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp60 = temp_v0;
        sp60->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = 0;
        temp_v0_2->words.w0 = 0xE7000000;
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFA000000;
        temp_v0_3->words.w1 = ((s32) arg0->unk1FC & 0xFF) | ~0xFF;
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = 0x281E50;
        temp_v0_4->words.w0 = 0xFB000000;
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = (u32) &D_06005190;
        temp_v0_5->words.w0 = 0xDE000000;
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xFA000000;
        temp_v0_6->words.w1 = ((s32) arg0->unk1FC & 0xFF) | 0xD7D7D700;
        temp_v0_7 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w1 = -0x80;
        temp_v0_7->words.w0 = 0xFB000000;
        temp_v0_8 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_8 + 8;
        temp_v0_8->words.w0 = 0xDB060020;
        temp_v1 = arg1->state.frames;
        temp_a2_2 = -temp_v1 & 0x7F;
        temp_t0 = temp_v1 & 0xFF;
        sp44 = temp_v0_8;
        sp44->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, temp_a2_2, temp_a2_2, 0x20, 0x40, 1, temp_t0, temp_t0, 0x10, 0x10);
        Matrix_RotateY(0, 1U);
        temp_v0_9 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_9 + 8;
        temp_v0_9->words.w0 = 0xDA380003;
        sp40 = temp_v0_9;
        sp40->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_10 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_10 + 8;
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
    if ((arg0->unk162 == 0) && (arg0->unk160 == 2)) {
        func_8012C28C(temp_a2);
        func_8012C2DC(arg1->state.gfxCtx);
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.floorHeight, arg0->actor.world.pos.z, 0);
        temp_f12 = arg0->unk1F0;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        temp_v1 = arg1->state.frames;
        sp88 = temp_v0;
        sp88->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, -temp_v1 & 0x7F, 0U, 0x20, 0x20, 1, (temp_v1 * 2) & 0x7F, 0U, 0x20, 0x20);
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDA380003;
        sp84 = temp_v0_2;
        sp84->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = 0;
        temp_v0_3->words.w0 = 0xE7000000;
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xFA000000;
        temp_v0_4->words.w1 = ((s32) arg0->unk1FC & 0xFF) | 0x64280000;
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = 0xFFF5FF80;
        temp_v0_5->words.w0 = 0xFB000000;
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w1 = (u32) &D_06003120;
        temp_v0_6->words.w0 = 0xDE000000;
        SysMatrix_StatePop();
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.floorHeight, arg0->actor.world.pos.z, 0);
        temp_a0 = arg1 + 0x187FC;
        sp40 = temp_a0;
        SysMatrix_NormalizeXYZ(temp_a0);
        temp_v0_7 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xDB060020;
        temp_v1_2 = arg1->state.frames;
        temp_a3 = (temp_v1_2 * -6) & 0xFF;
        sp70 = temp_v0_7;
        sp70->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, temp_v1_2 & 0x7F, temp_a3, 0x20, 0x40, 1, (temp_v1_2 * 2) & 0x7F, temp_a3, 0x20, 0x40);
        temp_v0_8 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_8 + 8;
        temp_v0_8->words.w0 = 0xFA000000;
        temp_v0_8->words.w1 = ((s32) arg0->unk1FC & 0xFF) | 0x50000000;
        temp_v0_9 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_9 + 8;
        temp_v0_9->words.w1 = 0;
        temp_v0_9->words.w0 = 0xE7000000;
        temp_v0_10 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_10 + 8;
        temp_v0_10->words.w1 = 0x64;
        temp_v0_10->words.w0 = 0xFB000000;
        temp_f12_2 = arg0->unk1F8;
        Matrix_Scale(temp_f12_2, temp_f12_2, temp_f12_2, 1);
        temp_v0_11 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_11 + 8;
        temp_v0_11->words.w0 = 0xDA380003;
        sp60 = temp_v0_11;
        sp60->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_12 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_12 + 8;
        temp_v0_12->words.w1 = (u32) &D_06003640;
        temp_v0_12->words.w0 = 0xDE000000;
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.floorHeight, arg0->actor.world.pos.z, 0);
        SysMatrix_NormalizeXYZ(temp_a0);
        temp_v0_13 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_13 + 8;
        temp_v0_13->words.w0 = 0xDB060020;
        temp_v1_3 = arg1->state.frames;
        sp58 = temp_v0_13;
        sp58->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, (temp_v1_3 * -3) & 0x7F, 0U, 0x20, 0x20, 1, 0U, (temp_v1_3 * -0xA) & 0xFF, 0x20, 0x40);
        temp_v0_14 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_14 + 8;
        temp_v0_14->words.w1 = 0x643200FF;
        temp_v0_14->words.w0 = 0xFA000000;
        temp_v0_15 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_15 + 8;
        temp_v0_15->words.w1 = 0;
        temp_v0_15->words.w0 = 0xE7000000;
        temp_v0_16 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_16 + 8;
        temp_v0_16->words.w1 = 0xC8EBF080;
        temp_v0_16->words.w0 = 0xFB000000;
        temp_f12_3 = arg0->unk1F4;
        Matrix_Scale(temp_f12_3, temp_f12_3, temp_f12_3, 1);
        temp_v0_17 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_17 + 8;
        temp_v0_17->words.w0 = 0xDA380003;
        sp48 = temp_v0_17;
        sp48->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_18 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_18 + 8;
        temp_v0_18->words.w1 = (u32) &D_06003FC0;
        temp_v0_18->words.w0 = 0xDE000000;
    }
}

void EnWizFire_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnWizFire *this = (EnWizFire *) thisx;
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

    sp58 = this;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    SysMatrix_StatePush();
    phi_s2 = 9;
    if ((s32) this->unk16E < 0xA) {
        do {
            temp_a1 = 0xFF - (phi_s2 * 0x19);
            temp_s1 = &globalCtx->mf_187FC;
            temp_f20 = this->actor.scale.x - ((f32) phi_s2 * -0.0019f);
            if (temp_f20 > 0.0f) {
                temp_t0 = this + (phi_s2 * 0xC);
                if (this->unk166 == 0) {
                    temp_v0 = temp_s0->polyXlu.p;
                    temp_a0_2 = temp_a1 & 0xFF;
                    temp_s0->polyXlu.p = temp_v0 + 8;
                    temp_v0->words.w1 = (temp_a0_2 << 0x10) | 0xFF000000 | temp_a0_2;
                    temp_v0->words.w0 = 0xFA000000;
                    temp_v0_2 = temp_s0->polyXlu.p;
                    temp_s0->polyXlu.p = temp_v0_2 + 8;
                    temp_v0_2->words.w1 = temp_a0_2 << 0x18;
                    temp_v0_2->words.w0 = 0xFB000000;
                } else {
                    temp_v0_3 = temp_s0->polyXlu.p;
                    temp_a0_3 = (0xFF - (phi_s2 * 3)) & 0xFF;
                    temp_s0->polyXlu.p = temp_v0_3 + 8;
                    temp_v0_3->words.w1 = ((0xFF - (phi_s2 * 7)) << 0x18) | (temp_a0_3 << 0x10) | (temp_a0_3 << 8) | (temp_a1 & 0xFF);
                    temp_v0_3->words.w0 = 0xFA000000;
                    temp_v0_4 = temp_s0->polyXlu.p;
                    temp_s0->polyXlu.p = temp_v0_4 + 8;
                    temp_v0_4->words.w1 = 0xDCFFEB00;
                    temp_v0_4->words.w0 = 0xFB000000;
                }
                SysMatrix_InsertTranslation(temp_t0->unk178, temp_t0->unk17C + this->actor.shape.yOffset, temp_t0->unk180, 0);
                Matrix_Scale(temp_f20, temp_f20, temp_f20, 1);
                SysMatrix_NormalizeXYZ(temp_s1);
                SysMatrix_InsertZRotation_s(this->actor.world.rot.z, 1);
                temp_v0_5 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_5 + 8;
                temp_v0_5->words.w0 = 0xDA380003;
                temp_v0_5->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                temp_v0_6 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_6 + 8;
                temp_v0_6->words.w1 = (u32) &D_06002B40;
                temp_v0_6->words.w0 = 0xDE000000;
            }
            temp_s2 = phi_s2 - 1;
            phi_s2 = temp_s2;
        } while (temp_s2 >= (s32) sp58->unk16E);
    }
    SysMatrix_StatePop();
    if (this->unk166 == 0) {
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
    temp_f0 = this->unk14C;
    Matrix_Scale(temp_f0 + this->unk154, temp_f0 + this->unk158, temp_f0 + this->unk15C, 1);
    temp_v0 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    temp_v1 = this->unk170;
    sp44 = temp_v0;
    sp44->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x20, 1, temp_v1 & 0x7F, ((s32) temp_v1 * -0xA) & 0x7F, 0x20, 0x20);
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFA000080;
    temp_v0_2->words.w1 = ((s32) this->unk1FC & 0xFF) | 0x64320000;
    temp_v0_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0xC8EBF5FF;
    temp_v0_3->words.w0 = 0xFB000000;
    SysMatrix_InsertMatrix(&globalCtx->mf_187FC, 1);
    temp_v0_4 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDA380003;
    temp_v0_4->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_5 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDE000000;
    temp_v0_5->words.w1 = (u32) &D_06002630;
}

void func_80A4BC74(EnWizFire *arg0, Vec3f *arg1, f32 *arg2) {
    f32 temp_f8;
    s16 temp_v0;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0 + 0x254;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->unk0 == 0) {
        phi_s0->unk0 = 1U;
        Math_Vec3f_Copy(phi_s0 + 0x1C, &D_801D15B0);
        phi_s0->unk1 = (s8) (u32) Rand_ZeroFloat(100.0f);
        phi_s0->unk10 = (s32) arg1->x;
        phi_s0->unk14 = (s32) arg1->y;
        phi_s0->unk18 = (s32) arg1->z;
        phi_s0->unk28 = (s32) arg2->unk0;
        phi_s0->unk2C = (s32) arg2->unk4;
        phi_s0->unk30 = (s32) arg2->unk8;
        temp_f8 = Rand_ZeroFloat(5.0f) + 20.0f;
        phi_s0->unk8 = 0;
        phi_s0->unk6 = 0;
        phi_s0->unkC = (f32) (temp_f8 * 0.001f);
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
        if (phi_v0->unk0 != 0) {
            temp_f0 = phi_v0->unk1C;
            temp_f2 = phi_v0->unk20;
            temp_f12 = phi_v0->unk24;
            phi_v0->unk10 = (f32) (phi_v0->unk10 + temp_f0);
            phi_v0->unk14 = (f32) (phi_v0->unk14 + temp_f2);
            phi_v0->unk18 = (f32) (phi_v0->unk18 + temp_f12);
            phi_v0->unk1 = (u8) (phi_v0->unk1 + 1);
            phi_v0->unk1C = (f32) (temp_f0 + phi_v0->unk28);
            phi_v0->unk20 = (f32) (temp_f2 + phi_v0->unk2C);
            phi_v0->unk24 = (f32) (temp_f12 + phi_v0->unk30);
            if (phi_v0->unk8 == 0) {
                phi_v0->unk6 = (s16) (phi_v0->unk6 + 0xA);
                if ((s32) phi_v0->unk6 >= 0x64) {
                    phi_v0->unk8 = 1;
                }
            } else {
                phi_v0->unk6 = (s16) (phi_v0->unk6 - 8);
                if ((s32) phi_v0->unk6 <= 0) {
                    phi_v0->unk6 = 0;
                    phi_v0->unk0 = 0U;
                }
            }
        }
        temp_v0 = phi_v0 + 0x34;
        if (phi_v0->unk34 != 0) {
            temp_f0_2 = temp_v0->unk1C;
            temp_f2_2 = temp_v0->unk20;
            temp_f12_2 = temp_v0->unk24;
            temp_v0->unk10 = (f32) (temp_v0->unk10 + temp_f0_2);
            temp_v0->unk14 = (f32) (temp_v0->unk14 + temp_f2_2);
            temp_v0->unk18 = (f32) (temp_v0->unk18 + temp_f12_2);
            temp_v0->unk1 = (u8) (temp_v0->unk1 + 1);
            temp_v0->unk20 = (f32) (temp_f2_2 + temp_v0->unk2C);
            temp_v0->unk1C = (f32) (temp_f0_2 + temp_v0->unk28);
            temp_v0->unk24 = (f32) (temp_f12_2 + temp_v0->unk30);
            if (temp_v0->unk8 == 0) {
                temp_v0->unk6 = (s16) (temp_v0->unk6 + 0xA);
                if ((s32) temp_v0->unk6 >= 0x64) {
                    temp_v0->unk8 = 1;
                }
            } else {
                temp_v0->unk6 = (s16) (temp_v0->unk6 - 8);
                if ((s32) temp_v0->unk6 <= 0) {
                    temp_v0->unk6 = 0;
                    temp_v0->unk0 = 0;
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
        if (phi_s2->unk0 != 0) {
            if (phi_s4 == 0) {
                temp_v0 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0 + 8;
                temp_v0->words.w1 = (u32) &D_06000E70;
                temp_v0->words.w0 = 0xDE000000;
                phi_s4 = (phi_s4 + 1) & 0xFF;
            }
            temp_v0_2 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xFA000000;
            temp_v0_2->words.w1 = (phi_s2->unk6 & 0xFF) | 0xC3E1EB00;
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDB060020;
            temp_v1 = phi_s2->unk1;
            temp_v0_3->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, (temp_v1 * 3) & 0x7F, (temp_v1 * 0xF) & 0xFF, 0x20, 0x40, 1, 0U, 0U, 0x20, 0x20);
            SysMatrix_InsertTranslation(phi_s2->unk10, phi_s2->unk14, phi_s2->unk18, 0);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            temp_f12 = phi_s2->unkC;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDA380003;
            temp_v0_4->words.w1 = Matrix_NewMtx(temp_s0);
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xE200001C;
            temp_v0_5->words.w1 = 0xC1849D8;
            temp_v0_6 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w1 = 0;
            temp_v0_6->words.w0 = 0xD9FEFBFF;
            temp_v0_7 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w1 = (u32) &D_06000FD8;
            temp_v0_7->words.w0 = 0xDE000000;
        }
        temp_s5 = phi_s5 + 1;
        phi_s2 += 0x34;
        phi_s5 = temp_s5;
    } while ((s32) temp_s5 < 0xC8);
}

