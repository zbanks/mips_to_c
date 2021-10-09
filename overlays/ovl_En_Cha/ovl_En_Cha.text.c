void EnCha_Ring(EnCha *arg0, GlobalContext *arg1);  /* static */
extern Gfx D_06000710;
extern Gfx D_06000958;
static ColliderCylinderInit D_80BEB880 = {
    {0xB, 0, 0xD, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0xA, 0x28, 0, {0, 0, 0}},
};



void EnCha_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnCha *this = (EnCha *) thisx;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;

    temp_a1 = &this->collider;
    sp24 = temp_a1;
    Collider_InitAndSetCylinder(globalCtx, temp_a1, &this->actor, &D_80BEB880);
    this->actor.colChkInfo.mass = 0xFF;
    Collider_UpdateCylinder(&this->actor, temp_a1);
    Actor_SetScale(&this->actor, 0.01f);
    this->actor.home.rot.z = 0;
    this->actionFunc = EnCha_Idle;
    this->actor.home.rot.x = this->actor.home.rot.z;
    gSaveContext.weekEventReg[60] &= 0xFB;
}

void EnCha_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnCha *this = (EnCha *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnCha_Ring(EnCha *arg0, GlobalContext *arg1) {
    s8 temp_a0;

    EnCha_Idle(arg0, arg1);
    temp_a0 = arg0->actor.cutscene;
    if (temp_a0 == -1) {
        arg0->actionFunc = EnCha_Idle;
        return;
    }
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->actor.cutscene, &arg0->actor);
        arg0->actionFunc = EnCha_Idle;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
}

void EnCha_Idle(EnCha *this, GlobalContext *globalCtx) {
    EnCha *self = (EnCha *) this;
    s16 temp_v0_2;
    u8 temp_v0;
    EnCha *phi_a0;

    if ((gSaveContext.weekEventReg[60] & 4) != 0) {
        Audio_PlayActorSound2(&self->actor, 0x289EU);
        gSaveContext.weekEventReg[60] &= 0xFB;
        self->actor.home.rot.z = 0x7D0;
    }
    phi_a0 = self;
    if ((self->collider.base.acFlags & 2) != 0) {
        self = self;
        Audio_PlayActorSound2(&self->actor, 0x289EU);
        self->actor.home.rot.z = 0x7D0;
        temp_v0 = gSaveContext.weekEventReg[51];
        phi_a0 = self;
        if ((temp_v0 & 4) == 0) {
            gSaveContext.weekEventReg[51] = temp_v0 | 4;
            self->actionFunc = EnCha_Ring;
        }
    }
    temp_v0_2 = phi_a0->actor.home.rot.z;
    phi_a0->actor.home.rot.x += temp_v0_2;
    phi_a0->actor.home.rot.z = temp_v0_2 - (s32) ((f32) phi_a0->actor.home.rot.x * 0.1f);
    phi_a0->actor.home.rot.z = (s16) (s32) ((f32) phi_a0->actor.home.rot.z * 0.96f);
}

void EnCha_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnCha *this = (EnCha *) thisx;
    CollisionCheckContext *sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a2;
    CollisionCheckContext *temp_a1;
    s16 temp_v0;

    temp_a1 = &globalCtx->colChkCtx;
    temp_a2 = &this->collider;
    sp20 = temp_a2;
    sp24 = temp_a1;
    this = this;
    CollisionCheck_SetOC(globalCtx, temp_a1, &temp_a2->base);
    this->actionFunc(this, globalCtx);
    temp_v0 = this->actor.shape.rot.z;
    if (((s32) temp_v0 >= -0x1F3F) && ((s32) temp_v0 < 0x1F40)) {
        CollisionCheck_SetAC(globalCtx, sp24, &sp20->base);
    }
}

void EnCha_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnCha *this = (EnCha *) thisx;
    func_800BDFC0(globalCtx, &D_06000710);
    SysMatrix_InsertTranslation(-1094.0f, 4950.0f, 9.0f, 1);
    SysMatrix_InsertXRotation_s(this->actor.home.rot.x, 1);
    func_800BDFC0(globalCtx, &D_06000958);
}

