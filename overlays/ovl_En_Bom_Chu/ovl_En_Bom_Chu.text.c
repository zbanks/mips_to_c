typedef struct EnBomChu {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnBomChu *, GlobalContext *);
    /* 0x148 */ u8 unk_148;                         /* inferred */
    /* 0x149 */ u8 unk_149;                         /* inferred */
    /* 0x14A */ s16 unk_14A;                        /* inferred */
    /* 0x14C */ f32 unk_14C;                        /* inferred */
    /* 0x150 */ f32 unk_150;                        /* inferred */
    /* 0x154 */ f32 unk_154;                        /* inferred */
    /* 0x158 */ f32 unk_158;                        /* inferred */
    /* 0x15C */ f32 unk_15C;                        /* inferred */
    /* 0x160 */ f32 unk_160;                        /* inferred */
    /* 0x164 */ f32 unk_164;                        /* inferred */
    /* 0x168 */ f32 unk_168;                        /* inferred */
    /* 0x16C */ f32 unk_16C;                        /* inferred */
    /* 0x170 */ f32 unk_170;                        /* inferred */
    /* 0x174 */ f32 unk_174;                        /* inferred */
    /* 0x178 */ char pad_178[0x4];
    /* 0x17C */ f32 unk_17C;                        /* inferred */
    /* 0x180 */ s32 unk_180;                        /* inferred */
    /* 0x184 */ s32 unk_184;                        /* inferred */
    /* 0x188 */ ColliderSphere unk_188;             /* inferred */
} EnBomChu;                                         /* size = 0x1E0 */

struct _mips2c_stack_EnBomChu_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnBomChu_Draw {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnBomChu_Init {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnBomChu_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderSphere *sp2C;                /* inferred */
    /* 0x30 */ CollisionCheckContext *sp30;         /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ WaterBox *sp44;                      /* inferred */
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0xC];
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad_54[0x14];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_808F75D0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0xC];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_808F77E4 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x14];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_808F7868 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808F7944 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ CollisionContext *sp34;              /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808F79D4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808F7A84 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ u32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x8];                    /* maybe part of sp3C[3]? */
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0xC];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0x4];
    /* 0x70 */ s32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0x4];
    /* 0x78 */ s32 sp78;                            /* inferred */
    /* 0x7C */ u32 sp7C;                            /* inferred */
    /* 0x80 */ CollisionPoly *sp80;                 /* inferred */
    /* 0x84 */ CollisionPoly *sp84;                 /* inferred */
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_808F7E74 {
    /* 0x00 */ char pad_0[0x68];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_808F7FA0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F7FD0 {};              /* size 0x0 */

struct _mips2c_stack_func_808F8080 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808F818C {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ u32 sp38;                            /* inferred */
    /* 0x3C */ CollisionPoly *sp3C;                 /* inferred */
    /* 0x40 */ char pad_40[0x8];                    /* maybe part of sp3C[3]? */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x2];
    /* 0x4E */ s16 sp4E;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
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
    /* 0x7C */ f32 sp7C;                            /* inferred */
};                                                  /* size = 0x80 */

? func_800B8EF4(GlobalContext *, EnBomChu *);       /* extern */
? func_800BE3D0(EnBomChu *, s16, void *);           /* extern */
s32 func_808F75D0(EnBomChu *arg0, CollisionPoly *arg1, GlobalContext *arg2); /* static */
void func_808F77E4(EnBomChu *arg0);                 /* static */
s32 func_808F7944(GlobalContext *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, CollisionPoly **arg4, u32 *arg5, CollisionPoly **, s32 *); /* static */
void func_808F79D4(EnBomChu *arg0);                 /* static */
void func_808F7E74(EnBomChu *arg0, GlobalContext *arg1); /* static */
void func_808F7FD0(EnBomChu *arg0, ? *arg1, ? *arg2); /* static */
void func_808F8080(EnBomChu *arg0, GlobalContext *arg1, f32 arg2, s32 arg3); /* static */
void func_808F818C(Actor *arg0, GlobalContext *arg1); /* static */
static ColliderSphereInit D_808F88E0;               /* type too large by 4; unable to generate initializer */
static s16 D_808F8908[2] = {0xD, 0x64};
static InitChainEntry D_808F890C[2];                /* unable to generate initializer */
static void D_808F8914;                             /* unable to generate initializer */
static ? D_808F8938;                                /* unable to generate initializer */
static ? D_808F8944;                                /* unable to generate initializer */
static ? D_808F8950;                                /* unable to generate initializer */

void EnBomChu_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnBomChu *this = (EnBomChu *) thisx;
    Actor_ProcessInitChain((Actor *) this, D_808F890C);
    Collider_InitAndSetSphere(globalCtx, &this->unk_188, (Actor *) this, &D_808F88E0);
    this->unk_188.dim.worldSphere.radius = *D_808F8908;
    Effect_Add(globalCtx, &this->unk_180, 2, 0U, (u8) 0, &D_808F8914);
    Effect_Add(globalCtx, &this->unk_184, 2, 0U, (u8) 0, &D_808F8914);
    this->unk_14A = 0x78;
    this->actor.room = -1;
    this->unk_148 = 1;
    this->actionFunc = func_808F7868;
    this->unk_174 = 0.0f;
}

void EnBomChu_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBomChu *this = (EnBomChu *) thisx;
    Effect_Destroy(globalCtx, this->unk_180);
    Effect_Destroy(globalCtx, this->unk_184);
    Collider_DestroySphere(globalCtx, &this->unk_188);
}

s32 func_808F75D0(EnBomChu *arg0, CollisionPoly *arg1, GlobalContext *arg2) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    ? sp38;
    f32 sp34;
    Vec3f *sp28;
    Vec3f *sp24;
    Vec3f *sp20;
    Vec3f *temp_a0;
    Vec3f *temp_a0_2;
    Vec3f *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;

    arg0->actor.floorPoly = arg1;
    if (arg1 != 0) {
        sp44 = (f32) arg1->normal.x * 0.00003051851f;
        sp48 = (f32) arg1->normal.y * 0.00003051851f;
        sp4C = (f32) arg1->normal.z * 0.00003051851f;
        temp_f12 = (arg0->unk_158 * sp44) + (sp48 * arg0->unk_15C) + (sp4C * arg0->unk_160);
        if (fabsf(temp_f12) >= 0.999f) {
            return 0;
        }
        temp_f0 = func_80086C48(temp_f12);
        sp34 = temp_f0;
        temp_a0 = arg0 + 0x158;
        if (temp_f0 < 0.001f) {
            return 0;
        }
        sp28 = temp_a0;
        Math3D_CrossProduct(temp_a0, (Vec3f *) &sp44, (Vec3f *) &sp38);
        temp_f0_2 = Math3D_Vec3fMagnitude((Vec3f *) &sp38);
        if (temp_f0_2 < 0.001f) {
            func_808F7E74(arg0, arg2);
            return 0;
        }
        Math_Vec3f_Scale((Vec3f *) &sp38, 1.0f / temp_f0_2);
        SysMatrix_InsertRotationAroundUnitVector_f(sp34, (Vec3f *) &sp38, 0);
        temp_a0_2 = arg0 + 0x164;
        sp24 = temp_a0_2;
        SysMatrix_MultiplyVector3fByState(temp_a0_2, (Vec3f *) &sp38);
        Math_Vec3f_Copy(temp_a0_2, (Vec3f *) &sp38);
        temp_a2 = arg0 + 0x14C;
        sp20 = temp_a2;
        Math3D_CrossProduct(temp_a0_2, (Vec3f *) &sp44, temp_a2);
        temp_f0_3 = Math3D_Vec3fMagnitude(sp20);
        if (temp_f0_3 < 0.001f) {
            func_808F7E74(arg0, arg2);
            return 0;
        }
        Math_Vec3f_Scale(sp20, 1.0f / temp_f0_3);
        Math_Vec3f_Copy(sp28, (Vec3f *) &sp44);
        return 1;
    }
    func_808F7E74(arg0, arg2);
    return 0;
}

void func_808F77E4(EnBomChu *arg0) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    Vec3s *temp_a1;
    f32 *temp_a0;
    f32 temp_f8;

    temp_a0 = &sp18;
    temp_a1 = arg0 + 0x30;
    sp18 = arg0->unk_164;
    sp1C = arg0->unk_168;
    sp20 = arg0->unk_16C;
    sp28 = arg0->unk_158;
    sp2C = arg0->unk_15C;
    sp30 = arg0->unk_160;
    sp38 = arg0->unk_14C;
    sp3C = arg0->unk_150;
    temp_f8 = arg0->unk_154;
    arg0 = arg0;
    sp40 = temp_f8;
    func_8018219C((MtxF *) temp_a0, temp_a1, 0);
    arg0->actor.world.rot.x = (s16) -(s32) arg0->actor.world.rot.x;
}

void func_808F7868(EnBomChu *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    Actor *temp_v0;

    if (this->unk_14A == 0) {
        func_808F7E74(this, globalCtx);
        return;
    }
    if (Actor_HasNoParent((Actor *) this, globalCtx) != 0) {
        temp_v0 = globalCtx->actorCtx.actorList[2].first;
        sp2C = temp_v0;
        Math_Vec3f_Copy((Vec3f *) &this->actor.world, (Vec3f *) &temp_v0->world);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
        this->actor.flags |= 1;
        this->actor.shape.rot.y = sp2C->shape.rot.y;
        func_800B8EF4(globalCtx, this);
        this->unk_149 = 1;
        this->actor.speedXZ = 8.0f;
        this->unk_17C = 8.0f;
        func_808F79D4(this);
    }
}

s32 func_808F7944(GlobalContext *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, CollisionPoly **arg4, u32 *arg5) {
    CollisionContext *sp34;
    CollisionContext *temp_a0;

    temp_a0 = arg0 + 0x830;
    sp34 = temp_a0;
    if ((func_800C55C4(temp_a0, arg1, arg2, arg3, arg4, 1U, 1U, 1U, 1U, arg5) != 0) && ((func_800C9A4C(temp_a0, *arg4, (s32) *arg5) & 0x30) == 0)) {
        return 1;
    }
    return 0;
}

void func_808F79D4(EnBomChu *arg0) {
    func_800BE3D0(arg0, arg0->actor.shape.rot.y, arg0 + 0xBC);
    Matrix_RotateY(arg0->actor.shape.rot.y, 0U);
    SysMatrix_InsertXRotation_s(arg0->actor.shape.rot.x, 1);
    SysMatrix_InsertZRotation_s(arg0->actor.shape.rot.z, 1);
    SysMatrix_GetStateTranslationAndScaledY(1.0f, arg0 + 0x158);
    SysMatrix_GetStateTranslationAndScaledZ(1.0f, arg0 + 0x14C);
    SysMatrix_GetStateTranslationAndScaledX(1.0f, arg0 + 0x164);
    arg0->actor.world.rot.x = (s16) -(s32) arg0->actor.shape.rot.x;
    arg0->actionFunc = func_808F7A84;
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    arg0->actor.world.rot.z = arg0->actor.shape.rot.z;
}

void func_808F7A84(EnBomChu *this, GlobalContext *globalCtx) {
    CollisionPoly *sp84;
    CollisionPoly *sp80;
    u32 sp7C;
    s32 sp78;
    s32 sp70;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    ? sp48;
    u32 sp3C;
    f32 *temp_a2;
    f32 *temp_a2_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f20_2;
    s32 temp_s1;
    s32 phi_s1;
    s32 phi_s1_2;

    sp84 = NULL;
    sp80 = NULL;
    sp78 = 0x32;
    sp7C = 0x32;
    sp70 = 0;
    temp_f0 = this->unk_17C;
    this->actor.speedXZ = temp_f0;
    temp_f20 = 2.0f * temp_f0;
    if ((this->unk_14A == 0) || ((this->unk_188.base.acFlags & 2) != 0) || ((this->unk_188.base.ocFlags1 & 2) != 0)) {
        func_808F7E74(this, globalCtx);
        return;
    }
    sp60 = this->actor.world.pos.x + (2.0f * this->unk_158);
    temp_a2 = &sp54;
    sp64 = this->actor.world.pos.y + (2.0f * this->unk_15C);
    temp_f12 = this->unk_160;
    sp68 = this->actor.world.pos.z + (2.0f * temp_f12);
    sp54 = this->actor.world.pos.x - (this->unk_158 * 4.0f);
    sp58 = this->actor.world.pos.y - (this->unk_15C * 4.0f);
    sp5C = this->actor.world.pos.z - (this->unk_160 * 4.0f);
    if (func_808F7944((bitwise GlobalContext *) temp_f12, (bitwise Vec3f *) 4.0f, (Vec3f *) globalCtx, (Vec3f *) &sp60, (CollisionPoly **) temp_a2, &sp3C, &sp80, &sp78) != 0) {
        temp_a2_2 = &sp54;
        sp54 = (this->unk_14C * temp_f20) + sp60;
        sp58 = (this->unk_150 * temp_f20) + sp64;
        sp5C = (this->unk_154 * temp_f20) + sp68;
        if (func_808F7944(globalCtx, (Vec3f *) &sp60, (Vec3f *) temp_a2_2, (Vec3f *) &sp48, &sp84, &sp7C) != 0) {
            sp70 = func_808F75D0(this, sp84, globalCtx);
            Math_Vec3f_Copy((Vec3f *) &this->actor.world, (Vec3f *) &sp48);
            this->actor.floorBgId = (u8) sp7C;
            this->actor.speedXZ = 0.0f;
        } else {
            if (sp80 != this->actor.floorPoly) {
                sp70 = func_808F75D0(this, sp80, globalCtx);
            }
            Math_Vec3f_Copy((Vec3f *) &this->actor.world, (Vec3f *) &sp3C);
            this->actor.floorBgId = (u8) sp78;
        }
    } else {
        temp_f20_2 = temp_f20 * 3.0f;
        this->actor.speedXZ = 0.0f;
        Math_Vec3f_Copy((Vec3f *) &sp60, (Vec3f *) &sp54);
        phi_s1 = 0;
loop_11:
        phi_s1_2 = phi_s1;
        if (phi_s1 == 0) {
            sp54 = sp60 - (this->unk_14C * temp_f20_2);
            sp58 = sp64 - (this->unk_150 * temp_f20_2);
            sp5C = sp68 - (this->unk_154 * temp_f20_2);
        } else if (phi_s1 == 1) {
            sp54 = (this->unk_164 * temp_f20_2) + sp60;
            sp58 = (this->unk_168 * temp_f20_2) + sp64;
            sp5C = (this->unk_16C * temp_f20_2) + sp68;
        } else {
            sp54 = sp60 - (this->unk_164 * temp_f20_2);
            sp58 = sp64 - (this->unk_168 * temp_f20_2);
            sp5C = sp68 - (this->unk_16C * temp_f20_2);
        }
        if (func_808F7944(globalCtx, (Vec3f *) &sp60, (Vec3f *) &sp54, (Vec3f *) &sp48, &sp84, &sp7C) != 0) {
            sp70 = func_808F75D0(this, sp84, globalCtx);
            Math_Vec3f_Copy((Vec3f *) &this->actor.world, (Vec3f *) &sp48);
            this->actor.floorBgId = (u8) sp7C;
        } else {
            temp_s1 = phi_s1 + 1;
            phi_s1 = temp_s1;
            phi_s1_2 = temp_s1;
            if (temp_s1 != 3) {
                goto loop_11;
            }
        }
        if (phi_s1_2 == 3) {
            func_808F7E74(this, globalCtx);
        }
    }
    if (sp70 != 0) {
        func_808F77E4(this);
        this->actor.shape.rot.x = (s16) -(s32) this->actor.world.rot.x;
        this->actor.shape.rot.y = this->actor.world.rot.y;
        this->actor.shape.rot.z = this->actor.world.rot.z;
    }
    if (this->unk_149 != 0) {
        func_800B8F98((Actor *) this, 0x1031U);
    }
    temp_f0_2 = this->actor.speedXZ;
    if (temp_f0_2 != 0.0f) {
        this->unk_17C = temp_f0_2;
    }
}

void func_808F7E74(EnBomChu *arg0, GlobalContext *arg1) {
    Actor *temp_v0;
    s32 temp_s0;
    s32 phi_s0;

    temp_v0 = Actor_Spawn(arg1 + 0x1CA0, arg1, 9, arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
    arg0->unk_148 = 1;
    arg0->unk_149 = 0;
    if (temp_v0 != 0) {
        temp_v0->unk_1F0 = 0;
    }
    arg0->unk_14A = 1;
    arg0->actor.speedXZ = 0.0f;
    phi_s0 = 0;
    if (arg0->actor.yDistToWater > 0.0f) {
        do {
            EffectSsBubble_Spawn(arg1, arg0 + 0x24, 1.0f, 5.0f, 30.0f, 0.25f);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != 0x28);
    }
    arg0->actor.draw = NULL;
    arg0->actionFunc = func_808F7FA0;
}

void func_808F7FA0(EnBomChu *this, GlobalContext *globalCtx) {
    if (this->unk_14A == 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_808F7FD0(EnBomChu *arg0, ? *arg1, ? *arg2) {
    f32 temp_f0;

    temp_f0 = arg1->unk_0 + arg0->unk_170;
    arg2->unk_0 = (f32) (arg0->actor.world.pos.x + (arg0->unk_164 * temp_f0) + (arg0->unk_158 * arg1->unk_4) + (arg0->unk_14C * arg1->unk_8));
    arg2->unk_4 = (f32) (arg0->actor.world.pos.y + (arg0->unk_168 * temp_f0) + (arg0->unk_15C * arg1->unk_4) + (arg0->unk_150 * arg1->unk_8));
    arg2->unk_8 = (f32) (arg0->actor.world.pos.z + (arg0->unk_16C * temp_f0) + (arg0->unk_160 * arg1->unk_4) + (arg0->unk_154 * arg1->unk_8));
}

void func_808F8080(EnBomChu *arg0, GlobalContext *arg1, f32 arg2, s32 arg3) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 *temp_a1;

    temp_a1 = &sp20;
    sp24 = arg2;
    sp20 = arg0->actor.world.pos.x;
    sp28 = arg0->actor.world.pos.z;
    EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_a1, 0x46, 0x1F4, (s16) 0);
    if (arg3 != 0) {
        EffectSsGRipple_Spawn(arg1, (Vec3f *) &sp20, 0x46, 0x1F4, (s16) 4);
        EffectSsGRipple_Spawn(arg1, (Vec3f *) &sp20, 0x46, 0x1F4, (s16) 8);
    } else {
        sp20 -= arg0->unk_14C * 10.0f;
        sp28 -= arg0->unk_154 * 10.0f;
    }
    sp24 += 5.0f;
    EffectSsGSplash_Spawn(arg1, (Vec3f *) &sp20, NULL, NULL, (s16) 1, (s16) 0x1C2);
}

void func_808F818C(Actor *arg0, GlobalContext *arg1) {
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp50;
    s16 sp4E;
    f32 sp48;
    CollisionPoly *sp3C;
    u32 sp38;
    s32 sp34;
    Vec3f *sp30;
    Vec3f *temp_a1;
    f32 *temp_a1_2;
    f32 *temp_a2;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f4;
    f32 temp_f6;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_v1;

    temp_a1 = arg0 + 0x24;
    sp3C = NULL;
    sp38 = 0x32;
    sp30 = temp_a1;
    Math_Vec3f_Copy((Vec3f *) &sp74, temp_a1);
    Math_Vec3f_Copy((Vec3f *) &sp50, arg0 + 0x158);
    temp_a3 = arg0->shape.rot.y;
    sp4E = temp_a3;
    BgCheck2_UpdateActorAttachedToMesh(arg1 + 0x830, (s32) arg0->floorBgId, arg0);
    temp_v1 = arg0->shape.rot.y;
    temp_a3_2 = temp_v1 * 0;
    if (temp_a3 != temp_v1) {
        sp4E = temp_a3_2;
        sp48 = Math_SinS(temp_a3_2);
        temp_f0 = Math_CosS(temp_a3_2);
        temp_f14 = arg0[1].home.pos.z;
        temp_f2 = arg0[1].home.pos.x;
        temp_f16 = arg0->unk_160;
        temp_f10 = temp_f14 * temp_f0;
        temp_f14_2 = arg0[1].world.pos.y;
        temp_f18 = sp48 * temp_f2;
        temp_f2_2 = arg0->unk_158;
        arg0[1].home.pos.x = (temp_f14 * sp48) + (temp_f0 * temp_f2);
        arg0[1].home.pos.z = temp_f10 - temp_f18;
        temp_f4 = sp48 * temp_f2_2;
        temp_f2_3 = arg0->unk_164;
        arg0->unk_158 = (f32) ((temp_f16 * sp48) + (temp_f0 * temp_f2_2));
        arg0->unk_160 = (f32) ((temp_f16 * temp_f0) - temp_f4);
        temp_f6 = sp48 * temp_f2_3;
        arg0->unk_164 = (f32) ((temp_f14_2 * sp48) + (temp_f0 * temp_f2_3));
        arg0[1].world.pos.y = (temp_f14_2 * temp_f0) - temp_f6;
    }
    temp_a1_2 = &sp68;
    temp_a2 = &sp5C;
    sp68 = (2.0f * sp50) + sp74;
    sp6C = (2.0f * sp54) + sp78;
    sp70 = (2.0f * sp58) + sp7C;
    sp5C = arg0->world.pos.x + (2.0f * arg0->unk_158);
    sp60 = arg0->world.pos.y + (2.0f * arg0->unk_15C);
    sp64 = arg0->world.pos.z + (2.0f * arg0->unk_160);
    if (func_808F7944(arg1, (Vec3f *) temp_a1_2, (Vec3f *) temp_a2, (Vec3f *) &sp74, &sp3C, &sp38) != 0) {
        sp34 = func_808F75D0((EnBomChu *) arg0, sp3C, arg1);
        Math_Vec3f_Copy(sp30, (Vec3f *) &sp74);
        arg0->floorBgId = (u8) sp38;
        arg0->speedXZ = 0.0f;
        if (sp34 != 0) {
            func_808F77E4((EnBomChu *) arg0);
            arg0->shape.rot.x = (s16) -(s32) arg0->world.rot.x;
            arg0->shape.rot.y = arg0->world.rot.y;
            arg0->shape.rot.z = arg0->world.rot.z;
        }
    }
}

void EnBomChu_Update(Actor *thisx, GlobalContext *globalCtx) {
    ? sp54;
    ? sp48;
    WaterBox *sp44;
    f32 sp40;
    f32 sp38;
    CollisionCheckContext *sp30;
    ColliderSphere *sp2C;
    ColliderSphere *temp_a2;
    CollisionCheckContext *temp_a1;
    f32 *temp_t6;
    EnBomChu *this = (EnBomChu *) thisx;

    if (this->actor.floorBgId != 0x32) {
        func_808F818C((Actor *) this, globalCtx);
    }
    if (this->unk_148 != 0) {
        this->unk_14A += -1;
    }
    this->actionFunc(this, globalCtx);
    if ((func_808F7FA0 != this->actionFunc) && (func_800C9E88(&globalCtx->colCtx, this->actor.floorPoly, (s32) this->actor.floorBgId) != 0)) {
        func_808F7E74(this, globalCtx);
        return;
    }
    Actor_SetVelocityAndMoveXYRotation((Actor *) this);
    temp_a1 = &globalCtx->colChkCtx;
    temp_a2 = &this->unk_188;
    this->unk_188.dim.worldSphere.center.x = (s16) (s32) this->actor.world.pos.x;
    this->unk_188.dim.worldSphere.center.y = (s16) (s32) this->actor.world.pos.y;
    this->unk_188.dim.worldSphere.center.z = (s16) (s32) this->actor.world.pos.z;
    sp2C = temp_a2;
    sp30 = temp_a1;
    CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2);
    if (func_808F7868 != this->actionFunc) {
        CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2);
    }
    this->actor.focus.pos.x = this->actor.world.pos.x + (20.0f * this->unk_158);
    this->actor.focus.pos.y = this->actor.world.pos.y + (20.0f * this->unk_15C);
    this->actor.focus.pos.z = this->actor.world.pos.z + (20.0f * this->unk_160);
    if (this->unk_149 != 0) {
        sp30 = (CollisionCheckContext *) &globalCtx->colCtx;
        sp38 = Rand_ZeroOne();
        this->unk_170 = Math_SinS((s16) (((s32) (Rand_ZeroOne() * 512.0f) + 0x3000) * this->unk_14A)) * (5.0f + (sp38 * 3.0f));
        func_808F7FD0(this, &D_808F8938, &sp54);
        func_808F7FD0(this, &D_808F8944, &sp48);
        func_800A81F0(Effect_GetParams(this->unk_180), (Vec3f *) &sp54, (Vec3f *) &sp48);
        func_808F7FD0(this, &D_808F8950, &sp48);
        func_800A81F0(Effect_GetParams(this->unk_184), (Vec3f *) &sp54, (Vec3f *) &sp48);
        temp_t6 = &sp40;
        sp40 = this->actor.world.pos.y;
        if (func_800CA1AC(globalCtx, (CollisionContext *) sp30, this->actor.world.pos.x, this->actor.world.pos.z, temp_t6, &sp44) != 0) {
            this->actor.yDistToWater = sp40 - this->actor.world.pos.y;
            if (this->actor.yDistToWater < 0.0f) {
                if ((this->actor.bgCheckFlags & 0x20) != 0) {
                    func_808F8080(this, globalCtx, sp40, 1);
                }
                this->actor.bgCheckFlags &= 0xFFDF;
                return;
            }
            if (((this->actor.bgCheckFlags & 0x20) == 0) && (this->unk_14A != 0x78)) {
                func_808F8080(this, globalCtx, sp40, 1);
            } else {
                EffectSsBubble_Spawn(globalCtx, (Vec3f *) &this->actor.world, 0.0f, 3.0f, 15.0f, 0.25f);
            }
            this->actor.bgCheckFlags |= 0x20;
            return;
        }
        this->actor.bgCheckFlags &= 0xFFDF;
        this->actor.yDistToWater = -32000.0f;
        /* Duplicate return node #21. Try simplifying control flow for better match */
    }
}

void EnBomChu_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    f32 temp_f0;
    s16 temp_v0;
    s32 phi_a1;
    s32 phi_a0;
    s32 phi_a0_2;
    EnBomChu *this = (EnBomChu *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    func_800B8050((Actor *) this, globalCtx, 0);
    temp_v0 = this->unk_14A;
    if ((s32) temp_v0 >= 0x28) {
        phi_a1 = 0xA;
        phi_a0 = (s32) temp_v0 % 0x14;
    } else {
        phi_a0 = temp_v0 & 1;
        if ((s32) temp_v0 >= 0xA) {
            phi_a1 = 5;
            phi_a0 = (s32) temp_v0 % 0xA;
        } else {
            phi_a1 = 1;
        }
    }
    phi_a0_2 = phi_a0;
    if (phi_a1 < phi_a0) {
        phi_a0_2 = (phi_a1 * 2) - phi_a0;
    }
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_f0 = (f32) phi_a0_2 / (f32) phi_a1;
    temp_s1->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xFB000000;
    temp_v0_2->words.w1 = (((s32) (temp_f0 * 209.0f) + 9) << 0x18) | ((((s32) (temp_f0 * 34.0f) + 9) & 0xFF) << 0x10) | ((((s32) (temp_f0 * -35.0f) + 0x23) & 0xFF) << 8) | 0xFF;
    SysMatrix_InsertTranslation(this->unk_170 * 100.0f, 0.0f, 0.0f, 1);
    temp_v0_3 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDA380003;
    temp_v0_3->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_4 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = &temp_v0_4[1];
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_4->words.w1 = (u32) &D_04016360;
}
