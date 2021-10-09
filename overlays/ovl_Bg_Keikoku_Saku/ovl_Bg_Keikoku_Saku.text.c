typedef struct BgKeikokuSaku {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ void (*actionFunc)(BgKeikokuSaku *, GlobalContext *);
    /* 0x160 */ s16 unk160;                         /* inferred */
    /* 0x162 */ s16 unk162;                         /* inferred */
} BgKeikokuSaku;                                    /* size = 0x164 */

struct _mips2c_stack_BgKeikokuSaku_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgKeikokuSaku_Draw {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_BgKeikokuSaku_Init {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ CollisionHeader *sp24;               /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgKeikokuSaku_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A5389C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A538E0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A53994 {};              /* size 0x0 */

void func_80A5389C(BgKeikokuSaku *, GlobalContext *); /* static */
void func_80A538E0(BgKeikokuSaku *, GlobalContext *); /* static */
void func_80A53994(BgKeikokuSaku *, GlobalContext *); /* static */
extern ? D_06001640;
extern CollisionHeader D_06002300;

void BgKeikokuSaku_Init(BgKeikokuSaku *this, GlobalContext *globalCtx) {
    CollisionHeader *sp24;
    BgKeikokuSaku *this = (BgKeikokuSaku *) thisx;

    sp24 = NULL;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck_RelocateMeshHeader(&D_06002300, &sp24);
    this->unk144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp24);
    this->unk160 = this->actor.params & 0x7F;
    if (Flags_GetSwitch(globalCtx, (s32) this->unk160) != 0) {
        this->actor.world.pos.z = 2659.0f;
        return;
    }
    this->actionFunc = func_80A5389C;
}

void BgKeikokuSaku_Destroy(BgKeikokuSaku *this, GlobalContext *globalCtx) {
    BgKeikokuSaku *this = (BgKeikokuSaku *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_80A5389C(BgKeikokuSaku *arg0, GlobalContext *arg1) {
    if (Flags_GetSwitch(arg1, (s32) arg0->unk160) != 0) {
        arg0->actionFunc = func_80A538E0;
    }
}

void func_80A538E0(BgKeikokuSaku *arg0, GlobalContext *arg1) {
    BgKeikokuSaku *temp_a0;

    Audio_PlayActorSound2((Actor *) arg0, 0x2067U);
    temp_a0 = arg0;
    temp_a0->actor.world.pos.z -= 2.0f + (f32) gGameInfo->data[2408];
    if (temp_a0->actor.world.pos.z < ((f32) gGameInfo->data[2409] + 2660.0f)) {
        arg0 = temp_a0;
        Audio_PlayActorSound2((Actor *) temp_a0, 0x280EU);
        arg0->unk162 = 0x1E;
        arg0->actionFunc = func_80A53994;
    }
}

void func_80A53994(BgKeikokuSaku *arg0, GlobalContext *arg1) {
    if (arg0->unk162 == 0) {
        arg0->actionFunc = func_80A5389C;
    }
}

void BgKeikokuSaku_Update(BgKeikokuSaku *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    BgKeikokuSaku *this = (BgKeikokuSaku *) thisx;

    temp_v0 = this->unk162;
    if (temp_v0 != 0) {
        this->unk162 = temp_v0 - 1;
    }
    this->actor.world.pos.x = (f32) gGameInfo->data[2405] + this->actor.home.pos.x;
    this->actor.world.pos.y = (f32) gGameInfo->data[2406] + this->actor.home.pos.y;
    this->actor.world.pos.z = (f32) gGameInfo->data[2407] + this->actor.home.pos.z;
    this->actor.scale.x = ((f32) gGameInfo->data[2410] / 1000.0f) + 0.1f;
    this->actor.scale.y = ((f32) gGameInfo->data[2411] / 1000.0f) + 0.1f;
    this->actor.scale.z = ((f32) gGameInfo->data[2412] / 1000.0f) + 0.1f;
    this->actionFunc(this, globalCtx);
}

void BgKeikokuSaku_Draw(BgKeikokuSaku *this, GlobalContext *globalCtx) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    BgKeikokuSaku *this = (BgKeikokuSaku *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp24 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = sp24->polyXlu.p;
    sp24->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = sp24;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = sp24->polyXlu.p;
    sp24->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06001640;
    temp_v0_2->words.w0 = 0xDE000000;
}
