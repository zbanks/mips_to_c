struct _mips2c_stack_EnMm2_Destroy {};              /* size 0x0 */

struct _mips2c_stack_EnMm2_Draw {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnMm2_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnMm2_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A2080 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A20FC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

static ? D_809A29D8;                                /* unable to generate initializer */

void EnMm2_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnMm2 *this = (EnMm2 *) thisx;
    Actor_SetScale((Actor *) this, 0.015f);
    this->actionFunc = func_809A20FC;
}

void EnMm2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnMm2 *this = (EnMm2 *) thisx;

}

void func_809A2080(EnMm2 *this, GlobalContext *globalCtx) {
    u8 temp_v0;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 != 2) {
        if ((temp_v0 == 5) && (func_80147624(globalCtx) != 0)) {
            func_801477B4(globalCtx);
            this->actionFunc = func_809A20FC;
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return;
    }
    this->actionFunc = func_809A20FC;
}

void func_809A20FC(EnMm2 *this, GlobalContext *globalCtx) {
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        func_801518B0(globalCtx, 0x277BU, (Actor *) this);
        this->actionFunc = func_809A2080;
        return;
    }
    if ((this->actor.xzDistToPlayer < 60.0f) && (Actor_IsLinkFacingActor((Actor *) this, 0x3000, globalCtx) != 0)) {
        func_800B8614((Actor *) this, globalCtx, 110.0f);
    }
}

void EnMm2_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnMm2 *this = (EnMm2 *) thisx;
    this->actionFunc(this, globalCtx);
}

void EnMm2_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    EnMm2 *this = (EnMm2 *) thisx;

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
    temp_v0_2->words.w1 = (u32) &D_809A29D8;
    temp_v0_2->words.w0 = 0xDE000000;
}
