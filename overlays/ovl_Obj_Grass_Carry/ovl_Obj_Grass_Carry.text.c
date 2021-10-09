typedef struct ObjGrassCarry {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ s32 unk_190;                        /* inferred */
    /* 0x194 */ char pad_194[0x8];                  /* maybe part of unk_190[3]? */
    /* 0x19C */ void (*actionFunc)(ObjGrassCarry *, GlobalContext *);
} ObjGrassCarry;                                    /* size = 0x1A0 */

struct _mips2c_stack_ObjGrassCarry_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjGrassCarry_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_ObjGrassCarry_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AAE60 {};              /* size 0x0 */

struct _mips2c_stack_func_809AAE94 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AAF18 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AAF58 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809AAF9C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AAFE8 {
    /* 0x00 */ char pad_0[0xB0];
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
};                                                  /* size = 0xC8 */

struct _mips2c_stack_func_809AB3C4 {};              /* size 0x0 */

struct _mips2c_stack_func_809AB3D8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AB428 {};              /* size 0x0 */

struct _mips2c_stack_func_809AB43C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AB474 {};              /* size 0x0 */

struct _mips2c_stack_func_809AB4A8 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809AB5FC {};              /* size 0x0 */

struct _mips2c_stack_func_809AB610 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809AB6FC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AB77C {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x8];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_809ABB7C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_809AAE60(Actor *arg0);                    /* static */
void func_809AAE94(void *arg0, f32 arg1);           /* static */
void func_809AAF18(Actor *arg0);                    /* static */
void func_809AAF58(Actor *arg0, GlobalContext *arg1); /* static */
void func_809AAF9C(Vec3f *arg0, s16 arg1, GlobalContext *arg2); /* static */
void func_809AAFE8(Vec3f *arg0, GlobalContext *arg1); /* static */
void func_809AB3C4(ObjGrassCarry *arg0);            /* static */
void func_809AB3D8(void *arg0, ? arg1);             /* static */
void func_809AB428(Actor *arg0);                    /* static */
void func_809AB43C(void *arg0, ? arg1);             /* static */
void func_809AB474(void *arg0);                     /* static */
void func_809AB4A8(Actor *arg0, GlobalContext *arg1); /* static */
void func_809AB5FC(Actor *arg0);                    /* static */
void func_809AB610(Actor *arg0, GlobalContext *arg1); /* static */
void func_809AB6FC(Actor *arg0);                    /* static */
void func_809AB77C(Actor *arg0, GlobalContext *arg1); /* static */
void func_809ABB7C(Actor *this, GlobalContext *globalCtx); /* static */
static ColliderCylinderInit D_809ABBD0 = {
    {0xA, 9, 0, 0x29, 0x20, 1},
    {0, {0x400000, 0, 2}, {0, 0, 0}, 0x19, 0, 1},
    {0xA, 0x2C, 0, {0, 0, 0}},
};
static s16 D_809ABBFC = 0;
static s16 D_809ABC00 = 0;
static s16 D_809ABC04 = 0;
static s16 D_809ABC08 = 0;
static ? D_809ABC0C;                                /* unable to generate initializer */
static ? D_809ABC3C;                                /* unable to generate initializer */
static InitChainEntry D_809ABC4C[5];                /* unable to generate initializer */

void func_809AAE60(Actor *arg0) {
    f32 temp_f0;

    temp_f0 = arg0->minVelocityY;
    arg0->velocity.y += arg0->gravity;
    if (arg0->velocity.y < temp_f0) {
        arg0->velocity.y = temp_f0;
    }
}

void func_809AAE94(void *arg0, f32 arg1) {
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;

    arg1 = arg1;
    temp_f2 = arg0->unk_0;
    temp_f14 = arg0->unk_4;
    temp_f16 = arg0->unk_8;
    temp_f12 = arg1 + (((Rand_ZeroOne() * 0.2f) - 0.1f) * arg1);
    temp_f18 = temp_f16 * temp_f12;
    temp_f10 = temp_f14 - (temp_f14 * temp_f12);
    arg0->unk_0 = (f32) (temp_f2 - (temp_f2 * temp_f12));
    arg0->unk_4 = temp_f10;
    arg0->unk_8 = (f32) (temp_f16 - temp_f18);
}

void func_809AAF18(Actor *arg0) {
    func_809AAE60(arg0);
    func_809AAE94(arg0 + 0x64, 0.05f);
    Actor_ApplyMovement(arg0);
}

void func_809AAF58(Actor *arg0, GlobalContext *arg1) {
    Actor_UpdateBgCheckInfo(arg1, arg0, 7.5f, 35.0f, 0.0f, 0xC5U);
}

void func_809AAF9C(Vec3f *arg0, s16 arg1, GlobalContext *arg2) {
    if ((arg1 & 0x10) == 0) {
        Item_DropCollectibleRandom(arg2, NULL, arg0, (s16) ((s32) (arg1 << 0x14) >> 0x10));
    }
}

void func_809AAFE8(Vec3f *arg0, GlobalContext *arg1) {
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    ? *temp_s0;
    f32 *temp_s2;
    f32 *temp_s4;
    ? *phi_s0;

    temp_s4 = &spBC;
    temp_s2 = &spB0;
    phi_s0 = &D_809ABC0C;
    do {
        spB0 = arg0->x + (phi_s0->unk_0 * 8.0f);
        spB4 = arg0->y + (phi_s0->unk_4 * 8.0f) + 10.0f;
        spB8 = arg0->z + (phi_s0->unk_8 * 8.0f);
        spBC = (Rand_ZeroOne() - 0.5f) * 8.0f;
        spC0 = Rand_ZeroOne() * 10.0f;
        spC4 = (Rand_ZeroOne() - 0.5f) * 8.0f;
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s2, (Vec3f *) temp_s4, (Vec3f *) temp_s2, (s16) -0x64, (s16) 0x40, (s16) 0x28, (s16) 3, (s16) 0, (s16) (s32) *(&D_809ABC3C + (((s32) (Rand_ZeroOne() * 111.1f) & 7) * 2)), (s16) 0, (s16) 0, 0x50, (s16) -1, (s16) 1, (Gfx *) &D_040527F0);
        spB0 = arg0->x + (phi_s0->unk_0 * 16.0f);
        spB4 = arg0->y + (phi_s0->unk_4 * 16.0f) + 10.0f;
        spB8 = arg0->z + (phi_s0->unk_8 * 16.0f);
        spBC = (Rand_ZeroOne() - 0.5f) * 6.0f;
        spC0 = Rand_ZeroOne() * 10.0f;
        spC4 = (Rand_ZeroOne() - 0.5f) * 6.0f;
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s2, (Vec3f *) temp_s4, (Vec3f *) temp_s2, (s16) -0x64, (s16) 0x40, (s16) 0x28, (s16) 3, (s16) 0, (s16) (s32) *(&D_809ABC3C + (((s32) (Rand_ZeroOne() * 111.1f) % 7) * 2)), (s16) 0, (s16) 0, 0x50, (s16) -1, (s16) 1, (Gfx *) &D_040528B0);
        temp_s0 = phi_s0 + 0xC;
        phi_s0 = temp_s0;
    } while (temp_s0 != &D_809ABC3C);
}

void ObjGrassCarry_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    ObjGrassCarry *this = (ObjGrassCarry *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_809ABC4C);
    temp_a1 = &this->unk_144;
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_809ABBD0);
    this->actor.colChkInfo.mass = 0x50;
    func_809AB3C4(this);
}

void ObjGrassCarry_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *temp_a1;
    s32 temp_v1;
    void *temp_v0;
    ObjGrassCarry *this = (ObjGrassCarry *) thisx;

    temp_a1 = &this->unk_144;
    this = this;
    Collider_DestroyCylinder(globalCtx, temp_a1);
    temp_v1 = this->unk_190;
    if (temp_v1 != 0) {
        temp_v0 = temp_v1 + (this->actor.params * 4);
        if (this == temp_v0->unk_3298) {
            *(temp_v0 + 0x3298) = 0;
            this->unk_190 = 0;
        }
    }
}

void func_809AB3C4(ObjGrassCarry *arg0) {
    arg0->actionFunc = func_809AB3D8;
}

void func_809AB3D8(ObjGrassCarry *arg0, GlobalContext *arg1) {
    void *temp_v0;

    temp_v0 = arg0->unk_190;
    if (temp_v0 != 0) {
        if (temp_v0->unk_3292 != arg0->actor.params) {
            func_809AB474();
            return;
        }
        func_809AB428();
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_809AB428(Actor *arg0) {
    arg0->unk_19C = func_809AB43C;
}

void func_809AB43C(void *arg0, ? arg1) {
    if (arg0->unk_190->unk_3292 != arg0->unk_1C) {
        func_809AB474();
    }
}

void func_809AB474(void *arg0) {
    s16 temp_v0;

    arg0->unk_C0 = 0;
    temp_v0 = arg0->unk_C0;
    arg0->unk_19C = func_809AB4A8;
    arg0->unk_194 = 0;
    arg0->unk_BE = temp_v0;
    arg0->unk_BC = temp_v0;
    arg0->unk_34 = temp_v0;
    arg0->unk_32 = temp_v0;
    arg0->unk_30 = temp_v0;
}

void func_809AB4A8(Actor *arg0, GlobalContext *arg1) {
    Actor *sp20;
    Vec3f *temp_v0;
    Vec3f *temp_v0_3;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0_4;
    void *temp_v0_2;

    if (Actor_HasParent(arg0, arg1) != 0) {
        func_809AB5FC(arg0);
        temp_v0 = arg0->unk_194;
        if (temp_v0 != 0) {
            temp_v0->unk_F = (u8) (temp_v0->unk_F | 4);
        }
        temp_v0_2 = arg0->unk_190;
        arg0->draw = func_809ABB7C;
        arg0->shape.shadowDraw = func_800B3FC0;
        arg0->shape.shadowAlpha = 0x3C;
        arg0->shape.shadowScale = 1.0f;
        temp_v0_2->unk_3292 = (s16) (temp_v0_2->unk_3292 ^ 1);
        arg0->room = -1;
        Audio_PlaySoundAtPosition(arg1, (Vec3f *) &arg0->world, 0x14, 0x869U);
        return;
    }
    temp_v0_3 = arg0->unk_190->unk_3294;
    if (temp_v0_3 != 0) {
        sp20 = arg1->actorCtx.actorList[2].first;
        arg0->unk_194 = temp_v0_3;
        Math_Vec3f_Copy((Vec3f *) &arg0->world, temp_v0_3);
        temp_v0_4 = arg0->unk_194->unk_C;
        arg0->world.rot.y = temp_v0_4;
        arg0->shape.rot.y = temp_v0_4;
        arg0->unk_198 = (s16) arg0->unk_194->unk_E;
        arg0->xzDistToPlayer = Actor_XZDistanceBetweenActors(arg0, sp20);
        temp_f0 = Actor_YDistance(arg0, sp20);
        temp_f2 = arg0->xzDistToPlayer;
        arg0->yDistToPlayer = temp_f0;
        arg0->xyzDistToPlayerSq = (temp_f2 * temp_f2) + (temp_f0 * temp_f0);
        arg0->yawTowardsPlayer = Actor_YawBetweenActors(arg0, sp20);
        func_800B8BB0(arg0, arg1);
    }
}

void func_809AB5FC(Actor *arg0) {
    arg0->unk_19C = func_809AB610;
}

void func_809AB610(Actor *arg0, GlobalContext *arg1) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s32 sp2C;

    if (Actor_HasNoParent(arg0, arg1) != 0) {
        func_809AB6FC(arg0);
        arg0->velocity.x = Math_SinS(arg0->world.rot.y) * arg0->speedXZ;
        arg0->velocity.z = Math_CosS(arg0->world.rot.y) * arg0->speedXZ;
        arg0->gravity = -0.1f;
        arg0->minVelocityY = -17.0f;
        func_809AAF18(arg0);
        func_809AAF58(arg0, arg1);
        arg0->gravity = -3.2f;
        return;
    }
    sp30 = arg0->world.pos.x;
    sp34 = arg0->world.pos.y + 20.0f;
    sp38 = arg0->world.pos.z;
    arg0->floorHeight = func_800C411C(&arg1->colCtx, &arg0->floorPoly, &sp2C, arg0, (Vec3f *) &sp30);
}

void func_809AB6FC(Actor *arg0) {
    arg0->unk_19C = func_809AB77C;
    D_809ABBFC = -0xBB8;
    D_809ABC04 = (s16) (s32) ((Rand_ZeroOne() - 0.5f) * 1600.0f);
    D_809ABC00 = 0;
    D_809ABC08 = 0;
    arg0->unk_19A = 0x3C;
}

void func_809AB77C(Actor *arg0, GlobalContext *arg1) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    Actor *temp_s0_2;
    CollisionCheckContext *temp_s1_2;
    Vec3f *temp_s0;
    f32 *temp_s3;
    s32 temp_s1;
    s32 temp_v0;
    u16 temp_v1_2;
    u8 temp_v1;
    void *temp_v0_2;
    s16 phi_s0;
    s32 phi_s1;

    temp_v1 = arg0->unk_154;
    temp_s0 = arg0 + 0x24;
    temp_v0 = (temp_v1 & 2) != 0;
    if (temp_v0 != 0) {
        arg0->unk_154 = (u8) (temp_v1 & 0xFFFD);
    }
    temp_v1_2 = arg0->bgCheckFlags;
    arg0->unk_19A = (s16) (arg0->unk_19A - 1);
    if (((temp_v1_2 & 0xB) != 0) || (temp_v0 != 0) || ((s32) arg0->unk_19A <= 0)) {
        func_809AAFE8(temp_s0, arg1);
        func_809AAF9C(temp_s0, arg0->unk_198, arg1);
        temp_v0_2 = arg0->unk_190;
        arg0->draw = NULL;
        arg0->shape.shadowDraw = NULL;
        if (temp_v0_2 != 0) {
            arg0->room = temp_v0_2->unk_3;
        }
        if ((arg0->bgCheckFlags & 0x20) == 0) {
            Audio_PlaySoundAtPosition(arg1, temp_s0, 0x14, 0x284EU);
        }
        func_809AB428(arg0);
        return;
    }
    phi_s0 = 0;
    if ((temp_v1_2 & 0x40) != 0) {
        sp60 = arg0->world.pos.y + arg0->yDistToWater;
        temp_s3 = &sp5C;
        phi_s1 = 0;
        do {
            sp5C = (Math_SinS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s0)) * 15.0f) + arg0->world.pos.x;
            sp64 = (Math_CosS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s0)) * 15.0f) + arg0->world.pos.z;
            EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s3, NULL, NULL, (s16) 0, (s16) 0xBE);
            temp_s1 = phi_s1 + 1;
            phi_s0 = (s16) (phi_s0 + 0x4000);
            phi_s1 = temp_s1;
        } while (temp_s1 != 4);
        sp5C = arg0->world.pos.x;
        sp64 = arg0->world.pos.z;
        EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s3, NULL, NULL, (s16) 0, (s16) 0x118);
        EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_s3, 0x12C, 0x2BC, (s16) 0);
        arg0->minVelocityY = -3.0f;
        arg0->velocity.x *= 0.1f;
        arg0->velocity.y *= 0.4f;
        arg0->velocity.z *= 0.1f;
        arg0->gravity *= 0.5f;
        D_809ABC00 = (s16) ((s32) D_809ABC00 >> 1);
        D_809ABBFC = (s16) ((s32) D_809ABBFC >> 1);
        D_809ABC08 = (s16) ((s32) D_809ABC08 >> 1);
        D_809ABC04 = (s16) ((s32) D_809ABC04 >> 1);
        arg0->bgCheckFlags &= 0xFFBF;
        Audio_PlaySoundAtPosition(arg1, arg0 + 0x24, 0x28, 0x28C5U);
    }
    Math_StepToS(&D_809ABC00, D_809ABBFC, 0x1F4);
    Math_StepToS(&D_809ABC08, D_809ABC04, 0xAA);
    arg0->shape.rot.x += D_809ABC00;
    arg0->shape.rot.y += D_809ABC08;
    func_809AAF18(arg0);
    func_809AAF58(arg0, arg1);
    temp_s0_2 = arg0 + 0x144;
    Collider_UpdateCylinder(arg0, (ColliderCylinder *) temp_s0_2);
    temp_s1_2 = &arg1->colChkCtx;
    CollisionCheck_SetAT(arg1, temp_s1_2, (Collider *) temp_s0_2);
    CollisionCheck_SetOC(arg1, temp_s1_2, (Collider *) temp_s0_2);
}

void ObjGrassCarry_Update(Actor *thisx, GlobalContext *globalCtx) {
    void (*temp_v0)(ObjGrassCarry *, GlobalContext *);
    ObjGrassCarry *this = (ObjGrassCarry *) thisx;

    if ((this->unk_190 == 0) && (temp_v0 = this->actionFunc, (func_809AB610 != temp_v0)) && (func_809AB77C != temp_v0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actionFunc(this, globalCtx);
}

void func_809ABB7C(Actor *this, GlobalContext *globalCtx) {
    func_800BDFC0(globalCtx, (Gfx *) &D_050078A0);
}
