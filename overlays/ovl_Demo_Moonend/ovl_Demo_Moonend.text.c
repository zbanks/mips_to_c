typedef struct DemoMoonend {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ? unk_144;                          /* inferred */
    /* 0x144 */ char pad_144[0xC];
    /* 0x150 */ f32 unk_150;                        /* inferred */
    /* 0x154 */ char pad_154[0x8];                  /* maybe part of unk_150[3]? */
    /* 0x15C */ void *unk_15C;                      /* inferred */
    /* 0x160 */ char pad_160[0x14];                 /* maybe part of unk_15C[6]? */
    /* 0x174 */ ? unk_174;                          /* inferred */
    /* 0x174 */ char pad_174[0xB4];
    /* 0x228 */ ? unk_228;                          /* inferred */
    /* 0x228 */ char pad_228[0xB4];
    /* 0x2DC */ u16 unk_2DC;                        /* inferred */
    /* 0x2DE */ u16 unk_2DE;                        /* inferred */
    /* 0x2E0 */ void (*actionFunc)(DemoMoonend *, GlobalContext *);
} DemoMoonend;                                      /* size = 0x2E4 */

struct _mips2c_stack_DemoMoonend_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_DemoMoonend_Draw {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_DemoMoonend_Init {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? *sp28;                             /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_DemoMoonend_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C17B50 {};              /* size 0x0 */

struct _mips2c_stack_func_80C17B60 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ u16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C17C48 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? *sp24;                             /* inferred */
    /* 0x28 */ char pad_28[0x6];                    /* maybe part of sp24[2]? */
    /* 0x2E */ u16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C17E70 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C17EE0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C17FCC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

? func_80183430(? *, ? *, ? *, ? *, ? *, s32);      /* extern */
? func_8018349C(? *, DemoMoonend *);                /* extern */
? func_801834A8(? *, ? *);                          /* extern */
s32 func_80183DE0(? *);                             /* extern */
? func_8018450C(GlobalContext *, ? *, Gfx *, ? (*)(void *, ?, s32, ?), ? (*)(s32, ?, s32, ?), DemoMoonend *); /* extern */
void func_80C17B50(DemoMoonend *, GlobalContext *); /* static */
void func_80C17B60(DemoMoonend *, GlobalContext *); /* static */
void func_80C17C48(DemoMoonend *, GlobalContext *); /* static */
? func_80C17E70(void *arg0, ? arg1, s32 arg2, ? arg3); /* static */
? func_80C17EE0(s32 arg0, ? arg1, s32 arg2, ? arg3); /* static */
void func_80C17FCC(Actor *thisx, GlobalContext *globalCtx); /* static */
extern ? D_06001214;
extern void D_0600B540;
extern ? D_0600B5A0;
extern ? D_06010C40;
extern void D_060129F0;

void DemoMoonend_Init(Actor *thisx, GlobalContext *globalCtx) {
    ? *sp28;
    ? *temp_a0;
    DemoMoonend *this = (DemoMoonend *) thisx;

    Actor_SetScale((Actor *) this, 0.1f);
    this->actionFunc = func_80C17B50;
    if ((this->actor.params & 0xF) == 1) {
        Actor_SetScale((Actor *) this, 0.05f);
        Actor_SetScale((Actor *) this, 6.0f);
        this->actor.draw = NULL;
        this->unk_2DC = 0x22E;
        this->actionFunc = func_80C17B60;
        return;
    }
    Actor_SetScale((Actor *) this, 0.095f);
    temp_a0 = &this->unk_144;
    sp28 = temp_a0;
    func_80183430(temp_a0, &D_0600B5A0, &D_06001214, &this->unk_174, &this->unk_228, 0);
    func_801834A8(temp_a0, &D_06001214);
    this->unk_2DC = 0x230;
    this->actionFunc = func_80C17C48;
    this->actor.home.rot.z = 0;
    this->actor.draw = NULL;
    this->unk_150 = 0.6666667f;
}

void DemoMoonend_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DemoMoonend *this = (DemoMoonend *) thisx;
    if ((this->actor.params & 0xF) != 1) {
        func_8018349C(&this->unk_144, this);
    }
}

void func_80C17B50(DemoMoonend *arg0, GlobalContext *arg1) {

}

void func_80C17B60(DemoMoonend *arg0, GlobalContext *arg1) {
    u16 sp26;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 phi_v0;

    if (func_800EE29C(arg1, (u32) arg0->unk_2DC) != 0) {
        sp26 = arg1->csCtx.npcActions[func_800EE200(arg1, (u32) arg0->unk_2DC)]->unk0;
        func_800EDF24((Actor *) arg0, arg1, func_800EE200(arg1, (u32) arg0->unk_2DC));
        temp_v0 = arg0->unk_2DE;
        phi_v0 = temp_v0;
        if (sp26 != temp_v0) {
            temp_v0_2 = sp26 & 0xFFFF;
            arg0->unk_2DE = sp26;
            phi_v0 = temp_v0_2;
            if (temp_v0_2 != 1) {
                if (temp_v0_2 != 2) {

                } else {
                    arg0->actor.draw = func_80C17FCC;
                    goto block_7;
                }
            } else {
                arg0->actor.draw = NULL;
block_7:
                phi_v0 = arg0->unk_2DE;
            }
        }
        if (phi_v0 == 2) {
            func_800B9010((Actor *) arg0, 0x21B2U);
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return;
    }
    arg0->actor.draw = NULL;
}

void func_80C17C48(DemoMoonend *arg0, GlobalContext *arg1) {
    u16 sp2E;
    ? *sp24;
    ? *temp_a0;
    s32 temp_v0;
    u16 temp_v0_2;

    temp_a0 = &arg0->unk_144;
    sp24 = temp_a0;
    if (func_80183DE0(temp_a0) != 0) {
        arg0->actor.home.rot.z = 0;
    }
    if (func_800EE29C(arg1, (u32) arg0->unk_2DC) != 0) {
        sp2E = arg1->csCtx.npcActions[func_800EE200(arg1, (u32) arg0->unk_2DC)]->unk0;
        func_800EDF24((Actor *) arg0, arg1, func_800EE200(arg1, (u32) arg0->unk_2DC));
        temp_v0 = sp2E & 0xFFFF;
        if (sp2E != arg0->unk_2DE) {
            arg0->unk_2DE = sp2E;
            if (temp_v0 != 1) {
                if (temp_v0 != 2) {

                } else {
                    arg0->actor.draw = DemoMoonend_Draw;
                    func_801834A8(sp24, &D_06001214);
                    arg0->unk_150 = 0.6666667f;
                    Audio_PlayActorSound2((Actor *) arg0, 0x29B1U);
                    arg0->actor.home.rot.z = 1;
                }
            } else {
                arg0->actor.draw = DemoMoonend_Draw;
                func_801834A8(sp24, &D_06001214);
                arg0->unk_150 = 0.0f;
            }
        }
        if (arg0->actor.home.rot.z != 0) {
            func_800B9010((Actor *) arg0, 0x2159U);
        }
    } else {
        arg0->actor.draw = NULL;
    }
    if ((arg1->csCtx.state != 0) && (gSaveContext.sceneSetupIndex == 8) && (arg1->csCtx.unk_12 == 0)) {
        temp_v0_2 = arg1->csCtx.frames;
        if (temp_v0_2 != 5) {
            if (temp_v0_2 != 0x32) {
                if (temp_v0_2 != 0x64) {
                    if (temp_v0_2 != 0x96) {
                        if (temp_v0_2 != 0xC8) {
                            return;
                        }
                        Audio_PlayActorSound2((Actor *) arg0, 0x3AC2U);
                        /* Duplicate return node #26. Try simplifying control flow for better match */
                        return;
                    }
                    Audio_PlayActorSound2((Actor *) arg0, 0x3AC0U);
                    return;
                }
                Audio_PlayActorSound2((Actor *) arg0, 0x3AC1U);
                return;
            }
            Audio_PlayActorSound2((Actor *) arg0, 0x3AC0U);
            return;
        }
        Audio_PlayActorSound2((Actor *) arg0, 0x3ABFU);
    }
}

void DemoMoonend_Update(Actor *thisx, GlobalContext *globalCtx) {
    DemoMoonend *this = (DemoMoonend *) thisx;
    this->actionFunc(this, globalCtx);
}

? func_80C17E70(void *arg0, ? arg1, s32 arg2, ? arg3) {
    if (arg2 == 2) {
        arg0 = arg0;
        SysMatrix_StatePush();
        Matrix_RotateY((s16) (func_800DFCDC((arg0 + (arg0->unk_810 * 4))->unk_800) + 0x8000), 1U);
    }
    return 1;
}

? func_80C17EE0(s32 arg0, ? arg1, s32 arg2, ? arg3) {
    if (arg2 == 8) {
        SysMatrix_StatePop();
    }
    return 1;
}

void DemoMoonend_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp2C;
    Gfx *temp_a2;
    GraphicsContext *temp_v0;
    DemoMoonend *this = (DemoMoonend *) thisx;

    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_0600B540));
    temp_v0 = globalCtx->state.gfxCtx;
    temp_a2 = temp_v0->polyOpa.d - (((this->unk_15C->unk_1 << 6) + 0xF) & ~0xF);
    temp_v0->polyOpa.d = temp_a2;
    if (temp_a2 != 0) {
        sp2C = temp_a2;
        func_8012C2DC(globalCtx->state.gfxCtx);
        func_8012C28C(globalCtx->state.gfxCtx);
        func_8018450C(globalCtx, &this->unk_144, temp_a2, func_80C17E70, func_80C17EE0, this);
    }
}

void func_80C17FCC(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    AnimatedMat_DrawXlu(globalCtx, Lib_SegmentedToVirtual(&D_060129F0));
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06010C40;
    temp_v0_2->words.w0 = 0xDE000000;
}
