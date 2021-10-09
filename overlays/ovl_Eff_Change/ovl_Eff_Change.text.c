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

typedef struct EffChange {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ? unk144;                          /* inferred */
    /* 0x0145 */ char pad145[0xB];
    /* 0x0150 */ f32 unk150;                        /* inferred */
    /* 0x0154 */ f32 unk154;                        /* inferred */
    /* 0x0158 */ char pad158[0x1C];                 /* maybe part of unk154[8]? */
    /* 0x0174 */ ? unk174;                          /* inferred */
    /* 0x0175 */ char pad175[0x23];
    /* 0x0198 */ ? unk198;                          /* inferred */
    /* 0x0199 */ char pad199[0x23];
    /* 0x01BC */ s16 unk1BC;                        /* inferred */
    /* 0x01BE */ u8 unk1BE;                         /* inferred */
    /* 0x01BF */ u8 unk1BF;                         /* inferred */
    /* 0x01C0 */ u8 unk1C0;                         /* inferred */
    /* 0x01C1 */ u8 unk1C1;                         /* inferred */
    /* 0x01C2 */ u8 unk1C2;                         /* inferred */
    /* 0x01C3 */ u8 unk1C3;                         /* inferred */
    /* 0x01C4 */ u8 unk1C4;                         /* inferred */
    /* 0x01C5 */ char pad1C5[0x3];                  /* maybe part of unk1C4[4]? */
    /* 0x01C8 */ void (*actionFunc)(EffChange *, GlobalContext *);
} EffChange;                                        /* size 0x1CC */

void EffChange_Init(Actor *thisx, GlobalContext *globalCtx) {
    EffChange *this = (EffChange *) thisx;
    ? *sp28;
    ? *temp_a0;

    this->actionFunc = func_80A4C5CC;
    this->actor.draw = func_80A4C7B0;
    func_80A4C578(this, this->actor.params & 7);
    Actor_SetScale(&this->actor, 0.075f);
    this->unk1C1 = 0;
    temp_a0 = &this->unk144;
    sp28 = temp_a0;
    func_80183430(temp_a0, &D_0402900C, &D_040281DC, &this->unk174, &this->unk198, 0);
    func_801834A8(temp_a0, &D_040281DC);
    this->unk1BC = 0;
    this->actor.shape.rot.y = 0;
    this->unk150 = 0.6666667f;
    ActorCutscene_SetIntentToPlay(0x7B);
}

void EffChange_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EffChange *this = (EffChange *) thisx;
    func_8018349C(&this->unk144, this);
}

void func_80A4C578(EffChange *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = (arg1 * 6) + &D_80A4C920;
    arg0->unk1BE = temp_v0->unk0;
    arg0->unk1BF = temp_v0->unk1;
    arg0->unk1C0 = temp_v0->unk2;
    arg0->unk1C2 = temp_v0->unk3;
    arg0->unk1C3 = temp_v0->unk4;
    arg0->unk1C4 = temp_v0->unk5;
}

void func_80A4C5CC(EffChange *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    u8 temp_v0;
    u8 temp_v0_2;
    f32 phi_f0;

    if (func_80183DE0(&arg0->unk144) != 0) {
        Actor_MarkForDeath(&arg0->actor);
        ActorCutscene_Stop(0x7B);
        func_800FD2B4(arg1, 0.0f, 0x44548000, 0x3E4CCCCD, 0.0f);
        return;
    }
    temp_f0 = arg0->unk154;
    arg0->unk1BC += 1;
    if (temp_f0 < 20.0f) {
        temp_v0 = arg0->unk1C1;
        if ((s32) temp_v0 < 0xF2) {
            arg0->unk1C1 = temp_v0 + 0xD;
        } else {
            arg0->unk1C1 = 0xFF;
        }
    } else if (temp_f0 > 70.0f) {
        temp_v0_2 = arg0->unk1C1;
        if ((s32) temp_v0_2 >= 0xE) {
            arg0->unk1C1 = temp_v0_2 - 0xD;
        } else {
            arg0->unk1C1 = 0;
        }
    } else {
        arg0->unk1C1 = 0xFF;
    }
    temp_f0_2 = (f32) arg0->unk1C1 * 0.003921569f;
    phi_f0 = temp_f0_2;
    if (temp_f0_2 > 1.0f) {
        phi_f0 = 1.0f;
    } else if (temp_f0_2 < 0.0f) {
        phi_f0 = 0.0f;
    }
    func_800FD2B4(arg1, phi_f0, 0x44548000, 0x3E4CCCCD, 0.0f);
    if (ActorCutscene_GetCurrentIndex() != 0x7B) {
        if (ActorCutscene_GetCanPlayNext(0x7B) != 0) {
            ActorCutscene_Start(0x7B, &arg0->actor);
            return;
        }
        ActorCutscene_SetIntentToPlay(0x7B);
        // Duplicate return node #19. Try simplifying control flow for better match
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

    AnimatedMat_DrawStepXlu(globalCtx, Lib_SegmentedToVirtual((void *) &D_04028FEC), (u32) this->unk1BC);
    temp_v0 = globalCtx->state.gfxCtx;
    temp_a2 = temp_v0->polyOpa.d - (((this->unk15C->unk1 << 6) + 0xF) & ~0xF);
    temp_v0->polyOpa.d = temp_a2;
    if (temp_a2 != 0) {
        sp28 = temp_a2;
        func_8012C2DC(globalCtx->state.gfxCtx);
        Matrix_RotateY((s16) (func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000), 1U);
        temp_a0 = globalCtx->state.gfxCtx;
        temp_v1 = temp_a0->polyXlu.p;
        temp_a0->polyXlu.p = temp_v1 + 8;
        temp_v1->words.w0 = 0xFA000080;
        temp_v1->words.w1 = this->unk1C1 | (this->unk1BE << 0x18) | (this->unk1BF << 0x10) | (this->unk1C0 << 8);
        temp_v1_2 = temp_a0->polyXlu.p;
        temp_a0->polyXlu.p = temp_v1_2 + 8;
        temp_v1_2->words.w0 = 0xFB000000;
        temp_v1_2->words.w1 = (this->unk1C4 << 8) | (this->unk1C2 << 0x18) | (this->unk1C3 << 0x10) | 0xFF;
        func_8018450C(globalCtx, this + 0x144, temp_a2, 0, 0, this);
    }
}

