struct _mips2c_stack_DoorAna_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_DoorAna_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_DoorAna_Init {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_DoorAna_SetupAction {};        /* size 0x0 */

struct _mips2c_stack_DoorAna_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808E02A4 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad28[0x4];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808E03B8 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808E05C4 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

void DoorAna_SetupAction(DoorAna *arg0, void (*arg1)(Actor *, GlobalContext *)); /* static */
void func_808E02A4(Actor *arg0, GlobalContext *arg1); /* static */
void func_808E03B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_808E05C4(Actor *arg0, GlobalContext *arg1); /* static */
static ColliderCylinderInit D_808E0760 = {
    {0xA, 0, 9, 0, 0, 1},
    {2, {0, 0, 0}, {8, 0, 0}, 0, 1, 0},
    {0x32, 0xA, 0, {0, 0, 0}},
};
static ? D_808E078C;                                /* unable to generate initializer */

void DoorAna_SetupAction(DoorAna *arg0, void (*arg1)(Actor *, GlobalContext *)) {
    arg0->actionFunc = arg1;
}

void DoorAna_Init(DoorAna *this, GlobalContext *globalCtx) {
    s32 temp_v0;
    DoorAna *this = (DoorAna *) thisx;

    this->actor.shape.rot.z = 0;
    temp_v0 = this->actor.params & 0x300;
    this->actor.shape.rot.y = this->actor.shape.rot.z;
    if ((temp_v0 == 0x100) || (temp_v0 == 0x200)) {
        if (temp_v0 == 0x200) {
            Collider_InitAndSetCylinder(globalCtx, &this->bombCollider, (Actor *) this, &D_808E0760);
        } else {
            this->actor.flags |= 0x10;
        }
        Actor_SetScale((Actor *) this, 0.0f);
        DoorAna_SetupAction(this, func_808E02A4);
    } else {
        DoorAna_SetupAction(this, func_808E03B8);
    }
    this->actor.targetMode = 0;
}

void DoorAna_Destroy(DoorAna *this, GlobalContext *globalCtx) {
    DoorAna *this = (DoorAna *) thisx;
    if ((this->actor.params & 0x300) == 0x200) {
        Collider_DestroyCylinder(globalCtx, &this->bombCollider);
    }
}

void func_808E02A4(Actor *arg0, GlobalContext *arg1) {
    s32 sp2C;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a2;

    sp2C = 0;
    if ((arg0->params & 0x300) == 0x100) {
        if ((arg0->xyzDistToPlayerSq < 40000.0f) && (func_800F13E8(arg1, 5) != 0)) {
            sp2C = 1;
            arg0->flags &= -0x11;
        }
    } else {
        temp_a2 = arg0 + 0x144;
        if ((arg0->unk155 & 2) != 0) {
            sp2C = 1;
            Collider_DestroyCylinder(arg1, arg0 + 0x144);
        } else {
            sp24 = temp_a2;
            Collider_UpdateCylinder(arg0, temp_a2);
            CollisionCheck_SetAC(arg1, &arg1->colChkCtx, (Collider *) temp_a2);
        }
    }
    if (sp2C != 0) {
        arg0->params &= 0xFCFF;
        DoorAna_SetupAction((DoorAna *) arg0, func_808E03B8);
        play_sound(0x4802U);
    }
    func_800B8C50(arg0, arg1);
}

void func_808E03B8(DoorAna *arg0, GlobalContext *arg1) {
    void *sp2C;
    s32 sp28;
    s32 sp20;
    GlobalContext *temp_a0;
    f32 temp_f0;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_t0;
    s32 phi_v0;

    temp_t0 = arg1->actorCtx.actorList[2].first;
    sp28 = arg0->actor.params & 0x300;
    arg1 = arg1;
    sp2C = temp_t0;
    if (Math_StepToF(arg0 + 0x58, 0.01f, 0.001f) != 0) {
        if ((arg0->actor.targetMode != 0) && (arg1->sceneLoadFlag == 0) && (arg1->unk_18B4A == 0) && (temp_t0->unkA6C & 0x80000000) && (temp_t0->unkAE7 == 0)) {
            temp_a0 = arg1;
            if (sp28 == 0x300) {
                arg1->nextEntranceIndex = *(arg1->setupExitList + ((arg0->actor.params & 0x1F) * 2));
            } else {
                arg1 = arg1;
                temp_v0 = (((s32) arg0->actor.params >> 0xC) & 7) - 1;
                sp20 = temp_v0;
                func_80169E6C(temp_a0, 3, 0x4FF);
                gSaveContext.respawn[3].pos.y = arg0->actor.world.pos.y;
                gSaveContext.respawn[3].yaw = arg0->actor.home.rot.y;
                gSaveContext.respawn[3].data = (s8) arg0->actor.params;
                phi_v0 = temp_v0;
                if (temp_v0 < 0) {
                    phi_v0 = arg0->actor.home.rot.z + 1;
                }
                arg1->nextEntranceIndex = *(&D_808E078C + (phi_v0 * 2));
            }
            DoorAna_SetupAction(arg0, func_808E05C4);
        } else {
            sp2C = temp_t0;
            if ((func_801690CC(arg1) == 0) && (temp_v0_2 = temp_t0->unkA6C, ((temp_v0_2 & 0x8800000) == 0)) && (arg0->actor.xzDistToPlayer <= 20.0f) && (temp_f0 = arg0->actor.yDistToPlayer, (temp_f0 >= -50.0f)) && (temp_f0 <= 15.0f)) {
                temp_t0->unkA6C = (s32) (temp_v0_2 | 0x80000000);
                arg0->actor.targetMode = 1;
            } else {
                arg0->actor.targetMode = 0;
            }
        }
    }
    Actor_SetScale((Actor *) arg0, arg0->actor.scale.x);
}

void func_808E05C4(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    s8 temp_a0;

    temp_a0 = arg0->cutscene;
    if (ActorCutscene_GetCurrentIndex() != temp_a0) {
        if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
        } else {
            ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        }
    }
    if ((arg0->yDistToPlayer <= 0.0f) && (arg0->xzDistToPlayer > 20.0f)) {
        sp24 = arg1->actorCtx.actorList[2].first;
        sp24->world.pos.x = (Math_SinS(arg0->yawTowardsPlayer) * 20.0f) + arg0->world.pos.x;
        sp24->world.pos.z = (Math_CosS(arg0->yawTowardsPlayer) * 20.0f) + arg0->world.pos.z;
    }
}

void DoorAna_Update(DoorAna *this, GlobalContext *globalCtx) {
    DoorAna *this = (DoorAna *) thisx;
    this->actionFunc(this, globalCtx);
    this->actor.shape.rot.y = func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000;
}

void DoorAna_Draw(DoorAna *this, GlobalContext *globalCtx) {
    DoorAna *this = (DoorAna *) thisx;
    func_800BE03C(globalCtx, D_05000C40);
}
