struct _mips2c_stack_BgIknvObj_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgIknvObj_DoNothing {};        /* size 0x0 */

struct _mips2c_stack_BgIknvObj_Draw {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Gfx *sp18;                           /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ GraphicsContext *sp20;               /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_BgIknvObj_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ CollisionHeader *sp2C;               /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_BgIknvObj_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgIknvObj_UpdateRaisedDoor {}; /* size 0x0 */

struct _mips2c_stack_BgIknvObj_UpdateSakonDoor {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgIknvObj_UpdateWaterwheel {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD7CEC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD7E0C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BD7ED8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD7F4C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD7FDC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD8040 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

s32 func_80BD7CEC(Actor *arg0, Actor *);            /* static */
s32 func_80BD7E0C(Actor *arg0, s16 arg1, GlobalContext *arg2, Actor *); /* static */
void func_80BD7ED8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BD7F4C(void *arg0, GlobalContext *arg1); /* static */
void func_80BD7FDC(void *arg0, s16 arg1);           /* static */
void func_80BD8040(Actor *arg0, GlobalContext *arg1); /* static */
extern Gfx D_06011880;
extern CollisionHeader D_060119D4;
extern Gfx D_060129C8;
extern CollisionHeader D_06012CA4;
extern Gfx D_06013058;
static ColliderCylinderInit BgIknvObjCollisionInit = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x28, 0x28, 0, {0, 0, 0}},
};

void BgIknvObj_Init(Actor *thisx, GlobalContext *globalCtx) {
    CollisionHeader *sp2C;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    s32 temp_v0;
    u32 temp_t0;
    BgIknvObj *this = (BgIknvObj *) thisx;

    sp2C = NULL;
    Actor_SetScale((Actor *) this, 0.1f);
    temp_v0 = this->dyna.actor.params & 0xF;
    this->actionFunc = BgIknvObj_DoNothing;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            this->displayListPtr = &D_060129C8;
            this->actionFunc = BgIknvObj_UpdateSakonDoor;
            BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
            BgCheck_RelocateMeshHeader(&D_06012CA4, &sp2C);
            this->dyna.bgId = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp2C);
            temp_a1 = &this->collider;
            sp24 = temp_a1;
            Collider_InitAndSetCylinder(globalCtx, temp_a1, (Actor *) this, &BgIknvObjCollisionInit);
            Collider_UpdateCylinder((Actor *) this, temp_a1);
            this->dyna.actor.colChkInfo.mass = 0xFF;
            gSaveContext.weekEventReg[51] &= 0xEF;
            Actor_SetHeight((Actor *) this, (f32) gGameInfo->data[952]);
            return;
        }
        this->displayListPtr = &D_06011880;
        BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
        BgCheck_RelocateMeshHeader(&D_060119D4, &sp2C);
        this->dyna.bgId = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp2C);
        this->actionFunc = BgIknvObj_UpdateRaisedDoor;
        this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y + 120.0f;
        return;
    }
    temp_t0 = this->dyna.actor.flags | 0x100000;
    this->dyna.actor.flags = temp_t0;
    this->displayListPtr = &D_06013058;
    this->actionFunc = BgIknvObj_UpdateWaterwheel;
    this->dyna.actor.flags = temp_t0 | 0x10;
}

void BgIknvObj_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *temp_a1;
    s32 temp_v0;
    BgIknvObj *this = (BgIknvObj *) thisx;

    temp_v0 = this->dyna.actor.params & 0xF;
    if (temp_v0 != 1) {
        if (temp_v0 == 2) {
            temp_a1 = &this->collider;
            this = this;
            Collider_DestroyCylinder(globalCtx, temp_a1);
            gSaveContext.weekEventReg[51] &= 0xEF;
            goto block_3;
        }
    } else {
block_3:
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
    }
}

s32 func_80BD7CEC(Actor *arg0) {
    s8 temp_a0;

    if (arg0->cutscene == -1) {
        return 1;
    }
    arg0 = arg0;
    temp_a0 = arg0->cutscene;
    if (ActorCutscene_GetCurrentIndex() == temp_a0) {
        return 1;
    }
    arg0 = arg0;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
        return 1;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
    return 0;
}

void BgIknvObj_UpdateWaterwheel(BgIknvObj *this, GlobalContext *globalCtx) {
    if ((gSaveContext.weekEventReg[14] & 4) != 0) {
        this->dyna.actor.shape.rot.z += -0x64;
        globalCtx = globalCtx;
        func_800B9098((Actor *) this);
        func_800B9010((Actor *) this, 0x21AAU);
    }
    if ((globalCtx->csCtx.state != 0) && (gSaveContext.sceneSetupIndex == 1) && (globalCtx->csCtx.unk_12 == 4) && (globalCtx->csCtx.frames == 0x5D7)) {
        func_8019F128(0x29A9U);
    }
}

s32 func_80BD7E0C(Actor *arg0, s16 arg1, GlobalContext *arg2) {
    GlobalContext *temp_a3;

    temp_a3 = arg2;
    arg0->shape.yOffset = 0.0f;
    arg2 = temp_a3;
    CollisionCheck_SetOC(temp_a3, temp_a3 + 0x18884, arg0 + 0x15C);
    if (arg1 != arg0->shape.rot.y) {
        Math_SmoothStepToS(arg0 + 0xBE, arg1, 2, 0x64, (s16) 0x64);
        arg0->world.rot.y = arg0->shape.rot.y;
        if ((arg2->gameplayFrames & 1) != 0) {
            arg0->shape.yOffset = 5.0f;
        }
        func_800B9010(arg0, 0x2143U);
        return 0;
    }
    Audio_PlayActorSound2(arg0, 0x2893U);
    return 1;
}

void func_80BD7ED8(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a3;
    s16 temp_a1;

    temp_a3 = arg0;
    temp_a1 = temp_a3->home.rot.y;
    arg0 = temp_a3;
    if (func_80BD7E0C(temp_a3, temp_a1, arg1, temp_a3) != 0) {
        arg0->unk_1AC = BgIknvObj_UpdateSakonDoor;
        gSaveContext.weekEventReg[51] &= 0xEF;
    }
    CollisionCheck_SetOC(arg1, &arg1->colChkCtx, arg0 + 0x15C);
}

void func_80BD7F4C(void *arg0, GlobalContext *arg1) {
    s8 temp_a0;

    if ((s32) gSaveContext.time >= 0xD001) {
        arg0->unk_1AC = func_80BD7ED8;
    }
    if ((arg0->unk_14 == 1) && ((gSaveContext.weekEventReg[58] & 0x80) == 0)) {
        temp_a0 = arg0->unk_38;
        arg0 = arg0;
        ActorCutscene_Stop((s16) temp_a0);
        arg0->unk_14 = 0;
    }
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, arg0 + 0x15C);
}

void func_80BD7FDC(void *arg0, s16 arg1) {
    if (func_80BD7E0C((Actor *) (s16) (arg0->unk_16 + 0x4000), arg1) != 0) {
        arg0->unk_1AC = func_80BD7F4C;
        gSaveContext.weekEventReg[51] |= 0x10;
        arg0->unk_14 = 1;
    }
}

void func_80BD8040(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a0 = temp_a3;
    arg0 = temp_a3;
    if (func_80BD7CEC(temp_a0, temp_a3) != 0) {
        arg0->unk_1AC = func_80BD7FDC;
    }
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, arg0 + 0x15C);
}

void BgIknvObj_UpdateSakonDoor(BgIknvObj *this, GlobalContext *globalCtx) {
    if ((gSaveContext.weekEventReg[58] & 0x80) != 0) {
        this->actionFunc = (void (*)(BgIknvObj *, GlobalContext *)) func_80BD8040;
        gSaveContext.weekEventReg[89] |= 0x80;
    }
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->collider);
}

void BgIknvObj_UpdateRaisedDoor(BgIknvObj *this, GlobalContext *globalCtx) {

}

void BgIknvObj_DoNothing(BgIknvObj *this, GlobalContext *globalCtx) {

}

void BgIknvObj_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgIknvObj *this = (BgIknvObj *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgIknvObj_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp20;
    Gfx *sp18;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a2;
    BgIknvObj *this = (BgIknvObj *) thisx;

    temp_a2 = globalCtx->state.gfxCtx;
    temp_v0 = temp_a2->polyOpa.p;
    temp_a2->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_a2;
    sp18 = temp_v0;
    sp18->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    sp20 = temp_a2;
    func_8012C28C(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_a2->polyOpa.p;
    temp_a2->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) this->displayListPtr;
}
