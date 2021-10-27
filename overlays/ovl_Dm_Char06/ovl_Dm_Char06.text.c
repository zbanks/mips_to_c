typedef struct DmChar06 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad_144[0x14C];                /* maybe part of actor[2]? */
    /* 0x290 */ void (*actionFunc)(DmChar06 *, GlobalContext *);
    /* 0x294 */ char pad_294[0xC];                  /* maybe part of actionFunc[4]? */
    /* 0x2A0 */ u8 unk_2A0;                         /* inferred */
    /* 0x2A1 */ char pad_2A1[0x3];                  /* maybe part of unk_2A0[4]? */
} DmChar06;                                         /* size = 0x2A4 */

struct _mips2c_stack_DmChar06_Destroy {};           /* size 0x0 */

struct _mips2c_stack_DmChar06_Draw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x18];
};                                                  /* size = 0x40 */

struct _mips2c_stack_DmChar06_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_DmChar06_SetupAction {};       /* size 0x0 */

struct _mips2c_stack_DmChar06_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AAE6F0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

f32 func_800F5A8C(u16, u16, u16, GlobalContext *);  /* extern */
extern ? D_060013A8;
extern void D_06006868;

void DmChar06_SetupAction(DmChar06 *this, void (*actionFunc)(DmChar06 *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

void DmChar06_Init(Actor *thisx, GlobalContext *globalCtx) {
    DmChar06 *this = (DmChar06 *) thisx;
    gSaveContext.weekEventReg[33] |= 0x80;
    Actor_SetScale((Actor *) this, 1.0f);
    this->unk_2A0 = 0xFF;
    DmChar06_SetupAction(this, func_80AAE6F0);
}

void DmChar06_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmChar06 *this = (DmChar06 *) thisx;

}

void func_80AAE6F0(DmChar06 *this, GlobalContext *globalCtx) {
    CsCmdActorAction *temp_v0_2;
    CsCmdActorAction *temp_v1;
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    u16 temp_a0_3;
    u16 temp_a2;
    u32 temp_v0;

    temp_a0 = globalCtx;
    globalCtx = globalCtx;
    if ((func_800EE29C(temp_a0, 0x1CFU) != 0) && (temp_a0_2 = globalCtx, globalCtx = globalCtx, temp_v0 = func_800EE200(temp_a0_2, 0x1CFU), temp_v1 = globalCtx->csCtx.npcActions[temp_v0], temp_a2 = globalCtx->csCtx.frames, (((s32) temp_a2 < (s32) temp_v1->startFrame) == 0)) && ((s32) temp_v1->endFrame >= (s32) temp_a2)) {
        temp_a0_3 = temp_v1->unk0;
        if (temp_a0_3 == 1) {
            this->unk_2A0 = 0xFF;
            return;
        }
        if (temp_a0_3 == 2) {
            temp_v0_2 = globalCtx->csCtx.npcActions[temp_v0];
            this->unk_2A0 = (u8) (u32) (255.0f * (1.0f - func_800F5A8C(temp_v0_2->endFrame, temp_v0_2->startFrame, temp_a2, globalCtx)));
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void DmChar06_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmChar06 *this = (DmChar06 *) thisx;
    this->actionFunc(this, globalCtx);
}

void DmChar06_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    DmChar06 *this = (DmChar06 *) thisx;

    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_06006868));
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    Scene_SetRenderModeXlu(globalCtx, 1, 2U);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0[1];
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xFB000000;
    temp_v0_2->words.w1 = (u32) this->unk_2A0;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDA380003;
    sp24 = temp_v0_3;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_4[1];
    temp_v0_4->words.w1 = (u32) &D_060013A8;
    temp_v0_4->words.w0 = 0xDE000000;
}
