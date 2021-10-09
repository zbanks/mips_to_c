struct _mips2c_stack_BgTobira01_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgTobira01_Draw {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_BgTobira01_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_BgTobira01_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B12430 {
    /* 0x00 */ char pad_0[0x1A];
    /* 0x1A */ s16 sp1A;                            /* inferred */
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

void func_80B12430(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_06000088;
extern CollisionHeader D_060011C0;

void func_80B12430(Actor *arg0, GlobalContext *arg1) {
    void *sp1C;
    s16 sp1A;
    Actor *temp_a1;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s8 temp_a2;
    s16 phi_v1;
    SaveContext *phi_t0;
    Actor *phi_a3;
    s16 phi_v1_2;

    sp1C = arg1->actorCtx.actorList[2].first;
    temp_a2 = arg0->cutscene;
    if (arg0->unk_168 != 0) {
        sp1A = (s16) temp_a2;
        arg0 = arg0;
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            arg0 = arg0;
            ActorCutscene_Stop(0x7C);
        } else {
            sp1A = (s16) temp_a2;
            arg0 = arg0;
            if (ActorCutscene_GetCanPlayNext((s16) temp_a2) != 0) {
                temp_a1 = arg0;
                arg0 = arg0;
                ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a2, temp_a1);
                gSaveContext.weekEventReg[88] |= 0x40;
                arg0->unk_168 = 0;
            } else {
                arg0 = arg0;
                ActorCutscene_SetIntentToPlay((s16) temp_a2);
            }
        }
    } else if (((gSaveContext.weekEventReg[88] & 0x40) == 0) && (arg0->unk_160 == 0) && (arg1->actorCtx.unk1F5 != 0) && (arg1->actorCtx.unk1F4 == 0)) {
        arg0 = arg0;
        if (func_800C99AC(arg1 + 0x830, sp1C->floorPoly, (s32) sp1C->floorBgId) == 6) {
            arg0->unk_168 = 1;
            arg0->unk_16C = 0;
        }
    }
    temp_v0 = arg0->unk_160;
    phi_t0 = &gSaveContext;
    phi_a3 = arg0;
    if ((gSaveContext.weekEventReg[88] & 0x40) != 0) {
        arg0->unk_160 = (s16) (temp_v0 + 1);
    } else {
        arg0->unk_160 = (s16) (temp_v0 - 1);
    }
    temp_v0_2 = arg0->unk_160;
    if ((s32) temp_v0_2 < 0) {
        arg0->unk_160 = 0;
    } else {
        phi_v1 = temp_v0_2;
        if ((s32) temp_v0_2 >= 0x3D) {
            phi_v1 = 0x3C;
        }
        arg0->unk_160 = phi_v1;
    }
    if (temp_v0 != arg0->unk_160) {
        arg0 = arg0;
        Audio_PlayActorSound2(arg0, 0x2143U);
        arg0->unk_162 = 0xB4;
        temp_f0 = ((f32) arg0->unk_160 * 1.6666666f) + arg0->home.pos.y;
        arg0->unk_164 = temp_f0;
        arg0->world.pos.y = temp_f0;
        phi_t0 = &gSaveContext;
        phi_a3 = arg0;
    }
    if (((sp1C->unk_A6C & 0x40) == 0) && ((phi_t0->weekEventReg[88] & 0x40) != 0)) {
        temp_v0_3 = phi_a3->unk_162;
        if (temp_v0_3 == 0) {
            phi_v1_2 = 0;
        } else {
            phi_a3->unk_162 = (s16) (temp_v0_3 - 1);
            phi_v1_2 = phi_a3->unk_162;
        }
        if (phi_v1_2 == 0) {
            phi_t0->weekEventReg[88] &= 0xBF;
        }
    }
}

void BgTobira01_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgTobira01 *this = (BgTobira01 *) thisx;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_060011C0);
    gSaveContext.weekEventReg[88] &= 0xBF;
    Actor_SetScale((Actor *) this, 1.0f);
    this->timer = 0;
    this->actionFunc = (void (*)(BgTobira01 *, GlobalContext *)) func_80B12430;
    this->timer2 = (s16) gSaveContext.isNight;
}

void BgTobira01_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgTobira01 *this = (BgTobira01 *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void BgTobira01_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgTobira01 *this = (BgTobira01 *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgTobira01_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    BgTobira01 *this = (BgTobira01 *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp24 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp24->polyOpa.p;
    sp24->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = sp24;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = sp24->polyOpa.p;
    sp24->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06000088;
    temp_v0_2->words.w0 = 0xDE000000;
}
