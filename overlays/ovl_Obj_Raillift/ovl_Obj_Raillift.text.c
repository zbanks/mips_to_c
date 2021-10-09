struct _mips2c_stack_ObjRaillift_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjRaillift_DoNothing {};      /* size 0x0 */

struct _mips2c_stack_ObjRaillift_Draw {
    /* 0x00 */ char pad_0[0x54];
    /* 0x54 */ Gfx *sp54;                           /* inferred */
    /* 0x58 */ Gfx *sp58;                           /* inferred */
    /* 0x5C */ char pad_5C[0xC];
};                                                  /* size = 0x68 */

struct _mips2c_stack_ObjRaillift_DrawDekuFlowerPlatform {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjRaillift_DrawDekuFlowerPlatformColorful {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjRaillift_Idle {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjRaillift_Init {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ CollisionHeader **sp40;              /* inferred */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0xC];
};                                                  /* size = 0x58 */

struct _mips2c_stack_ObjRaillift_Move {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ char pad_2C[0x18];                   /* maybe part of sp28[7]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x10];
};                                                  /* size = 0x58 */

struct _mips2c_stack_ObjRaillift_StartCutscene {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjRaillift_Teleport {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjRaillift_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjRaillift_UpdatePosition {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjRaillift_Wait {};           /* size 0x0 */

extern Gfx D_06000208;
extern ? D_06004BF0;
extern Gfx D_060071B8;
static InitChainEntry D_80A1A3B0[4];                /* unable to generate initializer */
static ? D_80A1A3C4;                                /* unable to generate initializer */
static ? sColHeaders;                               /* unable to generate initializer */

void ObjRaillift_UpdatePosition(ObjRaillift *this, s32 arg1) {
    Math_Vec3s_ToVec3f((Vec3f *) &this->dyna.actor.world, &this->points[arg1]);
}

void ObjRaillift_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp48;
    s32 sp44;
    CollisionHeader **sp40;
    CollisionHeader **temp_v0;
    Path *temp_v1;
    f32 temp_f0;
    s16 temp_v0_2;
    ObjRaillift *this = (ObjRaillift *) thisx;

    sp44 = 0;
    sp48 = ((s32) this->dyna.actor.params >> 0xF) & 1;
    Actor_ProcessInitChain((Actor *) this, D_80A1A3B0);
    this->dyna.actor.shape.rot.x = 0;
    this->dyna.actor.world.rot.x = 0;
    this->dyna.actor.shape.rot.z = 0;
    this->dyna.actor.world.rot.z = 0;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    temp_v0 = (sp48 * 4) + &sColHeaders;
    sp40 = temp_v0;
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, *temp_v0);
    this->speed = (f32) this->dyna.actor.home.rot.z * 0.1f;
    temp_f0 = this->speed;
    if (temp_f0 < 0.0f) {
        this->speed = -temp_f0;
        sp44 = 1;
    }
    if (temp_v0 == &D_80A1A3C4) {
        Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x183, this->dyna.actor.world.pos.x, this->dyna.actor.world.pos.y, this->dyna.actor.world.pos.z, (s16) (s32) this->dyna.actor.shape.rot.x, (s16) (s32) this->dyna.actor.shape.rot.y, (s16) (s32) this->dyna.actor.shape.rot.z, 0);
        if (sp44 != 0) {
            this->dyna.actor.draw = ObjRaillift_DrawDekuFlowerPlatformColorful;
        } else {
            this->dyna.actor.draw = ObjRaillift_DrawDekuFlowerPlatform;
        }
    }
    if (this->speed < 0.01f) {
        this->actionFunc = ObjRaillift_DoNothing;
        return;
    }
    temp_v0_2 = this->dyna.actor.params;
    this->curPoint = ((s32) temp_v0_2 >> 7) & 0x1F;
    temp_v1 = &globalCtx->setupPathList[temp_v0_2 & 0x7F];
    this->direction = 1;
    this->endPoint = temp_v1->count - 1;
    this->points = Lib_SegmentedToVirtual((void *) temp_v1->points);
    ObjRaillift_UpdatePosition(this, this->curPoint);
    if (((((s32) this->dyna.actor.params >> 0xD) & 1) != 0) && (Flags_GetSwitch(globalCtx, this->dyna.actor.home.rot.x & 0x7F) == 0)) {
        this->actionFunc = ObjRaillift_Idle;
        return;
    }
    this->actionFunc = ObjRaillift_Move;
}

void ObjRaillift_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjRaillift *this = (ObjRaillift *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void ObjRaillift_DoNothing(ObjRaillift *this, GlobalContext *globalCtx) {

}

void ObjRaillift_Move(ObjRaillift *this, GlobalContext *globalCtx) {
    ? sp48;
    f32 sp44;
    Vec3f *sp28;
    Vec3f *temp_a2;
    Vec3s *temp_v0;
    Vec3s *temp_v1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s32 temp_a0;
    s32 temp_v1;
    f32 phi_f0;
    f32 phi_f12;
    s32 phi_a2;

    if ((((s32) this->dyna.actor.params >> 0xD) & 1) != 0) {
        if (Flags_GetSwitch(globalCtx, this->dyna.actor.home.rot.x & 0x7F) == 0) {
            this->actionFunc = ObjRaillift_Idle;
            return;
        }
        if ((((s32) this->dyna.actor.params >> 0xF) & 1) == 1) {
            func_800B9010((Actor *) this, 0x2103U);
        }
        goto block_5;
    }
block_5:
    Math_Vec3s_ToVec3f((Vec3f *) &sp48, &(&this->points[this->curPoint])[this->direction]);
    temp_a2 = &this->dyna.actor.velocity;
    sp28 = temp_a2;
    Math_Vec3f_Diff((Vec3f *) &sp48, (Vec3f *) &this->dyna.actor.world, temp_a2);
    temp_f0 = Math3D_Vec3fMagnitude(sp28);
    temp_f2 = this->speed;
    if ((temp_f0 < (temp_f2 * 8.0f)) && (temp_f2 > 2.0f)) {
        phi_f0 = ((temp_f2 - 2.0f) * 0.1f) + 2.0f;
        phi_f12 = temp_f2 * 0.03f;
    } else {
        phi_f0 = temp_f2;
        phi_f12 = temp_f2 * 0.16f;
    }
    sp44 = temp_f0;
    Math_StepToF(&this->dyna.actor.speedXZ, phi_f0, phi_f12);
    temp_f0_2 = this->dyna.actor.speedXZ;
    if ((temp_f0_2 + 0.05f) < temp_f0) {
        Math_Vec3f_Scale(sp28, temp_f0_2 / temp_f0);
        this->dyna.actor.world.pos.x += this->dyna.actor.velocity.x;
        this->dyna.actor.world.pos.y += this->dyna.actor.velocity.y;
        this->dyna.actor.world.pos.z += this->dyna.actor.velocity.z;
        return;
    }
    temp_v1 = this->curPoint + this->direction;
    this->curPoint = temp_v1;
    temp_a0 = this->endPoint;
    this->dyna.actor.speedXZ *= 0.4f;
    phi_a2 = 1;
    if (((temp_v1 >= temp_a0) && (this->direction > 0)) || ((temp_v1 <= 0) && (this->direction < 0))) {
        if ((((s32) this->dyna.actor.params >> 0xC) & 1) == 0) {
            this->direction = -this->direction;
            this->waitTimer = 0xA;
            this->actionFunc = ObjRaillift_Wait;
        } else {
            temp_v1_2 = &this->points[temp_a0];
            if (this->direction > 0) {
                this->curPoint = 0;
            } else {
                this->curPoint = temp_a0;
            }
            temp_v0 = this->points;
            if ((temp_v1_2->x != temp_v0->x) || (temp_v1_2->y != temp_v0->y) || (temp_v1_2->z != temp_v0->z)) {
                this->actionFunc = ObjRaillift_Teleport;
                func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
                phi_a2 = 0;
            }
        }
    }
    if (phi_a2 != 0) {
        ObjRaillift_UpdatePosition(this, this->curPoint);
    }
}

void ObjRaillift_Teleport(ObjRaillift *this, GlobalContext *globalCtx) {
    if (func_800CAF70((DynaPolyActor *) this) == 0) {
        ObjRaillift_UpdatePosition(this, this->curPoint);
        func_800C6314(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
        this->actionFunc = ObjRaillift_Move;
    }
}

void ObjRaillift_Wait(ObjRaillift *this, GlobalContext *globalCtx) {
    this->waitTimer += -1;
    if ((s32) this->waitTimer <= 0) {
        this->actionFunc = ObjRaillift_Move;
        this->dyna.actor.speedXZ = 0.0f;
    }
}

void ObjRaillift_Idle(ObjRaillift *this, GlobalContext *globalCtx) {
    if (Flags_GetSwitch(globalCtx, this->dyna.actor.home.rot.x & 0x7F) != 0) {
        this->dyna.actor.speedXZ = 0.0f;
        ActorCutscene_SetIntentToPlay((s16) this->dyna.actor.cutscene);
        this->actionFunc = ObjRaillift_StartCutscene;
    }
}

void ObjRaillift_StartCutscene(ObjRaillift *this, GlobalContext *globalCtx) {
    ObjRaillift *temp_a1;
    s8 temp_a0;
    s8 temp_a0_2;

    temp_a0 = this->dyna.actor.cutscene;
    this = this;
    temp_a1 = this;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        temp_a0_2 = temp_a1->dyna.actor.cutscene;
        this = temp_a1;
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0_2, (Actor *) temp_a1);
        this->cutsceneTimer = 0x32;
        this->actionFunc = ObjRaillift_Move;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a1->dyna.actor.cutscene);
}

void ObjRaillift_Update(Actor *thisx, GlobalContext *globalCtx) {
    Actor *temp_v0_2;
    s16 temp_v0;
    f32 phi_f0;
    f32 phi_f2;
    ObjRaillift *this = (ObjRaillift *) thisx;

    this->actionFunc(this, globalCtx);
    Actor_SetHeight((Actor *) this, 10.0f);
    temp_v0 = this->cutsceneTimer;
    if ((s32) temp_v0 > 0) {
        this->cutsceneTimer = temp_v0 - 1;
        if (this->cutsceneTimer == 0) {
            ActorCutscene_Stop((s16) this->dyna.actor.cutscene);
        }
    }
    if ((((s32) this->dyna.actor.params >> 0xE) & 1) != 0) {
        this->isWeightOnPrev = this->isWeightOn;
        if (func_800CAF70((DynaPolyActor *) this) != 0) {
            this->isWeightOn = 1;
        } else {
            this->isWeightOn = 0;
        }
        if ((this->isWeightOnPrev != this->isWeightOn) && (this->maxHeight < 1.0f)) {
            this->cycle = -0x8000;
            this->maxHeight = 6.0f;
        }
        this->cycle += 0xCE4;
        Math_StepToF(&this->maxHeight, 0.0f, 0.12f);
        if (this->isWeightOn != 0) {
            phi_f2 = Math_CosS((s16) (s32) (fabsf(this->cycleSpeed) * 2048.0f)) + 0.02f;
        } else {
            phi_f2 = Math_SinS((s16) (s32) (fabsf(this->cycleSpeed) * 2048.0f)) + 0.02f;
        }
        if (this->isWeightOn != 0) {
            phi_f0 = -8.0f;
        } else {
            phi_f0 = 0.0f;
        }
        Math_StepToF(&this->cycleSpeed, phi_f0, phi_f2);
        this->dyna.actor.shape.yOffset = ((Math_SinS(this->cycle) * this->maxHeight) + this->cycleSpeed) * 10.0f;
    }
    if (((((s32) this->dyna.actor.params >> 0xF) & 1) == 1) && (temp_v0_2 = this->dyna.actor.child, (temp_v0_2 != 0))) {
        if (temp_v0_2->update == 0) {
            this->dyna.actor.child = NULL;
            return;
        }
        temp_v0_2->world.pos.x = this->dyna.actor.world.pos.x;
        this->dyna.actor.child->world.pos.y = this->dyna.actor.world.pos.y + (this->dyna.actor.shape.yOffset * this->dyna.actor.scale.y);
        this->dyna.actor.child->world.pos.z = this->dyna.actor.world.pos.z;
        /* Duplicate return node #22. Try simplifying control flow for better match */
    }
}

void ObjRaillift_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp58;
    Gfx *sp54;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    ObjRaillift *this = (ObjRaillift *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp58 = temp_v0;
    sp58->words.w1 = Gfx_TwoTexScrollEnvColor(globalCtx->state.gfxCtx, 0, globalCtx->gameplayFrames, 0U, 0x20, 0x20, 1, 0U, 0U, 0x20, 0x20, 0, 0, 0, 0xA0);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp54 = temp_v0_2;
    sp54->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) &D_06004BF0;
    temp_v0_3->words.w0 = 0xDE000000;
}

void ObjRaillift_DrawDekuFlowerPlatform(Actor *thisx, GlobalContext *globalCtx) {
    ObjRaillift *this = (ObjRaillift *) thisx;
    func_800BDFC0(globalCtx, &D_06000208);
}

void ObjRaillift_DrawDekuFlowerPlatformColorful(Actor *thisx, GlobalContext *globalCtx) {
    ObjRaillift *this = (ObjRaillift *) thisx;
    func_800BDFC0(globalCtx, &D_060071B8);
}
