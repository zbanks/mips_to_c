typedef struct BgBotihasira {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ void (*actionFunc)(BgBotihasira *, GlobalContext *);
    /* 0x160 */ ColliderCylinder unk160;            /* inferred */
} BgBotihasira;                                     /* size = 0x1AC */

struct _mips2c_stack_BgBotihasira_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgBotihasira_Draw {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_BgBotihasira_Init {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ CollisionHeader *sp24;               /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgBotihasira_Update {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ CollisionCheckContext *sp24;         /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B2815C {};              /* size 0x0 */

void func_80B2815C(BgBotihasira *, GlobalContext *); /* static */
extern ? D_06000638;
extern CollisionHeader D_06001BD8;
static ColliderCylinderInit D_80B282F0 = {
    {9, 0, 9, 0x39, 0x10, 1},
    {2, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x1B, 0x50, 0, {0, 0, 0}},
};

void BgBotihasira_Init(BgBotihasira *this, GlobalContext *globalCtx) {
    CollisionHeader *sp24;
    BgBotihasira *this = (BgBotihasira *) thisx;

    sp24 = NULL;
    if (this->actor.params == 0) {
        BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
        BgCheck_RelocateMeshHeader(&D_06001BD8, &sp24);
        this->unk144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp24);
    } else {
        Collider_InitAndSetCylinder(globalCtx, &this->unk160, (Actor *) this, &D_80B282F0);
    }
    this->actionFunc = func_80B2815C;
    this->actor.scale.x = 0.1f;
    this->actor.scale.y = 0.1f;
    this->actor.scale.z = 0.1f;
}

void BgBotihasira_Destroy(BgBotihasira *this, GlobalContext *globalCtx) {
    BgBotihasira *this = (BgBotihasira *) thisx;
    if (this->actor.params == 0) {
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
    }
}

void func_80B2815C(BgBotihasira *arg0, GlobalContext *arg1) {

}

void BgBotihasira_Update(BgBotihasira *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    BgBotihasira *this = (BgBotihasira *) thisx;

    this->actionFunc(this, globalCtx);
    if (this->actor.params != 0) {
        this->actor.world.pos.x = (Math_SinS(this->actor.world.rot.y) * -27.0f) + this->actor.home.pos.x;
        temp_a1 = &this->unk160;
        this->actor.world.pos.z = (Math_CosS(this->actor.world.rot.y) * 7.0f) + this->actor.home.pos.z;
        sp20 = temp_a1;
        Collider_UpdateCylinder((Actor *) this, temp_a1);
        temp_a1_2 = &globalCtx->colChkCtx;
        sp24 = temp_a1_2;
        CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp20);
        CollisionCheck_SetOC(globalCtx, temp_a1_2, (Collider *) sp20);
        Math_Vec3f_Copy((Vec3f *) &this->actor.world, (Vec3f *) &this->actor.home);
    }
}

void BgBotihasira_Draw(BgBotihasira *this, GlobalContext *globalCtx) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    BgBotihasira *this = (BgBotihasira *) thisx;

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
