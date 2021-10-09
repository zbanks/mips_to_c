s32 func_800C9EBC(GlobalContext *, s32, f32, f32, f32 *, ? *, ? *); /* extern */
void func_80ACB6A0(ObjAqua *arg0, GlobalContext *arg1); /* static */
void func_80ACB7F4(ObjAqua *arg0, GlobalContext *arg1); /* static */
void func_80ACB940(void *arg0, GlobalContext *arg1); /* static */
void func_80ACBA10(ObjAqua *arg0);                  /* static */
s32 func_80ACBA60(ObjAqua *arg0, GlobalContext *arg1); /* static */
void func_80ACBC70(ObjAqua *arg0);                  /* static */
void func_80ACBD34(ObjAqua *arg0);                  /* static */
void func_80ACBDCC(ObjAqua *arg0);                  /* static */
static ColliderCylinderInit D_80ACC2C0 = {
    {0xA, 0x21, 0, 0, 0, 1},
    {0, {0xF7CFFFFF, 0, 0}, {0, 0, 0}, 0x19, 0, 0},
    {6, 0xA, 0, {0, 0, 0}},
};
static InitChainEntry D_80ACC2EC;                   /* unable to generate initializer */
static Vec3f D_80ACC308 = {0.001f, 0.0007f, 0.001f};
static Vec3f D_80ACC314 = {0.0086f, 0.0008f, 0.0086f};
static Vec3f D_80ACC320 = {0.01f, 0.0026f, 0.01f};

typedef struct ObjAqua {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderCylinder unk144;           /* inferred */
    /* 0x0190 */ void (*actionFunc)(ObjAqua *, GlobalContext *);
    /* 0x0194 */ s16 unk194;                        /* inferred */
    /* 0x0196 */ u8 unk196;                         /* inferred */
    /* 0x0197 */ char pad197[0x1];                  /* maybe part of unk196[2]? */
    /* 0x0198 */ s16 unk198;                        /* inferred */
    /* 0x019A */ char pad19A[0x2];                  /* maybe part of unk198[2]? */
} ObjAqua;                                          /* size 0x19C */

void func_80ACB6A0(ObjAqua *arg0, GlobalContext *arg1) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 *temp_s4;
    s32 temp_s1;
    s32 phi_s0;
    s32 phi_s1;

    sp5C = arg0->actor.world.pos.y + arg0->actor.yDistToWater;
    temp_s4 = &sp58;
    phi_s0 = 0;
    phi_s1 = 0;
    do {
        sp58 = (Math_SinS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s0)) * 8.0f) + arg0->actor.world.pos.x;
        sp60 = (Math_CosS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s0)) * 8.0f) + arg0->actor.world.pos.z;
        EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s4, NULL, NULL, (s16) 0, (s16) 0x78);
        temp_s1 = phi_s1 + 1;
        phi_s0 += 0x4000;
        phi_s1 = temp_s1;
    } while (temp_s1 != 4);
    sp58 = arg0->actor.world.pos.x;
    sp60 = arg0->actor.world.pos.z;
    EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s4, NULL, NULL, (s16) 0, (s16) 0x12C);
}

void func_80ACB7F4(ObjAqua *arg0, GlobalContext *arg1) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 *temp_s4;
    s32 temp_s1;
    s32 phi_s0;
    s32 phi_s1;

    temp_s4 = &sp58;
    sp5C = arg0->actor.floorHeight;
    phi_s0 = 0;
    phi_s1 = 0;
    do {
        sp58 = (Math_SinS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s0)) * 8.0f) + arg0->actor.world.pos.x;
        sp60 = (Math_CosS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s0)) * 8.0f) + arg0->actor.world.pos.z;
        EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s4, NULL, NULL, (s16) 0, (s16) 0x78);
        temp_s1 = phi_s1 + 1;
        phi_s0 += 0x4000;
        phi_s1 = temp_s1;
    } while (temp_s1 != 4);
    sp58 = arg0->actor.world.pos.x;
    sp60 = arg0->actor.world.pos.z;
    EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s4, NULL, NULL, (s16) 0, (s16) 0x12C);
}

void func_80ACB940(void *arg0, GlobalContext *arg1) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 temp_f6;

    temp_f6 = Rand_ZeroOne() - 0.5f;
    sp28 = 2.0f;
    sp24 = temp_f6;
    sp2C = Rand_ZeroOne() - 0.5f;
    sp30 = arg0->unk24 + (sp24 * 40.0f);
    sp34 = arg0->unk28;
    sp38 = arg0->unk2C + (sp2C * 40.0f);
    EffectSsIceSmoke_Spawn(arg1, (Vec3f *) &sp30, (Vec3f *) &sp24, &D_801D15B0, (s16) ((s32) (Rand_ZeroOne() * 24.0f) + 0x46));
}

void func_80ACBA10(ObjAqua *arg0) {
    MtxF sp2C;

    func_800C0094(arg0->actor.floorPoly, arg0->actor.world.pos.x, arg0->actor.floorHeight, arg0->actor.world.pos.z, &sp2C);
    func_8018219C(&sp2C, arg0 + 0xBC, 0);
}

s32 func_80ACBA60(ObjAqua *arg0, GlobalContext *arg1) {
    ? sp30;
    f32 sp2C;
    ? sp28;

    if ((func_800C9EBC(arg1, arg1 + 0x830, arg0->actor.world.pos.x, arg0->actor.world.pos.z, &sp2C, &sp30, &sp28) != 0) && (arg0->actor.world.pos.y < sp2C)) {
        return 1;
    }
    return 0;
}

void ObjAqua_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjAqua *this = (ObjAqua *) thisx;
    ColliderCylinder *temp_s0;
    PosRot *temp_s1;
    s32 temp_s0_2;
    s32 phi_s0;

    Actor_ProcessInitChain(&this->actor, &D_80ACC2EC);
    temp_s0 = &this->unk144;
    this->actor.scale.x = 0.0009f;
    this->actor.scale.z = 0.0009f;
    this->actor.scale.y = 0.0005f;
    Collider_InitCylinder(globalCtx, temp_s0);
    Collider_SetCylinder(globalCtx, temp_s0, &this->actor, &D_80ACC2C0);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 60.0f);
    this->actor.shape.shadowAlpha = 0x8C;
    this->unk196 = 0xFF;
    phi_s0 = 0;
    if (func_80ACBA60(this, globalCtx) != 0) {
        temp_s1 = &this->actor.world;
        do {
            EffectSsBubble_Spawn(globalCtx, &temp_s1->pos, -4.0f, 4.0f, 4.0f, (Rand_ZeroOne() * 0.09f) + 0.03f);
            temp_s0_2 = phi_s0 + 1;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 8);
        func_80ACBDCC(this);
        return;
    }
    func_80ACBC70(this);
}

void ObjAqua_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjAqua *this = (ObjAqua *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk144);
}

void func_80ACBC70(ObjAqua *arg0) {
    arg0->unk194 = 0xC8;
    arg0->actionFunc = func_80ACBC8C;
}

void func_80ACBC8C(ObjAqua *this, GlobalContext *globalCtx) {
    u16 temp_v0;

    temp_v0 = this->actor.bgCheckFlags;
    if ((temp_v0 & 0x21) != 0) {
        if ((temp_v0 & 1) != 0) {
            func_80ACB7F4(this);
            func_80ACBA10(this);
            Audio_PlayActorSound2(&this->actor, 0x2920U);
            func_80ACBD34(this);
            return;
        }
        func_80ACB6A0(this);
        Audio_PlaySoundAtPosition(globalCtx, &this->actor.world.pos, 0x28, 0x2817U);
        Actor_MarkForDeath(&this->actor);
        return;
    }
    if ((s32) this->unk194 <= 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void func_80ACBD34(ObjAqua *arg0) {
    arg0->actionFunc = func_80ACBD48;
}

void func_80ACBD48(ObjAqua *this, GlobalContext *globalCtx) {
    u8 temp_v0;
    u8 temp_v0_2;

    if (((this->actor.params & 1) == 1) && ((s32) this->unk196 >= 0x5B)) {
        func_80ACB940();
    }
    temp_v0 = this->actor.unk196;
    if ((s32) temp_v0 >= 6) {
        this->actor.unk196 = (u8) (temp_v0 - 5);
    } else {
        this->actor.unk196 = 0U;
    }
    temp_v0_2 = this->actor.shape.shadowAlpha;
    if ((s32) temp_v0_2 >= 3) {
        this->actor.shape.shadowAlpha = temp_v0_2 - 2;
        return;
    }
    Actor_MarkForDeath(&this->actor);
}

void func_80ACBDCC(ObjAqua *arg0) {
    arg0->unk194 = 0x28;
    arg0->unk196 = 0x8C;
    arg0->actionFunc = func_80ACBDFC;
    arg0->actor.gravity = -0.1f;
}

void func_80ACBDFC(ObjAqua *this, GlobalContext *globalCtx) {
    f32 sp2C;
    f32 temp_f2;
    u8 temp_t9;

    this->unk198 += 0x3E8;
    temp_t9 = (s32) ((f32) this->unk194 * 3.25f) + 0xA;
    this->unk196 = temp_t9;
    this->actor.shape.shadowAlpha = temp_t9;
    if ((this->actor.params & 1) == 1) {
        temp_f2 = this->actor.scale.x * 10000.0f;
        sp2C = temp_f2;
        EffectSsBubble_Spawn(globalCtx, &this->actor.world.pos, temp_f2 * -0.5f, temp_f2, temp_f2, (Rand_ZeroOne() * 0.1f) + 0.03f);
    }
    if ((s32) this->unk194 <= 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void ObjAqua_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjAqua *this = (ObjAqua *) thisx;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    s16 temp_v0;
    void (*temp_v0_2)(ObjAqua *, GlobalContext *);

    temp_v0 = this->unk194;
    if ((s32) temp_v0 > 0) {
        this->unk194 = temp_v0 - 1;
    }
    this->actionFunc(this, globalCtx);
    if (this->actor.update != 0) {
        temp_v0_2 = this->actionFunc;
        if (func_80ACBC8C == temp_v0_2) {
            Math_Vec3f_StepTo(&this->actor.scale, &D_80ACC308, 0.00006f);
        } else if (func_80ACBD48 == temp_v0_2) {
            Math_Vec3f_StepTo(&this->actor.scale, &D_80ACC314, 0.00095f);
        } else {
            Math_Vec3f_StepTo(&this->actor.scale, &D_80ACC320, 0.0004f);
        }
        this->actor.velocity.y *= 0.9f;
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 12.0f, 4.0f, 0.0f, 5U);
        if (func_80ACBDFC != this->actionFunc) {
            temp_a2 = &this->unk144;
            sp2C = temp_a2;
            Collider_UpdateCylinder(&this->actor, temp_a2);
            this->unk144.dim.radius = (s16) (s32) (this->actor.scale.x * 3000.0f);
            CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
        }
    }
}

void ObjAqua_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjAqua *this = (ObjAqua *) thisx;
    s16 sp62;
    s32 sp5C;
    Gfx *sp50;
    s16 sp46;
    Gfx *sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s16 temp_a0_2;
    s32 temp_f8;
    s32 temp_v1;
    u32 phi_v1;

    sp62 = func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000;
    sp5C = (s32) func_80ACBDFC == (s32) this->actionFunc;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v1 = ((s32) (globalCtx->gameplayFrames & 0x7FFFFFFF) * -0xA) & 0x1FF;
    phi_v1 = (u32) temp_v1;
    if (sp5C != 0) {
        phi_v1 = (u32) (temp_v1 >> 1);
    }
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp50 = temp_v0;
    sp50->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, phi_v1, 0x20, 0x80);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFA008080;
    temp_v0_2->words.w1 = this->unk196 | 0xAAFFFF00;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0x96FF00;
    temp_v0_3->words.w0 = 0xFB000000;
    if (sp5C != 0) {
        temp_f8 = (s32) (Math_SinS(this->unk198) * 8000.0f);
        temp_a0_2 = (s16) temp_f8;
        sp46 = (s16) temp_f8;
        SysMatrix_InsertZRotation_s(temp_a0_2, 1);
        Matrix_Scale(1.3f, 1.0f, 1.0f, 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) sp46 * -1), 1);
        Matrix_Scale(0.7692308f, 1.0f, 1.0f, 1);
    }
    Matrix_RotateY(sp62, 1U);
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDA380003;
    sp40 = temp_v0_4;
    sp40->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) D_0407D590;
    temp_v0_5->words.w0 = 0xDE000000;
}

