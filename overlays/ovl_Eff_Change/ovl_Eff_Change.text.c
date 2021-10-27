typedef struct EffChange {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ? unk_144;                          /* inferred */
    /* 0x144 */ char pad_144[0xC];
    /* 0x150 */ f32 unk_150;                        /* inferred */
    /* 0x154 */ f32 unk_154;                        /* inferred */
    /* 0x158 */ char pad_158[0x1C];                 /* maybe part of unk_154[8]? */
    /* 0x174 */ ? unk_174;                          /* inferred */
    /* 0x174 */ char pad_174[0x24];
    /* 0x198 */ ? unk_198;                          /* inferred */
    /* 0x198 */ char pad_198[0x24];
    /* 0x1BC */ s16 unk_1BC;                        /* inferred */
    /* 0x1BE */ char pad_1BE[0x3];                  /* maybe part of unk_1BC[2]? */
    /* 0x1C1 */ u8 unk_1C1;                         /* inferred */
    /* 0x1C2 */ char pad_1C2[0x6];                  /* maybe part of unk_1C1[7]? */
    /* 0x1C8 */ void (*actionFunc)(EffChange *, GlobalContext *);
} EffChange;                                        /* size = 0x1CC */

struct _mips2c_stack_EffChange_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EffChange_Init {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? *sp28;                             /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EffChange_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A4C578 {};              /* size 0x0 */

struct _mips2c_stack_func_80A4C5CC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A4C7B0 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0x1C];
};                                                  /* size = 0x48 */

? func_800FD2B4(GlobalContext *, f32, ?, ?, f32);   /* extern */
? func_80183430(? *, ? *, s32 *, ? *, ? *, s32);    /* extern */
? func_8018349C(? *, EffChange *);                  /* extern */
? func_801834A8(? *, s32 *);                        /* extern */
s32 func_80183DE0(? *);                             /* extern */
? func_8018450C(GlobalContext *, Actor *, Gfx *, ?, s32, Actor *); /* extern */
void func_80A4C578(EffChange *arg0, s32 arg1);      /* static */
void func_80A4C5CC(EffChange *, GlobalContext *);   /* static */
void func_80A4C7B0(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_0402900C;
static ? D_80A4C920;                                /* unable to generate initializer */

void EffChange_Init(Actor *thisx, GlobalContext *globalCtx) {
    ? *sp28;
    ? *temp_a0;
    EffChange *this = (EffChange *) thisx;

    this->actionFunc = func_80A4C5CC;
    this->actor.draw = func_80A4C7B0;
    func_80A4C578(this, this->actor.params & 7);
    Actor_SetScale((Actor *) this, 0.075f);
    this->unk_1C1 = 0;
    temp_a0 = &this->unk_144;
    sp28 = temp_a0;
    func_80183430(temp_a0, &D_0402900C, &D_040281DC, &this->unk_174, &this->unk_198, 0);
    func_801834A8(temp_a0, &D_040281DC);
    this->unk_1BC = 0;
    this->actor.shape.rot.y = 0;
    this->unk_150 = 0.6666667f;
    ActorCutscene_SetIntentToPlay(0x7B);
}

void EffChange_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EffChange *this = (EffChange *) thisx;
    func_8018349C(&this->unk_144, this);
}

void func_80A4C578(EffChange *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = (arg1 * 6) + &D_80A4C920;
    arg0->unk_1BE = temp_v0->unk_0;
    arg0->unk_1BF = temp_v0->unk_1;
    arg0->unk_1C0 = temp_v0->unk_2;
    arg0->unk_1C2 = temp_v0->unk_3;
    arg0->unk_1C3 = temp_v0->unk_4;
    arg0->unk_1C4 = temp_v0->unk_5;
}

void func_80A4C5CC(EffChange *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    u8 temp_v0;
    u8 temp_v0_2;
    f32 phi_f0;

    if (func_80183DE0(&arg0->unk_144) != 0) {
        Actor_MarkForDeath((Actor *) arg0);
        ActorCutscene_Stop(0x7B);
        func_800FD2B4(arg1, 0.0f, 0x44548000, 0x3E4CCCCD, 0.0f);
        return;
    }
    temp_f0 = arg0->unk_154;
    arg0->unk_1BC += 1;
    if (temp_f0 < 20.0f) {
        temp_v0 = arg0->unk_1C1;
        if ((s32) temp_v0 < 0xF2) {
            arg0->unk_1C1 = temp_v0 + 0xD;
        } else {
            arg0->unk_1C1 = 0xFF;
        }
    } else if (temp_f0 > 70.0f) {
        temp_v0_2 = arg0->unk_1C1;
        if ((s32) temp_v0_2 >= 0xE) {
            arg0->unk_1C1 = temp_v0_2 - 0xD;
        } else {
            arg0->unk_1C1 = 0;
        }
    } else {
        arg0->unk_1C1 = 0xFF;
    }
    temp_f0_2 = (f32) arg0->unk_1C1 * 0.003921569f;
    phi_f0 = temp_f0_2;
    if (temp_f0_2 > 1.0f) {
        phi_f0 = 1.0f;
    } else if (temp_f0_2 < 0.0f) {
        phi_f0 = 0.0f;
    }
    func_800FD2B4(arg1, phi_f0, 0x44548000, 0x3E4CCCCD, 0.0f);
    if (ActorCutscene_GetCurrentIndex() != 0x7B) {
        if (ActorCutscene_GetCanPlayNext(0x7B) != 0) {
            ActorCutscene_Start(0x7B, (Actor *) arg0);
            return;
        }
        ActorCutscene_SetIntentToPlay(0x7B);
        /* Duplicate return node #19. Try simplifying control flow for better match */
    }
}

void EffChange_Update(Actor *thisx, GlobalContext *globalCtx) {
    EffChange *this = (EffChange *) thisx;
    this->actionFunc(this, globalCtx);
}

void func_80A4C7B0(Actor *this, GlobalContext *globalCtx) {
    Gfx *sp28;
    Gfx *temp_a2;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_v0;

    AnimatedMat_DrawStepXlu(globalCtx, Lib_SegmentedToVirtual((void *) &D_04028FEC), (u32) this->unk_1BC);
    temp_v0 = globalCtx->state.gfxCtx;
    temp_a2 = temp_v0->polyOpa.d - (((this->unk_15C->unk_1 << 6) + 0xF) & ~0xF);
    temp_v0->polyOpa.d = temp_a2;
    if (temp_a2 != 0) {
        sp28 = temp_a2;
        func_8012C2DC(globalCtx->state.gfxCtx);
        Matrix_RotateY((s16) (func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000), 1U);
        temp_a0 = globalCtx->state.gfxCtx;
        temp_v1 = temp_a0->polyXlu.p;
        temp_a0->polyXlu.p = &temp_v1[1];
        temp_v1->words.w0 = 0xFA000080;
        temp_v1->words.w1 = this->unk_1C1 | (this->unk_1BE << 0x18) | (this->unk_1BF << 0x10) | (this->unk_1C0 << 8);
        temp_v1_2 = temp_a0->polyXlu.p;
        temp_a0->polyXlu.p = &temp_v1_2[1];
        temp_v1_2->words.w0 = 0xFB000000;
        temp_v1_2->words.w1 = (this->unk_1C4 << 8) | (this->unk_1C2 << 0x18) | (this->unk_1C3 << 0x10) | 0xFF;
        func_8018450C(globalCtx, &this[1], temp_a2, 0, 0, this);
    }
}
