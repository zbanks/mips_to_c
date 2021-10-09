typedef struct EnTanron2 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnTanron2 *, GlobalContext *);
    /* 0x148 */ s16 unk148;                         /* inferred */
    /* 0x14A */ s16 unk14A;                         /* inferred */
    /* 0x14C */ s16 unk14C;                         /* inferred */
    /* 0x14E */ s16 unk14E;                         /* inferred */
    /* 0x150 */ s16 unk150;                         /* inferred */
    /* 0x152 */ s16 unk152;                         /* inferred */
    /* 0x154 */ s16 unk154;                         /* inferred */
    /* 0x156 */ s16 unk156;                         /* inferred */
    /* 0x158 */ u8 unk158;                          /* inferred */
    /* 0x159 */ u8 unk159;                          /* inferred */
    /* 0x15A */ u8 unk15A;                          /* inferred */
    /* 0x15B */ s8 unk15B;                          /* inferred */
    /* 0x15C */ f32 unk15C;                         /* inferred */
    /* 0x160 */ f32 unk160;                         /* inferred */
    /* 0x164 */ ColliderCylinder unk164;            /* inferred */
    /* 0x1B0 */ ColliderCylinder unk1B0;            /* inferred */
} EnTanron2;                                        /* size = 0x1FC */

struct _mips2c_stack_EnTanron2_Destroy {};          /* size 0x0 */

struct _mips2c_stack_EnTanron2_Draw {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ ? *sp3C;                             /* inferred */
    /* 0x40 */ s32 *sp40;                           /* inferred */
    /* 0x44 */ char pad44[0x5C];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_EnTanron2_Init {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnTanron2_Update {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ void (*sp28)(EnTanron2 *, GlobalContext *); /* inferred */
    /* 0x2C */ char pad2C[0x1C];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80BB69C0 {};              /* size 0x0 */

struct _mips2c_stack_func_80BB69FC {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BB6B80 {};              /* size 0x0 */

struct _mips2c_stack_func_80BB6BD8 {
    /* 0x00 */ char pad0[0x22];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ char pad24[0x4];                     /* maybe part of sp22[3]? */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x2];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ Actor *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BB6F64 {};              /* size 0x0 */

struct _mips2c_stack_func_80BB6F78 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BB71C8 {
    /* 0x00 */ char pad0[0x90];
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ char padB4[0x4];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_80BB7398 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BB7408 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BB7578 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad28[0xC];                     /* maybe part of sp24[4]? */
    /* 0x34 */ void *sp34;                          /* inferred */
    /* 0x38 */ char pad38[0x4];
    /* 0x3C */ s32 *sp3C;                           /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BB7B90 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void func_80BB69C0(EnTanron2 *arg0, f32, EnTanron2 *); /* static */
void func_80BB6B80(EnTanron2 *arg0, u16);           /* static */
void func_80BB6F64(EnTanron2 *arg0);                /* static */
void func_80BB71C8(EnTanron2 *arg0, GlobalContext *arg1); /* static */
void func_80BB7398(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BB7578(EnTanron2 *arg0, GlobalContext *arg1); /* static */
void func_80BB7B90(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_06003450;
extern ? D_060034C8;
extern ? D_06004510;
extern s32 D_06004550;
extern ? func_80BB85A0;
static DamageTable D_80BB8170 = {
    {
        0xF1,
        0xF1,
        0,
        0xF2,
        0xF1,
        0xF2,
        0,
        0xF0,
        0xF2,
        0xF2,
        0xF2,
        0x22,
        0x32,
        0x42,
        0xF2,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0,
        0xF0,
        0xF0,
        0xF2,
        0xF2,
        0xF2,
        0,
        0,
        0x22,
        0,
        0,
        0,
        0xF1,
    },
};
static ColliderCylinderInit D_80BB8190 = {
    {3, 0x11, 9, 0x39, 0x10, 1},
    {3, {0xF7CFFFFF, 0, 4}, {0xFFFFFFFF, 0, 0}, 1, 5, 1},
    {0x1E, 0x32, 0xFFE7, {0, 0, 0}},
};
static ColliderCylinderInit D_80BB81BC = {
    {3, 0x11, 9, 0x39, 0x10, 1},
    {3, {0xF7CFFFFF, 0, 4}, {0xF7FFFFFF, 0, 0}, 1, 5, 1},
    {0x16, 0x2A, 0xFFEB, {0, 0, 0}},
};
static Color_RGBA8 D_80BB81E8 = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80BB81EC = {0xFF, 0x64, 0x64, 0xFF};
static Actor *D_80BB8450;
static f32 D_80BB8454;
static void *D_80BB8458;
static void *D_80BB845C;
static ? D_80BB8460;

void EnTanron2_Init(EnTanron2 *this, GlobalContext *globalCtx) {
    EnTanron2 *this = (EnTanron2 *) thisx;
    D_80BB8450 = this->actor.parent;
    this->actor.flags &= -2;
    if (this->actor.params == 0x64) {
        this->actor.update = func_80BB7B90;
        func_800BC154(globalCtx, &globalCtx->actorCtx, (Actor *) this, 5U);
        return;
    }
    this->actor.flags |= 0x200;
    Actor_SetScale((Actor *) this, 1.0f);
    this->actor.draw = NULL;
    this->actor.colChkInfo.health = 1;
    this->actor.colChkInfo.damageTable = &D_80BB8170;
    this->actor.targetMode = 5;
    Collider_InitAndSetCylinder(globalCtx, &this->unk164, (Actor *) this, &D_80BB8190);
    Collider_InitAndSetCylinder(globalCtx, &this->unk1B0, (Actor *) this, &D_80BB81BC);
    if ((gGameInfo->data[1312] != 0) || ((gSaveContext.eventInf[6] & 1) != 0)) {
        func_80BB69C0(this);
    } else {
        func_80BB6F64(this);
    }
    this->unk14A = (s16) (s32) Rand_ZeroFloat(65536.0f);
    this->unk14C = (s16) (s32) (Rand_ZeroFloat(800.0f) + 1400.0f);
    if (Rand_ZeroOne() < 0.5f) {
        this->unk14C = (s16) -(s32) this->unk14C;
    }
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 35.0f, 60.0f, 60.0f, 4U);
    this->actor.floorHeight += 20.0f;
    this->unk148 = (s16) (s32) Rand_ZeroFloat(32.0f);
}

void EnTanron2_Destroy(EnTanron2 *this, GlobalContext *globalCtx) {
    EnTanron2 *this = (EnTanron2 *) thisx;

}

void func_80BB69C0(EnTanron2 *arg0) {
    arg0->actionFunc = func_80BB69FC;
    arg0->unk160 = 0.0f;
    arg0->unk15C = 0.0f;
    arg0->unk164.dim.radius = 0x19;
    arg0->unk164.dim.height = 0x2E;
    arg0->unk164.dim.yShift = -0x17;
    arg0->unk158 = 0;
}

void func_80BB69FC(EnTanron2 *this, GlobalContext *globalCtx) {
    f32 sp34;
    f32 sp30;
    Vec3f *temp_s1;
    f32 temp_f0;

    temp_f0 = this->unk15C;
    temp_s1 = D_80BB8450 + (this->actor.params * 0xC) + 0x2E4;
    if (temp_f0 == 1.0f) {
        Math_Vec3f_Copy((Vec3f *) &this->actor.world, temp_s1);
    } else {
        sp34 = Math_SmoothStepToF((f32 *) &this->actor.world, temp_s1->x, temp_f0, this->unk160, 0.0f);
        sp30 = Math_SmoothStepToF(&this->actor.world.pos.y, temp_s1->y, this->unk15C, this->unk160, 0.0f);
        if ((this->unk158 == 0) && ((sp34 + sp30 + Math_SmoothStepToF(&this->actor.world.pos.z, temp_s1->z, this->unk15C, this->unk160, 0.0f)) < 2.0f)) {
            this->unk158 = 1;
            Audio_PlayActorSound2((Actor *) this, 0x38D4U);
        }
        Math_ApproachF(&this->unk15C, 1.0f, 1.0f, 0.02f);
        Math_ApproachF(&this->unk160, 20.0f, 1.0f, 1.0f);
    }
    Math_ApproachF((f32 *) &this->actor.scale, 1.0f, 0.1f, 0.2f);
    Math_ApproachF(&this->actor.scale.y, 1.0f, 0.1f, 0.2f);
}

void func_80BB6B80(EnTanron2 *arg0) {
    arg0->actionFunc = func_80BB6BD8;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.velocity.z = 0.0f;
    arg0->actor.velocity.y = 0.0f;
    arg0->actor.velocity.x = 0.0f;
    arg0->unk158 = 0;
    arg0->unk159 = 1;
    arg0->actor.flags |= 1;
    arg0->unk164.dim.radius = 0x1E;
    arg0->unk164.dim.height = 0x32;
    arg0->unk164.dim.yShift = -0x19;
}

void func_80BB6BD8(EnTanron2 *this, GlobalContext *globalCtx) {
    Actor *sp34;
    s16 sp32;
    f32 sp2C;
    f32 sp28;
    s16 sp22;
    Actor *temp_a2;
    Actor *temp_v0;
    Actor *temp_v0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f2;
    f32 temp_f2_2;
    u8 temp_v1;

    temp_a2 = globalCtx->actorCtx.actorList[2].first;
    if (this->unk14E == 0) {
        temp_f0 = this->actor.velocity.y;
        temp_f2 = this->actor.floorHeight;
        this->actor.world.pos.y += temp_f0;
        this->actor.world.pos.x += this->actor.velocity.x;
        this->actor.world.pos.z += this->actor.velocity.z;
        this->actor.velocity.y = temp_f0 - 2.0f;
        if (this->actor.world.pos.y <= temp_f2) {
            this->actor.world.pos.y = temp_f2;
            sp34 = temp_a2;
            Audio_PlayActorSound2((Actor *) this, 0x3A10U);
            temp_v0 = D_80BB8450;
            temp_v1 = this->unk158;
            temp_f0_2 = this->actor.world.pos.x;
            temp_f2_2 = this->actor.world.pos.z;
            temp_f12 = temp_v0->unk6BC - temp_f0_2;
            temp_f14 = temp_v0->unk6C4 - temp_f2_2;
            if (temp_v1 != 0) {
                if (temp_v1 != 1) {
                    if (temp_v1 != 2) {

                    } else {
                        sp22 = Math_Atan2S(temp_a2->world.pos.x - temp_f0_2, temp_a2->world.pos.z - temp_f2_2);
                        sp32 = (s32) Rand_ZeroFloat(20000.0f) + sp22;
                        this->actor.speedXZ = Rand_ZeroFloat(7.0f) + 7.0f;
                        if ((this->unk152 == 0) && (D_80BB8450->unk1F6 == 0)) {
                            this->unk158 = 1;
                        }
                    }
                } else {
                    sp32 = Math_Atan2S(temp_f12, temp_f14);
                    this->actor.speedXZ += 2.0f;
                    if (this->actor.speedXZ > 10.0f) {
                        this->actor.speedXZ = 10.0f;
                    }
                }
            } else {
                sp2C = temp_f12;
                sp28 = temp_f14;
                if (Rand_ZeroOne() > 0.2f) {
                    sp32 = (s16) (s32) Rand_ZeroFloat(65536.0f);
                } else {
                    sp32 = Math_Atan2S(temp_f12, temp_f14);
                }
                this->actor.speedXZ = Rand_ZeroFloat(5.0f) + 5.0f;
            }
            Matrix_RotateY(sp32, 0U);
            SysMatrix_GetStateTranslationAndScaledZ(this->actor.speedXZ, &this->actor.velocity);
            temp_f0_3 = Rand_ZeroFloat(5.0f);
            this->unk14E = 5;
            this->actor.velocity.y = temp_f0_3 + 12.0f;
        }
        if (this->unk150 != 0) {
            Math_ApproachF((f32 *) &this->actor.scale, 0.75f, 0.5f, 1.0f);
            Math_ApproachF(&this->actor.scale.y, 1.2f, 0.5f, 1.0f);
            return;
        }
        Math_ApproachF((f32 *) &this->actor.scale, 1.0f, 0.1f, 0.2f);
        Math_ApproachF(&this->actor.scale.y, 1.0f, 0.1f, 0.2f);
        return;
    }
    Math_ApproachF((f32 *) &this->actor.scale, 1.2f, 0.75f, 1.5f);
    Math_ApproachF(&this->actor.scale.y, 0.75f, 0.75f, 1.5f);
    if (this->unk14E == 1) {
        temp_v0_2 = D_80BB8450;
        temp_f12_2 = temp_v0_2->unk6BC - this->actor.world.pos.x;
        temp_f14_2 = temp_v0_2->unk6C4 - this->actor.world.pos.z;
        if ((this->unk158 != 0) && (((temp_f12_2 * temp_f12_2) + (temp_f14_2 * temp_f14_2)) < 14400.0f)) {
            func_80BB69C0((bitwise EnTanron2 *) temp_f12_2, temp_f14_2, this);
            return;
        }
        this->unk150 = 0xA;
        Audio_PlayActorSound2((Actor *) this, 0x3A0FU);
        /* Duplicate return node #24. Try simplifying control flow for better match */
    }
}

void func_80BB6F64(EnTanron2 *arg0) {
    arg0->actionFunc = func_80BB6F78;
}

void func_80BB6F78(EnTanron2 *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    u8 temp_v0;

    temp_v0 = this->unk158;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 0xA) {
                return;
            }
            if (this->unk14E == 0) {
                this->unk150 = 0xA;
                this->unk158 = 1;
                return;
            }
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return;
        }
        if (this->unk14E == 0) {
            temp_f0 = this->actor.velocity.y;
            temp_f2 = this->actor.floorHeight;
            this->actor.world.pos.y += temp_f0;
            this->actor.velocity.y = temp_f0 - 2.0f;
            if (this->actor.world.pos.y <= temp_f2) {
                this->actor.world.pos.y = temp_f2;
                Audio_PlayActorSound2((Actor *) this, 0x3A10U);
                if (D_80BB8450->unk6F8 > 0.1f) {
                    Audio_PlayActorSound2((Actor *) this, 0x28C6U);
                }
                temp_f0_2 = Rand_ZeroFloat(5.0f);
                this->unk14E = 5;
                this->actor.velocity.y = temp_f0_2 + 12.0f;
            }
            if (this->unk150 != 0) {
                Math_ApproachF((f32 *) &this->actor.scale, 0.75f, 0.5f, 1.0f);
                Math_ApproachF(&this->actor.scale.y, 1.2f, 0.5f, 1.0f);
                return;
            }
            Math_ApproachF((f32 *) &this->actor.scale, 1.0f, 0.1f, 0.2f);
            Math_ApproachF(&this->actor.scale.y, 1.0f, 0.1f, 0.2f);
            return;
        }
        Math_ApproachF((f32 *) &this->actor.scale, 1.2f, 0.75f, 1.5f);
        Math_ApproachF(&this->actor.scale.y, 0.75f, 0.75f, 1.5f);
        if (this->unk14E == 1) {
            if (D_80BB8450->unk708 == 3) {
                func_80BB6B80(this, 0x3A0FU);
                this->unk158 = 1;
                this->unk159 = 0;
                return;
            }
            this->unk150 = 0xA;
            Audio_PlayActorSound2((Actor *) this, 0x3A0FU);
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return;
    }
    if (D_80BB8450->unk708 == 0xD) {
        this->unk158 = 0xA;
        this->unk14E = (s16) (s32) Rand_ZeroFloat(50.0f);
    }
}

void func_80BB71C8(EnTanron2 *arg0, GlobalContext *arg1) {
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 temp_f20;
    s32 temp_s0;
    s32 phi_s0;

    temp_s5 = &sp9C;
    temp_s4 = &sp90;
    phi_s0 = 0;
    do {
        SysMatrix_InsertYRotation_f(Rand_ZeroFloat(6.2831855f), 0);
        SysMatrix_RotateStateAroundXAxis(Rand_ZeroFloat(6.2831855f));
        SysMatrix_GetStateTranslationAndScaledZ(Rand_ZeroFloat(10.0f) + 5.0f, (Vec3f *) &spA8);
        sp90 = arg0->actor.world.pos.x + spA8;
        sp94 = arg0->actor.world.pos.y + spAC;
        sp98 = arg0->actor.world.pos.z + spB0;
        sp9C = spA8 * -0.03f;
        spA0 = spAC * -0.03f;
        spA4 = spB0 * -0.03f;
        temp_f20 = Rand_ZeroFloat(100.0f);
        EffectSsDtBubble_SpawnCustomColor(arg1, (Vec3f *) temp_s4, (Vec3f *) &spA8, (Vec3f *) temp_s5, &D_80BB81E8, &D_80BB81EC, (s16) (s32) (temp_f20 + 200.0f), (s16) (s32) (Rand_ZeroFloat(5.0f) + 15.0f), (s16) 0);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0xF);
}

void func_80BB7398(Actor *arg0, GlobalContext *arg1) {
    arg0->unk144 = func_80BB7408;
    if ((s32) arg0->colChkInfo.health <= 0) {
        Enemy_StartFinishingBlow(arg1, arg0);
        Audio_PlaySoundAtPosition(arg1, (Vec3f *) &arg0->world, 0x1E, 0x3A12U);
        return;
    }
    Audio_PlayActorSound2(arg0, 0x3A11U);
}

void func_80BB7408(EnTanron2 *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    Actor *temp_v0_2;
    Actor *temp_v0_3;
    f32 temp_f0;
    f32 temp_f2;

    temp_f0 = this->actor.velocity.y;
    temp_f2 = this->actor.floorHeight;
    this->actor.world.pos.y += temp_f0;
    this->actor.world.pos.x += this->actor.velocity.x;
    this->actor.world.pos.z += this->actor.velocity.z;
    this->actor.velocity.y = temp_f0 - 2.0f;
    if (this->actor.world.pos.y <= temp_f2) {
        this->actor.world.pos.y = temp_f2;
        if ((s32) (s8) this->actor.colChkInfo.health <= 0) {
            Actor_MarkForDeath((Actor *) this);
            func_80BB71C8(this, globalCtx);
            temp_v0 = D_80BB8450;
            temp_v0->unk6F6 = (s16) (temp_v0->unk6F6 - 1);
            temp_v0_2 = D_80BB8450;
            temp_v0_2->unk2E2 = (s16) (temp_v0_2->unk2E2 + 4);
            temp_v0_3 = D_80BB8450;
            temp_v0_3->unk2E0 = (s16) (temp_v0_3->unk2E0 + 4);
            return;
        }
        this->actor.velocity.x *= 0.5f;
        this->actor.velocity.z *= 0.5f;
        Math_ApproachF((f32 *) &this->actor.scale, 1.2f, 0.75f, 1.5f);
        Math_ApproachF(&this->actor.scale.y, 0.75f, 0.75f, 1.5f);
        if ((this->actor.velocity.x < 0.1f) && (this->actor.velocity.z < 0.1f)) {
            func_80BB6B80(this);
            this->unk158 = 1;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_80BB7578(EnTanron2 *arg0, GlobalContext *arg1) {
    s32 *sp3C;
    void *sp34;
    Vec3f *sp24;
    Actor *temp_v0_3;
    Actor *temp_v0_4;
    EnTanron2 *temp_v0_2;
    s32 *temp_v1;
    u8 temp_v0;
    u8 temp_v1_2;
    void *temp_a2;
    Actor *phi_v0;

    temp_a2 = arg1->actorCtx.actorList[2].first;
    if ((arg0->unk154 == 0) && (temp_v0 = arg0->unk164.base.acFlags, ((temp_v0 & 2) != 0))) {
        temp_v1 = arg0->unk164.info.acHitInfo;
        arg0->unk164.base.acFlags = temp_v0 & 0xFFFD;
        if ((*temp_v1 & 0x80) != 0) {
            sp34 = temp_a2;
            func_80BB6B80(arg0, (u16) temp_a2);
            arg0->unk158 = 1;
            Audio_PlayActorSound2((Actor *) arg0, 0x3A11U);
            temp_v0_2 = temp_a2->unk730;
            if ((temp_v0_2 != 0) && (arg0 != temp_v0_2)) {
                temp_a2->unk730 = arg0;
                arg1->actorCtx.targetContext.unk38 = arg0;
                arg1->actorCtx.targetContext.unk3C = arg0;
            }
            goto block_11;
        }
        arg0->unk154 = 0xF;
        if (func_80BB69FC != arg0->actionFunc) {
            sp3C = temp_v1;
            Matrix_RotateY(arg0->actor.yawTowardsPlayer, 0U);
            if ((*temp_v1 & 0x300000) != 0) {
                arg0->unk154 = 0xA;
                SysMatrix_GetStateTranslationAndScaledZ(-10.0f, &arg0->actor.velocity);
            } else {
                arg0->unk156 = 0xF;
                SysMatrix_GetStateTranslationAndScaledZ(-20.0f, &arg0->actor.velocity);
                arg0->actor.colChkInfo.health -= arg0->actor.colChkInfo.damage;
                func_80BB7398((Actor *) arg0, arg1);
            }
            goto block_11;
        }
        Audio_PlayActorSound2((Actor *) arg0, 0x3A11U);
        sp24 = &arg0->actor.velocity;
        goto block_18;
    }
block_11:
    if (func_80BB69FC == arg0->actionFunc) {
        temp_v0_3 = D_80BB8450;
        phi_v0 = temp_v0_3;
        if (temp_v0_3->unk1F6 != 1) {
            if ((temp_v0_3->unk1F7 != 0) && (Rand_ZeroOne() < 0.1f)) {
                phi_v0 = D_80BB8450;
                goto block_16;
            }
            goto block_19;
        }
block_16:
        temp_v1_2 = phi_v0->unk1F7;
        sp24 = &arg0->actor.velocity;
        if (temp_v1_2 != 0) {
            phi_v0->unk1F7 = (u8) (temp_v1_2 - 1);
        }
block_18:
        func_80BB6B80(arg0);
        arg0->unk158 = 2;
        temp_v0_4 = D_80BB8450;
        Matrix_RotateY(Math_Atan2S(arg0->actor.world.pos.x - temp_v0_4->unk6BC, arg0->actor.world.pos.z - temp_v0_4->unk6C4), 0U);
        SysMatrix_GetStateTranslationAndScaledZ(10.0f, sp24);
        arg0->unk152 = (s16) (s32) (Rand_ZeroFloat(100.0f) + 200.0f);
        return;
    }
block_19:
    if (D_80BB8450->unk1F6 == 0xA) {
        Actor_MarkForDeath((Actor *) arg0);
        func_80BB71C8(arg0, arg1);
    }
}

void EnTanron2_Update(EnTanron2 *this, GlobalContext *globalCtx) {
    void (*sp28)(EnTanron2 *, GlobalContext *);
    ColliderCylinder *sp24;
    ColliderCylinder *sp20;
    Actor *temp_v0_6;
    Actor *temp_v0_8;
    ColliderCylinder *temp_a2;
    ColliderCylinder *temp_a2_2;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v1;
    u32 temp_v0_9;
    u8 temp_v0_7;
    Actor *phi_v0;
    s32 phi_a0;
    EnTanron2 *this = (EnTanron2 *) thisx;

    this->unk148 += 1;
    Actor_SetHeight((Actor *) this, 0.0f);
    temp_v0 = this->unk14E;
    if (temp_v0 != 0) {
        this->unk14E = temp_v0 - 1;
    }
    temp_v0_2 = this->unk150;
    if (temp_v0_2 != 0) {
        this->unk150 = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk152;
    if (temp_v0_3 != 0) {
        this->unk152 = temp_v0_3 - 1;
    }
    temp_v0_4 = this->unk154;
    if (temp_v0_4 != 0) {
        this->unk154 = temp_v0_4 - 1;
    }
    temp_v0_5 = this->unk156;
    if (temp_v0_5 != 0) {
        this->unk156 = temp_v0_5 - 1;
    }
    this->actionFunc(this, globalCtx);
    if (func_80BB69FC != this->actionFunc) {
        temp_v0_6 = D_80BB8450;
        temp_f0 = this->actor.world.pos.x;
        phi_v0 = temp_v0_6;
        if ((temp_f0 < (temp_v0_6->unk6D8 + 20.0f)) || ((temp_v0_6->unk6DC - 20.0f) < temp_f0)) {
            this->actor.world.pos.x = this->actor.prevPos.x;
            this->actor.velocity.x *= -1.0f;
            phi_v0 = D_80BB8450;
        }
        temp_f0_2 = this->actor.world.pos.z;
        if ((temp_f0_2 < (phi_v0->unk6E0 + 20.0f)) || ((phi_v0->unk6E4 - 20.0f) < temp_f0_2)) {
            this->actor.world.pos.z = this->actor.prevPos.z;
            this->actor.velocity.z *= -1.0f;
        }
    }
    this->unk14A += this->unk14C;
    sp28 = func_80BB69FC;
    func_80BB7578(this, globalCtx);
    if (this->unk159 != 0) {
        if (this->actor.xzDistToPlayer < 100.0f) {
            temp_v0_7 = this->unk15A;
            temp_a2 = &this->unk1B0;
            if (temp_v0_7 == 0) {
                sp24 = temp_a2;
                Collider_UpdateCylinder((Actor *) this, temp_a2);
                CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
            } else {
                this->unk15A = temp_v0_7 - 1;
            }
        }
        temp_a2_2 = &this->unk164;
        sp24 = (ColliderCylinder *) &globalCtx->colChkCtx;
        sp20 = temp_a2_2;
        Collider_UpdateCylinder((Actor *) this, temp_a2_2);
        CollisionCheck_SetAC(globalCtx, (CollisionCheckContext *) sp24, (Collider *) temp_a2_2);
    }
    if ((this->unk148 & 0x1F) == 0) {
        if ((sp28 != this->actionFunc) && (this->actor.xyzDistToPlayerSq < 40000.0f)) {
            this->unk15B = 1;
        } else {
            this->unk15B = 0;
        }
        if (sp28 == this->actionFunc) {
            temp_v0_8 = D_80BB8450;
            temp_v1 = D_80BB8450->yawTowardsPlayer - Math_Atan2S(this->actor.world.pos.x - temp_v0_8->unk6BC, this->actor.world.pos.z - temp_v0_8->unk6C4);
            phi_a0 = (s32) temp_v1;
            if ((s32) temp_v1 < 0) {
                phi_a0 = -(s32) temp_v1;
            }
            if (phi_a0 >= 0x3001) {
                this->unk159 = 0;
                this->actor.flags &= -2;
            } else {
                this->unk159 = 1;
                this->actor.flags |= 1;
            }
        }
    }
    temp_v0_9 = this->actor.flags;
    if (((temp_v0_9 & 0x2000) == 0x2000) && (this->actor.xzDistToPlayer < 80.0f)) {
        this->actor.flags = temp_v0_9 & ~0x2000;
        this->unk15A = 0x19;
        this->unk159 = 1;
    }
    if (~(globalCtx->state.input[2].press.button | ~0x20) == 0) {
        this->unk158 = 1;
    }
    if (~(globalCtx->state.input[2].press.button | ~0x10) == 0) {
        func_80BB6B80(this);
    }
}

void func_80BB7B90(Actor *this, GlobalContext *globalCtx) {
    D_80BB8454 = (Math_SinS((s16) (globalCtx->gameplayFrames * 0x3000)) * 0.1f) + 1.0f;
    if (D_80BB8450->unk1F6 == 0xB) {
        Actor_MarkForDeath(this);
    }
}

void EnTanron2_Draw(EnTanron2 *this, GlobalContext *globalCtx) {
    s32 *sp40;
    ? *sp3C;
    ? *temp_s0;
    Actor *temp_s1;
    Actor *temp_s1_2;
    Actor *temp_s1_4;
    Actor *temp_s1_5;
    Actor *temp_s1_6;
    Actor *temp_s1_7;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_2;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    MtxF *temp_s1_3;
    f32 temp_f12;
    s32 temp_a2;
    s32 temp_t0;
    void **temp_s0_3;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_s0_2;
    void *temp_t5;
    void *temp_t6;
    void *temp_v0_3;
    void *temp_v0_4;
    ? *phi_s0;
    Actor *phi_s1;
    s32 phi_a3;
    s32 phi_a3_2;
    void *phi_s0_2;
    s32 phi_t0;
    void **phi_s0_3;
    Actor *phi_s1_2;
    Actor *phi_s1_3;
    s32 phi_a3_3;
    s32 phi_v0;
    EnTanron2 *this = (EnTanron2 *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s2 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w1 = (u32) &D_06003450;
    temp_v0->words.w0 = 0xDE000000;
    temp_v0_2 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = -0x6A;
    temp_v0_2->words.w0 = 0xFA000000;
    temp_s1 = globalCtx->actorCtx.actorList[9].first;
    D_80BB845C = NULL;
    D_80BB845C = NULL;
    phi_s0 = &D_80BB8460;
    phi_s1 = temp_s1;
    do {
        temp_s0 = phi_s0 + 0x10;
        temp_s0->unk-C = 0;
        temp_s0->unk-8 = 0;
        temp_s0->unk-4 = 0;
        temp_s0->unk-10 = 0;
        phi_s0 = temp_s0;
    } while (temp_s0 != &func_80BB85A0);
    phi_a3 = 0;
    phi_a3_2 = 0;
    if (temp_s1 != 0) {
        do {
            phi_a3_3 = phi_a3;
            if ((s32) phi_s1->params < 0x64) {
                *(&D_80BB8458 + (phi_a3 * 4)) = phi_s1;
                phi_a3_3 = phi_a3 + 1;
            }
            temp_s1_2 = phi_s1->next;
            phi_s1 = temp_s1_2;
            phi_a3 = phi_a3_3;
            phi_a3_2 = phi_a3_3;
        } while (temp_s1_2 != 0);
    }
    temp_a2 = phi_a3_2 - 1;
    phi_t0 = 0;
    if (temp_a2 > 0) {
        do {
            phi_v0 = 0;
            if (temp_a2 > 0) {
                if (((phi_a3_2 - 1) & 1) != 0) {
                    temp_t5 = D_80BB845C;
                    phi_v0 = 1;
                    if (temp_t5 != 0) {
                        temp_t6 = D_80BB8458;
                        if (temp_t6->unkF4 < temp_t5->unkF4) {
                            D_80BB845C = temp_t5;
                            D_80BB845C = temp_t6;
                        }
                    }
                    if (temp_a2 != 1) {
                        goto block_14;
                    }
                } else {
block_14:
                    phi_s0_2 = (phi_v0 * 4) + &D_80BB8458;
                    do {
                        temp_v0_3 = phi_s0_2->unk4;
                        if (temp_v0_3 != 0) {
                            temp_a0_2 = phi_s0_2->unk0;
                            if (temp_a0_2->unkF4 < temp_v0_3->unkF4) {
                                phi_s0_2->unk0 = temp_v0_3;
                                phi_s0_2->unk4 = temp_a0_2;
                            }
                        }
                        temp_a0_3 = phi_s0_2->unk8;
                        if (temp_a0_3 != 0) {
                            temp_v0_4 = phi_s0_2->unk4;
                            if (temp_v0_4->unkF4 < temp_a0_3->unkF4) {
                                phi_s0_2->unk4 = temp_a0_3;
                                phi_s0_2->unk8 = temp_v0_4;
                            }
                        }
                        temp_s0_2 = phi_s0_2 + 8;
                        phi_s0_2 = temp_s0_2;
                    } while (temp_s0_2 != ((temp_a2 * 4) + &D_80BB8458));
                }
            }
            temp_t0 = phi_t0 + 1;
            phi_t0 = temp_t0;
        } while (temp_t0 != temp_a2);
    }
    phi_s0_3 = &D_80BB8458;
    do {
        temp_a0_4 = *phi_s0_3;
        if (temp_a0_4 != 0) {
            sp3C = &D_060034C8;
            temp_s1_3 = &globalCtx->mf_187FC;
            SysMatrix_InsertTranslation(temp_a0_4->unk24, temp_a0_4->unk28, temp_a0_4->unk2C, 0);
            SysMatrix_NormalizeXYZ(temp_s1_3);
            temp_a0_5 = *phi_s0_3;
            Matrix_Scale(temp_a0_5->unk58, temp_a0_5->unk5C, 0.0f, 1);
            SysMatrix_InsertZRotation_s((*phi_s0_3)->unk14A, 1);
            Matrix_Scale(0.13f, 0.14299999f, 0.13f, 1);
            SysMatrix_InsertZRotation_s((s16) ((s32) (*phi_s0_3)->unk14A * -1), 1);
            temp_v0_5 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDA380003;
            temp_v0_5->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_6 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDE000000;
            temp_v0_6->words.w1 = (u32) sp3C;
        }
        temp_s0_3 = phi_s0_3 + 4;
        phi_s0_3 = temp_s0_3;
    } while (temp_s0_3 != &func_80BB85A0);
    func_8012C448(globalCtx->state.gfxCtx);
    temp_v0_7 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = 0x96;
    temp_v0_7->words.w0 = 0xFA000000;
    temp_v0_8 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0_8 + 8;
    temp_v0_8->words.w1 = (u32) &D_06004510;
    temp_v0_8->words.w0 = 0xDE000000;
    temp_s1_4 = globalCtx->actorCtx.actorList[9].first;
    phi_s1_2 = temp_s1_4;
    if (temp_s1_4 != 0) {
        do {
            if (((s32) phi_s1_2->params < 0x64) && (phi_s1_2->unk15B != 0)) {
                sp40 = &D_06004550;
                SysMatrix_InsertTranslation(phi_s1_2->world.pos.x, D_80BB8450->floorHeight, phi_s1_2->world.pos.z, 0);
                Matrix_Scale(0.6f, 0.0f, 0.6f, 1);
                temp_v0_9 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_9 + 8;
                temp_v0_9->words.w0 = 0xDA380003;
                temp_v0_9->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                temp_v0_10 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_10 + 8;
                temp_v0_10->words.w0 = 0xDE000000;
                temp_v0_10->words.w1 = (u32) sp40;
            }
            temp_s1_5 = phi_s1_2->next;
            phi_s1_2 = temp_s1_5;
        } while (temp_s1_5 != 0);
    }
    func_8012C974(globalCtx->state.gfxCtx);
    temp_v0_11 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0_11 + 8;
    temp_v0_11->words.w1 = -1;
    temp_v0_11->words.w0 = 0xFA000000;
    temp_v0_12 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0_12 + 8;
    temp_v0_12->words.w1 = -1;
    temp_v0_12->words.w0 = 0xFB000000;
    temp_v0_13 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0_13 + 8;
    temp_v0_13->words.w1 = 0x20;
    temp_v0_13->words.w0 = 0xE3001A01;
    temp_v0_14 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0_14 + 8;
    temp_v0_14->words.w1 = 0x80;
    temp_v0_14->words.w0 = 0xE3001801;
    temp_s1_6 = globalCtx->actorCtx.actorList[9].first;
    phi_s1_3 = temp_s1_6;
    if (temp_s1_6 != 0) {
        do {
            if (((s32) phi_s1_3->params < 0x64) && (phi_s1_3->unk15B != 0) && (phi_s1_3->world.pos.y <= phi_s1_3->floorHeight)) {
                sp40 = &D_040377B0;
                SysMatrix_InsertTranslation(phi_s1_3->world.pos.x, D_80BB8450->floorHeight + 2.0f, phi_s1_3->world.pos.z, 0);
                temp_f12 = D_80BB8454;
                Matrix_Scale(temp_f12, 0.0f, temp_f12, 1);
                temp_v0_15 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_15 + 8;
                temp_v0_15->words.w0 = 0xDA380003;
                temp_v0_15->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                temp_v0_16 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_16 + 8;
                temp_v0_16->words.w0 = 0xDE000000;
                temp_v0_16->words.w1 = (u32) sp40;
            }
            temp_s1_7 = phi_s1_3->next;
            phi_s1_3 = temp_s1_7;
        } while (temp_s1_7 != 0);
    }
}
