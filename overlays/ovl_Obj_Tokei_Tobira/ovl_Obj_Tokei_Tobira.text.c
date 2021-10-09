void func_80ABD3B0(ObjTokeiTobira *, GlobalContext *); /* static */
static InitChainEntry D_80ABD750;                   /* unable to generate initializer */
static Vec3f D_80ABD760 = {0.0f, 0.0f, 80.0f};
static ? D_80ABD76C;                                /* unable to generate initializer */
static ? D_80ABD770;                                /* unable to generate initializer */
static ? D_80ABD778;                                /* unable to generate initializer */
static ? D_80ABD780;                                /* unable to generate initializer */

typedef struct ObjTokeiTobira {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ void (*actionFunc)(ObjTokeiTobira *, GlobalContext *);
    /* 0x0160 */ f32 unk160;                        /* inferred */
    /* 0x0164 */ f32 unk164;                        /* inferred */
    /* 0x0168 */ s32 unk168;                        /* inferred */
    /* 0x016C */ s32 unk16C;                        /* inferred */
} ObjTokeiTobira;                                   /* size 0x170 */

void ObjTokeiTobira_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjTokeiTobira *this = (ObjTokeiTobira *) thisx;
    s32 sp54;
    Vec3f sp48;
    s16 *sp44;
    s16 *temp_v0;

    sp54 = this->actor.params & 1;
    Actor_ProcessInitChain(&this->actor, &D_80ABD750);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 3);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, *(&D_80ABD770 + (sp54 * 4)));
    if (sp54 == 0) {
        Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, 0x1A2, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) (s32) this->actor.shape.rot.z, 1);
    }
    temp_v0 = (sp54 * 2) + &D_80ABD76C;
    sp44 = temp_v0;
    Matrix_RotateY((s16) (*temp_v0 + this->actor.shape.rot.y), 0U);
    SysMatrix_MultiplyVector3fByState(&D_80ABD760, &sp48);
    this->actor.world.pos.x += sp48.x;
    this->actor.world.pos.y += sp48.y;
    this->actor.world.pos.z += sp48.z;
    if ((sp44 == &D_80ABD76C) && ((gSaveContext.weekEventReg[59] & 4) == 0) && (globalCtx->sceneNum == 0x6F) && (gSaveContext.sceneSetupIndex == 0) && ((s32) this->actor.cutscene >= 0)) {
        this->actionFunc = func_80ABD3B0;
        this->actor.flags |= 0x10;
    }
}

void ObjTokeiTobira_Destroy(Actor *thisx, GlobalContext *globalCtx) {
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
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0_2, &temp_a1->actor);
        gSaveContext.weekEventReg[59] |= 4;
        arg0->actionFunc = NULL;
        arg0->actor.flags &= -0x11;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a1->actor.cutscene);
}

void ObjTokeiTobira_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjTokeiTobira *this = (ObjTokeiTobira *) thisx;
    Actor *sp54;
    f32 sp48;
    f32 sp40;
    Vec3f sp34;
    Vec3f sp24;
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
            Actor_CalcOffsetOrientedToDrawRotation(&temp_a0->actor, &sp34, &temp_v1->world.pos);
            temp_f0 = sp34.x * temp_f14;
            phi_a3 = this;
            phi_f14 = temp_f14;
            if (temp_f0 > 20.0f) {
                if (sp34.z > 0.0f) {
                    this->unk168 = 1;
                    temp_a0_2 = this;
                    this->unk160 += (temp_f0 - 20.0f) * temp_f14 * 5.3333335f;
                    if (this->unk16C <= 0) {
                        this = this;
                        sp40 = temp_f0;
                        sp48 = temp_f14;
                        Audio_PlayActorSound2(&temp_a0_2->actor, 0x5809U);
                        this->unk16C = 0x50;
                    }
                }
                phi_a3 = this;
                phi_f14 = *temp_t0;
                if ((sp34.x * temp_f14) > 48.0f) {
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
            Actor_CalcOffsetOrientedToDrawRotation(&temp_a0_3->actor, &sp24, &temp_v1->world.pos);
            phi_a3 = this;
            phi_f14 = temp_f14;
            if ((sp24.z > 0.0f) && (sp24.z < 30.0f)) {
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

void ObjTokeiTobira_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjTokeiTobira *this = (ObjTokeiTobira *) thisx;
    func_800BDFC0(globalCtx, *(&D_80ABD780 + ((this->actor.params & 1) * 4)));
}

