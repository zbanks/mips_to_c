typedef struct EnElfbub {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ s16 unk_190;                        /* inferred */
    /* 0x192 */ s16 unk_192;                        /* inferred */
    /* 0x194 */ s16 unk_194;                        /* inferred */
    /* 0x196 */ s16 unk_196;                        /* inferred */
    /* 0x198 */ f32 unk_198;                        /* inferred */
    /* 0x19C */ f32 unk_19C;                        /* inferred */
    /* 0x1A0 */ void (*actionFunc)(EnElfbub *, GlobalContext *);
} EnElfbub;                                         /* size = 0x1A4 */

struct _mips2c_stack_EnElfbub_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnElfbub_Draw {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ char pad_30[0x10];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnElfbub_Init {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnElfbub_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ACDE60 {
    /* 0x00 */ char pad_0[0x6C];
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ char pad_84[0x4];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_80ACE030 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ColliderCylinder *sp18;              /* inferred */
    /* 0x1C */ CollisionCheckContext *sp1C;         /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

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

void EnElfbub_Init(Actor *thisx, GlobalContext *globalCtx) {
    Actor *temp_v0;
    s32 temp_f4;
    EnElfbub *this = (EnElfbub *) thisx;

    if (Flags_GetSwitch(globalCtx, (s32) (this->actor.params & 0xFE00) >> 9) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    ActorShape_Init(&this->actor.shape, 16.0f, func_800B3FC0, 0.2f);
    this->actor.hintId = 0x16;
    Actor_SetScale((Actor *) this, 1.25f);
    this->actionFunc = func_80ACE030;
    temp_f4 = (s32) randPlusMinusPoint5Scaled(65536.0f);
    this->unk_192 = 0x3E8;
    this->unk_190 = (s16) temp_f4;
    this->unk_198 = 0.08f;
    Collider_InitAndSetCylinder(globalCtx, &this->unk_144, (Actor *) this, &D_80ACE270);
    this->actor.colChkInfo.mass = 0xFF;
    temp_v0 = Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x1B0, this->actor.world.pos.x, this->actor.world.pos.y + 12.0f, this->actor.world.pos.z, (s16) (s32) this->actor.world.rot.x, (s16) (s32) this->actor.world.rot.y, (s16) (s32) this->actor.world.rot.z, ((((s32) (this->actor.params & 0xFE00) >> 9) & 0x7F) << 9) | 2);
    if (temp_v0 != 0) {
        temp_v0->parent = (Actor *) this;
    }
    this->unk_194 = 0;
    this->actor.flags &= -2;
}

void EnElfbub_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnElfbub *this = (EnElfbub *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
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
    arg0->unk_192 = (s16) (arg0->unk_192 + 0x3E8);
    arg0->unk_196 = (s16) (arg0->unk_196 - 1);
    arg0->unk_190 = (s16) (arg0->unk_190 + arg0->unk_192);
    phi_s0 = 0;
    if ((s32) arg0->unk_196 <= 0) {
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

    temp_a0 = arg0->unk_194;
    arg0->unk_190 += arg0->unk_192;
    arg0 = arg0;
    temp_f6 = arg0->actor.world.pos.y + Math_SinS(temp_a0);
    arg0->unk_194 += 0x200;
    arg0->actor.world.pos.y = temp_f6;
    if (((arg0->unk_144.base.acFlags & 2) != 0) || ((arg0->unk_144.base.ocFlags1 & 2) != 0)) {
        arg0->actionFunc = (void (*)(EnElfbub *, GlobalContext *)) func_80ACDE60;
        arg0->unk_196 = 6;
        return;
    }
    temp_a1 = &arg1->colChkCtx;
    temp_a2 = &arg0->unk_144;
    sp18 = temp_a2;
    sp1C = temp_a1;
    CollisionCheck_SetAC(arg1, temp_a1, (Collider *) temp_a2);
    CollisionCheck_SetOC(arg1, temp_a1, (Collider *) temp_a2);
}

void EnElfbub_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnElfbub *this = (EnElfbub *) thisx;
    Collider_UpdateCylinder((Actor *) this, &this->unk_144);
    this->actionFunc(this, globalCtx);
    Actor_SetHeight((Actor *) this, this->actor.shape.yOffset);
}

void EnElfbub_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp2C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    EnElfbub *this = (EnElfbub *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    SysMatrix_InsertTranslation(0.0f, 0.0f, 1.0f, 1);
    SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
    temp_f12 = this->unk_19C + 1.0f;
    Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
    SysMatrix_InsertZRotation_s(this->unk_190, 1);
    Matrix_Scale(this->unk_198 + 1.0f, 1.0f, 1.0f, 1);
    SysMatrix_InsertZRotation_s((s16) ((s32) this->unk_190 * -1), 1);
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
