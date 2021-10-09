f32 func_800C4188(GlobalContext *, s32, ? *, ? *, EnBigpamet *, f32 *); /* extern */
void func_80A2768C(EnBigpamet *arg0);               /* static */
void func_80A276F4(EnBigpamet *arg0);               /* static */
void func_80A2778C(Actor *arg0);                    /* static */
void func_80A27970(EnBigpamet *arg0, GlobalContext *arg1); /* static */
void func_80A27B58(Actor *arg0);                    /* static */
void func_80A27DD8(EnBigpamet *arg0, GlobalContext *arg1); /* static */
void func_80A27FE8(EnBigpamet *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_80A2811C(EnBigpamet *arg0, GlobalContext *arg1); /* static */
void func_80A281B4(EnBigpamet *arg0);               /* static */
void func_80A28274(EnBigpamet *arg0);               /* static */
void func_80A28378(EnBigpamet *arg0);               /* static */
void func_80A283F0(EnBigpamet *arg0);               /* static */
void func_80A284E4(Actor *arg0);                    /* static */
void func_80A28618(EnBigpamet *arg0, EnBigpamet *); /* static */
void func_80A286C0(void *arg0);                     /* static */
void func_80A28760(EnBigpamet *arg0);               /* static */
void func_80A28970(EnBigpamet *arg0);               /* static */
void func_80A28A28(EnBigpamet *arg0);               /* static */
void func_80A28B98(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A28D80(EnBigpamet *arg0);               /* static */
void func_80A28E40(EnBigpamet *arg0, EnBigpamet *); /* static */
void func_80A28ED4(EnBigpamet *arg0);               /* static */
void func_80A29028(EnBigpamet *arg0, GlobalContext *); /* static */
void func_80A29094(EnBigpamet *arg0);               /* static */
void func_80A292A8(EnBigpamet *arg0, GraphicsContext **arg1); /* static */
s32 func_80A293E4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80A29494(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
s32 func_80A29580(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80A29628(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80A2966C(Actor *arg0, GlobalContext *arg1); /* static */
extern AnimationHeader D_06000440;
extern AnimationHeader D_06000AF4;
extern AnimationHeader D_06000B30;
extern FlexSkeletonHeader D_06001A50;
extern AnimationHeader D_06001C68;
extern AnimationHeader D_060031DC;
extern AnimationHeader D_06004210;
extern FlexSkeletonHeader D_06007C70;
extern AnimationHeader D_0600823C;
static ColliderCylinderInit D_80A29700 = {
    {0xC, 0x10, 0xD, 0x39, 0x10, 1},
    {0, {0xF7CFFFFF, 4, 4}, {0xF7CF7FFF, 0, 0}, 1, 5, 1},
    {0x35, 0x32, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit D_80A2972C = {1, 0x35, 0x3C, 0xFA};
static DamageTable D_80A29734 = {
    {
        1,
        1,
        0,
        0xF1,
        1,
        1,
        0,
        1,
        1,
        1,
        0xF1,
        1,
        1,
        1,
        1,
        1,
        1,
        0xF1,
        1,
        1,
        0,
        0,
        1,
        1,
        1,
        1,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static void *D_80A29754 = {(void *)0x60055A0, (void *)0x60057A0, (void *)0x60059A0, (void *)0x60057A0};
static InitChainEntry D_80A29764;                   /* unable to generate initializer */
static s32 D_80A29778 = 0;
static Vec3f D_80A2977C = {0.0f, 1.0f, 0.0f};
static Color_RGBA8 D_80A29788 = {0xFA, 0xFA, 0xFA, 0xFF};
static Color_RGBA8 D_80A2978C = {0xB4, 0xB4, 0xB4, 0xFF};



void EnBigpamet_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnBigpamet *this = (EnBigpamet *) thisx;
    void **temp_s0;
    void **phi_s0;

    Actor_ProcessInitChain(&this->actor, &D_80A29764);
    SkelAnime_InitSV(globalCtx, (SkelAnime *) this->unk_144, &D_06007C70, &D_06004210, (Vec3s *) &this->unk_144[68], (Vec3s *) &this->unk_144[146], 0xD);
    SkelAnime_InitSV(globalCtx, (SkelAnime *) &this->unk_144[224], &D_06001A50, &D_06000B30, (Vec3s *) &this->unk_144[292], (Vec3s *) &this->unk_144[316], 4);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 55.0f);
    Collider_InitAndSetCylinder(globalCtx, (ColliderCylinder *) this->unk_2B0, &this->actor, &D_80A29700);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80A29734, &D_80A2972C);
    phi_s0 = &D_80A29754;
    if (D_80A29778 == 0) {
        do {
            temp_s0 = phi_s0 + 4;
            temp_s0->unk-4 = Lib_SegmentedToVirtual(*phi_s0);
            phi_s0 = temp_s0;
        } while (temp_s0 != &D_80A29764);
        D_80A29778 = 1;
    }
    this->actor.params = 1;
    func_80A281B4(this);
}

void EnBigpamet_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBigpamet *this = (EnBigpamet *) thisx;
    Collider_DestroyCylinder(globalCtx, (ColliderCylinder *) this->unk_2B0);
}

void func_80A2768C(EnBigpamet *arg0) {
    u8 temp_t6;
    u8 temp_v0;

    temp_v0 = arg0->unk_29C[0];
    temp_t6 = temp_v0 + 1;
    if (temp_v0 != 0) {
        arg0->unk_29C[0] = temp_t6;
        if ((temp_t6 & 0xFF) == 4) {
            arg0->unk_29C[0] = 0;
            return;
        }
        // Duplicate return node #5. Try simplifying control flow for better match
        return;
    }
    if (Rand_ZeroOne() < 0.05f) {
        arg0->unk_29C[0] = 1;
    }
}

void func_80A276F4(EnBigpamet *arg0) {
    s16 temp_v1;
    void *temp_v0;

    temp_v0 = arg0->actor.parent;
    temp_v1 = temp_v0->params;
    if (temp_v1 == 3) {
        temp_v0->shape.rot.y = arg0->actor.shape.rot.y;
        arg0->actor.parent->shape.rot.z = arg0->actor.shape.rot.z;
        SysMatrix_SetStateRotationAndTranslation(arg0->actor.world.pos.x, arg0->unk_2AC, arg0->actor.world.pos.z, arg0 + 0xBC);
        SysMatrix_GetStateTranslationAndScaledY(46.0f, arg0->actor.parent + 0x24);
        return;
    }
    if (temp_v1 == 4) {
        temp_v0->world.pos.x = arg0->actor.world.pos.x;
        arg0->actor.parent->world.pos.z = arg0->actor.world.pos.z;
    }
}

void func_80A2778C(Actor *arg0) {
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    s16 temp_s1;
    s16 temp_s2;
    s32 temp_s3;
    void *temp_s0;
    void *phi_s0;
    s32 phi_s3;

    arg0->unk2A2 = 0x28;
    phi_s0 = arg0 + 0x2FC;
    phi_s3 = 0;
    do {
        temp_s2 = (s16) (Rand_Next() >> 0x10);
        temp_s1 = Rand_S16Offset(0x1800, 0x2800);
        temp_f22 = Rand_ZeroFloat(5.0f) + 7.0f;
        temp_f20 = Math_CosS(temp_s1);
        phi_s0->unkC = (f32) (Math_SinS(temp_s2) * (temp_f22 * temp_f20));
        phi_s0->unk10 = (f32) ((Math_SinS(temp_s1) * temp_f22) + 3.0f);
        temp_f20_2 = Math_CosS(temp_s1);
        phi_s0->unk14 = (f32) (Math_CosS(temp_s2) * (temp_f22 * temp_f20_2));
        phi_s0->unk18 = (s16) (Rand_Next() >> 0x10);
        phi_s0->unk1A = (s16) (Rand_Next() >> 0x10);
        phi_s0->unk1C = (s16) (Rand_Next() >> 0x10);
        phi_s0->unk0 = (f32) ((Math_SinS(temp_s2) * 40.0f) + arg0->world.pos.x);
        phi_s0->unk4 = (f32) arg0->floorHeight;
        phi_s0->unk8 = (f32) ((Math_CosS(temp_s2) * 40.0f) + arg0->world.pos.z);
        temp_s3 = phi_s3 + 1;
        temp_s0 = phi_s0 + 0x24;
        temp_s0->unk-4 = (f32) (Rand_ZeroFloat(0.0025000002f) + 0.002f);
        phi_s0 = temp_s0;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x14);
    Audio_PlayActorSound2(arg0, 0x393FU);
}

void func_80A27970(EnBigpamet *arg0, GlobalContext *arg1) {
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    ? sp94;
    ? sp84;
    f32 *temp_s4;
    f32 temp_f20;
    f32 temp_f22;
    s16 temp_s0;
    s16 temp_s0_2;
    s32 temp_s3;
    u32 temp_v1;
    s32 phi_s3;

    temp_s4 = &sp9C;
    temp_f22 = arg0->actor.yDistToWater + arg0->actor.world.pos.y;
    phi_s3 = 0;
    do {
        temp_f20 = Rand_ZeroFloat(30.0f) + 30.0f;
        temp_v1 = Rand_Next() >> 0x10;
        temp_s0 = (s16) temp_v1;
        sp9C = (Math_SinS((s16) temp_v1) * temp_f20) + arg0->actor.world.pos.x;
        spA0 = Rand_ZeroFloat(10.0f) + arg0->actor.floorHeight + 8.0f;
        spA4 = (Math_CosS(temp_s0) * temp_f20) + arg0->actor.world.pos.z;
        if (func_800C4188(arg1, arg1 + 0x830, &sp84, &sp94, arg0, temp_s4) < temp_f22) {
            spA0 = temp_f22;
            EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s4, NULL, NULL, (s16) 0, (s16) Rand_S16Offset(0x3E8, 0xC8));
        } else {
            temp_s0_2 = Rand_S16Offset(0x3B6, 0x64);
            func_800B12F0(arg1, (Vec3f *) temp_s4, &D_80A2977C, &D_801D15B0, (s16) (s32) temp_s0_2, (s16) Rand_S16Offset(0xA, 0xA), (s16) 0x14);
        }
        temp_s3 = phi_s3 + 1;
        phi_s3 = temp_s3;
    } while (temp_s3 != 2);
}

void func_80A27B58(Actor *arg0) {
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    s16 temp_s1;
    s16 temp_s2;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_s1_2;
    s32 temp_s3;
    void *temp_s0;
    void *phi_s0;
    s32 phi_s1;
    s32 phi_s3;

    sp64 = (Math_SinS((s16) (arg0->wallYaw + 0x8000)) * 50.0f) + arg0->world.pos.x;
    sp68 = arg0->world.pos.y;
    sp6C = (Math_CosS((s16) (arg0->wallYaw + 0x8000)) * 50.0f) + arg0->world.pos.z;
    arg0->unk2A2 = 0x28;
    phi_s0 = arg0 + 0x2FC;
    phi_s3 = 0;
    do {
        temp_s1 = (s32) randPlusMinusPoint5Scaled(20480.0f) + arg0->wallYaw;
        temp_v0 = Rand_S16Offset(0x1000, 0x3000);
        temp_s2 = temp_v0;
        temp_f24 = Math_SinS(temp_v0);
        temp_f26 = Math_CosS(temp_s2);
        temp_f20 = Rand_ZeroFloat(5.0f) + 7.0f;
        temp_f22 = temp_f20 * temp_f26;
        phi_s0->unkC = (f32) (Math_SinS(temp_s1) * temp_f22);
        phi_s0->unk10 = (f32) ((temp_f20 * temp_f24) + 3.0f);
        phi_s0->unk14 = (f32) (Math_CosS(temp_s1) * temp_f22);
        phi_s0->unk18 = (s16) (Rand_Next() >> 0x10);
        phi_s0->unk1A = (s16) (Rand_Next() >> 0x10);
        phi_s0->unk1C = (s16) (Rand_Next() >> 0x10);
        temp_v1 = arg0->wallYaw;
        if ((s32) (s16) (temp_s1 - temp_v1) > 0) {
            phi_s1 = (temp_v1 + 0x4000) << 0x10;
        } else {
            phi_s1 = (temp_v1 - 0x4000) << 0x10;
        }
        temp_s1_2 = phi_s1 >> 0x10;
        temp_f20_2 = 60.0f * temp_f26;
        phi_s0->unk0 = (f32) ((Math_SinS((s16) temp_s1_2) * temp_f20_2) + sp64);
        phi_s0->unk4 = (f32) ((60.0f * temp_f24) + sp68);
        phi_s0->unk8 = (f32) ((Math_CosS((s16) temp_s1_2) * temp_f20_2) + sp6C);
        temp_s3 = phi_s3 + 1;
        temp_s0 = phi_s0 + 0x24;
        temp_s0->unk-4 = (f32) (Rand_ZeroFloat(0.0025000002f) + 0.002f);
        phi_s0 = temp_s0;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x14);
    Audio_PlayActorSound2(arg0, 0x393FU);
}

void func_80A27DD8(EnBigpamet *arg0, GlobalContext *arg1) {
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp90;
    f32 *temp_s3;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f6;
    s16 temp_s0;
    s16 temp_s0_2;
    s32 temp_s1;
    u32 temp_v1;
    s32 phi_s1;

    temp_f28 = Math_SinS((s16) (arg0->actor.wallYaw + 0x4000));
    temp_f30 = Math_CosS((s16) (arg0->actor.wallYaw + 0x4000));
    temp_f6 = Math_SinS((s16) (arg0->actor.wallYaw + 0x8000)) * 50.0f;
    sp90 = arg0->actor.world.pos.y;
    temp_f22 = temp_f6 + arg0->actor.world.pos.x;
    temp_f2 = arg0->actor.world.pos.z;
    temp_f24 = (Math_CosS((s16) (arg0->actor.wallYaw + 0x8000)) * 50.0f) + temp_f2;
    temp_s3 = &sp98;
    temp_f22_2 = temp_f22 + ((arg0->actor.world.pos.x - temp_f22) * 0.3f);
    temp_f24_2 = temp_f24 + ((temp_f2 - temp_f24) * 0.3f);
    phi_s1 = 0;
    do {
        temp_f20 = Rand_ZeroFloat(60.0f) + 50.0f;
        temp_v1 = Rand_Next() >> 0x11;
        temp_s0 = (s16) temp_v1;
        sp98 = (Math_CosS((s16) temp_v1) * temp_f20 * temp_f28) + temp_f22_2;
        sp9C = (Math_SinS(temp_s0) * temp_f20) + sp90;
        spA0 = (Math_CosS(temp_s0) * temp_f20 * temp_f30) + temp_f24_2;
        temp_s0_2 = Rand_S16Offset(0x3B6, 0x64);
        func_800B12F0(arg1, (Vec3f *) temp_s3, &D_801D15B0, &D_801D15B0, (s16) (s32) temp_s0_2, (s16) Rand_S16Offset(0x14, 0xA), (s16) 0x14);
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
    } while (temp_s1 != 4);
}

void func_80A27FE8(EnBigpamet *arg0, GlobalContext *arg1) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    s16 sp32;
    f32 *temp_a1;
    s16 temp_a0;

    if (arg0->actor.yDistToWater > 0.0f) {
        temp_a1 = &sp34;
        sp34 = arg0->actor.world.pos.x;
        sp3C = arg0->actor.world.pos.z;
        sp38 = arg0->actor.world.pos.y + arg0->actor.yDistToWater;
        EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_a1, 0x1F4, 0x384, (s16) 0);
        sp38 += 8.0f;
        if (func_80A28D0C != arg0->actionFunc) {
            temp_a0 = (s32) randPlusMinusPoint5Scaled(32768.0f) + arg0->actor.world.rot.y;
            sp32 = temp_a0;
            sp34 -= 55.0f * Math_SinS(temp_a0);
            sp3C -= 55.0f * Math_CosS(temp_a0);
        }
        EffectSsGSplash_Spawn(arg1, (Vec3f *) &sp34, NULL, NULL, (s16) 0, (s16) Rand_S16Offset(0x578, 0xC8));
    }
}

void func_80A2811C(EnBigpamet *arg0, GlobalContext *arg1) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 *temp_a1;

    if ((arg0->actor.yDistToWater > 0.0f) && (((u32) arg1->gameplayFrames % 0xEU) == 0)) {
        temp_a1 = &sp2C;
        sp2C = arg0->actor.world.pos.x;
        sp30 = arg0->actor.world.pos.y + arg0->actor.yDistToWater;
        sp34 = arg0->actor.world.pos.z;
        EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_a1, 0x1F4, 0x384, (s16) 0);
    }
}

void func_80A281B4(EnBigpamet *arg0) {
    arg0->actor.draw = NULL;
    arg0->actor.flags &= -2;
    arg0->actionFunc = func_80A281DC;
}

void func_80A281DC(EnBigpamet *this, GlobalContext *globalCtx) {
    WaterBox *sp2C;
    f32 sp28;

    if (this->actor.parent->params == 1) {
        if (func_800CA1AC(globalCtx, &globalCtx->colCtx, this->actor.world.pos.x, this->actor.world.pos.z, &sp28, &sp2C) != 0) {
            this->actor.yDistToWater = sp28 - this->actor.world.pos.y;
        } else {
            this->actor.yDistToWater = this->actor.world.pos.y;
        }
        func_80A2778C(&this->actor);
        func_80A27970(this, globalCtx);
        func_80A28274(this);
    }
}

void func_80A28274(EnBigpamet *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_06004210);
    arg0->actor.draw = EnBigpamet_Draw;
    arg0->unk29E = 0x14;
    arg0->actionFunc = func_80A282C8;
}

void func_80A282C8(EnBigpamet *this, GlobalContext *globalCtx) {
    if (Math_SmoothStepToF(&this->actor.world.pos.y, this->actor.floorHeight, 0.7f, 30.0f, 10.0f) < 1.0f) {
        this->unk29E = (s16) (this->unk29E - 1);
        if ((s32) this->unk29E >= 0x10) {
            func_80A27970(this, globalCtx);
        }
        if (this->unk29E == 0) {
            func_80A28378(this);
            return;
        }
        // Duplicate return node #6. Try simplifying control flow for better match
        return;
    }
    func_80A27970(this, globalCtx);
}

void func_80A28378(EnBigpamet *arg0) {
    arg0->actor.parent->unk1C = 2;
    arg0->actionFunc = func_80A283A0;
    arg0->actor.speedXZ = 0.0f;
}

void func_80A283A0(EnBigpamet *this, GlobalContext *globalCtx) {
    s8 *temp_a0;

    temp_a0 = this->unk_144;
    this = this;
    SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0);
    if (this->actor.parent->params == 3) {
        func_80A28E40(this, this);
    }
}

void func_80A283F0(EnBigpamet *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_0600823C);
    arg0->actor.params = 1;
    arg0->actionFunc = func_80A2844C;
    arg0->actor.speedXZ = 1.0f;
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
}

void func_80A2844C(EnBigpamet *this, GlobalContext *globalCtx) {
    Actor *temp_a1;
    s16 temp_v1;

    SkelAnime_FrameUpdateMatrix((SkelAnime *) this->unk_144);
    temp_a1 = this->actor.parent;
    temp_v1 = temp_a1->params;
    if (temp_v1 == 7) {
        Math_ScaledStepToS(&this->actor.shape.rot.y, Actor_YawBetweenActors(&this->actor, temp_a1), 0x400);
        this->actor.world.rot.y = this->actor.shape.rot.y;
        return;
    }
    if (temp_v1 == 8) {
        this->actor.speedXZ = 0.0f;
        return;
    }
    if (temp_v1 == 3) {
        func_80A28E40(this, (EnBigpamet *) temp_a1);
    }
}

void func_80A284E4(Actor *arg0) {
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_06001C68, -3.0f);
    arg0->unk29E = 0;
    arg0->unk2A8 = 1.0f;
    arg0->unk2A4 = 1.0f;
    arg0->speedXZ = 0.0f;
    Audio_PlayActorSound2(arg0, 0x39A2U);
    Audio_PlayActorSound2(arg0->parent, 0x399FU);
    arg0->unk298 = func_80A2855C;
}

void func_80A2855C(EnBigpamet *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s8 *temp_a0;

    temp_a0 = this->unk_144;
    this = this;
    if (SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0) != 0) {
        func_80A28618(this, this);
        return;
    }
    temp_f2 = this->unk15C;
    if (temp_f2 > 2.0f) {
        temp_f0 = temp_f2 - 2.0f;
        this->unk2A8 = (f32) (1.5f - (temp_f0 * 0.23333333f));
        this->unk2A4 = (f32) (1.5f - (temp_f0 * 0.083333336f));
        return;
    }
    temp_f0_2 = (0.25f * temp_f2) + 1.0f;
    this->unk2A8 = temp_f0_2;
    this->unk2A4 = temp_f0_2;
}

void func_80A28618(Actor *arg0) {
    arg0->draw = func_80A2966C;
    arg0->unk2A8 = 0.5f;
    arg0->speedXZ = 0.0f;
    Audio_PlayActorSound2(arg0, 0x392BU);
    arg0->unk298 = func_80A2866C;
}

void func_80A2866C(EnBigpamet *this, GlobalContext *globalCtx) {
    this->unk2A8 = (f32) (this->unk2A8 + 0.2f);
    if (this->unk2A8 > 1.1f) {
        func_80A286C0();
    }
}

void func_80A286C0(void *arg0) {
    arg0->unk2D0 = 0xF7CF7FFF;
    arg0->unk2C0 = (u8) (arg0->unk2C0 | 1);
    arg0->unkC0 = 0x680;
    arg0->unk29E = 0xF;
    arg0->unk298 = func_80A28708;
    arg0->unk2A8 = 1.0f;
}

void func_80A28708(EnBigpamet *this, GlobalContext *globalCtx) {
    this->unk29E = (s16) (this->unk29E - 1);
    this->actor.shape.rot.y += 0x3B00;
    func_800B9010(&this->actor, 0x319EU);
    if (this->unk29E == 0) {
        func_80A28760(this);
    }
}

void func_80A28760(EnBigpamet *arg0) {
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_v1;
    u16 temp_v0;

    temp_v0 = arg0->actor.bgCheckFlags;
    arg0->actor.speedXZ = 15.0f;
    if ((temp_v0 & 8) != 0) {
        temp_a1 = arg0->actor.yawTowardsPlayer;
        temp_a2 = arg0->actor.wallYaw;
        arg0->actor.bgCheckFlags = temp_v0 & 0xFFF7;
        temp_v1 = temp_a1 - temp_a2;
        if ((s32) temp_v1 >= 0x3C01) {
            arg0->actor.world.rot.y = temp_a2 + 0x3C00;
        } else if ((s32) temp_v1 < -0x3C00) {
            arg0->actor.world.rot.y = temp_a2 - 0x3C00;
        } else {
            arg0->actor.world.rot.y = temp_a1;
        }
    } else {
        arg0->actor.world.rot.y = arg0->actor.yawTowardsPlayer;
    }
    arg0->unk29E = 0;
    arg0->actionFunc = func_80A287E8;
}

void func_80A287E8(EnBigpamet *this, GlobalContext *globalCtx) {
    s16 sp2E;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    u8 temp_v1;

    this->actor.shape.rot.y += 0x3B00;
    func_800B9010(&this->actor, 0x319EU);
    this->unk29E = (s16) (this->unk29E + 1);
    temp_v0 = this->unk29E;
    if ((s32) temp_v0 >= 0x15) {
        this->unk29E = 0x14;
    } else {
        this->unk29E = temp_v0;
    }
    temp_v1 = (u8) this->unk_2B0[16];
    if ((temp_v1 & 2) != 0) {
        temp_v0_2 = this->actor.world.rot.y;
        this->unk_2B0[16] = temp_v1 & 0xFFFD;
        if ((s32) (s16) (this->actor.yawTowardsPlayer - temp_v0_2) > 0) {
            this->actor.world.rot.y = temp_v0_2 - 0x300;
        } else {
            this->actor.world.rot.y = temp_v0_2 + 0x300;
        }
    }
    if ((globalCtx->gameplayFrames & 1) != 0) {
        func_80A27FE8(this, globalCtx, globalCtx);
    }
    if ((this->actor.bgCheckFlags & 8) != 0) {
        temp_v0_3 = Quake_Add((globalCtx + (globalCtx->activeCamera * 4))->unk800, 3U);
        sp2E = temp_v0_3;
        this->actor.velocity.y = (f32) this->unk29E * 0.375f;
        Quake_SetSpeed(temp_v0_3, 0x4E20);
        Quake_SetQuakeValues(sp2E, 0xF, 0, 0, (s16) 0);
        Quake_SetCountdown(sp2E, 0xA);
        func_8013ECE0(this->actor.xyzDistToPlayerSq, 0xB4U, 0x14U, 0x64U);
        func_80A27B58(&this->actor);
        func_80A27DD8(this, globalCtx);
        func_80A28970(this);
    }
}

void func_80A28970(Actor *arg0) {
    Audio_PlayActorSound2(arg0, 0x392DU);
    arg0->shape.rot.z = 0;
    arg0->unk2C0 = (u8) (arg0->unk2C0 & 0xFFFE);
    arg0->unk2D0 = 0xF7CFFFFF;
    arg0->unk298 = func_80A289C8;
    arg0->speedXZ = 0.0f;
}

void func_80A289C8(EnBigpamet *this, GlobalContext *globalCtx) {
    this->unk2A8 = (f32) (this->unk2A8 - 0.1f);
    if (this->unk2A8 < 0.5f) {
        func_80A28A28();
    }
    func_80A27DD8(this, globalCtx);
}

void func_80A28A28(EnBigpamet *arg0) {
    EnBigpamet *temp_a3;

    temp_a3 = arg0;
    temp_a3->actor.draw = EnBigpamet_Draw;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x144, &D_060031DC, -3.0f);
    arg0->actionFunc = func_80A28A98;
    arg0->unk2A8 = 0.1f;
    arg0->unk2A4 = 1.0f;
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
}

void func_80A28A98(EnBigpamet *this, GlobalContext *globalCtx) {
    EnBigpamet *temp_a3;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_a1;
    s16 temp_v0;

    temp_a3 = this;
    temp_a1 = temp_a3->actor.yawTowardsPlayer;
    this = temp_a3;
    Math_ScaledStepToS(&temp_a3->actor.shape.rot.y, temp_a1, 0x600);
    if (SkelAnime_FrameUpdateMatrix((SkelAnime *) this->unk_144) != 0) {
        temp_v0 = this->actor.parent->params;
        if ((temp_v0 == 7) || (temp_v0 == 8)) {
            func_80A283F0(this);
            return;
        }
        func_80A284E4(&this->actor);
        return;
    }
    temp_f2 = this->unk15C;
    if (temp_f2 > 7.0f) {
        temp_f0 = 1.5f - ((temp_f2 - 7.0f) * 0.16666667f);
        this->unk2A8 = temp_f0;
        this->unk2A4 = temp_f0;
        return;
    }
    this->unk2A8 = (f32) ((0.2f * temp_f2) + 0.1f);
    this->unk2A4 = (f32) ((0.071428575f * temp_f2) + 1.0f);
}

void func_80A28B98(Actor *arg0, GlobalContext *arg1) {
    EnItem00 *sp24;
    Actor *temp_a1;
    Actor *temp_v1;
    EnItem00 *temp_v0_2;
    s16 temp_v0;
    u8 temp_t9;

    SkelAnime_ChangeAnimDefaultRepeat(arg0 + 0x144, &D_06000AF4);
    temp_t9 = arg0->unk2C0 & 0xFFFE;
    arg0->unk2C0 = temp_t9;
    arg0->unk2D0 = 0xF7CFFFFF;
    arg0->unk2C0 = (u8) (temp_t9 & 0xFFF9);
    arg0->unk2C1 = (u8) (arg0->unk2C1 & 0xFFFE);
    arg0->velocity.y = 22.0f;
    arg0->speedXZ = 5.0f;
    if ((func_80A2966C == arg0->draw) && (func_80A28DC0 != arg0->unk298)) {
        arg0->draw = EnBigpamet_Draw;
    } else {
        temp_a1 = arg0->unk2B8;
        if (temp_a1 != 0) {
            arg0->world.rot.y = Actor_YawBetweenActors(arg0, temp_a1) + 0x8000;
        }
    }
    temp_v1 = arg0->parent;
    arg0->bgCheckFlags &= -2;
    arg0->flags &= -2;
    arg0->params = 0;
    arg0->shape.rot.y = arg0->world.rot.y;
    temp_v0 = temp_v1->params;
    if ((temp_v0 == 3) || (temp_v0 == 4) || (temp_v0 == 8)) {
        temp_v1->params = 5;
    }
    temp_v0_2 = Item_DropCollectible(arg1, &arg0->world.pos, 5U);
    if (temp_v0_2 != 0) {
        temp_v0_2->actor.velocity.y = 15.0f;
        sp24 = temp_v0_2;
        sp24->actor.world.rot.y = Actor_YawToPoint(arg0, &arg0->home.pos);
    }
    Audio_PlayActorSound2(arg0, 0x39A3U);
    arg0->unk298 = func_80A28D0C;
}

void func_80A28D0C(EnBigpamet *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix((SkelAnime *) this->unk_144);
    if ((this->actor.bgCheckFlags & 1) != 0) {
        Audio_PlayActorSound2(&this->actor, 0x38DDU);
        func_80A27FE8(this, globalCtx);
        func_80A28D80(this);
    }
    this->actor.shape.rot.x += 0x800;
    this->actor.shape.rot.z += 0x1000;
}

void func_80A28D80(EnBigpamet *arg0) {
    arg0->actor.draw = func_80A2966C;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.shape.rot.x = 0;
    arg0->actor.shape.rot.z = 0;
    arg0->unk2A8 = 0.0f;
    arg0->unk_2B0[17] |= 1;
    arg0->actionFunc = func_80A28DC0;
}

void func_80A28DC0(EnBigpamet *this, GlobalContext *globalCtx) {
    s16 temp_v1;

    this->actor.shape.rot.x = (s16) (Rand_Next() >> 0x16);
    this->actor.shape.rot.z = (s16) (Rand_Next() >> 0x16);
    temp_v1 = this->actor.parent->params;
    if ((temp_v1 == 7) || (temp_v1 == 8)) {
        func_80A28A28(this);
        return;
    }
    if (temp_v1 == 9) {
        func_80A28ED4(this);
    }
}

void func_80A28E40(EnBigpamet *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_06000440, -2.0f);
    arg0->actionFunc = func_80A28E98;
    arg0->actor.flags |= 1;
    arg0->actor.speedXZ = 0.0f;
}

void func_80A28E98(EnBigpamet *this, GlobalContext *globalCtx) {
    if (SkelAnime_FrameUpdateMatrix((SkelAnime *) this->unk_144) != 0) {
        func_80A284E4(&this->actor);
    }
}

void func_80A28ED4(EnBigpamet *arg0) {
    arg0->actionFunc = func_80A28EE8;
}

void func_80A28EE8(EnBigpamet *this, GlobalContext *globalCtx) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    s16 sp3A;
    f32 temp_f0;
    s16 temp_v1;
    s32 temp_a0;

    this->actor.shape.rot.x = (s16) (Rand_Next() >> 0x16);
    this->actor.shape.rot.z = (s16) (Rand_Next() >> 0x16);
    if (Math_StepToF(&this->actor.scale.x, 0.0f, 0.00075f) != 0) {
        temp_v1 = func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000;
        temp_a0 = temp_v1 << 0x10;
        sp3A = temp_v1;
        sp3C = (Math_SinS((s16) (temp_a0 >> 0x10)) * 20.0f) + this->actor.world.pos.x;
        sp40 = this->actor.world.pos.y + 25.0f;
        sp44 = (Math_CosS(sp3A) * 20.0f) + this->actor.world.pos.z;
        func_800B0DE0(globalCtx, (Vec3f *) &sp3C, &D_801D15B0, &D_801D15B0, &D_80A29788, &D_80A2978C, (s16) 0x320, (s16) 0x32);
        Audio_PlaySoundAtPosition(globalCtx, &this->actor.world.pos, 0x32, 0x3A87U);
        Actor_MarkForDeath(&this->actor);
    }
    temp_f0 = this->actor.scale.x;
    this->actor.scale.y = temp_f0;
    this->actor.scale.z = temp_f0;
}

void func_80A29028(EnBigpamet *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk_2B0[17];
    if ((temp_v0 & 2) != 0) {
        arg0->unk_2B0[17] = temp_v0 & 0xFFFD;
        if ((arg0->actor.colChkInfo.damageEffect == 0xF) && (arg0->actor.parent->unk1C != 8) && (func_80A28E98 != arg0->actionFunc)) {
            func_80A28B98();
        }
    }
}

void func_80A29094(EnBigpamet *arg0) {
    Vec3f *temp_s0;
    s32 temp_s1;
    Vec3f *phi_s0;
    s32 phi_s1;

    phi_s0 = arg0 + 0x2FC;
    phi_s1 = 0;
    do {
        phi_s0->unk10 = (f32) (phi_s0->unk10 - 1.0f);
        Math_Vec3f_Sum(phi_s0, phi_s0 + 0xC, phi_s0);
        phi_s0->unk18 = (s16) (phi_s0->unk18 + ((Rand_Next() >> 0x17) + 0x700));
        phi_s0->unk1A = (s16) (phi_s0->unk1A + ((Rand_Next() >> 0x17) + 0x900));
        temp_s1 = phi_s1 + 1;
        temp_s0 = phi_s0 + 0x24;
        temp_s0->unk-8 = (s16) (phi_s0->unk1C + ((Rand_Next() >> 0x17) + 0xB00));
        phi_s0 = temp_s0;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x14);
}

void EnBigpamet_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnBigpamet *this = (EnBigpamet *) thisx;
    CollisionCheckContext *sp2C;
    s8 *sp28;
    CollisionCheckContext *temp_a1_2;
    s16 temp_v0;
    s8 *temp_a1;
    void (*temp_v0_2)(EnBigpamet *, GlobalContext *);

    func_80A2768C(this);
    func_80A29028(this, globalCtx);
    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk2A2;
    if ((s32) temp_v0 > 0) {
        this->unk2A2 = (s16) (temp_v0 - 1);
        func_80A29094(this);
    }
    temp_v0_2 = this->actionFunc;
    if ((func_80A281DC != temp_v0_2) && (func_80A282C8 != temp_v0_2)) {
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 40.0f, 50.0f, 60.0f, 0x1FU);
        func_80A276F4(this);
        Actor_SetHeight(&this->actor, 25.0f);
        temp_a1 = this->unk_2B0;
        sp28 = temp_a1;
        Collider_UpdateCylinder(&this->actor, (ColliderCylinder *) temp_a1);
        if (((u8) this->unk_2B0[16] & 1) != 0) {
            CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) sp28);
        }
        temp_a1_2 = &globalCtx->colChkCtx;
        if (((u8) this->unk_2B0[17] & 1) != 0) {
            sp2C = temp_a1_2;
            CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp28);
        }
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp28);
        if (func_80A287E8 != this->actionFunc) {
            func_80A2811C(this, globalCtx);
        }
    }
}

void func_80A292A8(EnBigpamet *arg0, GraphicsContext **arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s3;
    f32 temp_f12;
    s32 temp_s2;
    void *phi_s0;
    s32 phi_s2;

    if ((s32) arg0->unk2A2 > 0) {
        temp_a0 = *arg1;
        temp_s3 = temp_a0;
        func_8012C28C(temp_a0);
        temp_v0 = temp_s3->polyOpa.p;
        temp_s3->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w1 = -1;
        temp_v0->words.w0 = 0xFA000080;
        temp_v0_2 = temp_s3->polyOpa.p;
        temp_s3->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = -1;
        temp_v0_2->words.w0 = 0xFB000000;
        phi_s0 = arg0 + 0x2FC;
        phi_s2 = 0;
        do {
            SysMatrix_SetStateRotationAndTranslation(phi_s0->unk0, phi_s0->unk4, phi_s0->unk8, phi_s0 + 0x18);
            temp_f12 = phi_s0->unk20;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            temp_v0_3 = temp_s3->polyOpa.p;
            temp_s3->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDA380003;
            temp_v0_3->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_4 = temp_s3->polyOpa.p;
            temp_s2 = phi_s2 + 1;
            temp_s3->polyOpa.p = temp_v0_4 + 8;
            temp_v0_4->words.w1 = (u32) &D_0406AB30;
            temp_v0_4->words.w0 = 0xDE000000;
            phi_s0 += 0x24;
            phi_s2 = temp_s2;
        } while (temp_s2 != 0x14);
    }
}

s32 func_80A293E4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    f32 temp_f12;
    f32 temp_f14;
    s32 temp_v0;

    temp_v0 = arg5->unk298;
    if ((func_80A2855C == temp_v0) || (func_80A28A98 == temp_v0)) {
        if (arg1 == 2) {
            temp_f12 = arg5->unk2A4;
            Matrix_Scale(temp_f12, arg5->unk2A8, temp_f12, 1);
        } else if ((arg1 == 0xB) || (arg1 == 9) || (arg1 == 7) || (arg1 == 5)) {
            temp_f14 = arg5->unk2A8;
            Matrix_Scale(arg5->unk2A4, temp_f14, temp_f14, 1);
        }
    }
    return 0;
}

void func_80A29494(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 1) {
        arg4->unk2AC = (f32) SysMatrix_GetCurrentState()->mf[3][1];
    }
}

void EnBigpamet_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnBigpamet *this = (EnBigpamet *) thisx;
    GraphicsContext *sp30;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v1 = sp30->polyOpa.p;
    sp30->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDB060020;
    temp_v1->words.w1 = (u32) (&D_80A29754)[(u8) this->unk_29C[0]];
    SkelAnime_DrawSV(globalCtx, this->unk148, this->unk164, (s32) (u8) this->unk_144[2], func_80A293E4, func_80A29494, &this->actor);
    func_80A292A8(this, &globalCtx->state.gfxCtx);
}

s32 func_80A29580(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    f32 temp_f14;

    if (arg1 == 1) {
        if (func_80A28D0C == arg5->unk298) {
            arg3->y -= 2500.0f;
        } else {
            arg3->y -= 700.0f;
        }
    }
    temp_f14 = arg5->unk2A8;
    if ((temp_f14 != 1.0f) && (arg1 == 3)) {
        Matrix_Scale(1.0f, temp_f14, temp_f14, 1);
    }
    return 0;
}

void func_80A29628(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 1) {
        arg4->unk2AC = (f32) SysMatrix_GetCurrentState()->mf[3][1];
    }
}

void func_80A2966C(Actor *arg0, GlobalContext *arg1) {
    func_8012C28C(arg1->state.gfxCtx);
    SkelAnime_DrawSV(arg1, arg0->unk228, arg0->unk244, (s32) arg0->unk226, func_80A29580, func_80A29628, arg0);
    func_80A292A8((EnBigpamet *) arg0, &arg1->state.gfxCtx);
}

