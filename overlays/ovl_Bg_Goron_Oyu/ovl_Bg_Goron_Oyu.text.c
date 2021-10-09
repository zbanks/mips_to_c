typedef struct BgGoronOyu {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ void (*actionFunc)(BgGoronOyu *, GlobalContext *);
    /* 0x160 */ char pad_160[0x20];                 /* maybe part of actionFunc[9]? */
} BgGoronOyu;                                       /* size = 0x180 */

struct _mips2c_stack_BgGoronOyu_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgGoronOyu_Draw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgGoronOyu_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ CollisionHeader *sp24;               /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgGoronOyu_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B40080 {};              /* size 0x0 */

struct _mips2c_stack_func_80B4009C {};              /* size 0x0 */

struct _mips2c_stack_func_80B400C8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B40100 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B40160 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B401F8 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ Actor *sp3C;                         /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B40308 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ WaterBox *sp2C;                      /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B40394 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ CollisionContext *sp30;              /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0x2];
    /* 0x6E */ s16 sp6E;                            /* inferred */
};                                                  /* size = 0x70 */

void func_80B40080(Actor *arg0);                    /* static */
void func_80B4009C(BgGoronOyu *arg0);               /* static */
void func_80B400C8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B40100(Actor *arg0, ? arg1);            /* static */
void func_80B40160(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B401F8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B40308(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B40394(BgGoronOyu *arg0, GlobalContext *arg1); /* static */
extern ? D_06000080;
extern ? D_06000158;
extern void D_06000968;
extern CollisionHeader D_06000988;
static Vec3f D_80B40780 = {0.0f, 0.0f, 0.0f};

void func_80B40080(Actor *arg0) {
    arg0->unk_17E = 1;
    arg0->unk_15C = func_80B400C8;
}

void func_80B4009C(BgGoronOyu *arg0) {
    arg0->unk_17E = 0;
    arg0->actionFunc = func_80B40100;
    arg0->unk_17C = (s16) arg0->actor.cutscene;
    arg0->unk_164 = 20.0f;
}

void func_80B400C8(Actor *arg0, GlobalContext *arg1) {
    func_80B40308(arg0, arg1);
    func_80B401F8(arg0, arg1);
}

void func_80B40100(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a1;
    s16 temp_a0;
    s16 temp_a0_2;

    temp_a0 = arg0->unk_17C;
    arg0 = arg0;
    temp_a1 = arg0;
    if (ActorCutscene_GetCanPlayNext(temp_a0) != 0) {
        temp_a0_2 = temp_a1->unk_17C;
        arg0 = temp_a1;
        ActorCutscene_StartAndSetUnkLinkFields(temp_a0_2, temp_a1);
        arg0->unk_15C = func_80B40160;
        return;
    }
    ActorCutscene_SetIntentToPlay(temp_a1->unk_17C);
}

void func_80B40160(Actor *arg0, GlobalContext *arg1) {
    Math_StepToF(arg0 + 0x164, 0.0f, 0.2f);
    arg0->world.pos.y = arg0->home.pos.y - arg0->unk_164;
    func_80B40308(arg0, arg1);
    if (arg0->unk_164 <= 0.0f) {
        ActorCutscene_Stop(arg0->unk_17C);
        arg0->unk_164 = 0.0f;
        func_80B40080(arg0);
    }
    func_8019F1C0(&D_80B40780, 0x205EU);
}

void func_80B401F8(Actor *arg0, GlobalContext *arg1) {
    Actor *sp3C;
    f32 sp30;
    Actor *temp_v0;

    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->parent = NULL;
        return;
    }
    temp_v0 = arg1->actorCtx.actorList[2].first;
    sp3C = temp_v0;
    Math_Vec3f_DistXYZAndStoreDiff(arg0 + 0x168, (Vec3f *) &temp_v0->world, (Vec3f *) &sp30);
    if ((sp30 >= 0.0f) && (sp30 <= arg0->unk_174) && (sp38 >= 0.0f) && (sp38 <= arg0->unk_178) && (fabsf(sp34) < 100.0f) && (temp_v0->yDistToWater > 12.0f)) {
        func_800B8A1C(arg0, arg1, 0xBA, arg0->xzDistToPlayer, fabsf(arg0->yDistToPlayer));
    }
}

void func_80B40308(Actor *arg0, GlobalContext *arg1) {
    WaterBox *sp2C;
    f32 sp28;

    if (func_800CA1AC(arg1, arg1 + 0x830, arg0->world.pos.x, arg0->world.pos.z, &sp28, &sp2C) != 0) {
        Math_Vec3s_ToVec3f(arg0 + 0x168, (Vec3s *) sp2C);
        arg0->unk_174 = (f32) sp2C->xLength;
        arg0->unk_178 = (f32) sp2C->zLength;
    }
}

void func_80B40394(BgGoronOyu *arg0, GlobalContext *arg1) {
    s16 sp6E;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    s32 sp50;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    CollisionContext *sp30;
    CollisionContext *temp_a1;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f6;
    f32 temp_f6_2;

    if ((arg1->state.frames & 3) == 0) {
        sp60 = arg0->actor.world.pos.x;
        sp64 = arg0->actor.world.pos.y + 100.0f;
        sp40 = 0.0f;
        sp48 = 0.0f;
        sp44 = 2.5f;
        sp68 = arg0->actor.world.pos.z;
        temp_a1 = arg1 + 0x830;
        temp_f6 = Rand_ZeroOne() * 50.0f;
        sp30 = temp_a1;
        sp6E = -0xC8 - (s32) temp_f6;
        temp_f2 = arg0->unk_16C;
        if (func_800C4000(arg1, temp_a1, &sp50, (Vec3f *) &sp60) < temp_f2) {
            sp64 = temp_f2 + 10.0f;
            EffectSsIceSmoke_Spawn(arg1, (Vec3f *) &sp60, (Vec3f *) &sp40, &D_801D15B0, (s16) (s32) sp6E);
        }
        sp54 = (Rand_ZeroOne() * arg0->unk_174) + arg0->unk_168;
        sp58 = arg0->unk_16C + 100.0f;
        temp_f6_2 = Rand_ZeroOne() * arg0->unk_178;
        sp34 = 0.0f;
        sp3C = 0.0f;
        sp38 = 0.5f;
        sp5C = temp_f6_2 + arg0->unk_170;
        sp6E = -0xC8 - (s32) (Rand_ZeroOne() * 50.0f);
        temp_f2_2 = arg0->unk_16C;
        if (func_800C4000(arg1, sp30, &sp50, (Vec3f *) &sp54) < temp_f2_2) {
            sp58 = temp_f2_2 + 10.0f;
            EffectSsIceSmoke_Spawn(arg1, (Vec3f *) &sp54, (Vec3f *) &sp34, &D_801D15B0, (s16) (s32) sp6E);
        }
    }
}

void BgGoronOyu_Init(Actor *thisx, GlobalContext *globalCtx) {
    CollisionHeader *sp24;
    BgGoronOyu *this = (BgGoronOyu *) thisx;

    sp24 = NULL;
    Actor_SetScale((Actor *) this, 0.1f);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck_RelocateMeshHeader(&D_06000988, &sp24);
    this->unk_144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp24);
    func_80B40308((Actor *) this, globalCtx);
    if (this->actor.params != 0) {
        this->actor.world.pos.y = this->actor.home.pos.y;
        func_80B40080((Actor *) this);
        return;
    }
    this->actor.world.pos.y = this->actor.home.pos.y - 20.0f;
    func_80B4009C(this);
}

void BgGoronOyu_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgGoronOyu *this = (BgGoronOyu *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void BgGoronOyu_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgGoronOyu *this = (BgGoronOyu *) thisx;
    this->actionFunc(this, globalCtx);
    func_80B40394(this, globalCtx);
}

void BgGoronOyu_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    BgGoronOyu *this = (BgGoronOyu *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_06000968));
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06000158;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) &D_06000080;
    temp_v0_3->words.w0 = 0xDE000000;
}
