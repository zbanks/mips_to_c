struct _mips2c_stack_EnPoFusen_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnPoFusen_Draw {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnPoFusen_Init {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ ColliderSphere *sp30;                /* inferred */
    /* 0x34 */ char pad34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnPoFusen_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AC1450 {};              /* size 0x0 */

struct _mips2c_stack_func_80AC14A4 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ Collider *sp18;                      /* inferred */
    /* 0x1C */ CollisionCheckContext *sp1C;         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AC1574 {};              /* size 0x0 */

struct _mips2c_stack_func_80AC158C {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AC18EC {};              /* size 0x0 */

struct _mips2c_stack_func_80AC192C {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AC19B0 {};              /* size 0x0 */

struct _mips2c_stack_func_80AC19DC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AC1A68 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ s16 sp18;                            /* inferred */
    /* 0x1A */ char pad1A[0x2];
    /* 0x1C */ s16 sp1C;                            /* inferred */
    /* 0x1E */ char pad1E[0x2];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AC1CE8 {};              /* size 0x0 */

struct _mips2c_stack_func_80AC1D00 {};              /* size 0x0 */

s32 func_80AC1450(EnPoFusen *arg0, GlobalContext *arg1); /* static */
s32 func_80AC14A4(EnPoFusen *arg0, GlobalContext *arg1); /* static */
void func_80AC1574(EnPoFusen *arg0);                /* static */
void func_80AC158C(void *arg0, ? arg1);             /* static */
void func_80AC18EC(EnPoFusen *arg0);                /* static */
void func_80AC192C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AC19B0(EnPoFusen *arg0);                /* static */
void func_80AC19DC(EnPoFusen *arg0);                /* static */
s32 func_80AC1A68(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80AC1CE8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *actor); /* static */
void func_80AC1D00(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern AnimationHeader D_06000040;
extern FlexSkeletonHeader D_060024F0;
static ColliderSphereInit D_80AC1DA0 = {
    {0xA, 0, 9, 0x39, 0x12, 4},
    {0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0, {{0, 0, 0}, 0xC8}, 0x64},
};
static DamageTable D_80AC1DCC = {
    {
        0,
        0,
        0,
        0,
        0,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
};

void EnPoFusen_Init(EnPoFusen *this, GlobalContext *globalCtx) {
    ColliderSphere *sp30;
    ColliderSphere *temp_a1;
    f32 temp_f0;
    EnPoFusen *this = (EnPoFusen *) thisx;

    this->actor.scale.z = 0.007f;
    this->actor.scale.y = 0.007f;
    this->actor.scale.x = 0.007f;
    this->actor.targetMode = 6;
    this->actor.colChkInfo.damageTable = &D_80AC1DCC;
    temp_a1 = &this->collider;
    sp30 = temp_a1;
    Collider_InitSphere(globalCtx, temp_a1);
    Collider_SetSphere(globalCtx, temp_a1, (Actor *) this, &D_80AC1DA0);
    this->collider.dim.worldSphere.radius = 0x28;
    SkelAnime_InitSV(globalCtx, &this->anime, &D_060024F0, &D_06000040, this->limbDrawTbl, this->transitionDrawTbl, 0xA);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 25.0f);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
    if (func_80AC1450(this, globalCtx) == 0) {
        Actor_MarkForDeath((Actor *) this);
    }
    temp_f0 = this->actor.floorHeight + 90.0f;
    if (this->actor.home.pos.y < temp_f0) {
        this->actor.home.pos.y = temp_f0;
    }
    this->randScaleChange = (Rand_Next() % 0xFFFEU) - 0x7FFF;
    this->randYRotChange = (Rand_Next() % 0x4B0U) - 0x258;
    this->avgBaseRotation = 0x1555;
    this->limb3Rot = 0;
    this->limb46Rot = 0;
    this->limb57Rot = 0;
    this->limb8Rot = 0;
    this->limb9Rot = 0x71C;
    this->randBaseRotChange = 0;
    if ((this->actor.params & 0x8000) != 0) {
        func_80AC19B0(this);
        return;
    }
    func_80AC1574(this);
}

void EnPoFusen_Destroy(EnPoFusen *this, GlobalContext *globalCtx) {
    EnPoFusen *this = (EnPoFusen *) thisx;
    Collider_DestroySphere(globalCtx, &this->collider);
}

s32 func_80AC1450(EnPoFusen *arg0, GlobalContext *arg1) {
    void *temp_v1;
    void *temp_v1_2;
    void *phi_v1;

    temp_v1 = arg1->actorCtx.actorList[4].first;
    phi_v1 = temp_v1;
    if ((arg0->actor.params & 0x8000) != 0) {
        return 1;
    }
    if (temp_v1 != 0) {
loop_3:
        if (phi_v1->id == 0x1A4) {
            arg0->actor.parent = phi_v1;
            return 1;
        }
        temp_v1_2 = phi_v1->next;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 == 0) {
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_3;
    }
    return 0;
}

s32 func_80AC14A4(EnPoFusen *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp1C;
    Collider *sp18;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;
    u8 temp_v1;

    if (func_80AC19DC == arg0->actionFunc) {
        goto block_6;
    }
    temp_v1 = arg0->collider.base.acFlags;
    temp_a2 = arg0 + 0x18C;
    arg0->collider.dim.worldSphere.center.x = (s16) (s32) arg0->actor.world.pos.x;
    arg0->collider.dim.worldSphere.center.z = (s16) (s32) arg0->actor.world.pos.z;
    arg0->collider.dim.worldSphere.center.y = (s16) (s32) (arg0->actor.world.pos.y + 20.0f);
    if (((temp_v1 & 2) != 0) && (arg0->actor.colChkInfo.damageEffect == 0xF)) {
        arg0->collider.base.acFlags = temp_v1 & 0xFFFD;
        return 1;
    }
    temp_a1 = arg1 + 0x18884;
    sp1C = temp_a1;
    sp18 = temp_a2;
    CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
    CollisionCheck_SetAC(arg1, temp_a1, temp_a2);
block_6:
    return 0;
}

void func_80AC1574(EnPoFusen *arg0) {
    arg0->actor.shape.rot.z = 0;
    arg0->actionFunc = func_80AC158C;
}

void func_80AC158C(EnPoFusen *arg0, GlobalContext *arg1) {
    f32 sp2C;
    f32 temp_f10;
    f32 temp_f2;
    f32 temp_f8;
    s16 temp_v0;

    arg0->actor.world.pos.x = arg0->actor.home.pos.x;
    arg0->randScaleChange += 0x190;
    arg0->randXZRotChange += 0x5DC;
    arg0->randBaseRotChange += 0x9C4;
    arg0->actor.world.pos.z = arg0->actor.home.pos.z;
    arg0->actor.world.pos.y = arg0->actor.home.pos.y;
    temp_f8 = 50.0f * Math_SinS(arg0->randScaleChange);
    arg0->actor.shape.rot.y += arg0->randYRotChange;
    arg0->actor.world.pos.y += temp_f8;
    temp_v0 = arg0->randScaleChange;
    arg0->actor.shape.rot.z = (s16) (s32) (Math_SinS(arg0->randBaseRotChange) * 910.0f);
    if (((s32) temp_v0 < 0x4000) && ((s32) temp_v0 >= -0x3FFF)) {
        Math_SmoothStepToS(arg0 + 0x26C, 0x38E, 0x14, 0xBB8, (s16) 0x64);
    } else {
        Math_SmoothStepToS(arg0 + 0x26C, 0x71C, 8, 0xBB8, (s16) 0x64);
    }
    arg0->avgBaseRotation = arg0->limb9Rot * 3;
    arg0->limb3Rot = (s16) (s32) (Math_SinS((s16) (arg0->randBaseRotChange + 0x38E3)) * (f32) arg0->avgBaseRotation);
    arg0->limb46Rot = (s16) (s32) (Math_SinS(arg0->randBaseRotChange) * (f32) arg0->avgBaseRotation);
    arg0->limb57Rot = (s16) (s32) (Math_SinS((s16) (arg0->randBaseRotChange - 0x38E3)) * (f32) arg0->avgBaseRotation);
    arg0->limb8Rot = (s16) (s32) (Math_SinS((s16) (arg0->randBaseRotChange - 0x71C6)) * (f32) arg0->avgBaseRotation);
    sp2C = ((1.0f - Math_SinS(arg0->randScaleChange)) * 10.0f) + 50.0f;
    temp_f10 = (1.0f - Math_SinS(arg0->randScaleChange)) * 75.0f;
    arg0->actor.shape.shadowScale = sp2C;
    temp_f2 = temp_f10 + 100.0f;
    if (temp_f2 > 255.0f) {
        arg0->actor.shape.shadowAlpha = (u8) (u32) 255.0f;
        return;
    }
    arg0->actor.shape.shadowAlpha = (u8) (u32) temp_f2;
}

void func_80AC18EC(EnPoFusen *arg0) {
    void *temp_v0;

    temp_v0 = arg0->actor.parent;
    if ((temp_v0 != 0) && (temp_v0->id == 0x1A4)) {
        temp_v0->unk338 = (s16) (temp_v0->unk338 + 1);
    }
    arg0->actor.draw = NULL;
    arg0->actionFunc = func_80AC192C;
}

void func_80AC192C(Actor *arg0, GlobalContext *arg1) {
    Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, arg0->world.pos.x, arg0->world.pos.y + 20.0f, arg0->world.pos.z, (s16) 0xFF, (s16) 0xFF, (s16) 0xC8, (s16) 2);
    Audio_PlayActorSound2(arg0, 0x180EU);
    Actor_MarkForDeath(arg0);
}

void func_80AC19B0(EnPoFusen *arg0) {
    s16 temp_t8;

    temp_t8 = arg0->actor.shape.rot.z;
    arg0->fuse = arg0->actor.params & 0x3FF;
    arg0->actor.shape.rot.z = 0;
    arg0->actionFunc = func_80AC19DC;
    arg0->randScaleChange = temp_t8;
}

void func_80AC19DC(EnPoFusen *arg0) {
    s16 temp_v0;

    func_80AC158C();
    temp_v0 = arg0->fuse;
    arg0->fuse = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_80AC18EC(arg0);
    }
}

void EnPoFusen_Update(EnPoFusen *this, GlobalContext *globalCtx) {
    EnPoFusen *this = (EnPoFusen *) thisx;
    this->actionFunc(this, globalCtx);
    if (func_80AC14A4(this, globalCtx) != 0) {
        func_80AC18EC(this);
    }
}

s32 func_80AC1A68(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    s16 sp1C;
    s16 sp18;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_a2;
    s32 temp_f4;
    s16 phi_t3;

    if (arg1 == 2) {
        temp_f2 = (Math_CosS(arg5->unk25C) * 0.08f) + 1.0f;
        sp28 = temp_f2;
        sp20 = temp_f2;
        temp_f2_2 = (Math_SinS(arg5->unk25C) * 0.08f) + 1.0f;
        sp24 = temp_f2_2 * temp_f2_2;
        sp18 = (s16) (s32) (Math_SinS(arg5->unk25E) * 2730.0f);
        temp_f4 = (s32) (Math_CosS(arg5->unk25E) * 2730.0f);
        temp_a2 = (s16) temp_f4;
        sp1C = (s16) temp_f4;
        SysMatrix_InsertRotation(sp18, 0, temp_a2, 1);
        Matrix_Scale(sp20, sp24, sp28, 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) sp1C * -1), 1);
        SysMatrix_InsertXRotation_s((s16) ((s32) sp18 * -1), 1);
    } else if (arg1 == 3) {
        arg4->y += arg5->unk264;
    } else if (arg1 == 6) {
        arg4->y += arg5->unk266;
    } else {
        if (arg1 == 4) {
            phi_t3 = arg4->z + arg5->unk266;
            goto block_15;
        }
        if ((arg1 == 5) || (arg1 == 7)) {
            arg4->z += arg5->unk268;
        } else if (arg1 == 8) {
            arg4->z += arg5->unk26A;
        } else if (arg1 == 9) {
            arg4->y += (s32) ((f32) arg5->unk26C * Math_SinS(arg5->unk26E));
            phi_t3 = arg4->z + (s32) ((f32) arg5->unk26C * Math_CosS(arg5->unk26E));
block_15:
            arg4->z = phi_t3;
        }
    }
    return 0;
}

void func_80AC1CE8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3) {

}

void func_80AC1D00(GlobalContext *arg0, s32 arg1, Actor *arg2) {

}

void EnPoFusen_Draw(EnPoFusen *this, GlobalContext *globalCtx) {
    EnPoFusen *this = (EnPoFusen *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    func_801343C0(globalCtx, this->anime.skeleton, this->anime.limbDrawTbl, (s32) this->anime.dListCount, func_80AC1A68, func_80AC1CE8, func_80AC1D00, (Actor *) this);
}
