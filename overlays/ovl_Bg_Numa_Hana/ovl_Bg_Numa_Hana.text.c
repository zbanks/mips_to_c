typedef struct BgNumaHana {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ FireObj unk_15C;                    /* inferred */
    /* 0x1E8 */ ColliderCylinder unk_1E8;           /* inferred */
    /* 0x234 */ void (*actionFunc)(BgNumaHana *, GlobalContext *);
    /* 0x238 */ char pad_238[0xC];                  /* maybe part of actionFunc[4]? */
    /* 0x244 */ Vec3s unk_244;                      /* inferred */
    /* 0x24A */ char pad_24A[0x66];                 /* maybe part of unk_244[18]? */
    /* 0x2B0 */ ? unk_2B0;                          /* inferred */
    /* 0x2B0 */ char pad_2B0[0x78];
    /* 0x328 */ s16 unk_328;                        /* inferred */
    /* 0x32A */ s16 unk_32A;                        /* inferred */
    /* 0x32C */ s16 unk_32C;                        /* inferred */
    /* 0x32E */ s16 unk_32E;                        /* inferred */
    /* 0x330 */ s16 unk_330;                        /* inferred */
    /* 0x332 */ char pad_332[0x2];
    /* 0x334 */ f32 unk_334;                        /* inferred */
    /* 0x338 */ s16 unk_338;                        /* inferred */
    /* 0x33A */ s16 unk_33A;                        /* inferred */
    /* 0x33C */ s16 unk_33C;                        /* inferred */
    /* 0x33E */ s16 unk_33E;                        /* inferred */
} BgNumaHana;                                       /* size = 0x340 */

struct _mips2c_stack_BgNumaHana_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgNumaHana_Draw {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ ? *sp48;                             /* inferred */
    /* 0x4C */ ? *sp4C;                             /* inferred */
    /* 0x50 */ char pad_50[0x48];
};                                                  /* size = 0x98 */

struct _mips2c_stack_BgNumaHana_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ FireObj *sp24;                       /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_BgNumaHana_Update {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ FireObj *sp24;                       /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A1A500 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A1A56C {
    /* 0x00 */ char pad_0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80A1A750 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A1AA14 {};              /* size 0x0 */

struct _mips2c_stack_func_80A1AA28 {};              /* size 0x0 */

struct _mips2c_stack_func_80A1AA38 {};              /* size 0x0 */

struct _mips2c_stack_func_80A1AA4C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A1AAE8 {};              /* size 0x0 */

struct _mips2c_stack_func_80A1AB00 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A1ABD8 {};              /* size 0x0 */

struct _mips2c_stack_func_80A1ABF0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A1ACCC {};              /* size 0x0 */

struct _mips2c_stack_func_80A1ACE0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ DynaCollisionContext *sp24;          /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A1AE08 {};              /* size 0x0 */

struct _mips2c_stack_func_80A1AE1C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

s32 func_80A1A500(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A1A56C(BgNumaHana *arg0);               /* static */
void func_80A1A750(s16 *arg0, s16 *arg1, f32 *arg2, f32 arg3); /* static */
void func_80A1AA14(BgNumaHana *arg0);               /* static */
void func_80A1AA38(BgNumaHana *arg0);               /* static */
void func_80A1AAE8(BgNumaHana *arg0);               /* static */
void func_80A1ABD8(BgNumaHana *arg0);               /* static */
void func_80A1ACCC(BgNumaHana *arg0);               /* static */
void func_80A1AE08(BgNumaHana *arg0);               /* static */
extern ? D_06000870;
extern CollisionHeader D_06009FE0;
extern CollisionHeader D_0600A740;
extern ? D_0600AB88;
extern ? D_0600B928;
extern ? D_0600BE58;
static ColliderCylinderInit D_80A1B260 = {
    {9, 0, 0xD, 0x39, 0x20, 1},
    {2, {0, 0, 0}, {0x1CBFBB6, 0, 0}, 0, 5, 1},
    {0x12, 0x10, 0, {0, 0, 0}},
};
static FireObjInitParams D_80A1B28C = {0.00405f, 0.05f, 3, 1, 0, 0, 0};
static s16 D_80A1B29C[6] = {0, 0x2AAA, 0x5555, 0x8000, 0xAAAA, 0xD555};
static InitChainEntry D_80A1B2A8[6];                /* unable to generate initializer */

s32 func_80A1A500(Actor *arg0, GlobalContext *arg1) {
    return Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, 0x13D, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) (s32) arg0->shape.rot.x, (s16) (s32) arg0->shape.rot.y, (s16) (s32) arg0->shape.rot.z, 1) != 0;
}

void func_80A1A56C(BgNumaHana *arg0) {
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f20;
    f32 temp_f24;
    f32 temp_f26;
    s16 *temp_s6;
    s16 temp_s1;
    s16 *phi_s6;
    void *phi_s2;
    void *phi_s5;

    temp_f24 = arg0->actor.world.pos.y + -10.0f;
    temp_f20 = (Math_CosS((s16) (arg0->unk_328 - 0x2000)) * 77.42784f) + 74.95192f;
    temp_f26 = (Math_SinS(arg0->unk_328) * 77.42784f) + arg0->actor.world.pos.y + -64.74976f;
    phi_s6 = D_80A1B29C;
    phi_s2 = arg0 + 0x238;
    phi_s5 = arg0 + 0x2B0;
    do {
        temp_s1 = *phi_s6 + arg0->actor.shape.rot.y + 0x1555;
        temp_f10 = Math_SinS(temp_s1) * 74.95192f;
        phi_s2->unk_4 = temp_f24;
        phi_s2->unk_0 = (f32) (temp_f10 + arg0->actor.world.pos.x);
        phi_s2->unk_8 = (f32) ((Math_CosS(temp_s1) * 74.95192f) + arg0->actor.world.pos.z);
        phi_s2->unk_E = (s16) (temp_s1 - 0x4000);
        phi_s2->unk_C = (s16) arg0->actor.shape.rot.x;
        phi_s2->unk_10 = (s16) (arg0->actor.shape.rot.z + arg0->unk_328);
        temp_f10_2 = Math_SinS(temp_s1) * temp_f20;
        phi_s5->unk_4 = temp_f26;
        phi_s5->unk_0 = (f32) (temp_f10_2 + arg0->actor.world.pos.x);
        temp_s6 = phi_s6 + 2;
        phi_s5->unk_8 = (f32) ((Math_CosS(temp_s1) * temp_f20) + arg0->actor.world.pos.z);
        phi_s5->unk_C = (s16) phi_s2->unk_C;
        phi_s5->unk_E = (s16) phi_s2->unk_E;
        phi_s5->unk_10 = (s16) (phi_s2->unk_10 + arg0->unk_338);
        phi_s6 = temp_s6;
        phi_s2 += 0x14;
        phi_s5 += 0x14;
    } while (temp_s6 != D_80A1B2A8);
}

void func_80A1A750(s16 *arg0, s16 *arg1, f32 *arg2, f32 arg3) {
    *arg1 += 0x32C8;
    arg1 = arg1;
    Math_StepToF(arg2, 0.0f, arg3);
    *arg0 += (s32) (Math_SinS(*arg1) * *arg2);
}

void BgNumaHana_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp2C;
    FireObj *sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1_2;
    FireObj *temp_a1;
    BgNumaHana *this = (BgNumaHana *) thisx;

    sp2C = this->actor.params & 1;
    Actor_ProcessInitChain((Actor *) this, D_80A1B2A8);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 3);
    if (sp2C == 1) {
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06009FE0);
        func_80A1AA14(this);
        this->actor.draw = NULL;
        return;
    }
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_0600A740);
    temp_a1 = &this->unk_15C;
    sp24 = temp_a1;
    FireObj_Init(globalCtx, temp_a1, &D_80A1B28C, (Actor *) this);
    temp_a1_2 = &this->unk_1E8;
    sp20 = temp_a1_2;
    Collider_InitCylinder(globalCtx, temp_a1_2);
    Collider_SetCylinder(globalCtx, temp_a1_2, (Actor *) this, &D_80A1B260);
    this->actor.colChkInfo.mass = 0xFF;
    if (func_80A1A500((Actor *) this, globalCtx) == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((gSaveContext.weekEventReg[12] & 1) != 0) {
        func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
        this->unk_328 = 0x2000;
        this->unk_32A = 0x2000;
        this->unk_32C = 0;
        this->unk_32E = 0;
        this->unk_330 = 0;
        this->unk_338 = -0x4000;
        this->unk_33A = 0;
        this->unk_33C = 0x147;
        this->actor.world.pos.y = this->actor.home.pos.y + 210.0f;
        this->unk_334 = 0.0f;
        FireObj_SetState2(sp24, 0.05f, 2U);
        Actor_SetSwitchFlag(globalCtx, ((s32) this->actor.params >> 8) & 0x7F);
        func_80A1AE08(this);
    } else {
        func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, this->actor.child->unk_144);
        Actor_UnsetSwitchFlag(globalCtx, ((s32) this->actor.params >> 8) & 0x7F);
        func_80A1AA38(this);
    }
    func_80A1A56C(this);
}

void BgNumaHana_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;
    BgNumaHana *this = (BgNumaHana *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk_144);
    if ((this->actor.params & 1) == 0) {
        FireObj_Fini(globalCtx, &this->unk_15C);
        Collider_DestroyCylinder(globalCtx, &this->unk_1E8);
    }
}

void func_80A1AA14(BgNumaHana *arg0) {
    arg0->actionFunc = func_80A1AA28;
}

void func_80A1AA28(BgNumaHana *this, GlobalContext *globalCtx) {

}

void func_80A1AA38(BgNumaHana *arg0) {
    arg0->actionFunc = func_80A1AA4C;
}

void func_80A1AA4C(BgNumaHana *this, GlobalContext *globalCtx) {
    if (this->unk_15C.state != 3) {
        Audio_PlayActorSound2((Actor *) this, 0x2822U);
        if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
            gSaveContext.weekEventReg[12] |= 1;
            Actor_SetSwitchFlag(globalCtx, ((s32) this->actor.params >> 8) & 0x7F);
            func_80A1AAE8(this);
            return;
        }
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80A1AAE8(BgNumaHana *arg0) {
    arg0->actionFunc = func_80A1AB00;
    arg0->unk_33E = 0;
}

void func_80A1AB00(BgNumaHana *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    Math_StepToS(&this->unk_32C, 0xF0, 0xE);
    if (Math_ScaledStepToS(&this->unk_32A, 0x2000, this->unk_32C) != 0) {
        temp_v0 = this->unk_33E;
        if ((s32) temp_v0 >= 0xB) {
            func_80A1ABD8(this);
        } else {
            if ((s32) temp_v0 <= 0) {
                this->unk_32E = 0;
                this->unk_330 = 0;
                this->unk_334 = 420.0f;
                Audio_PlayActorSound2((Actor *) this, 0x28F8U);
            }
            this->unk_33E += 1;
        }
    } else {
        func_800B9010((Actor *) this, 0x20F7U);
    }
    func_80A1A750(&this->unk_32E, &this->unk_330, &this->unk_334, 20.0f);
    this->unk_328 = this->unk_32A + this->unk_32E;
    func_80A1A56C(this);
}

void func_80A1ABD8(BgNumaHana *arg0) {
    arg0->actionFunc = func_80A1ABF0;
    arg0->unk_33E = 0;
}

void func_80A1ABF0(BgNumaHana *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    Math_StepToS(&this->unk_33A, 0xF0, 0xE);
    if (Math_ScaledStepToS(&this->unk_338, -0x4000, this->unk_33A) != 0) {
        temp_v0 = this->unk_33E;
        if ((s32) temp_v0 >= 0xB) {
            func_80A1ACCC(this);
        } else {
            if ((s32) temp_v0 <= 0) {
                this->unk_32E = 0;
                this->unk_330 = 0x5120;
                this->unk_334 = 130.0f;
                Audio_PlayActorSound2((Actor *) this, 0x28F8U);
            }
            this->unk_33E += 1;
        }
    } else {
        func_800B9010((Actor *) this, 0x20F7U);
    }
    func_80A1A750(&this->unk_32E, &this->unk_330, &this->unk_334, 7.0f);
    this->unk_328 = this->unk_32A + this->unk_32E;
    func_80A1A56C(this);
}

void func_80A1ACCC(BgNumaHana *arg0) {
    arg0->actionFunc = func_80A1ACE0;
}

void func_80A1ACE0(BgNumaHana *this, GlobalContext *globalCtx) {
    DynaCollisionContext *sp24;
    DynaCollisionContext *temp_a1;

    func_80A1A750(&this->unk_32E, &this->unk_330, &this->unk_334, 10.0f);
    this->unk_328 = this->unk_32A + this->unk_32E;
    Math_StepToS(&this->unk_33C, 0x111, 0xA);
    this->actor.shape.rot.y += this->unk_33C;
    Math_StepToF(&this->actor.velocity.y, 3.0f, 0.3f);
    if (Math_StepToF(&this->actor.world.pos.y, this->actor.home.pos.y + 210.0f, this->actor.velocity.y) != 0) {
        temp_a1 = &globalCtx->colCtx.dyna;
        sp24 = temp_a1;
        func_800C6314(globalCtx, temp_a1, this->actor.child->unk_144);
        func_800C62BC(globalCtx, temp_a1, this->unk_144);
        this->unk_328 = 0x2000;
        this->unk_32A = 0x2000;
        this->unk_32C = 0;
        this->unk_32E = 0;
        this->unk_330 = 0;
        this->unk_338 = -0x4000;
        this->unk_33A = 0;
        this->unk_33C = 0x147;
        this->unk_334 = 0.0f;
        ActorCutscene_Stop((s16) this->actor.cutscene);
        func_80A1AE08(this);
    }
    func_80A1A56C(this);
    func_800B9010((Actor *) this, 0x20F9U);
}

void func_80A1AE08(BgNumaHana *arg0) {
    arg0->actionFunc = func_80A1AE1C;
}

void func_80A1AE1C(BgNumaHana *this, GlobalContext *globalCtx) {
    this->actor.shape.rot.y += this->unk_33C;
    this->unk_328 = this->unk_32A + this->unk_32E;
    func_80A1A56C();
    func_800B9010((Actor *) this, 0x20F9U);
}

void BgNumaHana_Update(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    FireObj *sp24;
    ColliderCylinder *sp20;
    Actor *temp_t1;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    FireObj *temp_a3;
    s32 temp_t7;
    BgNumaHana *this = (BgNumaHana *) thisx;

    temp_t7 = this->actor.params & 1;
    sp34 = temp_t7;
    if (temp_t7 == 0) {
        sp28 = this->actor.world.pos.x;
        temp_a3 = &this->unk_15C;
        sp2C = this->actor.world.pos.y + 10.5f;
        sp24 = temp_a3;
        sp30 = this->actor.world.pos.z;
        FireObj_SetPosition(temp_a3, (Vec3f *) &sp28);
        FireObj_Update(globalCtx, sp24);
    }
    this->actionFunc(this, globalCtx);
    if (sp34 == 0) {
        temp_t1 = this->actor.child;
        temp_a1 = &this->unk_1E8;
        temp_t1->unk_BC = (unaligned s32) this->unk_BC;
        temp_t1->shape.rot.z = (s16) (u16) this->actor.shape.rot.z;
        sp20 = temp_a1;
        Collider_UpdateCylinder((Actor *) this, temp_a1);
        temp_a1_2 = &globalCtx->colChkCtx;
        sp24 = (FireObj *) temp_a1_2;
        CollisionCheck_SetOC(globalCtx, temp_a1_2, (Collider *) sp20);
        CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp20);
    }
}

void BgNumaHana_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ? *sp4C;
    ? *sp48;
    ? *temp_s2;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s3;
    ObjectContext *temp_s0;
    s32 temp_s4;
    s32 temp_v0_7;
    BgNumaHana *phi_s1;
    Vec3s *phi_s6;
    ? *phi_s2;
    Vec3s *phi_s5;
    s32 phi_s4;
    BgNumaHana *this = (BgNumaHana *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s3 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s3->polyOpa.p;
    temp_s3->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    temp_v0->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s3->polyOpa.p;
    temp_s3->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) &D_0600B928;
    temp_s2 = &this->unk_2B0;
    sp4C = &D_0600AB88;
    sp48 = &D_0600BE58;
    phi_s1 = this;
    phi_s6 = &this->unk_244;
    phi_s2 = temp_s2;
    phi_s5 = temp_s2 + 0xC;
    phi_s4 = 0;
    do {
        SysMatrix_SetStateRotationAndTranslation(phi_s1->unk_238, phi_s1->unk_23C, phi_s1->unk_240, phi_s6);
        Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
        temp_v0_3 = temp_s3->polyOpa.p;
        temp_s3->polyOpa.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xDA380003;
        temp_v0_3->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_4 = temp_s3->polyOpa.p;
        temp_s3->polyOpa.p = &temp_v0_4[1];
        temp_v0_4->words.w0 = 0xDE000000;
        temp_v0_4->words.w1 = (u32) sp4C;
        SysMatrix_SetStateRotationAndTranslation(phi_s2->unk_0, phi_s2->unk_4, phi_s2->unk_8, phi_s5);
        Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
        temp_v0_5 = temp_s3->polyOpa.p;
        temp_s3->polyOpa.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xDA380003;
        temp_v0_5->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_6 = temp_s3->polyOpa.p;
        temp_s4 = phi_s4 + 0x14;
        temp_s3->polyOpa.p = &temp_v0_6[1];
        temp_v0_6->words.w0 = 0xDE000000;
        temp_v0_6->words.w1 = (u32) sp48;
        phi_s1 += 0x14;
        phi_s6 = (Vec3s *) &phi_s6[3].y;
        phi_s2 += 0x14;
        phi_s5 = (Vec3s *) &phi_s5[3].y;
        phi_s4 = temp_s4;
    } while (temp_s4 != 0x78);
    temp_s0 = &globalCtx->objectCtx;
    temp_v0_7 = Object_GetIndex(temp_s0, 0x80);
    if ((temp_v0_7 >= 0) && (Object_IsLoaded(temp_s0, temp_v0_7) != 0)) {
        SysMatrix_SetStateRotationAndTranslation(this->actor.world.pos.x, this->actor.world.pos.y - 64.5f, this->actor.world.pos.z, (Vec3s *) &this->actor.shape);
        Matrix_Scale(1.5f, 1.5f, 1.5f, 1);
        temp_v0_8 = temp_s3->polyOpa.p;
        temp_s3->polyOpa.p = &temp_v0_8[1];
        temp_v0_8->words.w0 = 0xDA380003;
        temp_v0_8->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_9 = temp_s3->polyOpa.p;
        temp_s3->polyOpa.p = &temp_v0_9[1];
        temp_v0_9->words.w0 = 0xDB060018;
        temp_v0_9->words.w1 = (u32) globalCtx->objectCtx.status[temp_v0_7].segment;
        temp_v0_10 = temp_s3->polyOpa.p;
        temp_s3->polyOpa.p = &temp_v0_10[1];
        temp_v0_10->words.w1 = (u32) &D_06000870;
        temp_v0_10->words.w0 = 0xDE000000;
    }
    FireObj_Draw(globalCtx, &this->unk_15C);
}
