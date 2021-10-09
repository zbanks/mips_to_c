extern ? D_06001980;
extern ? D_06001A20;
extern CollisionHeader D_06003CD0;
static Vec3f D_80B3C960 = {0.0f, 0.0f, 0.0f};
static InitChainEntry D_80B3C96C;                   /* unable to generate initializer */

typedef struct ObjGhaka {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x015C */ void (*actionFunc)(ObjGhaka *, GlobalContext *);
    /* 0x0160 */ s8 unk160[8];
    /* 0x0168 */ s16 unk168;                        /* inferred */
    /* 0x016A */ char pad16A[0x2];                  /* maybe part of unk168[2]? */
} ObjGhaka;                                         /* size 0x16C */

void func_80B3C260(ObjGhaka *this) {
    if ((gSaveContext.weekEventReg[20] & 0x20) != 0) {
        this->dyna.actor.world.pos.z = this->dyna.actor.home.pos.z + 100.0f;
    }
    this->actionFunc = func_80B3C39C;
}

void func_80B3C29C(ObjGhaka *this) {
    this->actionFunc = func_80B3C4E0;
}

void func_80B3C2B0(ObjGhaka *this) {
    this->actionFunc = func_80B3C624;
}

void func_80B3C2C4(ObjGhaka *this, GlobalContext *globalCtx) {
    if ((gSaveContext.weekEventReg[20] & 0x20) == 0) {
        Actor_SpawnAsChildAndCutscene(&globalCtx->actorCtx, globalCtx, 0x1FE, 0.0f, 25.0f, 261.0f, (s16) 0, (s16) 0, (s16) 0, 0, (u32) this->dyna.actor.cutscene, (s32) this->dyna.actor.unk20, NULL);
        return;
    }
    Actor_SpawnAsChildAndCutscene(&globalCtx->actorCtx, globalCtx, 0x1FE, 0.0f, 25.0f, 261.0f, (s16) 0, (s16) 0, (s16) 0, 1, -1U, (s32) this->dyna.actor.unk20, NULL);
}

void func_80B3C39C(ObjGhaka *this, GlobalContext *globalCtx) {
    Actor *sp24;
    s16 sp22;
    Actor *temp_a2;
    s16 temp_v1;

    temp_a2 = globalCtx->actorCtx.actorList[2].first;
    temp_v1 = this->dyna.actor.yawTowardsPlayer - this->dyna.actor.shape.rot.y;
    sp22 = temp_v1;
    sp24 = temp_a2;
    if (func_800B84D0(&this->dyna.actor, globalCtx) != 0) {
        sp24 = temp_a2;
        func_80B3C29C(this);
    } else if (((this->dyna.actor.xzDistToPlayer < 100.0f) || (this->dyna.actor.isTargeted != 0)) && (((s32) temp_v1 < -0x5555) || ((s32) temp_v1 >= 0x5556))) {
        sp24 = temp_a2;
        func_800B863C(&this->dyna.actor, globalCtx);
        if (temp_a2->unk14B == 1) {
            this->dyna.actor.textId = 0xCF3;
        } else {
            this->dyna.actor.textId = 0xCF2;
        }
    }
    if ((this->dyna.unk148 < 0.0f) && ((gSaveContext.weekEventReg[20] & 0x20) == 0) && (globalCtx->actorCtx.actorList[2].first->unk14B == 1)) {
        func_80B3C2B0(this);
        return;
    }
    globalCtx->actorCtx.actorList[2].first->unkA70 = (s32) (globalCtx->actorCtx.actorList[2].first->unkA70 & ~0x10);
    this->dyna.unk148 = 0.0f;
}

void func_80B3C4E0(ObjGhaka *this, GlobalContext *globalCtx) {
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 == 5) {
        if (func_80147624(globalCtx) != 0) {
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
            func_80B3C260(this);
            return;
        }
        // Duplicate return node #12. Try simplifying control flow for better match
        return;
    }
    if ((temp_v0 == 4) && (func_80147624(globalCtx) != 0)) {
        temp_v0_2 = globalCtx->msgCtx.choiceIndex;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 != 1) {
                if (temp_v0_2 != 2) {
                    return;
                }
                func_8019F230();
                globalCtx->msgCtx.unk11F22 = 0x43;
                globalCtx->msgCtx.unk12023 = 4;
                func_80B3C260(this);
                // Duplicate return node #12. Try simplifying control flow for better match
                return;
            }
            func_8019F208();
            this->dyna.actor.textId = 0xCF7;
            func_801518B0(globalCtx, 0xCF7U & 0xFFFF, &this->dyna.actor);
            return;
        }
        func_8019F208();
        this->dyna.actor.textId = 0xCF5;
        func_801518B0(globalCtx, 0xCF5U & 0xFFFF, &this->dyna.actor);
    }
}

void func_80B3C624(ObjGhaka *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    Actor *temp_v1;
    ObjGhaka *temp_a0_2;
    s16 *temp_a0;

    temp_a0 = &this->unk168;
    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    this = this;
    sp1C = temp_v1;
    this->dyna.actor.world.pos.z = this->dyna.actor.home.pos.z + (f32) this->unk168;
    if ((Math_StepToS(temp_a0, 0x64, 1) & 0xFF) != 0) {
        temp_a0_2 = this;
        temp_v1->unkA70 = (s32) (temp_v1->unkA70 & ~0x10);
        this->dyna.unk148 = 0.0f;
        this = this;
        func_80B3C2C4(temp_a0_2, globalCtx);
        gSaveContext.weekEventReg[20] |= 0x20;
        func_80B3C260(this);
        func_8019F1C0(&D_80B3C960, 0x2835U);
        return;
    }
    func_8019F1C0(&D_80B3C960, 0x200AU);
}

void ObjGhaka_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjGhaka *this = (ObjGhaka *) thisx;
    CollisionHeader *sp2C;

    sp2C = NULL;
    Actor_ProcessInitChain(&this->dyna.actor, &D_80B3C96C);
    Actor_SetScale(&this->dyna.actor, 0.1f);
    BcCheck3_BgActorInit(&this->dyna, 1);
    BgCheck_RelocateMeshHeader(&D_06003CD0, &sp2C);
    this->dyna.bgId = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, &this->dyna, sp2C);
    Actor_UpdateBgCheckInfo(globalCtx, &this->dyna.actor, 0.0f, 0.0f, 0.0f, 4U);
    if (this->dyna.actor.floorPoly == 0) {
        Actor_MarkForDeath(&this->dyna.actor);
    }
    if ((gSaveContext.weekEventReg[20] & 0x20) != 0) {
        func_80B3C2C4(this, globalCtx);
    }
    func_80B3C260(this);
}

void ObjGhaka_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjGhaka *this = (ObjGhaka *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void ObjGhaka_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjGhaka *this = (ObjGhaka *) thisx;
    this->actionFunc(this, globalCtx);
    this->dyna.actor.focus.pos.x = this->dyna.actor.world.pos.x;
    this->dyna.actor.focus.pos.z = this->dyna.actor.world.pos.z;
    this->dyna.actor.focus.pos.y = this->dyna.actor.world.pos.y + 60.0f;
}

void ObjGhaka_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjGhaka *this = (ObjGhaka *) thisx;
    Gfx *sp2C;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp2C = temp_v0;
    sp2C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06001A20;
    temp_v0_2->words.w0 = 0xDE000000;
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    sp24 = temp_v0_3;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_06001980;
    temp_v0_4->words.w0 = 0xDE000000;
}

