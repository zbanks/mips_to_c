typedef struct BgUmajump {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ void (*unk_15C)(void *, void *);    /* inferred */
    /* 0x160 */ s32 unk_160;                        /* inferred */
    /* 0x164 */ s32 unk_164;                        /* inferred */
    /* 0x168 */ Actor *unk_168;                     /* inferred */
} BgUmajump;                                        /* size = 0x16C */

struct _mips2c_stack_BgUmajump_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgUmajump_Init {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_BgUmajump_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80919F30 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80919FC8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8091A044 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8091A0B8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8091A5A0 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8091A7B0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_80919F30(void *arg0, void *arg1);         /* static */
void func_80919FC8(void *arg0, void *arg1);         /* static */
void func_8091A044(Actor *arg0, ? arg1);            /* static */
void func_8091A0B8(void *arg0, void *arg1);         /* static */
void func_8091A5A0(Actor *actor, GlobalContext *globalCtx); /* static */
void func_8091A7B0(Actor *this, GlobalContext *globalCtx); /* static */
extern Gfx D_06001220;
extern CollisionHeader D_06001438;
extern CollisionHeader D_06001558;
static InitChainEntry D_8091A810[4];                /* unable to generate initializer */

void func_80919F30(void *arg0, void *arg1) {
    s32 temp_t7;
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = arg0->unk_160;
    phi_v0 = temp_v0;
    if (temp_v0 >= 0x5A) {
        arg0->unk_160 = 0;
        phi_v0 = 0;
    }
    temp_t7 = phi_v0 + 1;
    arg0->unk_160 = temp_t7;
    arg0 = arg0;
    arg0->unk_C4 = (f32) (Math_SinS((s16) (s32) (((f32) temp_t7 / 90.0f) * 65536.0f)) * (20.0f / arg0->unk_5C));
}

void func_80919FC8(void *arg0, void *arg1) {
    if (((s32) arg1->unk_1F34 >= 6) && (arg0->unk_164 == 0)) {
        arg0->unk_164 = 1;
        play_sound(0x2844U);
    }
    if (arg1->unk_1F2C == 0) {
        ActorCutscene_Stop((s16) arg0->unk_38);
        arg0->unk_138 = Actor_Noop;
    }
}

void func_8091A044(Actor *arg0, ? arg1) {
    Actor *temp_a1;
    s8 temp_a0;
    s8 temp_a0_2;

    temp_a0 = arg0->cutscene;
    arg0 = arg0;
    temp_a1 = arg0;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        temp_a0_2 = temp_a1->cutscene;
        arg0 = temp_a1;
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0_2, temp_a1);
        gSaveContext.weekEventReg[89] |= 0x20;
        arg0->unk_15C = func_80919FC8;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a1->cutscene);
}

void func_8091A0B8(void *arg0, void *arg1) {
    void *temp_v0;
    void *temp_v1;

    temp_v1 = arg0->unk_168;
    temp_v0 = arg1->unk_1CCC;
    if ((temp_v1 != 0) && (temp_v0 != 0) && (Math3D_XZDistance(temp_v1->unk_24, temp_v1->unk_2C, temp_v0->unk_24, temp_v0->unk_2C) < 1400.0f)) {
        arg0->unk_15C = func_8091A044;
    }
}

void BgUmajump_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_t6;
    s32 temp_v0;
    BgUmajump *this = (BgUmajump *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_8091A810);
    this->unk_15C = NULL;
    this->unk_168 = NULL;
    this->unk_164 = 0;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    temp_t6 = this->actor.params;
    this->actor.params &= 0xFF;
    this->unk_160 = ((s32) temp_t6 >> 8) & 0xFF;
    if (this->actor.params == 2) {
        if ((globalCtx->sceneNum == 0x35) && ((gSaveContext.weekEventReg[89] & 0x20) == 0) && ((gBitFlags[14] & gSaveContext.inventory.questItems) == 0) && (this->actor.cutscene != -1)) {
            this->unk_15C = func_8091A0B8;
            this->actor.update = func_8091A5A0;
            this->actor.flags |= 0x10;
            this->unk_168 = func_ActorCategoryIterateById(globalCtx, this->unk_168, 1, 0xD);
            return;
        }
        this->actor.update = Actor_Noop;
        return;
    }
    temp_v0 = Object_GetIndex(&globalCtx->objectCtx, 0xD2);
    this->unk_160 = temp_v0;
    if (temp_v0 < 0) {
        Actor_MarkForDeath((Actor *) this);
    }
    if ((this->actor.params == 3) && ((gBitFlags[14] & gSaveContext.inventory.questItems) != 0)) {
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xA8, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) (s32) this->actor.shape.rot.z, (s16) 0x3E);
        Actor_MarkForDeath((Actor *) this);
    }
}

void BgUmajump_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgUmajump *this = (BgUmajump *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void BgUmajump_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    u16 temp_v0_2;
    SaveContext *phi_v1;
    BgUmajump *this = (BgUmajump *) thisx;

    if (Object_IsLoaded(&globalCtx->objectCtx, this->unk_160) != 0) {
        this->actor.draw = func_8091A7B0;
        this->actor.objBankIndex = (s8) this->unk_160;
        Actor_SetObjectSegment(globalCtx, (Actor *) this);
        temp_v0 = this->actor.params;
        phi_v1 = &gSaveContext;
        if (temp_v0 == 5) {
            if ((gSaveContext.weekEventReg[22] & 1) != 0) {
                BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06001558);
                goto block_11;
            }
        } else if (temp_v0 == 6) {
            phi_v1 = &gSaveContext;
            if ((gSaveContext.weekEventReg[22] & 1) == 0) {
                BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06001558);
                goto block_11;
            }
        } else {
            if ((temp_v0 == 4) || (temp_v0 == 3)) {
                BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06001558);
            } else {
                BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06001438);
            }
block_11:
            phi_v1 = &gSaveContext;
        }
        if (this->actor.params == 1) {
            this->unk_160 = 0;
            this->unk_15C = func_80919F30;
            this->actor.update = func_8091A5A0;
            return;
        }
        if (this->actor.params == 3) {
            this->actor.update = func_8091A5A0;
            return;
        }
        if ((this->actor.params == 5) || (this->actor.params == 6)) {
            if (this->actor.params == 5) {
                if ((this->unk_144 == -1) && ((phi_v1->weekEventReg[22] & 1) != 0)) {
                    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06001558);
                }
            } else if ((this->actor.params == 6) && (this->unk_144 == -1) && (((phi_v1->weekEventReg[22] & 1) == 0) || ((phi_v1->day == 2) && (phi_v1->isNight == 1) && (temp_v0_2 = phi_v1->time, (((s32) temp_v0_2 < 0x3AAA) == 0)) && ((s32) temp_v0_2 < 0x4001)))) {
                BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06001558);
            }
            func_800C641C(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
            this->actor.update = func_8091A5A0;
            return;
        }
        if (this->actor.params == 4) {
            func_800C641C(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
            this->actor.update = Actor_Noop;
            return;
        }
        this->actor.update = Actor_Noop;
        /* Duplicate return node #34. Try simplifying control flow for better match */
    }
}

void func_8091A5A0(Actor *actor, GlobalContext *globalCtx) {
    ? (*temp_v0)(Actor *, GlobalContext *);
    s32 temp_a2;
    s32 temp_a2_2;
    u16 temp_v0_2;
    u16 temp_v0_3;

    temp_v0 = actor->unk_15C;
    if (temp_v0 != 0) {
        temp_v0(actor, globalCtx);
    }
    if ((actor->params == 3) && ((gBitFlags[14] & gSaveContext.inventory.questItems) != 0)) {
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xA8, actor->world.pos.x, actor->world.pos.y, actor->world.pos.z, (s16) (s32) actor->shape.rot.x, (s16) (s32) actor->shape.rot.y, (s16) (s32) actor->shape.rot.z, (s16) 0x3E);
        Actor_MarkForDeath(actor);
    }
    if (actor->params == 5) {
        temp_a2 = actor->unk_144;
        if ((temp_a2 == -1) && ((gSaveContext.weekEventReg[22] & 1) != 0)) {
            BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) actor, &D_06001558);
            return;
        }
        if ((temp_a2 != -1) && ((gSaveContext.weekEventReg[22] & 1) == 0)) {
            BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, temp_a2);
            return;
        }
        /* Duplicate return node #27. Try simplifying control flow for better match */
        return;
    }
    if (actor->params == 6) {
        temp_a2_2 = actor->unk_144;
        if ((temp_a2_2 == -1) && (((gSaveContext.weekEventReg[22] & 1) == 0) || ((gSaveContext.day == 2) && (gSaveContext.isNight == 1) && (temp_v0_2 = gSaveContext.time, (((s32) temp_v0_2 < 0x3AAA) == 0)) && ((s32) temp_v0_2 < 0x4001)))) {
            BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) actor, &D_06001558);
            return;
        }
        if ((temp_a2_2 != -1) && ((gSaveContext.weekEventReg[22] & 1) != 0) && ((gSaveContext.day != 2) || (gSaveContext.isNight != 1) || (temp_v0_3 = gSaveContext.time, (((s32) temp_v0_3 < 0x3AAA) != 0)) || ((s32) temp_v0_3 >= 0x4001))) {
            BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, temp_a2_2);
        }
        /* Duplicate return node #27. Try simplifying control flow for better match */
    }
}

void func_8091A7B0(Actor *this, GlobalContext *globalCtx) {
    if (this->unk_144 != -1) {
        func_800BDFC0(globalCtx, &D_06001220);
    }
}
