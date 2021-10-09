typedef struct {
    /* 0x00 */ u16 unk0;
    /* 0x02 */ u16 startFrame;
    /* 0x04 */ u16 endFrame;
    /* 0x06 */ u16 unk6;                            /* inferred */
    /* 0x08 */ char pad8[0x2];
    /* 0x0A */ u16 unkA;                            /* inferred */
    /* 0x0C */ char padC[0x24];                     /* maybe part of unkA[19]? */
} CsCmdActorAction;                                 /* size = 0x30 */

typedef struct ObjBoat {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ u8 unk15C;                          /* inferred */
    /* 0x15D */ s8 unk15D;                          /* inferred */
    /* 0x15E */ u8 unk15E;                          /* inferred */
    /* 0x15F */ u8 unk15F;                          /* inferred */
    /* 0x160 */ char pad160[0x3];                   /* maybe part of unk15F[4]? */
    /* 0x163 */ u8 unk163;                          /* inferred */
    /* 0x164 */ void *unk164;                       /* inferred */
} ObjBoat;                                          /* size = 0x168 */

struct _mips2c_stack_ObjBoat_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjBoat_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjBoat_Init {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad24[0x1C];
};                                                  /* size = 0x40 */

struct _mips2c_stack_ObjBoat_Update {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad2C[0xE];
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ Actor *sp44;                         /* inferred */
    /* 0x48 */ char pad48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80B9AF50 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B9B124 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B9B428 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad34[0x10];
    /* 0x44 */ CsCmdActorAction *sp44;              /* inferred */
    /* 0x48 */ char pad48[0x8];
};                                                  /* size = 0x50 */

s16 func_80B9AF50(ObjBoat *arg0, Vec3f *arg1);      /* static */
void func_80B9B124(ObjBoat *arg0);                  /* static */
void func_80B9B428(Actor *this, GlobalContext *globalCtx); /* static */
extern Gfx D_06007630;
extern CollisionHeader D_06009A88;
static InitChainEntry D_80B9B680[4];                /* unable to generate initializer */

s16 func_80B9AF50(ObjBoat *arg0, Vec3f *arg1) {
    s16 temp_v0;
    s32 temp_lo;
    s32 temp_t6;
    s8 temp_t9;
    s16 phi_v1;

    temp_t9 = arg0->unk15D;
    temp_t6 = arg0->unk164;
    temp_lo = arg0->unk15C * 6;
    arg0 = arg0;
    Math_Vec3s_ToVec3f(arg1, (temp_t9 * 6) + (temp_t6 + temp_lo));
    temp_v0 = Math_Vec3f_Yaw(arg0 + 0x24, arg1);
    phi_v1 = temp_v0 + 0x8000;
    if ((s32) arg0->unk15D > 0) {
        phi_v1 = temp_v0;
    }
    return phi_v1;
}

void ObjBoat_Init(ObjBoat *this, GlobalContext *globalCtx) {
    ? sp24;
    Path *temp_v0;
    s16 temp_v1;
    void *temp_v0_2;
    void *temp_v1_2;
    ObjBoat *this = (ObjBoat *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80B9B680);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 3);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06009A88);
    temp_v1 = this->actor.params;
    if ((s32) temp_v1 < 0) {
        this->actor.update = func_80B9B428;
        return;
    }
    temp_v0 = &globalCtx->setupPathList[((s32) temp_v1 >> 7) & 0x1F];
    this->unk163 = temp_v0->count - 1;
    temp_v0_2 = Lib_SegmentedToVirtual((void *) temp_v0->points);
    this->unk164 = temp_v0_2;
    this->unk15D = 1;
    temp_v1_2 = temp_v0_2 + (this->unk15C * 6);
    this->actor.world.pos.x = (f32) temp_v1_2->unk0;
    this->actor.world.pos.z = (f32) temp_v1_2->unk4;
    this->actor.shape.rot.y = func_80B9AF50(this, (Vec3f *) &sp24);
    this->unk15D = (s8) -(s32) this->unk15D;
    this->actor.world.rot.y = this->actor.shape.rot.y;
}

void ObjBoat_Destroy(ObjBoat *this, GlobalContext *globalCtx) {
    ObjBoat *this = (ObjBoat *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_80B9B124(ObjBoat *arg0) {
    arg0->unk160 += 0x3E8;
    arg0->actor.world.pos.y = Math_SinS(arg0->unk160) + arg0->actor.home.pos.y;
    arg0->actor.shape.rot.x = (s16) (s32) (Math_SinS(arg0->unk160) * 100.0f);
    arg0->actor.shape.rot.z = (s16) (s32) (Math_SinS((s16) (arg0->unk160 * 2)) * 50.0f);
}

void ObjBoat_Update(ObjBoat *this, GlobalContext *globalCtx) {
    Actor *sp44;
    s32 sp40;
    f32 sp3C;
    s16 sp3A;
    ? sp2C;
    s32 temp_v0;
    s32 temp_v1;
    u8 temp_t3;
    u8 temp_v0_2;
    s32 phi_v1;
    f32 phi_f0;
    ObjBoat *this = (ObjBoat *) thisx;

    sp44 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = func_800CAF70((DynaPolyActor *) this);
    temp_v1 = temp_v0;
    sp3C = 0.0f;
    sp3A = this->actor.shape.rot.y;
    phi_v1 = temp_v1;
    if ((temp_v0 != 0) || (sp40 = temp_v0, phi_v1 = sp40, (func_800CAF4C((DynaPolyActor *) this) != 0))) {
        if ((this->unk15F == 0) && (((this->actor.params & 0x4000) != 0) || ((phi_v1 != 0) && (this->unk15E == this->unk15C)))) {
            this->unk15D = (s8) -(s32) this->unk15D;
            if ((s32) this->unk15D > 0) {
                this->unk15E = this->unk163;
            } else {
                this->unk15E = 0;
            }
            this->unk15F = 0x3C;
        }
    } else if (this->actor.speedXZ == 0.0f) {
        temp_v0_2 = this->unk15F;
        if (temp_v0_2 != 0) {
            this->unk15F = temp_v0_2 - 1;
        }
    }
    if (this->unk15E != this->unk15C) {
        sp3A = func_80B9AF50(this, (Vec3f *) &sp2C);
        if (Math_Vec3f_DistXZ((Vec3f *) &this->actor.world, (Vec3f *) &sp2C) < 200.0f) {
            temp_t3 = this->unk15C + this->unk15D;
            this->unk15C = temp_t3;
            if (this->unk15E == (temp_t3 & 0xFF)) {
                if ((this->actor.params & 0x4000) != 0) {
                    this->unk15C = 0;
                } else if (this->actor.speedXZ == 0.0f) {
                    this->unk15C = 0;
                    this->unk15D = -1;
                }
            }
        } else {
            if ((this->actor.params & 0x4000) != 0) {
                phi_f0 = 5.0f;
            } else {
                phi_f0 = 3.0f;
            }
            sp3C = phi_f0 * (f32) this->unk15D;
        }
    }
    if (sp44->unk394 != 0x1A) {
        Math_ScaledStepToS(&this->actor.shape.rot.y, sp3A, (s16) (s32) (fabsf(this->actor.speedXZ) * 40.0f));
        this->actor.world.rot.y = this->actor.shape.rot.y;
        Math_StepToF(&this->actor.speedXZ, sp3C, 0.05f);
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        if (this->actor.speedXZ != 0.0f) {
            func_800B9010((Actor *) this, 0x2154U);
        }
    }
    func_80B9B124(this);
}

void func_80B9B428(Actor *this, GlobalContext *globalCtx) {
    CsCmdActorAction *sp44;
    ? sp34;
    CsCmdActorAction *temp_a3;
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    Path *temp_a0_3;
    Path *temp_v0_3;
    f32 temp_f6;
    u16 temp_t7;
    u16 temp_v0_2;
    u16 temp_v1;
    u32 temp_v0;
    u8 temp_v0_5;
    void *temp_v0_4;
    Path *phi_v0;
    f32 phi_f6;
    u8 phi_v0_2;
    u16 phi_v1;

    temp_a0 = globalCtx;
    globalCtx = globalCtx;
    if (func_800EE29C(temp_a0, 0x1FFU) != 0) {
        temp_a0_2 = globalCtx;
        globalCtx = globalCtx;
        temp_v0 = func_800EE200(temp_a0_2, 0x1FFU);
        temp_a3 = globalCtx->csCtx.npcActions[temp_v0];
        temp_v1 = temp_a3->unk0;
        phi_v1 = temp_v1;
        if (temp_v1 != this->unk15F) {
            this->shape.rot.x = (s16) temp_a3->unk6;
            temp_v0_2 = temp_a3->unk0;
            phi_v0_2 = (u8) temp_v0_2;
            if (temp_v0_2 != 1) {
                temp_a0_3 = globalCtx->setupPathList;
                temp_v0_3 = &temp_a0_3[((s32) this->params >> 7) & 0x1F];
                phi_v0 = temp_v0_3;
                if (temp_v0_2 == 3) {
                    phi_v0 = &temp_a0_3[temp_v0_3->unk1];
                }
                this->unk163 = (u8) phi_v0->count;
                sp44 = temp_a3;
                temp_v0_4 = Lib_SegmentedToVirtual(phi_v0->points);
                this->unk164 = temp_v0_4;
                Math_Vec3s_ToVec3f((Vec3f *) &this->world, (Vec3s *) temp_v0_4);
                temp_t7 = temp_a3->unkA;
                temp_f6 = (f32) temp_t7;
                phi_f6 = temp_f6;
                if ((s32) temp_t7 < 0) {
                    phi_f6 = temp_f6 + 4294967296.0f;
                }
                this->unk164 = (void *) (this->unk164 + 6);
                this->unk15C = 1U;
                this->speedXZ = phi_f6 * 0.005493164f;
                phi_v0_2 = (u8) temp_a3->unk0;
            }
            this->unk15F = phi_v0_2;
            return;
        }
        if (temp_v1 != 1) {
            sp44 = temp_a3;
            Math_Vec3s_ToVec3f((Vec3f *) &sp34, (Vec3s *) this->unk164);
            temp_v0_5 = this->unk15C;
            if (((s32) temp_v0_5 < (s32) this->unk163) && (Math_Vec3f_StepTo((Vec3f *) &this->world, (Vec3f *) &sp34, this->speedXZ) < this->speedXZ)) {
                this->unk15C = (u8) (temp_v0_5 + 1);
                this->unk164 = (void *) (this->unk164 + 6);
            }
            phi_v1 = temp_a3->unk0;
        }
        if (phi_v1 != 3) {
            sp44 = globalCtx->csCtx.npcActions[temp_v0];
            func_80B9B124((ObjBoat *) this);
            if (globalCtx->csCtx.npcActions[temp_v0]->unk0 == 2) {
                func_800B9010(this, 0x2154U);
                return;
            }
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return;
        }
        this->shape.rot.y += 0x7D0;
        this->shape.rot.x += 0x3E8;
        this->shape.rot.z += 0x1F4;
        /* Duplicate return node #18. Try simplifying control flow for better match */
    }
}

void ObjBoat_Draw(ObjBoat *this, GlobalContext *globalCtx) {
    ObjBoat *this = (ObjBoat *) thisx;
    func_800BDFC0(globalCtx, &D_06007630);
}
