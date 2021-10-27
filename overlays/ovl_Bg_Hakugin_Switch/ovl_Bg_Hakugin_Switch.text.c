typedef struct BgHakuginSwitch {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ ColliderCylinder unk_15C;           /* inferred */
    /* 0x1A8 */ Gfx *unk_1A8;                       /* inferred */
    /* 0x1AC */ void (*actionFunc)(BgHakuginSwitch *, GlobalContext *);
    /* 0x1B0 */ char pad_1B0[0x2];
    /* 0x1B2 */ s8 unk_1B2;                         /* inferred */
    /* 0x1B3 */ char pad_1B3[0x5];                  /* maybe part of unk_1B2[6]? */
    /* 0x1B8 */ s16 unk_1B8;                        /* inferred */
    /* 0x1BA */ s16 unk_1BA;                        /* inferred */
    /* 0x1BC */ s16 unk_1BC;                        /* inferred */
    /* 0x1BE */ char pad_1BE[0x1];
    /* 0x1BF */ s8 unk_1BF;                         /* inferred */
    /* 0x1C0 */ s8 unk_1C0;                         /* inferred */
    /* 0x1C1 */ char pad_1C1[0x3];                  /* maybe part of unk_1C0[4]? */
    /* 0x1C4 */ f32 unk_1C4;                        /* inferred */
    /* 0x1C8 */ f32 unk_1C8;                        /* inferred */
} BgHakuginSwitch;                                  /* size = 0x1CC */

struct _mips2c_stack_BgHakuginSwitch_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgHakuginSwitch_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgHakuginSwitch_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_BgHakuginSwitch_Update {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B15790 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B157C4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B15A4C {};              /* size 0x0 */

struct _mips2c_stack_func_80B15A68 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0xC];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B15B1C {};              /* size 0x0 */

struct _mips2c_stack_func_80B15B74 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ DynaPolyActor *sp1C;                 /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B15E0C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B15E78 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B15F3C {};              /* size 0x0 */

struct _mips2c_stack_func_80B15F88 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B1606C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B160DC {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B16180 {};              /* size 0x0 */

struct _mips2c_stack_func_80B161A0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B16244 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B162AC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ DynaPolyActor *sp20;                 /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B163C4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B16400 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B16494 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B16520 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B165A0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B165E0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? func_800B9038(DynaPolyActor *, s16, s32, DynaPolyActor *); /* extern */
void func_80B15790(Actor *arg0, s32 arg1);          /* static */
void func_80B157C4(Actor *arg0, s32 arg1);          /* static */
void func_80B15A4C(DynaPolyActor *arg0, void (*arg1)(DynaPolyActor *, GlobalContext *, GlobalContext *, DynaPolyActor *), s16 arg2, DynaPolyActor *); /* static */
void func_80B15A68(Actor *arg0, s32 arg1);          /* static */
void func_80B15B1C(BgHakuginSwitch *arg0, GlobalContext *arg1); /* static */
void func_80B15B74(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_80B15E0C(DynaPolyActor *arg0, GlobalContext *arg1, GlobalContext *, DynaPolyActor *); /* static */
void func_80B15E78(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_80B15F3C(BgHakuginSwitch *arg0, GlobalContext *arg1); /* static */
void func_80B15F88(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_80B1606C(DynaPolyActor *arg0, GlobalContext *arg1, GlobalContext *, DynaPolyActor *); /* static */
void func_80B160DC(BgHakuginSwitch *arg0, GlobalContext *arg1); /* static */
void func_80B16180(DynaPolyActor *arg0, void (*arg1)(DynaPolyActor *, GlobalContext *, s32), s8 arg2, s16 arg3); /* static */
void func_80B161A0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B16244(BgHakuginSwitch *arg0, GlobalContext *arg1); /* static */
void func_80B162AC(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_80B163C4(DynaPolyActor *arg0, GlobalContext *arg1, s32); /* static */
void func_80B16400(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_80B16494(BgHakuginSwitch *arg0, GlobalContext *arg1); /* static */
void func_80B16520(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_80B165A0(DynaPolyActor *arg0, GlobalContext *arg1, s32); /* static */
void func_80B165E0(BgHakuginSwitch *arg0, GlobalContext *arg1); /* static */
extern Gfx D_06000268;
extern CollisionHeader D_060005C8;
static ColliderCylinderInit D_80B16860 = {
    {0xA, 0, 9, 0, 0, 1},
    {0, {0, 0, 0}, {0x400, 0, 0}, 0, 1, 0},
    {0x3C, 0xA, 0xB4, {0, 0, 0}},
};
static ? D_80B1688C;                                /* unable to generate initializer */
static InitChainEntry D_80B16904[3];                /* unable to generate initializer */
static InitChainEntry D_80B16910[4];                /* unable to generate initializer */
static u32 D_80B16AF0;

void func_80B15790(Actor *arg0, s32 arg1) {
    if ((s32) arg0->unk_1B2 <= 0) {
        Audio_PlayActorSound2(arg0, arg1 & 0xFFFF);
    }
}

void func_80B157C4(Actor *arg0, s32 arg1) {
    if ((s32) arg0->unk_1B2 <= 0) {
        func_800B9010(arg0, arg1 & 0xFFFF);
    }
}

void BgHakuginSwitch_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp34;
    s32 sp30;
    s32 sp28;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_v0_2;
    s16 temp_v0;
    s32 phi_v1;
    BgHakuginSwitch *this = (BgHakuginSwitch *) thisx;

    temp_v0 = this->actor.params;
    sp34 = temp_v0 & 7;
    if (Flags_GetSwitch(globalCtx, ((s32) temp_v0 >> 8) & 0x7F) != 0) {
        sp30 = 1;
    } else {
        sp30 = 0;
    }
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_060005C8);
    temp_a1 = &this->unk_15C;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80B16860);
    this->unk_1B2 = 0xF;
    if ((((s32) this->actor.params >> 4) & 1) == 0) {
        Actor_ProcessInitChain((Actor *) this, D_80B16904);
        this->actor.scale.x = 0.07f;
        this->unk_15C.dim.radius = 0x2E;
        this->unk_15C.dim.yShift = 0x1D;
        this->unk_1A8 = &D_06000268;
        this->actor.scale.z = 0.07f;
        this->unk_1B8 = (s16) this->actor.cutscene;
        this->actor.scale.y = 0.016f;
        if (sp34 == 0) {
            this->unk_1BA = -1;
        } else {
            this->unk_1BA = ActorCutscene_GetAdditionalCutscene(this->unk_1B8);
        }
        if (sp30 != 0) {
            func_80B16494(this, globalCtx);
        } else {
            func_80B16244(this, globalCtx);
        }
    } else {
        temp_v0_2 = (sp34 * 0x18) + &D_80B1688C;
        if ((temp_v0_2->base.colType & 4) != 0) {
            phi_v1 = 1;
        } else {
            phi_v1 = 0;
        }
        sp24 = temp_v0_2;
        sp28 = phi_v1;
        Actor_ProcessInitChain((Actor *) this, D_80B16910);
        this->unk_1B8 = (s16) this->actor.cutscene;
        this->unk_1A8 = temp_v0_2->unk_10;
        this->unk_1BA = ActorCutscene_GetAdditionalCutscene(this->unk_1B8);
        if (sp30 == phi_v1) {
            func_80B15F3C(this, globalCtx);
        } else {
            func_80B15B1C(this, globalCtx);
        }
    }
    this->unk_1C8 = 1.0f / this->actor.scale.y;
}

void BgHakuginSwitch_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;
    BgHakuginSwitch *this = (BgHakuginSwitch *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk_144);
    Collider_DestroyCylinder(globalCtx, &this->unk_15C);
}

void func_80B15A4C(DynaPolyActor *arg0, void (*arg1)(DynaPolyActor *, GlobalContext *, GlobalContext *, DynaPolyActor *), s16 arg2) {
    arg0[1].actor.scale.x = arg1;
    arg0->unk_1BC = arg2;
    arg0->unk_1AC = func_80B15A68;
}

void func_80B15A68(Actor *arg0, s32 arg1) {
    s32 sp18;
    Actor *temp_a1;
    s16 temp_a0;
    s16 temp_a0_2;
    s32 temp_v1_2;
    u8 temp_v1;

    temp_v1 = (((arg0->params & 7) * 0x18) + &D_80B1688C)->unk_14;
    temp_a0 = arg0->unk_1BC;
    arg0 = arg0;
    temp_v1_2 = (temp_v1 & 0x40) == 0;
    sp18 = temp_v1_2;
    if (ActorCutscene_GetCanPlayNext(temp_a0) != 0) {
        temp_a1 = arg0;
        if (temp_v1_2 != 0) {
            temp_a0_2 = arg0->unk_1BC;
            arg0 = arg0;
            ActorCutscene_StartAndSetUnkLinkFields(temp_a0_2, temp_a1);
            arg0->unk_1BF = 0x28;
        }
        arg0[1].speedXZ(arg0, arg1, arg0);
        return;
    }
    if (temp_v1_2 != 0) {
        ActorCutscene_SetIntentToPlay(arg0->unk_1BC);
    }
}

void func_80B15B1C(BgHakuginSwitch *arg0, GlobalContext *arg1) {
    arg0->unk_1C0 = 1;
    arg0->actor.world.pos.y = *(((arg0->actor.params & 7) * 0x18) + &D_80B1688C) + arg0->actor.home.pos.y;
    arg0->unk_1B0 = 0x1E0;
    arg0->actionFunc = func_80B15B74;
}

void func_80B15B74(DynaPolyActor *arg0, GlobalContext *arg1) {
    void *sp38;
    s32 sp34;
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    DynaPolyActor *sp1C;
    DynaPolyActor *temp_a0;
    DynaPolyActor *temp_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_a1;
    s32 phi_t1;
    s32 phi_v1;
    s32 phi_t0;
    s32 phi_a2;
    s32 phi_a2_2;
    s32 phi_t0_2;
    DynaPolyActor *phi_a3;
    DynaPolyActor *phi_a3_2;

    temp_v0 = arg0->actor.params;
    sp38 = ((temp_v0 & 7) * 0x18) + &D_80B1688C;
    temp_a1 = ((s32) temp_v0 >> 8) & 0x7F;
    sp34 = (arg0->unk_16D & 2) != 0;
    arg0 = arg0;
    if (Flags_GetSwitch(arg1, temp_a1) != 0) {
        phi_t1 = 1;
    } else {
        phi_t1 = 0;
    }
    phi_v1 = 0;
    if ((sp38->unk_14 & 4) != 0) {
        phi_v1 = 1;
    }
    phi_t0 = -1;
    phi_a2 = 0;
    if (sp34 != 0) {
        temp_a0 = arg0;
        arg0->unk_16D = (u8) (arg0->unk_16D & 0xFFFD);
        sp2C = phi_t1;
        sp20 = -1;
        arg0 = arg0;
        sp24 = 0;
        sp28 = phi_v1;
        phi_a2 = sp24;
        if (func_800CAF70(temp_a0) != 0) {
            phi_t0 = phi_v1;
            phi_a2 = 1;
        }
    }
    temp_v0_2 = arg0->unk_1B0;
    phi_t0_2 = phi_t0;
    phi_a3 = arg0;
    phi_a2_2 = phi_a2;
    if ((s32) temp_v0_2 > 0) {
        arg0->unk_1B0 = (s16) (temp_v0_2 - 1);
        if ((sp38->unk_14 & 8) != 0) {
            sp2C = phi_t1;
            sp20 = phi_t0;
            arg0 = arg0;
            sp24 = phi_a2;
            sp28 = phi_v1;
            func_800B9038(arg0, arg0->unk_1B0, phi_a2, arg0);
            phi_t0_2 = phi_t0;
            phi_a3 = arg0;
            phi_a2_2 = phi_a2;
            if (arg0->unk_1B0 == 0) {
                phi_t0_2 = phi_v1;
                phi_a2_2 = 1;
            }
        }
    }
    phi_a3_2 = phi_a3;
    if (phi_t1 == phi_v1) {
        if ((sp38->unk_14 & 0x10) != 0) {
            if ((u32) D_80B16AF0 < (u32) arg1->gameplayFrames) {
                goto block_16;
            }
        } else {
block_16:
            phi_a2_2 = 1;
        }
    }
    if (phi_a2_2 != 0) {
        sp1C = arg1 + 0x18000;
        if (phi_t0_2 == 1) {
            arg0 = phi_a3;
            Actor_SetSwitchFlag(arg1, ((s32) phi_a3->actor.params >> 8) & 0x7F);
            goto block_22;
        }
        if (phi_t0_2 == 0) {
            arg0 = phi_a3;
            Actor_UnsetSwitchFlag(arg1, ((s32) phi_a3->actor.params >> 8) & 0x7F);
block_22:
            phi_a3_2 = arg0;
        }
        D_80B16AF0 = sp1C->unk_840;
        if ((sp38->unk_14 & 0x10) != 0) {
            func_80B15A4C(phi_a3_2, func_80B15E0C, phi_a3_2->unk_1B8, phi_a3_2);
            return;
        }
        func_80B15E0C(phi_a3_2, arg1);
        return;
    }
    temp_a2 = &phi_a3[1];
    if ((sp38->unk_14 & 1) == 0) {
        sp1C = temp_a2;
        Collider_UpdateCylinder((Actor *) phi_a3, (ColliderCylinder *) temp_a2);
        CollisionCheck_SetAC(arg1, &arg1->colChkCtx, (Collider *) temp_a2);
    }
}

void func_80B15E0C(DynaPolyActor *arg0, GlobalContext *arg1) {
    if (((((arg0->actor.params & 7) * 0x18) + &D_80B1688C)->unk_14 & 0x80) != 0) {
        func_80B15790((Actor *)0x284F);
    }
    arg0->unk_1C0 = 0;
    arg0->unk_1AC = func_80B15E78;
}

void func_80B15E78(DynaPolyActor *arg0, GlobalContext *arg1) {
    void *sp20;
    void *temp_v1;

    temp_v1 = ((arg0->actor.params & 7) * 0x18) + &D_80B1688C;
    sp20 = temp_v1;
    if (Math_StepToF(arg0 + 0x28, temp_v1->unk_4 + arg0->actor.home.pos.y, temp_v1->unk_C) != 0) {
        if (func_800CAF70(arg0) != 0) {
            func_8013ECE0(arg0->actor.xyzDistToPlayerSq, 0x78U, 0x14U, 0xAU);
        }
        func_80B15F3C((BgHakuginSwitch *) arg0, arg1);
        return;
    }
    if ((temp_v1->unk_14 & 0x80) == 0) {
        func_80B157C4((Actor *) arg0, 0x201E);
    }
}

void func_80B15F3C(BgHakuginSwitch *arg0, GlobalContext *arg1) {
    arg0->unk_1C0 = 0;
    arg0->actionFunc = func_80B15F88;
    arg0->actor.world.pos.y = (((arg0->actor.params & 7) * 0x18) + &D_80B1688C)->unk_4 + arg0->actor.home.pos.y;
}

void func_80B15F88(DynaPolyActor *arg0, GlobalContext *arg1) {
    void *sp18;
    GlobalContext *temp_a2;
    s16 temp_v0;
    s32 temp_a1;
    u8 temp_v0_2;
    s32 phi_a0;
    s32 phi_v1;

    temp_a2 = arg1;
    temp_v0 = arg0->actor.params;
    sp18 = ((temp_v0 & 7) * 0x18) + &D_80B1688C;
    temp_a1 = ((s32) temp_v0 >> 8) & 0x7F;
    arg0 = arg0;
    arg1 = temp_a2;
    if (Flags_GetSwitch(temp_a2, temp_a1) != 0) {
        phi_a0 = 1;
    } else {
        phi_a0 = 0;
    }
    temp_v0_2 = sp18->unk_14;
    phi_v1 = 0;
    if ((temp_v0_2 & 4) != 0) {
        phi_v1 = 1;
    }
    if (phi_a0 != phi_v1) {
        if ((temp_v0_2 & 0x20) != 0) {
            if ((u32) D_80B16AF0 < (u32) arg1->gameplayFrames) {
                func_80B15A4C(arg0, func_80B1606C, arg0->unk_1BA, arg0);
                return;
            }
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return;
        }
        func_80B1606C(arg0, arg1, arg1, arg0);
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

void func_80B1606C(DynaPolyActor *arg0, GlobalContext *arg1) {
    if (((((arg0->actor.params & 7) * 0x18) + &D_80B1688C)->unk_14 & 0x80) != 0) {
        func_80B15790((Actor *)0x2860);
    }
    arg0->unk_1C0 = 1;
    arg0->unk_1AC = func_80B160DC;
}

void func_80B160DC(BgHakuginSwitch *arg0, GlobalContext *arg1) {
    void *sp18;
    BgHakuginSwitch *temp_a3;
    f32 temp_a2;
    f32 temp_f4;
    f32 temp_f6;
    void *temp_v1;

    temp_a3 = arg0;
    temp_v1 = ((temp_a3->actor.params & 7) * 0x18) + &D_80B1688C;
    temp_f4 = temp_v1->unk_0;
    temp_f6 = temp_a3->actor.home.pos.y;
    temp_a2 = temp_v1->unk_8;
    arg0 = temp_a3;
    sp18 = temp_v1;
    if (Math_StepToF(temp_a3 + 0x28, temp_f4 + temp_f6, temp_a2) != 0) {
        func_80B15B1C(arg0, arg1);
        return;
    }
    if ((temp_v1->unk_14 & 0x80) == 0) {
        func_80B157C4((Actor *) arg0, 0x2172);
    }
}

void func_80B16180(DynaPolyActor *arg0, void (*arg1)(DynaPolyActor *, GlobalContext *, s32), s8 arg2, s16 arg3) {
    arg0[1].actor.scale.x = arg1;
    arg0->unk_1BE = arg2;
    arg0->unk_1BC = arg3;
    arg0->unk_1AC = func_80B161A0;
}

void func_80B161A0(Actor *arg0, GlobalContext *arg1) {
    if (ActorCutscene_GetCanPlayNext(arg0->unk_1BC) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields(arg0->unk_1BC, arg0);
        if (arg0->unk_1BE != 0) {
            Actor_SetSwitchFlag(arg1, ((s32) arg0->params >> 8) & 0x7F);
        } else {
            Actor_UnsetSwitchFlag(arg1, ((s32) arg0->params >> 8) & 0x7F);
        }
        arg0->unk_1BF = 0x32;
        (bitwise ? (*)(Actor *, GlobalContext *)) arg0[1].speedXZ(arg0, arg1);
        return;
    }
    ActorCutscene_SetIntentToPlay(arg0->unk_1BC);
}

void func_80B16244(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;
    Actor *phi_a2;

    temp_a2 = arg0;
    temp_a2->unk_1C0 = 1;
    temp_a2->world.pos.y = temp_a2->home.pos.y;
    phi_a2 = temp_a2;
    if (((temp_a2->params & 7) == 1) && (temp_a2->category != 0)) {
        arg0 = temp_a2;
        func_800BC154(arg1, arg1 + 0x1CA0, temp_a2, 0U);
        phi_a2 = arg0;
    }
    phi_a2[1].velocity.y = func_80B162AC;
}

void func_80B162AC(DynaPolyActor *arg0, GlobalContext *arg1) {
    s32 sp30;
    s32 sp28;
    s32 sp24;
    DynaPolyActor *sp20;
    DynaPolyActor *temp_a2;
    s16 temp_a3;
    u8 temp_v1;
    s32 phi_t0;
    s32 phi_a2;
    s32 phi_a2_2;

    temp_v1 = arg0->unk_16D;
    temp_a3 = arg0->actor.params;
    phi_t0 = 0;
    phi_a2 = 0;
    if ((temp_v1 & 2) != 0) {
        arg0->unk_16D = (u8) (temp_v1 & 0xFFFD);
        sp28 = 0;
        sp30 = temp_a3 & 7;
        sp24 = 0;
        phi_t0 = sp28;
        phi_a2 = sp24;
        if (func_800CAF70(arg0) != 0) {
            phi_t0 = 1;
            phi_a2 = 1;
        }
    }
    phi_a2_2 = phi_a2;
    if ((temp_a3 & 7) == 1) {
        sp28 = phi_t0;
        sp24 = phi_a2;
        phi_a2_2 = phi_a2;
        if (Flags_GetSwitch(arg1, ((s32) arg0->actor.params >> 8) & 0x7F) != 0) {
            phi_a2_2 = 1;
        }
    }
    if (phi_a2_2 != 0) {
        if (phi_t0 != 0) {
            func_80B16180(arg0, func_80B163C4, 1, arg0->unk_1B8);
            return;
        }
        func_80B163C4(arg0, arg1, phi_a2_2);
        return;
    }
    temp_a2 = &arg0[1];
    sp20 = temp_a2;
    Collider_UpdateCylinder((Actor *) arg0, (ColliderCylinder *) temp_a2);
    CollisionCheck_SetAC(arg1, &arg1->colChkCtx, (Collider *) temp_a2);
}

void func_80B163C4(DynaPolyActor *arg0, GlobalContext *arg1) {
    func_80B15790((Actor *)0x284F);
    arg0->unk_1C0 = 0;
    arg0->unk_1AC = func_80B16400;
}

void func_80B16400(DynaPolyActor *arg0, GlobalContext *arg1) {
    if (Math_StepToF(arg0 + 0x28, (arg0->actor.home.pos.y + 2.0f) - (1800.0f * arg0->actor.scale.y), 10.0f) != 0) {
        if (func_800CAF70(arg0) != 0) {
            func_8013ECE0(arg0->actor.xyzDistToPlayerSq, 0x78U, 0x14U, 0xAU);
        }
        func_80B16494((BgHakuginSwitch *) arg0, arg1);
    }
}

void func_80B16494(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;
    Actor *phi_a2;

    temp_a2 = arg0;
    temp_a2->unk_1C0 = 0;
    temp_a2->world.pos.y = (temp_a2->home.pos.y - (1800.0f * temp_a2->scale.y)) + 2.0f;
    phi_a2 = temp_a2;
    if (((temp_a2->params & 7) == 1) && (temp_a2->category != 6)) {
        arg0 = temp_a2;
        func_800BC154(arg1, arg1 + 0x1CA0, temp_a2, 6U);
        phi_a2 = arg0;
    }
    phi_a2[1].velocity.y = func_80B16520;
}

void func_80B16520(DynaPolyActor *arg0, GlobalContext *arg1) {
    if (Flags_GetSwitch(arg1, ((s32) arg0->actor.params >> 8) & 0x7F) == 0) {
        if ((arg0->actor.params & 7) == 1) {
            func_80B16180(arg0, func_80B165A0, 0, arg0->unk_1BA);
            return;
        }
        func_80B165A0(arg0, arg1);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80B165A0(DynaPolyActor *arg0, GlobalContext *arg1) {
    func_80B15790((Actor *)0x2860);
    arg0->unk_1C0 = 1;
    arg0->unk_1AC = func_80B165E0;
}

void func_80B165E0(BgHakuginSwitch *arg0, GlobalContext *arg1) {
    BgHakuginSwitch *temp_a3;
    f32 temp_a1;

    temp_a3 = arg0;
    temp_a1 = temp_a3->actor.home.pos.y;
    arg0 = temp_a3;
    if (Math_StepToF(temp_a3 + 0x28, temp_a1, 6.0f) != 0) {
        func_80B16244(arg0, arg1);
    }
}

void BgHakuginSwitch_Update(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp24;
    f32 temp_f0;
    f32 temp_f2;
    s8 temp_v0;
    s8 temp_v1;
    void (*temp_v0_2)(BgHakuginSwitch *, GlobalContext *);
    f32 phi_f0;
    BgHakuginSwitch *this = (BgHakuginSwitch *) thisx;

    temp_v0 = this->unk_1B2;
    if ((s32) temp_v0 > 0) {
        this->unk_1B2 = temp_v0 - 1;
    }
    temp_v1 = this->unk_1BF;
    if ((s32) temp_v1 > 0) {
        temp_v0_2 = this->actionFunc;
        if ((func_80B15A68 != temp_v0_2) && (func_80B161A0 != temp_v0_2)) {
            this->unk_1BF = temp_v1 - 1;
            if (this->unk_1BF == 0) {
                ActorCutscene_Stop(this->unk_1BC);
            }
        }
    }
    this->actionFunc(this, globalCtx);
    temp_f2 = this->actor.shape.yOffset * this->actor.scale.y;
    if (this->unk_1C0 != 0) {
        sp24 = temp_f2;
        if (func_800CAFB8((DynaPolyActor *) this) != 0) {
            sp24 = temp_f2;
            if (func_800CAFDC((DynaPolyActor *) this) != 0) {
                phi_f0 = (temp_f2 - -10.0f) * -0.21f;
            } else {
                phi_f0 = (temp_f2 - -3.0f) * -0.08f;
            }
            this->unk_1C4 += phi_f0;
            this->unk_1C4 *= 0.75f;
            this->actor.shape.yOffset += this->unk_1C4 * this->unk_1C8;
            return;
        }
        this->unk_1C4 += temp_f2 * -0.11f;
        this->unk_1C4 *= 0.75f;
        this->actor.shape.yOffset += this->unk_1C4 * this->unk_1C8;
        temp_f0 = this->actor.shape.yOffset;
        if (temp_f0 > 0.0f) {
            this->actor.shape.yOffset = 0.0f;
            return;
        }
        this->actor.shape.yOffset = temp_f0;
        return;
    }
    Math_StepToF(&this->actor.shape.yOffset, 0.0f, 2.0f * this->unk_1C8);
    this->unk_1C4 = 0.0f;
}

void BgHakuginSwitch_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgHakuginSwitch *this = (BgHakuginSwitch *) thisx;
    func_800BDFC0(globalCtx, this->unk_1A8);
}
