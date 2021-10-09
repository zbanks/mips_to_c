s32 func_800C56E0(s32, f32 *, Vec3f *, Vec3f *, s32, s32, s32, s32, s32, s32, Actor *, f32); /* extern */
void func_80A3C4E0(f32 *arg0, f32 *arg1, s16 arg2); /* static */
void func_80A3C560(ObjVspinyroll *arg0);            /* static */
void func_80A3C658(void *arg0);                     /* static */
void func_80A3C6A0(ObjVspinyroll *arg0);            /* static */
void func_80A3C6CC(ObjVspinyroll *arg0);            /* static */
s32 func_80A3C700(ObjVspinyroll *arg0);             /* static */
void func_80A3C7E8(ObjVspinyroll *arg0);            /* static */
s32 func_80A3C8D8(Actor *arg0, GlobalContext *arg1, Vec3f *arg2, s32 arg3); /* static */
s32 func_80A3CB94(ObjVspinyroll *arg0, GlobalContext *arg2, ?); /* static */
DynaPolyActor *func_80A3CBF0(ObjVspinyroll *arg0, GlobalContext *arg1); /* static */
s32 func_80A3CC30(ObjVspinyroll *, GlobalContext *); /* static */
void func_80A3CC84(f32 arg0, Gfx *);                /* static */
void func_80A3CEC4(ObjVspinyroll *arg0);            /* static */
void func_80A3CF10(ObjVspinyroll *arg0);            /* static */
void func_80A3CFAC(ObjVspinyroll *arg0);            /* static */
void func_80A3D024(ObjVspinyroll *arg0);            /* static */
void func_80A3D0E8(ObjVspinyroll *arg0);            /* static */
void func_80A3D2C0(Actor *this, GlobalContext *globalCtx); /* static */
extern Gfx D_06000460;
extern CollisionHeader D_06000F80;
static ? D_80A3D450;                                /* unable to generate initializer */
static ? D_80A3D454;                                /* unable to generate initializer */
static ? D_80A3D458;                                /* unable to generate initializer */
static ? D_80A3D478;                                /* unable to generate initializer */
static ColliderCylinderInit D_80A3D488 = {
    {9, 0x11, 0xD, 0, 0, 1},
    {0, {0x20000000, 0, 4}, {0x1C37BB6, 0, 0}, 1, 1, 0},
    {0x1E, 0x78, 0, {0, 0, 0}},
};
static ? D_80A3D4B4;                                /* unable to generate initializer */
static ? D_80A3D4C4;                                /* unable to generate initializer */
static InitChainEntry D_80A3D4D4;                   /* unable to generate initializer */
static ? D_80A3D4DC;                                /* unable to generate initializer */

typedef struct ObjVspinyroll {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ ColliderCylinder unk15C;           /* inferred */
    /* 0x01A8 */ f32 unk1A8;                        /* inferred */
    /* 0x01AC */ f32 unk1AC;                        /* inferred */
    /* 0x01B0 */ f32 unk1B0;                        /* inferred */
    /* 0x01B4 */ char pad1B4[0x1D4];                /* maybe part of unk1B0[118]? */
    /* 0x0388 */ void *unk388;                      /* inferred */
    /* 0x038C */ s32 unk38C;                        /* inferred */
    /* 0x0390 */ void (*actionFunc)(ObjVspinyroll *, GlobalContext *);
    /* 0x0394 */ f32 unk394;                        /* inferred */
    /* 0x0398 */ s32 unk398;                        /* inferred */
    /* 0x039C */ Vec3f unk39C;                      /* inferred */
    /* 0x03A8 */ Vec3f unk3A8;                      /* inferred */
    /* 0x03B4 */ f32 unk3B4;                        /* inferred */
    /* 0x03B8 */ f32 unk3B8;                        /* inferred */
    /* 0x03BC */ f32 unk3BC;                        /* inferred */
    /* 0x03C0 */ s16 unk3C0;                        /* inferred */
    /* 0x03C2 */ s16 unk3C2;                        /* inferred */
    /* 0x03C4 */ s16 unk3C4;                        /* inferred */
    /* 0x03C6 */ s16 unk3C6;                        /* inferred */
    /* 0x03C8 */ s16 unk3C8;                        /* inferred */
    /* 0x03CA */ char pad3CA[0x2];                  /* maybe part of unk3C8[2]? */
} ObjVspinyroll;                                    /* size 0x3CC */

void func_80A3C4E0(f32 *arg0, f32 *arg1, s16 arg2) {
    f32 sp1C;
    f32 temp_f0;

    sp1C = Math_SinS(arg2);
    temp_f0 = Math_CosS(arg2);
    arg0->unk0 = (arg1->unk8 * sp1C) + (arg1->unk0 * temp_f0);
    arg0->unk4 = (f32) arg1->unk4;
    arg0->unk8 = (f32) ((arg1->unk8 * temp_f0) - (arg1->unk0 * sp1C));
}

void func_80A3C560(ObjVspinyroll *arg0) {
    Vec3f *sp20;
    ObjVspinyroll *temp_a3;
    Vec3f *temp_a0;
    Vec3f *temp_a2;
    Vec3f *temp_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 phi_f2;

    temp_a3 = arg0;
    temp_s0 = temp_a3 + 0x3B4;
    temp_a2 = temp_s0;
    temp_a0 = temp_a3 + ((temp_a3->unk398 ^ 1) * 0xC) + 0x39C;
    sp20 = temp_a0;
    arg0 = temp_a3;
    Math_Vec3f_Diff(temp_a0, temp_a3 + 0x24, temp_a2);
    temp_f0 = Math3D_Vec3fMagnitude(temp_s0);
    phi_f2 = temp_f0;
    if ((temp_f0 < 0.01f) && (Math_Vec3f_Diff(sp20, arg0 + (arg0->unk398 * 0xC) + 0x39C, temp_s0), temp_f0_2 = Math3D_Vec3fMagnitude(temp_s0), phi_f2 = temp_f0_2, (temp_f0_2 < 0.01f))) {
        Math_Vec3f_Copy(temp_s0, &D_801D15B0);
        return;
    }
    Math_Vec3f_Scale(temp_s0, 1.0f / phi_f2);
}

void func_80A3C658(void *arg0) {
    s32 temp_t6;
    void *temp_a2;

    temp_a2 = arg0;
    temp_t6 = temp_a2->unk398;
    arg0 = temp_a2;
    arg0->unk32 = Math_Vec3f_Yaw(temp_a2 + 0x24, temp_a2 + ((temp_t6 ^ 1) * 0xC) + 0x39C);
}

void func_80A3C6A0(ObjVspinyroll *arg0) {
    arg0->unk398 = 0;
    func_80A3C658();
    func_80A3C560(arg0);
}

void func_80A3C6CC(ObjVspinyroll *arg0) {
    arg0->unk398 ^= 1;
    func_80A3C658();
    func_80A3C560(arg0);
}

s32 func_80A3C700(ObjVspinyroll *arg0) {
    s32 sp30;
    Vec3f sp24;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 phi_v0;

    sp30 = arg0->unk398 ^ 1;
    temp_f0 = arg0->unk394;
    Math_StepToF(arg0 + 0x70, temp_f0, temp_f0 * 0.2f);
    temp_f2 = arg0->actor.speedXZ;
    arg0->actor.world.pos.x += temp_f2 * arg0->unk3B4;
    arg0->actor.world.pos.y += temp_f2 * arg0->unk3B8;
    arg0->actor.world.pos.z += temp_f2 * arg0->unk3BC;
    Math_Vec3f_Diff(arg0 + (sp30 * 0xC) + 0x39C, arg0 + 0x24, &sp24);
    temp_f2_2 = arg0->actor.speedXZ;
    phi_v0 = 0;
    if (Math3D_LengthSquared(&sp24) < ((temp_f2_2 * temp_f2_2) + 0.05f)) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_80A3C7E8(ObjVspinyroll *arg0) {
    f32 *temp_v1;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1_2;
    f32 phi_f2;
    ObjVspinyroll *phi_v0;
    s32 phi_a3;
    s32 phi_a2;

    temp_v1 = ((((s32) arg0->actor.params >> 0xE) & 1) * 4) + &D_80A3D450;
    temp_v0 = (s32) (*temp_v1 * 120.0f * 0.01724138f) + 2;
    temp_a1 = temp_v0 * 4;
    arg0->unk38C = temp_a1;
    phi_f2 = 1.0f;
    phi_v0 = arg0;
    phi_a3 = 0;
    phi_a2 = 0;
    phi_a3 = 0;
    if (temp_a1 > 0) {
        do {
            temp_v1_2 = phi_a3 * 4;
            phi_v0->unk1AC = phi_f2;
            phi_v0->unk1A8 = *(&D_80A3D4C4 + temp_v1_2);
            temp_a3 = phi_a3 + 1;
            phi_v0->unk1B0 = *(&D_80A3D4B4 + temp_v1_2);
            phi_a3 = temp_a3;
            if (temp_a3 >= 4) {
                phi_f2 += ((*temp_v1 * 120.0f) - 2.0f) / (f32) (temp_v0 - 1);
            }
            temp_a2 = phi_a2 + 1;
            phi_v0 += 0x14;
            phi_a2 = temp_a2;
        } while (temp_a2 < arg0->unk38C);
    }
}

s32 func_80A3C8D8(Actor *arg0, GlobalContext *arg1, Vec3f *arg2, s32 arg3) {
    void *spF8;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    Vec3f spCC;
    Vec3f spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    s32 sp9C;
    void *sp98;
    s32 sp94;
    Vec3f *temp_a2;
    Vec3f *temp_s6;
    f32 *temp_a1;
    f32 *temp_a1_2;
    f32 *temp_a1_3;
    f32 *temp_a2_2;
    f32 *temp_s2;
    f32 temp_f0;
    f32 temp_f20;
    s32 temp_s3;
    void *temp_v0;
    void *phi_s1;
    s32 phi_s4;
    s32 phi_s5;
    f32 phi_f20;
    s32 phi_s3;

    temp_v0 = arg0 + 0x1A8;
    spF8 = temp_v0;
    spEC = 0.0f;
    sp9C = 0;
    arg0->unk388 = 0;
    phi_f20 = 3.4028235e38f;
    phi_s3 = 0;
    if (arg0->unk38C > 0) {
        sp94 = arg1 + 0x830;
        sp98 = temp_v0;
        temp_s6 = &spCC;
        temp_s2 = &spD8;
        phi_s1 = temp_v0;
        phi_s4 = temp_v0 + 0xC;
        phi_s5 = temp_v0 + 0x10;
        do {
            temp_a1 = &spE4;
            spE4 = phi_s1->unk0;
            spE8 = phi_s1->unk4;
            func_80A3C4E0(temp_s2, temp_a1, arg0->world.rot.y);
            temp_a1_2 = temp_s2;
            spD8 += arg0->world.pos.x;
            spDC += arg0->world.pos.y;
            spE0 += arg0->world.pos.z;
            Math_Vec3f_Copy(temp_s6, (Vec3f *) temp_a1_2);
            temp_a2 = temp_s6;
            spCC.x += 30.0f * arg0->unk3B4;
            spCC.z += 30.0f * arg0->unk3BC;
            if (func_800C56E0(sp94, temp_s2, temp_a2, &spC0, phi_s4, 1, 0, 0, 1, phi_s5, arg0, 0.0f) != 0) {
                if ((arg3 != 0) && ((arg0->flags & 0x40) != 0)) {
                    temp_a1_3 = &spA8;
                    spA8 = phi_s1->unk0 * 0.2f;
                    spB0 = 20.0f;
                    spAC = phi_s1->unk4;
                    func_80A3C4E0(&spB4, temp_a1_3, arg0->world.rot.y);
                    temp_a2_2 = &spB4;
                    spB4 += arg0->world.pos.x;
                    spB8 += arg0->world.pos.y;
                    spBC += arg0->world.pos.z;
                    EffectSsHitMark_SpawnFixedScale(arg1, 3, (Vec3f *) temp_a2_2);
                    Audio_PlayActorSound2(arg0, 0x1808U);
                }
                temp_f0 = Math3D_DistanceSquared((Vec3f *) temp_s2, &spC0);
                if (temp_f0 < phi_f20) {
                    temp_f20 = temp_f0;
                    sp9C = 1;
                    Math_Vec3f_Diff(&spC0, temp_s6, arg2);
                    sp98->unk1E0 = phi_s1;
                    phi_f20 = temp_f20;
                }
            }
            temp_s3 = phi_s3 + 1;
            phi_s1 += 0x14;
            phi_s4 += 0x14;
            phi_s5 += 0x14;
            phi_s3 = temp_s3;
        } while (temp_s3 < spF8->unk1E4);
    }
    return sp9C;
}

s32 func_80A3CB94(ObjVspinyroll *arg0, GlobalContext *arg2) {
    Actor sp1C;

    if (func_80A3C8D8(&sp1C, arg2) != 0) {
        arg0->actor.world.pos.x += (bitwise f32) sp1C;
        arg0->actor.world.pos.z += sp1C.home.pos.x;
        return 1;
    }
    return 0;
}

DynaPolyActor *func_80A3CBF0(ObjVspinyroll *arg0, GlobalContext *arg1) {
    void *temp_v0;

    temp_v0 = arg0->unk388;
    if (temp_v0 != 0) {
        return BgCheck_GetActorOfMesh(arg1 + 0x830, temp_v0->unk10);
    }
    return NULL;
}

s32 func_80A3CC30(void) {
    DynaPolyActor *temp_v0;

    temp_v0 = func_80A3CBF0();
    if ((temp_v0 != 0) && (Math3D_DistanceSquared(temp_v0 + 0x24, &temp_v0->actor.prevPos) > 0.0001f)) {
        return 1;
    }
    return 0;
}

void func_80A3CC84(f32 arg0) {
    MtxF *temp_v0;

    temp_v0 = SysMatrix_GetCurrentState();
    temp_v0->mf[3][1] += arg0;
}

void ObjVspinyroll_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjVspinyroll *this = (ObjVspinyroll *) thisx;
    f32 sp40;
    Vec3s *sp2C;
    Vec3f *sp28;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    Vec3f *temp_a0;
    Vec3f *temp_v1;
    f32 temp_f2;
    void *temp_v0;

    temp_v1 = ((((s32) this->actor.params >> 0xE) & 1) * 4) + &D_80A3D450;
    temp_f2 = temp_v1->x;
    sp28 = temp_v1;
    sp40 = temp_f2;
    Actor_ProcessInitChain(&this->actor, &D_80A3D4D4);
    this->actor.world.rot.x = 0;
    this->actor.world.rot.z = 0;
    this->actor.shape.rot.x = 0;
    this->actor.shape.rot.z = 0;
    this->actor.scale.y = 0.1f * temp_f2;
    this->actor.scale.z = 0.1f;
    this->actor.uncullZoneScale = 300.0f * temp_f2;
    this->actor.scale.x = 0.1f;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000F80);
    temp_a1 = &this->unk15C;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_80A3D488);
    if (sp28 == &D_80A3D454) {
        this->actor.draw = func_80A3D2C0;
        this->unk15C.dim.height = 0xF0;
    }
    if ((this->actor.params & 0x7F) == 0x7F) {
        func_80A3CEC4(this);
        return;
    }
    this->actor.world.rot.y = 0;
    func_80A3C7E8(this);
    this->unk394 = *(&D_80A3D458 + ((((s32) this->actor.params >> 7) & 7) * 4));
    temp_v0 = Lib_SegmentedToVirtual((void *) globalCtx->setupPathList[this->actor.params & 0x7F].points);
    temp_a0 = &this->unk39C;
    sp2C = temp_v0 + 6;
    sp28 = temp_a0;
    Math_Vec3s_ToVec3f(temp_a0, (Vec3s *) temp_v0);
    Math_Vec3s_ToVec3f(&this->unk3A8, sp2C);
    Math_Vec3f_Copy(&this->actor.world.pos, sp28);
    func_80A3C6A0(this);
    this->actor.shape.rot.y = this->actor.world.rot.y;
    func_80A3CFAC(this);
}

void ObjVspinyroll_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjVspinyroll *this = (ObjVspinyroll *) thisx;
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk144);
    Collider_DestroyCylinder(globalCtx, &this->unk15C);
}

void func_80A3CEC4(ObjVspinyroll *arg0) {
    arg0->actionFunc = func_80A3CEE0;
    arg0->actor.speedXZ = 0.0f;
}

void func_80A3CEE0(ObjVspinyroll *this, GlobalContext *globalCtx) {
    this->unk3C0 += 0x6E;
    if ((s32) this->unk3C0 >= 0xFA1) {
        this->unk3C0 = 0xFA0;
    }
}

void func_80A3CF10(ObjVspinyroll *arg0) {
    arg0->actionFunc = func_80A3CF4C;
    arg0->unk3C8 = *(&D_80A3D478 + ((((s32) arg0->actor.params >> 0xA) & 7) * 2));
    arg0->actor.speedXZ = 0.0f;
}

void func_80A3CF4C(ObjVspinyroll *this, GlobalContext *globalCtx) {
    ObjVspinyroll *temp_a3;
    s16 temp_a2;
    s16 temp_v0;

    temp_a3 = this;
    temp_a2 = temp_a3->unk3C4;
    this = temp_a3;
    if (Math_ScaledStepToS(&temp_a3->unk3C0, 0, temp_a2) != 0) {
        temp_v0 = this->unk3C8;
        if ((s32) temp_v0 > 0) {
            this->unk3C8 = temp_v0 - 1;
            if ((s32) this->unk3C8 <= 0) {
                func_80A3CFAC(this);
            }
        }
    }
}

void func_80A3CFAC(ObjVspinyroll *arg0) {
    arg0->actionFunc = func_80A3CFE0;
    arg0->unk3C2 = *(&D_80A3D4DC + (arg0->unk398 * 2));
    arg0->actor.speedXZ = 0.0f;
}

void func_80A3CFE0(ObjVspinyroll *this, GlobalContext *globalCtx) {
    ObjVspinyroll *temp_a3;
    s16 temp_a1;

    temp_a3 = this;
    temp_a1 = temp_a3->unk3C2;
    this = temp_a3;
    if (Math_ScaledStepToS(&temp_a3->unk3C0, temp_a1, 0x6E) != 0) {
        func_80A3D024(this);
    }
}

void func_80A3D024(ObjVspinyroll *arg0) {
    arg0->actionFunc = func_80A3D038;
}

void func_80A3D038(ObjVspinyroll *this, GlobalContext *globalCtx) {
    s32 sp24;

    sp24 = func_80A3C700(this);
    if (func_80A3CB94(this, globalCtx, 1) != 0) {
        this->unk3C4 = 0x7D0;
        if (func_80A3CBF0(this, globalCtx) != 0) {
            func_80A3D0E8(this);
            return;
        }
        func_80A3C6CC(this);
        func_80A3CF10(this);
        return;
    }
    if (sp24 != 0) {
        func_80A3C6CC(this);
        this->unk3C4 = 0x78;
        func_80A3CF10(this);
    }
}

void func_80A3D0E8(ObjVspinyroll *arg0) {
    arg0->actionFunc = func_80A3D0FC;
}

void func_80A3D0FC(ObjVspinyroll *this, GlobalContext *globalCtx) {
    s32 sp24;

    sp24 = 1;
    Math_ScaledStepToS(&this->unk3C0, 0, this->unk3C4);
    if ((func_80A3CB94(this, globalCtx, 0) != 0) && (func_80A3CC30(this, globalCtx) != 0)) {
        sp24 = 0;
    }
    if (sp24 != 0) {
        func_80A3C6CC(this);
        func_80A3CF10(this);
    }
}

void ObjVspinyroll_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjVspinyroll *this = (ObjVspinyroll *) thisx;
    CollisionCheckContext *sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;

    this->actionFunc(this, globalCtx);
    temp_a1 = &this->unk15C;
    this->unk3C6 += this->unk3C0;
    sp20 = temp_a1;
    Collider_UpdateCylinder(&this->actor, temp_a1);
    temp_a1_2 = &globalCtx->colChkCtx;
    sp24 = temp_a1_2;
    CollisionCheck_SetAT(globalCtx, temp_a1_2, &sp20->base);
    CollisionCheck_SetAC(globalCtx, temp_a1_2, &sp20->base);
}

void ObjVspinyroll_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjVspinyroll *this = (ObjVspinyroll *) thisx;
    SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y + 60.0f, this->actor.world.pos.z, 0);
    Matrix_RotateY(this->actor.shape.rot.y, 1U);
    SysMatrix_InsertZRotation_s((s16) (this->actor.shape.rot.z + 0x4000), 1);
    SysMatrix_InsertXRotation_s((s16) (this->actor.shape.rot.x + this->unk3C6), 1);
    Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
    func_800BDFC0(globalCtx, &D_06000460);
}

void func_80A3D2C0(Actor *this, GlobalContext *globalCtx) {
    s16 sp40;
    s16 sp3E;
    s16 sp3C;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;

    temp_a0 = globalCtx->state.gfxCtx;
    sp3C = this->shape.rot.x + this->unk3C6;
    temp_s1 = temp_a0;
    sp3E = this->shape.rot.y;
    sp40 = this->shape.rot.z + 0x4000;
    func_8012C28C(temp_a0);
    SysMatrix_InsertTranslation(this->world.pos.x, this->world.pos.y + 60.0f, this->world.pos.z, 0);
    Matrix_RotateY(sp3E, 1U);
    SysMatrix_InsertZRotation_s(sp40, 1);
    SysMatrix_InsertXRotation_s(sp3C, 1);
    Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    temp_v0->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) &D_06000460;
    sp20 = &D_06000460;
    func_80A3CC84(120.0f, &D_06000460);
    temp_v0_3 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    sp20 = &D_06000460;
    temp_v0_3->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_4 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_06000460;
    temp_v0_4->words.w0 = 0xDE000000;
}

