? func_8013CD64(? *, PosRot *, Gfx *, f32, s32, ? *, ? *); /* extern */
? func_8013CF04(EnZo *, GlobalContext *, Gfx *);    /* extern */
s32 func_8099E790(SkelAnime *arg0, s16 arg1, EnZo *); /* static */
? func_8099E858(Actor *arg0, GlobalContext *arg1);  /* static */
void func_8099E96C(EnZo *arg0, s32 arg1);           /* static */
void func_8099E9E0(EnZo *arg0, GlobalContext *arg1); /* static */
void func_8099EA60(EnZo *arg0, GlobalContext *arg1); /* static */
s32 func_8099EFF4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5, Gfx **gfx); /* static */
void func_8099F15C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **gfx); /* static */
extern FlexSkeletonHeader D_0600D208;
static ColliderCylinderInit D_8099F4B0 = {
    {0, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x12, 0x40, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_8099F4DC = {0, 0, 0, 0, 0xFF};
static DamageTable D_8099F4E8 = {
    {
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
};
static ? D_8099F508;                                /* unable to generate initializer */
static ? D_8099F578;                                /* unable to generate initializer */
static ? D_8099F57C;                                /* unable to generate initializer */
static ? D_8099F57F;                                /* unable to generate initializer */
static ? D_8099F587;                                /* unable to generate initializer */
static ? D_8099F58C;                                /* unable to generate initializer */
static ? D_8099F59C;                                /* unable to generate initializer */
static s16 D_8099F5AC = {0xFA0, 4, 1, 3, 0x1770, 4, 1, 6, 0xFA0, 4, 1, 3, 0x1770, 4, 1, 6};
static ? D_8099F5CC;                                /* unable to generate initializer */
static ? D_8099F5D8;                                /* unable to generate initializer */
static ? D_8099F5F8;                                /* unable to generate initializer */
static ? D_8099F600;                                /* unable to generate initializer */

typedef struct EnZo {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnZo *, GlobalContext *);
    /* 0x0148 */ SkelAnime unk148;                  /* inferred */
    /* 0x018C */ SkelAnime unk18C;                  /* inferred */
    /* 0x01D0 */ char pad1D0[0x2];
    /* 0x01D2 */ s16 unk1D2;                        /* inferred */
    /* 0x01D4 */ s16 unk1D4;                        /* inferred */
    /* 0x01D6 */ s16 unk1D6;                        /* inferred */
    /* 0x01D8 */ char pad1D8[0x4];                  /* maybe part of unk1D6[3]? */
    /* 0x01DC */ Path *unk1DC;                      /* inferred */
    /* 0x01E0 */ s16 unk1E0;                        /* inferred */
    /* 0x01E2 */ char pad1E2[0x1C];                 /* maybe part of unk1E0[15]? */
    /* 0x01FE */ Vec3s unk1FE;                      /* inferred */
    /* 0x0204 */ char pad204[0x72];                 /* maybe part of unk1FE[20]? */
    /* 0x0276 */ Vec3s unk276;                      /* inferred */
    /* 0x027C */ char pad27C[0xE8];
    /* 0x0364 */ ? unk364;                          /* inferred */
    /* 0x0365 */ char pad365[0xB9];
    /* 0x041E */ s16 unk41E;                        /* inferred */
    /* 0x0420 */ s16 unk420;                        /* inferred */
    /* 0x0422 */ char pad422[0x2];                  /* maybe part of unk420[2]? */
} EnZo;                                             /* size 0x424 */

s32 func_8099E790(SkelAnime *arg0, s16 arg1) {
    s32 sp30;
    void *sp2C;
    s16 temp_t0;
    s32 temp_t6;
    void *temp_v1;
    s16 phi_t0;
    s32 phi_t1;

    phi_t1 = 0;
    if ((s32) arg1 >= 0) {
        temp_t6 = arg1 * 0x10;
        if ((s32) arg1 < 7) {
            temp_v1 = temp_t6 + &D_8099F508;
            temp_t0 = temp_v1->unkA;
            phi_t0 = temp_t0;
            if ((s32) temp_t0 < 0) {
                sp2C = temp_v1;
                sp30 = 1;
                phi_t0 = SkelAnime_GetFrameCount(temp_v1->unk0);
            }
            sp30 = 1;
            SkelAnime_ChangeAnim(arg0, (temp_t6 + &D_8099F508)->unk0, (temp_t6 + &D_8099F508)->unk4, (f32) (temp_t6 + &D_8099F508)->unk8, (f32) phi_t0, (u8) (s32) (temp_t6 + &D_8099F508)->unkC, (f32) (temp_t6 + &D_8099F508)->unkE);
            phi_t1 = 1;
        }
    }
    return phi_t1;
}

? func_8099E858(Actor *arg0, GlobalContext *arg1) {
    u8 sp2F;
    u8 sp2E;
    u16 sp26;
    u8 temp_v0;
    u8 temp_v0_2;
    s32 phi_v0;

    sp2F = arg0->unk1FC;
    sp2E = arg0->unk1FD;
    if ((arg0->bgCheckFlags & 0x20) != 0) {
        phi_v0 = 5;
        if (arg0->yDistToWater < 20.0f) {
            phi_v0 = 4;
        }
        sp26 = phi_v0 + 0x800;
    } else {
        sp26 = func_800C9BDC(arg1 + 0x830, arg0->floorPoly, (s32) arg0->floorBgId) + 0x800;
    }
    temp_v0 = func_8013DB90(arg1, arg0 + 0x1E4, -6.0f);
    arg0->unk1FC = temp_v0;
    if (((temp_v0 & 0xFF) != 0) && (sp2F == 0) && ((temp_v0 & 0xFF) != 0)) {
        Audio_PlayActorSound2(arg0, sp26);
    }
    temp_v0_2 = func_8013DB90(arg1, arg0 + 0x1F0, -6.0f);
    arg0->unk1FD = temp_v0_2;
    if (((temp_v0_2 & 0xFF) != 0) && (sp2E == 0) && ((temp_v0_2 & 0xFF) != 0)) {
        Audio_PlayActorSound2(arg0, sp26);
    }
    return 0;
}

void func_8099E96C(EnZo *arg0, s32 arg1) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk420;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk420 = temp_v0 - 1;
        phi_v1 = arg0->unk420;
    }
    if (phi_v1 == 0) {
        arg0->unk41E += 1;
        if ((s32) arg0->unk41E >= arg1) {
            arg0->unk41E = 0;
            arg0 = arg0;
            arg0->unk420 = Rand_S16Offset(0x1E, 0x1E);
        }
    }
}

void func_8099E9E0(EnZo *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp1C;
    Collider *sp18;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;

    temp_a2 = arg0 + 0x18C;
    arg0->unk1D2 = (s16) (s32) arg0->actor.world.pos.x;
    arg0->unk1D4 = (s16) (s32) arg0->actor.world.pos.y;
    arg0->unk1D6 = (s16) (s32) arg0->actor.world.pos.z;
    sp18 = temp_a2;
    temp_a1 = arg1 + 0x18884;
    sp1C = temp_a1;
    CollisionCheck_SetAC(arg1, temp_a1, temp_a2);
    CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
}

void func_8099EA60(EnZo *arg0, GlobalContext *arg1) {
    void *sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    sp3C = temp_v1;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    if (func_8013D5E8(arg0->actor.shape.rot.y, 0x2710, arg0->actor.yawTowardsPlayer) != 0) {
        sp30 = temp_v1->world.pos.x;
        sp34 = temp_v1->unkC44 + 3.0f;
        sp38 = temp_v1->world.pos.z;
        func_8013D2E0((Vec3f *) &sp30, arg0 + 0x3C, arg0 + 0xBC, arg0 + 0x2EE, arg0 + 0x2F4, arg0 + 0x2FA, &D_8099F5AC);
    } else {
        Math_SmoothStepToS(arg0 + 0x2EE, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2F0, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2F4, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2F6, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2FA, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2FC, 0, 4, 0x3E8, (s16) 1);
    }
    func_8099E96C(arg0, 3);
    func_8013D9C8(arg1, arg0 + 0x312, arg0 + 0x33A, 0x14);
}

void func_8099EBD8(EnZo *this, GlobalContext *globalCtx) {
    EnZo *temp_a2;
    SkelAnime *temp_a0;
    s32 temp_v0;
    s32 phi_v0;
    EnZo *phi_a2;

    temp_a2 = this;
    temp_a0 = &temp_a2->unk148;
    temp_v0 = (s32) (temp_a2->actor.params & 0x7E00) >> 9;
    phi_v0 = temp_v0;
    phi_a2 = temp_a2;
    if (temp_v0 != 0x3F) {
        this = temp_a2;
        func_8099E790(temp_a0, 6, temp_a2);
        phi_v0 = (s32) (this->actor.params & 0x7E00) >> 9;
        phi_a2 = this;
    }
    if (phi_v0 != 0x3F) {
        phi_a2->actionFunc = func_8099EC50;
        return;
    }
    phi_a2->actionFunc = func_8099EE24;
}

void func_8099EC50(EnZo *this, GlobalContext *globalCtx) {
    s16 sp36;
    void sp28;

    Math_SmoothStepToF(&this->actor.speedXZ, 1.0f, 0.4f, 1000.0f, 0.0f);
    sp36 = (s16) (s32) (this->actor.speedXZ * 400.0f);
    if ((func_8013D68C(this->unk1DC, this->unk1E0, &sp28) != 0) && (func_8013D768(&this->actor, &sp28, sp36) != 0)) {
        this->unk1E0 += 1;
        if ((s32) this->unk1E0 >= (s32) this->unk1DC->count) {
            this->unk1E0 = 0;
        }
    }
    if (this->actor.yDistToWater > 60.0f) {
        func_8099E790(&this->unk148, 1);
        this->actionFunc = func_8099ED4C;
        this->actor.gravity = 0.0f;
        this->actor.speedXZ = 0.0f;
    }
}

void func_8099ED4C(EnZo *this, GlobalContext *globalCtx) {
    GameInfo *temp_v0;
    f32 phi_f0;

    temp_v0 = gGameInfo;
    if (this->actor.yDistToWater < ((f32) temp_v0->data[1536] + 50.0f)) {
        phi_f0 = -1.0f;
    } else {
        phi_f0 = 1.0f;
    }
    Math_ApproachF(&this->actor.velocity.y, phi_f0, ((f32) temp_v0->data[1537] + 18.0f) * 0.01f, ((f32) temp_v0->data[1538] + 12.0f) * 0.01f);
}

void func_8099EE24(EnZo *this, GlobalContext *globalCtx) {

}

void EnZo_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnZo *this = (EnZo *) thisx;
    SkelAnime *sp34;
    SkelAnime *temp_a1;
    SkelAnime *temp_a1_2;

    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    temp_a1 = &this->unk148;
    sp34 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_0600D208, NULL, &this->unk1FE, &this->unk276, 0x14);
    func_8099E790(sp34, 0);
    temp_a1_2 = &this->unk18C;
    sp34 = temp_a1_2;
    Collider_InitCylinder(globalCtx, (ColliderCylinder *) temp_a1_2);
    Collider_SetCylinder(globalCtx, (ColliderCylinder *) temp_a1_2, &this->actor, &D_8099F4B0);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_8099F4E8, &D_8099F4DC);
    this->unk1DC = func_8013D648(globalCtx, (s16) ((s32) (this->actor.params & 0x7E00) >> 9), 0x3F);
    Actor_SetScale(&this->actor, 0.01f);
    this->actionFunc = func_8099EBD8;
    this->actor.gravity = -4.0f;
}

void EnZo_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnZo *this = (EnZo *) thisx;
    Collider_DestroyCylinder(globalCtx, (ColliderCylinder *) &this->unk18C);
}

void EnZo_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnZo *this = (EnZo *) thisx;
    this->actionFunc(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4U);
    func_8099EA60(this, globalCtx);
    func_8099E858(&this->actor, globalCtx);
    func_8099E9E0(this, globalCtx);
}

s32 func_8099EFF4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    void *sp24;
    void *temp_v1;

    if (arg1 == 0xF) {
        SysMatrix_InsertTranslation(1500.0f, 0.0f, 0.0f, 1);
        SysMatrix_InsertXRotation_s(arg5->unk2F6, 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) arg5->unk2F4 * -1), 1);
        SysMatrix_InsertTranslation(-1500.0f, 0.0f, 0.0f, 1);
    }
    if (arg1 == 8) {
        SysMatrix_InsertXRotation_s((s16) ((s32) arg5->unk2FC * -1), 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) arg5->unk2FA * -1), 1);
    }
    if ((arg1 == 8) || (arg1 == 9) || (arg1 == 0xC)) {
        temp_v1 = arg5 + (arg1 * 2);
        sp24 = temp_v1;
        arg4->y += (s32) (Math_SinS(temp_v1->unk312) * 200.0f);
        arg4->z += (s32) (Math_CosS(temp_v1->unk33A) * 200.0f);
    }
    return 0;
}

void func_8099F15C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f sp30;
    Vec3f sp24;
    s8 *sp20;
    s8 *temp_v1;
    s8 temp_v0;

    sp30.x = D_8099F5CC.unk0;
    sp30.y = D_8099F5CC.unk4;
    sp30.z = D_8099F5CC.unk8;
    sp24.x = D_8099F5D8.unk0;
    temp_v1 = arg1 + &D_8099F578;
    sp24.y = D_8099F5D8.unk4;
    sp24.z = D_8099F5D8.unk8;
    temp_v0 = *temp_v1;
    if ((s32) temp_v0 >= 0) {
        sp20 = temp_v1;
        SysMatrix_MultiplyVector3fByState(&sp24, arg4 + (temp_v0 * 0xC) + 0x364);
    }
    if ((arg1 + &D_8099F578) == &D_8099F587) {
        sp20 = arg1 + &D_8099F578;
        SysMatrix_MultiplyVector3fByState(&sp30, arg4 + 0x3C);
    }
    if ((arg1 + &D_8099F578) == &D_8099F57C) {
        sp20 = arg1 + &D_8099F578;
        SysMatrix_MultiplyVector3fByState(&sp24, arg4 + 0x1E4);
    }
    if ((arg1 + &D_8099F578) == &D_8099F57F) {
        SysMatrix_MultiplyVector3fByState(&sp24, arg4 + 0x1F0);
    }
}

void EnZo_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnZo *this = (EnZo *) thisx;
    ? sp7C;
    Gfx *temp_s7;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_a0_2;
    GraphicsContext *temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    Gfx *phi_v0;
    s32 phi_s0;
    s32 phi_s0_2;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s7 = temp_a0->polyOpa.d - 0x1000;
    temp_a0->polyOpa.d = temp_s7;
    sp7C.unk0 = (s32) D_8099F600.unk0;
    sp7C.unk4 = (s32) D_8099F600.unk4;
    sp7C.unk8 = (s32) D_8099F600.unk8;
    temp_a0_2 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0_2;
    func_8012C28C(temp_a0_2);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0xFF;
    temp_v0_2->words.w0 = 0xFB000000;
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0;
    temp_v0_3->words.w0 = 0xE7000000;
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDB060020;
    temp_v0_4->words.w1 = Lib_SegmentedToVirtual(*(&sp7C + (this->unk41E * 4)));
    temp_v0_5 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDB060030;
    temp_v0_5->words.w1 = (u32) &D_8099F5F8;
    temp_s0->polyOpa.p = SkelAnime_DrawSV2(globalCtx, this->unk148.skeleton, this->unk148.limbDrawTbl, (s32) this->unk148.dListCount, func_8099EFF4, func_8099F15C, &this->actor, temp_s0->polyOpa.p);
    SysMatrix_InsertXRotation_s(0, 0);
    phi_v0 = temp_s7;
    phi_s0 = 0;
    phi_s0_2 = 0;
    do {
        temp_s0_2 = phi_s0 + 1;
        phi_v0->texture.cmd = 0;
        phi_v0 += 1;
        phi_s0 = temp_s0_2;
    } while (temp_s0_2 < 0x1000);
    do {
        func_8013CD64(&this->unk364, &this->actor.world, temp_s7, (f32) phi_s0_2 / 5.0f, 0xF, &D_8099F59C, &D_8099F58C);
        temp_s0_3 = phi_s0_2 + 1;
        phi_s0_2 = temp_s0_3;
    } while (temp_s0_3 != 5);
    func_8013CF04(this, globalCtx, temp_s7);
}

