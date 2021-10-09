struct _mips2c_stack_ObjLightblock_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjLightblock_Draw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0xC];                    /* maybe part of sp24[4]? */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x10];
};                                                  /* size = 0x48 */

struct _mips2c_stack_ObjLightblock_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_ObjLightblock_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF3910 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AF3AC8 {};              /* size 0x0 */

struct _mips2c_stack_func_80AF3ADC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF3B8C {};              /* size 0x0 */

struct _mips2c_stack_func_80AF3BA0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AF3C18 {};              /* size 0x0 */

struct _mips2c_stack_func_80AF3C34 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_80AF3910(ObjLightblock *arg0, GlobalContext *arg1); /* static */
extern ? D_06000178;
extern CollisionHeader D_06000B80;
static ColliderCylinderInit D_80AF3EA0 = {
    {0xA, 0, 0x29, 0, 0, 1},
    {0, {0, 0, 0}, {0x202000, 0, 0}, 0, 1, 0},
    {0x54, 0x78, 0, {0, 0, 0}},
};
static ? D_80AF3ECC;                                /* unable to generate initializer */
static InitChainEntry D_80AF3EEC[5];                /* unable to generate initializer */

void func_80AF3910(ObjLightblock *arg0, GlobalContext *arg1) {
    Actor_Spawn(arg1 + 0x1CA0, arg1, 0x48, arg0->dyna.actor.world.pos.x, arg0->dyna.actor.world.pos.y, arg0->dyna.actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) (((arg0->dyna.actor.params & 1) * 0x10) + &D_80AF3ECC)->unk_C);
}

void ObjLightblock_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    void *temp_s1;
    ObjLightblock *this = (ObjLightblock *) thisx;

    temp_s1 = ((this->dyna.actor.params & 1) * 0x10) + &D_80AF3ECC;
    Actor_ProcessInitChain((Actor *) this, D_80AF3EEC);
    Actor_SetScale((Actor *) this, temp_s1->unk_0);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    temp_a1 = &this->collider;
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    if (Flags_GetSwitch(globalCtx, ((s32) this->dyna.actor.params >> 8) & 0x7F) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000B80);
    Collider_SetCylinder(globalCtx, sp20, (Actor *) this, &D_80AF3EA0);
    Collider_UpdateCylinder((Actor *) this, sp20);
    this->collider.dim.radius = temp_s1->unk_4;
    this->collider.dim.height = temp_s1->unk_6;
    this->alpha = 0xFF;
    this->collider.dim.yShift = temp_s1->unk_8;
    func_80AF3AC8(this);
}

void ObjLightblock_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;
    ObjLightblock *this = (ObjLightblock *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->dyna.bgId);
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void func_80AF3AC8(ObjLightblock *this) {
    this->actionFunc = func_80AF3ADC;
}

void func_80AF3ADC(ObjLightblock *this, GlobalContext *globalCtx) {
    s8 temp_a0;
    u8 temp_v0;

    temp_v0 = this->collider.base.acFlags;
    if ((temp_v0 & 2) != 0) {
        this->collider.base.acFlags = temp_v0 & 0xFFFD;
        if ((this->collider.info.acHitInfo->toucher.dmgFlags & 0x2000) != 0) {
            this->collisionCounter = 8;
        } else {
            this->collisionCounter += 1;
        }
    } else {
        this->collisionCounter = 0;
    }
    if ((s32) this->collisionCounter >= 8) {
        temp_a0 = this->dyna.actor.cutscene;
        this = this;
        ActorCutscene_SetIntentToPlay((s16) temp_a0);
        func_80AF3B8C(this);
        return;
    }
    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->collider);
}

void func_80AF3B8C(ObjLightblock *this) {
    this->actionFunc = func_80AF3BA0;
}

void func_80AF3BA0(ObjLightblock *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCanPlayNext((s16) this->dyna.actor.cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) this->dyna.actor.cutscene, (Actor *) this);
        Actor_SetSwitchFlag(globalCtx, ((s32) this->dyna.actor.params >> 8) & 0x7F);
        func_80AF3910(this, globalCtx);
        func_80AF3C18(this);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->dyna.actor.cutscene);
}

void func_80AF3C18(ObjLightblock *this) {
    this->timer = 0x50;
    this->actionFunc = func_80AF3C34;
}

void func_80AF3C34(ObjLightblock *this, GlobalContext *globalCtx) {
    s8 temp_a0;
    s8 temp_v0;
    u8 temp_v0_2;

    this->timer += -1;
    temp_v0 = this->timer;
    if ((s32) temp_v0 <= 0) {
        temp_a0 = this->dyna.actor.cutscene;
        this = this;
        ActorCutscene_Stop((s16) temp_a0);
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((s32) temp_v0 < 0x3D) {
        temp_v0_2 = this->alpha;
        if ((s32) temp_v0_2 >= 0x29) {
            this->alpha = temp_v0_2 - 0x28;
            return;
        }
        this->alpha = 0;
        this->dyna.actor.draw = NULL;
        func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void ObjLightblock_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjLightblock *this = (ObjLightblock *) thisx;
    this->actionFunc(this, globalCtx);
}

void ObjLightblock_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp34;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_a2;
    GraphicsContext *temp_s0;
    ObjLightblock *this = (ObjLightblock *) thisx;

    temp_a2 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a2;
    if ((s32) this->alpha < 0xFF) {
        func_8012C2DC(temp_a2);
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        temp_v0->words.w1 = (u32) D_801AEF88;
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDA380003;
        sp34 = temp_v0_2;
        sp34->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFA000080;
        temp_v0_3->words.w1 = this->alpha | ~0xFF;
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = (u32) &D_06000178;
        temp_v0_4->words.w0 = 0xDE000000;
        return;
    }
    func_8012C28C(temp_a2);
    temp_v0_5 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDB060020;
    temp_v0_5->words.w1 = (u32) D_801AEFA0;
    temp_v0_6 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xDA380003;
    sp24 = temp_v0_6;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_7 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = -1;
    temp_v0_7->words.w0 = 0xFA000080;
    temp_v0_8 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_8 + 8;
    temp_v0_8->words.w1 = (u32) &D_06000178;
    temp_v0_8->words.w0 = 0xDE000000;
}
