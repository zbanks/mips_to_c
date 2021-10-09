struct _mips2c_stack_ObjDinner_Destroy {};          /* size 0x0 */

struct _mips2c_stack_ObjDinner_Draw {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_ObjDinner_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjDinner_Update {};           /* size 0x0 */

extern ? D_060011E0;

void ObjDinner_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjDinner *this = (ObjDinner *) thisx;
    if ((gSaveContext.isNight != 1) || ((((s32) gSaveContext.day % 5) == 3) && ((gSaveContext.weekEventReg[22] & 1) != 0))) {
        Actor_MarkForDeath((Actor *) this);
    }
    Actor_SetScale((Actor *) this, 0.1f);
}

void ObjDinner_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjDinner *this = (ObjDinner *) thisx;

}

void ObjDinner_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjDinner *this = (ObjDinner *) thisx;

}

void ObjDinner_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    ObjDinner *this = (ObjDinner *) thisx;

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
    temp_v0_2->words.w1 = (u32) &D_060011E0;
    temp_v0_2->words.w0 = 0xDE000000;
}
