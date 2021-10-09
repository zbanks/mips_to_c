void func_80BD7538(Actor *this, GlobalContext *globalCtx); /* static */
void func_80BD7768(Actor *this, GlobalContext *globalCtx); /* static */
void func_80BD7820(Actor *this, GlobalContext *globalCtx); /* static */
void func_80BD78C4(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_0600DB60;
extern ? D_0600DDD8;
extern void D_0600F1C0;
extern ? D_06010D98;
extern ? D_060115E0;
extern void D_060117A0;
extern CollisionHeader D_060117C8;
extern ? D_06012700;
extern void D_06012728;
extern CollisionHeader D_06012788;

typedef struct BgIknvDoukutu {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ s16 unk15C;                        /* inferred */
    /* 0x015E */ u16 unk15E;                        /* inferred */
    /* 0x0160 */ f32 unk160;                        /* inferred */
    /* 0x0164 */ void (*actionFunc)(BgIknvDoukutu *, GlobalContext *);
} BgIknvDoukutu;                                    /* size 0x168 */

void BgIknvDoukutu_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgIknvDoukutu *this = (BgIknvDoukutu *) thisx;
    CollisionHeader *sp30;
    s32 temp_v0;

    sp30 = NULL;
    Actor_SetScale(&this->actor, 0.1f);
    temp_v0 = this->actor.params & 0xF;
    this->actionFunc = func_80BD73D0;
    this->unk15C = 0;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                Actor_MarkForDeath(&this->actor);
                // Duplicate return node #14. Try simplifying control flow for better match
                return;
            }
            this->unk15E = 0x204;
            this->actor.draw = func_80BD78C4;
            BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
            BgCheck_RelocateMeshHeader(&D_060117C8, &sp30);
            this->unk144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp30);
            if ((gSaveContext.weekEventReg[14] & 4) != 0) {
                this->unk160 = 1.0f;
                this->actor.world.pos.y += 68.0f;
                return;
            }
            this->actionFunc = func_80BD7360;
            this->unk160 = 0.0f;
            return;
        }
        Actor_SetScale(&this->actor, 1.0f);
        this->actor.draw = func_80BD7820;
        this->unk15E = 0x204;
        BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
        BgCheck_RelocateMeshHeader(&D_06012788, &sp30);
        this->unk144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp30);
        if ((gSaveContext.weekEventReg[14] & 4) == 0) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
        return;
    }
    this->actionFunc = func_80BD71BC;
    this->unk15E = 0x204;
    this->unk160 = 1.0f;
    if (((gSaveContext.weekEventReg[14] & 4) != 0) || ((gSaveContext.weekEventReg[52] & 0x20) != 0)) {
        this->actor.draw = func_80BD7768;
        this->actionFunc = func_80BD73D0;
        globalCtx->envCtx.unk_C3 = 0x19;
        return;
    }
    globalCtx->envCtx.unk_C3 = 0x18;
}

void BgIknvDoukutu_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgIknvDoukutu *this = (BgIknvDoukutu *) thisx;
    s32 temp_v0;

    temp_v0 = this->actor.params & 0xF;
    if ((temp_v0 == 1) || (temp_v0 == 2)) {
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
    }
}

void func_80BD716C(BgIknvDoukutu *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    temp_f0 = this->unk160;
    if (temp_f0 >= 0.05f) {
        this->unk160 = temp_f0 - 0.05f;
    } else {
        this->actionFunc = func_80BD73D0;
        this->actor.draw = func_80BD7768;
    }
    globalCtx->envCtx.unk_C3 = 0x19;
}

void func_80BD71BC(BgIknvDoukutu *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a0;

    globalCtx->envCtx.unk_C3 = 0x18;
    temp_a0 = globalCtx;
    globalCtx = globalCtx;
    if ((func_800EE29C(temp_a0, (u32) this->unk15E) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, (u32) this->unk15E)]->unk0 == 2)) {
        this->actionFunc = func_80BD716C;
        this->actor.draw = func_80BD7538;
    }
}

void func_80BD7250(BgIknvDoukutu *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    temp_f0 = this->actor.home.pos.y + 68.0f;
    this->actor.world.pos.y += 1.7f;
    if (temp_f0 < this->actor.world.pos.y) {
        this->actor.world.pos.y = temp_f0;
        this->actionFunc = func_80BD73D0;
    }
    func_8019F128(0x205EU);
}

void func_80BD72BC(BgIknvDoukutu *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    u16 temp_a1;
    u16 temp_a1_2;

    temp_a1 = this->unk15E;
    this = this;
    if (func_800EE29C(globalCtx, (u32) temp_a1) != 0) {
        temp_a1_2 = this->unk15E;
        this = this;
        if (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, (u32) temp_a1_2)]->unk0 == 3) {
            this->actionFunc = func_80BD7250;
        }
    }
    temp_f0 = this->unk160;
    if (temp_f0 < 0.95f) {
        this->unk160 = temp_f0 + 0.05f;
    }
}

void func_80BD7360(BgIknvDoukutu *this, GlobalContext *globalCtx) {
    if ((func_800EE29C(globalCtx, (u32) this->unk15E) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, (u32) this->unk15E)]->unk0 == 2)) {
        this->actionFunc = func_80BD72BC;
    }
}

void func_80BD73D0(BgIknvDoukutu *this, GlobalContext *globalCtx) {

}

void BgIknvDoukutu_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgIknvDoukutu *this = (BgIknvDoukutu *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgIknvDoukutu_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgIknvDoukutu *this = (BgIknvDoukutu *) thisx;
    Gfx *sp28;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_s0;

    temp_s0 = globalCtx->state.gfxCtx;
    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_0600F1C0));
    Scene_SetRenderModeXlu(globalCtx, 0, 1U);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp28 = temp_v0;
    sp28->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp24 = temp_v0_2;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    func_8012C28C(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0xFF;
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_0600DDD8;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = 0xD72A3778;
    temp_v0_5->words.w0 = 0xFB000000;
    temp_v0_6 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w1 = (u32) &D_0600DB60;
    temp_v0_6->words.w0 = 0xDE000000;
}

void func_80BD7538(Actor *this, GlobalContext *globalCtx) {
    f32 sp54;
    f32 sp44;
    f32 sp40;
    s16 sp3E;
    s16 sp3C;
    Gfx *sp38;
    f32 sp24;
    Camera *temp_v1;
    Camera *temp_v1_2;
    Gfx *temp_a1;
    Gfx *temp_a1_2;
    Gfx *temp_a1_3;
    Gfx *temp_a1_4;
    Gfx *temp_a1_5;
    Gfx *temp_a1_6;
    GraphicsContext *temp_s1;

    func_80BD7768(this, globalCtx);
    temp_s1 = globalCtx->state.gfxCtx;
    temp_v1 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    sp3E = Math_Vec3f_Yaw(&temp_v1->eye, &temp_v1->at);
    temp_v1_2 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    sp3C = (s16) -Math_Vec3f_Pitch(&temp_v1_2->eye, &temp_v1_2->at);
    sp24 = Math_SinS(sp3E);
    sp40 = Math_CosS(sp3C) * (-100.0f * sp24);
    sp44 = Math_SinS(sp3C) * -100.0f;
    sp24 = Math_CosS(sp3E);
    SysMatrix_InsertTranslation(sp40, sp44, Math_CosS(sp3C) * (-100.0f * sp24), 1);
    sp54 = this->unk160;
    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_0600F1C0));
    temp_a1 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_a1 + 8;
    temp_a1->words.w0 = 0xDA380003;
    sp38 = temp_a1;
    sp38->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_a1_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_a1_2 + 8;
    func_8012C304(temp_a1_2);
    Scene_SetRenderModeXlu(globalCtx, 1, 2U);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_a1_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_a1_3 + 8;
    temp_a1_3->words.w0 = 0xFB000000;
    temp_a1_3->words.w1 = (s32) (255.0f * sp54) & 0xFF;
    temp_a1_4 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_a1_4 + 8;
    temp_a1_4->words.w1 = (u32) &D_0600DDD8;
    temp_a1_4->words.w0 = 0xDE000000;
    temp_a1_5 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_a1_5 + 8;
    temp_a1_5->words.w1 = ((s32) (120.0f * sp54) & 0xFF) | 0xD72A3700;
    temp_a1_5->words.w0 = 0xFB000000;
    temp_a1_6 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_a1_6 + 8;
    temp_a1_6->words.w1 = (u32) &D_0600DB60;
    temp_a1_6->words.w0 = 0xDE000000;
}

void func_80BD7768(Actor *this, GlobalContext *globalCtx) {
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GlobalContext *temp_a3;
    GraphicsContext *temp_s0;

    temp_a3 = globalCtx;
    temp_s0 = temp_a3->state.gfxCtx;
    globalCtx = temp_a3;
    Scene_SetRenderModeXlu(temp_a3, 0, 1U);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_v0;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    func_8012C28C(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0xFF;
    temp_v0_2->words.w0 = 0xFB000000;
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = (u32) &D_06010D98;
}

void func_80BD7820(Actor *this, GlobalContext *globalCtx) {
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_s0;

    temp_s0 = globalCtx->state.gfxCtx;
    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_06012728));
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_v0;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) &D_06012700;
}

void func_80BD78C4(Actor *this, GlobalContext *globalCtx) {
    f32 sp30;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_s0;

    sp30 = this->unk160;
    temp_s0 = globalCtx->state.gfxCtx;
    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_060117A0));
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_v0;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFA000080;
    temp_v0_2->words.w1 = ((s32) (140.0f * sp30) & 0xFF) | ~0xFF;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) &D_060115E0;
    temp_v0_3->words.w0 = 0xDE000000;
}

