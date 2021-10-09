void func_80919F30(void *arg0, void *arg1);         /* static */
void func_80919FC8(void *arg0, void *arg1);         /* static */
void func_8091A044(Actor *arg0, ? arg1);            /* static */
void func_8091A0B8(void *arg0, void *arg1);         /* static */
void func_8091A5A0(Actor *actor, GlobalContext *globalCtx); /* static */
void func_8091A7B0(Actor *this, GlobalContext *globalCtx); /* static */
extern Gfx D_06001220;
extern CollisionHeader D_06001438;
extern CollisionHeader D_06001558;
static InitChainEntry D_8091A810;                   /* unable to generate initializer */

typedef struct BgUmajump {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ void (*unk15C)(void *, void *);    /* inferred */
    /* 0x0160 */ s32 unk160;                        /* inferred */
    /* 0x0164 */ s32 unk164;                        /* inferred */
    /* 0x0168 */ Actor *unk168;                     /* inferred */
} BgUmajump;                                        /* size 0x16C */

void func_80919F30(void *arg0, void *arg1) {
    s32 temp_t7;
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = arg0->unk160;
    phi_v0 = temp_v0;
    if (temp_v0 >= 0x5A) {
        arg0->unk160 = 0;
        phi_v0 = 0;
    }
    temp_t7 = phi_v0 + 1;
    arg0->unk160 = temp_t7;
    arg0 = arg0;
    arg0->unkC4 = (f32) (Math_SinS((s16) (s32) (((f32) temp_t7 / 90.0f) * 65536.0f)) * (20.0f / arg0->unk5C));
}

void func_80919FC8(void *arg0, void *arg1) {
    if (((s32) arg1->unk1F34 >= 6) && (arg0->unk164 == 0)) {
        arg0->unk164 = 1;
        play_sound(0x2844U);
    }
    if (arg1->unk1F2C == 0) {
        ActorCutscene_Stop((s16) arg0->unk38);
        arg0->unk138 = Actor_Noop;
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
        arg0->unk15C = func_80919FC8;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a1->cutscene);
}

void func_8091A0B8(void *arg0, void *arg1) {
    void *temp_v0;
    void *temp_v1;

    temp_v1 = arg0->unk168;
    temp_v0 = arg1->unk1CCC;
    if ((temp_v1 != 0) && (temp_v0 != 0) && (Math3D_XZDistance(temp_v1->unk24, temp_v1->unk2C, temp_v0->unk24, temp_v0->unk2C) < 1400.0f)) {
        arg0->unk15C = func_8091A044;
    }
}

void BgUmajump_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgUmajump *this = (BgUmajump *) thisx;
    s16 temp_t6;
    s32 temp_v0;

    Actor_ProcessInitChain(&this->actor, &D_8091A810);
    this->unk15C = NULL;
    this->unk168 = NULL;
    this->unk164 = 0;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    temp_t6 = this->actor.params;
    this->actor.params &= 0xFF;
    this->unk160 = ((s32) temp_t6 >> 8) & 0xFF;
    if (this->actor.params == 2) {
        if ((globalCtx->sceneNum == 0x35) && ((gSaveContext.weekEventReg[89] & 0x20) == 0) && ((*(gBitFlags + 0x38) & gSaveContext.inventory.questItems) == 0) && (this->actor.cutscene != -1)) {
            this->unk15C = func_8091A0B8;
            this->actor.update = func_8091A5A0;
            this->actor.flags |= 0x10;
            this->unk168 = func_ActorCategoryIterateById(globalCtx, this->unk168, 1, 0xD);
            return;
        }
        this->actor.update = Actor_Noop;
        return;
    }
    temp_v0 = Object_GetIndex(&globalCtx->objectCtx, 0xD2);
    this->unk160 = temp_v0;
    if (temp_v0 < 0) {
        Actor_MarkForDeath(&this->actor);
    }
    if ((this->actor.params == 3) && ((*(gBitFlags + 0x38) & gSaveContext.inventory.questItems) != 0)) {
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xA8, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) (s32) this->actor.shape.rot.z, (s16) 0x3E);
        Actor_MarkForDeath(&this->actor);
    }
}

void BgUmajump_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgUmajump *this = (BgUmajump *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void BgUmajump_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgUmajump *this = (BgUmajump *) thisx;
    s16 temp_v0;
    u16 temp_v0_2;
    SaveContext *phi_v1;

    if (Object_IsLoaded(&globalCtx->objectCtx, this->unk160) != 0) {
        this->actor.draw = func_8091A7B0;
        this->actor.objBankIndex = (s8) this->unk160;
        Actor_SetObjectSegment(globalCtx, &this->actor);
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
            this->unk160 = 0;
            this->unk15C = func_80919F30;
            this->actor.update = func_8091A5A0;
            return;
        }
        if (this->actor.params == 3) {
            this->actor.update = func_8091A5A0;
            return;
        }
        if ((this->actor.params == 5) || (this->actor.params == 6)) {
            if (this->actor.params == 5) {
                if ((this->unk144 == -1) && ((phi_v1->weekEventReg[22] & 1) != 0)) {
                    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06001558);
                }
            } else if ((this->actor.params == 6) && (this->unk144 == -1) && (((phi_v1->weekEventReg[22] & 1) == 0) || ((phi_v1->day == 2) && (phi_v1->isNight == 1) && (temp_v0_2 = phi_v1->time, (((s32) temp_v0_2 < 0x3AAA) == 0)) && ((s32) temp_v0_2 < 0x4001)))) {
                BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06001558);
            }
            func_800C641C(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
            this->actor.update = func_8091A5A0;
            return;
        }
        if (this->actor.params == 4) {
            func_800C641C(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
            this->actor.update = Actor_Noop;
            return;
        }
        this->actor.update = Actor_Noop;
        // Duplicate return node #34. Try simplifying control flow for better match
    }
}

void func_8091A5A0(Actor *actor, GlobalContext *globalCtx) {
    ? (*temp_v0)(Actor *, GlobalContext *);
    s32 temp_a2;
    s32 temp_a2_2;
    u16 temp_v0_2;
    u16 temp_v0_3;

    temp_v0 = actor->unk15C;
    if (temp_v0 != 0) {
        temp_v0(actor, globalCtx);
    }
    if ((actor->params == 3) && ((*(gBitFlags + 0x38) & gSaveContext.inventory.questItems) != 0)) {
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xA8, actor->world.pos.x, actor->world.pos.y, actor->world.pos.z, (s16) (s32) actor->shape.rot.x, (s16) (s32) actor->shape.rot.y, (s16) (s32) actor->shape.rot.z, (s16) 0x3E);
        Actor_MarkForDeath(actor);
    }
    if (actor->params == 5) {
        temp_a2 = actor->unk144;
        if ((temp_a2 == -1) && ((gSaveContext.weekEventReg[22] & 1) != 0)) {
            BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) actor, &D_06001558);
            return;
        }
        if ((temp_a2 != -1) && ((gSaveContext.weekEventReg[22] & 1) == 0)) {
            BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, temp_a2);
            return;
        }
        // Duplicate return node #27. Try simplifying control flow for better match
        return;
    }
    if (actor->params == 6) {
        temp_a2_2 = actor->unk144;
        if ((temp_a2_2 == -1) && (((gSaveContext.weekEventReg[22] & 1) == 0) || ((gSaveContext.day == 2) && (gSaveContext.isNight == 1) && (temp_v0_2 = gSaveContext.time, (((s32) temp_v0_2 < 0x3AAA) == 0)) && ((s32) temp_v0_2 < 0x4001)))) {
            BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) actor, &D_06001558);
            return;
        }
        if ((temp_a2_2 != -1) && ((gSaveContext.weekEventReg[22] & 1) != 0) && ((gSaveContext.day != 2) || (gSaveContext.isNight != 1) || (temp_v0_3 = gSaveContext.time, (((s32) temp_v0_3 < 0x3AAA) != 0)) || ((s32) temp_v0_3 >= 0x4001))) {
            BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, temp_a2_2);
        }
        // Duplicate return node #27. Try simplifying control flow for better match
    }
}

void func_8091A7B0(Actor *this, GlobalContext *globalCtx) {
    if (this->unk144 != -1) {
        func_800BDFC0(globalCtx, &D_06001220);
    }
}

