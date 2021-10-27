typedef struct EffZoraband {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s16 unk_144;                        /* inferred */
    /* 0x146 */ u16 unk_146;                        /* inferred */
    /* 0x148 */ void (*actionFunc)(EffZoraband *, GlobalContext *);
} EffZoraband;                                      /* size = 0x14C */

struct _mips2c_stack_EffZoraband_Destroy {};        /* size 0x0 */

struct _mips2c_stack_EffZoraband_Draw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EffZoraband_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EffZoraband_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C07790 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

extern ? D_06000180;
extern ? D_060002A8;
extern void D_06000F38;

void EffZoraband_Init(Actor *thisx, GlobalContext *globalCtx) {
    EffZoraband *this = (EffZoraband *) thisx;
    Actor_SetScale((Actor *) this, 1.0f);
    this->actionFunc = func_80C07790;
    this->unk_144 = 0;
    this->actor.shape.rot.z = 0;
}

void EffZoraband_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EffZoraband *this = (EffZoraband *) thisx;

}

void func_80C07790(EffZoraband *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    if (func_800EE29C(globalCtx, 0x20FU) != 0) {
        if (((this->actor.params & 0xF) + 2) == globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x20FU)]->unk0) {
            this->unk_146 |= 2;
        }
        if (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x20FU)]->unk0 == 7) {
            this->actor.draw = NULL;
        } else {
            this->actor.draw = EffZoraband_Draw;
        }
    }
    if ((this->actor.home.rot.z != 0) && (this->actor.draw != 0)) {
        func_800B9010((Actor *) this, 0x21A8U);
    }
    if ((this->unk_146 & 2) != 0) {
        temp_v0 = this->unk_144;
        if ((s32) temp_v0 < 0xF0) {
            this->unk_144 = temp_v0 + 0x19;
            return;
        }
        this->unk_144 = 0xFF;
        /* Duplicate return node #13. Try simplifying control flow for better match */
    }
}

void EffZoraband_Update(Actor *thisx, GlobalContext *globalCtx) {
    EffZoraband *this = (EffZoraband *) thisx;
    this->actionFunc(this, globalCtx);
}

void EffZoraband_Draw(Actor *thisx, GlobalContext *globalCtx) {
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
    EffZoraband *this = (EffZoraband *) thisx;

    if (this->unk_144 != 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        temp_s0 = temp_a0;
        func_8012C2DC(temp_a0);
        Matrix_RotateY((s16) (func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000), 1U);
        AnimatedMat_DrawXlu(globalCtx, Lib_SegmentedToVirtual(&D_06000F38));
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDA380003;
        sp24 = temp_v0;
        sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        if (this->actor.home.rot.z != 0) {
            temp_v0_2 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_2[1];
            temp_v0_2->words.w0 = 0xFA000080;
            temp_v0_2->words.w1 = (this->unk_144 & 0xFF) | 0xFFFF6400;
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_3[1];
            temp_v0_3->words.w1 = 0xFFC800FF;
            temp_v0_3->words.w0 = 0xFB000000;
        } else {
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_4[1];
            temp_v0_4->words.w0 = 0xFA000080;
            temp_v0_4->words.w1 = (this->unk_144 & 0xFF) | 0x64FF00;
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_5[1];
            temp_v0_5->words.w1 = 0x64FF;
            temp_v0_5->words.w0 = 0xFB000000;
        }
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_6[1];
        temp_v0_6->words.w1 = (u32) &D_06000180;
        temp_v0_6->words.w0 = 0xDE000000;
        temp_v0_7 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_7[1];
        temp_v0_7->words.w0 = 0xFA0000FF;
        temp_v0_7->words.w1 = (this->unk_144 & 0xFF) | 0xC8FFFF00;
        temp_v0_8 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_8[1];
        temp_v0_8->words.w1 = 0x64FFFF;
        temp_v0_8->words.w0 = 0xFB000000;
        temp_v0_9 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_9[1];
        temp_v0_9->words.w1 = (u32) &D_060002A8;
        temp_v0_9->words.w0 = 0xDE000000;
    }
}
