typedef struct BgFuMizu {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x18];                 /* maybe part of unk_144[7]? */
    /* 0x160 */ s16 unk_160;                        /* inferred */
    /* 0x162 */ char pad_162[0x2];
} BgFuMizu;                                         /* size = 0x164 */

struct _mips2c_stack_BgFuMizu_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgFuMizu_Draw {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_BgFuMizu_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ CollisionHeader *sp24;               /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgFuMizu_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80ADABA4 {};              /* size 0x0 */

s32 func_80ADABA4(BgFuMizu *arg0, void *arg1);      /* static */
extern ? D_06002FC0;
extern void D_060037D8;
extern CollisionHeader D_060037F8;

void BgFuMizu_Init(Actor *thisx, GlobalContext *globalCtx) {
    CollisionHeader *sp24;
    BgFuMizu *this = (BgFuMizu *) thisx;

    sp24 = NULL;
    Actor_SetScale((Actor *) this, 1.0f);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck_RelocateMeshHeader(&D_060037F8, &sp24);
    this->unk_144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp24);
    this->unk_160 = 0;
    this->actor.world.pos.y = this->actor.home.pos.y + -10.0f;
}

void BgFuMizu_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgFuMizu *this = (BgFuMizu *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

s32 func_80ADABA4(BgFuMizu *arg0, void *arg1) {
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;

    temp_v0 = arg1->unk_1CC0;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
loop_1:
        if ((phi_v0 != 0) && (phi_v0->unk_0 == 0x1B4) && (phi_v0->unk_B7 == 0)) {
            return 0;
        }
        temp_v0_2 = phi_v0->unk_12C;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return 1;
        }
        goto loop_1;
    }
    return 1;
}

void BgFuMizu_Update(Actor *thisx, GlobalContext *globalCtx) {
    f32 phi_f0;
    BgFuMizu *this = (BgFuMizu *) thisx;

    if (this->unk_160 == 0) {
        if (func_80ADABA4(this) != 0) {
            phi_f0 = this->actor.home.pos.y + -10.0f;
        } else {
            phi_f0 = this->actor.home.pos.y + 10.0f;
        }
    } else {
        phi_f0 = this->actor.home.pos.y + 25.0f;
    }
    if (Math_SmoothStepToF(&this->actor.world.pos.y, phi_f0, 0.05f, 1.0f, 0.5f) > 1.0f) {
        if (this->unk_160 == 1) {
            func_800B9010((Actor *) this, 0x213BU);
            return;
        }
        func_800B9010((Actor *) this, 0x213BU);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void BgFuMizu_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    BgFuMizu *this = (BgFuMizu *) thisx;

    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_060037D8));
    temp_a0 = globalCtx->state.gfxCtx;
    sp24 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp24->polyXlu.p;
    sp24->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = sp24;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = sp24->polyXlu.p;
    sp24->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06002FC0;
    temp_v0_2->words.w0 = 0xDE000000;
}
