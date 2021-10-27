struct _mips2c_stack_BgFuKaiten_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgFuKaiten_Draw {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_BgFuKaiten_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ CollisionHeader *sp24;               /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgFuKaiten_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgFuKaiten_UpdateHeight {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgFuKaiten_UpdateRotation {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void BgFuKaiten_UpdateHeight(BgFuKaiten *arg0);     /* static */
void BgFuKaiten_UpdateRotation(BgFuKaiten *arg0);   /* static */
extern ? D_060005D0;
extern CollisionHeader D_06002D30;

void BgFuKaiten_Init(Actor *thisx, GlobalContext *globalCtx) {
    CollisionHeader *sp24;
    BgFuKaiten *this = (BgFuKaiten *) thisx;

    sp24 = NULL;
    Actor_SetScale((Actor *) this, 1.0f);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 3);
    BgCheck_RelocateMeshHeader(&D_06002D30, &sp24);
    this->bg.bgId = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp24);
    this->rotationSpeed = 0;
    this->bounceSpeed = 0;
    this->bounce = 0;
    this->bouceHeight = 0.0f;
}

void BgFuKaiten_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgFuKaiten *this = (BgFuKaiten *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->bg.bgId);
}

void BgFuKaiten_UpdateRotation(BgFuKaiten *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->rotationSpeed;
    arg0->bg.actor.shape.rot.y += temp_v0;
    if ((s32) temp_v0 > 0) {
        func_8019FAD8(arg0 + 0xEC, 0x2076U, (f32) temp_v0 * 0.002f);
    }
}

void BgFuKaiten_UpdateHeight(BgFuKaiten *arg0) {
    s16 temp_a0;

    arg0->bounce += arg0->bounceSpeed;
    temp_a0 = arg0->bounce;
    arg0->bg.actor.world.pos.y = arg0->bg.actor.home.pos.y + arg0->elevation + arg0->bouceHeight;
    arg0 = arg0;
    arg0->bg.actor.world.pos.y -= arg0->bouceHeight * Math_CosS(temp_a0);
}

void BgFuKaiten_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgFuKaiten *this = (BgFuKaiten *) thisx;
    BgFuKaiten_UpdateRotation(this);
    BgFuKaiten_UpdateHeight(this);
}

void BgFuKaiten_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    BgFuKaiten *this = (BgFuKaiten *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp24 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp24->polyOpa.p;
    sp24->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp24 = sp24;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = sp24->polyOpa.p;
    sp24->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = (u32) &D_060005D0;
    temp_v0_2->words.w0 = 0xDE000000;
}
