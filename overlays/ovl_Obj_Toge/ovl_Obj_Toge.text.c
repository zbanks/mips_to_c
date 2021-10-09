typedef struct ObjToge {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk144;            /* inferred */
    /* 0x190 */ void (*actionFunc)(ObjToge *, GlobalContext *);
    /* 0x194 */ s32 unk194;                         /* inferred */
    /* 0x198 */ Vec3f unk198;                       /* inferred */
    /* 0x1A4 */ Vec3f unk1A4;                       /* inferred */
    /* 0x1B0 */ s16 unk1B0;                         /* inferred */
    /* 0x1B2 */ s16 unk1B2;                         /* inferred */
    /* 0x1B4 */ u8 unk1B4;                          /* inferred */
    /* 0x1B5 */ char pad1B5[0x3];                   /* maybe part of unk1B4[4]? */
    /* 0x1B8 */ f32 unk1B8;                         /* inferred */
    /* 0x1BC */ f32 unk1BC;                         /* inferred */
    /* 0x1C0 */ f32 unk1C0;                         /* inferred */
    /* 0x1C4 */ f32 unk1C4;                         /* inferred */
    /* 0x1C8 */ f32 unk1C8;                         /* inferred */
    /* 0x1CC */ f32 unk1CC;                         /* inferred */
} ObjToge;                                          /* size = 0x1D0 */

struct _mips2c_stack_ObjToge_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjToge_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjToge_Init {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ Vec3f *sp2C;                         /* inferred */
    /* 0x30 */ f32 *sp30;                           /* inferred */
    /* 0x34 */ char pad34[0x2];
    /* 0x36 */ s16 sp36;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad3C[0x2];
    /* 0x3E */ s16 sp3E;                            /* inferred */
    /* 0x40 */ void *sp40;                          /* inferred */
    /* 0x44 */ char pad44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_ObjToge_Update {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809A41C0 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809A42A0 {
    /* 0x00 */ char pad0[0x54];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_809A43A8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A43EC {
    /* 0x00 */ char pad0[0x4];
    /* 0x04 */ f32 sp4;                             /* inferred */
    /* 0x08 */ char pad8[0x10];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A4744 {};              /* size 0x0 */

struct _mips2c_stack_func_809A477C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A4804 {};              /* size 0x0 */

struct _mips2c_stack_func_809A481C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A488C {};              /* size 0x0 */

struct _mips2c_stack_func_809A48AC {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ PosRot *sp28;                        /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

? func_800B2B44(s32, void *, f32 *, f32);           /* extern */
? func_800B8DD4(GlobalContext *, ObjToge *, f32, s16, f32, s32); /* extern */
void func_809A41C0(void *arg0, s32 arg1);           /* static */
void func_809A42A0(void *arg0, s32 arg1);           /* static */
void func_809A43A8(ObjToge *arg0, GlobalContext *); /* static */
s32 func_809A43EC(void *arg0, void *arg1);          /* static */
void func_809A4744(ObjToge *arg0);                  /* static */
void func_809A4804(ObjToge *arg0);                  /* static */
void func_809A488C(void *arg0);                     /* static */
extern Gfx D_06001400;
static ColliderCylinderInit D_809A4CB0 = {
    {9, 0, 0xD, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0x1C37BB6, 0, 0}, 0, 1, 1},
    {0x1E, 0x14, 0, {0, 0, 0}},
};
static ? D_809A4CDC;                                /* unable to generate initializer */
static ? D_809A4CFC;                                /* unable to generate initializer */
static ? D_809A4D0C;                                /* unable to generate initializer */
static ? D_809A4D10;                                /* unable to generate initializer */
static InitChainEntry D_809A4D14[7];                /* unable to generate initializer */

void func_809A41C0(void *arg0, s32 arg1) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 *temp_a2;
    void *temp_a1;

    temp_a1 = arg0;
    sp1C.unk0 = temp_a1->unk24;
    sp1C.unk4 = (s32) temp_a1->unk28;
    sp1C.unk8 = (s32) temp_a1->unk2C;
    arg0 = temp_a1;
    sp20 += 10.0f;
    sp24 += 10.0f;
    func_800B2B44(arg1, temp_a1, &sp1C, 1.8f);
    sp1C += 10.0f;
    sp24 -= 20.0f;
    func_800B2B44(arg1, arg0, &sp1C, 1.8f);
    temp_a2 = &sp1C;
    sp1C -= 20.0f;
    func_800B2B44(arg1, arg0, temp_a2, 1.8f);
}

void func_809A42A0(void *arg0, s32 arg1) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 *temp_s3;
    s32 temp_s2;
    s16 phi_s0;
    s32 phi_s2;

    sp58 = arg0->unk28 + 15.0f;
    temp_s3 = &sp54;
    phi_s0 = 0;
    phi_s2 = 0;
    do {
        sp54 = (Math_SinS(phi_s0) * 15.0f) + arg0->unk24;
        sp5C = (Math_CosS(phi_s0) * 15.0f) + arg0->unk2C;
        func_800B2B44(arg1, arg0, temp_s3, (Rand_ZeroOne() * 0.6f) + 2.8f);
        temp_s2 = phi_s2 + 1;
        phi_s0 = (s16) (phi_s0 + 0x3333);
        phi_s2 = temp_s2;
    } while (temp_s2 != 5);
}

void func_809A43A8(ObjToge *arg0) {
    if ((((s32) arg0->actor.params >> 0xE) & 1) == 0) {
        func_809A41C0();
        return;
    }
    func_809A42A0();
}

s32 func_809A43EC(void *arg0, void *arg1) {
    f32 sp4;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f4;
    void *temp_v1;
    s32 phi_v0;
    s32 phi_v0_2;

    temp_v1 = arg1->unk1CCC;
    temp_f18 = arg0->unk1C8;
    temp_f2 = temp_v1->unk24 - arg0->unk1B8;
    temp_f16 = arg0->unk1CC;
    temp_f12 = temp_v1->unk2C - arg0->unk1BC;
    temp_f0 = fabsf((temp_f2 * temp_f18) - (temp_f16 * temp_f12));
    temp_f4 = (temp_f16 * temp_f2) + (temp_f12 * temp_f18);
    sp4 = temp_f4;
    phi_v0 = 0;
    phi_v0_2 = 0;
    if (temp_f0 <= arg0->unk1C0) {
        phi_v0 = 1;
    }
    phi_v0_2 = phi_v0;
    if ((phi_v0 != 0) && (fabsf(temp_f4) <= arg0->unk1C4)) {
        phi_v0_2 = 1;
    }
    return phi_v0_2;
}

void ObjToge_Init(ObjToge *this, GlobalContext *globalCtx) {
    void *sp40;
    s16 sp3E;
    s32 sp38;
    s16 sp36;
    f32 *sp30;
    Vec3f *sp2C;
    ColliderCylinder *sp28;
    Vec3f *sp24;
    ColliderCylinder *temp_a1;
    Path *temp_v0_3;
    Vec3f *temp_a0;
    Vec3f *temp_a0_2;
    f32 *temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_5;
    s32 temp_a0_3;
    s32 temp_v1;
    void *temp_v0_4;
    ObjToge *this = (ObjToge *) thisx;

    sp38 = ((s32) this->actor.params >> 0xE) & 1;
    Actor_ProcessInitChain((Actor *) this, D_809A4D14);
    temp_v0 = (sp38 * 4) + &D_809A4D0C;
    sp30 = temp_v0;
    Actor_SetScale((Actor *) this, *temp_v0 * 0.1f);
    temp_a1 = &this->unk144;
    sp3E = this->actor.home.rot.z;
    this->actor.shape.rot.z = 0;
    temp_v0_2 = this->actor.shape.rot.z;
    this->actor.world.rot.z = temp_v0_2;
    this->actor.home.rot.z = temp_v0_2;
    sp28 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    temp_v1 = this->actor.params & 0xFF;
    if (temp_v1 == 0xFF) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_v0_3 = &globalCtx->setupPathList[temp_v1];
    if (temp_v0_3->count != 2) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_v0_4 = Lib_SegmentedToVirtual((void *) temp_v0_3->points);
    temp_a0 = &this->unk198;
    sp40 = temp_v0_4;
    sp2C = temp_a0;
    Math_Vec3s_ToVec3f(temp_a0, (Vec3s *) temp_v0_4);
    temp_a0_2 = &this->unk1A4;
    sp24 = temp_a0_2;
    Math_Vec3s_ToVec3f(temp_a0_2, sp40 + 6);
    Math_Vec3f_Copy((Vec3f *) &this->actor.world, sp2C);
    this->actor.world.rot.y = Math_Vec3f_Yaw(temp_a0, sp24);
    this->unk194 = 0;
    this->actor.speedXZ = 0.0f;
    if ((s32) sp3E > 0) {
        this->unk1B4 = 1;
        this->unk1B8 = (this->unk1A4.x + this->unk198.x) * 0.5f;
        this->unk1BC = (this->unk1A4.z + this->unk198.z) * 0.5f;
        temp_v0_5 = Math_Vec3f_Yaw(sp2C, sp24);
        temp_a0_3 = temp_v0_5 << 0x10;
        sp36 = temp_v0_5;
        this->unk1C8 = Math_CosS((s16) (temp_a0_3 >> 0x10));
        this->unk1CC = Math_SinS(sp36);
        this->unk1C0 = (f32) sp3E * 7.5f;
        this->unk1C4 = Math3D_Distance(sp2C, sp24) * 0.5f;
    } else {
        this->unk1B4 = 0;
    }
    Collider_SetCylinder(globalCtx, sp28, (Actor *) this, &D_809A4CB0);
    Collider_UpdateCylinder((Actor *) this, sp28);
    this->actor.colChkInfo.mass = 0xFF;
    if (sp30 == &D_809A4D10) {
        this->unk144.dim.radius = 0x3C;
        this->unk144.dim.height = 0x28;
    }
    if (this->unk1B4 != 0) {
        func_809A4804(this);
        return;
    }
    func_809A4744(this);
}

void ObjToge_Destroy(ObjToge *this, GlobalContext *globalCtx) {
    ObjToge *this = (ObjToge *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk144);
}

void func_809A4744(ObjToge *arg0) {
    arg0->actionFunc = func_809A477C;
    arg0->unk1B0 = 0;
    arg0->unk1B2 = *(&D_809A4CFC + ((((s32) arg0->actor.params >> 0xB) & 7) * 2));
}

void func_809A477C(ObjToge *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = this->unk1B2;
    if ((s32) temp_v0 > 0) {
        this->unk1B2 = temp_v0 - 1;
    }
    temp_v0_2 = this->unk1B0;
    if ((s32) temp_v0_2 >= 0x1770) {
        this->unk1B0 = 0x1770;
        func_809A488C();
    } else if (((s32) temp_v0_2 > 0) || ((s32) this->unk1B2 <= 0)) {
        this->unk1B0 = temp_v0_2 + 0xC8;
    }
    if (this->unk1B4 == 0) {
        this->actor.shape.rot.y += this->unk1B0;
    }
}

void func_809A4804(ObjToge *arg0) {
    arg0->actionFunc = func_809A481C;
    arg0->unk1B0 = 0;
}

void func_809A481C(ObjToge *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 phi_v0;
    ObjToge *phi_a0;

    temp_v0 = this->unk1B0;
    phi_v0 = temp_v0;
    if ((s32) temp_v0 >= 0x1770) {
        this->unk1B0 = 0x1770;
        func_809A488C();
        phi_a0 = this;
    } else if ((s32) temp_v0 <= 0) {
        phi_a0 = this;
        if (func_809A43EC() != 0) {
            phi_v0 = this->unk1B0;
            goto block_5;
        }
    } else {
block_5:
        this->unk1B0 = phi_v0 + 0xC8;
        phi_a0 = this;
    }
    phi_a0->actor.shape.rot.y += phi_a0->unk1B0;
}

void func_809A488C(void *arg0) {
    arg0->unk190 = func_809A48AC;
    arg0->unk70 = 1.0f;
}

void func_809A48AC(ObjToge *this, GlobalContext *globalCtx) {
    s32 sp30;
    PosRot *sp28;
    PosRot *temp_a0;
    s16 temp_v1;
    s32 temp_v0;
    s32 phi_v1;

    temp_v0 = this->unk194;
    sp30 = temp_v0 ^ 1;
    if ((this->unk1B4 != 0) && (temp_v0 == 1)) {
        Math_StepToF(&this->actor.speedXZ, 2.0f, 0.4f);
    } else {
        Math_StepToF(&this->actor.speedXZ, *(&D_809A4CDC + ((((s32) this->actor.params >> 8) & 7) * 4)), 1.5f);
        this->actor.shape.rot.y += 0x1770;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, *(&D_809A4D0C + ((((s32) this->actor.params >> 0xE) & 1) * 4)) * 30.0f, 0.0f, 0x81U);
    if ((this->actor.bgCheckFlags & 8) != 0) {
        this->actor.world.rot.y = Math_Vec3f_Yaw((Vec3f *) &this->actor.world, this + (this->unk194 * 0xC) + 0x198);
        this->unk194 = sp30;
        if ((this->unk1B4 != 0) && (sp30 == 0)) {
            func_809A4804(this);
        } else {
            func_809A4744(this);
        }
        Audio_PlayActorSound2((Actor *) this, 0x287DU);
        return;
    }
    temp_a0 = &this->actor.world;
    sp28 = temp_a0;
    temp_v1 = Math_Vec3f_Yaw((Vec3f *) temp_a0, this + (sp30 * 0xC) + 0x198) - this->actor.world.rot.y;
    phi_v1 = (s32) temp_v1;
    if ((s32) temp_v1 < 0) {
        phi_v1 = (s32) (s16) ((s32) temp_v1 * -1);
    }
    if ((phi_v1 >= 0x4001) || (phi_v1 == -0x8000)) {
        this->actor.world.rot.y = Math_Vec3f_Yaw((Vec3f *) temp_a0, this + (this->unk194 * 0xC) + 0x198);
        this->unk194 = sp30;
        if ((this->unk1B4 != 0) && (sp30 == 0)) {
            func_809A4804(this);
        } else {
            func_809A4744(this);
        }
        Audio_PlayActorSound2((Actor *) this, 0x287DU);
    }
}

void ObjToge_Update(ObjToge *this, GlobalContext *globalCtx) {
    ColliderCylinder *temp_s1;
    ColliderCylinder *temp_s1_2;
    ObjToge *this = (ObjToge *) thisx;

    if ((this->unk144.base.acFlags & 2) != 0) {
        if ((this->unk144.info.acHitInfo->toucher.dmgFlags & 0x1000) != 0) {
            func_809A43A8(this, globalCtx);
            func_800BCB70((Actor *) this, 0, 0xFA, 0, (s16) 0xFA);
        }
        temp_s1 = &this->unk144;
        temp_s1->base.acFlags &= 0xFFFD;
    }
    if (this->actor.colorFilterTimer == 0) {
        temp_s1_2 = &this->unk144;
        if ((this->unk144.base.ocFlags2 & 1) != 0) {
            func_800B8DD4(globalCtx, this, 6.0f, this->actor.yawTowardsPlayer, 6.0f, 4);
        }
        this->actionFunc(this, globalCtx);
        Collider_UpdateCylinder((Actor *) this, temp_s1_2);
        if (this->actor.xzDistToPlayer < 1000.0f) {
            CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_s1_2);
        }
    }
    if (((this->actor.flags & 0x40) != 0) || (this->actor.xzDistToPlayer < 300.0f)) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk144);
        return;
    }
    this->unk144.base.ocFlags1 &= 0xFFFD;
    this->unk144.base.ocFlags2 &= 0xFFFE;
}

void ObjToge_Draw(ObjToge *this, GlobalContext *globalCtx) {
    ObjToge *this = (ObjToge *) thisx;
    func_800B8050((Actor *) this, globalCtx, 1);
    func_800BDFC0(globalCtx, &D_06001400);
}
