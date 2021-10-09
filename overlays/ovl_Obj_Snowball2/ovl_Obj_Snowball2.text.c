void func_80B38E20(ObjSnowball2 *arg0, f32, Actor *); /* static */
void func_80B38E88(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B38EFC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B39108(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B39470(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B395C4(GlobalContext *arg0, Vec3f *arg1, Actor *, GlobalContext *); /* static */
void func_80B395EC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B39638(GlobalContext *arg0, void *arg1, Actor *, PosRot *); /* static */
void func_80B39834(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B39908(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B39B28(Actor *arg0, GlobalContext *arg1, s32); /* static */
void func_80B39B5C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B39C78(ObjSnowball2 *arg0);             /* static */
void func_80B39C9C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B39F60(Actor *arg0);                    /* static */
void func_80B39FA8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B3A0D8(Actor *arg0);                    /* static */
void func_80B3A13C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B3A498(Actor *arg0, CollisionCheckContext *, Actor *); /* static */
void func_80B3A500(Actor *arg0, Actor *arg1);       /* static */
extern Gfx D_06008B90;
static ColliderJntSphElementInit D_80B3A8E0 = {
    {0, {0x400000, 0, 2}, {0x583FFBE, 0, 0}, 0x19, 1, 1},
    {0, {{0, 0, 0}, 0xF}, 0x64},
};
static ColliderJntSphInit D_80B3A904 = {{0xA, 9, 9, 0x39, 0x20, 0}, 1, &D_80B3A8E0};
static Color_RGBA8 D_80B3A914 = {0xFA, 0xFA, 0xFA, 0xFF};
static Color_RGBA8 D_80B3A918 = {0xB4, 0xB4, 0xB4, 0xFF};
static ? D_80B3A91C;                                /* unable to generate initializer */
static Vec3f D_80B3A92C = {0.0f, 0.3f, 0.0f};
static s16 D_80B3A938 = 0;
static InitChainEntry D_80B3A93C;                   /* unable to generate initializer */

typedef struct ObjSnowball2 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderJntSph unk144;             /* inferred */
    /* 0x0164 */ ColliderJntSphElement unk164;      /* inferred */
    /* 0x01A4 */ void (*actionFunc)(ObjSnowball2 *, GlobalContext *);
    /* 0x01A8 */ char pad1A8[0x5];
    /* 0x01AD */ s8 unk1AD;                         /* inferred */
    /* 0x01AE */ char pad1AE[0x1];                  /* maybe part of unk1AD[2]? */
    /* 0x01AF */ s8 unk1AF;                         /* inferred */
    /* 0x01B0 */ char pad1B0[0x4];                  /* maybe part of unk1AF[5]? */
} ObjSnowball2;                                     /* size 0x1B4 */

void func_80B38E20(ObjSnowball2 *arg0) {
    SysMatrix_SetStateRotationAndTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y + (arg0->actor.shape.yOffset * arg0->actor.scale.y), arg0->actor.world.pos.z, arg0 + 0xBC);
    Matrix_Scale(arg0->actor.scale.x, arg0->actor.scale.y, arg0->actor.scale.z, 1);
    Collider_UpdateSpheres(0, arg0 + 0x144);
}

void func_80B38E88(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a3;
    s16 temp_a0;
    s16 temp_t7;
    s32 temp_v0;

    if (arg0->unk1AE == 0) {
        temp_a0 = arg0->params;
        arg0 = arg0;
        temp_v0 = func_800A8150(temp_a0 & 0x3F);
        temp_a3 = arg0;
        if (temp_v0 >= 0) {
            temp_t7 = temp_a3->params;
            arg0 = temp_a3;
            Item_DropCollectible(arg1, temp_a3 + 0x24, ((((s32) temp_t7 >> 8) & 0x7F) << 8) | temp_v0);
            arg0->unk1AE = 1;
        }
    }
}

void func_80B38EFC(Actor *arg0, GlobalContext *arg1) {
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 *temp_s2;
    f32 *temp_s3;
    f32 *temp_s4;
    f32 temp_f10;
    f32 temp_f20;
    f32 temp_f2;
    s32 temp_s0;
    s32 phi_s0;

    sp88 = arg0->world.pos.y + (arg0->shape.yOffset * arg0->scale.y);
    temp_s4 = &spA4;
    temp_s3 = &sp98;
    temp_s2 = &sp8C;
    phi_s0 = 0;
    do {
        sp8C = ((Rand_ZeroOne() * 30.0f) - 15.0f) + arg0->world.pos.x;
        sp90 = ((Rand_ZeroOne() * 20.0f) - 10.0f) + sp88;
        sp94 = ((Rand_ZeroOne() * 30.0f) - 15.0f) + arg0->world.pos.z;
        temp_f10 = (Rand_ZeroOne() - 0.5f) * 1.6f;
        sp9C = -1.5f;
        sp98 = temp_f10;
        temp_f2 = (Rand_ZeroOne() - 0.5f) * 1.6f;
        spA0 = temp_f2;
        spA4 = sp98 * -0.06f;
        spA8 = sp9C * -0.06f;
        spAC = temp_f2 * -0.06f;
        temp_f20 = Rand_ZeroOne();
        func_800B0E48(arg1, (Vec3f *) temp_s2, (Vec3f *) temp_s3, (Vec3f *) temp_s4, &D_80B3A914, &D_80B3A918, (s16) ((s32) (temp_f20 * 40.0f) + 0xA), (s16) ((s32) (Rand_ZeroOne() * 30.0f) + 0xA));
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 2);
}

void func_80B39108(Actor *arg0, GlobalContext *arg1) {
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spC8;
    f32 *temp_s6;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f2;
    s16 temp_s3;
    s32 temp_s2;
    s32 temp_s4;
    s32 phi_s4;
    s32 phi_s5;
    s32 phi_s1;
    s32 phi_v0;
    s32 phi_s1_2;

    temp_s6 = &spD0;
    spC8 = arg0->world.pos.y + (arg0->shape.yOffset * arg0->scale.y);
    phi_s4 = 0;
    phi_s5 = 0;
    do {
        temp_s3 = (s32) (Rand_ZeroOne() * 5957.0f) + phi_s5;
        temp_s2 = phi_s4 & 3;
        if ((Rand_Next() >> 0x1E) == 0) {
            phi_s1_2 = 0x20;
        } else {
            phi_s1_2 = 0x40;
        }
        phi_s1 = phi_s1_2;
        if (temp_s2 == 0) {
            phi_s1 = (s32) (s16) (phi_s1_2 | 1);
        }
        temp_f0 = Rand_ZeroOne();
        temp_f20 = (1.0f - (temp_f0 * temp_f0)) * 12.0f;
        temp_f22 = Math_SinS(temp_s3);
        temp_f24 = Math_CosS(temp_s3);
        temp_f12 = (Rand_ZeroOne() * 1.6f) - 0.8f;
        temp_f2 = fabsf(temp_f12) * temp_f12;
        temp_f18 = temp_f2 * 6.0f;
        spDC = temp_f22 * 4.0f;
        spE4 = temp_f24 * 4.0f;
        spE0 = temp_f18 + 9.0f;
        spD0 = (temp_f22 * temp_f20) + arg0->world.pos.x;
        spD4 = (temp_f2 * temp_f20) + spC8;
        spD8 = (temp_f24 * temp_f20) + arg0->world.pos.z;
        if (temp_s2 == 0) {
            phi_v0 = 1;
        } else {
            phi_v0 = 0;
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s6, (Vec3f *) &spDC, (Vec3f *) temp_s6, (s16) -0x12C, (s16) phi_s1, (s16) 0x1E, (s16) 0, (s16) 0, (s16) ((Rand_Next() >> 0x1D) + 8), (s16) phi_v0, (s16) 0, 0x32, (s16) -1, (s16) 0xEF, *(&D_80B3A91C + (temp_s2 * 4)));
        spD0 += (Rand_ZeroOne() - 0.5f) * 40.0f;
        spD4 += (Rand_ZeroOne() - 0.3f) * 45.0f;
        spD8 += (Rand_ZeroOne() - 0.5f) * 40.0f;
        temp_f20_2 = Rand_ZeroOne();
        func_800B0E48(arg1, (Vec3f *) temp_s6, &D_801D15B0, &D_80B3A92C, &D_80B3A914, &D_80B3A918, (s16) ((s32) (temp_f20_2 * 70.0f) + 0xA), (s16) ((s32) (Rand_ZeroOne() * 100.0f) + 0xA));
        temp_s4 = phi_s4 + 1;
        phi_s4 = temp_s4;
        phi_s5 += 0x1745;
    } while (temp_s4 != 0xB);
}

void func_80B39470(Actor *arg0, GlobalContext *arg1) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 *temp_s4;
    s32 temp_s1;
    s32 phi_s0;
    s32 phi_s1;

    sp5C = arg0->world.pos.y + arg0->yDistToWater;
    temp_s4 = &sp58;
    phi_s0 = 0;
    phi_s1 = 0;
    do {
        sp58 = (Math_SinS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s0)) * 15.0f) + arg0->world.pos.x;
        sp60 = (Math_CosS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s0)) * 15.0f) + arg0->world.pos.z;
        EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s4, NULL, NULL, (s16) 0, (s16) 0xC8);
        temp_s1 = phi_s1 + 1;
        phi_s0 += 0x3333;
        phi_s1 = temp_s1;
    } while (temp_s1 != 5);
    sp58 = arg0->world.pos.x;
    sp60 = arg0->world.pos.z;
    EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s4, NULL, NULL, (s16) 0, (s16) 0x12C);
}

void func_80B395C4(GlobalContext *arg0, Vec3f *arg1) {
    EffectSsGRipple_Spawn(arg0, arg1, 0xC8, 0x2BC, (s16) 0);
}

void func_80B395EC(Actor *arg0, GlobalContext *arg1) {
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 *temp_a1;

    temp_a1 = &sp18;
    sp18 = arg0->world.pos.x;
    sp1C = arg0->world.pos.y + arg0->yDistToWater;
    sp20 = arg0->world.pos.z;
    func_80B395C4(arg1, (Vec3f *) temp_a1, arg0, arg1);
}

void func_80B39638(GlobalContext *arg0, void *arg1) {
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 *temp_s6;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f2;
    f32 temp_f6;
    s32 temp_s0;
    s32 phi_s0;

    D_80B3A938 = D_80B3A938 + (Rand_Next() >> 0x11);
    temp_s6 = &sp80;
    temp_s5 = &sp8C;
    temp_s4 = &sp98;
    phi_s0 = 0;
    do {
        D_80B3A938 = D_80B3A938 + 0x8000;
        temp_f20 = Rand_ZeroOne();
        temp_f22 = Math_SinS(D_80B3A938) * temp_f20;
        temp_f24 = Rand_ZeroOne();
        temp_f2 = Math_CosS(D_80B3A938) * temp_f20;
        sp98 = arg1->unk0 + (temp_f22 * 5.0f);
        sp9C = arg1->unk4 + (temp_f24 * 25.0f);
        sp8C = temp_f22 * 1.55f;
        temp_f6 = temp_f2 * 1.55f;
        sp90 = temp_f24 * -0.7f;
        spA0 = arg1->unk8 + (temp_f2 * 5.0f);
        sp94 = temp_f6;
        sp80 = sp8C * -0.02f;
        sp84 = sp90 * -0.025f;
        sp88 = temp_f6 * -0.02f;
        EffectSsIceSmoke_Spawn(arg0, (Vec3f *) temp_s4, (Vec3f *) temp_s5, (Vec3f *) temp_s6, (s16) ((s32) (Rand_ZeroOne() * 30.0f) + 0x44));
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 2);
}

void func_80B39834(Actor *arg0, GlobalContext *arg1) {
    s32 temp_s0;
    s32 phi_s0;

    phi_s0 = 0;
    do {
        EffectSsBubble_Spawn(arg1, arg0 + 0x24, 0.0f, 20.0f, 30.0f, (Rand_ZeroOne() * 0.11f) + 0.03f);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 3);
}

void func_80B39908(Actor *arg0, GlobalContext *arg1) {
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 *temp_s2;
    f32 *temp_s3;
    f32 *temp_s4;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f2;
    s32 temp_s1;
    void *temp_s0;
    void *temp_v0;
    s32 phi_s1;

    temp_v0 = arg0->unk160;
    temp_s0 = temp_v0 + 0xE;
    phi_s1 = 0;
    if ((temp_v0->unk16 & 2) != 0) {
        temp_s4 = &spAC;
        temp_s3 = &spA0;
        temp_s2 = &sp94;
        do {
            sp94 = ((Rand_ZeroOne() * 14.0f) - 7.0f) + (f32) temp_s0->unk0;
            sp98 = ((Rand_ZeroOne() * 14.0f) - 7.0f) + (f32) temp_s0->unk2;
            sp9C = ((Rand_ZeroOne() * 14.0f) - 7.0f) + (f32) temp_s0->unk4;
            temp_f16 = (Rand_ZeroOne() - 0.5f) * 1.6f;
            spA4 = -0.8f;
            spA0 = temp_f16;
            temp_f2 = (Rand_ZeroOne() - 0.5f) * 1.6f;
            spA8 = temp_f2;
            spAC = spA0 * -0.06f;
            spB0 = spA4 * -0.06f;
            spB4 = temp_f2 * -0.06f;
            temp_f20 = Rand_ZeroOne();
            func_800B0E48(arg1, (Vec3f *) temp_s2, (Vec3f *) temp_s3, (Vec3f *) temp_s4, &D_80B3A914, &D_80B3A918, (s16) ((s32) (temp_f20 * 40.0f) + 0xA), (s16) ((s32) (Rand_ZeroOne() * 30.0f) + 0xA));
            temp_s1 = phi_s1 + 1;
            phi_s1 = temp_s1;
        } while (temp_s1 != 4);
    }
}

void func_80B39B28(Actor *arg0, GlobalContext *arg1) {
    if ((arg0->unk1AE == 0) && (arg0->unk1AF != arg1->roomCtx.currRoom.num)) {
        arg0->unk1AE = 1;
    }
}

void func_80B39B5C(Actor *arg0, GlobalContext *arg1) {
    Audio_PlaySoundAtPosition(arg1, arg0 + 0x24, 0x28, 0x28FDU);
}

void ObjSnowball2_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjSnowball2 *this = (ObjSnowball2 *) thisx;
    ColliderJntSph *sp28;
    ColliderJntSph *temp_a1;

    Actor_ProcessInitChain(&this->actor, &D_80B3A93C);
    temp_a1 = &this->unk144;
    sp28 = temp_a1;
    Collider_InitJntSph(globalCtx, temp_a1);
    this->actor.shape.rot.x = 0;
    this->actor.shape.rot.z = 0;
    this->actor.shape.rot.y = (s16) (Rand_Next() >> 0x10);
    ActorShape_Init(&this->actor.shape, 200.0f, NULL, 12.5f);
    this->actor.shape.shadowAlpha = 0x82;
    Collider_SetJntSph(globalCtx, temp_a1, &this->actor, &D_80B3A904, &this->unk164);
    func_80B38E20(this);
    this->actor.colChkInfo.mass = 0xFF;
    this->unk1AF = this->actor.room;
    func_80B39C78(this);
}

void ObjSnowball2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjSnowball2 *this = (ObjSnowball2 *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk144);
}

void func_80B39C78(ObjSnowball2 *arg0) {
    arg0->actor.flags |= 0x10;
    arg0->unk1AD = 0;
    arg0->actionFunc = func_80B39C9C;
}

void func_80B39C9C(Actor *arg0, GlobalContext *arg1) {
    s32 sp38;
    CollisionCheckContext *sp2C;
    Actor *sp28;
    Actor *temp_a2;
    CollisionCheckContext *temp_a1;
    s16 temp_v0_2;
    s32 temp_v1;
    u8 temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->unk155;
    temp_v1 = (temp_v0 & 2) != 0;
    if (temp_v1 != 0) {
        arg0->unk155 = (u8) (temp_v0 & 0xFFFD);
    }
    sp38 = temp_v1;
    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->room = -1;
        arg0->flags |= 0x10;
        if (func_800A817C(arg0->params & 0x3F) != 0) {
            func_80B38E88(arg0, arg1);
        }
        func_80B38EFC(arg0, arg1);
        func_800B8E58(arg1->actorCtx.actorList[2].first, 0x9C3U);
        func_80B39F60(arg0);
        return;
    }
    if (((arg0->bgCheckFlags & 0x20) != 0) && ((arg0->shape.yOffset * arg0->scale.y) < arg0->yDistToWater)) {
        func_80B3A498(arg0);
        return;
    }
    if ((temp_v1 != 0) && ((*arg0->unk160->unk24 & 0x583FFBC) != 0)) {
        func_80B38E88(arg0, arg1);
        func_80B39108(arg0, arg1);
        func_80B39B5C(arg0, arg1);
        Actor_MarkForDeath(arg0);
        return;
    }
    if ((temp_v1 != 0) && ((*arg0->unk160->unk24 & 2) != 0)) {
        func_80B39908(arg0, arg1);
    }
    if (arg0->unk1AD == 0) {
        Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
        Actor_UpdateBgCheckInfo(arg1, arg0, 15.0f, 15.0f, 0.0f, 0x44U);
        if (((arg0->bgCheckFlags & 1) != 0) && (BgCheck_GetActorOfMesh(&arg1->colCtx, (s32) arg0->floorBgId) == 0)) {
            arg0->unk1AD = 1U;
            arg0->flags &= -0x11;
        }
    }
    temp_a1 = &arg1->colChkCtx;
    temp_a2 = arg0 + 0x144;
    if (arg0->xzDistToPlayer < 800.0f) {
        sp2C = temp_a1;
        sp28 = temp_a2;
        CollisionCheck_SetAC(arg1, temp_a1, (Collider *) temp_a2);
        if (arg0->xzDistToPlayer < 150.0f) {
            CollisionCheck_SetOC(arg1, temp_a1, (Collider *) temp_a2);
            if (arg0->xzDistToPlayer < 100.0f) {
                temp_v0_2 = arg0->yawTowardsPlayer - arg1->actorCtx.actorList[2].first->world.rot.y;
                phi_v1 = (s32) temp_v0_2;
                if ((s32) temp_v0_2 < 0) {
                    phi_v1 = -(s32) temp_v0_2;
                }
                if (phi_v1 >= 0x5556) {
                    func_800B8A1C(arg0, arg1, 0, 36.0f, 30.0f);
                }
            }
        }
    }
}

void func_80B39F60(Actor *arg0) {
    f32 temp_f10;

    temp_f10 = (600.0f - arg0->shape.yOffset) * arg0->scale.y;
    arg0->unk1AC = 4;
    arg0->shape.yOffset = 600.0f;
    arg0->unk1A4 = func_80B39FA8;
    arg0->world.pos.y += temp_f10;
}

void func_80B39FA8(Actor *arg0, GlobalContext *arg1) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s32 sp2C;
    s8 temp_v0;

    func_80B39B28(arg0, arg1);
    temp_v0 = arg0->unk1AC;
    if ((s32) temp_v0 > 0) {
        arg0->unk1AC = (s8) (temp_v0 - 1);
        func_80B38EFC(arg0, arg1);
    }
    if (Actor_HasNoParent(arg0, arg1) != 0) {
        arg0->room = arg1->roomCtx.currRoom.num;
        arg0->speedXZ *= 3.8f;
        arg0->velocity.y *= 0.4f;
        arg0->gravity = -2.8f;
        Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
        Actor_UpdateBgCheckInfo(arg1, arg0, 15.0f, 15.0f, 0.0f, 0x45U);
        func_80B3A0D8(arg0);
        return;
    }
    sp30 = arg0->world.pos.x;
    sp34 = arg0->world.pos.y + 20.0f;
    sp38 = arg0->world.pos.z;
    arg0->floorHeight = func_800C411C(&arg1->colCtx, &arg0->floorPoly, &sp2C, arg0, (Vec3f *) &sp30);
}

void func_80B3A0D8(Actor *arg0) {
    arg0->unk1AC = 0x3C;
    arg0->colChkInfo.mass = 0xB4;
    arg0 = arg0;
    arg0->unk1A8 = Rand_S16Offset(-0x1388, 0xFA0);
    arg0->unk1AA = Rand_S16Offset(-0x320, 0x640);
    arg0->unk1A4 = func_80B3A13C;
}

void func_80B3A13C(Actor *arg0, GlobalContext *arg1) {
    s32 sp38;
    s32 sp34;
    s32 sp30;
    CollisionCheckContext *sp2C;
    Actor *sp28;
    Actor *temp_a2_2;
    CollisionCheckContext *temp_a1;
    s32 temp_a2;
    s32 temp_v1;
    s32 temp_v1_2;
    s8 temp_v0_2;
    u16 temp_v0_3;
    u8 temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->unk154;
    temp_v1 = (temp_v0 & 2) != 0;
    temp_a2 = (arg0->unk156 & 2) != 0;
    if (temp_v1 != 0) {
        arg0->unk154 = (u8) (temp_v0 & 0xFFFD);
    }
    if (temp_a2 != 0) {
        arg0->unk156 = (u8) (arg0->unk156 & 0xFFFD);
    }
    temp_v0_2 = arg0->unk1AC;
    if ((s32) temp_v0_2 > 0) {
        arg0->unk1AC = (s8) (temp_v0_2 - 1);
    }
    sp38 = temp_v1;
    sp34 = temp_a2;
    func_80B39B28(arg0, arg1, temp_a2);
    temp_v0_3 = arg0->bgCheckFlags;
    if (((((temp_v0_3 & 9) != 0) || (temp_v1 != 0)) && ((temp_v0_3 & 0x20) == 0)) || ((s32) arg0->unk1AC <= 0)) {
        func_80B38E88(arg0, arg1);
        func_80B39108(arg0, arg1);
        func_80B39B5C(arg0, arg1);
        Actor_MarkForDeath(arg0);
        return;
    }
    sp30 = 0;
    if ((temp_v0_3 & 0x60) != 0) {
        temp_v1_2 = temp_v0_3 & 0x40;
        phi_v1 = temp_v1_2;
        if ((temp_v1_2 != 0) || (arg0->speedXZ > 3.0f)) {
            if (arg0->yDistToWater < (1200.0f * arg0->scale.y)) {
                func_80B39470(arg0, arg1);
                func_80B395EC(arg0, arg1);
                phi_v1 = arg0->bgCheckFlags & 0x40;
            }
            if (phi_v1 != 0) {
                Audio_PlayActorSound2(arg0, 0x2817U);
            }
        } else if ((((arg1->gameplayFrames & 0xF) == 0) || ((Rand_Next() >> 0x10) == 0)) && (arg0->yDistToWater < (1200.0f * arg0->scale.y))) {
            func_80B395EC(arg0, arg1);
        }
        func_80B39834(arg0, arg1);
        arg0->unk1A8 = (s16) ((s32) arg0->unk1A8 >> 1);
        arg0->unk1AA = (s16) ((s32) arg0->unk1AA >> 1);
        if (sp34 != 0) {
            arg0->speedXZ *= 0.8f;
        } else {
            arg0->speedXZ *= 0.65f;
        }
        arg0->velocity.y *= 0.27f;
        arg0->gravity *= 0.27f;
        if (arg0->speedXZ < 0.4f) {
            sp30 = 1;
        }
    } else {
        if (sp34 != 0) {
            arg0->speedXZ *= 0.8f;
        } else {
            arg0->speedXZ *= 0.96f;
        }
        arg0->velocity.y *= 0.96f;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    Actor_UpdateBgCheckInfo(arg1, arg0, 15.0f, 15.0f, 0.0f, 0x45U);
    arg0->shape.rot.x += arg0->unk1A8;
    arg0->shape.rot.y += arg0->unk1AA;
    func_80B38E20((ObjSnowball2 *) arg0);
    temp_a2_2 = arg0 + 0x144;
    temp_a1 = &arg1->colChkCtx;
    sp2C = temp_a1;
    sp28 = temp_a2_2;
    CollisionCheck_SetOC(arg1, temp_a1, (Collider *) temp_a2_2);
    if (sp30 != 0) {
        func_80B3A498(arg0, temp_a1, temp_a2_2);
        return;
    }
    CollisionCheck_SetAT(arg1, temp_a1, (Collider *) temp_a2_2);
}

void func_80B3A498(Actor *arg0) {
    f32 temp_f0;

    arg0->home.pos.x = arg0->world.pos.x;
    temp_f0 = arg0->world.pos.y;
    arg0->unk1AC = 0x2E;
    arg0->flags |= 0x10;
    arg0->home.pos.y = temp_f0 + arg0->yDistToWater;
    arg0->world.pos.y = temp_f0 + (arg0->shape.yOffset * arg0->scale.y);
    arg0->shape.yOffset = 0.0f;
    arg0->speedXZ = 0.0f;
    arg0->unk1A4 = func_80B3A500;
    arg0->home.pos.z = arg0->world.pos.z;
}

void func_80B3A500(Actor *arg0, Actor *arg1) {
    f32 sp24;
    f32 sp20;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    s8 temp_v0;
    f32 phi_f0;
    f32 phi_f14;
    f32 phi_f12;

    temp_f2 = arg0->scale.y;
    temp_f4 = arg0->home.pos.y;
    temp_f12 = temp_f2 * 600.0f;
    temp_f6 = arg0->world.pos.y;
    arg0->unk1AC = (s8) (arg0->unk1AC - 1);
    temp_f14 = temp_f4 - temp_f6;
    arg0->unk1A8 = (s16) ((s32) arg0->unk1A8 >> 1);
    arg0->unk1AA = (s16) ((s32) arg0->unk1AA >> 1);
    arg0->speedXZ *= 0.7f;
    arg0->shape.rot.x += arg0->unk1A8;
    arg0->shape.rot.y += arg0->unk1AA;
    if (temp_f14 < -temp_f12) {
        arg0->gravity = temp_f2 * -40.0f;
        phi_f0 = 0.94f;
    } else if (temp_f12 < temp_f14) {
        arg0->gravity = temp_f2 * 24.0f;
        phi_f0 = 0.8f;
    } else if (temp_f12 > 0.001f) {
        arg0->gravity = (((1.6f * temp_f14) / temp_f12) + -1.0f + 0.6f) * 0.5f * 40.0f * temp_f2;
        phi_f0 = (((-0.13999999f * temp_f14) / temp_f12) + 0.94f + 0.8f) * 0.5f;
    } else {
        arg0->gravity = 0.0f;
        phi_f0 = 1.0f;
    }
    arg0->velocity.y *= phi_f0;
    arg0->velocity.y += arg0->gravity;
    arg0->world.pos.y += arg0->velocity.y;
    if (((arg1->unk18840 & 0xF) == 0) || (sp20 = temp_f12, sp24 = temp_f14, phi_f14 = temp_f14, phi_f12 = temp_f12, ((Rand_Next() >> 0x10) == 0))) {
        sp20 = temp_f2 * 600.0f;
        sp24 = temp_f4 - temp_f6;
        func_80B395C4((bitwise GlobalContext *) (temp_f2 * 600.0f), (bitwise Vec3f *) (temp_f4 - temp_f6), arg1, arg0 + 8);
        phi_f14 = temp_f4 - temp_f6;
        phi_f12 = temp_f2 * 600.0f;
    }
    temp_v0 = arg0->unk1AC;
    if ((s32) temp_v0 <= 0) {
        Actor_MarkForDeath(arg0);
        return;
    }
    if ((s32) temp_v0 < 0x14) {
        arg0->scale.x -= 0.00125f;
        temp_f0 = arg0->scale.x;
        arg0->scale.y = temp_f0;
        arg0->scale.z = temp_f0;
        if (((s32) arg0->unk1AC >= 6) && (phi_f14 < phi_f12)) {
            func_80B39638((bitwise GlobalContext *) phi_f12, (bitwise void *) phi_f14, arg1, &arg0->home);
        }
        if (arg0->unk1AC == 0xA) {
            func_80B38E88(arg0, (GlobalContext *) arg1);
        }
        func_800B9010(arg0, 0x2144U);
        return;
    }
    func_80B38E20((bitwise ObjSnowball2 *) phi_f12, phi_f14, arg0);
    CollisionCheck_SetOC((GlobalContext *) arg1, arg1 + 0x18884, (Collider *) (arg0 + 0x144));
}

void ObjSnowball2_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjSnowball2 *this = (ObjSnowball2 *) thisx;
    f32 temp_f0;

    this->actionFunc(this, globalCtx);
    temp_f0 = this->actor.projectedPos.z;
    if (temp_f0 < 460.0f) {
        if (temp_f0 > 200.0f) {
            this->actor.shape.shadowDraw = func_800B3FC0;
            this->actor.shape.shadowAlpha = (u8) ((s32) (0x1CC - (s32) temp_f0) >> 1);
            return;
        }
        if (temp_f0 > -10.0f) {
            this->actor.shape.shadowAlpha = 0x82;
            this->actor.shape.shadowDraw = func_800B3FC0;
            return;
        }
        goto block_6;
    }
block_6:
    this->actor.shape.shadowDraw = NULL;
}

void ObjSnowball2_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjSnowball2 *this = (ObjSnowball2 *) thisx;
    func_800BDFC0(globalCtx, &D_06008B90);
}

