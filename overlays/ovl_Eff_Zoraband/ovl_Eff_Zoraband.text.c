extern ? D_06000180;
extern ? D_060002A8;
extern void D_06000F38;

typedef struct EffZoraband {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s16 unk144;                        /* inferred */
    /* 0x0146 */ u16 unk146;                        /* inferred */
    /* 0x0148 */ void (*actionFunc)(EffZoraband *, GlobalContext *);
} EffZoraband;                                      /* size 0x14C */

void EffZoraband_Init(Actor *thisx, GlobalContext *globalCtx) {
    EffZoraband *this = (EffZoraband *) thisx;
    Actor_SetScale(&this->actor, 1.0f);
    this->actionFunc = func_80C07790;
    this->unk144 = 0;
    this->actor.shape.rot.z = 0;
}

void EffZoraband_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EffZoraband *this = (EffZoraband *) thisx;

}

void func_80C07790(EffZoraband *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    if (func_800EE29C(globalCtx, 0x20FU) != 0) {
        if (((this->actor.params & 0xF) + 2) == globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x20FU)]->unk0) {
            this->unk146 |= 2;
        }
        if (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x20FU)]->unk0 == 7) {
            this->actor.draw = NULL;
        } else {
            this->actor.draw = EffZoraband_Draw;
        }
    }
    if ((this->actor.home.rot.z != 0) && (this->actor.draw != 0)) {
        func_800B9010(&this->actor, 0x21A8U);
    }
    if ((this->unk146 & 2) != 0) {
        temp_v0 = this->unk144;
        if ((s32) temp_v0 < 0xF0) {
            this->unk144 = temp_v0 + 0x19;
            return;
        }
        this->unk144 = 0xFF;
        // Duplicate return node #13. Try simplifying control flow for better match
    }
}

void EffZoraband_Update(Actor *thisx, GlobalContext *globalCtx) {
    EffZoraband *this = (EffZoraband *) thisx;
    this->actionFunc(this, globalCtx);
}

void EffZoraband_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EffZoraband *this = (EffZoraband *) thisx;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    if (this->unk144 != 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        temp_s0 = temp_a0;
        func_8012C2DC(temp_a0);
        Matrix_RotateY((s16) (func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000), 1U);
        AnimatedMat_DrawXlu(globalCtx, Lib_SegmentedToVirtual(&D_06000F38));
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp24 = temp_v0;
        sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        if (this->actor.home.rot.z != 0) {
            temp_v0_2 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xFA000080;
            temp_v0_2->words.w1 = (this->unk144 & 0xFF) | 0xFFFF6400;
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = 0xFFC800FF;
            temp_v0_3->words.w0 = 0xFB000000;
        } else {
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xFA000080;
            temp_v0_4->words.w1 = (this->unk144 & 0xFF) | 0x64FF00;
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w1 = 0x64FF;
            temp_v0_5->words.w0 = 0xFB000000;
        }
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w1 = (u32) &D_06000180;
        temp_v0_6->words.w0 = 0xDE000000;
        temp_v0_7 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xFA0000FF;
        temp_v0_7->words.w1 = (this->unk144 & 0xFF) | 0xC8FFFF00;
        temp_v0_8 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_8 + 8;
        temp_v0_8->words.w1 = 0x64FFFF;
        temp_v0_8->words.w0 = 0xFB000000;
        temp_v0_9 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_9 + 8;
        temp_v0_9->words.w1 = (u32) &D_060002A8;
        temp_v0_9->words.w0 = 0xDE000000;
    }
}

