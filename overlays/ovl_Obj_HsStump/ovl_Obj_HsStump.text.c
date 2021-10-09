struct _mips2c_stack_ObjHsStump_Appear {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad_5C[0x10];
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad_6C[0x10];
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad_94[0xC];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_ObjHsStump_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjHsStump_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjHsStump_Idle {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjHsStump_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjHsStump_SetupAppear {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjHsStump_SetupIdle {};       /* size 0x0 */

struct _mips2c_stack_ObjHsStump_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

extern Gfx D_060003B8;
extern CollisionHeader D_060011B0;
static InitChainEntry D_80BDAF80;                   /* unable to generate initializer */
static Vec3f iceSmokeAccel = {0.0f, 0.0f, 0.0f};

void ObjHsStump_Init(Actor *thisx, GlobalContext *globalCtx) {
    u8 temp_v0;
    ObjHsStump *this = (ObjHsStump *) thisx;

    Actor_ProcessInitChain((Actor *) this, &D_80BDAF80);
    this->isHidden = ((s32) this->dyna.actor.params >> 0xC) & 0xF;
    this->switchFlag = this->dyna.actor.params & 0x7F;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_060011B0);
    temp_v0 = this->isHidden;
    if (temp_v0 != 0) {
        if (temp_v0 == 1) {
            if (Flags_GetSwitch(globalCtx, (s32) this->switchFlag) != 0) {
                this->isHidden = 0;
            } else {
                this->dyna.actor.draw = NULL;
                Actor_SetScale((Actor *) this, 0.0f);
                func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
            }
            goto block_5;
        }
    } else {
block_5:
        ObjHsStump_SetupIdle(this, globalCtx);
    }
}

void ObjHsStump_SetupIdle(ObjHsStump *this, GlobalContext *globalCtx) {
    this->actionFunc = ObjHsStump_Idle;
}

void ObjHsStump_Idle(ObjHsStump *this, GlobalContext *globalCtx) {
    s16 temp_a1;

    if (this->isHidden == 1) {
        temp_a1 = this->switchFlag;
        this = this;
        if (Flags_GetSwitch(globalCtx, (s32) temp_a1) != 0) {
            ObjHsStump_SetupAppear(this, globalCtx);
        }
    }
}

void ObjHsStump_SetupAppear(ObjHsStump *this, GlobalContext *globalCtx) {
    this->dyna.actor.draw = ObjHsStump_Draw;
    this->framesAppeared = 0;
    this->rotAngle = 0;
    this->rotFactor = 3640.0f;
    this = this;
    func_8019F128(0x3A86U);
    this->actionFunc = ObjHsStump_Appear;
}

void ObjHsStump_Appear(ObjHsStump *this, GlobalContext *globalCtx) {
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    ? sp6C;
    ? sp5C;
    s16 temp_v0;
    s32 temp_f4;
    s32 temp_s0;
    s32 phi_v0;
    s32 phi_s0;
    s32 phi_v0_2;

    temp_v0 = this->framesAppeared;
    phi_v0 = (s32) temp_v0;
    if ((s32) temp_v0 >= 0) {
        Math_SmoothStepToF(&this->rotFactor, 0.0f, 1.0f, (f32) temp_v0 + 18.0f, 0.01f);
        this->dyna.actor.shape.rot.x = (s16) (s32) ((Math_SinS(this->rotAngle) * this->rotFactor) + (f32) this->dyna.actor.home.rot.x);
        this->dyna.actor.shape.rot.z = (s16) (s32) ((Math_SinS((s16) (this->rotAngle * 2)) * this->rotFactor) + (f32) this->dyna.actor.home.rot.z);
        this->rotAngle += 0x2000;
        phi_v0 = (s32) this->framesAppeared;
    }
    phi_v0_2 = phi_v0;
    if ((phi_v0 < 0xB) && (phi_v0 == 0)) {
        sp90 = 0.0f;
        sp84 = 0.0f;
        sp88 = 1.0f;
        sp8C = 0.5f;
        sp7C = 1.0f;
        sp80 = 0.5f;
        phi_s0 = 0;
        do {
            temp_f4 = (s32) ((f32) phi_s0 * (f32) (s32) ((360.0f / (f32) 4) * 182.04445f));
            Lib_Vec3f_TranslateAndRotateY((Vec3f *) &this->dyna.actor.world, (s16) temp_f4, (Vec3f *) &sp88, (Vec3f *) &sp5C);
            Lib_Vec3f_TranslateAndRotateY(&D_801D15B0, (s16) temp_f4, (Vec3f *) &sp7C, (Vec3f *) &sp6C);
            EffectSsIceSmoke_Spawn(globalCtx, (Vec3f *) &sp5C, (Vec3f *) &sp6C, &iceSmokeAccel, (s16) 0x64);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 < 4);
        phi_v0_2 = (s32) this->framesAppeared;
    }
    if (phi_v0_2 >= 0xA) {
        Math_SmoothStepToF((f32 *) &this->dyna.actor.scale, 0.17999999f, 1.0f, 0.01f, 0.001f);
        Actor_SetScale((Actor *) this, this->dyna.actor.scale.x);
    }
    if (this->dyna.actor.scale.x == 0.17999999f) {
        this->isHidden = 0;
        func_800C6314(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
        ObjHsStump_SetupIdle(this, globalCtx);
    }
    this->framesAppeared += 1;
}

void ObjHsStump_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjHsStump *this = (ObjHsStump *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void ObjHsStump_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjHsStump *this = (ObjHsStump *) thisx;
    this->actionFunc(this, globalCtx);
}

void ObjHsStump_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjHsStump *this = (ObjHsStump *) thisx;
    func_800BDFC0(globalCtx, &D_060003B8);
}
