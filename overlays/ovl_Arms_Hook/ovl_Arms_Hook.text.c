struct _mips2c_stack_ArmsHook_AttachHookToActor {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ArmsHook_AttachToPlayer {};    /* size 0x0 */

struct _mips2c_stack_ArmsHook_CheckForCancel {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Player *sp1C;                        /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_ArmsHook_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ArmsHook_DetachHookFromActor {}; /* size 0x0 */

struct _mips2c_stack_ArmsHook_Draw {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ Gfx *sp3C;                           /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ GraphicsContext *sp44;               /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad_50[0xC];
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad_5C[0xC];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ Actor *sp74;                         /* inferred */
    /* 0x78 */ char pad_78[0x8];
};                                                  /* size = 0x80 */

struct _mips2c_stack_ArmsHook_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderQuad *sp20;                  /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_ArmsHook_SetupAction {};       /* size 0x0 */

struct _mips2c_stack_ArmsHook_Shoot {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ CollisionContext *sp3C;              /* inferred */
    /* 0x40 */ Vec3f *sp40;                         /* inferred */
    /* 0x44 */ PosRot *sp44;                        /* inferred */
    /* 0x48 */ char pad_48[0x10];                   /* maybe part of sp44[5]? */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad_6C[0xC];
    /* 0x78 */ ? sp78;                              /* inferred */
    /* 0x78 */ char pad_78[0xC];
    /* 0x84 */ u32 sp84;                            /* inferred */
    /* 0x88 */ CollisionPoly *sp88;                 /* inferred */
    /* 0x8C */ char pad_8C[0x4];
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ char pad_98[0x4];
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x4];
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ Actor *spBC;                         /* inferred */
    /* 0xC0 */ Actor *spC0;                         /* inferred */
    /* 0xC4 */ Actor *spC4;                         /* inferred */
};                                                  /* size = 0xC8 */

struct _mips2c_stack_ArmsHook_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ArmsHook_Wait {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808C1154 {};              /* size 0x0 */

void ArmsHook_AttachHookToActor(ArmsHook *arg0, Actor *arg1); /* static */
s32 ArmsHook_AttachToPlayer(ArmsHook *arg0, Actor *arg1); /* static */
? ArmsHook_CheckForCancel(ArmsHook *arg0);          /* static */
void ArmsHook_DetachHookFromActor(ArmsHook *arg0);  /* static */
void ArmsHook_SetupAction(ArmsHook *arg0, void (*arg1)(ArmsHook *, GlobalContext *)); /* static */
void func_808C1154(ArmsHook *arg0, Actor *);        /* static */
extern ? D_0601D960;
static ColliderQuadInit D_808C1BC0 = {
    {0xA, 9, 0, 0, 8, 3},
    {2, {0x80, 0, 2}, {0xF7CFFFFF, 0, 0}, 5, 0, 0},
    {
        {
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
        },
    },
};
static Vec3f D_808C1C10 = {0.0f, 0.0f, 0.0f};
static Vec3f D_808C1C1C = {0.0f, 0.0f, 900.0f};
static Vec3f D_808C1C28 = {0.0f, 500.0f, -3000.0f};
static Vec3f D_808C1C34 = {0.0f, -500.0f, -3000.0f};
static Vec3f D_808C1C40 = {0.0f, 500.0f, 0.0f};
static Vec3f D_808C1C4C = {0.0f, -500.0f, 0.0f};

void ArmsHook_SetupAction(ArmsHook *arg0, void (*arg1)(ArmsHook *, GlobalContext *)) {
    arg0->actionFunc = arg1;
}

void ArmsHook_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderQuad *sp20;
    ColliderQuad *temp_a1;
    ArmsHook *this = (ArmsHook *) thisx;

    temp_a1 = &this->collider;
    sp20 = temp_a1;
    Collider_InitQuad(globalCtx, temp_a1);
    Collider_SetQuad(globalCtx, temp_a1, (Actor *) this, &D_808C1BC0);
    ArmsHook_SetupAction(this, ArmsHook_Wait);
    this->unk1E0.x = this->actor.world.pos.x;
    this->unk1E0.y = this->actor.world.pos.y;
    this->unk1E0.z = this->actor.world.pos.z;
}

void ArmsHook_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    Actor *temp_v0;
    ArmsHook *this = (ArmsHook *) thisx;

    temp_v0 = this->grabbed;
    if (temp_v0 != 0) {
        temp_v0->flags &= -0x2001;
    }
    Collider_DestroyQuad(globalCtx, &this->collider);
}

void ArmsHook_Wait(ArmsHook *this, GlobalContext *globalCtx) {
    if (this->actor.parent == 0) {
        ArmsHook_SetupAction((ArmsHook *) ArmsHook_Shoot);
        func_800B6C04((Actor *) this, 20.0f);
        this->timer = 0x1A;
        this->actor.parent = globalCtx->actorCtx.actorList[2].first;
    }
}

void func_808C1154(ArmsHook *arg0) {
    void *temp_v0;

    temp_v0 = arg0->actor.parent;
    arg0->actor.child = temp_v0;
    temp_v0->parent = arg0;
}

s32 ArmsHook_AttachToPlayer(ArmsHook *arg0, Actor *arg1) {
    arg1->child = arg0;
    arg1->unk_34C = arg0;
    if (arg0->actor.child != 0) {
        arg0->actor.child = NULL;
        arg1->parent = NULL;
        return 1;
    }
    return 0;
}

void ArmsHook_DetachHookFromActor(ArmsHook *arg0) {
    void *temp_v0;

    temp_v0 = arg0->grabbed;
    if (temp_v0 != 0) {
        temp_v0->flags &= -0x2001;
        arg0->grabbed = NULL;
    }
}

? ArmsHook_CheckForCancel(ArmsHook *arg0) {
    Player *sp1C;
    Player *temp_a0;

    temp_a0 = arg0->actor.parent;
    sp1C = temp_a0;
    if ((func_801240C8(temp_a0) != 0) && ((sp1C->itemActionParam != sp1C->heldItemActionParam) || ((sp1C->actor.flags & 0x100) != 0) || ((sp1C->stateFlags1 & 0x4000080) != 0))) {
        arg0->timer = 0;
        sp1C = sp1C;
        ArmsHook_DetachHookFromActor(arg0);
        Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp1C->rightHandWorld);
        return 1;
    }
    return 0;
}

void ArmsHook_AttachHookToActor(ArmsHook *arg0, Actor *arg1) {
    arg1->flags |= 0x2000;
    arg0->grabbed = arg1;
    Math_Vec3f_Diff(arg1 + 0x24, arg0 + 0x24, arg0 + 0x1FC);
}

void ArmsHook_Shoot(ArmsHook *this, GlobalContext *globalCtx) {
    Actor *spC4;
    Actor *spC0;
    Actor *spBC;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 sp9C;
    f32 sp94;
    f32 sp90;
    CollisionPoly *sp88;
    u32 sp84;
    ? sp78;
    ? sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    PosRot *sp44;
    Vec3f *sp40;
    CollisionContext *sp3C;
    Actor *temp_a1;
    Actor *temp_a2;
    Actor *temp_a3;
    ColliderInfo *temp_v0;
    CollisionContext *temp_a0_4;
    DynaPolyActor *temp_v0_2;
    PosRot *temp_a0_2;
    PosRot *temp_a1_2;
    Vec3f *temp_a0;
    Vec3f *temp_a0_3;
    f32 *temp_a1_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v1;
    s16 phi_v0;
    Actor *phi_a3;
    f32 phi_f2;
    f32 phi_f2_2;
    f32 phi_f16;
    f32 phi_f16_2;

    temp_a2 = globalCtx->actorCtx.actorList[2].first;
    if ((this->actor.parent == 0) || (spC4 = temp_a2, (func_801240C8((Player *) temp_a2) == 0))) {
        ArmsHook_DetachHookFromActor(this);
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    func_800B8F98(spC4, 0x100BU);
    ArmsHook_CheckForCancel(this);
    temp_v1 = this->timer;
    if ((temp_v1 != 0) && ((this->collider.base.atFlags & 2) != 0) && (temp_v0 = this->collider.info.atHitInfo, (temp_v0->elemType != 4))) {
        temp_a1 = this->collider.base.at;
        if ((temp_a1->update != 0) && ((temp_a1->flags & 0x600) != 0) && ((temp_v0->bumperFlags & 4) != 0)) {
            spC0 = temp_a1;
            ArmsHook_AttachHookToActor(this, temp_a1);
            if ((temp_a1->flags & 0x400) == 0x400) {
                func_808C1154(this, temp_a1);
            }
        }
        this->timer = 0;
        func_8019F1C0(&this->actor.projectedPos, 0x1814U);
        return;
    }
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        this->timer = temp_v1 - 1;
        phi_v0 = this->timer;
    }
    if (phi_v0 == 0) {
        temp_a3 = this->grabbed;
        phi_a3 = temp_a3;
        if (temp_a3 != 0) {
            if ((temp_a3->update == 0) || ((temp_a3->flags & 0x2000) != 0x2000)) {
                this->grabbed = NULL;
                phi_a3 = NULL;
            } else if (this->actor.child != 0) {
                spBC = temp_a3;
                sp94 = Actor_DistanceBetweenActors((Actor *) this, temp_a3);
                temp_f2 = this->unk1FC.x;
                temp_f12 = this->unk1FC.y;
                temp_f14 = this->unk1FC.z;
                sp90 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
                Math_Vec3f_Diff((Vec3f *) &temp_a3->world, &this->unk1FC, (Vec3f *) &this->actor.world);
                phi_a3 = temp_a3;
                if ((sp94 - sp90) > 50.0f) {
                    ArmsHook_DetachHookFromActor(this);
                    phi_a3 = NULL;
                }
            }
        }
        temp_a1_2 = &this->actor.world;
        sp44 = temp_a1_2;
        temp_a0 = spC4 + 0x368;
        sp40 = temp_a0;
        spBC = phi_a3;
        temp_f0 = Math_Vec3f_DistXYZAndStoreDiff(temp_a0, (Vec3f *) temp_a1_2, (Vec3f *) &spB0);
        temp_a1_3 = &spA4;
        if (temp_f0 < 30.0f) {
            phi_f2_2 = 0.0f;
            phi_f16 = 0.0f;
        } else {
            if (this->actor.child != 0) {
                phi_f2 = 30.0f;
            } else if (phi_a3 != 0) {
                phi_f2 = 50.0f;
            } else {
                phi_f2 = 200.0f;
            }
            phi_f16_2 = temp_f0 - phi_f2;
            if (temp_f0 <= phi_f2) {
                phi_f16_2 = 0.0f;
            }
            phi_f2_2 = phi_f16_2 / temp_f0;
            phi_f16 = phi_f16_2;
        }
        spA4 = spB0 * phi_f2_2;
        spA8 = spB4 * phi_f2_2;
        spAC = spB8 * phi_f2_2;
        if (this->actor.child == 0) {
            spBC = phi_a3;
            sp9C = phi_f16;
            Math_Vec3f_Sum(temp_a0, (Vec3f *) &spA4, (Vec3f *) sp44);
            if (phi_a3 != 0) {
                sp9C = phi_f16;
                Math_Vec3f_Sum((Vec3f *) sp44, &this->unk1FC, (Vec3f *) &phi_a3->world);
            }
        } else {
            sp9C = phi_f16;
            Math_Vec3f_Diff((Vec3f *) &spB0, (Vec3f *) temp_a1_3, &spC4->velocity);
            spC4->world.rot.x = Math_FAtan2F(sqrtf((spB0 * spB0) + (spB8 * spB8)), -spB4);
        }
        if ((phi_f16 < 50.0f) && (sp9C = phi_f16, ArmsHook_DetachHookFromActor(this), (phi_f16 == 0.0f)) && (ArmsHook_SetupAction(this, ArmsHook_Wait), (ArmsHook_AttachToPlayer(this, spC4) != 0))) {
            Math_Vec3f_Diff((Vec3f *) sp44, (Vec3f *) &spC4->world, &spC4->velocity);
            spC4->velocity.y -= 20.0f;
            return;
        }
        /* Duplicate return node #52. Try simplifying control flow for better match */
        return;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    temp_a0_2 = &this->actor.world;
    sp44 = temp_a0_2;
    Math_Vec3f_Diff((Vec3f *) temp_a0_2, &this->actor.prevPos, (Vec3f *) &sp6C);
    temp_a0_3 = &this->unk1E0;
    sp40 = temp_a0_3;
    Math_Vec3f_Sum(temp_a0_3, (Vec3f *) &sp6C, temp_a0_3);
    temp_f0_2 = this->unk1EC.x;
    this->actor.shape.rot.x = Math_FAtan2F(this->actor.speedXZ, -this->actor.velocity.y);
    sp60 = temp_f0_2 - (this->unk1E0.x - temp_f0_2);
    temp_f2_2 = this->unk1EC.y;
    temp_a0_4 = &globalCtx->colCtx;
    sp64 = temp_f2_2 - (this->unk1E0.y - temp_f2_2);
    temp_f12_2 = this->unk1EC.z;
    sp3C = temp_a0_4;
    sp68 = temp_f12_2 - (this->unk1E0.z - temp_f12_2);
    if ((func_800C55C4(temp_a0_4, (Vec3f *) &sp60, sp40, (Vec3f *) &sp78, &sp88, 1U, 1U, 1U, 1U, &sp84) != 0) && ((func_800B90AC(globalCtx, (Actor *) this, (s32) sp88, (s32) sp84, (s32) &sp78) == 0) || (func_800C576C(sp3C, (Vec3f *) &sp60, sp40, (Vec3f *) &sp78, &sp88, 1U, 1U, 1U, 1U, &sp84) != 0))) {
        sp5C = (f32) sp88->normal.x * 0.00003051851f;
        sp58 = (f32) sp88->normal.z * 0.00003051851f;
        Math_Vec3f_Copy((Vec3f *) sp44, (Vec3f *) &sp78);
        this->actor.world.pos.x += 10.0f * sp5C;
        this->timer = 1;
        this->actor.world.pos.z += 10.0f * sp58;
        if (func_800C9CEC(sp3C, sp88, (s32) sp84) != 0) {
            if (sp84 != 0x32) {
                temp_v0_2 = BgCheck_GetActorOfMesh(sp3C, (s32) sp84);
                if (temp_v0_2 != 0) {
                    ArmsHook_AttachHookToActor(this, (Actor *) temp_v0_2);
                }
            }
            func_808C1154(this);
            func_8019F1C0(&this->actor.projectedPos, 0x1829U);
            return;
        }
        CollisionCheck_SpawnShieldParticlesMetal(globalCtx, (Vec3f *) sp44);
        func_8019F1C0(&this->actor.projectedPos, 0x1813U);
        return;
    }
    if ((globalCtx->state.input[0].press.button & 0xC01F) != 0) {
        this->timer = 1;
    }
}

void ArmsHook_Update(Actor *thisx, GlobalContext *globalCtx) {
    ArmsHook *this = (ArmsHook *) thisx;
    this->actionFunc(this, globalCtx);
    this->unk1EC.x = this->unk1E0.x;
    this->unk1EC.y = this->unk1E0.y;
    this->unk1EC.z = this->unk1E0.z;
}

void ArmsHook_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Actor *sp74;
    f32 sp68;
    ? sp5C;
    ? sp50;
    f32 sp4C;
    f32 sp48;
    GraphicsContext *sp44;
    Gfx *sp3C;
    Actor *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    f32 temp_f0;
    f32 temp_f2;
    ArmsHook *this = (ArmsHook *) thisx;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    if ((temp_v0->draw != 0) && (temp_v0->unk_151 == 0xB)) {
        sp44 = globalCtx->state.gfxCtx;
        if ((this->actionFunc != ArmsHook_Shoot) || ((s32) this->timer <= 0)) {
            sp74 = temp_v0;
            SysMatrix_MultiplyVector3fByState(&D_808C1C10, &this->unk1E0);
            SysMatrix_MultiplyVector3fByState(&D_808C1C28, (Vec3f *) &sp5C);
            SysMatrix_MultiplyVector3fByState(&D_808C1C34, (Vec3f *) &sp50);
            this->unk1C4 = 0;
        } else {
            sp74 = temp_v0;
            SysMatrix_MultiplyVector3fByState(&D_808C1C1C, &this->unk1E0);
            SysMatrix_MultiplyVector3fByState(&D_808C1C40, (Vec3f *) &sp5C);
            SysMatrix_MultiplyVector3fByState(&D_808C1C4C, (Vec3f *) &sp50);
        }
        func_80126440(globalCtx, (Collider *) &this->collider, &this->unk1C4, (Vec3f *) &sp5C, (Vec3f *) &sp50);
        func_8012C28C(globalCtx->state.gfxCtx);
        func_80122868(globalCtx, (Player *) sp74);
        temp_v0_2 = sp44->polyOpa.p;
        sp44->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDA380003;
        sp3C = temp_v0_2;
        sp3C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_3 = sp44->polyOpa.p;
        sp44->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = (u32) &D_0601D960;
        temp_v0_3->words.w0 = 0xDE000000;
        SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
        Math_Vec3f_Diff(sp74 + 0x368, (Vec3f *) &this->actor.world, (Vec3f *) &sp68);
        temp_f2 = (sp68 * sp68) + (sp70 * sp70);
        temp_f0 = sqrtf(temp_f2);
        sp48 = temp_f2;
        sp4C = temp_f0;
        Matrix_RotateY(Math_Atan2S(sp68, sp70), 1U);
        SysMatrix_InsertXRotation_s(Math_Atan2S(-sp6C, sp4C), 1);
        Matrix_Scale(0.015f, 0.015f, sqrtf((sp6C * sp6C) + sp48) * 0.01f, 1);
        temp_v0_4 = sp44->polyOpa.p;
        sp44->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDA380003;
        temp_v0_4->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_5 = sp44->polyOpa.p;
        sp44->polyOpa.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = (u32) D_040008D0;
        temp_v0_5->words.w0 = 0xDE000000;
        func_801229A0(globalCtx, (Player *) sp74);
    }
}
