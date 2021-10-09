typedef struct BgF40Switch {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ s16 unk_15C;                        /* inferred */
    /* 0x15E */ s8 unk_15E;                         /* inferred */
    /* 0x15F */ char pad_15F[0x1];
    /* 0x160 */ s8 unk_160;                         /* inferred */
    /* 0x161 */ char pad_161[0x3];                  /* maybe part of unk_160[4]? */
    /* 0x164 */ void (*actionFunc)(BgF40Switch *, GlobalContext *);
} BgF40Switch;                                      /* size = 0x168 */

struct _mips2c_stack_BgF40Switch_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgF40Switch_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgF40Switch_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgF40Switch_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC47B0 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ void *sp3C;                          /* inferred */
    /* 0x40 */ u32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x14];                   /* maybe part of sp40[6]? */
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0x10];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80BC4B20 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC4B94 {};              /* size 0x0 */

struct _mips2c_stack_func_80BC4BB8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BC4C68 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC4D30 {};              /* size 0x0 */

void func_80BC47B0(GlobalContext *arg0, GlobalContext *arg1); /* static */
extern CollisionHeader D_06000118;
extern Gfx D_06000390;
extern Gfx D_06000438;
static s32 D_80BC4DF0 = 0;
static ? D_80BC4DF4;                                /* unable to generate initializer */
static InitChainEntry D_80BC4E04[7];                /* unable to generate initializer */
static u32 D_80BC4F20;

void func_80BC47B0(GlobalContext *arg0, GlobalContext *arg1) {
    ? sp58;
    u32 sp40;
    void *sp3C;
    Actor *temp_s1;
    Actor *temp_s1_2;
    Actor *temp_s1_3;
    s16 temp_v1;
    s32 *temp_v0_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    DynaPolyActor *phi_s1;
    Actor *phi_s1_2;

    if (D_80BC4F20 != arg1->gameplayFrames) {
        sp58.unk_0 = (s32) D_80BC4DF4.unk_0;
        sp58.unk_4 = (s32) D_80BC4DF4.unk_4;
        sp58.unk_8 = (s32) D_80BC4DF4.unk_8;
        sp58.unk_C = (s32) D_80BC4DF4.unk_C;
        sp3C = arg1 + 0x18000;
        sp40 = func_801233E4(arg1);
        temp_s1 = arg1->actorCtx.actorList[0].first;
        phi_s1 = (DynaPolyActor *) temp_s1;
        if (temp_s1 != 0) {
            do {
                if ((phi_s1->actor.id == 0x246) && (arg0->unk_3 == phi_s1->actor.room) && (phi_s1->actor.update != 0)) {
                    phi_s1->unk_15F = (s8) phi_s1->unk_15E;
                    temp_v0 = func_800CAFB8(phi_s1);
                    if ((phi_s1->unk_15E != 0) && (func_80BC4B94 == phi_s1->unk_164)) {
                        if ((temp_v0 != 0) || (sp40 != 0)) {
                            phi_s1->unk_15C = 6;
                        } else {
                            temp_v1 = phi_s1->unk_15C;
                            if ((s32) temp_v1 > 0) {
                                phi_s1->unk_15C = (s16) (temp_v1 - 1);
                            } else {
                                goto block_13;
                            }
                        }
                    } else {
block_13:
                        phi_s1->unk_15E = (s8) temp_v0;
                    }
                    if (phi_s1->unk_15E != 0) {
                        temp_s0 = (s32) (phi_s1->actor.params & 0xFE00) >> 9;
                        if ((temp_s0 >= 0) && (temp_s0 < 0x80)) {
                            temp_v0_2 = &sp58 + (((s32) (temp_s0 & ~0x1F) >> 5) * 4);
                            *temp_v0_2 |= 1 << (temp_s0 & 0x1F);
                            if ((phi_s1->unk_15F == 0) && (func_80BC4D30 == phi_s1->unk_164) && (Flags_GetSwitch(arg1, temp_s0) == 0)) {
                                phi_s1->unk_160 = 1;
                            }
                        }
                    }
                }
                temp_s1_2 = phi_s1->actor.next;
                phi_s1 = (DynaPolyActor *) temp_s1_2;
            } while (temp_s1_2 != 0);
        }
        phi_s1_2 = arg1->actorCtx.actorList[0].first;
        if (arg1->actorCtx.actorList[0].first != 0) {
            do {
                if ((phi_s1_2->id == 0x246) && (arg0->unk_3 == phi_s1_2->room) && (phi_s1_2->update != 0)) {
                    temp_s0_2 = (s32) (phi_s1_2->params & 0xFE00) >> 9;
                    if ((temp_s0_2 >= 0) && (temp_s0_2 < 0x80) && (Flags_GetSwitch(arg1, temp_s0_2) != 0) && ((*(&sp58 + (((s32) (temp_s0_2 & ~0x1F) >> 5) * 4)) & (1 << (temp_s0_2 & 0x1F))) == 0)) {
                        Actor_UnsetSwitchFlag(arg1, temp_s0_2);
                    }
                }
                temp_s1_3 = phi_s1_2->next;
                phi_s1_2 = temp_s1_3;
            } while (temp_s1_3 != 0);
        }
        D_80BC4F20 = sp3C->unk_840;
    }
}

void BgF40Switch_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgF40Switch *temp_a0;
    BgF40Switch *this = (BgF40Switch *) thisx;

    temp_a0 = this;
    this = this;
    Actor_ProcessInitChain((Actor *) temp_a0, D_80BC4E04);
    this->actionFunc = func_80BC4D30;
    this->actor.scale.y = 0.165f;
    this->actor.world.pos.y = this->actor.home.pos.y + 1.0f;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000118);
    if (D_80BC4DF0 == 0) {
        D_80BC4F20 = globalCtx->gameplayFrames;
        D_80BC4DF0 = 1;
    }
}

void BgF40Switch_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgF40Switch *this = (BgF40Switch *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void func_80BC4B20(BgF40Switch *this, GlobalContext *globalCtx) {
    this->actor.scale.y += 0.0495f;
    if (this->actor.scale.y >= 0.165f) {
        Audio_PlayActorSound2((Actor *) this, 0x29A6U);
        this->actionFunc = func_80BC4D30;
        this->actor.scale.y = 0.165f;
    }
}

void func_80BC4B94(BgF40Switch *this, GlobalContext *globalCtx) {
    if (this->unk_15E == 0) {
        this->actionFunc = func_80BC4B20;
    }
}

void func_80BC4BB8(BgF40Switch *this, GlobalContext *globalCtx) {
    this->actor.scale.y -= 0.0495f;
    if (this->actor.scale.y <= 0.0165f) {
        Audio_PlayActorSound2((Actor *) this, 0x29A6U);
        func_8013ECE0(this->actor.xyzDistToPlayerSq, 0x78U, 0x14U, 0xAU);
        if (this->unk_160 != 0) {
            ActorCutscene_Stop((s16) this->actor.cutscene);
            this->unk_160 = 0;
        }
        this->actionFunc = func_80BC4B94;
        this->unk_15C = 6;
        this->actor.scale.y = 0.0165f;
    }
}

void func_80BC4C68(BgF40Switch *this, GlobalContext *globalCtx) {
    BgF40Switch *temp_a2;
    s8 temp_a0;
    s8 temp_a0_2;
    s8 temp_v0;

    temp_v0 = this->unk_160;
    if ((temp_v0 == 0) || (temp_a0 = this->actor.cutscene, (temp_a0 == -1))) {
        this->actionFunc = func_80BC4BB8;
        if (temp_v0 != 0) {
            Actor_SetSwitchFlag(globalCtx, (s32) (this->actor.params & 0xFE00) >> 9);
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    this = this;
    temp_a2 = this;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        temp_a0_2 = temp_a2->actor.cutscene;
        this = temp_a2;
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0_2, (Actor *) temp_a2);
        this->actionFunc = func_80BC4BB8;
        if (this->unk_160 != 0) {
            Actor_SetSwitchFlag(globalCtx, (s32) (this->actor.params & 0xFE00) >> 9);
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a2->actor.cutscene);
}

void func_80BC4D30(BgF40Switch *this, GlobalContext *globalCtx) {
    if (this->unk_15E != 0) {
        this->actionFunc = func_80BC4C68;
    }
}

void BgF40Switch_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgF40Switch *this = (BgF40Switch *) thisx;
    func_80BC47B0(globalCtx);
    this->actionFunc(this, globalCtx);
}

void BgF40Switch_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgF40Switch *this = (BgF40Switch *) thisx;
    func_800BDFC0(globalCtx, &D_06000438);
    func_800BDFC0(globalCtx, &D_06000390);
}
