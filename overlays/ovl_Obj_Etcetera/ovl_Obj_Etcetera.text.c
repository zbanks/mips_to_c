typedef struct ObjEtcetera {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ SkelAnime unk_15C;                  /* inferred */
    /* 0x1A0 */ ColliderCylinder unk_1A0;           /* inferred */
    /* 0x1EC */ Vec3s unk_1EC;                      /* inferred */
    /* 0x1F2 */ char pad_1F2[0x3C];                 /* maybe part of unk_1EC[11]? */
    /* 0x22E */ Vec3s unk_22E;                      /* inferred */
    /* 0x234 */ char pad_234[0x3C];                 /* maybe part of unk_22E[11]? */
    /* 0x270 */ f32 unk_270;                        /* inferred */
    /* 0x274 */ s16 unk_274;                        /* inferred */
    /* 0x276 */ u16 unk_276;                        /* inferred */
    /* 0x278 */ s8 unk_278;                         /* inferred */
    /* 0x279 */ char pad_279[0x3];                  /* maybe part of unk_278[4]? */
    /* 0x27C */ ? *unk_27C;                         /* inferred */
    /* 0x280 */ void (*actionFunc)(ObjEtcetera *, GlobalContext *);
} ObjEtcetera;                                      /* size = 0x284 */

struct _mips2c_stack_ObjEtcetera_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjEtcetera_Init {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x10];
};                                                  /* size = 0x50 */

struct _mips2c_stack_ObjEtcetera_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A7BDC8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A7BE8C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A7BF08 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Actor *sp30;                         /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A7C168 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A7C1F0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A7C308 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x10];                   /* maybe part of sp34[5]? */
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x10];
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ CollisionHeader *sp5C;               /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80A7C690 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Gfx *sp18;                           /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ GraphicsContext *sp20;               /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A7C718 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

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

void ObjEtcetera_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v0;
    ObjEtcetera *this = (ObjEtcetera *) thisx;

    temp_v0 = (s32) (this->actor.params & 0xFF80) >> 7;
    phi_v0 = temp_v0;
    if ((temp_v0 < 0) || (temp_v0 >= 4)) {
        phi_v0 = 0;
    }
    temp_v0_2 = Object_GetIndex(&globalCtx->objectCtx, *(&D_80A7C7BC + (phi_v0 * 2)));
    if (temp_v0_2 >= 0) {
        this->unk_278 = (s8) temp_v0_2;
    }
    sp30 = this->actor.world.pos.x;
    sp34 = this->actor.world.pos.y + 10.0f;
    sp38 = this->actor.world.pos.z;
    func_800C411C(&globalCtx->colCtx, &this->actor.floorPoly, &sp3C, (Actor *) this, (Vec3f *) &sp30);
    temp_a1 = &this->unk_1A0;
    this->actor.floorBgId = (u8) sp3C;
    sp2C = temp_a1;
    Collider_InitAndSetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80A7C790);
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    this->actionFunc = func_80A7C308;
    Actor_SetScale((Actor *) this, 0.01f);
    this->unk_276 = 0;
    this->actor.scale.y = 0.02f;
}

void ObjEtcetera_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;
    ObjEtcetera *this = (ObjEtcetera *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk_144);
    Collider_DestroyCylinder(globalCtx, &this->unk_1A0);
}

void func_80A7BDC8(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk_274;
    if ((s32) temp_v0 > 0) {
        Actor_SetScale(arg0, (*(&D_80A7C7C4 + (((u32) arg1->gameplayFrames % 0x12U) * 4)) * (0.0001f * (f32) temp_v0)) + 0.01f);
        arg0->scale.y = 0.02f;
        arg0->unk_274 = (s16) (arg0->unk_274 - 1);
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
    temp_v0 = temp_v1->unk_A74;
    if (((temp_v0 & 0x200) != 0) && (this->actor.xzDistToPlayer < 20.0f)) {
        SkelAnime_ChangeAnim(&this->unk_15C, (AnimationHeader *) &D_0400EB7C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0400EB7C), (u8) 2, 0.0f);
        this->actor.draw = func_80A7C718;
        this->actionFunc = func_80A7C1F0;
        Actor_SetScale((Actor *) this, 0.01f);
        this->actor.scale.y = 0.02f;
        this->unk_274 = 0x1E;
        this->unk_276 &= 0xFFFE;
        this->unk_270 = 0.003f;
    } else if (((temp_v0 & 0x2000) != 0) && (this->actor.xzDistToPlayer < 30.0f) && (temp_f0 = this->actor.yDistToPlayer, (temp_f0 > 0.0f))) {
        temp_v0_2 = 0xA - (s32) (temp_f0 * 0.05f);
        if ((s32) this->unk_274 < (s32) temp_v0_2) {
            this->unk_274 = temp_v0_2;
        }
    } else {
        sp30 = temp_v1;
        if (func_800CAF70((DynaPolyActor *) this) != 0) {
            if ((this->unk_276 & 1) == 0) {
                this->unk_274 = 0xA;
                func_80A7BE8C(this);
                goto block_15;
            }
            if ((temp_v1->speedXZ > 0.1f) || ((temp_v1->unk_ABC < 0.0f) && ((temp_v1->unk_A74 & 0x100) == 0))) {
                this->unk_274 = 0xA;
block_15:
            }
            this->unk_276 |= 1;
        } else {
            if ((this->unk_276 & 1) != 0) {
                this->unk_274 = 0xA;
                func_80A7BE8C(this);
            }
            this->unk_276 &= 0xFFFE;
        }
    }
    if ((this->unk_1A0.base.acFlags & 2) != 0) {
        this->unk_274 = 0xA;
        func_80A7BE8C(this);
    }
    func_80A7BDC8((Actor *) this, globalCtx);
}

void func_80A7C168(ObjEtcetera *this, GlobalContext *globalCtx) {
    ObjEtcetera *temp_a0;
    SkelAnime *temp_a0_2;

    temp_a0 = this;
    this = this;
    if (func_800CAF70((DynaPolyActor *) temp_a0) != 0) {
        this->unk_276 |= 1;
    } else {
        this->unk_276 &= 0xFFFE;
    }
    temp_a0_2 = &this->unk_15C;
    this = this;
    if (SkelAnime_FrameUpdateMatrix(temp_a0_2) != 0) {
        this->actor.draw = func_80A7C690;
        this->actionFunc = func_80A7BF08;
    }
    func_80A7BDC8((Actor *) this, globalCtx, this);
}

void func_80A7C1F0(ObjEtcetera *this, GlobalContext *globalCtx) {
    f32 sp20;
    f32 temp_f0;
    s16 temp_v1;

    if (func_800CAF70((DynaPolyActor *) this) != 0) {
        this->unk_276 |= 1;
    } else {
        this->unk_276 &= 0xFFFE;
    }
    SkelAnime_FrameUpdateMatrix(&this->unk_15C);
    temp_v1 = this->unk_274;
    if ((s32) temp_v1 > 0) {
        this->unk_274 = temp_v1 - 1;
        this->unk_270 *= 0.8f;
        this->unk_270 -= (this->actor.scale.x - 0.01f) * 0.4f;
        temp_f0 = this->actor.scale.x + this->unk_270;
        sp20 = temp_f0;
        Actor_SetScale((Actor *) this, temp_f0);
        this->actor.scale.y = 2.0f * temp_f0;
        return;
    }
    this->actor.draw = func_80A7C690;
    this->actionFunc = func_80A7BF08;
    Actor_SetScale((Actor *) this, 0.01f);
    this->unk_274 = 0;
    this->actor.scale.y = 0.02f;
    this->unk_270 = 0.0f;
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
    sp48.unk_0 = (s32) D_80A7C80C.unk_0;
    sp48.unk_4 = (s32) D_80A7C80C.unk_4;
    sp48.unk_C = (s32) D_80A7C80C.unk_C;
    sp48.unk_8 = (s32) D_80A7C80C.unk_8;
    temp_v1 = (s32) (this->actor.params & 0xFF80) >> 7;
    phi_v1 = temp_v1;
    if ((temp_v1 < 0) || (temp_v1 >= 4)) {
        phi_v1 = 0;
    }
    sp58 = phi_v1;
    if (Object_IsLoaded(&globalCtx->objectCtx, (s32) this->unk_278) != 0) {
        this->actor.objBankIndex = this->unk_278;
        sp58 = phi_v1;
        Actor_SetObjectSegment(globalCtx, (Actor *) this);
        BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
        temp_a0 = (sp + (phi_v1 * 4))->unk_48;
        if (temp_a0 != 0) {
            BgCheck_RelocateMeshHeader(temp_a0, &sp5C);
        }
        this->unk_144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp5C);
        temp_v1_2 = (s32) (this->actor.params & 0xFF80) >> 7;
        phi_v1_2 = temp_v1_2;
        if ((temp_v1_2 != 0) && (temp_v1_2 != 1)) {
            if ((temp_v1_2 != 2) && (temp_v1_2 != 3)) {

            } else {
                this->unk_27C = &D_04011BD0;
                SkelAnime_Init(globalCtx, &this->unk_15C, &D_040127E8, (AnimationHeader *) &D_0400EB7C, &this->unk_1EC, &this->unk_22E, 0xB);
                this->unk_1A0.dim.height = 0x14;
                phi_v1_3 = this->actor.params & 0xFF80;
                goto block_13;
            }
        } else {
            SkelAnime_Init(globalCtx, &this->unk_15C, &D_04011518, (AnimationHeader *) &D_0400EB7C, &this->unk_1EC, &this->unk_22E, 0xB);
            this->unk_27C = &D_0400ED80;
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
            sp34 = &this->unk_15C;
            SkelAnime_ChangeAnim(sp34, (AnimationHeader *) &D_0400EB7C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0400EB7C), (u8) 2, 0.0f);
            this->actor.draw = func_80A7C718;
            this->actionFunc = func_80A7C1F0;
            Actor_SetScale((Actor *) this, 0.0f);
            this->unk_274 = 0x1E;
            this->actor.targetMode = 3;
            this->actor.focus.pos.y = this->actor.home.pos.y + 10.0f;
            this->unk_270 = 0.0f;
            /* Duplicate return node #21. Try simplifying control flow for better match */
            return;
        }
block_19:
        this->actor.draw = func_80A7C690;
        this->actionFunc = func_80A7BF08;
        Actor_SetScale((Actor *) this, 0.01f);
        this->actor.targetMode = 3;
        this->actor.scale.y = 0.02f;
        this->actor.focus.pos.y = this->actor.home.pos.y + 10.0f;
    }
}

void ObjEtcetera_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionPoly *temp_a1;
    u8 temp_a2;
    ObjEtcetera *this = (ObjEtcetera *) thisx;

    temp_a2 = this->actor.floorBgId;
    if (temp_a2 == 0x32) {
        temp_a1 = this->actor.floorPoly;
        if ((temp_a1 != 0) && ((this->unk_276 & 1) != 0)) {
            this = this;
            func_800FAAB4(globalCtx, func_800C9C9C(&globalCtx->colCtx, temp_a1, (s32) temp_a2) & 0xFF);
        }
    }
    this = this;
    this->actionFunc(this, globalCtx);
    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_1A0);
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
    temp_v0_2->words.w1 = this->unk_27C;
}

void func_80A7C718(Actor *this, GlobalContext *globalCtx) {
    func_8012C5B0(globalCtx->state.gfxCtx);
    SkelAnime_Draw(globalCtx, this->unk_160, this->unk_17C, NULL, NULL, this);
}
