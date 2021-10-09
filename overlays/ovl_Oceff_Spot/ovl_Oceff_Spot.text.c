? func_800FD2B4(f32, f32, GlobalContext *, f32, ?, ?, f32); /* extern */
? func_80115D5C(GlobalContext *);                   /* extern */
void func_80972844(Actor *arg0, GlobalContext *arg1); /* static */
static ? D_80973350;                                /* unable to generate initializer */
static ? D_809733E8;                                /* unable to generate initializer */
static InitChainEntry D_80973478;                   /* unable to generate initializer */

typedef struct {
    /* 0x0000 */ View view;
    /* 0x0168 */ Font font;
    /* 0x11EF4 */ s8 unk_11EF4[16];
    /* 0x11F04 */ u16 unk11F04;
    /* 0x11F06 */ char pad11F06[0x4];               /* maybe part of unk11F04[3]? */
    /* 0x11F0A */ u8 unk11F0A;
    /* 0x11F0B */ char pad11F0B[0x5];               /* maybe part of unk11F0A[6]? */
    /* 0x11F10 */ s32 unk11F10;
    /* 0x11F14 */ char pad11F14[0xE];
    /* 0x11F22 */ u8 unk11F22;
    /* 0x11F23 */ char pad11F23[0xFD];              /* maybe part of unk11F22[254]? */
    /* 0x12020 */ u8 unk12020;
    /* 0x12021 */ u8 choiceIndex;
    /* 0x12022 */ char pad12022[0x1];               /* maybe part of choiceIndex[2]? */
    /* 0x12023 */ s8 unk12023;
    /* 0x12024 */ char pad12024[0x6];               /* maybe part of unk12023[7]? */
    /* 0x1202A */ u16 unk1202A;
    /* 0x1202C */ u16 unk1202C;                     /* inferred */
    /* 0x1202E */ u16 unk1202E;
    /* 0x12030 */ char pad12030[0x14];              /* maybe part of unk1202E[11]? */
    /* 0x12044 */ s16 unk12044;
    /* 0x12046 */ s16 unk12046;                     /* inferred */
    /* 0x12048 */ char pad12048[0x22];              /* maybe part of unk12046[18]? */
    /* 0x1206A */ s16 unk1206A;
    /* 0x1206C */ s32 unk1206C;
    /* 0x12070 */ char pad12070[0x8];               /* maybe part of unk1206C[3]? */
    /* 0x12078 */ s32 bankRupeesSelected;
    /* 0x1207C */ s32 bankRupees;
    /* 0x12080 */ char pad12080[0x31];
    /* 0x120B1 */ u8 unk120B1;
    /* 0x120B2 */ char pad120B2[0x2E];              /* maybe part of unk120B1[47]? */
} MessageContext;                                   /* size 0x120E0 */

typedef struct OceffSpot {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ LightNode *unk144;                 /* inferred */
    /* 0x0148 */ LightInfo unk148;                  /* inferred */
    /* 0x0156 */ char pad156[0x2];
    /* 0x0158 */ LightNode *unk158;                 /* inferred */
    /* 0x015C */ LightInfo unk15C;                  /* inferred */
    /* 0x016A */ char pad16A[0x2];
    /* 0x016C */ f32 unk16C;                        /* inferred */
    /* 0x0170 */ u16 unk170;                        /* inferred */
    /* 0x0172 */ char pad172[0x2];                  /* maybe part of unk170[2]? */
    /* 0x0174 */ void (*actionFunc)(OceffSpot *, GlobalContext *);
} OceffSpot;                                        /* size 0x178 */

void OceffSpot_SetupAction(OceffSpot *this, void (*actionFunc)(OceffSpot *, GlobalContext *)) {
    OceffSpot *self = (OceffSpot *) this;
    self->actionFunc = actionFunc;
}

void OceffSpot_Init(Actor *thisx, GlobalContext *globalCtx) {
    OceffSpot *this = (OceffSpot *) thisx;
    Actor *sp3C;
    LightContext *sp38;
    LightInfo *sp34;
    LightContext *temp_a1;
    LightInfo *temp_a0;
    LightInfo *temp_a0_2;

    sp3C = globalCtx->actorCtx.actorList[2].first;
    Actor_ProcessInitChain(&this->actor, &D_80973478);
    OceffSpot_SetupAction(this, func_80972934);
    temp_a0 = &this->unk148;
    sp34 = temp_a0;
    Lights_PointNoGlowSetInfo(temp_a0, (s16) (s32) this->actor.world.pos.x, (s16) (s32) this->actor.world.pos.y, (s16) (s32) this->actor.world.pos.z, (u8) 0, (u8) 0, (u8) 0, (s16) 0);
    temp_a1 = &globalCtx->lightCtx;
    sp38 = temp_a1;
    this->unk144 = LightContext_InsertLight(globalCtx, temp_a1, sp34);
    temp_a0_2 = &this->unk15C;
    sp34 = temp_a0_2;
    Lights_PointNoGlowSetInfo(temp_a0_2, (s16) (s32) this->actor.world.pos.x, (s16) (s32) this->actor.world.pos.y, (s16) (s32) this->actor.world.pos.z, (u8) 0, (u8) 0, (u8) 0, (s16) 0);
    this->unk158 = LightContext_InsertLight(globalCtx, temp_a1, sp34);
    this->actor.scale.y = 0.3f;
    this->unk16C = 0.0f;
    this->actor.world.pos.y = sp3C->world.pos.y;
    this->actor.world.pos.x = sp3C->unkBEC;
    this->actor.world.pos.z = sp3C->unkBF4;
}

void OceffSpot_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    OceffSpot *this = (OceffSpot *) thisx;
    LightContext *sp1C;
    GlobalContext *temp_a0;
    LightContext *temp_a1;

    temp_a1 = &globalCtx->lightCtx;
    temp_a0 = globalCtx;
    globalCtx = globalCtx;
    sp1C = temp_a1;
    LightContext_RemoveLight(temp_a0, temp_a1, this->unk144);
    LightContext_RemoveLight(globalCtx, temp_a1, this->unk158);
    func_80115D5C(globalCtx);
}

void func_80972844(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;

    temp_f0 = arg0->unk16C;
    if (temp_f0 > 0.0f) {
        arg0->unk16C = (f32) (temp_f0 - 0.05f);
        return;
    }
    Actor_MarkForDeath(arg0);
    if ((gGameInfo->data[15] != 0x190) && (arg1->msgCtx.unk12046 == 0)) {
        if ((arg1->msgCtx.unk1202C != 0x39) || (arg1->msgCtx.unk1202A != 0xA)) {
            gSaveContext.unk_3F58 = 1;
            return;
        }
        // Duplicate return node #8. Try simplifying control flow for better match
        return;
    }
    arg1->msgCtx.unk1202A = 4;
}

void func_809728F8(OceffSpot *this, GlobalContext *globalCtx) {
    u16 temp_v0;

    temp_v0 = this->unk170;
    if ((s32) temp_v0 > 0) {
        this->unk170 = temp_v0 - 1;
        return;
    }
    OceffSpot_SetupAction(this, (void (*)(OceffSpot *, GlobalContext *)) func_80972844);
}

void func_80972934(OceffSpot *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    temp_f0 = this->unk16C;
    if (temp_f0 < 1.0f) {
        this->unk16C = temp_f0 + 0.05f;
        return;
    }
    OceffSpot_SetupAction(this, func_809728F8);
    this->unk170 = 0x3C;
}

void OceffSpot_Update(Actor *thisx, GlobalContext *globalCtx) {
    OceffSpot *this = (OceffSpot *) thisx;
    Actor *sp54;
    f32 sp50;
    f32 sp40;
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f2;
    s32 temp_f6;
    s32 temp_v0_2;
    s32 temp_v1;
    u8 temp_v0;
    f32 phi_f12;

    sp54 = globalCtx->actorCtx.actorList[2].first;
    temp_f14 = (1.0f - __cosf(this->unk16C * 3.1415927f)) * 0.5f;
    sp50 = temp_f14;
    this->actionFunc(this, globalCtx);
    temp_v0 = gSaveContext.playerForm;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                phi_f12 = 1.0f;
            } else {
                phi_f12 = 1.3f;
            }
        } else {
            phi_f12 = 1.2f;
        }
    } else {
        phi_f12 = 2.0f;
    }
    temp_f0 = this->unk16C;
    temp_f2 = phi_f12 * 0.42f * temp_f14;
    temp_f14_2 = (2.0f - temp_f0) * temp_f0;
    this->actor.scale.z = temp_f2;
    this->actor.scale.x = temp_f2;
    this->actor.world.pos.x = sp54->world.pos.x;
    this->actor.world.pos.y = sp54->world.pos.y;
    this->actor.world.pos.z = sp54->world.pos.z;
    this->actor.world.pos.y += 5.0f;
    sp50 = temp_f14_2;
    func_800FD2B4(phi_f12, temp_f14_2, globalCtx, temp_f14_2 * 0.5f, 0x445C0000, 0x3E4CCCCD, 0.9f);
    temp_v0_2 = (s32) (255.0f * temp_f14_2) & 0xFF;
    temp_f6 = (s32) (100.0f * temp_f14_2);
    sp3C = temp_v0_2;
    temp_v1 = (s32) (200.0f * temp_f14_2) & 0xFF;
    sp34 = (s32) (s16) temp_f6;
    sp38 = temp_v1;
    Lights_PointNoGlowSetInfo(&this->unk148, (s16) (s32) this->actor.world.pos.x, (s16) (s32) (this->actor.world.pos.y + 55.0f), (s16) (s32) this->actor.world.pos.z, (u8) temp_v0_2, (u8) temp_v0_2, (u8) temp_v1, (s16) (s32) (s16) temp_f6);
    sp40 = Math_SinS(sp54->shape.rot.y);
    Lights_PointNoGlowSetInfo(&this->unk15C, (s16) (s32) ((sp40 * 20.0f) + this->actor.world.pos.x), (s16) (s32) (this->actor.world.pos.y + 20.0f), (s16) (s32) ((Math_CosS(sp54->shape.rot.y) * 20.0f) + this->actor.world.pos.z), (u8) temp_v0_2, (u8) temp_v0_2, (u8) sp38, (s16) sp34);
}

void OceffSpot_Draw(Actor *thisx, GlobalContext *globalCtx) {
    OceffSpot *this = (OceffSpot *) thisx;
    s32 sp58;
    Gfx *sp4C;
    Gfx *sp44;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s32 temp_t0;

    temp_t0 = globalCtx->state.frames & 0xFFFF;
    temp_a0 = globalCtx->state.gfxCtx;
    sp58 = temp_t0;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp58 = temp_t0;
    sp4C = temp_v0;
    sp4C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_80973350;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDE000000;
    sp44 = temp_v0_3;
    sp44->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, temp_t0 * 2, temp_t0 * -2, 0x20, 0x20, 1, 0U, temp_t0 * -8, 0x20, 0x20);
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_809733E8;
    temp_v0_4->words.w0 = 0xDE000000;
}

