s32 func_80BD6638(s16 *arg0, s16 *arg1, s32 arg2);  /* static */
extern Gfx D_060007B0;
extern CollisionHeader D_06000EE8;
static InitChainEntry D_80BD68A0;                   /* unable to generate initializer */
static Vec3f D_80BD68A4 = {30.0f, 90.0f, 0.0f};



void BgHakaTomb_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgHakaTomb *this = (BgHakaTomb *) thisx;
    Actor_ProcessInitChain(&this->dyna.actor, &D_80BD68A0);
    BcCheck3_BgActorInit(&this->dyna, 1);
    BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_06000EE8);
    func_8013E3B8(&this->dyna.actor, (s16 []) this->cutscenes, 1);
    func_80BD6624(this);
}

void BgHakaTomb_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgHakaTomb *this = (BgHakaTomb *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void func_80BD6624(BgHakaTomb *this) {
    this->actionFunc = func_80BD66AC;
}

s32 func_80BD6638(s16 *arg0, s16 *arg1, s32 arg2) {
    s32 sp18;
    s16 temp_a0;
    s32 temp_v0;
    s16 *phi_v1;
    s32 phi_v0;
    s32 phi_a3;

    sp18 = 0;
    *arg0 = ActorCutscene_GetCurrentIndex();
    temp_a0 = *arg0;
    phi_a3 = sp18;
    if ((s32) temp_a0 >= 0) {
        phi_v0 = 0;
        if (arg2 > 0) {
            phi_v1 = arg1;
loop_3:
            temp_v0 = phi_v0 + 1;
            phi_v0 = temp_v0;
            if (temp_a0 == *phi_v1) {
                phi_a3 = 1;
            } else {
                phi_v1 += 2;
                if (temp_v0 != arg2) {
                    goto loop_3;
                }
            }
        }
    }
    return phi_a3;
}

void func_80BD66AC(BgHakaTomb *this, GlobalContext *globalCtx) {
    s16 sp26;

    if (Actor_GetRoomCleared(globalCtx, (u32) this->dyna.actor.room) != 0) {
        this->dyna.actor.flags |= 9;
    }
    if ((func_80BD6638(&sp26, this->cutscenes, 1) == 0) && ((s32) sp26 < 0) && (Actor_GetRoomCleared(globalCtx, (u32) this->dyna.actor.room) != 0)) {
        this->dyna.actor.flags |= 1;
        if (this->dyna.actor.isTargeted != 0) {
            func_80BD6754(this);
            return;
        }
        // Duplicate return node #8. Try simplifying control flow for better match
        return;
    }
    this->dyna.actor.flags &= -2;
}

void func_80BD6754(BgHakaTomb *this) {
    this->actionFunc = func_80BD6768;
}

void func_80BD6768(BgHakaTomb *this, GlobalContext *globalCtx) {
    if (func_8013E2D4(&this->dyna.actor, this->cutscenes[0], -1, 0) != 0) {
        BgHakaTomb_SetupDoNothing(this);
    }
}

void BgHakaTomb_SetupDoNothing(BgHakaTomb *this) {
    BgHakaTomb *self = (BgHakaTomb *) this;
    self->actionFunc = BgHakaTomb_DoNothing;
}

void BgHakaTomb_DoNothing(BgHakaTomb *this, GlobalContext *globalCtx) {
    BgHakaTomb *self = (BgHakaTomb *) this;

}

void BgHakaTomb_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgHakaTomb *this = (BgHakaTomb *) thisx;
    Vec3f sp24;

    this->actionFunc(this, globalCtx);
    Matrix_RotateY(this->dyna.actor.world.rot.y, 0U);
    SysMatrix_InsertXRotation_s(this->dyna.actor.world.rot.x, 1);
    SysMatrix_InsertZRotation_s(this->dyna.actor.world.rot.z, 1);
    SysMatrix_MultiplyVector3fByState(&D_80BD68A4, &sp24);
    Math_Vec3f_Sum(&this->dyna.actor.world.pos, &sp24, &this->dyna.actor.focus.pos);
}

void BgHakaTomb_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgHakaTomb *this = (BgHakaTomb *) thisx;
    func_800BDFC0(globalCtx, &D_060007B0);
}

