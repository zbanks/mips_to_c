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
static InitChainEntry D_809A4D14;                   /* unable to generate initializer */

typedef struct ObjToge {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderCylinder unk144;           /* inferred */
    /* 0x0190 */ void (*actionFunc)(ObjToge *, GlobalContext *);
    /* 0x0194 */ s32 unk194;                        /* inferred */
    /* 0x0198 */ Vec3f unk198;                      /* inferred */
    /* 0x01A4 */ Vec3f unk1A4;                      /* inferred */
    /* 0x01B0 */ s16 unk1B0;                        /* inferred */
    /* 0x01B2 */ s16 unk1B2;                        /* inferred */
    /* 0x01B4 */ u8 unk1B4;                         /* inferred */
    /* 0x01B5 */ char pad1B5[0x3];                  /* maybe part of unk1B4[4]? */
    /* 0x01B8 */ f32 unk1B8;                        /* inferred */
    /* 0x01BC */ f32 unk1BC;                        /* inferred */
    /* 0x01C0 */ f32 unk1C0;                        /* inferred */
    /* 0x01C4 */ f32 unk1C4;                        /* inferred */
    /* 0x01C8 */ f32 unk1C8;                        /* inferred */
    /* 0x01CC */ f32 unk1CC;                        /* inferred */
} ObjToge;                                          /* size 0x1D0 */

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

void ObjToge_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjToge *this = (ObjToge *) thisx;
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

    sp38 = ((s32) this->actor.params >> 0xE) & 1;
    Actor_ProcessInitChain(&this->actor, &D_809A4D14);
    temp_v0 = (sp38 * 4) + &D_809A4D0C;
    sp30 = temp_v0;
    Actor_SetScale(&this->actor, *temp_v0 * 0.1f);
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
        Actor_MarkForDeath(&this->actor);
        return;
    }
    temp_v0_3 = &globalCtx->setupPathList[temp_v1];
    if (temp_v0_3->count != 2) {
        Actor_MarkForDeath(&this->actor);
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
    Math_Vec3f_Copy(&this->actor.world.pos, sp2C);
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
    Collider_SetCylinder(globalCtx, sp28, &this->actor, &D_809A4CB0);
    Collider_UpdateCylinder(&this->actor, sp28);
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

void ObjToge_Destroy(Actor *thisx, GlobalContext *globalCtx) {
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
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 10.0f, *(&D_809A4D0C + ((((s32) this->actor.params >> 0xE) & 1) * 4)) * 30.0f, 0.0f, 0x81U);
    if ((this->actor.bgCheckFlags & 8) != 0) {
        this->actor.world.rot.y = Math_Vec3f_Yaw(&this->actor.world.pos, this + (this->unk194 * 0xC) + 0x198);
        this->unk194 = sp30;
        if ((this->unk1B4 != 0) && (sp30 == 0)) {
            func_809A4804(this);
        } else {
            func_809A4744(this);
        }
        Audio_PlayActorSound2(&this->actor, 0x287DU);
        return;
    }
    temp_a0 = &this->actor.world;
    sp28 = temp_a0;
    temp_v1 = Math_Vec3f_Yaw(&temp_a0->pos, this + (sp30 * 0xC) + 0x198) - this->actor.world.rot.y;
    phi_v1 = (s32) temp_v1;
    if ((s32) temp_v1 < 0) {
        phi_v1 = (s32) (s16) ((s32) temp_v1 * -1);
    }
    if ((phi_v1 >= 0x4001) || (phi_v1 == -0x8000)) {
        this->actor.world.rot.y = Math_Vec3f_Yaw(&temp_a0->pos, this + (this->unk194 * 0xC) + 0x198);
        this->unk194 = sp30;
        if ((this->unk1B4 != 0) && (sp30 == 0)) {
            func_809A4804(this);
        } else {
            func_809A4744(this);
        }
        Audio_PlayActorSound2(&this->actor, 0x287DU);
    }
}

void ObjToge_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjToge *this = (ObjToge *) thisx;
    ColliderCylinder *temp_s1;
    ColliderCylinder *temp_s1_2;

    if ((this->unk144.base.acFlags & 2) != 0) {
        if ((this->unk144.info.acHitInfo->toucher.dmgFlags & 0x1000) != 0) {
            func_809A43A8(this, globalCtx);
            func_800BCB70(&this->actor, 0, 0xFA, 0, (s16) 0xFA);
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
        Collider_UpdateCylinder(&this->actor, temp_s1_2);
        if (this->actor.xzDistToPlayer < 1000.0f) {
            CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &temp_s1_2->base);
        }
    }
    if (((this->actor.flags & 0x40) != 0) || (this->actor.xzDistToPlayer < 300.0f)) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->unk144.base);
        return;
    }
    this->unk144.base.ocFlags1 &= 0xFFFD;
    this->unk144.base.ocFlags2 &= 0xFFFE;
}

void ObjToge_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjToge *this = (ObjToge *) thisx;
    func_800B8050(&this->actor, globalCtx, 1);
    func_800BDFC0(globalCtx, &D_06001400);
}

