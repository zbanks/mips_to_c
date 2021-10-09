void func_80B2815C(BgBotihasira *, GlobalContext *); /* static */
extern ? D_06000638;
extern CollisionHeader D_06001BD8;
static ColliderCylinderInit D_80B282F0 = {
    {9, 0, 9, 0x39, 0x10, 1},
    {2, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x1B, 0x50, 0, {0, 0, 0}},
};

typedef struct BgBotihasira {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ void (*actionFunc)(BgBotihasira *, GlobalContext *);
    /* 0x0160 */ ColliderCylinder unk160;           /* inferred */
} BgBotihasira;                                     /* size 0x1AC */

void BgBotihasira_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgBotihasira *this = (BgBotihasira *) thisx;
    CollisionHeader *sp24;

    sp24 = NULL;
    if (this->actor.params == 0) {
        BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
        BgCheck_RelocateMeshHeader(&D_06001BD8, &sp24);
        this->unk144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp24);
    } else {
        Collider_InitAndSetCylinder(globalCtx, &this->unk160, &this->actor, &D_80B282F0);
    }
    this->actionFunc = func_80B2815C;
    this->actor.scale.x = 0.1f;
    this->actor.scale.y = 0.1f;
    this->actor.scale.z = 0.1f;
}

void BgBotihasira_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgBotihasira *this = (BgBotihasira *) thisx;
    if (this->actor.params == 0) {
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
    }
}

void func_80B2815C(BgBotihasira *arg0, GlobalContext *arg1) {

}

void BgBotihasira_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgBotihasira *this = (BgBotihasira *) thisx;
    CollisionCheckContext *sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;

    this->actionFunc(this, globalCtx);
    if (this->actor.params != 0) {
        this->actor.world.pos.x = (Math_SinS(this->actor.world.rot.y) * -27.0f) + this->actor.home.pos.x;
        temp_a1 = &this->unk160;
        this->actor.world.pos.z = (Math_CosS(this->actor.world.rot.y) * 7.0f) + this->actor.home.pos.z;
        sp20 = temp_a1;
        Collider_UpdateCylinder(&this->actor, temp_a1);
        temp_a1_2 = &globalCtx->colChkCtx;
        sp24 = temp_a1_2;
        CollisionCheck_SetAC(globalCtx, temp_a1_2, &sp20->base);
        CollisionCheck_SetOC(globalCtx, temp_a1_2, &sp20->base);
        Math_Vec3f_Copy(&this->actor.world.pos, &this->actor.home.pos);
    }
}

void BgBotihasira_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgBotihasira *this = (BgBotihasira *) thisx;
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
    temp_v0_2->words.w1 = (u32) &D_06000638;
    temp_v0_2->words.w0 = 0xDE000000;
}

