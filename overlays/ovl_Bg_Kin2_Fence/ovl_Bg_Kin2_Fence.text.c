struct _mips2c_stack_BgKin2Fence_CheckHitMask {};   /* size 0x0 */

struct _mips2c_stack_BgKin2Fence_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgKin2Fence_DoNothing {};      /* size 0x0 */

struct _mips2c_stack_BgKin2Fence_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgKin2Fence_HandleMaskCode {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_BgKin2Fence_Init {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgKin2Fence_PlayOpenCutscene {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_BgKin2Fence_RaiseFence {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgKin2Fence_SetupDoNothing {}; /* size 0x0 */

struct _mips2c_stack_BgKin2Fence_SetupHandleMaskCode {}; /* size 0x0 */

struct _mips2c_stack_BgKin2Fence_SetupPlayOpenCutscene {}; /* size 0x0 */

struct _mips2c_stack_BgKin2Fence_SetupRaiseFence {}; /* size 0x0 */

struct _mips2c_stack_BgKin2Fence_SetupWaitBeforeOpen {}; /* size 0x0 */

struct _mips2c_stack_BgKin2Fence_SpawnEyeSparkles {
    /* 0x00 */ char pad0[0x58];
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad58[0x10];
};                                                  /* size = 0x68 */

struct _mips2c_stack_BgKin2Fence_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgKin2Fence_WaitBeforeOpen {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

s32 BgKin2Fence_CheckHitMask(BgKin2Fence *arg0);    /* static */
void BgKin2Fence_SpawnEyeSparkles(BgKin2Fence *arg0, GlobalContext *arg1, s8 arg2); /* static */
extern Gfx D_06000828;
extern CollisionHeader D_06000908;
static ColliderJntSphElementInit D_80B6EDE0[4] = {
    {
        {4, {0, 0, 0}, {0x3820, 0, 0}, 0, 1, 0},
        {0, {{0xF808, 0x578, 0x15E}, 0x1C}, 0x64},
    },
    {
        {4, {0, 0, 0}, {0x3820, 0, 0}, 0, 1, 0},
        {0, {{0xFB8C, 0x578, 0x15E}, 0x1C}, 0x64},
    },
    {
        {4, {0, 0, 0}, {0x3820, 0, 0}, 0, 1, 0},
        {0, {{0x474, 0x578, 0x15E}, 0x1C}, 0x64},
    },
    {
        {4, {0, 0, 0}, {0x3820, 0, 0}, 0, 1, 0},
        {0, {{0x7F8, 0x578, 0x15E}, 0x1C}, 0x64},
    },
};
static ColliderJntSphInit D_80B6EE70 = {{0xA, 0, 9, 0, 0x20, 0}, 4, &D_80B6EDE0};
static ? D_80B6EE80;                                /* unable to generate initializer */
static Color_RGBA8 D_80B6EEE0 = {0xFF, 0xFF, 0xFF, 0};
static Color_RGBA8 D_80B6EEE4 = {0, 0x80, 0x80, 0};
static InitChainEntry D_80B6EEE8[6];                /* unable to generate initializer */

s32 BgKin2Fence_CheckHitMask(BgKin2Fence *arg0) {
    void *temp_v0;

    temp_v0 = arg0->collider.elements;
    if ((temp_v0->info.bumperFlags & 2) != 0) {
        return 0;
    }
    if ((temp_v0->unk56 & 2) != 0) {
        return 1;
    }
    if ((temp_v0->unk96 & 2) != 0) {
        return 2;
    }
    if ((temp_v0->unkD6 & 2) != 0) {
        return 3;
    }
    return -1;
}

void BgKin2Fence_SpawnEyeSparkles(BgKin2Fence *arg0, GlobalContext *arg1, s8 arg2) {
    ? sp58;
    s32 temp_s0;
    Vec3f *phi_s1;
    s32 phi_s0;

    SysMatrix_SetStateRotationAndTranslation(arg0->dyna.actor.world.pos.x, arg0->dyna.actor.world.pos.y, arg0->dyna.actor.world.pos.z, arg0 + 0xBC);
    phi_s1 = (arg2 * 0x18) + &D_80B6EE80;
    phi_s0 = 0;
    do {
        SysMatrix_MultiplyVector3fByState(phi_s1, (Vec3f *) &sp58);
        EffectSsKiraKira_SpawnDispersed(arg1, (Vec3f *) &sp58, &D_801D15B0, &D_801D15B0, &D_80B6EEE0, &D_80B6EEE4, (s16) 0x1770, -0xA);
        temp_s0 = phi_s0 + 0xC;
        phi_s1 += 0xC;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x18);
}

void BgKin2Fence_Init(BgKin2Fence *this, GlobalContext *globalCtx) {
    ColliderJntSph *temp_s3;
    s32 temp_s0;
    s32 phi_s0;
    BgKin2Fence *this = (BgKin2Fence *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80B6EEE8);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000908);
    temp_s3 = &this->collider;
    Collider_InitJntSph(globalCtx, temp_s3);
    Collider_SetJntSph(globalCtx, temp_s3, (Actor *) this, &D_80B6EE70, this->colliderElements);
    SysMatrix_SetStateRotationAndTranslation(this->dyna.actor.world.pos.x, this->dyna.actor.world.pos.y, this->dyna.actor.world.pos.z, (Vec3s *) &this->dyna.actor.shape);
    Matrix_Scale(this->dyna.actor.scale.x, this->dyna.actor.scale.y, this->dyna.actor.scale.z, 1);
    phi_s0 = 0;
    do {
        Collider_UpdateSpheres(phi_s0, temp_s3);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 4);
    if (Flags_GetSwitch(globalCtx, this->dyna.actor.params & 0x7F) != 0) {
        BgKin2Fence_SetupDoNothing(this);
        return;
    }
    BgKin2Fence_SetupHandleMaskCode(this);
}

void BgKin2Fence_Destroy(BgKin2Fence *this, GlobalContext *globalCtx) {
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;
    BgKin2Fence *this = (BgKin2Fence *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->dyna.bgId);
    Collider_DestroyJntSph(globalCtx, &this->collider);
}

void BgKin2Fence_SetupHandleMaskCode(BgKin2Fence *this) {
    this->masksHit = 0;
    this->actionFunc = BgKin2Fence_HandleMaskCode;
}

void BgKin2Fence_HandleMaskCode(BgKin2Fence *this, GlobalContext *globalCtx) {
    s32 sp20;
    s32 temp_v0;
    s8 temp_a2;
    s8 temp_v0_2;

    if ((this->collider.base.acFlags & 2) != 0) {
        globalCtx = globalCtx;
        temp_v0 = BgKin2Fence_CheckHitMask(this);
        if (temp_v0 >= 0) {
            temp_a2 = gSaveContext.spiderHouseMaskOrder[this->masksHit];
            if (temp_v0 == temp_a2) {
                sp20 = (s32) temp_a2;
                globalCtx = globalCtx;
                play_sound(0x4807U);
                this->masksHit += 1;
                BgKin2Fence_SpawnEyeSparkles(this, globalCtx, temp_a2);
            } else {
                play_sound(0x4806U);
                this->masksHit = 0;
            }
        }
        this->collider.base.acFlags &= 0xFFFD;
        this->cooldownTimer = 5;
        if ((s32) this->masksHit >= 6) {
            BgKin2Fence_SetupPlayOpenCutscene(this);
            return;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return;
    }
    temp_v0_2 = this->cooldownTimer;
    if ((s32) temp_v0_2 > 0) {
        this->cooldownTimer = temp_v0_2 - 1;
        return;
    }
    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->collider);
}

void BgKin2Fence_SetupPlayOpenCutscene(BgKin2Fence *this) {
    this->actionFunc = BgKin2Fence_PlayOpenCutscene;
}

void BgKin2Fence_PlayOpenCutscene(BgKin2Fence *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCanPlayNext((s16) this->dyna.actor.cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) this->dyna.actor.cutscene, (Actor *) this);
        Actor_SetSwitchFlag(globalCtx, this->dyna.actor.params & 0x7F);
        BgKin2Fence_SetupWaitBeforeOpen(this);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->dyna.actor.cutscene);
}

void BgKin2Fence_SetupWaitBeforeOpen(BgKin2Fence *this) {
    this->waitBeforeOpenTimer = 0xE;
    this->actionFunc = BgKin2Fence_WaitBeforeOpen;
}

void BgKin2Fence_WaitBeforeOpen(BgKin2Fence *this, GlobalContext *globalCtx) {
    s8 temp_v0;

    temp_v0 = this->waitBeforeOpenTimer;
    if ((s32) temp_v0 > 0) {
        this->waitBeforeOpenTimer = temp_v0 - 1;
        return;
    }
    BgKin2Fence_SetupRaiseFence(this);
}

void BgKin2Fence_SetupRaiseFence(BgKin2Fence *this) {
    this->actionFunc = BgKin2Fence_RaiseFence;
}

void BgKin2Fence_RaiseFence(BgKin2Fence *this, GlobalContext *globalCtx) {
    BgKin2Fence *temp_a3;
    f32 temp_f4;

    temp_a3 = this;
    temp_f4 = temp_a3->dyna.actor.home.pos.y;
    this = temp_a3;
    if (Math_StepToF(&temp_a3->dyna.actor.world.pos.y, temp_f4 + 58.0f, 5.0f) != 0) {
        BgKin2Fence_SetupDoNothing(this);
    }
}

void BgKin2Fence_SetupDoNothing(BgKin2Fence *this) {
    this->actionFunc = BgKin2Fence_DoNothing;
    this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y + 58.0f;
}

void BgKin2Fence_DoNothing(BgKin2Fence *this, GlobalContext *globalCtx) {

}

void BgKin2Fence_Update(BgKin2Fence *this, GlobalContext *globalCtx) {
    BgKin2Fence *this = (BgKin2Fence *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgKin2Fence_Draw(BgKin2Fence *this, GlobalContext *globalCtx) {
    BgKin2Fence *this = (BgKin2Fence *) thisx;
    func_800BDFC0(globalCtx, &D_06000828);
}
