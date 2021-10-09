typedef struct EnBaguo {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ Vec3s unk188;                       /* inferred */
    /* 0x18E */ char pad18E[0xC];                   /* maybe part of unk188[3]? */
    /* 0x19A */ Vec3s unk19A;                       /* inferred */
    /* 0x1A0 */ char pad1A0[0xC];                   /* maybe part of unk19A[3]? */
    /* 0x1AC */ void (*actionFunc)(EnBaguo *, GlobalContext *);
    /* 0x1B0 */ s16 unk1B0;                         /* inferred */
    /* 0x1B2 */ s16 unk1B2;                         /* inferred */
    /* 0x1B4 */ s16 unk1B4;                         /* inferred */
    /* 0x1B6 */ s16 unk1B6;                         /* inferred */
    /* 0x1B8 */ s16 unk1B8;                         /* inferred */
    /* 0x1BA */ char pad1BA[0x2];
    /* 0x1BC */ f32 unk1BC;                         /* inferred */
    /* 0x1C0 */ u8 unk1C0;                          /* inferred */
    /* 0x1C1 */ char pad1C1[0x3];                   /* maybe part of unk1C0[4]? */
    /* 0x1C4 */ Vec3f unk1C4;                       /* inferred */
    /* 0x1D0 */ Vec3f unk1D0;                       /* inferred */
    /* 0x1DC */ ColliderJntSph unk1DC;              /* inferred */
    /* 0x1FC */ ColliderJntSphElement unk1FC;       /* inferred */
    /* 0x23C */ char pad23C[0x690];                 /* maybe part of unk1FC[27]? */
} EnBaguo;                                          /* size = 0x8CC */

struct _mips2c_stack_EnBaguo_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnBaguo_Init {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnBaguo_Update {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A3B220 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A3B2CC {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A3B3E0 {
    /* 0x00 */ char pad0[0x3E];
    /* 0x3E */ s16 sp3E;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A3B5E0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A3B794 {};              /* size 0x0 */

struct _mips2c_stack_func_80A3B7B8 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A3B8F8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A3B958 {
    /* 0x00 */ char pad0[0x88];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_80A3BE24 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A3BE60 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ GraphicsContext *sp2C;               /* inferred */
    /* 0x30 */ char pad30[0x8];                     /* maybe part of sp2C[3]? */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A3BF0C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A3C008 {
    /* 0x00 */ char pad0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A3C17C {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

void func_80A3B220(EnBaguo *, GlobalContext *);     /* static */
void func_80A3B2CC(EnBaguo *, GlobalContext *);     /* static */
void func_80A3B3E0(EnBaguo *, GlobalContext *);     /* static */
void func_80A3B5E0(EnBaguo *, GlobalContext *);     /* static */
void func_80A3B794(EnBaguo *arg0);                  /* static */
void func_80A3B7B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A3B8F8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A3B958(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A3BE24(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80A3BE60(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A3BF0C(Actor *arg0, PosRot *arg1, f32 *arg2, f32 *arg3, f32 arg4, s32 arg5); /* static */
void func_80A3C008(EnBaguo *arg0, GlobalContext *arg1); /* static */
void func_80A3C17C(Actor *arg0, GlobalContext *arg1); /* static */
extern SkeletonHeader D_060020E8;
static ColliderJntSphElementInit D_80A3C2F0 = {{0, {0xF7CFFFFF, 4, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1}, {1, {{0, 0, 0}, 0}, 1}};
static ColliderJntSphInit D_80A3C314 = {{0xC, 0x11, 9, 0x39, 0x10, 0}, 1, &D_80A3C2F0};
static DamageTable D_80A3C324 = {
    {
        0xF0,
        0xF0,
        0,
        0xE1,
        0xE3,
        0xF0,
        0,
        0xE3,
        0xE2,
        0xE1,
        0xE1,
        0xF0,
        0xF0,
        0xE1,
        0xE2,
        0xF0,
        0xF0,
        0xE1,
        0xF0,
        0,
        0,
        0,
        0,
        0xE1,
        0xE1,
        0,
        0,
        0,
        0,
        0,
        0,
        0xE1,
    },
};
static ? D_80A3C344;                                /* unable to generate initializer */
static ? D_80A3C350;                                /* unable to generate initializer */
static ? D_80A3C35C;                                /* unable to generate initializer */

void EnBaguo_Init(EnBaguo *this, GlobalContext *globalCtx) {
    f32 temp_f6;
    u32 temp_t2;
    EnBaguo *this = (EnBaguo *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 0.0f);
    SkelAnime_Init(globalCtx, &this->unk144, &D_060020E8, NULL, &this->unk188, &this->unk19A, 3);
    temp_f6 = (f32) this->actor.world.rot.z;
    this->actor.hintId = 0xB;
    this->actor.world.rot.z = 0;
    this->unk1BC = 240.0f + (temp_f6 * 40.0f);
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.targetMode = 2;
    Collider_InitAndSetJntSph(globalCtx, &this->unk1DC, (Actor *) this, &D_80A3C314, &this->unk1FC);
    this->unk1DC.elements->dim.modelSphere.radius = 0x1E;
    this->unk1DC.elements->dim.scale = 1.0f;
    this->unk1DC.elements->dim.modelSphere.center.x = 0x50;
    this->unk1DC.elements->dim.modelSphere.center.y = 0x50;
    this->unk1DC.elements->dim.modelSphere.center.z = 0;
    temp_t2 = this->actor.flags | 0x8000000;
    this->actor.flags = temp_t2;
    this->actor.colChkInfo.damageTable = &D_80A3C324;
    this->actor.flags = temp_t2 & ~1;
    this->unk1DC.base.acFlags |= 4;
    this->actionFunc = func_80A3B220;
    this->actor.shape.yOffset = -3000.0f;
    this->actor.gravity = -3.0f;
}

void EnBaguo_Destroy(EnBaguo *this, GlobalContext *globalCtx) {
    EnBaguo *this = (EnBaguo *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk1DC);
}

void func_80A3B220(EnBaguo *arg0, GlobalContext *arg1) {
    EnBaguo *temp_a2;
    u32 temp_t1;
    u32 temp_t9;
    EnBaguo *phi_a2;

    arg0->unk1B6 = 0;
    phi_a2 = arg0;
    if (arg0->actor.xzDistToPlayer < 200.0f) {
        arg0 = arg0;
        temp_a2 = arg0;
        phi_a2 = temp_a2;
        if (Player_GetMask(arg1) != 0x10) {
            temp_a2->actor.draw = func_80A3BE60;
            arg0 = temp_a2;
            Audio_PlayActorSound2((Actor *) temp_a2, 0x39C9U);
            arg0->actor.world.rot.z = 0;
            temp_t9 = arg0->actor.flags & 0xF7FFFFFF;
            temp_t1 = temp_t9 | 1;
            arg0->actor.flags = temp_t9;
            arg0->actor.flags = temp_t1;
            arg0->actionFunc = func_80A3B2CC;
            arg0->actor.world.rot.x = arg0->actor.world.rot.z;
            phi_a2 = arg0;
        }
    }
    phi_a2->actor.shape.rot.y = phi_a2->actor.world.rot.y;
}

void func_80A3B2CC(EnBaguo *arg0, GlobalContext *arg1) {
    arg0->actor.world.rot.y += 0x1518;
    arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
    if ((arg1->gameplayFrames & 7) == 0) {
        func_800BBDAC(arg1, (Actor *) arg0, (Vec3f *) &arg0->actor.world, arg0->actor.shape.shadowScale - 20.0f, 0xA, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 1);
    }
    Math_ApproachF(&arg0->actor.shape.shadowScale, 50.0f, 0.3f, 5.0f);
    Math_ApproachF(&arg0->actor.shape.yOffset, 2700.0f, 100.0f, 500.0f);
    if (arg0->actor.shape.yOffset > 2650.0f) {
        arg0->unk1B6 = 1;
        arg0->unk1B4 = 0x3C;
        arg0->actionFunc = func_80A3B3E0;
        arg0->actor.shape.yOffset = 2700.0f;
    }
}

void func_80A3B3E0(EnBaguo *arg0, GlobalContext *arg1) {
    s16 sp3E;
    s16 temp_a1;
    s16 temp_v0;
    s32 temp_v1;
    s32 phi_v1;

    if (arg0->unk1B4 != 0) {
        Math_SmoothStepToS((s16 *) &arg0->actor.world.rot, 0, 0xA, 0x64, (s16) 0x3E8);
        Math_SmoothStepToS(&arg0->actor.world.rot.z, 0, 0xA, 0x64, (s16) 0x3E8);
        if ((arg0->unk1B4 & 8) != 0) {
            temp_a1 = arg0->actor.yawTowardsPlayer;
            if (fabsf((f32) (arg0->actor.world.rot.y - temp_a1)) > 200.0f) {
                Math_SmoothStepToS(&arg0->actor.world.rot.y, temp_a1, 0x1E, 0x12C, (s16) 0x3E8);
                if ((arg1->gameplayFrames & 7) == 0) {
                    func_800BBDAC(arg1, (Actor *) arg0, (Vec3f *) &arg0->actor.world, arg0->actor.shape.shadowScale - 20.0f, 0xA, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 1);
                    Audio_PlayActorSound2((Actor *) arg0, 0x38FBU);
                }
            }
        }
        arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
        return;
    }
    temp_v0 = arg0->actor.yawTowardsPlayer - arg0->actor.world.rot.y;
    phi_v1 = temp_v0 << 0x10;
    if ((s32) temp_v0 < 0) {
        phi_v1 = (s32) temp_v0 * -0x10000;
    }
    temp_v1 = phi_v1 >> 0x10;
    sp3E = (s16) temp_v1;
    Math_Vec3f_Copy(&arg0->unk1D0, &D_801D15B0);
    Math_Vec3f_Copy(&arg0->unk1C4, &D_801D15B0);
    if (temp_v1 < 0x2000) {
        arg0->unk1D0.x = 2000.0f;
    } else {
        arg0->unk1B8 = 0;
        arg0->unk1D0.z = 2000.0f;
        if ((s32) (s16) (arg0->actor.yawTowardsPlayer - arg0->actor.world.rot.y) > 0) {
            arg0->unk1B8 = 1;
        }
    }
    arg0->unk1B4 = 0x26;
    arg0->actor.world.rot.y = arg0->actor.yawTowardsPlayer;
    arg0->unk1C0 = 0;
    arg0->actionFunc = func_80A3B5E0;
}

void func_80A3B5E0(EnBaguo *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;

    temp_f2 = arg0->actor.home.pos.x - arg0->actor.world.pos.x;
    temp_f12 = arg0->actor.home.pos.z - arg0->actor.world.pos.z;
    if ((arg0->unk1BC < sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12))) || (Player_GetMask(arg1) == 0x10)) {
        func_80A3B794(arg0);
        return;
    }
    if (arg0->unk1B4 == 0) {
        arg0->unk1B4 = 0x64;
        arg0->actionFunc = func_80A3B3E0;
        arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
        arg0->actor.speedXZ = 0.0f;
        return;
    }
    if ((arg0->unk1C0 == 0) && ((arg0->unk1DC.base.atFlags & 4) != 0)) {
        arg0->unk1C0 = 1;
        arg0->unk1B8 ^= 1;
        arg0->actor.speedXZ = -7.0f;
    }
    Math_ApproachF((f32 *) &arg0->unk1C4, arg0->unk1D0.x, 0.2f, 1000.0f);
    Math_ApproachF(&arg0->unk1C4.z, arg0->unk1D0.z, 0.2f, 1000.0f);
    Math_ApproachF(&arg0->actor.speedXZ, 5.0f, 0.3f, 0.5f);
    temp_f0 = arg0->unk1C4.z;
    arg0->actor.world.rot.x += (s32) arg0->unk1C4.x;
    if (temp_f0 != 0.0f) {
        if (arg0->unk1B8 == 0) {
            arg0->actor.world.rot.z += (s32) temp_f0;
        } else {
            arg0->actor.world.rot.z -= (s32) temp_f0;
        }
    }
    Audio_PlayActorSound2((Actor *) arg0, 0x3005U);
}

void func_80A3B794(EnBaguo *arg0) {
    arg0->unk1B6 = 2;
    arg0->actionFunc = func_80A3B7B8;
    arg0->actor.speedXZ = 0.0f;
}

void func_80A3B7B8(Actor *arg0, GlobalContext *arg1) {
    u32 temp_t8;

    arg0->world.rot.y += -0x1518;
    arg0->shape.rot.y = arg0->world.rot.y;
    if ((arg1->gameplayFrames & 7) == 0) {
        func_800BBDAC(arg1, arg0, arg0 + 0x24, arg0->shape.shadowScale - 20.0f, 0xA, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 1);
    }
    Math_ApproachF(&arg0->shape.yOffset, -3000.0f, 100.0f, 500.0f);
    Math_ApproachZeroF(&arg0->shape.shadowScale, 0.3f, 5.0f);
    if (arg0->shape.yOffset < -2970.0f) {
        arg0->draw = func_80A3BE60;
        arg0->shape.yOffset = -3000.0f;
        Math_Vec3f_Copy((Vec3f *) &arg0->world, (Vec3f *) &arg0->home);
        Audio_PlayActorSound2(arg0, 0x39C9U);
        temp_t8 = arg0->flags | 0x8000000;
        arg0->flags = temp_t8;
        arg0->flags = temp_t8 & ~1;
        arg0->unk1AC = func_80A3B220;
    }
}

void func_80A3B8F8(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    s16 temp_v0;
    s32 phi_v0;

    temp_v0 = arg0->unk1B4;
    temp_a0 = arg0;
    phi_v0 = (s32) temp_v0;
    if (temp_v0 == 0) {
        arg0 = arg0;
        Actor_MarkForDeath(temp_a0);
        phi_v0 = (s32) arg0->unk1B4;
    }
    if (phi_v0 >= 0x1A) {
        CollisionCheck_SetAT(arg1, arg1 + 0x18884, arg0 + 0x1DC);
    }
}

void func_80A3B958(Actor *arg0, GlobalContext *arg1) {
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    PosRot *temp_s2;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 temp_f6;
    s16 temp_v0;
    s32 temp_s0;
    u16 temp_v0_2;
    u32 temp_t1;
    u8 temp_v0_3;
    s32 phi_s0;
    s32 phi_s0_2;

    temp_s4 = &sp94;
    temp_s5 = &sp88;
    temp_s4->unk0 = D_80A3C344.unk0;
    temp_s4->unk4 = (s32) D_80A3C344.unk4;
    temp_s4->unk8 = (s32) D_80A3C344.unk8;
    temp_s5->unk0 = D_80A3C350.unk0;
    temp_s5->unk4 = (s32) D_80A3C350.unk4;
    temp_s5->unk8 = (s32) D_80A3C350.unk8;
    temp_v0 = arg0->unk1B6;
    phi_s0_2 = 0;
    phi_s0 = 0;
    if ((temp_v0 != 3) && (temp_v0 != 2)) {
        temp_v0_2 = arg0->bgCheckFlags;
        if (((temp_v0_2 & 1) == 0) && (arg0->world.pos.y < (arg0->home.pos.y - 100.0f))) {
            phi_s0 = 1;
        }
        if (((temp_v0_2 & 0x60) != 0) && (arg0->yDistToWater >= 40.0f)) {
            phi_s0 = 1;
        }
        temp_v0_3 = arg0->unk1ED;
        if ((((temp_v0_3 & 2) != 0) || (phi_s0 != 0)) && ((arg0->unk1ED = (u8) (temp_v0_3 & 0xFFFD), (phi_s0 != 0)) || (arg0->colChkInfo.damageEffect == 0xE))) {
            func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 8);
            arg0->unk1B6 = 3;
            temp_s2 = &arg0->focus;
            arg0->speedXZ = 0.0f;
            arg0->shape.shadowScale = 0.0f;
            do {
                temp_f6 = Rand_ZeroOne() - 0.5f;
                sp8C = -1.0f;
                sp88 = temp_f6 * 8.0f;
                sp90 = (Rand_ZeroOne() - 0.5f) * 8.0f;
                sp94 = (Rand_ZeroOne() - 0.5f) * 14.0f;
                sp98 = Rand_ZeroOne() * 30.0f;
                sp9C = (Rand_ZeroOne() - 0.5f) * 14.0f;
                func_80A3BF0C(arg0, temp_s2, temp_s4, temp_s5, (Rand_ZeroFloat(1.0f) * 0.01f) + 0.003f, 0x5A);
                temp_s0 = phi_s0_2 + 1;
                phi_s0_2 = temp_s0;
            } while (temp_s0 != 0x1E);
            Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 2);
            Audio_PlayActorSound2(arg0, 0x180EU);
            Audio_PlayActorSound2(arg0, 0x39C8U);
            arg0->unk1B4 = 0x1E;
            temp_t1 = arg0->flags | 0x8000000;
            arg0->flags = temp_t1;
            arg0->flags = temp_t1 & ~1;
            Actor_SetScale(arg0, 0.0f);
            arg0->unk1F8->unk38 = 3.0f;
            arg0->unk1F8->unk5 = 8;
            Item_DropCollectibleRandom(arg1, NULL, (Vec3f *) &arg0->world, 0xB0);
            arg0->unk1AC = func_80A3B8F8;
        }
    }
}

void EnBaguo_Update(EnBaguo *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    EnBaguo *this = (EnBaguo *) thisx;

    Actor_SetHeight((Actor *) this, 30.0f);
    func_80A3C008(this, globalCtx);
    func_80A3B958((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk1B2;
    if (temp_v0 != 0) {
        this->unk1B2 = temp_v0 - 1;
    }
    temp_v0_2 = this->unk1B4;
    if (temp_v0_2 != 0) {
        this->unk1B4 = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk1B6;
    if ((temp_v0_3 != 3) && (temp_v0_3 != 0)) {
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk1DC);
    }
    if (this->unk1B6 != 3) {
        this->actor.shape.rot.x = this->actor.world.rot.x;
        this->actor.shape.rot.z = this->actor.world.rot.z;
        if (this->unk1B2 == 0) {
            this->unk1B0 += 1;
            if ((s32) this->unk1B0 >= 3) {
                this->unk1B0 = 0;
                this->unk1B2 = (s16) (s32) (Rand_ZeroFloat(60.0f) + 20.0f);
            }
        }
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 60.0f, 0x1DU);
        if (this->unk1B6 != 0) {
            CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk1DC);
        }
        if (this->unk1B6 != 3) {
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk1DC);
        }
    }
}

void func_80A3BE24(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Collider_UpdateSpheres(arg1, arg4 + 0x1DC);
}

void func_80A3BE60(Actor *this, GlobalContext *globalCtx) {
    Gfx *sp38;
    GraphicsContext *sp2C;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    void *temp_v0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp2C = temp_a0;
    func_8012C28C(temp_a0);
    temp_v1 = sp2C->polyOpa.p;
    sp38 = temp_v1;
    temp_v0 = Lib_SegmentedToVirtual(*(&D_80A3C35C + (this->unk1B0 * 4)));
    temp_v1->words.w0 = 0xDB060020;
    temp_v1->words.w1 = (u32) temp_v0;
    sp2C->polyOpa.p = temp_v1 + 8;
    SkelAnime_Draw(globalCtx, this->unk148, this->unk164, NULL, func_80A3BE24, this);
    func_80A3C17C(this, globalCtx);
}

void func_80A3BF0C(Actor *arg0, PosRot *arg1, f32 *arg2, f32 *arg3, f32 arg4, s16 arg5) {
    s16 temp_v0;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0 + 0x23C;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->unk0 == 0) {
        phi_s0->unk0 = 1U;
        phi_s0->unk4 = (s32) arg1->pos.x;
        phi_s0->unk8 = (s32) arg1->pos.y;
        phi_s0->unkC = (s32) arg1->pos.z;
        phi_s0->unk10 = (s32) arg2->unk0;
        phi_s0->unk14 = (s32) arg2->unk4;
        phi_s0->unk18 = (s32) arg2->unk8;
        phi_s0->unk1C = (s32) arg3->unk0;
        phi_s0->unk20 = (s32) arg3->unk4;
        phi_s0->unk24 = (s32) arg3->unk8;
        phi_s0->unk30 = arg4;
        phi_s0->unk34 = arg5;
        phi_s0->unk28 = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        phi_s0->unk2A = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        phi_s0->unk2C = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        return;
    }
    phi_s0 += 0x38;
    if ((s32) temp_v0 >= 0x1E) {
        return;
    }
    goto loop_1;
}

void func_80A3C008(EnBaguo *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0;
    s32 temp_s1;
    void *phi_s0;
    s32 phi_s1;

    phi_s0 = arg0 + 0x23C;
    phi_s1 = 0;
    do {
        if (phi_s0->unk0 != 0) {
            temp_f0 = phi_s0->unk10;
            temp_f2 = phi_s0->unk14;
            temp_f12 = phi_s0->unk18;
            phi_s0->unk4 = (f32) (phi_s0->unk4 + temp_f0);
            phi_s0->unk8 = (f32) (phi_s0->unk8 + temp_f2);
            phi_s0->unkC = (f32) (phi_s0->unkC + temp_f12);
            phi_s0->unk28 = (s16) (phi_s0->unk28 + 0xBB8);
            phi_s0->unk2A = (s16) (phi_s0->unk2A + 0xBB8);
            phi_s0->unk2C = (s16) (phi_s0->unk2C + 0xBB8);
            phi_s0->unk10 = (f32) (temp_f0 + phi_s0->unk1C);
            phi_s0->unk14 = (f32) (temp_f2 + phi_s0->unk20);
            phi_s0->unk18 = (f32) (temp_f12 + phi_s0->unk24);
            if (phi_s0->unk8 < (arg0->actor.world.pos.y - 10.0f)) {
                Math_ApproachZeroF(phi_s0 + 0x30, 0.2f, 0.001f);
                if (phi_s0->unk30 <= 0.0001f) {
                    phi_s0->unk34 = 0;
                }
            }
            temp_v0 = phi_s0->unk34;
            if (temp_v0 != 0) {
                phi_s0->unk34 = (s16) (temp_v0 - 1);
            } else {
                phi_s0->unk0 = 0U;
            }
        }
        temp_s1 = phi_s1 + 1;
        phi_s0 += 0x38;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x1E);
}

void func_80A3C17C(Actor *arg0, GlobalContext *arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    f32 temp_f12;
    s16 temp_s3;
    void *phi_s0;
    s16 phi_s3;

    temp_a0 = arg1->state.gfxCtx;
    temp_s2 = temp_a0;
    func_8012C28C(temp_a0);
    phi_s0 = arg0 + 0x23C;
    phi_s3 = 0;
    do {
        if (phi_s0->unk0 != 0) {
            SysMatrix_InsertTranslation(phi_s0->unk4, phi_s0->unk8, phi_s0->unkC, 0);
            SysMatrix_InsertXRotation_s(phi_s0->unk28, 1);
            Matrix_RotateY(phi_s0->unk2A, 1U);
            SysMatrix_InsertZRotation_s(phi_s0->unk2C, 1);
            temp_f12 = phi_s0->unk30;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            temp_v0 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xDA380003;
            temp_v0->words.w1 = Matrix_NewMtx(temp_s2);
            temp_v0_2 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w1 = -1;
            temp_v0_2->words.w0 = 0xFA000001;
            temp_v0_3 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = (u32) &D_0401FA40;
            temp_v0_3->words.w0 = 0xDE000000;
        }
        temp_s3 = phi_s3 + 1;
        phi_s0 += 0x38;
        phi_s3 = temp_s3;
    } while ((s32) temp_s3 < 0x1E);
}
