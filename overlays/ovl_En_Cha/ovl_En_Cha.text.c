struct _mips2c_stack_EnCha_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnCha_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnCha_Idle {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnCha_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnCha_Ring {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnCha_Update {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ CollisionCheckContext *sp24;         /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

void EnCha_Ring(EnCha *arg0, GlobalContext *arg1);  /* static */
extern Gfx D_06000710;
extern Gfx D_06000958;
static ColliderCylinderInit D_80BEB880 = {
    {0xB, 0, 0xD, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0xA, 0x28, 0, {0, 0, 0}},
};

void EnCha_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    EnCha *this = (EnCha *) thisx;

    temp_a1 = &this->collider;
    sp24 = temp_a1;
    Collider_InitAndSetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80BEB880);
    this->actor.colChkInfo.mass = 0xFF;
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    Actor_SetScale((Actor *) this, 0.01f);
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
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->actor.cutscene, (Actor *) arg0);
        arg0->actionFunc = EnCha_Idle;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
}

void EnCha_Idle(EnCha *this, GlobalContext *globalCtx) {
    s16 temp_v0_2;
    u8 temp_v0;
    EnCha *phi_a0;

    if ((gSaveContext.weekEventReg[60] & 4) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x289EU);
        gSaveContext.weekEventReg[60] &= 0xFB;
        this->actor.home.rot.z = 0x7D0;
    }
    phi_a0 = this;
    if ((this->collider.base.acFlags & 2) != 0) {
        this = this;
        Audio_PlayActorSound2((Actor *) this, 0x289EU);
        this->actor.home.rot.z = 0x7D0;
        temp_v0 = gSaveContext.weekEventReg[51];
        phi_a0 = this;
        if ((temp_v0 & 4) == 0) {
            gSaveContext.weekEventReg[51] = temp_v0 | 4;
            this->actionFunc = EnCha_Ring;
        }
    }
    temp_v0_2 = phi_a0->actor.home.rot.z;
    phi_a0->actor.home.rot.x += temp_v0_2;
    phi_a0->actor.home.rot.z = temp_v0_2 - (s32) ((f32) phi_a0->actor.home.rot.x * 0.1f);
    phi_a0->actor.home.rot.z = (s16) (s32) ((f32) phi_a0->actor.home.rot.z * 0.96f);
}

void EnCha_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a2;
    CollisionCheckContext *temp_a1;
    s16 temp_v0;
    EnCha *this = (EnCha *) thisx;

    temp_a1 = &globalCtx->colChkCtx;
    temp_a2 = &this->collider;
    sp20 = temp_a2;
    sp24 = temp_a1;
    this = this;
    CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2);
    this->actionFunc(this, globalCtx);
    temp_v0 = this->actor.shape.rot.z;
    if (((s32) temp_v0 >= -0x1F3F) && ((s32) temp_v0 < 0x1F40)) {
        CollisionCheck_SetAC(globalCtx, sp24, (Collider *) sp20);
    }
}

void EnCha_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnCha *this = (EnCha *) thisx;
    func_800BDFC0(globalCtx, &D_06000710);
    SysMatrix_InsertTranslation(-1094.0f, 4950.0f, 9.0f, 1);
    SysMatrix_InsertXRotation_s(this->actor.home.rot.x, 1);
    func_800BDFC0(globalCtx, &D_06000958);
}
