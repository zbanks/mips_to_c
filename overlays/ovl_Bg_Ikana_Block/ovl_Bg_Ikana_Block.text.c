typedef struct BgIkanaBlock {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ f32 unk_148;                        /* inferred */
    /* 0x14C */ char pad_14C[0x10];                 /* maybe part of unk_148[5]? */
    /* 0x15C */ void *unk_15C;                      /* inferred */
    /* 0x160 */ void (*actionFunc)(BgIkanaBlock *, GlobalContext *);
    /* 0x164 */ f32 *unk_164;                       /* inferred */
    /* 0x168 */ f32 unk_168;                        /* inferred */
    /* 0x16C */ f32 unk_16C;                        /* inferred */
    /* 0x170 */ char pad_170[0x4];
    /* 0x174 */ ? unk_174;                          /* inferred */
    /* 0x174 */ char pad_174[0x2];
    /* 0x176 */ s16 unk_176;                        /* inferred */
    /* 0x178 */ u16 unk_178;                        /* inferred */
    /* 0x17A */ u8 unk_17A;                         /* inferred */
    /* 0x17B */ char pad_17B[0x1];
    /* 0x17C */ u8 unk_17C;                         /* inferred */
    /* 0x17D */ s8 unk_17D;                         /* inferred */
    /* 0x17E */ s8 unk_17E;                         /* inferred */
    /* 0x17F */ s8 unk_17F;                         /* inferred */
} BgIkanaBlock;                                     /* size = 0x180 */

struct _mips2c_stack_BgIkanaBlock_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgIkanaBlock_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_BgIkanaBlock_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B7EA60 {};              /* size 0x0 */

struct _mips2c_stack_func_80B7EB30 {};              /* size 0x0 */

struct _mips2c_stack_func_80B7EB64 {};              /* size 0x0 */

struct _mips2c_stack_func_80B7EB7C {};              /* size 0x0 */

struct _mips2c_stack_func_80B7EB94 {
    /* 0x00 */ char pad_0[0x4C];
    /* 0x4C */ s32 sp4C;                            /* inferred */
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0xC];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x4];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80B7ECFC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7ED54 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ? sp18;                              /* inferred */
    /* 0x18 */ char pad_18[0x4];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B7EDC4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B7EE70 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7EEB4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7F00C {};              /* size 0x0 */

struct _mips2c_stack_func_80B7F034 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7F0A4 {};              /* size 0x0 */

struct _mips2c_stack_func_80B7F0D0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B7F1A8 {};              /* size 0x0 */

struct _mips2c_stack_func_80B7F290 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B7F360 {};              /* size 0x0 */

struct _mips2c_stack_func_80B7F398 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B7F564 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x10];
};                                                  /* size = 0x38 */

f32 func_800C4188(GlobalContext *, s32, void *, s32 *, BgIkanaBlock *, f32 *); /* extern */
s32 func_800C56E0(s32, f32 *, f32 *, ? *, ? *, s32, s32, s32, s32, ? *, BgIkanaBlock *, f32); /* extern */
void func_80B7EA60(BgIkanaBlock *arg0);             /* static */
void func_80B7EB30(BgIkanaBlock *arg0);             /* static */
s32 func_80B7EB64(BgIkanaBlock *arg0, GlobalContext *arg1); /* static */
s32 func_80B7EB7C(BgIkanaBlock *arg0, GlobalContext *arg1); /* static */
s32 func_80B7EB94(BgIkanaBlock *arg0, GlobalContext *arg1); /* static */
s32 func_80B7ECFC(BgIkanaBlock *arg0, GlobalContext *arg1); /* static */
void func_80B7ED54(BgIkanaBlock *arg0);             /* static */
s32 func_80B7EDC4(BgIkanaBlock *arg0, GlobalContext *arg1, BgIkanaBlock *); /* static */
s32 func_80B7EE70(BgIkanaBlock *arg0, GlobalContext *); /* static */
s32 func_80B7EEB4(BgIkanaBlock *arg0, GlobalContext *arg1); /* static */
void func_80B7F00C(BgIkanaBlock *arg0);             /* static */
void func_80B7F0A4(BgIkanaBlock *arg0);             /* static */
void func_80B7F1A8(BgIkanaBlock *arg0);             /* static */
void func_80B7F360(BgIkanaBlock *arg0);             /* static */
void func_80B7F564(Actor *this, GlobalContext *globalCtx); /* static */
extern void D_0501B370;
static InitChainEntry D_80B7F640[4];                /* unable to generate initializer */

void func_80B7EA60(BgIkanaBlock *arg0) {
    f32 temp_f2;
    s32 phi_v0;

    temp_f2 = arg0->unk_148;
    arg0->unk_17A &= 0xFFF0;
    if (fabsf(temp_f2) > 0.1f) {
        if (temp_f2 > 0.0f) {
            phi_v0 = (s32) arg0->unk_150;
        } else {
            phi_v0 = (s32) (s16) (arg0->unk_150 + 0x8000);
        }
        if ((phi_v0 < -0x6000) || (phi_v0 >= 0x6000)) {
            arg0->unk_17A |= 8;
            return;
        }
        if (phi_v0 < -0x2000) {
            arg0->unk_17A |= 2;
            return;
        }
        if (phi_v0 < 0x2000) {
            arg0->unk_17A |= 4;
            return;
        }
        arg0->unk_17A |= 1;
        /* Duplicate return node #12. Try simplifying control flow for better match */
    }
}

void func_80B7EB30(BgIkanaBlock *arg0) {
    s8 temp_v0;

    if ((arg0->unk_17A & 0xF) != 0) {
        temp_v0 = arg0->unk_17B;
        if ((s32) temp_v0 < 0x7F) {
            arg0->unk_17B = temp_v0 + 1;
            return;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return;
    }
    arg0->unk_17B = 0;
}

s32 func_80B7EB64(BgIkanaBlock *arg0, GlobalContext *arg1) {
    return (arg0->unk_17C & 8) == 0;
}

s32 func_80B7EB7C(BgIkanaBlock *arg0, GlobalContext *arg1) {
    return ((s32) arg0->unk_17B < 0xB) ^ 1;
}

s32 func_80B7EB94(BgIkanaBlock *arg0, GlobalContext *arg1) {
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    ? sp58;
    ? sp54;
    ? sp50;
    s32 sp4C;
    s32 phi_v0;
    s16 phi_a0;
    f32 phi_f12;

    phi_v0 = 0;
    if (arg0->unk_148 > 0.0f) {
        phi_v0 = 1;
    }
    if (phi_v0 != 0) {
        phi_a0 = arg0->unk_150;
    } else {
        phi_a0 = (s16) (arg0->unk_150 + 0x8000);
    }
    sp70 = arg0->actor.world.pos.x;
    sp74 = arg0->actor.world.pos.y + arg0->unk_170 + 2.0f;
    sp4C = phi_v0;
    sp78 = arg0->actor.world.pos.z;
    Matrix_RotateY(phi_a0, 0U);
    if (phi_v0 != 0) {
        phi_f12 = 89.0f;
    } else {
        phi_f12 = 119.0f;
    }
    SysMatrix_GetStateTranslationAndScaledZ(phi_f12, (Vec3f *) &sp64);
    sp64 += arg0->actor.world.pos.x;
    sp68 += arg0->actor.world.pos.y + arg0->unk_170 + 2.0f;
    sp6C += arg0->actor.world.pos.z;
    return func_800C56E0(arg1 + 0x830, &sp70, &sp64, &sp58, &sp54, 1, 0, 0, 1, &sp50, arg0, 0.0f) == 0;
}

s32 func_80B7ECFC(BgIkanaBlock *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v0;

    temp_v0 = func_80B7EB64(arg0, arg1) != 0;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_80B7EB7C(arg0, arg1) != 0;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 != 0) {
            phi_v0 = func_80B7EB94(arg0, arg1) != 0;
        }
    }
    return phi_v0;
}

void func_80B7ED54(BgIkanaBlock *arg0) {
    ? sp18;

    Matrix_RotateY(arg0->actor.shape.rot.y, 0U);
    SysMatrix_InsertXRotation_s(arg0->actor.shape.rot.x, 1);
    SysMatrix_InsertZRotation_s(arg0->actor.shape.rot.z, 1);
    SysMatrix_GetStateTranslationAndScaledY(30.0f, (Vec3f *) &sp18);
    arg0->unk_170 = sp1C - 30.0f;
}

s32 func_80B7EDC4(BgIkanaBlock *arg0, GlobalContext *arg1) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s32 sp2C;
    f32 temp_f0;
    s32 phi_v0;

    sp30 = arg0->actor.world.pos.x;
    sp34 = arg0->actor.world.pos.y + arg0->unk_170 + 40.0f;
    sp38 = arg0->actor.world.pos.z;
    temp_f0 = func_800C4188(arg1, arg1 + 0x830, arg0 + 0x80, &sp2C, arg0, &sp30);
    arg0->actor.floorHeight = temp_f0;
    arg0->actor.floorBgId = (u8) sp2C;
    phi_v0 = 0;
    if (((arg0->actor.world.pos.y + arg0->unk_170) - temp_f0) < 2.0f) {
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 func_80B7EE70(BgIkanaBlock *arg0) {
    if (func_80B7EDC4() != 0) {
        arg0->actor.world.pos.y = arg0->actor.floorHeight - arg0->unk_170;
        return 1;
    }
    return 0;
}

s32 func_80B7EEB4(BgIkanaBlock *arg0, GlobalContext *arg1) {
    BgIkanaBlock *temp_a0;
    BgIkanaBlock *temp_a2;
    u8 temp_a1;

    temp_a2 = arg0;
    temp_a0 = temp_a2;
    arg0 = temp_a2;
    func_80B7EDC4(temp_a0, arg1, temp_a2);
    if ((arg0->actor.floorHeight > -31999.0f) && (temp_a1 = arg0->actor.floorBgId, arg0 = arg0, (BgCheck_GetActorOfMesh(arg1 + 0x830, (s32) temp_a1) != 0))) {
        arg0->actor.world.pos.y = arg0->actor.floorHeight - arg0->unk_170;
        return 1;
    }
    return 0;
}

void BgIkanaBlock_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgIkanaBlock *this = (BgIkanaBlock *) thisx;
    Actor_ProcessInitChain((Actor *) this, D_80B7F640);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, (CollisionHeader *) &D_05007498);
    func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
    this->unk_15C = Lib_SegmentedToVirtual(&D_0501B370);
    this->unk_174 = (unaligned s32) this->unk_BC;
    this->unk_178 = (u16) this->actor.shape.rot.z;
    func_80B7ED54(this);
    func_80B7F00C(this);
}

void BgIkanaBlock_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgIkanaBlock *this = (BgIkanaBlock *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void func_80B7F00C(BgIkanaBlock *arg0) {
    arg0->unk_17C &= 0xFFF8;
    arg0->unk_17D = 0x28;
    arg0->actionFunc = func_80B7F034;
}

void func_80B7F034(BgIkanaBlock *this, GlobalContext *globalCtx) {
    BgIkanaBlock *temp_a0;
    s32 temp_a2;
    s8 temp_v0;

    temp_v0 = this->unk_17D;
    temp_a0 = this;
    if ((s32) temp_v0 > 0) {
        this->unk_17D = temp_v0 - 1;
    }
    this = this;
    if (func_80B7EEB4(temp_a0, globalCtx) != 0) {
        temp_a2 = this->unk_144;
        this = this;
        func_800C6314(globalCtx, &globalCtx->colCtx.dyna, temp_a2);
        this->actor.draw = func_80B7F564;
        func_80B7F0A4(this);
    }
}

void func_80B7F0A4(BgIkanaBlock *arg0) {
    u8 temp_t8;

    temp_t8 = arg0->unk_17C & 0xFFF8;
    arg0->unk_17C = temp_t8;
    arg0->unk_17B = 0;
    arg0->unk_17C = temp_t8 | 1;
    arg0->actionFunc = func_80B7F0D0;
}

void func_80B7F0D0(BgIkanaBlock *this, GlobalContext *globalCtx) {
    s32 sp24;
    Actor *temp_v0;
    s32 phi_v1;

    sp24 = 0;
    func_80B7EA60(this);
    func_80B7EB30(this);
    if ((this->unk_17C & 4) != 0) {
        phi_v1 = 1;
    } else {
        sp24 = sp24;
        phi_v1 = sp24;
        if (func_80B7ECFC(this, globalCtx) != 0) {
            phi_v1 = 2;
        }
    }
    if ((phi_v1 != 2) && ((this->unk_17A & 0xF) != 0)) {
        temp_v0 = globalCtx->actorCtx.actorList[2].first;
        temp_v0->unk_A70 = (s32) (temp_v0->unk_A70 & ~0x10);
        this->unk_148 = 0.0f;
    }
    if (phi_v1 == 1) {
        func_80B7F360(this);
        return;
    }
    if (phi_v1 == 2) {
        func_80B7F1A8(this);
    }
}

void func_80B7F1A8(BgIkanaBlock *arg0) {
    f32 temp_f0;
    f32 temp_f2;
    u8 temp_t8;
    f32 *phi_v0;
    f32 phi_f0;
    s32 phi_v0_2;

    phi_v0 = arg0 + 0x10;
    if ((arg0->unk_17A & 3) != 0) {
        arg0->unk_164 = arg0 + 0x24;
        phi_v0 = arg0 + 8;
    } else {
        arg0->unk_164 = arg0 + 0x2C;
    }
    temp_f2 = *phi_v0;
    temp_f0 = (*arg0->unk_164 - temp_f2) * 0.016666668f;
    phi_v0_2 = -1;
    if (temp_f0 >= 0.0f) {
        phi_f0 = temp_f0 + 0.5f;
    } else {
        phi_f0 = temp_f0 - 0.5f;
    }
    if ((arg0->unk_17A & 5) != 0) {
        phi_v0_2 = 1;
    }
    temp_t8 = arg0->unk_17C & 0xFFF8;
    arg0->unk_17C = temp_t8;
    arg0->unk_16C = 0.0f;
    arg0->unk_17C = temp_t8 | 2;
    arg0->actionFunc = func_80B7F290;
    arg0->unk_168 = temp_f2 + ((f32) ((s32) phi_f0 + phi_v0_2) * 60.0f);
}

void func_80B7F290(BgIkanaBlock *this, GlobalContext *globalCtx) {
    Actor *sp20;

    Math_StepToF(&this->unk_16C, 2.0f, 0.4f);
    if (Math_StepToF(this->unk_164, this->unk_168, this->unk_16C) != 0) {
        sp20 = globalCtx->actorCtx.actorList[2].first;
        if (func_80B7EB94(this, globalCtx) == 0) {
            Audio_PlayActorSound2((Actor *) this, 0x2835U);
        }
        sp20->unk_A70 = (s32) (sp20->unk_A70 & ~0x10);
        this->unk_148 = 0.0f;
        if (func_80B7EDC4(this, globalCtx) != 0) {
            func_80B7F0A4(this);
            return;
        }
        func_80B7F360(this);
        return;
    }
    func_800B9010((Actor *) this, 0x200AU);
}

void func_80B7F360(BgIkanaBlock *arg0) {
    u8 temp_t8;

    temp_t8 = arg0->unk_17C & 0xFFF8;
    arg0->unk_17C = temp_t8;
    arg0->unk_17C = temp_t8 | 4;
    arg0->unk_17D = 1;
    arg0->actionFunc = func_80B7F398;
    arg0->actor.velocity.y = 0.0f;
}

void func_80B7F398(BgIkanaBlock *this, GlobalContext *globalCtx) {
    s8 temp_v0;

    temp_v0 = this->unk_17D;
    if ((s32) temp_v0 > 0) {
        this->unk_17D = temp_v0 - 1;
        return;
    }
    this->actor.velocity.y -= 2.0f;
    this->actor.velocity.y *= 0.95f;
    if (this->actor.velocity.y < -30.0f) {
        this->actor.velocity.y = -30.0f;
    }
    this->actor.world.pos.y += this->actor.velocity.y;
    if (func_80B7EE70(this, globalCtx) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x2835U);
        Audio_PlayActorSound2((Actor *) this, (func_800C9BDC(&globalCtx->colCtx, this->actor.floorPoly, (s32) this->actor.floorBgId) + 0x800) & 0xFFFF);
        func_80B7F0A4(this);
    }
}

void BgIkanaBlock_Update(Actor *thisx, GlobalContext *globalCtx) {
    s8 temp_v0;
    BgIkanaBlock *this = (BgIkanaBlock *) thisx;

    if ((this->unk_174 != this->actor.shape.rot.x) || (this->unk_176 != this->actor.shape.rot.y) || ((s16) this->unk_178 != this->actor.shape.rot.z)) {
        this->unk_174 = (unaligned s32) this->unk_BC;
        this->unk_178 = (u16) this->actor.shape.rot.z;
        func_80B7ED54(this);
    }
    this->actionFunc(this, globalCtx);
    Actor_SetHeight((Actor *) this, 30.0f);
    if (this->unk_17E != 0) {
        temp_v0 = this->unk_17F;
        if ((s32) temp_v0 > 0) {
            this->unk_17F = temp_v0 - 1;
            ActorCutscene_Stop((s16) this->actor.cutscene);
            this->unk_17E = 0;
            return;
        }
        if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
            this->unk_17F = 0x1E;
            return;
        }
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

void func_80B7F564(Actor *this, GlobalContext *globalCtx) {
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    AnimatedMat_DrawStep(globalCtx, this->unk_15C, 0U);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = -1;
    temp_v0_2->words.w0 = 0xFA00FFFF;
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w1 = (u32) &D_050182A8;
    temp_v0_3->words.w0 = 0xDE000000;
}
