typedef struct BgF40Flift {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ void (*actionFunc)(BgF40Flift *, GlobalContext *);
    /* 0x160 */ s32 unk160;                         /* inferred */
} BgF40Flift;                                       /* size = 0x164 */

struct _mips2c_stack_BgF40Flift_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgF40Flift_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgF40Flift_Init {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_BgF40Flift_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D75F0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808D7714 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void func_808D75F0(BgF40Flift *, GlobalContext *);  /* static */
void func_808D7714(BgF40Flift *, GlobalContext *);  /* static */
extern Gfx D_06004038;
extern CollisionHeader D_06004240;
static InitChainEntry D_808D7830[4];                /* unable to generate initializer */

void BgF40Flift_Init(BgF40Flift *this, GlobalContext *globalCtx) {
    BgF40Flift *this = (BgF40Flift *) thisx;
    Actor_ProcessInitChain((Actor *) this, D_808D7830);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06004240);
    this->actor.params = 1;
    this->actionFunc = func_808D75F0;
}

void BgF40Flift_Destroy(BgF40Flift *this, GlobalContext *globalCtx) {
    BgF40Flift *this = (BgF40Flift *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_808D75F0(BgF40Flift *arg0, GlobalContext *arg1) {
    s32 temp_t9;
    s32 temp_v0;
    s32 phi_v0;

    if (arg0->actor.params == 1) {
        if (func_800CAF70((DynaPolyActor *) arg0) == 0) {
            goto block_3;
        }
        goto block_5;
    }
block_3:
    if ((arg0->actor.params == -1) && (func_800CAF70((DynaPolyActor *) arg0) == 0)) {
block_5:
        arg0->unk160 = 0x60;
        arg0->actionFunc = func_808D7714;
        return;
    }
    temp_v0 = arg0->unk160;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        arg0->unk160 = 0x30;
        phi_v0 = 0x30;
    }
    temp_t9 = phi_v0 - 1;
    arg0->unk160 = temp_t9;
    if (arg0->actor.params == 1) {
        arg0->actor.world.pos.y = (sin_rad((f32) temp_t9 * 0.1308997f) * 5.0f) + arg0->actor.home.pos.y;
        return;
    }
    arg0->actor.world.pos.y = (sin_rad((f32) arg0->unk160 * 0.1308997f) * 5.0f) + (926.8f + arg0->actor.home.pos.y);
}

void func_808D7714(BgF40Flift *arg0, GlobalContext *arg1) {
    s32 temp_t7;
    s32 temp_v0;

    temp_v0 = arg0->unk160;
    temp_t7 = temp_v0 - 1;
    if (temp_v0 != 0) {
        arg0->unk160 = temp_t7;
        arg0->actor.world.pos.y = (((cos_rad((f32) temp_t7 * 0.032724924f) * (f32) arg0->actor.params) + 1.0f) * 463.4f) + arg0->actor.home.pos.y;
        return;
    }
    arg0->actionFunc = func_808D75F0;
    arg0->actor.params = (s16) -(s32) arg0->actor.params;
}

void BgF40Flift_Update(BgF40Flift *this, GlobalContext *globalCtx) {
    BgF40Flift *this = (BgF40Flift *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgF40Flift_Draw(BgF40Flift *this, GlobalContext *globalCtx) {
    BgF40Flift *this = (BgF40Flift *) thisx;
    func_800BDFC0(globalCtx, &D_06004038);
}
