s32 func_809656D4(PosRot *arg0, f32 *arg1, f32 *arg2, f32 arg3); /* static */
void func_809657F4(EnStream *arg0, GlobalContext *arg1); /* static */
void func_8096597C(EnStream *arg0, GlobalContext *arg1); /* static */
extern ? D_06000950;
static InitChainEntry D_80965B20;                   /* unable to generate initializer */



void EnStream_SetupAction(EnStream *this, void (*actionFunc)(EnStream *, GlobalContext *)) {
    EnStream *self = (EnStream *) this;
    self->actionFunc = actionFunc;
}

void EnStream_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnStream *this = (EnStream *) thisx;
    s32 temp_v0;

    this->unk148 = this->actor.params & 0xFF;
    Actor_ProcessInitChain(&this->actor, &D_80965B20);
    temp_v0 = this->unk148;
    if ((temp_v0 != 0) && (temp_v0 == 1)) {
        this->actor.scale.y = 0.01f;
    }
    EnStream_SetupAction(this, func_8096597C);
}

void EnStream_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnStream *this = (EnStream *) thisx;

}

s32 func_809656D4(PosRot *arg0, f32 *arg1, f32 *arg2, f32 arg3) {
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 phi_v1;

    arg2->unk0 = arg1->unk0 - arg0->pos.x;
    temp_f2 = arg2->unk0;
    arg2->unk4 = (f32) (arg1->unk4 - arg0->pos.y);
    temp_f18 = arg2->unk4;
    arg2->unk8 = (f32) (arg1->unk8 - arg0->pos.z);
    temp_f16 = arg2->unk8;
    temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f16 * temp_f16));
    temp_f14 = 0.0f * arg3 * 50.0f;
    phi_v1 = 0;
    if (temp_f14 <= temp_f18) {
        temp_f2_2 = 160.0f * arg3 * 50.0f;
        if (temp_f18 <= temp_f2_2) {
            arg2->unk4 = (f32) (temp_f18 - temp_f14);
            if (temp_f0 <= (((75.0f - 28.0f) * (arg2->unk4 / (temp_f2_2 - temp_f14))) + 28.0f)) {
                phi_v1 = 1;
            }
        }
    }
    if ((arg2->unk4 <= temp_f14) && (temp_f0 <= 28.0f)) {
        phi_v1 = 2;
    }
    return phi_v1;
}

void func_809657F4(EnStream *arg0, GlobalContext *arg1) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 *sp28;
    f32 *temp_a1;
    f32 temp_f2;
    f32 temp_f2_2;
    void *temp_s0;

    temp_s0 = arg1->actorCtx.actorList[2].first;
    temp_a1 = temp_s0 + 0x24;
    sp28 = temp_a1;
    if (func_809656D4(arg0 + 0x24, temp_a1, &sp3C, arg0->actor.scale.y) != 0) {
        temp_f2 = sqrtf((sp3C * sp3C) + (sp44 * sp44));
        sp38 = temp_f2;
        sp34 = temp_s0->world.pos.y - (arg0->actor.world.pos.y - 90.0f);
        temp_f2_2 = temp_f2;
        temp_s0->unkB84 = Math_Atan2S(-sp3C, -sp44);
        if (temp_f2_2 > 3.0f) {
            Math_SmoothStepToF(temp_s0 + 0xB80, 3.0f, 0.5f, temp_f2_2, 0.0f);
        } else {
            temp_s0->unkB80 = 0.0f;
            Math_SmoothStepToF(sp28, arg0->actor.world.pos.x, 0.5f, 3.0f, 0.0f);
            Math_SmoothStepToF(temp_s0 + 0x2C, arg0->actor.world.pos.z, 0.5f, 3.0f, 0.0f);
        }
        if ((sp34 > 0.0f) && (Math_SmoothStepToF(temp_s0 + 0x68, -3.0f, 0.7f, sp34, 0.0f), (sp40 < -70.0f))) {
            temp_s0->unkA70 = (s32) (temp_s0->unkA70 | 0x80000000);
            return;
        }
        // Duplicate return node #8. Try simplifying control flow for better match
        return;
    }
    EnStream_SetupAction(arg0, func_8096597C);
}

void func_8096597C(EnStream *arg0, GlobalContext *arg1) {
    f32 sp1C;

    if (func_809656D4(&arg0->actor.world, &arg1->actorCtx.actorList[2].first->world.pos.x, &sp1C, arg0->actor.scale.y) != 0) {
        EnStream_SetupAction(arg0, func_809657F4);
    }
}

void EnStream_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnStream *this = (EnStream *) thisx;
    this->actionFunc(this, globalCtx);
    func_800B8FE8(&this->actor, 0x20DDU);
}

void EnStream_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnStream *this = (EnStream *) thisx;
    u32 sp40;
    Gfx *sp3C;
    GraphicsContext *sp38;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    s32 temp_a3;
    s32 temp_v0;

    sp40 = globalCtx->gameplayFrames;
    temp_a0 = globalCtx->state.gfxCtx;
    sp38 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v1 = sp38->polyXlu.p;
    temp_v1->words.w0 = 0xDA380003;
    sp3C = temp_v1;
    temp_v1->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v1->unk8 = 0xDB060020;
    temp_v0 = sp40 * 0x14;
    temp_a3 = -temp_v0;
    sp3C = temp_v1;
    temp_v1->unkC = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, sp40 * 0x1E, (u32) temp_a3, 0x40, 0x40, 1, (u32) temp_v0, (u32) temp_a3, 0x40, 0x40);
    temp_v1->unk14 = &D_06000950;
    temp_v1->unk10 = 0xDE000000;
    sp38->polyXlu.p = temp_v1 + 0x18;
}

