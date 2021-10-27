struct _mips2c_stack_ObjHgdoor_CheckShouldOpen {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjHgdoor_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjHgdoor_Draw {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_ObjHgdoor_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ CollisionHeader *sp24;               /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_ObjHgdoor_SetChild {};         /* size 0x0 */

struct _mips2c_stack_ObjHgdoor_SetupCheckShouldOpen {}; /* size 0x0 */

struct _mips2c_stack_ObjHgdoor_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD40D0 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD42AC {};              /* size 0x0 */

struct _mips2c_stack_func_80BD42C0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BD433C {};              /* size 0x0 */

struct _mips2c_stack_func_80BD4358 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BD4460 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD4478 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD44D0 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD4500 {};              /* size 0x0 */

void ObjHgdoor_SetChild(GlobalContext *arg0, void *arg1); /* static */
void func_80BD40D0(ObjHgdoor *arg0, GlobalContext *arg1); /* static */
void func_80BD4500(ObjHgdoor *arg0);                /* static */
extern ? D_06001670;
extern ? D_06001768;
extern CollisionHeader D_060018C0;
extern ? D_06001AB0;
extern ? D_06001BA8;
extern CollisionHeader D_06001D10;
static s16 D_80BD4690 = 0;

void ObjHgdoor_SetChild(GlobalContext *arg0, void *arg1) {
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;

    temp_v0 = arg1->unk_1CFC;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
loop_1:
        if ((phi_v0->unk_0 == 0x254) && (arg0 != phi_v0)) {
            arg0->view.projection.m[0][3] = phi_v0;
            return;
        }
        temp_v0_2 = phi_v0->unk_12C;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return;
        }
        goto loop_1;
    }
}

void func_80BD40D0(ObjHgdoor *arg0, GlobalContext *arg1) {
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;

    temp_v0 = arg1->actorCtx.actorList[6].first;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
loop_1:
        if (phi_v0->id == 0x250) {
            arg0->dyna.actor.parent = phi_v0;
            return;
        }
        temp_v0_2 = phi_v0->next;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            /* Duplicate return node #4. Try simplifying control flow for better match */
            return;
        }
        goto loop_1;
    }
}

void ObjHgdoor_Init(Actor *thisx, GlobalContext *globalCtx) {
    CollisionHeader *sp24;
    ObjHgdoor *this = (ObjHgdoor *) thisx;

    sp24 = NULL;
    Actor_SetScale((Actor *) this, 0.1f);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    if ((this->dyna.actor.params & 0x8000) != 0) {
        BgCheck_RelocateMeshHeader(&D_06001D10, &sp24);
    } else {
        BgCheck_RelocateMeshHeader(&D_060018C0, &sp24);
    }
    this->dyna.bgId = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp24);
    this->rotation = 0;
    this->timer = 0;
    this->cutscene = (s16) this->dyna.actor.cutscene;
    ObjHgdoor_SetupCheckShouldOpen(this);
}

void ObjHgdoor_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjHgdoor *this = (ObjHgdoor *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void ObjHgdoor_SetupCheckShouldOpen(ObjHgdoor *this) {
    this->actionFunc = ObjHgdoor_CheckShouldOpen;
}

void ObjHgdoor_CheckShouldOpen(ObjHgdoor *this, GlobalContext *globalCtx) {
    if (((gSaveContext.weekEventReg[75] & 0x20) == 0) && ((gSaveContext.weekEventReg[52] & 0x20) == 0) && (this->dyna.actor.xzDistToPlayer < 100.0f) && (this->dyna.actor.yDistToPlayer < 40.0f) && ((this->dyna.actor.params & 0x8000) != 0)) {
        ObjHgdoor_SetChild(globalCtx);
        func_80BD40D0(this, globalCtx);
        func_80BD42AC(this);
    }
}

void func_80BD42AC(ObjHgdoor *this) {
    this->actionFunc = func_80BD42C0;
}

void func_80BD42C0(ObjHgdoor *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCanPlayNext(this->cutscene) != 0) {
        ActorCutscene_Start(this->cutscene, (Actor *) this);
        func_80BD433C(this);
        func_80BD433C((ObjHgdoor *) this->dyna.actor.child);
        return;
    }
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
    }
    ActorCutscene_SetIntentToPlay(this->cutscene);
}

void func_80BD433C(ObjHgdoor *this) {
    this->unk166 = 0x63;
    this->actionFunc = func_80BD4358;
}

void func_80BD4358(ObjHgdoor *this, GlobalContext *globalCtx) {
    Actor *temp_v0_2;
    u16 temp_a0;
    u16 temp_a1;
    u32 temp_v0;
    void *temp_v1;

    if (func_800EE29C(globalCtx, 0x1E3U) != 0) {
        temp_v0 = func_800EE200(globalCtx, 0x1E3U);
        temp_v1 = globalCtx + (temp_v0 * 4);
        temp_a0 = globalCtx->csCtx.npcActions[temp_v0]->unk0;
        if (this->unk166 != temp_a0) {
            this->unk166 = temp_a0;
            temp_a1 = *temp_v1->unk_1F4C;
            if (temp_a1 != 1) {
                if (temp_a1 != 2) {

                }
            } else {
                Audio_PlayActorSound2((Actor *) this, 0x298AU);
                temp_v0_2 = this->dyna.actor.parent;
                if ((temp_v0_2 != 0) && (temp_v0_2->id == 0x250)) {
                    temp_v0_2->colChkInfo.health = 1;
                }
                D_80BD4690 = 1;
            }
        }
        if ((D_80BD4690 == 1) && (func_80BD44D0(this, globalCtx) != 0)) {
            func_80BD4460(this);
            return;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return;
    }
    this->unk166 = 0x63;
}

void func_80BD4460(ObjHgdoor *this) {
    this->timer = 0;
    this->actionFunc = func_80BD4478;
}

void func_80BD4478(ObjHgdoor *this, GlobalContext *globalCtx) {
    s16 temp_a0;
    s16 temp_v0;

    temp_v0 = this->timer;
    this->timer = temp_v0 + 1;
    if ((((s32) temp_v0 < 0x51) ^ 1) != 0) {
        temp_a0 = this->cutscene;
        this = this;
        if (ActorCutscene_GetCanPlayNext(temp_a0) == 0) {
            ActorCutscene_Stop(this->cutscene);
        }
    }
}

s32 func_80BD44D0(ObjHgdoor *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->rotation;
    if ((s32) temp_v0 < 0x5555) {
        this->rotation = temp_v0 + 0x1388;
        return 0;
    }
    return 1;
}

void func_80BD4500(ObjHgdoor *arg0) {
    arg0->dyna.actor.shape.rot.y = arg0->dyna.actor.home.rot.y;
    if ((arg0->dyna.actor.params & 0x8000) != 0) {
        arg0->dyna.actor.shape.rot.y += arg0->rotation;
        return;
    }
    arg0->dyna.actor.shape.rot.y -= arg0->rotation;
}

void ObjHgdoor_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjHgdoor *this = (ObjHgdoor *) thisx;
    this->actionFunc(this, globalCtx);
    func_80BD4500(this);
}

void ObjHgdoor_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    ObjHgdoor *this = (ObjHgdoor *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp24 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp24->polyOpa.p;
    sp24->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp24 = sp24;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    if ((this->dyna.actor.params & 0x8000) != 0) {
        temp_v0_2 = sp24->polyOpa.p;
        sp24->polyOpa.p = &temp_v0_2[1];
        temp_v0_2->words.w1 = (u32) &D_06001AB0;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_3 = sp24->polyOpa.p;
        sp24->polyOpa.p = &temp_v0_3[1];
        temp_v0_3->words.w1 = (u32) &D_06001BA8;
        temp_v0_3->words.w0 = 0xDE000000;
        return;
    }
    temp_v0_4 = sp24->polyOpa.p;
    sp24->polyOpa.p = &temp_v0_4[1];
    temp_v0_4->words.w1 = (u32) &D_06001670;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_5 = sp24->polyOpa.p;
    sp24->polyOpa.p = &temp_v0_5[1];
    temp_v0_5->words.w1 = (u32) &D_06001768;
    temp_v0_5->words.w0 = 0xDE000000;
}
