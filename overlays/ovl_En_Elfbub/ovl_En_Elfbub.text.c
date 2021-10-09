void func_80ACDE60(Actor *arg0, GlobalContext *arg1); /* static */
void func_80ACE030(EnElfbub *, GlobalContext *);    /* static */
extern ? D_06001000;
static ColliderCylinderInit D_80ACE270 = {
    {0xA, 0, 9, 9, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x10, 0x20, 0, {0, 0, 0}},
};
static Color_RGBA8 D_80ACE29C = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80ACE2A0 = {0x96, 0x96, 0x96, 0};
static Vec3f D_80ACE2A4 = {0.0f, -0.5f, 0.0f};

typedef struct EnElfbub {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderCylinder unk144;           /* inferred */
    /* 0x0190 */ s16 unk190;                        /* inferred */
    /* 0x0192 */ s16 unk192;                        /* inferred */
    /* 0x0194 */ s16 unk194;                        /* inferred */
    /* 0x0196 */ s16 unk196;                        /* inferred */
    /* 0x0198 */ f32 unk198;                        /* inferred */
    /* 0x019C */ f32 unk19C;                        /* inferred */
    /* 0x01A0 */ void (*actionFunc)(EnElfbub *, GlobalContext *);
} EnElfbub;                                         /* size 0x1A4 */

void EnElfbub_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnElfbub *this = (EnElfbub *) thisx;
    Actor *temp_v0;
    s32 temp_f4;

    if (Flags_GetSwitch(globalCtx, (s32) (this->actor.params & 0xFE00) >> 9) != 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    ActorShape_Init(&this->actor.shape, 16.0f, func_800B3FC0, 0.2f);
    this->actor.hintId = 0x16;
    Actor_SetScale(&this->actor, 1.25f);
    this->actionFunc = func_80ACE030;
    temp_f4 = (s32) randPlusMinusPoint5Scaled(65536.0f);
    this->unk192 = 0x3E8;
    this->unk190 = (s16) temp_f4;
    this->unk198 = 0.08f;
    Collider_InitAndSetCylinder(globalCtx, &this->unk144, &this->actor, &D_80ACE270);
    this->actor.colChkInfo.mass = 0xFF;
    temp_v0 = Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, 0x1B0, this->actor.world.pos.x, this->actor.world.pos.y + 12.0f, this->actor.world.pos.z, (s16) (s32) this->actor.world.rot.x, (s16) (s32) this->actor.world.rot.y, (s16) (s32) this->actor.world.rot.z, ((((s32) (this->actor.params & 0xFE00) >> 9) & 0x7F) << 9) | 2);
    if (temp_v0 != 0) {
        temp_v0->parent = &this->actor;
    }
    this->unk194 = 0;
    this->actor.flags &= -2;
}

void EnElfbub_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnElfbub *this = (EnElfbub *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk144);
}

void func_80ACDE60(Actor *arg0, GlobalContext *arg1) {
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 *temp_s3;
    s32 temp_s0;
    s32 phi_s0;

    Math_SmoothStepToF(arg0 + 0x19C, 3.0f, 0.1f, 1000.0f, 0.0f);
    Math_SmoothStepToF(arg0 + 0x198, 0.2f, 0.1f, 1000.0f, 0.0f);
    arg0->unk192 = (s16) (arg0->unk192 + 0x3E8);
    arg0->unk196 = (s16) (arg0->unk196 - 1);
    arg0->unk190 = (s16) (arg0->unk190 + arg0->unk192);
    phi_s0 = 0;
    if ((s32) arg0->unk196 <= 0) {
        sp6C = arg0->world.pos.x;
        sp70 = arg0->world.pos.y;
        temp_s3 = &sp78;
        sp74 = arg0->world.pos.z;
        do {
            sp78 = (Rand_ZeroOne() - 0.5f) * 7.0f;
            sp7C = Rand_ZeroOne() * 7.0f;
            sp80 = (Rand_ZeroOne() - 0.5f) * 7.0f;
            EffectSsDtBubble_SpawnCustomColor(arg1, (Vec3f *) &sp6C, (Vec3f *) temp_s3, &D_80ACE2A4, &D_80ACE29C, &D_80ACE2A0, (s16) Rand_S16Offset(0x64, 0x32), (s16) 0x19, (s16) 0);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != 0x14);
        Audio_PlaySoundAtPosition(arg1, arg0 + 0x24, 0x3C, 0x3949U);
        Actor_MarkForDeath(arg0);
    }
}

void func_80ACE030(EnElfbub *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp1C;
    ColliderCylinder *sp18;
    ColliderCylinder *temp_a2;
    CollisionCheckContext *temp_a1;
    f32 temp_f6;
    s16 temp_a0;

    temp_a0 = arg0->unk194;
    arg0->unk190 += arg0->unk192;
    arg0 = arg0;
    temp_f6 = arg0->actor.world.pos.y + Math_SinS(temp_a0);
    arg0->unk194 += 0x200;
    arg0->actor.world.pos.y = temp_f6;
    if (((arg0->unk144.base.acFlags & 2) != 0) || ((arg0->unk144.base.ocFlags1 & 2) != 0)) {
        arg0->actionFunc = (void (*)(EnElfbub *, GlobalContext *)) func_80ACDE60;
        arg0->unk196 = 6;
        return;
    }
    temp_a1 = &arg1->colChkCtx;
    temp_a2 = &arg0->unk144;
    sp18 = temp_a2;
    sp1C = temp_a1;
    CollisionCheck_SetAC(arg1, temp_a1, &temp_a2->base);
    CollisionCheck_SetOC(arg1, temp_a1, &temp_a2->base);
}

void EnElfbub_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnElfbub *this = (EnElfbub *) thisx;
    Collider_UpdateCylinder(&this->actor, &this->unk144);
    this->actionFunc(this, globalCtx);
    Actor_SetHeight(&this->actor, this->actor.shape.yOffset);
}

void EnElfbub_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnElfbub *this = (EnElfbub *) thisx;
    Gfx *sp2C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    SysMatrix_InsertTranslation(0.0f, 0.0f, 1.0f, 1);
    SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
    temp_f12 = this->unk19C + 1.0f;
    Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
    SysMatrix_InsertZRotation_s(this->unk190, 1);
    Matrix_Scale(this->unk198 + 1.0f, 1.0f, 1.0f, 1);
    SysMatrix_InsertZRotation_s((s16) ((s32) this->unk190 * -1), 1);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp2C = temp_v0;
    sp2C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06001000;
    temp_v0_2->words.w0 = 0xDE000000;
}

