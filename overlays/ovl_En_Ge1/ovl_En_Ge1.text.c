void func_809457EC(EnGe1 *arg0, s16 arg1, u8 arg2, f32 arg3); /* static */
void func_80945924(Actor *arg0, GlobalContext *arg1); /* static */
void func_80945A00(Actor *actor, Lights *mapper, GlobalContext *globalCtx); /* static */
void func_80945A9C(EnGe1 *arg0, GlobalContext *arg1); /* static */
s32 func_80945B60(Actor *arg0);                     /* static */
void func_80945C50(Actor *arg0);                    /* static */
void func_80945CAC(EnGe1 *, GlobalContext *);       /* static */
void func_80945CE4(EnGe1 *, GlobalContext *);       /* static */
s32 func_80946190(GlobalContext *arg0, Actor *arg1); /* static */
s32 func_80946238(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80946368(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06002B98;
extern FlexSkeletonHeader D_06002CA0;
static ColliderCylinderInit D_809464D0 = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0x1000202, 0, 0}, 0, 1, 1},
    {0x14, 0x28, 0, {0, 0, 0}},
};
static ? D_809464FC;                                /* unable to generate initializer */
static ? D_80946524;                                /* unable to generate initializer */
static Vec3f D_80946530 = {600.0f, 700.0f, 0.0f};
static Vec3f D_8094653C = {0.0f, 0.0f, 0.0f};
static ? D_80946548;                                /* unable to generate initializer */

typedef struct EnGe1 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 (*unk144)(GlobalContext *, Actor *); /* inferred */
    /* 0x0148 */ ColliderCylinder unk148;           /* inferred */
    /* 0x0194 */ SkelAnime unk194;                  /* inferred */
    /* 0x01D8 */ char pad1D8[0xC];
    /* 0x01E4 */ Vec3s unk1E4;                      /* inferred */
    /* 0x01EA */ char pad1EA[0x5A];                 /* maybe part of unk1E4[16]? */
    /* 0x0244 */ Vec3s unk244;                      /* inferred */
    /* 0x024A */ char pad24A[0x60];                 /* maybe part of unk244[17]? */
    /* 0x02AA */ s16 unk2AA;                        /* inferred */
    /* 0x02AC */ s16 unk2AC;                        /* inferred */
    /* 0x02AE */ s16 unk2AE;                        /* inferred */
    /* 0x02B0 */ u8 *unk2B0;                        /* inferred */
    /* 0x02B4 */ s32 unk2B4;                        /* inferred */
    /* 0x02B8 */ s16 unk2B8;                        /* inferred */
    /* 0x02BA */ s16 unk2BA;                        /* inferred */
    /* 0x02BC */ u16 unk2BC;                        /* inferred */
    /* 0x02BE */ s16 unk2BE;                        /* inferred */
    /* 0x02C0 */ s16 unk2C0;                        /* inferred */
    /* 0x02C2 */ s16 unk2C2;                        /* inferred */
    /* 0x02C4 */ s8 unk2C4;                         /* inferred */
    /* 0x02C5 */ char pad2C5[0x3];                  /* maybe part of unk2C4[4]? */
    /* 0x02C8 */ void (*actionFunc)(EnGe1 *, GlobalContext *);
} EnGe1;                                            /* size 0x2CC */

void EnGe1_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnGe1 *this = (EnGe1 *) thisx;
    s32 temp_v0;
    u32 temp_t9;

    ActorShape_Init(&this->actor.shape, 0.0f, func_80945A00, 30.0f);
    SkelAnime_InitSV(globalCtx, &this->unk194, &D_06002CA0, &D_06002B98, &this->unk1E4, &this->unk244, 0x10);
    Collider_InitAndSetCylinder(globalCtx, &this->unk148, &this->actor, &D_809464D0);
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.targetMode = 6;
    Actor_SetScale(&this->actor, 0.01f);
    this->unk2C0 = -1;
    this->unk2BC = 0;
    this->unk2BE = this->unk2C0;
    func_809457EC(this, 0, 0U, 0.0f);
    temp_v0 = this->actor.params & 0xF;
    this->actionFunc = func_80945CAC;
    this->unk144 = func_80946190;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                this->unk2C4 = 0;
            } else {
                this->unk2C4 = 2;
            }
        } else {
            this->unk2C4 = 1;
        }
    } else {
        temp_t9 = this->actor.flags | 0x30;
        this->actor.flags = temp_t9;
        this->unk2C4 = 0;
        this->actionFunc = func_80945CE4;
        this->actor.draw = NULL;
        this->actor.flags = temp_t9 & ~1;
    }
    this->actor.minVelocityY = -9.0f;
    this->actor.velocity.y = -9.0f;
    this->actor.gravity = -1.0f;
}

void EnGe1_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGe1 *this = (EnGe1 *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk148);
}

void func_809457EC(EnGe1 *arg0, s16 arg1, u8 arg2, f32 arg3) {
    AnimationHeaderCommon **sp34;
    AnimationHeaderCommon **temp_v1;

    if (arg1 != 8) {
        if (arg1 != 9) {
            temp_v1 = (arg1 * 4) + &D_809464FC;
            sp34 = temp_v1;
            SkelAnime_ChangeAnim(arg0 + 0x194, (AnimationHeader *) *temp_v1, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*temp_v1), (u8) (s32) arg2, arg3);
        } else {
            SkelAnime_ChangeAnim(arg0 + 0x194, *(&D_809464FC + (arg1 * 4)), 0.0f, 1.0f, 1.0f, (u8) 2, 0.0f);
        }
    } else {
        SkelAnime_ChangeAnim(arg0 + 0x194, *(&D_809464FC + (arg1 * 4)), 0.0f, 0.0f, 0.0f, (u8) 2, 0.0f);
    }
    arg0->unk2BE = arg1;
}

void func_80945924(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->yawTowardsPlayer - arg0->shape.rot.y;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    if ((phi_v1 < 0x4301) && (arg0->xzDistToPlayer < 100.0f)) {
        func_800E9250(arg1, arg0, arg0 + 0x2A4, arg0 + 0x2AA, (Vec3f) arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z);
        return;
    }
    Math_SmoothStepToS(arg0 + 0x2A4, 0, 6, 0x1838, (s16) 0x64);
    Math_SmoothStepToS(arg0 + 0x2A6, 0, 6, 0x1838, (s16) 0x64);
}

void func_80945A00(Actor *actor, Lights *mapper, GlobalContext *globalCtx) {
    Vec3f sp2C;
    PosRot *sp24;
    PosRot *temp_a1;
    f32 temp_f0;

    temp_a1 = &actor->world;
    sp24 = temp_a1;
    Math_Vec3f_Copy(&sp2C, &temp_a1->pos);
    Math_Vec3f_Copy(&sp24->pos, actor + 0x1D8);
    func_800B4AEC(globalCtx, actor, 50.0f);
    temp_f0 = actor->floorHeight;
    if (sp2C.y < temp_f0) {
        actor->world.pos.y = temp_f0;
    } else {
        actor->world.pos.y = sp2C.y;
    }
    func_800B3FC0(actor, mapper, globalCtx);
    Math_Vec3f_Copy(&sp24->pos, &sp2C);
}

void func_80945A9C(EnGe1 *arg0, GlobalContext *arg1) {
    void *sp38;
    Vec3f sp2C;
    Vec3f *sp28;
    Vec3f *temp_a0;
    s32 temp_v0;
    void *temp_t8;
    void *temp_v0_2;

    arg0->unk2B4 = 0;
    temp_v0 = (s32) (arg0->actor.params & 0xFC00) >> 0xA;
    if (temp_v0 != 0x3F) {
        temp_t8 = arg1->setupPathList + (temp_v0 * 8);
        arg0->unk2B0 = temp_t8;
        if (temp_t8 != 0) {
            temp_v0_2 = Lib_SegmentedToVirtual(temp_t8->unk4);
            temp_a0 = arg0 + 0x24;
            sp28 = temp_a0;
            sp38 = temp_v0_2;
            Math_Vec3s_ToVec3f(temp_a0, (Vec3s *) temp_v0_2);
            arg0->unk2B4 += 1;
            Math_Vec3s_ToVec3f(&sp2C, sp38 + 6);
            arg0->actor.world.rot.y = Math_Vec3f_Yaw(temp_a0, &sp2C);
            arg0->actor.world.rot.x = Math_Vec3f_Pitch(temp_a0, &sp2C);
            arg0->actor.speedXZ = 15.0f;
            return;
        }
        // Duplicate return node #4. Try simplifying control flow for better match
        return;
    }
    arg0->unk2B0 = NULL;
}

s32 func_80945B60(Actor *arg0) {
    Vec3f sp30;
    s16 sp2E;
    s16 sp2C;
    Vec3f *sp28;
    Vec3f *temp_a0;
    void *temp_v1;
    s32 phi_v0;

    temp_v1 = arg0->unk2B0;
    if (temp_v1 == 0) {
        return 1;
    }
    Math_Vec3s_ToVec3f(&sp30, Lib_SegmentedToVirtual(temp_v1->unk4) + (arg0->unk2B4 * 6));
    temp_a0 = arg0 + 0x24;
    sp28 = temp_a0;
    sp2E = Math_Vec3f_Yaw(temp_a0, &sp30);
    sp2C = Math_Vec3f_Pitch(temp_a0, &sp30);
    Math_SmoothStepToS(arg0 + 0x32, sp2E, 0xA, 0x3E8, (s16) 0x64);
    Math_SmoothStepToS(arg0 + 0x30, sp2C, 6, 0x7D0, (s16) 0xC8);
    Actor_SetVelocityAndMoveXYRotationReverse(arg0);
    phi_v0 = 0;
    if (Math_Vec3f_DistXYZ(temp_a0, &sp30) < 40.0f) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_80945C50(Actor *arg0) {
    if ((s32) Rand_ZeroFloat(2.0f) == 0) {
        Audio_PlayActorSound2(arg0, 0x6918U);
        return;
    }
    Audio_PlayActorSound2(arg0, 0x6919U);
}

void func_80945CAC(EnGe1 *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(&arg0->unk194);
    func_80945924(&arg0->actor, arg1);
}

void func_80945CE4(EnGe1 *arg0, GlobalContext *arg1) {
    s16 sp2E;
    SkelAnime *sp24;
    CsCmdActorAction *temp_t1;
    SkelAnime *temp_a0;
    s16 temp_t9;
    s16 temp_v0;
    s16 temp_v1;

    temp_a0 = &arg0->unk194;
    sp24 = temp_a0;
    if ((SkelAnime_FrameUpdateMatrix(temp_a0) != 0) && (arg0->unk2C0 == 3)) {
        func_809457EC(arg0, 4, 0U, 0.0f);
    }
    if (func_800EE29C(arg1, 0x79U) != 0) {
        arg0->actor.draw = EnGe1_Draw;
        temp_t1 = arg1->csCtx.npcActions[func_800EE200(arg1, 0x79U)];
        temp_v1 = (s16) temp_t1->unk0;
        if (temp_v1 != 8) {
            if (temp_v1 != 9) {
                arg0->unk2BC &= 0xFFF7;
                sp2E = temp_v1;
                func_800EDF24(&arg0->actor, arg1, func_800EE200(arg1, 0x79U));
            } else {
                arg0->unk2BC |= 8;
            }
        } else {
            arg0->unk2BC &= 0xFFF7;
        }
        if ((s16) temp_t1->unk0 != arg0->unk2C0) {
            arg0->unk2C0 = (s16) temp_t1->unk0;
            temp_t9 = arg0->unk2C0;
            switch (temp_t9) {
            case 1:
                func_809457EC(arg0, 0, 0U, 0.0f);
                break;
            case 2:
                func_809457EC(arg0, 2, 0U, 0.0f);
                break;
            case 3:
                func_809457EC(arg0, 3, 2U, 0.0f);
                break;
            case 4:
                func_809457EC(arg0, 5, 2U, 0.0f);
                break;
            case 5:
                func_809457EC(arg0, 6, 0U, 0.0f);
                break;
            case 6:
                func_809457EC(arg0, 7, 2U, 0.0f);
                break;
            case 7:
                Actor_MarkForDeath(&arg0->actor);
                break;
            case 8:
                func_809457EC(arg0, 8, 2U, 0.0f);
                break;
            case 9:
                func_809457EC(arg0, 9, 2U, 0.0f);
                func_80945A9C(arg0, arg1);
                arg0->unk2BC |= 8;
                arg0->unk2C2 = (s16) (s32) (Rand_ZeroFloat(10.0f) + 20.0f);
                break;
            }
            SkelAnime_FrameUpdateMatrix(sp24);
        }
        if ((arg0->unk2BE == 5) && ((func_801378B8(sp24, 12.0f) != 0) || (func_801378B8(sp24, 25.0f) != 0))) {
            Audio_PlayActorSound2(&arg0->actor, 0x2971U);
        }
        if ((arg0->unk2BE == 7) && (func_801378B8(sp24, 14.0f) != 0)) {
            Audio_PlayActorSound2(&arg0->actor, 0x2971U);
        }
    } else {
        arg0->actor.draw = NULL;
    }
    if (arg0->unk2C0 == 9) {
        if ((arg0->unk2B4 < (s32) *arg0->unk2B0) && (func_80945B60(&arg0->actor) != 0)) {
            arg0->unk2B4 += 1;
        }
        temp_v0 = arg0->unk2C2;
        arg0->actor.shape.rot.x += 0x3E8;
        arg0->actor.shape.rot.y += 0x7D0;
        arg0->actor.shape.rot.z += 0x1F4;
        if ((s32) temp_v0 > 0) {
            arg0->unk2C2 = temp_v0 - 1;
            return;
        }
        arg0->unk2C2 = (s16) (s32) (Rand_ZeroFloat(10.0f) + 20.0f);
        func_80945C50(&arg0->actor);
        // Duplicate return node #39. Try simplifying control flow for better match
    }
}

void EnGe1_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnGe1 *this = (EnGe1 *) thisx;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    s16 temp_v0;
    s16 temp_v1;
    s16 phi_v0;
    s16 phi_v1;

    temp_a2 = &this->unk148;
    if (this->actor.draw != 0) {
        sp2C = temp_a2;
        Collider_UpdateCylinder(&this->actor, temp_a2);
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
    }
    if ((this->unk2BC & 8) == 0) {
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    }
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 40.0f, 25.0f, 40.0f, 5U);
    this->actionFunc(this, globalCtx);
    this->unk2AE = 0;
    temp_v0 = this->unk2AE;
    temp_v1 = this->unk2BA;
    this->unk2AC = temp_v0;
    this->unk2AA = temp_v0;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        this->unk2BA = temp_v1 - 1;
        phi_v0 = this->unk2BA;
    }
    phi_v1 = this->unk2BA;
    if (phi_v0 == 0) {
        this->unk2BA = Rand_S16Offset(0x3C, 0x3C);
        phi_v1 = this->unk2BA;
    }
    this->unk2B8 = phi_v1;
    if ((s32) this->unk2B8 >= 3) {
        this->unk2B8 = 0;
    }
}

s32 func_80946190(GlobalContext *arg0, Actor *arg1) {
    s32 sp34;
    Vec3f *sp2C;
    Vec3s *sp28;
    Vec3f *temp_a3;
    Vec3s *temp_t0;

    temp_a3 = arg1 + 0x3C;
    temp_t0 = arg1 + 0xBC;
    sp28 = temp_t0;
    sp2C = temp_a3;
    sp34 = func_8013A530(arg0, arg1, 9, temp_a3, temp_t0, 10.0f, 400.0f, (s16) -1);
    return sp34 | func_8013A530(arg0, arg1, 0xB, temp_a3, temp_t0, 10.0f, 1200.0f, (s16) -1);
}

s32 func_80946238(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    s32 sp18;
    s32 temp_v1;

    if (arg1 == 0xF) {
        arg4->x += arg5->unk2A6;
        arg4->z += arg5->unk2A4;
    }
    if ((arg5->unk2BE == 0) && ((arg1 == 8) || (arg1 == 0xA) || (arg1 == 0xD))) {
        temp_v1 = arg1 * 0x32;
        sp18 = temp_v1;
        arg4->y += (s32) (Math_SinS((s16) (arg0->state.frames * (temp_v1 + 0x814))) * 200.0f);
        arg4->z += (s32) (Math_CosS((s16) (arg0->state.frames * (temp_v1 + 0x940))) * 200.0f);
    }
    return 0;
}

void func_80946368(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    void *temp_a2;
    void *temp_v1;

    temp_a2 = *arg0;
    if (arg1 != 1) {
        if (arg1 != 0xF) {
            return;
        }
        temp_v1 = temp_a2->unk2B0;
        temp_a2->unk2B0 = (void *) (temp_v1 + 8);
        temp_v1->unk0 = 0xDE000000;
        temp_v1->unk4 = (s32) *(&D_80946524 + (arg4->unk2C4 * 4));
        SysMatrix_MultiplyVector3fByState(&D_80946530, arg4 + 0x3C);
        return;
    }
    SysMatrix_MultiplyVector3fByState(&D_8094653C, arg4 + 0x1D8);
}

void EnGe1_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnGe1 *this = (EnGe1 *) thisx;
    GraphicsContext *sp3C;
    Gfx *sp34;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp3C = temp_a0;
    func_8012C5B0(temp_a0);
    temp_v0 = sp3C->polyOpa.p;
    sp3C->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp34 = temp_v0;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_80946548 + (this->unk2B8 * 4)));
    SkelAnime_DrawSV(globalCtx, this->unk194.skeleton, this->unk194.limbDrawTbl, (s32) this->unk194.dListCount, func_80946238, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80946368, &this->actor);
}

