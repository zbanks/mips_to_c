typedef struct ObjKzsaku {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ void (*actionFunc)(ObjKzsaku *, GlobalContext *);
    /* 0x160 */ f32 unk160;                         /* inferred */
    /* 0x164 */ s32 unk164;                         /* inferred */
    /* 0x168 */ char pad168[0x4];
} ObjKzsaku;                                        /* size = 0x16C */

struct _mips2c_stack_ObjKzsaku_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjKzsaku_Draw {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_ObjKzsaku_Init {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ CollisionHeader *sp24;               /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_ObjKzsaku_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C08B60 {};              /* size 0x0 */

struct _mips2c_stack_func_80C08B7C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C08BBC {};              /* size 0x0 */

struct _mips2c_stack_func_80C08BD0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C08C84 {};              /* size 0x0 */

struct _mips2c_stack_func_80C08CB0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void func_80C08B60(ObjKzsaku *arg0);                /* static */
void func_80C08B7C(void *arg0, GlobalContext *arg1); /* static */
void func_80C08BBC(void *arg0);                     /* static */
void func_80C08BD0(Actor *arg0, ? arg1);            /* static */
void func_80C08C84(ObjKzsaku *arg0);                /* static */
void func_80C08CB0(void *arg0, ? arg1);             /* static */
extern ? D_06000040;
extern CollisionHeader D_06001118;

void ObjKzsaku_Init(ObjKzsaku *this, GlobalContext *globalCtx) {
    CollisionHeader *sp24;
    s32 temp_a1;
    ObjKzsaku *this = (ObjKzsaku *) thisx;

    sp24 = NULL;
    Actor_SetScale((Actor *) this, 1.0f);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck_RelocateMeshHeader(&D_06001118, &sp24);
    this->unk144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp24);
    temp_a1 = (s32) (this->actor.params & 0x7F00) >> 8;
    this->unk164 = temp_a1;
    this->unk160 = 0.0f;
    if (Flags_GetSwitch(globalCtx, temp_a1) != 0) {
        func_80C08C84(this);
        return;
    }
    func_80C08B60(this);
}

void ObjKzsaku_Destroy(ObjKzsaku *this, GlobalContext *globalCtx) {
    ObjKzsaku *this = (ObjKzsaku *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_80C08B60(ObjKzsaku *arg0) {
    arg0->actionFunc = func_80C08B7C;
    arg0->actor.world.pos.y = arg0->actor.home.pos.y;
}

void func_80C08B7C(ObjKzsaku *arg0, GlobalContext *arg1) {
    if (Flags_GetSwitch(arg1, arg0->unk164) != 0) {
        func_80C08BBC(arg0);
    }
}

void func_80C08BBC(ObjKzsaku *arg0) {
    arg0->actionFunc = func_80C08BD0;
}

void func_80C08BD0(Actor *arg0, GlobalContext *arg1) {
    s8 temp_a1;

    temp_a1 = arg0->cutscene;
    if (temp_a1 != -1) {
        if (ActorCutscene_GetCanPlayNext((s16) temp_a1) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
        } else {
            ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        }
    }
    if (arg0->unk160 < 450.0f) {
        func_800B9010(arg0, 0x2036U);
        arg0->unk160 = (f32) (arg0->unk160 + 15.0f);
    } else {
        func_80C08C84((ObjKzsaku *) arg0);
    }
    arg0->world.pos.y = arg0->home.pos.y + arg0->unk160;
}

void func_80C08C84(ObjKzsaku *arg0) {
    arg0->unk168 = 0;
    arg0->actionFunc = func_80C08CB0;
    arg0->actor.world.pos.y = arg0->actor.home.pos.y + 450.0f;
}

void func_80C08CB0(ObjKzsaku *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s8 temp_a0;

    temp_v0 = arg0->unk168;
    if ((s32) temp_v0 < 0x15) {
        if (temp_v0 == 0x14) {
            arg0 = arg0;
            temp_a0 = arg0->actor.cutscene;
            if (ActorCutscene_GetCurrentIndex() == temp_a0) {
                arg0 = arg0;
                ActorCutscene_Stop((s16) temp_a0);
            }
            arg0->unk168 = 0x15;
            return;
        }
        arg0->unk168 = temp_v0 + 1;
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void ObjKzsaku_Update(ObjKzsaku *this, GlobalContext *globalCtx) {
    ObjKzsaku *this = (ObjKzsaku *) thisx;
    this->actionFunc(this, globalCtx);
}

void ObjKzsaku_Draw(ObjKzsaku *this, GlobalContext *globalCtx) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    ObjKzsaku *this = (ObjKzsaku *) thisx;

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
    temp_v0_2->words.w1 = (u32) &D_06000040;
    temp_v0_2->words.w0 = 0xDE000000;
}
