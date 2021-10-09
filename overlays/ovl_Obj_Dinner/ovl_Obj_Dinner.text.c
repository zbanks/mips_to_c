extern ? D_060011E0;



void ObjDinner_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjDinner *this = (ObjDinner *) thisx;
    if ((gSaveContext.isNight != 1) || ((((s32) gSaveContext.day % 5) == 3) && ((gSaveContext.weekEventReg[22] & 1) != 0))) {
        Actor_MarkForDeath(&this->actor);
    }
    Actor_SetScale(&this->actor, 0.1f);
}

void ObjDinner_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjDinner *this = (ObjDinner *) thisx;

}

void ObjDinner_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjDinner *this = (ObjDinner *) thisx;

}

void ObjDinner_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjDinner *this = (ObjDinner *) thisx;
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

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

