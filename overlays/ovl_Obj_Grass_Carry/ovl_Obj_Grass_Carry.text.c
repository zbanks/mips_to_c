void func_809AAE60(Actor *arg0);                    /* static */
void func_809AAE94(void *arg0, f32 arg1);           /* static */
void func_809AAF18(Actor *arg0);                    /* static */
void func_809AAF58(Actor *arg0, GlobalContext *arg1); /* static */
void func_809AAF9C(Vec3f *arg0, s16 arg1, GlobalContext *arg2); /* static */
void func_809AAFE8(Vec3f *arg0, GlobalContext *arg1); /* static */
void func_809AB3C4(ObjGrassCarry *arg0);            /* static */
void func_809AB3D8(ObjGrassCarry *arg0, GlobalContext *arg1); /* static */
void func_809AB428(Actor *arg0);                    /* static */
void func_809AB43C(void *arg0, ? arg1);             /* static */
void func_809AB474(void *arg0);                     /* static */
void func_809AB4A8(Actor *arg0, GlobalContext *arg1); /* static */
void func_809AB5FC(Actor *arg0);                    /* static */
void func_809AB610(Actor *arg0, GlobalContext *arg1); /* static */
void func_809AB6FC(Actor *arg0);                    /* static */
void func_809AB77C(Actor *arg0, GlobalContext *arg1); /* static */
void func_809ABB7C(Actor *this, GlobalContext *globalCtx); /* static */
static ColliderCylinderInit D_809ABBD0 = {
    {0xA, 9, 0, 0x29, 0x20, 1},
    {0, {0x400000, 0, 2}, {0, 0, 0}, 0x19, 0, 1},
    {0xA, 0x2C, 0, {0, 0, 0}},
};
static s16 D_809ABBFC = 0;
static s16 D_809ABC00 = 0;
static s16 D_809ABC04 = 0;
static s16 D_809ABC08 = 0;
static ? D_809ABC0C;                                /* unable to generate initializer */
static ? D_809ABC3C;                                /* unable to generate initializer */
static InitChainEntry D_809ABC4C;                   /* unable to generate initializer */

typedef struct ObjGrassCarry {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderCylinder unk144;           /* inferred */
    /* 0x0190 */ void *unk190;                      /* inferred */
    /* 0x0194 */ char pad194[0x8];                  /* maybe part of unk190[3]? */
    /* 0x019C */ void (*actionFunc)(ObjGrassCarry *, GlobalContext *);
} ObjGrassCarry;                                    /* size 0x1A0 */

void func_809AAE60(Actor *arg0) {
    f32 temp_f0;

    temp_f0 = arg0->minVelocityY;
    arg0->velocity.y += arg0->gravity;
    if (arg0->velocity.y < temp_f0) {
        arg0->velocity.y = temp_f0;
    }
}

void func_809AAE94(void *arg0, f32 arg1) {
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;

    arg1 = arg1;
    temp_f2 = arg0->unk0;
    temp_f14 = arg0->unk4;
    temp_f16 = arg0->unk8;
    temp_f12 = arg1 + (((Rand_ZeroOne() * 0.2f) - 0.1f) * arg1);
    temp_f18 = temp_f16 * temp_f12;
    temp_f10 = temp_f14 - (temp_f14 * temp_f12);
    arg0->unk0 = (f32) (temp_f2 - (temp_f2 * temp_f12));
    arg0->unk4 = temp_f10;
    arg0->unk8 = (f32) (temp_f16 - temp_f18);
}

void func_809AAF18(Actor *arg0) {
    func_809AAE60(arg0);
    func_809AAE94(arg0 + 0x64, 0.05f);
    Actor_ApplyMovement(arg0);
}

void func_809AAF58(Actor *arg0, GlobalContext *arg1) {
    Actor_UpdateBgCheckInfo(arg1, arg0, 7.5f, 35.0f, 0.0f, 0xC5U);
}

void func_809AAF9C(Vec3f *arg0, s16 arg1, GlobalContext *arg2) {
    if ((arg1 & 0x10) == 0) {
        Item_DropCollectibleRandom(arg2, NULL, arg0, (s16) ((s32) (arg1 << 0x14) >> 0x10));
    }
}

void func_809AAFE8(Vec3f *arg0, GlobalContext *arg1) {
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    ? *temp_s0;
    f32 *temp_s2;
    f32 *temp_s4;
    ? *phi_s0;

    temp_s4 = &spBC;
    temp_s2 = &spB0;
    phi_s0 = &D_809ABC0C;
    do {
        spB0 = arg0->x + (phi_s0->unk0 * 8.0f);
        spB4 = arg0->y + (phi_s0->unk4 * 8.0f) + 10.0f;
        spB8 = arg0->z + (phi_s0->unk8 * 8.0f);
        spBC = (Rand_ZeroOne() - 0.5f) * 8.0f;
        spC0 = Rand_ZeroOne() * 10.0f;
        spC4 = (Rand_ZeroOne() - 0.5f) * 8.0f;
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s2, (Vec3f *) temp_s4, (Vec3f *) temp_s2, (s16) -0x64, (s16) 0x40, (s16) 0x28, (s16) 3, (s16) 0, (s16) (s32) *(&D_809ABC3C + (((s32) (Rand_ZeroOne() * 111.1f) & 7) * 2)), (s16) 0, (s16) 0, 0x50, (s16) -1, (s16) 1, (Gfx *) &D_040527F0);
        spB0 = arg0->x + (phi_s0->unk0 * 16.0f);
        spB4 = arg0->y + (phi_s0->unk4 * 16.0f) + 10.0f;
        spB8 = arg0->z + (phi_s0->unk8 * 16.0f);
        spBC = (Rand_ZeroOne() - 0.5f) * 6.0f;
        spC0 = Rand_ZeroOne() * 10.0f;
        spC4 = (Rand_ZeroOne() - 0.5f) * 6.0f;
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s2, (Vec3f *) temp_s4, (Vec3f *) temp_s2, (s16) -0x64, (s16) 0x40, (s16) 0x28, (s16) 3, (s16) 0, (s16) (s32) *(&D_809ABC3C + (((s32) (Rand_ZeroOne() * 111.1f) % 7) * 2)), (s16) 0, (s16) 0, 0x50, (s16) -1, (s16) 1, (Gfx *) &D_040528B0);
        temp_s0 = phi_s0 + 0xC;
        phi_s0 = temp_s0;
    } while (temp_s0 != &D_809ABC3C);
}

void ObjGrassCarry_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjGrassCarry *this = (ObjGrassCarry *) thisx;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;

    Actor_ProcessInitChain(&this->actor, &D_809ABC4C);
    temp_a1 = &this->unk144;
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_809ABBD0);
    this->actor.colChkInfo.mass = 0x50;
    func_809AB3C4(this);
}

void ObjGrassCarry_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjGrassCarry *this = (ObjGrassCarry *) thisx;
    ColliderCylinder *temp_a1;
    s32 temp_v1;
    void *temp_v0;

    temp_a1 = &this->unk144;
    this = this;
    Collider_DestroyCylinder(globalCtx, temp_a1);
    temp_v1 = this->unk190;
    if (temp_v1 != 0) {
        temp_v0 = temp_v1 + (this->actor.params * 4);
        if (this == temp_v0->unk3298) {
            *(temp_v0 + 0x3298) = 0;
            this->unk190 = 0;
        }
    }
}

void func_809AB3C4(ObjGrassCarry *arg0) {
    arg0->actionFunc = func_809AB3D8;
}

void func_809AB3D8(ObjGrassCarry *arg0, GlobalContext *arg1) {
    void *temp_v0;

    temp_v0 = arg0->unk190;
    if (temp_v0 != 0) {
        if (temp_v0->unk3292 != arg0->actor.params) {
            func_809AB474();
            return;
        }
        func_809AB428();
        // Duplicate return node #4. Try simplifying control flow for better match
    }
}

void func_809AB428(Actor *arg0) {
    arg0->unk19C = func_809AB43C;
}

void func_809AB43C(void *arg0, ? arg1) {
    if (arg0->unk190->unk3292 != arg0->unk1C) {
        func_809AB474();
    }
}

void func_809AB474(void *arg0) {
    s16 temp_v0;

    arg0->unkC0 = 0;
    temp_v0 = arg0->unkC0;
    arg0->unk19C = func_809AB4A8;
    arg0->unk194 = 0;
    arg0->unkBE = temp_v0;
    arg0->unkBC = temp_v0;
    arg0->unk34 = temp_v0;
    arg0->unk32 = temp_v0;
    arg0->unk30 = temp_v0;
}

void func_809AB4A8(Actor *arg0, GlobalContext *arg1) {
    Actor *sp20;
    Vec3f *temp_v0;
    Vec3f *temp_v0_3;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0_4;
    void *temp_v0_2;

    if (Actor_HasParent(arg0, arg1) != 0) {
        func_809AB5FC(arg0);
        temp_v0 = arg0->unk194;
        if (temp_v0 != 0) {
            temp_v0->unkF = (u8) (temp_v0->unkF | 4);
        }
        temp_v0_2 = arg0->unk190;
        arg0->draw = func_809ABB7C;
        arg0->shape.shadowDraw = func_800B3FC0;
        arg0->shape.shadowAlpha = 0x3C;
        arg0->shape.shadowScale = 1.0f;
        temp_v0_2->unk3292 = (s16) (temp_v0_2->unk3292 ^ 1);
        arg0->room = -1;
        Audio_PlaySoundAtPosition(arg1, &arg0->world.pos, 0x14, 0x869U);
        return;
    }
    temp_v0_3 = arg0->unk190->unk3294;
    if (temp_v0_3 != 0) {
        sp20 = arg1->actorCtx.actorList[2].first;
        arg0->unk194 = temp_v0_3;
        Math_Vec3f_Copy(&arg0->world.pos, temp_v0_3);
        temp_v0_4 = arg0->unk194->unkC;
        arg0->world.rot.y = temp_v0_4;
        arg0->shape.rot.y = temp_v0_4;
        arg0->unk198 = (s16) arg0->unk194->unkE;
        arg0->xzDistToPlayer = Actor_XZDistanceBetweenActors(arg0, sp20);
        temp_f0 = Actor_YDistance(arg0, sp20);
        temp_f2 = arg0->xzDistToPlayer;
        arg0->yDistToPlayer = temp_f0;
        arg0->xyzDistToPlayerSq = (temp_f2 * temp_f2) + (temp_f0 * temp_f0);
        arg0->yawTowardsPlayer = Actor_YawBetweenActors(arg0, sp20);
        func_800B8BB0(arg0, arg1);
    }
}

void func_809AB5FC(Actor *arg0) {
    arg0->unk19C = func_809AB610;
}

void func_809AB610(Actor *arg0, GlobalContext *arg1) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s32 sp2C;

    if (Actor_HasNoParent(arg0, arg1) != 0) {
        func_809AB6FC(arg0);
        arg0->velocity.x = Math_SinS(arg0->world.rot.y) * arg0->speedXZ;
        arg0->velocity.z = Math_CosS(arg0->world.rot.y) * arg0->speedXZ;
        arg0->gravity = -0.1f;
        arg0->minVelocityY = -17.0f;
        func_809AAF18(arg0);
        func_809AAF58(arg0, arg1);
        arg0->gravity = -3.2f;
        return;
    }
    sp30 = arg0->world.pos.x;
    sp34 = arg0->world.pos.y + 20.0f;
    sp38 = arg0->world.pos.z;
    arg0->floorHeight = func_800C411C(&arg1->colCtx, &arg0->floorPoly, &sp2C, arg0, (Vec3f *) &sp30);
}

void func_809AB6FC(Actor *arg0) {
    arg0->unk19C = func_809AB77C;
    D_809ABBFC = -0xBB8;
    D_809ABC04 = (s16) (s32) ((Rand_ZeroOne() - 0.5f) * 1600.0f);
    D_809ABC00 = 0;
    D_809ABC08 = 0;
    arg0->unk19A = 0x3C;
}

void func_809AB77C(Actor *arg0, GlobalContext *arg1) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    Actor *temp_s0_2;
    CollisionCheckContext *temp_s1_2;
    Vec3f *temp_s0;
    f32 *temp_s3;
    s32 temp_s1;
    s32 temp_v0;
    u16 temp_v1_2;
    u8 temp_v1;
    void *temp_v0_2;
    s16 phi_s0;
    s32 phi_s1;

    temp_v1 = arg0->unk154;
    temp_s0 = arg0 + 0x24;
    temp_v0 = (temp_v1 & 2) != 0;
    if (temp_v0 != 0) {
        arg0->unk154 = (u8) (temp_v1 & 0xFFFD);
    }
    temp_v1_2 = arg0->bgCheckFlags;
    arg0->unk19A = (s16) (arg0->unk19A - 1);
    if (((temp_v1_2 & 0xB) != 0) || (temp_v0 != 0) || ((s32) arg0->unk19A <= 0)) {
        func_809AAFE8(temp_s0, arg1);
        func_809AAF9C(temp_s0, arg0->unk198, arg1);
        temp_v0_2 = arg0->unk190;
        arg0->draw = NULL;
        arg0->shape.shadowDraw = NULL;
        if (temp_v0_2 != 0) {
            arg0->room = temp_v0_2->unk3;
        }
        if ((arg0->bgCheckFlags & 0x20) == 0) {
            Audio_PlaySoundAtPosition(arg1, temp_s0, 0x14, 0x284EU);
        }
        func_809AB428(arg0);
        return;
    }
    phi_s0 = 0;
    if ((temp_v1_2 & 0x40) != 0) {
        sp60 = arg0->world.pos.y + arg0->yDistToWater;
        temp_s3 = &sp5C;
        phi_s1 = 0;
        do {
            sp5C = (Math_SinS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s0)) * 15.0f) + arg0->world.pos.x;
            sp64 = (Math_CosS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s0)) * 15.0f) + arg0->world.pos.z;
            EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s3, NULL, NULL, (s16) 0, (s16) 0xBE);
            temp_s1 = phi_s1 + 1;
            phi_s0 = (s16) (phi_s0 + 0x4000);
            phi_s1 = temp_s1;
        } while (temp_s1 != 4);
        sp5C = arg0->world.pos.x;
        sp64 = arg0->world.pos.z;
        EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s3, NULL, NULL, (s16) 0, (s16) 0x118);
        EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_s3, 0x12C, 0x2BC, (s16) 0);
        arg0->minVelocityY = -3.0f;
        arg0->velocity.x *= 0.1f;
        arg0->velocity.y *= 0.4f;
        arg0->velocity.z *= 0.1f;
        arg0->gravity *= 0.5f;
        D_809ABC00 = (s16) ((s32) D_809ABC00 >> 1);
        D_809ABBFC = (s16) ((s32) D_809ABBFC >> 1);
        D_809ABC08 = (s16) ((s32) D_809ABC08 >> 1);
        D_809ABC04 = (s16) ((s32) D_809ABC04 >> 1);
        arg0->bgCheckFlags &= 0xFFBF;
        Audio_PlaySoundAtPosition(arg1, arg0 + 0x24, 0x28, 0x28C5U);
    }
    Math_StepToS(&D_809ABC00, D_809ABBFC, 0x1F4);
    Math_StepToS(&D_809ABC08, D_809ABC04, 0xAA);
    arg0->shape.rot.x += D_809ABC00;
    arg0->shape.rot.y += D_809ABC08;
    func_809AAF18(arg0);
    func_809AAF58(arg0, arg1);
    temp_s0_2 = arg0 + 0x144;
    Collider_UpdateCylinder(arg0, (ColliderCylinder *) temp_s0_2);
    temp_s1_2 = &arg1->colChkCtx;
    CollisionCheck_SetAT(arg1, temp_s1_2, (Collider *) temp_s0_2);
    CollisionCheck_SetOC(arg1, temp_s1_2, (Collider *) temp_s0_2);
}

void ObjGrassCarry_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjGrassCarry *this = (ObjGrassCarry *) thisx;
    void (*temp_v0)(ObjGrassCarry *, GlobalContext *);

    if ((this->unk190 == 0) && (temp_v0 = this->actionFunc, (func_809AB610 != temp_v0)) && (func_809AB77C != temp_v0)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->actionFunc(this, globalCtx);
}

void func_809ABB7C(Actor *this, GlobalContext *globalCtx) {
    func_800BDFC0(globalCtx, (Gfx *) &D_050078A0);
}

