typedef struct ObjIcePoly {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(ObjIcePoly *, GlobalContext *);
    /* 0x148 */ u8 unk_148;                         /* inferred */
    /* 0x149 */ u8 unk_149;                         /* inferred */
    /* 0x14A */ s16 unk_14A;                        /* inferred */
    /* 0x14C */ ColliderCylinder unk_14C;           /* inferred */
    /* 0x18C */ s16 unk_18C;                        /* overlap; inferred */
    /* 0x18E */ s16 unk_18E;                        /* overlap; inferred */
    /* 0x198 */ Collider unk_198;                   /* inferred */
    /* 0x1A8 */ u8 unk_1A8;                         /* overlap; inferred */
    /* 0x1B0 */ char pad_1B0[0x28];                 /* maybe part of unk_1A8[41]? */
    /* 0x1D8 */ s16 unk_1D8;                        /* inferred */
    /* 0x1DA */ s16 unk_1DA;                        /* inferred */
    /* 0x1DC */ s16 unk_1DC;                        /* inferred */
    /* 0x1DE */ char pad_1DE[0x6];                  /* maybe part of unk_1DC[4]? */
    /* 0x1E4 */ ColliderCylinder unk_1E4;           /* inferred */
    /* 0x224 */ s16 unk_224;                        /* overlap; inferred */
    /* 0x226 */ s16 unk_226;                        /* overlap; inferred */
    /* 0x230 */ char pad_230[0x8];                  /* maybe part of unk_226[5]? */
    /* 0x238 */ void *unk_238;                      /* inferred */
    /* 0x23C */ char pad_23C[0x5];                  /* maybe part of unk_238[2]? */
    /* 0x241 */ u8 unk_241;                         /* inferred */
    /* 0x242 */ char pad_242[0x2A];                 /* maybe part of unk_241[43]? */
    /* 0x26C */ s32 *unk_26C;                       /* inferred */
    /* 0x270 */ s16 unk_270;                        /* inferred */
    /* 0x272 */ s16 unk_272;                        /* inferred */
    /* 0x274 */ s16 unk_274;                        /* inferred */
    /* 0x276 */ char pad_276[0x6];                  /* maybe part of unk_274[4]? */
} ObjIcePoly;                                       /* size = 0x27C */

struct _mips2c_stack_ObjIcePoly_Destroy {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_ObjIcePoly_Draw {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad_48[0x10];
};                                                  /* size = 0x58 */

struct _mips2c_stack_ObjIcePoly_Init {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_ObjIcePoly_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80931828 {
    /* 0x00 */ char pad_0[0x88];
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad_88[0x8];
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ char pad_AC[0x4];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_80931A38 {
    /* 0x00 */ char pad_0[0x58];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x10];                   /* maybe part of sp58[5]? */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ char pad_78[0x8];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80931E58 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80931EEC {
    /* 0x00 */ char pad_0[0x94];
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
};                                                  /* size = 0xB8 */

f32 func_800C3FA0(s32, ? *, f32 *);                 /* extern */
void func_80931828(ObjIcePoly *arg0, GlobalContext *arg1); /* static */
static ColliderCylinderInit D_80932320 = {
    {0xC, 0x11, 0xD, 0x39, 0x20, 1},
    {0, {0xF7CFFFFF, 2, 0}, {0xF7CFF7FF, 0, 0}, 0x19, 1, 1},
    {0x32, 0x69, 0, {0, 0, 0}},
};
static ColliderCylinderInit D_8093234C = {
    {0xA, 0, 0x29, 0, 0x20, 1},
    {5, {0xF7CFFFFF, 0, 0}, {0x800, 0, 0}, 0, 1, 0},
    {0x41, 0x69, 0, {0, 0, 0}},
};
static Color_RGBA8 D_80932378 = {0xFA, 0xFA, 0xFA, 0xFF};
static Color_RGBA8 D_8093237C = {0xB4, 0xB4, 0xB4, 0xFF};
static Color_RGBA8 D_80932380 = {0xAA, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80932384 = {0, 0x32, 0x64, 0xFF};
static Vec3f D_80932388 = {0.0f, -1.0f, 0.0f};

void ObjIcePoly_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_s3;
    u8 temp_a1;
    ColliderCylinder *phi_s2;
    ColliderCylinder *phi_s1;
    s32 phi_s3;
    ObjIcePoly *this = (ObjIcePoly *) thisx;

    temp_v0 = this->actor.params;
    this->actor.params = temp_v0 & 0xFF;
    this->unk_149 = (u8) ((s32) temp_v0 >> 8);
    this->actor.uncullZoneForward = 5600.0f;
    Actor_SetScale((Actor *) this, (f32) this->actor.params * 0.01f);
    phi_s2 = &this->unk_14C;
    phi_s1 = &this->unk_1E4;
    phi_s3 = 0;
    do {
        Collider_InitAndSetCylinder(globalCtx, phi_s2, (Actor *) this, &D_80932320);
        Collider_InitAndSetCylinder(globalCtx, phi_s1, (Actor *) this, &D_8093234C);
        Collider_UpdateCylinder((Actor *) this, phi_s2);
        Collider_UpdateCylinder((Actor *) this, phi_s1);
        temp_s3 = phi_s3 + 0x4C;
        phi_s2 += 0x4C;
        phi_s1 += 0x4C;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x98);
    this->unk_18E = (s16) (s32) (this->actor.scale.y * 58.0f);
    temp_v0_2 = this->unk_18E;
    this->unk_18C = (s16) (s32) (this->actor.scale.x * 48.0f);
    this->unk_1DC = temp_v0_2;
    this->unk_226 = temp_v0_2;
    this->unk_1D8 = (s16) (s32) (this->actor.scale.x * 23.0f);
    this->unk_1DA = (s16) (s32) (this->actor.scale.y * 50.0f);
    this->unk_224 = this->unk_18C + 0x11;
    this->actor.colChkInfo.mass = 0xFF;
    this->unk_148 = 0xFF;
    this->unk_274 = this->unk_1DC;
    this->unk_270 = this->unk_1D8;
    this->unk_272 = this->unk_1DA;
    Actor_SetHeight((Actor *) this, this->actor.scale.y * 30.0f);
    temp_a1 = this->unk_149;
    this->actor.shape.rot.x = 0x500;
    this->actor.shape.rot.z = -0x500;
    if (((temp_a1 != 0xFF) && (Flags_GetSwitch(globalCtx, (s32) temp_a1) != 0)) || ((globalCtx->sceneNum == 0x2C) && ((gSaveContext.weekEventReg[33] & 0x80) != 0))) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actionFunc = func_80931A38;
}

void ObjIcePoly_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_s0;
    ColliderCylinder *phi_s2;
    ColliderCylinder *phi_s1;
    s32 phi_s0;
    ObjIcePoly *this = (ObjIcePoly *) thisx;

    phi_s2 = &this->unk_14C;
    phi_s1 = &this->unk_1E4;
    phi_s0 = 0;
    do {
        Collider_DestroyCylinder(globalCtx, phi_s2);
        Collider_DestroyCylinder(globalCtx, phi_s1);
        temp_s0 = phi_s0 + 0x4C;
        phi_s2 += 0x4C;
        phi_s1 += 0x4C;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x98);
}

void func_80931828(ObjIcePoly *arg0, GlobalContext *arg1) {
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    ? sp88;
    f32 *temp_fp;
    f32 *temp_s2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s32 temp_s1;
    f32 phi_f14;
    s32 phi_s1;

    temp_fp = &spA0;
    spA0 = arg0->actor.world.pos.x;
    spA4 = (f32) (arg0->unk_14C.dim.height * 2) + arg0->actor.world.pos.y;
    spA8 = arg0->actor.world.pos.z;
    temp_f0 = func_800C3FA0(arg1 + 0x830, &sp88, temp_fp);
    temp_f2 = arg0->actor.world.pos.y;
    phi_f14 = temp_f0;
    phi_s1 = 0;
    if (temp_f0 < temp_f2) {
        phi_f14 = temp_f2;
    }
    sp90 = phi_f14;
    temp_s2 = &sp94;
    do {
        sp94 = randPlusMinusPoint5Scaled(12.0f);
        sp98 = Rand_ZeroFloat(15.0f);
        temp_f0_2 = randPlusMinusPoint5Scaled(12.0f);
        sp9C = temp_f0_2;
        spA0 = ((f32) arg0->unk_14C.dim.radius * (sp94 * 0.083333336f)) + arg0->actor.world.pos.x;
        spA8 = ((f32) arg0->unk_14C.dim.radius * (temp_f0_2 * 0.083333336f)) + arg0->actor.world.pos.z;
        spA4 = Rand_ZeroFloat(spA4 - phi_f14) + sp90;
        EffectSsEnIce_Spawn(arg1, (Vec3f *) temp_fp, (Rand_ZeroFloat(0.4f) + 0.3f) * arg0->actor.scale.x, (Vec3f *) temp_s2, &D_80932388, &D_80932380, &D_80932384, 0x28);
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x1E);
}

void func_80931A38(ObjIcePoly *this, GlobalContext *globalCtx) {
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp58;
    Actor *temp_v0_5;
    Actor *temp_v0_6;
    Actor *temp_v1;
    CollisionCheckContext *temp_s3;
    CollisionCheckContext *temp_s3_2;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_s1;
    u8 temp_a1;
    u8 temp_v0_2;
    void *temp_v1_2;
    Collider *phi_s0;
    Collider *phi_s2;
    s32 phi_s1;
    Actor *phi_s0_2;
    Actor *phi_s0_3;
    s32 phi_v0;
    s32 phi_v0_2;

    if ((globalCtx->actorCtx.actorList[2].first->unk_A70 & 0x4000) == 0) {
        temp_v0 = this->unk_14A;
        if (temp_v0 != 0) {
            this->unk_14A = temp_v0 - 1;
        }
    }
    temp_v0_2 = this->unk_14C.base.atFlags;
    if (((temp_v0_2 & 2) != 0) || ((this->unk_1A8 & 2) != 0)) {
        this->unk_14A = 0x28;
        this->unk_14C.base.atFlags = temp_v0_2 & 0xFFFD;
        this->unk_1A8 &= 0xFFFD;
    }
    if ((((this->unk_1E4.base.acFlags & 2) != 0) && ((temp_v1 = this->unk_1E4.base.ac, (temp_v1 == 0)) || ((temp_v0_3 = temp_v1->id, (temp_v0_3 != 0x1AF)) && (this->unk_1E4.info.acHitInfo->toucher.dmgFlags == 0x800)) || ((temp_v0_3 == 0x1AF) && (temp_v1->params == 1)))) || (((this->unk_241 & 2) != 0) && ((temp_v1_2 = this->unk_238, (temp_v1_2 == 0)) || ((temp_v0_4 = temp_v1_2->unk_0, (temp_v0_4 != 0x1AF)) && (*this->unk_26C == 0x800)) || ((temp_v0_4 == 0x1AF) && (temp_v1_2->unk_1C == 1))))) {
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        this->unk_14A = 0;
        this->actionFunc = func_80931E58;
        this->actor.focus.rot.y = this->actor.yawTowardsPlayer;
        phi_s0_2 = NULL;
        if (globalCtx->sceneNum == 0x2D) {
            do {
                temp_v0_6 = func_ActorCategoryIterateById(globalCtx, phi_s0_2, 7, 0x8E);
                phi_s0_3 = temp_v0_6;
                if (temp_v0_6 != 0) {
                    if ((this != temp_v0_6) && (this != temp_v0_6)) {
                        temp_v0_6->unk_14A = 0;
                        temp_v0_6->unk_144 = func_80931E58;
                    }
                    phi_s0_3 = temp_v0_6->next;
                }
                phi_s0_2 = phi_s0_3;
            } while (phi_s0_3 != 0);
        }
    } else {
        temp_a1 = this->unk_149;
        if ((temp_a1 != 0xFF) && (Flags_GetSwitch(globalCtx, (s32) temp_a1) != 0)) {
            ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
            this->unk_14A = 1;
            this->actionFunc = func_80931E58;
        } else {
            temp_v0_5 = this->actor.parent;
            if ((temp_v0_5 != 0) && (temp_v0_5->update != 0)) {
                temp_v0_5->freezeTimer = 0x28;
            } else {
                this->actor.parent = NULL;
            }
            temp_s3 = &globalCtx->colChkCtx;
            if (this->unk_14A == 0) {
                CollisionCheck_SetAT(globalCtx, temp_s3, (Collider *) &this->unk_14C);
                CollisionCheck_SetAT(globalCtx, temp_s3, &this->unk_198);
            }
            temp_s3_2 = &globalCtx->colChkCtx;
            phi_s0 = (Collider *) &this->unk_14C;
            phi_s2 = (Collider *) &this->unk_1E4;
            phi_s1 = 0;
            do {
                CollisionCheck_SetAC(globalCtx, temp_s3_2, phi_s0);
                CollisionCheck_SetOC(globalCtx, temp_s3_2, phi_s0);
                CollisionCheck_SetAC(globalCtx, temp_s3_2, phi_s2);
                temp_s1 = phi_s1 + 0x4C;
                phi_s0 += 0x4C;
                phi_s2 += 0x4C;
                phi_s1 = temp_s1;
            } while (temp_s1 != 0x98);
        }
    }
    if (Rand_ZeroOne() < 0.05f) {
        sp58 = Rand_ZeroOne();
        phi_v0 = 1;
        phi_v0_2 = 1;
        if (Rand_ZeroOne() < 0.5f) {
            phi_v0 = -1;
        }
        sp6C = ((f32) phi_v0 * (15.0f + (sp58 * 15.0f)) * this->actor.scale.x) + this->actor.world.pos.x;
        sp70 = (((Rand_ZeroOne() * 90.0f) + 10.0f) * this->actor.scale.y) + this->actor.world.pos.y;
        sp58 = Rand_ZeroOne();
        if (Rand_ZeroOne() < 0.5f) {
            phi_v0_2 = -1;
        }
        sp74 = ((f32) phi_v0_2 * (15.0f + (sp58 * 15.0f)) * this->actor.scale.z) + this->actor.world.pos.z;
        EffectSsKiraKira_SpawnDispersed(globalCtx, (Vec3f *) &sp6C, &D_801D15B0, &D_801D15B0, &D_80932378, &D_8093237C, (s16) 0x7D0, 5);
    }
}

void func_80931E58(ObjIcePoly *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
        if (this->unk_14A == 1) {
            func_80931828(this, globalCtx);
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->unk_14A = 0x28;
        Audio_PlayActorSound2((Actor *) this, 0x28A2U);
        this->actionFunc = func_80931EEC;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
}

void func_80931EEC(ObjIcePoly *this, GlobalContext *globalCtx) {
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 *temp_s2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    s16 temp_v0;
    s32 temp_s1;
    u8 temp_a1;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_s1;

    spAC = 0.0f;
    spB4 = 0.0f;
    spA0 = 0.0f;
    spB0 = this->actor.scale.y;
    spA8 = 0.0f;
    temp_s2 = &sp94;
    spA4 = this->actor.scale.y;
    phi_s1 = 0;
    do {
        temp_f20 = Rand_ZeroOne();
        phi_v0 = 1;
        phi_v0_2 = 1;
        if (Rand_ZeroOne() < 0.5f) {
            phi_v0 = -1;
        }
        sp94 = ((f32) phi_v0 * (20.0f + (20.0f * temp_f20)) * this->actor.scale.x) + this->actor.world.pos.x;
        sp98 = (Rand_ZeroOne() * this->actor.scale.y * 50.0f) + this->actor.world.pos.y;
        temp_f20_2 = Rand_ZeroOne();
        if (Rand_ZeroOne() < 0.5f) {
            phi_v0_2 = -1;
        }
        sp9C = ((f32) phi_v0_2 * (20.0f + (20.0f * temp_f20_2)) * this->actor.scale.x) + this->actor.world.pos.z;
        temp_f2 = this->actor.scale.x;
        func_800B0DE0(globalCtx, (Vec3f *) temp_s2, (Vec3f *) &spA0, (Vec3f *) &spAC, &D_80932378, &D_8093237C, (s16) (s32) (((Rand_ZeroOne() * 100.0f) + 350.0f) * temp_f2), (s16) (s32) (temp_f2 * 20.0f));
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
    } while (temp_s1 != 2);
    temp_v0 = this->unk_14A;
    if (temp_v0 != 0) {
        this->unk_14A = temp_v0 - 1;
    }
    this->unk_148 += -6;
    this->actor.scale.y = (f32) this->actor.params * 0.01f * (0.5f + ((f32) this->unk_14A * 0.0125f));
    if (this->unk_14A == 0) {
        ActorCutscene_Stop((s16) this->actor.cutscene);
        temp_a1 = this->unk_149;
        if (temp_a1 != 0xFF) {
            Actor_SetSwitchFlag(globalCtx, (s32) temp_a1);
        }
        Actor_MarkForDeath((Actor *) this);
    }
}

void ObjIcePoly_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjIcePoly *this = (ObjIcePoly *) thisx;
    this->actionFunc(this, globalCtx);
}

void ObjIcePoly_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp44;
    Gfx *sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    u32 temp_v1;
    ObjIcePoly *this = (ObjIcePoly *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    func_800B8118((Actor *) this, globalCtx, 0);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp44 = temp_v0;
    sp44->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060020;
    temp_v1 = globalCtx->gameplayFrames;
    sp40 = temp_v0_2;
    sp40->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, temp_v1 & 0xFF, 0x20, 0x10, 1, 0U, (temp_v1 * 2) & 0xFF, 0x40, 0x20);
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v0_3->words.w1 = this->unk_148 | 0x326400;
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_04050D10;
    temp_v0_4->words.w0 = 0xDE000000;
}
