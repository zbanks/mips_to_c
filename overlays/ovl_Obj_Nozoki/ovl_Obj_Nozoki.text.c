typedef struct ObjNozoki {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ u8 unk_15C;                         /* inferred */
    /* 0x15D */ u8 unk_15D;                         /* inferred */
    /* 0x15E */ s8 unk_15E;                         /* inferred */
    /* 0x15F */ s8 unk_15F;                         /* inferred */
    /* 0x160 */ void (*actionFunc)(ObjNozoki *, GlobalContext *);
} ObjNozoki;                                        /* size = 0x164 */

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ Vec3s rot;
    /* 0x12 */ char pad_12[0x1];
    /* 0x13 */ s8 unk_13;                           /* inferred */
} PosRot;                                           /* size = 0x14 */

typedef struct {
    /* 0x00 */ Room currRoom;
    /* 0x14 */ Room prevRoom;
    /* 0x28 */ void *roomMemPages[2];
    /* 0x30 */ u8 activeMemPage;
    /* 0x31 */ s8 unk31;
    /* 0x32 */ char pad_32[0x2];                    /* maybe part of unk31[3]? */
    /* 0x34 */ void *activeRoomVram;
    /* 0x38 */ DmaRequest dmaRequest;
    /* 0x58 */ OSMesgQueue loadQueue;
    /* 0x70 */ void *loadMsg[1];
    /* 0x74 */ void *unk74;
    /* 0x78 */ s8 unk78;
    /* 0x79 */ s8 unk79;
    /* 0x7A */ s16 unk_7A;                          /* inferred */
    /* 0x7C */ char pad_7C[0x4];                    /* maybe part of unk_7A[3]? */
} RoomContext;                                      /* size = 0x80 */

struct _mips2c_stack_ObjNozoki_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjNozoki_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjNozoki_SetupAction {};      /* size 0x0 */

struct _mips2c_stack_ObjNozoki_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA2514 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ObjectContext *sp20;                 /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BA26A8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA2708 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x8];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BA2790 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA27C4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BA28DC {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x8];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BA2AB4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BA2B64 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA2BA4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA2C28 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BA2C94 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ PosRot *sp20;                        /* inferred */
    /* 0x24 */ PosRot *sp24;                        /* inferred */
    /* 0x28 */ char pad_28[0xC];                    /* maybe part of sp24[4]? */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BA3044 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ PosRot *sp1C;                        /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BA311C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA3230 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BA3344 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA3434 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

s32 func_80BA26A8(Actor *arg0);                     /* static */
s32 func_80BA2708(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BA2790(ObjNozoki *arg0);                /* static */
void func_80BA27C4(ObjNozoki *this, GlobalContext *globalCtx); /* static */
void func_80BA2B64(ObjNozoki *arg0, GlobalContext *arg1, s8 arg2, s32 arg3); /* static */
s32 func_80BA2C28(ObjNozoki *arg0);                 /* static */
void func_80BA2C94(ObjNozoki *this, GlobalContext *globalCtx); /* static */
void func_80BA311C(ObjNozoki *this, GlobalContext *globalCtx); /* static */
void func_80BA3434(Actor *this, GlobalContext *globalCtx); /* static */
extern CollisionHeader D_060001C0;
static InitChainEntry D_80BA34B0[2];                /* unable to generate initializer */
static ? D_80BA34B8;                                /* unable to generate initializer */
static Vec3f D_80BA34C0 = {0.0f, 0.0f, -1110.0f};
static Vec3f D_80BA34CC = {0.0f, 0.0f, 38.0f};
static ? D_80BA34D8;                                /* unable to generate initializer */
static ? D_80BA34E4;                                /* unable to generate initializer */
static Vec3f D_80BA34F0 = {0.0f, 0.0f, 50.0f};
static ? D_80BA34FC;                                /* unable to generate initializer */
static s32 D_80BA36B0;
static s32 D_80BA36B4;
static f32 D_80BA36B8;

void ObjNozoki_SetupAction(ObjNozoki *this, void (*actionFunc)(ObjNozoki *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

void ObjNozoki_Init(Actor *thisx, GlobalContext *globalCtx) {
    u8 temp_t3;
    ObjNozoki *this = (ObjNozoki *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80BA34B0);
    this->actor.shape.rot.x = 0;
    this->actor.shape.rot.z = 0;
    this->unk_15F = this->actor.cutscene;
    if (globalCtx->sceneNum == 0xD) {
        this->unk_15C = 4;
        ObjNozoki_SetupAction(this, func_80BA3230);
        this->actor.colChkInfo.cylRadius = -0x28;
        return;
    }
    temp_t3 = ((s32) this->actor.params >> 7) & 3;
    this->unk_15C = temp_t3;
    if ((temp_t3 & 0xFF) == 0) {
        BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    }
    ObjNozoki_SetupAction(this, func_80BA2514);
}

void ObjNozoki_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjNozoki *this = (ObjNozoki *) thisx;
    if (this->unk_15C == 0) {
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
    }
}

void func_80BA2514(ObjNozoki *this, GlobalContext *globalCtx) {
    s32 sp24;
    ObjectContext *sp20;
    ObjectContext *temp_a0;
    PosRot *temp_a3;
    s32 temp_v0;
    u8 temp_v0_2;

    temp_a0 = &globalCtx->objectCtx;
    sp20 = temp_a0;
    temp_v0 = Object_GetIndex(temp_a0, *(&D_80BA34B8 + (this->unk_15C * 2)));
    if (temp_v0 < 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    sp24 = temp_v0;
    if (Object_IsLoaded(temp_a0, temp_v0) != 0) {
        temp_v0_2 = this->unk_15C;
        this->actor.objBankIndex = (s8) temp_v0;
        this->actor.draw = func_80BA3434;
        if (temp_v0_2 == 0) {
            Actor_SetObjectSegment(globalCtx, (Actor *) this);
            BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_060001C0);
            if (ActorCutscene_GetAdditionalCutscene((s16) this->unk_15F) >= 0) {
                this->actor.params |= 0x400;
            }
            ObjNozoki_SetupAction(this, func_80BA27C4);
            return;
        }
        if (temp_v0_2 == 1) {
            Lib_Vec3f_TranslateAndRotateY((Vec3f *) &this->actor.world, this->actor.shape.rot.y, &D_80BA34C0, (Vec3f *) &this->actor.home);
            Actor_SetScale((Actor *) this, 0.6f);
            this->actor.flags |= 0x20;
            ObjNozoki_SetupAction(this, func_80BA2BA4);
            return;
        }
        if (temp_v0_2 == 2) {
            temp_a3 = &this->actor.focus;
            sp20 = (ObjectContext *) temp_a3;
            Lib_Vec3f_TranslateAndRotateY((Vec3f *) &this->actor.home, this->actor.shape.rot.y, &D_80BA34CC, (Vec3f *) temp_a3);
            Math_Vec3f_Copy((Vec3f *) &this->actor.world, (Vec3f *) sp20);
            ObjNozoki_SetupAction(this, func_80BA3044);
            return;
        }
        ObjNozoki_SetupAction(this, func_80BA311C);
        /* Duplicate return node #12. Try simplifying control flow for better match */
    }
}

s32 func_80BA26A8(Actor *arg0) {
    s16 temp_a0;
    s8 temp_a2;

    temp_a2 = arg0[1].home.unk_13;
    if ((s32) temp_a2 < 0) {
        return 1;
    }
    temp_a0 = (s16) temp_a2;
    arg0 = arg0;
    if (ActorCutscene_GetCanPlayNext(temp_a0) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0[1].home.unk_13, arg0);
        return 1;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0[1].home.unk_13);
    return 0;
}

s32 func_80BA2708(Actor *arg0, GlobalContext *arg1) {
    ? sp30;
    void *temp_s0;
    void *temp_s0_2;
    void *phi_s0;

    temp_s0 = arg1->actorCtx.actorList[5].first;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
loop_2:
        Actor_CalcOffsetOrientedToDrawRotation(arg0, (Vec3f *) &sp30, phi_s0 + 0x24);
        if (sp38 >= 0.0f) {
            return 0;
        }
        temp_s0_2 = phi_s0->next;
        phi_s0 = temp_s0_2;
        if (temp_s0_2 == 0) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    return 1;
}

void func_80BA2790(ObjNozoki *arg0) {
    ObjNozoki_SetupAction(arg0, func_80BA28DC);
    arg0->unk_15E = 0;
    arg0->actor.velocity.y = 0.0f;
}

void func_80BA27C4(ObjNozoki *this, GlobalContext *globalCtx) {
    u8 temp_v1;

    temp_v1 = globalCtx->actorCtx.unk5;
    if ((temp_v1 & 0x20) == 0) {
        if ((this->actor.params & 0x200) != 0) {
            if (func_80BA2708((Actor *) this, globalCtx) == 0) {
                return;
            }
            goto block_7;
        }
        if (D_80BA36B0 != 0) {
            globalCtx->actorCtx.unk5 = temp_v1 | 0x80;
        }
        if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
block_7:
            if ((D_80BA36B0 == 0) || (func_80BA26A8((Actor *) this) != 0)) {
                func_80BA2790(this);
                if (D_80BA36B0 == 0) {
                    this->unk_15E = 0x19;
                    play_sound(0x485FU);
                } else {
                    this->unk_15E = ActorCutscene_GetLength((s16) this->unk_15F);
                    if ((s32) this->unk_15E < 0) {
                        this->unk_15E = 0x32;
                    }
                    globalCtx->actorCtx.unk5 |= 0x10;
                }
            }
            globalCtx->actorCtx.actorList[2].first->unk_AD0 = 0.0f;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
    }
}

void func_80BA28DC(ObjNozoki *this, GlobalContext *globalCtx) {
    s32 sp34;
    ? sp28;
    s16 temp_v1;
    s8 temp_v0;
    s8 temp_v1_2;
    s8 phi_v1;

    temp_v0 = this->unk_15E;
    if (temp_v0 != 0) {
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            this->unk_15E = temp_v0 - 1;
            phi_v1 = this->unk_15E;
        }
        if (phi_v1 == 0) {
            Audio_PlayActorSound2((Actor *) this, 0x2814U);
            return;
        }
        /* Duplicate return node #21. Try simplifying control flow for better match */
        return;
    }
    if ((globalCtx->actorCtx.unk5 & 0x20) == 0) {
        Math_StepToF(&this->actor.velocity.y, 15.0f, 3.0f);
        Math_StepToF(&this->actor.world.pos.y, this->actor.home.pos.y + 200.0f, this->actor.velocity.y);
        temp_v1 = this->actor.params;
        if ((temp_v1 & 0x200) != 0) {
            if (Flags_GetSwitch(globalCtx, temp_v1 & 0x7F) == 0) {
                return;
            }
            goto block_20;
        }
        if (Flags_GetSwitch(globalCtx, temp_v1 & 0x7F) != 0) {
            temp_v1_2 = this->actor.cutscene;
            if (temp_v1_2 == this->unk_15F) {
                if (((this->actor.params & 0x400) != 0) && (Actor_CalcOffsetOrientedToDrawRotation((Actor *) this, (Vec3f *) &sp28, (Vec3f *) &globalCtx->actorCtx.actorList[2].first->world), (sp30 < -20.0f))) {
                    this->unk_15F = ActorCutscene_GetAdditionalCutscene((s16) this->unk_15F);
                    return;
                }
                /* Duplicate return node #21. Try simplifying control flow for better match */
                return;
            }
            if (D_80BA36B4 == 0) {
                if (func_80BA26A8((Actor *) this) != 0) {
                    D_80BA36B4 = 1;
                    return;
                }
                /* Duplicate return node #21. Try simplifying control flow for better match */
                return;
            }
            sp34 = (s32) temp_v1_2;
            if (ActorCutscene_GetCurrentIndex() != this->unk_15F) {
                this->unk_15F = temp_v1_2;
                this->actor.params &= 0xFBFF;
                func_801A89A8(0x881A);
                return;
            }
            /* Duplicate return node #21. Try simplifying control flow for better match */
            return;
        }
        goto block_20;
    }
block_20:
    ObjNozoki_SetupAction(this, func_80BA2AB4);
    this->actor.velocity.y = 0.0f;
    Audio_PlayActorSound2((Actor *) this, 0x281CU);
}

void func_80BA2AB4(ObjNozoki *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    this->actor.velocity.y = 30.0f;
    if ((Math_StepToF(&this->actor.world.pos.y, this->actor.home.pos.y, 30.0f) != 0) && (D_80BA36B0 == 0)) {
        ObjNozoki_SetupAction(this, func_80BA27C4);
        D_80BA36B0 = 1;
    }
    if ((globalCtx->actorCtx.unk5 & 0x20) == 0) {
        temp_v0 = this->actor.params;
        if (((temp_v0 & 0x200) == 0) && (Flags_GetSwitch(globalCtx, temp_v0 & 0x7F) != 0)) {
            func_80BA2790(this);
        }
    }
}

void func_80BA2B64(ObjNozoki *arg0, GlobalContext *arg1, s8 arg2, s32 arg3) {
    arg0->unk_15D = arg2;
    arg0->unk_15E = 0x50;
    Actor_UnsetSwitchFlag(arg1, arg3);
}

void func_80BA2BA4(ObjNozoki *this, GlobalContext *globalCtx) {
    s16 temp_a1;
    s8 temp_v0;
    s8 phi_v1;

    temp_a1 = this->actor.params;
    this = this;
    if (Flags_GetSwitch(globalCtx, temp_a1 & 0x7F) == 0) {
        this->actor.shape.rot.x = -0x1F40;
        this->unk_15E = 0x50;
        return;
    }
    temp_v0 = this->unk_15E;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        this->unk_15E = temp_v0 - 1;
        phi_v1 = this->unk_15E;
    }
    if (phi_v1 == 0) {
        ObjNozoki_SetupAction(this, func_80BA2C94);
    }
}

s32 func_80BA2C28(ObjNozoki *arg0) {
    s32 temp_s1;
    s16 phi_s0;
    s32 phi_s1;

    phi_s0 = (s16) arg0->unk_15F;
    phi_s1 = 0;
loop_1:
    if (ActorCutscene_GetCurrentIndex() == phi_s0) {
        return phi_s1;
    }
    temp_s1 = phi_s1 + 1;
    phi_s0 = ActorCutscene_GetAdditionalCutscene(phi_s0);
    phi_s1 = temp_s1;
    if (temp_s1 == 3) {
        return -1;
    }
    goto loop_1;
}

void func_80BA2C94(ObjNozoki *this, GlobalContext *globalCtx) {
    f32 sp38;
    f32 sp34;
    PosRot *sp24;
    PosRot *sp20;
    PosRot *temp_a0;
    PosRot *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s32 temp_v0;
    s8 temp_v0_2;
    u8 temp_v1;
    u8 temp_v1_2;
    s8 phi_v1;
    f32 phi_f0;

    temp_v0 = func_80BA2C28(this);
    if (temp_v0 >= 0) {
        D_80BA36B4 = temp_v0;
    }
    if ((temp_v0 >= 0) || (func_801690CC(globalCtx) == 0)) {
        if (D_80BA36B8 < *(&D_80BA34D8 + (D_80BA36B4 * 4))) {
            sp38 = this->actor.home.pos.y - this->actor.world.pos.y;
            if ((this->unk_15D != 1) && (Flags_GetSwitch(globalCtx, (s32) this->actor.world.rot.z) != 0)) {
                func_80BA2B64(this, globalCtx, 1U, (s32) this->actor.world.rot.x);
            } else if ((this->unk_15D != 2) && (Flags_GetSwitch(globalCtx, (s32) this->actor.world.rot.x) != 0)) {
                func_80BA2B64(this, globalCtx, 2U, (s32) this->actor.world.rot.z);
            } else {
                temp_v0_2 = this->unk_15E;
                if (temp_v0_2 == 0) {
                    phi_v1 = 0;
                } else {
                    this->unk_15E = temp_v0_2 - 1;
                    phi_v1 = this->unk_15E;
                }
                if (phi_v1 == 0) {
                    this->unk_15D = 0;
                    Actor_UnsetSwitchFlag(globalCtx, (s32) this->actor.world.rot.z);
                    Actor_UnsetSwitchFlag(globalCtx, (s32) this->actor.world.rot.x);
                }
            }
            Math_StepToF(&this->actor.speedXZ, *(&D_80BA34E4 + (this->unk_15D * 4)), 0.1f);
            temp_v1 = globalCtx->actorCtx.unk5;
            temp_a0 = &this->actor.world;
            temp_a1 = &this->actor.home;
            if (((temp_v1 & 0x40) != 0) || ((temp_v1 & 0x20) != 0)) {
                phi_f0 = 0.5f;
            } else {
                phi_f0 = this->actor.speedXZ;
            }
            sp24 = temp_a0;
            sp20 = temp_a1;
            temp_f0 = Math_Vec3f_StepToXZ((Vec3f *) temp_a0, (Vec3f *) temp_a1, phi_f0);
            temp_f2 = temp_f0;
            D_80BA36B8 += this->actor.speedXZ;
            temp_v1_2 = globalCtx->actorCtx.unk5;
            if ((temp_v1_2 & 0x40) != 0) {
                if (temp_f0 <= 5.0f) {
                    Actor_MarkForDeath((Actor *) this);
                }
            } else if (((temp_v1_2 & 0x20) == 0) && (globalCtx->actorCtx.actorList[2].first->id == 0) && (sp34 = temp_f2, (Flags_GetSwitch(globalCtx, ((s32) this->actor.params >> 9) & 0x7F) != 0)) && (sp38 < 20.0f)) {
                globalCtx->actorCtx.unk5 |= 0x40;
                Lib_Vec3f_TranslateAndRotateY((Vec3f *) sp20, this->actor.shape.rot.y, &D_80BA34F0, (Vec3f *) sp24);
                this->actor.shape.rot.x = -0x1F40;
            } else if (temp_f2 < 50.0f) {
                globalCtx->actorCtx.unk5 |= 0x20;
                if (temp_f2 < 20.0f) {
                    this->actor.velocity.y -= 0.4f;
                    this->actor.world.pos.y += this->actor.velocity.y;
                    sp38 = this->actor.home.pos.y - this->actor.world.pos.y;
                    if (sp38 >= 100.0f) {
                        Actor_MarkForDeath((Actor *) this);
                    }
                    this->actor.shape.rot.x = -0x1F40 - (s32) (sp38 * 400.0f);
                }
            }
        }
        this->actor.velocity.x += this->actor.speedXZ * 0.66f;
        temp_f0_2 = this->actor.velocity.x;
        if (temp_f0_2 >= 65536.0f) {
            this->actor.velocity.x = temp_f0_2 - 65536.0f;
        }
        globalCtx->roomCtx.unk_7A = (s16) (s32) this->actor.velocity.x;
        func_8019FAD8((Vec3f *) &D_801DB4A4, 0x2065U, this->actor.speedXZ);
    }
}

void func_80BA3044(ObjNozoki *this, GlobalContext *globalCtx) {
    PosRot *sp1C;
    ObjNozoki *temp_a3;
    PosRot *temp_a2;
    s8 temp_v0_2;
    u8 temp_v0;
    s8 phi_v1;
    ObjNozoki *phi_a3;

    temp_a3 = this;
    temp_a2 = &temp_a3->actor.focus;
    sp1C = temp_a2;
    phi_a3 = temp_a3;
    if (temp_a3->unk_15D == 0) {
        temp_v0 = globalCtx->actorCtx.unk5;
        if ((temp_v0 & 0x40) != 0) {
            temp_a3->unk_15D = 1;
            temp_a3->unk_15E = 0x14;
            this = temp_a3;
            Math_Vec3f_Copy((Vec3f *) &temp_a3->actor.world, (Vec3f *) temp_a2);
            phi_a3 = this;
        } else if ((temp_v0 & 0x20) == 0) {
            this = temp_a3;
            phi_a3 = this;
            if (Flags_GetSwitch(globalCtx, temp_a3->actor.params & 0x7F) != 0) {
                sp1C = &this->actor.home;
            }
        }
    } else {
        temp_v0_2 = temp_a3->unk_15E;
        if (temp_v0_2 == 0) {
            phi_v1 = 0;
        } else {
            temp_a3->unk_15E = temp_v0_2 - 1;
            phi_v1 = temp_a3->unk_15E;
        }
        if (phi_v1 == 0) {
            sp1C = &temp_a3->actor.home;
        }
    }
    Math_Vec3f_StepToXZ(phi_a3 + 0x24, (Vec3f *) sp1C, 8.0f);
}

void func_80BA311C(ObjNozoki *this, GlobalContext *globalCtx) {
    s16 temp_a1;
    s8 temp_v0_2;
    u8 temp_v0;
    s8 phi_v1;

    temp_v0 = this->unk_15D;
    if (temp_v0 == 0) {
        temp_a1 = this->actor.params;
        this = this;
        if (Flags_GetSwitch(globalCtx, temp_a1 & 0x7F) != 0) {
            this->unk_15D = 1;
            this->unk_15E = 0x46;
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return;
    }
    if (temp_v0 == 1) {
        if (D_80BA36B8 > 40.0f) {
            this->unk_15D = 2;
            Audio_PlayActorSound2((Actor *) this, 0x832U);
            return;
        }
        temp_v0_2 = this->unk_15E;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 == 0) {
                phi_v1 = 0;
            } else {
                this->unk_15E = temp_v0_2 - 1;
                phi_v1 = this->unk_15E;
            }
            if (phi_v1 == 0) {
                Audio_PlayActorSound2((Actor *) this, 0x29ABU);
                return;
            }
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return;
        }
        Math_StepToF(&this->actor.world.pos.y, this->actor.home.pos.y + 50.0f, 4.0f);
        return;
    }
    Math_StepToF(&this->actor.world.pos.y, this->actor.home.pos.y, 4.0f);
}

void func_80BA3230(ObjNozoki *this, GlobalContext *globalCtx) {
    Actor *temp_v0;

    if (((gSaveContext.weekEventReg[64] & 0x20) != 0) && (temp_v0 = func_ActorCategoryIterateById(globalCtx, globalCtx->actorCtx.actorList[4].first, 4, 0x159), (temp_v0 != 0)) && (temp_v0->draw != 0)) {
        if ((globalCtx->curSpawn == 3) && ((gSaveContext.weekEventReg[64] & 0x40) == 0)) {
            this->actor.textId = 0x297A;
            this->actor.flags |= 0x10009;
        } else {
            this->actor.flags |= 9;
            if ((gSaveContext.weekEventReg[64] & 0x40) != 0) {
                this->actor.textId = 0;
            } else {
                this->actor.textId = 0x2979;
            }
        }
        if (func_800B84D0((Actor *) this, globalCtx) != 0) {
            ObjNozoki_SetupAction(this, func_80BA3344);
            return;
        }
        func_800B8614((Actor *) this, globalCtx, 50.0f);
        /* Duplicate return node #12. Try simplifying control flow for better match */
    }
}

void func_80BA3344(ObjNozoki *this, GlobalContext *globalCtx) {
    if ((globalCtx->curSpawn == 3) && ((gSaveContext.weekEventReg[64] & 0x40) == 0)) {
        if (func_800B867C((Actor *) this, globalCtx) != 0) {
            gSaveContext.weekEventReg[64] |= 0x40;
            this->actor.flags &= 0xFFFEFFFF;
            ObjNozoki_SetupAction(this, func_80BA3230);
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    if ((this->actor.textId == 0) || (func_800B867C((Actor *) this, globalCtx) != 0)) {
        globalCtx->nextEntranceIndex = 0xE20;
        globalCtx->sceneLoadFlag = 0x14;
    }
}

void ObjNozoki_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjNozoki *this = (ObjNozoki *) thisx;
    this->actionFunc(this, globalCtx);
}

void func_80BA3434(Actor *this, GlobalContext *globalCtx) {
    u8 temp_v0;

    temp_v0 = this->unk_15C;
    if (temp_v0 == 1) {
        GetItem_Draw(globalCtx, 0x39);
        return;
    }
    func_800BDFC0(globalCtx, *(&D_80BA34FC + (temp_v0 * 4)));
}
