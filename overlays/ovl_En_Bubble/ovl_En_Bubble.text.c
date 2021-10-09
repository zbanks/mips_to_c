? func_800B8E1C(s32, void *, f32, s16, f32);        /* extern */
void func_8089F4E0(Actor *arg0, f32 arg1);          /* static */
s16 func_8089F59C(EnBubble *arg0);                  /* static */
s32 func_8089F5D0();                                /* static */
void func_8089F5F4(void *arg0, s32 arg1);           /* static */
s16 func_8089F660(EnBubble *arg0, GlobalContext *arg1); /* static */
s32 func_8089F8BC(void *arg0);                      /* static */
s32 func_8089F908(EnBubble *arg0);                  /* static */
void func_8089F95C(Vec3f *arg0, Vec3f *arg1, Vec3f *arg2); /* static */
void func_8089F9E4(f32 *arg0);                      /* static */
void func_8089FA54(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_8089FF30(void *arg0);                      /* static */
s32 func_8089FFCC(EnBubble *arg0, GlobalContext *); /* static */
void func_808A005C(EnBubble *arg0);                 /* static */
void func_808A03A0(void *arg0, ? arg1);             /* static */
extern ? D_06001000;
static ColliderJntSphElementInit D_808A0700 = {
    {{0, {0, 0, 4}, {0xF7CFD757, 0, 0}, 0, 1, 1}, {0, {{0, 0, 0}, 0x10}, 0x64}},
    {{0, {0, 0, 0}, {0x2820, 0, 0}, 0, 0x79, 0}, {0, {{0, 0, 0}, 0x10}, 0x64}},
};
static ColliderJntSphInit D_808A0748 = {{6, 0x11, 9, 0x39, 0x10, 0}, 2, &D_808A0700};
static CollisionCheckInfoInit2 D_808A0758 = {1, 2, 0x19, 0x19, 0xFF};
static ? D_808A0764;                                /* unable to generate initializer */
static Color_RGBA8 D_808A0770 = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_808A0774 = {0x96, 0x96, 0x96, 0};

typedef struct EnBubble {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnBubble *, GlobalContext *);
    /* 0x0148 */ ColliderJntSph unk148;             /* inferred */
    /* 0x0168 */ ColliderJntSphElement unk168;      /* inferred */
    /* 0x01A8 */ char pad1A8[0x58];
    /* 0x0200 */ s16 unk200;                        /* inferred */
    /* 0x0202 */ s16 unk202;                        /* inferred */
    /* 0x0204 */ char pad204[0x4];                  /* maybe part of unk202[3]? */
    /* 0x0208 */ f32 unk208;                        /* inferred */
    /* 0x020C */ f32 unk20C;                        /* inferred */
    /* 0x0210 */ char pad210[0x8];                  /* maybe part of unk20C[3]? */
    /* 0x0218 */ f32 unk218;                        /* inferred */
    /* 0x021C */ f32 unk21C;                        /* inferred */
    /* 0x0220 */ char pad220[0x4];                  /* maybe part of unk21C[2]? */
    /* 0x0224 */ f32 unk224;                        /* inferred */
    /* 0x0228 */ f32 unk228;                        /* inferred */
    /* 0x022C */ f32 unk22C;                        /* inferred */
    /* 0x0230 */ f32 unk230;                        /* inferred */
    /* 0x0234 */ f32 unk234;                        /* inferred */
    /* 0x0238 */ f32 unk238;                        /* inferred */
    /* 0x023C */ char pad23C[0x1C];                 /* maybe part of unk238[8]? */
} EnBubble;                                         /* size 0x258 */

void func_8089F4E0(Actor *arg0, f32 arg1) {
    f32 sp24;
    f32 sp20;
    f32 temp_f0;
    f32 temp_f2;

    arg0->flags |= 1;
    Actor_SetScale(arg0, 1.0f);
    arg0->shape.yOffset = 16.0f;
    arg0->unk208 = 16.0f;
    arg0->unk218 = arg1;
    arg0->unk21C = arg1;
    arg0->unk20C = 0.08f;
    sp24 = Rand_ZeroOne();
    sp20 = Rand_ZeroOne();
    temp_f0 = Rand_ZeroOne();
    arg0->unk210 = 1.0f;
    arg0->unk214 = 1.0f;
    temp_f2 = (sp24 * sp24) + (sp20 * sp20) + (temp_f0 * temp_f0);
    arg0->unk1FC = (f32) (temp_f0 / temp_f2);
    arg0->unk1F4 = (f32) (sp24 / temp_f2);
    arg0->unk1F8 = (f32) (sp20 / temp_f2);
}

s16 func_8089F59C(EnBubble *arg0) {
    void *temp_v1;

    temp_v1 = arg0->unk148.elements;
    temp_v1->info.toucher.dmgFlags = 8;
    temp_v1->info.toucher.effect = 0;
    temp_v1->info.toucher.damage = 4;
    temp_v1->info.toucherFlags = 1;
    arg0->actor.velocity.y = 0.0f;
    return 6;
}

s32 func_8089F5D0(void) {
    func_8089F4E0((Actor *)0xBF800000);
    return 0xC;
}

void func_8089F5F4(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a2;
    void *temp_t9;

    temp_a2 = arg1;
    temp_t9 = temp_a2 + 0x20000;
    temp_a0 = temp_a2;
    arg1 = temp_a2;
    temp_t9->unk-787C(temp_a0, -(s32) arg0->unk164->unk5, temp_a2);
    func_800B8E1C(arg1, arg0, 6.0f, arg0->unk92, 6.0f);
}

s16 func_8089F660(EnBubble *arg0, GlobalContext *arg1) {
    Vec3f sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 *temp_s2;
    s16 temp_v0;
    s32 temp_s0;
    s16 phi_v1;
    s32 phi_s0;

    sp90.x = D_808A0764.unk0;
    sp90.y = D_808A0764.unk4;
    sp90.z = D_808A0764.unk8;
    Math_SmoothStepToF(arg0 + 0x218, 4.0f, 0.1f, 1000.0f, 0.0f);
    Math_SmoothStepToF(arg0 + 0x21C, 4.0f, 0.1f, 1000.0f, 0.0f);
    Math_SmoothStepToF(arg0 + 0x208, 54.0f, 0.1f, 1000.0f, 0.0f);
    Math_SmoothStepToF(arg0 + 0x20C, 0.2f, 0.1f, 1000.0f, 0.0f);
    temp_v0 = arg0->unk202;
    arg0->actor.shape.yOffset = (arg0->unk21C + 1.0f) * 16.0f;
    phi_s0 = 0;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk202 = temp_v0 - 1;
        phi_v1 = arg0->unk202;
    }
    if (phi_v1 != 0) {
        return -1;
    }
    sp78 = arg0->actor.world.pos.x;
    sp7C = arg0->actor.world.pos.y + arg0->actor.shape.yOffset;
    temp_s2 = &sp84;
    sp80 = arg0->actor.world.pos.z;
    do {
        sp84 = (Rand_ZeroOne() - 0.5f) * 7.0f;
        sp88 = Rand_ZeroOne() * 7.0f;
        sp8C = (Rand_ZeroOne() - 0.5f) * 7.0f;
        EffectSsDtBubble_SpawnCustomColor(arg1, (Vec3f *) &sp78, (Vec3f *) temp_s2, &sp90, &D_808A0770, &D_808A0774, (s16) Rand_S16Offset(0x64, 0x32), (s16) 0x19, (s16) 0);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x14);
    Item_DropCollectibleRandom(arg1, NULL, arg0 + 0x24, 0x50);
    arg0->actor.flags &= -2;
    return Rand_S16Offset(0x5A, 0x3C);
}

s32 func_8089F8BC(void *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk202;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk202 = (s16) (temp_v0 - 1);
        phi_v1 = arg0->unk202;
    }
    if (phi_v1 != 0) {
        return -1;
    }
    return func_8089F5D0();
}

s32 func_8089F908(EnBubble *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk202;
    arg0->unk218 += 0.083333336f;
    arg0->unk21C += 0.083333336f;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk202 = temp_v0 - 1;
        phi_v1 = arg0->unk202;
    }
    if (phi_v1 != 0) {
        return 0;
    }
    return 1;
}

void func_8089F95C(Vec3f *arg0, Vec3f *arg1, Vec3f *arg2) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;

    func_80179F64(arg0, arg1, arg2);
    temp_f2 = arg2->x;
    temp_f12 = arg2->y;
    temp_f14 = arg2->z;
    temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
    if (temp_f0 != 0.0f) {
        arg2->x = temp_f2 / temp_f0;
        arg2->y = temp_f12 / temp_f0;
        arg2->z = temp_f14 / temp_f0;
        return;
    }
    arg2->z = 0.0f;
    arg2->y = 0.0f;
    arg2->x = 0.0f;
}

void func_8089F9E4(f32 *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;

    temp_f2 = arg0->unk0;
    temp_f12 = arg0->unk4;
    temp_f14 = arg0->unk8;
    temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
    if (temp_f0 != 0.0f) {
        arg0->unk0 = temp_f2 / temp_f0;
        arg0->unk4 = (f32) (temp_f12 / temp_f0);
        arg0->unk8 = (f32) (temp_f14 / temp_f0);
        return;
    }
    arg0->unk8 = 0.0f;
    arg0->unk4 = 0.0f;
    arg0->unk0 = 0.0f;
}

void func_8089FA54(Actor *arg0, GlobalContext *arg1) {
    CollisionPoly *sp94;
    Vec3f sp84;
    f32 sp80;
    f32 sp7C;
    ?32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    u32 sp4C;
    u8 sp4B;
    ?32 *temp_a1;
    f32 *temp_a0;
    f32 *temp_a0_2;
    f32 *temp_a1_2;
    f32 *temp_a1_3;
    f32 *temp_a2;
    f32 temp_f0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    void *temp_v0;
    f32 phi_f0;
    f32 phi_f0_2;

    if ((arg0->unk164->unk56 & 2) != 0) {
        temp_v0 = arg0->unk150;
        temp_a0 = arg0 + 0x23C;
        temp_a0->unk0 = temp_v0->unk64;
        temp_a0->unk4 = (s32) temp_v0->unk68;
        temp_a0->unk8 = (s32) temp_v0->unk6C;
        func_8089F9E4(temp_a0);
        arg0->unk248 = (f32) (arg0->unk248 + (arg0->unk23C * 3.0f));
        arg0->unk24C = (f32) (arg0->unk24C + (arg0->unk240 * 3.0f));
        arg0->unk250 = (f32) (arg0->unk250 + (arg0->unk244 * 3.0f));
    }
    temp_f0 = arg0->minVelocityY;
    arg0->unk254 = (f32) (arg0->unk254 - 0.1f);
    if (arg0->unk254 < temp_f0) {
        arg0->unk254 = temp_f0;
    }
    temp_a0_2 = &sp54;
    sp54 = arg0->unk230 + arg0->unk248;
    sp58 = arg0->unk234 + arg0->unk24C + arg0->unk254;
    sp5C = arg0->unk238 + arg0->unk250;
    func_8089F9E4(temp_a0_2);
    temp_a1 = &sp78;
    temp_a2 = &sp6C;
    sp78 = arg0->world.pos.x;
    sp7C = arg0->world.pos.y + arg0->shape.yOffset;
    sp80 = arg0->world.pos.z;
    temp_a2->unk0 = temp_a1->unk0;
    temp_a2->unk4 = (s32) temp_a1->unk4;
    temp_a2->unk8 = (s32) temp_a1->unk8;
    sp6C += sp54 * 24.0f;
    sp70 += sp58 * 24.0f;
    sp74 += sp5C * 24.0f;
    if (func_800C55C4(arg1 + 0x830, (Vec3f *) temp_a1, (Vec3f *) temp_a2, &sp84, &sp94, 1U, 1U, 1U, 0U, &sp4C) != 0) {
        temp_a1_2 = &sp60;
        sp60 = (f32) sp94->normal.x * 0.00003051851f;
        sp64 = (f32) sp94->normal.y * 0.00003051851f;
        sp68 = (f32) sp94->normal.z * 0.00003051851f;
        func_8089F95C((Vec3f *) &sp54, (Vec3f *) temp_a1_2, (Vec3f *) &sp54);
        arg0->unk224 = (f32) sp54.unk0;
        temp_v0_2 = arg0->unk220 + 1;
        arg0->unk228 = (f32) sp54.unk4;
        arg0->unk220 = temp_v0_2;
        arg0->unk22C = (f32) sp54.unk8;
        sp4B = temp_v0_2;
        if ((s32) (s16) (s32) (Rand_ZeroOne() * 10.0f) < (s32) temp_v0_2) {
            arg0->unk220 = 0U;
        }
        if (arg0->unk220 == 0) {
            phi_f0 = 3.6000001f;
        } else {
            phi_f0 = 3.0f;
        }
        arg0->unk250 = 0.0f;
        arg0->unk230 = (f32) (arg0->unk224 * phi_f0);
        arg0->unk24C = 0.0f;
        arg0->unk248 = 0.0f;
        arg0->unk234 = (f32) (arg0->unk228 * phi_f0);
        arg0->unk254 = 0.0f;
        arg0->unk238 = (f32) (arg0->unk22C * phi_f0);
        Audio_PlayActorSound2(arg0, 0x3948U);
        arg0->unk208 = 128.0f;
        arg0->unk20C = 0.48f;
    } else if ((arg0->bgCheckFlags & 0x20) != 0) {
        temp_a1_3 = &sp60;
        if (sp58 < 0.0f) {
            sp68 = 0.0f;
            sp60 = 0.0f;
            sp64 = 1.0f;
            func_8089F95C((Vec3f *) &sp54, (Vec3f *) temp_a1_3, (Vec3f *) &sp54);
            arg0->unk224 = (f32) sp54.unk0;
            temp_v0_3 = arg0->unk220 + 1;
            arg0->unk228 = (f32) sp54.unk4;
            arg0->unk220 = temp_v0_3;
            arg0->unk22C = (f32) sp54.unk8;
            sp4B = temp_v0_3;
            if ((s32) (s16) (s32) (Rand_ZeroOne() * 10.0f) < (s32) temp_v0_3) {
                arg0->unk220 = 0U;
            }
            if (arg0->unk220 == 0) {
                phi_f0_2 = 3.6000001f;
            } else {
                phi_f0_2 = 3.0f;
            }
            arg0->unk250 = 0.0f;
            arg0->unk24C = 0.0f;
            arg0->unk248 = 0.0f;
            arg0->unk254 = 0.0f;
            arg0->unk230 = (f32) (arg0->unk224 * phi_f0_2);
            arg0->unk234 = (f32) (arg0->unk228 * phi_f0_2);
            arg0->unk238 = (f32) (arg0->unk22C * phi_f0_2);
            Audio_PlayActorSound2(arg0, 0x3948U);
            arg0->unk208 = 128.0f;
            arg0->unk20C = 0.48f;
        }
    }
    arg0->velocity.x = arg0->unk230 + arg0->unk248;
    arg0->velocity.y = arg0->unk234 + arg0->unk24C + arg0->unk254;
    arg0->velocity.z = arg0->unk238 + arg0->unk250;
    Math_ApproachF(arg0 + 0x248, 0.0f, 0.3f, 0.1f);
    Math_ApproachF(arg0 + 0x24C, 0.0f, 0.3f, 0.1f);
    Math_ApproachF(arg0 + 0x250, 0.0f, 0.3f, 0.1f);
}

s32 func_8089FF30(void *arg0) {
    u8 temp_v0;
    void *temp_v1;

    temp_v0 = arg0->unk159;
    if ((temp_v0 & 2) == 0) {
        return 0;
    }
    arg0->unk159 = (u8) (temp_v0 & 0xFFFD);
    if ((arg0->unk164->unk56 & 2) != 0) {
        temp_v1 = arg0->unk150;
        arg0->unk1E8 = (f32) (temp_v1->unk64 / 10.0f);
        arg0->unk1EC = (f32) (temp_v1->unk68 / 10.0f);
        arg0->unk208 = 128.0f;
        arg0->unk1F0 = (f32) (temp_v1->unk6C / 10.0f);
        arg0->unk20C = 0.48f;
        return 0;
    }
    arg0->unk200 = 8;
    return 1;
}

s32 func_8089FFCC(EnBubble *arg0) {
    s16 temp_v0;
    u8 temp_v0_2;
    s16 phi_v1;

    temp_v0 = arg0->unk200;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk200 = temp_v0 - 1;
        phi_v1 = arg0->unk200;
    }
    if ((phi_v1 != 0) || (func_808A0350 == arg0->actionFunc)) {
        return 0;
    }
    temp_v0_2 = arg0->unk148.base.ocFlags2;
    if ((temp_v0_2 & 1) != 0) {
        arg0->unk148.base.ocFlags2 = temp_v0_2 & 0xFFFE;
        func_8089F5F4();
        arg0->unk200 = 8;
        return 1;
    }
    return func_8089FF30();
}

void func_808A005C(EnBubble *arg0) {
    void *sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    Vec3f sp1C;
    f32 *temp_a0;
    void *temp_t8;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = arg0->unk148.elements;
    temp_a0 = &sp28;
    temp_v0_2 = temp_v0 + 0x28;
    sp28 = (f32) temp_v0->dim.modelSphere.center.x;
    sp2C = (f32) temp_v0_2->unk2;
    arg0 = arg0;
    sp34 = temp_v0_2;
    sp30 = (f32) temp_v0_2->unk4;
    SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, &sp1C);
    temp_v0_2->unk8 = (s16) (s32) sp1C.x;
    temp_v0_2->unkA = (s16) (s32) sp1C.y;
    temp_v0_2->unkC = (s16) (s32) sp1C.z;
    temp_v0_2->unkE = (s16) (s32) ((f32) temp_v0_2->unk6 * (1.0f + arg0->unk218));
    temp_t8 = arg0->unk148.elements;
    temp_t8->unk68 = (s32) temp_v0_2->unk0;
    temp_t8->unk6C = (s32) temp_v0_2->unk4;
    temp_t8->unk70 = (s32) temp_v0_2->unk8;
    temp_t8->unk74 = (s32) temp_v0_2->unkC;
    temp_t8->unk78 = (s32) temp_v0_2->unk10;
    temp_t8->unk7C = (s32) temp_v0_2->unk14;
}

void EnBubble_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnBubble *this = (EnBubble *) thisx;
    ColliderJntSph *sp28;
    ColliderJntSph *temp_a1;

    ActorShape_Init(&this->actor.shape, 16.0f, func_800B3FC0, 0.2f);
    temp_a1 = &this->unk148;
    sp28 = temp_a1;
    Collider_InitJntSph(globalCtx, temp_a1);
    Collider_SetJntSph(globalCtx, temp_a1, &this->actor, &D_808A0748, &this->unk168);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(9), &D_808A0758);
    this->actor.hintId = 0x16;
    this->unk224 = Rand_ZeroOne();
    this->unk228 = Rand_ZeroOne();
    this->unk22C = Rand_ZeroOne();
    func_8089F9E4(&this->unk224);
    this->unk230 = this->unk224 * 3.0f;
    this->unk234 = this->unk228 * 3.0f;
    this->unk238 = this->unk22C * 3.0f;
    func_8089F4E0(&this->actor, 0.0f);
    this->actionFunc = func_808A029C;
}

void EnBubble_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBubble *this = (EnBubble *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk148);
}

void func_808A029C(EnBubble *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp24;
    ColliderJntSph *sp20;
    ColliderJntSph *temp_a2;
    CollisionCheckContext *temp_a1;

    if (func_8089FFCC(this, globalCtx) != 0) {
        this->unk202 = func_8089F59C(this);
        this->actionFunc = func_808A0350;
        return;
    }
    func_8089FA54(&this->actor, globalCtx);
    temp_a1 = &globalCtx->colChkCtx;
    temp_a2 = &this->unk148;
    this->actor.shape.yOffset = (this->unk21C + 1.0f) * 16.0f;
    sp20 = temp_a2;
    sp24 = temp_a1;
    CollisionCheck_SetAC(globalCtx, temp_a1, &temp_a2->base);
    CollisionCheck_SetOC(globalCtx, temp_a1, &temp_a2->base);
}

void func_808A0350(EnBubble *this, GlobalContext *globalCtx) {
    if (func_8089F660(this, globalCtx) >= 0) {
        Audio_PlaySoundAtPosition(globalCtx, &this->actor.world.pos, 0x3C, 0x3949U);
        Actor_MarkForDeath(&this->actor);
    }
}

void func_808A03A0(void *arg0, ? arg1) {
    s32 temp_v0;

    temp_v0 = func_8089F8BC();
    if (temp_v0 >= 0) {
        arg0->unkC8 = func_800B3FC0;
        arg0->unk202 = (s16) temp_v0;
        arg0->unk144 = func_808A03E8;
    }
}

void func_808A03E8(EnBubble *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp1C;
    ColliderJntSph *sp18;
    ColliderJntSph *temp_a2;
    CollisionCheckContext *temp_a1;
    EnBubble *temp_a0;

    temp_a0 = this;
    this = this;
    if (func_8089F908(temp_a0) != 0) {
        this->actionFunc = func_808A029C;
    }
    temp_a2 = &this->unk148;
    temp_a1 = &globalCtx->colChkCtx;
    sp1C = temp_a1;
    sp18 = temp_a2;
    CollisionCheck_SetAC(globalCtx, temp_a1, &temp_a2->base);
    CollisionCheck_SetOC(globalCtx, temp_a1, &temp_a2->base);
}

void EnBubble_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnBubble *this = (EnBubble *) thisx;
    Actor_ApplyMovement(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 16.0f, 16.0f, 0.0f, 7U);
    this->actionFunc(this, globalCtx);
    Actor_SetHeight(&this->actor, this->actor.shape.yOffset);
}

void EnBubble_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnBubble *this = (EnBubble *) thisx;
    Gfx *sp44;
    void (*sp38)(void *, ?);
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a3;
    GraphicsContext *temp_s2;
    f32 temp_f18;
    f32 temp_f18_2;
    u32 temp_t7;
    u32 temp_t8;
    f32 phi_f18;
    f32 phi_f18_2;

    temp_a3 = globalCtx->state.gfxCtx;
    sp38 = func_808A03A0;
    temp_s2 = temp_a3;
    if (func_808A03A0 != this->actionFunc) {
        func_8012C2DC(temp_a3);
        Math_SmoothStepToF(&this->unk208, 16.0f, 0.2f, 1000.0f, 0.0f);
        Math_SmoothStepToF(&this->unk20C, 0.08f, 0.2f, 1000.0f, 0.0f);
        SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
        Matrix_Scale(this->unk218 + 1.0f, this->unk21C + 1.0f, 1.0f, 1);
        temp_t7 = globalCtx->state.frames;
        temp_f18 = (f32) temp_t7;
        phi_f18 = temp_f18;
        if ((s32) temp_t7 < 0) {
            phi_f18 = temp_f18 + 4294967296.0f;
        }
        SysMatrix_InsertZRotation_f(phi_f18 * 0.017453292f * this->unk208, 1);
        Matrix_Scale(this->unk20C + 1.0f, 1.0f, 1.0f, 1);
        temp_t8 = globalCtx->state.frames;
        temp_f18_2 = (f32) temp_t8;
        phi_f18_2 = temp_f18_2;
        if ((s32) temp_t8 < 0) {
            phi_f18_2 = temp_f18_2 + 4294967296.0f;
        }
        SysMatrix_InsertZRotation_f(-phi_f18_2 * 0.017453292f * this->unk208, 1);
        temp_v0 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp44 = temp_v0;
        sp44->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = (u32) &D_06001000;
        temp_v0_2->words.w0 = 0xDE000000;
    }
    if (sp38 != this->actionFunc) {
        this->actor.shape.shadowScale = (this->unk218 + 1.0f) * 0.2f;
        func_808A005C(this);
    }
}

