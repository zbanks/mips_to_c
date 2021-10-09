void func_80AFDD60(EnColMan *arg0);                 /* static */
void func_80AFDF60(EnColMan *arg0);                 /* static */
void func_80AFE234(EnColMan *arg0);                 /* static */
void func_80AFE414(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AFE4AC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AFE584(Actor *arg0, GraphicsContext **arg1); /* static */
void func_80AFE650(Actor *arg0, GlobalContext *arg1); /* static */
static ColliderCylinderInit D_80AFE730 = {
    {0xA, 0, 0, 1, 0x10, 1},
    {0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
    {0xA, 0xB, 1, {0, 0, 0}},
};
static Color_RGBA8 D_80AFE77C = {0x3C, 0x32, 0x14, 0xFF};
static Color_RGBA8 D_80AFE780 = {0x28, 0x1E, 0x1E, 0xFF};

typedef struct EnColMan {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnColMan *, GlobalContext *);
    /* 0x0148 */ s16 unk148;                        /* inferred */
    /* 0x014A */ char pad14A[0x2];                  /* maybe part of unk148[2]? */
    /* 0x014C */ s32 unk14C;                        /* inferred */
    /* 0x0150 */ f32 unk150;                        /* inferred */
    /* 0x0154 */ ColliderCylinder unk154;           /* inferred */
} EnColMan;                                         /* size 0x1A0 */

void EnColMan_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnColMan *this = (EnColMan *) thisx;
    u16 temp_t9;

    Collider_InitAndSetCylinder(globalCtx, &this->unk154, &this->actor, &D_80AFE730);
    this->actor.targetMode = 1;
    temp_t9 = (u16) this->actor.params;
    this->unk150 = ((f32) gGameInfo->data[2455] / 1000.0f) + 0.01f;
    switch (temp_t9) {
    default:
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 10.0f);
        func_80AFDD60(this);
        return;
    case 2:
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 10.0f);
        func_80AFDF60(this);
        return;
    case 3:
    case 4:
        func_80AFE234(this);
        return;
    }
}

void EnColMan_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnColMan *this = (EnColMan *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk154);
}

void func_80AFDD60(EnColMan *arg0) {
    if ((gSaveContext.weekEventReg[56] & 2) == 0) {
        arg0->actor.draw = func_80AFE414;
        arg0->actor.shape.yOffset = 700.0f;
        if (arg0->actor.params == 0) {
            arg0->actor.gravity = -2.0f;
        }
        arg0->unk148 = 0;
    } else {
        arg0->actor.draw = func_80AFE4AC;
        arg0->actor.shape.yOffset = 300.0f;
        arg0->actor.shape.shadowScale = 5.0f;
        if (arg0->actor.params == 0) {
            arg0->actor.gravity = -2.0f;
        }
        arg0->unk148 = 1;
    }
    arg0->actionFunc = func_80AFDE00;
}

void func_80AFDE00(EnColMan *this, GlobalContext *globalCtx) {
    if ((this->actor.bgCheckFlags & 1) != 0) {
        if (this->actor.params == 0) {
            this->actor.params = 1;
            this->actor.speedXZ = 2.0f;
            this->actor.velocity.y = 8.0f;
        } else {
            this->actor.speedXZ = 0.0f;
        }
    }
    if ((gSaveContext.weekEventReg[56] & 2) == 0) {
        this->actor.shape.rot.y += 0x3E8;
    }
    if (Actor_HasParent(&this->actor, globalCtx) != 0) {
        this->actor.parent = NULL;
        this->actor.draw = NULL;
        this->actionFunc = func_80AFDF00;
        return;
    }
    if ((gSaveContext.weekEventReg[56] & 2) == 0) {
        func_800B8A1C(&this->actor, globalCtx, 0xC, 40.0f, 40.0f);
        return;
    }
    func_800B8A1C(&this->actor, globalCtx, 0xA, 40.0f, 40.0f);
}

void func_80AFDF00(EnColMan *this, GlobalContext *globalCtx) {
    if ((func_80152498(&globalCtx->msgCtx) == 6) && (func_80147624(globalCtx) != 0)) {
        gSaveContext.weekEventReg[56] |= 2;
        Actor_MarkForDeath(&this->actor);
    }
}

void func_80AFDF60(EnColMan *arg0) {
    s32 temp_t8;

    temp_t8 = arg0->actor.flags | 0x10;
    arg0->actor.flags = temp_t8;
    arg0->actor.draw = func_80AFE584;
    arg0->actor.flags = temp_t8 | 0x20;
    arg0->unk148 = 2;
    arg0->actionFunc = func_80AFDFB4;
    arg0->actor.shape.shadowScale = 5.0f;
    arg0->actor.gravity = -3.0f;
}

void func_80AFDFB4(EnColMan *this, GlobalContext *globalCtx) {
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    PosRot *temp_s1;
    f32 *temp_s2;
    f32 *temp_s3;
    f32 temp_f0;
    f32 temp_f22;
    s32 temp_s0;
    s32 phi_s0;

    this->unk150 = ((f32) gGameInfo->data[2455] / 10000.0f) + 0.0015f;
    if (((this->actor.bgCheckFlags & 1) != 0) && (this->actor.velocity.y < 0.0f)) {
        temp_s1 = &this->actor.world;
        if (this->unk14C == 0) {
            this->actor.world.rot.y = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
            this->actor.speedXZ = Rand_ZeroFloat(2.0f) + (2.0f + (f32) gGameInfo->data[2456]);
            temp_f0 = Rand_ZeroFloat(5.0f);
            this->unk14C = 1;
            this->actor.velocity.y = temp_f0 + (12.0f + (f32) gGameInfo->data[2457]);
            Audio_PlayActorSound2(&this->actor, 0x3ADAU);
            return;
        }
        temp_s3 = &sp94;
        temp_s2 = &spA0;
        phi_s0 = 0;
        do {
            spA0 = randPlusMinusPoint5Scaled(2.0f);
            spA4 = Rand_ZeroFloat(2.0f) + 1.0f;
            spA8 = randPlusMinusPoint5Scaled(2.0f);
            sp98 = -0.1f;
            sp9C = 0.0f;
            sp94 = 0.0f;
            temp_f22 = Rand_ZeroFloat(50.0f);
            func_800B0EB0(globalCtx, &temp_s1->pos, (Vec3f *) temp_s2, (Vec3f *) temp_s3, &D_80AFE77C, &D_80AFE780, (s16) (s32) (temp_f22 + 60.0f), (s16) 0x1E, (s16) (s32) (Rand_ZeroFloat(5.0f) + 20.0f));
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != 2);
        Actor_MarkForDeath(&this->actor);
        // Duplicate return node #7. Try simplifying control flow for better match
    }
}

void func_80AFE234(EnColMan *arg0) {
    arg0->actor.draw = func_80AFE650;
    arg0->unk148 = 3;
    arg0->actionFunc = func_80AFE25C;
}

void func_80AFE25C(EnColMan *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    Actor *temp_v0_2;

    this->unk150 = ((f32) gGameInfo->data[2455] * 0.01f) + 0.05f;
    if ((gGameInfo->data[2460] != 0) || (this->actor.world.rot.z != 0)) {
        if (this->actor.params == 3) {
            temp_v0 = this->actor.parent;
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xA2, temp_v0->world.pos.x, temp_v0->world.pos.y, temp_v0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
        } else {
            temp_v0_2 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 9, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
            if (temp_v0_2 != 0) {
                temp_v0_2->unk1F0 = 0;
            }
        }
        Audio_PlayActorSound2(&this->actor, 0x180EU);
        Actor_MarkForDeath(&this->actor);
    }
}

void EnColMan_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnColMan *this = (EnColMan *) thisx;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;

    Actor_SetScale(&this->actor, this->unk150);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 30.0f, 30.0f, 30.0f, 0x1FU);
    temp_a2 = &this->unk154;
    sp2C = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
}

void func_80AFE414(Actor *arg0, GlobalContext *arg1) {
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    temp_a0 = arg1->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    func_800B8118(arg0, arg1, 0);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_v0;
    sp20->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) D_0405AAB0;
    temp_v0_2->words.w0 = 0xDE000000;
}

void func_80AFE4AC(Actor *arg0, GlobalContext *arg1) {
    Gfx *sp28;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_s0;

    func_8012C2DC(arg1->state.gfxCtx);
    func_8012C28C(arg1->state.gfxCtx);
    temp_s0 = arg1->state.gfxCtx;
    temp_v0 = func_801660B8(arg1, temp_s0->polyOpa.p);
    temp_s0->polyOpa.p = temp_v0;
    temp_s0->polyOpa.p = func_8012C724(temp_v0);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060020;
    sp28 = temp_v0_2;
    sp28->words.w1 = Lib_SegmentedToVirtual((void *) &D_0405E6F0);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    sp24 = temp_v0_3;
    sp24->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) D_0405F6F0;
    temp_v0_4->words.w0 = 0xDE000000;
}

void func_80AFE584(Actor *arg0, GraphicsContext **arg1) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_v1;

    func_8012C2DC(*arg1);
    func_8012C28C(*arg1);
    temp_v1 = *arg1;
    temp_v0 = temp_v1->polyOpa.p;
    temp_v1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v1;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_2 = temp_v1->polyOpa.p;
    temp_v1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = -1;
    temp_v0_2->words.w0 = 0xFA000080;
    temp_v0_3 = temp_v1->polyOpa.p;
    temp_v1->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = -1;
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v0_4 = temp_v1->polyOpa.p;
    temp_v1->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_0406AB30;
    temp_v0_4->words.w0 = 0xDE000000;
}

void func_80AFE650(Actor *arg0, GlobalContext *arg1) {
    Gfx *sp24;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_s0;

    func_8012C28C(arg1->state.gfxCtx);
    temp_s0 = arg1->state.gfxCtx;
    temp_v0 = func_801660B8(arg1, temp_s0->polyOpa.p);
    temp_s0->polyOpa.p = temp_v0;
    temp_s0->polyOpa.p = func_8012C724(temp_v0);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060020;
    sp24 = temp_v0_2;
    sp24->words.w1 = Lib_SegmentedToVirtual((void *) &D_0405CEF0);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    sp20 = temp_v0_3;
    sp20->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) D_0405F6F0;
    temp_v0_4->words.w0 = 0xDE000000;
}

