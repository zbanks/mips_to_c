s32 BgKin2Fence_CheckHitMask(BgKin2Fence *arg0);    /* static */
void BgKin2Fence_SpawnEyeSparkles(BgKin2Fence *arg0, GlobalContext *arg1, s8 arg2); /* static */
extern Gfx D_06000828;
extern CollisionHeader D_06000908;
static ColliderJntSphElementInit D_80B6EDE0 = {
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
static InitChainEntry D_80B6EEE8;                   /* unable to generate initializer */



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
    Vec3f sp58;
    s32 temp_s0;
    Vec3f *phi_s1;
    s32 phi_s0;

    SysMatrix_SetStateRotationAndTranslation(arg0->dyna.actor.world.pos.x, arg0->dyna.actor.world.pos.y, arg0->dyna.actor.world.pos.z, arg0 + 0xBC);
    phi_s1 = (arg2 * 0x18) + &D_80B6EE80;
    phi_s0 = 0;
    do {
        SysMatrix_MultiplyVector3fByState(phi_s1, &sp58);
        EffectSsKiraKira_SpawnDispersed(arg1, &sp58, &D_801D15B0, &D_801D15B0, &D_80B6EEE0, &D_80B6EEE4, (s16) 0x1770, -0xA);
        temp_s0 = phi_s0 + 0xC;
        phi_s1 += 0xC;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x18);
}

void BgKin2Fence_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgKin2Fence *this = (BgKin2Fence *) thisx;
    ColliderJntSph *temp_s3;
    s32 temp_s0;
    s32 phi_s0;

    Actor_ProcessInitChain(&this->dyna.actor, &D_80B6EEE8);
    BcCheck3_BgActorInit(&this->dyna, 0);
    BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_06000908);
    temp_s3 = &this->collider;
    Collider_InitJntSph(globalCtx, temp_s3);
    Collider_SetJntSph(globalCtx, temp_s3, &this->dyna.actor, &D_80B6EE70, this->colliderElements);
    SysMatrix_SetStateRotationAndTranslation(this->dyna.actor.world.pos.x, this->dyna.actor.world.pos.y, this->dyna.actor.world.pos.z, &this->dyna.actor.shape.rot);
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

void BgKin2Fence_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgKin2Fence *this = (BgKin2Fence *) thisx;
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->dyna.bgId);
    Collider_DestroyJntSph(globalCtx, &this->collider);
}

void BgKin2Fence_SetupHandleMaskCode(BgKin2Fence *this) {
    BgKin2Fence *self = (BgKin2Fence *) this;
    self->masksHit = 0;
    self->actionFunc = BgKin2Fence_HandleMaskCode;
}

void BgKin2Fence_HandleMaskCode(BgKin2Fence *this, GlobalContext *globalCtx) {
    BgKin2Fence *self = (BgKin2Fence *) this;
    s32 sp20;
    s32 temp_v0;
    s8 temp_a2;
    s8 temp_v0_2;

    if ((self->collider.base.acFlags & 2) != 0) {
        globalCtx = globalCtx;
        temp_v0 = BgKin2Fence_CheckHitMask(self);
        if (temp_v0 >= 0) {
            temp_a2 = gSaveContext.spiderHouseMaskOrder[self->masksHit];
            if (temp_v0 == temp_a2) {
                sp20 = (s32) temp_a2;
                globalCtx = globalCtx;
                play_sound(0x4807U);
                self->masksHit += 1;
                BgKin2Fence_SpawnEyeSparkles(self, globalCtx, temp_a2);
            } else {
                play_sound(0x4806U);
                self->masksHit = 0;
            }
        }
        self->collider.base.acFlags &= 0xFFFD;
        self->cooldownTimer = 5;
        if ((s32) self->masksHit >= 6) {
            BgKin2Fence_SetupPlayOpenCutscene(self);
            return;
        }
        // Duplicate return node #10. Try simplifying control flow for better match
        return;
    }
    temp_v0_2 = self->cooldownTimer;
    if ((s32) temp_v0_2 > 0) {
        self->cooldownTimer = temp_v0_2 - 1;
        return;
    }
    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &self->collider.base);
}

void BgKin2Fence_SetupPlayOpenCutscene(BgKin2Fence *this) {
    BgKin2Fence *self = (BgKin2Fence *) this;
    self->actionFunc = BgKin2Fence_PlayOpenCutscene;
}

void BgKin2Fence_PlayOpenCutscene(BgKin2Fence *this, GlobalContext *globalCtx) {
    BgKin2Fence *self = (BgKin2Fence *) this;
    if (ActorCutscene_GetCanPlayNext((s16) self->dyna.actor.cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) self->dyna.actor.cutscene, &self->dyna.actor);
        Actor_SetSwitchFlag(globalCtx, self->dyna.actor.params & 0x7F);
        BgKin2Fence_SetupWaitBeforeOpen(self);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) self->dyna.actor.cutscene);
}

void BgKin2Fence_SetupWaitBeforeOpen(BgKin2Fence *this) {
    BgKin2Fence *self = (BgKin2Fence *) this;
    self->waitBeforeOpenTimer = 0xE;
    self->actionFunc = BgKin2Fence_WaitBeforeOpen;
}

void BgKin2Fence_WaitBeforeOpen(BgKin2Fence *this, GlobalContext *globalCtx) {
    BgKin2Fence *self = (BgKin2Fence *) this;
    s8 temp_v0;

    temp_v0 = self->waitBeforeOpenTimer;
    if ((s32) temp_v0 > 0) {
        self->waitBeforeOpenTimer = temp_v0 - 1;
        return;
    }
    BgKin2Fence_SetupRaiseFence(self);
}

void BgKin2Fence_SetupRaiseFence(BgKin2Fence *this) {
    BgKin2Fence *self = (BgKin2Fence *) this;
    self->actionFunc = BgKin2Fence_RaiseFence;
}

void BgKin2Fence_RaiseFence(BgKin2Fence *this, GlobalContext *globalCtx) {
    BgKin2Fence *self = (BgKin2Fence *) this;
    BgKin2Fence *temp_a3;
    f32 temp_f4;

    temp_a3 = self;
    temp_f4 = temp_a3->dyna.actor.home.pos.y;
    self = temp_a3;
    if (Math_StepToF(&temp_a3->dyna.actor.world.pos.y, temp_f4 + 58.0f, 5.0f) != 0) {
        BgKin2Fence_SetupDoNothing(self);
    }
}

void BgKin2Fence_SetupDoNothing(BgKin2Fence *this) {
    BgKin2Fence *self = (BgKin2Fence *) this;
    self->actionFunc = BgKin2Fence_DoNothing;
    self->dyna.actor.world.pos.y = self->dyna.actor.home.pos.y + 58.0f;
}

void BgKin2Fence_DoNothing(BgKin2Fence *this, GlobalContext *globalCtx) {
    BgKin2Fence *self = (BgKin2Fence *) this;

}

void BgKin2Fence_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgKin2Fence *this = (BgKin2Fence *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgKin2Fence_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgKin2Fence *this = (BgKin2Fence *) thisx;
    func_800BDFC0(globalCtx, &D_06000828);
}

