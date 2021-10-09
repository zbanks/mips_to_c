typedef struct {
    /* 0x00000 */ View view;
    /* 0x00168 */ Font font;
    /* 0x11EF4 */ char pad11EF4[0x10];
    /* 0x11F04 */ u16 unk11F04;
    /* 0x11F06 */ char pad11F06[0x4];               /* maybe part of unk11F04[3]? */
    /* 0x11F0A */ u8 unk11F0A;
    /* 0x11F0B */ char pad11F0B[0x5];               /* maybe part of unk11F0A[6]? */
    /* 0x11F10 */ s32 unk11F10;
    /* 0x11F14 */ char pad11F14[0xE];               /* maybe part of unk11F10[4]? */
    /* 0x11F22 */ u8 unk11F22;
    /* 0x11F23 */ char pad11F23[0xFD];              /* maybe part of unk11F22[254]? */
    /* 0x12020 */ u8 unk12020;
    /* 0x12021 */ u8 choiceIndex;
    /* 0x12022 */ char pad12022[0x1];
    /* 0x12023 */ s8 unk12023;
    /* 0x12024 */ char pad12024[0x6];               /* maybe part of unk12023[7]? */
    /* 0x1202A */ u16 unk1202A;
    /* 0x1202C */ char pad1202C[0x2];
    /* 0x1202E */ u16 unk1202E;
    /* 0x12030 */ char pad12030[0x14];              /* maybe part of unk1202E[11]? */
    /* 0x12044 */ s16 unk12044;
    /* 0x12046 */ char pad12046[0x24];              /* maybe part of unk12044[19]? */
    /* 0x1206A */ s16 unk1206A;
    /* 0x1206C */ s32 unk1206C;
    /* 0x12070 */ char pad12070[0x8];               /* maybe part of unk1206C[3]? */
    /* 0x12078 */ s32 bankRupeesSelected;
    /* 0x1207C */ s32 bankRupees;
    /* 0x12080 */ char pad12080[0x31];              /* maybe part of bankRupees[13]? */
    /* 0x120B1 */ u8 unk120B1;
    /* 0x120B2 */ char pad120B2[0x22];              /* maybe part of unk120B1[35]? */
    /* 0x120D4 */ s16 unk120D4;                     /* inferred */
    /* 0x120D6 */ s16 unk120D6;                     /* inferred */
    /* 0x120D8 */ char pad120D8[0x8];               /* maybe part of unk120D6[5]? */
} MessageContext;                                   /* size = 0x120E0 */

struct _mips2c_stack_ObjWarpstone_BeginOpeningCutscene {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjWarpstone_ClosedIdle {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjWarpstone_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjWarpstone_Draw {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad3C[0x1C];
};                                                  /* size = 0x58 */

struct _mips2c_stack_ObjWarpstone_Init {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjWarpstone_OpenedIdle {};    /* size 0x0 */

struct _mips2c_stack_ObjWarpstone_PlayOpeningCutscene {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjWarpstone_SetupAction {};   /* size 0x0 */

struct _mips2c_stack_ObjWarpstone_Update {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ CollisionCheckContext *sp24;         /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

static ColliderCylinderInit D_80B93220 = {
    {9, 0, 0xD, 0x39, 0x20, 1},
    {2, {0x100000, 0, 0}, {0x1000202, 0, 0}, 0, 5, 1},
    {0x14, 0x3C, 0, {0, 0, 0}},
};
static InitChainEntry D_80B9324C;                   /* unable to generate initializer */
static ? D_80B93250;                                /* unable to generate initializer */

void ObjWarpstone_SetupAction(ObjWarpstone *this, s32 (*actionFunc)(ObjWarpstone *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

void ObjWarpstone_Init(ObjWarpstone *this, GlobalContext *globalCtx) {
    ObjWarpstone *this = (ObjWarpstone *) thisx;
    Actor_ProcessInitChain((Actor *) this, &D_80B9324C);
    Collider_InitAndSetCylinder(globalCtx, &this->collider, (Actor *) this, &D_80B93220);
    Actor_SetHeight((Actor *) this, 40.0f);
    if ((*(gBitFlags + 2 + ((this->dyna.actor.params & 0xF) * 4)) & gSaveContext.owlActivationFlags) == 0) {
        ObjWarpstone_SetupAction(this, ObjWarpstone_ClosedIdle);
        return;
    }
    ObjWarpstone_SetupAction(this, ObjWarpstone_OpenedIdle);
    this->modelIndex = 1;
}

void ObjWarpstone_Destroy(ObjWarpstone *this, GlobalContext *globalCtx) {
    ObjWarpstone *this = (ObjWarpstone *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

s32 ObjWarpstone_ClosedIdle(ObjWarpstone *this, GlobalContext *globalCtx) {
    if ((this->collider.base.acFlags & 2) != 0) {
        ObjWarpstone_SetupAction(this, ObjWarpstone_BeginOpeningCutscene);
        return 1;
    }
    this->dyna.actor.textId = 0xC00;
    return 0;
}

s32 ObjWarpstone_BeginOpeningCutscene(ObjWarpstone *this, GlobalContext *globalCtx) {
    s8 temp_a2;

    temp_a2 = this->dyna.actor.cutscene;
    if ((s32) temp_a2 >= 0) {
        if (ActorCutscene_GetCanPlayNext((s16) temp_a2) != 0) {
            goto block_3;
        }
        ActorCutscene_SetIntentToPlay((s16) this->dyna.actor.cutscene);
    } else {
block_3:
        ActorCutscene_StartAndSetUnkLinkFields((s16) this->dyna.actor.cutscene, (Actor *) this);
        ObjWarpstone_SetupAction(this, ObjWarpstone_PlayOpeningCutscene);
        Audio_PlayActorSound2((Actor *) this, 0x2967U);
    }
    return 1;
}

s32 ObjWarpstone_PlayOpeningCutscene(ObjWarpstone *this, GlobalContext *globalCtx) {
    u8 temp_v0;

    temp_v0 = this->openingCSTimer;
    this->openingCSTimer = temp_v0 + 1;
    if ((((s32) temp_v0 < 0x42) ^ 1) != 0) {
        ActorCutscene_Stop((s16) this->dyna.actor.cutscene);
        func_80143A10(this->dyna.actor.params & 0xF & 0xFF);
        ObjWarpstone_SetupAction(this, ObjWarpstone_OpenedIdle);
    } else if ((s32) this->openingCSTimer < 0x19) {
        Math_StepToF((f32 *) &this->dyna.actor.velocity, 0.01f, 0.001f);
        Math_StepToS((s16 *) &this->dyna.actor.home.rot, 0xFF, 0x12);
    } else {
        Math_StepToF((f32 *) &this->dyna.actor.velocity, 20.0f, 0.01f);
        if (this->dyna.actor.velocity.x > 0.2f) {
            this->modelIndex = 1;
            Math_StepToS((s16 *) &this->dyna.actor.home.rot, 0, 0x14);
        }
    }
    return 1;
}

s32 ObjWarpstone_OpenedIdle(ObjWarpstone *this, GlobalContext *globalCtx) {
    this->dyna.actor.textId = 0xC01;
    return 0;
}

void ObjWarpstone_Update(ObjWarpstone *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    ObjWarpstone *this = (ObjWarpstone *) thisx;

    if (this->isTalking != 0) {
        if (func_800B867C((Actor *) this, globalCtx) != 0) {
            this->isTalking = 0;
        } else if ((func_80152498(&globalCtx->msgCtx) == 4) && (func_80147624(globalCtx) != 0)) {
            if (globalCtx->msgCtx.choiceIndex != 0) {
                func_8019F208();
                globalCtx->msgCtx.unk11F22 = 0x4D;
                globalCtx->msgCtx.unk120D6 = 0;
                globalCtx->msgCtx.unk120D4 = 0;
                gSaveContext.owlSaveLocation = this->dyna.actor.params & 0xF;
            } else {
                func_801477B4(globalCtx);
            }
        }
    } else if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->isTalking = 1;
    } else if (this->actionFunc(this, globalCtx) == 0) {
        func_800B863C((Actor *) this, globalCtx);
    }
    temp_a1 = &this->collider;
    sp20 = temp_a1;
    Collider_ResetCylinderAC(globalCtx, (Collider *) temp_a1);
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    temp_a1_2 = &globalCtx->colChkCtx;
    sp24 = temp_a1_2;
    CollisionCheck_SetOC(globalCtx, temp_a1_2, (Collider *) sp20);
    CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp20);
}

void ObjWarpstone_Draw(ObjWarpstone *this, GlobalContext *globalCtx) {
    Gfx *sp38;
    Gfx *sp30;
    Gfx *sp28;
    void *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    f32 temp_f16;
    s32 temp_t6;
    f32 phi_f16;
    ObjWarpstone *this = (ObjWarpstone *) thisx;

    func_800BDFC0(globalCtx, *(&D_80B93250 + (this->modelIndex * 4)));
    if (this->dyna.actor.home.rot.x != 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        temp_s0 = temp_a0;
        func_8012C2DC(temp_a0);
        SysMatrix_InsertTranslation(this->dyna.actor.world.pos.x, this->dyna.actor.world.pos.y + 34.0f, this->dyna.actor.world.pos.z, 0);
        SysMatrix_InsertMatrix(&globalCtx->mf_187FC, 1);
        SysMatrix_InsertTranslation(0.0f, 0.0f, 30.0f, 1);
        temp_f12 = this->dyna.actor.velocity.x;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        SysMatrix_StatePush();
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w1 = 0;
        temp_v0->words.w0 = 0xE7000000;
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFA008080;
        temp_v0_2->words.w1 = (this->dyna.actor.home.rot.x & 0xFF) | ~0x37FF;
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = 0x64C800FF;
        temp_v0_3->words.w0 = 0xFB000000;
        sp24 = globalCtx + 0x18000;
        SysMatrix_InsertZRotation_f(((f32) ((globalCtx->gameplayFrames * 0x5DC) & 0xFFFF) * 3.1415927f) / 32768.0f, 1);
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDA380003;
        sp38 = temp_v0_4;
        sp38->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = (u32) D_04023210;
        temp_v0_5->words.w0 = 0xDE000000;
        sp28 = D_04023210;
        SysMatrix_StatePop();
        temp_t6 = ~((sp24->unk840 * 0x4B0) & 0xFFFF);
        temp_f16 = (f32) temp_t6;
        phi_f16 = temp_f16;
        if (temp_t6 < 0) {
            phi_f16 = temp_f16 + 4294967296.0f;
        }
        SysMatrix_InsertZRotation_f((phi_f16 * 3.1415927f) / 32768.0f, 1);
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDA380003;
        sp30 = temp_v0_6;
        sp30->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_7 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xDE000000;
        temp_v0_7->words.w1 = (u32) sp28;
    }
}
