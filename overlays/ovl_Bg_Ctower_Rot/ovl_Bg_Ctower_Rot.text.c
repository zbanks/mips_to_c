void func_808E21FC(BgCtowerRot *, GlobalContext *); /* static */
void func_808E22DC(BgCtowerRot *, GlobalContext *); /* static */
void func_808E22EC(Actor *arg0, GlobalContext *arg1); /* static */
void func_808E23D0(BgCtowerRot *, GlobalContext *); /* static */
void func_808E2444(BgCtowerRot *, GlobalContext *); /* static */
extern Gfx D_060129D0;
extern CollisionHeader D_060142E8;
extern CollisionHeader D_06017410;
extern CollisionHeader D_06017650;
static InitChainEntry D_808E2560;                   /* unable to generate initializer */
static ? D_808E2564;                                /* unable to generate initializer */



void BgCtowerRot_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgCtowerRot *this = (BgCtowerRot *) thisx;
    Actor *sp34;
    Vec3f sp28;
    f32 temp_f4;
    s16 temp_v0;

    globalCtx = globalCtx;
    Actor_ProcessInitChain(&this->dyna.actor, &D_808E2560);
    BcCheck3_BgActorInit(&this->dyna, 1);
    temp_v0 = this->dyna.actor.params;
    if (temp_v0 == 0) {
        BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_060142E8);
        this->actionFunc = func_808E21FC;
        return;
    }
    sp34 = globalCtx->actorCtx.actorList[2].first;
    if (temp_v0 == 1) {
        BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_06017410);
        this->dyna.actor.world.rot.y = this->dyna.actor.shape.rot.y + 0x4000;
    } else {
        BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_06017650);
        this->dyna.actor.world.rot.y = this->dyna.actor.shape.rot.y - 0x4000;
    }
    Actor_CalcOffsetOrientedToDrawRotation(&this->dyna.actor, &sp28, &sp34->world.pos);
    if (sp28.z < 0.0f) {
        this->dyna.actor.world.pos.x = (Math_SinS(this->dyna.actor.world.rot.y) * 80.0f) + this->dyna.actor.home.pos.x;
        temp_f4 = Math_CosS(this->dyna.actor.world.rot.y) * 80.0f;
        this->actionFunc = func_808E23D0;
        this->timer = 80.0f;
        this->dyna.actor.world.pos.z = temp_f4 + this->dyna.actor.home.pos.z;
        return;
    }
    this->actionFunc = func_808E22DC;
}

void BgCtowerRot_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgCtowerRot *this = (BgCtowerRot *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void func_808E21FC(BgCtowerRot *arg0, GlobalContext *arg1) {
    Vec3f sp28;
    f32 sp24;
    f32 temp_f0;
    f32 phi_f0;
    f32 phi_f2;

    Actor_CalcOffsetOrientedToDrawRotation(&arg0->dyna.actor, &sp28, &arg1->actorCtx.actorList[2].first->world.pos);
    if (sp28.z > 1100.0f) {
        phi_f0 = 0.0f;
    } else {
        temp_f0 = 1100.0f - sp28.z;
        if (temp_f0 > 1000.0f) {
            phi_f2 = 1000.0f;
        } else {
            phi_f2 = temp_f0;
        }
        phi_f0 = phi_f2;
    }
    sp24 = phi_f0;
    func_800DFAC8(arg1->cameraPtrs[0], 0x11);
    arg0->dyna.actor.shape.rot.z = (s16) (s32) (phi_f0 * 16.384f);
    if (arg1->csCtx.frames == 0x84) {
        play_sound(0x4859U);
    }
}

void func_808E22DC(BgCtowerRot *arg0, GlobalContext *arg1) {

}

void func_808E22EC(Actor *arg0, ? arg1) {
    if (Math_SmoothStepToF(arg0 + 0x164, 0.0f, 0.1f, 15.0f, 0.1f) == 0.0f) {
        if (arg0->params == 1) {
            Audio_PlayActorSound2(arg0, 0x2893U);
            ActorCutscene_Stop((s16) arg0->cutscene);
        }
        arg0->unk15C = func_808E22DC;
    } else if (arg0->params == 1) {
        func_800B9010(arg0, 0x201EU);
    }
    arg0->world.pos.x = (Math_SinS(arg0->world.rot.y) * arg0->unk164) + arg0->home.pos.x;
    arg0->world.pos.z = (Math_CosS(arg0->world.rot.y) * arg0->unk164) + arg0->home.pos.z;
}

void func_808E23D0(BgCtowerRot *arg0, GlobalContext *arg1) {
    Vec3f sp18;

    Actor_CalcOffsetOrientedToDrawRotation(&arg0->dyna.actor, &sp18, &arg1->actorCtx.actorList[2].first->world.pos);
    if (sp18.z > 30.0f) {
        arg0->unk160 = 0.0f;
        ActorCutscene_SetIntentToPlay((s16) arg0->dyna.actor.cutscene);
        arg0->actionFunc = func_808E2444;
    }
}

void func_808E2444(BgCtowerRot *arg0, GlobalContext *arg1) {
    BgCtowerRot *temp_a1;
    s8 temp_a0;
    s8 temp_a0_2;
    BgCtowerRot *phi_a1;

    temp_a0 = arg0->dyna.actor.cutscene;
    arg0 = arg0;
    temp_a1 = arg0;
    phi_a1 = temp_a1;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        if (temp_a1->dyna.actor.params == 1) {
            temp_a0_2 = temp_a1->dyna.actor.cutscene;
            arg0 = temp_a1;
            ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0_2, &temp_a1->dyna.actor);
            phi_a1 = arg0;
        }
        phi_a1->actionFunc = func_808E22EC;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a1->dyna.actor.cutscene);
}

void BgCtowerRot_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgCtowerRot *this = (BgCtowerRot *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgCtowerRot_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgCtowerRot *this = (BgCtowerRot *) thisx;
    func_800BDFC0(globalCtx, *(&D_808E2564 + (this->dyna.actor.params * 4)));
    if (this->dyna.actor.params == 0) {
        func_800BE03C(globalCtx, &D_060129D0);
    }
}

