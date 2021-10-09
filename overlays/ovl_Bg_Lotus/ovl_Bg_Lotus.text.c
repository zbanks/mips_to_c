struct _mips2c_stack_BgLotus_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgLotus_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgLotus_Init {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_BgLotus_Update {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ WaterBox *sp2C;                      /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AD6830 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD68DC {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AD6A88 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD6B68 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void func_80AD6830(BgLotus *arg0, f32, f32, BgLotus *); /* static */
void func_80AD68DC(BgLotus *, GlobalContext *);     /* static */
void func_80AD6A88(BgLotus *, GlobalContext *);     /* static */
void func_80AD6B68(BgLotus *, GlobalContext *);     /* static */
extern Gfx D_06000040;
extern CollisionHeader D_06000A20;
static InitChainEntry D_80AD6D10;                   /* unable to generate initializer */

void BgLotus_Init(BgLotus *this, GlobalContext *globalCtx) {
    s32 sp2C;
    BgLotus *this = (BgLotus *) thisx;

    Actor_ProcessInitChain((Actor *) this, &D_80AD6D10);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000A20);
    this->dyna.actor.floorHeight = func_800C411C(&globalCtx->colCtx, &this->dyna.actor.floorPoly, &sp2C, (Actor *) this, (Vec3f *) &this->dyna.actor.world);
    this->timer2 = 0x60;
    this->dyna.actor.world.rot.y = (s16) (Rand_Next() >> 0x10);
    this->actionFunc = func_80AD68DC;
}

void BgLotus_Destroy(BgLotus *this, GlobalContext *globalCtx) {
    BgLotus *this = (BgLotus *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void func_80AD6830(BgLotus *arg0) {
    f32 temp_f2;
    f32 temp_f8;

    if (arg0->dyna.actor.params == 0) {
        temp_f2 = sin_rad((f32) arg0->timer * 0.7853982f) * ((0.014f * ((f32) arg0->timer / 8.0f)) + 0.01f);
        temp_f8 = (1.0f - temp_f2) * 0.1f;
        arg0->dyna.actor.scale.x = (1.0f + temp_f2) * 0.1f;
        arg0->dyna.actor.scale.z = temp_f8;
    }
}

void func_80AD68DC(BgLotus *arg0, GlobalContext *arg1) {
    f32 sp34;
    PosRot *sp2C;
    PosRot *temp_a1;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0;

    arg0->timer2 += -1;
    sp34 = sin_rad((f32) arg0->timer2 * 0.06544985f) * 6.0f;
    if (arg0->dyna.actor.params == 0) {
        arg0->dyna.actor.world.pos.x = (Math_SinS(arg0->dyna.actor.world.rot.y) * sp34) + arg0->dyna.actor.home.pos.x;
        arg0->dyna.actor.world.pos.z = (Math_CosS(arg0->dyna.actor.world.rot.y) * sp34) + arg0->dyna.actor.home.pos.z;
        if (arg0->timer2 == 0) {
            arg0->timer2 = 0x60;
            arg0->dyna.actor.world.rot.y += Rand_Next() >> 0x12;
        }
    }
    temp_f0 = arg0->height;
    temp_f2 = arg0->dyna.actor.floorHeight;
    if (temp_f0 < temp_f2) {
        arg0->dyna.actor.world.pos.y = temp_f2;
        goto block_12;
    }
    arg0->dyna.actor.world.pos.y = temp_f0;
    if (func_800CAF70((DynaPolyActor *) arg0) != 0) {
        temp_a1 = &arg0->dyna.actor.world;
        if (arg0->hasSpawnedRipples == 0) {
            sp2C = temp_a1;
            EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_a1, 0x3E8, 0x578, (s16) 0);
            EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_a1, 0x3E8, 0x578, (s16) 8);
            arg0->timer = 0x28;
        }
        if (gSaveContext.playerForm != 3) {
            arg0->timer = 0x28;
            arg0->dyna.actor.flags |= 0x10;
            arg0->actionFunc = func_80AD6A88;
            return;
        }
        arg0->hasSpawnedRipples = 1;
        goto block_12;
    }
    arg0->hasSpawnedRipples = 0;
block_12:
    temp_v0 = arg0->timer;
    if ((s32) temp_v0 > 0) {
        arg0->timer = temp_v0 - 1;
    }
    func_80AD6830(arg0);
}

void func_80AD6A88(BgLotus *arg0, GlobalContext *arg1) {
    Vec3f *temp_a0;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0;
    s32 temp_a2;

    temp_f2 = arg0->height;
    temp_a0 = &arg0->dyna.actor.scale;
    if (temp_f2 < arg0->dyna.actor.world.pos.y) {
        arg0->dyna.actor.world.pos.y = temp_f2;
    }
    temp_f2_2 = arg0->dyna.actor.floorHeight;
    arg0->dyna.actor.world.pos.y -= 1.0f;
    if (arg0->dyna.actor.world.pos.y <= temp_f2_2) {
        arg0->dyna.actor.world.pos.y = temp_f2_2;
        arg0->timer = 0;
    }
    temp_v0 = arg0->timer;
    if ((s32) temp_v0 > 0) {
        arg0->timer = temp_v0 - 1;
        func_80AD6830(arg0, 0.0f, 0.0050000004f, arg0);
        return;
    }
    arg0 = arg0;
    if (Math_StepToF((f32 *) temp_a0, 0.0f, 0.0050000004f) != 0) {
        arg0->dyna.actor.draw = NULL;
        arg0->timer = 0x64;
        temp_a2 = arg0->dyna.bgId;
        arg0 = arg0;
        func_800C62BC(arg1, &arg1->colCtx.dyna, temp_a2);
        arg0->actionFunc = func_80AD6B68;
    }
    arg0->dyna.actor.scale.z = arg0->dyna.actor.scale.x;
}

void func_80AD6B68(BgLotus *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0;
    s32 temp_a2;

    temp_v0 = arg0->timer;
    if ((s32) temp_v0 > 0) {
        arg0->timer = temp_v0 - 1;
        return;
    }
    if ((arg0->dyna.actor.xzDistToPlayer > 100.0f) && (arg0->dyna.actor.projectedPos.z < 0.0f)) {
        arg0->dyna.actor.draw = BgLotus_Draw;
        temp_a2 = arg0->dyna.bgId;
        arg0 = arg0;
        func_800C6314(arg1, &arg1->colCtx.dyna, temp_a2);
        Actor_SetScale((Actor *) arg0, 0.1f);
        temp_f0 = arg0->height;
        temp_f2 = arg0->dyna.actor.floorHeight;
        if (temp_f0 < temp_f2) {
            arg0->dyna.actor.world.pos.y = temp_f2;
        } else {
            arg0->dyna.actor.world.pos.y = temp_f0;
        }
        arg0->dyna.actor.flags &= -0x11;
        arg0->timer2 = 0x60;
        arg0->actionFunc = func_80AD68DC;
        arg0->dyna.actor.world.pos.x = arg0->dyna.actor.home.pos.x;
        arg0->dyna.actor.world.pos.z = arg0->dyna.actor.home.pos.z;
    }
}

void BgLotus_Update(BgLotus *this, GlobalContext *globalCtx) {
    WaterBox *sp2C;
    BgLotus *this = (BgLotus *) thisx;

    func_800CA1E8(globalCtx, &globalCtx->colCtx, this->dyna.actor.world.pos.x, this->dyna.actor.world.pos.z, &this->height, &sp2C);
    this->actionFunc(this, globalCtx);
}

void BgLotus_Draw(BgLotus *this, GlobalContext *globalCtx) {
    BgLotus *this = (BgLotus *) thisx;
    func_800BDFC0(globalCtx, &D_06000040);
}
