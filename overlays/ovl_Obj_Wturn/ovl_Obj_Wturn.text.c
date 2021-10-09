? func_8016566C(?);                                 /* extern */
? func_80165690();                                  /* extern */
? func_8016981C(GlobalContext *, s16, PosRot *, Vec3f *, ? *); /* extern */
? func_80169988(GlobalContext *, s16, s16);         /* extern */
void func_808A7954(void *arg0);                     /* static */
void func_808A7A24(ObjWturn *arg0);                 /* static */
void func_808A7AAC(ObjWturn *arg0, GlobalContext *arg1, ObjWturn *); /* static */
void func_808A7C04(ObjWturn *arg0, GlobalContext *arg1); /* static */
static ? D_808A7DC0;                                /* unable to generate initializer */

typedef struct ObjWturn {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(ObjWturn *, GlobalContext *);
    /* 0x0148 */ s16 unk148;                        /* inferred */
    /* 0x014A */ s16 unk14A;                        /* inferred */
} ObjWturn;                                         /* size 0x14C */

void ObjWturn_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjWturn *this = (ObjWturn *) thisx;
    func_808A7954();
}

void func_808A7954(void *arg0) {
    arg0->unk144 = func_808A7968;
}

void func_808A7968(ObjWturn *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a0;
    GlobalContext *temp_a2;
    u16 temp_v0;

    temp_v0 = globalCtx->msgCtx.unk1202A;
    temp_a0 = globalCtx;
    if (((s32) temp_v0 >= 0x1C) && ((s32) temp_v0 < 0x27)) {
        Actor_UnsetSwitchFlag(globalCtx, (s32) this->actor.params);
        Actor_MarkForDeath(&this->actor);
        return;
    }
    globalCtx = globalCtx;
    temp_a2 = globalCtx;
    if (((Flags_GetSwitch(temp_a0, (s32) this->actor.params) != 0) && (temp_a2->sceneNum == 0x58)) || ((globalCtx = temp_a2, (Flags_GetSwitch(temp_a2, (s32) this->actor.params) == 0)) && (globalCtx->sceneNum == 0x59))) {
        func_808A7A24(this);
    }
}

void func_808A7A24(ObjWturn *arg0) {
    ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
    arg0->actionFunc = func_808A7A5C;
}

void func_808A7A5C(ObjWturn *this, GlobalContext *globalCtx) {
    s8 temp_a0;

    temp_a0 = this->actor.cutscene;
    this = this;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        func_808A7AAC(this, globalCtx, this);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
}

void func_808A7AAC(Actor *arg0, GlobalContext *arg1) {
    void *sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 temp_f16;

    sp3C = arg1->actorCtx.actorList[2].first;
    ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
    func_8016566C(0x8C);
    arg0->unk148 = ActorCutscene_GetCurrentCamera((s16) arg0->cutscene);
    func_800B7298(arg1, arg0, 0x15U);
    sp24 = sp3C->focus.pos.x;
    sp2C = sp3C->focus.pos.z;
    sp28 = sp3C->focus.pos.y;
    sp30 = (Math_SinS(arg0->shape.rot.y) * 150.0f) + sp24;
    temp_f16 = (Math_CosS(arg0->shape.rot.y) * 150.0f) + sp2C;
    sp34 = sp28 + 4.0f;
    sp38 = temp_f16;
    Play_CameraSetAtEye(arg1, arg0->unk148, (Vec3f *) &sp24, (Vec3f *) &sp30);
    arg0->unk144 = func_808A7BA0;
}

void func_808A7BA0(ObjWturn *this, GlobalContext *globalCtx) {
    if (Math_ScaledStepToS(&this->actor.shape.rot.z, -0x8000, 0x200) != 0) {
        func_808A7C04(this, globalCtx);
    }
    func_800B8FE8(&this->actor, 0x2098U);
    func_80169988(globalCtx, this->unk148, this->actor.shape.rot.z);
}

void func_808A7C04(Actor *arg0, GlobalContext *arg1) {
    Actor *sp24;
    Actor *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    arg0->world.pos.y += arg0->yDistToPlayer;
    temp_v0->shape.shadowAlpha = 0;
    sp24 = temp_v0;
    func_800B7298(arg1, arg0, 0x54U);
    func_800B8E58(sp24, 0x6828U);
    arg0->unk14A = 0;
    func_80165690();
    arg0->unk144 = func_808A7C78;
}

void func_808A7C78(ObjWturn *this, GlobalContext *globalCtx) {
    Actor *temp_v1;
    Camera *temp_v0;

    temp_v0 = Play_GetCamera(globalCtx, this->unk148);
    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    this->unk14A += 1;
    temp_v1->world.pos.y = this->actor.world.pos.y + ((f32) this->unk14A * 4.0f);
    func_8016981C(globalCtx, this->unk148, &temp_v1->focus, &temp_v0->eye, &D_808A7DC0);
    if (this->unk14A == 1) {
        globalCtx->unk_1887F = 0x40;
        gSaveContext.nextTransition = 3;
        gSaveContext.nextCutsceneIndex = 0;
        if (globalCtx->sceneNum == 0x58) {
            globalCtx->nextEntranceIndex = 0xAC00;
        } else {
            globalCtx->nextEntranceIndex = 0xAA10;
        }
        globalCtx->sceneLoadFlag = 0x14;
    }
}

void ObjWturn_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjWturn *this = (ObjWturn *) thisx;
    this->actionFunc(this, globalCtx);
}

