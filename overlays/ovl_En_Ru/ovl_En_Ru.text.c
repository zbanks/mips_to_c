? func_8013CD64(? *, PosRot *, Gfx *, f32, s32, ? *, ? *); /* extern */
? func_8013CF04(EnRu *, GlobalContext *, Gfx *);    /* extern */
s32 func_80A389A0(SkelAnime *arg0, s16 arg1);       /* static */
? func_80A38A68(Actor *arg0, GlobalContext *arg1);  /* static */
void func_80A38B7C(Actor *arg0, s32 arg1);          /* static */
void func_80A38BF0(EnRu *arg0, GlobalContext *arg1); /* static */
void func_80A38C70(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A38FB4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5, Gfx **gfx); /* static */
void func_80A390F8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **gfx); /* static */
extern FlexSkeletonHeader D_0600C700;
static ColliderCylinderInit D_80A39450 = {
    {0, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x12, 0x40, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80A3947C = {0, 0, 0, 0, 0xFF};
static DamageTable D_80A39488 = {
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
static ? D_80A394A8;                                /* unable to generate initializer */
static ? D_80A39528;                                /* unable to generate initializer */
static ? D_80A3952C;                                /* unable to generate initializer */
static ? D_80A39530;                                /* unable to generate initializer */
static ? D_80A3953D;                                /* unable to generate initializer */
static ? D_80A39540;                                /* unable to generate initializer */
static ? D_80A39550;                                /* unable to generate initializer */
static s16 D_80A39560 = {0xFA0, 4, 1, 3, 0x1770, 4, 1, 6, 0xFA0, 4, 1, 3, 0x1770, 4, 1, 6};
static ? D_80A39580;                                /* unable to generate initializer */
static ? D_80A3958C;                                /* unable to generate initializer */
static ? D_80A395A8;                                /* unable to generate initializer */
static ? D_80A395B0;                                /* unable to generate initializer */

typedef struct EnRu {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnRu *, GlobalContext *);
    /* 0x0148 */ SkelAnime unk148;                  /* inferred */
    /* 0x018C */ SkelAnime unk18C;                  /* inferred */
    /* 0x01D0 */ char pad1D0[0x2];
    /* 0x01D2 */ s16 unk1D2;                        /* inferred */
    /* 0x01D4 */ s16 unk1D4;                        /* inferred */
    /* 0x01D6 */ s16 unk1D6;                        /* inferred */
    /* 0x01D8 */ char pad1D8[0x4];                  /* maybe part of unk1D6[3]? */
    /* 0x01DC */ Path *unk1DC;                      /* inferred */
    /* 0x01E0 */ char pad1E0[0x1E];
    /* 0x01FE */ Vec3s unk1FE;                      /* inferred */
    /* 0x0204 */ char pad204[0x84];                 /* maybe part of unk1FE[23]? */
    /* 0x0288 */ Vec3s unk288;                      /* inferred */
    /* 0x028E */ char pad28E[0x106];
    /* 0x0394 */ ? unk394;                          /* inferred */
    /* 0x0395 */ char pad395[0xB9];
    /* 0x044E */ s16 unk44E;                        /* inferred */
    /* 0x0450 */ char pad450[0x4];                  /* maybe part of unk44E[3]? */
} EnRu;                                             /* size 0x454 */

s32 func_80A389A0(SkelAnime *arg0, s16 arg1) {
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
        if ((s32) arg1 < 8) {
            temp_v1 = temp_t6 + &D_80A394A8;
            temp_t0 = temp_v1->unkA;
            phi_t0 = temp_t0;
            if ((s32) temp_t0 < 0) {
                sp2C = temp_v1;
                sp30 = 1;
                phi_t0 = SkelAnime_GetFrameCount(temp_v1->unk0);
            }
            sp30 = 1;
            SkelAnime_ChangeAnim(arg0, (temp_t6 + &D_80A394A8)->unk0, (temp_t6 + &D_80A394A8)->unk4, (f32) (temp_t6 + &D_80A394A8)->unk8, (f32) phi_t0, (u8) (s32) (temp_t6 + &D_80A394A8)->unkC, (f32) (temp_t6 + &D_80A394A8)->unkE);
            phi_t1 = 1;
        }
    }
    return phi_t1;
}

? func_80A38A68(Actor *arg0, GlobalContext *arg1) {
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

void func_80A38B7C(Actor *arg0, s32 arg1) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk450;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk450 = (s16) (temp_v0 - 1);
        phi_v1 = arg0->unk450;
    }
    if (phi_v1 == 0) {
        arg0->unk44E = (s16) (arg0->unk44E + 1);
        if ((s32) arg0->unk44E >= arg1) {
            arg0->unk44E = 0;
            arg0 = arg0;
            arg0->unk450 = Rand_S16Offset(0x1E, 0x1E);
        }
    }
}

void func_80A38BF0(EnRu *arg0, GlobalContext *arg1) {
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

void func_80A38C70(Actor *arg0, GlobalContext *arg1) {
    void *sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    sp3C = temp_v1;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    if (func_8013D5E8(arg0->shape.rot.y, 0x2710, arg0->yawTowardsPlayer) != 0) {
        sp30 = temp_v1->world.pos.x;
        sp34 = temp_v1->unkC44 + 3.0f;
        sp38 = temp_v1->world.pos.z;
        func_8013D2E0((Vec3f *) &sp30, arg0 + 0x3C, arg0 + 0xBC, arg0 + 0x312, arg0 + 0x318, arg0 + 0x31E, &D_80A39560);
    } else {
        Math_SmoothStepToS(arg0 + 0x312, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x314, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x318, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x31A, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x31E, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x320, 0, 4, 0x3E8, (s16) 1);
    }
    func_80A38B7C(arg0, 3);
    func_80A38A68(arg0, arg1);
    func_8013D9C8(arg1, arg0 + 0x336, arg0 + 0x364, 0x17);
}

void func_80A38DF4(EnRu *this, GlobalContext *globalCtx) {

}

void EnRu_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnRu *this = (EnRu *) thisx;
    SkelAnime *sp34;
    SkelAnime *temp_a1;
    SkelAnime *temp_a1_2;

    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    temp_a1 = &this->unk148;
    sp34 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_0600C700, NULL, &this->unk1FE, &this->unk288, 0x17);
    func_80A389A0(sp34, 0);
    temp_a1_2 = &this->unk18C;
    sp34 = temp_a1_2;
    Collider_InitCylinder(globalCtx, (ColliderCylinder *) temp_a1_2);
    Collider_SetCylinder(globalCtx, (ColliderCylinder *) temp_a1_2, &this->actor, &D_80A39450);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80A39488, &D_80A3947C);
    this->unk1DC = func_8013D648(globalCtx, (s16) ((s32) (this->actor.params & 0x7E00) >> 9), 0x3F);
    Actor_SetScale(&this->actor, 0.01f);
    this->actionFunc = func_80A38DF4;
    this->actor.gravity = -4.0f;
}

void EnRu_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnRu *this = (EnRu *) thisx;
    Collider_DestroyCylinder(globalCtx, (ColliderCylinder *) &this->unk18C);
}

void EnRu_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnRu *this = (EnRu *) thisx;
    this->actionFunc(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4U);
    func_80A38C70(&this->actor, globalCtx);
    func_80A38BF0(this, globalCtx);
}

s32 func_80A38FB4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    void *sp24;
    void *temp_v1;

    if (arg1 == 0x15) {
        SysMatrix_InsertTranslation(1500.0f, 0.0f, 0.0f, 1);
        SysMatrix_InsertXRotation_s(arg5->unk31A, 1);
        SysMatrix_InsertZRotation_s(arg5->unk318, 1);
        SysMatrix_InsertTranslation(-1500.0f, 0.0f, 0.0f, 1);
    }
    if (arg1 == 0xA) {
        Matrix_RotateY(arg5->unk320, 1U);
        SysMatrix_InsertXRotation_s(arg5->unk31E, 1);
    }
    if ((arg1 == 0xA) || (arg1 == 0xB) || (arg1 == 0x10)) {
        temp_v1 = arg5 + (arg1 * 2);
        sp24 = temp_v1;
        arg4->y += (s32) (Math_SinS(temp_v1->unk336) * 200.0f);
        arg4->z += (s32) (Math_CosS(temp_v1->unk364) * 200.0f);
    }
    return 0;
}

void func_80A390F8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f sp30;
    Vec3f sp24;
    s8 *sp20;
    s8 *temp_v1;
    s8 temp_v0;

    sp30.x = D_80A39580.unk0;
    sp30.y = D_80A39580.unk4;
    sp30.z = D_80A39580.unk8;
    sp24.x = D_80A3958C.unk0;
    temp_v1 = arg1 + &D_80A39528;
    sp24.y = D_80A3958C.unk4;
    sp24.z = D_80A3958C.unk8;
    temp_v0 = *temp_v1;
    if ((s32) temp_v0 >= 0) {
        sp20 = temp_v1;
        SysMatrix_MultiplyVector3fByState(&sp24, arg4 + (temp_v0 * 0xC) + 0x394);
    }
    if ((arg1 + &D_80A39528) == &D_80A3953D) {
        sp20 = arg1 + &D_80A39528;
        SysMatrix_MultiplyVector3fByState(&sp30, arg4 + 0x3C);
    }
    if ((arg1 + &D_80A39528) == &D_80A3952C) {
        sp20 = arg1 + &D_80A39528;
        SysMatrix_MultiplyVector3fByState(&sp24, arg4 + 0x1E4);
    }
    if ((arg1 + &D_80A39528) == &D_80A39530) {
        SysMatrix_MultiplyVector3fByState(&sp24, arg4 + 0x1F0);
    }
}

void EnRu_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnRu *this = (EnRu *) thisx;
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
    sp7C.unk0 = (s32) D_80A395B0.unk0;
    sp7C.unk4 = (s32) D_80A395B0.unk4;
    sp7C.unk8 = (s32) D_80A395B0.unk8;
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
    temp_v0_4->words.w1 = Lib_SegmentedToVirtual(*(&sp7C + (this->unk44E * 4)));
    temp_v0_5 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDB060030;
    temp_v0_5->words.w1 = (u32) &D_80A395A8;
    temp_s0->polyOpa.p = SkelAnime_DrawSV2(globalCtx, this->unk148.skeleton, this->unk148.limbDrawTbl, (s32) this->unk148.dListCount, func_80A38FB4, func_80A390F8, &this->actor, temp_s0->polyOpa.p);
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
        func_8013CD64(&this->unk394, &this->actor.world, temp_s7, (f32) phi_s0_2 / 5.0f, 0xF, &D_80A39550, &D_80A39540);
        temp_s0_3 = phi_s0_2 + 1;
        phi_s0_2 = temp_s0_3;
    } while (temp_s0_3 != 5);
    func_8013CF04(this, globalCtx, temp_s7);
}

