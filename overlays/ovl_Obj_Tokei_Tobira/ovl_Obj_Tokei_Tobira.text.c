typedef struct ObjTokeiTobira {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ void (*actionFunc)(ObjTokeiTobira *, GlobalContext *);
    /* 0x160 */ f32 unk160;                         /* inferred */
    /* 0x164 */ char pad164[0x4];
    /* 0x168 */ s32 unk168;                         /* inferred */
    /* 0x16C */ s32 unk16C;                         /* inferred */
} ObjTokeiTobira;                                   /* size = 0x170 */

struct _mips2c_stack_ObjTokeiTobira_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjTokeiTobira_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjTokeiTobira_Init {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ s16 *sp44;                           /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ s32 sp54;                            /* inferred */
    /* 0x58 */ char pad58[0x8];
};                                                  /* size = 0x60 */

struct _mips2c_stack_ObjTokeiTobira_Update {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ f32 *sp20;                           /* inferred */
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad24[0x8];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad44[0x4];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad4C[0x8];                     /* maybe part of sp48[3]? */
    /* 0x54 */ Actor *sp54;                         /* inferred */
    /* 0x58 */ char pad58[0x8];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80ABD3B0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void func_80ABD3B0(ObjTokeiTobira *, GlobalContext *); /* static */
static InitChainEntry D_80ABD750[4];                /* unable to generate initializer */
static Vec3f D_80ABD760 = {0.0f, 0.0f, 80.0f};
static ? D_80ABD76C;                                /* unable to generate initializer */
static ? D_80ABD770;                                /* unable to generate initializer */
static ? D_80ABD778;                                /* unable to generate initializer */
static ? D_80ABD780;                                /* unable to generate initializer */

void ObjTokeiTobira_Init(ObjTokeiTobira *this, GlobalContext *globalCtx) {
    s32 sp54;
    f32 sp48;
    s16 *sp44;
    s16 *temp_v0;
    ObjTokeiTobira *this = (ObjTokeiTobira *) thisx;

    sp54 = this->actor.params & 1;
    Actor_ProcessInitChain((Actor *) this, D_80ABD750);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 3);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, *(&D_80ABD770 + (sp54 * 4)));
    if (sp54 == 0) {
        Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x1A2, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) (s32) this->actor.shape.rot.z, 1);
    }
    temp_v0 = (sp54 * 2) + &D_80ABD76C;
    sp44 = temp_v0;
    Matrix_RotateY((s16) (*temp_v0 + this->actor.shape.rot.y), 0U);
    SysMatrix_MultiplyVector3fByState(&D_80ABD760, (Vec3f *) &sp48);
    this->actor.world.pos.x += sp48;
    this->actor.world.pos.y += sp4C;
    this->actor.world.pos.z += sp50;
    if ((sp44 == &D_80ABD76C) && ((gSaveContext.weekEventReg[59] & 4) == 0) && (globalCtx->sceneNum == 0x6F) && (gSaveContext.sceneSetupIndex == 0) && ((s32) this->actor.cutscene >= 0)) {
        this->actionFunc = func_80ABD3B0;
        this->actor.flags |= 0x10;
    }
}

void ObjTokeiTobira_Destroy(ObjTokeiTobira *this, GlobalContext *globalCtx) {
    ObjTokeiTobira *this = (ObjTokeiTobira *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_80ABD3B0(ObjTokeiTobira *arg0, GlobalContext *arg1) {
    ObjTokeiTobira *temp_a1;
    s8 temp_a0;
    s8 temp_a0_2;

    temp_a0 = arg0->actor.cutscene;
    arg0 = arg0;
    temp_a1 = arg0;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        temp_a0_2 = temp_a1->actor.cutscene;
        arg0 = temp_a1;
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0_2, (Actor *) temp_a1);
        gSaveContext.weekEventReg[59] |= 4;
        arg0->actionFunc = NULL;
        arg0->actor.flags &= -0x11;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a1->actor.cutscene);
}

void ObjTokeiTobira_Update(ObjTokeiTobira *this, GlobalContext *globalCtx) {
    Actor *sp54;
    f32 sp48;
    f32 sp40;
    f32 sp34;
    ? sp24;
    f32 *sp20;
    ? (*temp_v0_2)(f32, f32, ObjTokeiTobira *);
    Actor *temp_v1;
    ObjTokeiTobira *temp_a0;
    ObjTokeiTobira *temp_a0_2;
    ObjTokeiTobira *temp_a0_3;
    f32 *temp_t0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s32 temp_v0;
    void *phi_v0;
    ObjTokeiTobira *phi_a3;
    f32 phi_f14;
    ObjTokeiTobira *this = (ObjTokeiTobira *) thisx;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    temp_t0 = ((this->actor.params & 1) * 4) + &D_80ABD778;
    temp_f14 = *temp_t0;
    phi_a3 = this;
    phi_f14 = temp_f14;
    if ((temp_v1->bgCheckFlags & 0x200) != 0) {
        sp48 = temp_f14;
        sp20 = temp_t0;
        this = this;
        sp54 = temp_v1;
        temp_a0 = this;
        phi_a3 = this;
        phi_f14 = temp_f14;
        if (BgCheck_GetActorOfMesh(&globalCtx->colCtx, (s32) temp_v1->wallBgId) == this) {
            this = this;
            sp48 = temp_f14;
            Actor_CalcOffsetOrientedToDrawRotation((Actor *) temp_a0, (Vec3f *) &sp34, (Vec3f *) &temp_v1->world);
            temp_f0 = sp34 * temp_f14;
            phi_a3 = this;
            phi_f14 = temp_f14;
            if (temp_f0 > 20.0f) {
                if (sp3C > 0.0f) {
                    this->unk168 = 1;
                    temp_a0_2 = this;
                    this->unk160 += (temp_f0 - 20.0f) * temp_f14 * 5.3333335f;
                    if (this->unk16C <= 0) {
                        this = this;
                        sp40 = temp_f0;
                        sp48 = temp_f14;
                        Audio_PlayActorSound2((Actor *) temp_a0_2, 0x5809U);
                        this->unk16C = 0x50;
                    }
                }
                phi_a3 = this;
                phi_f14 = *temp_t0;
                if ((sp34 * temp_f14) > 48.0f) {
                    if (sp20 == &D_80ABD778) {
                        phi_v0 = this->actor.child;
                    } else {
                        phi_v0 = this->actor.parent;
                    }
                    if (phi_v0 != 0) {
                        phi_v0->unk168 = 1;
                    }
                }
            }
        }
    } else {
        temp_a0_3 = this;
        if (this->unk168 == 1) {
            this = this;
            sp48 = temp_f14;
            Actor_CalcOffsetOrientedToDrawRotation((Actor *) temp_a0_3, (Vec3f *) &sp24, (Vec3f *) &temp_v1->world);
            phi_a3 = this;
            phi_f14 = temp_f14;
            if ((sp2C > 0.0f) && (sp2C < 30.0f)) {
                this->unk168 = 1;
                this->unk160 += temp_f14 * 290.0f;
            }
        }
    }
    temp_v0 = phi_a3->unk16C;
    if (temp_v0 > 0) {
        phi_a3->unk16C = temp_v0 - 1;
    }
    phi_a3->unk168 = 0;
    phi_a3->unk160 *= 0.87f;
    temp_f2 = phi_a3->unk160;
    phi_a3->unk164 += temp_f2;
    temp_f12 = phi_a3->unk164 * phi_f14;
    if (temp_f12 > 14336.0f) {
        phi_a3->unk160 = temp_f2 * 0.1f;
        phi_a3->unk164 = 14336.0f * phi_f14;
        goto block_22;
    }
    if (temp_f12 < -1000.0f) {
        phi_a3->unk160 = temp_f2 * 0.1f;
        phi_a3->unk164 = -1000.0f * phi_f14;
block_22:
    }
    temp_v0_2 = phi_a3->actionFunc;
    phi_a3->actor.shape.rot.y = (s32) phi_a3->unk164 + phi_a3->actor.home.rot.y;
    if (temp_v0_2 != 0) {
        temp_v0_2(temp_f12, phi_f14, phi_a3);
    }
}

void ObjTokeiTobira_Draw(ObjTokeiTobira *this, GlobalContext *globalCtx) {
    ObjTokeiTobira *this = (ObjTokeiTobira *) thisx;
    func_800BDFC0(globalCtx, *(&D_80ABD780 + ((this->actor.params & 1) * 4)));
}
