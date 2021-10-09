struct _mips2c_stack_BgIkninSusceil_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgIkninSusceil_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgIkninSusceil_Init {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_BgIkninSusceil_Update {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C0A740 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad20[0x4];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C0A804 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0A838 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0A86C {
    /* 0x00 */ char pad0[0x22];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C0A95C {
    /* 0x00 */ char pad0[0x4C];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad50[0x4];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad58[0xC];                     /* maybe part of sp54[4]? */
    /* 0x64 */ s32 sp64;                            /* inferred */
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80C0AB14 {};              /* size 0x0 */

struct _mips2c_stack_func_80C0AB44 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0AB88 {};              /* size 0x0 */

struct _mips2c_stack_func_80C0ABA8 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C0AC74 {};              /* size 0x0 */

struct _mips2c_stack_func_80C0AC90 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0ACD4 {};              /* size 0x0 */

struct _mips2c_stack_func_80C0ACE8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0AD44 {};              /* size 0x0 */

struct _mips2c_stack_func_80C0AD64 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C0AE3C {};              /* size 0x0 */

struct _mips2c_stack_func_80C0AE5C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

s32 func_80C0A740(Actor *arg0, void *arg1);         /* static */
void func_80C0A804(BgIkninSusceil *arg0, GlobalContext *arg1); /* static */
void func_80C0A838(BgIkninSusceil *arg0, GlobalContext *arg1); /* static */
void func_80C0A86C(BgIkninSusceil *arg0, GlobalContext *arg1, s16 arg2, s16 arg3, s32 arg4); /* static */
s32 func_80C0A95C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C0AB14(BgIkninSusceil *arg0);           /* static */
void func_80C0AE3C(BgIkninSusceil *arg0);           /* static */
extern Gfx D_0600C308;
extern void D_0600C670;
extern CollisionHeader D_0600CBAC;
static f32 D_80C0B0E4 = 960.0f;
static ? D_80C0B0E8;                                /* unable to generate initializer */
static s8 D_80C0B0F0[8] = {0, 0, 7, 0xA, 0xA, 0xB, 0xB, 0};
static s8 D_80C0B0F8[6] = {1, 2, 0, 1, 2, 1};
static ? D_80C0B0FF;                                /* unable to generate initializer */
static InitChainEntry D_80C0B100;                   /* unable to generate initializer */

s32 func_80C0A740(Actor *arg0, void *arg1) {
    f32 sp1C;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;
    s32 phi_v0_4;

    Actor_CalcOffsetOrientedToDrawRotation(arg0, (Vec3f *) &sp1C, arg1->unk1CCC + 0x24);
    phi_v0 = 0;
    phi_v0_2 = 0;
    phi_v0_3 = 0;
    phi_v0_4 = 0;
    if (D_80C0B0E8.unk0 < sp24) {
        phi_v0 = 1;
    }
    phi_v0_4 = phi_v0;
    if (phi_v0 != 0) {
        if (sp24 < D_80C0B0E8.unk4) {
            phi_v0_2 = 1;
        }
        phi_v0_4 = phi_v0_2;
        if (phi_v0_2 != 0) {
            if (sp1C > -240.0f) {
                phi_v0_3 = 1;
            }
            phi_v0_4 = phi_v0_3;
            if ((phi_v0_3 != 0) && (sp1C < D_80C0B0E4)) {
                phi_v0_4 = 1;
            }
        }
    }
    return phi_v0_4;
}

void func_80C0A804(BgIkninSusceil *arg0, GlobalContext *arg1) {
    func_800C6314(arg1, arg1 + 0x880, arg0->dyna.bgId);
}

void func_80C0A838(BgIkninSusceil *arg0, GlobalContext *arg1) {
    func_800C62BC(arg1, arg1 + 0x880, arg0->dyna.bgId);
}

void func_80C0A86C(BgIkninSusceil *arg0, GlobalContext *arg1, s16 arg2, s16 arg3, s32 arg4) {
    s16 sp22;
    s16 temp_v0;
    s32 temp_a0;

    temp_v0 = Quake_Add((arg1 + (arg1->activeCamera * 4))->unk800, 3U);
    temp_a0 = temp_v0 << 0x10;
    sp22 = temp_v0;
    Quake_SetSpeed((s16) (temp_a0 >> 0x10), 0x7B30);
    Quake_SetQuakeValues(sp22, arg2, 0, 0, (s16) 0);
    Quake_SetCountdown(sp22, arg3);
    if (arg4 == 1) {
        func_8013ECE0(10000.0f, 0xFFU, 0x14U, 0x96U);
        return;
    }
    if (arg4 == 2) {
        func_8013ECE0(10000.0f, 0xB4U, 0x14U, 0x64U);
        return;
    }
    if (arg4 == 3) {
        func_8013ECE0(10000.0f, 0x78U, 0x14U, 0xAU);
    }
}

s32 func_80C0A95C(Actor *arg0, GlobalContext *arg1) {
    s32 sp64;
    f32 sp4C;
    f32 temp_f0;
    f32 temp_f0_2;
    s8 *temp_v0;
    s8 *phi_v0;
    s8 *phi_v1;
    s32 phi_t0;

    sp64 = 1;
    Actor_CalcOffsetOrientedToDrawRotation(arg0, (Vec3f *) &sp4C, arg1->actorCtx.actorList[2].first + 0x24);
    phi_v0 = D_80C0B0F8;
    phi_v1 = D_80C0B0F0;
    phi_t0 = 1;
loop_1:
    temp_v0 = phi_v0 + 1;
    temp_f0 = (f32) *phi_v1 * 80.0f;
    temp_f0_2 = (f32) *phi_v0 * -80.0f;
    phi_v0 = temp_v0;
    if (((temp_f0_2 - 79.5f) < sp54) && (sp54 < (temp_f0_2 - 0.5f)) && ((temp_f0 + 0.5f) < sp4C) && (sp4C < (temp_f0 + 79.5f))) {
        phi_t0 = 0;
    } else {
        phi_v1 += 1;
        if (temp_v0 != &D_80C0B0FF) {
            goto loop_1;
        }
    }
    return phi_t0;
}

void BgIkninSusceil_Init(BgIkninSusceil *this, GlobalContext *globalCtx) {
    BgIkninSusceil *this = (BgIkninSusceil *) thisx;
    Actor_ProcessInitChain((Actor *) this, &D_80C0B100);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_0600CBAC);
    this->animatedTexture = Lib_SegmentedToVirtual(&D_0600C670);
    func_80C0AC74(this);
}

void BgIkninSusceil_Destroy(BgIkninSusceil *this, GlobalContext *globalCtx) {
    BgIkninSusceil *this = (BgIkninSusceil *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void func_80C0AB14(BgIkninSusceil *arg0) {
    arg0->timer = 0x6E;
    arg0->actionFunc = func_80C0AB44;
    arg0->dyna.actor.world.pos.y = arg0->dyna.actor.home.pos.y + 365.0f;
}

void func_80C0AB44(BgIkninSusceil *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->timer;
    if ((s32) temp_v0 > 0) {
        this->timer = temp_v0 - 1;
        return;
    }
    if (func_80C0A740() != 0) {
        func_80C0AB88(this);
    }
}

void func_80C0AB88(BgIkninSusceil *this) {
    this->actionFunc = func_80C0ABA8;
    this->dyna.actor.velocity.y = -10.0f;
}

void func_80C0ABA8(BgIkninSusceil *this, GlobalContext *globalCtx) {
    this->dyna.actor.velocity.y += -0.7f;
    this->dyna.actor.velocity.y *= 0.93f;
    this->dyna.actor.world.pos.y += this->dyna.actor.velocity.y;
    if (this->dyna.actor.world.pos.y <= this->dyna.actor.home.pos.y) {
        func_80C0A86C(this, globalCtx, 4, 0xE, 1);
        Actor_UnsetSwitchFlag(globalCtx, this->dyna.actor.params & 0x7F);
        Audio_PlayActorSound2((Actor *) this, 0x281DU);
        func_80C0AC74(this);
        return;
    }
    func_800B9010((Actor *) this, 0x210EU);
}

void func_80C0AC74(BgIkninSusceil *this) {
    this->actionFunc = func_80C0AC90;
    this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y;
}

void func_80C0AC90(BgIkninSusceil *this, GlobalContext *globalCtx) {
    if (Flags_GetSwitch(globalCtx, this->dyna.actor.params & 0x7F) != 0) {
        func_80C0ACD4(this);
    }
}

void func_80C0ACD4(BgIkninSusceil *this) {
    this->actionFunc = func_80C0ACE8;
}

void func_80C0ACE8(BgIkninSusceil *this, GlobalContext *globalCtx) {
    BgIkninSusceil *temp_a1;
    s8 temp_a0;
    s8 temp_a0_2;

    temp_a0 = this->dyna.actor.cutscene;
    this = this;
    temp_a1 = this;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        temp_a0_2 = temp_a1->dyna.actor.cutscene;
        this = temp_a1;
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0_2, (Actor *) temp_a1);
        func_80C0AD44(this);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a1->dyna.actor.cutscene);
}

void func_80C0AD44(BgIkninSusceil *this) {
    this->actionFunc = func_80C0AD64;
    this->dyna.actor.velocity.y = 5.0f;
}

void func_80C0AD64(BgIkninSusceil *this, GlobalContext *globalCtx) {
    this->dyna.actor.velocity.y += 0.46f;
    this->dyna.actor.velocity.y *= 0.98f;
    if (Math_SmoothStepToF(&this->dyna.actor.world.pos.y, this->dyna.actor.home.pos.y + 365.0f, 0.5f, this->dyna.actor.velocity.y, 1.0f) < 0.1f) {
        func_80C0A86C(this, globalCtx, 1, 0xE, 3);
        ActorCutscene_Stop((s16) this->dyna.actor.cutscene);
        func_80C0AB14(this);
        return;
    }
    func_800B9010((Actor *) this, 0x210DU);
}

void func_80C0AE3C(BgIkninSusceil *arg0) {
    arg0->actionFunc = func_80C0AE5C;
    arg0->dyna.actor.velocity.y = 30.0f;
}

void func_80C0AE5C(BgIkninSusceil *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    this->dyna.actor.velocity.y += -0.1f;
    this->dyna.actor.velocity.y *= 0.95f;
    temp_f0 = this->dyna.actor.velocity.y;
    if (temp_f0 < 1.0f) {
        this->dyna.actor.velocity.y = 1.0f;
    } else {
        this->dyna.actor.velocity.y = temp_f0;
    }
    this->dyna.actor.world.pos.y += this->dyna.actor.velocity.y;
    if ((this->dyna.actor.home.pos.y + 365.0f) < this->dyna.actor.world.pos.y) {
        func_80C0A86C((BgIkninSusceil *)3, (GlobalContext *)0xE, (s16) 2);
        func_80C0AB14(this);
    }
}

void BgIkninSusceil_Update(BgIkninSusceil *this, GlobalContext *globalCtx) {
    Actor *sp24;
    Actor *temp_t7;
    s16 temp_v0;
    s16 temp_v0_2;
    BgIkninSusceil *this = (BgIkninSusceil *) thisx;

    temp_t7 = globalCtx->actorCtx.actorList[2].first;
    sp24 = temp_t7;
    if ((this->unk168 == 0) && ((s32) this->unk166 > 0) && ((temp_t7->unkA74 & 0x100) != 0) && (temp_t7->unkB48 > 1000.0f)) {
        this->unk168 = 2;
        if ((func_80C0A95C((Actor *) this, globalCtx) != 0) && (func_80C0AE5C != this->actionFunc)) {
            func_800B8E58(sp24, 0x83EU);
            func_80C0AE3C(this);
        }
    }
    temp_v0 = this->unk168;
    if ((s32) temp_v0 > 0) {
        this->unk168 = temp_v0 - 1;
    }
    this->actionFunc(this, globalCtx);
    if ((this->dyna.actor.home.pos.y + 70.0f) < this->dyna.actor.world.pos.y) {
        this->unk166 = 0;
        goto block_15;
    }
    if ((sp24->unkA74 & 0x100) != 0) {
        this->unk166 = 3;
        goto block_15;
    }
    temp_v0_2 = this->unk166;
    if ((s32) temp_v0_2 > 0) {
        this->unk166 = temp_v0_2 - 1;
block_15:
    }
    if ((s32) this->unk166 > 0) {
        func_80C0A838(this, globalCtx);
        return;
    }
    func_80C0A804(this, globalCtx);
}

void BgIkninSusceil_Draw(BgIkninSusceil *this, GlobalContext *globalCtx) {
    BgIkninSusceil *this = (BgIkninSusceil *) thisx;
    AnimatedMat_Draw(globalCtx, this->animatedTexture);
    func_800BDFC0(globalCtx, &D_0600C308);
}
