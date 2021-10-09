typedef struct ObjMakekinsuta {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s8 unk144;                          /* inferred */
    /* 0x145 */ char pad145[0x3];                   /* maybe part of unk144[4]? */
} ObjMakekinsuta;                                   /* size = 0x148 */

struct _mips2c_stack_ObjMakekinsuta_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjMakekinsuta_Init {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjMakekinsuta_Update {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8099FA40 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8099FB64 {
    /* 0x00 */ char pad0[0x48];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad54[0xC];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_8099FD7C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

s32 func_8099FA40(ObjMakekinsuta *arg0, GlobalContext *arg1); /* static */
void func_8099FB64(Actor *arg0, GlobalContext *arg1); /* static */
void func_8099FD7C(Actor *actor, GlobalContext *globalCtx); /* static */
static InitChainEntry D_8099FE30[3];                /* unable to generate initializer */
static Vec3f D_8099FE3C = {0.0f, 1.0f, 0.0f};

s32 func_8099FA40(ObjMakekinsuta *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_a2;
    s32 phi_v0;

    temp_v0 = ((((s32) arg0->actor.params >> 8) & 0x1F) * 4) | 0xFF01;
    phi_a2 = -1;
    if ((temp_v0 & 3) != 0) {
        phi_a2 = ((s32) (temp_v0 & 0x3FC) >> 2) & 0xFF;
    }
    temp_v0_2 = (phi_a2 < 0) == 1;
    phi_v0 = temp_v0_2;
    if (temp_v0_2 == 0) {
        phi_v0 = Actor_GetChestFlag(arg1, (u32) phi_a2) == 0;
    }
    return phi_v0;
}

void ObjMakekinsuta_Init(ObjMakekinsuta *this, GlobalContext *globalCtx) {
    ObjMakekinsuta *this = (ObjMakekinsuta *) thisx;
    Actor_ProcessInitChain((Actor *) this, D_8099FE30);
    if (func_8099FA40(this, globalCtx) == 0) {
        this->unk144 = -1;
    }
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void ObjMakekinsuta_Destroy(ObjMakekinsuta *this, GlobalContext *globalCtx) {
    ObjMakekinsuta *this = (ObjMakekinsuta *) thisx;
    if (func_8099FA40(this, globalCtx) != 0) {
        Actor_UnsetSwitchFlag(globalCtx, this->actor.params & 0x7F);
    }
}

void func_8099FB64(Actor *arg0, GlobalContext *arg1) {
    f32 sp48;
    Actor *temp_v0;
    f32 temp_f0;
    s32 temp_s1;
    s32 phi_s1;
    s32 phi_v1;

    temp_s1 = arg0->shape.rot.x == 0;
    phi_s1 = temp_s1;
    if (temp_s1 != 0) {
        phi_s1 = arg0->shape.rot.z == 0;
    }
    if (phi_s1 != 0) {
        phi_v1 = (s32) arg0->shape.rot.y;
    } else {
        Matrix_RotateY(arg0->shape.rot.y, 0U);
        SysMatrix_InsertXRotation_s(arg0->shape.rot.x, 1);
        SysMatrix_InsertZRotation_s(arg0->shape.rot.z, 1);
        SysMatrix_MultiplyVector3fByState(&D_8099FE3C, (Vec3f *) &sp48);
        phi_v1 = (s32) Math_FAtan2F(sp50, sp48);
    }
    temp_v0 = Actor_Spawn(arg1 + 0x1CA0, arg1, 0x50, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) phi_v1, (s16) 0, (s16) (((((s32) arg0->params >> 8) & 0x1F) * 4) | 0xFF01));
    if (temp_v0 != 0) {
        temp_v0->parent = arg0;
        if (phi_s1 != 0) {
            temp_v0->velocity.y = 10.0f;
            temp_v0->speedXZ = 3.0f;
            return;
        }
        temp_f0 = sqrtf((sp48 * sp48) + (sp50 * sp50));
        temp_v0->velocity.y = (4.0f * sp4C) + 4.0f;
        temp_v0->speedXZ = (2.0f * temp_f0) + 2.0f;
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void ObjMakekinsuta_Update(ObjMakekinsuta *this, GlobalContext *globalCtx) {
    s8 temp_v0;
    ObjMakekinsuta *this = (ObjMakekinsuta *) thisx;

    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        this->actor.update = func_8099FD7C;
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        return;
    }
    temp_v0 = this->unk144;
    if ((s32) temp_v0 >= 0) {
        if (temp_v0 == 0) {
            Audio_PlayActorSound2((Actor *) this, 0x39DAU);
            if (Rand_ZeroOne() < 0.1f) {
                this->unk144 = Rand_S16Offset(0x28, 0x50);
                return;
            }
            this->unk144 = 8;
            return;
        }
        this->unk144 = temp_v0 - 1;
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_8099FD7C(Actor *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCanPlayNext((s16) this->cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) this->cutscene, this);
        if ((s32) this->cutscene >= 0) {
            func_800B7298(globalCtx, this, 4U);
        }
        func_8099FB64(this, globalCtx);
        this->update = Actor_Noop;
        this->flags &= -0x11;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->cutscene);
}
