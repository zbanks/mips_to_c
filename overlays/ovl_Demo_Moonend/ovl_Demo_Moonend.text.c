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

typedef struct DemoMoonend {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ? unk144;                          /* inferred */
    /* 0x0145 */ char pad145[0xB];
    /* 0x0150 */ f32 unk150;                        /* inferred */
    /* 0x0154 */ char pad154[0x8];                  /* maybe part of unk150[3]? */
    /* 0x015C */ void *unk15C;                      /* inferred */
    /* 0x0160 */ char pad160[0x14];                 /* maybe part of unk15C[6]? */
    /* 0x0174 */ ? unk174;                          /* inferred */
    /* 0x0175 */ char pad175[0xB3];
    /* 0x0228 */ ? unk228;                          /* inferred */
    /* 0x0229 */ char pad229[0xB3];
    /* 0x02DC */ u16 unk2DC;                        /* inferred */
    /* 0x02DE */ u16 unk2DE;                        /* inferred */
    /* 0x02E0 */ void (*actionFunc)(DemoMoonend *, GlobalContext *);
} DemoMoonend;                                      /* size 0x2E4 */

void DemoMoonend_Init(Actor *thisx, GlobalContext *globalCtx) {
    DemoMoonend *this = (DemoMoonend *) thisx;
    ? *sp28;
    ? *temp_a0;

    Actor_SetScale(&this->actor, 0.1f);
    this->actionFunc = func_80C17B50;
    if ((this->actor.params & 0xF) == 1) {
        Actor_SetScale(&this->actor, 0.05f);
        Actor_SetScale(&this->actor, 6.0f);
        this->actor.draw = NULL;
        this->unk2DC = 0x22E;
        this->actionFunc = func_80C17B60;
        return;
    }
    Actor_SetScale(&this->actor, 0.095f);
    temp_a0 = &this->unk144;
    sp28 = temp_a0;
    func_80183430(temp_a0, &D_0600B5A0, &D_06001214, &this->unk174, &this->unk228, 0);
    func_801834A8(temp_a0, &D_06001214);
    this->unk2DC = 0x230;
    this->actionFunc = func_80C17C48;
    this->actor.home.rot.z = 0;
    this->actor.draw = NULL;
    this->unk150 = 0.6666667f;
}

void DemoMoonend_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DemoMoonend *this = (DemoMoonend *) thisx;
    if ((this->actor.params & 0xF) != 1) {
        func_8018349C(&this->unk144, this);
    }
}

void func_80C17B50(DemoMoonend *arg0, GlobalContext *arg1) {

}

void func_80C17B60(DemoMoonend *arg0, GlobalContext *arg1) {
    u16 sp26;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 phi_v0;

    if (func_800EE29C(arg1, (u32) arg0->unk2DC) != 0) {
        sp26 = arg1->csCtx.npcActions[func_800EE200(arg1, (u32) arg0->unk2DC)]->unk0;
        func_800EDF24(&arg0->actor, arg1, func_800EE200(arg1, (u32) arg0->unk2DC));
        temp_v0 = arg0->unk2DE;
        phi_v0 = temp_v0;
        if (sp26 != temp_v0) {
            temp_v0_2 = sp26 & 0xFFFF;
            arg0->unk2DE = sp26;
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
                phi_v0 = arg0->unk2DE;
            }
        }
        if (phi_v0 == 2) {
            func_800B9010(&arg0->actor, 0x21B2U);
            return;
        }
        // Duplicate return node #11. Try simplifying control flow for better match
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

    temp_a0 = &arg0->unk144;
    sp24 = temp_a0;
    if (func_80183DE0(temp_a0) != 0) {
        arg0->actor.home.rot.z = 0;
    }
    if (func_800EE29C(arg1, (u32) arg0->unk2DC) != 0) {
        sp2E = arg1->csCtx.npcActions[func_800EE200(arg1, (u32) arg0->unk2DC)]->unk0;
        func_800EDF24(&arg0->actor, arg1, func_800EE200(arg1, (u32) arg0->unk2DC));
        temp_v0 = sp2E & 0xFFFF;
        if (sp2E != arg0->unk2DE) {
            arg0->unk2DE = sp2E;
            if (temp_v0 != 1) {
                if (temp_v0 != 2) {

                } else {
                    arg0->actor.draw = DemoMoonend_Draw;
                    func_801834A8(sp24, &D_06001214);
                    arg0->unk150 = 0.6666667f;
                    Audio_PlayActorSound2(&arg0->actor, 0x29B1U);
                    arg0->actor.home.rot.z = 1;
                }
            } else {
                arg0->actor.draw = DemoMoonend_Draw;
                func_801834A8(sp24, &D_06001214);
                arg0->unk150 = 0.0f;
            }
        }
        if (arg0->actor.home.rot.z != 0) {
            func_800B9010(&arg0->actor, 0x2159U);
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
                        Audio_PlayActorSound2(&arg0->actor, 0x3AC2U);
                        // Duplicate return node #26. Try simplifying control flow for better match
                        return;
                    }
                    Audio_PlayActorSound2(&arg0->actor, 0x3AC0U);
                    return;
                }
                Audio_PlayActorSound2(&arg0->actor, 0x3AC1U);
                return;
            }
            Audio_PlayActorSound2(&arg0->actor, 0x3AC0U);
            return;
        }
        Audio_PlayActorSound2(&arg0->actor, 0x3ABFU);
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
        Matrix_RotateY((s16) (func_800DFCDC((arg0 + (arg0->unk810 * 4))->unk800) + 0x8000), 1U);
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
    DemoMoonend *this = (DemoMoonend *) thisx;
    Gfx *sp2C;
    Gfx *temp_a2;
    GraphicsContext *temp_v0;

    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_0600B540));
    temp_v0 = globalCtx->state.gfxCtx;
    temp_a2 = temp_v0->polyOpa.d - (((this->unk15C->unk1 << 6) + 0xF) & ~0xF);
    temp_v0->polyOpa.d = temp_a2;
    if (temp_a2 != 0) {
        sp2C = temp_a2;
        func_8012C2DC(globalCtx->state.gfxCtx);
        func_8012C28C(globalCtx->state.gfxCtx);
        func_8018450C(globalCtx, &this->unk144, temp_a2, func_80C17E70, func_80C17EE0, this);
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

