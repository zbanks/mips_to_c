typedef struct EnWood02 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s16 unk_144;                        /* inferred */
    /* 0x146 */ s16 unk_146;                        /* inferred */
    /* 0x148 */ s16 unk_148;                        /* inferred */
    /* 0x14A */ u8 unk_14A;                         /* inferred */
    /* 0x14B */ char pad_14B[0x4];                  /* maybe part of unk_14A[5]? */
    /* 0x14F */ u8 unk_14F;                         /* inferred */
    /* 0x150 */ u8 unk_150;                         /* inferred */
    /* 0x151 */ u8 unk_151;                         /* inferred */
    /* 0x152 */ char pad_152[0x2];                  /* maybe part of unk_151[3]? */
    /* 0x154 */ ColliderCylinder unk_154;           /* inferred */
} EnWood02;                                         /* size = 0x1A0 */

struct _mips2c_stack_EnWood02_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnWood02_Draw {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0x11];                   /* maybe part of sp28[5]? */
    /* 0x3D */ u8 sp3D;                             /* inferred */
    /* 0x3E */ u8 sp3E;                             /* inferred */
    /* 0x3F */ u8 sp3F;                             /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnWood02_Init {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ ColliderCylinder *sp44;              /* inferred */
    /* 0x48 */ char pad_48[0x2];
    /* 0x4A */ s16 sp4A;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];                    /* maybe part of sp4A[3]? */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ CollisionPoly *sp54;                 /* inferred */
    /* 0x58 */ char pad_58[0x8];                    /* maybe part of sp54[3]? */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x2];
    /* 0x66 */ s16 sp66;                            /* inferred */
};                                                  /* size = 0x68 */

struct _mips2c_stack_EnWood02_Update {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ ActorContext *sp44;                  /* inferred */
    /* 0x48 */ char pad_48[0x8];                    /* maybe part of sp44[3]? */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x8];                    /* maybe part of sp60[3]? */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ char pad_70[0x8];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_808C3C00 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808C3D28 {
    /* 0x00 */ char pad_0[0x7C];
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ char pad_88[0x8];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_808C4458 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

s32 func_808C3C00(Actor *arg0, GlobalContext *arg1, Vec3f *arg2); /* static */
void func_808C3D28(Actor *arg0, GlobalContext *arg1); /* static */
void func_808C4458(Actor *arg0, GlobalContext *arg1, Vec3f *arg2, u16 arg3); /* static */
extern Gfx D_06000700;
static ColliderCylinderInit D_808C4D00 = {
    {0xD, 0, 0xD, 0x39, 0x10, 1},
    {5, {0, 0, 0}, {0x100020A, 0, 0}, 0, 1, 1},
    {0x12, 0x3C, 0, {0, 0, 0}},
};
static ? D_808C4D2C;                                /* unable to generate initializer */
static ? D_808C4D44;                                /* unable to generate initializer */
static s16 D_808C4D4E = 0xA000;
static InitChainEntry D_808C4D50;                   /* unable to generate initializer */
static ? D_808C4D54;                                /* unable to generate initializer */
static ? D_808C4D70;                                /* unable to generate initializer */
static f32 D_808C4F70;
static f32 D_808C4F74;

s32 func_808C3C00(Actor *arg0, GlobalContext *arg1, Vec3f *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 phi_f12;
    s32 phi_v0;

    SkinMatrix_Vec3fMtxFMultXYZW(arg1 + 0x187B0, arg2, arg0 + 0xEC, arg0 + 0xF8);
    temp_f2 = arg0->projectedW;
    phi_v0 = 0;
    if (temp_f2 == 0.0f) {
        phi_f12 = 1000.0f;
    } else {
        phi_f12 = fabsf(1.0f / temp_f2);
    }
    temp_f2_2 = arg0->uncullZoneScale;
    temp_f0 = arg0->projectedPos.z;
    if ((-temp_f2_2 < temp_f0) && (temp_f0 < (arg0->uncullZoneForward + temp_f2_2)) && (((fabsf(arg0->projectedPos.x) - temp_f2_2) * phi_f12) < 1.0f)) {
        temp_f0_2 = arg0->projectedPos.y;
        if ((((temp_f0_2 + arg0->uncullZoneDownward) * phi_f12) > -1.0f) && (((temp_f0_2 - temp_f2_2) * phi_f12) < 1.0f)) {
            phi_v0 = 1;
        }
    }
    return phi_v0;
}

void func_808C3D28(Actor *arg0, GlobalContext *arg1) {
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    Actor *temp_v0;
    f32 *temp_a2;
    f32 temp_f2;
    s16 *temp_s4;
    s32 temp_s3;
    void *phi_s2;
    s8 phi_s3;
    s32 phi_s1;
    s32 phi_v1;

    phi_s2 = arg0 + 4;
    phi_s3 = 4;
    do {
        phi_s1 = 0;
        if ((phi_s2->unk_14A & 0x7F) == 0) {
            temp_s4 = (phi_s3 * 2) + &D_808C4D44;
            if (arg0->params == 0xF) {
                phi_s1 = 0x4000;
            }
            D_808C4F70 = Math_CosS((s16) (*temp_s4 + arg0->world.rot.y + phi_s1));
            D_808C4F74 = Math_SinS((s16) (*temp_s4 + arg0->world.rot.y + phi_s1));
            temp_f2 = *((phi_s3 * 4) + &D_808C4D2C);
            temp_a2 = &sp7C;
            sp7C = (temp_f2 * D_808C4F74) + arg0->home.pos.x;
            sp80 = arg0->home.pos.y;
            sp84 = (temp_f2 * D_808C4F70) + arg0->home.pos.z;
            if (func_808C3C00(arg0, arg1, (Vec3f *) temp_a2) != 0) {
                if ((phi_s2->unk_14A & 0x80) != 0) {
                    phi_v1 = 0;
                } else {
                    phi_v1 = (s32) arg0->home.rot.z;
                }
                temp_v0 = Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, 0x41, sp7C, sp80, sp84, (s16) (s32) arg0->world.rot.x, (s16) (s32) *temp_s4, (s16) phi_v1, (s32) (s16) ((arg0[1].id << 8) | (arg0->params + 1)));
                if (temp_v0 != 0) {
                    temp_v0->unk_14A = phi_s3;
                    phi_s2->unk_14A = (u8) (phi_s2->unk_14A | 1);
                    temp_v0->projectedPos.x = arg0->projectedPos.x;
                    temp_v0->projectedPos.y = arg0->projectedPos.y;
                    temp_v0->projectedPos.z = arg0->projectedPos.z;
                } else {
                    phi_s2->unk_14A = (u8) (phi_s2->unk_14A & 0x80);
                }
            }
        }
        temp_s3 = phi_s3 - 1;
        phi_s2 += -1;
        phi_s3 = (s8) temp_s3;
    } while (temp_s3 >= 0);
}

void EnWood02_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 sp66;
    f32 sp60;
    CollisionPoly *sp54;
    s32 sp50;
    s16 sp4A;
    ColliderCylinder *sp44;
    Actor *temp_v0;
    ColliderCylinder *temp_a1;
    f32 temp_f0;
    s16 temp_a1_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 phi_t0;
    s16 phi_t0_2;
    s16 phi_v0;
    s16 phi_t0_3;
    s16 phi_t0_4;
    EnWood02 *this = (EnWood02 *) thisx;

    sp60 = 1.0f;
    this->actor.world.rot.z = 0;
    this->unk_144 = ((s32) this->actor.params >> 8) & 0xFF;
    this->unk_146 = -1;
    this->actor.shape.rot.z = this->actor.world.rot.z;
    if ((this->unk_144 & 0x80) != 0) {
        this->unk_144 = -1;
    }
    this->actor.params &= 0xFF;
    this->unk_148 = this->actor.home.rot.z;
    sp66 = 0;
    Actor_ProcessInitChain((Actor *) this, &D_808C4D50);
    temp_v1 = this->actor.params;
    if (((s32) temp_v1 < 0xB) || (temp_v1 == 0x1A)) {
        temp_a1 = &this->unk_154;
        sp44 = temp_a1;
        sp66 = 0;
        Collider_InitCylinder(globalCtx, temp_a1);
        Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_808C4D00);
    }
    if ((this->actor.params == 0x1A) && (gSaveContext.isNight == 0) && (temp_a1_2 = this->unk_144, (temp_a1_2 != -1)) && (sp66 = 0, (Actor_GetCollectibleFlag(globalCtx, (s32) temp_a1_2) == 0))) {
        sp66 = 0;
        temp_v0 = Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0xBD, this->actor.world.pos.x, this->actor.world.pos.y + 120.0f, this->actor.world.pos.z - 15.0f, (s16) 0, (s16) 0, (s16) 0, 1);
        this->actor.child = temp_v0;
        phi_t0 = 0;
        if (temp_v0 != 0) {
            temp_v0->cutscene = this->actor.cutscene;
        }
        this->unk_151 = 1;
    } else {
        this->actor.child = NULL;
        this->unk_151 = 0;
        phi_t0 = 0;
    }
    temp_v1_2 = this->actor.params;
    phi_t0_2 = phi_t0;
    phi_t0_2 = phi_t0;
    phi_t0_2 = phi_t0;
    phi_t0_3 = phi_t0;
    phi_t0_4 = phi_t0;
    switch (temp_v1_2) {
    case 15:
    case 21:
        phi_t0_3 = 1;
        /* fallthrough */
    case 16:
    case 22:
        phi_t0_2 = (s16) (phi_t0_3 + 1);
        /* fallthrough */
    case 0:
    case 12:
    case 18:
    case 26:
        sp60 = 1.5f;
        this->actor.uncullZoneForward = 4000.0f;
        this->actor.uncullZoneScale = 2000.0f;
        this->actor.uncullZoneDownward = 2400.0f;
        break;
    case 3:
    case 6:
    case 8:
    case 13:
    case 19:
        phi_t0_4 = 1;
        /* fallthrough */
    case 4:
    case 7:
    case 9:
    case 14:
    case 20:
        phi_t0_2 = (s16) (phi_t0_4 + 1);
        /* fallthrough */
    case 1:
    case 5:
    case 10:
    case 11:
    case 17:
        this->actor.uncullZoneForward = 4000.0f;
        this->actor.uncullZoneScale = 800.0f;
        this->actor.uncullZoneDownward = 1800.0f;
        break;
    case 2:
        sp60 = 0.6f;
        this->actor.uncullZoneForward = 4000.0f;
        this->actor.uncullZoneScale = 400.0f;
        this->actor.uncullZoneDownward = 1000.0f;
        break;
    case 23:
    case 24:
        this->unk_14A = 0x4B;
        sp66 = phi_t0;
        sp60 = 0.02f;
        this->actor.velocity.x = randPlusMinusPoint5Scaled(6.0f);
        this->actor.velocity.z = randPlusMinusPoint5Scaled(6.0f);
        this->actor.velocity.y = (Rand_ZeroOne() * 1.25f) + -3.1f;
        phi_t0_2 = phi_t0;
        break;
    }
    if ((s32) this->actor.params < 5) {
        this->unk_150 = 0;
    } else if ((s32) this->actor.params < 0xA) {
        this->unk_150 = 1;
    } else if ((s32) this->actor.params < 0xB) {
        this->unk_150 = 2;
    } else if ((s32) this->actor.params < 0x11) {
        this->unk_150 = 3;
    } else if ((s32) this->actor.params < 0x18) {
        this->unk_150 = 4;
    } else if ((s32) this->actor.params == 0x1A) {
        this->unk_150 = 0;
    } else {
        this->unk_150 = 5;
    }
    sp66 = phi_t0_2;
    Actor_SetScale((Actor *) this, sp60);
    this->unk_14F = (u8) phi_t0_2;
    if (phi_t0_2 != 0) {
        phi_v0 = 0;
        if (this->actor.params == 0xF) {
            phi_v0 = 0x4000;
        }
        if (phi_t0_2 == 2) {
            sp4A = phi_v0;
            func_808C3D28((Actor *) this, globalCtx);
            D_808C4F70 = Math_CosS((s16) (D_808C4D4E + this->actor.world.rot.y + phi_v0));
            D_808C4F74 = Math_SinS((s16) (D_808C4D4E + this->actor.world.rot.y + phi_v0));
            this->actor.world.pos.x += D_808C4F74 * D_808C4D2C.unk_14;
            this->actor.world.pos.z += D_808C4F70 * D_808C4D2C.unk_14;
        } else {
            this->unk_151 = 2;
            this->actor.flags |= 0x10;
        }
        this->actor.world.pos.y += 200.0f;
        temp_f0 = func_800C411C(&globalCtx->colCtx, &sp54, &sp50, (Actor *) this, (Vec3f *) &this->actor.world);
        if (temp_f0 > -32000.0f) {
            this->actor.world.pos.y = temp_f0;
            goto block_45;
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
block_45:
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    this->actor.home.rot.y = 0;
    this->actor.colChkInfo.mass = 0xFF;
}

void EnWood02_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    EnWood02 *this = (EnWood02 *) thisx;

    temp_v0 = this->actor.params;
    if (((s32) temp_v0 < 0xB) || (temp_v0 == 0x1A)) {
        Collider_DestroyCylinder(globalCtx, &this->unk_154);
    }
}

void func_808C4458(Actor *arg0, GlobalContext *arg1, Vec3f *arg2, u16 arg3) {
    s32 sp24;
    s16 temp_a3;
    s16 temp_a3_2;
    s32 temp_v0;

    if (arg0->unk_148 != 0) {
        temp_a3 = arg0[1].id;
        if (temp_a3 != -1) {
            if (Actor_GetCollectibleFlag(arg1, (s32) temp_a3) == 0) {
                goto block_4;
            }
        } else {
block_4:
            if (((s32) arg0->unk_148 < 0) && ((s32) arg0->unk_148 >= -0x10)) {
                if ((arg3 & 1) != 0) {
                    Item_DropCollectibleRandom(arg1, arg0, arg2, (s16) (((-1 - (s32) arg0->unk_148) * 0x10) | 0x8000));
                } else {
                    Item_DropCollectibleRandom(arg1, arg0, arg2, (s16) ((-1 - (s32) arg0->unk_148) * 0x10));
                }
            } else if ((s32) arg0->unk_148 > 0) {
                temp_v0 = func_800A8150((s32) arg0->unk_148 - 1);
                sp24 = temp_v0;
                if (temp_v0 >= 0) {
                    temp_a3_2 = arg0[1].id;
                    if (temp_a3_2 == -1) {
                        Item_DropCollectible(arg1, arg2, (u32) temp_v0);
                    } else {
                        Item_DropCollectible(arg1, arg2, ((temp_a3_2 & 0x7F) << 8) | sp24);
                    }
                }
            }
        }
        arg0->unk_148 = 0;
    }
}

void EnWood02_Update(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp6C;
    f32 sp5C;
    f32 sp58;
    s32 sp50;
    ActorContext *sp44;
    Actor *temp_v0_3;
    Actor *temp_v0_6;
    Actor *temp_v1;
    ColliderCylinder *temp_s0_2;
    CollisionCheckContext *temp_a1_2;
    f32 temp_f10;
    f32 temp_v1_2;
    s16 temp_a1;
    s16 temp_v0_2;
    s16 temp_v0_5;
    s16 temp_v0_7;
    s32 temp_s0;
    s32 temp_t3;
    u8 temp_t2;
    u8 temp_v0;
    u8 temp_v0_4;
    s8 phi_v0;
    s32 phi_v1;
    s32 phi_s0;
    EnWood02 *this = (EnWood02 *) thisx;

    temp_v0 = this->unk_14F;
    if ((temp_v0 == 1) && (temp_v1 = this->actor.parent, (temp_v1 != 0))) {
        if (((this->actor.flags & 0x40) == 0) && (this->unk_151 != 2)) {
            phi_v0 = 0;
            if (this->unk_148 == 0) {
                phi_v0 = 0x80;
            }
            (temp_v1 + this->unk_14A)->unk_14A = phi_v0;
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->unk_151 = 0;
        goto block_10;
    }
    if (temp_v0 == 2) {
        func_808C3D28((Actor *) this, globalCtx);
    }
block_10:
    temp_v0_2 = this->actor.params;
    if (((s32) temp_v0_2 < 0xB) || (temp_v0_2 == 0x1A)) {
        temp_v0_4 = this->unk_154.base.acFlags;
        if ((temp_v0_4 & 2) != 0) {
            this->unk_154.base.acFlags = temp_v0_4 & 0xFFFD;
            Audio_PlayActorSound2((Actor *) this, 0x1837U);
        }
        if (this->actor.home.rot.y != 0) {
            sp58.unk_0 = this->actor.world.pos.x;
            (&sp58)[1] = this->actor.world.pos.y;
            (&sp58)[2] = this->actor.world.pos.z;
            sp5C += 200.0f;
            func_808C4458((Actor *) this, globalCtx, (Vec3f *) &sp58, 0U);
            if ((s32) this->unk_146 >= -1) {
                temp_v0_5 = this->actor.params;
                phi_v1 = 0x17;
                if ((temp_v0_5 == 6) || (temp_v0_5 == 7)) {
                    phi_v1 = 0x18;
                }
                sp50 = phi_v1;
                Audio_PlayActorSound2((Actor *) this, 0x2877U);
                sp44 = &globalCtx->actorCtx;
                phi_s0 = 3;
                do {
                    Actor_Spawn(sp44, globalCtx, 0x41, sp58, sp5C, sp60, (s16) 0, (s16) (s32) randPlusMinusPoint5Scaled(65535.0f), (s16) 0, (s16) sp50);
                    temp_s0 = phi_s0 - 1;
                    phi_s0 = temp_s0;
                } while (temp_s0 >= 0);
            }
            temp_v0_6 = this->actor.child;
            if ((temp_v0_6 != 0) && (this->unk_151 == 1)) {
                temp_v0_6->home.rot.x = 1;
                this->unk_151 = 0;
            }
            if (this->actor.params == 0x1A) {
                temp_a1 = this->unk_144;
                if (temp_a1 != -1) {
                    Actor_SetCollectibleFlag(globalCtx, (s32) temp_a1);
                    this->unk_144 = -1;
                }
            }
            this->unk_146 = -0x15;
            this->actor.home.rot.y = 0;
        }
        temp_s0_2 = &this->unk_154;
        if (this->actor.xzDistToPlayer < 600.0f) {
            Collider_UpdateCylinder((Actor *) this, temp_s0_2);
            temp_a1_2 = &globalCtx->colChkCtx;
            sp44 = (ActorContext *) temp_a1_2;
            CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) temp_s0_2);
            CollisionCheck_SetOC(globalCtx, temp_a1_2, (Collider *) temp_s0_2);
        }
    } else if (((s32) temp_v0_2 < 0x17) || (temp_v0_2 == 0x1A)) {
        temp_v0_3 = globalCtx->actorCtx.actorList[2].first;
        if (((s32) this->unk_146 >= -1) && (((temp_v1_2 = temp_v0_3[2].prevPos.x, ((bitwise s32) temp_v1_2 == 0)) && (sqrtf(this->actor.xyzDistToPlayerSq) < 20.0f) && (temp_v0_3->unk_AD0 != 0.0f)) || (((bitwise s32) temp_v1_2 != 0) && (sqrtf(this->actor.xyzDistToPlayerSq) < 60.0f) && (temp_v1_2->unk_70 != 0.0f)))) {
            func_808C4458((Actor *) this, globalCtx, (Vec3f *) &this->actor.world, 1U);
            this->unk_146 = -0x15;
            Audio_PlayActorSound2((Actor *) this, 0x2877U);
        }
    } else {
        this->unk_146 += 1;
        Math_ApproachF((f32 *) &this->actor.velocity, 0.0f, 1.0f, 0.049999997f);
        Math_ApproachF(&this->actor.velocity.z, 0.0f, 1.0f, 0.049999997f);
        Actor_ApplyMovement((Actor *) this);
        temp_f10 = Math_SinS((s16) (this->unk_146 * 0xBB8)) * 16384.0f;
        temp_t2 = this->unk_14A - 1;
        temp_t3 = temp_t2 & 0xFF;
        this->unk_14A = temp_t2;
        this->actor.shape.rot.z = (s16) (s32) temp_f10;
        if (temp_t3 == 0) {
            Actor_MarkForDeath((Actor *) this);
        }
    }
    temp_v0_7 = this->unk_146;
    if ((s32) temp_v0_7 < -1) {
        this->unk_146 = temp_v0_7 + 1;
        sp6C = Math_SinS((s16) ((this->unk_146 ^ 0xFFFF) * 0x3332)) * 250.0f;
        this->actor.shape.rot.x = (s16) (s32) (Math_CosS((s16) (this->actor.yawTowardsPlayer - this->actor.shape.rot.y)) * sp6C);
        this->actor.shape.rot.z = (s16) (s32) (Math_SinS((s16) (this->actor.yawTowardsPlayer - this->actor.shape.rot.y)) * sp6C);
    }
}

void EnWood02_Draw(Actor *thisx, GlobalContext *globalCtx) {
    u8 sp3F;
    u8 sp3E;
    u8 sp3D;
    Gfx *sp28;
    Gfx *sp20;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v1;
    GraphicsContext *temp_s0;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_v0_3;
    u8 phi_a2;
    u8 phi_a3;
    u8 phi_t0;
    EnWood02 *this = (EnWood02 *) thisx;

    temp_s0 = globalCtx->state.gfxCtx;
    temp_v0 = this->actor.params;
    phi_a2 = 0x32U;
    phi_a3 = 0xAAU;
    if ((temp_v0 == 8) || (temp_v0 == 9) || (temp_v0 == 5) || (temp_v0 == 0x17)) {
        phi_t0 = 0x46U;
    } else {
        phi_a2 = 0xB4U;
        if ((temp_v0 == 6) || (temp_v0 == 7) || (phi_t0 = 0xFFU, (temp_v0 == 0x18))) {
            phi_a3 = 0x9BU;
            phi_t0 = 0U;
        } else {
            phi_a2 = 0xFFU;
            phi_a3 = 0xFFU;
        }
    }
    sp3F = phi_a2;
    sp3E = phi_a3;
    sp3D = phi_t0;
    func_8012C2DC(temp_s0);
    temp_v0_2 = this->actor.params;
    if ((temp_v0_2 == 0x17) || (temp_v0_2 == 0x18)) {
        sp3F = phi_a2;
        sp3E = phi_a3;
        sp3D = phi_t0;
        func_8012C28C(temp_s0);
        temp_v1 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = &temp_v1[1];
        temp_v1->words.w0 = 0xFA000000;
        temp_v1->words.w1 = (phi_a2 << 0x18) | ((phi_a3 & 0xFF) << 0x10) | ((phi_t0 & 0xFF) << 8) | 0x7F;
        func_800BDFC0(globalCtx, &D_06000700);
        return;
    }
    temp_v0_3 = (this->unk_150 & 0xF) * 4;
    if (*(&D_808C4D70 + temp_v0_3) != 0) {
        sp3F = phi_a2;
        sp3E = phi_a3;
        sp3D = phi_t0;
        func_800BDFC0(globalCtx, *(&D_808C4D54 + temp_v0_3));
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_4[1];
        temp_v0_4->words.w0 = 0xFB000000;
        temp_v0_4->words.w1 = (phi_a2 << 0x18) | ((phi_a3 & 0xFF) << 0x10) | ((phi_t0 & 0xFF) << 8);
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xDA380003;
        sp28 = temp_v0_5;
        sp28->words.w1 = Matrix_NewMtx(temp_s0);
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_6[1];
        temp_v0_6->words.w0 = 0xDE000000;
        temp_v0_6->words.w1 = *(&D_808C4D70 + ((this->unk_150 & 0xF) * 4));
        return;
    }
    func_8012C2DC(temp_s0);
    temp_v0_7 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_7[1];
    temp_v0_7->words.w0 = 0xDA380003;
    sp20 = temp_v0_7;
    sp20->words.w1 = Matrix_NewMtx(temp_s0);
    temp_v0_8 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_8[1];
    temp_v0_8->words.w0 = 0xDE000000;
    temp_v0_8->words.w1 = *(&D_808C4D54 + ((this->unk_150 & 0xF) * 4));
}
