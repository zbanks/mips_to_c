typedef struct EffStk {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s16 unk_144;                        /* inferred */
    /* 0x146 */ s16 unk_146;                        /* inferred */
    /* 0x148 */ f32 unk_148;                        /* inferred */
    /* 0x14C */ void (*actionFunc)(EffStk *, GlobalContext *);
} EffStk;                                           /* size = 0x150 */

struct _mips2c_stack_EffStk_Destroy {};             /* size 0x0 */

struct _mips2c_stack_EffStk_Draw {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0xC];
};                                                  /* size = 0x68 */

struct _mips2c_stack_EffStk_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EffStk_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BF0DE0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

? func_800E01B8(f32 *, Camera *);                   /* extern */
void func_80BF0DE0(EffStk *, GlobalContext *);      /* static */
extern ? D_06008920;
extern ? D_06008A38;
extern void D_06009F60;

void EffStk_Init(Actor *thisx, GlobalContext *globalCtx) {
    EffStk *this = (EffStk *) thisx;
    Actor_SetScale((Actor *) this, 0.2f);
    this->actionFunc = func_80BF0DE0;
}

void EffStk_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EffStk *this = (EffStk *) thisx;

}

void func_80BF0DE0(EffStk *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s16 temp_v0_2;
    u16 temp_v1;

    if (func_800EE29C(arg1, 0x200U) != 0) {
        temp_v1 = arg1->csCtx.npcActions[func_800EE200(arg1, 0x200U)]->unk0;
        if (temp_v1 != 2) {
            if (temp_v1 != 3) {
                arg0->actor.draw = NULL;
                arg0->unk_146 = 0;
                arg0->unk_148 = 0.0f;
                return;
            }
            temp_v0 = arg0->unk_146;
            arg0->actor.draw = EffStk_Draw;
            if ((s32) temp_v0 < 0x3C00) {
                arg0->unk_146 = temp_v0 + 0x400;
                arg0->unk_148 = Math_SinS(arg0->unk_146) * -630.0f;
            }
            arg0->unk_144 += -1;
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return;
        }
        temp_v0_2 = arg0->unk_146;
        arg0->actor.draw = EffStk_Draw;
        if ((s32) temp_v0_2 < 0x3C00) {
            arg0->unk_146 = temp_v0_2 + 0x400;
            arg0->unk_148 = Math_SinS(arg0->unk_146) * -630.0f;
        }
        arg0->unk_144 += 1;
    }
}

void EffStk_Update(Actor *thisx, GlobalContext *globalCtx) {
    EffStk *this = (EffStk *) thisx;
    this->actionFunc(this, globalCtx);
}

void EffStk_Draw(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp50;
    f32 sp44;
    Gfx *sp38;
    Camera *temp_a1;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    EffStk *this = (EffStk *) thisx;

    temp_a1 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    sp50.unk_0 = temp_a1->eye.x;
    sp50.unk_4 = (f32) temp_a1->eye.y;
    sp50.unk_8 = (f32) temp_a1->eye.z;
    func_800E01B8(&sp44, temp_a1);
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    SysMatrix_InsertTranslation(sp50 + sp44, sp54 + sp48, sp58 + sp4C, 0);
    Matrix_Scale(0.2f, 0.2f, 0.2f, 1);
    SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
    SysMatrix_InsertTranslation(0.0f, 0.0f, this->unk_148, 1);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp38 = temp_v0;
    sp38->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    AnimatedMat_DrawAlphaStep(globalCtx, Lib_SegmentedToVirtual(&D_06009F60), 1.0f, (u32) this->unk_144);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0x80;
    temp_v0_2->words.w0 = 0xE3001801;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0x20;
    temp_v0_3->words.w0 = 0xE3001A01;
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_06008920;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) &D_06008A38;
    temp_v0_5->words.w0 = 0xDE000000;
}
