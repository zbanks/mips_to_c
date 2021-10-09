typedef struct ObjBombiwa {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ char pad_190[0x70];                 /* maybe part of unk_144[2]? */
    /* 0x200 */ s8 unk_200;                         /* inferred */
    /* 0x201 */ s8 unk_201;                         /* inferred */
    /* 0x202 */ s8 unk_202;                         /* inferred */
    /* 0x203 */ u8 unk_203;                         /* inferred */
    /* 0x204 */ void (*actionFunc)(ObjBombiwa *, GlobalContext *);
} ObjBombiwa;                                       /* size = 0x208 */

struct _mips2c_stack_ObjBombiwa_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjBombiwa_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ ColliderCylinderInit **sp28;         /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_ObjBombiwa_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809393B0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80939470 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093951C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80939594 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80939794 {
    /* 0x00 */ char pad_0[0xA8];
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_80939994 {
    /* 0x00 */ char pad_0[0xA0];
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_80939C50 {
    /* 0x00 */ char pad_0[0xB0];
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
};                                                  /* size = 0xC8 */

struct _mips2c_stack_func_80939EE0 {};              /* size 0x0 */

struct _mips2c_stack_func_80939EF4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ PosRot *sp24;                        /* inferred */
    /* 0x28 */ CollisionCheckContext *sp28;         /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8093A080 {
    /* 0x00 */ char pad_0[0x60];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_8093A1F0 {
    /* 0x00 */ char pad_0[0x90];
    /* 0x90 */ s32 sp90;                            /* inferred */
    /* 0x94 */ CollisionPoly *sp94;                 /* inferred */
    /* 0x98 */ char pad_98[0x4];
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ char pad_A8[0x8];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_8093A418 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8093A608 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x24];
};                                                  /* size = 0x60 */

s32 func_800C9EBC(GlobalContext *, s32, s32, s32, f32 *, ? *, ? *); /* extern */
? func_809393B0(void *arg0);                        /* static */
? func_80939470(void *arg0);                        /* static */
s32 func_8093951C(ObjBombiwa *arg0, GlobalContext *arg1); /* static */
void func_80939594(Actor *arg0, GlobalContext *arg1); /* static */
void func_80939794(ObjBombiwa *arg0, GlobalContext *arg1); /* static */
void func_80939994(GlobalContext *arg0, Vec3f *arg1); /* static */
void func_80939C50(GlobalContext *arg0, Vec3f *arg1); /* static */
void func_80939EE0(ObjBombiwa *arg0);               /* static */
void func_8093A080(ObjBombiwa *arg0);               /* static */
void func_8093A418(void *arg0, GlobalContext *arg1); /* static */
void func_8093A608(void *arg0, GraphicsContext **arg1); /* static */
extern Gfx D_060009E0;
extern ? D_06000AF0;
extern ? D_06004560;
extern ? D_06004688;
extern Gfx D_06005990;
static ? D_8093A998;                                /* unable to generate initializer */
static CollisionCheckInfoInit D_8093A9B8 = {0, 0xC, 0x3C, 0xFF};
static InitChainEntry D_8093A9C0[4];                /* unable to generate initializer */
static s16 D_8093A9D0[8] = {0x11, 0xE, 0xA, 8, 7, 5, 3, 2};
static s16 D_8093A9E0 = 0x10;
static ? D_8093A9E2;                                /* unable to generate initializer */

? func_809393B0(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    if ((arg0->unk_155 & 2) != 0) {
        temp_v1 = arg0->unk_14C;
        temp_v0 = *arg0->unk_180;
        if (temp_v0 & 0x80000000) {
            if ((temp_v1 != 0) && (Math3D_DistanceSquared(arg0 + 0x24, temp_v1 + 0x24) < 22500.0f)) {
                return 1;
            }
            goto block_11;
        }
        if ((temp_v0 & 8) != 0) {
            if ((temp_v1 != 0) && (Math3D_DistanceSquared(arg0 + 0x24, temp_v1 + 0x24) < 9025.0f)) {
                return 1;
            }
            goto block_11;
        }
        if ((temp_v0 & 0x500) != 0) {
            return 1;
        }
        goto block_11;
    }
block_11:
    return 0;
}

? func_80939470(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    if (((arg0->unk_155 & 2) != 0) && (temp_v0 = arg0->unk_14C, (temp_v0 != 0))) {
        temp_v1 = *arg0->unk_180;
        if (temp_v1 & 0x80000000) {
            if (Math3D_DistanceSquared(arg0 + 0x24, temp_v0 + 0x24) < 30625.0f) {
                return 1;
            }
            goto block_8;
        }
        if (((temp_v1 & 8) != 0) && (Math3D_DistanceSquared(arg0 + 0x24, temp_v0 + 0x24) < 13225.0f)) {
            return 1;
        }
        goto block_8;
    }
block_8:
    return 0;
}

s32 func_8093951C(ObjBombiwa *arg0, GlobalContext *arg1) {
    ? sp30;
    f32 sp2C;
    ? sp28;

    if ((func_800C9EBC(arg1, arg1 + 0x830, arg0->actor.world.pos.x, arg0->actor.world.pos.z, &sp2C, &sp30, &sp28) != 0) && (arg0->actor.world.pos.y < sp2C)) {
        return 1;
    }
    return 0;
}

void func_80939594(Actor *arg0, GlobalContext *arg1) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    s32 sp24;
    Actor *temp_a3;
    CollisionPoly **temp_a1;
    f32 temp_f16;

    temp_a3 = arg0;
    sp28 = temp_a3->world.pos.x;
    temp_a1 = temp_a3 + 0x80;
    sp2C = temp_a3->world.pos.y + 30.0f;
    temp_f16 = temp_a3->world.pos.z;
    arg0 = temp_a3;
    sp30 = temp_f16;
    arg0->floorHeight = func_800C411C(arg1 + 0x830, temp_a1, &sp24, temp_a3, (Vec3f *) &sp28);
}

void ObjBombiwa_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp34;
    ColliderCylinderInit **sp28;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    ColliderCylinderInit **temp_v0;
    u32 temp_v1;
    ObjBombiwa *this = (ObjBombiwa *) thisx;

    sp34 = ((s32) this->actor.params >> 8) & 1;
    Actor_ProcessInitChain((Actor *) this, D_8093A9C0);
    temp_a1 = &this->unk_144;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_v0 = (sp34 * 0x10) + &D_8093A998;
    sp28 = temp_v0;
    Collider_SetCylinder(globalCtx, sp24, (Actor *) this, *temp_v0);
    Collider_UpdateCylinder((Actor *) this, sp24);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, NULL, &D_8093A9B8);
    if (sp28 == &D_8093A998) {
        if (this->actor.shape.rot.y == 0) {
            temp_v1 = Rand_Next() >> 0x10;
            this->actor.world.rot.y = (s16) temp_v1;
            this->actor.shape.rot.y = (s16) temp_v1;
        }
        func_80939594((Actor *) this, globalCtx);
    }
    ActorShape_Init(&this->actor.shape, -200.0f, sp28->unk_4, 9.8f);
    this->actor.world.pos.y = this->actor.home.pos.y + 20.0f;
    this->actor.draw = sp28->unk_8;
    if (func_8093951C(this, globalCtx) != 0) {
        this->unk_203 |= 1;
    }
    func_80939EE0(this);
}

void ObjBombiwa_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjBombiwa *this = (ObjBombiwa *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
}

void func_80939794(ObjBombiwa *arg0, GlobalContext *arg1) {
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 *temp_s2;
    f32 *temp_s3;
    s16 *temp_s0;
    s16 temp_v0;
    s16 *phi_s0;
    s32 phi_v1;

    temp_s3 = &spA8;
    temp_s2 = &spB4;
    phi_s0 = D_8093A9D0;
    do {
        spB4 = ((Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->actor.home.pos.x;
        spB8 = (Rand_ZeroOne() * 5.0f) + arg0->actor.home.pos.y + 8.0f;
        spBC = ((Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->actor.home.pos.z;
        spA8 = (Rand_ZeroOne() - 0.5f) * 15.0f;
        spAC = (Rand_ZeroOne() * 16.0f) + 5.0f;
        temp_v0 = *phi_s0;
        spB0 = (Rand_ZeroOne() - 0.5f) * 15.0f;
        if ((s32) temp_v0 >= 0xB) {
            phi_v1 = 0x25;
        } else {
            phi_v1 = 0x21;
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s2, (Vec3f *) temp_s3, (Vec3f *) temp_s2, (s16) -0x190, (s16) phi_v1, (s16) 0xA, (s16) 2, (s16) 0, (s16) (s32) temp_v0, (s16) 1, (s16) 0, 0x3C, (s16) -1, (s16) 0x12A, &D_060009E0);
        temp_s0 = phi_s0 + 2;
        phi_s0 = temp_s0;
    } while (temp_s0 != &D_8093A9E0);
    func_800BBFB0(arg1, arg0 + 0x24, 60.0f, 8, (s16) 0x50, (s16) 0x8C, (u8) 1);
}

void func_80939994(GlobalContext *arg0, Vec3f *arg1) {
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 *temp_s3;
    f32 *temp_s5;
    f32 temp_f6;
    s32 temp_s1;
    s32 phi_s1;
    s32 phi_v0;
    s32 phi_s0;

    temp_s5 = &spA0;
    temp_s3 = &spAC;
    phi_s1 = 0;
    do {
        temp_f6 = (Rand_ZeroOne() - 0.5f) * 80.0f;
        spAC = temp_f6;
        spB0 = Rand_ZeroOne() * 120.0f;
        spB4 = (Rand_ZeroOne() - 0.5f) * 80.0f;
        spA0 = ((Rand_ZeroOne() - 0.5f) * 3.0f) + (temp_f6 * 0.2f);
        spA4 = (Rand_ZeroOne() * 16.0f) + 5.0f;
        spA8 = ((Rand_ZeroOne() - 0.5f) * 3.0f) + (spB4 * 0.2f);
        spAC = temp_f6 + arg1->x;
        spB0 += arg1->y;
        spB4 += arg1->z;
        phi_v0 = 0x21;
        if (phi_s1 >= 0xE) {
            phi_s0 = 0x3C;
        } else {
            phi_v0 = 0x41;
            if (phi_s1 >= 0xC) {
                phi_s0 = 0x3C;
            } else {
                phi_v0 = 0x20;
                phi_s0 = 0x28;
                if (Rand_ZeroOne() < 0.7f) {
                    phi_v0 = 0x40;
                }
            }
        }
        EffectSsKakera_Spawn(arg0, (Vec3f *) temp_s3, (Vec3f *) temp_s5, (Vec3f *) temp_s3, (s16) -0x1C2, (s16) phi_v0, (s16) 0xF, (s16) 0, (s16) 0, (s16) phi_s1, (s16) 1, (s16) 0, phi_s0, (s16) -1, (s16) 0x12A, &D_06005990);
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x10);
    func_800BBFB0(arg0, arg1, 120.0f, 3, (s16) 0x50, (s16) 0x8C, (u8) 1);
    spAC = arg1->x;
    spB0 = arg1->y + 70.0f;
    spB4 = arg1->z;
    func_800BBFB0(arg0, (Vec3f *) temp_s3, 120.0f, 3, (s16) 0x50, (s16) 0x8C, (u8) 1);
}

void func_80939C50(GlobalContext *arg0, Vec3f *arg1) {
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 *temp_s3;
    f32 *temp_s5;
    s16 *temp_s1;
    s16 *phi_s1;
    s32 phi_v0;
    s32 phi_s0;

    temp_s5 = &spB0;
    temp_s3 = &spBC;
    phi_s1 = &D_8093A9E0;
    do {
        spBC = (Rand_ZeroOne() - 0.5f) * 15.0f;
        spC0 = (Rand_ZeroOne() - 0.2f) * 10.0f;
        spC4 = (Rand_ZeroOne() - 0.5f) * 15.0f;
        spB0 = ((Rand_ZeroOne() - 0.5f) * 3.0f) + (spBC * 0.85f);
        spB4 = (Rand_ZeroOne() * 15.0f) + 8.0f;
        spB8 = ((Rand_ZeroOne() - 0.5f) * 3.0f) + (spC4 * 0.85f);
        spBC += arg1->x;
        spC0 += arg1->y;
        spC4 += arg1->z;
        phi_v0 = 0x21;
        if (phi_s1 == &D_8093A9E0) {
            phi_s0 = 0x3C;
        } else {
            phi_v0 = 0x41;
            if (phi_s1 == &D_8093A9E2) {
                phi_s0 = 0x3C;
            } else {
                phi_v0 = 0x20;
                phi_s0 = 0x28;
                if (Rand_ZeroOne() < 0.7f) {
                    phi_v0 = 0x40;
                }
            }
        }
        EffectSsKakera_Spawn(arg0, (Vec3f *) temp_s3, (Vec3f *) temp_s5, (Vec3f *) temp_s3, (s16) -0x1C2, (s16) phi_v0, (s16) 0xF, (s16) 0, (s16) 0, (s16) (s32) *phi_s1, (s16) 1, (s16) 0, phi_s0, (s16) -1, (s16) 0x12A, &D_06005990);
        temp_s1 = phi_s1 + 2;
        phi_s1 = temp_s1;
    } while (temp_s1 != &D_8093A9F0);
    func_800BBFB0(arg0, arg1, 60.0f, 4, (s16) 0x50, (s16) 0x8C, (u8) 1);
}

void func_80939EE0(ObjBombiwa *arg0) {
    arg0->actionFunc = func_80939EF4;
}

void func_80939EF4(ObjBombiwa *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp28;
    PosRot *sp24;
    ColliderCylinder *temp_a2;
    CollisionCheckContext *temp_a1_2;
    CollisionCheckContext *temp_v1;
    PosRot *temp_a1;
    s8 temp_v0;

    if ((this->unk_144.base.acFlags & 2) != 0) {
        this->unk_202 = 5;
    }
    temp_v1 = ((((s32) this->actor.params >> 8) & 1) * 0x10) + &D_8093A998;
    sp28 = temp_v1;
    if (temp_v1->colAT[2](this) != 0) {
        Actor_SetSwitchFlag(globalCtx, this->actor.params & 0x7F);
        temp_a1 = &this->actor.world;
        sp24 = temp_a1;
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) temp_a1, 0x50, 0x2810U);
        if ((((s32) this->actor.params >> 0xF) & 1) != 0) {
            play_sound(0x4802U);
        }
        if (sp28 == &D_8093A998) {
            func_80939794(this, globalCtx);
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        func_80939994(globalCtx, (Vec3f *) sp24);
        this->actor.flags |= 0x10;
        func_8093A080(this);
        return;
    }
    this->unk_144.base.acFlags &= 0xFFFD;
    if (this->actor.xzDistToPlayer < 1400.0f) {
        temp_v0 = this->unk_202;
        if ((s32) temp_v0 > 0) {
            this->unk_202 = temp_v0 - 1;
            if (this->unk_202 == 0) {
                this->unk_144.base.colType = 0xC;
            } else {
                this->unk_144.base.colType = 0xA;
            }
        }
        temp_a2 = &this->unk_144;
        sp24 = (PosRot *) temp_a2;
        temp_a1_2 = &globalCtx->colChkCtx;
        sp28 = temp_a1_2;
        CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) temp_a2);
        CollisionCheck_SetOC(globalCtx, temp_a1_2, (Collider *) temp_a2);
    }
}

void func_8093A080(ObjBombiwa *arg0) {
    f32 temp_f16;
    s32 temp_s3;
    void *phi_s0;
    s16 phi_s2;
    s32 phi_s4;

    phi_s0 = arg0 + 0x190;
    phi_s2 = 0;
    phi_s4 = 0;
    do {
        phi_s0->unk_0 = (f32) ((Rand_ZeroOne() * 0.1f) + 0.05f);
        temp_s3 = phi_s4 + 1;
        phi_s0->unk_4 = (f32) ((Math_SinS(phi_s2) * 50.0f) + arg0->actor.world.pos.x);
        phi_s0->unk_8 = (f32) (((f32) temp_s3 * 31.0f) + arg0->actor.world.pos.y);
        temp_f16 = Math_CosS(phi_s2) * 50.0f;
        phi_s0->unk_14 = phi_s2;
        phi_s0->unk_C = (f32) (temp_f16 + arg0->actor.world.pos.z);
        phi_s0->unk_10 = (f32) ((f32) phi_s4 + 3.0f);
        phi_s0->unk_16 = (s16) (Rand_Next() >> 0x10);
        phi_s0->unk_18 = 0;
        phi_s0->unk_1A = 0;
        phi_s0 += 0x1C;
        phi_s2 = (s16) (phi_s2 + 0x4000);
        phi_s4 = temp_s3;
    } while (temp_s3 != 4);
    arg0->unk_200 = 0;
    arg0->unk_201 = 0x50;
    arg0->actionFunc = func_8093A1F0;
}

void func_8093A1F0(ObjBombiwa *this, GlobalContext *globalCtx) {
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    CollisionPoly *sp94;
    s32 sp90;
    CollisionContext *temp_s3;
    f32 *temp_t9;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f16;
    s32 temp_s4;
    void *temp_s0;
    ObjBombiwa *phi_s2;
    s16 phi_s1;
    s32 phi_s4;

    phi_s2 = this;
    phi_s1 = 0;
    phi_s4 = 0;
    do {
        temp_s0 = phi_s2 + 0x190;
        if ((phi_s2->unk_1AA == 0) && ((temp_s3 = &globalCtx->colCtx, temp_s0->unk_10 = (f32) (temp_s0->unk_10 - 3.0f), temp_f16 = temp_s0->unk_4 + (Math_SinS(phi_s1) * 1.5f), temp_s0->unk_8 = (f32) (temp_s0->unk_8 + temp_s0->unk_10), temp_s0->unk_4 = temp_f16, temp_f10 = Math_CosS(phi_s1) * 1.5f, temp_t9 = &sp9C, temp_s0->unk_14 = (s16) (temp_s0->unk_14 + 0x5DC), temp_s0->unk_C = (f32) (temp_s0->unk_C + temp_f10), sp9C = temp_s0->unk_4, spA0 = temp_s0->unk_8 + 30.0f, spA4 = temp_s0->unk_C, temp_f0 = func_800C411C(temp_s3, &sp94, &sp90, (Actor *) this, (Vec3f *) temp_t9), (temp_f0 <= -31990.0f)) || ((temp_s0->unk_8 - (200.0f * temp_s0->unk_0)) < temp_f0))) {
            this->unk_200 += 1;
            temp_s0->unk_1A = 1;
            func_80939C50(globalCtx, temp_s0 + 4);
        }
        temp_s4 = phi_s4 + 0x1C;
        phi_s2 += 0x1C;
        phi_s1 = (s16) (phi_s1 + 0x4000);
        phi_s4 = temp_s4;
    } while (temp_s4 != 0x70);
    this->unk_201 += -1;
    if (((s32) this->unk_200 >= 4) || ((s32) this->unk_201 <= 0)) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void ObjBombiwa_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjBombiwa *this = (ObjBombiwa *) thisx;
    this->actionFunc(this, globalCtx);
}

void func_8093A418(void *arg0, GlobalContext *arg1) {
    f32 sp28;
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_a1;
    f32 temp_f0;
    f32 temp_f2;

    temp_f0 = arg0->unk_F4;
    if ((temp_f0 <= 2200.0f) || (((arg0->unk_203 & 1) != 0) && (temp_f0 < 2300.0f))) {
        arg0->unk_D0 = 0xA0;
        func_800BDFC0(arg1, &D_060009E0);
        return;
    }
    if (temp_f0 < 2300.0f) {
        temp_f2 = (2300.0f - temp_f0) * 2.55f;
        temp_a1 = arg1->state.gfxCtx;
        arg0->unk_D0 = (s8) (u32) (temp_f2 * 0.627451f);
        temp_a0 = arg1->state.gfxCtx;
        sp28 = temp_f2;
        arg1 = arg1;
        sp24 = temp_a1;
        func_8012C2DC(temp_a0);
        temp_v0 = temp_a1->polyXlu.p;
        temp_a1->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp24 = temp_a1;
        sp1C = temp_v0;
        sp1C->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_2 = temp_a1->polyXlu.p;
        temp_a1->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFA000000;
        temp_v0_2->words.w1 = ((s32) sp28 & 0xFF) | ~0xFF;
        temp_v0_3 = temp_a1->polyXlu.p;
        temp_a1->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = (u32) &D_06000AF0;
        temp_v0_3->words.w0 = 0xDE000000;
        return;
    }
    arg0->unk_D0 = 0;
}

void func_8093A608(void *arg0, GraphicsContext **arg1) {
    f32 sp38;
    Gfx *temp_s0;
    Gfx *temp_s0_3;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    GraphicsContext *temp_a2;
    GraphicsContext *temp_s5;
    f32 temp_f0;
    f32 temp_f12;
    s32 temp_s2;
    void *temp_s0_2;
    void *phi_s1;
    s32 phi_s2;

    temp_a2 = *arg1;
    temp_s5 = temp_a2;
    if (func_80939EF4 == arg0->unk_204) {
        temp_f0 = arg0->unk_F4;
        if ((temp_f0 <= 2200.0f) || (((arg0->unk_203 & 1) != 0) && (temp_f0 < 2300.0f))) {
            func_8012C28C(temp_a2);
            temp_v1 = temp_s5->polyOpa.p;
            temp_s5->polyOpa.p = temp_v1 + 8;
            temp_v1->words.w0 = 0xDB060020;
            temp_v1->words.w1 = (u32) D_801AEFA0;
            temp_s0 = temp_s5->polyOpa.p;
            temp_s5->polyOpa.p = temp_s0 + 8;
            temp_s0->words.w0 = 0xDA380003;
            temp_s0->words.w1 = Matrix_NewMtx(*arg1);
            temp_v1_2 = temp_s5->polyOpa.p;
            temp_s5->polyOpa.p = temp_v1_2 + 8;
            temp_v1_2->words.w1 = -1;
            temp_v1_2->words.w0 = 0xFA00009B;
            temp_v1_3 = temp_s5->polyOpa.p;
            temp_s5->polyOpa.p = temp_v1_3 + 8;
            temp_v1_3->words.w0 = 0xDE000000;
            temp_v1_3->words.w1 = (u32) &D_06004560;
            func_8012C2DC(*arg1);
            temp_v0_5 = temp_s5->polyXlu.p;
            temp_s5->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDA380003;
            temp_v0_5->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_6 = temp_s5->polyXlu.p;
            temp_s5->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDE000000;
            temp_v0_6->words.w1 = (u32) &D_06004688;
            return;
        }
        if (temp_f0 < 2300.0f) {
            sp38 = (2300.0f - temp_f0) * 2.55f;
            func_8012C2DC(temp_a2);
            temp_v0 = temp_s5->polyXlu.p;
            temp_s5->polyXlu.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xDB060020;
            temp_v0->words.w1 = (u32) D_801AEF88;
            temp_v0_2 = temp_s5->polyXlu.p;
            temp_s5->polyXlu.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDA380003;
            temp_v0_2->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_3 = temp_s5->polyXlu.p;
            temp_s5->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xFA00009B;
            temp_v0_3->words.w1 = ((s32) sp38 & 0xFF) | ~0xFF;
            temp_v0_4 = temp_s5->polyXlu.p;
            temp_s5->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w1 = (u32) &D_06004560;
            temp_v0_4->words.w0 = 0xDE000000;
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return;
    }
    func_8012C28C(temp_a2);
    phi_s1 = arg0;
    phi_s2 = 0;
    do {
        temp_s0_2 = phi_s1 + 0x190;
        if (phi_s1->unk_1AA == 0) {
            SysMatrix_SetStateRotationAndTranslation(temp_s0_2->unk_4, temp_s0_2->unk_8, temp_s0_2->unk_C, temp_s0_2 + 0x14);
            temp_f12 = temp_s0_2->unk_0;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            temp_s0_3 = temp_s5->polyOpa.p;
            temp_s5->polyOpa.p = temp_s0_3 + 8;
            temp_s0_3->words.w0 = 0xDA380003;
            temp_s0_3->words.w1 = Matrix_NewMtx(*arg1);
            temp_v1_4 = temp_s5->polyOpa.p;
            temp_s5->polyOpa.p = temp_v1_4 + 8;
            temp_v1_4->words.w1 = (u32) &D_06005990;
            temp_v1_4->words.w0 = 0xDE000000;
        }
        temp_s2 = phi_s2 + 0x1C;
        phi_s1 += 0x1C;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x70);
}
