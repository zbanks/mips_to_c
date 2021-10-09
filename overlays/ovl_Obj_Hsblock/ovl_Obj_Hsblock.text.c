typedef struct ObjHsblock {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ void (*actionFunc)(ObjHsblock *, GlobalContext *);
} ObjHsblock;                                       /* size = 0x160 */

struct _mips2c_stack_ObjHsblock_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjHsblock_Draw {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Gfx *sp18;                           /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ GraphicsContext *sp20;               /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_ObjHsblock_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjHsblock_SetupAction {};     /* size 0x0 */

struct _mips2c_stack_ObjHsblock_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093DEAC {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8093E03C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093E05C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093E0A0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093E0E8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093E10C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

void func_8093DEAC(Actor *arg0, GlobalContext *arg1); /* static */
void func_8093E03C(ObjHsblock *arg0);               /* static */
void func_8093E05C(ObjHsblock *arg0);               /* static */
void func_8093E0E8(ObjHsblock *arg0);               /* static */
void func_8093E10C(ObjHsblock *this, GlobalContext *globalCtx); /* static */
static ? D_8093E330;                                /* unable to generate initializer */
static InitChainEntry D_8093E33C[4];                /* unable to generate initializer */
static ? D_8093E34C;                                /* unable to generate initializer */
static ? D_8093E358;                                /* unable to generate initializer */
static ? D_8093E364;                                /* unable to generate initializer */

void ObjHsblock_SetupAction(ObjHsblock *this, void (*actionFunc)(ObjHsblock *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

void func_8093DEAC(Actor *arg0, GlobalContext *arg1) {
    if ((((s32) arg0->params >> 5) & 1) != 0) {
        Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, 0x8E, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) (s32) arg0->world.rot.x, (s16) (s32) arg0->world.rot.y, (s16) (s32) arg0->world.rot.z, 0xFF64);
    }
}

void ObjHsblock_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v1;
    s32 temp_v0;
    ObjHsblock *this = (ObjHsblock *) thisx;

    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, *(&D_8093E34C + ((this->actor.params & 3) * 4)));
    Actor_ProcessInitChain((Actor *) this, D_8093E33C);
    func_8093DEAC((Actor *) this, globalCtx);
    temp_v1 = this->actor.params;
    temp_v0 = temp_v1 & 3;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 == 2) {
                goto block_3;
            }
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return;
        }
        if (Flags_GetSwitch(globalCtx, ((s32) temp_v1 >> 8) & 0x7F) != 0) {
            func_8093E03C(this);
            return;
        }
        func_8093E05C(this);
        return;
    }
block_3:
    func_8093E03C(this);
}

void ObjHsblock_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjHsblock *this = (ObjHsblock *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void func_8093E03C(ObjHsblock *arg0) {
    ObjHsblock_SetupAction(arg0, NULL);
}

void func_8093E05C(ObjHsblock *arg0) {
    arg0->actor.flags |= 0x10;
    arg0->actor.world.pos.y = arg0->actor.home.pos.y - 105.0f;
    ObjHsblock_SetupAction(arg0, func_8093E0A0);
}

void func_8093E0A0(ObjHsblock *this, GlobalContext *globalCtx) {
    if (Flags_GetSwitch(globalCtx, ((s32) this->actor.params >> 8) & 0x7F) != 0) {
        func_8093E0E8(this);
    }
}

void func_8093E0E8(ObjHsblock *arg0) {
    ObjHsblock_SetupAction(arg0, func_8093E10C);
}

void func_8093E10C(ObjHsblock *this, GlobalContext *globalCtx) {
    Math_SmoothStepToF(&this->actor.velocity.y, 16.0f, 0.1f, 0.8f, 0.0f);
    if (fabsf(Math_SmoothStepToF(&this->actor.world.pos.y, this->actor.home.pos.y, 0.3f, this->actor.velocity.y, 0.3f)) < 0.001f) {
        this->actor.world.pos.y = this->actor.home.pos.y;
        func_8093E03C(this);
        this->actor.flags &= -0x11;
    }
}

void ObjHsblock_Update(Actor *thisx, GlobalContext *globalCtx) {
    void (*temp_v0)(ObjHsblock *, GlobalContext *);
    ObjHsblock *this = (ObjHsblock *) thisx;

    temp_v0 = this->actionFunc;
    if (temp_v0 != 0) {
        temp_v0(this, globalCtx);
    }
    Actor_SetHeight((Actor *) this, *(&D_8093E330 + (((Actor *) this->params & 3) * 4)));
}

void ObjHsblock_Draw(Actor *thisx, GlobalContext *globalCtx) {
    void *sp24;
    GraphicsContext *sp20;
    Gfx *sp18;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    void *temp_a3;
    ObjHsblock *this = (ObjHsblock *) thisx;

    temp_a3 = ((((s32) this->actor.params >> 6) & 3) * 3) + &D_8093E364;
    temp_a0 = globalCtx->state.gfxCtx;
    sp24 = temp_a3;
    sp20 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp20->polyOpa.p;
    sp20->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_a3;
    sp20 = sp20;
    sp18 = temp_v0;
    sp18->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = sp20->polyOpa.p;
    sp20->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFB000000;
    temp_v0_2->words.w1 = (temp_a3->unk_0 << 0x18) | (temp_a3->unk_1 << 0x10) | (temp_a3->unk_2 << 8) | 0xFF;
    temp_v0_3 = sp20->polyOpa.p;
    sp20->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = *(&D_8093E358 + ((this->actor.params & 3) * 4));
}
