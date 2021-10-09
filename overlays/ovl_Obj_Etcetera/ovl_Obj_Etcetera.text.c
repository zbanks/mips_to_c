? func_800FAAB4(GlobalContext *, s32);              /* extern */
void func_80A7BDC8(Actor *arg0, GlobalContext *arg1, ObjEtcetera *); /* static */
void func_80A7BE8C(ObjEtcetera *arg0);              /* static */
void func_80A7C690(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A7C718(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_0400ED80;
extern SkeletonHeader D_04011518;
extern ? D_04011BD0;
extern SkeletonHeader D_040127E8;
static ColliderCylinderInit D_80A7C790 = {
    {0xA, 0, 9, 0, 0x10, 1},
    {0, {0, 0, 0}, {0x1000202, 0, 0}, 0, 1, 0},
    {0x14, 0xE, 0, {0, 0, 0}},
};
static ? D_80A7C7BC;                                /* unable to generate initializer */
static ? D_80A7C7C4;                                /* unable to generate initializer */
static ? D_80A7C80C;                                /* unable to generate initializer */

typedef struct ObjEtcetera {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ SkelAnime unk15C;                  /* inferred */
    /* 0x01A0 */ ColliderCylinder unk1A0;           /* inferred */
    /* 0x01EC */ Vec3s unk1EC;                      /* inferred */
    /* 0x01F2 */ char pad1F2[0x3C];                 /* maybe part of unk1EC[11]? */
    /* 0x022E */ Vec3s unk22E;                      /* inferred */
    /* 0x0234 */ char pad234[0x3C];                 /* maybe part of unk22E[11]? */
    /* 0x0270 */ f32 unk270;                        /* inferred */
    /* 0x0274 */ s16 unk274;                        /* inferred */
    /* 0x0276 */ u16 unk276;                        /* inferred */
    /* 0x0278 */ s8 unk278;                         /* inferred */
    /* 0x0279 */ char pad279[0x3];                  /* maybe part of unk278[4]? */
    /* 0x027C */ ? *unk27C;                         /* inferred */
    /* 0x0280 */ void (*actionFunc)(ObjEtcetera *, GlobalContext *);
} ObjEtcetera;                                      /* size 0x284 */

void ObjEtcetera_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjEtcetera *this = (ObjEtcetera *) thisx;
    s32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v0;

    temp_v0 = (s32) (this->actor.params & 0xFF80) >> 7;
    phi_v0 = temp_v0;
    if ((temp_v0 < 0) || (temp_v0 >= 4)) {
        phi_v0 = 0;
    }
    temp_v0_2 = Object_GetIndex(&globalCtx->objectCtx, *(&D_80A7C7BC + (phi_v0 * 2)));
    if (temp_v0_2 >= 0) {
        this->unk278 = (s8) temp_v0_2;
    }
    sp30 = this->actor.world.pos.x;
    sp34 = this->actor.world.pos.y + 10.0f;
    sp38 = this->actor.world.pos.z;
    func_800C411C(&globalCtx->colCtx, &this->actor.floorPoly, &sp3C, &this->actor, (Vec3f *) &sp30);
    temp_a1 = &this->unk1A0;
    this->actor.floorBgId = (u8) sp3C;
    sp2C = temp_a1;
    Collider_InitAndSetCylinder(globalCtx, temp_a1, &this->actor, &D_80A7C790);
    Collider_UpdateCylinder(&this->actor, temp_a1);
    this->actionFunc = func_80A7C308;
    Actor_SetScale(&this->actor, 0.01f);
    this->unk276 = 0;
    this->actor.scale.y = 0.02f;
}

void ObjEtcetera_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjEtcetera *this = (ObjEtcetera *) thisx;
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk144);
    Collider_DestroyCylinder(globalCtx, &this->unk1A0);
}

void func_80A7BDC8(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk274;
    if ((s32) temp_v0 > 0) {
        Actor_SetScale(arg0, (*(&D_80A7C7C4 + (((u32) arg1->gameplayFrames % 0x12U) * 4)) * (0.0001f * (f32) temp_v0)) + 0.01f);
        arg0->scale.y = 0.02f;
        arg0->unk274 = (s16) (arg0->unk274 - 1);
        return;
    }
    Actor_SetScale(arg0, 0.01f);
    arg0->scale.y = 0.02f;
}

void func_80A7BE8C(ObjEtcetera *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x15C, (AnimationHeader *) &D_040117A8, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_040117A8), (u8) 2, 0.0f);
    arg0->actor.draw = func_80A7C718;
    arg0->actionFunc = func_80A7C168;
}

void func_80A7BF08(ObjEtcetera *this, GlobalContext *globalCtx) {
    Actor *sp30;
    Actor *temp_v1;
    f32 temp_f0;
    s16 temp_v0_2;
    s32 temp_v0;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = temp_v1->unkA74;
    if (((temp_v0 & 0x200) != 0) && (this->actor.xzDistToPlayer < 20.0f)) {
        SkelAnime_ChangeAnim(&this->unk15C, (AnimationHeader *) &D_0400EB7C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0400EB7C), (u8) 2, 0.0f);
        this->actor.draw = func_80A7C718;
        this->actionFunc = func_80A7C1F0;
        Actor_SetScale(&this->actor, 0.01f);
        this->actor.scale.y = 0.02f;
        this->unk274 = 0x1E;
        this->unk276 &= 0xFFFE;
        this->unk270 = 0.003f;
    } else if (((temp_v0 & 0x2000) != 0) && (this->actor.xzDistToPlayer < 30.0f) && (temp_f0 = this->actor.yDistToPlayer, (temp_f0 > 0.0f))) {
        temp_v0_2 = 0xA - (s32) (temp_f0 * 0.05f);
        if ((s32) this->unk274 < (s32) temp_v0_2) {
            this->unk274 = temp_v0_2;
        }
    } else {
        sp30 = temp_v1;
        if (func_800CAF70((DynaPolyActor *) this) != 0) {
            if ((this->unk276 & 1) == 0) {
                this->unk274 = 0xA;
                func_80A7BE8C(this);
                goto block_15;
            }
            if ((temp_v1->speedXZ > 0.1f) || ((temp_v1->unkABC < 0.0f) && ((temp_v1->unkA74 & 0x100) == 0))) {
                this->unk274 = 0xA;
block_15:
            }
            this->unk276 |= 1;
        } else {
            if ((this->unk276 & 1) != 0) {
                this->unk274 = 0xA;
                func_80A7BE8C(this);
            }
            this->unk276 &= 0xFFFE;
        }
    }
    if ((this->unk1A0.base.acFlags & 2) != 0) {
        this->unk274 = 0xA;
        func_80A7BE8C(this);
    }
    func_80A7BDC8(&this->actor, globalCtx);
}

void func_80A7C168(ObjEtcetera *this, GlobalContext *globalCtx) {
    ObjEtcetera *temp_a0;
    SkelAnime *temp_a0_2;

    temp_a0 = this;
    this = this;
    if (func_800CAF70((DynaPolyActor *) temp_a0) != 0) {
        this->unk276 |= 1;
    } else {
        this->unk276 &= 0xFFFE;
    }
    temp_a0_2 = &this->unk15C;
    this = this;
    if (SkelAnime_FrameUpdateMatrix(temp_a0_2) != 0) {
        this->actor.draw = func_80A7C690;
        this->actionFunc = func_80A7BF08;
    }
    func_80A7BDC8(&this->actor, globalCtx, this);
}

void func_80A7C1F0(ObjEtcetera *this, GlobalContext *globalCtx) {
    f32 sp20;
    f32 temp_f0;
    s16 temp_v1;

    if (func_800CAF70((DynaPolyActor *) this) != 0) {
        this->unk276 |= 1;
    } else {
        this->unk276 &= 0xFFFE;
    }
    SkelAnime_FrameUpdateMatrix(&this->unk15C);
    temp_v1 = this->unk274;
    if ((s32) temp_v1 > 0) {
        this->unk274 = temp_v1 - 1;
        this->unk270 *= 0.8f;
        this->unk270 -= (this->actor.scale.x - 0.01f) * 0.4f;
        temp_f0 = this->actor.scale.x + this->unk270;
        sp20 = temp_f0;
        Actor_SetScale(&this->actor, temp_f0);
        this->actor.scale.y = 2.0f * temp_f0;
        return;
    }
    this->actor.draw = func_80A7C690;
    this->actionFunc = func_80A7BF08;
    Actor_SetScale(&this->actor, 0.01f);
    this->unk274 = 0;
    this->actor.scale.y = 0.02f;
    this->unk270 = 0.0f;
}

void func_80A7C308(ObjEtcetera *this, GlobalContext *globalCtx) {
    CollisionHeader *sp5C;
    s32 sp58;
    ? sp48;
    SkelAnime *sp34;
    CollisionHeader *temp_a0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;

    sp5C = NULL;
    sp48.unk0 = (s32) D_80A7C80C.unk0;
    sp48.unk4 = (s32) D_80A7C80C.unk4;
    sp48.unkC = (s32) D_80A7C80C.unkC;
    sp48.unk8 = (s32) D_80A7C80C.unk8;
    temp_v1 = (s32) (this->actor.params & 0xFF80) >> 7;
    phi_v1 = temp_v1;
    if ((temp_v1 < 0) || (temp_v1 >= 4)) {
        phi_v1 = 0;
    }
    sp58 = phi_v1;
    if (Object_IsLoaded(&globalCtx->objectCtx, (s32) this->unk278) != 0) {
        this->actor.objBankIndex = this->unk278;
        sp58 = phi_v1;
        Actor_SetObjectSegment(globalCtx, &this->actor);
        BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
        temp_a0 = (sp + (phi_v1 * 4))->unk48;
        if (temp_a0 != 0) {
            BgCheck_RelocateMeshHeader(temp_a0, &sp5C);
        }
        this->unk144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp5C);
        temp_v1_2 = (s32) (this->actor.params & 0xFF80) >> 7;
        phi_v1_2 = temp_v1_2;
        if ((temp_v1_2 != 0) && (temp_v1_2 != 1)) {
            if ((temp_v1_2 != 2) && (temp_v1_2 != 3)) {

            } else {
                this->unk27C = &D_04011BD0;
                SkelAnime_Init(globalCtx, &this->unk15C, &D_040127E8, (AnimationHeader *) &D_0400EB7C, &this->unk1EC, &this->unk22E, 0xB);
                this->unk1A0.dim.height = 0x14;
                phi_v1_3 = this->actor.params & 0xFF80;
                goto block_13;
            }
        } else {
            SkelAnime_Init(globalCtx, &this->unk15C, &D_04011518, (AnimationHeader *) &D_0400EB7C, &this->unk1EC, &this->unk22E, 0xB);
            this->unk27C = &D_0400ED80;
            phi_v1_3 = this->actor.params & 0xFF80;
block_13:
            phi_v1_2 = phi_v1_3 >> 7;
        }
        if (phi_v1_2 != 0) {
            if (phi_v1_2 != 1) {
                if (phi_v1_2 != 2) {
                    if (phi_v1_2 != 3) {
                        return;
                    }
                    goto block_20;
                }
                goto block_19;
            }
block_20:
            sp34 = &this->unk15C;
            SkelAnime_ChangeAnim(sp34, (AnimationHeader *) &D_0400EB7C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0400EB7C), (u8) 2, 0.0f);
            this->actor.draw = func_80A7C718;
            this->actionFunc = func_80A7C1F0;
            Actor_SetScale(&this->actor, 0.0f);
            this->unk274 = 0x1E;
            this->actor.targetMode = 3;
            this->actor.focus.pos.y = this->actor.home.pos.y + 10.0f;
            this->unk270 = 0.0f;
            // Duplicate return node #21. Try simplifying control flow for better match
            return;
        }
block_19:
        this->actor.draw = func_80A7C690;
        this->actionFunc = func_80A7BF08;
        Actor_SetScale(&this->actor, 0.01f);
        this->actor.targetMode = 3;
        this->actor.scale.y = 0.02f;
        this->actor.focus.pos.y = this->actor.home.pos.y + 10.0f;
    }
}

void ObjEtcetera_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjEtcetera *this = (ObjEtcetera *) thisx;
    CollisionPoly *temp_a1;
    u8 temp_a2;

    temp_a2 = this->actor.floorBgId;
    if (temp_a2 == 0x32) {
        temp_a1 = this->actor.floorPoly;
        if ((temp_a1 != 0) && ((this->unk276 & 1) != 0)) {
            this = this;
            func_800FAAB4(globalCtx, func_800C9C9C(&globalCtx->colCtx, temp_a1, (s32) temp_a2) & 0xFF);
        }
    }
    this = this;
    this->actionFunc(this, globalCtx);
    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->unk1A0.base);
}

void func_80A7C690(Actor *this, GlobalContext *globalCtx) {
    GraphicsContext *sp20;
    Gfx *sp18;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a2;

    temp_a2 = globalCtx->state.gfxCtx;
    temp_v0 = temp_a2->polyOpa.p;
    temp_a2->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_a2;
    sp18 = temp_v0;
    sp18->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    sp20 = temp_a2;
    func_8012C28C(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_a2->polyOpa.p;
    temp_a2->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = this->unk27C;
}

void func_80A7C718(Actor *this, GlobalContext *globalCtx) {
    func_8012C5B0(globalCtx->state.gfxCtx);
    SkelAnime_Draw(globalCtx, this->unk160, this->unk17C, NULL, NULL, this);
}

