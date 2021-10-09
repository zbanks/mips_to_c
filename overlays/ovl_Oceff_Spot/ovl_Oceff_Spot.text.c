typedef struct OceffSpot {
    /* 0x000 */ Actor actor;
    /* 0x144 */ LightNode *unk144;                  /* inferred */
    /* 0x148 */ LightInfo unk148;                   /* inferred */
    /* 0x156 */ char pad156[0x2];
    /* 0x158 */ LightNode *unk158;                  /* inferred */
    /* 0x15C */ LightInfo unk15C;                   /* inferred */
    /* 0x16A */ char pad16A[0x2];
    /* 0x16C */ f32 unk16C;                         /* inferred */
    /* 0x170 */ u16 unk170;                         /* inferred */
    /* 0x172 */ char pad172[0x2];
    /* 0x174 */ void (*actionFunc)(OceffSpot *, GlobalContext *);
} OceffSpot;                                        /* size = 0x178 */

struct _mips2c_stack_OceffSpot_Destroy {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ LightContext *sp1C;                  /* inferred */
    /* 0x20 */ char pad20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_OceffSpot_Draw {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad48[0x4];
    /* 0x4C */ Gfx *sp4C;                           /* inferred */
    /* 0x50 */ char pad50[0x8];                     /* maybe part of sp4C[3]? */
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ char pad5C[0x4];
};                                                  /* size = 0x60 */

struct _mips2c_stack_OceffSpot_Init {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ LightInfo *sp34;                     /* inferred */
    /* 0x38 */ LightContext *sp38;                  /* inferred */
    /* 0x3C */ Actor *sp3C;                         /* inferred */
    /* 0x40 */ char pad40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_OceffSpot_SetupAction {};      /* size 0x0 */

struct _mips2c_stack_OceffSpot_Update {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad44[0xC];                     /* maybe part of sp40[4]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ Actor *sp54;                         /* inferred */
    /* 0x58 */ char pad58[0x8];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80972844 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809728F8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80972934 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

? func_800FD2B4(f32, f32, GlobalContext *, f32, ?, ?, f32); /* extern */
? func_80115D5C(GlobalContext *);                   /* extern */
void func_80972844(Actor *arg0, GlobalContext *arg1); /* static */
static ? D_80973350;                                /* unable to generate initializer */
static ? D_809733E8;                                /* unable to generate initializer */
static InitChainEntry D_80973478[2];                /* unable to generate initializer */

void OceffSpot_SetupAction(OceffSpot *this, void (*actionFunc)(OceffSpot *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

void OceffSpot_Init(OceffSpot *this, GlobalContext *globalCtx) {
    Actor *sp3C;
    LightContext *sp38;
    LightInfo *sp34;
    LightContext *temp_a1;
    LightInfo *temp_a0;
    LightInfo *temp_a0_2;
    OceffSpot *this = (OceffSpot *) thisx;

    sp3C = globalCtx->actorCtx.actorList[2].first;
    Actor_ProcessInitChain((Actor *) this, D_80973478);
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

void OceffSpot_Destroy(OceffSpot *this, GlobalContext *globalCtx) {
    LightContext *sp1C;
    GlobalContext *temp_a0;
    LightContext *temp_a1;
    OceffSpot *this = (OceffSpot *) thisx;

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
        /* Duplicate return node #8. Try simplifying control flow for better match */
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

void OceffSpot_Update(OceffSpot *this, GlobalContext *globalCtx) {
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
    OceffSpot *this = (OceffSpot *) thisx;

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

void OceffSpot_Draw(OceffSpot *this, GlobalContext *globalCtx) {
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
    OceffSpot *this = (OceffSpot *) thisx;

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
