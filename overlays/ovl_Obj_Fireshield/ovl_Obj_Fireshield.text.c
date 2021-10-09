typedef struct ObjFireshield {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk144;            /* inferred */
    /* 0x190 */ void (*actionFunc)(ObjFireshield *, GlobalContext *);
    /* 0x194 */ s32 unk194;                         /* inferred */
    /* 0x198 */ f32 unk198;                         /* inferred */
    /* 0x19C */ char pad19C[0x8];                   /* maybe part of unk198[3]? */
    /* 0x1A4 */ s16 unk1A4;                         /* inferred */
    /* 0x1A6 */ u8 unk1A6;                          /* inferred */
    /* 0x1A7 */ s8 unk1A7;                          /* inferred */
    /* 0x1A8 */ s8 unk1A8;                          /* inferred */
    /* 0x1A9 */ char pad1A9[0x3];                   /* maybe part of unk1A8[4]? */
} ObjFireshield;                                    /* size = 0x1AC */

struct _mips2c_stack_ObjFireshield_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjFireshield_Draw {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ Gfx *sp48;                           /* inferred */
    /* 0x4C */ char pad4C[0x14];
};                                                  /* size = 0x60 */

struct _mips2c_stack_ObjFireshield_Init {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_ObjFireshield_Update {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ CollisionCheckContext *sp2C;         /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ Actor *sp34;                         /* inferred */
    /* 0x38 */ char pad38[0x8];                     /* maybe part of sp34[3]? */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A4CA90 {};              /* size 0x0 */

struct _mips2c_stack_func_80A4CABC {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A4CB7C {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A4CC54 {};              /* size 0x0 */

struct _mips2c_stack_func_80A4CCBC {};              /* size 0x0 */

struct _mips2c_stack_func_80A4CD28 {};              /* size 0x0 */

struct _mips2c_stack_func_80A4CD34 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ u32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A4CE28 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ u32 sp1C;                            /* inferred */
    /* 0x20 */ u32 sp20;                            /* inferred */
    /* 0x24 */ u32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x8];                     /* maybe part of sp24[3]? */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A4D174 {};              /* size 0x0 */

struct _mips2c_stack_func_80A4D1CC {};              /* size 0x0 */

void func_80A4CA90(ObjFireshield *arg0);            /* static */
void func_80A4CC54(ObjFireshield *this, GlobalContext *globalCtx); /* static */
void func_80A4CD34(ObjFireshield *arg0, GlobalContext *arg1); /* static */
void func_80A4CE28(ObjFireshield *arg0, GlobalContext *arg1); /* static */
void func_80A4D174(ObjFireshield *arg0);            /* static */
void func_80A4D1CC();                               /* static */
static ColliderCylinderInit D_80A4D820 = {
    {0xA, 0x11, 0, 9, 0x20, 1},
    {0, {0x20000000, 1, 4}, {0, 0, 0}, 0x19, 0, 1},
    {0x1C, 0x90, 0, {0, 0, 0}},
};
static ? D_80A4D84C;                                /* unable to generate initializer */
static ? D_80A4D864;                                /* unable to generate initializer */
static ? D_80A4D874;                                /* unable to generate initializer */
static ? D_80A4D884;                                /* unable to generate initializer */
static ? D_80A4D894;                                /* unable to generate initializer */
static InitChainEntry D_80A4D8A4[3];                /* unable to generate initializer */

void func_80A4CA90(ObjFireshield *arg0) {
    if ((s32) arg0->actor.cutscene >= 0) {
        arg0->actionFunc = func_80A4CABC;
        return;
    }
    arg0->actionFunc = func_80A4CC54;
}

void func_80A4CABC(ObjFireshield *this, GlobalContext *globalCtx) {
    s32 sp18;
    ObjFireshield *temp_a1;
    s16 temp_t0;
    s32 *temp_a2;
    s32 *temp_a3;
    s32 temp_a0_3;
    s32 temp_t0_2;
    s32 temp_v1;
    s8 temp_a0;
    s8 temp_a0_2;

    temp_a0 = this->actor.cutscene;
    this = this;
    temp_a1 = this;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        temp_t0 = temp_a1->actor.params;
        temp_a0_2 = temp_a1->actor.cutscene;
        this = temp_a1;
        temp_t0_2 = temp_t0 & 0x7F;
        sp18 = temp_t0_2;
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0_2, (Actor *) temp_a1);
        temp_a0_3 = ((s32) (temp_t0_2 & ~0x1F) >> 5) * 4;
        this->actionFunc = func_80A4CB7C;
        this->unk194 = 0x14;
        temp_a2 = temp_a0_3 + &D_80A4D884;
        temp_a3 = temp_a0_3 + &D_80A4D894;
        temp_v1 = 1 << (temp_t0_2 & 0x1F);
        *temp_a2 |= temp_v1;
        *temp_a3 |= temp_v1;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a1->actor.cutscene);
}

void func_80A4CB7C(ObjFireshield *this, GlobalContext *globalCtx) {
    s32 sp18;
    s32 *temp_v0;
    s32 *temp_v0_2;
    s32 temp_a1;
    s32 temp_v1;
    s8 temp_a0;

    temp_a1 = this->unk194;
    temp_v1 = this->actor.params & 0x7F;
    if (temp_a1 > 0) {
        if (temp_a1 == 0x14) {
            temp_v0 = (((s32) (temp_v1 & ~0x1F) >> 5) * 4) + &D_80A4D884;
            *temp_v0 &= ~(1 << (temp_v1 & 0x1F));
        }
        this->unk194 += -1;
        return;
    }
    temp_a0 = this->actor.cutscene;
    this = this;
    sp18 = temp_v1;
    ActorCutscene_Stop((s16) temp_a0);
    temp_v0_2 = (((s32) (temp_v1 & ~0x1F) >> 5) * 4) + &D_80A4D894;
    this->actionFunc = func_80A4CD28;
    *temp_v0_2 &= ~(1 << (temp_v1 & 0x1F));
}

void func_80A4CC54(ObjFireshield *this, GlobalContext *globalCtx) {
    s32 *temp_a2;
    s32 *temp_a3;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = this->actor.params & 0x7F;
    temp_a1 = ((s32) (temp_v0 & ~0x1F) >> 5) * 4;
    this->actionFunc = func_80A4CCBC;
    temp_a2 = temp_a1 + &D_80A4D884;
    temp_a3 = temp_a1 + &D_80A4D894;
    temp_v1 = 1 << (temp_v0 & 0x1F);
    *temp_a2 |= temp_v1;
    *temp_a3 |= temp_v1;
}

void func_80A4CCBC(ObjFireshield *this, GlobalContext *globalCtx) {
    s32 *temp_a1;
    s32 *temp_a3;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = this->actor.params & 0x7F;
    temp_v1 = ((s32) (temp_v0 & ~0x1F) >> 5) * 4;
    this->actionFunc = func_80A4CD28;
    temp_a1 = temp_v1 + &D_80A4D884;
    temp_a3 = temp_v1 + &D_80A4D894;
    temp_a2 = ~(1 << (temp_v0 & 0x1F));
    *temp_a1 &= temp_a2;
    *temp_a3 &= temp_a2;
}

void func_80A4CD28(ObjFireshield *this, GlobalContext *globalCtx) {

}

void func_80A4CD34(ObjFireshield *arg0, GlobalContext *arg1) {
    u32 sp24;
    GlobalContext *temp_a2;
    s16 temp_v0;
    u32 phi_v1;
    u32 phi_a0;

    temp_a2 = arg1;
    arg1 = temp_a2;
    sp24 = Flags_GetSwitch(temp_a2, arg0->actor.params & 0x7F);
    if (arg0->unk1A8 == 0) {
        temp_v0 = arg0->actor.params;
        if ((((s32) temp_v0 >> 0xD) & 1) != 0) {
            phi_v1 = 0U;
            phi_a0 = 0U;
        } else {
            phi_v1 = Actor_GetChestFlag(arg1, ((s32) temp_v0 >> 8) & 0x1F);
            phi_a0 = 0U;
        }
    } else {
        phi_v1 = 0U;
        phi_a0 = Flags_GetSwitch(arg1, ((s32) arg0->actor.params >> 7) & 0x7F);
    }
    if ((phi_v1 != 0) || (phi_a0 != 0)) {
        arg0->unk19C = 0;
    } else if (sp24 != 0) {
        arg0->unk19C = 0;
    } else {
        arg0->unk19C = 1;
    }
    if (arg0->unk19C == 0) {
        arg0->unk198 = 0.0f;
        return;
    }
    arg0->unk198 = 1.0f;
}

void func_80A4CE28(ObjFireshield *arg0, GlobalContext *arg1) {
    s32 sp30;
    u32 sp24;
    u32 sp20;
    u32 sp1C;
    f32 *temp_a0;
    f32 *temp_a0_2;
    s16 temp_v0;
    s32 temp_lo;
    s32 temp_t9;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    u32 temp_v0_2;
    u32 phi_t0;
    u32 phi_t1;
    ObjFireshield *phi_a3;
    u32 phi_t0_2;
    u32 phi_t1_2;
    u32 phi_t2;
    s32 phi_v0;

    temp_v0 = arg0->actor.params;
    sp30 = temp_v0 & 0x7F;
    if (arg0->unk1A8 == 0) {
        if ((((s32) temp_v0 >> 0xD) & 1) != 0) {
            phi_t0 = 0U;
            phi_t1 = 0U;
        } else {
            arg0 = arg0;
            phi_t0 = Actor_GetChestFlag(arg1, ((s32) temp_v0 >> 8) & 0x1F);
            phi_t1 = 0U;
        }
    } else {
        arg0 = arg0;
        phi_t0 = 0U;
        phi_t1 = Flags_GetSwitch(arg1, ((s32) temp_v0 >> 7) & 0x7F);
    }
    if ((phi_t0 == 0) || (phi_t1 == 0) || (arg0->unk19C != 0)) {
        arg0 = arg0;
        sp24 = phi_t0;
        sp20 = phi_t1;
        temp_v0_2 = Flags_GetSwitch(arg1, sp30);
        temp_v1 = arg0->unk19C;
        phi_a3 = arg0;
        phi_t0_2 = phi_t0;
        phi_t1_2 = phi_t1;
        phi_t2 = temp_v0_2;
        if (temp_v1 == 2) {
            temp_a0 = arg0 + 0x198;
            arg0 = arg0;
            sp24 = phi_t0;
            sp20 = phi_t1;
            sp1C = temp_v0_2;
            phi_t2 = sp1C;
            if (Math_StepToF(temp_a0, 1.0f, 0.03f) != 0) {
                arg0->unk19C = 1;
                if (((arg0->actor.home.rot.z * 0xA) > 0) && (arg0->unk1A7 != 0)) {
                    arg0 = arg0;
                    sp24 = phi_t0;
                    sp20 = phi_t1;
                    Actor_UnsetSwitchFlag(arg1, sp30);
                    phi_t2 = 0U;
                }
            }
            phi_a3 = arg0;
            phi_t0_2 = phi_t0;
            phi_t1_2 = phi_t1;
        } else {
            temp_a0_2 = arg0 + 0x198;
            if (temp_v1 == 3) {
                arg0 = arg0;
                sp24 = phi_t0;
                sp20 = phi_t1;
                sp1C = temp_v0_2;
                phi_a3 = arg0;
                phi_t0_2 = phi_t0;
                phi_t1_2 = phi_t1;
                phi_t2 = temp_v0_2;
                if (Math_StepToF(temp_a0_2, 0.0f, 0.03f) != 0) {
                    arg0->unk19C = 0;
                }
            }
        }
        if ((phi_a3->unk1A0 > 0) && (phi_a3->unk19C == 1) && ((phi_a3->actor.home.rot.z * 0xA) > 0) && ((*(&D_80A4D894 + (((s32) (sp30 & ~0x1F) >> 5) * 4)) & (1 << (sp30 & 0x1F))) == 0)) {
            phi_a3->unk1A0 = 0;
        }
        if ((phi_a3->unk19C == 0) || (phi_a3->unk19C == 3)) {
            if ((phi_t0_2 == 0) && (phi_t1_2 == 0)) {
                if ((phi_a3->actor.home.rot.z * 0xA) > 0) {
                    temp_v0_4 = phi_a3->unk1A0;
                    temp_t9 = temp_v0_4 - 1;
                    phi_v0 = temp_v0_4;
                    if (temp_v0_4 >= 2) {
                        phi_a3->unk1A0 = temp_t9;
                        phi_v0 = temp_t9;
                    }
                    if (phi_v0 == 1) {
                        phi_a3->unk19C = 2;
                    }
                }
                if (phi_t2 == 0) {
                    phi_a3->unk19C = 2;
                    return;
                }
                /* Duplicate return node #48. Try simplifying control flow for better match */
                return;
            }
            /* Duplicate return node #48. Try simplifying control flow for better match */
            return;
        }
        if ((phi_t0_2 != 0) || (phi_t1_2 != 0)) {
            phi_a3->unk19C = 3;
            return;
        }
        if ((phi_t2 != 0) && ((phi_a3->unk19C == 1) || (phi_a3->unk19C == 2))) {
            temp_v1_2 = ((s32) (sp30 & ~0x1F) >> 5) * 4;
            temp_v0_3 = 1 << (sp30 & 0x1F);
            if (((*(&D_80A4D884 + temp_v1_2) & temp_v0_3) != 0) && ((*(&D_80A4D874 + temp_v1_2) & temp_v0_3) == 0)) {
                phi_a3->unk19C = 3;
                return;
            }
            temp_lo = phi_a3->actor.home.rot.z * 0xA;
            if ((temp_lo == 0) || (phi_a3->unk1A0 == 0)) {
                if (temp_lo > 0) {
                    phi_a3->unk1A0 = temp_lo;
                }
                if (phi_a3->unk1A7 != 0) {
                    func_80A4CA90(phi_a3);
                }
            }
            /* Duplicate return node #48. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #48. Try simplifying control flow for better match */
    }
}

void func_80A4D174(ObjFireshield *arg0) {
    s32 *temp_a1;
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = arg0->actor.params & 0x7F;
    temp_a1 = (((s32) (temp_v0 & ~0x1F) >> 5) * 4) + &D_80A4D864;
    temp_v1 = 1 << (temp_v0 & 0x1F);
    if ((*temp_a1 & temp_v1) == 0) {
        arg0->unk1A7 = 1;
        *temp_a1 |= temp_v1;
    }
}

void func_80A4D1CC(void) {
    D_80A4D864.unk0 = 0;
    D_80A4D864.unk4 = 0;
    D_80A4D864.unk8 = 0;
    D_80A4D864.unkC = 0;
}

void ObjFireshield_Init(ObjFireshield *this, GlobalContext *globalCtx) {
    void *sp2C;
    s32 sp28;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    ObjFireshield *this = (ObjFireshield *) thisx;

    sp2C = ((((s32) this->actor.params >> 0xE) & 3) * 8) + &D_80A4D84C;
    sp28 = this->actor.home.rot.x & 1;
    Actor_ProcessInitChain((Actor *) this, D_80A4D8A4);
    if (sp28 != 0) {
        this->actor.shape.rot.z = 0x8000;
    } else {
        this->actor.shape.rot.z = 0;
    }
    this->actor.world.rot.z = 0;
    this->actor.shape.rot.x = 0;
    this->actor.world.rot.x = 0;
    this->actor.scale.x = sp2C->unk0 * 0.0348f;
    this->actor.scale.z = this->actor.scale.x;
    this->actor.scale.y = 0.05f;
    this->actor.uncullZoneScale = sp2C->unk4;
    temp_a1 = &this->unk144;
    this->unk1A4 = (s16) (s32) (Rand_ZeroOne() * 128.0f);
    if ((this->actor.home.rot.z * 0xA) < 0) {
        this->unk1A8 = 1;
        this->actor.home.rot.z = (s16) -(s32) this->actor.home.rot.z;
    }
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80A4D820);
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    this->actor.colChkInfo.mass = 0xFF;
    this->unk144.dim.radius = (s16) (s32) ((f32) this->unk144.dim.radius * sp2C->unk0);
    func_80A4D174(this);
    func_80A4CD34(this, globalCtx);
    this->actionFunc = func_80A4CD28;
}

void ObjFireshield_Destroy(ObjFireshield *this, GlobalContext *globalCtx) {
    ObjFireshield *this = (ObjFireshield *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk144);
}

void ObjFireshield_Update(ObjFireshield *this, GlobalContext *globalCtx) {
    s32 sp44;
    s32 sp40;
    Actor *sp34;
    CollisionCheckContext *sp2C;
    ColliderCylinder *sp28;
    Actor *temp_v0_5;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    f32 temp_f0;
    s32 *temp_v0_2;
    s32 *temp_v0_3;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    u8 temp_v0_4;
    f32 phi_f2;
    ObjFireshield *this = (ObjFireshield *) thisx;

    sp44 = this->actor.home.rot.x & 1;
    temp_v0 = this->actor.params & 0x7F;
    sp40 = temp_v0;
    func_80A4D1CC();
    if (this->unk1A7 != 0) {
        temp_a0 = ((s32) (temp_v0 & ~0x1F) >> 5) * 4;
        temp_v1 = 1 << (temp_v0 & 0x1F);
        if ((*(&D_80A4D884 + temp_a0) & temp_v1) != 0) {
            temp_v0_2 = temp_a0 + &D_80A4D874;
            *temp_v0_2 |= temp_v1;
        } else {
            temp_v0_3 = temp_a0 + &D_80A4D874;
            *temp_v0_3 &= ~temp_v1;
        }
    }
    this->unk1A4 += 1;
    this->actionFunc(this, MIPS2C_ERROR(Read from unset register $a1));
    if (func_80A4CABC == this->actionFunc) {
        this->unk144.base.atFlags &= 0xFFFD;
    } else {
        temp_v0_4 = this->unk144.base.atFlags;
        if ((temp_v0_4 & 2) != 0) {
            this->unk144.base.atFlags = temp_v0_4 & 0xFFFD;
            func_800B8D98(globalCtx, (Actor *) this, 5.0f, this->actor.yawTowardsPlayer, 1.0f);
        }
    }
    func_80A4CE28(this, globalCtx);
    if (sp44 != 0) {
        phi_f2 = 144.0f;
    } else {
        phi_f2 = -144.0f;
    }
    temp_f0 = this->unk198;
    this->actor.world.pos.y = (phi_f2 * (1.0f - this->unk198)) + this->actor.home.pos.y;
    this->unk1A6 = (u8) (u32) (temp_f0 * 255.0f);
    if (temp_f0 >= 0.7f) {
        temp_v0_5 = globalCtx->actorCtx.actorList[2].first;
        this->unk144.dim.height = (s16) (s32) (temp_f0 * 80.0f);
        if (sp44 != 0) {
            this->unk144.dim.yShift = (s32) (this->actor.home.pos.y - this->actor.world.pos.y) - this->unk144.dim.height;
        } else {
            this->unk144.dim.yShift = (s16) (s32) (this->actor.home.pos.y - this->actor.world.pos.y);
        }
        sp34 = temp_v0_5;
        func_800B9010((Actor *) this, 0x20B3U);
        temp_a1 = &this->unk144;
        if (temp_v0_5->unk14B == 1) {
            this->unk144.info.toucher.damage = 0;
            this->unk144.info.toucher.effect = 0;
        } else {
            this->unk144.info.toucher.damage = 4;
            this->unk144.info.toucher.effect = 1;
        }
        sp28 = temp_a1;
        Collider_UpdateCylinder((Actor *) this, temp_a1);
        temp_a1_2 = &globalCtx->colChkCtx;
        sp2C = temp_a1_2;
        CollisionCheck_SetAT(globalCtx, temp_a1_2, (Collider *) sp28);
        CollisionCheck_SetOC(globalCtx, temp_a1_2, (Collider *) sp28);
    }
}

void ObjFireshield_Draw(ObjFireshield *this, GlobalContext *globalCtx) {
    Gfx *sp48;
    Gfx *sp44;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s16 temp_v1;
    ObjFireshield *this = (ObjFireshield *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xFA008080;
    temp_v0->words.w1 = this->unk1A6 | 0xFFDC0000;
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0xFF000000;
    temp_v0_2->words.w0 = 0xFB000000;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060020;
    temp_v1 = this->unk1A4;
    sp48 = temp_v0_3;
    sp48->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, temp_v1 & 0x7F, 0U, 0x20, 0x40, 1, 0U, ((s32) temp_v1 * -0xF) & 0xFF, 0x20, 0x40);
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDA380003;
    sp44 = temp_v0_4;
    sp44->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) D_0402E510;
    temp_v0_5->words.w0 = 0xDE000000;
}
