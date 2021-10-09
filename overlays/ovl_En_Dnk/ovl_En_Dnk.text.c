s32 func_80A514F0(SkelAnime *arg0, s16 arg1);       /* static */
? func_80A515C4(EnDnk *arg0);                       /* static */
void func_80A51648(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A518DC(EnDnk *this, GlobalContext *globalCtx); /* static */
s32 func_80A51A78(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80A51AA4(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80A51CB8(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A51D78(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80A51DA4(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80A51FC0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A52074(Actor *arg0, void *arg1);        /* static */
extern SkeletonHeader D_060023B8;
extern SkeletonHeader D_06002468;
extern SkeletonHeader D_06002848;
static s16 D_80A521A0 = 0;
static ColliderCylinderInit D_80A521C4 = {
    {0, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x12, 0x2E, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80A521F0 = {1, 0, 0, 0, 0xFF};
static DamageTable D_80A521FC = {
    {
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
    },
};
static ? D_80A5221C;                                /* unable to generate initializer */
static ? D_80A5245C;                                /* unable to generate initializer */



s32 func_80A514F0(SkelAnime *arg0, s16 arg1) {
    s32 sp30;
    void *sp2C;
    s16 temp_t0;
    s16 temp_v0;
    s32 temp_t6;
    void *temp_v1;
    s16 phi_v0;
    s16 phi_t0;
    s32 phi_t1;

    phi_t1 = 0;
    if ((s32) arg1 >= 0) {
        temp_t6 = arg1 * 0x10;
        if ((s32) arg1 < 0x24) {
            temp_v1 = temp_t6 + &D_80A5221C;
            temp_t0 = temp_v1->unkA;
            phi_t0 = temp_t0;
            if ((s32) temp_t0 < 0) {
                sp2C = temp_v1;
                sp30 = 1;
                phi_t0 = SkelAnime_GetFrameCount(temp_v1->unk0);
            }
            temp_v0 = (temp_t6 + &D_80A5221C)->unk8;
            phi_v0 = temp_v0;
            if ((s32) temp_v0 < 0) {
                phi_v0 = phi_t0;
            }
            sp30 = 1;
            SkelAnime_ChangeAnim(arg0, (temp_t6 + &D_80A5221C)->unk0, (temp_t6 + &D_80A5221C)->unk4, (f32) phi_v0, (f32) phi_t0, (u8) (s32) (temp_t6 + &D_80A5221C)->unkC, (f32) (temp_t6 + &D_80A5221C)->unkE);
            phi_t1 = 1;
        }
    }
    return phi_t1;
}

? func_80A515C4(EnDnk *arg0) {
    s16 temp_v0;
    s16 phi_v1;
    ? phi_a1;

    temp_v0 = arg0->unk_29E;
    phi_a1 = 0;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_29E = temp_v0 - 1;
        phi_v1 = arg0->unk_29E;
    }
    if (phi_v1 == 0) {
        arg0->unk_2A0 += 1;
        if ((s32) arg0->unk_2A0 >= 3) {
            arg0 = arg0;
            arg0->unk_29E = Rand_S16Offset(0x14, 0x14);
            arg0->unk_2A0 = 0;
        }
        phi_a1 = 1;
    }
    return phi_a1;
}

void func_80A51648(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *temp_s1_4;
    SkelAnime *temp_s1;
    SkelAnime *temp_s1_2;
    SkelAnime *temp_s1_3;
    s32 temp_v0;
    u32 temp_t5;

    if (func_8013D8DC(arg0->unk28E, arg1) == 1) {
        *(gSegments + 0x18) = (u32) (arg1->objectCtx.status[arg0->unk28E].segment + 0x80000000);
        arg0->draw = func_80A52018;
        arg0->objBankIndex = arg0->unk28E;
        ActorShape_Init(arg0 + 0xBC, 0.0f, NULL, 18.0f);
        temp_v0 = arg0->params & 3;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {
                if (temp_v0 != 2) {

                } else {
                    temp_s1 = arg0 + 0x144;
                    SkelAnime_Init(arg1, temp_s1, &D_06002468, NULL, arg0 + 0x1DC, arg0 + 0x21E, 0xA);
                    func_80A514F0(temp_s1, 0x23);
                }
            } else {
                temp_s1_2 = arg0 + 0x144;
                SkelAnime_Init(arg1, temp_s1_2, &D_060023B8, NULL, arg0 + 0x1DC, arg0 + 0x21E, 0xA);
                func_80A514F0(temp_s1_2, 0x12);
            }
        } else {
            temp_s1_3 = arg0 + 0x144;
            SkelAnime_Init(arg1, temp_s1_3, &D_06002848, NULL, arg0 + 0x1DC, arg0 + 0x21E, 0xB);
            func_80A514F0(temp_s1_3, 7);
        }
        temp_s1_4 = arg0 + 0x190;
        Collider_InitCylinder(arg1, temp_s1_4);
        Collider_SetCylinder(arg1, temp_s1_4, arg0, &D_80A521C4);
        CollisionCheck_SetInfo2(&arg0->colChkInfo, &D_80A521FC, &D_80A521F0);
        if ((arg0->params & 0x3C) == 4) {
            temp_t5 = arg0->flags & ~1;
            arg0->flags = temp_t5;
            arg0->flags = temp_t5 | 0x30;
            arg0->unk188 = func_80A51890;
            Actor_SetScale(arg0, 0.1f);
            return;
        }
        arg0->flags &= -2;
        arg0->unk188 = func_80A518DC;
        Actor_SetScale(arg0, 0.01f);
        // Duplicate return node #11. Try simplifying control flow for better match
    }
}

void func_80A51890(EnDnk *this, GlobalContext *globalCtx) {
    if (func_800EE29C(globalCtx, 0x7EU) != 0) {
        func_800EDF24(&this->actor, globalCtx, func_800EE200(globalCtx, 0x7EU));
    }
}

void func_80A518DC(EnDnk *this, GlobalContext *globalCtx) {

}

void EnDnk_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnDnk *this = (EnDnk *) thisx;
    s32 temp_v0;
    s8 phi_v0;

    this->unk_28E = -1;
    temp_v0 = this->actor.params & 3;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {

            } else {
                phi_v0 = func_8013D924(0x40, globalCtx);
                goto block_7;
            }
        } else {
            phi_v0 = func_8013D924(0x12B, globalCtx);
            goto block_7;
        }
    } else {
        phi_v0 = func_8013D924(0x135, globalCtx);
block_7:
        this->unk_28E = phi_v0;
    }
    if ((s32) this->unk_28E >= 0) {
        this->actionFunc = (void (*)(EnDnk *, GlobalContext *)) func_80A51648;
    } else {
        Actor_MarkForDeath(&this->actor);
    }
    this->unk_2A2 = D_80A521A0;
    D_80A521A0 += 1;
}

void EnDnk_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDnk *this = (EnDnk *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnDnk_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnDnk *this = (EnDnk *) thisx;
    CollisionCheckContext *sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;

    this->actionFunc(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    func_80A515C4(this);
    Actor_SetHeight(&this->actor, 34.0f);
    temp_a1 = &this->collider;
    sp20 = temp_a1;
    Collider_UpdateCylinder(&this->actor, temp_a1);
    temp_a1_2 = &globalCtx->colChkCtx;
    sp24 = temp_a1_2;
    CollisionCheck_SetAC(globalCtx, temp_a1_2, &sp20->base);
    CollisionCheck_SetOC(globalCtx, temp_a1_2, &sp20->base);
    func_80A52134(this, globalCtx);
}

s32 func_80A51A78(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    (arg5 + (arg1 * 4))->unk260 = (Gfx *) *arg2;
    *arg2 = NULL;
    return 0;
}

void func_80A51AA4(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    MtxF sp5C;
    Vec3f sp50;
    Vec3f sp44;
    Vec3s sp3C;
    GraphicsContext *sp38;
    Gfx *sp30;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a1;
    u16 temp_v0;

    sp50.x = D_801D15B0.x;
    sp50.y = D_801D15B0.y;
    sp50.z = D_801D15B0.z;
    if (arg1 == 2) {
        SysMatrix_MultiplyVector3fByState(&sp50, &sp44);
        SysMatrix_CopyCurrentState(&sp5C);
        func_8018219C(&sp5C, &sp3C, 0);
        SysMatrix_InsertTranslation(sp44.x, sp44.y, sp44.z, 0);
        Matrix_Scale(arg4->scale.x, arg4->scale.y, arg4->scale.z, 1);
        temp_v0 = arg4->unk28C;
        if ((temp_v0 & 0x10) != 0) {
            if ((temp_v0 & 0x20) != 0) {
                sp3C.x = arg4->unk296;
                sp3C.y = arg4->unk298;
                sp3C.z = 0;
                sp3C.y += arg4->shape.rot.y;
                Math_SmoothStepToS(arg4 + 0x290, sp3C.x, 4, 0x1FFE, (s16) 1);
                Math_SmoothStepToS(arg4 + 0x292, sp3C.y, 4, 0x1FFE, (s16) 1);
                Math_SmoothStepToS(arg4 + 0x294, sp3C.z, 4, 0x1FFE, (s16) 1);
            } else {
                arg4->unk290 = sp3C.x;
                arg4->unk292 = sp3C.y;
                arg4->unk294 = sp3C.z;
            }
        } else {
            arg4->unk28C = (u16) (temp_v0 | 0x10);
            arg4->unk290 = sp3C.x;
            arg4->unk292 = sp3C.y;
            arg4->unk294 = sp3C.z;
        }
        Matrix_RotateY(arg4->unk292, 1U);
        SysMatrix_InsertXRotation_s(arg4->unk290, 1);
        SysMatrix_InsertZRotation_s(arg4->unk294, 1);
    }
    temp_a1 = *arg0;
    temp_v0_2 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp38 = temp_a1;
    sp30 = temp_v0_2;
    sp30->words.w1 = Matrix_NewMtx(*arg0);
    temp_v0_3 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = (arg4 + (arg1 * 4))->unk260;
}

void func_80A51CB8(Actor *arg0, GlobalContext *arg1) {
    GraphicsContext *sp28;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    temp_a0 = arg1->state.gfxCtx;
    sp28 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp28->polyOpa.p;
    sp28->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp28 = sp28;
    sp20 = temp_v0;
    sp20->words.w1 = Lib_SegmentedToVirtual(*(&D_80A5245C + (arg0->unk2A0 * 4)));
    temp_v0_2 = sp28->polyOpa.p;
    sp28->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0;
    temp_v0_2->words.w0 = 0xE7000000;
    SkelAnime_Draw(arg1, arg0->unk148, arg0->unk164, func_80A51A78, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80A51AA4, arg0);
}

s32 func_80A51D78(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    (arg5 + (arg1 * 4))->unk260 = (Gfx *) *arg2;
    *arg2 = NULL;
    return 0;
}

void func_80A51DA4(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    MtxF sp5C;
    Vec3f sp50;
    Vec3f sp44;
    Vec3s sp3C;
    GraphicsContext *sp38;
    Gfx *sp30;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a1;
    u16 temp_v0;

    sp50.x = D_801D15B0.x;
    sp50.y = D_801D15B0.y;
    sp50.z = D_801D15B0.z;
    if (arg1 == 2) {
        SysMatrix_MultiplyVector3fByState(&sp50, &sp44);
        SysMatrix_CopyCurrentState(&sp5C);
        func_8018219C(&sp5C, &sp3C, 0);
        SysMatrix_InsertTranslation(sp44.x, sp44.y, sp44.z, 0);
        Matrix_Scale(arg4->scale.x, arg4->scale.y, arg4->scale.z, 1);
        temp_v0 = arg4->unk28C;
        if ((temp_v0 & 0x10) != 0) {
            if ((temp_v0 & 0x20) != 0) {
                sp3C.z = arg4->unk296 + 0x4000;
                sp3C.y = arg4->unk298 + 0x4000;
                sp3C.x = 0;
                sp3C.y += arg4->shape.rot.y;
                Math_SmoothStepToS(arg4 + 0x290, 0, 4, 0x1FFE, (s16) 1);
                Math_SmoothStepToS(arg4 + 0x292, sp3C.y, 4, 0x1FFE, (s16) 1);
                Math_SmoothStepToS(arg4 + 0x294, sp3C.z, 4, 0x1FFE, (s16) 1);
            } else {
                arg4->unk290 = sp3C.x;
                arg4->unk292 = sp3C.y;
                arg4->unk294 = sp3C.z;
            }
        } else {
            arg4->unk28C = (u16) (temp_v0 | 0x10);
            arg4->unk290 = sp3C.x;
            arg4->unk292 = sp3C.y;
            arg4->unk294 = sp3C.z;
        }
        Matrix_RotateY(arg4->unk292, 1U);
        SysMatrix_InsertXRotation_s(arg4->unk290, 1);
        SysMatrix_InsertZRotation_s(arg4->unk294, 1);
    }
    temp_a1 = *arg0;
    temp_v0_2 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp38 = temp_a1;
    sp30 = temp_v0_2;
    sp30->words.w1 = Matrix_NewMtx(*arg0);
    temp_v0_3 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = (arg4 + (arg1 * 4))->unk260;
}

void func_80A51FC0(Actor *arg0, GlobalContext *arg1) {
    func_8012C28C(arg1->state.gfxCtx);
    SkelAnime_Draw(arg1, arg0->unk148, arg0->unk164, func_80A51D78, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80A51DA4, arg0);
}

void func_80A52018(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_v0;

    temp_v0 = thisx->params & 3;
    if (temp_v0 != 0) {
        if ((temp_v0 != 1) && (temp_v0 != 2)) {
            return;
        }
        func_80A51FC0();
        return;
    }
    func_80A51CB8();
}

void func_80A52074(Actor *arg0, void *arg1) {
    u16 temp_v1;
    s32 phi_v1;

    temp_v1 = arg1->unk1F34;
    phi_v1 = (s32) temp_v1;
    if (temp_v1 != 0x50) {
        if (temp_v1 != 0x7B) {
            if (temp_v1 != 0x1B6) {
                if (temp_v1 != 0x1ED) {

                } else {
                    arg1 = arg1;
                    Audio_PlayActorSound2(arg0, 0x3873U);
                    goto block_9;
                }
            } else {
                arg1 = arg1;
                Audio_PlayActorSound2(arg0, 0x391AU);
                goto block_9;
            }
        } else {
            arg1 = arg1;
            func_8019F128(0x3919U);
            goto block_9;
        }
    } else {
        arg1 = arg1;
        func_8019F128(0x3918U);
block_9:
        phi_v1 = (s32) arg1->unk1F34;
    }
    if ((phi_v1 >= 0xC6) && (phi_v1 < 0x1B6)) {
        func_8019F128(0x3117U);
    }
}

void func_80A52134(EnDnk *this, GlobalContext *globalCtx) {
    if ((globalCtx->csCtx.state != 0) && ((this->actor.params & 0x3C) == 4) && (globalCtx->sceneNum == 8) && (gSaveContext.sceneSetupIndex == 2)) {
        func_80A52074();
    }
}

