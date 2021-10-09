? EffectSsHitMark_SpawnCustomScale(GlobalContext *, ?, ?, PosRot *); /* extern */
? EffectSsStone1_Spawn(GlobalContext *, PosRot *, ?, u16); /* extern */
s32 func_800BC188(s32);                             /* extern */
? func_80115D5C(GlobalContext *, Actor *);          /* extern */
void func_8088A514(Actor *arg0);                    /* static */
void func_8088A7D8(GlobalContext *arg0, EnArrow *arg1); /* static */
void func_8088A894(EnArrow *arg0, GlobalContext *arg1); /* static */
void func_8088AA98(Actor *arg0, GlobalContext *arg1, s32); /* static */
void func_8088B88C(GlobalContext *arg0, EnArrow *arg1, Vec3f *arg2, EnArrow *); /* static */
extern ? D_01000000;
extern SkeletonHeader D_04014560;
extern ? D_0406F9F0;
extern ? D_0406FAE0;
static ColliderQuadInit D_8088C1E0 = {
    {0xA, 9, 0, 0, 8, 3},
    {2, {0x20, 0, 2}, {0xF7CFFFFF, 0, 0}, 0x1D, 0, 0},
    {
        {
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
        },
    },
};
static InitChainEntry D_8088C230;                   /* unable to generate initializer */
static void D_8088C234;                             /* unable to generate initializer */
static void D_8088C258;                             /* unable to generate initializer */
static void D_8088C27C;                             /* unable to generate initializer */
static void D_8088C2A0;                             /* unable to generate initializer */
static ? D_8088C2C4;                                /* unable to generate initializer */
static Vec3f D_8088C2CC = {0.0f, 0.5f, 0.0f};
static Vec3f D_8088C2D8 = {0.0f, 0.5f, 0.0f};
static Color_RGBA8 D_8088C2E4 = {0xFF, 0xFF, 0x64, 0xFF};
static Color_RGBA8 D_8088C2E8 = {0xFF, 0x32, 0, 0};
static Vec3f D_8088C2EC = {
    {400.0f, 400.0f, 0.0f},
    {-400.0f, 400.0f, 0.0f},
    {400.0f, 400.0f, 1500.0f},
    {-400.0f, 400.0f, 1500.0f},
    {400.0f, 400.0f, 1500.0f},
    {-400.0f, 400.0f, 1500.0f},
    {0.0f, 0.0f, -300.0f},
};
static Vec3f D_8088C340 = {
    {20.0f, -20.0f, 20.0f},
    {20.0f, -20.0f, 20.0f},
    {20.0f, -20.0f, 20.0f},
    {-20.0f, 20.0f, 20.0f},
    {-20.0f, -20.0f, 20.0f},
    {20.0f, 20.0f, 20.0f},
    {0.0f, 0.0f, 20.0f},
    {0.0f, 0.0f, 0.0f},
};



void EnArrow_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnArrow *this = (EnArrow *) thisx;
    s8 *sp30;
    s16 temp_a0;
    s8 *temp_a1;
    s8 *temp_v0;
    s8 temp_t7;

    Actor_ProcessInitChain(&this->actor, &D_8088C230);
    if (this->actor.params == -8) {
        this->actor.params = 8;
        this->unk_1C4[159] = 1;
    }
    if ((s32) this->actor.params < 6) {
        temp_v0 = &this->unk_144[68];
        SkelAnime_Init(globalCtx, (SkelAnime *) this->unk_144, &D_04014560, (AnimationHeader *) &D_040128BC, (Vec3s *) temp_v0, (Vec3s *) temp_v0, 5);
        temp_a0 = this->actor.params;
        if ((s32) temp_a0 < 3) {
            if (temp_a0 == 1) {
                *(&D_8088C234 + 0x18) = 4;
            } else {
                *(&D_8088C234 + 0x18) = 0x10;
            }
            Effect_Add(globalCtx, (s32 *) &this->unk_1C4[124], 2, 0U, (u8) 0, &D_8088C234);
        } else if (temp_a0 == 3) {
            Effect_Add(globalCtx, (s32 *) &this->unk_1C4[124], 2, 0U, (u8) 0, &D_8088C258);
        } else if (temp_a0 == 4) {
            Effect_Add(globalCtx, (s32 *) &this->unk_1C4[124], 2, 0U, (u8) 0, &D_8088C27C);
        } else if (temp_a0 == 5) {
            Effect_Add(globalCtx, (s32 *) &this->unk_1C4[124], 2, 0U, (u8) 0, &D_8088C2A0);
        }
    }
    temp_a1 = &this->unk_144[100];
    sp30 = temp_a1;
    Collider_InitQuad(globalCtx, (ColliderQuad *) temp_a1);
    Collider_SetQuad(globalCtx, (ColliderQuad *) temp_a1, &this->actor, &D_8088C1E0);
    if ((s32) this->actor.params < 6) {
        temp_t7 = (u8) this->unk_1C4[17] & 0xFFE7;
        this->unk_1C4[17] = temp_t7;
        this->unk_1C4[17] = temp_t7;
    }
    if ((s32) this->actor.params < 0) {
        this->unk_144[116] = 0x11;
    } else {
        this->unk_1C0 = func_800BC188((s32) this->actor.params);
        if (this->actor.params == 8) {
            this->unk_1C4[1] = 1;
        }
        if (this->actor.params == 7) {
            Actor_SetScale(&this->actor, 1.0f);
        }
    }
    this->actionFunc = func_8088A594;
}

void EnArrow_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnArrow *this = (EnArrow *) thisx;
    s16 temp_v0_2;
    s32 temp_a1;
    void *temp_v0;

    if ((s32) this->actor.params < 6) {
        temp_a1 = this->unk240;
        this = this;
        Effect_Destroy(globalCtx, temp_a1);
    }
    this = this;
    Collider_DestroyQuad(globalCtx, this + 0x1A8);
    temp_v0 = this->unk264;
    if ((temp_v0 != 0) && (temp_v0->unk138 != 0)) {
        temp_v0->unk4 = (s32) (temp_v0->unk4 & 0xFFFF7FFF);
    }
    temp_v0_2 = this->actor.params;
    if (((s32) temp_v0_2 >= 3) && ((s32) temp_v0_2 < 6) && (this->actor.child == 0)) {
        func_80115D5C(globalCtx);
    }
}

void func_8088A514(Actor *arg0) {
    f32 temp_f0;
    f32 phi_f2;

    temp_f0 = 16.0f - arg0->unk144;
    phi_f2 = 1.0f;
    if (temp_f0 < 1.0f) {

    } else if (temp_f0 > 80.0f) {
        phi_f2 = 80.0f;
    } else {
        phi_f2 = temp_f0;
    }
    func_800B6C04(arg0, phi_f2);
}

void func_8088A594(EnArrow *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    Actor *temp_a2;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    s8 temp_t0;

    temp_a2 = globalCtx->actorCtx.actorList[2].first;
    if (this->actor.parent != 0) {
        if (this->actor.params == 7) {
            if (Math_SmoothStepToF((f32 *) this->unk_144, 16.0f, 0.07f, 1.8f, 0.0f) > 0.5f) {
                func_800B9010(&this->actor, 0x1A1U);
                return;
            }
            temp_t0 = (u8) this->unk_144[4] + 1;
            this->unk_144[4] = temp_t0;
            if ((temp_t0 & 0xFF) >= 0x15) {
                this->actionFunc = func_8088ACE0;
                func_80115D5C(globalCtx);
                return;
            }
            // Duplicate return node #29. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #29. Try simplifying control flow for better match
        return;
    }
    temp_v0 = this->actor.params;
    if ((temp_v0 != 8) && (temp_a2->unkD57 == 0)) {
        if (temp_v0 == 7) {
            func_80115D5C(globalCtx, temp_a2);
        }
        Actor_MarkForDeath(&this->actor);
        return;
    }
    switch (temp_v0) {
    case 6:
        func_800B8E58(temp_a2, 0x1820U);
        break;
    case 0:
    case 1:
    case 2:
        func_800B8E58(temp_a2, 0x1804U);
        break;
    case 3:
    case 4:
    case 5:
        sp2C = temp_a2;
        func_800B8E58(temp_a2, 0x1839U);
        // fallthrough
    case 7:
        func_800B8E58(globalCtx->actorCtx.actorList[2].first, 0x8E0U);
        break;
    }
    this->actionFunc = func_8088ACE0;
    Math_Vec3f_Copy((Vec3f *) &this->unk_1C4[100], &this->actor.world.pos);
    temp_v0_2 = this->actor.params;
    if (temp_v0_2 == 7) {
        temp_f0 = this->unk144;
        if (temp_f0 < 3.5f) {
            this->unk144 = 3.5f;
        } else {
            this->unk144 = temp_f0;
        }
        func_8088A514(&this->actor);
        this->unk_1C4[156] = 0x63;
        func_80115D5C(globalCtx);
        return;
    }
    if ((s32) temp_v0_2 >= 6) {
        if ((temp_v0_2 == 8) && ((s32) this->actor.world.rot.x < 0)) {
            Actor_SetScale(&this->actor, 0.009f);
            this->unk_1C4[156] = 0x28;
        } else {
            func_800B6C04(&this->actor, 80.0f);
            this->unk_1C4[156] = 0xF;
        }
        this->actor.shape.rot.x = 0;
        this->actor.shape.rot.y = 0;
        this->actor.shape.rot.z = 0;
        return;
    }
    func_800B6C04(&this->actor, 150.0f);
    this->unk_1C4[156] = 0x10;
}

void func_8088A7D8(GlobalContext *arg0, EnArrow *arg1) {
    f32 temp_f6;

    arg1->actionFunc = func_8088B6B0;
    SkelAnime_ChangeAnimDefaultStop(arg1 + 0x144, (AnimationHeader *) &D_04012860);
    arg1->actor.world.rot.y = arg1->actor.world.rot.y + (s32) (24576.0f * (Rand_ZeroOne() - 0.5f)) + 0x8000;
    temp_f6 = 0.02f * Rand_ZeroOne();
    arg1->unk_1C4[156] = 0x32;
    arg1->unk_1C4[159] = 1;
    arg1->actor.gravity = -1.5f;
    arg1->actor.speedXZ *= 0.02f + temp_f6;
}

void func_8088A894(EnArrow *arg0, GlobalContext *arg1) {
    CollisionPoly *sp74;
    Vec3f sp68;
    Vec3f sp5C;
    Vec3f sp50;
    f32 sp4C;
    u32 sp44;
    f32 temp_f0;
    f32 temp_f12;
    void *temp_v0;
    f32 phi_f0;
    f32 phi_f0_2;
    f32 phi_f0_3;

    Math_Vec3f_Diff(arg0 + 0x24, arg0 + 0x228, &sp68);
    temp_v0 = arg0->unk264;
    temp_f12 = ((arg0->actor.world.pos.x - temp_v0->unk24) * sp68.x) + ((arg0->actor.world.pos.y - temp_v0->unk28) * sp68.y) + ((arg0->actor.world.pos.z - temp_v0->unk2C) * sp68.z);
    if (!(temp_f12 < 0.0f) && (sp4C = temp_f12, temp_f0 = Math3D_LengthSquared(&sp68), !(temp_f0 < 1.0f))) {
        Math_Vec3f_Scale(&sp68, temp_f12 / temp_f0);
        Math_Vec3f_Sum(arg0->unk264 + 0x24, &sp68, &sp5C);
        if (func_800C55C4(arg1 + 0x830, arg0->unk264 + 0x24, &sp5C, &sp50, &sp74, 1U, 1U, 1U, 1U, &sp44) != 0) {
            if (sp5C.x <= sp50.x) {
                phi_f0 = 1.0f;
            } else {
                phi_f0 = -1.0f;
            }
            arg0->unk264->unk24 = (f32) (phi_f0 + sp50.x);
            if (sp5C.y <= sp50.y) {
                phi_f0_2 = 1.0f;
            } else {
                phi_f0_2 = -1.0f;
            }
            arg0->unk264->unk28 = (f32) (phi_f0_2 + sp50.y);
            if (sp5C.z <= sp50.z) {
                phi_f0_3 = 1.0f;
            } else {
                phi_f0_3 = -1.0f;
            }
            arg0->unk264->unk2C = (f32) (phi_f0_3 + sp50.z);
            return;
        }
        Math_Vec3f_Copy(arg0->unk264 + 0x24, &sp5C);
        // Duplicate return node #14. Try simplifying control flow for better match
    }
}

void func_8088AA98(Actor *arg0, GlobalContext *arg1) {
    WaterBox *sp54;
    f32 sp50;
    Vec3f sp44;
    Actor *temp_a0;
    Vec3f *temp_a1;
    f32 *temp_t6;
    f32 temp_f0;
    s16 temp_v0_2;
    u16 temp_v0;
    f32 phi_f2;

    temp_t6 = &sp50;
    sp50 = arg0->world.pos.y;
    if ((func_800CA1AC(arg1, arg1 + 0x830, arg0->world.pos.x, arg0->world.pos.z, temp_t6, &sp54) != 0) && (arg0->world.pos.y < sp50) && (temp_v0 = arg0->bgCheckFlags, ((temp_v0 & 0x20) == 0))) {
        arg0->bgCheckFlags = temp_v0 | 0x20;
        Math_Vec3f_Diff(arg0 + 0x24, arg0 + 8, &sp44);
        if (sp44.y != 0.0f) {
            temp_f0 = sqrtf((sp44.x * sp44.x) + (sp44.z * sp44.z));
            phi_f2 = temp_f0;
            if (temp_f0 != 0.0f) {
                phi_f2 = (((sp50 - arg0->home.pos.y) / sp44.y) * temp_f0) / temp_f0;
            }
            sp44.y = sp50;
            temp_a1 = &sp44;
            sp44.x = arg0->home.pos.x + (sp44.x * phi_f2);
            sp44.z = arg0->home.pos.z + (sp44.z * phi_f2);
            EffectSsGSplash_Spawn(arg1, temp_a1, NULL, NULL, (s16) 0, (s16) 0x12C);
        }
        Audio_PlayActorSound2(arg0, 0x28C5U);
        EffectSsGRipple_Spawn(arg1, &sp44, 0x64, 0x1F4, (s16) 0);
        EffectSsGRipple_Spawn(arg1, &sp44, 0x64, 0x1F4, (s16) 4);
        EffectSsGRipple_Spawn(arg1, &sp44, 0x64, 0x1F4, (s16) 8);
        temp_v0_2 = arg0->params;
        if ((temp_v0_2 == 4) || (temp_v0_2 == 3)) {
            if ((temp_v0_2 == 4) && (arg0->unk274 != func_8088B6B0)) {
                Actor_Spawn(&arg1->actorCtx, arg1, 0x1A9, sp44.x, sp44.y, sp44.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0x12C);
                Actor_MarkForDeath(arg0);
                return;
            }
            temp_a0 = arg0->child;
            arg0->params = 2;
            arg0->unk1C0 = 0x20;
            if (temp_a0 != 0) {
                Actor_MarkForDeath(temp_a0);
                return;
            }
            func_80115D5C(arg1);
            // Duplicate return node #15. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #15. Try simplifying control flow for better match
    }
}

void func_8088ACE0(EnArrow *this, GlobalContext *globalCtx) {
    CollisionPoly *spAC;
    u32 spA8;
    Vec3f sp9C;
    f32 sp94;
    CollisionPoly *sp90;
    Vec3f sp84;
    u16 sp82;
    void *sp7C;
    f32 sp78;
    f32 sp74;
    Vec3f sp60;
    Vec3f sp54;
    s32 sp50;
    s8 *sp44;
    PosRot *sp40;
    CollisionContext *sp3C;
    PosRot *temp_a1;
    PosRot *temp_a1_2;
    PosRot *temp_a1_4;
    PosRot *temp_a3;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    s8 *temp_a1_3;
    s8 temp_t6;
    s8 temp_t7;
    s8 temp_v0_3;
    u8 temp_v1;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_a2;
    f32 phi_t2;
    u16 phi_a3;
    f32 phi_f0;
    f32 phi_f0_2;
    f32 phi_f0_3;
    s32 phi_a2_2;

    temp_v1 = (u8) this->unk_1C4[156];
    temp_t6 = temp_v1 - 1;
    phi_a2 = 0;
    phi_a2_2 = 0;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        this->unk_1C4[156] = temp_t6;
        phi_v0 = temp_t6 & 0xFF;
    }
    if ((phi_v0 == 0) || ((temp_v1_2 = this->actor.params, temp_v0 = temp_v1_2 != 0, phi_v0_2 = temp_v0, (temp_v1_2 == 7)) && (((u8) this->unk_1C4[158] != 0) || (temp_a2 = ((u8) this->unk_144[116] & 2) != 0, phi_a2 = temp_a2, phi_a2_2 = temp_a2, (temp_a2 != 0))))) {
        if (this->actor.params == 7) {
            if ((phi_a2_2 != 0) && (this->unk1E0->unk14 != 4) && (((u8) this->unk_144[116] & 4) != 0) && (temp_v0_8 = this->unk1AC, (temp_v0_8 != 0)) && (temp_v0_8->unk0 != 0x39)) {
                Math_Vec3f_Copy(&this->actor.world.pos, &this->actor.prevPos);
                this->actor.world.rot.y += (s32) randPlusMinusPoint5Scaled(8000.0f) + 0x8000;
                this->actor.velocity.y = -this->actor.velocity.y;
                this->unk_144[5] = -1;
                return;
            }
            if (((u8) this->unk_1C4[158] != 0) || (phi_a2_2 != 0)) {
                EffectSsStone1_Spawn(globalCtx, &this->actor.world, 0);
            }
            temp_a1_4 = &this->actor.world;
            sp40 = temp_a1_4;
            Audio_PlaySoundAtPosition(globalCtx, &temp_a1_4->pos, 0x14, 0x1854U);
            if (((u8) this->unk_1C4[158] != 0) && (this->actor.wallBgId == 0x32)) {
                Math_Vec3f_Copy(&sp84, &sp40->pos);
                sp90 = this->actor.wallPoly;
                sp94 = this->unk144;
                EffectSs_Spawn(globalCtx, 0x26, 0x80, (void *) &sp84);
            }
            goto block_20;
        }
block_20:
        Actor_MarkForDeath(&this->actor);
        return;
    }
    if (temp_v0 != 0) {
        temp_v0_2 = (s32) temp_v1_2 < 8;
        phi_v0_2 = temp_v0_2;
        if (temp_v0_2 != 0) {
            phi_v0_2 = ((u8) this->unk_144[116] & 2) != 0;
        }
    }
    if ((phi_v0_2 != 0) || ((u8) this->unk_1C4[158] != 0)) {
        if ((s32) temp_v1_2 >= 6) {
            phi_a3 = 0x1825U;
            if (phi_v0_2 != 0) {
                this->actor.world.pos.x = (this->actor.world.pos.x + this->actor.prevPos.x) * 0.5f;
                this->actor.world.pos.y = (this->actor.world.pos.y + this->actor.prevPos.y) * 0.5f;
                this->actor.world.pos.z = (this->actor.world.pos.z + this->actor.prevPos.z) * 0.5f;
            }
            if (this->actor.params == 8) {
                gGameInfo->data[1682] = -1;
                phi_t2 = 0.0f;
                if (this->actor.speedXZ == 0.0f) {
                    phi_t2 = 1e-45.0f;
                }
                Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x34, this->actor.world.pos.x, phi_t2);
                phi_a3 = 0x182BU;
            }
            temp_a1_2 = &this->actor.world;
            sp40 = temp_a1_2;
            sp82 = phi_a3;
            EffectSsStone1_Spawn(globalCtx, temp_a1_2, 0, phi_a3);
            Audio_PlaySoundAtPosition(globalCtx, &temp_a1_2->pos, 0x14, phi_a3);
            Actor_MarkForDeath(&this->actor);
        } else {
            temp_a3 = &this->actor.world;
            sp40 = temp_a3;
            sp50 = phi_v0_2;
            EffectSsHitMark_SpawnCustomScale(globalCtx, 0, 0x96, temp_a3);
            if ((phi_v0_2 != 0) && (this->unk1E0->unk14 != 4)) {
                temp_v0_4 = this->unk1AC;
                if ((temp_v0_4->unk138 != 0) && (((u8) this->unk_144[116] & 4) == 0) && ((temp_v0_4->unk4 & 0x4000) != 0)) {
                    this->unk264 = temp_v0_4;
                    sp7C = temp_v0_4;
                    func_8088A894(this, globalCtx);
                    Math_Vec3f_Diff(temp_v0_4 + 0x24, &sp40->pos, (Vec3f *) &this->unk_1C4[164]);
                    temp_v0_4->unk4 = (s32) (temp_v0_4->unk4 | 0x8000);
                    this->unk_144[116] = (u8) this->unk_144[116] & 0xFFFD;
                    this->actor.speedXZ *= 0.5f;
                    this->actor.velocity.y *= 0.5f;
                } else {
                    temp_t7 = (u8) this->unk_1C4[157] | 1;
                    this->unk_1C4[157] = temp_t7;
                    this->unk_1C4[157] = temp_t7 | 2;
                    Math_Vec3f_Copy(&sp40->pos, &this->actor.prevPos);
                    func_8088A7D8(globalCtx, this);
                    Audio_PlayActorSound2(&this->actor, 0x1814U);
                }
            } else if ((u8) this->unk_1C4[158] != 0) {
                this->actionFunc = func_8088B630;
                SkelAnime_ChangeAnimDefaultStop((SkelAnime *) this->unk_144, (AnimationHeader *) &D_040128BC);
                if ((s32) this->actor.params >= 0) {
                    this->unk_1C4[156] = 0x3C;
                } else {
                    this->unk_1C4[156] = 0x14;
                }
                temp_v1_3 = this->actor.params;
                if (((s32) temp_v1_3 >= 3) && ((s32) temp_v1_3 < 6)) {
                    this->actor.draw = NULL;
                }
                Audio_PlayActorSound2(&this->actor, 0x1815U);
                this->unk_1C4[157] = (u8) this->unk_1C4[157] | 1;
            }
        }
    } else {
        func_8088AA98(&this->actor, globalCtx, phi_a2);
        if (this->actor.params == 7) {
            if (this->unk_144[5] == 0) {
                temp_f12 = this->actor.speedXZ;
                temp_f2 = this->actor.velocity.y;
                sp78 = sqrtf((temp_f12 * temp_f12) + (temp_f2 * temp_f2));
                sp74 = Math_SinS(this->actor.world.rot.y) * this->actor.speedXZ;
                temp_f2_2 = 10.0f / sp78;
                temp_f12_2 = Math_CosS(this->actor.world.rot.y) * this->actor.speedXZ;
                this->unk_144[5] = 1;
                this->actor.prevPos.x = this->actor.world.pos.x - (sp74 * temp_f2_2);
                this->actor.prevPos.y = this->actor.world.pos.y - (this->actor.velocity.y * temp_f2_2);
                this->actor.prevPos.z = this->actor.world.pos.z - (temp_f12_2 * temp_f2_2);
            }
            if (Math_StepToF((f32 *) this->unk_144, 1.0f, 0.4f) != 0) {
                this->unk_1C4[156] = 0;
            } else {
                this->unk14A = (s16) (this->unk14A + (s32) (this->unk144 * (500.0f + Rand_ZeroFloat(1400.0f))));
                this->actor.world.rot.x += (s32) (500.0f * Math_SinS(this->unk14A));
                this->actor.shape.rot.x = this->actor.world.rot.x;
                this->unk14C = (s16) (this->unk14C + (s32) (this->unk144 * (500.0f + Rand_ZeroFloat(1400.0f))));
                this->actor.world.rot.y += (s32) (500.0f * Math_SinS(this->unk14C));
                this->actor.shape.rot.y = this->actor.world.rot.y;
                func_8088A514(&this->actor);
            }
            func_800B9010(&this->actor, 0x105AU);
        } else if ((s32) (u8) this->unk_1C4[156] < 7) {
            this->actor.gravity = -0.4f;
        }
        temp_a1 = &this->actor.world;
        sp40 = temp_a1;
        Math_Vec3f_Copy((Vec3f *) &this->unk_1C4[100], &temp_a1->pos);
        if (this->actor.speedXZ == 0.0f) {
            temp_f0 = this->actor.minVelocityY;
            this->actor.velocity.y -= 1.0f;
            if (this->actor.velocity.y < temp_f0) {
                this->actor.velocity.y = temp_f0;
            }
            Actor_ApplyMovement(&this->actor);
        } else {
            Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        }
        temp_v0_3 = func_800C576C(&globalCtx->colCtx, &this->actor.prevPos, &sp40->pos, &sp9C, &this->actor.wallPoly, 1U, 1U, 1U, 1U, &spA8);
        this->unk_1C4[158] = temp_v0_3;
        if ((temp_v0_3 & 0xFF) != 0) {
            func_800B90AC(globalCtx, &this->actor, (s32) this->actor.wallPoly, (s32) spA8, (s32) &sp9C);
            Math_Vec3f_Copy(&sp40->pos, &sp9C);
            this->actor.wallBgId = (u8) spA8;
        }
        if ((s32) this->actor.params < 6) {
            this->actor.shape.rot.x = Math_FAtan2F(this->actor.speedXZ, -this->actor.velocity.y);
        }
    }
    temp_v0_5 = this->unk264;
    if (temp_v0_5 != 0) {
        temp_a1_3 = &this->unk_1C4[164];
        if (temp_v0_5->unk138 != 0) {
            sp3C = &globalCtx->colCtx;
            sp44 = temp_a1_3;
            Math_Vec3f_Sum((Vec3f *) &this->unk_1C4[100], (Vec3f *) temp_a1_3, &sp60);
            Math_Vec3f_Sum(&sp40->pos, (Vec3f *) temp_a1_3, &sp54);
            if (func_800C55C4(sp3C, &sp60, &sp54, &sp9C, &spAC, 1U, 1U, 1U, 1U, &spA8) != 0) {
                if (sp54.x <= sp9C.x) {
                    phi_f0 = 1.0f;
                } else {
                    phi_f0 = -1.0f;
                }
                this->unk264->unk24 = (f32) (phi_f0 + sp9C.x);
                if (sp54.y <= sp9C.y) {
                    phi_f0_2 = 1.0f;
                } else {
                    phi_f0_2 = -1.0f;
                }
                this->unk264->unk28 = (f32) (phi_f0_2 + sp9C.y);
                if (sp54.z <= sp9C.z) {
                    phi_f0_3 = 1.0f;
                } else {
                    phi_f0_3 = -1.0f;
                }
                this->unk264->unk2C = (f32) (phi_f0_3 + sp9C.z);
                Math_Vec3f_Diff(this->unk264 + 0x24, &sp40->pos, (Vec3f *) sp44);
                temp_v0_6 = this->unk264;
                temp_v0_6->unk4 = (s32) (temp_v0_6->unk4 & 0xFFFF7FFF);
                this->unk264 = NULL;
            } else {
                Math_Vec3f_Sum(&sp40->pos, (Vec3f *) sp44, this->unk264 + 0x24);
            }
            if (((u8) this->unk_1C4[158] != 0) && (temp_v0_7 = this->unk264, (temp_v0_7 != 0))) {
                temp_v0_7->unk4 = (s32) (temp_v0_7->unk4 & 0xFFFF7FFF);
                this->unk264 = NULL;
                return;
            }
            // Duplicate return node #85. Try simplifying control flow for better match
            return;
        }
        this->unk264 = NULL;
        // Duplicate return node #85. Try simplifying control flow for better match
    }
}

void func_8088B630(EnArrow *this, GlobalContext *globalCtx) {
    EnArrow *temp_a2;
    s8 *temp_a0;
    u8 temp_a1;
    u8 temp_t6;
    u8 temp_v0;
    Actor *phi_a2;
    s32 phi_v1;

    temp_a0 = this->unk_144;
    this = this;
    SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0);
    temp_a2 = this;
    temp_a1 = temp_a2->actor.wallBgId;
    phi_a2 = &temp_a2->actor;
    if (temp_a1 != 0x32) {
        this = temp_a2;
        BgCheck2_UpdateActorAttachedToMesh(&globalCtx->colCtx, (s32) temp_a1, &temp_a2->actor);
        phi_a2 = &this->actor;
    }
    temp_v0 = phi_a2->unk260;
    temp_t6 = temp_v0 - 1;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        phi_a2->unk260 = temp_t6;
        phi_v1 = temp_t6 & 0xFF;
    }
    if (phi_v1 == 0) {
        Actor_MarkForDeath(phi_a2);
    }
}

void func_8088B6B0(EnArrow *this, GlobalContext *globalCtx) {
    s8 temp_t6;
    u8 temp_v0;
    s32 phi_v1;

    SkelAnime_FrameUpdateMatrix((SkelAnime *) this->unk_144);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    func_8088AA98(&this->actor, globalCtx);
    temp_v0 = (u8) this->unk_1C4[156];
    temp_t6 = temp_v0 - 1;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        this->unk_1C4[156] = temp_t6;
        phi_v1 = temp_t6 & 0xFF;
    }
    if (phi_v1 == 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void EnArrow_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnArrow *this = (EnArrow *) thisx;
    ? sp44;
    Actor *temp_a2;
    s16 temp_v0;
    s16 temp_v0_2;

    temp_a2 = globalCtx->actorCtx.actorList[2].first;
    if (((u8) this->unk_1C4[159] != 0) || ((temp_v0 = this->actor.params, ((s32) temp_v0 >= 0)) && ((temp_v0 == 7) || (temp_a2->unkD57 != 0))) || (func_80123358(globalCtx, (Player *) temp_a2) == 0)) {
        this->actionFunc(this, globalCtx);
    }
    temp_v0_2 = this->actor.params;
    if (((s32) temp_v0_2 >= 3) && ((s32) temp_v0_2 < 6)) {
        sp44.unk0 = (s32) D_8088C2C4.unk0;
        sp44.unk4 = (u16) D_8088C2C4.unk4;
        if (this->actor.child == 0) {
            Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, (&sp44 + (this->actor.params * 2))->unk-6, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, 0);
        }
    } else if (temp_v0_2 == 0) {
        func_800B0EB0(globalCtx, (Vec3f *) &this->unk_1C4[112], &D_8088C2CC, &D_8088C2D8, &D_8088C2E4, &D_8088C2E8, (s16) 0x64, (s16) 0, (s16) 8);
    }
    Math_Vec3f_Copy(&this->actor.home.pos, &this->actor.prevPos);
}

void func_8088B88C(GlobalContext *arg0, EnArrow *arg1, Vec3f *arg2) {
    Vec3f *sp4C;
    Vec3f sp40;
    Vec3f sp34;
    s32 sp30;
    Vec3f *temp_a0;
    s16 temp_v0;
    s32 temp_v1;
    Vec3f *phi_a2;
    s32 phi_v1;

    temp_a0 = arg2 + 0x48;
    arg2 = arg2;
    SysMatrix_MultiplyVector3fByState(temp_a0, arg1 + 0x234);
    if (arg1->actionFunc == func_8088ACE0) {
        if (arg1->unk244 == 0) {
            phi_a2 = arg2;
        } else {
            phi_a2 = arg2 + ((arg0->gameplayFrames & 1) * 0x18) + 0x18;
        }
        sp4C = phi_a2;
        SysMatrix_MultiplyVector3fByState(phi_a2, &sp40);
        SysMatrix_MultiplyVector3fByState(phi_a2 + 0xC, &sp34);
        temp_v0 = arg1->actor.params;
        if ((s32) temp_v0 < 8) {
            temp_v1 = (s32) temp_v0 < 6;
            phi_v1 = temp_v1;
            if (arg1->unk264 == 0) {
                sp30 = temp_v1;
                func_80126440(arg0, arg1 + 0x1A8, arg1 + 0x244, &sp40, &sp34);
                phi_v1 = temp_v1 & MIPS2C_ERROR(Read from unset register $v0);
            } else if ((temp_v1 != 0) && (sp40.x == arg1->unk248) && (sp40.y == arg1->unk24C) && (sp40.z == arg1->unk250) && (sp34.x == arg1->unk254) && (sp34.y == arg1->unk258) && (sp34.z == arg1->unk25C)) {
                phi_v1 = 0;
            }
            if (phi_v1 != 0) {
                func_800A81F0(Effect_GetParams(arg1->unk240), &sp40, &sp34);
            }
        }
    }
}

void EnArrow_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnArrow *this = (EnArrow *) thisx;
    s32 spA4;
    f32 spA0;
    f32 sp9C;
    GraphicsContext *sp98;
    Gfx *sp80;
    Gfx *sp68;
    u8 sp63;
    f32 sp5C;
    GraphicsContext *sp58;
    Gfx *sp3C;
    GraphicsContext *sp34;
    Gfx *sp2C;
    EnArrow *temp_a1;
    EnArrow *temp_a3;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_21;
    Gfx *temp_v0_22;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_a0_2;
    GraphicsContext *temp_t0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    s16 temp_v0;
    u8 temp_a1_2;
    u8 temp_a1_3;
    s32 phi_v0;
    f32 phi_f12;
    s16 phi_v0_2;
    EnArrow *phi_a3;

    temp_a3 = this;
    temp_v0 = temp_a3->actor.params;
    phi_a3 = temp_a3;
    if ((s32) temp_v0 < 6) {
        this = temp_a3;
        func_8012C28C(globalCtx->state.gfxCtx);
        phi_v0 = 1;
        if (this->actor.projectedPos.z < 160.0f) {
            phi_v0 = 0;
        }
        SkelAnime_LodDraw(globalCtx, this->unk148, this->unk164, NULL, NULL, &this->actor, phi_v0);
        goto block_21;
    }
    if (temp_v0 == 7) {
        spA4 = 0xFF - (s32) (temp_a3->unk144 * 4.0f);
        temp_f2 = (temp_a3->actor.speedXZ * 0.1f) + 1.0f;
        temp_f16 = 1.0f / temp_f2;
        temp_t0 = globalCtx->state.gfxCtx;
        if ((s32) temp_a3->unk_144[5] >= 0) {
            temp_a1 = temp_a3;
            this = temp_a3;
            sp98 = temp_t0;
            spA0 = temp_f2;
            sp9C = temp_f16;
            func_8088B88C(globalCtx, temp_a1, &D_8088C340, temp_a3);
        } else {
            this = temp_a3;
            sp98 = temp_t0;
            spA0 = temp_f2;
            sp9C = temp_f16;
            Collider_ResetQuadAT(globalCtx, (Collider *) &temp_a3->unk_144[100]);
        }
        temp_f0 = this->unk144;
        sp98 = globalCtx->state.gfxCtx;
        temp_f12 = temp_f0 * (sp9C * 0.002f);
        Matrix_Scale(temp_f12, temp_f12, temp_f0 * (temp_f2 * 0.002f), 1);
        SysMatrix_InsertTranslation(0.0f, 0.0f, 460.0f, 1);
        if (this->actor.speedXZ == 0.0f) {
            sp98 = globalCtx->state.gfxCtx;
            func_800B8118(&this->actor, globalCtx, 0);
            temp_v0_2 = globalCtx->state.gfxCtx->polyXlu.p;
            globalCtx->state.gfxCtx->polyXlu.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDE000000;
            temp_v0_2->words.w1 = (u32) &D_0406F380;
            temp_v0_3 = globalCtx->state.gfxCtx->polyXlu.p;
            globalCtx->state.gfxCtx->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xE200001C;
            temp_v0_3->words.w1 = 0xC81049D8;
            temp_v0_4 = globalCtx->state.gfxCtx->polyXlu.p;
            globalCtx->state.gfxCtx->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xFC272C05;
            temp_v0_4->words.w1 = 0xFF1493FF;
            temp_v0_5 = globalCtx->state.gfxCtx->polyXlu.p;
            globalCtx->state.gfxCtx->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xFB000000;
            temp_v0_5->words.w1 = (spA4 & 0xFF) | 0xE6E19600;
            sp98 = globalCtx->state.gfxCtx;
            SysMatrix_NormalizeXYZ(&D_801D1E20);
            temp_v0_6 = globalCtx->state.gfxCtx->polyXlu.p;
            globalCtx->state.gfxCtx->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDA380003;
            sp98 = globalCtx->state.gfxCtx;
            sp80 = temp_v0_6;
            sp80->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_7 = globalCtx->state.gfxCtx->polyXlu.p;
            globalCtx->state.gfxCtx->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w0 = 0xDA380001;
            temp_v0_7->words.w1 = (u32) &D_01000000;
            temp_v0_8 = globalCtx->state.gfxCtx->polyXlu.p;
            globalCtx->state.gfxCtx->polyXlu.p = temp_v0_8 + 8;
            temp_v0_8->words.w0 = 0xDE000000;
            temp_v0_8->words.w1 = (u32) &D_0406F9F0;
            return;
        }
        sp98 = globalCtx->state.gfxCtx;
        func_800B8050(&this->actor, globalCtx, 0);
        temp_v0_9 = globalCtx->state.gfxCtx->polyOpa.p;
        globalCtx->state.gfxCtx->polyOpa.p = temp_v0_9 + 8;
        temp_v0_9->words.w0 = 0xDE000000;
        temp_v0_9->words.w1 = (u32) &D_0406F380;
        temp_v0_10 = globalCtx->state.gfxCtx->polyOpa.p;
        globalCtx->state.gfxCtx->polyOpa.p = temp_v0_10 + 8;
        temp_v0_10->words.w0 = 0xFC272C03;
        temp_v0_10->words.w1 = 0xFFFC93F8;
        temp_v0_11 = globalCtx->state.gfxCtx->polyOpa.p;
        globalCtx->state.gfxCtx->polyOpa.p = temp_v0_11 + 8;
        temp_v0_11->words.w0 = 0xFA00007F;
        temp_v0_11->words.w1 = 0xE6E196FF;
        temp_v0_12 = globalCtx->state.gfxCtx->polyOpa.p;
        globalCtx->state.gfxCtx->polyOpa.p = temp_v0_12 + 8;
        temp_v0_12->words.w0 = 0xDA380003;
        sp98 = globalCtx->state.gfxCtx;
        sp68 = temp_v0_12;
        sp68->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_13 = globalCtx->state.gfxCtx->polyOpa.p;
        globalCtx->state.gfxCtx->polyOpa.p = temp_v0_13 + 8;
        temp_v0_13->words.w1 = (u32) &D_0406FAE0;
        temp_v0_13->words.w0 = 0xDE000000;
        return;
    }
    if (temp_a3->actor.speedXZ != 0.0f) {
        this = temp_a3;
        temp_a1_2 = (u32) ((Math_CosS((s16) ((u8) temp_a3->unk_1C4[156] * 0x1388)) * 127.5f) + 127.5f) & 0xFF;
        temp_a0 = globalCtx->state.gfxCtx;
        sp63 = temp_a1_2;
        sp58 = temp_a0;
        func_8012C240(temp_a0);
        temp_a1_3 = temp_a1_2;
        temp_v0_14 = sp58->polyXlu.p;
        sp58->polyXlu.p = temp_v0_14 + 8;
        temp_v0_14->words.w1 = 0;
        temp_v0_14->words.w0 = 0xD9FCFFFF;
        if (this->actor.params == 6) {
            temp_v0_15 = sp58->polyXlu.p;
            sp58->polyXlu.p = temp_v0_15 + 8;
            temp_v0_15->words.w1 = -1;
            temp_v0_15->words.w0 = 0xFA000000;
            temp_v0_16 = sp58->polyXlu.p;
            sp58->polyXlu.p = temp_v0_16 + 8;
            temp_v0_16->words.w0 = 0xFB000000;
            temp_v0_16->words.w1 = (temp_a1_3 & 0xFF) | 0xFFFF00;
            phi_f12 = 50.0f;
        } else {
            temp_v0_17 = sp58->polyXlu.p;
            sp58->polyXlu.p = temp_v0_17 + 8;
            temp_v0_17->words.w0 = 0xFA000000;
            temp_v0_17->words.w1 = 0xC0000FF;
            temp_v0_18 = sp58->polyXlu.p;
            sp58->polyXlu.p = temp_v0_18 + 8;
            temp_v0_18->words.w0 = 0xFB000000;
            temp_v0_18->words.w1 = (temp_a1_3 & 0xFF) | 0xFAFA0000;
            phi_f12 = 150.0f;
        }
        sp58 = sp58;
        sp5C = phi_f12;
        SysMatrix_StatePush();
        SysMatrix_InsertMatrix(&globalCtx->mf_187FC, 1);
        if (this->actor.speedXZ == 0.0f) {
            phi_v0_2 = 0;
        } else {
            phi_v0_2 = (globalCtx->gameplayFrames & 0xFF) * 0xFA0;
        }
        sp58 = sp58;
        sp5C = phi_f12;
        SysMatrix_InsertZRotation_s(phi_v0_2, 1);
        Matrix_Scale(phi_f12, phi_f12, phi_f12, 1);
        temp_v0_19 = sp58->polyXlu.p;
        sp58->polyXlu.p = temp_v0_19 + 8;
        temp_v0_19->words.w0 = 0xDA380003;
        sp58 = sp58;
        sp3C = temp_v0_19;
        sp3C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_20 = sp58->polyXlu.p;
        sp58->polyXlu.p = temp_v0_20 + 8;
        temp_v0_20->words.w1 = (u32) D_04054A90;
        temp_v0_20->words.w0 = 0xDE000000;
        SysMatrix_StatePop();
        Matrix_RotateY(this->actor.world.rot.y, 1U);
        goto block_21;
    }
    if (temp_a3->actor.velocity.y != 0.0f) {
        temp_a0_2 = globalCtx->state.gfxCtx;
        this = temp_a3;
        sp34 = temp_a0_2;
        func_8012C28C(temp_a0_2);
        SysMatrix_InsertMatrix(&globalCtx->mf_187FC, 1);
        temp_v0_21 = sp34->polyOpa.p;
        sp34->polyOpa.p = temp_v0_21 + 8;
        temp_v0_21->words.w0 = 0xDA380003;
        sp2C = temp_v0_21;
        sp2C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_22 = sp34->polyOpa.p;
        sp34->polyOpa.p = temp_v0_22 + 8;
        temp_v0_22->words.w1 = (u32) D_04058BA0;
        temp_v0_22->words.w0 = 0xDE000000;
block_21:
        phi_a3 = this;
    }
    func_8088B88C(globalCtx, phi_a3, &D_8088C2EC, phi_a3);
}

